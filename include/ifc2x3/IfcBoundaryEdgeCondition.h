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

#ifndef IFC2X3_IFCBOUNDARYEDGECONDITION_H
#define IFC2X3_IFCBOUNDARYEDGECONDITION_H
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
    class IFC2X3_DLL_DEF IfcBoundaryEdgeCondition : public IfcBoundaryCondition {
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
        IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthX();
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessByLengthX'.
         * 
         * @param value
         */
        void setLinearStiffnessByLengthX(IfcModulusOfLinearSubgradeReactionMeasure value);
        /**
         */
        IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthY();
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessByLengthY'.
         * 
         * @param value
         */
        void setLinearStiffnessByLengthY(IfcModulusOfLinearSubgradeReactionMeasure value);
        /**
         */
        IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthZ();
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessByLengthZ'.
         * 
         * @param value
         */
        void setLinearStiffnessByLengthZ(IfcModulusOfLinearSubgradeReactionMeasure value);
        /**
         */
        IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthX();
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessByLengthX'.
         * 
         * @param value
         */
        void setRotationalStiffnessByLengthX(IfcModulusOfRotationalSubgradeReactionMeasure value);
        /**
         */
        IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthY();
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessByLengthY'.
         * 
         * @param value
         */
        void setRotationalStiffnessByLengthY(IfcModulusOfRotationalSubgradeReactionMeasure value);
        /**
         */
        IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthZ();
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessByLengthZ'.
         * 
         * @param value
         */
        void setRotationalStiffnessByLengthZ(IfcModulusOfRotationalSubgradeReactionMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBoundaryEdgeCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcBoundaryEdgeCondition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBoundaryEdgeCondition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_linearStiffnessByLengthX;
        /**
         */
        Step::Real m_linearStiffnessByLengthY;
        /**
         */
        Step::Real m_linearStiffnessByLengthZ;
        /**
         */
        Step::Real m_rotationalStiffnessByLengthX;
        /**
         */
        Step::Real m_rotationalStiffnessByLengthY;
        /**
         */
        Step::Real m_rotationalStiffnessByLengthZ;

    };

}

#endif // IFC2X3_IFCBOUNDARYEDGECONDITION_H
