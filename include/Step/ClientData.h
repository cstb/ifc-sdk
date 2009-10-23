#ifndef Step_ClientData_h
#define Step_ClientData_h

#include "StepDLL.h"

#include "Types.h"

#include <string>
#include <map>

namespace Step {

    /*!
     * \short A class which encapsulates user data of step objects. It contains meta-data
     */
    class STEP_DLL_DEF ClientData: public Referenced
    {

    public:

        /*!
         \short Constructor, do nothing
         */
        ClientData()
        {
        }

        /*!
         \short Virtual Destructor
         */
        virtual ~ClientData()
        {
        }

        /*!
         \short Gets the name of the ClientData
         @return the name of the ClientData
         */
        virtual const std::string& getName() const
        {
            return s_defaultName;
        }

        /*!
         \short Get the description of the ClientData
         @return the description of the ClientData
         */
        virtual const std::string& getDescription() const
        {
            return s_defaultDesc;
        }

    private:
        static std::string s_defaultName;
        static std::string s_defaultDesc;
    };
}
#endif
