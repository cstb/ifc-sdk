/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCSHAPEASPECT_H
#define IFC2X3_IFCSHAPEASPECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class IfcShapeAspect;
    class IfcShapeModel;

    /**
     */
    class Inverted_IfcShapeAspect_ShapeRepresentations_type : public List_IfcShapeModel_1_n {
    public:
        /**
         */
        typedef List_IfcShapeModel_1_n::iterator iterator;

        /**
         */
        IfcShapeAspect *mOwner;
        /**
         */
        Inverted_IfcShapeAspect_ShapeRepresentations_type();
        /**
         * @param owner
         */
        void setOwner(IfcShapeAspect *owner);
        /**
         * @param value
         */
        virtual void push_back(const Step::RefPtr< IfcShapeModel > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual iterator erase(const Step::RefPtr< IfcShapeModel > &value);

    };

    class CopyOp;
    class IfcProductDefinitionShape;

    /**
     */
    class IFC2X3_DLL_DEF IfcShapeAspect : public Step::BaseEntity {
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
