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

#ifndef IFC2X3_IFCSURFACESTYLEELEMENTSELECT_H
#define IFC2X3_IFCSURFACESTYLEELEMENTSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcExternallyDefinedSurfaceStyle;
  class IfcSurfaceStyleLighting;
  class IfcSurfaceStyleRefraction;
  class IfcSurfaceStyleShading;
  class IfcSurfaceStyleWithTextures;

  /**
   */
  class IFC2X3_DLL_DEF IfcSurfaceStyleElementSelect : public Step::BaseObject {
  public:
    enum IfcSurfaceStyleElementSelect_select {
      IFCSURFACESTYLESHADING,
      IFCSURFACESTYLELIGHTING,
      IFCSURFACESTYLEWITHTEXTURES,
      IFCEXTERNALLYDEFINEDSURFACESTYLE,
      IFCSURFACESTYLEREFRACTION,
      UNSET,
    };

    /**
     */
    IfcSurfaceStyleElementSelect();
    virtual ~IfcSurfaceStyleElementSelect();
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
    IfcSurfaceStyleElementSelect_select currentType();
    /**
     */
    void deleteUnion();
    /**
     */
    IfcSurfaceStyleShading *getIfcSurfaceStyleShading();
    /**
     * @param value
     */
    void setIfcSurfaceStyleShading(IfcSurfaceStyleShading *value);
    /**
     */
    IfcSurfaceStyleLighting *getIfcSurfaceStyleLighting();
    /**
     * @param value
     */
    void setIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value);
    /**
     */
    IfcSurfaceStyleWithTextures *getIfcSurfaceStyleWithTextures();
    /**
     * @param value
     */
    void setIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value);
    /**
     */
    IfcExternallyDefinedSurfaceStyle *getIfcExternallyDefinedSurfaceStyle();
    /**
     * @param value
     */
    void setIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value);
    /**
     */
    IfcSurfaceStyleRefraction *getIfcSurfaceStyleRefraction();
    /**
     * @param value
     */
    void setIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value);
    /**
     * @param v
     */
    void set(Step::BaseObject *v);

  protected:
    /**
     * @param args
     */
    IfcSurfaceStyleElementSelect(Step::SPFData *args);

  private:
    union IfcSurfaceStyleElementSelect_union {
      IfcSurfaceStyleShading *m_IfcSurfaceStyleShading;
      IfcSurfaceStyleLighting *m_IfcSurfaceStyleLighting;
      IfcSurfaceStyleWithTextures *m_IfcSurfaceStyleWithTextures;
      IfcExternallyDefinedSurfaceStyle *m_IfcExternallyDefinedSurfaceStyle;
      IfcSurfaceStyleRefraction *m_IfcSurfaceStyleRefraction;
    };
    static Step::ClassType s_type;
    IfcSurfaceStyleElementSelect_select m_type;
    IfcSurfaceStyleElementSelect_union m_IfcSurfaceStyleElementSelect_union;
    /**
     * @param c
     */
    IfcSurfaceStyleElementSelect(const IfcSurfaceStyleElementSelect &c);

  };

}

#endif // IFC2X3_IFCSURFACESTYLEELEMENTSELECT_H
