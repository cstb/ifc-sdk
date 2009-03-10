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
#ifndef STEP_BASE_VISITOR_H
#define STEP_BASE_VISITOR_H

#include "StepDLL.h"

#include "Types.h"
#include "logger.h"

namespace Step {
    /*!
    * \short Base class of Visitor pattern
    */
    class STEP_DLL_DEF BaseVisitor : public Referenced {
    public:
        BaseVisitor();
        ~BaseVisitor();
        virtual bool visitBaseObject(BaseObject* obj);
        virtual bool visitBaseEntity(BaseEntity* obj);
    };
}

#endif
