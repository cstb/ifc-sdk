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
