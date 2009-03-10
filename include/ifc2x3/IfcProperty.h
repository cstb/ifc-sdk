/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCPROPERTY_H
#define IFC2X3_IFCPROPERTY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcProperty : public Step::BaseEntity {
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
        virtual IfcIdentifier getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcIdentifier getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcIdentifier &value);
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * Gets the value of the inverse attribute 'PropertyForDependance'.
         * 
         */
        Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyForDependance();
        /**
         * (const) Returns the value of the explicit attribute 'PropertyForDependance'.
         * 
         * @return the value of the explicit attribute 'PropertyForDependance'
         */
        virtual const Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyForDependance() const;
        /**
         * Gets the value of the inverse attribute 'PropertyDependsOn'.
         * 
         */
        Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyDependsOn();
        /**
         * (const) Returns the value of the explicit attribute 'PropertyDependsOn'.
         * 
         * @return the value of the explicit attribute 'PropertyDependsOn'
         */
        virtual const Inverse_Set_IfcPropertyDependencyRelationship_0_n &getPropertyDependsOn() const;
        /**
         * Gets the value of the inverse attribute 'PartOfComplex'.
         * 
         */
        Inverse_Set_IfcComplexProperty_0_1 &getPartOfComplex();
        /**
         * (const) Returns the value of the explicit attribute 'PartOfComplex'.
         * 
         * @return the value of the explicit attribute 'PartOfComplex'
         */
        virtual const Inverse_Set_IfcComplexProperty_0_1 &getPartOfComplex() const;
        friend class IfcPropertyDependencyRelationship;
        friend class IfcComplexProperty;
        friend class ExpressDataSet;
        friend class Inverted_IfcComplexProperty_HasProperties_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProperty(Step::Id id, Step::SPFData *args);
        virtual ~IfcProperty();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProperty &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        Inverse_Set_IfcPropertyDependencyRelationship_0_n m_propertyForDependance;
        /**
         */
        Inverse_Set_IfcPropertyDependencyRelationship_0_n m_propertyDependsOn;
        /**
         */
        Inverse_Set_IfcComplexProperty_0_1 m_partOfComplex;

    };

}

#endif // IFC2X3_IFCPROPERTY_H
