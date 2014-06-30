if(STEP_USE_BOOST_STRING_REF)
    include_directories(${Boost_INCLUDE_DIR})
endif()

add_subdirectory(tests)
add_subdirectory(Derived)
add_subdirectory(tickets)
