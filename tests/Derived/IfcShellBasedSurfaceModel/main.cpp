#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcShellBasedSurfaceModel.h>
#include "../../tests.h"

#include <sstream>
#include <string>
// uncomment the following line to test compilation types checks
// #define TEST_COMPILATION_ERRORS
#define LOG_DEBUG(message)

int main(int n, char **p)
{
	Step::RefPtr<ifc2x3::ExpressDataSet> eds ;
	try
	{
		std::cout << "Creating ExpressDataSet" << std::endl;
		eds = new ifc2x3::ExpressDataSet;
	}
	catch (const std::exception& e)
	{
		TEST_FAILURE((std::string("Exception : ") + e.what()).c_str());
	}

	TEST_VALIDITY(eds);

	Step::RefPtr<ifc2x3::IfcShellBasedSurfaceModel> ShellBasedSurfaceModel = eds->createIfcShellBasedSurfaceModel();
	TEST_VALIDITY(ShellBasedSurfaceModel);

	TEST_ASSERT(ShellBasedSurfaceModel->getDim()==3);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
