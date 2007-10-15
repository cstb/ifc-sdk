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

#ifndef IFC2X3_IFCCOMPLEXPROPERTY_H
#define IFC2X3_IFCCOMPLEXPROPERTY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <Step/SPFData.h>
#include <string>
#include "ifc2x3/IfcProperty.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcComplexProperty : public IfcProperty {
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
        IfcIdentifier getUsageName();
        /**
         * Sets the value of the explicit attribute 'UsageName'.
         * 
         * @param value
         */
        void setUsageName(const IfcIdentifier &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcProperty > > &getHasProperties();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_HasProperties_type : public Step::Set< Step::RefPtr< IfcProperty > > {
        public:
            /**
             */
            IfcComplexProperty *mOwner;
            /**
             */
            Inverted_HasProperties_type();
            /**
             * @param owner
             */
            void setOwner(IfcComplexProperty *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcProperty > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcComplexProperty(Step::Id id, Step::SPFData *args);
        virtual ~IfcComplexProperty();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcComplexProperty &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_usageName;
        /**
         */
        Inverted_HasProperties_type m_hasProperties;

    };

}

#endif // IFC2X3_IFCCOMPLEXPROPERTY_H
