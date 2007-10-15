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

#ifndef IFC2X3_IFCDRAUGHTINGCALLOUT_H
#define IFC2X3_IFCDRAUGHTINGCALLOUT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcDraughtingCalloutElement.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDraughtingCalloutRelationship;

    /**
     */
    class IFC2X3_DLL_DEF IfcDraughtingCallout : public IfcGeometricRepresentationItem {
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
        Step::Set< Step::RefPtr< IfcDraughtingCalloutElement > > &getContents();
        /**
         * Sets the value of the explicit attribute 'Contents'.
         * 
         * @param value
         */
        void setContents(const Step::Set< Step::RefPtr< IfcDraughtingCalloutElement > > &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcDraughtingCalloutRelationship > > &getIsRelatedFromCallout();
        /**
         */
        Step::Set< Step::ObsPtr< IfcDraughtingCalloutRelationship > > &getIsRelatedToCallout();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        friend class IfcDraughtingCalloutRelationship;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDraughtingCallout(Step::Id id, Step::SPFData *args);
        virtual ~IfcDraughtingCallout();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDraughtingCallout &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Set< Step::RefPtr< IfcDraughtingCalloutElement > > m_contents;
        /**
         */
        Step::Set< Step::ObsPtr< IfcDraughtingCalloutRelationship > > m_isRelatedFromCallout;
        /**
         */
        Step::Set< Step::ObsPtr< IfcDraughtingCalloutRelationship > > m_isRelatedToCallout;

    };

}

#endif // IFC2X3_IFCDRAUGHTINGCALLOUT_H
