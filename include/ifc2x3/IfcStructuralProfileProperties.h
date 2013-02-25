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

#ifndef IFC2X3_IFCSTRUCTURALPROFILEPROPERTIES_H
#define IFC2X3_IFCSTRUCTURALPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGeneralProfileProperties.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcStructuralProfileProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcStructuralProfileProperties : public IfcGeneralProfileProperties {
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
         * Gets the value of the explicit attribute 'TorsionalConstantX'.
         * 
         */
        virtual IfcMomentOfInertiaMeasure getTorsionalConstantX();
        /**
         * (const) Returns the value of the explicit attribute 'TorsionalConstantX'.
         * 
         * @return the value of the explicit attribute 'TorsionalConstantX'
         */
        virtual const IfcMomentOfInertiaMeasure getTorsionalConstantX() const;
        /**
         * Sets the value of the explicit attribute 'TorsionalConstantX'.
         * 
         * @param value
         */
        virtual void setTorsionalConstantX(IfcMomentOfInertiaMeasure value);
        /**
         * unset the attribute 'TorsionalConstantX'.
         * 
         */
        virtual void unsetTorsionalConstantX();
        /**
         * Test if the attribute 'TorsionalConstantX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTorsionalConstantX() const;
        /**
         * Gets the value of the explicit attribute 'MomentOfInertiaYZ'.
         * 
         */
        virtual IfcMomentOfInertiaMeasure getMomentOfInertiaYZ();
        /**
         * (const) Returns the value of the explicit attribute 'MomentOfInertiaYZ'.
         * 
         * @return the value of the explicit attribute 'MomentOfInertiaYZ'
         */
        virtual const IfcMomentOfInertiaMeasure getMomentOfInertiaYZ() const;
        /**
         * Sets the value of the explicit attribute 'MomentOfInertiaYZ'.
         * 
         * @param value
         */
        virtual void setMomentOfInertiaYZ(IfcMomentOfInertiaMeasure value);
        /**
         * unset the attribute 'MomentOfInertiaYZ'.
         * 
         */
        virtual void unsetMomentOfInertiaYZ();
        /**
         * Test if the attribute 'MomentOfInertiaYZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMomentOfInertiaYZ() const;
        /**
         * Gets the value of the explicit attribute 'MomentOfInertiaY'.
         * 
         */
        virtual IfcMomentOfInertiaMeasure getMomentOfInertiaY();
        /**
         * (const) Returns the value of the explicit attribute 'MomentOfInertiaY'.
         * 
         * @return the value of the explicit attribute 'MomentOfInertiaY'
         */
        virtual const IfcMomentOfInertiaMeasure getMomentOfInertiaY() const;
        /**
         * Sets the value of the explicit attribute 'MomentOfInertiaY'.
         * 
         * @param value
         */
        virtual void setMomentOfInertiaY(IfcMomentOfInertiaMeasure value);
        /**
         * unset the attribute 'MomentOfInertiaY'.
         * 
         */
        virtual void unsetMomentOfInertiaY();
        /**
         * Test if the attribute 'MomentOfInertiaY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMomentOfInertiaY() const;
        /**
         * Gets the value of the explicit attribute 'MomentOfInertiaZ'.
         * 
         */
        virtual IfcMomentOfInertiaMeasure getMomentOfInertiaZ();
        /**
         * (const) Returns the value of the explicit attribute 'MomentOfInertiaZ'.
         * 
         * @return the value of the explicit attribute 'MomentOfInertiaZ'
         */
        virtual const IfcMomentOfInertiaMeasure getMomentOfInertiaZ() const;
        /**
         * Sets the value of the explicit attribute 'MomentOfInertiaZ'.
         * 
         * @param value
         */
        virtual void setMomentOfInertiaZ(IfcMomentOfInertiaMeasure value);
        /**
         * unset the attribute 'MomentOfInertiaZ'.
         * 
         */
        virtual void unsetMomentOfInertiaZ();
        /**
         * Test if the attribute 'MomentOfInertiaZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMomentOfInertiaZ() const;
        /**
         * Gets the value of the explicit attribute 'WarpingConstant'.
         * 
         */
        virtual IfcWarpingConstantMeasure getWarpingConstant();
        /**
         * (const) Returns the value of the explicit attribute 'WarpingConstant'.
         * 
         * @return the value of the explicit attribute 'WarpingConstant'
         */
        virtual const IfcWarpingConstantMeasure getWarpingConstant() const;
        /**
         * Sets the value of the explicit attribute 'WarpingConstant'.
         * 
         * @param value
         */
        virtual void setWarpingConstant(IfcWarpingConstantMeasure value);
        /**
         * unset the attribute 'WarpingConstant'.
         * 
         */
        virtual void unsetWarpingConstant();
        /**
         * Test if the attribute 'WarpingConstant' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWarpingConstant() const;
        /**
         * Gets the value of the explicit attribute 'ShearCentreZ'.
         * 
         */
        virtual IfcLengthMeasure getShearCentreZ();
        /**
         * (const) Returns the value of the explicit attribute 'ShearCentreZ'.
         * 
         * @return the value of the explicit attribute 'ShearCentreZ'
         */
        virtual const IfcLengthMeasure getShearCentreZ() const;
        /**
         * Sets the value of the explicit attribute 'ShearCentreZ'.
         * 
         * @param value
         */
        virtual void setShearCentreZ(IfcLengthMeasure value);
        /**
         * unset the attribute 'ShearCentreZ'.
         * 
         */
        virtual void unsetShearCentreZ();
        /**
         * Test if the attribute 'ShearCentreZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShearCentreZ() const;
        /**
         * Gets the value of the explicit attribute 'ShearCentreY'.
         * 
         */
        virtual IfcLengthMeasure getShearCentreY();
        /**
         * (const) Returns the value of the explicit attribute 'ShearCentreY'.
         * 
         * @return the value of the explicit attribute 'ShearCentreY'
         */
        virtual const IfcLengthMeasure getShearCentreY() const;
        /**
         * Sets the value of the explicit attribute 'ShearCentreY'.
         * 
         * @param value
         */
        virtual void setShearCentreY(IfcLengthMeasure value);
        /**
         * unset the attribute 'ShearCentreY'.
         * 
         */
        virtual void unsetShearCentreY();
        /**
         * Test if the attribute 'ShearCentreY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShearCentreY() const;
        /**
         * Gets the value of the explicit attribute 'ShearDeformationAreaZ'.
         * 
         */
        virtual IfcAreaMeasure getShearDeformationAreaZ();
        /**
         * (const) Returns the value of the explicit attribute 'ShearDeformationAreaZ'.
         * 
         * @return the value of the explicit attribute 'ShearDeformationAreaZ'
         */
        virtual const IfcAreaMeasure getShearDeformationAreaZ() const;
        /**
         * Sets the value of the explicit attribute 'ShearDeformationAreaZ'.
         * 
         * @param value
         */
        virtual void setShearDeformationAreaZ(IfcAreaMeasure value);
        /**
         * unset the attribute 'ShearDeformationAreaZ'.
         * 
         */
        virtual void unsetShearDeformationAreaZ();
        /**
         * Test if the attribute 'ShearDeformationAreaZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShearDeformationAreaZ() const;
        /**
         * Gets the value of the explicit attribute 'ShearDeformationAreaY'.
         * 
         */
        virtual IfcAreaMeasure getShearDeformationAreaY();
        /**
         * (const) Returns the value of the explicit attribute 'ShearDeformationAreaY'.
         * 
         * @return the value of the explicit attribute 'ShearDeformationAreaY'
         */
        virtual const IfcAreaMeasure getShearDeformationAreaY() const;
        /**
         * Sets the value of the explicit attribute 'ShearDeformationAreaY'.
         * 
         * @param value
         */
        virtual void setShearDeformationAreaY(IfcAreaMeasure value);
        /**
         * unset the attribute 'ShearDeformationAreaY'.
         * 
         */
        virtual void unsetShearDeformationAreaY();
        /**
         * Test if the attribute 'ShearDeformationAreaY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShearDeformationAreaY() const;
        /**
         * Gets the value of the explicit attribute 'MaximumSectionModulusY'.
         * 
         */
        virtual IfcSectionModulusMeasure getMaximumSectionModulusY();
        /**
         * (const) Returns the value of the explicit attribute 'MaximumSectionModulusY'.
         * 
         * @return the value of the explicit attribute 'MaximumSectionModulusY'
         */
        virtual const IfcSectionModulusMeasure getMaximumSectionModulusY() const;
        /**
         * Sets the value of the explicit attribute 'MaximumSectionModulusY'.
         * 
         * @param value
         */
        virtual void setMaximumSectionModulusY(IfcSectionModulusMeasure value);
        /**
         * unset the attribute 'MaximumSectionModulusY'.
         * 
         */
        virtual void unsetMaximumSectionModulusY();
        /**
         * Test if the attribute 'MaximumSectionModulusY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMaximumSectionModulusY() const;
        /**
         * Gets the value of the explicit attribute 'MinimumSectionModulusY'.
         * 
         */
        virtual IfcSectionModulusMeasure getMinimumSectionModulusY();
        /**
         * (const) Returns the value of the explicit attribute 'MinimumSectionModulusY'.
         * 
         * @return the value of the explicit attribute 'MinimumSectionModulusY'
         */
        virtual const IfcSectionModulusMeasure getMinimumSectionModulusY() const;
        /**
         * Sets the value of the explicit attribute 'MinimumSectionModulusY'.
         * 
         * @param value
         */
        virtual void setMinimumSectionModulusY(IfcSectionModulusMeasure value);
        /**
         * unset the attribute 'MinimumSectionModulusY'.
         * 
         */
        virtual void unsetMinimumSectionModulusY();
        /**
         * Test if the attribute 'MinimumSectionModulusY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMinimumSectionModulusY() const;
        /**
         * Gets the value of the explicit attribute 'MaximumSectionModulusZ'.
         * 
         */
        virtual IfcSectionModulusMeasure getMaximumSectionModulusZ();
        /**
         * (const) Returns the value of the explicit attribute 'MaximumSectionModulusZ'.
         * 
         * @return the value of the explicit attribute 'MaximumSectionModulusZ'
         */
        virtual const IfcSectionModulusMeasure getMaximumSectionModulusZ() const;
        /**
         * Sets the value of the explicit attribute 'MaximumSectionModulusZ'.
         * 
         * @param value
         */
        virtual void setMaximumSectionModulusZ(IfcSectionModulusMeasure value);
        /**
         * unset the attribute 'MaximumSectionModulusZ'.
         * 
         */
        virtual void unsetMaximumSectionModulusZ();
        /**
         * Test if the attribute 'MaximumSectionModulusZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMaximumSectionModulusZ() const;
        /**
         * Gets the value of the explicit attribute 'MinimumSectionModulusZ'.
         * 
         */
        virtual IfcSectionModulusMeasure getMinimumSectionModulusZ();
        /**
         * (const) Returns the value of the explicit attribute 'MinimumSectionModulusZ'.
         * 
         * @return the value of the explicit attribute 'MinimumSectionModulusZ'
         */
        virtual const IfcSectionModulusMeasure getMinimumSectionModulusZ() const;
        /**
         * Sets the value of the explicit attribute 'MinimumSectionModulusZ'.
         * 
         * @param value
         */
        virtual void setMinimumSectionModulusZ(IfcSectionModulusMeasure value);
        /**
         * unset the attribute 'MinimumSectionModulusZ'.
         * 
         */
        virtual void unsetMinimumSectionModulusZ();
        /**
         * Test if the attribute 'MinimumSectionModulusZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMinimumSectionModulusZ() const;
        /**
         * Gets the value of the explicit attribute 'TorsionalSectionModulus'.
         * 
         */
        virtual IfcSectionModulusMeasure getTorsionalSectionModulus();
        /**
         * (const) Returns the value of the explicit attribute 'TorsionalSectionModulus'.
         * 
         * @return the value of the explicit attribute 'TorsionalSectionModulus'
         */
        virtual const IfcSectionModulusMeasure getTorsionalSectionModulus() const;
        /**
         * Sets the value of the explicit attribute 'TorsionalSectionModulus'.
         * 
         * @param value
         */
        virtual void setTorsionalSectionModulus(IfcSectionModulusMeasure value);
        /**
         * unset the attribute 'TorsionalSectionModulus'.
         * 
         */
        virtual void unsetTorsionalSectionModulus();
        /**
         * Test if the attribute 'TorsionalSectionModulus' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTorsionalSectionModulus() const;
        /**
         * Gets the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         */
        virtual IfcLengthMeasure getCentreOfGravityInX();
        /**
         * (const) Returns the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         * @return the value of the explicit attribute 'CentreOfGravityInX'
         */
        virtual const IfcLengthMeasure getCentreOfGravityInX() const;
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         * @param value
         */
        virtual void setCentreOfGravityInX(IfcLengthMeasure value);
        /**
         * unset the attribute 'CentreOfGravityInX'.
         * 
         */
        virtual void unsetCentreOfGravityInX();
        /**
         * Test if the attribute 'CentreOfGravityInX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCentreOfGravityInX() const;
        /**
         * Gets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         */
        virtual IfcLengthMeasure getCentreOfGravityInY();
        /**
         * (const) Returns the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @return the value of the explicit attribute 'CentreOfGravityInY'
         */
        virtual const IfcLengthMeasure getCentreOfGravityInY() const;
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @param value
         */
        virtual void setCentreOfGravityInY(IfcLengthMeasure value);
        /**
         * unset the attribute 'CentreOfGravityInY'.
         * 
         */
        virtual void unsetCentreOfGravityInY();
        /**
         * Test if the attribute 'CentreOfGravityInY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCentreOfGravityInY() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_torsionalConstantX;
        /**
         */
        Step::Real m_momentOfInertiaYZ;
        /**
         */
        Step::Real m_momentOfInertiaY;
        /**
         */
        Step::Real m_momentOfInertiaZ;
        /**
         */
        Step::Real m_warpingConstant;
        /**
         */
        Step::Real m_shearCentreZ;
        /**
         */
        Step::Real m_shearCentreY;
        /**
         */
        Step::Real m_shearDeformationAreaZ;
        /**
         */
        Step::Real m_shearDeformationAreaY;
        /**
         */
        Step::Real m_maximumSectionModulusY;
        /**
         */
        Step::Real m_minimumSectionModulusY;
        /**
         */
        Step::Real m_maximumSectionModulusZ;
        /**
         */
        Step::Real m_minimumSectionModulusZ;
        /**
         */
        Step::Real m_torsionalSectionModulus;
        /**
         */
        Step::Real m_centreOfGravityInX;
        /**
         */
        Step::Real m_centreOfGravityInY;

    };

}

#endif // IFC2X3_IFCSTRUCTURALPROFILEPROPERTIES_H
