#ifndef IFC2X3_IFCPLACEMENT_H
#define IFC2X3_IFCPLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianPoint;

    /**
     * Generated class for the IfcPlacement Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcPlacement : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'Location'.
         * 
         */
        virtual IfcCartesianPoint *getLocation();
        /**
         * (const) Returns the value of the explicit attribute 'Location'.
         * 
         * @return the value of the explicit attribute 'Location'
         */
        virtual const IfcCartesianPoint *getLocation() const;
        /**
         * Sets the value of the explicit attribute 'Location'.
         * 
         * @param value
         */
        virtual void setLocation(const Step::RefPtr< IfcCartesianPoint > &value);
        /**
         * unset the attribute 'Location'.
         * 
         */
        virtual void unsetLocation();
        /**
         * Test if the attribute 'Location' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLocation() const;
        /**
         * Gets the value of the derived attribute 'Dim'.
         * 
         */
        virtual IfcDimensionCount getDim() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPlacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcPlacement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPlacement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCartesianPoint > m_location;

    };

}

#endif // IFC2X3_IFCPLACEMENT_H
