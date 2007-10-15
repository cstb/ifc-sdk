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

#ifndef IFC2X3_IFCRELCOVERSBLDGELEMENTS_H
#define IFC2X3_IFCRELCOVERSBLDGELEMENTS_H
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
    class IfcCovering;
    class IfcElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelCoversBldgElements : public IfcRelConnects {
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
        IfcElement *getRelatingBuildingElement();
        /**
         * Sets the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         * @param value
         */
        void setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcCovering > > &getRelatedCoverings();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_RelatedCoverings_type : public Step::Set< Step::RefPtr< IfcCovering > > {
        public:
            /**
             */
            IfcRelCoversBldgElements *mOwner;
            /**
             */
            Inverted_RelatedCoverings_type();
            /**
             * @param owner
             */
            void setOwner(IfcRelCoversBldgElements *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcCovering > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelCoversBldgElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelCoversBldgElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelCoversBldgElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcElement > m_relatingBuildingElement;
        /**
         */
        Inverted_RelatedCoverings_type m_relatedCoverings;

    };

}

#endif // IFC2X3_IFCRELCOVERSBLDGELEMENTS_H
