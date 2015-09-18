#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcRevolvedAreaSolid.h>
#include <ifc2x3/IfcAxis1Placement.h>
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

	Step::RefPtr<ifc2x3::IfcRevolvedAreaSolid> RevolvedAreaSolid = eds->createIfcRevolvedAreaSolid();
	TEST_VALIDITY(RevolvedAreaSolid);

	Step::RefPtr<ifc2x3::IfcLine> AxisLine = RevolvedAreaSolid->getAxisLine();
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
	RevolvedAreaSolid->setAxis(Axis);
	RevolvedAreaSolid->setAngle(90);

	AxisLine = RevolvedAreaSolid->getAxisLine();

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

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
