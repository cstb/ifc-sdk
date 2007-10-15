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

#ifndef IFC2X3_IFCREFERENCESVALUEDOCUMENT_H
#define IFC2X3_IFCREFERENCESVALUEDOCUMENT_H
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
    class IfcAppliedValue;
    class IfcDocumentSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcReferencesValueDocument : public Step::BaseEntity {
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
        IfcDocumentSelect *getReferencedDocument();
        /**
         * Sets the value of the explicit attribute 'ReferencedDocument'.
         * 
         * @param value
         */
        void setReferencedDocument(const Step::RefPtr< IfcDocumentSelect > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcAppliedValue > > &getReferencingValues();
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
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_ReferencingValues_type : public Step::Set< Step::RefPtr< IfcAppliedValue > > {
        public:
            /**
             */
            IfcReferencesValueDocument *mOwner;
            /**
             */
            Inverted_ReferencingValues_type();
            /**
             * @param owner
             */
            void setOwner(IfcReferencesValueDocument *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcAppliedValue > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcReferencesValueDocument(Step::Id id, Step::SPFData *args);
        virtual ~IfcReferencesValueDocument();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReferencesValueDocument &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDocumentSelect > m_referencedDocument;
        /**
         */
        Inverted_ReferencingValues_type m_referencingValues;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_description;

    };

}

#endif // IFC2X3_IFCREFERENCESVALUEDOCUMENT_H
