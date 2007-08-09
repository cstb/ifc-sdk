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

#ifndef IFC2X3_IFCVERTEXBASEDTEXTUREMAP_H
#define IFC2X3_IFCVERTEXBASEDTEXTUREMAP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcCartesianPoint;
  class IfcTextureVertex;
  class IfcVertexBasedTextureMap_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcVertexBasedTextureMap : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'TextureVertices'.
     * 
     * @return the value of the explicit attribute 'TextureVertices'
     */
    Step::StepList< Step::RefPtr< IfcTextureVertex > > &getTextureVertices();
    /**
     * Sets the value of the explicit attribute 'TextureVertices'.
     * 
     * @param value
     */
    void setTextureVertices(const Step::StepList< Step::RefPtr< IfcTextureVertex > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TexturePoints'.
     * 
     * @return the value of the explicit attribute 'TexturePoints'
     */
    Step::StepList< Step::RefPtr< IfcCartesianPoint > > &getTexturePoints();
    /**
     * Sets the value of the explicit attribute 'TexturePoints'.
     * 
     * @param value
     */
    void setTexturePoints(const Step::StepList< Step::RefPtr< IfcCartesianPoint > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcVertexBasedTextureMap_Factory;

  protected:
    /**
     * @param args
     */
    IfcVertexBasedTextureMap(Step::SPFData *args);
    virtual ~IfcVertexBasedTextureMap();

  private:
    static Step::ClassType s_type;
    Step::StepList< Step::RefPtr< IfcTextureVertex > > m_textureVertices;
    Step::StepList< Step::RefPtr< IfcCartesianPoint > > m_texturePoints;
    /**
     * @param c
     */
    IfcVertexBasedTextureMap(const IfcVertexBasedTextureMap &c);

  };

  class IfcVertexBasedTextureMap;

  /**
   */
  class IFC2X3_DLL_DEF IfcVertexBasedTextureMap_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcVertexBasedTextureMap_Factory();
    virtual ~IfcVertexBasedTextureMap_Factory();
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
    IfcVertexBasedTextureMap *get(Step::StepId id);
    /**
     */
    IfcVertexBasedTextureMap *generate();
    /**
     * @param id
     */
    IfcVertexBasedTextureMap *find(Step::StepId id);

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

#endif // IFC2X3_IFCVERTEXBASEDTEXTUREMAP_H
