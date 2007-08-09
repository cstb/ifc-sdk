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

#ifndef IFC2X3_IFCSUBCONTRACTRESOURCE_H
#define IFC2X3_IFCSUBCONTRACTRESOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcConstructionResource.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcActorSelect;
  class IfcSubContractResource_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcSubContractResource : public Step::InstantiatableEntity, public IfcConstructionResource {
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
     * (non-const) Returns the value of the explicit attribute 'SubContractor'.
     * 
     * @return the value of the explicit attribute 'SubContractor'
     */
    IfcActorSelect *getSubContractor();
    /**
     * Sets the value of the explicit attribute 'SubContractor'.
     * 
     * @param value
     */
    void setSubContractor(const Step::RefPtr< IfcActorSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'JobDescription'.
     * 
     * @return the value of the explicit attribute 'JobDescription'
     */
    IfcText getJobDescription();
    /**
     * Sets the value of the explicit attribute 'JobDescription'.
     * 
     * @param value
     */
    void setJobDescription(const IfcText &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcSubContractResource_Factory;

  protected:
    /**
     * @param args
     */
    IfcSubContractResource(Step::SPFData *args);
    virtual ~IfcSubContractResource();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcActorSelect > m_subContractor;
    std::string m_jobDescription;
    /**
     * @param c
     */
    IfcSubContractResource(const IfcSubContractResource &c);

  };

  class IfcSubContractResource;

  /**
   */
  class IFC2X3_DLL_DEF IfcSubContractResource_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcSubContractResource_Factory();
    virtual ~IfcSubContractResource_Factory();
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
    IfcSubContractResource *get(Step::StepId id);
    /**
     */
    IfcSubContractResource *generate();
    /**
     * @param id
     */
    IfcSubContractResource *find(Step::StepId id);

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

#endif // IFC2X3_IFCSUBCONTRACTRESOURCE_H
