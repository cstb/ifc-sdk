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

