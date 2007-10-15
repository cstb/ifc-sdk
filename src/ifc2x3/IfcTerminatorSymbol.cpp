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

#include "ifc2x3/IfcTerminatorSymbol.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationCurveOccurrence.h"
#include "ifc2x3/IfcAnnotationSymbolOccurrence.h"
#include "ifc2x3/IfcDimensionCurve.h"
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

IfcTerminatorSymbol::IfcTerminatorSymbol(Step::Id id, Step::SPFData *args) : IfcAnnotationSymbolOccurrence(id, args) {
    m_annotatedCurve = NULL;
}

IfcTerminatorSymbol::~IfcTerminatorSymbol() {
}

bool IfcTerminatorSymbol::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTerminatorSymbol(this);
}

const std::string &IfcTerminatorSymbol::type() {
    return IfcTerminatorSymbol::s_type.getName();
}

Step::ClassType IfcTerminatorSymbol::getClassType() {
    return IfcTerminatorSymbol::s_type;
}

Step::ClassType IfcTerminatorSymbol::getType() const {
    return IfcTerminatorSymbol::s_type;
}

bool IfcTerminatorSymbol::isOfType(Step::ClassType t) {
    return IfcTerminatorSymbol::s_type == t ? true : IfcAnnotationSymbolOccurrence::isOfType(t);
}

IfcAnnotationCurveOccurrence *IfcTerminatorSymbol::getAnnotatedCurve() {
    if (Step::BaseObject::inited()) {
        return m_annotatedCurve.get();
    }
    else {
        return NULL;
    }
}

void IfcTerminatorSymbol::setAnnotatedCurve(const Step::RefPtr< IfcAnnotationCurveOccurrence > &value) {
    m_annotatedCurve = value;
    if (dynamic_cast< IfcDimensionCurve * > (m_annotatedCurve.get()) != NULL) {
        ((IfcDimensionCurve *) (m_annotatedCurve.get()))->m_annotatedBySymbols.insert(this);
    }
}

void IfcTerminatorSymbol::release() {
    IfcAnnotationSymbolOccurrence::release();
    m_annotatedCurve.release();
}

bool IfcTerminatorSymbol::init() {
    bool status = IfcAnnotationSymbolOccurrence::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_annotatedCurve = NULL;
    }
    else {
        m_annotatedCurve = static_cast< IfcAnnotationCurveOccurrence * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcTerminatorSymbol::copy(const IfcTerminatorSymbol &obj, const CopyOp &copyop) {
    IfcAnnotationSymbolOccurrence::copy(obj, copyop);
    setAnnotatedCurve(copyop(obj.m_annotatedCurve.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTerminatorSymbol::s_type("IfcTerminatorSymbol");
