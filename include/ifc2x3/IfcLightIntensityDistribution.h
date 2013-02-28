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

#ifndef IFC2X3_IFCLIGHTINTENSITYDISTRIBUTION_H
#define IFC2X3_IFCLIGHTINTENSITYDISTRIBUTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcLightIntensityDistribution Entity.
     * 
     */
    class IFC2X3_EXPORT IfcLightIntensityDistribution : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'LightDistributionCurve'.
         * 
         */
        virtual IfcLightDistributionCurveEnum getLightDistributionCurve();
        /**
         * (const) Returns the value of the explicit attribute 'LightDistributionCurve'.
         * 
         * @return the value of the explicit attribute 'LightDistributionCurve'
         */
        virtual const IfcLightDistributionCurveEnum getLightDistributionCurve() const;
        /**
         * Sets the value of the explicit attribute 'LightDistributionCurve'.
         * 
         * @param value
         */
        virtual void setLightDistributionCurve(IfcLightDistributionCurveEnum value);
        /**
         * unset the attribute 'LightDistributionCurve'.
         * 
         */
        virtual void unsetLightDistributionCurve();
        /**
         * Test if the attribute 'LightDistributionCurve' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLightDistributionCurve() const;
        /**
         * Gets the value of the explicit attribute 'DistributionData'.
         * 
         */
        virtual List_IfcLightDistributionData_1_n &getDistributionData();
        /**
         * (const) Returns the value of the explicit attribute 'DistributionData'.
         * 
         * @return the value of the explicit attribute 'DistributionData'
         */
        virtual const List_IfcLightDistributionData_1_n &getDistributionData() const;
        /**
         * Sets the value of the explicit attribute 'DistributionData'.
         * 
         * @param value
         */
        virtual void setDistributionData(const List_IfcLightDistributionData_1_n &value);
        /**
         * unset the attribute 'DistributionData'.
         * 
         */
        virtual void unsetDistributionData();
        /**
         * Test if the attribute 'DistributionData' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDistributionData() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLightIntensityDistribution(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightIntensityDistribution();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightIntensityDistribution &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcLightDistributionCurveEnum m_lightDistributionCurve;
        /**
         */
        List_IfcLightDistributionData_1_n m_distributionData;

    };

}

#endif // IFC2X3_IFCLIGHTINTENSITYDISTRIBUTION_H
