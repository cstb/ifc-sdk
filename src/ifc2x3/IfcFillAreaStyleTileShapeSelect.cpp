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

#include "ifc2x3/IfcFillAreaStyleTileShapeSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFillAreaStyleTileShapeSelect::IfcFillAreaStyleTileShapeSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcFillAreaStyleTileShapeSelect::IfcFillAreaStyleTileShapeSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcFillAreaStyleTileShapeSelect::~IfcFillAreaStyleTileShapeSelect() {
    deleteUnion();
}

bool IfcFillAreaStyleTileShapeSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFillAreaStyleTileShapeSelect(this);
}

bool IfcFillAreaStyleTileShapeSelect::init() {
    return false;
}

const std::string &IfcFillAreaStyleTileShapeSelect::type() {
    return IfcFillAreaStyleTileShapeSelect::s_type.getName();
}

Step::ClassType IfcFillAreaStyleTileShapeSelect::getClassType() {
    return IfcFillAreaStyleTileShapeSelect::s_type;
}

Step::ClassType IfcFillAreaStyleTileShapeSelect::getType() const {
    return IfcFillAreaStyleTileShapeSelect::s_type;
}

bool IfcFillAreaStyleTileShapeSelect::isOfType(Step::ClassType t) {
    return IfcFillAreaStyleTileShapeSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcFillAreaStyleTileShapeSelect::copy(const IfcFillAreaStyleTileShapeSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCFILLAREASTYLETILESYMBOLWITHSTYLE:
        setIfcFillAreaStyleTileSymbolWithStyle(copyop(obj.m_IfcFillAreaStyleTileShapeSelect_union.m_IfcFillAreaStyleTileSymbolWithStyle));
        break;
        }
}

char *IfcFillAreaStyleTileShapeSelect::currentTypeName() {
    switch(m_type) {
    case IFCFILLAREASTYLETILESYMBOLWITHSTYLE:
        return "IfcFillAreaStyleTileSymbolWithStyle";
        break;
    default:
        return "UNSET";
    }
}

IfcFillAreaStyleTileShapeSelect::IfcFillAreaStyleTileShapeSelect_select IfcFillAreaStyleTileShapeSelect::currentType() {
    return m_type;
}

void IfcFillAreaStyleTileShapeSelect::deleteUnion() {
    switch(m_type) {
    case IFCFILLAREASTYLETILESYMBOLWITHSTYLE:
        m_IfcFillAreaStyleTileShapeSelect_union.m_IfcFillAreaStyleTileSymbolWithStyle->unref();
        break;
        }
    m_type = UNSET;
}

IfcFillAreaStyleTileSymbolWithStyle *IfcFillAreaStyleTileShapeSelect::getIfcFillAreaStyleTileSymbolWithStyle() {
    return m_IfcFillAreaStyleTileShapeSelect_union.m_IfcFillAreaStyleTileSymbolWithStyle;
}

void IfcFillAreaStyleTileShapeSelect::setIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcFillAreaStyleTileShapeSelect_union.m_IfcFillAreaStyleTileSymbolWithStyle = value;
    if (value) {
        value->ref();
        m_type = IFCFILLAREASTYLETILESYMBOLWITHSTYLE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCFILLAREASTYLETILESYMBOLWITHSTYLE;
}

void IfcFillAreaStyleTileShapeSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcFillAreaStyleTileSymbolWithStyle::getClassType())) {
        setIfcFillAreaStyleTileSymbolWithStyle(static_cast< IfcFillAreaStyleTileSymbolWithStyle* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyleTileShapeSelect::s_type("IfcFillAreaStyleTileShapeSelect");
