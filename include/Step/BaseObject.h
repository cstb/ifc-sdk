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

#ifndef Step_BaseObject_h
#define Step_BaseObject_h

#include <Step/Export.h>

#include <Step/Referenced.h>

#include <Step/ClientDataHandler.h>
#include <Step/Types.h>
#include <Step/ClassType.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseCopyOp.h>

namespace Step {
    class SPFData;
    /*!
     ** \short Base Object for Entity and Select definition
     */
    class STEP_EXPORT BaseObject: public ClientDataHandler
    {
        ClassType_definitions()
    public:

        /*!
         ** \short Virtual destructor
         */
        virtual ~BaseObject();

        /*!
         \short Base accept method from the Visitor pattern
         @param v the visitor
         */
        virtual bool acceptVisitor(BaseVisitor* v);

        /*!
         \short Get the ExpressDataSet which owns this instance
         @return the owning model
         */
        BaseExpressDataSet* getExpressDataSet() const;

        /*!
         \short Get the SPF arguments
         @return the parameters from Step-21 file
         */
        SPFData* getArgs();

        //TODO : Change the visibility of isInited and inited
        /*!
         \short Returns true if the instance has been inited (Lazy Loading)
         @return true if the instance has been inited
         */
        bool isInited();

        /*!
         \short Init the instance and returns true if OK (Lazy loading)
         @return true if the instance has been inited
         */
        bool inited();

        /*!
         \short get the ExpressDataSet this object belongs to
         */
        BaseExpressDataSet * getExpressDataSet();

    protected:
        /*!
         \short Protected default constructor
         */
        BaseObject(SPFData* data);

        /*!
         \short Protected copy method
         */
        virtual void copy(const BaseObject& obj, const BaseCopyOp& copyop);
        friend class BaseCopyOp;

        /*!
         Set the model which owns this instance
         @param expressDataSet The ExpressDataSet that created this Object
         */
        void setExpressDataSet(BaseExpressDataSet * expressDataSet);

        /*!
         \short Should be called only by BaseExpressDataSet
         */
        virtual void release();

        /*!
         \short Initialize the instance (Lazy loading concept)
         @return true if the instance was correctly inited
         */
        virtual bool init()=0;

        /*!
         * Pointer to our data set
         */
        BaseExpressDataSet* m_expressDataSet;



        /*!
         \short Flag about entity initialization (Lazy Loading)
         */
        bool m_inited;

        /*!
         \short Data from a Step-21 file (Lazy Loading)
         */
        SPFData* m_args;

    private:

        friend class BaseExpressDataSet;

    };
}

#endif

