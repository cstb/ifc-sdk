#ifndef Step_BaseCopyOp_H
#define Step_BaseCopyOp_H

#include "StepDLL.h"

#include "SimpleTypes.h"
#include "BaseObject.h"

namespace Step
{
    class BaseObject;

    /*!
    ** \short Base class for all copy operator
    */
    class STEP_DLL_DEF BaseCopyOp
    {
    public:
        BaseCopyOp();
        virtual ~BaseCopyOp();
    };
}

#endif

