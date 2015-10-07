#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcCurveBoundedPlane.h>
#include <ifc2x3/IfcElementarySurface.h>
#include "../../tests.h"

#include <sstream>
#include <string>
//#include <math.h>
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

///////////////////////////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr<ifc2x3::IfcElementarySurface> BasisSurface = eds->createIfcPlane();
	TEST_VALIDITY(BasisSurface);
	TEST_ASSERT(BasisSurface->getDim()==0);


	Step::RefPtr<ifc2x3::IfcDirection> axis = eds->createIfcDirection();
	axis->getDirectionRatios().push_back(1);
	axis->getDirectionRatios().push_back(0);
	axis->getDirectionRatios().push_back(0);


	Step::RefPtr<ifc2x3::IfcDirection> RefDirection = eds->createIfcDirection();
	RefDirection->getDirectionRatios().push_back(1);
	RefDirection->getDirectionRatios().push_back(1);
	RefDirection->getDirectionRatios().push_back(0);

	Step::RefPtr<ifc2x3::IfcCartesianPoint> Location = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates;
	Coordinates.push_back(0);
	Coordinates.push_back(0);
	Coordinates.push_back(0);
	Location->setCoordinates(Coordinates);

	Step::RefPtr<ifc2x3::IfcAxis2Placement3D> Pos = eds->createIfcAxis2Placement3D();
	Pos->setAxis(axis);
	Pos->setRefDirection(RefDirection);
	Pos->setLocation(Location);

	BasisSurface->setPosition(Pos);

	TEST_ASSERT(BasisSurface->getDim()==3);	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
