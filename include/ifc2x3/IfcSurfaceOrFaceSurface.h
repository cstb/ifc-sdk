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

#ifndef IFC2X3_IFCSURFACEORFACESURFACE_H
#define IFC2X3_IFCSURFACEORFACESURFACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcFaceBasedSurfaceModel;
  class IfcFaceSurface;
  class IfcSurface;

  /**
   */
  class IFC2X3_DLL_DEF IfcSurfaceOrFaceSurface : public Step::BaseObject {
  public:
    enum IfcSurfaceOrFaceSurface_select {
      IFCSURFACE,
      IFCFACESURFACE,
      IFCFACEBASEDSURFACEMODEL,
      UNSET,
    };

    /**
     */
    IfcSurfaceOrFaceSurface();
    virtual ~IfcSurfaceOrFaceSurface();
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
    IfcSurfaceOrFaceSurface_select currentType();
    /**
     */
    void deleteUnion();
    /**
     */
    IfcSurface *getIfcSurface();
    /**
     * @param value
     */
    void setIfcSurface(IfcSurface *value);
    /**
     */
    IfcFaceSurface *getIfcFaceSurface();
    /**
     * @param value
     */
    void setIfcFaceSurface(IfcFaceSurface *value);
    /**
     */
    IfcFaceBasedSurfaceModel *getIfcFaceBasedSurfaceModel();
    /**
     * @param value
     */
    void setIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value);
    /**
     * @param v
     */
    void set(Step::BaseObject *v);

  protected:
    /**
     * @param args
     */
    IfcSurfaceOrFaceSurface(Step::SPFData *args);

  private:
    union IfcSurfaceOrFaceSurface_union {
      IfcSurface *m_IfcSurface;
      IfcFaceSurface *m_IfcFaceSurface;
      IfcFaceBasedSurfaceModel *m_IfcFaceBasedSurfaceModel;
    };
    static Step::ClassType s_type;
    IfcSurfaceOrFaceSurface_select m_type;
    IfcSurfaceOrFaceSurface_union m_IfcSurfaceOrFaceSurface_union;
    /**
     * @param c
     */
    IfcSurfaceOrFaceSurface(const IfcSurfaceOrFaceSurface &c);

  };

}

#endif // IFC2X3_IFCSURFACEORFACESURFACE_H
