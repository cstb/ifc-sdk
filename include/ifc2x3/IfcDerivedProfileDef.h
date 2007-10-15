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

#ifndef IFC2X3_IFCDERIVEDPROFILEDEF_H
#define IFC2X3_IFCDERIVEDPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcProfileDef.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianTransformationOperator2D;

    /**
     */
    class IFC2X3_DLL_DEF IfcDerivedProfileDef : public IfcProfileDef {
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
        IfcProfileDef *getParentProfile();
        /**
         * Sets the value of the explicit attribute 'ParentProfile'.
         * 
         * @param value
         */
        void setParentProfile(const Step::RefPtr< IfcProfileDef > &value);
        /**
         */
        IfcCartesianTransformationOperator2D *getOperator();
        /**
         * Sets the value of the explicit attribute 'Operator'.
         * 
         * @param value
         */
        void setOperator(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value);
        /**
         */
        IfcLabel getLabel();
        /**
         * Sets the value of the explicit attribute 'Label'.
         * 
         * @param value
         */
        void setLabel(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDerivedProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcDerivedProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDerivedProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcProfileDef > m_parentProfile;
        /**
         */
        Step::RefPtr< IfcCartesianTransformationOperator2D > m_operator;
        /**
         */
        std::string m_label;

    };

}

#endif // IFC2X3_IFCDERIVEDPROFILEDEF_H
