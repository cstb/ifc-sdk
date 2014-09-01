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

#include "Step/ClientDataHandler.h"
#include "Step/ClientData.h"

using namespace Step;

ClassType_child_implementations(STEP_EXPORT,ClientDataHandler,Referenced);


ClientDataHandler::ClientDataHandler() : m_clientDataMap(0)
{
}

ClientDataHandler::~ClientDataHandler()
{
    if (m_clientDataMap)
    {
        std::map<ClientDataKey, RefPtr<ClientData> >::iterator iter;
        for (iter = m_clientDataMap->begin(); iter != m_clientDataMap->end(); iter++)
        {
            iter->second = 0;
        }
        delete m_clientDataMap;
    }
}

void ClientDataHandler::copy(const ClientDataHandler& obj, const BaseCopyOp&)
{
    if (obj.m_clientDataMap)
    {
        std::map<ClientDataKey, RefPtr<ClientData> >::const_iterator iter;
        for (iter = obj. m_clientDataMap->begin(); iter != obj. m_clientDataMap->end(); iter++)
        {
            setClientData(iter->first, iter->second.get());
        }
    }
}

void ClientDataHandler::clearClientData()
{
    if (m_clientDataMap)
    {
        std::map<ClientDataKey, RefPtr<ClientData> >::iterator iter;
        for (iter = m_clientDataMap->begin(); iter != m_clientDataMap->end(); iter++)
        {
            iter->second = 0;
        }
        m_clientDataMap->clear();
    }
}

bool ClientDataHandler::eraseClientData(ClientDataKey key)
{
    return ( m_clientDataMap && m_clientDataMap->erase(key) > 0);
}

ClientData* ClientDataHandler::getClientData(ClientDataKey key)
{
    if (m_clientDataMap)
    {
        std::map<ClientDataKey, RefPtr<ClientData> >::iterator iter =
                m_clientDataMap->find(key);
        if (iter != m_clientDataMap->end())
            return iter->second.get();
    }

    return NULL;
}

bool ClientDataHandler::setClientData(ClientDataKey key, ClientData* data)
{
    if (m_clientDataMap == 0)
    {
        m_clientDataMap = new std::map<ClientDataKey, RefPtr<ClientData> >;
    }
    return m_clientDataMap->insert(
            std::pair<ClientDataKey, RefPtr<ClientData> >(key, data)).second;
}
