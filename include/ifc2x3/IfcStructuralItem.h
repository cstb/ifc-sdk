#ifndef IFC2X3_IFCSTRUCTURALITEM_H
#define IFC2X3_IFCSTRUCTURALITEM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcProduct.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcStructuralItem Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcStructuralItem : public IfcProduct {
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
         * Gets the value of the inverse attribute 'AssignedStructuralActivity'.
         * 
         */
        Inverse_Set_IfcRelConnectsStructuralActivity_0_n &getAssignedStructuralActivity();
        /**
         * (const) Returns the value of the explicit attribute 'AssignedStructuralActivity'.
         * 
         * @return the value of the explicit attribute 'AssignedStructuralActivity'
         */
        virtual const Inverse_Set_IfcRelConnectsStructuralActivity_0_n &getAssignedStructuralActivity() const;
        /**
         * Test if the attribute 'AssignedStructuralActivity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAssignedStructuralActivity() const;
        friend class IfcRelConnectsStructuralActivity;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralItem(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralItem();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralItem &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverse_Set_IfcRelConnectsStructuralActivity_0_n m_assignedStructuralActivity;

    };

}

#endif // IFC2X3_IFCSTRUCTURALITEM_H
