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

#include "ifc2x3/IfcTendonAnchor.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcReinforcingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcTendonAnchor::IfcTendonAnchor(Step::Id id, Step::SPFData *args) : IfcReinforcingElement(id, args) {
}

IfcTendonAnchor::~IfcTendonAnchor() {
}

bool IfcTendonAnchor::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTendonAnchor(this);
}

const std::string &IfcTendonAnchor::type() const {
    return IfcTendonAnchor::s_type.getName();
}

const Step::ClassType &IfcTendonAnchor::getClassType() {
    return IfcTendonAnchor::s_type;
}

const Step::ClassType &IfcTendonAnchor::getType() const {
    return IfcTendonAnchor::s_type;
}

bool IfcTendonAnchor::isOfType(const Step::ClassType &t) const {
    return IfcTendonAnchor::s_type == t ? true : IfcReinforcingElement::isOfType(t);
}

bool IfcTendonAnchor::init() {
    bool status = IfcReinforcingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcTendonAnchor::copy(const IfcTendonAnchor &obj, const CopyOp &copyop) {
    IfcReinforcingElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTendonAnchor::s_type("IfcTendonAnchor");
