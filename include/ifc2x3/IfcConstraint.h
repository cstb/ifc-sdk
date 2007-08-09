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

#ifndef IFC2X3_IFCCONSTRAINT_H
#define IFC2X3_IFCCONSTRAINT_H
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

  class IfcActorSelect;
  class IfcConstraintAggregationRelationship;
  class IfcConstraintClassificationRelationship;
  class IfcConstraintRelationship;
  class IfcDateTimeSelect;
  class IfcPropertyConstraintRelationship;

  /**
   */
  class IFC2X3_DLL_DEF IfcConstraint : public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'ConstraintGrade'.
     * 
     * @return the value of the explicit attribute 'ConstraintGrade'
     */
    IfcConstraintEnum getConstraintGrade();
    /**
     * Sets the value of the explicit attribute 'ConstraintGrade'.
     * 
     * @param value
     */
    void setConstraintGrade(IfcConstraintEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ConstraintSource'.
     * 
     * @return the value of the explicit attribute 'ConstraintSource'
     */
    IfcLabel getConstraintSource();
    /**
     * Sets the value of the explicit attribute 'ConstraintSource'.
     * 
     * @param value
     */
    void setConstraintSource(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CreatingActor'.
     * 
     * @return the value of the explicit attribute 'CreatingActor'
     */
    IfcActorSelect *getCreatingActor();
    /**
     * Sets the value of the explicit attribute 'CreatingActor'.
     * 
     * @param value
     */
    void setCreatingActor(const Step::RefPtr< IfcActorSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CreationTime'.
     * 
     * @return the value of the explicit attribute 'CreationTime'
     */
    IfcDateTimeSelect *getCreationTime();
    /**
     * Sets the value of the explicit attribute 'CreationTime'.
     * 
     * @param value
     */
    void setCreationTime(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UserDefinedGrade'.
     * 
     * @return the value of the explicit attribute 'UserDefinedGrade'
     */
    IfcLabel getUserDefinedGrade();
    /**
     * Sets the value of the explicit attribute 'UserDefinedGrade'.
     * 
     * @param value
     */
    void setUserDefinedGrade(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ClassifiedAs'.
     * 
     * @return the value of the explicit attribute 'ClassifiedAs'
     */
    Step::StepSet< Step::RefPtr< IfcConstraintClassificationRelationship > > &getClassifiedAs();
    /**
     * Sets the value of the explicit attribute 'ClassifiedAs'.
     * 
     * @param value
     */
    void setClassifiedAs(const Step::StepSet< Step::RefPtr< IfcConstraintClassificationRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RelatesConstraints'.
     * 
     * @return the value of the explicit attribute 'RelatesConstraints'
     */
    Step::StepSet< Step::RefPtr< IfcConstraintRelationship > > &getRelatesConstraints();
    /**
     * Sets the value of the explicit attribute 'RelatesConstraints'.
     * 
     * @param value
     */
    void setRelatesConstraints(const Step::StepSet< Step::RefPtr< IfcConstraintRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsRelatedWith'.
     * 
     * @return the value of the explicit attribute 'IsRelatedWith'
     */
    Step::StepSet< Step::RefPtr< IfcConstraintRelationship > > &getIsRelatedWith();
    /**
     * Sets the value of the explicit attribute 'IsRelatedWith'.
     * 
     * @param value
     */
    void setIsRelatedWith(const Step::StepSet< Step::RefPtr< IfcConstraintRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PropertiesForConstraint'.
     * 
     * @return the value of the explicit attribute 'PropertiesForConstraint'
     */
    Step::StepSet< Step::RefPtr< IfcPropertyConstraintRelationship > > &getPropertiesForConstraint();
    /**
     * Sets the value of the explicit attribute 'PropertiesForConstraint'.
     * 
     * @param value
     */
    void setPropertiesForConstraint(const Step::StepSet< Step::RefPtr< IfcPropertyConstraintRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Aggregates'.
     * 
     * @return the value of the explicit attribute 'Aggregates'
     */
    Step::StepSet< Step::RefPtr< IfcConstraintAggregationRelationship > > &getAggregates();
    /**
     * Sets the value of the explicit attribute 'Aggregates'.
     * 
     * @param value
     */
    void setAggregates(const Step::StepSet< Step::RefPtr< IfcConstraintAggregationRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsAggregatedIn'.
     * 
     * @return the value of the explicit attribute 'IsAggregatedIn'
     */
    Step::StepSet< Step::RefPtr< IfcConstraintAggregationRelationship > > &getIsAggregatedIn();
    /**
     * Sets the value of the explicit attribute 'IsAggregatedIn'.
     * 
     * @param value
     */
    void setIsAggregatedIn(const Step::StepSet< Step::RefPtr< IfcConstraintAggregationRelationship > > &value);
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
    IfcConstraint(Step::SPFData *args);
    virtual ~IfcConstraint();

  private:
    static Step::ClassType s_type;
    std::string m_name;
    std::string m_description;
    IfcConstraintEnum m_constraintGrade;
    std::string m_constraintSource;
    Step::RefPtr< IfcActorSelect > m_creatingActor;
    Step::RefPtr< IfcDateTimeSelect > m_creationTime;
    std::string m_userDefinedGrade;
    Step::StepSet< Step::RefPtr< IfcConstraintClassificationRelationship > > m_classifiedAs;
    Step::StepSet< Step::RefPtr< IfcConstraintRelationship > > m_relatesConstraints;
    Step::StepSet< Step::RefPtr< IfcConstraintRelationship > > m_isRelatedWith;
    Step::StepSet< Step::RefPtr< IfcPropertyConstraintRelationship > > m_propertiesForConstraint;
    Step::StepSet< Step::RefPtr< IfcConstraintAggregationRelationship > > m_aggregates;
    Step::StepSet< Step::RefPtr< IfcConstraintAggregationRelationship > > m_isAggregatedIn;
    /**
     * @param c
     */
    IfcConstraint(const IfcConstraint &c);

  };

}

#endif // IFC2X3_IFCCONSTRAINT_H
