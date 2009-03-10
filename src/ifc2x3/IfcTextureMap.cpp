/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcTextureMap.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTextureCoordinate.h"
#include "ifc2x3/IfcVertexBasedTextureMap.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTextureMap::IfcTextureMap(Step::Id id, Step::SPFData *args) : IfcTextureCoordinate(id, args) {
}

IfcTextureMap::~IfcTextureMap() {
}

bool IfcTextureMap::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextureMap(this);
}

const std::string &IfcTextureMap::type() const {
    return IfcTextureMap::s_type.getName();
}

const Step::ClassType &IfcTextureMap::getClassType() {
    return IfcTextureMap::s_type;
}

const Step::ClassType &IfcTextureMap::getType() const {
    return IfcTextureMap::s_type;
}

bool IfcTextureMap::isOfType(const Step::ClassType &t) const {
    return IfcTextureMap::s_type == t ? true : IfcTextureCoordinate::isOfType(t);
}

Set_IfcVertexBasedTextureMap_1_n &IfcTextureMap::getTextureMaps() {
    if (Step::BaseObject::inited()) {
        return m_textureMaps;
    }
    else {
        m_textureMaps.setUnset(true);
        return m_textureMaps;
    }
}

const Set_IfcVertexBasedTextureMap_1_n &IfcTextureMap::getTextureMaps() const {
    IfcTextureMap * deConstObject = const_cast< IfcTextureMap * > (this);
    return deConstObject->getTextureMaps();
}

void IfcTextureMap::setTextureMaps(const Set_IfcVertexBasedTextureMap_1_n &value) {
    m_textureMaps = value;
}

bool IfcTextureMap::init() {
    bool status = IfcTextureCoordinate::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textureMaps.setUnset(true);
    }
    else {
        m_textureMaps.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcVertexBasedTextureMap > attr2;
                attr2 = static_cast< IfcVertexBasedTextureMap * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_textureMaps.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcTextureMap::copy(const IfcTextureMap &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcVertexBasedTextureMap >, 1 >::const_iterator it_m_textureMaps;
    IfcTextureCoordinate::copy(obj, copyop);
    for (it_m_textureMaps = obj.m_textureMaps.begin(); it_m_textureMaps != obj.m_textureMaps.end(); ++it_m_textureMaps) {
        Step::RefPtr< IfcVertexBasedTextureMap > copyTarget = (IfcVertexBasedTextureMap *) (copyop((*it_m_textureMaps).get()));
        m_textureMaps.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextureMap::s_type("IfcTextureMap");
