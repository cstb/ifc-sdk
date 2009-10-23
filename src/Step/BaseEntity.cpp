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
