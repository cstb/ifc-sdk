/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCMEASUREVALUE_H
#define IFC2X3_IFCMEASUREVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  /**
   */
  class IFC2X3_DLL_DEF IfcMeasureValue : public Step::BaseObject {
  public:
    enum IfcMeasureValue_select {
      IFCVOLUMEMEASURE,
      IFCTIMEMEASURE,
      IFCTHERMODYNAMICTEMPERATUREMEASURE,
      IFCSOLIDANGLEMEASURE,
      IFCPOSITIVERATIOMEASURE,
      IFCRATIOMEASURE,
      IFCPOSITIVEPLANEANGLEMEASURE,
      IFCPLANEANGLEMEASURE,
      IFCPARAMETERVALUE,
      IFCNUMERICMEASURE,
      IFCMASSMEASURE,
      IFCPOSITIVELENGTHMEASURE,
      IFCLENGTHMEASURE,
      IFCELECTRICCURRENTMEASURE,
      IFCDESCRIPTIVEMEASURE,
      IFCCOUNTMEASURE,
      IFCCONTEXTDEPENDENTMEASURE,
      IFCAREAMEASURE,
      IFCAMOUNTOFSUBSTANCEMEASURE,
      IFCLUMINOUSINTENSITYMEASURE,
      IFCNORMALISEDRATIOMEASURE,
      IFCCOMPLEXNUMBER,
      UNSET,
    };

    /**
     */
    IfcMeasureValue();
    virtual ~IfcMeasureValue();
    /**
     * Accepts a read/write DatatypeVisitor.
     * 
     * @param v the read/write DatatypeVisitor to accept
     */
    virtual bool acceptVisitor(Step::BaseVisitor *v);
    /**
     */
    virtual bool init();
    /**
     */
    virtual const char *type();
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
    char *currentTypeName();
    /**
     */
    IfcMeasureValue_select currentType();
    /**
     */
    void deleteUnion();
    /**
     */
    IfcVolumeMeasure getIfcVolumeMeasure();
    /**
     * @param value
     */
    void setIfcVolumeMeasure(IfcVolumeMeasure value);
    /**
     */
    IfcTimeMeasure getIfcTimeMeasure();
    /**
     * @param value
     */
    void setIfcTimeMeasure(IfcTimeMeasure value);
    /**
     */
    IfcThermodynamicTemperatureMeasure getIfcThermodynamicTemperatureMeasure();
    /**
     * @param value
     */
    void setIfcThermodynamicTemperatureMeasure(IfcThermodynamicTemperatureMeasure value);
    /**
     */
    IfcSolidAngleMeasure getIfcSolidAngleMeasure();
    /**
     * @param value
     */
    void setIfcSolidAngleMeasure(IfcSolidAngleMeasure value);
    /**
     */
    IfcPositiveRatioMeasure getIfcPositiveRatioMeasure();
    /**
     * @param value
     */
    void setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value);
    /**
     */
    IfcRatioMeasure getIfcRatioMeasure();
    /**
     * @param value
     */
    void setIfcRatioMeasure(IfcRatioMeasure value);
    /**
     */
    IfcPositivePlaneAngleMeasure getIfcPositivePlaneAngleMeasure();
    /**
     * @param value
     */
    void setIfcPositivePlaneAngleMeasure(IfcPositivePlaneAngleMeasure value);
    /**
     */
    IfcPlaneAngleMeasure getIfcPlaneAngleMeasure();
    /**
     * @param value
     */
    void setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value);
    /**
     */
    IfcParameterValue getIfcParameterValue();
    /**
     * @param value
     */
    void setIfcParameterValue(IfcParameterValue value);
    /**
     */
    IfcNumericMeasure getIfcNumericMeasure();
    /**
     * @param value
     */
    void setIfcNumericMeasure(IfcNumericMeasure value);
    /**
     */
    IfcMassMeasure getIfcMassMeasure();
    /**
     * @param value
     */
    void setIfcMassMeasure(IfcMassMeasure value);
    /**
     */
    IfcPositiveLengthMeasure getIfcPositiveLengthMeasure();
    /**
     * @param value
     */
    void setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value);
    /**
     */
    IfcLengthMeasure getIfcLengthMeasure();
    /**
     * @param value
     */
    void setIfcLengthMeasure(IfcLengthMeasure value);
    /**
     */
    IfcElectricCurrentMeasure getIfcElectricCurrentMeasure();
    /**
     * @param value
     */
    void setIfcElectricCurrentMeasure(IfcElectricCurrentMeasure value);
    /**
     */
    IfcDescriptiveMeasure getIfcDescriptiveMeasure();
    /**
     * @param value
     */
    void setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value);
    /**
     */
    IfcCountMeasure getIfcCountMeasure();
    /**
     * @param value
     */
    void setIfcCountMeasure(IfcCountMeasure value);
    /**
     */
    IfcContextDependentMeasure getIfcContextDependentMeasure();
    /**
     * @param value
     */
    void setIfcContextDependentMeasure(IfcContextDependentMeasure value);
    /**
     */
    IfcAreaMeasure getIfcAreaMeasure();
    /**
     * @param value
     */
    void setIfcAreaMeasure(IfcAreaMeasure value);
    /**
     */
    IfcAmountOfSubstanceMeasure getIfcAmountOfSubstanceMeasure();
    /**
     * @param value
     */
    void setIfcAmountOfSubstanceMeasure(IfcAmountOfSubstanceMeasure value);
    /**
     */
    IfcLuminousIntensityMeasure getIfcLuminousIntensityMeasure();
    /**
     * @param value
     */
    void setIfcLuminousIntensityMeasure(IfcLuminousIntensityMeasure value);
    /**
     */
    IfcNormalisedRatioMeasure getIfcNormalisedRatioMeasure();
    /**
     * @param value
     */
    void setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value);
    /**
     */
    IfcComplexNumber getIfcComplexNumber();
    /**
     * @param value
     */
    void setIfcComplexNumber(const IfcComplexNumber &value);
    /**
     * @param v
     */
    void set(Step::BaseObject *v);

  protected:
    /**
     * @param args
     */
    IfcMeasureValue(Step::SPFData *args);

  private:
    union IfcMeasureValue_union {
      IfcVolumeMeasure m_IfcVolumeMeasure;
      IfcTimeMeasure m_IfcTimeMeasure;
      IfcThermodynamicTemperatureMeasure m_IfcThermodynamicTemperatureMeasure;
      IfcSolidAngleMeasure m_IfcSolidAngleMeasure;
      IfcPositiveRatioMeasure m_IfcPositiveRatioMeasure;
      IfcRatioMeasure m_IfcRatioMeasure;
      IfcPositivePlaneAngleMeasure m_IfcPositivePlaneAngleMeasure;
      IfcPlaneAngleMeasure m_IfcPlaneAngleMeasure;
      IfcParameterValue m_IfcParameterValue;
      IfcNumericMeasure m_IfcNumericMeasure;
      IfcMassMeasure m_IfcMassMeasure;
      IfcPositiveLengthMeasure m_IfcPositiveLengthMeasure;
      IfcLengthMeasure m_IfcLengthMeasure;
      IfcElectricCurrentMeasure m_IfcElectricCurrentMeasure;
      IfcDescriptiveMeasure *m_IfcDescriptiveMeasure;
      IfcCountMeasure m_IfcCountMeasure;
      IfcContextDependentMeasure m_IfcContextDependentMeasure;
      IfcAreaMeasure m_IfcAreaMeasure;
      IfcAmountOfSubstanceMeasure m_IfcAmountOfSubstanceMeasure;
      IfcLuminousIntensityMeasure m_IfcLuminousIntensityMeasure;
      IfcNormalisedRatioMeasure m_IfcNormalisedRatioMeasure;
      IfcComplexNumber *m_IfcComplexNumber;
    };
    static Step::ClassType s_type;
    IfcMeasureValue_select m_type;
    IfcMeasureValue_union m_IfcMeasureValue_union;
    /**
     * @param c
     */
    IfcMeasureValue(const IfcMeasureValue &c);

  };

}

#endif // IFC2X3_IFCMEASUREVALUE_H
