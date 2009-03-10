#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcAxis1Placement.h>
#include "../../tests.h"

#include <sstream>
#include <string>
// uncomment the following line to test compilation types checks
// #define TEST_COMPILATION_ERRORS

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

//////////////////////////////////////////////////////////////////////////////////////////////
	Step::RefPtr<ifc2x3::IfcAxis1Placement> placement = eds->createIfcAxis1Placement();

	Step::RefPtr<ifc2x3::IfcDirection> z = placement->getZ();

	TEST_VALIDITY(z);

	if (z.valid())
	{
		// test default return value (0,0,1)
		TEST_ASSERT(z->getDirectionRatios()[2]==1.0);

		// set values into placement and test that the z is correct

		Step::RefPtr<ifc2x3::IfcDirection> axis = eds->createIfcDirection();
		axis->getDirectionRatios().push_back(0);
		axis->getDirectionRatios().push_back(0);
		axis->getDirectionRatios().push_back(2);

		Step::RefPtr<ifc2x3::IfcCartesianPoint> location = eds->createIfcCartesianPoint();
		location->getCoordinates().push_back(0);
		location->getCoordinates().push_back(0);
		location->getCoordinates().push_back(0);

		placement->setAxis(axis);
		placement->setLocation(location);

		Step::RefPtr<ifc2x3::IfcDirection> z1 = placement->getZ();
		TEST_VALIDITY(z1);
		if (z1.valid())
		{
			TEST_ASSERT(z1->getDirectionRatios()[0]==0.0);
			TEST_ASSERT(z1->getDirectionRatios()[1]==0.0);
			TEST_ASSERT(z1->getDirectionRatios()[2]==1.0);
		}
	}

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
