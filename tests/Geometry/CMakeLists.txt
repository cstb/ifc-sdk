string(REPLACE "${CMAKE_SOURCE_DIR}/" "" KEEP_CURRENT_FOLDER_LIST "${CMAKE_CURRENT_LIST_DIR}")

set(subdirs
		1-ComputePlacement 
		2-CreateGeometry 
		3-PlacementAndMappedItem	
	)

foreach(subdir ${subdirs})
    set(CURRENT_FOLDER_LIST ${KEEP_CURRENT_FOLDER_LIST})
	add_subdirectory(${subdir})
endforeach(subdir)
