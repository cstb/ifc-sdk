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

#ifndef IFC2X3_IFCTRAPEZIUMPROFILEDEF_H
#define IFC2X3_IFCTRAPEZIUMPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcParameterizedProfileDef.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcTrapeziumProfileDef : public IfcParameterizedProfileDef {
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
         * Gets the value of the explicit attribute 'BottomXDim'.
         * 
         */
        virtual IfcPositiveLengthMeasure getBottomXDim();
        /**
         * (const) Returns the value of the explicit attribute 'BottomXDim'.
         * 
         * @return the value of the explicit attribute 'BottomXDim'
         */
        virtual const IfcPositiveLengthMeasure getBottomXDim() const;
        /**
         * Sets the value of the explicit attribute 'BottomXDim'.
         * 
         * @param value
         */
        virtual void setBottomXDim(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'TopXDim'.
         * 
         */
        virtual IfcPositiveLengthMeasure getTopXDim();
        /**
         * (const) Returns the value of the explicit attribute 'TopXDim'.
         * 
         * @return the value of the explicit attribute 'TopXDim'
         */
        virtual const IfcPositiveLengthMeasure getTopXDim() const;
        /**
         * Sets the value of the explicit attribute 'TopXDim'.
         * 
         * @param value
         */
        virtual void setTopXDim(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'YDim'.
         * 
         */
        virtual IfcPositiveLengthMeasure getYDim();
        /**
         * (const) Returns the value of the explicit attribute 'YDim'.
         * 
         * @return the value of the explicit attribute 'YDim'
         */
        virtual const IfcPositiveLengthMeasure getYDim() const;
        /**
         * Sets the value of the explicit attribute 'YDim'.
         * 
         * @param value
         */
        virtual void setYDim(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'TopXOffset'.
         * 
         */
        virtual IfcLengthMeasure getTopXOffset();
        /**
         * (const) Returns the value of the explicit attribute 'TopXOffset'.
         * 
         * @return the value of the explicit attribute 'TopXOffset'
         */
        virtual const IfcLengthMeasure getTopXOffset() const;
        /**
         * Sets the value of the explicit attribute 'TopXOffset'.
         * 
         * @param value
         */
        virtual void setTopXOffset(IfcLengthMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTrapeziumProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcTrapeziumProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTrapeziumProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_bottomXDim;
        /**
         */
        Step::Real m_topXDim;
        /**
         */
        Step::Real m_yDim;
        /**
         */
        Step::Real m_topXOffset;

    };

}

#endif // IFC2X3_IFCTRAPEZIUMPROFILEDEF_H
