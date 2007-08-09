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

#ifndef IFC2X3_IFCFAILURECONNECTIONCONDITION_H
#define IFC2X3_IFCFAILURECONNECTIONCONDITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcStructuralConnectionCondition.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcFailureConnectionCondition_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcFailureConnectionCondition : public Step::InstantiatableEntity, public IfcStructuralConnectionCondition {
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
     * (non-const) Returns the value of the explicit attribute 'TensionFailureX'.
     * 
     * @return the value of the explicit attribute 'TensionFailureX'
     */
    IfcForceMeasure getTensionFailureX();
    /**
     * Sets the value of the explicit attribute 'TensionFailureX'.
     * 
     * @param value
     */
    void setTensionFailureX(IfcForceMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TensionFailureY'.
     * 
     * @return the value of the explicit attribute 'TensionFailureY'
     */
    IfcForceMeasure getTensionFailureY();
    /**
     * Sets the value of the explicit attribute 'TensionFailureY'.
     * 
     * @param value
     */
    void setTensionFailureY(IfcForceMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TensionFailureZ'.
     * 
     * @return the value of the explicit attribute 'TensionFailureZ'
     */
    IfcForceMeasure getTensionFailureZ();
    /**
     * Sets the value of the explicit attribute 'TensionFailureZ'.
     * 
     * @param value
     */
    void setTensionFailureZ(IfcForceMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CompressionFailureX'.
     * 
     * @return the value of the explicit attribute 'CompressionFailureX'
     */
    IfcForceMeasure getCompressionFailureX();
    /**
     * Sets the value of the explicit attribute 'CompressionFailureX'.
     * 
     * @param value
     */
    void setCompressionFailureX(IfcForceMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CompressionFailureY'.
     * 
     * @return the value of the explicit attribute 'CompressionFailureY'
     */
    IfcForceMeasure getCompressionFailureY();
    /**
     * Sets the value of the explicit attribute 'CompressionFailureY'.
     * 
     * @param value
     */
    void setCompressionFailureY(IfcForceMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CompressionFailureZ'.
     * 
     * @return the value of the explicit attribute 'CompressionFailureZ'
     */
    IfcForceMeasure getCompressionFailureZ();
    /**
     * Sets the value of the explicit attribute 'CompressionFailureZ'.
     * 
     * @param value
     */
    void setCompressionFailureZ(IfcForceMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcFailureConnectionCondition_Factory;

  protected:
    /**
     * @param args
     */
    IfcFailureConnectionCondition(Step::SPFData *args);
    virtual ~IfcFailureConnectionCondition();

  private:
    static Step::ClassType s_type;
    Real m_tensionFailureX;
    Real m_tensionFailureY;
    Real m_tensionFailureZ;
    Real m_compressionFailureX;
    Real m_compressionFailureY;
    Real m_compressionFailureZ;
    /**
     * @param c
     */
    IfcFailureConnectionCondition(const IfcFailureConnectionCondition &c);

  };

  class IfcFailureConnectionCondition;

  /**
   */
  class IFC2X3_DLL_DEF IfcFailureConnectionCondition_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcFailureConnectionCondition_Factory();
    virtual ~IfcFailureConnectionCondition_Factory();
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
    IfcFailureConnectionCondition *get(Step::StepId id);
    /**
     */
    IfcFailureConnectionCondition *generate();
    /**
     * @param id
     */
    IfcFailureConnectionCondition *find(Step::StepId id);

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

#endif // IFC2X3_IFCFAILURECONNECTIONCONDITION_H
