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

#ifndef IFC2X3_IFCTEXTSTYLEFONTMODEL_H
#define IFC2X3_IFCTEXTSTYLEFONTMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcPreDefinedTextFont.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcSizeSelect;
  class IfcTextStyleFontModel_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcTextStyleFontModel : public Step::InstantiatableEntity, public IfcPreDefinedTextFont {
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
     * (non-const) Returns the value of the explicit attribute 'FontFamily'.
     * 
     * @return the value of the explicit attribute 'FontFamily'
     */
    Step::StepList< IfcTextFontName > &getFontFamily();
    /**
     * Sets the value of the explicit attribute 'FontFamily'.
     * 
     * @param value
     */
    void setFontFamily(const Step::StepList< IfcTextFontName > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FontStyle'.
     * 
     * @return the value of the explicit attribute 'FontStyle'
     */
    IfcFontStyle getFontStyle();
    /**
     * Sets the value of the explicit attribute 'FontStyle'.
     * 
     * @param value
     */
    void setFontStyle(const IfcFontStyle &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FontVariant'.
     * 
     * @return the value of the explicit attribute 'FontVariant'
     */
    IfcFontVariant getFontVariant();
    /**
     * Sets the value of the explicit attribute 'FontVariant'.
     * 
     * @param value
     */
    void setFontVariant(const IfcFontVariant &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FontWeight'.
     * 
     * @return the value of the explicit attribute 'FontWeight'
     */
    IfcFontWeight getFontWeight();
    /**
     * Sets the value of the explicit attribute 'FontWeight'.
     * 
     * @param value
     */
    void setFontWeight(const IfcFontWeight &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FontSize'.
     * 
     * @return the value of the explicit attribute 'FontSize'
     */
    IfcSizeSelect *getFontSize();
    /**
     * Sets the value of the explicit attribute 'FontSize'.
     * 
     * @param value
     */
    void setFontSize(const Step::RefPtr< IfcSizeSelect > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcTextStyleFontModel_Factory;

  protected:
    /**
     * @param args
     */
    IfcTextStyleFontModel(Step::SPFData *args);
    virtual ~IfcTextStyleFontModel();

  private:
    static Step::ClassType s_type;
    Step::StepList< IfcTextFontName > m_fontFamily;
    std::string m_fontStyle;
    std::string m_fontVariant;
    std::string m_fontWeight;
    Step::RefPtr< IfcSizeSelect > m_fontSize;
    /**
     * @param c
     */
    IfcTextStyleFontModel(const IfcTextStyleFontModel &c);

  };

  class IfcTextStyleFontModel;

  /**
   */
  class IFC2X3_DLL_DEF IfcTextStyleFontModel_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcTextStyleFontModel_Factory();
    virtual ~IfcTextStyleFontModel_Factory();
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
    IfcTextStyleFontModel *get(Step::StepId id);
    /**
     */
    IfcTextStyleFontModel *generate();
    /**
     * @param id
     */
    IfcTextStyleFontModel *find(Step::StepId id);

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

#endif // IFC2X3_IFCTEXTSTYLEFONTMODEL_H
