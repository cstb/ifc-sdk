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
#include <Step/ClientDataHandler.h>
#include <Step/ClientData.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif

Step::ClientDataHandler::ClientDataHandler()
{
}

Step::ClientDataHandler::~ClientDataHandler()
{
    std::map< ClientDataKey, RefPtr<ClientData> >::iterator iter;
    for (iter = m_clientDataMap.begin(); iter != m_clientDataMap.end(); iter++) {
        iter->second = 0;
    }
}


const Step::ClassType& Step::ClientDataHandler::getClassType() {
    return Step::ClientDataHandler::s_type;
}

const Step::ClassType& Step::ClientDataHandler::getType() const {
    return Step::ClientDataHandler::s_type;
}

bool Step::ClientDataHandler::isOfType(const Step::ClassType &t) const {
    return Step::ClientDataHandler::s_type == t ? true : Referenced::isOfType(t);
}

const std::string &Step::ClientDataHandler::type() const {
    return Step::ClientDataHandler::s_type.getName();
}

void Step::ClientDataHandler::copy(const ClientDataHandler& obj,const BaseCopyOp& )
{
    std::map< ClientDataKey, RefPtr<ClientData> >::const_iterator iter;
    for (iter = obj.m_clientDataMap.begin(); iter != obj.m_clientDataMap.end(); iter++) {
        setClientData(iter->first,iter->second.get());
    }
}

void Step::ClientDataHandler::clearClientData()
{
    std::map< ClientDataKey, RefPtr<ClientData> >::iterator iter;
    for (iter = m_clientDataMap.begin(); iter != m_clientDataMap.end(); iter++) {
        iter->second = 0;
    }
    m_clientDataMap.clear();
}

bool Step::ClientDataHandler::eraseClientData(ClientDataKey key)
{
    return (m_clientDataMap.erase(key) > 0);
}

Step::ClientData* Step::ClientDataHandler::getClientData(ClientDataKey key)
{
    std::map< ClientDataKey, RefPtr<ClientData> >::iterator iter = m_clientDataMap.find(key);
    if (iter!=m_clientDataMap.end())
        return iter->second.get();
    else
        return NULL;
}

bool Step::ClientDataHandler::setClientData(ClientDataKey key, ClientData* data)
{
    return m_clientDataMap.insert(std::pair<ClientDataKey, RefPtr<ClientData> >(key, data)).second;
}

Step::ClassType Step::ClientDataHandler::s_type("ClientDataHandler");

