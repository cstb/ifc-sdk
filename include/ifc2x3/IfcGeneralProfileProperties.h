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

#ifndef IFC2X3_IFCGENERALPROFILEPROPERTIES_H
#define IFC2X3_IFCGENERALPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcProfileProperties.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcGeneralProfileProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcGeneralProfileProperties : public IfcProfileProperties {
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
         * Gets the value of the explicit attribute 'PhysicalWeight'.
         * 
         */
        virtual IfcMassPerLengthMeasure getPhysicalWeight();
        /**
         * (const) Returns the value of the explicit attribute 'PhysicalWeight'.
         * 
         * @return the value of the explicit attribute 'PhysicalWeight'
         */
        virtual const IfcMassPerLengthMeasure getPhysicalWeight() const;
        /**
         * Sets the value of the explicit attribute 'PhysicalWeight'.
         * 
         * @param value
         */
        virtual void setPhysicalWeight(IfcMassPerLengthMeasure value);
        /**
         * unset the attribute 'PhysicalWeight'.
         * 
         */
        virtual void unsetPhysicalWeight();
        /**
         * Test if the attribute 'PhysicalWeight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPhysicalWeight() const;
        /**
         * Gets the value of the explicit attribute 'Perimeter'.
         * 
         */
        virtual IfcPositiveLengthMeasure getPerimeter();
        /**
         * (const) Returns the value of the explicit attribute 'Perimeter'.
         * 
         * @return the value of the explicit attribute 'Perimeter'
         */
        virtual const IfcPositiveLengthMeasure getPerimeter() const;
        /**
         * Sets the value of the explicit attribute 'Perimeter'.
         * 
         * @param value
         */
        virtual void setPerimeter(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Perimeter'.
         * 
         */
        virtual void unsetPerimeter();
        /**
         * Test if the attribute 'Perimeter' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPerimeter() const;
        /**
         * Gets the value of the explicit attribute 'MinimumPlateThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getMinimumPlateThickness();
        /**
         * (const) Returns the value of the explicit attribute 'MinimumPlateThickness'.
         * 
         * @return the value of the explicit attribute 'MinimumPlateThickness'
         */
        virtual const IfcPositiveLengthMeasure getMinimumPlateThickness() const;
        /**
         * Sets the value of the explicit attribute 'MinimumPlateThickness'.
         * 
         * @param value
         */
        virtual void setMinimumPlateThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'MinimumPlateThickness'.
         * 
         */
        virtual void unsetMinimumPlateThickness();
        /**
         * Test if the attribute 'MinimumPlateThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMinimumPlateThickness() const;
        /**
         * Gets the value of the explicit attribute 'MaximumPlateThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getMaximumPlateThickness();
        /**
         * (const) Returns the value of the explicit attribute 'MaximumPlateThickness'.
         * 
         * @return the value of the explicit attribute 'MaximumPlateThickness'
         */
        virtual const IfcPositiveLengthMeasure getMaximumPlateThickness() const;
        /**
         * Sets the value of the explicit attribute 'MaximumPlateThickness'.
         * 
         * @param value
         */
        virtual void setMaximumPlateThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'MaximumPlateThickness'.
         * 
         */
        virtual void unsetMaximumPlateThickness();
        /**
         * Test if the attribute 'MaximumPlateThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMaximumPlateThickness() const;
        /**
         * Gets the value of the explicit attribute 'CrossSectionArea'.
         * 
         */
        virtual IfcAreaMeasure getCrossSectionArea();
        /**
         * (const) Returns the value of the explicit attribute 'CrossSectionArea'.
         * 
         * @return the value of the explicit attribute 'CrossSectionArea'
         */
        virtual const IfcAreaMeasure getCrossSectionArea() const;
        /**
         * Sets the value of the explicit attribute 'CrossSectionArea'.
         * 
         * @param value
         */
        virtual void setCrossSectionArea(IfcAreaMeasure value);
        /**
         * unset the attribute 'CrossSectionArea'.
         * 
         */
        virtual void unsetCrossSectionArea();
        /**
         * Test if the attribute 'CrossSectionArea' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCrossSectionArea() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGeneralProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeneralProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGeneralProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_physicalWeight;
        /**
         */
        Step::Real m_perimeter;
        /**
         */
        Step::Real m_minimumPlateThickness;
        /**
         */
        Step::Real m_maximumPlateThickness;
        /**
         */
        Step::Real m_crossSectionArea;

    };

}

#endif // IFC2X3_IFCGENERALPROFILEPROPERTIES_H
