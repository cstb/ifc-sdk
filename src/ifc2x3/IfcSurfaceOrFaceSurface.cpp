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

#include "ifc2x3/IfcSurfaceOrFaceSurface.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFaceBasedSurfaceModel.h"
#include "ifc2x3/IfcFaceSurface.h"
#include "ifc2x3/IfcSurface.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSurfaceOrFaceSurface::IfcSurfaceOrFaceSurface() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcSurfaceOrFaceSurface::IfcSurfaceOrFaceSurface(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcSurfaceOrFaceSurface::~IfcSurfaceOrFaceSurface() {
    deleteUnion();
}

bool IfcSurfaceOrFaceSurface::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSurfaceOrFaceSurface(this);
}

bool IfcSurfaceOrFaceSurface::init() {
    return false;
}

const std::string &IfcSurfaceOrFaceSurface::type() {
    return IfcSurfaceOrFaceSurface::s_type.getName();
}

Step::ClassType IfcSurfaceOrFaceSurface::getClassType() {
    return IfcSurfaceOrFaceSurface::s_type;
}

Step::ClassType IfcSurfaceOrFaceSurface::getType() const {
    return IfcSurfaceOrFaceSurface::s_type;
}

bool IfcSurfaceOrFaceSurface::isOfType(Step::ClassType t) {
    return IfcSurfaceOrFaceSurface::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcSurfaceOrFaceSurface::copy(const IfcSurfaceOrFaceSurface &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCSURFACE:
        setIfcSurface(copyop(obj.m_IfcSurfaceOrFaceSurface_union.m_IfcSurface));
        break;
    case IFCFACESURFACE:
        setIfcFaceSurface(copyop(obj.m_IfcSurfaceOrFaceSurface_union.m_IfcFaceSurface));
        break;
    case IFCFACEBASEDSURFACEMODEL:
        setIfcFaceBasedSurfaceModel(copyop(obj.m_IfcSurfaceOrFaceSurface_union.m_IfcFaceBasedSurfaceModel));
        break;
        }
}

char *IfcSurfaceOrFaceSurface::currentTypeName() {
    switch(m_type) {
    case IFCSURFACE:
        return "IfcSurface";
        break;
    case IFCFACESURFACE:
        return "IfcFaceSurface";
        break;
    case IFCFACEBASEDSURFACEMODEL:
        return "IfcFaceBasedSurfaceModel";
        break;
    default:
        return "UNSET";
    }
}

IfcSurfaceOrFaceSurface::IfcSurfaceOrFaceSurface_select IfcSurfaceOrFaceSurface::currentType() {
    return m_type;
}

void IfcSurfaceOrFaceSurface::deleteUnion() {
    switch(m_type) {
    case IFCSURFACE:
        m_IfcSurfaceOrFaceSurface_union.m_IfcSurface->unref();
        break;
    case IFCFACESURFACE:
        m_IfcSurfaceOrFaceSurface_union.m_IfcFaceSurface->unref();
        break;
    case IFCFACEBASEDSURFACEMODEL:
        m_IfcSurfaceOrFaceSurface_union.m_IfcFaceBasedSurfaceModel->unref();
        break;
        }
    m_type = UNSET;
}

IfcSurface *IfcSurfaceOrFaceSurface::getIfcSurface() {
    return m_IfcSurfaceOrFaceSurface_union.m_IfcSurface;
}

void IfcSurfaceOrFaceSurface::setIfcSurface(IfcSurface *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcSurfaceOrFaceSurface_union.m_IfcSurface = value;
    if (value) {
        value->ref();
        m_type = IFCSURFACE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCSURFACE;
}

IfcFaceSurface *IfcSurfaceOrFaceSurface::getIfcFaceSurface() {
    return m_IfcSurfaceOrFaceSurface_union.m_IfcFaceSurface;
}

void IfcSurfaceOrFaceSurface::setIfcFaceSurface(IfcFaceSurface *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcSurfaceOrFaceSurface_union.m_IfcFaceSurface = value;
    if (value) {
        value->ref();
        m_type = IFCFACESURFACE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCFACESURFACE;
}

IfcFaceBasedSurfaceModel *IfcSurfaceOrFaceSurface::getIfcFaceBasedSurfaceModel() {
    return m_IfcSurfaceOrFaceSurface_union.m_IfcFaceBasedSurfaceModel;
}

void IfcSurfaceOrFaceSurface::setIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcSurfaceOrFaceSurface_union.m_IfcFaceBasedSurfaceModel = value;
    if (value) {
        value->ref();
        m_type = IFCFACEBASEDSURFACEMODEL;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCFACEBASEDSURFACEMODEL;
}

void IfcSurfaceOrFaceSurface::set(Step::BaseObject *v) {
    if (v->isOfType(IfcSurface::getClassType())) {
        setIfcSurface(static_cast< IfcSurface* > (v));
    }
    else if (v->isOfType(IfcFaceSurface::getClassType())) {
        setIfcFaceSurface(static_cast< IfcFaceSurface* > (v));
    }
    else if (v->isOfType(IfcFaceBasedSurfaceModel::getClassType())) {
        setIfcFaceBasedSurfaceModel(static_cast< IfcFaceBasedSurfaceModel* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceOrFaceSurface::s_type("IfcSurfaceOrFaceSurface");
