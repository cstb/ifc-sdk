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
#include <Step/SPFData.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/SPFFunctions.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif

using namespace std;

Step::SPFData::~SPFData()
{
    if (m_argv)
        delete []m_argv;
}

std::string Step::SPFData::getNext()
{
    if (m_index>=m_argc)
        return "";
    else
        return m_argv[m_index++];
}

std::vector<Step::Id>* Step::SPFData::getInverses(ClassType cl, int i)
{
    std::map<std::pair<Step::ClassType,int>, std::vector<Step::Id> >::iterator it =
        m_inverses.find(std::pair<Step::ClassType,int>(cl,i));
    if (it != m_inverses.end())
        return &it->second;
    else
        return NULL;
}

void Step::SPFData::addInverse(ClassType cl,int i , Id id)
{
    m_inverses[std::pair<ClassType,int>(cl,i)].push_back(id);
}

bool Step::SPFData::setParams(const char *s)
{
    std::vector<std::string> v;
    if (!Step::parseList(s,v)) {
        return false;
    }
    m_argv = new std::string[v.size()];
    for (unsigned int i = 0; i < v.size(); i++) {
        m_argv[i] = v[i];
    }
    m_argc = v.size();
    m_index = 0;
    return true;
}
