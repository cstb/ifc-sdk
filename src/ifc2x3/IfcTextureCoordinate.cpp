#include "ifc2x3/IfcTextureCoordinate.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationSurface.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcTextureCoordinate::IfcTextureCoordinate(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcTextureCoordinate::~IfcTextureCoordinate() {
}

bool IfcTextureCoordinate::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextureCoordinate(this);
}

const std::string &IfcTextureCoordinate::type() const {
    return IfcTextureCoordinate::s_type.getName();
}

const Step::ClassType &IfcTextureCoordinate::getClassType() {
    return IfcTextureCoordinate::s_type;
}

const Step::ClassType &IfcTextureCoordinate::getType() const {
    return IfcTextureCoordinate::s_type;
}

bool IfcTextureCoordinate::isOfType(const Step::ClassType &t) const {
    return IfcTextureCoordinate::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Inverse_Set_IfcAnnotationSurface_1_1 &IfcTextureCoordinate::getAnnotatedSurface() {
    if (Step::BaseObject::inited()) {
        return m_annotatedSurface;
    }
    else {
        m_annotatedSurface.setUnset(true);
        return m_annotatedSurface;
    }
}

const Inverse_Set_IfcAnnotationSurface_1_1 &IfcTextureCoordinate::getAnnotatedSurface() const {
    IfcTextureCoordinate * deConstObject = const_cast< IfcTextureCoordinate * > (this);
    return deConstObject->getAnnotatedSurface();
}

bool IfcTextureCoordinate::testAnnotatedSurface() const {
    return !Step::isUnset(getAnnotatedSurface());
}

bool IfcTextureCoordinate::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcAnnotationSurface::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_annotatedSurface.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_annotatedSurface.insert(static_cast< IfcAnnotationSurface * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcTextureCoordinate::copy(const IfcTextureCoordinate &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextureCoordinate::s_type("IfcTextureCoordinate");
