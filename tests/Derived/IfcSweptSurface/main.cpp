#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcSweptSurface.h>
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

	Step::RefPtr< ifc2x3::IfcSweptSurface > SweptSurface = eds->createIfcSurfaceOfLinearExtrusion();
	TEST_VALIDITY(SweptSurface);
	TEST_ASSERT(SweptSurface->getDim()==0);
	
	Step::RefPtr< ifc2x3::IfcProfileDef > ProfileDef =eds->createIfcArbitraryClosedProfileDef();
	ProfileDef->setProfileType(ifc2x3::IfcProfileTypeEnum_CURVE);
	ProfileDef->setProfileName("Curve");
	

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

	SweptSurface->setPosition(Pos); 
	SweptSurface->setSweptCurve(ProfileDef);
	TEST_ASSERT(SweptSurface->getDim()==3);
	

/*
	Step::RefPtr<ifc2x3::IfcLine> AxisLine = SurfaceOfRevolution->getAxisLine();
	TEST_ASSERT(AxisLine==NULL);

	Step::RefPtr<ifc2x3::IfcAxis1Placement> Axis = eds->createIfcAxis1Placement();
	Step::RefPtr<ifc2x3::IfcDirection> Dir = eds->createIfcDirection();
	Dir->getDirectionRatios().push_back(0);
	Dir->getDirectionRatios().push_back(0);
	Dir->getDirectionRatios().push_back(0);
	Axis->setAxis(Dir);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> Loc = eds->createIfcCartesianPoint();
	Loc->getCoordinates().push_back(0);
	Loc->getCoordinates().push_back(0);
	Loc->getCoordinates().push_back(0);
	Axis->setLocation(Loc);
	SurfaceOfRevolution->setAxisPosition(Axis);
	//SurfaceOfRevolution->setAngle(90);

	AxisLine = SurfaceOfRevolution->getAxisLine();

	LOG_DEBUG("AxisLine->getPnt()->getCoordinates()[0] = "<<AxisLine->getPnt()->getCoordinates()[0]<<std::endl);
	TEST_ASSERT(AxisLine->getPnt()->getCoordinates()[0]==0);
	LOG_DEBUG("AxisLine->getPnt()->getCoordinates()[1] = "<<AxisLine->getPnt()->getCoordinates()[1]<<std::endl);
	TEST_ASSERT(AxisLine->getPnt()->getCoordinates()[1]==0);
	LOG_DEBUG("AxisLine->getPnt()->getCoordinates()[2] = "<<AxisLine->getPnt()->getCoordinates()[2]<<std::endl);
	TEST_ASSERT(AxisLine->getPnt()->getCoordinates()[2]==0);

	LOG_DEBUG("AxisLine->getDir()->getMagnitude() = "<<AxisLine->getDir()->getMagnitude()<<std::endl);
	TEST_ASSERT(AxisLine->getDir()->getMagnitude()==1);

	LOG_DEBUG("AxisLine->getDir()->getOrientation()->getDirectionRatios()[0] = "<<AxisLine->getDir()->getOrientation()->getDirectionRatios()[0]<<std::endl);
	TEST_ASSERT(AxisLine->getDir()->getOrientation()->getDirectionRatios()[0]==0);
	LOG_DEBUG("AxisLine->getDir()->getOrientation()->getDirectionRatios()[1] = "<<AxisLine->getDir()->getOrientation()->getDirectionRatios()[1]<<std::endl);
	TEST_ASSERT(AxisLine->getDir()->getOrientation()->getDirectionRatios()[1]==0);
	LOG_DEBUG("AxisLine->getDir()->getOrientation()->getDirectionRatios()[2] = "<<AxisLine->getDir()->getOrientation()->getDirectionRatios()[2]<<std::endl);
	TEST_ASSERT(AxisLine->getDir()->getOrientation()->getDirectionRatios()[2]==1);
*/

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
