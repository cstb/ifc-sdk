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

#include "ifc2x3/IfcPixelTexture.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSurfaceTexture.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/Binary.h>
#include <Step/ClassType.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPixelTexture::IfcPixelTexture(Step::Id id, Step::SPFData *args) : IfcSurfaceTexture(id, args) {
    m_width = Step::getUnset(m_width);
    m_height = Step::getUnset(m_height);
    m_colourComponents = Step::getUnset(m_colourComponents);
    m_pixel.setUnset(true);
}

IfcPixelTexture::~IfcPixelTexture() {
}

bool IfcPixelTexture::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPixelTexture(this);
}

const std::string &IfcPixelTexture::type() {
    return IfcPixelTexture::s_type.getName();
}

Step::ClassType IfcPixelTexture::getClassType() {
    return IfcPixelTexture::s_type;
}

Step::ClassType IfcPixelTexture::getType() const {
    return IfcPixelTexture::s_type;
}

bool IfcPixelTexture::isOfType(Step::ClassType t) {
    return IfcPixelTexture::s_type == t ? true : IfcSurfaceTexture::isOfType(t);
}

IfcInteger IfcPixelTexture::getWidth() {
    if (Step::BaseObject::inited()) {
        return m_width;
    }
    else {
        return Step::getUnset(m_width);
    }
}

void IfcPixelTexture::setWidth(IfcInteger value) {
    m_width = value;
}

IfcInteger IfcPixelTexture::getHeight() {
    if (Step::BaseObject::inited()) {
        return m_height;
    }
    else {
        return Step::getUnset(m_height);
    }
}

void IfcPixelTexture::setHeight(IfcInteger value) {
    m_height = value;
}

IfcInteger IfcPixelTexture::getColourComponents() {
    if (Step::BaseObject::inited()) {
        return m_colourComponents;
    }
    else {
        return Step::getUnset(m_colourComponents);
    }
}

void IfcPixelTexture::setColourComponents(IfcInteger value) {
    m_colourComponents = value;
}

Step::List< Step::Binary< 32 > > &IfcPixelTexture::getPixel() {
    if (Step::BaseObject::inited()) {
        return m_pixel;
    }
    else {
        m_pixel.setUnset(true);
        return m_pixel;
    }
}

void IfcPixelTexture::setPixel(const Step::List< Step::Binary< 32 > > &value) {
    m_pixel = value;
}

void IfcPixelTexture::release() {
    IfcSurfaceTexture::release();
    m_pixel.clear();
}

bool IfcPixelTexture::init() {
    bool status = IfcSurfaceTexture::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_width = Step::getUnset(m_width);
    }
    else {
        m_width = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_height = Step::getUnset(m_height);
    }
    else {
        m_height = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_colourComponents = Step::getUnset(m_colourComponents);
    }
    else {
        m_colourComponents = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pixel.setUnset(true);
    }
    else {
        m_pixel.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::Binary< 32 > attr2;
                attr2 = Step::spfToBinary<32>(str1);
                m_pixel.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPixelTexture::copy(const IfcPixelTexture &obj, const CopyOp &copyop) {
    Step::List< Step::Binary< 32 > >::const_iterator it_m_pixel;
    IfcSurfaceTexture::copy(obj, copyop);
    setWidth(obj.m_width);
    setHeight(obj.m_height);
    setColourComponents(obj.m_colourComponents);
    for (it_m_pixel = obj.m_pixel.begin(); it_m_pixel != obj.m_pixel.end(); ++it_m_pixel) {
        Step::Binary< 32 > copyTarget = (*it_m_pixel);
        m_pixel.push_back(copyTarget);
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPixelTexture::s_type("IfcPixelTexture");
