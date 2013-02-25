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

#ifndef IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
#define IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcConstructionResource.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcConstructionMaterialResource Entity.
     * 
     */
    class IFC2X3_EXPORT IfcConstructionMaterialResource : public IfcConstructionResource {
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
         * Gets the value of the explicit attribute 'Suppliers'.
         * 
         */
        virtual Set_IfcActorSelect_1_n &getSuppliers();
        /**
         * (const) Returns the value of the explicit attribute 'Suppliers'.
         * 
         * @return the value of the explicit attribute 'Suppliers'
         */
        virtual const Set_IfcActorSelect_1_n &getSuppliers() const;
        /**
         * Sets the value of the explicit attribute 'Suppliers'.
         * 
         * @param value
         */
        virtual void setSuppliers(const Set_IfcActorSelect_1_n &value);
        /**
         * unset the attribute 'Suppliers'.
         * 
         */
        virtual void unsetSuppliers();
        /**
         * Test if the attribute 'Suppliers' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSuppliers() const;
        /**
         * Gets the value of the explicit attribute 'UsageRatio'.
         * 
         */
        virtual IfcRatioMeasure getUsageRatio();
        /**
         * (const) Returns the value of the explicit attribute 'UsageRatio'.
         * 
         * @return the value of the explicit attribute 'UsageRatio'
         */
        virtual const IfcRatioMeasure getUsageRatio() const;
        /**
         * Sets the value of the explicit attribute 'UsageRatio'.
         * 
         * @param value
         */
        virtual void setUsageRatio(IfcRatioMeasure value);
        /**
         * unset the attribute 'UsageRatio'.
         * 
         */
        virtual void unsetUsageRatio();
        /**
         * Test if the attribute 'UsageRatio' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUsageRatio() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConstructionMaterialResource(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstructionMaterialResource();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConstructionMaterialResource &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Set_IfcActorSelect_1_n m_suppliers;
        /**
         */
        Step::Real m_usageRatio;

    };

}

#endif // IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
