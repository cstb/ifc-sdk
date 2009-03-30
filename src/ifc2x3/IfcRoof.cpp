/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcRoof.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRoof::IfcRoof(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_shapeType = IfcRoofTypeEnum_UNSET;
}

IfcRoof::~IfcRoof() {
}

bool IfcRoof::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRoof(this);
}

const std::string &IfcRoof::type() const {
    return IfcRoof::s_type.getName();
}

const Step::ClassType &IfcRoof::getClassType() {
    return IfcRoof::s_type;
}

const Step::ClassType &IfcRoof::getType() const {
    return IfcRoof::s_type;
}

bool IfcRoof::isOfType(const Step::ClassType &t) const {
    return IfcRoof::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcRoofTypeEnum IfcRoof::getShapeType() {
    if (Step::BaseObject::inited()) {
        return m_shapeType;
    }
    else {
        return IfcRoofTypeEnum_UNSET;
    }
}

const IfcRoofTypeEnum IfcRoof::getShapeType() const {
    IfcRoof * deConstObject = const_cast< IfcRoof * > (this);
    return deConstObject->getShapeType();
}

void IfcRoof::setShapeType(IfcRoofTypeEnum value) {
    m_shapeType = value;
}

void IfcRoof::unsetShapeType() {
    m_shapeType = IfcRoofTypeEnum_UNSET;
}

bool IfcRoof::testShapeType() const {
    return getShapeType() != IfcRoofTypeEnum_UNSET;
}

bool IfcRoof::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shapeType = IfcRoofTypeEnum_UNSET;
    }
    else {
        if (arg == ".FLAT_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_FLAT_ROOF;
        }
        else if (arg == ".SHED_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_SHED_ROOF;
        }
        else if (arg == ".GABLE_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_GABLE_ROOF;
        }
        else if (arg == ".HIP_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_HIP_ROOF;
        }
        else if (arg == ".HIPPED_GABLE_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_HIPPED_GABLE_ROOF;
        }
        else if (arg == ".GAMBREL_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_GAMBREL_ROOF;
        }
        else if (arg == ".MANSARD_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_MANSARD_ROOF;
        }
        else if (arg == ".BARREL_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_BARREL_ROOF;
        }
        else if (arg == ".RAINBOW_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_RAINBOW_ROOF;
        }
        else if (arg == ".BUTTERFLY_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_BUTTERFLY_ROOF;
        }
        else if (arg == ".PAVILION_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_PAVILION_ROOF;
        }
        else if (arg == ".DOME_ROOF.") {
            m_shapeType = IfcRoofTypeEnum_DOME_ROOF;
        }
        else if (arg == ".FREEFORM.") {
            m_shapeType = IfcRoofTypeEnum_FREEFORM;
        }
        else if (arg == ".NOTDEFINED.") {
            m_shapeType = IfcRoofTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRoof::copy(const IfcRoof &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setShapeType(obj.m_shapeType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRoof::s_type("IfcRoof");
