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

#ifndef Step_ClientDataHandler_h
#define Step_ClientDataHandler_h

#include <Step/Export.h>
#include <Step/Types.h>

#include <map>

namespace Step {

    class ClientData;
    class BaseCopyOp;
    /*!
     * \short A handler of ClientData
     */
    class STEP_EXPORT ClientDataHandler: public Referenced
    {
        ClassType_definitions()
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
         \short Get a pointer to a ClientData from an Id (an uintptr_t)
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
        virtual void copy(const ClientDataHandler& obj, const BaseCopyOp& copyop);
        friend class BaseCopyOp;

    private:

        /*!
         \short Map of ClientData, the key is an uintptr_t
         */
        std::map<ClientDataKey, RefPtr<ClientData> > *m_clientDataMap;
    };
}
#endif
