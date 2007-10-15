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

#ifndef IFC2X3_IFCCONSTRUCTIONRESOURCE_H
#define IFC2X3_IFCCONSTRUCTIONRESOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcResource.h"
#include <Step/SPFData.h>
#include <string>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcMeasureWithUnit;

    /**
     */
    class IFC2X3_DLL_DEF IfcConstructionResource : public IfcResource {
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
        IfcIdentifier getResourceIdentifier();
        /**
         * Sets the value of the explicit attribute 'ResourceIdentifier'.
         * 
         * @param value
         */
        void setResourceIdentifier(const IfcIdentifier &value);
        /**
         */
        IfcLabel getResourceGroup();
        /**
         * Sets the value of the explicit attribute 'ResourceGroup'.
         * 
         * @param value
         */
        void setResourceGroup(const IfcLabel &value);
        /**
         */
        IfcResourceConsumptionEnum getResourceConsumption();
        /**
         * Sets the value of the explicit attribute 'ResourceConsumption'.
         * 
         * @param value
         */
        void setResourceConsumption(IfcResourceConsumptionEnum value);
        /**
         */
        IfcMeasureWithUnit *getBaseQuantity();
        /**
         * Sets the value of the explicit attribute 'BaseQuantity'.
         * 
         * @param value
         */
        void setBaseQuantity(const Step::RefPtr< IfcMeasureWithUnit > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConstructionResource(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstructionResource();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConstructionResource &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_resourceIdentifier;
        /**
         */
        std::string m_resourceGroup;
        /**
         */
        IfcResourceConsumptionEnum m_resourceConsumption;
        /**
         */
        Step::RefPtr< IfcMeasureWithUnit > m_baseQuantity;

    };

}

#endif // IFC2X3_IFCCONSTRUCTIONRESOURCE_H
