#include "ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationSymbolOccurrence.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFillAreaStyleTileSymbolWithStyle::IfcFillAreaStyleTileSymbolWithStyle(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_symbol = NULL;
}

IfcFillAreaStyleTileSymbolWithStyle::~IfcFillAreaStyleTileSymbolWithStyle() {
}

bool IfcFillAreaStyleTileSymbolWithStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFillAreaStyleTileSymbolWithStyle(this);
}

const std::string &IfcFillAreaStyleTileSymbolWithStyle::type() const {
    return IfcFillAreaStyleTileSymbolWithStyle::s_type.getName();
}

const Step::ClassType &IfcFillAreaStyleTileSymbolWithStyle::getClassType() {
    return IfcFillAreaStyleTileSymbolWithStyle::s_type;
}

const Step::ClassType &IfcFillAreaStyleTileSymbolWithStyle::getType() const {
    return IfcFillAreaStyleTileSymbolWithStyle::s_type;
}

bool IfcFillAreaStyleTileSymbolWithStyle::isOfType(const Step::ClassType &t) const {
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

const IfcAnnotationSymbolOccurrence *IfcFillAreaStyleTileSymbolWithStyle::getSymbol() const {
    IfcFillAreaStyleTileSymbolWithStyle * deConstObject = const_cast< IfcFillAreaStyleTileSymbolWithStyle * > (this);
    return deConstObject->getSymbol();
}

void IfcFillAreaStyleTileSymbolWithStyle::setSymbol(const Step::RefPtr< IfcAnnotationSymbolOccurrence > &value) {
    m_symbol = value;
}

void IfcFillAreaStyleTileSymbolWithStyle::unsetSymbol() {
    m_symbol = Step::getUnset(getSymbol());
}

bool IfcFillAreaStyleTileSymbolWithStyle::testSymbol() const {
    return !Step::isUnset(getSymbol());
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
        m_symbol = static_cast< IfcAnnotationSymbolOccurrence * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcFillAreaStyleTileSymbolWithStyle::copy(const IfcFillAreaStyleTileSymbolWithStyle &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setSymbol((IfcAnnotationSymbolOccurrence*)copyop(obj.m_symbol.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyleTileSymbolWithStyle::s_type("IfcFillAreaStyleTileSymbolWithStyle");
