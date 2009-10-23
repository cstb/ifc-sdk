#ifndef IFC2X3_IFCSTRUCTURALCONNECTIONCONDITION_H
#define IFC2X3_IFCSTRUCTURALCONNECTIONCONDITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcStructuralConnectionCondition Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcStructuralConnectionCondition : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralConnectionCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralConnectionCondition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralConnectionCondition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;

    };

}

#endif // IFC2X3_IFCSTRUCTURALCONNECTIONCONDITION_H
