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

#ifndef IFC2X3_IFCELECTRICDISTRIBUTIONPOINT_H
#define IFC2X3_IFCELECTRICDISTRIBUTIONPOINT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcFlowController.h"
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcElectricDistributionPoint : public IfcFlowController {
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
        IfcElectricDistributionPointFunctionEnum getDistributionPointFunction();
        /**
         * Sets the value of the explicit attribute 'DistributionPointFunction'.
         * 
         * @param value
         */
        void setDistributionPointFunction(IfcElectricDistributionPointFunctionEnum value);
        /**
         */
        IfcLabel getUserDefinedFunction();
        /**
         * Sets the value of the explicit attribute 'UserDefinedFunction'.
         * 
         * @param value
         */
        void setUserDefinedFunction(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcElectricDistributionPoint(Step::Id id, Step::SPFData *args);
        virtual ~IfcElectricDistributionPoint();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcElectricDistributionPoint &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcElectricDistributionPointFunctionEnum m_distributionPointFunction;
        /**
         */
        std::string m_userDefinedFunction;

    };

}

#endif // IFC2X3_IFCELECTRICDISTRIBUTIONPOINT_H
