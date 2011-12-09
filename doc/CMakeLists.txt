FIND_PACKAGE(Doxygen)
IF(DOXYGEN_FOUND)
 IF(DOXYGEN_DOT_FOUND)
  SET(HAVE_DOT YES)
 ELSE(DOXYGEN_DOT_FOUND)
  SET(HAVE_DOT NO)
 ENDIF(DOXYGEN_DOT_FOUND)
                     
 if(NOT HTML_OUTPUT_DIRECTORY)
   set(HTML_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
 endif()

 # click+jump in Emacs and Visual Studio (for doxy.config) (jw)
  IF (CMAKE_BUILD_TOOL MATCHES "(msdev|devenv)")
    SET(DOXY_WARN_FORMAT "\"\$file(\$line) : \$text \"")
  ELSE  (CMAKE_BUILD_TOOL MATCHES "(msdev|devenv)")
    SET(DOXY_WARN_FORMAT "\"\$file:\$line: \$text \"")
  ENDIF (CMAKE_BUILD_TOOL MATCHES "(msdev|devenv)")

  IF (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/doxy.config.in")
    MESSAGE(STATUS "configured ${CMAKE_CURRENT_SOURCE_DIR}/doxy.config.in --> ${CMAKE_CURRENT_BINARY_DIR}/doxy.config")
    CONFIGURE_FILE(${CMAKE_CURRENT_SOURCE_DIR}/doxy.config.in 
      ${CMAKE_CURRENT_BINARY_DIR}/doxy.config
      @ONLY )
    # use (configured) doxy.config from (out of place) BUILD tree:
    SET(DOXY_CONFIG "${CMAKE_CURRENT_BINARY_DIR}/doxy.config")
  ELSE (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/doxy.config.in")
    # use static hand-edited doxy.config from SOURCE tree:
    SET(DOXY_CONFIG "${CMAKE_CURRENT_SOURCE_DIR}/doxy.config")
    IF   (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/doxy.config")
      MESSAGE(STATUS "WARNING: using existing ${CMAKE_CURRENT_SOURCE_DIR}/doxy.config instead of configuring from doxy.config.in file.")
    ELSE (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/doxy.config")
      IF   (EXISTS "${CMAKE_MODULE_PATH}/doxy.config.in")
        # using template doxy.config.in
        MESSAGE(STATUS "configured ${CMAKE_CMAKE_MODULE_PATH}/doxy.config.in --> ${CMAKE_CURRENT_BINARY_DIR}/doxy.config")
        CONFIGURE_FILE(${CMAKE_MODULE_PATH}/doxy.config.in 
          ${CMAKE_CURRENT_BINARY_DIR}/doxy.config
          @ONLY )
        SET(DOXY_CONFIG "${CMAKE_CURRENT_BINARY_DIR}/doxy.config")
      ELSE (EXISTS "${CMAKE_MODULE_PATH}/doxy.config.in")
        # failed completely...
        MESSAGE(SEND_ERROR "Please create ${CMAKE_CURRENT_SOURCE_DIR}/doxy.config.in (or doxy.config as fallback)")
      ENDIF(EXISTS "${CMAKE_MODULE_PATH}/doxy.config.in")

    ENDIF(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/doxy.config")
  ENDIF(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/doxy.config.in")

  ADD_CUSTOM_TARGET(Documentation ${DOXYGEN_EXECUTABLE} ${DOXY_CONFIG})

ENDIF(DOXYGEN_FOUND)

IF(ENABLE_DISTRIBUTION)
#  IF(IS_DIRECTORY ${CMAKE_HOME_DIRECTORY}/doc/html)
#    INSTALL(DIRECTORY ${CMAKE_HOME_DIRECTORY}/doc/html DESTINATION tas_sdk/doc)
#  ENDIF(IS_DIRECTORY ${CMAKE_HOME_DIRECTORY}/doc/html)
#
#  INSTALL(FILES CMakeLists.txt doxy.config.in mainpage.dox DESTINATION tas_sdk/doc)
#  FILE(GLOB INSTALL_DOC_FILES *.pdf)
#  INSTALL(FILES ${INSTALL_DOC_FILES} DESTINATION doc)
#  INSTALL(FILES ReadmeGeneral.txt DESTINATION .)
ENDIF(ENABLE_DISTRIBUTION)
 

