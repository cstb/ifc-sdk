
FILE(GLOB dirlist *)

FOREACH(dir ${dirlist})
	FILE(TO_CMAKE_PATH ${dir} fulldir)
	IF(IS_DIRECTORY ${fulldir})
		SUBDIRS(${dir})
	ENDIF(IS_DIRECTORY ${fulldir})
ENDFOREACH(dir)
