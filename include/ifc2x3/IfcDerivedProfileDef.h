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

#ifndef IFC2X3_IFCDERIVEDPROFILEDEF_H
#define IFC2X3_IFCDERIVEDPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcProfileDef.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianTransformationOperator2D;

    /**
     */
    class IFC2X3_DLL_DEF IfcDerivedProfileDef : public IfcProfileDef {
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
         * Gets the value of the explicit attribute 'ParentProfile'.
         * 
         */
        virtual IfcProfileDef *getParentProfile();
        /**
         * (const) Returns the value of the explicit attribute 'ParentProfile'.
         * 
         * @return the value of the explicit attribute 'ParentProfile'
         */
        virtual const IfcProfileDef *getParentProfile() const;
        /**
         * Sets the value of the explicit attribute 'ParentProfile'.
         * 
         * @param value
         */
        virtual void setParentProfile(const Step::RefPtr< IfcProfileDef > &value);
        /**
         * Gets the value of the explicit attribute 'Operator'.
         * 
         */
        virtual IfcCartesianTransformationOperator2D *getOperator();
        /**
         * (const) Returns the value of the explicit attribute 'Operator'.
         * 
         * @return the value of the explicit attribute 'Operator'
         */
        virtual const IfcCartesianTransformationOperator2D *getOperator() const;
        /**
         * Sets the value of the explicit attribute 'Operator'.
         * 
         * @param value
         */
        virtual void setOperator(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value);
        /**
         * Gets the value of the explicit attribute 'Label'.
         * 
         */
        virtual IfcLabel getLabel();
        /**
         * (const) Returns the value of the explicit attribute 'Label'.
         * 
         * @return the value of the explicit attribute 'Label'
         */
        virtual const IfcLabel getLabel() const;
        /**
         * Sets the value of the explicit attribute 'Label'.
         * 
         * @param value
         */
        virtual void setLabel(const IfcLabel &value);
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
        Step::String m_label;

    };

}

#endif // IFC2X3_IFCDERIVEDPROFILEDEF_H
