# - Locate Qt include paths and libraries
# This module defines:
#  OPENSCENEGRAPH_INCLUDE_DIR - where to find includes.
#  OPENSCENEGRAPH_INCLUDES - list of include dirs 
#  OPENSCENEGRAPH_LIBRARIES   - the libraries to link against 
#  OPENSCENEGRAPH_DEFINITIONS - definitions to use when 
#                        compiling code that uses Delta3D.
#  OPENSCENEGRAPH_FOUND       - If false, don't try to use Delta3D.
#

FIND_PACKAGE(Producer)
FIND_PACKAGE(OpenGL)

FIND_PATH(OPENSCENEGRAPH_INCLUDE_DIR osg/Node
   PATHS /usr/local/include  "$ENV{OSG_ROOT}/include" ENV DELTA_INC
)

FIND_PATH(OPENSCENEGRAPH12_INCLUDE_DIR osgGA/SimpleViewer
   PATHS /usr/local/include  "$ENV{OSG_ROOT}/include" ENV DELTA_INC
)

FIND_LIBRARY(osg_LIBRARY_RELEASE            osg         PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgDB_LIBRARY_RELEASE          osgDB       PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgParticle_LIBRARY_RELEASE    osgParticle PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgSim_LIBRARY_RELEASE         osgSim      PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgTerrain_LIBRARY_RELEASE     osgTerrain  PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgText_LIBRARY_RELEASE        osgText     PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgUtil_LIBRARY_RELEASE        osgUtil     PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgFX_LIBRARY_RELEASE          osgFX       PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgGA_LIBRARY_RELEASE          osgGA       PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgProducer_LIBRARY_RELEASE    osgProducer PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)

FIND_LIBRARY(osg_LIBRARY_DEBUG            osgD         PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgDB_LIBRARY_DEBUG          osgDBD       PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgParticle_LIBRARY_DEBUG    osgParticleD PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgSim_LIBRARY_DEBUG         osgSimD      PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgTerrain_LIBRARY_DEBUG     osgTerrainD  PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgText_LIBRARY_DEBUG        osgTextD     PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgUtil_LIBRARY_DEBUG        osgUtilD     PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgFX_LIBRARY_DEBUG          osgFXD       PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgGA_LIBRARY_DEBUG          osgGAD       PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)
FIND_LIBRARY(osgProducer_LIBRARY_DEBUG    osgProducerD PATHS /usr/local/lib "$ENV{OSG_ROOT}/lib" "$ENV{OSG_ROOT}/lib/win32" ENV DELTA_LIB)

IF(osg_LIBRARY_DEBUG)
   SET(OPENSCENEGRAPH_LIBRARIES ${OPENGL_LIBRARIES} ${PRODUCER_LIBRARIES}
      optimized ${osg_LIBRARY_RELEASE}
      optimized ${osgDB_LIBRARY_RELEASE}
      optimized ${osgParticle_LIBRARY_RELEASE}
      optimized ${osgSim_LIBRARY_RELEASE}
      optimized ${osgTerrain_LIBRARY_RELEASE}
      optimized ${osgText_LIBRARY_RELEASE}
      optimized ${osgUtil_LIBRARY_RELEASE}
      optimized ${osgFX_LIBRARY_RELEASE}
      optimized ${osgGA_LIBRARY_RELEASE}
      optimized ${osgProducer_LIBRARY_RELEASE}
      debug ${osg_LIBRARY_DEBUG}
      debug ${osgDB_LIBRARY_DEBUG}
      debug ${osgParticle_LIBRARY_DEBUG}
      debug ${osgSim_LIBRARY_DEBUG}
      debug ${osgTerrain_LIBRARY_DEBUG}
      debug ${osgText_LIBRARY_DEBUG}
      debug ${osgUtil_LIBRARY_DEBUG}
      debug ${osgFX_LIBRARY_DEBUG}
      debug ${osgGA_LIBRARY_DEBUG}  
      debug ${osgProducer_LIBRARY_DEBUG}
   )
ELSE(osg_LIBRARY_DEBUG)
    SET(OPENSCENEGRAPH_LIBRARIES  ${OPENGL_LIBRARIES} ${PRODUCER_LIBRARIES}
      ${osg_LIBRARY_RELEASE}
      ${osgDB_LIBRARY_RELEASE}
      ${osgParticle_LIBRARY_RELEASE}
      ${osgSim_LIBRARY_RELEASE}
      ${osgTerrain_LIBRARY_RELEASE}
      ${osgText_LIBRARY_RELEASE}
      ${osgUtil_LIBRARY_RELEASE}
      ${osgFX_LIBRARY_RELEASE}
      ${osgGA_LIBRARY_RELEASE}
      ${osgProducer_LIBRARY_RELEASE}
   )
ENDIF(osg_LIBRARY_DEBUG)

IF(OPENSCENEGRAPH_INCLUDE_DIR)
   SET(OPENSCENEGRAPH_FOUND "YES" )
   SET(OPENSCENEGRAPH_INCLUDES ${OPENSCENEGRAPH_INCLUDE_DIR} ${PRODUCER_INCLUDES})
ENDIF(OPENSCENEGRAPH_INCLUDE_DIR)

IF(OPENSCENEGRAPH12_INCLUDE_DIR)
   SET(OPENSCENEGRAPH_VERSION_1_2_FOUND "YES" )
ELSE(OPENSCENEGRAPH12_INCLUDE_DIR)
   SET(OPENSCENEGRAPH_VERSION_1_1_FOUND "YES" )
ENDIF(OPENSCENEGRAPH12_INCLUDE_DIR)

MARK_AS_ADVANCED(
   OPENSCENEGRAPH_INCLUDE_DIR
   OPENSCENEGRAPH12_INCLUDE_DIR
   osg_LIBRARY_RELEASE
   osgDB_LIBRARY_RELEASE
   osgParticle_LIBRARY_RELEASE
   osgSim_LIBRARY_RELEASE
   osgTerrain_LIBRARY_RELEASE
   osgText_LIBRARY_RELEASE
   osgUtil_LIBRARY_RELEASE
   osgFX_LIBRARY_RELEASE
   osgGA_LIBRARY_RELEASE
   osgProducer_LIBRARY_RELEASE
   osg_LIBRARY_DEBUG
   osgDB_LIBRARY_DEBUG
   osgParticle_LIBRARY_DEBUG
   osgSim_LIBRARY_DEBUG
   osgTerrain_LIBRARY_DEBUG
   osgText_LIBRARY_DEBUG
   osgUtil_LIBRARY_DEBUG
   osgFX_LIBRARY_DEBUG
   osgGA_LIBRARY_DEBUG
   osgProducer_LIBRARY_DEBUG
) 
