#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcGeometricSet.h>
#include <ifc2x3/IfcGeometricSetSelect.h>
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

	Step::RefPtr<ifc2x3::IfcGeometricSet> GeometricSet = eds->createIfcGeometricSet();
	TEST_VALIDITY(GeometricSet);
	TEST_ASSERT(GeometricSet->getDim()==0);
//////////////////////////////////////////////////////////////////////////////////////////////////
LOG_DEBUG("Test with Curve"<< std::endl);
//////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("Test with IfcBezierCurve"<< std::endl);
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

	ifc2x3::Set_IfcGeometricSetSelect_1_n SetIfcGeometricSetSelectCurve;
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelect = new ifc2x3::IfcGeometricSetSelect();

	GeometricSetSelect->setIfcCurve(BSpline.get());
	SetIfcGeometricSetSelectCurve.insert(GeometricSetSelect);
	GeometricSet->setElements(SetIfcGeometricSetSelectCurve);
	TEST_ASSERT(GeometricSet->getDim()==3);
	LOG_DEBUG("GeometricSet->getDim()"<<GeometricSet->getDim()<< std::endl);

//////////////////////////////////////////////////////////////////////////////////////////////////
LOG_DEBUG("Test with Surface"<< std::endl);
//////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("Test with CurveBoundedPlane"<< std::endl);
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

	ifc2x3::Set_IfcGeometricSetSelect_1_n SetIfcGeometricSetSelectBoundedPlane;
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectSurface = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectSurface->setIfcSurface(CurveBoundedPlane.get());
	SetIfcGeometricSetSelectBoundedPlane.insert(GeometricSetSelectSurface);
	GeometricSet->setElements(SetIfcGeometricSetSelectBoundedPlane);
	TEST_ASSERT(GeometricSet->getDim()==3);
	LOG_DEBUG("GeometricSet->getDim() = "<<GeometricSet->getDim()<< std::endl);

//////////////////////////////////////////////////////////////////////////////////////////////////
LOG_DEBUG("Test with Point"<< std::endl);
//////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("Test with CartesianPoint"<< std::endl);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> Point11 = eds->createIfcCartesianPoint();
	Point11->getCoordinates().push_back(0);
	Point11->getCoordinates().push_back(0);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> Point12 = eds->createIfcCartesianPoint();
	Point12->getCoordinates().push_back(1);
	Point12->getCoordinates().push_back(1);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> Point13 = eds->createIfcCartesianPoint();
	Point13->getCoordinates().push_back(2);
	Point13->getCoordinates().push_back(2);
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint11 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint11->setIfcPoint(Point11.get());
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint12 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint12->setIfcPoint(Point12.get());
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint13 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint13->setIfcPoint(Point13.get());

	ifc2x3::Set_IfcGeometricSetSelect_1_n SetIfcGeometricSetSelect1;
	SetIfcGeometricSetSelect1.insert(GeometricSetSelectPoint11);
	SetIfcGeometricSetSelect1.insert(GeometricSetSelectPoint12);
	SetIfcGeometricSetSelect1.insert(GeometricSetSelectPoint13);
	GeometricSet->setElements(SetIfcGeometricSetSelect1);
	TEST_ASSERT(GeometricSet->getDim()==2);
	LOG_DEBUG("GeometricSet->getDim() = "<<GeometricSet->getDim()<< std::endl);

	Step::RefPtr<ifc2x3::IfcCartesianPoint> Point21 = eds->createIfcCartesianPoint();
	Point21->getCoordinates().push_back(0);
	Point21->getCoordinates().push_back(0);
	Point21->getCoordinates().push_back(0);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> Point22 = eds->createIfcCartesianPoint();
	Point22->getCoordinates().push_back(1);
	Point22->getCoordinates().push_back(1);
	Point22->getCoordinates().push_back(1);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> Point23 = eds->createIfcCartesianPoint();
	Point23->getCoordinates().push_back(2);
	Point23->getCoordinates().push_back(2);
	Point23->getCoordinates().push_back(2);
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint1 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint1->setIfcPoint(Point21.get());
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint2 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint2->setIfcPoint(Point22.get());
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint3 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint3->setIfcPoint(Point23.get());

	ifc2x3::Set_IfcGeometricSetSelect_1_n SetIfcGeometricSetSelect2;
	SetIfcGeometricSetSelect2.insert(GeometricSetSelectPoint1);
	SetIfcGeometricSetSelect2.insert(GeometricSetSelectPoint2);
	SetIfcGeometricSetSelect2.insert(GeometricSetSelectPoint3);
	
	GeometricSet->setElements(SetIfcGeometricSetSelect2);
	TEST_ASSERT(GeometricSet->getDim()==3);
	LOG_DEBUG("GeometricSet->getDim() = "<<GeometricSet->getDim()<< std::endl);

//////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("Test with IfcPointOnCurve"<< std::endl);
	Step::RefPtr<ifc2x3::IfcPointOnCurve> Point31 = eds->createIfcPointOnCurve();
	Point31->setBasisCurve(BSpline);
	Point31->setPointParameter(1);
	Step::RefPtr<ifc2x3::IfcPointOnCurve> Point32 = eds->createIfcPointOnCurve();
	Point32->setBasisCurve(BSpline);
	Point32->setPointParameter(1);
	Step::RefPtr<ifc2x3::IfcPointOnCurve> Point33 = eds->createIfcPointOnCurve();
	Point33->setBasisCurve(BSpline);
	Point33->setPointParameter(1);
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint31 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint31->setIfcPoint(Point31.get());
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint32 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint32->setIfcPoint(Point32.get());
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint33 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint33->setIfcPoint(Point33.get());

	ifc2x3::Set_IfcGeometricSetSelect_1_n SetIfcGeometricSetSelect3;
	SetIfcGeometricSetSelect3.insert(GeometricSetSelectPoint31);
	SetIfcGeometricSetSelect3.insert(GeometricSetSelectPoint32);
	SetIfcGeometricSetSelect3.insert(GeometricSetSelectPoint33);
	GeometricSet->setElements(SetIfcGeometricSetSelect3);
	TEST_ASSERT(GeometricSet->getDim()==3);
	LOG_DEBUG("GeometricSet->getDim() = "<<GeometricSet->getDim()<< std::endl);

//////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("Test with IfcPointOnSurface"<< std::endl);
	Step::RefPtr<ifc2x3::IfcPointOnSurface> Point51 = eds->createIfcPointOnSurface();
	Point51->setBasisSurface(CurveBoundedPlane);
	Point51->setPointParameterU(1);
	Point51->setPointParameterV(1);
	Step::RefPtr<ifc2x3::IfcPointOnSurface> Point52 = eds->createIfcPointOnSurface();
	Point52->setBasisSurface(CurveBoundedPlane);
	Point52->setPointParameterU(1);
	Point52->setPointParameterV(1);
	Step::RefPtr<ifc2x3::IfcPointOnSurface> Point53 = eds->createIfcPointOnSurface();
	Point53->setBasisSurface(CurveBoundedPlane);
	Point53->setPointParameterU(1);
	Point53->setPointParameterV(1);
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint51 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint51->setIfcPoint(Point51.get());
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint52 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint52->setIfcPoint(Point52.get());
	Step::RefPtr< ifc2x3::IfcGeometricSetSelect> GeometricSetSelectPoint53 = new ifc2x3::IfcGeometricSetSelect();
	GeometricSetSelectPoint53->setIfcPoint(Point53.get());

	ifc2x3::Set_IfcGeometricSetSelect_1_n SetIfcGeometricSetSelect5;
	SetIfcGeometricSetSelect5.insert(GeometricSetSelectPoint51);
	SetIfcGeometricSetSelect5.insert(GeometricSetSelectPoint52);
	SetIfcGeometricSetSelect5.insert(GeometricSetSelectPoint53);
	GeometricSet->setElements(SetIfcGeometricSetSelect5);
	TEST_ASSERT(GeometricSet->getDim()==3);
	LOG_DEBUG("GeometricSet->getDim() = "<<GeometricSet->getDim()<< std::endl);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
