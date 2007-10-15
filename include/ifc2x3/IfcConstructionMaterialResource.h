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

#ifndef IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
#define IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcConstructionResource.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcActorSelect.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcConstructionMaterialResource : public IfcConstructionResource {
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
        Step::Set< Step::RefPtr< IfcActorSelect > > &getSuppliers();
        /**
         * Sets the value of the explicit attribute 'Suppliers'.
         * 
         * @param value
         */
        void setSuppliers(const Step::Set< Step::RefPtr< IfcActorSelect > > &value);
        /**
         */
        IfcRatioMeasure getUsageRatio();
        /**
         * Sets the value of the explicit attribute 'UsageRatio'.
         * 
         * @param value
         */
        void setUsageRatio(IfcRatioMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConstructionMaterialResource(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstructionMaterialResource();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConstructionMaterialResource &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Set< Step::RefPtr< IfcActorSelect > > m_suppliers;
        /**
         */
        Step::Real m_usageRatio;

    };

}

#endif // IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
