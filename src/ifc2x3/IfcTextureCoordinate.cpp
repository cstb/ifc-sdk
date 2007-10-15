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

#include "ifc2x3/IfcTextureCoordinate.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationSurface.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTextureCoordinate::IfcTextureCoordinate(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_annotatedSurface.setUnset(true);
}

IfcTextureCoordinate::~IfcTextureCoordinate() {
}

bool IfcTextureCoordinate::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTextureCoordinate(this);
}

const std::string &IfcTextureCoordinate::type() {
    return IfcTextureCoordinate::s_type.getName();
}

Step::ClassType IfcTextureCoordinate::getClassType() {
    return IfcTextureCoordinate::s_type;
}

Step::ClassType IfcTextureCoordinate::getType() const {
    return IfcTextureCoordinate::s_type;
}

bool IfcTextureCoordinate::isOfType(Step::ClassType t) {
    return IfcTextureCoordinate::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcAnnotationSurface > > &IfcTextureCoordinate::getAnnotatedSurface() {
    if (Step::BaseObject::inited()) {
        return m_annotatedSurface;
    }
    else {
        m_annotatedSurface.setUnset(true);
        return m_annotatedSurface;
    }
}

void IfcTextureCoordinate::release() {
}

bool IfcTextureCoordinate::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcAnnotationSurface::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_annotatedSurface.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_annotatedSurface.insert(static_cast< IfcAnnotationSurface * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcTextureCoordinate::copy(const IfcTextureCoordinate &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextureCoordinate::s_type("IfcTextureCoordinate");
