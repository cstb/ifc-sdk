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

#ifndef IFC2X3_IFCPRODUCTDEFINITIONSHAPE_H
#define IFC2X3_IFCPRODUCTDEFINITIONSHAPE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcProductRepresentation.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcProductDefinitionShape Entity.
     * 
     */
    class IFC2X3_EXPORT IfcProductDefinitionShape : public IfcProductRepresentation {
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
         * Gets the value of the inverse attribute 'ShapeOfProduct'.
         * MM 2009/09/07 personnal change reported to Thomas Liebich for evalutation
         * 
         */
        virtual Inverse_Set_IfcProduct_1_n &getShapeOfProduct();
        /**
         * (const) Returns the value of the explicit attribute 'ShapeOfProduct'.
         * MM 2009/09/07 personnal change reported to Thomas Liebich for evalutation
         * 
         * @return the value of the explicit attribute 'ShapeOfProduct'
         */
        const virtual Inverse_Set_IfcProduct_1_n &getShapeOfProduct() const;
        /**
         * Test if the attribute 'ShapeOfProduct' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShapeOfProduct() const;
        /**
         * Gets the value of the inverse attribute 'HasShapeAspects'.
         * 
         */
        virtual Inverse_Set_IfcShapeAspect_0_n &getHasShapeAspects();
        /**
         * (const) Returns the value of the explicit attribute 'HasShapeAspects'.
         * 
         * @return the value of the explicit attribute 'HasShapeAspects'
         */
        const virtual Inverse_Set_IfcShapeAspect_0_n &getHasShapeAspects() const;
        /**
         * Test if the attribute 'HasShapeAspects' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasShapeAspects() const;
        friend class IfcShapeAspect;
        friend class ExpressDataSet;
        friend class IfcProduct;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProductDefinitionShape(Step::Id id, Step::SPFData *args);
        virtual ~IfcProductDefinitionShape();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProductDefinitionShape &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         * MM 2009/09/07 personnal change reported to Thomas Liebich for evalutation
         */
        Inverse_Set_IfcProduct_1_n m_shapeOfProduct;
        /**
         */
        Inverse_Set_IfcShapeAspect_0_n m_hasShapeAspects;

    };

}

#endif // IFC2X3_IFCPRODUCTDEFINITIONSHAPE_H
