#ifndef CREATEGEOMETRICREPRESENTATIONVISITOR_H_
#define CREATEGEOMETRICREPRESENTATIONVISITOR_H_

#include <ifc2x3/InheritVisitor.h>
#include <ifc2x3/ExpressDataSet.h>

#include <vector>

class CreateGeometricRepresentationVisitor : public ifc2x3::InheritVisitor
{
public:
   typedef enum {UNDEF_GEOM=0,FOOTPRINT_CURVE2D,AXIS_CURVE2D,BODY_SWEPTSOLID} GeometryType;
   typedef enum {UNDEF_LOC=0,POSITION,LOCAL_PLACEMENT} LocationType;
   //! Constructor
   CreateGeometricRepresentationVisitor(ifc2x3::ExpressDataSet * eds);

   virtual bool visitIfcBuildingElementPart(ifc2x3::IfcBuildingElementPart * value);
   virtual bool visitIfcWallStandardCase(ifc2x3::IfcWallStandardCase * value);
   virtual bool visitIfcSpatialStructureElement(ifc2x3::IfcSpatialStructureElement * value);
   virtual bool visitIfcSlab(ifc2x3::IfcSlab * value);
   virtual bool visitIfcBeam(ifc2x3::IfcBeam * value);
   virtual bool visitIfcSpace(ifc2x3::IfcSpace * value);
   virtual bool visitIfcOpeningElement(ifc2x3::IfcOpeningElement * value);
   virtual bool visitIfcWindow(ifc2x3::IfcWindow * value);
   virtual bool visitIfcProduct(ifc2x3::IfcProduct * value);
   virtual bool visitIfcProductRepresentation(ifc2x3::IfcProductRepresentation * value);
   virtual bool visitIfcRepresentation(ifc2x3::IfcRepresentation * value);
   virtual bool visitIfcSweptAreaSolid(ifc2x3::IfcSweptAreaSolid * value);
   virtual bool visitIfcExtrudedAreaSolid(ifc2x3::IfcExtrudedAreaSolid * value);
   virtual bool visitIfcPlacement(ifc2x3::IfcPlacement * value);
   virtual bool visitIfcLocalPlacement(ifc2x3::IfcLocalPlacement * value);
   virtual bool visitIfcArbitraryClosedProfileDef(ifc2x3::IfcArbitraryClosedProfileDef * value);
   virtual bool visitIfcPolyline(ifc2x3::IfcPolyline * value);

   void set2DPolyline(std::vector<double> &poly) { m2DPolyline = poly; mUpdateGeometry = true; }
   void set3DPolyline(std::vector<double> &poly) { m3DPolyline = poly; mUpdateGeometry = true; }
   void setPosition(std::vector<double> &vec) { mPosition = vec; }
   void setLocalPlacement(std::vector<double> &vec) { mLocalPlacement = vec; }
   void setExtrusionDirection(std::vector<double> &vec) { mExtrusionDirection = vec; }
   void setExtrusionDepth(double depth) { mExtrusionDepth = depth; }
   void init();

protected:
   GeometryType mGeomType;
   LocationType mLocationType;
   Step::RefPtr< ifc2x3::ExpressDataSet > mDataSet;
   bool mPolyloopMustBeClosed;
   std::vector<double> m2DPolyline;
   std::vector<double> m3DPolyline;
   std::vector<double> mPosition;
   std::vector<double> mLocalPlacement;
   std::vector<double> mExtrusionDirection;
   double mExtrusionDepth;
   bool mUpdateGeometry;
   Step::RefPtr< ifc2x3::IfcPolyline > mPolyline;
};

#endif // ** CREATEGEOMETRICREPRESENTATIONVISITOR_H_ ** //
