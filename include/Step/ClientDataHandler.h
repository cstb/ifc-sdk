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
#ifndef Step_ClientDataHandler_h
#define Step_ClientDataHandler_h

#include "StepDLL.h"
#include "Types.h"

#include <map>

namespace Step {

    class ClientData;
    class BaseCopyOp;
    /*!
     * \short A handler of ClientData
     */
    class STEP_DLL_DEF ClientDataHandler: public Referenced
    {
        ClassType_definitions();
    public:

        /*!
         \short Constructor, do nothing
         */
        ClientDataHandler();

        /*!
         \short Destructor, delete every ClientData
         */
        ~ClientDataHandler();

        /*!
         \short Get a pointer to a ClientData from an Id (an unsigned int)
         ID can be a pointer to an Eve module for example.
         IMPORTANT : Uniqueness of Ids belongs to programmer
         responsibility... Otherwise you may replace existing ClientData
         It returns 0 if the Id is not a key of the list of ClientData*
         */
        ClientData* getClientData(ClientDataKey key);

        /*!
         \short Set a ClientData for an Id
         If Id is not in the list yet, a new field is created for this key
         AND this method returns true
         Otherwise ClientData replaces the old one
         AND this method return false
         */
        bool setClientData(ClientDataKey key, ClientData* data);

        /*!
         \short Erase an element with the specified Id
         It returns true if the element was really erased
         or false if Id is not in the list
         */
        bool eraseClientData(ClientDataKey key);

        /*!
         \short Erase all elements in the list
         It calls the clear method of STL map
         */
        void clearClientData();

    protected:
        /*!
         \short Copy, copies every ClientData
         */
        void copy(const ClientDataHandler& obj, const BaseCopyOp& copyop);
        friend class BaseCopyOp;

    private:

        /*!
         \short Map of ClientData, the key is an unsigned int
         */
        std::map<ClientDataKey, RefPtr<ClientData> > m_clientDataMap;
    };
}
#endif
