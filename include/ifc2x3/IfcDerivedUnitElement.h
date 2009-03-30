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
 *     Copyright (C) 2009 CSTB                                             *
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

#ifndef IFC2X3_IFCDERIVEDUNITELEMENT_H
#define IFC2X3_IFCDERIVEDUNITELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcNamedUnit;

    /**
     * Generated class for the IfcDerivedUnitElement Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcDerivedUnitElement : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Unit'.
         * 
         */
        virtual IfcNamedUnit *getUnit();
        /**
         * (const) Returns the value of the explicit attribute 'Unit'.
         * 
         * @return the value of the explicit attribute 'Unit'
         */
        virtual const IfcNamedUnit *getUnit() const;
        /**
         * Sets the value of the explicit attribute 'Unit'.
         * 
         * @param value
         */
        virtual void setUnit(const Step::RefPtr< IfcNamedUnit > &value);
        /**
         * unset the attribute 'Unit'.
         * 
         */
        virtual void unsetUnit();
        /**
         * Test if the attribute 'Unit' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUnit() const;
        /**
         * Gets the value of the explicit attribute 'Exponent'.
         * 
         */
        virtual Step::Integer getExponent();
        /**
         * (const) Returns the value of the explicit attribute 'Exponent'.
         * 
         * @return the value of the explicit attribute 'Exponent'
         */
        virtual const Step::Integer getExponent() const;
        /**
         * Sets the value of the explicit attribute 'Exponent'.
         * 
         * @param value
         */
        virtual void setExponent(Step::Integer value);
        /**
         * unset the attribute 'Exponent'.
         * 
         */
        virtual void unsetExponent();
        /**
         * Test if the attribute 'Exponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testExponent() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDerivedUnitElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcDerivedUnitElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDerivedUnitElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcNamedUnit > m_unit;
        /**
         */
        Step::Integer m_exponent;

    };

}

#endif // IFC2X3_IFCDERIVEDUNITELEMENT_H
