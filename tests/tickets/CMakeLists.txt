string(REPLACE "${CMAKE_SOURCE_DIR}/" "" KEEP_CURRENT_FOLDER_LIST "${CMAKE_CURRENT_LIST_DIR}")
FILE(GLOB dirlist ticket* )

foreach(subdir ${dirlist})
    set(CURRENT_FOLDER_LIST ${KEEP_CURRENT_FOLDER_LIST})
	add_subdirectory(${subdir})
endforeach(subdir)
