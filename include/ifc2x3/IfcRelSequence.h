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

#ifndef IFC2X3_IFCRELSEQUENCE_H
#define IFC2X3_IFCRELSEQUENCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <ifc2x3/IfcRelConnects.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcProcess;
  class IfcRelSequence_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcRelSequence : public Step::InstantiatableEntity, public IfcRelConnects {
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
     * (non-const) Returns the value of the explicit attribute 'RelatingProcess'.
     * 
     * @return the value of the explicit attribute 'RelatingProcess'
     */
    IfcProcess *getRelatingProcess();
    /**
     * Sets the value of the explicit attribute 'RelatingProcess'.
     * 
     * @param value
     */
    void setRelatingProcess(const Step::RefPtr< IfcProcess > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RelatedProcess'.
     * 
     * @return the value of the explicit attribute 'RelatedProcess'
     */
    IfcProcess *getRelatedProcess();
    /**
     * Sets the value of the explicit attribute 'RelatedProcess'.
     * 
     * @param value
     */
    void setRelatedProcess(const Step::RefPtr< IfcProcess > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TimeLag'.
     * 
     * @return the value of the explicit attribute 'TimeLag'
     */
    IfcTimeMeasure getTimeLag();
    /**
     * Sets the value of the explicit attribute 'TimeLag'.
     * 
     * @param value
     */
    void setTimeLag(IfcTimeMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SequenceType'.
     * 
     * @return the value of the explicit attribute 'SequenceType'
     */
    IfcSequenceEnum getSequenceType();
    /**
     * Sets the value of the explicit attribute 'SequenceType'.
     * 
     * @param value
     */
    void setSequenceType(IfcSequenceEnum value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcRelSequence_Factory;

  protected:
    /**
     * @param args
     */
    IfcRelSequence(Step::SPFData *args);
    virtual ~IfcRelSequence();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcProcess > m_relatingProcess;
    Step::RefPtr< IfcProcess > m_relatedProcess;
    Real m_timeLag;
    IfcSequenceEnum m_sequenceType;
    /**
     * @param c
     */
    IfcRelSequence(const IfcRelSequence &c);

  };

  class IfcRelSequence;

  /**
   */
  class IFC2X3_DLL_DEF IfcRelSequence_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcRelSequence_Factory();
    virtual ~IfcRelSequence_Factory();
    /**
     * @param b
     */
    void clear(bool b);
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator begin();
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator end();
    /**
     * @param id
     */
    IfcRelSequence *get(Step::StepId id);
    /**
     */
    IfcRelSequence *generate();
    /**
     * @param id
     */
    IfcRelSequence *find(Step::StepId id);

  protected:
    /**
     * @param id
     */
    virtual Step::BaseObject *create(Step::StepId id);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(std::map<Step::StepId, Step::BaseObject*>::iterator it);

  };

}

#endif // IFC2X3_IFCRELSEQUENCE_H
