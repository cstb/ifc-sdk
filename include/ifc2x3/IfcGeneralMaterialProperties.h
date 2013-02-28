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

#ifndef IFC2X3_IFCGENERALMATERIALPROPERTIES_H
#define IFC2X3_IFCGENERALMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcMaterialProperties.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcGeneralMaterialProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcGeneralMaterialProperties : public IfcMaterialProperties {
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
         * Gets the value of the explicit attribute 'MolecularWeight'.
         * 
         */
        virtual IfcMolecularWeightMeasure getMolecularWeight();
        /**
         * (const) Returns the value of the explicit attribute 'MolecularWeight'.
         * 
         * @return the value of the explicit attribute 'MolecularWeight'
         */
        virtual const IfcMolecularWeightMeasure getMolecularWeight() const;
        /**
         * Sets the value of the explicit attribute 'MolecularWeight'.
         * 
         * @param value
         */
        virtual void setMolecularWeight(IfcMolecularWeightMeasure value);
        /**
         * unset the attribute 'MolecularWeight'.
         * 
         */
        virtual void unsetMolecularWeight();
        /**
         * Test if the attribute 'MolecularWeight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMolecularWeight() const;
        /**
         * Gets the value of the explicit attribute 'Porosity'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getPorosity();
        /**
         * (const) Returns the value of the explicit attribute 'Porosity'.
         * 
         * @return the value of the explicit attribute 'Porosity'
         */
        virtual const IfcNormalisedRatioMeasure getPorosity() const;
        /**
         * Sets the value of the explicit attribute 'Porosity'.
         * 
         * @param value
         */
        virtual void setPorosity(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'Porosity'.
         * 
         */
        virtual void unsetPorosity();
        /**
         * Test if the attribute 'Porosity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPorosity() const;
        /**
         * Gets the value of the explicit attribute 'MassDensity'.
         * 
         */
        virtual IfcMassDensityMeasure getMassDensity();
        /**
         * (const) Returns the value of the explicit attribute 'MassDensity'.
         * 
         * @return the value of the explicit attribute 'MassDensity'
         */
        virtual const IfcMassDensityMeasure getMassDensity() const;
        /**
         * Sets the value of the explicit attribute 'MassDensity'.
         * 
         * @param value
         */
        virtual void setMassDensity(IfcMassDensityMeasure value);
        /**
         * unset the attribute 'MassDensity'.
         * 
         */
        virtual void unsetMassDensity();
        /**
         * Test if the attribute 'MassDensity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMassDensity() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGeneralMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeneralMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGeneralMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_molecularWeight;
        /**
         */
        Step::Real m_porosity;
        /**
         */
        Step::Real m_massDensity;

    };

}

#endif // IFC2X3_IFCGENERALMATERIALPROPERTIES_H
