/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcProductDefinitionShape;
    class IfcShapeModel;

    /**
     */
    class IFC2X3_DLL_DEF IfcShapeAspect : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        Step::List< Step::RefPtr< IfcShapeModel > > &getShapeRepresentations();
        /**
         */
        IfcLabel getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcLabel &value);
        /**
         */
        IfcText getDescription();
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        void setDescription(const IfcText &value);
        /**
         */
        Step::Logical getProductDefinitional();
        /**
         * Sets the value of the explicit attribute 'ProductDefinitional'.
         * 
         * @param value
         */
        void setProductDefinitional(Step::Logical value);
        /**
         */
        IfcProductDefinitionShape *getPartOfProductDefinitionShape();
        /**
         * Sets the value of the explicit attribute 'PartOfProductDefinitionShape'.
         * 
         * @param value
         */
        void setPartOfProductDefinitionShape(const Step::RefPtr< IfcProductDefinitionShape > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_ShapeRepresentations_type : public Step::List< Step::RefPtr< IfcShapeModel > > {
        public:
            /**
             */
            IfcShapeAspect *mOwner;
            /**
             */
            Inverted_ShapeRepresentations_type();
            /**
             * @param owner
             */
            void setOwner(IfcShapeAspect *owner);
            /**
             * @param value
             */
            virtual void push_back(const Step::RefPtr< IfcShapeModel > &value);

        };


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
        Inverted_ShapeRepresentations_type m_shapeRepresentations;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_description;
        /**
         */
        Step::Logical m_productDefinitional;
        /**
         */
        Step::RefPtr< IfcProductDefinitionShape > m_partOfProductDefinitionShape;

    };

}

#endif // IFC2X3_IFCSHAPEASPECT_H
