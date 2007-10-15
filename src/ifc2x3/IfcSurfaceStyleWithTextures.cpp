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

#include "ifc2x3/IfcSurfaceStyleWithTextures.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSurfaceTexture.h"
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

IfcSurfaceStyleWithTextures::IfcSurfaceStyleWithTextures(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_textures.setUnset(true);
}

IfcSurfaceStyleWithTextures::~IfcSurfaceStyleWithTextures() {
}

bool IfcSurfaceStyleWithTextures::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSurfaceStyleWithTextures(this);
}

const std::string &IfcSurfaceStyleWithTextures::type() {
    return IfcSurfaceStyleWithTextures::s_type.getName();
}

Step::ClassType IfcSurfaceStyleWithTextures::getClassType() {
    return IfcSurfaceStyleWithTextures::s_type;
}

Step::ClassType IfcSurfaceStyleWithTextures::getType() const {
    return IfcSurfaceStyleWithTextures::s_type;
}

bool IfcSurfaceStyleWithTextures::isOfType(Step::ClassType t) {
    return IfcSurfaceStyleWithTextures::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::List< Step::RefPtr< IfcSurfaceTexture > > &IfcSurfaceStyleWithTextures::getTextures() {
    if (Step::BaseObject::inited()) {
        return m_textures;
    }
    else {
        m_textures.setUnset(true);
        return m_textures;
    }
}

void IfcSurfaceStyleWithTextures::setTextures(const Step::List< Step::RefPtr< IfcSurfaceTexture > > &value) {
    m_textures = value;
}

void IfcSurfaceStyleWithTextures::release() {
    m_textures.clear();
}

bool IfcSurfaceStyleWithTextures::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textures.setUnset(true);
    }
    else {
        m_textures.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcSurfaceTexture > attr2;
                attr2 = static_cast< IfcSurfaceTexture * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_textures.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcSurfaceStyleWithTextures::copy(const IfcSurfaceStyleWithTextures &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcSurfaceTexture > >::const_iterator it_m_textures;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_textures = obj.m_textures.begin(); it_m_textures != obj.m_textures.end(); ++it_m_textures) {
        Step::RefPtr< IfcSurfaceTexture > copyTarget = copyop((*it_m_textures).get());
        m_textures.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleWithTextures::s_type("IfcSurfaceStyleWithTextures");
