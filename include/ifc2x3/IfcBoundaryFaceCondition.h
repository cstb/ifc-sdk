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

#ifndef IFC2X3_IFCBOUNDARYFACECONDITION_H
#define IFC2X3_IFCBOUNDARYFACECONDITION_H
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
    class IFC2X3_DLL_DEF IfcBoundaryFaceCondition : public IfcBoundaryCondition {
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
         * Gets the value of the explicit attribute 'LinearStiffnessByAreaX'.
         * 
         */
        virtual IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaX();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessByAreaX'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessByAreaX'
         */
        virtual const IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaX() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessByAreaX'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessByAreaX(IfcModulusOfSubgradeReactionMeasure value);
        /**
         * Gets the value of the explicit attribute 'LinearStiffnessByAreaY'.
         * 
         */
        virtual IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaY();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessByAreaY'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessByAreaY'
         */
        virtual const IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaY() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessByAreaY'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessByAreaY(IfcModulusOfSubgradeReactionMeasure value);
        /**
         * Gets the value of the explicit attribute 'LinearStiffnessByAreaZ'.
         * 
         */
        virtual IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaZ();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessByAreaZ'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessByAreaZ'
         */
        virtual const IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaZ() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessByAreaZ'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessByAreaZ(IfcModulusOfSubgradeReactionMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBoundaryFaceCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcBoundaryFaceCondition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBoundaryFaceCondition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_linearStiffnessByAreaX;
        /**
         */
        Step::Real m_linearStiffnessByAreaY;
        /**
         */
        Step::Real m_linearStiffnessByAreaZ;

    };

}

#endif // IFC2X3_IFCBOUNDARYFACECONDITION_H
