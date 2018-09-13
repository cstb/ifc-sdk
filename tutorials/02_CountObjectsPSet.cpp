#include <ifc2x3/all.h>
#include <ifc2x3/SPFReader.h>
#include <ifc2x3/InheritVisitor.h>

class CountPropertySetVisitor : public ifc2x3::InheritVisitor
{
public:
    bool visitIfcObject(ifc2x3::IfcObject* value) override
    {
        if(value->testIsDefinedBy())
        {
            for(auto relation : value->getIsDefinedBy())
            {
                relation->acceptVisitor(this);
            }
        }

        return true;
    }

    bool visitIfcRelDefinesByProperties(ifc2x3::IfcRelDefinesByProperties*) override
    {
        ++nbPropertySet;
        return true;
    }

    unsigned nbPropertySet{ 0 };
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
    { 
       std::cout << "OK!!" << std::endl;
    }
    else
    {
        std::cerr << "Ho no, there are a PROBLEM!!" << std::endl;
        return 1;
    }

    Step::RefPtr<ifc2x3::ExpressDataSet> dataset =
        static_cast<ifc2x3::ExpressDataSet*>(reader.getExpressDataSet());

    for(auto& iod : dataset->getAllIfcObjectDefinition())
    {
        CountPropertySetVisitor v;
        iod.acceptVisitor(&v);
        std::cout << iod.getName().toUTF8() << ", nb pset = " << v.nbPropertySet << std::endl;
    }
    
    return 0;
}
