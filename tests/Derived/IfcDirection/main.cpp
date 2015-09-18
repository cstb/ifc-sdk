#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcDirection.h>
#include "../../tests.h"

#include <sstream>
#include <string>
// uncomment the following line to test compilation types checks
// #define TEST_COMPILATION_ERRORS
#define LOG_DEBUG(message)

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

	Step::RefPtr<ifc2x3::IfcDirection> Direction = eds->createIfcDirection();
	TEST_VALIDITY(Direction);

	LOG_DEBUG("Direction->getDim() = " <<Direction->getDim()<< std::endl);
	TEST_ASSERT(Direction->getDim()==0);


	Direction->getDirectionRatios().push_back(1);

	LOG_DEBUG("Direction->getDim() = " <<Direction->getDim()<< std::endl);
	TEST_ASSERT(Direction->getDim()==1);

	Direction->getDirectionRatios().push_back(2);

	LOG_DEBUG("Direction->getDim() = " <<Direction->getDim()<< std::endl);
	TEST_ASSERT(Direction->getDim()==2);

	Direction->getDirectionRatios().push_back(3);

	LOG_DEBUG("Direction->getDim() = " <<Direction->getDim()<< std::endl);
	TEST_ASSERT(Direction->getDim()==3);

	

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
