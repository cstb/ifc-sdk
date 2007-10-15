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

#ifndef IFC2X3_IFCRELCONTAINEDINSPATIALSTRUCTURE_H
#define IFC2X3_IFCRELCONTAINEDINSPATIALSTRUCTURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcRelConnects.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcProduct;
    class IfcSpatialStructureElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelContainedInSpatialStructure : public IfcRelConnects {
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
        Step::Set< Step::RefPtr< IfcProduct > > &getRelatedElements();
        /**
         */
        IfcSpatialStructureElement *getRelatingStructure();
        /**
         * Sets the value of the explicit attribute 'RelatingStructure'.
         * 
         * @param value
         */
        void setRelatingStructure(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_RelatedElements_type : public Step::Set< Step::RefPtr< IfcProduct > > {
        public:
            /**
             */
            IfcRelContainedInSpatialStructure *mOwner;
            /**
             */
            Inverted_RelatedElements_type();
            /**
             * @param owner
             */
            void setOwner(IfcRelContainedInSpatialStructure *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcProduct > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelContainedInSpatialStructure(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelContainedInSpatialStructure();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelContainedInSpatialStructure &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_RelatedElements_type m_relatedElements;
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > m_relatingStructure;

    };

}

#endif // IFC2X3_IFCRELCONTAINEDINSPATIALSTRUCTURE_H
