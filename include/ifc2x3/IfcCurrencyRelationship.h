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

#ifndef IFC2X3_IFCCURRENCYRELATIONSHIP_H
#define IFC2X3_IFCCURRENCYRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcCurrencyRelationship_Factory;
  class IfcDateAndTime;
  class IfcLibraryInformation;
  class IfcMonetaryUnit;

  /**
   */
  class IFC2X3_DLL_DEF IfcCurrencyRelationship : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'RelatingMonetaryUnit'.
     * 
     * @return the value of the explicit attribute 'RelatingMonetaryUnit'
     */
    IfcMonetaryUnit *getRelatingMonetaryUnit();
    /**
     * Sets the value of the explicit attribute 'RelatingMonetaryUnit'.
     * 
     * @param value
     */
    void setRelatingMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RelatedMonetaryUnit'.
     * 
     * @return the value of the explicit attribute 'RelatedMonetaryUnit'
     */
    IfcMonetaryUnit *getRelatedMonetaryUnit();
    /**
     * Sets the value of the explicit attribute 'RelatedMonetaryUnit'.
     * 
     * @param value
     */
    void setRelatedMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ExchangeRate'.
     * 
     * @return the value of the explicit attribute 'ExchangeRate'
     */
    IfcPositiveRatioMeasure getExchangeRate();
    /**
     * Sets the value of the explicit attribute 'ExchangeRate'.
     * 
     * @param value
     */
    void setExchangeRate(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RateDateTime'.
     * 
     * @return the value of the explicit attribute 'RateDateTime'
     */
    IfcDateAndTime *getRateDateTime();
    /**
     * Sets the value of the explicit attribute 'RateDateTime'.
     * 
     * @param value
     */
    void setRateDateTime(const Step::RefPtr< IfcDateAndTime > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RateSource'.
     * 
     * @return the value of the explicit attribute 'RateSource'
     */
    IfcLibraryInformation *getRateSource();
    /**
     * Sets the value of the explicit attribute 'RateSource'.
     * 
     * @param value
     */
    void setRateSource(const Step::RefPtr< IfcLibraryInformation > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcCurrencyRelationship_Factory;

  protected:
    /**
     * @param args
     */
    IfcCurrencyRelationship(Step::SPFData *args);
    virtual ~IfcCurrencyRelationship();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcMonetaryUnit > m_relatingMonetaryUnit;
    Step::RefPtr< IfcMonetaryUnit > m_relatedMonetaryUnit;
    Real m_exchangeRate;
    Step::RefPtr< IfcDateAndTime > m_rateDateTime;
    Step::RefPtr< IfcLibraryInformation > m_rateSource;
    /**
     * @param c
     */
    IfcCurrencyRelationship(const IfcCurrencyRelationship &c);

  };

  class IfcCurrencyRelationship;

  /**
   */
  class IFC2X3_DLL_DEF IfcCurrencyRelationship_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcCurrencyRelationship_Factory();
    virtual ~IfcCurrencyRelationship_Factory();
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
    IfcCurrencyRelationship *get(Step::StepId id);
    /**
     */
    IfcCurrencyRelationship *generate();
    /**
     * @param id
     */
    IfcCurrencyRelationship *find(Step::StepId id);

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

#endif // IFC2X3_IFCCURRENCYRELATIONSHIP_H
