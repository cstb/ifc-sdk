#include "Step/SPFData.h"
#include "Step/BaseExpressDataSet.h"
#include "Step/SPFFunctions.h"

using namespace std;
using namespace Step;

SPFData::~SPFData()
{
    if (m_argv)
        delete []m_argv;
}

std::string SPFData::getNext()
{
    if (m_index>=m_argc)
        return "";
    else
        return m_argv[m_index++];
}

std::vector<Id>* SPFData::getInverses(ClassType cl, int i)
{
    std::map<std::pair<ClassType,int>, std::vector<Id> >::iterator it =
        m_inverses.find(std::pair<ClassType,int>(cl,i));
    if (it != m_inverses.end())
        return &it->second;
    else
        return NULL;
}

void SPFData::addInverse(ClassType cl,int i , Id id)
{
    m_inverses[std::pair<ClassType,int>(cl,i)].push_back(id);
}

bool SPFData::setParams(const char *s)
{
    std::vector<std::string> v;
    if (!parseList(s,v)) {
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
