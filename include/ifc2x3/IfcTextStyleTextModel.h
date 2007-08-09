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

#ifndef IFC2X3_IFCTEXTSTYLETEXTMODEL_H
#define IFC2X3_IFCTEXTSTYLETEXTMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcSizeSelect;
  class IfcTextStyleTextModel_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcTextStyleTextModel : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'TextIndent'.
     * 
     * @return the value of the explicit attribute 'TextIndent'
     */
    IfcSizeSelect *getTextIndent();
    /**
     * Sets the value of the explicit attribute 'TextIndent'.
     * 
     * @param value
     */
    void setTextIndent(const Step::RefPtr< IfcSizeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TextAlign'.
     * 
     * @return the value of the explicit attribute 'TextAlign'
     */
    IfcTextAlignment getTextAlign();
    /**
     * Sets the value of the explicit attribute 'TextAlign'.
     * 
     * @param value
     */
    void setTextAlign(const IfcTextAlignment &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TextDecoration'.
     * 
     * @return the value of the explicit attribute 'TextDecoration'
     */
    IfcTextDecoration getTextDecoration();
    /**
     * Sets the value of the explicit attribute 'TextDecoration'.
     * 
     * @param value
     */
    void setTextDecoration(const IfcTextDecoration &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LetterSpacing'.
     * 
     * @return the value of the explicit attribute 'LetterSpacing'
     */
    IfcSizeSelect *getLetterSpacing();
    /**
     * Sets the value of the explicit attribute 'LetterSpacing'.
     * 
     * @param value
     */
    void setLetterSpacing(const Step::RefPtr< IfcSizeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WordSpacing'.
     * 
     * @return the value of the explicit attribute 'WordSpacing'
     */
    IfcSizeSelect *getWordSpacing();
    /**
     * Sets the value of the explicit attribute 'WordSpacing'.
     * 
     * @param value
     */
    void setWordSpacing(const Step::RefPtr< IfcSizeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TextTransform'.
     * 
     * @return the value of the explicit attribute 'TextTransform'
     */
    IfcTextTransformation getTextTransform();
    /**
     * Sets the value of the explicit attribute 'TextTransform'.
     * 
     * @param value
     */
    void setTextTransform(const IfcTextTransformation &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LineHeight'.
     * 
     * @return the value of the explicit attribute 'LineHeight'
     */
    IfcSizeSelect *getLineHeight();
    /**
     * Sets the value of the explicit attribute 'LineHeight'.
     * 
     * @param value
     */
    void setLineHeight(const Step::RefPtr< IfcSizeSelect > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcTextStyleTextModel_Factory;

  protected:
    /**
     * @param args
     */
    IfcTextStyleTextModel(Step::SPFData *args);
    virtual ~IfcTextStyleTextModel();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcSizeSelect > m_textIndent;
    std::string m_textAlign;
    std::string m_textDecoration;
    Step::RefPtr< IfcSizeSelect > m_letterSpacing;
    Step::RefPtr< IfcSizeSelect > m_wordSpacing;
    std::string m_textTransform;
    Step::RefPtr< IfcSizeSelect > m_lineHeight;
    /**
     * @param c
     */
    IfcTextStyleTextModel(const IfcTextStyleTextModel &c);

  };

  class IfcTextStyleTextModel;

  /**
   */
  class IFC2X3_DLL_DEF IfcTextStyleTextModel_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcTextStyleTextModel_Factory();
    virtual ~IfcTextStyleTextModel_Factory();
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
    IfcTextStyleTextModel *get(Step::StepId id);
    /**
     */
    IfcTextStyleTextModel *generate();
    /**
     * @param id
     */
    IfcTextStyleTextModel *find(Step::StepId id);

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

#endif // IFC2X3_IFCTEXTSTYLETEXTMODEL_H
