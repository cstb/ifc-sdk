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

#include "ifc2x3/IfcSurfaceTexture.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianTransformationOperator2D.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSurfaceTexture::IfcSurfaceTexture(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_repeatS = Step::getUnset(m_repeatS);
    m_repeatT = Step::getUnset(m_repeatT);
    m_textureType = IfcSurfaceTextureEnum_UNSET;
    m_textureTransform = NULL;
}

IfcSurfaceTexture::~IfcSurfaceTexture() {
}

bool IfcSurfaceTexture::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSurfaceTexture(this);
}

const std::string &IfcSurfaceTexture::type() {
    return IfcSurfaceTexture::s_type.getName();
}

Step::ClassType IfcSurfaceTexture::getClassType() {
    return IfcSurfaceTexture::s_type;
}

Step::ClassType IfcSurfaceTexture::getType() const {
    return IfcSurfaceTexture::s_type;
}

bool IfcSurfaceTexture::isOfType(Step::ClassType t) {
    return IfcSurfaceTexture::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::Bool IfcSurfaceTexture::getRepeatS() {
    if (Step::BaseObject::inited()) {
        return m_repeatS;
    }
    else {
        return Step::getUnset(m_repeatS);
    }
}

void IfcSurfaceTexture::setRepeatS(Step::Bool value) {
    m_repeatS = value;
}

Step::Bool IfcSurfaceTexture::getRepeatT() {
    if (Step::BaseObject::inited()) {
        return m_repeatT;
    }
    else {
        return Step::getUnset(m_repeatT);
    }
}

void IfcSurfaceTexture::setRepeatT(Step::Bool value) {
    m_repeatT = value;
}

IfcSurfaceTextureEnum IfcSurfaceTexture::getTextureType() {
    if (Step::BaseObject::inited()) {
        return m_textureType;
    }
    else {
        return IfcSurfaceTextureEnum_UNSET;
    }
}

void IfcSurfaceTexture::setTextureType(IfcSurfaceTextureEnum value) {
    m_textureType = value;
}

IfcCartesianTransformationOperator2D *IfcSurfaceTexture::getTextureTransform() {
    if (Step::BaseObject::inited()) {
        return m_textureTransform.get();
    }
    else {
        return NULL;
    }
}

void IfcSurfaceTexture::setTextureTransform(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value) {
    m_textureTransform = value;
}

void IfcSurfaceTexture::release() {
    m_textureTransform.release();
}

bool IfcSurfaceTexture::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_repeatS = Step::getUnset(m_repeatS);
    }
    else {
        m_repeatS = Step::spfToBool(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_repeatT = Step::getUnset(m_repeatT);
    }
    else {
        m_repeatT = Step::spfToBool(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textureType = IfcSurfaceTextureEnum_UNSET;
    }
    else {
        if (arg == ".BUMP.") {
            m_textureType = IfcSurfaceTextureEnum_BUMP;
        }
        else if (arg == ".OPACITY.") {
            m_textureType = IfcSurfaceTextureEnum_OPACITY;
        }
        else if (arg == ".REFLECTION.") {
            m_textureType = IfcSurfaceTextureEnum_REFLECTION;
        }
        else if (arg == ".SELFILLUMINATION.") {
            m_textureType = IfcSurfaceTextureEnum_SELFILLUMINATION;
        }
        else if (arg == ".SHININESS.") {
            m_textureType = IfcSurfaceTextureEnum_SHININESS;
        }
        else if (arg == ".SPECULAR.") {
            m_textureType = IfcSurfaceTextureEnum_SPECULAR;
        }
        else if (arg == ".TEXTURE.") {
            m_textureType = IfcSurfaceTextureEnum_TEXTURE;
        }
        else if (arg == ".TRANSPARENCYMAP.") {
            m_textureType = IfcSurfaceTextureEnum_TRANSPARENCYMAP;
        }
        else if (arg == ".NOTDEFINED.") {
            m_textureType = IfcSurfaceTextureEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textureTransform = NULL;
    }
    else {
        m_textureTransform = static_cast< IfcCartesianTransformationOperator2D * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcSurfaceTexture::copy(const IfcSurfaceTexture &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setRepeatS(obj.m_repeatS);
    setRepeatT(obj.m_repeatT);
    setTextureType(obj.m_textureType);
    setTextureTransform(copyop(obj.m_textureTransform.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceTexture::s_type("IfcSurfaceTexture");
