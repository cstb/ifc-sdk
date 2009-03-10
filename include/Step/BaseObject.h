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
#ifndef STEP_BaseObject_H
#define STEP_BaseObject_H

#include "Referenced.h"
#include "StepDLL.h"
#include "ClientDataHandler.h"
#include "Types.h"
#include "ClassType.h"
#include "BaseExpressDataSet.h"
#include "BaseCopyOp.h"

namespace Step {
    class SPFData;
    /*!
    * \short Base Object for Entity and Select definition
    */
    class STEP_DLL_DEF BaseObject : public ClientDataHandler
    {

    public:

        /*!
        \short Virtual destructor
        */
        virtual ~BaseObject();

        /*!
         \short Get the type identifier of this class (static)
         @return The ClassType value from this class
         */
         static const Step::ClassType& getClassType();

         /*!
         \short Returns the name of the instance type
         @return the type name of this instance
         */
         virtual const std::string & type() const ;

        /*!
        \short Get the type identifier of this instance
        @return The ClassType value of this instance
        */
        virtual const Step::ClassType& getType() const;

        /*!
        \short Check if this instance is of type t
        @param t the reference type
        @return true if this instance is of type t or inherits from t
        */
        virtual bool isOfType(const Step::ClassType& t) const;

        /*!
        \short Base accept method from the Visitor pattern
        @param v the visitor
        */
        virtual bool acceptVisitor(BaseVisitor* v);

        /*!
        \short Get the ExpressDataSet which owns this instance
        @return the owning model
        */
        BaseExpressDataSet* getExpressDataSet() const {
            return m_expressDataSet;
        }

        /*!
        \short Get the SPF arguments
        @return the parameters from Step-21 file
        */
        SPFData* getArgs() {
            return m_args;
        }

        //TODO : Change the visibility of isInited and inited
        /*!
        \short Returns true if the instance has been inited (Lazy Loading)
        @return true if the instance has been inited
        */
        bool isInited() {
            return m_inited;
        }

        /*!
        \short Init the instance and returns true if OK (Lazy loading)
        @return true if the instance has been inited
        */
        bool inited();

        /*!
        \short get the ExpressDataSet this object belongs to
        */
        BaseExpressDataSet * getExpressDataSet() {
            return m_expressDataSet;
        }

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
        @param model the owning model
        */
        void setExpressDataSet(BaseExpressDataSet * expressDataSet) {
            m_expressDataSet = expressDataSet;
        }

        /*!
        \short Should be called only by BaseExpressDataSet
        */
        virtual void release() {}


        BaseExpressDataSet* m_expressDataSet;

        /*!
        \short Initialize the instance (Lazy loading concept)
        @return true if the instance was correctly inited
        */
        virtual bool init()=0;

        /*!
        \short Flag about entity initialization (Lazy Loading)
        */
        bool m_inited;

        /*!
        \short Data from a Step-21 file (Lazy Loading)
        */
        SPFData* m_args;

    private:
        static ClassType s_type;

        friend class BaseExpressDataSet;

    };
} // namespace Step

// DEBUGGING tools
#ifdef _DEBUG_NEW
#include "debugging.h"
#endif

#endif
//BaseObject_H

