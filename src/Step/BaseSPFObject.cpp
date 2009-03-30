/*//////////////////////////////////
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
#include "Step/BaseSPFObject.h"
#include "Step/SPFData.h"
#include "Step/BaseVisitor.h"

#include "Step/logger.h"

using namespace Step;

ClassType_child_implementations(STEP_DLL_DEF,BaseSPFObject,BaseEntity);

BaseSPFObject::BaseSPFObject(Id id, SPFData* data) :
    BaseEntity(id, data), m_allocFuncType(0)
{
}

bool BaseSPFObject::init()
{
    LOG_WARNING("Tried to init a BaseSPFObject instance");
    return false;
}

BaseSPFObject::~BaseSPFObject()
{
}

AllocateFuncType BaseSPFObject::getAllocateFunction()
{
    return m_allocFuncType;
}

void BaseSPFObject::setAllocateFunction(AllocateFuncType type)
{
    m_allocFuncType = type;
}
