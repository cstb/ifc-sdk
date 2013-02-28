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

#ifndef IFC2X3_IFCSPACE_H
#define IFC2X3_IFCSPACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSpatialStructureElement.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcSpace Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSpace : public IfcSpatialStructureElement {
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
         * Gets the value of the explicit attribute 'InteriorOrExteriorSpace'.
         * 
         */
        virtual IfcInternalOrExternalEnum getInteriorOrExteriorSpace();
        /**
         * (const) Returns the value of the explicit attribute 'InteriorOrExteriorSpace'.
         * 
         * @return the value of the explicit attribute 'InteriorOrExteriorSpace'
         */
        virtual const IfcInternalOrExternalEnum getInteriorOrExteriorSpace() const;
        /**
         * Sets the value of the explicit attribute 'InteriorOrExteriorSpace'.
         * 
         * @param value
         */
        virtual void setInteriorOrExteriorSpace(IfcInternalOrExternalEnum value);
        /**
         * unset the attribute 'InteriorOrExteriorSpace'.
         * 
         */
        virtual void unsetInteriorOrExteriorSpace();
        /**
         * Test if the attribute 'InteriorOrExteriorSpace' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testInteriorOrExteriorSpace() const;
        /**
         * Gets the value of the explicit attribute 'ElevationWithFlooring'.
         * 
         */
        virtual IfcLengthMeasure getElevationWithFlooring();
        /**
         * (const) Returns the value of the explicit attribute 'ElevationWithFlooring'.
         * 
         * @return the value of the explicit attribute 'ElevationWithFlooring'
         */
        virtual const IfcLengthMeasure getElevationWithFlooring() const;
        /**
         * Sets the value of the explicit attribute 'ElevationWithFlooring'.
         * 
         * @param value
         */
        virtual void setElevationWithFlooring(IfcLengthMeasure value);
        /**
         * unset the attribute 'ElevationWithFlooring'.
         * 
         */
        virtual void unsetElevationWithFlooring();
        /**
         * Test if the attribute 'ElevationWithFlooring' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testElevationWithFlooring() const;
        /**
         * Gets the value of the inverse attribute 'HasCoverings'.
         * 
         */
        virtual Inverse_Set_IfcRelCoversSpaces_0_n &getHasCoverings();
        /**
         * (const) Returns the value of the explicit attribute 'HasCoverings'.
         * 
         * @return the value of the explicit attribute 'HasCoverings'
         */
        const virtual Inverse_Set_IfcRelCoversSpaces_0_n &getHasCoverings() const;
        /**
         * Test if the attribute 'HasCoverings' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasCoverings() const;
        /**
         * Gets the value of the inverse attribute 'BoundedBy'.
         * 
         */
        virtual Inverse_Set_IfcRelSpaceBoundary_0_n &getBoundedBy();
        /**
         * (const) Returns the value of the explicit attribute 'BoundedBy'.
         * 
         * @return the value of the explicit attribute 'BoundedBy'
         */
        const virtual Inverse_Set_IfcRelSpaceBoundary_0_n &getBoundedBy() const;
        /**
         * Test if the attribute 'BoundedBy' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBoundedBy() const;
        friend class IfcRelCoversSpaces;
        friend class ExpressDataSet;
        friend class IfcRelSpaceBoundary;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSpace(Step::Id id, Step::SPFData *args);
        virtual ~IfcSpace();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSpace &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcInternalOrExternalEnum m_interiorOrExteriorSpace;
        /**
         */
        Step::Real m_elevationWithFlooring;
        /**
         */
        Inverse_Set_IfcRelCoversSpaces_0_n m_hasCoverings;
        /**
         */
        Inverse_Set_IfcRelSpaceBoundary_0_n m_boundedBy;

    };

}

#endif // IFC2X3_IFCSPACE_H
