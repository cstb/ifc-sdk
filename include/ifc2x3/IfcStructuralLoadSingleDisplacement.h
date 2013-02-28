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

#ifndef IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENT_H
#define IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcStructuralLoadStatic.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcStructuralLoadSingleDisplacement Entity.
     * 
     */
    class IFC2X3_EXPORT IfcStructuralLoadSingleDisplacement : public IfcStructuralLoadStatic {
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
         * Gets the value of the explicit attribute 'DisplacementX'.
         * 
         */
        virtual IfcLengthMeasure getDisplacementX();
        /**
         * (const) Returns the value of the explicit attribute 'DisplacementX'.
         * 
         * @return the value of the explicit attribute 'DisplacementX'
         */
        virtual const IfcLengthMeasure getDisplacementX() const;
        /**
         * Sets the value of the explicit attribute 'DisplacementX'.
         * 
         * @param value
         */
        virtual void setDisplacementX(IfcLengthMeasure value);
        /**
         * unset the attribute 'DisplacementX'.
         * 
         */
        virtual void unsetDisplacementX();
        /**
         * Test if the attribute 'DisplacementX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDisplacementX() const;
        /**
         * Gets the value of the explicit attribute 'DisplacementY'.
         * 
         */
        virtual IfcLengthMeasure getDisplacementY();
        /**
         * (const) Returns the value of the explicit attribute 'DisplacementY'.
         * 
         * @return the value of the explicit attribute 'DisplacementY'
         */
        virtual const IfcLengthMeasure getDisplacementY() const;
        /**
         * Sets the value of the explicit attribute 'DisplacementY'.
         * 
         * @param value
         */
        virtual void setDisplacementY(IfcLengthMeasure value);
        /**
         * unset the attribute 'DisplacementY'.
         * 
         */
        virtual void unsetDisplacementY();
        /**
         * Test if the attribute 'DisplacementY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDisplacementY() const;
        /**
         * Gets the value of the explicit attribute 'DisplacementZ'.
         * 
         */
        virtual IfcLengthMeasure getDisplacementZ();
        /**
         * (const) Returns the value of the explicit attribute 'DisplacementZ'.
         * 
         * @return the value of the explicit attribute 'DisplacementZ'
         */
        virtual const IfcLengthMeasure getDisplacementZ() const;
        /**
         * Sets the value of the explicit attribute 'DisplacementZ'.
         * 
         * @param value
         */
        virtual void setDisplacementZ(IfcLengthMeasure value);
        /**
         * unset the attribute 'DisplacementZ'.
         * 
         */
        virtual void unsetDisplacementZ();
        /**
         * Test if the attribute 'DisplacementZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDisplacementZ() const;
        /**
         * Gets the value of the explicit attribute 'RotationalDisplacementRX'.
         * 
         */
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRX();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalDisplacementRX'.
         * 
         * @return the value of the explicit attribute 'RotationalDisplacementRX'
         */
        virtual const IfcPlaneAngleMeasure getRotationalDisplacementRX() const;
        /**
         * Sets the value of the explicit attribute 'RotationalDisplacementRX'.
         * 
         * @param value
         */
        virtual void setRotationalDisplacementRX(IfcPlaneAngleMeasure value);
        /**
         * unset the attribute 'RotationalDisplacementRX'.
         * 
         */
        virtual void unsetRotationalDisplacementRX();
        /**
         * Test if the attribute 'RotationalDisplacementRX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRotationalDisplacementRX() const;
        /**
         * Gets the value of the explicit attribute 'RotationalDisplacementRY'.
         * 
         */
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRY();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalDisplacementRY'.
         * 
         * @return the value of the explicit attribute 'RotationalDisplacementRY'
         */
        virtual const IfcPlaneAngleMeasure getRotationalDisplacementRY() const;
        /**
         * Sets the value of the explicit attribute 'RotationalDisplacementRY'.
         * 
         * @param value
         */
        virtual void setRotationalDisplacementRY(IfcPlaneAngleMeasure value);
        /**
         * unset the attribute 'RotationalDisplacementRY'.
         * 
         */
        virtual void unsetRotationalDisplacementRY();
        /**
         * Test if the attribute 'RotationalDisplacementRY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRotationalDisplacementRY() const;
        /**
         * Gets the value of the explicit attribute 'RotationalDisplacementRZ'.
         * 
         */
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRZ();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalDisplacementRZ'.
         * 
         * @return the value of the explicit attribute 'RotationalDisplacementRZ'
         */
        virtual const IfcPlaneAngleMeasure getRotationalDisplacementRZ() const;
        /**
         * Sets the value of the explicit attribute 'RotationalDisplacementRZ'.
         * 
         * @param value
         */
        virtual void setRotationalDisplacementRZ(IfcPlaneAngleMeasure value);
        /**
         * unset the attribute 'RotationalDisplacementRZ'.
         * 
         */
        virtual void unsetRotationalDisplacementRZ();
        /**
         * Test if the attribute 'RotationalDisplacementRZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRotationalDisplacementRZ() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadSingleDisplacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadSingleDisplacement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadSingleDisplacement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_displacementX;
        /**
         */
        Step::Real m_displacementY;
        /**
         */
        Step::Real m_displacementZ;
        /**
         */
        Step::Real m_rotationalDisplacementRX;
        /**
         */
        Step::Real m_rotationalDisplacementRY;
        /**
         */
        Step::Real m_rotationalDisplacementRZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENT_H
