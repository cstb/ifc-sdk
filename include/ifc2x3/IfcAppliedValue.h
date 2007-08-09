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

#ifndef IFC2X3_IFCAPPLIEDVALUE_H
#define IFC2X3_IFCAPPLIEDVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcAppliedValueRelationship;
  class IfcAppliedValueSelect;
  class IfcDateTimeSelect;
  class IfcMeasureWithUnit;
  class IfcReferencesValueDocument;

  /**
   */
  class IFC2X3_DLL_DEF IfcAppliedValue : public Step::BaseObject {
  public:
    /**
     * Accepts a read/write DatatypeVisitor.
     * 
     * @param v the read/write DatatypeVisitor to accept
     */
    virtual bool acceptVisitor(Step::BaseVisitor *v);
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
     * (non-const) Returns the value of the explicit attribute 'Name'.
     * 
     * @return the value of the explicit attribute 'Name'
     */
    IfcLabel getName();
    /**
     * Sets the value of the explicit attribute 'Name'.
     * 
     * @param value
     */
    void setName(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Description'.
     * 
     * @return the value of the explicit attribute 'Description'
     */
    IfcText getDescription();
    /**
     * Sets the value of the explicit attribute 'Description'.
     * 
     * @param value
     */
    void setDescription(const IfcText &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AppliedValue'.
     * 
     * @return the value of the explicit attribute 'AppliedValue'
     */
    IfcAppliedValueSelect *getAppliedValue();
    /**
     * Sets the value of the explicit attribute 'AppliedValue'.
     * 
     * @param value
     */
    void setAppliedValue(const Step::RefPtr< IfcAppliedValueSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UnitBasis'.
     * 
     * @return the value of the explicit attribute 'UnitBasis'
     */
    IfcMeasureWithUnit *getUnitBasis();
    /**
     * Sets the value of the explicit attribute 'UnitBasis'.
     * 
     * @param value
     */
    void setUnitBasis(const Step::RefPtr< IfcMeasureWithUnit > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ApplicableDate'.
     * 
     * @return the value of the explicit attribute 'ApplicableDate'
     */
    IfcDateTimeSelect *getApplicableDate();
    /**
     * Sets the value of the explicit attribute 'ApplicableDate'.
     * 
     * @param value
     */
    void setApplicableDate(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FixedUntilDate'.
     * 
     * @return the value of the explicit attribute 'FixedUntilDate'
     */
    IfcDateTimeSelect *getFixedUntilDate();
    /**
     * Sets the value of the explicit attribute 'FixedUntilDate'.
     * 
     * @param value
     */
    void setFixedUntilDate(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ValuesReferenced'.
     * 
     * @return the value of the explicit attribute 'ValuesReferenced'
     */
    Step::StepSet< Step::RefPtr< IfcReferencesValueDocument > > &getValuesReferenced();
    /**
     * Sets the value of the explicit attribute 'ValuesReferenced'.
     * 
     * @param value
     */
    void setValuesReferenced(const Step::StepSet< Step::RefPtr< IfcReferencesValueDocument > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ValueOfComponents'.
     * 
     * @return the value of the explicit attribute 'ValueOfComponents'
     */
    Step::StepSet< Step::RefPtr< IfcAppliedValueRelationship > > &getValueOfComponents();
    /**
     * Sets the value of the explicit attribute 'ValueOfComponents'.
     * 
     * @param value
     */
    void setValueOfComponents(const Step::StepSet< Step::RefPtr< IfcAppliedValueRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsComponentIn'.
     * 
     * @return the value of the explicit attribute 'IsComponentIn'
     */
    Step::StepSet< Step::RefPtr< IfcAppliedValueRelationship > > &getIsComponentIn();
    /**
     * Sets the value of the explicit attribute 'IsComponentIn'.
     * 
     * @param value
     */
    void setIsComponentIn(const Step::StepSet< Step::RefPtr< IfcAppliedValueRelationship > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();

  protected:
    /**
     * @param args
     */
    IfcAppliedValue(Step::SPFData *args);
    virtual ~IfcAppliedValue();

  private:
    static Step::ClassType s_type;
    std::string m_name;
    std::string m_description;
    Step::RefPtr< IfcAppliedValueSelect > m_appliedValue;
    Step::RefPtr< IfcMeasureWithUnit > m_unitBasis;
    Step::RefPtr< IfcDateTimeSelect > m_applicableDate;
    Step::RefPtr< IfcDateTimeSelect > m_fixedUntilDate;
    Step::StepSet< Step::RefPtr< IfcReferencesValueDocument > > m_valuesReferenced;
    Step::StepSet< Step::RefPtr< IfcAppliedValueRelationship > > m_valueOfComponents;
    Step::StepSet< Step::RefPtr< IfcAppliedValueRelationship > > m_isComponentIn;
    /**
     * @param c
     */
    IfcAppliedValue(const IfcAppliedValue &c);

  };

}

#endif // IFC2X3_IFCAPPLIEDVALUE_H
