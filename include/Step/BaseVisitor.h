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
#ifndef Step_BaseVisitor_h
#define Step_BaseVisitor_h

#include "StepDLL.h"

#include "Types.h"
#include "logger.h"

namespace Step {
    /*!
     * \short Base class of Visitor pattern
     *
     * A visitor is given to an BaseObject, or any of it's subtypes,
     * with the method acceptVisitor(). The implementation of this
     * method is then calling back the Visitor with the method
     * corresponding to it's type.
     * \code
     * BaseObject *obj = new BaseEntity();
     * BaseVisitor visitor;
     * obj->acceptVisitor(&visitor); // calls visitor.visitBaseEntity()
     * \endcode
     */
    class STEP_DLL_DEF BaseVisitor: public Referenced
    {
    public:
        BaseVisitor();
        ~BaseVisitor();
        //! this method is called by the acceptVisitor() method from BaseObject
        virtual bool visitBaseObject(BaseObject* obj);

        //!this method is called by the acceptVisitor() method from BaseEntity
        virtual bool visitBaseEntity(BaseEntity* obj);
    };
}

#endif
