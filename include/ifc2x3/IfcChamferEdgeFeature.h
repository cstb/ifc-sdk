#ifndef IFC2X3_IFCCHAMFEREDGEFEATURE_H
#define IFC2X3_IFCCHAMFEREDGEFEATURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcEdgeFeature.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcChamferEdgeFeature Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcChamferEdgeFeature : public IfcEdgeFeature {
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
         * Gets the value of the explicit attribute 'Width'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWidth();
        /**
         * (const) Returns the value of the explicit attribute 'Width'.
         * 
         * @return the value of the explicit attribute 'Width'
         */
        virtual const IfcPositiveLengthMeasure getWidth() const;
        /**
         * Sets the value of the explicit attribute 'Width'.
         * 
         * @param value
         */
        virtual void setWidth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Width'.
         * 
         */
        virtual void unsetWidth();
        /**
         * Test if the attribute 'Width' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWidth() const;
        /**
         * Gets the value of the explicit attribute 'Height'.
         * 
         */
        virtual IfcPositiveLengthMeasure getHeight();
        /**
         * (const) Returns the value of the explicit attribute 'Height'.
         * 
         * @return the value of the explicit attribute 'Height'
         */
        virtual const IfcPositiveLengthMeasure getHeight() const;
        /**
         * Sets the value of the explicit attribute 'Height'.
         * 
         * @param value
         */
        virtual void setHeight(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Height'.
         * 
         */
        virtual void unsetHeight();
        /**
         * Test if the attribute 'Height' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHeight() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcChamferEdgeFeature(Step::Id id, Step::SPFData *args);
        virtual ~IfcChamferEdgeFeature();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcChamferEdgeFeature &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_width;
        /**
         */
        Step::Real m_height;

    };

}

#endif // IFC2X3_IFCCHAMFEREDGEFEATURE_H
