FILE(GLOB dirlist ticket* )
foreach(subdir ${dirlist})
	add_subdirectory(${subdir})
endforeach(subdir)
