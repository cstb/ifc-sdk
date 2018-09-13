#include <ifc2x3/all.h>
#include <ifc2x3/SPFReader.h>
#include <ifc2x3/InheritVisitor.h>

class CollectSpaceBoundariesVisitor : public ifc2x3::InheritVisitor
{
public:
    bool visitIfcSpace(ifc2x3::IfcSpace* value) override
    {
        _currentSpace = value;

        for(auto relation : value->getBoundedBy())
        {
            relation->acceptVisitor(this);
        }

        _currentSpace = nullptr;

        return true;
    }

    bool visitIfcRelSpaceBoundary(ifc2x3::IfcRelSpaceBoundary* value) override
    {
        if(_currentSpace != nullptr)
        {
            if(value->testRelatedBuildingElement())
            {
                auto key = value->getRelatedBuildingElement()->getKey();
                _connectedSpaces[key].insert(_currentSpace);
            }
        }

        return true;
    }

    std::map<Step::Id, std::set<ifc2x3::IfcSpace*>> _connectedSpaces;
    ifc2x3::IfcSpace* _currentSpace{ nullptr };
};

int main(int argc, char** argv)
{
    if(argc != 2)
    {
        std::cerr << "Parameter should be an ifc file." <<
                  std::endl;
        return 1;
    }

    // ** open, load, close the file
    std::ifstream ifcFile;
    ifcFile.open(argv[1]);

    ifc2x3::SPFReader reader;

    std::cout << "reading file ..." << std::endl;

    bool result = reader.read(ifcFile);

    ifcFile.close();

    if(result)
        std::cout << "OK!!" << std::endl;
    else
    {
        std::cerr << "Ho no, there are a PROBLEM!!" << std::endl;
        return 1;
    }

    Step::RefPtr<ifc2x3::ExpressDataSet> dataset =
        static_cast<ifc2x3::ExpressDataSet*>(reader.getExpressDataSet());

    CollectSpaceBoundariesVisitor v;

    for(auto& space : dataset->getAllIfcSpace())
    {
        space.acceptVisitor(&v);
    }

    for(auto it = v._connectedSpaces.begin(); it != v._connectedSpaces.end(); ++it)
    {
        std::cout << "#"
                  << (*it).first
                  << "("
                  << dataset->get((*it).first)->getType().getName()
                  << ") : ";

        for(auto space : (*it).second)
        {
            std::cout << "#" << space->getKey() << ", ";
        }

        std::cout << std::endl;

    }

    return 0;
}