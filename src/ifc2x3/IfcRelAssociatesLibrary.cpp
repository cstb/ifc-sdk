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

#include "ifc2x3/IfcRelAssociatesLibrary.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcLibrarySelect.h"
#include "ifc2x3/IfcRelAssociates.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcRelAssociatesLibrary::IfcRelAssociatesLibrary(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingLibrary = NULL;
}

IfcRelAssociatesLibrary::~IfcRelAssociatesLibrary() {
}

bool IfcRelAssociatesLibrary::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesLibrary(this);
}

const std::string &IfcRelAssociatesLibrary::type() const {
    return IfcRelAssociatesLibrary::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesLibrary::getClassType() {
    return IfcRelAssociatesLibrary::s_type;
}

const Step::ClassType &IfcRelAssociatesLibrary::getType() const {
    return IfcRelAssociatesLibrary::s_type;
}

bool IfcRelAssociatesLibrary::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociatesLibrary::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcLibrarySelect *IfcRelAssociatesLibrary::getRelatingLibrary() {
    if (Step::BaseObject::inited()) {
        return m_relatingLibrary.get();
    }
    else {
        return NULL;
    }
}

const IfcLibrarySelect *IfcRelAssociatesLibrary::getRelatingLibrary() const {
    IfcRelAssociatesLibrary * deConstObject = const_cast< IfcRelAssociatesLibrary * > (this);
    return deConstObject->getRelatingLibrary();
}

void IfcRelAssociatesLibrary::setRelatingLibrary(const Step::RefPtr< IfcLibrarySelect > &value) {
    m_relatingLibrary = value;
}

void IfcRelAssociatesLibrary::unsetRelatingLibrary() {
    m_relatingLibrary = Step::getUnset(getRelatingLibrary());
}

bool IfcRelAssociatesLibrary::testRelatingLibrary() const {
    return !Step::isUnset(getRelatingLibrary());
}

bool IfcRelAssociatesLibrary::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingLibrary = NULL;
    }
    else {
        m_relatingLibrary = new IfcLibrarySelect;
        if (arg[0] == '#') {
            m_relatingLibrary->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcRelAssociatesLibrary::copy(const IfcRelAssociatesLibrary &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    m_relatingLibrary = new IfcLibrarySelect;
    m_relatingLibrary->copy(*(obj.m_relatingLibrary.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesLibrary::s_type("IfcRelAssociatesLibrary");
