#include "ifc2x3/IfcTextStyleForDefinedFont.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcColour.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcTextStyleForDefinedFont::IfcTextStyleForDefinedFont(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_colour = NULL;
    m_backgroundColour = NULL;
}

IfcTextStyleForDefinedFont::~IfcTextStyleForDefinedFont() {
}

bool IfcTextStyleForDefinedFont::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextStyleForDefinedFont(this);
}

const std::string &IfcTextStyleForDefinedFont::type() const {
    return IfcTextStyleForDefinedFont::s_type.getName();
}

const Step::ClassType &IfcTextStyleForDefinedFont::getClassType() {
    return IfcTextStyleForDefinedFont::s_type;
}

const Step::ClassType &IfcTextStyleForDefinedFont::getType() const {
    return IfcTextStyleForDefinedFont::s_type;
}

bool IfcTextStyleForDefinedFont::isOfType(const Step::ClassType &t) const {
    return IfcTextStyleForDefinedFont::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcColour *IfcTextStyleForDefinedFont::getColour() {
    if (Step::BaseObject::inited()) {
        return m_colour.get();
    }
    else {
        return NULL;
    }
}

const IfcColour *IfcTextStyleForDefinedFont::getColour() const {
    IfcTextStyleForDefinedFont * deConstObject = const_cast< IfcTextStyleForDefinedFont * > (this);
    return deConstObject->getColour();
}

void IfcTextStyleForDefinedFont::setColour(const Step::RefPtr< IfcColour > &value) {
    m_colour = value;
}

void IfcTextStyleForDefinedFont::unsetColour() {
    m_colour = Step::getUnset(getColour());
}

bool IfcTextStyleForDefinedFont::testColour() const {
    return !Step::isUnset(getColour());
}

IfcColour *IfcTextStyleForDefinedFont::getBackgroundColour() {
    if (Step::BaseObject::inited()) {
        return m_backgroundColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColour *IfcTextStyleForDefinedFont::getBackgroundColour() const {
    IfcTextStyleForDefinedFont * deConstObject = const_cast< IfcTextStyleForDefinedFont * > (this);
    return deConstObject->getBackgroundColour();
}

void IfcTextStyleForDefinedFont::setBackgroundColour(const Step::RefPtr< IfcColour > &value) {
    m_backgroundColour = value;
}

void IfcTextStyleForDefinedFont::unsetBackgroundColour() {
    m_backgroundColour = Step::getUnset(getBackgroundColour());
}

bool IfcTextStyleForDefinedFont::testBackgroundColour() const {
    return !Step::isUnset(getBackgroundColour());
}

bool IfcTextStyleForDefinedFont::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_colour = NULL;
    }
    else {
        m_colour = new IfcColour;
        if (arg[0] == '#') {
            m_colour->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_backgroundColour = NULL;
    }
    else {
        m_backgroundColour = new IfcColour;
        if (arg[0] == '#') {
            m_backgroundColour->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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

void IfcTextStyleForDefinedFont::copy(const IfcTextStyleForDefinedFont &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    m_colour = new IfcColour;
    m_colour->copy(*(obj.m_colour.get()), copyop);
    m_backgroundColour = new IfcColour;
    m_backgroundColour->copy(*(obj.m_backgroundColour.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextStyleForDefinedFont::s_type("IfcTextStyleForDefinedFont");
