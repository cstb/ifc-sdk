// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef Step_BaseVisitor_h
#define Step_BaseVisitor_h

#include <Step/Export.h>

#include <Step/Types.h>
#include <Step/StepLogger.h>

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
    class STEP_EXPORT BaseVisitor: public Referenced
    {
    public:
        BaseVisitor();
        ~BaseVisitor();
        //! this method is called by the acceptVisitor() method from BaseObject
        virtual bool visitBaseObject(BaseObject* obj);

        //!this method is called by the acceptVisitor() method from BaseEntity
        virtual bool visitBaseEntity(BaseEntity* obj);

        virtual void setLogger(StepLogger *);

    protected:
        RefPtr<StepLogger> m_logger;
    };
}

#endif
