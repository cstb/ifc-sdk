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
////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("Test with IfcAxis1Placement");

	Step::RefPtr<ifc2x3::IfcAxis1Placement> Axis1Placement = eds->createIfcAxis1Placement();
	TEST_VALIDITY(Axis1Placement);

	Step::RefPtr<ifc2x3::IfcCartesianPoint> Location1 = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates1;
	Coordinates1.push_back(0);
	Coordinates1.push_back(0);
	Coordinates1.push_back(0);
	Location1->setCoordinates(Coordinates1);

	Axis1Placement->setLocation(Location1);
	TEST_ASSERT(Axis1Placement->getDim()==3);	

////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("Test with IfcAxis2Placement2D");

	Step::RefPtr<ifc2x3::IfcAxis2Placement2D> Axis2Placement2D = eds->createIfcAxis2Placement2D();
	TEST_VALIDITY(Axis2Placement2D);

	Step::RefPtr<ifc2x3::IfcCartesianPoint> Location2 = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates2;
	Coordinates2.push_back(0);
	Coordinates2.push_back(0);
	Location2->setCoordinates(Coordinates2);

	Axis2Placement2D->setLocation(Location2);
	TEST_ASSERT(Axis2Placement2D->getDim()==2);	

////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("Test with IfcAxis2Placement3D");
	
	Step::RefPtr<ifc2x3::IfcAxis2Placement3D> Axis2Placement3D = eds->createIfcAxis2Placement2D();
	TEST_VALIDITY(Axis2Placement3D);


	Step::RefPtr<ifc2x3::IfcCartesianPoint> Location3 = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates3;
	Coordinates3.push_back(0);
	Coordinates3.push_back(0);
	Coordinates3.push_back(0);
	Location3->setCoordinates(Coordinates3);

	Axis2Placement3D->setLocation(Location3);
	TEST_ASSERT(Axis2Placement3D->getDim()==3);	

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
