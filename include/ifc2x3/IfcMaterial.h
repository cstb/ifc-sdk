#ifndef IFC2X3_IFCMATERIAL_H
#define IFC2X3_IFCMATERIAL_H
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
     * Generated class for the IfcMaterial Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcMaterial : public Step::BaseEntity {
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
        /**
         * Gets the value of the inverse attribute 'HasRepresentation'.
         * 
         */
        Inverse_Set_IfcMaterialDefinitionRepresentation_0_1 &getHasRepresentation();
        /**
         * (const) Returns the value of the explicit attribute 'HasRepresentation'.
         * 
         * @return the value of the explicit attribute 'HasRepresentation'
         */
        virtual const Inverse_Set_IfcMaterialDefinitionRepresentation_0_1 &getHasRepresentation() const;
        /**
         * Test if the attribute 'HasRepresentation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasRepresentation() const;
        /**
         * Gets the value of the inverse attribute 'ClassifiedAs'.
         * 
         */
        Inverse_Set_IfcMaterialClassificationRelationship_0_1 &getClassifiedAs();
        /**
         * (const) Returns the value of the explicit attribute 'ClassifiedAs'.
         * 
         * @return the value of the explicit attribute 'ClassifiedAs'
         */
        virtual const Inverse_Set_IfcMaterialClassificationRelationship_0_1 &getClassifiedAs() const;
        /**
         * Test if the attribute 'ClassifiedAs' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testClassifiedAs() const;
        friend class IfcMaterialDefinitionRepresentation;
        friend class ExpressDataSet;
        friend class IfcMaterialClassificationRelationship;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMaterial(Step::Id id, Step::SPFData *args);
        virtual ~IfcMaterial();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMaterial &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Inverse_Set_IfcMaterialDefinitionRepresentation_0_1 m_hasRepresentation;
        /**
         */
        Inverse_Set_IfcMaterialClassificationRelationship_0_1 m_classifiedAs;

    };

}

#endif // IFC2X3_IFCMATERIAL_H
