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

#include "ifc2x3/IfcGeometricRepresentationContext.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcGeometricRepresentationSubContext.h"
#include "ifc2x3/IfcRepresentationContext.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcGeometricRepresentationContext::IfcGeometricRepresentationContext(Step::Id id, Step::SPFData *args) : IfcRepresentationContext(id, args) {
    m_coordinateSpaceDimension = Step::getUnset(m_coordinateSpaceDimension);
    m_precision = Step::getUnset(m_precision);
    m_worldCoordinateSystem = NULL;
    m_trueNorth = NULL;
    m_hasSubContexts.setUnset(true);
}

IfcGeometricRepresentationContext::~IfcGeometricRepresentationContext() {
}

bool IfcGeometricRepresentationContext::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcGeometricRepresentationContext(this);
}

const std::string &IfcGeometricRepresentationContext::type() {
    return IfcGeometricRepresentationContext::s_type.getName();
}

Step::ClassType IfcGeometricRepresentationContext::getClassType() {
    return IfcGeometricRepresentationContext::s_type;
}

Step::ClassType IfcGeometricRepresentationContext::getType() const {
    return IfcGeometricRepresentationContext::s_type;
}

bool IfcGeometricRepresentationContext::isOfType(Step::ClassType t) {
    return IfcGeometricRepresentationContext::s_type == t ? true : IfcRepresentationContext::isOfType(t);
}

IfcDimensionCount IfcGeometricRepresentationContext::getCoordinateSpaceDimension() {
    if (Step::BaseObject::inited()) {
        return m_coordinateSpaceDimension;
    }
    else {
        return Step::getUnset(m_coordinateSpaceDimension);
    }
}

void IfcGeometricRepresentationContext::setCoordinateSpaceDimension(IfcDimensionCount value) {
    m_coordinateSpaceDimension = value;
}

Step::Real IfcGeometricRepresentationContext::getPrecision() {
    if (Step::BaseObject::inited()) {
        return m_precision;
    }
    else {
        return Step::getUnset(m_precision);
    }
}

void IfcGeometricRepresentationContext::setPrecision(Step::Real value) {
    m_precision = value;
}

IfcAxis2Placement *IfcGeometricRepresentationContext::getWorldCoordinateSystem() {
    if (Step::BaseObject::inited()) {
        return m_worldCoordinateSystem.get();
    }
    else {
        return NULL;
    }
}

void IfcGeometricRepresentationContext::setWorldCoordinateSystem(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_worldCoordinateSystem = value;
}

IfcDirection *IfcGeometricRepresentationContext::getTrueNorth() {
    if (Step::BaseObject::inited()) {
        return m_trueNorth.get();
    }
    else {
        return NULL;
    }
}

void IfcGeometricRepresentationContext::setTrueNorth(const Step::RefPtr< IfcDirection > &value) {
    m_trueNorth = value;
}

Step::Set< Step::ObsPtr< IfcGeometricRepresentationSubContext > > &IfcGeometricRepresentationContext::getHasSubContexts() {
    if (Step::BaseObject::inited()) {
        return m_hasSubContexts;
    }
    else {
        m_hasSubContexts.setUnset(true);
        return m_hasSubContexts;
    }
}

void IfcGeometricRepresentationContext::release() {
    IfcRepresentationContext::release();
    m_trueNorth.release();
}

bool IfcGeometricRepresentationContext::init() {
    bool status = IfcRepresentationContext::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_coordinateSpaceDimension = Step::getUnset(m_coordinateSpaceDimension);
    }
    else {
        m_coordinateSpaceDimension = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_precision = Step::getUnset(m_precision);
    }
    else {
        m_precision = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_worldCoordinateSystem = NULL;
    }
    else {
        m_worldCoordinateSystem = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_worldCoordinateSystem->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_trueNorth = NULL;
    }
    else {
        m_trueNorth = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    inverses = m_args->getInverses(IfcGeometricRepresentationSubContext::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_hasSubContexts.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasSubContexts.insert(static_cast< IfcGeometricRepresentationSubContext * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcGeometricRepresentationContext::copy(const IfcGeometricRepresentationContext &obj, const CopyOp &copyop) {
    IfcRepresentationContext::copy(obj, copyop);
    setCoordinateSpaceDimension(obj.m_coordinateSpaceDimension);
    setPrecision(obj.m_precision);
    m_worldCoordinateSystem = new IfcAxis2Placement;
    m_worldCoordinateSystem->copy(*(obj.m_worldCoordinateSystem.get()), copyop);
    setTrueNorth(copyop(obj.m_trueNorth.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeometricRepresentationContext::s_type("IfcGeometricRepresentationContext");
