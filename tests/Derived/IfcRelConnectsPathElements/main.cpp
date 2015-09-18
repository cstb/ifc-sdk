#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcRectangularTrimmedSurface.h>
#include <ifc2x3/IfcMaterialSelect.h>
#include <ifc2x3/IfcRelAssociates.h>
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr<ifc2x3::IfcRelConnectsPathElements> RelConnectsPathElements = eds->createIfcRelConnectsPathElements();
	TEST_VALIDITY(RelConnectsPathElements);
	LOG_DEBUG("RelConnectsPathElements->getRelatedLayerCount() = "<<RelConnectsPathElements->getRelatedLayerCount()<<std::endl);
	TEST_ASSERT(RelConnectsPathElements->getRelatedLayerCount()==0);
	LOG_DEBUG("RelConnectsPathElements->getRelatingLayerCount() = "<<RelConnectsPathElements->getRelatingLayerCount()<<std::endl);
	TEST_ASSERT(RelConnectsPathElements->getRelatingLayerCount()==0);
	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr<ifc2x3::IfcRoot> Root1 = eds->createIfcOccupant();
	Root1->setName("Root1");
	Root1->setDescription("Root1Description");
	Step::RefPtr<ifc2x3::IfcRoot> Root2 = eds->createIfcActionRequest();
	Root2->setName("Root2");
	Root2->setDescription("Root2Description");
	Step::RefPtr<ifc2x3::IfcRoot> Root3 = eds->createIfcAsset();
	Root3->setName("Root3");
	Root3->setDescription("Root3Description");

	Step::RefPtr<ifc2x3::IfcElement> Element1 = eds->createIfcBeam();
	Element1->setTag("Beam");
	Step::RefPtr<ifc2x3::IfcElement> Element2 = eds->createIfcBuildingElementPart();
	Element2->setTag("BuildingPart");

	/*Step::RefPtr<ifc2x3::IfcElement> Element3 = eds->createIfcReinforcingBar();
	Element3->setTag("Reinforcing");
	Step::RefPtr<ifc2x3::IfcElement> Element4 = eds->createIfcBuildingElementProxy();
	Element4->setTag("BuildingProxy");
	Step::RefPtr<ifc2x3::IfcElement> Element5 = eds->createIfcColumn();
	Element5->setTag("Column");
	Step::RefPtr<ifc2x3::IfcElement> Element6 = eds->createIfcCovering();
	Element6->setTag("Covering");
	Step::RefPtr<ifc2x3::IfcElement> Element7 = eds->createIfcCurtainWall();
	Element7->setTag("CurtainWall");
	Step::RefPtr<ifc2x3::IfcElement> Element8 = eds->createIfcDoor();
	Element8->setTag("Door");
	Step::RefPtr<ifc2x3::IfcElement> Element9 = eds->createIfcFooting();
	Element9->setTag("Footing");
	Step::RefPtr<ifc2x3::IfcElement> Element10 = eds->createIfcMember();
	Element10->setTag("Member");
	Step::RefPtr<ifc2x3::IfcElement> Element11 = eds->createIfcPile();
	Element11->setTag("Pile");
	Step::RefPtr<ifc2x3::IfcElement> Element12 = eds->createIfcPlate();
	Element12->setTag("Plate");
	Step::RefPtr<ifc2x3::IfcElement> Element13 = eds->createIfcRailing();
	Element13->setTag("Railing");
	Step::RefPtr<ifc2x3::IfcElement> Element14 = eds->createIfcRamp();
	Element14->setTag("Ramp");
	Step::RefPtr<ifc2x3::IfcElement> Element15 = eds->createIfcRampFlight();
	Element15->setTag("RampFlight");
	Step::RefPtr<ifc2x3::IfcElement> Element16 = eds->createIfcRoof();
	Element16->setTag("Roof");
	Step::RefPtr<ifc2x3::IfcElement> Element17 = eds->createIfcSlab();
	Element17->setTag("Slab");
	Step::RefPtr<ifc2x3::IfcElement> Element18 = eds->createIfcStair();
	Element18->setTag("Stair");
	Step::RefPtr<ifc2x3::IfcElement> Element19 = eds->createIfcStairFlight();
	Element19->setTag("Column");
	Step::RefPtr<ifc2x3::IfcElement> Element20 = eds->createIfcWall();
	Element20->setTag("Wall");
	Step::RefPtr<ifc2x3::IfcElement> Element21 = eds->createIfcWindow();
	Element21->setTag("Window");
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	ifc2x3::List_Integer_0_n RelatingPriorities;
	RelatingPriorities.push_back(0);
	RelatingPriorities.push_back(1);
	RelatingPriorities.push_back(2);
	ifc2x3::List_Integer_0_n RelatedPriorities;
	RelatedPriorities.push_back(0);
	RelatedPriorities.push_back(1);
	RelatedPriorities.push_back(2);
	RelatedPriorities.push_back(3);
	RelConnectsPathElements->setRelatingPriorities(RelatingPriorities);
	RelConnectsPathElements->setRelatedPriorities(RelatedPriorities);
	RelConnectsPathElements->setRelatedConnectionType(ifc2x3::IfcConnectionTypeEnum_ATPATH);
	RelConnectsPathElements->setRelatingConnectionType(ifc2x3::IfcConnectionTypeEnum_ATPATH);

	RelConnectsPathElements->setRelatingElement(Element1);
	RelConnectsPathElements->setRelatedElement(Element2);

	Step::RefPtr<ifc2x3::IfcBSplineCurve> BSpline1 = eds->createIfcBezierCurve();
//	TEST_VALIDITY(BSpline1);
//	TEST_ASSERT(BSpline1->getDim()==0);	

	ifc2x3::Array_IfcCartesianPoint_0_255 ControlPoint = BSpline1->getControlPoints();
	Step::Integer IndexOnControlPoints = BSpline1->getUpperIndexOnControlPoints();
//	TEST_ASSERT(ControlPoint.size()==256);
//	TEST_ASSERT(IndexOnControlPoints==0);

	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates1;
	Coordinates1.push_back(0);
	Coordinates1.push_back(0);
	Coordinates1.push_back(0);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point1 = eds->createIfcCartesianPoint();
	Point1->setCoordinates(Coordinates1);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates2;
	Coordinates2.push_back(1);
	Coordinates2.push_back(1);
	Coordinates2.push_back(0);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point2 = eds->createIfcCartesianPoint();
	Point2->setCoordinates(Coordinates2);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates3;
	Coordinates3.push_back(2);
	Coordinates3.push_back(1);
	Coordinates3.push_back(0);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point3 = eds->createIfcCartesianPoint();
	Point3->setCoordinates(Coordinates3);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates4;
	Coordinates4.push_back(3);
	Coordinates4.push_back(0);
	Coordinates4.push_back(0);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point4 = eds->createIfcCartesianPoint();
	Point1->setCoordinates(Coordinates4);
  	ifc2x3::List_IfcCartesianPoint_2_n ListOfIfcCartesianPoint;
	ListOfIfcCartesianPoint.push_back(Point1);
	ListOfIfcCartesianPoint.push_back(Point2);
	ListOfIfcCartesianPoint.push_back(Point3);
	ListOfIfcCartesianPoint.push_back(Point4);

	BSpline1->setControlPointsList(ListOfIfcCartesianPoint);
	//////////////////////
	Step::RefPtr<ifc2x3::IfcBSplineCurve> BSpline2 = eds->createIfcBezierCurve();
//	TEST_VALIDITY(BSpline2);
//	TEST_ASSERT(BSpline2->getDim()==0);	

	ifc2x3::Array_IfcCartesianPoint_0_255 ControlPoint2 = BSpline2->getControlPoints();
	Step::Integer IndexOnControlPoints2 = BSpline2->getUpperIndexOnControlPoints();
//	TEST_ASSERT(ControlPoint2.size()==256);
//	TEST_ASSERT(IndexOnControlPoints2==0);

	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates12;
	Coordinates12.push_back(1);
	Coordinates12.push_back(1);
	Coordinates12.push_back(0);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point12 = eds->createIfcCartesianPoint();
	Point12->setCoordinates(Coordinates12);
	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates22;
	Coordinates22.push_back(2);
	Coordinates22.push_back(1);
	Coordinates22.push_back(0);
	Step::RefPtr< ifc2x3::IfcCartesianPoint > Point22 = eds->createIfcCartesianPoint();
	Point22->setCoordinates(Coordinates22);

	ifc2x3::List_IfcCartesianPoint_2_n ListOfIfcCartesianPoint2;
	ListOfIfcCartesianPoint2.push_back(Point12);
	ListOfIfcCartesianPoint2.push_back(Point22);
	BSpline2->setControlPointsList(ListOfIfcCartesianPoint2);

	Step::RefPtr< ifc2x3::IfcConnectionCurveGeometry > ConnectionGeometry = eds->createIfcConnectionCurveGeometry();
	ConnectionGeometry->setCurveOnRelatingElement(BSpline1);
	ConnectionGeometry->setCurveOnRelatedElement(BSpline2);
	RelConnectsPathElements->setConnectionGeometry(ConnectionGeometry);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr< ifc2x3::IfcRelAssociates > RelAssociates = eds->createIfcRelAssociatesMaterial();
	dynamic_cast< ifc2x3::IfcRelAssociatesMaterial* >(RelAssociates.get())->getRelatedObjects().insert(Root1);
	dynamic_cast< ifc2x3::IfcRelAssociatesMaterial* >(RelAssociates.get())->getRelatedObjects().insert(Root2);
	dynamic_cast< ifc2x3::IfcRelAssociatesMaterial* >(RelAssociates.get())->getRelatedObjects().insert(Root3);
	dynamic_cast< ifc2x3::IfcRelAssociatesMaterial* >(RelAssociates.get())->getRelatedObjects().insert(Element1);
	dynamic_cast< ifc2x3::IfcRelAssociatesMaterial* >(RelAssociates.get())->getRelatedObjects().insert(Element2);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Step::RefPtr<ifc2x3::IfcMaterialSelect> MaterialSelectIfcMaterial = new ifc2x3::IfcMaterialSelect();
	Step::RefPtr<ifc2x3::IfcMaterial> Material = eds->createIfcMaterial();
	MaterialSelectIfcMaterial->setIfcMaterial(Material.get());
	dynamic_cast< ifc2x3::IfcRelAssociatesMaterial* >(RelAssociates.get())->setRelatingMaterial(MaterialSelectIfcMaterial);
	LOG_DEBUG("RelConnectsPathElements->getRelatedLayerCount() = "<<RelConnectsPathElements->getRelatedLayerCount()<<std::endl);
	TEST_ASSERT(RelConnectsPathElements->getRelatedLayerCount()==1);
	LOG_DEBUG("RelConnectsPathElements->getRelatingLayerCount() = "<<RelConnectsPathElements->getRelatingLayerCount()<<std::endl);
	TEST_ASSERT(RelConnectsPathElements->getRelatingLayerCount()==1);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Step::RefPtr<ifc2x3::IfcMaterialList> MaterialList = eds->createIfcMaterialList();
	Step::RefPtr<ifc2x3::IfcMaterialSelect> MaterialSelectIfcMaterialList = new ifc2x3::IfcMaterialSelect();
	MaterialSelectIfcMaterialList->setIfcMaterialList(MaterialList.get());
	dynamic_cast< ifc2x3::IfcRelAssociatesMaterial* >(RelAssociates.get())->setRelatingMaterial(MaterialSelectIfcMaterialList);
	LOG_DEBUG("RelConnectsPathElements->getRelatedLayerCount() = "<<RelConnectsPathElements->getRelatedLayerCount()<<std::endl);
	TEST_ASSERT(RelConnectsPathElements->getRelatedLayerCount()==0);
	LOG_DEBUG("RelConnectsPathElements->getRelatingLayerCount() = "<<RelConnectsPathElements->getRelatingLayerCount()<<std::endl);
	TEST_ASSERT(RelConnectsPathElements->getRelatingLayerCount()==0);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Step::RefPtr< ifc2x3::IfcMaterialSelect > MaterialSelectIfcMaterialLayerSetUsage = new ifc2x3::IfcMaterialSelect();
	Step::RefPtr< ifc2x3::IfcMaterialLayerSetUsage > MaterialLayerSetUsage = eds->createIfcMaterialLayerSetUsage();
	Step::RefPtr< ifc2x3::IfcMaterialLayerSet > MaterialLayerSet = eds->createIfcMaterialLayerSet();
	MaterialLayerSet->setLayerSetName("LayerSet");
	Step::RefPtr< ifc2x3::IfcMaterialLayer > MaterialLayer1 = eds->createIfcMaterialLayer();
	MaterialLayerSet->getMaterialLayers().push_back(MaterialLayer1);
	MaterialLayerSetUsage->setForLayerSet(MaterialLayerSet);
	MaterialSelectIfcMaterialLayerSetUsage->setIfcMaterialLayerSetUsage(MaterialLayerSetUsage.get());
	dynamic_cast< ifc2x3::IfcRelAssociatesMaterial* >(RelAssociates.get())->setRelatingMaterial(MaterialSelectIfcMaterialLayerSetUsage);
	LOG_DEBUG("RelConnectsPathElements->getRelatedLayerCount() = "<<RelConnectsPathElements->getRelatedLayerCount()<<std::endl);
	TEST_ASSERT(RelConnectsPathElements->getRelatedLayerCount()==1);
	LOG_DEBUG("RelConnectsPathElements->getRelatingLayerCount() = "<<RelConnectsPathElements->getRelatingLayerCount()<<std::endl);
	TEST_ASSERT(RelConnectsPathElements->getRelatingLayerCount()==1);
	Step::RefPtr< ifc2x3::IfcMaterialLayer > MaterialLayer2 = eds->createIfcMaterialLayer();
	MaterialLayerSet->getMaterialLayers().push_back(MaterialLayer2);
	MaterialLayerSetUsage->setForLayerSet(MaterialLayerSet);
	MaterialSelectIfcMaterialLayerSetUsage->setIfcMaterialLayerSetUsage(MaterialLayerSetUsage.get());
	dynamic_cast< ifc2x3::IfcRelAssociatesMaterial* >(RelAssociates.get())->setRelatingMaterial(MaterialSelectIfcMaterialLayerSetUsage);
	LOG_DEBUG("RelConnectsPathElements->getRelatedLayerCount() = "<<RelConnectsPathElements->getRelatedLayerCount()<<std::endl);
	TEST_ASSERT(RelConnectsPathElements->getRelatedLayerCount()==2);
	LOG_DEBUG("RelConnectsPathElements->getRelatingLayerCount() = "<<RelConnectsPathElements->getRelatingLayerCount()<<std::endl);
	TEST_ASSERT(RelConnectsPathElements->getRelatingLayerCount()==2);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
