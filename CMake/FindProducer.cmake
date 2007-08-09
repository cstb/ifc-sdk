# - Locate Qt include paths and libraries
# This module defines:
#  PRODUCER_INCLUDE_DIR - where to find includes.
#  PRODUCER_INCLUDES - list of include dirs 
#  PRODUCER_LIBRARIES   - the libraries to link against 
#  PRODUCER_DEFINITIONS - definitions to use when 
#                        compiling code that uses Delta3D.
#  PRODUCER_FOUND       - If false, don't try to use Delta3D.
#

FIND_PACKAGE(OpenThreads)

FIND_PATH(PRODUCER_INCLUDE_DIR Producer/Camera
  PATHS /usr/local/include "$ENV{PRODUCER_INCLUDE_DIR}" "$ENV{PRODUCER_ROOT}/include" "$ENV{OSG_ROOT}/include" ENV DELTA_INC
  )

FIND_LIBRARY(Producer_LIBRARY_RELEASE Producer
		PATHS /usr/local/lib "$ENV{PRODUCER_ROOT}/lib" "$ENV{PRODUCER_ROOT}/lib/win32" "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32"  ENV DELTA_LIB
		)

FIND_LIBRARY(Producer_LIBRARY_DEBUG ProducerD
		PATHS /usr/local/lib "$ENV{PRODUCER_ROOT}/lib" "$ENV{PRODUCER_ROOT}/lib/win32" "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB
		)

IF(Producer_LIBRARY_DEBUG)
   SET(PRODUCER_LIBRARIES   ${OPENTHREADS_LIBRARIES} 
      debug ${Producer_LIBRARY_DEBUG} 
      optimized ${Producer_LIBRARY_RELEASE}
      )
ELSE(Producer_LIBRARY_DEBUG)
   SET(PRODUCER_LIBRARIES   ${OPENTHREADS_LIBRARIES} 
      ${Producer_LIBRARY_RELEASE}
      )
ENDIF(Producer_LIBRARY_DEBUG)

IF(PRODUCER_INCLUDE_DIR)
   SET(PRODUCER_FOUND "YES" )
   SET(PRODUCER_INCLUDES ${PRODUCER_INCLUDE_DIR} ${OPENTHREADS_INCLUDES})
ENDIF(PRODUCER_INCLUDE_DIR)

MARK_AS_ADVANCED(
   PRODUCER_INCLUDE_DIR
   Producer_LIBRARY_RELEASE
   Producer_LIBRARY_DEBUG
) 

