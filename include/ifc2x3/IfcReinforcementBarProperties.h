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

#ifndef IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
#define IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcReinforcementBarProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcReinforcementBarProperties : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'TotalCrossSectionArea'.
         * 
         */
        virtual IfcAreaMeasure getTotalCrossSectionArea();
        /**
         * (const) Returns the value of the explicit attribute 'TotalCrossSectionArea'.
         * 
         * @return the value of the explicit attribute 'TotalCrossSectionArea'
         */
        virtual const IfcAreaMeasure getTotalCrossSectionArea() const;
        /**
         * Sets the value of the explicit attribute 'TotalCrossSectionArea'.
         * 
         * @param value
         */
        virtual void setTotalCrossSectionArea(IfcAreaMeasure value);
        /**
         * unset the attribute 'TotalCrossSectionArea'.
         * 
         */
        virtual void unsetTotalCrossSectionArea();
        /**
         * Test if the attribute 'TotalCrossSectionArea' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTotalCrossSectionArea() const;
        /**
         * Gets the value of the explicit attribute 'SteelGrade'.
         * 
         */
        virtual IfcLabel getSteelGrade();
        /**
         * (const) Returns the value of the explicit attribute 'SteelGrade'.
         * 
         * @return the value of the explicit attribute 'SteelGrade'
         */
        virtual const IfcLabel getSteelGrade() const;
        /**
         * Sets the value of the explicit attribute 'SteelGrade'.
         * 
         * @param value
         */
        virtual void setSteelGrade(const IfcLabel &value);
        /**
         * unset the attribute 'SteelGrade'.
         * 
         */
        virtual void unsetSteelGrade();
        /**
         * Test if the attribute 'SteelGrade' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSteelGrade() const;
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
        /**
         * Gets the value of the explicit attribute 'EffectiveDepth'.
         * 
         */
        virtual IfcLengthMeasure getEffectiveDepth();
        /**
         * (const) Returns the value of the explicit attribute 'EffectiveDepth'.
         * 
         * @return the value of the explicit attribute 'EffectiveDepth'
         */
        virtual const IfcLengthMeasure getEffectiveDepth() const;
        /**
         * Sets the value of the explicit attribute 'EffectiveDepth'.
         * 
         * @param value
         */
        virtual void setEffectiveDepth(IfcLengthMeasure value);
        /**
         * unset the attribute 'EffectiveDepth'.
         * 
         */
        virtual void unsetEffectiveDepth();
        /**
         * Test if the attribute 'EffectiveDepth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEffectiveDepth() const;
        /**
         * Gets the value of the explicit attribute 'NominalBarDiameter'.
         * 
         */
        virtual IfcPositiveLengthMeasure getNominalBarDiameter();
        /**
         * (const) Returns the value of the explicit attribute 'NominalBarDiameter'.
         * 
         * @return the value of the explicit attribute 'NominalBarDiameter'
         */
        virtual const IfcPositiveLengthMeasure getNominalBarDiameter() const;
        /**
         * Sets the value of the explicit attribute 'NominalBarDiameter'.
         * 
         * @param value
         */
        virtual void setNominalBarDiameter(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'NominalBarDiameter'.
         * 
         */
        virtual void unsetNominalBarDiameter();
        /**
         * Test if the attribute 'NominalBarDiameter' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testNominalBarDiameter() const;
        /**
         * Gets the value of the explicit attribute 'BarCount'.
         * 
         */
        virtual IfcCountMeasure getBarCount();
        /**
         * (const) Returns the value of the explicit attribute 'BarCount'.
         * 
         * @return the value of the explicit attribute 'BarCount'
         */
        virtual const IfcCountMeasure getBarCount() const;
        /**
         * Sets the value of the explicit attribute 'BarCount'.
         * 
         * @param value
         */
        virtual void setBarCount(IfcCountMeasure value);
        /**
         * unset the attribute 'BarCount'.
         * 
         */
        virtual void unsetBarCount();
        /**
         * Test if the attribute 'BarCount' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBarCount() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReinforcementBarProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcReinforcementBarProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReinforcementBarProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_totalCrossSectionArea;
        /**
         */
        Step::String m_steelGrade;
        /**
         */
        IfcReinforcingBarSurfaceEnum m_barSurface;
        /**
         */
        Step::Real m_effectiveDepth;
        /**
         */
        Step::Real m_nominalBarDiameter;
        /**
         */
        Step::Number m_barCount;

    };

}

#endif // IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
