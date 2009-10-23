#ifndef IFC2X3_IFCGRIDPLACEMENT_H
#define IFC2X3_IFCGRIDPLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcObjectPlacement.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcVirtualGridIntersection;

    /**
     * Generated class for the IfcGridPlacement Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcGridPlacement : public IfcObjectPlacement {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'PlacementLocation'.
         * 
         */
        virtual IfcVirtualGridIntersection *getPlacementLocation();
        /**
         * (const) Returns the value of the explicit attribute 'PlacementLocation'.
         * 
         * @return the value of the explicit attribute 'PlacementLocation'
         */
        virtual const IfcVirtualGridIntersection *getPlacementLocation() const;
        /**
         * Sets the value of the explicit attribute 'PlacementLocation'.
         * 
         * @param value
         */
        virtual void setPlacementLocation(const Step::RefPtr< IfcVirtualGridIntersection > &value);
        /**
         * unset the attribute 'PlacementLocation'.
         * 
         */
        virtual void unsetPlacementLocation();
        /**
         * Test if the attribute 'PlacementLocation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlacementLocation() const;
        /**
         * Gets the value of the explicit attribute 'PlacementRefDirection'.
         * 
         */
        virtual IfcVirtualGridIntersection *getPlacementRefDirection();
        /**
         * (const) Returns the value of the explicit attribute 'PlacementRefDirection'.
         * 
         * @return the value of the explicit attribute 'PlacementRefDirection'
         */
        virtual const IfcVirtualGridIntersection *getPlacementRefDirection() const;
        /**
         * Sets the value of the explicit attribute 'PlacementRefDirection'.
         * 
         * @param value
         */
        virtual void setPlacementRefDirection(const Step::RefPtr< IfcVirtualGridIntersection > &value);
        /**
         * unset the attribute 'PlacementRefDirection'.
         * 
         */
        virtual void unsetPlacementRefDirection();
        /**
         * Test if the attribute 'PlacementRefDirection' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlacementRefDirection() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGridPlacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcGridPlacement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGridPlacement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcVirtualGridIntersection > m_placementLocation;
        /**
         */
        Step::RefPtr< IfcVirtualGridIntersection > m_placementRefDirection;

    };

}

#endif // IFC2X3_IFCGRIDPLACEMENT_H
