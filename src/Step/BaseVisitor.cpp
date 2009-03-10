/*//////////////////////////////////
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
#include <iostream>
#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/logger.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif

Step::BaseVisitor::BaseVisitor()
{
}

Step::BaseVisitor::~BaseVisitor()
{
}

bool Step::BaseVisitor::visitBaseObject(BaseObject* obj)
{
    LOG_ERROR("Failed to visit BaseObject(" << obj->type() << ")");
    return false;
}

bool Step::BaseVisitor::visitBaseEntity(BaseEntity* obj)
{
    LOG_ERROR("Failed to visit BaseEntity(" << obj->type() << ")");
    return false;
}
