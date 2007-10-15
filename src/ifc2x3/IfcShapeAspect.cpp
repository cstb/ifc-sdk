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

#include "ifc2x3/IfcShapeAspect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProductDefinitionShape.h"
#include "ifc2x3/IfcShapeModel.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcShapeAspect::IfcShapeAspect(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_shapeRepresentations.setUnset(true);
    m_shapeRepresentations.setOwner(this);
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_productDefinitional = Step::getUnset(m_productDefinitional);
    m_partOfProductDefinitionShape = NULL;
}

IfcShapeAspect::~IfcShapeAspect() {
}

bool IfcShapeAspect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcShapeAspect(this);
}

const std::string &IfcShapeAspect::type() {
    return IfcShapeAspect::s_type.getName();
}

Step::ClassType IfcShapeAspect::getClassType() {
    return IfcShapeAspect::s_type;
}

Step::ClassType IfcShapeAspect::getType() const {
    return IfcShapeAspect::s_type;
}

bool IfcShapeAspect::isOfType(Step::ClassType t) {
    return IfcShapeAspect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::List< Step::RefPtr< IfcShapeModel > > &IfcShapeAspect::getShapeRepresentations() {
    if (Step::BaseObject::inited()) {
        return m_shapeRepresentations;
    }
    else {
        m_shapeRepresentations.setUnset(true);
        return m_shapeRepresentations;
    }
}

IfcLabel IfcShapeAspect::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcShapeAspect::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcShapeAspect::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcShapeAspect::setDescription(const IfcText &value) {
    m_description = value;
}

Step::Logical IfcShapeAspect::getProductDefinitional() {
    if (Step::BaseObject::inited()) {
        return m_productDefinitional;
    }
    else {
        return Step::getUnset(m_productDefinitional);
    }
}

void IfcShapeAspect::setProductDefinitional(Step::Logical value) {
    m_productDefinitional = value;
}

IfcProductDefinitionShape *IfcShapeAspect::getPartOfProductDefinitionShape() {
    if (Step::BaseObject::inited()) {
        return m_partOfProductDefinitionShape.get();
    }
    else {
        return NULL;
    }
}

void IfcShapeAspect::setPartOfProductDefinitionShape(const Step::RefPtr< IfcProductDefinitionShape > &value) {
    m_partOfProductDefinitionShape = value;
    m_partOfProductDefinitionShape->m_hasShapeAspects.insert(this);
}

void IfcShapeAspect::release() {
    m_shapeRepresentations.clear();
    m_partOfProductDefinitionShape.release();
}

bool IfcShapeAspect::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shapeRepresentations.setUnset(true);
    }
    else {
        m_shapeRepresentations.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcShapeModel > attr2;
                attr2 = static_cast< IfcShapeModel * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_shapeRepresentations.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_productDefinitional = Step::getUnset(m_productDefinitional);
    }
    else {
        m_productDefinitional = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_partOfProductDefinitionShape = NULL;
    }
    else {
        m_partOfProductDefinitionShape = static_cast< IfcProductDefinitionShape * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcShapeAspect::copy(const IfcShapeAspect &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcShapeModel > >::const_iterator it_m_shapeRepresentations;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_shapeRepresentations = obj.m_shapeRepresentations.begin(); it_m_shapeRepresentations != obj.m_shapeRepresentations.end(); ++it_m_shapeRepresentations) {
        Step::RefPtr< IfcShapeModel > copyTarget = copyop((*it_m_shapeRepresentations).get());
        m_shapeRepresentations.push_back(copyTarget.get());
    }
    setName(obj.m_name);
    setDescription(obj.m_description);
    setProductDefinitional(obj.m_productDefinitional);
    setPartOfProductDefinitionShape(copyop(obj.m_partOfProductDefinitionShape.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcShapeAspect::s_type("IfcShapeAspect");
IfcShapeAspect::Inverted_ShapeRepresentations_type::Inverted_ShapeRepresentations_type() {
}

void IfcShapeAspect::Inverted_ShapeRepresentations_type::setOwner(IfcShapeAspect *owner) {
    mOwner = owner;
}

void IfcShapeAspect::Inverted_ShapeRepresentations_type::push_back(const Step::RefPtr< IfcShapeModel > &value) {
    IfcShapeModel *inverse = const_cast< IfcShapeModel * > (value.get());
    Step::List< Step::RefPtr< IfcShapeModel > >::push_back(value);
    inverse->m_ofShapeAspect.insert(mOwner);
}

