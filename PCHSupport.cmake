# - Try to find precompiled headers support for GCC 3.4 and 4.x (and MSVC)
# Once done this will define:
#
# Variable:
#   PCHSupport_FOUND
#
#   ADD_PRECOMPILED_HEADER  _targetName _inputh _inputcpp
#   ADD_PRECOMPILED_HEADER_TO_TARGET _targetName _input _pch_output_to_use
#   ADD_NATIVE_PRECOMPILED_HEADER _targetName _inputh _inputcpp
cmake_policy(PUSH)
cmake_policy(SET CMP0007 OLD)

SET(PCHSupport_FOUND FALSE)

IF(WIN32)
	SET(PCHSupport_FOUND TRUE) # for experimental msvc support
	SET(_PCH_include_prefix "/I")
ELSE()

	EXEC_PROGRAM(
		${CMAKE_CXX_COMPILER}
		ARGS ${CMAKE_CXX_COMPILER_ARG1} -dumpversion
		OUTPUT_VARIABLE gcc_compiler_version)

	IF(gcc_compiler_version MATCHES "4\\.[0-9]\\.[0-9]")
		SET(PCHSupport_FOUND TRUE)
	ELSE(gcc_compiler_version MATCHES "4\\.[0-9]\\.[0-9]")
		IF(gcc_compiler_version MATCHES "3\\.4\\.[0-9]")
			SET(PCHSupport_FOUND TRUE)
		ENDIF(gcc_compiler_version MATCHES "3\\.4\\.[0-9]")
	ENDIF(gcc_compiler_version MATCHES "4\\.[0-9]\\.[0-9]")

	SET(_PCH_include_prefix "-I")
ENDIF()

MACRO(_PCH_GET_COMPILE_FLAGS _out_compile_flags)
	STRING(TOUPPER "CMAKE_CXX_FLAGS_${CMAKE_BUILD_TYPE}" _flags_var_name)
	SET(${_out_compile_flags} ${${_flags_var_name}} )

	IF(NOT MSVC)
		GET_TARGET_PROPERTY(_targetType ${_PCH_current_target} TYPE)
		IF(${_targetType} STREQUAL SHARED_LIBRARY OR ${_targetType} STREQUAL MODULE_LIBRARY)
			LIST(APPEND ${_out_compile_flags} "-fPIC")
		ENDIF(${_targetType} STREQUAL SHARED_LIBRARY OR ${_targetType} STREQUAL MODULE_LIBRARY)
	ENDIF()

	GET_DIRECTORY_PROPERTY(DIRINC INCLUDE_DIRECTORIES )
	FOREACH(item ${DIRINC})
		LIST(APPEND ${_out_compile_flags} " ${_PCH_include_prefix}\"${item}\"")
	ENDFOREACH(item)

	# Required for CMake 2.6
	SET(GLOBAL_DEFINITIONS "")
	GET_DIRECTORY_PROPERTY(DEFINITIONS COMPILE_DEFINITIONS)
	FOREACH(item ${DEFINITIONS})
		IF(MSVC)
			LIST(APPEND GLOBAL_DEFINITIONS /D${item})
		ELSE()
			LIST(APPEND GLOBAL_DEFINITIONS -D${item})
		ENDIF()
	ENDFOREACH(item)      
	STRING(TOUPPER "COMPILE_DEFINITIONS_${CMAKE_BUILD_TYPE}" _compile_definitions_build_type)   
	GET_DIRECTORY_PROPERTY(DEFINITIONS ${_compile_definitions_build_type})     
	FOREACH(item ${DEFINITIONS})
		IF(MSVC)
			LIST(APPEND GLOBAL_DEFINITIONS /D${item})
		ELSE()
			LIST(APPEND GLOBAL_DEFINITIONS -D${item})
		ENDIF()	
	ENDFOREACH(item)

	LIST(APPEND ${_out_compile_flags} ${GLOBAL_DEFINITIONS})
	LIST(APPEND ${_out_compile_flags} ${CMAKE_CXX_FLAGS})

	if(MSVC)
		LIST(APPEND ${_out_compile_flags} "/Gd")
	endif()

	if (APPLE)
		if (CMAKE_OSX_DEPLOYMENT_TARGET)
			LIST(APPEND ${_out_compile_flags} "-mmacosx-version-min=${CMAKE_OSX_DEPLOYMENT_TARGET}")
		endif()
		if(CMAKE_OSX_SYSROOT)
			LIST(APPEND ${_out_compile_flags} "-isysroot ${CMAKE_OSX_SYSROOT}")
		endif()
	endif()

	# Format definitions and remove duplicates
	SEPARATE_ARGUMENTS(${_out_compile_flags})
	LIST(REMOVE_DUPLICATES ${_out_compile_flags})
ENDMACRO(_PCH_GET_COMPILE_FLAGS)

MACRO(_PCH_GET_PDB_FILENAME out_filename _target)
	# determine output directory based on target type
	GET_TARGET_PROPERTY(_targetType ${_target} TYPE)
	IF(${_targetType} STREQUAL EXECUTABLE)
		SET(_targetOutput ${EXECUTABLE_OUTPUT_PATH})
	ELSEIF(${_targetType} STREQUAL STATIC_LIBRARY)
		SET(_targetOutput ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})
	ELSE(${_targetType} STREQUAL SHARED_LIBRARY)
		SET(_targetOutput ${LIBRARY_OUTPUT_PATH})
	ENDIF()
	SET(_targetOutput ${_targetOutput}/${CMAKE_BUILD_TYPE})
	
	# determine target postfix
	STRING(TOUPPER "${CMAKE_BUILD_TYPE}_POSTFIX" _postfix_var_name)
	GET_TARGET_PROPERTY(_targetPostfix ${_target} ${_postfix_var_name})
	IF(${_targetPostfix} MATCHES NOTFOUND)
		SET(_targetPostfix "")
	ENDIF(${_targetPostfix} MATCHES NOTFOUND)

	SET(${out_filename} "${_targetOutput}/${_target}${_targetPostfix}.pdb")
ENDMACRO(_PCH_GET_PDB_FILENAME)

MACRO(_PCH_GET_COMPILE_COMMAND out_command _input _inputcpp _output)
	IF(CMAKE_CXX_COMPILER_ARG1)
		# remove leading space in compiler argument
		STRING(REGEX REPLACE "^ +" "" pchsupport_compiler_cxx_arg1 ${CMAKE_CXX_COMPILER_ARG1})
	ELSE(CMAKE_CXX_COMPILER_ARG1)
		SET(pchsupport_compiler_cxx_arg1 "")
	ENDIF(CMAKE_CXX_COMPILER_ARG1)

	IF(MSVC)
				_PCH_GET_PDB_FILENAME(PDB_FILE ${_PCH_current_target})
		SET(${out_command}
			${CMAKE_CXX_COMPILER} ${pchsupport_compiler_cxx_arg1} ${_compile_FLAGS}	/Yc  /Fp\"${_output}\" ${_inputcpp} /c /Fd\"${PDB_FILE}\"
			)
	ELSE()
		SET(${out_command}
			${CMAKE_CXX_COMPILER} ${pchsupport_compiler_cxx_arg1} ${_compile_FLAGS}	-x c++-header -o ${_output} -c ${_input}
			)
	ENDIF()
ENDMACRO(_PCH_GET_COMPILE_COMMAND )

MACRO(GET_PRECOMPILED_HEADER_OUTPUT _targetName _input _output)
	IF(MSVC)
		GET_FILENAME_COMPONENT(_name ${_input} NAME_WE)
		SET(_output "${CMAKE_CURRENT_BINARY_DIR}/${_name}.pch")
	ELSE(MSVC)
		GET_FILENAME_COMPONENT(_name ${_input} NAME)
		SET(_output "${CMAKE_CURRENT_BINARY_DIR}/${_name}.gch")
	ENDIF(MSVC)
ENDMACRO(GET_PRECOMPILED_HEADER_OUTPUT _targetName _input)

MACRO(ADD_PRECOMPILED_HEADER_TO_TARGET _targetName _input _pch_output_to_use )
	GET_TARGET_PROPERTY(oldProps ${_targetName} COMPILE_FLAGS)
	IF(${oldProps} MATCHES NOTFOUND)
		SET(oldProps "")
	ENDIF(${oldProps} MATCHES NOTFOUND)

	IF(MSVC)
		SET(_target_cflags "${oldProps} /Yu\"${_input}\" /FI\"${_input}\" /Fp\"${_pch_output_to_use}\"")
	ELSE()
		# to do: test whether compiler flags match between target  _targetName
		# and _pch_output_to_use
		FILE(TO_NATIVE_PATH ${_pch_output_to_use} _native_pch_path)

		# for use with distcc and gcc >4.0.1 if preprocessed files are accessible
		# on all remote machines set
		# PCH_ADDITIONAL_COMPILER_FLAGS to -fpch-preprocess  
		get_filename_component(_input_stripped_from_path ${_input} NAME)
		SET(_target_cflags "${oldProps} ${PCH_ADDITIONAL_COMPILER_FLAGS}-include ${_input_stripped_from_path} -Winvalid-pch")
	ENDIF()

	if (_target_cflags)
		SET_TARGET_PROPERTIES(${_targetName} PROPERTIES COMPILE_FLAGS ${_target_cflags})
	endif()
	IF(oldProps)
		SET_TARGET_PROPERTIES(${_targetName}_pch_dephelp PROPERTIES COMPILE_FLAGS ${oldProps})
	ENDIF(oldProps)

	ADD_CUSTOM_TARGET(pch_Generate_${_targetName} DEPENDS ${_pch_output_to_use})

	ADD_DEPENDENCIES(${_targetName} pch_Generate_${_targetName})
ENDMACRO(ADD_PRECOMPILED_HEADER_TO_TARGET)

MACRO(ADD_PRECOMPILED_HEADER _targetName _inputh _inputcpp)

	SET(_PCH_current_target ${_targetName})

	IF(NOT CMAKE_BUILD_TYPE)
		MESSAGE(FATAL_ERROR
			"This is the ADD_PRECOMPILED_HEADER macro. "
			"You must set CMAKE_BUILD_TYPE!"
		)
	ENDIF(NOT CMAKE_BUILD_TYPE)

	GET_PRECOMPILED_HEADER_OUTPUT( ${_targetName} ${_inputh} _output)

	GET_TARGET_PROPERTY(_targetType ${_PCH_current_target} TYPE)

	# always build static library because it doesn't need linking
	ADD_LIBRARY(${_targetName}_pch_dephelp STATIC ${_inputcpp})

	_PCH_GET_COMPILE_FLAGS(_compile_FLAGS)

	SET_SOURCE_FILES_PROPERTIES(${_inputh} PROPERTIES GENERATED 1)

	_PCH_GET_COMPILE_COMMAND(_command  ${_inputh} ${_inputcpp} ${_output})

	ADD_CUSTOM_COMMAND(
		OUTPUT ${_output}
		COMMAND ${_command}
		DEPENDS ${_inputh} ${_targetName}_pch_dephelp
	)

	ADD_PRECOMPILED_HEADER_TO_TARGET(${_targetName} ${_inputh} ${_output})
	IF(MSVC)
		GET_FILENAME_COMPONENT(_name ${_inputcpp} NAME_WE)
		SET(_output_obj "${CMAKE_CURRENT_BINARY_DIR}/${_name}.obj")
		SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} ${_output_obj}")
	endif()
ENDMACRO(ADD_PRECOMPILED_HEADER)

MACRO(ADD_NATIVE_PRECOMPILED_HEADER _targetName _inputh _inputcpp)
	IF(CMAKE_GENERATOR MATCHES Visual*)
		# Auto include the precompile (useful for moc processing, since the use of
		# precompiled is specified at the target level
		# and I don't want to specifiy /F- for each moc/res/ui generated files (using Qt)

		GET_TARGET_PROPERTY(oldProps ${_targetName} COMPILE_FLAGS)
		IF(${oldProps} MATCHES NOTFOUND)
			SET(oldProps "")
		ENDIF(${oldProps} MATCHES NOTFOUND)

		SET(newProperties "${oldProps} /Yu\"${_inputh}\" /FI\"${_inputh}\"")
		SET_TARGET_PROPERTIES(${_targetName} PROPERTIES COMPILE_FLAGS "${newProperties}")

		#also inlude ${oldProps} to have the same compile options
		SET_SOURCE_FILES_PROPERTIES(${_inputcpp} PROPERTIES COMPILE_FLAGS "${oldProps} /Yc\"${_inputh}\"")
	ELSE(CMAKE_GENERATOR MATCHES Visual*)
		IF(CMAKE_GENERATOR MATCHES Xcode)
			# For Xcode, cmake needs my patch to process
			# GCC_PREFIX_HEADER and GCC_PRECOMPILE_PREFIX_HEADER as target properties

			GET_TARGET_PROPERTY(oldProps ${_targetName} COMPILE_FLAGS)
			IF(${oldProps} MATCHES NOTFOUND)
				SET(oldProps "")
			ENDIF(${oldProps} MATCHES NOTFOUND)

			# When buiding out of the tree, precompiled may not be located
			# Use full path instead.
			GET_FILENAME_COMPONENT(fullPath ${_inputh} ABSOLUTE)

			SET_TARGET_PROPERTIES(${_targetName} PROPERTIES XCODE_ATTRIBUTE_GCC_PREFIX_HEADER "${fullPath}")
			SET_TARGET_PROPERTIES(${_targetName} PROPERTIES XCODE_ATTRIBUTE_GCC_PRECOMPILE_PREFIX_HEADER "YES")
		ELSE(CMAKE_GENERATOR MATCHES Xcode)
			#Fallback to the "old" precompiled suppport
			ADD_PRECOMPILED_HEADER(${_targetName} ${_inputh} ${_inputcpp})
		ENDIF(CMAKE_GENERATOR MATCHES Xcode)
	ENDIF(CMAKE_GENERATOR MATCHES Visual*)

ENDMACRO(ADD_NATIVE_PRECOMPILED_HEADER)
cmake_policy(POP)