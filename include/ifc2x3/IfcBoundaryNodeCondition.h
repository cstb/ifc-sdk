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

#ifndef IFC2X3_IFCBOUNDARYNODECONDITION_H
#define IFC2X3_IFCBOUNDARYNODECONDITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcBoundaryCondition.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcBoundaryNodeCondition : public IfcBoundaryCondition {
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
        IfcLinearStiffnessMeasure getLinearStiffnessX();
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessX'.
         * 
         * @param value
         */
        void setLinearStiffnessX(IfcLinearStiffnessMeasure value);
        /**
         */
        IfcLinearStiffnessMeasure getLinearStiffnessY();
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessY'.
         * 
         * @param value
         */
        void setLinearStiffnessY(IfcLinearStiffnessMeasure value);
        /**
         */
        IfcLinearStiffnessMeasure getLinearStiffnessZ();
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessZ'.
         * 
         * @param value
         */
        void setLinearStiffnessZ(IfcLinearStiffnessMeasure value);
        /**
         */
        IfcRotationalStiffnessMeasure getRotationalStiffnessX();
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessX'.
         * 
         * @param value
         */
        void setRotationalStiffnessX(IfcRotationalStiffnessMeasure value);
        /**
         */
        IfcRotationalStiffnessMeasure getRotationalStiffnessY();
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessY'.
         * 
         * @param value
         */
        void setRotationalStiffnessY(IfcRotationalStiffnessMeasure value);
        /**
         */
        IfcRotationalStiffnessMeasure getRotationalStiffnessZ();
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessZ'.
         * 
         * @param value
         */
        void setRotationalStiffnessZ(IfcRotationalStiffnessMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBoundaryNodeCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcBoundaryNodeCondition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBoundaryNodeCondition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_linearStiffnessX;
        /**
         */
        Step::Real m_linearStiffnessY;
        /**
         */
        Step::Real m_linearStiffnessZ;
        /**
         */
        Step::Real m_rotationalStiffnessX;
        /**
         */
        Step::Real m_rotationalStiffnessY;
        /**
         */
        Step::Real m_rotationalStiffnessZ;

    };

}

#endif // IFC2X3_IFCBOUNDARYNODECONDITION_H
