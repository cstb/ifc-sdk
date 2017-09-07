#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcPointOnCurve.h>
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

	Step::RefPtr<ifc2x3::IfcPointOnCurve> Point = eds->createIfcPointOnCurve();
	TEST_VALIDITY(Point);
	TEST_ASSERT(Point->getDim()==0);

//////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("Create IfcBezierCurve"<< std::endl);
	Step::RefPtr<ifc2x3::IfcBSplineCurve> BSpline_2D = eds->createIfcBezierCurve();
	TEST_VALIDITY(BSpline_2D);

	ifc2x3::Array_IfcCartesianPoint_0_255 ControlPoint_2D = BSpline_2D->getControlPoints();
	Step::Integer IndexOnControlPoints_2D = BSpline_2D->getUpperIndexOnControlPoints();
	TEST_ASSERT(ControlPoint_2D.size()==256);
	TEST_ASSERT(IndexOnControlPoints_2D==0);

	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates1_2D;
	Coordinates1_2D.push_back(1);
	Coordinates1_2D.push_back(1);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates2_2D;
	Coordinates2_2D.push_back(2);
	Coordinates2_2D.push_back(2);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates3_2D;
	Coordinates3_2D.push_back(3);
	Coordinates3_2D.push_back(2);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates4_2D;
	Coordinates4_2D.push_back(4);
	Coordinates4_2D.push_back(1);

	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point1_2D = eds->createIfcCartesianPoint();
	Point1_2D->setCoordinates(Coordinates1_2D);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point2_2D = eds->createIfcCartesianPoint();
	Point2_2D->setCoordinates(Coordinates2_2D);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point3_2D = eds->createIfcCartesianPoint();
	Point3_2D->setCoordinates(Coordinates3_2D);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point4_2D = eds->createIfcCartesianPoint();
	Point4_2D->setCoordinates(Coordinates4_2D);

	ifc2x3::List_IfcCartesianPoint_2_n ListOfIfcCartesianPoint_2D;
	ListOfIfcCartesianPoint_2D.push_back(Point1_2D);
	ListOfIfcCartesianPoint_2D.push_back(Point2_2D);
	ListOfIfcCartesianPoint_2D.push_back(Point3_2D);
	ListOfIfcCartesianPoint_2D.push_back(Point4_2D);

	BSpline_2D->setControlPointsList(ListOfIfcCartesianPoint_2D);

	Point->setBasisCurve(BSpline_2D);
	Point->setPointParameter(0.5);

	TEST_ASSERT(Point->getDim()==2);

///////////////////////////////////////////////////////////////////////////////////////////

	LOG_DEBUG("Create IfcBezierCurve"<< std::endl);
	Step::RefPtr<ifc2x3::IfcBSplineCurve> BSpline_3D = eds->createIfcBezierCurve();
	TEST_VALIDITY(BSpline_3D);

	ifc2x3::Array_IfcCartesianPoint_0_255 ControlPoint_3D = BSpline_3D->getControlPoints();
	Step::Integer IndexOnControlPoints_3D = BSpline_3D->getUpperIndexOnControlPoints();
	TEST_ASSERT(ControlPoint_3D.size()==256);
	TEST_ASSERT(IndexOnControlPoints_3D==0);

	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates1_3D;
	Coordinates1_3D.push_back(1);
	Coordinates1_3D.push_back(1);
	Coordinates1_3D.push_back(0);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates2_3D;
	Coordinates2_3D.push_back(2);
	Coordinates2_3D.push_back(2);
	Coordinates2_3D.push_back(0);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates3_3D;
	Coordinates3_3D.push_back(3);
	Coordinates3_3D.push_back(2);
	Coordinates3_3D.push_back(0);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates4_3D;
	Coordinates4_3D.push_back(4);
	Coordinates4_3D.push_back(1);
	Coordinates4_3D.push_back(0);

	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point1_3D = eds->createIfcCartesianPoint();
	Point1_3D->setCoordinates(Coordinates1_3D);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point2_3D = eds->createIfcCartesianPoint();
	Point2_3D->setCoordinates(Coordinates2_3D);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point3_3D = eds->createIfcCartesianPoint();
	Point3_3D->setCoordinates(Coordinates3_3D);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point4_3D = eds->createIfcCartesianPoint();
	Point4_3D->setCoordinates(Coordinates4_3D);

	ifc2x3::List_IfcCartesianPoint_2_n ListOfIfcCartesianPoint_3D;

#ifdef STEP_CHECK_RANGE
    try
    {
#endif
    ListOfIfcCartesianPoint_3D.push_back(Point1_3D);
	ListOfIfcCartesianPoint_3D.push_back(Point2_3D);
	ListOfIfcCartesianPoint_3D.push_back(Point3_3D);
	ListOfIfcCartesianPoint_3D.push_back(Point4_3D);
#ifdef STEP_CHECK_RANGE
    }
    catch(std::out_of_range e)
    {
        TEST_FAILURE((std::string("Exception : ") + e.what()).c_str());
    }
#endif
	BSpline_3D->setControlPointsList(ListOfIfcCartesianPoint_3D);

	Point->setBasisCurve(BSpline_3D);
	Point->setPointParameter(0.5);

	TEST_ASSERT(Point->getDim()==3);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
