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
         * Gets the value of the explicit attribute 'LinearStiffnessByLengthX'.
         * 
         */
        virtual IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthX();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessByLengthX'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessByLengthX'
         */
        virtual const IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthX() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessByLengthX'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessByLengthX(IfcModulusOfLinearSubgradeReactionMeasure value);
        /**
         * Gets the value of the explicit attribute 'LinearStiffnessByLengthY'.
         * 
         */
        virtual IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthY();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessByLengthY'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessByLengthY'
         */
        virtual const IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthY() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessByLengthY'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessByLengthY(IfcModulusOfLinearSubgradeReactionMeasure value);
        /**
         * Gets the value of the explicit attribute 'LinearStiffnessByLengthZ'.
         * 
         */
        virtual IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthZ();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessByLengthZ'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessByLengthZ'
         */
        virtual const IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthZ() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessByLengthZ'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessByLengthZ(IfcModulusOfLinearSubgradeReactionMeasure value);
        /**
         * Gets the value of the explicit attribute 'RotationalStiffnessByLengthX'.
         * 
         */
        virtual IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthX();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalStiffnessByLengthX'.
         * 
         * @return the value of the explicit attribute 'RotationalStiffnessByLengthX'
         */
        virtual const IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthX() const;
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessByLengthX'.
         * 
         * @param value
         */
        virtual void setRotationalStiffnessByLengthX(IfcModulusOfRotationalSubgradeReactionMeasure value);
        /**
         * Gets the value of the explicit attribute 'RotationalStiffnessByLengthY'.
         * 
         */
        virtual IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthY();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalStiffnessByLengthY'.
         * 
         * @return the value of the explicit attribute 'RotationalStiffnessByLengthY'
         */
        virtual const IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthY() const;
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessByLengthY'.
         * 
         * @param value
         */
        virtual void setRotationalStiffnessByLengthY(IfcModulusOfRotationalSubgradeReactionMeasure value);
        /**
         * Gets the value of the explicit attribute 'RotationalStiffnessByLengthZ'.
         * 
         */
        virtual IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthZ();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalStiffnessByLengthZ'.
         * 
         * @return the value of the explicit attribute 'RotationalStiffnessByLengthZ'
         */
        virtual const IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthZ() const;
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessByLengthZ'.
         * 
         * @param value
         */
        virtual void setRotationalStiffnessByLengthZ(IfcModulusOfRotationalSubgradeReactionMeasure value);
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
