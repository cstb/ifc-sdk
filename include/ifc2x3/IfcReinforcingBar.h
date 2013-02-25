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

#ifndef IFC2X3_IFCREINFORCINGBAR_H
#define IFC2X3_IFCREINFORCINGBAR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcReinforcingElement.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcReinforcingBar Entity.
     * 
     */
    class IFC2X3_EXPORT IfcReinforcingBar : public IfcReinforcingElement {
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
         * Gets the value of the explicit attribute 'NominalDiameter'.
         * 
         */
        virtual IfcPositiveLengthMeasure getNominalDiameter();
        /**
         * (const) Returns the value of the explicit attribute 'NominalDiameter'.
         * 
         * @return the value of the explicit attribute 'NominalDiameter'
         */
        virtual const IfcPositiveLengthMeasure getNominalDiameter() const;
        /**
         * Sets the value of the explicit attribute 'NominalDiameter'.
         * 
         * @param value
         */
        virtual void setNominalDiameter(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'NominalDiameter'.
         * 
         */
        virtual void unsetNominalDiameter();
        /**
         * Test if the attribute 'NominalDiameter' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testNominalDiameter() const;
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
        /**
         * Gets the value of the explicit attribute 'BarLength'.
         * 
         */
        virtual IfcPositiveLengthMeasure getBarLength();
        /**
         * (const) Returns the value of the explicit attribute 'BarLength'.
         * 
         * @return the value of the explicit attribute 'BarLength'
         */
        virtual const IfcPositiveLengthMeasure getBarLength() const;
        /**
         * Sets the value of the explicit attribute 'BarLength'.
         * 
         * @param value
         */
        virtual void setBarLength(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'BarLength'.
         * 
         */
        virtual void unsetBarLength();
        /**
         * Test if the attribute 'BarLength' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBarLength() const;
        /**
         * Gets the value of the explicit attribute 'BarRole'.
         * 
         */
        virtual IfcReinforcingBarRoleEnum getBarRole();
        /**
         * (const) Returns the value of the explicit attribute 'BarRole'.
         * 
         * @return the value of the explicit attribute 'BarRole'
         */
        virtual const IfcReinforcingBarRoleEnum getBarRole() const;
        /**
         * Sets the value of the explicit attribute 'BarRole'.
         * 
         * @param value
         */
        virtual void setBarRole(IfcReinforcingBarRoleEnum value);
        /**
         * unset the attribute 'BarRole'.
         * 
         */
        virtual void unsetBarRole();
        /**
         * Test if the attribute 'BarRole' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBarRole() const;
        /**
         * Gets the value of the explicit attribute 'BarSurface'.
         * 
         */
        virtual IfcReinforcingBarSurfaceEnum getBarSurface();
        /**
         * (const) Returns the value of the explicit attribute 'BarSurface'.
         * 
         * @return the value of the explicit attribute 'BarSurface'
         */
        virtual const IfcReinforcingBarSurfaceEnum getBarSurface() const;
        /**
         * Sets the value of the explicit attribute 'BarSurface'.
         * 
         * @param value
         */
        virtual void setBarSurface(IfcReinforcingBarSurfaceEnum value);
        /**
         * unset the attribute 'BarSurface'.
         * 
         */
        virtual void unsetBarSurface();
        /**
         * Test if the attribute 'BarSurface' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBarSurface() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReinforcingBar(Step::Id id, Step::SPFData *args);
        virtual ~IfcReinforcingBar();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReinforcingBar &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_nominalDiameter;
        /**
         */
        Step::Real m_crossSectionArea;
        /**
         */
        Step::Real m_barLength;
        /**
         */
        IfcReinforcingBarRoleEnum m_barRole;
        /**
         */
        IfcReinforcingBarSurfaceEnum m_barSurface;

    };

}

#endif // IFC2X3_IFCREINFORCINGBAR_H
