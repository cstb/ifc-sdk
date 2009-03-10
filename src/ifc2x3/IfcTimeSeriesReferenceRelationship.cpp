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
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcTimeSeriesReferenceRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDocumentSelect.h"
#include "ifc2x3/IfcTimeSeries.h"
#include "ifc2x3/Visitor.h"
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

IfcTimeSeriesReferenceRelationship::IfcTimeSeriesReferenceRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_referencedTimeSeries = NULL;
}

IfcTimeSeriesReferenceRelationship::~IfcTimeSeriesReferenceRelationship() {
}

bool IfcTimeSeriesReferenceRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTimeSeriesReferenceRelationship(this);
}

const std::string &IfcTimeSeriesReferenceRelationship::type() const {
    return IfcTimeSeriesReferenceRelationship::s_type.getName();
}

const Step::ClassType &IfcTimeSeriesReferenceRelationship::getClassType() {
    return IfcTimeSeriesReferenceRelationship::s_type;
}

const Step::ClassType &IfcTimeSeriesReferenceRelationship::getType() const {
    return IfcTimeSeriesReferenceRelationship::s_type;
}

bool IfcTimeSeriesReferenceRelationship::isOfType(const Step::ClassType &t) const {
    return IfcTimeSeriesReferenceRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcTimeSeries *IfcTimeSeriesReferenceRelationship::getReferencedTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_referencedTimeSeries.get();
    }
    else {
        return NULL;
    }
}

const IfcTimeSeries *IfcTimeSeriesReferenceRelationship::getReferencedTimeSeries() const {
    IfcTimeSeriesReferenceRelationship * deConstObject = const_cast< IfcTimeSeriesReferenceRelationship * > (this);
    return deConstObject->getReferencedTimeSeries();
}

void IfcTimeSeriesReferenceRelationship::setReferencedTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    if (m_referencedTimeSeries.valid()) {
        m_referencedTimeSeries->m_documentedBy.erase(this);
    }
    if (value.valid()) {
        value->m_documentedBy.insert(this);
    }
    m_referencedTimeSeries = value;
}

Set_IfcDocumentSelect_1_n &IfcTimeSeriesReferenceRelationship::getTimeSeriesReferences() {
    if (Step::BaseObject::inited()) {
        return m_timeSeriesReferences;
    }
    else {
        m_timeSeriesReferences.setUnset(true);
        return m_timeSeriesReferences;
    }
}

const Set_IfcDocumentSelect_1_n &IfcTimeSeriesReferenceRelationship::getTimeSeriesReferences() const {
    IfcTimeSeriesReferenceRelationship * deConstObject = const_cast< IfcTimeSeriesReferenceRelationship * > (this);
    return deConstObject->getTimeSeriesReferences();
}

void IfcTimeSeriesReferenceRelationship::setTimeSeriesReferences(const Set_IfcDocumentSelect_1_n &value) {
    m_timeSeriesReferences = value;
}

bool IfcTimeSeriesReferenceRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_referencedTimeSeries = NULL;
    }
    else {
        m_referencedTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeSeriesReferences.setUnset(true);
    }
    else {
        m_timeSeriesReferences.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDocumentSelect > attr2;
                attr2 = new IfcDocumentSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                m_timeSeriesReferences.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcTimeSeriesReferenceRelationship::copy(const IfcTimeSeriesReferenceRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcDocumentSelect >, 1 >::const_iterator it_m_timeSeriesReferences;
    Step::BaseEntity::copy(obj, copyop);
    setReferencedTimeSeries((IfcTimeSeries*)copyop(obj.m_referencedTimeSeries.get()));
    for (it_m_timeSeriesReferences = obj.m_timeSeriesReferences.begin(); it_m_timeSeriesReferences != obj.m_timeSeriesReferences.end(); ++it_m_timeSeriesReferences) {
        Step::RefPtr< IfcDocumentSelect > copyTarget = new IfcDocumentSelect;
        copyTarget->copy(*((*it_m_timeSeriesReferences).get()), copyop);
        m_timeSeriesReferences.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTimeSeriesReferenceRelationship::s_type("IfcTimeSeriesReferenceRelationship");
