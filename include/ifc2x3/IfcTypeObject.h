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

#ifndef IFC2X3_IFCTYPEOBJECT_H
#define IFC2X3_IFCTYPEOBJECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/Referenced.h>
#include "ifc2x3/IfcObjectDefinition.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcPropertySetDefinition;
    class IfcRelDefinesByType;

    /**
     */
    class IFC2X3_DLL_DEF IfcTypeObject : public IfcObjectDefinition {
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
        IfcLabel getApplicableOccurrence();
        /**
         * Sets the value of the explicit attribute 'ApplicableOccurrence'.
         * 
         * @param value
         */
        void setApplicableOccurrence(const IfcLabel &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcPropertySetDefinition > > &getHasPropertySets();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelDefinesByType > > &getObjectTypeOf();
        /**
         */
        virtual void release();
        friend class IfcRelDefinesByType;
        friend class ExpressDataSet;
        /**
         */
        class Inverted_HasPropertySets_type : public Step::Set< Step::RefPtr< IfcPropertySetDefinition > > {
        public:
            /**
             */
            IfcTypeObject *mOwner;
            /**
             */
            Inverted_HasPropertySets_type();
            /**
             * @param owner
             */
            void setOwner(IfcTypeObject *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcPropertySetDefinition > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcTypeObject(Step::Id id, Step::SPFData *args);
        virtual ~IfcTypeObject();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTypeObject &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_applicableOccurrence;
        /**
         */
        Inverted_HasPropertySets_type m_hasPropertySets;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelDefinesByType > > m_objectTypeOf;

    };

}

#endif // IFC2X3_IFCTYPEOBJECT_H
