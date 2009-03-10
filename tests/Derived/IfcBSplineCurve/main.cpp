#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcBSplineCurve.h>
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

	Step::RefPtr<ifc2x3::IfcBSplineCurve> BSpline = eds->createIfcBezierCurve();
	TEST_VALIDITY(BSpline);


	ifc2x3::Array_IfcCartesianPoint_0_255 ControlPoint = BSpline->getControlPoints();
	Step::Integer IndexOnControlPoints = BSpline->getUpperIndexOnControlPoints();
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
	TEST_ASSERT(Point1->getCoordinates()[2]==0);
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


	BSpline->setControlPointsList(ListOfIfcCartesianPoint);

	TEST_ASSERT(BSpline->getControlPointsList().size()==4);
	ControlPoint = BSpline->getControlPoints();
	IndexOnControlPoints = BSpline->getUpperIndexOnControlPoints();
	TEST_ASSERT(ControlPoint.size()==256);
	TEST_ASSERT(IndexOnControlPoints==4);

	Step::Array< Step::RefPtr< ifc2x3::IfcCartesianPoint >, 0, 255 >::iterator it_ControlPoint = ControlPoint.begin();
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[0]==1);
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[1]==1);
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[2]==0);

	it_ControlPoint++;
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[0]==2);
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[1]==2);
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[2]==0);

	it_ControlPoint++;
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[0]==3);
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[1]==2);
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[2]==0);

	it_ControlPoint++;
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[0]==4);
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[1]==1);
	TEST_ASSERT((*it_ControlPoint)->getCoordinates()[2]==0);
	
	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
