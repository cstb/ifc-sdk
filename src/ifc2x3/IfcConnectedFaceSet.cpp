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

#include "ifc2x3/IfcConnectedFaceSet.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFace.h"
#include "ifc2x3/IfcTopologicalRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcConnectedFaceSet::IfcConnectedFaceSet(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
    m_cfsFaces.setUnset(true);
}

IfcConnectedFaceSet::~IfcConnectedFaceSet() {
}

bool IfcConnectedFaceSet::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcConnectedFaceSet(this);
}

const std::string &IfcConnectedFaceSet::type() {
    return IfcConnectedFaceSet::s_type.getName();
}

Step::ClassType IfcConnectedFaceSet::getClassType() {
    return IfcConnectedFaceSet::s_type;
}

Step::ClassType IfcConnectedFaceSet::getType() const {
    return IfcConnectedFaceSet::s_type;
}

bool IfcConnectedFaceSet::isOfType(Step::ClassType t) {
    return IfcConnectedFaceSet::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

Step::Set< Step::RefPtr< IfcFace > > &IfcConnectedFaceSet::getCfsFaces() {
    if (Step::BaseObject::inited()) {
        return m_cfsFaces;
    }
    else {
        m_cfsFaces.setUnset(true);
        return m_cfsFaces;
    }
}

void IfcConnectedFaceSet::setCfsFaces(const Step::Set< Step::RefPtr< IfcFace > > &value) {
    m_cfsFaces = value;
}

void IfcConnectedFaceSet::release() {
    IfcTopologicalRepresentationItem::release();
    m_cfsFaces.clear();
}

bool IfcConnectedFaceSet::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_cfsFaces.setUnset(true);
    }
    else {
        m_cfsFaces.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcFace > attr2;
                attr2 = static_cast< IfcFace * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_cfsFaces.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcConnectedFaceSet::copy(const IfcConnectedFaceSet &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcFace > >::const_iterator it_m_cfsFaces;
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    for (it_m_cfsFaces = obj.m_cfsFaces.begin(); it_m_cfsFaces != obj.m_cfsFaces.end(); ++it_m_cfsFaces) {
        Step::RefPtr< IfcFace > copyTarget = copyop((*it_m_cfsFaces).get());
        m_cfsFaces.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConnectedFaceSet::s_type("IfcConnectedFaceSet");
