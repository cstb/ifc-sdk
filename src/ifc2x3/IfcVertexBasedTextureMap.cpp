/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcVertexBasedTextureMap.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcTextureVertex.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcVertexBasedTextureMap::IfcVertexBasedTextureMap(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_textureVertices.setUnset(true);
    m_texturePoints.setUnset(true);
}

IfcVertexBasedTextureMap::~IfcVertexBasedTextureMap() {
}

bool IfcVertexBasedTextureMap::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcVertexBasedTextureMap(this);
}

const std::string &IfcVertexBasedTextureMap::type() {
    return IfcVertexBasedTextureMap::s_type.getName();
}

Step::ClassType IfcVertexBasedTextureMap::getClassType() {
    return IfcVertexBasedTextureMap::s_type;
}

Step::ClassType IfcVertexBasedTextureMap::getType() const {
    return IfcVertexBasedTextureMap::s_type;
}

bool IfcVertexBasedTextureMap::isOfType(Step::ClassType t) {
    return IfcVertexBasedTextureMap::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::List< Step::RefPtr< IfcTextureVertex > > &IfcVertexBasedTextureMap::getTextureVertices() {
    if (Step::BaseObject::inited()) {
        return m_textureVertices;
    }
    else {
        m_textureVertices.setUnset(true);
        return m_textureVertices;
    }
}

void IfcVertexBasedTextureMap::setTextureVertices(const Step::List< Step::RefPtr< IfcTextureVertex > > &value) {
    m_textureVertices = value;
}

Step::List< Step::RefPtr< IfcCartesianPoint > > &IfcVertexBasedTextureMap::getTexturePoints() {
    if (Step::BaseObject::inited()) {
        return m_texturePoints;
    }
    else {
        m_texturePoints.setUnset(true);
        return m_texturePoints;
    }
}

void IfcVertexBasedTextureMap::setTexturePoints(const Step::List< Step::RefPtr< IfcCartesianPoint > > &value) {
    m_texturePoints = value;
}

void IfcVertexBasedTextureMap::release() {
    m_textureVertices.clear();
    m_texturePoints.clear();
}

bool IfcVertexBasedTextureMap::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textureVertices.setUnset(true);
    }
    else {
        m_textureVertices.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcTextureVertex > attr2;
                attr2 = static_cast< IfcTextureVertex * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_textureVertices.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_texturePoints.setUnset(true);
    }
    else {
        m_texturePoints.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCartesianPoint > attr2;
                attr2 = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_texturePoints.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcVertexBasedTextureMap::copy(const IfcVertexBasedTextureMap &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcTextureVertex > >::const_iterator it_m_textureVertices;
    Step::List< Step::RefPtr< IfcCartesianPoint > >::const_iterator it_m_texturePoints;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_textureVertices = obj.m_textureVertices.begin(); it_m_textureVertices != obj.m_textureVertices.end(); ++it_m_textureVertices) {
        Step::RefPtr< IfcTextureVertex > copyTarget = copyop((*it_m_textureVertices).get());
        m_textureVertices.push_back(copyTarget.get());
    }
    for (it_m_texturePoints = obj.m_texturePoints.begin(); it_m_texturePoints != obj.m_texturePoints.end(); ++it_m_texturePoints) {
        Step::RefPtr< IfcCartesianPoint > copyTarget = copyop((*it_m_texturePoints).get());
        m_texturePoints.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcVertexBasedTextureMap::s_type("IfcVertexBasedTextureMap");
