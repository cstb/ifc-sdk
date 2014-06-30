if(STEP_USE_BOOST_STRING_REF)
    include_directories(${Boost_INCLUDE_DIR})
endif()

add_subdirectory(readWrite)
add_subdirectory(buildModel)
add_subdirectory(BRepExample)
