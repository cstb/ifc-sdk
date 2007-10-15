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

#ifndef IFC2X3_IFCRELSPACEBOUNDARY_H
#define IFC2X3_IFCRELSPACEBOUNDARY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcRelConnects.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcConnectionGeometry;
    class IfcElement;
    class IfcSpace;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelSpaceBoundary : public IfcRelConnects {
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
        IfcSpace *getRelatingSpace();
        /**
         * Sets the value of the explicit attribute 'RelatingSpace'.
         * 
         * @param value
         */
        void setRelatingSpace(const Step::RefPtr< IfcSpace > &value);
        /**
         */
        IfcElement *getRelatedBuildingElement();
        /**
         * Sets the value of the explicit attribute 'RelatedBuildingElement'.
         * 
         * @param value
         */
        void setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value);
        /**
         */
        IfcConnectionGeometry *getConnectionGeometry();
        /**
         * Sets the value of the explicit attribute 'ConnectionGeometry'.
         * 
         * @param value
         */
        void setConnectionGeometry(const Step::RefPtr< IfcConnectionGeometry > &value);
        /**
         */
        IfcPhysicalOrVirtualEnum getPhysicalOrVirtualBoundary();
        /**
         * Sets the value of the explicit attribute 'PhysicalOrVirtualBoundary'.
         * 
         * @param value
         */
        void setPhysicalOrVirtualBoundary(IfcPhysicalOrVirtualEnum value);
        /**
         */
        IfcInternalOrExternalEnum getInternalOrExternalBoundary();
        /**
         * Sets the value of the explicit attribute 'InternalOrExternalBoundary'.
         * 
         * @param value
         */
        void setInternalOrExternalBoundary(IfcInternalOrExternalEnum value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelSpaceBoundary(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelSpaceBoundary();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelSpaceBoundary &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSpace > m_relatingSpace;
        /**
         */
        Step::RefPtr< IfcElement > m_relatedBuildingElement;
        /**
         */
        Step::RefPtr< IfcConnectionGeometry > m_connectionGeometry;
        /**
         */
        IfcPhysicalOrVirtualEnum m_physicalOrVirtualBoundary;
        /**
         */
        IfcInternalOrExternalEnum m_internalOrExternalBoundary;

    };

}

#endif // IFC2X3_IFCRELSPACEBOUNDARY_H
