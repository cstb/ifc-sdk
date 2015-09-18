#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcCompositeCurveSegment.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcCurve.h>
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

    Step::RefPtr<ifc2x3::IfcCompositeCurveSegment> CompositeCurveSegment = eds->createIfcCompositeCurveSegment();
    TEST_VALIDITY(CompositeCurveSegment);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "Test with a IfcBoundedCurve" << std::endl;

    Step::RefPtr<ifc2x3::IfcBSplineCurve> BSpline = eds->createIfcBezierCurve();
    TEST_VALIDITY(BSpline);
    CompositeCurveSegment->setParentCurve(BSpline);
    TEST_ASSERT(CompositeCurveSegment->getDim()==0);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ifc2x3::Array_IfcCartesianPoint_0_255 ControlPoint = BSpline->getControlPoints();
    Step::Integer IndexOnControlPoints = BSpline->getUpperIndexOnControlPoints();
    TEST_ASSERT(ControlPoint.size()==256);
    TEST_ASSERT(IndexOnControlPoints==0);

    ifc2x3::List_IfcLengthMeasure_1_3 Coordinates1;
    Coordinates1.push_back(1);
    Coordinates1.push_back(1);
    Coordinates1.push_back(0);
    Step::RefPtr< ifc2x3::IfcCartesianPoint > Point1 = eds->createIfcCartesianPoint();
    Point1->setCoordinates(Coordinates1);
    ifc2x3::List_IfcCartesianPoint_2_n ListOfIfcCartesianPoint;
    ListOfIfcCartesianPoint.push_back(Point1);
    BSpline->setControlPointsList(ListOfIfcCartesianPoint);
    CompositeCurveSegment->setParentCurve(BSpline);

    std::cout << "BSpline->getDim() = " << BSpline->getDim() << std::endl;
    TEST_ASSERT(BSpline->getDim()==3);
    std::cout << "CompositeCurveSegment->getDim() = " << CompositeCurveSegment->getDim() << std::endl;
    TEST_ASSERT(CompositeCurveSegment->getDim()==3);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "Test with a IfcConic" << std::endl;

    Step::RefPtr<ifc2x3::IfcConic> Circle = eds->createIfcCircle();
    TEST_VALIDITY(Circle);
    CompositeCurveSegment->setParentCurve(Circle);
    TEST_ASSERT(CompositeCurveSegment->getDim()==0);
/////////////////////////////////////////////////////////////////////////////////////////////////////////
    Step::RefPtr< ifc2x3::IfcAxis2Placement > Axis2Placement1 = new ifc2x3::IfcAxis2Placement();
    Step::RefPtr< ifc2x3::IfcAxis2Placement2D > Axis2Placement2D1 = eds->createIfcAxis2Placement2D();

    Step::RefPtr< ifc2x3::IfcDirection > Direction1 = eds->createIfcDirection();
    Direction1->getDirectionRatios().push_back(1);
    Direction1->getDirectionRatios().push_back(0);
    Step::RefPtr< ifc2x3::IfcCartesianPoint > Location1 = eds->createIfcCartesianPoint();
    Location1->getCoordinates().push_back(0);
    Location1->getCoordinates().push_back(0);

    Axis2Placement2D1->setRefDirection(Direction1);
    Axis2Placement2D1->setLocation(Location1);
    Axis2Placement1->setIfcAxis2Placement2D(Axis2Placement2D1.get());
    Circle->setPosition(Axis2Placement1);

    CompositeCurveSegment->setParentCurve(Circle);
    TEST_ASSERT(CompositeCurveSegment->getDim()==2);
//////////////////////////////////////////////////////////////////////////////////////////////////////////
    Step::RefPtr< ifc2x3::IfcAxis2Placement > Axis2Placement2 = new ifc2x3::IfcAxis2Placement();
    Step::RefPtr< ifc2x3::IfcAxis2Placement3D > Axis2Placement3D1 = eds->createIfcAxis2Placement3D();

    Step::RefPtr< ifc2x3::IfcDirection > Direction2 = eds->createIfcDirection();
    Direction2->getDirectionRatios().push_back(1);
    Direction2->getDirectionRatios().push_back(0);
    Direction2->getDirectionRatios().push_back(0);
    Step::RefPtr< ifc2x3::IfcCartesianPoint > Location2 = eds->createIfcCartesianPoint();
    Location2->getCoordinates().push_back(0);
    Location2->getCoordinates().push_back(0);
    Location2->getCoordinates().push_back(0);

    Axis2Placement3D1->setRefDirection(Direction2);
    Axis2Placement3D1->setLocation(Location2);
    Axis2Placement2->setIfcAxis2Placement3D(Axis2Placement3D1.get());

    Circle->setPosition(Axis2Placement2);
    CompositeCurveSegment->setParentCurve(Circle);
    TEST_ASSERT(CompositeCurveSegment->getDim()==3);

///////////////////////////////////////////////////////////////////////////////////////////////////////
    Step::RefPtr<ifc2x3::IfcConic> Ellipse = eds->createIfcEllipse();
    TEST_VALIDITY(Ellipse);
    CompositeCurveSegment->setParentCurve(Ellipse);
    TEST_ASSERT(CompositeCurveSegment->getDim()==0);

    Step::RefPtr< ifc2x3::IfcAxis2Placement > Axis2Placement3 = new ifc2x3::IfcAxis2Placement();
    Step::RefPtr< ifc2x3::IfcAxis2Placement2D > Axis2Placement2D2 = eds->createIfcAxis2Placement2D();

    Step::RefPtr< ifc2x3::IfcDirection > Direction3 = eds->createIfcDirection();
    Direction3->getDirectionRatios().push_back(1);
    Direction3->getDirectionRatios().push_back(0);
    Step::RefPtr< ifc2x3::IfcCartesianPoint > Location3 = eds->createIfcCartesianPoint();
    Location3->getCoordinates().push_back(0);
    Location3->getCoordinates().push_back(0);

    Axis2Placement2D2->setRefDirection(Direction3);
    Axis2Placement2D2->setLocation(Location3);
    Axis2Placement3->setIfcAxis2Placement2D(Axis2Placement2D2.get());
    Ellipse->setPosition(Axis2Placement3);
    CompositeCurveSegment->setParentCurve(Ellipse);
    TEST_ASSERT(CompositeCurveSegment->getDim()==2);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Step::RefPtr< ifc2x3::IfcAxis2Placement > Axis2Placement4 = new ifc2x3::IfcAxis2Placement();
    Step::RefPtr< ifc2x3::IfcAxis2Placement3D > Axis2Placement3D2 = eds->createIfcAxis2Placement3D();

    Step::RefPtr< ifc2x3::IfcDirection > Direction4 = eds->createIfcDirection();
    Direction4->getDirectionRatios().push_back(1);
    Direction4->getDirectionRatios().push_back(0);
    Direction4->getDirectionRatios().push_back(0);
    Step::RefPtr< ifc2x3::IfcCartesianPoint > Location4 = eds->createIfcCartesianPoint();
    Location4->getCoordinates().push_back(0);
    Location4->getCoordinates().push_back(0);
    Location4->getCoordinates().push_back(0);

    Axis2Placement3D2->setRefDirection(Direction4);
    Axis2Placement3D2->setLocation(Location4);
    Axis2Placement3->setIfcAxis2Placement3D(Axis2Placement3D2.get());
    Ellipse->setPosition(Axis2Placement3);
    CompositeCurveSegment->setParentCurve(Ellipse);
    TEST_ASSERT(CompositeCurveSegment->getDim()==3);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "Test with a IfcLine" << std::endl;

    Step::RefPtr<ifc2x3::IfcLine> Line = eds->createIfcLine();
    TEST_VALIDITY(Line);
    CompositeCurveSegment->setParentCurve(Line);
    TEST_ASSERT(CompositeCurveSegment->getDim()==0);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Step::RefPtr< ifc2x3::IfcCartesianPoint > CartesianPoint1 = eds->createIfcCartesianPoint();

    ifc2x3::List_IfcLengthMeasure_1_3 LPoint1;
    LPoint1.push_back(0.0);
    LPoint1.push_back(0.0);
    CartesianPoint1->setCoordinates(LPoint1);
    Line->setPnt(CartesianPoint1);
    CompositeCurveSegment->setParentCurve(Line);
    TEST_ASSERT(CompositeCurveSegment->getDim()==2);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Step::RefPtr< ifc2x3::IfcCartesianPoint > CartesianPoint2 = eds->createIfcCartesianPoint();

    ifc2x3::List_IfcLengthMeasure_1_3 LPoint2;
    LPoint2.push_back(0.0);
    LPoint2.push_back(0.0);
    LPoint2.push_back(0.0);
    CartesianPoint2->setCoordinates(LPoint2);
    Line->setPnt(CartesianPoint2);
    CompositeCurveSegment->setParentCurve(Line);
    TEST_ASSERT(CompositeCurveSegment->getDim()==3);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "Test with a IfcOffsetCurve2D" << std::endl;

    Step::RefPtr<ifc2x3::IfcOffsetCurve2D> OffsetCurve2D = eds->createIfcOffsetCurve2D();
    TEST_VALIDITY(OffsetCurve2D);
    CompositeCurveSegment->setParentCurve(OffsetCurve2D);
    TEST_ASSERT(CompositeCurveSegment->getDim()==2);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "Test with a IfcOffsetCurve3D" << std::endl;

    Step::RefPtr<ifc2x3::IfcOffsetCurve3D> OffsetCurve3D = eds->createIfcOffsetCurve3D();
    TEST_VALIDITY(OffsetCurve3D);
    CompositeCurveSegment->setParentCurve(OffsetCurve3D);
    TEST_ASSERT(CompositeCurveSegment->getDim()==3);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
