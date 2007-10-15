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

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcLibraryReference::IfcLibraryReference(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
    m_referenceIntoLibrary.setUnset(true);
}

IfcLibraryReference::~IfcLibraryReference() {
}

bool IfcLibraryReference::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLibraryReference(this);
}

const std::string &IfcLibraryReference::type() {
    return IfcLibraryReference::s_type.getName();
}

Step::ClassType IfcLibraryReference::getClassType() {
    return IfcLibraryReference::s_type;
}

Step::ClassType IfcLibraryReference::getType() const {
    return IfcLibraryReference::s_type;
}

bool IfcLibraryReference::isOfType(Step::ClassType t) {
    return IfcLibraryReference::s_type == t ? true : IfcExternalReference::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcLibraryInformation > > &IfcLibraryReference::getReferenceIntoLibrary() {
    if (Step::BaseObject::inited()) {
        return m_referenceIntoLibrary;
    }
    else {
        m_referenceIntoLibrary.setUnset(true);
        return m_referenceIntoLibrary;
    }
}

void IfcLibraryReference::release() {
    IfcExternalReference::release();
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
