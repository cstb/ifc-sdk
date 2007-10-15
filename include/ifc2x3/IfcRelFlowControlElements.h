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

#ifndef IFC2X3_IFCRELFLOWCONTROLELEMENTS_H
#define IFC2X3_IFCRELFLOWCONTROLELEMENTS_H
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
    class IfcDistributionControlElement;
    class IfcDistributionFlowElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelFlowControlElements : public IfcRelConnects {
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
        Step::Set< Step::RefPtr< IfcDistributionControlElement > > &getRelatedControlElements();
        /**
         */
        IfcDistributionFlowElement *getRelatingFlowElement();
        /**
         * Sets the value of the explicit attribute 'RelatingFlowElement'.
         * 
         * @param value
         */
        void setRelatingFlowElement(const Step::RefPtr< IfcDistributionFlowElement > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_RelatedControlElements_type : public Step::Set< Step::RefPtr< IfcDistributionControlElement > > {
        public:
            /**
             */
            IfcRelFlowControlElements *mOwner;
            /**
             */
            Inverted_RelatedControlElements_type();
            /**
             * @param owner
             */
            void setOwner(IfcRelFlowControlElements *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcDistributionControlElement > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelFlowControlElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelFlowControlElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelFlowControlElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_RelatedControlElements_type m_relatedControlElements;
        /**
         */
        Step::RefPtr< IfcDistributionFlowElement > m_relatingFlowElement;

    };

}

#endif // IFC2X3_IFCRELFLOWCONTROLELEMENTS_H
