// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCBOUNDARYEDGECONDITION_H
#define IFC2X3_IFCBOUNDARYEDGECONDITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcBoundaryCondition.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcBoundaryEdgeCondition Entity.
     * 
     */
    class IFC2X3_EXPORT IfcBoundaryEdgeCondition : public IfcBoundaryCondition {
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
         * unset the attribute 'LinearStiffnessByLengthX'.
         * 
         */
        virtual void unsetLinearStiffnessByLengthX();
        /**
         * Test if the attribute 'LinearStiffnessByLengthX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearStiffnessByLengthX() const;
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
         * unset the attribute 'LinearStiffnessByLengthY'.
         * 
         */
        virtual void unsetLinearStiffnessByLengthY();
        /**
         * Test if the attribute 'LinearStiffnessByLengthY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearStiffnessByLengthY() const;
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
         * unset the attribute 'LinearStiffnessByLengthZ'.
         * 
         */
        virtual void unsetLinearStiffnessByLengthZ();
        /**
         * Test if the attribute 'LinearStiffnessByLengthZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearStiffnessByLengthZ() const;
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
         * unset the attribute 'RotationalStiffnessByLengthX'.
         * 
         */
        virtual void unsetRotationalStiffnessByLengthX();
        /**
         * Test if the attribute 'RotationalStiffnessByLengthX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRotationalStiffnessByLengthX() const;
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
         * unset the attribute 'RotationalStiffnessByLengthY'.
         * 
         */
        virtual void unsetRotationalStiffnessByLengthY();
        /**
         * Test if the attribute 'RotationalStiffnessByLengthY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRotationalStiffnessByLengthY() const;
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
        /**
         * unset the attribute 'RotationalStiffnessByLengthZ'.
         * 
         */
        virtual void unsetRotationalStiffnessByLengthZ();
        /**
         * Test if the attribute 'RotationalStiffnessByLengthZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRotationalStiffnessByLengthZ() const;
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
