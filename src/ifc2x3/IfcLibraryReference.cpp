#include "ifc2x3/IfcLibraryReference.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcExternalReference.h"
#include "ifc2x3/IfcLibraryInformation.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcLibraryReference::IfcLibraryReference(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
}

IfcLibraryReference::~IfcLibraryReference() {
}

bool IfcLibraryReference::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLibraryReference(this);
}

const std::string &IfcLibraryReference::type() const {
    return IfcLibraryReference::s_type.getName();
}

const Step::ClassType &IfcLibraryReference::getClassType() {
    return IfcLibraryReference::s_type;
}

const Step::ClassType &IfcLibraryReference::getType() const {
    return IfcLibraryReference::s_type;
}

bool IfcLibraryReference::isOfType(const Step::ClassType &t) const {
    return IfcLibraryReference::s_type == t ? true : IfcExternalReference::isOfType(t);
}

Inverse_Set_IfcLibraryInformation_0_1 &IfcLibraryReference::getReferenceIntoLibrary() {
    if (Step::BaseObject::inited()) {
        return m_referenceIntoLibrary;
    }
    else {
        m_referenceIntoLibrary.setUnset(true);
        return m_referenceIntoLibrary;
    }
}

const Inverse_Set_IfcLibraryInformation_0_1 &IfcLibraryReference::getReferenceIntoLibrary() const {
    IfcLibraryReference * deConstObject = const_cast< IfcLibraryReference * > (this);
    return deConstObject->getReferenceIntoLibrary();
}

bool IfcLibraryReference::testReferenceIntoLibrary() const {
    return !Step::isUnset(getReferenceIntoLibrary());
}

bool IfcLibraryReference::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcLibraryInformation::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_referenceIntoLibrary.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referenceIntoLibrary.insert(static_cast< IfcLibraryInformation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcLibraryReference::copy(const IfcLibraryReference &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLibraryReference::s_type("IfcLibraryReference");
