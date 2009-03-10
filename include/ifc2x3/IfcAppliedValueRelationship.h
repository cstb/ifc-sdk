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

#ifndef IFC2X3_IFCAPPLIEDVALUERELATIONSHIP_H
#define IFC2X3_IFCAPPLIEDVALUERELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class IfcAppliedValue;
    class IfcAppliedValueRelationship;

    /**
     */
    class Inverted_IfcAppliedValueRelationship_Components_type : public Set_IfcAppliedValue_1_n {
    public:
        /**
         */
        typedef Set_IfcAppliedValue_1_n::size_type size_type;

        /**
         */
        IfcAppliedValueRelationship *mOwner;
        /**
         */
        Inverted_IfcAppliedValueRelationship_Components_type();
        /**
         * @param owner
         */
        void setOwner(IfcAppliedValueRelationship *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcAppliedValue > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcAppliedValue > &value);

    };

    class CopyOp;
    class IfcAppliedValue;

    /**
     */
    class IFC2X3_DLL_DEF IfcAppliedValueRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ComponentOfTotal'.
         * 
         */
        virtual IfcAppliedValue *getComponentOfTotal();
        /**
         * (const) Returns the value of the explicit attribute 'ComponentOfTotal'.
         * 
         * @return the value of the explicit attribute 'ComponentOfTotal'
         */
        virtual const IfcAppliedValue *getComponentOfTotal() const;
        /**
         * Sets the value of the explicit attribute 'ComponentOfTotal'.
         * 
         * @param value
         */
        virtual void setComponentOfTotal(const Step::RefPtr< IfcAppliedValue > &value);
        /**
         * Gets the value of the explicit attribute 'Components'.
         * 
         */
        virtual Set_IfcAppliedValue_1_n &getComponents();
        /**
         * (const) Returns the value of the explicit attribute 'Components'.
         * 
         * @return the value of the explicit attribute 'Components'
         */
        virtual const Set_IfcAppliedValue_1_n &getComponents() const;
        /**
         * Gets the value of the explicit attribute 'ArithmeticOperator'.
         * 
         */
        virtual IfcArithmeticOperatorEnum getArithmeticOperator();
        /**
         * (const) Returns the value of the explicit attribute 'ArithmeticOperator'.
         * 
         * @return the value of the explicit attribute 'ArithmeticOperator'
         */
        virtual const IfcArithmeticOperatorEnum getArithmeticOperator() const;
        /**
         * Sets the value of the explicit attribute 'ArithmeticOperator'.
         * 
         * @param value
         */
        virtual void setArithmeticOperator(IfcArithmeticOperatorEnum value);
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
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAppliedValueRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcAppliedValueRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAppliedValueRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAppliedValue > m_componentOfTotal;
        /**
         */
        Inverted_IfcAppliedValueRelationship_Components_type m_components;
        /**
         */
        IfcArithmeticOperatorEnum m_arithmeticOperator;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;

    };

}

#endif // IFC2X3_IFCAPPLIEDVALUERELATIONSHIP_H
