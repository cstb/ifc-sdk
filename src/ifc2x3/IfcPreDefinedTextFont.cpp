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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcPreDefinedTextFont.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPreDefinedTextFont::IfcPreDefinedTextFont(Step::Id id, Step::SPFData *args) : IfcPreDefinedItem(id, args) {
}

IfcPreDefinedTextFont::~IfcPreDefinedTextFont() {
}

bool IfcPreDefinedTextFont::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPreDefinedTextFont(this);
}

const std::string &IfcPreDefinedTextFont::type() const {
    return IfcPreDefinedTextFont::s_type.getName();
}

const Step::ClassType &IfcPreDefinedTextFont::getClassType() {
    return IfcPreDefinedTextFont::s_type;
}

const Step::ClassType &IfcPreDefinedTextFont::getType() const {
    return IfcPreDefinedTextFont::s_type;
}

bool IfcPreDefinedTextFont::isOfType(const Step::ClassType &t) const {
    return IfcPreDefinedTextFont::s_type == t ? true : IfcPreDefinedItem::isOfType(t);
}

bool IfcPreDefinedTextFont::init() {
    bool status = IfcPreDefinedItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedTextFont::copy(const IfcPreDefinedTextFont &obj, const CopyOp &copyop) {
    IfcPreDefinedItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedTextFont::s_type("IfcPreDefinedTextFont");
