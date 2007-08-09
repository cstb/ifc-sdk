#ifdef MEMORY_LEAK_DETECTION
#define _DEBUG_NEW_PROGNAME "ifc2x3"
#include <debug_new.cpp>
#endif
class _MemoryLeakDetector
{
public:
	_MemoryLeakDetector();
	~_MemoryLeakDetector();
};
static _MemoryLeakDetector memoryLeakDetector;
_MemoryLeakDetector::_MemoryLeakDetector()
{
#ifdef MEMORY_LEAK_DETECTION
	new_output_fp = (FILE *)fopen("ifc2x3MemoryLeak.txt","w");
	new_verbose_flag = false;
	new_autocheck_flag = true;
#endif
}
_MemoryLeakDetector::~_MemoryLeakDetector()
{
#ifdef MEMORY_LEAK_DETECTION
	if (!new_autocheck_flag) { 
		check_leaks();
		fclose(new_output_fp);
	}
#endif
}
