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

#ifndef IFC2X3_IFCRELDECOMPOSES_H
#define IFC2X3_IFCRELDECOMPOSES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcRelationship.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcObjectDefinition;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelDecomposes : public IfcRelationship {
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
        IfcObjectDefinition *getRelatingObject();
        /**
         * Sets the value of the explicit attribute 'RelatingObject'.
         * 
         * @param value
         */
        void setRelatingObject(const Step::RefPtr< IfcObjectDefinition > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcObjectDefinition > > &getRelatedObjects();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_RelatedObjects_type : public Step::Set< Step::RefPtr< IfcObjectDefinition > > {
        public:
            /**
             */
            IfcRelDecomposes *mOwner;
            /**
             */
            Inverted_RelatedObjects_type();
            /**
             * @param owner
             */
            void setOwner(IfcRelDecomposes *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcObjectDefinition > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelDecomposes(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelDecomposes();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelDecomposes &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcObjectDefinition > m_relatingObject;
        /**
         */
        Inverted_RelatedObjects_type m_relatedObjects;

    };

}

#endif // IFC2X3_IFCRELDECOMPOSES_H
