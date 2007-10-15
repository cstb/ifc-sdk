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

#ifndef IFC2X3_IFCSERVICELIFEFACTOR_H
#define IFC2X3_IFCSERVICELIFEFACTOR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcPropertySetDefinition.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcMeasureValue;

    /**
     */
    class IFC2X3_DLL_DEF IfcServiceLifeFactor : public IfcPropertySetDefinition {
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
        IfcServiceLifeFactorTypeEnum getPredefinedType();
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        void setPredefinedType(IfcServiceLifeFactorTypeEnum value);
        /**
         */
        IfcMeasureValue *getUpperValue();
        /**
         * Sets the value of the explicit attribute 'UpperValue'.
         * 
         * @param value
         */
        void setUpperValue(const Step::RefPtr< IfcMeasureValue > &value);
        /**
         */
        IfcMeasureValue *getMostUsedValue();
        /**
         * Sets the value of the explicit attribute 'MostUsedValue'.
         * 
         * @param value
         */
        void setMostUsedValue(const Step::RefPtr< IfcMeasureValue > &value);
        /**
         */
        IfcMeasureValue *getLowerValue();
        /**
         * Sets the value of the explicit attribute 'LowerValue'.
         * 
         * @param value
         */
        void setLowerValue(const Step::RefPtr< IfcMeasureValue > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcServiceLifeFactor(Step::Id id, Step::SPFData *args);
        virtual ~IfcServiceLifeFactor();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcServiceLifeFactor &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcServiceLifeFactorTypeEnum m_predefinedType;
        /**
         */
        Step::RefPtr< IfcMeasureValue > m_upperValue;
        /**
         */
        Step::RefPtr< IfcMeasureValue > m_mostUsedValue;
        /**
         */
        Step::RefPtr< IfcMeasureValue > m_lowerValue;

    };

}

#endif // IFC2X3_IFCSERVICELIFEFACTOR_H
