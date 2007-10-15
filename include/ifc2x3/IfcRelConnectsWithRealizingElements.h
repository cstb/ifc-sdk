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

#ifndef IFC2X3_IFCRELCONNECTSWITHREALIZINGELEMENTS_H
#define IFC2X3_IFCRELCONNECTSWITHREALIZINGELEMENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcRelConnectsElements.h"
#include <Step/Aggregation.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelConnectsWithRealizingElements : public IfcRelConnectsElements {
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
        Step::Set< Step::RefPtr< IfcElement > > &getRealizingElements();
        /**
         */
        IfcLabel getConnectionType();
        /**
         * Sets the value of the explicit attribute 'ConnectionType'.
         * 
         * @param value
         */
        void setConnectionType(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_RealizingElements_type : public Step::Set< Step::RefPtr< IfcElement > > {
        public:
            /**
             */
            IfcRelConnectsWithRealizingElements *mOwner;
            /**
             */
            Inverted_RealizingElements_type();
            /**
             * @param owner
             */
            void setOwner(IfcRelConnectsWithRealizingElements *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcElement > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsWithRealizingElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsWithRealizingElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsWithRealizingElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_RealizingElements_type m_realizingElements;
        /**
         */
        std::string m_connectionType;

    };

}

#endif // IFC2X3_IFCRELCONNECTSWITHREALIZINGELEMENTS_H
