/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcNamedUnit;

    /**
     */
    class IFC2X3_DLL_DEF IfcDerivedUnitElement : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcNamedUnit *getUnit();
        /**
         * Sets the value of the explicit attribute 'Unit'.
         * 
         * @param value
         */
        void setUnit(const Step::RefPtr< IfcNamedUnit > &value);
        /**
         */
        Step::Integer getExponent();
        /**
         * Sets the value of the explicit attribute 'Exponent'.
         * 
         * @param value
         */
        void setExponent(Step::Integer value);
        /**
         */
        virtual void release();
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
