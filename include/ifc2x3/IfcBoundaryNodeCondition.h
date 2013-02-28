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

#ifndef IFC2X3_IFCBOUNDARYNODECONDITION_H
#define IFC2X3_IFCBOUNDARYNODECONDITION_H
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
     * Generated class for the IfcBoundaryNodeCondition Entity.
     * 
     */
    class IFC2X3_EXPORT IfcBoundaryNodeCondition : public IfcBoundaryCondition {
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
         * Gets the value of the explicit attribute 'LinearStiffnessX'.
         * 
         */
        virtual IfcLinearStiffnessMeasure getLinearStiffnessX();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessX'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessX'
         */
        virtual const IfcLinearStiffnessMeasure getLinearStiffnessX() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessX'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessX(IfcLinearStiffnessMeasure value);
        /**
         * unset the attribute 'LinearStiffnessX'.
         * 
         */
        virtual void unsetLinearStiffnessX();
        /**
         * Test if the attribute 'LinearStiffnessX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearStiffnessX() const;
        /**
         * Gets the value of the explicit attribute 'LinearStiffnessY'.
         * 
         */
        virtual IfcLinearStiffnessMeasure getLinearStiffnessY();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessY'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessY'
         */
        virtual const IfcLinearStiffnessMeasure getLinearStiffnessY() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessY'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessY(IfcLinearStiffnessMeasure value);
        /**
         * unset the attribute 'LinearStiffnessY'.
         * 
         */
        virtual void unsetLinearStiffnessY();
        /**
         * Test if the attribute 'LinearStiffnessY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearStiffnessY() const;
        /**
         * Gets the value of the explicit attribute 'LinearStiffnessZ'.
         * 
         */
        virtual IfcLinearStiffnessMeasure getLinearStiffnessZ();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessZ'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessZ'
         */
        virtual const IfcLinearStiffnessMeasure getLinearStiffnessZ() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessZ'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessZ(IfcLinearStiffnessMeasure value);
        /**
         * unset the attribute 'LinearStiffnessZ'.
         * 
         */
        virtual void unsetLinearStiffnessZ();
        /**
         * Test if the attribute 'LinearStiffnessZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearStiffnessZ() const;
        /**
         * Gets the value of the explicit attribute 'RotationalStiffnessX'.
         * 
         */
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessX();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalStiffnessX'.
         * 
         * @return the value of the explicit attribute 'RotationalStiffnessX'
         */
        virtual const IfcRotationalStiffnessMeasure getRotationalStiffnessX() const;
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessX'.
         * 
         * @param value
         */
        virtual void setRotationalStiffnessX(IfcRotationalStiffnessMeasure value);
        /**
         * unset the attribute 'RotationalStiffnessX'.
         * 
         */
        virtual void unsetRotationalStiffnessX();
        /**
         * Test if the attribute 'RotationalStiffnessX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRotationalStiffnessX() const;
        /**
         * Gets the value of the explicit attribute 'RotationalStiffnessY'.
         * 
         */
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessY();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalStiffnessY'.
         * 
         * @return the value of the explicit attribute 'RotationalStiffnessY'
         */
        virtual const IfcRotationalStiffnessMeasure getRotationalStiffnessY() const;
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessY'.
         * 
         * @param value
         */
        virtual void setRotationalStiffnessY(IfcRotationalStiffnessMeasure value);
        /**
         * unset the attribute 'RotationalStiffnessY'.
         * 
         */
        virtual void unsetRotationalStiffnessY();
        /**
         * Test if the attribute 'RotationalStiffnessY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRotationalStiffnessY() const;
        /**
         * Gets the value of the explicit attribute 'RotationalStiffnessZ'.
         * 
         */
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessZ();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalStiffnessZ'.
         * 
         * @return the value of the explicit attribute 'RotationalStiffnessZ'
         */
        virtual const IfcRotationalStiffnessMeasure getRotationalStiffnessZ() const;
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessZ'.
         * 
         * @param value
         */
        virtual void setRotationalStiffnessZ(IfcRotationalStiffnessMeasure value);
        /**
         * unset the attribute 'RotationalStiffnessZ'.
         * 
         */
        virtual void unsetRotationalStiffnessZ();
        /**
         * Test if the attribute 'RotationalStiffnessZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRotationalStiffnessZ() const;
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
