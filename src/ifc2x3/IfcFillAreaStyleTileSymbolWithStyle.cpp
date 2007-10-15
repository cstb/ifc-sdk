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

#include "ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationSymbolOccurrence.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
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

IfcFillAreaStyleTileSymbolWithStyle::IfcFillAreaStyleTileSymbolWithStyle(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_symbol = NULL;
}

IfcFillAreaStyleTileSymbolWithStyle::~IfcFillAreaStyleTileSymbolWithStyle() {
}

bool IfcFillAreaStyleTileSymbolWithStyle::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFillAreaStyleTileSymbolWithStyle(this);
}

const std::string &IfcFillAreaStyleTileSymbolWithStyle::type() {
    return IfcFillAreaStyleTileSymbolWithStyle::s_type.getName();
}

Step::ClassType IfcFillAreaStyleTileSymbolWithStyle::getClassType() {
    return IfcFillAreaStyleTileSymbolWithStyle::s_type;
}

Step::ClassType IfcFillAreaStyleTileSymbolWithStyle::getType() const {
    return IfcFillAreaStyleTileSymbolWithStyle::s_type;
}

bool IfcFillAreaStyleTileSymbolWithStyle::isOfType(Step::ClassType t) {
    return IfcFillAreaStyleTileSymbolWithStyle::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcAnnotationSymbolOccurrence *IfcFillAreaStyleTileSymbolWithStyle::getSymbol() {
    if (Step::BaseObject::inited()) {
        return m_symbol.get();
    }
    else {
        return NULL;
    }
}

void IfcFillAreaStyleTileSymbolWithStyle::setSymbol(const Step::RefPtr< IfcAnnotationSymbolOccurrence > &value) {
    m_symbol = value;
}

void IfcFillAreaStyleTileSymbolWithStyle::release() {
    IfcGeometricRepresentationItem::release();
    m_symbol.release();
}

bool IfcFillAreaStyleTileSymbolWithStyle::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_symbol = NULL;
    }
    else {
        m_symbol = static_cast< IfcAnnotationSymbolOccurrence * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcFillAreaStyleTileSymbolWithStyle::copy(const IfcFillAreaStyleTileSymbolWithStyle &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setSymbol(copyop(obj.m_symbol.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyleTileSymbolWithStyle::s_type("IfcFillAreaStyleTileSymbolWithStyle");
