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

#ifndef IFC2X3_IFCDERIVEDUNIT_H
#define IFC2X3_IFCDERIVEDUNIT_H
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
    class IFC2X3_DLL_DEF IfcDerivedUnit : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Elements'.
         * 
         */
        virtual Set_IfcDerivedUnitElement_1_n &getElements();
        /**
         * (const) Returns the value of the explicit attribute 'Elements'.
         * 
         * @return the value of the explicit attribute 'Elements'
         */
        virtual const Set_IfcDerivedUnitElement_1_n &getElements() const;
        /**
         * Sets the value of the explicit attribute 'Elements'.
         * 
         * @param value
         */
        virtual void setElements(const Set_IfcDerivedUnitElement_1_n &value);
        /**
         * Gets the value of the explicit attribute 'UnitType'.
         * 
         */
        virtual IfcDerivedUnitEnum getUnitType();
        /**
         * (const) Returns the value of the explicit attribute 'UnitType'.
         * 
         * @return the value of the explicit attribute 'UnitType'
         */
        virtual const IfcDerivedUnitEnum getUnitType() const;
        /**
         * Sets the value of the explicit attribute 'UnitType'.
         * 
         * @param value
         */
        virtual void setUnitType(IfcDerivedUnitEnum value);
        /**
         * Gets the value of the explicit attribute 'UserDefinedType'.
         * 
         */
        virtual IfcLabel getUserDefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedType'.
         * 
         * @return the value of the explicit attribute 'UserDefinedType'
         */
        virtual const IfcLabel getUserDefinedType() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedType'.
         * 
         * @param value
         */
        virtual void setUserDefinedType(const IfcLabel &value);
        /**
         * Gets the value of the derived attribute 'Dimensions'.
         * 
         */
        virtual IfcDimensionalExponents *getDimensions() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDerivedUnit(Step::Id id, Step::SPFData *args);
        virtual ~IfcDerivedUnit();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDerivedUnit &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Set_IfcDerivedUnitElement_1_n m_elements;
        /**
         */
        IfcDerivedUnitEnum m_unitType;
        /**
         */
        Step::String m_userDefinedType;

    };

}

#endif // IFC2X3_IFCDERIVEDUNIT_H
