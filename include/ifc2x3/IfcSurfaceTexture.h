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

#ifndef IFC2X3_IFCSURFACETEXTURE_H
#define IFC2X3_IFCSURFACETEXTURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcCartesianTransformationOperator2D;

  /**
   */
  class IFC2X3_DLL_DEF IfcSurfaceTexture : public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'RepeatS'.
     * 
     * @return the value of the explicit attribute 'RepeatS'
     */
    Bool getRepeatS();
    /**
     * Sets the value of the explicit attribute 'RepeatS'.
     * 
     * @param value
     */
    void setRepeatS(Bool value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RepeatT'.
     * 
     * @return the value of the explicit attribute 'RepeatT'
     */
    Bool getRepeatT();
    /**
     * Sets the value of the explicit attribute 'RepeatT'.
     * 
     * @param value
     */
    void setRepeatT(Bool value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TextureType'.
     * 
     * @return the value of the explicit attribute 'TextureType'
     */
    IfcSurfaceTextureEnum getTextureType();
    /**
     * Sets the value of the explicit attribute 'TextureType'.
     * 
     * @param value
     */
    void setTextureType(IfcSurfaceTextureEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TextureTransform'.
     * 
     * @return the value of the explicit attribute 'TextureTransform'
     */
    IfcCartesianTransformationOperator2D *getTextureTransform();
    /**
     * Sets the value of the explicit attribute 'TextureTransform'.
     * 
     * @param value
     */
    void setTextureTransform(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value);
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
    IfcSurfaceTexture(Step::SPFData *args);
    virtual ~IfcSurfaceTexture();

  private:
    static Step::ClassType s_type;
    Bool m_repeatS;
    Bool m_repeatT;
    IfcSurfaceTextureEnum m_textureType;
    Step::RefPtr< IfcCartesianTransformationOperator2D > m_textureTransform;
    /**
     * @param c
     */
    IfcSurfaceTexture(const IfcSurfaceTexture &c);

  };

}

#endif // IFC2X3_IFCSURFACETEXTURE_H
