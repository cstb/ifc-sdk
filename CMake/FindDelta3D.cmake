# - Locate Qt include paths and libraries
# This module defines:
#  DELTA3D_INCLUDE_DIR - where to find includes.
#  DELTA3D_INCLUDES - list of include dirs for Delta3D and it's dependencies
#  DELTA3D_LIBRARIES   - the libraries to link against to use Delta3D.
#  DELTA3D_DEFINITIONS - definitions to use when 
#                        compiling code that uses Delta3D.
#  DELTA3D_FOUND       - If false, don't try to use Delta3D.
#

FIND_PACKAGE(OpenSceneGraph)

FIND_PATH(DELTA3D_INCLUDE_DIR dtCore/dt.h
  PATHS /usr/local/include ENV DELTA_INC
  )

FIND_LIBRARY(dtCore_LIBRARY_RELEASE dtCore
		PATHS /usr/local/lib ENV DELTA_LIB
		)

FIND_LIBRARY(dtUtil_LIBRARY_RELEASE dtUtil
		PATHS /usr/local/lib ENV DELTA_LIB
		)

# debug libraries
FIND_LIBRARY(dtCore_LIBRARY_DEBUG dtCoreD
		PATHS /usr/local/lib ENV DELTA_LIB
		)

FIND_LIBRARY(dtUtil_LIBRARY_DEBUG dtUtilD
		PATHS /usr/local/lib ENV DELTA_LIB
		)

   #
   #  Do for each dt*.lib
   #

IF(dtCore_LIBRARY_DEBUG)
   SET(DELTA3D_LIBRARIES ${OPENSCENEGRAPH_LIBRARIES}
      optimized ${dtCore_LIBRARY_RELEASE} 
      optimized ${dtUtil_LIBRARY_RELEASE}
      debug     ${dtCore_LIBRARY_DEBUG}
      debug     ${dtUtil_LIBRARY_DEBUG} 
      )
ELSE(dtCore_LIBRARY_DEBUG)
   SET(DELTA3D_LIBRARIES ${OPENSCENEGRAPH_LIBRARIES}
      ${OPENSCENEGRAPH_LIBRARIES_RELEASE} 
      ${dtCore_LIBRARY_RELEASE} 
      ${dtUtil_LIBRARY_RELEASE}
   )
ENDIF(dtCore_LIBRARY_DEBUG)


IF(DELTA3D_INCLUDE_DIR)
   SET(DELTA3D_FOUND "YES" )
   SET(DELTA3D_INCLUDES ${DELTA3D_INCLUDE_DIR} ${OPENSCENEGRAPH_INCLUDES})
ENDIF(DELTA3D_INCLUDE_DIR)

MARK_AS_ADVANCED(
   DELTA3D_INCLUDE_DIR
   dtUtil_LIBRARY_DEBUG
   dtCore_LIBRARY_DEBUG
   dtCore_LIBRARY_RELEASE
   dtUtil_LIBRARY_RELEASE
) 

#MESSAGE(SEND_ERROR "debug = ${DELTA3D_LIBRARIES_DEBUG}")
