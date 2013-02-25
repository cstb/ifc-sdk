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

#ifndef IFC2X3_IFCPRODUCTSOFCOMBUSTIONPROPERTIES_H
#define IFC2X3_IFCPRODUCTSOFCOMBUSTIONPROPERTIES_H
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
     * Generated class for the IfcProductsOfCombustionProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcProductsOfCombustionProperties : public IfcMaterialProperties {
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
         * Gets the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         */
        virtual IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity();
        /**
         * (const) Returns the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         * @return the value of the explicit attribute 'SpecificHeatCapacity'
         */
        virtual const IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity() const;
        /**
         * Sets the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         * @param value
         */
        virtual void setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value);
        /**
         * unset the attribute 'SpecificHeatCapacity'.
         * 
         */
        virtual void unsetSpecificHeatCapacity();
        /**
         * Test if the attribute 'SpecificHeatCapacity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSpecificHeatCapacity() const;
        /**
         * Gets the value of the explicit attribute 'N20Content'.
         * 
         */
        virtual IfcPositiveRatioMeasure getN20Content();
        /**
         * (const) Returns the value of the explicit attribute 'N20Content'.
         * 
         * @return the value of the explicit attribute 'N20Content'
         */
        virtual const IfcPositiveRatioMeasure getN20Content() const;
        /**
         * Sets the value of the explicit attribute 'N20Content'.
         * 
         * @param value
         */
        virtual void setN20Content(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'N20Content'.
         * 
         */
        virtual void unsetN20Content();
        /**
         * Test if the attribute 'N20Content' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testN20Content() const;
        /**
         * Gets the value of the explicit attribute 'COContent'.
         * 
         */
        virtual IfcPositiveRatioMeasure getCOContent();
        /**
         * (const) Returns the value of the explicit attribute 'COContent'.
         * 
         * @return the value of the explicit attribute 'COContent'
         */
        virtual const IfcPositiveRatioMeasure getCOContent() const;
        /**
         * Sets the value of the explicit attribute 'COContent'.
         * 
         * @param value
         */
        virtual void setCOContent(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'COContent'.
         * 
         */
        virtual void unsetCOContent();
        /**
         * Test if the attribute 'COContent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCOContent() const;
        /**
         * Gets the value of the explicit attribute 'CO2Content'.
         * 
         */
        virtual IfcPositiveRatioMeasure getCO2Content();
        /**
         * (const) Returns the value of the explicit attribute 'CO2Content'.
         * 
         * @return the value of the explicit attribute 'CO2Content'
         */
        virtual const IfcPositiveRatioMeasure getCO2Content() const;
        /**
         * Sets the value of the explicit attribute 'CO2Content'.
         * 
         * @param value
         */
        virtual void setCO2Content(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'CO2Content'.
         * 
         */
        virtual void unsetCO2Content();
        /**
         * Test if the attribute 'CO2Content' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCO2Content() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProductsOfCombustionProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcProductsOfCombustionProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_specificHeatCapacity;
        /**
         */
        Step::Real m_n20Content;
        /**
         */
        Step::Real m_cOContent;
        /**
         */
        Step::Real m_cO2Content;

    };

}

#endif // IFC2X3_IFCPRODUCTSOFCOMBUSTIONPROPERTIES_H
