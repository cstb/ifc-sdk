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

#ifndef IFC2X3_IFCPORT_H
#define IFC2X3_IFCPORT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcAlignmentElement.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRelConnectsPortToElement;
    class IfcRelConnectsPorts;

    /**
     */
    class IFC2X3_DLL_DEF IfcPort : public IfcAlignmentElement {
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
        IfcRelConnectsPortToElement *getContainedIn();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsPorts > > &getConnectedFrom();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsPorts > > &getConnectedTo();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        friend class IfcRelConnectsPortToElement;
        friend class IfcRelConnectsPorts;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPort(Step::Id id, Step::SPFData *args);
        virtual ~IfcPort();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPort &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::ObsPtr< IfcRelConnectsPortToElement > m_containedIn;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsPorts > > m_connectedFrom;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsPorts > > m_connectedTo;

    };

}

#endif // IFC2X3_IFCPORT_H
