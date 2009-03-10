#include <ifc2x3/SPFReader.h>
#include <ifc2x3/SPFWriter.h>
#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcProject.h>
#include <ifc2x3/IfcLocalPlacement.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcAxis2Placement2D.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcUnit.h>

#include "UUIDGenerator.h"
#include "CreateGeometricRepresentationVisitor.h"

#include <iostream>
#include <stdio.h>
#include <vector>

#ifdef WIN32
#include <time.h>
#endif

void initOwnerHistory(ifc2x3::IfcOwnerHistory* theOwnerHistory,
                      std::string userID, std::string userFN, std::string userLN,
                      std::string orgID, std::string orgName,
                      std::string appVersion, std::string appID, std::string appName)
{
   theOwnerHistory->getOwningUser()->getThePerson()->setId(userID);
   theOwnerHistory->getOwningUser()->getThePerson()->setGivenName(userFN);
   theOwnerHistory->getOwningUser()->getThePerson()->setFamilyName(userLN);

   theOwnerHistory->getOwningUser()->getTheOrganization()->setId(orgID);
   theOwnerHistory->getOwningUser()->getTheOrganization()->setName(orgName);

   theOwnerHistory->getOwningApplication()->setVersion(appVersion);
   theOwnerHistory->getOwningApplication()->setApplicationIdentifier(appID);
   theOwnerHistory->getOwningApplication()->setApplicationFullName(appName);

#ifdef WIN32
   time_t ltime;
   time( &ltime );
   theOwnerHistory->setCreationDate((ifc2x3::IfcTimeStamp)ltime);
#endif
}

void initRootProperties(ifc2x3::IfcRoot* entity, std::string name)
{
   entity->setGlobalId(UUIDGenerator::generateIfcGloballyUniqueId());
   entity->setName(name);
}

ifc2x3::IfcRelAggregates* linkByAggregate(
   ifc2x3::IfcObjectDefinition* relating,
   ifc2x3::IfcObjectDefinition* related)
{
   static unsigned int count = 0;

   char buffer[128];
#ifdef WIN32
   sprintf_s(buffer,"%d",count);
#else
   sprintf(buffer,"%d", count);
#endif

   Step::RefPtr< ifc2x3::ExpressDataSet > mDataSet = (ifc2x3::ExpressDataSet*)relating->getExpressDataSet();
   ifc2x3::IfcRelAggregates* agg = mDataSet->createIfcRelAggregates().get();
   initRootProperties(agg,std::string("Aggregate") + buffer);

   agg->setRelatingObject(relating);
   agg->getRelatedObjects().insert(related);
   return agg;
}

ifc2x3::IfcRelContainedInSpatialStructure* linkByContainedInSpatial(
   ifc2x3::IfcSpatialStructureElement* relating,
   ifc2x3::IfcProduct* related)
{
   static unsigned int count = 0;
   char buffer[128];
   Step::RefPtr< ifc2x3::ExpressDataSet > mDataSet = (ifc2x3::ExpressDataSet*)relating->getExpressDataSet();
   ifc2x3::IfcRelContainedInSpatialStructure* contained = 
      mDataSet->createIfcRelContainedInSpatialStructure().get();
#ifdef WIN32
   sprintf_s(buffer,"%d",count);
#else
   sprintf(buffer,"%d", count);
#endif
   initRootProperties(contained,std::string("ContainedInSpatial") + buffer);

   contained->setRelatingStructure(relating);
   contained->getRelatedElements().insert(related);
   return contained;
}

ifc2x3::IfcRelConnectsPathElements* linkByConnectsPathElements(
   ifc2x3::IfcElement* relating, ifc2x3::IfcConnectionTypeEnum relatingConnectionType,
   ifc2x3::IfcElement* related, ifc2x3::IfcConnectionTypeEnum relatedConnectionType)
{
   static unsigned int count = 0;
   char buffer[128];
   Step::RefPtr< ifc2x3::ExpressDataSet > mDataSet = (ifc2x3::ExpressDataSet*)relating->getExpressDataSet();
   ifc2x3::IfcRelConnectsPathElements* connects = 
      mDataSet->createIfcRelConnectsPathElements().get();
#ifdef WIN32
   sprintf_s(buffer,"%d",count);
#else
   sprintf(buffer,"%d", count);
#endif
   initRootProperties(connects,std::string("ConnectsPathElements") + buffer);

   connects->setRelatingElement(relating);
   connects->setRelatingConnectionType(relatingConnectionType);
   connects->setRelatedElement(related);
   connects->setRelatedConnectionType(relatedConnectionType);

   return connects;
}

ifc2x3::IfcRelSpaceBoundary* linkBySpaceBoundary(
   ifc2x3::IfcSpace* relating,
   ifc2x3::IfcElement* related)
{
   static unsigned int count = 0;
   char buffer[128];
   Step::RefPtr< ifc2x3::ExpressDataSet > mDataSet = (ifc2x3::ExpressDataSet*)relating->getExpressDataSet();
   ifc2x3::IfcRelSpaceBoundary* connects = 
      mDataSet->createIfcRelSpaceBoundary().get();
#ifdef WIN32
   sprintf_s(buffer,"%d",count);
#else
   sprintf(buffer,"%d", count);
#endif
   initRootProperties(connects,std::string("SpaceBoundary") + buffer);

   connects->setRelatingSpace(relating);
   connects->setRelatedBuildingElement(related);
   connects->setPhysicalOrVirtualBoundary(ifc2x3::IfcPhysicalOrVirtualEnum_PHYSICAL);
   connects->setInternalOrExternalBoundary(ifc2x3::IfcInternalOrExternalEnum_INTERNAL);

   return connects;
}

ifc2x3::IfcRelVoidsElement* linkByVoidsElement(
   ifc2x3::IfcElement* relatingBuildingElement,
   ifc2x3::IfcFeatureElementSubtraction* relatedOpeningElement)
{
   static unsigned int count = 0;
   char buffer[128];
   Step::RefPtr< ifc2x3::ExpressDataSet > mDataSet = 
      (ifc2x3::ExpressDataSet*)relatingBuildingElement->getExpressDataSet();
   ifc2x3::IfcRelVoidsElement* relVoidsElement = 
      mDataSet->createIfcRelVoidsElement().get();
#ifdef WIN32
   sprintf_s(buffer,"%d",count);
#else
   sprintf(buffer,"%d", count);
#endif
   initRootProperties(relVoidsElement,std::string("VoidsElement") + buffer);

   ifc2x3::IfcLocalPlacement * localPlacement = (ifc2x3::IfcLocalPlacement*)relatedOpeningElement->getObjectPlacement();
   localPlacement->setPlacementRelTo(relatingBuildingElement->getObjectPlacement());

   relVoidsElement->setRelatingBuildingElement(relatingBuildingElement);
   relVoidsElement->setRelatedOpeningElement(relatedOpeningElement);

   return relVoidsElement;
}

ifc2x3::IfcRelFillsElement* linkByFillsElement(
   ifc2x3::IfcOpeningElement* relatingOpeningElement,
   ifc2x3::IfcElement* relatedBuildingElement)
{
   static unsigned int count = 0;
   char buffer[128];
   Step::RefPtr< ifc2x3::ExpressDataSet > mDataSet = 
      (ifc2x3::ExpressDataSet*)relatingOpeningElement->getExpressDataSet();
   ifc2x3::IfcRelFillsElement* relFillsElement = 
      mDataSet->createIfcRelFillsElement().get();
#ifdef WIN32
   sprintf_s(buffer,"%d",count);
#else
   sprintf(buffer,"%d", count);
#endif
   initRootProperties(relFillsElement,std::string("FillsElement") + buffer);

   ifc2x3::IfcLocalPlacement * localPlacement = (ifc2x3::IfcLocalPlacement*)relatedBuildingElement->getObjectPlacement();
   localPlacement->setPlacementRelTo(relatingOpeningElement->getObjectPlacement());

   relFillsElement->setRelatingOpeningElement(relatingOpeningElement);
   relFillsElement->setRelatedBuildingElement(relatedBuildingElement);

   return relFillsElement;
}

int main(int argc, char **argv)
{
   std::cout << "Ifc2x3 SDK simple example: how to build an Ifc model?" << std::endl;
	
   // ** First build an ExpressDataSet
   Step::RefPtr< ifc2x3::ExpressDataSet > mDataSet = new ifc2x3::ExpressDataSet();

   // ** Geometric representation stuff
   std::vector<double> points, points2;
   std::vector<double> position, placement;
   CreateGeometricRepresentationVisitor cwrv(mDataSet.get());

   // ** Then, build the header
   Step::SPFHeader theHeader;
   theHeader.getFileDescription().description.push_back("The very first model built from CSTB Ifc2x3 C++ SDK");

#ifdef WIN32
   char buf[128];
   struct tm t;
   time_t ltime;
   time(&ltime);
   localtime_s(&t,&ltime);
   sprintf_s(buf,"%.4i-%.2i-%.2iT%.2i:%.2i:%.2i",
      t.tm_year+1900,t.tm_mon+1,t.tm_mday,t.tm_hour,t.tm_min,t.tm_sec);
   theHeader.getFileName().timeStamp = buf;
#else // WIN32
   theHeader.getFileName().timeStamp = "2008-07-24T18:57:00";
#endif // WIN32
   theHeader.getFileSchema().schemaIdentifiers.push_back("IFC2X3");
   mDataSet->setHeader(theHeader);

   // Build the project
   Step::RefPtr<ifc2x3::IfcProject> theProject = mDataSet->createIfcProject();
   // Init root properties
   initRootProperties(theProject.get(),"Simple building");
   theProject->setLongName("Simple building model for testing");

   // Build the project owner history
   Step::RefPtr< ifc2x3::IfcOwnerHistory > theOwnerHistory = mDataSet->createIfcOwnerHistory();
   // - Build the owning user
   Step::RefPtr<ifc2x3::IfcPersonAndOrganization> thePersonOrg = mDataSet->createIfcPersonAndOrganization();
   Step::RefPtr<ifc2x3::IfcPerson> thePerson = mDataSet->createIfcPerson();
   thePersonOrg->setThePerson(thePerson);
   Step::RefPtr<ifc2x3::IfcOrganization> theOrganization = mDataSet->createIfcOrganization();
   thePersonOrg->setTheOrganization(theOrganization);
   theOwnerHistory->setOwningUser(thePersonOrg);
   // - Build the owning application
   Step::RefPtr<ifc2x3::IfcApplication> theApplication = mDataSet->createIfcApplication();
   theApplication->setApplicationDeveloper(theOrganization);
   theOwnerHistory->setOwningApplication(theApplication);
   // Init the owner history
   initOwnerHistory(theOwnerHistory.get(),"GP","Guillaume","PICINBONO","CSTB_MOD-EVE",
      "CSTB MOD-EVE Team","1.0.0","IFC2X3_C++_SDK","IFC 2x3 C++ SDK");
   theProject->setOwnerHistory(theOwnerHistory);

   // set the units
   Step::RefPtr<ifc2x3::IfcUnitAssignment> theProjectUnits = mDataSet->createIfcUnitAssignment();
   Step::RefPtr< ifc2x3::IfcUnit > unitSelect = new ifc2x3::IfcUnit();
   Step::RefPtr< ifc2x3::IfcSIUnit > unit = mDataSet->createIfcSIUnit();
   unit->setUnitType(ifc2x3::IfcUnitEnum_LENGTHUNIT);
   unit->setName(ifc2x3::IfcSIUnitName_METRE);
   unitSelect->setIfcNamedUnit(unit.get());
   theProjectUnits->getUnits().insert(unitSelect);
   theProject->setUnitsInContext(theProjectUnits);

   // Build an Ifc site
   Step::RefPtr<ifc2x3::IfcSite> theSite = mDataSet->createIfcSite();
   initRootProperties(theSite.get(),"The site");
   theSite->setCompositionType(ifc2x3::IfcElementCompositionEnum_ELEMENT);
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(-100.0); points.push_back(-100.0);
   points.push_back(100.0); points.push_back(-100.0);
   points.push_back(100.0); points.push_back(100.0);
   points.push_back(-100.0); points.push_back(100.0);
   cwrv.set2DPolyline(points);
   if ( !theSite->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating site representation" << std::endl;
   }
   // Link (Project <--> Site)
   linkByAggregate(theProject.get(), theSite.get());

   // Build an Ifc Building
   Step::RefPtr<ifc2x3::IfcBuilding> theBuilding = mDataSet->createIfcBuilding();
   initRootProperties(theBuilding.get(),"The building");
   theBuilding->setCompositionType(ifc2x3::IfcElementCompositionEnum_ELEMENT);
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(-10.0); points.push_back(-10.0);
   points.push_back(30.0); points.push_back(-10.0);
   points.push_back(30.0); points.push_back(30.0);
   points.push_back(-10.0); points.push_back(30.0);
   cwrv.set2DPolyline(points);
   if ( !theBuilding->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating building representation" << std::endl;
   }
   // Link (Site <--> Building)
   linkByAggregate(theSite.get(), theBuilding.get());

   // Build an Ifc Building Storey
   Step::RefPtr<ifc2x3::IfcBuildingStorey> theGroundFloor = mDataSet->createIfcBuildingStorey();
   initRootProperties(theGroundFloor.get(),"The ground floor");
   theGroundFloor->setCompositionType(ifc2x3::IfcElementCompositionEnum_ELEMENT);
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.0); points.push_back(0.0);
   points.push_back(20.0); points.push_back(0.0);
   points.push_back(20.0); points.push_back(20.0);
   points.push_back(0.0); points.push_back(20.0);
   cwrv.set2DPolyline(points);
   if ( !theGroundFloor->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating building storey representation" << std::endl;
   }
   // Link (Building <--> Storey)
   linkByAggregate(theBuilding.get(), theGroundFloor.get());

   // Build an Ifc Slab
   Step::RefPtr<ifc2x3::IfcSlab> theGroundFloorSlab = mDataSet->createIfcSlab();
   initRootProperties(theGroundFloorSlab.get(),"Ground floor slab");
   theGroundFloorSlab->setPredefinedType(ifc2x3::IfcSlabTypeEnum_FLOOR);
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.0); points.push_back(0.0);
   points.push_back(20.0); points.push_back(0.0);
   points.push_back(20.0); points.push_back(15.0);
   points.push_back(15.0); points.push_back(15.0);
   points.push_back(15.0); points.push_back(20.0);
   points.push_back(0.0); points.push_back(20.0);
   cwrv.set2DPolyline(points);
   position.push_back(0.0);
   position.push_back(0.0);
   position.push_back(-0.3);
   cwrv.setPosition(position);
   cwrv.setExtrusionDepth(0.3);
   if ( !theGroundFloorSlab->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating slab representation" << std::endl;
   }
   // Link (Storey <--> Wall)
   linkByContainedInSpatial(theGroundFloor.get(), theGroundFloorSlab.get());

   // Build an Ifc Wall
   Step::RefPtr<ifc2x3::IfcWallStandardCase> theWall1 = mDataSet->createIfcWallStandardCase();
   // Init root properties
   initRootProperties(theWall1.get(),"Wall #1");
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.0); points.push_back(0.0);
   points.push_back(14.4); points.push_back(0.0);
   points.push_back(14.4); points.push_back(0.2);
   points.push_back(0.0); points.push_back(0.2);
   cwrv.set2DPolyline(points);
   position.push_back(0.3);
   position.push_back(0.0);
   position.push_back(0.0);
   cwrv.setPosition(position);
   cwrv.setExtrusionDepth(3.5);
   if ( !theWall1->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Add a second layer to the wall
   points2.clear();
   position.clear();
   placement.clear();
   points2.push_back(0.0); points2.push_back(0.0);
   points2.push_back(14.4); points2.push_back(0.0);
   points2.push_back(14.4); points2.push_back(0.1);
   points2.push_back(0.0); points2.push_back(0.1);
   cwrv.set2DPolyline(points2);
   position.push_back(0.3);
   position.push_back(0.2);
   position.push_back(0.0);
   cwrv.setPosition(position);
   cwrv.setExtrusionDepth(3.0);
   if ( !theWall1->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Link (Storey <--> Wall)
   linkByContainedInSpatial(theGroundFloor.get(), theWall1.get());

   // Build an Ifc Wall
   Step::RefPtr<ifc2x3::IfcWallStandardCase> theWall4 = mDataSet->createIfcWallStandardCase();
   // Init root properties
   initRootProperties(theWall4.get(),"Wall #4");
   // Create representation
   position.clear();
   placement.clear();
   cwrv.set2DPolyline(points);
   position.push_back(0.3);
   position.push_back(14.8);
   position.push_back(0.0);
   cwrv.setPosition(position);
   cwrv.setExtrusionDepth(3.5);
   if ( !theWall4->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Add a second layer to the wall
   position.clear();
   placement.clear();
   cwrv.set2DPolyline(points2);
   position.push_back(0.3);
   position.push_back(14.7);
   position.push_back(0.0);
   cwrv.setPosition(position);
   cwrv.setExtrusionDepth(3.0);
   if ( !theWall4->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Add a second layer to the wall
   position.clear();
   placement.clear();
   position.push_back(0.3);
   position.push_back(15.0);
   position.push_back(0.0);
   cwrv.setPosition(position);
   cwrv.setExtrusionDepth(3.0);
   if ( !theWall4->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Link (Storey <--> Wall)
   linkByContainedInSpatial(theGroundFloor.get(), theWall4.get());

   // Build an Ifc Wall
   Step::RefPtr<ifc2x3::IfcWallStandardCase> theWall5 = mDataSet->createIfcWallStandardCase();
   // Init root properties
   initRootProperties(theWall5.get(),"Wall #5");
   // Create representation
   position.clear();
   placement.clear();
   cwrv.set2DPolyline(points);
   position.push_back(0.3);
   position.push_back(19.8);
   position.push_back(0.0);
   cwrv.setPosition(position);
   cwrv.setExtrusionDepth(3.5);
   if ( !theWall5->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Add a second layer to the wall
   position.clear();
   placement.clear();
   cwrv.set2DPolyline(points2);
   position.push_back(0.3);
   position.push_back(19.7);
   position.push_back(0.0);
   cwrv.setPosition(position);
   cwrv.setExtrusionDepth(3.0);
   if ( !theWall5->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Link (Storey <--> Wall)
   linkByContainedInSpatial(theGroundFloor.get(), theWall5.get());

   // Build another Ifc Wall
   Step::RefPtr<ifc2x3::IfcWallStandardCase> theWall2 = mDataSet->createIfcWallStandardCase();
   // Init root properties
   initRootProperties(theWall2.get(),"Wall #2");
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.0); points.push_back(0.0);
   points.push_back(0.0); points.push_back(20.0);
   points.push_back(0.3); points.push_back(20.0);
   points.push_back(0.3); points.push_back(0.0);
   cwrv.set2DPolyline(points);
   cwrv.setExtrusionDepth(3.5);
   if ( !theWall2->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Link (Storey <--> Wall)
   linkByContainedInSpatial(theGroundFloor.get(), theWall2.get());
   // Link (Wall <--> Wall)
   linkByConnectsPathElements(theWall2.get(),ifc2x3::IfcConnectionTypeEnum_ATSTART,
      theWall1.get(),ifc2x3::IfcConnectionTypeEnum_ATSTART);
   linkByConnectsPathElements(theWall2.get(),ifc2x3::IfcConnectionTypeEnum_ATPATH,
      theWall4.get(),ifc2x3::IfcConnectionTypeEnum_ATSTART);
   linkByConnectsPathElements(theWall2.get(),ifc2x3::IfcConnectionTypeEnum_ATEND,
      theWall5.get(),ifc2x3::IfcConnectionTypeEnum_ATSTART);

#if 0
   // Build another Ifc Wall
   Step::RefPtr<ifc2x3::IfcWallStandardCase> theWall3 = mDataSet->createIfcWallStandardCase();
   // Init root properties
   initRootProperties(theWall3.get(),"Wall #3");
   // Create representation
   position.clear();
   placement.clear();
   placement.push_back(14.7);
   placement.push_back(0.0);
   placement.push_back(0.0);
   cwrv.setLocalPlacement(placement);
   cwrv.setExtrusionDepth(3.5);
   if ( !theWall3->acceptVisitor(&cwrv) ) {
	   std::cerr << "ERROR while creating wall representation" << std::endl;
   }
#else
   // Build another Ifc Wall
   Step::RefPtr<ifc2x3::IfcWall> theWall3 = mDataSet->createIfcWall();
   // Init root properties
   initRootProperties(theWall3.get(),"Wall #3");
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   placement.push_back(14.7);
   placement.push_back(0.0);
   placement.push_back(0.0);
   cwrv.setLocalPlacement(placement);
   if ( !theWall3->acceptVisitor(&cwrv) ) {
	   std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Make this wall composed of several Layers
   // Layer one
   Step::RefPtr<ifc2x3::IfcBuildingElementPart> theWall3_1 = mDataSet->createIfcBuildingElementPart();
   initRootProperties(theWall3_1.get(),"Wall #3 - Layer 1");
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.0); points.push_back(0.0);
   points.push_back(0.0); points.push_back(20.0);
   points.push_back(0.3); points.push_back(20.0);
   points.push_back(0.3); points.push_back(0.0);
   cwrv.set2DPolyline(points);
   placement.push_back(14.7);
   placement.push_back(0.0);
   placement.push_back(0.0);
   cwrv.setLocalPlacement(placement);
   cwrv.setExtrusionDepth(3.5);
   if ( !theWall3_1->acceptVisitor(&cwrv) ) {
	   std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Link (Wall <--> Wall part)
   linkByAggregate(theWall3.get(), theWall3_1.get());
   // Layer two
   Step::RefPtr<ifc2x3::IfcBuildingElementPart> theWall3_2 = mDataSet->createIfcBuildingElementPart();
   initRootProperties(theWall3_2.get(),"Wall #3 - Layer 2");
   // Insulation parameters
   double element_width = 1.5;
   double inter_element_width = 0.02;
   double wall_width = 14.4;
   double assembled_element_width = inter_element_width;
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.0); points.push_back(0.3);
   points.push_back(0.0); points.push_back(0.3+element_width);
   points.push_back(0.1); points.push_back(0.3+element_width);
   points.push_back(0.1); points.push_back(0.3);
   cwrv.set2DPolyline(points);
   position.push_back(0.0);
   position.push_back(assembled_element_width);
   position.push_back(0.0);
   cwrv.setPosition(position);
   placement.push_back(14.58);
   placement.push_back(0.0);
   placement.push_back(0.0);
   cwrv.setExtrusionDepth(3.2);
   cwrv.setLocalPlacement(placement);
   if ( !theWall3_2->acceptVisitor(&cwrv) ) {
	   std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Add several geometric parts
   placement.clear();
   assembled_element_width += element_width + inter_element_width;
   while ( assembled_element_width < (wall_width - element_width - inter_element_width) ) {
      position.clear();
      position.push_back(0.0);
      position.push_back(assembled_element_width);
      position.push_back(0.0);
      cwrv.setPosition(position);
      cwrv.setExtrusionDepth(3.2);
      if ( !theWall3_2->acceptVisitor(&cwrv) ) {
         std::cerr << "ERROR while creating wall representation" << std::endl;
      }
      assembled_element_width += element_width + inter_element_width;
   }
   // Compute width of last element
   double lasting_width = wall_width - assembled_element_width - inter_element_width;
   points.clear();
   position.clear();
   points.push_back(0.0); points.push_back(0.3);
   points.push_back(0.0); points.push_back(0.3+lasting_width);
   points.push_back(0.1); points.push_back(0.3+lasting_width);
   points.push_back(0.1); points.push_back(0.3);
   cwrv.set2DPolyline(points);
   position.push_back(0.0);
   position.push_back(assembled_element_width);
   position.push_back(0.0);
   cwrv.setPosition(position);
   cwrv.setExtrusionDepth(3.2);
   if ( !theWall3_2->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating wall representation" << std::endl;
   }

   // Link (Wall <--> Wall part)
   linkByAggregate(theWall3.get(), theWall3_2.get());
   // Layer three
   Step::RefPtr<ifc2x3::IfcBuildingElementPart> theWall3_3 = mDataSet->createIfcBuildingElementPart();
   initRootProperties(theWall3_3.get(),"Wall #3 - Layer 3");
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.0); points.push_back(0.3);
   points.push_back(0.0); points.push_back(14.7);
   points.push_back(0.03); points.push_back(14.7);
   points.push_back(0.03); points.push_back(0.3);
   cwrv.set2DPolyline(points);
   placement.push_back(14.53);
   placement.push_back(0.0);
   placement.push_back(0.0);
   cwrv.setExtrusionDepth(3.0);
   cwrv.setLocalPlacement(placement);
   if ( !theWall3_3->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating wall representation" << std::endl;
   }
   // Link (Wall <--> Wall part)
   linkByAggregate(theWall3.get(), theWall3_3.get());
#endif
   // Link (Storey <--> Wall)
   linkByContainedInSpatial(theGroundFloor.get(), theWall3.get());

   // Define an Opening
   Step::RefPtr<ifc2x3::IfcOpeningElement> opening1 = mDataSet->createIfcOpeningElement();
   // Init root properties
   initRootProperties(opening1.get(),"Opening #1");
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.0); points.push_back(0.0);
   points.push_back(0.0); points.push_back(0.9);
   points.push_back(0.3); points.push_back(0.9);
   points.push_back(0.3); points.push_back(0.0);
   cwrv.set2DPolyline(points);
   cwrv.setExtrusionDepth(2.0);
   placement.push_back(0.0);
   placement.push_back(2.0);
   placement.push_back(0.0);
   cwrv.setLocalPlacement(placement);
   if ( !opening1->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating opening representation" << std::endl;
   }
   // Assign it to a wall
   //linkByVoidsElement(theWall3_1.get(),opening1.get());
   //linkByVoidsElement(theWall3_2.get(),opening1.get());
   linkByVoidsElement(theWall3.get(),opening1.get());

   // Define an Opening
   Step::RefPtr<ifc2x3::IfcOpeningElement> opening2 = mDataSet->createIfcOpeningElement();
   // Init root properties
   initRootProperties(opening2.get(),"Opening #2");
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.0); points.push_back(0.0);
   points.push_back(0.0); points.push_back(2.0);
   points.push_back(0.3); points.push_back(2.0);
   points.push_back(0.3); points.push_back(0.0);
   cwrv.set2DPolyline(points);
   cwrv.setExtrusionDepth(1.5);
   placement.push_back(0.0);
   placement.push_back(6.0);
   placement.push_back(1.0);
   cwrv.setLocalPlacement(placement);
   if ( !opening2->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating opening representation" << std::endl;
   }
   // Assign it to a wall
   linkByVoidsElement(theWall3.get(),opening2.get());

   // Define an Opening
   Step::RefPtr<ifc2x3::IfcOpeningElement> opening3 = mDataSet->createIfcOpeningElement();
   // Init root properties
   initRootProperties(opening3.get(),"Opening #3");
   // Create representation
   placement.clear();
   placement.push_back(0.0);
   placement.push_back(10.0);
   placement.push_back(1.0);
   cwrv.setLocalPlacement(placement);
   if ( !opening3->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating opening representation" << std::endl;
   }
   // Assign it to a wall
   linkByVoidsElement(theWall3.get(),opening3.get());

   // Define a window
   Step::RefPtr<ifc2x3::IfcWindow> window1 = mDataSet->createIfcWindow();
   // Init root properties
   initRootProperties(window1.get(),"Window #1");
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.0); points.push_back(0.0);
   points.push_back(0.0); points.push_back(2.0);
   points.push_back(0.05); points.push_back(2.0);
   points.push_back(0.05); points.push_back(0.0);
   cwrv.set2DPolyline(points);
   cwrv.setExtrusionDepth(1.5);
   position.push_back(0.1);
   position.push_back(0.0);
   position.push_back(0.0);
   cwrv.setPosition(position);
   if ( !window1->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating window representation" << std::endl;
   }
   // Assign it to a wall
   linkByContainedInSpatial(theGroundFloor.get(),window1.get());
   linkByFillsElement(opening3.get(),window1.get());

   // Build in Ifc Space
   Step::RefPtr<ifc2x3::IfcSpace> theSpace1 = mDataSet->createIfcSpace();
   // Init root properties
   initRootProperties(theSpace1.get(),"Space #1");
   theSpace1->setInteriorOrExteriorSpace(ifc2x3::IfcInternalOrExternalEnum_INTERNAL);
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.3); points.push_back(0.3);
   points.push_back(0.3); points.push_back(14.7);
   points.push_back(14.57); points.push_back(14.7);
   points.push_back(14.57); points.push_back(0.3);
   cwrv.set2DPolyline(points);
   cwrv.setExtrusionDepth(2.5);
   if ( !theSpace1->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating space representation" << std::endl;
   }
   // Link (Storey <--> Space)
   linkByAggregate(theGroundFloor.get(), theSpace1.get());
   // Link (Space <--> Building element)
   linkBySpaceBoundary(theSpace1.get(),theWall1.get());
   linkBySpaceBoundary(theSpace1.get(),theWall2.get());
   linkBySpaceBoundary(theSpace1.get(),theWall3.get());
   linkBySpaceBoundary(theSpace1.get(),theWall4.get());
   linkBySpaceBoundary(theSpace1.get(),opening1.get());
   linkBySpaceBoundary(theSpace1.get(),opening2.get());
   linkBySpaceBoundary(theSpace1.get(),opening3.get());

   // Build another Ifc Space
   Step::RefPtr<ifc2x3::IfcSpace> theSpace2 = mDataSet->createIfcSpace();
   // Init root properties
   initRootProperties(theSpace2.get(),"Space #2");
   theSpace1->setInteriorOrExteriorSpace(ifc2x3::IfcInternalOrExternalEnum_INTERNAL);
   // Create representation
   points.clear();
   position.clear();
   placement.clear();
   cwrv.init();
   points.push_back(0.3); points.push_back(15.1);
   points.push_back(0.3); points.push_back(19.7);
   points.push_back(14.7); points.push_back(19.7);
   points.push_back(14.7); points.push_back(15.1);
   cwrv.set2DPolyline(points);
   cwrv.setExtrusionDepth(2.5);
   if ( !theSpace2->acceptVisitor(&cwrv) ) {
      std::cerr << "ERROR while creating space representation" << std::endl;
   }
   // Link (Storey <--> Space)
   linkByAggregate(theGroundFloor.get(), theSpace2.get());
   // Link (Space <--> Building element)
   linkBySpaceBoundary(theSpace2.get(),theWall5.get());
   linkBySpaceBoundary(theSpace2.get(),theWall2.get());
   linkBySpaceBoundary(theSpace2.get(),theWall3.get());
   linkBySpaceBoundary(theSpace2.get(),theWall4.get());

   // ** Write to model to a file
   ifc2x3::SPFWriter writer(mDataSet.get());
   bool result = writer.writeSPF("data/Ifc/builtModel.ifc");

   return 1;
}
