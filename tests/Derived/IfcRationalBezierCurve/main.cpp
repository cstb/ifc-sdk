#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcRationalBezierCurve.h>
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

	Step::RefPtr<ifc2x3::IfcRationalBezierCurve> RationalBezierCurve = eds->createIfcRationalBezierCurve();
	TEST_VALIDITY(RationalBezierCurve);
	LOG_DEBUG("RationalBezierCurve->getWeights().size() = " << RationalBezierCurve->getWeights().size() << std::endl);
	TEST_ASSERT(RationalBezierCurve->getWeights().size()==256);

	ifc2x3::List_Real_2_n RealList;
	RealList.push_back(0);
	RealList.push_back(1);
	RealList.push_back(2);
	RealList.push_back(3);
	RationalBezierCurve->setWeightsData(RealList);

	ifc2x3::Array_IfcCartesianPoint_0_255 ControlPoint = RationalBezierCurve->getControlPoints();
	Step::Integer IndexOnControlPoints = RationalBezierCurve->getUpperIndexOnControlPoints();
	TEST_ASSERT(ControlPoint.size()==256);
	TEST_ASSERT(IndexOnControlPoints==0);

	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates1;
	Coordinates1.push_back(1);
	Coordinates1.push_back(1);
	Coordinates1.push_back(0);
	TEST_ASSERT(Coordinates1[2]==0);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates2;
	Coordinates2.push_back(2);
	Coordinates2.push_back(2);
	Coordinates2.push_back(0);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates3;
	Coordinates3.push_back(3);
	Coordinates3.push_back(2);
	Coordinates3.push_back(0);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates4;
	Coordinates4.push_back(4);
	Coordinates4.push_back(1);
	Coordinates4.push_back(0);

	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point1 = eds->createIfcCartesianPoint();
	Point1->setCoordinates(Coordinates1);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point2 = eds->createIfcCartesianPoint();
	Point2->setCoordinates(Coordinates2);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point3 = eds->createIfcCartesianPoint();
	Point3->setCoordinates(Coordinates3);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point4 = eds->createIfcCartesianPoint();
	Point4->setCoordinates(Coordinates4);

	ifc2x3::List_IfcCartesianPoint_2_n ListOfIfcCartesianPoint;
	ListOfIfcCartesianPoint.push_back(Point1);
	ListOfIfcCartesianPoint.push_back(Point2);
	ListOfIfcCartesianPoint.push_back(Point3);
	ListOfIfcCartesianPoint.push_back(Point4);


	RationalBezierCurve->setControlPointsList(ListOfIfcCartesianPoint);

	ifc2x3::Array_Real_0_255 ArrayWeights = RationalBezierCurve->getWeights();

	LOG_DEBUG("ArrayWeights[0] = " << ArrayWeights[0] << std::endl);
	TEST_ASSERT(ArrayWeights[0]==0);
	LOG_DEBUG("ArrayWeights[1] = " << ArrayWeights[1] << std::endl);
	TEST_ASSERT(ArrayWeights[1]==1);
	LOG_DEBUG("ArrayWeights[2] = " << ArrayWeights[2] << std::endl);
	TEST_ASSERT(ArrayWeights[2]==2);
	LOG_DEBUG("ArrayWeights[3] = " << ArrayWeights[3] << std::endl);
	TEST_ASSERT(ArrayWeights[3]==3);


	
/*
	LOG_DEBUG("Create CurveBoundedPlane"<< std::endl);
	Step::RefPtr<ifc2x3::IfcCurveBoundedPlane> CurveBoundedPlane = eds->createIfcCurveBoundedPlane();
	TEST_VALIDITY(CurveBoundedPlane);

	Step::RefPtr<ifc2x3::IfcPlane> BasisSurface = eds->createIfcPlane();
	TEST_VALIDITY(BasisSurface);

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

	CurveBoundedPlane->setBasisSurface(BasisSurface);

	Point->setBasisSurface(CurveBoundedPlane);
	Point->setPointParameterU(0);
	Point->setPointParameterV(1);

	TEST_ASSERT(Point->getDim()==3);

*/
	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
