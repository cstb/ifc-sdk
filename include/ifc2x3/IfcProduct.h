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

#ifndef IFC2X3_IFCPRODUCT_H
#define IFC2X3_IFCPRODUCT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcObjectPlacement;
    class IfcProductRepresentation;

    /**
     * Generated class for the IfcProduct Entity.
     * 
     */
    class IFC2X3_EXPORT IfcProduct : public IfcObject {
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
         * Gets the value of the explicit attribute 'ObjectPlacement'.
         * 
         */
        virtual IfcObjectPlacement *getObjectPlacement();
        /**
         * (const) Returns the value of the explicit attribute 'ObjectPlacement'.
         * 
         * @return the value of the explicit attribute 'ObjectPlacement'
         */
        virtual const IfcObjectPlacement *getObjectPlacement() const;
        /**
         * Sets the value of the explicit attribute 'ObjectPlacement'.
         * 
         * @param value
         */
        virtual void setObjectPlacement(const Step::RefPtr< IfcObjectPlacement > &value);
        /**
         * unset the attribute 'ObjectPlacement'.
         * 
         */
        virtual void unsetObjectPlacement();
        /**
         * Test if the attribute 'ObjectPlacement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testObjectPlacement() const;
        /**
         * Gets the value of the explicit attribute 'Representation'.
         * 
         */
        virtual IfcProductRepresentation *getRepresentation();
        /**
         * (const) Returns the value of the explicit attribute 'Representation'.
         * 
         * @return the value of the explicit attribute 'Representation'
         */
        virtual const IfcProductRepresentation *getRepresentation() const;
        /**
         * Sets the value of the explicit attribute 'Representation'.
         * 
         * @param value
         */
        virtual void setRepresentation(const Step::RefPtr< IfcProductRepresentation > &value);
        /**
         * unset the attribute 'Representation'.
         * 
         */
        virtual void unsetRepresentation();
        /**
         * Test if the attribute 'Representation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRepresentation() const;
        /**
         * Gets the value of the inverse attribute 'ReferencedBy'.
         * 
         */
        virtual Inverse_Set_IfcRelAssignsToProduct_0_n &getReferencedBy();
        /**
         * (const) Returns the value of the explicit attribute 'ReferencedBy'.
         * 
         * @return the value of the explicit attribute 'ReferencedBy'
         */
        const virtual Inverse_Set_IfcRelAssignsToProduct_0_n &getReferencedBy() const;
        /**
         * Test if the attribute 'ReferencedBy' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testReferencedBy() const;
        friend class IfcRelAssignsToProduct;
        friend class Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type;
        friend class ExpressDataSet;
        friend class Inverted_IfcRelReferencedInSpatialStructure_RelatedElements_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProduct(Step::Id id, Step::SPFData *args);
        virtual ~IfcProduct();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProduct &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcObjectPlacement > m_objectPlacement;
        /**
         */
        Step::RefPtr< IfcProductRepresentation > m_representation;
        /**
         */
        Inverse_Set_IfcRelAssignsToProduct_0_n m_referencedBy;

    };

}

#endif // IFC2X3_IFCPRODUCT_H
