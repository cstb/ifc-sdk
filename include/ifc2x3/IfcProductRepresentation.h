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

#ifndef IFC2X3_IFCPRODUCTREPRESENTATION_H
#define IFC2X3_IFCPRODUCTREPRESENTATION_H
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
    class IfcRepresentation;

    /**
     */
    class IFC2X3_DLL_DEF IfcProductRepresentation : public Step::BaseEntity {
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
        Step::List< Step::RefPtr< IfcRepresentation > > &getRepresentations();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_Representations_type : public Step::List< Step::RefPtr< IfcRepresentation > > {
        public:
            /**
             */
            IfcProductRepresentation *mOwner;
            /**
             */
            Inverted_Representations_type();
            /**
             * @param owner
             */
            void setOwner(IfcProductRepresentation *owner);
            /**
             * @param value
             */
            virtual void push_back(const Step::RefPtr< IfcRepresentation > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcProductRepresentation(Step::Id id, Step::SPFData *args);
        virtual ~IfcProductRepresentation();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProductRepresentation &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_description;
        /**
         */
        Inverted_Representations_type m_representations;

    };

}

#endif // IFC2X3_IFCPRODUCTREPRESENTATION_H
