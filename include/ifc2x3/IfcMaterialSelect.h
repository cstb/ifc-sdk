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

#ifndef IFC2X3_IFCMATERIALSELECT_H
#define IFC2X3_IFCMATERIALSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcMaterial;
  class IfcMaterialLayer;
  class IfcMaterialLayerSet;
  class IfcMaterialLayerSetUsage;
  class IfcMaterialList;

  /**
   */
  class IFC2X3_DLL_DEF IfcMaterialSelect : public Step::BaseObject {
  public:
    enum IfcMaterialSelect_select {
      IFCMATERIAL,
      IFCMATERIALLIST,
      IFCMATERIALLAYERSETUSAGE,
      IFCMATERIALLAYERSET,
      IFCMATERIALLAYER,
      UNSET,
    };

    /**
     */
    IfcMaterialSelect();
    virtual ~IfcMaterialSelect();
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
    IfcMaterialSelect_select currentType();
    /**
     */
    void deleteUnion();
    /**
     */
    IfcMaterial *getIfcMaterial();
    /**
     * @param value
     */
    void setIfcMaterial(IfcMaterial *value);
    /**
     */
    IfcMaterialList *getIfcMaterialList();
    /**
     * @param value
     */
    void setIfcMaterialList(IfcMaterialList *value);
    /**
     */
    IfcMaterialLayerSetUsage *getIfcMaterialLayerSetUsage();
    /**
     * @param value
     */
    void setIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value);
    /**
     */
    IfcMaterialLayerSet *getIfcMaterialLayerSet();
    /**
     * @param value
     */
    void setIfcMaterialLayerSet(IfcMaterialLayerSet *value);
    /**
     */
    IfcMaterialLayer *getIfcMaterialLayer();
    /**
     * @param value
     */
    void setIfcMaterialLayer(IfcMaterialLayer *value);
    /**
     * @param v
     */
    void set(Step::BaseObject *v);

  protected:
    /**
     * @param args
     */
    IfcMaterialSelect(Step::SPFData *args);

  private:
    union IfcMaterialSelect_union {
      IfcMaterial *m_IfcMaterial;
      IfcMaterialList *m_IfcMaterialList;
      IfcMaterialLayerSetUsage *m_IfcMaterialLayerSetUsage;
      IfcMaterialLayerSet *m_IfcMaterialLayerSet;
      IfcMaterialLayer *m_IfcMaterialLayer;
    };
    static Step::ClassType s_type;
    IfcMaterialSelect_select m_type;
    IfcMaterialSelect_union m_IfcMaterialSelect_union;
    /**
     * @param c
     */
    IfcMaterialSelect(const IfcMaterialSelect &c);

  };

}

#endif // IFC2X3_IFCMATERIALSELECT_H
