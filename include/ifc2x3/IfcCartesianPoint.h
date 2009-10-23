#ifndef IFC2X3_IFCCARTESIANPOINT_H
#define IFC2X3_IFCCARTESIANPOINT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcPoint.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcCartesianPoint Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcCartesianPoint : public IfcPoint {
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
         * Gets the value of the explicit attribute 'Coordinates'.
         * 
         */
        virtual List_IfcLengthMeasure_1_3 &getCoordinates();
        /**
         * (const) Returns the value of the explicit attribute 'Coordinates'.
         * 
         * @return the value of the explicit attribute 'Coordinates'
         */
        virtual const List_IfcLengthMeasure_1_3 &getCoordinates() const;
        /**
         * Sets the value of the explicit attribute 'Coordinates'.
         * 
         * @param value
         */
        virtual void setCoordinates(const List_IfcLengthMeasure_1_3 &value);
        /**
         * unset the attribute 'Coordinates'.
         * 
         */
        virtual void unsetCoordinates();
        /**
         * Test if the attribute 'Coordinates' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCoordinates() const;
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
        IfcCartesianPoint(Step::Id id, Step::SPFData *args);
        virtual ~IfcCartesianPoint();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCartesianPoint &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_IfcLengthMeasure_1_3 m_coordinates;

    };

}

#endif // IFC2X3_IFCCARTESIANPOINT_H
