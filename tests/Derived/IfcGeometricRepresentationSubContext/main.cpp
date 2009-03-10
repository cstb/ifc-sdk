#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcGeometricRepresentationSubContext.h>
#include <ifc2x3/IfcGeometricRepresentationContext.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcAxis2Placement2D.h>
#include <ifc2x3/IfcAxis2Placement3D.h>

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

	Step::RefPtr<ifc2x3::IfcGeometricRepresentationSubContext> GeometricRepresentationSubContext = eds->createIfcGeometricRepresentationSubContext();
	TEST_VALIDITY(GeometricRepresentationSubContext);

//////////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr<ifc2x3::IfcGeometricRepresentationContext> GeometricRepresentationContext = eds->createIfcGeometricRepresentationContext();
	TEST_VALIDITY(GeometricRepresentationContext);

	Step::RefPtr<ifc2x3::IfcAxis2Placement> AxisPlacement2D = new ifc2x3::IfcAxis2Placement();
	TEST_VALIDITY(AxisPlacement2D);
	Step::RefPtr<ifc2x3::IfcAxis2Placement2D> Axis2Placement2D = eds->createIfcAxis2Placement2D();
	Step::RefPtr<ifc2x3::IfcCartesianPoint> Location2D = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates2D;
	Coordinates2D.push_back(0);
	Coordinates2D.push_back(0);
	Location2D->setCoordinates(Coordinates2D);
	Axis2Placement2D->setLocation(Location2D);
	AxisPlacement2D->setIfcAxis2Placement2D(Axis2Placement2D.get());
	GeometricRepresentationContext->setWorldCoordinateSystem(AxisPlacement2D);
	GeometricRepresentationContext->setCoordinateSpaceDimension(2);
	GeometricRepresentationContext->setPrecision(0.5);
	Step::RefPtr<ifc2x3::IfcDirection> Direction2D = eds->createIfcDirection();
	TEST_VALIDITY(Direction2D);
	Direction2D->getDirectionRatios().push_back(1);
	Direction2D->getDirectionRatios().push_back(1);
	GeometricRepresentationContext->setTrueNorth(Direction2D);

	GeometricRepresentationSubContext->setParentContext(GeometricRepresentationContext);
	GeometricRepresentationSubContext->setTargetScale(1);
	GeometricRepresentationSubContext->setTargetView(ifc2x3::IfcGeometricProjectionEnum_GRAPH_VIEW);
	GeometricRepresentationSubContext->setUserDefinedTargetView("GRSC");

	Step::RefPtr<ifc2x3::IfcAxis2Placement> Axis2Placementtest = new ifc2x3::IfcAxis2Placement();
	Axis2Placementtest = GeometricRepresentationSubContext->getWorldCoordinateSystem();
	Step::RefPtr<ifc2x3::IfcAxis2Placement2D> Axis2Placement2Dtest = Axis2Placementtest->getIfcAxis2Placement2D();
	Step::RefPtr<ifc2x3::IfcCartesianPoint> Locationtest = Axis2Placement2Dtest->getLocation();
	TEST_ASSERT(Locationtest->getCoordinates()[0]==0);
	TEST_ASSERT(GeometricRepresentationSubContext->getWorldCoordinateSystem()->getIfcAxis2Placement2D()->getLocation()->getCoordinates()[1]==0);
	TEST_ASSERT(GeometricRepresentationSubContext->getCoordinateSpaceDimension()==2);
	TEST_ASSERT(GeometricRepresentationSubContext->getTrueNorth()->getDirectionRatios()[0]==1);
	TEST_ASSERT(GeometricRepresentationSubContext->getTrueNorth()->getDirectionRatios()[1]==1);
	TEST_ASSERT(GeometricRepresentationSubContext->getPrecision()==0.5);

////////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr<ifc2x3::IfcAxis2Placement> AxisPlacement3D = new ifc2x3::IfcAxis2Placement();
	TEST_VALIDITY(AxisPlacement3D);
	Step::RefPtr<ifc2x3::IfcAxis2Placement3D> Axis2Placement3D = eds->createIfcAxis2Placement3D();
	Step::RefPtr<ifc2x3::IfcCartesianPoint> Location3D = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates3D;
	Coordinates3D.push_back(0);
	Coordinates3D.push_back(0);
	Coordinates3D.push_back(0);
	Location3D->setCoordinates(Coordinates3D);
	Axis2Placement3D->setLocation(Location3D);
	AxisPlacement3D->setIfcAxis2Placement3D(Axis2Placement3D.get());
	GeometricRepresentationContext->setWorldCoordinateSystem(AxisPlacement3D);
	GeometricRepresentationContext->setCoordinateSpaceDimension(3);
	GeometricRepresentationContext->setPrecision(0.5);
	Step::RefPtr<ifc2x3::IfcDirection> Direction3D = eds->createIfcDirection();
	TEST_VALIDITY(Direction3D);
	Direction3D->getDirectionRatios().push_back(1);
	Direction3D->getDirectionRatios().push_back(1);
	Direction3D->getDirectionRatios().push_back(1);
	GeometricRepresentationContext->setTrueNorth(Direction3D);

	GeometricRepresentationSubContext->setParentContext(GeometricRepresentationContext);
	GeometricRepresentationSubContext->setTargetScale(1);
	GeometricRepresentationSubContext->setTargetView(ifc2x3::IfcGeometricProjectionEnum_GRAPH_VIEW);
	GeometricRepresentationSubContext->setUserDefinedTargetView("GRSC");

	Step::RefPtr<ifc2x3::IfcAxis2Placement> Axis2Placementtest3D = new ifc2x3::IfcAxis2Placement();
	Axis2Placementtest3D = GeometricRepresentationSubContext->getWorldCoordinateSystem();
	Step::RefPtr<ifc2x3::IfcAxis2Placement3D> Axis2Placement3Dtest = Axis2Placementtest3D->getIfcAxis2Placement3D();
	Step::RefPtr<ifc2x3::IfcCartesianPoint> Locationtest3D = Axis2Placement3Dtest->getLocation();
	TEST_ASSERT(Locationtest3D->getCoordinates()[0]==0);
	TEST_ASSERT(GeometricRepresentationSubContext->getWorldCoordinateSystem()->getIfcAxis2Placement3D()->getLocation()->getCoordinates()[2]==0);
	TEST_ASSERT(GeometricRepresentationSubContext->getCoordinateSpaceDimension()==3);
	TEST_ASSERT(GeometricRepresentationSubContext->getTrueNorth()->getDirectionRatios()[0]==1);
	TEST_ASSERT(GeometricRepresentationSubContext->getTrueNorth()->getDirectionRatios()[1]==1);
	TEST_ASSERT(GeometricRepresentationSubContext->getTrueNorth()->getDirectionRatios()[2]==1);
	TEST_ASSERT(GeometricRepresentationSubContext->getPrecision()==0.5);


////////////////////////////////////////////////////////////////////////////////////

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
