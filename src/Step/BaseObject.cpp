#include "Step/BaseObject.h"
#include "Step/SPFData.h"
#include "Step/BaseVisitor.h"

using namespace Step;

ClassType_child_implementations(STEP_DLL_DEF,BaseObject,ClientDataHandler);

BaseObject::BaseObject(SPFData* data) :
    m_inited((!data) || (data && (data->argc() == 0))), m_args(data)
{
}

void BaseObject::copy(const BaseObject& obj, const BaseCopyOp& copyop)
{
    ClientDataHandler::copy(obj, copyop);
    if (!obj.m_inited)
    {
        BaseObject* bo = const_cast<BaseObject*> (&obj);
        bo->inited();
    }
}

BaseObject::~BaseObject()
{
    if (m_args)
        delete m_args;
}


bool BaseObject::acceptVisitor(BaseVisitor *v)
{
    return v->visitBaseObject(this);
}

bool BaseObject::inited()
{
    if (!m_inited)
    {
#ifdef STEP_THREAD_SAFE
        OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
#endif
        m_inited = true; // set this to break cycle when inverse attribute inits
        bool inited = init();
        if (inited)
        {
            delete m_args;
            m_args = 0;
        }
    }

    return m_inited;
}

BaseExpressDataSet* BaseObject::getExpressDataSet() const
{
    return m_expressDataSet;
}

SPFData* BaseObject::getArgs()
{
    return m_args;
}

bool BaseObject::isInited()
{
    return m_inited;
}

BaseExpressDataSet * BaseObject::getExpressDataSet()
{
    return m_expressDataSet;
}

void BaseObject::setExpressDataSet(BaseExpressDataSet * expressDataSet)
{
    m_expressDataSet = expressDataSet;
}

void BaseObject::release()
{
}

