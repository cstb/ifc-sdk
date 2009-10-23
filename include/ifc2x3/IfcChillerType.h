#ifndef IFC2X3_IFCCHILLERTYPE_H
#define IFC2X3_IFCCHILLERTYPE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcChillerType Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcChillerType : public IfcEnergyConversionDeviceType {
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
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcChillerTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcChillerTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcChillerTypeEnum value);
        /**
         * unset the attribute 'PredefinedType'.
         * 
         */
        virtual void unsetPredefinedType();
        /**
         * Test if the attribute 'PredefinedType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPredefinedType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcChillerType(Step::Id id, Step::SPFData *args);
        virtual ~IfcChillerType();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcChillerType &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcChillerTypeEnum m_predefinedType;

    };

}

#endif // IFC2X3_IFCCHILLERTYPE_H
