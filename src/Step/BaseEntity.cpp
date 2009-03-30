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
#include "Step/BaseEntity.h"
#include "Step/BaseVisitor.h"

using namespace Step;

ClassType_child_implementations(STEP_DLL_DEF,BaseEntity,BaseObject);

bool BaseEntity::acceptVisitor(BaseVisitor *v)
{
    return v->visitBaseEntity(this);
}

BaseEntity::~BaseEntity()
{
}

Id BaseEntity::getKey() const
{
    return mId;
}

BaseEntity::BaseEntity(Id id, SPFData* data) :
    BaseObject(data), mId(id)
{
}

void BaseEntity::copy(const BaseEntity &obj, const BaseCopyOp& copyop)
{
    BaseObject::copy(obj, copyop);
}

void BaseEntity::setKey(Id id)
{
    mId = id;
}

bool Step::keySort(Step::BaseEntity* i, Step::BaseEntity* j)
{
    return (i->getKey() <  j->getKey()) ;
}
