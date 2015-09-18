#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcRectangularTrimmedSurface.h>
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

	Step::RefPtr<ifc2x3::IfcRectangularTrimmedSurface> RectangularTrimmedSurface = eds->createIfcRectangularTrimmedSurface();
	TEST_VALIDITY(RectangularTrimmedSurface);
	LOG_DEBUG("RectangularTrimmedSurface->getDim() = "<<RectangularTrimmedSurface->getDim()<<std::endl);
	TEST_ASSERT(RectangularTrimmedSurface->getDim()==0);

/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("Test with CurveBoundedPlane2D"<< std::endl);
	Step::RefPtr<ifc2x3::IfcCurveBoundedPlane> CurveBoundedPlane1 = eds->createIfcCurveBoundedPlane();
	TEST_VALIDITY(CurveBoundedPlane1);

	Step::RefPtr<ifc2x3::IfcPlane> BasisSurface1 = eds->createIfcPlane();
	TEST_VALIDITY(BasisSurface1);

	Step::RefPtr<ifc2x3::IfcDirection> axis1 = eds->createIfcDirection();
	axis1->getDirectionRatios().push_back(1);
	axis1->getDirectionRatios().push_back(0);

	Step::RefPtr<ifc2x3::IfcDirection> RefDirection1 = eds->createIfcDirection();
	RefDirection1->getDirectionRatios().push_back(1);
	RefDirection1->getDirectionRatios().push_back(1);

	Step::RefPtr<ifc2x3::IfcCartesianPoint> Location1 = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates1;
	Coordinates1.push_back(0);
	Coordinates1.push_back(0);
	Location1->setCoordinates(Coordinates1);

	Step::RefPtr<ifc2x3::IfcAxis2Placement3D> Pos1 = eds->createIfcAxis2Placement3D();
	Pos1->setAxis(axis1);
	Pos1->setRefDirection(RefDirection1);
	Pos1->setLocation(Location1);

	BasisSurface1->setPosition(Pos1);

	CurveBoundedPlane1->setBasisSurface(BasisSurface1);
//////////////////////////////////////////////////////////////////////////////////////

	RectangularTrimmedSurface->setBasisSurface(CurveBoundedPlane1);
	RectangularTrimmedSurface->setU1(1.5);
	RectangularTrimmedSurface->setV1(2.5);
	RectangularTrimmedSurface->setU2(3.5);
	RectangularTrimmedSurface->setV1(4.5);
	RectangularTrimmedSurface->setUsense(Step::BTrue);
	RectangularTrimmedSurface->setVsense(Step::BTrue);

	LOG_DEBUG("RectangularTrimmedSurface->getDim() = "<<RectangularTrimmedSurface->getDim()<<std::endl);
	TEST_ASSERT(RectangularTrimmedSurface->getDim()==2);
///////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("Test with CurveBoundedPlane3D"<< std::endl);
	Step::RefPtr<ifc2x3::IfcCurveBoundedPlane> CurveBoundedPlane2 = eds->createIfcCurveBoundedPlane();
	TEST_VALIDITY(CurveBoundedPlane2);

	Step::RefPtr<ifc2x3::IfcPlane> BasisSurface2 = eds->createIfcPlane();
	TEST_VALIDITY(BasisSurface2);

	Step::RefPtr<ifc2x3::IfcDirection> axis2 = eds->createIfcDirection();
	axis2->getDirectionRatios().push_back(1);
	axis2->getDirectionRatios().push_back(0);
	axis2->getDirectionRatios().push_back(0);

	Step::RefPtr<ifc2x3::IfcDirection> RefDirection2 = eds->createIfcDirection();
	RefDirection2->getDirectionRatios().push_back(1);
	RefDirection2->getDirectionRatios().push_back(1);
	RefDirection2->getDirectionRatios().push_back(1);

	Step::RefPtr<ifc2x3::IfcCartesianPoint> Location2 = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates2;
	Coordinates2.push_back(0);
	Coordinates2.push_back(0);
	Coordinates2.push_back(0);
	Location2->setCoordinates(Coordinates2);

	Step::RefPtr<ifc2x3::IfcAxis2Placement3D> Pos2 = eds->createIfcAxis2Placement3D();
	Pos2->setAxis(axis2);
	Pos2->setRefDirection(RefDirection2);
	Pos2->setLocation(Location2);

	BasisSurface2->setPosition(Pos2);

	CurveBoundedPlane2->setBasisSurface(BasisSurface2);
	//////////////////////////////////////////////////////////////////////////////////////

	RectangularTrimmedSurface->setBasisSurface(CurveBoundedPlane2);
	RectangularTrimmedSurface->setU1(1.5);
	RectangularTrimmedSurface->setV1(2.5);
	RectangularTrimmedSurface->setU2(3.5);
	RectangularTrimmedSurface->setV1(4.5);
	RectangularTrimmedSurface->setUsense(Step::BTrue);
	RectangularTrimmedSurface->setVsense(Step::BTrue);

	LOG_DEBUG("RectangularTrimmedSurface->getDim() = "<<RectangularTrimmedSurface->getDim()<<std::endl);
	TEST_ASSERT(RectangularTrimmedSurface->getDim()==3);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
