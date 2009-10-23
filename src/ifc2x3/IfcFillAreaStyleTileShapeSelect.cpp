#include "ifc2x3/IfcFillAreaStyleTileShapeSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

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

bool IfcFillAreaStyleTileShapeSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFillAreaStyleTileShapeSelect(this);
}

bool IfcFillAreaStyleTileShapeSelect::init() {
    return false;
}

const std::string &IfcFillAreaStyleTileShapeSelect::type() const {
    return IfcFillAreaStyleTileShapeSelect::s_type.getName();
}

const Step::ClassType &IfcFillAreaStyleTileShapeSelect::getClassType() {
    return IfcFillAreaStyleTileShapeSelect::s_type;
}

const Step::ClassType &IfcFillAreaStyleTileShapeSelect::getType() const {
    return IfcFillAreaStyleTileShapeSelect::s_type;
}

bool IfcFillAreaStyleTileShapeSelect::isOfType(const Step::ClassType &t) const {
    return IfcFillAreaStyleTileShapeSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcFillAreaStyleTileShapeSelect::copy(const IfcFillAreaStyleTileShapeSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCFILLAREASTYLETILESYMBOLWITHSTYLE:
        setIfcFillAreaStyleTileSymbolWithStyle((IfcFillAreaStyleTileSymbolWithStyle *) (copyop(obj.m_IfcFillAreaStyleTileShapeSelect_union.m_IfcFillAreaStyleTileSymbolWithStyle)));
        break;
        }
}

std::string IfcFillAreaStyleTileShapeSelect::currentTypeName() const {
    switch(m_type) {
    case IFCFILLAREASTYLETILESYMBOLWITHSTYLE:
        return "IfcFillAreaStyleTileSymbolWithStyle";
        break;
    default:
        return "UNSET";
    }
}

IfcFillAreaStyleTileShapeSelect::IfcFillAreaStyleTileShapeSelect_select IfcFillAreaStyleTileShapeSelect::currentType() const {
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

IfcFillAreaStyleTileSymbolWithStyle *IfcFillAreaStyleTileShapeSelect::getIfcFillAreaStyleTileSymbolWithStyle() const {
    if (m_type == IFCFILLAREASTYLETILESYMBOLWITHSTYLE) {
        return m_IfcFillAreaStyleTileShapeSelect_union.m_IfcFillAreaStyleTileSymbolWithStyle;
    }
    else {
        return NULL;
    }
}

void IfcFillAreaStyleTileShapeSelect::setIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value) {
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
    if (v && v->isOfType(IfcFillAreaStyleTileSymbolWithStyle::getClassType())) {
        setIfcFillAreaStyleTileSymbolWithStyle(static_cast< IfcFillAreaStyleTileSymbolWithStyle* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyleTileShapeSelect::s_type("IfcFillAreaStyleTileShapeSelect");
