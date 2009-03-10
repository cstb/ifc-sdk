/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcServiceLifeFactorTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcServiceLifeFactorTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcServiceLifeFactorTypeEnum value);
        /**
         * Gets the value of the explicit attribute 'UpperValue'.
         * 
         */
        virtual IfcMeasureValue *getUpperValue();
        /**
         * (const) Returns the value of the explicit attribute 'UpperValue'.
         * 
         * @return the value of the explicit attribute 'UpperValue'
         */
        virtual const IfcMeasureValue *getUpperValue() const;
        /**
         * Sets the value of the explicit attribute 'UpperValue'.
         * 
         * @param value
         */
        virtual void setUpperValue(const Step::RefPtr< IfcMeasureValue > &value);
        /**
         * Gets the value of the explicit attribute 'MostUsedValue'.
         * 
         */
        virtual IfcMeasureValue *getMostUsedValue();
        /**
         * (const) Returns the value of the explicit attribute 'MostUsedValue'.
         * 
         * @return the value of the explicit attribute 'MostUsedValue'
         */
        virtual const IfcMeasureValue *getMostUsedValue() const;
        /**
         * Sets the value of the explicit attribute 'MostUsedValue'.
         * 
         * @param value
         */
        virtual void setMostUsedValue(const Step::RefPtr< IfcMeasureValue > &value);
        /**
         * Gets the value of the explicit attribute 'LowerValue'.
         * 
         */
        virtual IfcMeasureValue *getLowerValue();
        /**
         * (const) Returns the value of the explicit attribute 'LowerValue'.
         * 
         * @return the value of the explicit attribute 'LowerValue'
         */
        virtual const IfcMeasureValue *getLowerValue() const;
        /**
         * Sets the value of the explicit attribute 'LowerValue'.
         * 
         * @param value
         */
        virtual void setLowerValue(const Step::RefPtr< IfcMeasureValue > &value);
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
