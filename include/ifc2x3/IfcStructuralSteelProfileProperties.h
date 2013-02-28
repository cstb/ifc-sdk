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

#ifndef IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
#define IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcStructuralProfileProperties.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcStructuralSteelProfileProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcStructuralSteelProfileProperties : public IfcStructuralProfileProperties {
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
         * Gets the value of the explicit attribute 'ShearAreaZ'.
         * 
         */
        virtual IfcAreaMeasure getShearAreaZ();
        /**
         * (const) Returns the value of the explicit attribute 'ShearAreaZ'.
         * 
         * @return the value of the explicit attribute 'ShearAreaZ'
         */
        virtual const IfcAreaMeasure getShearAreaZ() const;
        /**
         * Sets the value of the explicit attribute 'ShearAreaZ'.
         * 
         * @param value
         */
        virtual void setShearAreaZ(IfcAreaMeasure value);
        /**
         * unset the attribute 'ShearAreaZ'.
         * 
         */
        virtual void unsetShearAreaZ();
        /**
         * Test if the attribute 'ShearAreaZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShearAreaZ() const;
        /**
         * Gets the value of the explicit attribute 'ShearAreaY'.
         * 
         */
        virtual IfcAreaMeasure getShearAreaY();
        /**
         * (const) Returns the value of the explicit attribute 'ShearAreaY'.
         * 
         * @return the value of the explicit attribute 'ShearAreaY'
         */
        virtual const IfcAreaMeasure getShearAreaY() const;
        /**
         * Sets the value of the explicit attribute 'ShearAreaY'.
         * 
         * @param value
         */
        virtual void setShearAreaY(IfcAreaMeasure value);
        /**
         * unset the attribute 'ShearAreaY'.
         * 
         */
        virtual void unsetShearAreaY();
        /**
         * Test if the attribute 'ShearAreaY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShearAreaY() const;
        /**
         * Gets the value of the explicit attribute 'PlasticShapeFactorY'.
         * 
         */
        virtual IfcPositiveRatioMeasure getPlasticShapeFactorY();
        /**
         * (const) Returns the value of the explicit attribute 'PlasticShapeFactorY'.
         * 
         * @return the value of the explicit attribute 'PlasticShapeFactorY'
         */
        virtual const IfcPositiveRatioMeasure getPlasticShapeFactorY() const;
        /**
         * Sets the value of the explicit attribute 'PlasticShapeFactorY'.
         * 
         * @param value
         */
        virtual void setPlasticShapeFactorY(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'PlasticShapeFactorY'.
         * 
         */
        virtual void unsetPlasticShapeFactorY();
        /**
         * Test if the attribute 'PlasticShapeFactorY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlasticShapeFactorY() const;
        /**
         * Gets the value of the explicit attribute 'PlasticShapeFactorZ'.
         * 
         */
        virtual IfcPositiveRatioMeasure getPlasticShapeFactorZ();
        /**
         * (const) Returns the value of the explicit attribute 'PlasticShapeFactorZ'.
         * 
         * @return the value of the explicit attribute 'PlasticShapeFactorZ'
         */
        virtual const IfcPositiveRatioMeasure getPlasticShapeFactorZ() const;
        /**
         * Sets the value of the explicit attribute 'PlasticShapeFactorZ'.
         * 
         * @param value
         */
        virtual void setPlasticShapeFactorZ(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'PlasticShapeFactorZ'.
         * 
         */
        virtual void unsetPlasticShapeFactorZ();
        /**
         * Test if the attribute 'PlasticShapeFactorZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlasticShapeFactorZ() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralSteelProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralSteelProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_shearAreaZ;
        /**
         */
        Step::Real m_shearAreaY;
        /**
         */
        Step::Real m_plasticShapeFactorY;
        /**
         */
        Step::Real m_plasticShapeFactorZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
