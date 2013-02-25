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

#ifndef IFC2X3_IFCTENDON_H
#define IFC2X3_IFCTENDON_H
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
     * Generated class for the IfcTendon Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTendon : public IfcReinforcingElement {
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
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcTendonTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcTendonTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcTendonTypeEnum value);
        /**
         * unset the attribute 'PredefinedType'.
         * 
         */
        virtual void unsetPredefinedType();
        /**
         * Test if the attribute 'PredefinedType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPredefinedType() const;
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
         * Gets the value of the explicit attribute 'TensionForce'.
         * 
         */
        virtual IfcForceMeasure getTensionForce();
        /**
         * (const) Returns the value of the explicit attribute 'TensionForce'.
         * 
         * @return the value of the explicit attribute 'TensionForce'
         */
        virtual const IfcForceMeasure getTensionForce() const;
        /**
         * Sets the value of the explicit attribute 'TensionForce'.
         * 
         * @param value
         */
        virtual void setTensionForce(IfcForceMeasure value);
        /**
         * unset the attribute 'TensionForce'.
         * 
         */
        virtual void unsetTensionForce();
        /**
         * Test if the attribute 'TensionForce' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTensionForce() const;
        /**
         * Gets the value of the explicit attribute 'PreStress'.
         * 
         */
        virtual IfcPressureMeasure getPreStress();
        /**
         * (const) Returns the value of the explicit attribute 'PreStress'.
         * 
         * @return the value of the explicit attribute 'PreStress'
         */
        virtual const IfcPressureMeasure getPreStress() const;
        /**
         * Sets the value of the explicit attribute 'PreStress'.
         * 
         * @param value
         */
        virtual void setPreStress(IfcPressureMeasure value);
        /**
         * unset the attribute 'PreStress'.
         * 
         */
        virtual void unsetPreStress();
        /**
         * Test if the attribute 'PreStress' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPreStress() const;
        /**
         * Gets the value of the explicit attribute 'FrictionCoefficient'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getFrictionCoefficient();
        /**
         * (const) Returns the value of the explicit attribute 'FrictionCoefficient'.
         * 
         * @return the value of the explicit attribute 'FrictionCoefficient'
         */
        virtual const IfcNormalisedRatioMeasure getFrictionCoefficient() const;
        /**
         * Sets the value of the explicit attribute 'FrictionCoefficient'.
         * 
         * @param value
         */
        virtual void setFrictionCoefficient(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'FrictionCoefficient'.
         * 
         */
        virtual void unsetFrictionCoefficient();
        /**
         * Test if the attribute 'FrictionCoefficient' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFrictionCoefficient() const;
        /**
         * Gets the value of the explicit attribute 'AnchorageSlip'.
         * 
         */
        virtual IfcPositiveLengthMeasure getAnchorageSlip();
        /**
         * (const) Returns the value of the explicit attribute 'AnchorageSlip'.
         * 
         * @return the value of the explicit attribute 'AnchorageSlip'
         */
        virtual const IfcPositiveLengthMeasure getAnchorageSlip() const;
        /**
         * Sets the value of the explicit attribute 'AnchorageSlip'.
         * 
         * @param value
         */
        virtual void setAnchorageSlip(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'AnchorageSlip'.
         * 
         */
        virtual void unsetAnchorageSlip();
        /**
         * Test if the attribute 'AnchorageSlip' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAnchorageSlip() const;
        /**
         * Gets the value of the explicit attribute 'MinCurvatureRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getMinCurvatureRadius();
        /**
         * (const) Returns the value of the explicit attribute 'MinCurvatureRadius'.
         * 
         * @return the value of the explicit attribute 'MinCurvatureRadius'
         */
        virtual const IfcPositiveLengthMeasure getMinCurvatureRadius() const;
        /**
         * Sets the value of the explicit attribute 'MinCurvatureRadius'.
         * 
         * @param value
         */
        virtual void setMinCurvatureRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'MinCurvatureRadius'.
         * 
         */
        virtual void unsetMinCurvatureRadius();
        /**
         * Test if the attribute 'MinCurvatureRadius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMinCurvatureRadius() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTendon(Step::Id id, Step::SPFData *args);
        virtual ~IfcTendon();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTendon &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcTendonTypeEnum m_predefinedType;
        /**
         */
        Step::Real m_nominalDiameter;
        /**
         */
        Step::Real m_crossSectionArea;
        /**
         */
        Step::Real m_tensionForce;
        /**
         */
        Step::Real m_preStress;
        /**
         */
        Step::Real m_frictionCoefficient;
        /**
         */
        Step::Real m_anchorageSlip;
        /**
         */
        Step::Real m_minCurvatureRadius;

    };

}

#endif // IFC2X3_IFCTENDON_H
