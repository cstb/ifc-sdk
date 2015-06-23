cmake_minimum_required(VERSION 2.8)

#cmake_policy(SET CMP0043 OLD)
#cmake_policy(SET CMP0026 OLD)
#cmake_policy(SET CMP0048 OLD)


PROJECT(ifc2x3_sdk)


IF(UNIX AND NOT WIN32 AND NOT APPLE)
  IF(CMAKE_SIZEOF_VOID_P MATCHES "8")
      SET(LIB_POSTFIX "64")
      MARK_AS_ADVANCED(LIB_POSTFIX)
  ENDIF(CMAKE_SIZEOF_VOID_P MATCHES "8")
ENDIF(UNIX AND NOT WIN32 AND NOT APPLE)
IF(NOT DEFINED LIB_POSTFIX)
    SET(LIB_POSTFIX "")
ENDIF(NOT DEFINED LIB_POSTFIX)

option(STEP_ONLY "Build and install only Step" OFF)

# The CMake version number.
SET(ifc2x3_sdk_VERSION_MAJOR 1 CACHE STRING "Version" FORCE)
SET(ifc2x3_sdk_VERSION_MINOR 0 CACHE STRING "Version" FORCE)
SET(ifc2x3_sdk_VERSION_PATCH 16 CACHE STRING "Version" FORCE)
SET(ifc2x3_sdk_VERSION "${ifc2x3_sdk_VERSION_MAJOR}.${ifc2x3_sdk_VERSION_MINOR}" CACHE STRING "Version" FORCE)
SET(ifc2x3_sdk_VERSION_FULL "${ifc2x3_sdk_VERSION}.${ifc2x3_sdk_VERSION_PATCH}" CACHE STRING "Version" FORCE)

SET(ifc2x3_sdk_SOVERSION 1 CACHE STRING "Version" FORCE)


if(NOT CMAKEMODULES_PATH)
    if ($ENV{CMAKEMODULES_PATH})
        file(TO_CMAKE_PATH $ENV{CMAKEMODULES_PATH} CMAKEMODULES_PATH)
    endif()
endif()

if(NOT CMAKEMODULES_PATH)
    if(WIN32)
        set(CMAKEMODULES_PATH C:/SDK/CMakeModules)
    else()
        if(APPLE)
            set(CMAKEMODULES_PATH /opt/local/share/CMakeModules)
        else()
            set(CMAKEMODULES_PATH /usr/local/share/CMakeModules)
        endif()
    endif()
    message(STATUS "CMAKEMODULES_PATH=${CMAKEMODULES_PATH}")
endif()

SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKEMODULES_PATH})
SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_LIST_DIR}/CMake )

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
IF(WIN32)
    SET(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
ELSE(WIN32)
    SET(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib${LIB_POSTFIX})
ENDIF(WIN32)

SET(CMAKE_DEBUG_POSTFIX "_debug")

OPTION(STATIC_LIBRARIES "Enables building of STATIC libraries need -DIFC2X3_STATIC to link to" OFF)

if(STATIC_LIBRARIES)
  set(SHARED_OR_STATIC STATIC)
else()
  set(SHARED_OR_STATIC SHARED)
endif()

if(NOT WIN32)
    if(NOT CMAKE_BUILD_TYPE)
        set(CMAKE_BUILD_TYPE "Release")
    endif()
    message(STATUS "Build type : ${CMAKE_BUILD_TYPE}")
endif()

if (CMAKE_VERSION VERSION_GREATER 2.8.12)
  SET_PROPERTY(DIRECTORY ${CMAKE_CURRENT_LIST_DIR} APPEND 
                PROPERTY 
                COMPILE_DEFINITIONS $<$<CONFIG:Debug>:LOG_INFO_ENABLE>
                                    $<$<CONFIG:Release>:LOG_WARNING_ENABLE>)
else()
  SET_PROPERTY(DIRECTORY ${CMAKE_CURRENT_LIST_DIR} APPEND PROPERTY COMPILE_DEFINITIONS_DEBUG "LOG_INFO_ENABLE")
  SET_PROPERTY(DIRECTORY ${CMAKE_CURRENT_LIST_DIR} APPEND PROPERTY COMPILE_DEFINITIONS_RELEASE "LOG_WARNING_ENABLE")
endif()

IF(MSVC)
  add_definitions(-D_UNICODE)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj /Zm377")

  if(MSVC_IDE)
     add_definitions(-DMSVC_IDE)
  endif()
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
  # Use the highest warning level
  set(CMAKE_CXX_WARNING_LEVEL 4 CACHE TYPE STRING FORCE)

  if(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
     STRING(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
  else(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
     SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
  endif(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")

  if(CMAKE_C_FLAGS MATCHES "/W[0-4]")
     STRING(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
  else(CMAKE_C_FLAGS MATCHES "/W[0-4]")
     SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /W4")
  endif(CMAKE_C_FLAGS MATCHES "/W[0-4]")

  # add here warnings which should produce an error /weXXXX
  SET(MSVC_W_ERROR   "/we4101") #  /we4189
  # add here warnings which should be disabled /wdXXXX
  SET(MSVC_W_DISABLE "/wd4800 /wd4996 /wd4311 /wd4312 /wd4505 /wd4267 /wd4512 /wd4245 /wd4127 /wd4251")

  set(CMAKE_CXX_FLAGS_DEBUG       "${CMAKE_CXX_FLAGS_DEBUG}         ${MSVC_W_ERROR} ${MSVC_W_DISABLE}")
  set(CMAKE_CXX_FLAGS_RELEASE     "${CMAKE_CXX_FLAGS_RELEASE}       ${MSVC_W_ERROR} ${MSVC_W_DISABLE}")
  set(CMAKE_CXX_FLAGS_MINSIZEREL  "${CMAKE_CXX_FLAGS_MINSIZEREL}    ${MSVC_W_ERROR} ${MSVC_W_DISABLE}")

ENDIF(MSVC)

if(APPLE)
    set(CMAKE_OSX_ARCHITECTURES "x86_64" CACHE STRING "Build architectures for OSX" FORCE)
    if( NOT (${CMAKE_CXX_FLAGS} MATCHES "10.7") )
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mmacosx-version-min=10.7" CACHE STRING "Flags used by the compiler during all build types." FORCE)
    endif()

    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ferror-limit=300 -Wno-overloaded-virtual -Wno-conversion")
    set(WARNING_CFLAGS "")

    foreach(flag
#                    -Wall
#                    -Wbad-function-cast
#                    -Wcast-align
#                    -Wconversion
#                    -Wdeclaration-after-statement
#                    -Wdeprecated-implementations
#                    -Wextra
#                    -Wfloat-equal
#                    -Wformat=2
#                    -Wformat-nonliteral
#                    -Wfour-char-constants
#                    -Wimplicit-atomic-properties
#                    -Wmissing-braces
#                    -Wmissing-declarations
#                    -Wmissing-field-initializers
#                    -Wmissing-format-attribute
                    -Wmissing-noreturn
#                    -Wmissing-prototypes
#                    -Wnested-externs
#                    -Wnewline-eof
#                    -Wold-style-definition
#                    -Woverlength-strings
#                    -Wparentheses
#                    -Wpointer-arith
#                    -Wredundant-decls
                    -Wreturn-type
#                    -Wsequence-point
#                    -Wshadow
#                    -Wshorten-64-to-32
                    -Wsign-compare
                    -Wsign-conversion
                    -Wstrict-prototypes
                    -Wstrict-selector-match
                    -Wswitch
#                    -Wswitch-default
#                    -Wswitch-enum
                    -Wundeclared-selector
                    -Wuninitialized
                    -Wunknown-pragmas
#                    -Wunreachable-code
                    -Wunused-function
                    -Wunused-label
#                    -Wunused-parameter
                    -Wunused-value
                    -Wunused-variable
                    -Wwrite-strings )
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${flag}")
    endforeach(flag)
endif()

include(${CMAKE_CURRENT_LIST_DIR}/PCHSupport.cmake)
if(PCHSupport_FOUND)
    option(ENABLE_PRECOMPILED_HEADER "Enable use of precompiled header to improve compile time" ON)
endif()

include_directories(BEFORE ${CMAKE_CURRENT_LIST_DIR}/include)

if(WIN32)
    macro(install_pdb target config)
        string(TOUPPER ${config} CONFIG)
        get_property(TARGET_NAME_${CONFIG} TARGET ${target} PROPERTY LOCATION_${CONFIG})
        string(REGEX REPLACE "dll$" "pdb" TARGET_${CONFIG}_PDB_FILE ${TARGET_NAME_${CONFIG}})
        install(FILES ${TARGET_${CONFIG}_PDB_FILE} DESTINATION bin CONFIGURATIONS ${config})
    endmacro(install_pdb)
endif()

add_subdirectory(src)
add_subdirectory(doc EXCLUDE_FROM_ALL)

include_directories(${Step_BINARY_DIR})
include_directories(${ifc2x3_BINARY_DIR})

if(NOT STEP_ONLY)
  option(ENABLE_EXAMPLES "Enable examples compilation" ON)

  if(ENABLE_EXAMPLES)
    add_subdirectory(examples)
  endif()

  if(IS_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/tests)
    option(ENABLE_TESTING "Enable tests compilation" ON)
    if(ENABLE_TESTING)
      ENABLE_TESTING()
      if(UNIX)
         set(CMAKE_C_FLAGS_PROFILING "-g -O0 -Wall -W -Wshadow -Wunused-variable -Wunused-parameter -Wunused-function -Wunused -Wno-system-headers -Wwrite-strings -fprofile-arcs -ftest-coverage" CACHE STRING "Profiling Compiler Flags")
         set(CMAKE_CXX_FLAGS_PROFILING "-g -O0 -Wall -W -Wshadow -Wunused-variable -Wunused-parameter -Wunused-function -Wunused -Wno-system-headers -Wwrite-strings -fprofile-arcs -ftest-coverage" CACHE STRING "Profiling Compiler Flags")
         set(CMAKE_SHARED_LINKER_FLAGS_PROFILING " -fprofile-arcs -ftest-coverage" CACHE STRING "Profiling Linker Flags")
         set(CMAKE_MODULE_LINKER_FLAGS_PROFILING " -fprofile-arcs -ftest-coverage" CACHE STRING "Profiling Linker Flags")
         set(CMAKE_EXEC_LINKER_FLAGS_PROFILING " -fprofile-arcs -ftest-coverage" CACHE STRING "Profiling Linker Flags")
      endif()

      add_subdirectory(tests)
    endif()
  endif()

endif()

#Create a package

INCLUDE(InstallRequiredSystemLibraries)
# If the cmake version includes cpack, use it
IF(EXISTS "${CMAKE_ROOT}/Modules/CPack.cmake")
  SET(CPACK_PACKAGE_NAME "ifc2x3")
  SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "IFC 2x3 SDK")
  SET(CPACK_PACKAGE_VENDOR "CSTB")
  SET(CPACK_PACKAGE_CONTACT "Mathieu Marache <mathieu.marache@cstb.fr>")
  SET(CPACK_PACKAGE_DESCRIPTION_FILE "${CMAKE_CURRENT_LIST_DIR}/Readme.md")
  SET(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_LIST_DIR}/Licence.txt")
  SET(CPACK_PACKAGE_VERSION_MAJOR "${ifc2x3_sdk_VERSION_MAJOR}")
  SET(CPACK_PACKAGE_VERSION_MINOR "${ifc2x3_sdk_VERSION_MINOR}")
  SET(CPACK_PACKAGE_VERSION_PATCH "${ifc2x3_sdk_VERSION_PATCH}")
  IF(NOT DEFINED CPACK_SYSTEM_NAME)
    SET(CPACK_SYSTEM_NAME ${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_PROCESSOR})
  ENDIF(NOT DEFINED CPACK_SYSTEM_NAME)
   IF(UNIX)
      SET(CPACK_GENERATOR DEB)
      SET(CPACK_DEB "ON")
      SET(CPACK_SOURCE_GENERATOR "")
      SET(CPACK_SOURCE_TBZ2 "OFF")
      SET(CPACK_SOURCE_TGZ "OFF")
      SET(CPACK_SOURCE_TZ "OFF")
      SET(DEBIAN_PACKAGE_DEPENDS "libc6 (>= 2.7-9), libstdc++6 (>= 4.2.3-2), libgcc1 (>= 1:4.2.3-2)")
      SET(CPACK_SET_DESTDIR ON)
      SET(CPACK_STGZ "OFF")
      SET(CPACK_TBZ2 "OFF")
      SET(CPACK_TGZ "OFF")
      SET(CPACK_TZ "OFF")
      SET(CPACK_ZIP "OFF")
   ENDIF(UNIX)
   INCLUDE(CPack)
ENDIF(EXISTS "${CMAKE_ROOT}/Modules/CPack.cmake")

configure_file(StepConfig.cmake.in StepConfig.cmake @ONLY)
if(NOT STEP_ONLY)
  configure_file(ifc2x3Config.cmake.in ifc2x3Config.cmake @ONLY)
endif()

if(${CMAKE_VERSION} VERSION_LESS 2.8.8)
    include (WriteBasicConfigVersionFile)
    WRITE_BASIC_CONFIG_VERSION_FILE( StepConfigVersion.cmake
      VERSION ${Step_VERSION_MAJOR}.${Step_VERSION_MINOR}.${Step_VERSION_PATCH}
      COMPATIBILITY AnyNewerVersion
    )
    if(NOT STEP_ONLY)
      WRITE_BASIC_CONFIG_VERSION_FILE( ifc2x3ConfigVersion.cmake
        VERSION ${ifc2x3_sdk_VERSION_MAJOR}.${ifc2x3_sdk_VERSION_MINOR}.${ifc2x3_sdk_VERSION_PATCH}
        COMPATIBILITY AnyNewerVersion
      )
    endif()
else()
    include(CMakePackageConfigHelpers)
    WRITE_BASIC_PACKAGE_VERSION_FILE( StepConfigVersion.cmake
        VERSION ${Step_VERSION_MAJOR}.${Step_VERSION_MINOR}.${Step_VERSION_PATCH}
        COMPATIBILITY AnyNewerVersion
    )
    if(NOT STEP_ONLY)
      WRITE_BASIC_PACKAGE_VERSION_FILE( ifc2x3ConfigVersion.cmake
        VERSION ${ifc2x3_sdk_VERSION_MAJOR}.${ifc2x3_sdk_VERSION_MINOR}.${ifc2x3_sdk_VERSION_PATCH}
        COMPATIBILITY AnyNewerVersion
      )
    endif()
endif()

if(UNIX)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/StepConfig.cmake ${CMAKE_CURRENT_BINARY_DIR}/StepConfigVersion.cmake
            DESTINATION share/Step
            COMPONENT SDK )
    if(NOT STEP_ONLY)
      install(FILES ${CMAKE_CURRENT_BINARY_DIR}/ifc2x3Config.cmake ${CMAKE_CURRENT_BINARY_DIR}/ifc2x3ConfigVersion.cmake
            DESTINATION share/ifc2x3
            COMPONENT SDK )
    endif()
else()
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/StepConfig.cmake ${CMAKE_CURRENT_BINARY_DIR}/StepConfigVersion.cmake
            COMPONENT SDK
            DESTINATION . )
    if(NOT STEP_ONLY)
      install(FILES ${CMAKE_CURRENT_BINARY_DIR}/ifc2x3Config.cmake ${CMAKE_CURRENT_BINARY_DIR}/ifc2x3ConfigVersion.cmake
            DESTINATION .
            COMPONENT SDK )
    endif()
endif()

message(STATUS "Step VERSION ${Step_VERSION_MAJOR}.${Step_VERSION_MINOR}.${Step_VERSION_PATCH}")
if(NOT STEP_ONLY)
  message(STATUS "ifc2x3 VERSION ${ifc2x3_sdk_VERSION_MAJOR}.${ifc2x3_sdk_VERSION_MINOR}.${ifc2x3_sdk_VERSION_PATCH}")
endif()
