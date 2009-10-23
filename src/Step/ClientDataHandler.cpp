#include "Step/ClientDataHandler.h"
#include "Step/ClientData.h"

using namespace Step;

ClassType_child_implementations(STEP_DLL_DEF,ClientDataHandler,Referenced);


ClientDataHandler::ClientDataHandler()
{
}

ClientDataHandler::~ClientDataHandler()
{
    std::map<ClientDataKey, RefPtr<ClientData> >::iterator iter;
    for (iter = m_clientDataMap.begin(); iter != m_clientDataMap.end(); iter++)
    {
        iter->second = 0;
    }
}

void ClientDataHandler::copy(const ClientDataHandler& obj, const BaseCopyOp&)
{
    std::map<ClientDataKey, RefPtr<ClientData> >::const_iterator iter;
    for (iter = obj.m_clientDataMap.begin(); iter != obj.m_clientDataMap.end(); iter++)
    {
        setClientData(iter->first, iter->second.get());
    }
}

void ClientDataHandler::clearClientData()
{
    std::map<ClientDataKey, RefPtr<ClientData> >::iterator iter;
    for (iter = m_clientDataMap.begin(); iter != m_clientDataMap.end(); iter++)
    {
        iter->second = 0;
    }
    m_clientDataMap.clear();
}

bool ClientDataHandler::eraseClientData(ClientDataKey key)
{
    return (m_clientDataMap.erase(key) > 0);
}

ClientData* ClientDataHandler::getClientData(ClientDataKey key)
{
    std::map<ClientDataKey, RefPtr<ClientData> >::iterator iter =
            m_clientDataMap.find(key);
    if (iter != m_clientDataMap.end())
        return iter->second.get();
    else
        return NULL;
}

bool ClientDataHandler::setClientData(ClientDataKey key, ClientData* data)
{
    return m_clientDataMap.insert(
            std::pair<ClientDataKey, RefPtr<ClientData> >(key, data)).second;
}
