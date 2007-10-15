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

#ifndef IFC2X3_IFCRELCOVERSSPACES_H
#define IFC2X3_IFCRELCOVERSSPACES_H
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
    class IfcSpace;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelCoversSpaces : public IfcRelConnects {
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
        IfcSpace *getRelatedSpace();
        /**
         * Sets the value of the explicit attribute 'RelatedSpace'.
         * 
         * @param value
         */
        void setRelatedSpace(const Step::RefPtr< IfcSpace > &value);
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
            IfcRelCoversSpaces *mOwner;
            /**
             */
            Inverted_RelatedCoverings_type();
            /**
             * @param owner
             */
            void setOwner(IfcRelCoversSpaces *owner);
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
        IfcRelCoversSpaces(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelCoversSpaces();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelCoversSpaces &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSpace > m_relatedSpace;
        /**
         */
        Inverted_RelatedCoverings_type m_relatedCoverings;

    };

}

#endif // IFC2X3_IFCRELCOVERSSPACES_H
