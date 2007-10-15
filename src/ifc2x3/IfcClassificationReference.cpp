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

#include "ifc2x3/IfcClassificationReference.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClassification.h"
#include "ifc2x3/IfcExternalReference.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcClassificationReference::IfcClassificationReference(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
    m_referencedSource = NULL;
}

IfcClassificationReference::~IfcClassificationReference() {
}

bool IfcClassificationReference::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcClassificationReference(this);
}

const std::string &IfcClassificationReference::type() {
    return IfcClassificationReference::s_type.getName();
}

Step::ClassType IfcClassificationReference::getClassType() {
    return IfcClassificationReference::s_type;
}

Step::ClassType IfcClassificationReference::getType() const {
    return IfcClassificationReference::s_type;
}

bool IfcClassificationReference::isOfType(Step::ClassType t) {
    return IfcClassificationReference::s_type == t ? true : IfcExternalReference::isOfType(t);
}

IfcClassification *IfcClassificationReference::getReferencedSource() {
    if (Step::BaseObject::inited()) {
        return m_referencedSource.get();
    }
    else {
        return NULL;
    }
}

void IfcClassificationReference::setReferencedSource(const Step::RefPtr< IfcClassification > &value) {
    m_referencedSource = value;
}

void IfcClassificationReference::release() {
    IfcExternalReference::release();
    m_referencedSource.release();
}

bool IfcClassificationReference::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_referencedSource = NULL;
    }
    else {
        m_referencedSource = static_cast< IfcClassification * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcClassificationReference::copy(const IfcClassificationReference &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    setReferencedSource(copyop(obj.m_referencedSource.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationReference::s_type("IfcClassificationReference");
