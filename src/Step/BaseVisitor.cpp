#include "Step/BaseVisitor.h"
#include "Step/BaseObject.h"
#include "Step/BaseEntity.h"
#include "Step/BaseExpressDataSet.h"

#include "Step/logger.h"

#include <iostream>

using namespace Step;

BaseVisitor::BaseVisitor()
{
}

BaseVisitor::~BaseVisitor()
{
}

bool BaseVisitor::visitBaseObject(BaseObject* obj)
{
    LOG_ERROR("Failed to visit BaseObject(" << obj->type() << ")");
    return false;
}

bool BaseVisitor::visitBaseEntity(BaseEntity* obj)
{
    LOG_ERROR("Failed to visit BaseEntity(" << obj->type() << ")");
    return false;
}
