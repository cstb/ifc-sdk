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

#include "ifc2x3/IfcAnnotationSurface.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/IfcTextureCoordinate.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcAnnotationSurface::IfcAnnotationSurface(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_item = NULL;
    m_textureCoordinates = NULL;
}

IfcAnnotationSurface::~IfcAnnotationSurface() {
}

bool IfcAnnotationSurface::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAnnotationSurface(this);
}

const std::string &IfcAnnotationSurface::type() {
    return IfcAnnotationSurface::s_type.getName();
}

Step::ClassType IfcAnnotationSurface::getClassType() {
    return IfcAnnotationSurface::s_type;
}

Step::ClassType IfcAnnotationSurface::getType() const {
    return IfcAnnotationSurface::s_type;
}

bool IfcAnnotationSurface::isOfType(Step::ClassType t) {
    return IfcAnnotationSurface::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcGeometricRepresentationItem *IfcAnnotationSurface::getItem() {
    if (Step::BaseObject::inited()) {
        return m_item.get();
    }
    else {
        return NULL;
    }
}

void IfcAnnotationSurface::setItem(const Step::RefPtr< IfcGeometricRepresentationItem > &value) {
    m_item = value;
}

IfcTextureCoordinate *IfcAnnotationSurface::getTextureCoordinates() {
    if (Step::BaseObject::inited()) {
        return m_textureCoordinates.get();
    }
    else {
        return NULL;
    }
}

void IfcAnnotationSurface::setTextureCoordinates(const Step::RefPtr< IfcTextureCoordinate > &value) {
    m_textureCoordinates = value;
    m_textureCoordinates->m_annotatedSurface.insert(this);
}

void IfcAnnotationSurface::release() {
    IfcGeometricRepresentationItem::release();
    m_item.release();
    m_textureCoordinates.release();
}

bool IfcAnnotationSurface::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_item = NULL;
    }
    else {
        m_item = static_cast< IfcGeometricRepresentationItem * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textureCoordinates = NULL;
    }
    else {
        m_textureCoordinates = static_cast< IfcTextureCoordinate * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcAnnotationSurface::copy(const IfcAnnotationSurface &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setItem(copyop(obj.m_item.get()));
    setTextureCoordinates(copyop(obj.m_textureCoordinates.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationSurface::s_type("IfcAnnotationSurface");
