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

#include "ifc2x3/IfcSimpleValue.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSimpleValue::IfcSimpleValue() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcSimpleValue::IfcSimpleValue(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcSimpleValue::~IfcSimpleValue() {
    deleteUnion();
}

bool IfcSimpleValue::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSimpleValue(this);
}

bool IfcSimpleValue::init() {
    return false;
}

const std::string &IfcSimpleValue::type() {
    return IfcSimpleValue::s_type.getName();
}

Step::ClassType IfcSimpleValue::getClassType() {
    return IfcSimpleValue::s_type;
}

Step::ClassType IfcSimpleValue::getType() const {
    return IfcSimpleValue::s_type;
}

bool IfcSimpleValue::isOfType(Step::ClassType t) {
    return IfcSimpleValue::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcSimpleValue::copy(const IfcSimpleValue &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCINTEGER:
        setIfcInteger(obj.m_IfcSimpleValue_union.m_IfcInteger);
        break;
    case IFCREAL:
        setIfcReal(obj.m_IfcSimpleValue_union.m_IfcReal);
        break;
    case IFCBOOLEAN:
        setIfcBoolean(obj.m_IfcSimpleValue_union.m_IfcBoolean);
        break;
    case IFCIDENTIFIER:
        setIfcIdentifier(*obj.m_IfcSimpleValue_union.m_IfcIdentifier);
        break;
    case IFCTEXT:
        setIfcText(*obj.m_IfcSimpleValue_union.m_IfcText);
        break;
    case IFCLABEL:
        setIfcLabel(*obj.m_IfcSimpleValue_union.m_IfcLabel);
        break;
    case IFCLOGICAL:
        setIfcLogical(obj.m_IfcSimpleValue_union.m_IfcLogical);
        break;
        }
}

char *IfcSimpleValue::currentTypeName() {
    switch(m_type) {
    case IFCINTEGER:
        return "IfcInteger";
        break;
    case IFCREAL:
        return "IfcReal";
        break;
    case IFCBOOLEAN:
        return "IfcBoolean";
        break;
    case IFCIDENTIFIER:
        return "IfcIdentifier";
        break;
    case IFCTEXT:
        return "IfcText";
        break;
    case IFCLABEL:
        return "IfcLabel";
        break;
    case IFCLOGICAL:
        return "IfcLogical";
        break;
    default:
        return "UNSET";
    }
}

IfcSimpleValue::IfcSimpleValue_select IfcSimpleValue::currentType() {
    return m_type;
}

void IfcSimpleValue::deleteUnion() {
    switch(m_type) {
    case IFCIDENTIFIER:
        delete m_IfcSimpleValue_union.m_IfcIdentifier;
        break;
    case IFCTEXT:
        delete m_IfcSimpleValue_union.m_IfcText;
        break;
    case IFCLABEL:
        delete m_IfcSimpleValue_union.m_IfcLabel;
        break;
        }
    m_type = UNSET;
}

IfcInteger IfcSimpleValue::getIfcInteger() {
    return m_IfcSimpleValue_union.m_IfcInteger;
}

void IfcSimpleValue::setIfcInteger(IfcInteger value) {
    deleteUnion();
    m_IfcSimpleValue_union.m_IfcInteger = value;
    m_type = IFCINTEGER;
}

IfcReal IfcSimpleValue::getIfcReal() {
    return m_IfcSimpleValue_union.m_IfcReal;
}

void IfcSimpleValue::setIfcReal(IfcReal value) {
    deleteUnion();
    m_IfcSimpleValue_union.m_IfcReal = value;
    m_type = IFCREAL;
}

IfcBoolean IfcSimpleValue::getIfcBoolean() {
    return m_IfcSimpleValue_union.m_IfcBoolean;
}

void IfcSimpleValue::setIfcBoolean(IfcBoolean value) {
    deleteUnion();
    m_IfcSimpleValue_union.m_IfcBoolean = value;
    m_type = IFCBOOLEAN;
}

IfcIdentifier IfcSimpleValue::getIfcIdentifier() {
    return *m_IfcSimpleValue_union.m_IfcIdentifier;
}

void IfcSimpleValue::setIfcIdentifier(const IfcIdentifier &value) {
    deleteUnion();
    m_IfcSimpleValue_union.m_IfcIdentifier = new IfcIdentifier(value);
    m_type = IFCIDENTIFIER;
}

IfcText IfcSimpleValue::getIfcText() {
    return *m_IfcSimpleValue_union.m_IfcText;
}

void IfcSimpleValue::setIfcText(const IfcText &value) {
    deleteUnion();
    m_IfcSimpleValue_union.m_IfcText = new IfcText(value);
    m_type = IFCTEXT;
}

IfcLabel IfcSimpleValue::getIfcLabel() {
    return *m_IfcSimpleValue_union.m_IfcLabel;
}

void IfcSimpleValue::setIfcLabel(const IfcLabel &value) {
    deleteUnion();
    m_IfcSimpleValue_union.m_IfcLabel = new IfcLabel(value);
    m_type = IFCLABEL;
}

IfcLogical IfcSimpleValue::getIfcLogical() {
    return m_IfcSimpleValue_union.m_IfcLogical;
}

void IfcSimpleValue::setIfcLogical(IfcLogical value) {
    deleteUnion();
    m_IfcSimpleValue_union.m_IfcLogical = value;
    m_type = IFCLOGICAL;
}

void IfcSimpleValue::set(Step::BaseObject *v) {
}

IFC2X3_DLL_DEF Step::ClassType IfcSimpleValue::s_type("IfcSimpleValue");
