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

#ifndef IFC2X3_IFCSHAPEASPECT_H
#define IFC2X3_IFCSHAPEASPECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcShapeAspect;
    class IfcShapeModel;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcShapeAspect_ShapeRepresentations_type : public List_IfcShapeModel_1_n {
    public:
        /**
         */
        typedef List_IfcShapeModel_1_n::iterator iterator;

        /**
         */
        Inverted_IfcShapeAspect_ShapeRepresentations_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void push_back(const Step::RefPtr< IfcShapeModel > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual iterator erase(const Step::RefPtr< IfcShapeModel > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcShapeAspect;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcShapeAspect *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcShapeAspect *owner);

    };

    class CopyOp;
    class IfcProductDefinitionShape;

    /**
     * Generated class for the IfcShapeAspect Entity.
     * 
     */
    class IFC2X3_EXPORT IfcShapeAspect : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ShapeRepresentations'.
         * 
         */
        virtual List_IfcShapeModel_1_n &getShapeRepresentations();
        /**
         * (const) Returns the value of the explicit attribute 'ShapeRepresentations'.
         * 
         * @return the value of the explicit attribute 'ShapeRepresentations'
         */
        virtual const List_IfcShapeModel_1_n &getShapeRepresentations() const;
        /**
         * unset the attribute 'ShapeRepresentations'.
         * 
         */
        virtual void unsetShapeRepresentations();
        /**
         * Test if the attribute 'ShapeRepresentations' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShapeRepresentations() const;
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * unset the attribute 'Description'.
         * 
         */
        virtual void unsetDescription();
        /**
         * Test if the attribute 'Description' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDescription() const;
        /**
         * Gets the value of the explicit attribute 'ProductDefinitional'.
         * 
         */
        virtual Step::Logical getProductDefinitional();
        /**
         * (const) Returns the value of the explicit attribute 'ProductDefinitional'.
         * 
         * @return the value of the explicit attribute 'ProductDefinitional'
         */
        virtual const Step::Logical getProductDefinitional() const;
        /**
         * Sets the value of the explicit attribute 'ProductDefinitional'.
         * 
         * @param value
         */
        virtual void setProductDefinitional(Step::Logical value);
        /**
         * unset the attribute 'ProductDefinitional'.
         * 
         */
        virtual void unsetProductDefinitional();
        /**
         * Test if the attribute 'ProductDefinitional' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProductDefinitional() const;
        /**
         * Gets the value of the explicit attribute 'PartOfProductDefinitionShape'.
         * 
         */
        virtual IfcProductDefinitionShape *getPartOfProductDefinitionShape();
        /**
         * (const) Returns the value of the explicit attribute 'PartOfProductDefinitionShape'.
         * 
         * @return the value of the explicit attribute 'PartOfProductDefinitionShape'
         */
        virtual const IfcProductDefinitionShape *getPartOfProductDefinitionShape() const;
        /**
         * Sets the value of the explicit attribute 'PartOfProductDefinitionShape'.
         * 
         * @param value
         */
        virtual void setPartOfProductDefinitionShape(const Step::RefPtr< IfcProductDefinitionShape > &value);
        /**
         * unset the attribute 'PartOfProductDefinitionShape'.
         * 
         */
        virtual void unsetPartOfProductDefinitionShape();
        /**
         * Test if the attribute 'PartOfProductDefinitionShape' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPartOfProductDefinitionShape() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcShapeAspect(Step::Id id, Step::SPFData *args);
        virtual ~IfcShapeAspect();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcShapeAspect &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcShapeAspect_ShapeRepresentations_type m_shapeRepresentations;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        Step::Logical m_productDefinitional;
        /**
         */
        Step::RefPtr< IfcProductDefinitionShape > m_partOfProductDefinitionShape;

    };

}

#endif // IFC2X3_IFCSHAPEASPECT_H
