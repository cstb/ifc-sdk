
cmake_minimum_required(VERSION 3.0)

cmake_policy(VERSION 3.0)

PROJECT(ifc_sdk)

if(EXISTS ${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
  include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
  conan_basic_setup()
endif()


IF(UNIX AND NOT WIN32 AND NOT APPLE)
  IF(CMAKE_SIZEOF_VOID_P MATCHES "8")
      SET(LIB_POSTFIX "64")
      MARK_AS_ADVANCED(LIB_POSTFIX)
  ENDIF(CMAKE_SIZEOF_VOID_P MATCHES "8")
ENDIF(UNIX AND NOT WIN32 AND NOT APPLE)
IF(NOT DEFINED LIB_POSTFIX)
    SET(LIB_POSTFIX "")
ENDIF(NOT DEFINED LIB_POSTFIX)

macro(install_pdb target config)
  if(WIN32)
    install(FILES $<TARGET_PDB_FILE:${target}> DESTINATION bin CONFIGURATIONS ${config})
  endif()

  if(APPLE)
    if(${CMAKE_BUILD_TYPE} STREQUAL "${config}")
      message(STATUS "   ${target} added post build dylib to dSYM")
      add_custom_command(TARGET ${target} POST_BUILD
          COMMAND xcrun dsymutil $<TARGET_FILE:${target}>)
      install(DIRECTORY $<TARGET_FILE_NAME:${target}>.dSYM DESTINATION lib CONFIGURATIONS ${config} COMPONENT SDK)
    endif()
  endif()

endmacro(install_pdb)

# The CMake version number.


SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
IF(WIN32)
    SET(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
ELSE(WIN32)
    SET(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib${LIB_POSTFIX})
ENDIF(WIN32)

SET(CMAKE_DEBUG_POSTFIX "_debug")

OPTION(STATIC_LIBRARIES "Enables building of STATIC libraries need " OFF)

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

SET_PROPERTY(DIRECTORY ${CMAKE_CURRENT_LIST_DIR} APPEND
                PROPERTY
                COMPILE_DEFINITIONS $<$<CONFIG:Debug>:_DEBUG>)

IF(MSVC)
  add_definitions(-D_UNICODE)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj")

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
    set(CMAKE_OSX_ARCHITECTURES "x86_64")
    set(CMAKE_OSX_DEPLOYMENT_TARGET 10.10)

    foreach(APPLE_SDK_VERSION 10 11 12 13 14)
        if (IS_DIRECTORY "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.${APPLE_SDK_VERSION}.sdk")
            set(CMAKE_OSX_SYSROOT "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.${APPLE_SDK_VERSION}.sdk")
        endif()
    endforeach(APPLE_SDK_VERSION)

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

option(ENABLE_PRECOMPILED_HEADER "Enable Pre compiled Headers" ON)
if(ENABLE_PRECOMPILED_HEADER)
include(${CMAKE_CURRENT_LIST_DIR}/cotire.cmake)
endif()
include_directories(BEFORE ${CMAKE_CURRENT_LIST_DIR}/include)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/src)

if(EXISTS ${CMAKE_CURRENT_LIST_DIR}/tests)
  option(ENABLE_TESTING "Enable testing" ON)
  if(ENABLE_TESTING)
    ENABLE_TESTING()
  endif()
  add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/tests)
endif()
if(EXISTS ${CMAKE_CURRENT_LIST_DIR}/examples)
  option(ENABLE_EXAMPLES "Enable examples" ON)
  if(ENABLE_EXAMPLES)
    add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/examples)
  endif()
endif()
