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

#include "ifc2x3/IfcCovering.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/IfcRelCoversBldgElements.h"
#include "ifc2x3/IfcRelCoversSpaces.h"
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

IfcCovering::IfcCovering(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_predefinedType = IfcCoveringTypeEnum_UNSET;
    m_coversSpaces.setUnset(true);
    m_covers.setUnset(true);
}

IfcCovering::~IfcCovering() {
}

bool IfcCovering::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCovering(this);
}

const std::string &IfcCovering::type() {
    return IfcCovering::s_type.getName();
}

Step::ClassType IfcCovering::getClassType() {
    return IfcCovering::s_type;
}

Step::ClassType IfcCovering::getType() const {
    return IfcCovering::s_type;
}

bool IfcCovering::isOfType(Step::ClassType t) {
    return IfcCovering::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcCoveringTypeEnum IfcCovering::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCoveringTypeEnum_UNSET;
    }
}

void IfcCovering::setPredefinedType(IfcCoveringTypeEnum value) {
    m_predefinedType = value;
}

Step::Set< Step::ObsPtr< IfcRelCoversSpaces > > &IfcCovering::getCoversSpaces() {
    if (Step::BaseObject::inited()) {
        return m_coversSpaces;
    }
    else {
        m_coversSpaces.setUnset(true);
        return m_coversSpaces;
    }
}

Step::Set< Step::ObsPtr< IfcRelCoversBldgElements > > &IfcCovering::getCovers() {
    if (Step::BaseObject::inited()) {
        return m_covers;
    }
    else {
        m_covers.setUnset(true);
        return m_covers;
    }
}

void IfcCovering::release() {
    IfcBuildingElement::release();
}

bool IfcCovering::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCoveringTypeEnum_UNSET;
    }
    else {
        if (arg == ".CEILING.") {
            m_predefinedType = IfcCoveringTypeEnum_CEILING;
        }
        else if (arg == ".FLOORING.") {
            m_predefinedType = IfcCoveringTypeEnum_FLOORING;
        }
        else if (arg == ".CLADDING.") {
            m_predefinedType = IfcCoveringTypeEnum_CLADDING;
        }
        else if (arg == ".ROOFING.") {
            m_predefinedType = IfcCoveringTypeEnum_ROOFING;
        }
        else if (arg == ".INSULATION.") {
            m_predefinedType = IfcCoveringTypeEnum_INSULATION;
        }
        else if (arg == ".MEMBRANE.") {
            m_predefinedType = IfcCoveringTypeEnum_MEMBRANE;
        }
        else if (arg == ".SLEEVING.") {
            m_predefinedType = IfcCoveringTypeEnum_SLEEVING;
        }
        else if (arg == ".WRAPPING.") {
            m_predefinedType = IfcCoveringTypeEnum_WRAPPING;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCoveringTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCoveringTypeEnum_NOTDEFINED;
        }
    }
    inverses = m_args->getInverses(IfcRelCoversSpaces::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_coversSpaces.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_coversSpaces.insert(static_cast< IfcRelCoversSpaces * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelCoversBldgElements::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_covers.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_covers.insert(static_cast< IfcRelCoversBldgElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcCovering::copy(const IfcCovering &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCovering::s_type("IfcCovering");
