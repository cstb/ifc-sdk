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

class PrintObjectVisitor : public ifc2x3::InheritVisitor
{
public:
    PrintObjectVisitor(std::string initialIndent)
    {
        indent = initialIndent;
    }

    bool visitIfcObjectDefinition(ifc2x3::IfcObjectDefinition* value) override
    {
        CountPropertySetVisitor v;
        value->acceptVisitor(&v);

        std::cout << indent
                  << value->getType().getName()
                  << " : "
                  << value->getName()
                  << " (" << v.nbPropertySet << ")"
                  << std::endl;

        return true;
    }

protected:

    bool visitIfcOpeningElement(ifc2x3::IfcOpeningElement* value) override
    {
        InheritVisitor::visitIfcElement(value);

        if(value->testHasFillings())
        {
            auto old = indent;
            indent += "  ";

            for(auto relation : value->getHasFillings())
            {
                relation->acceptVisitor(this);
            }

            indent = old;
        }

        return true;
    }


    bool visitIfcElement(ifc2x3::IfcElement* value) override
    {
        InheritVisitor::visitIfcElement(value);

        if(value->testHasOpenings())
        {
            auto old = indent;
            indent += "  ";

            for(auto relation : value->getHasOpenings())
            {
                relation->acceptVisitor(this);
            }

            indent = old;
        }

        return true;
    }
    bool visitIfcRelVoidsElement(ifc2x3::IfcRelVoidsElement* value) override
    {
        value->getRelatedOpeningElement()->acceptVisitor(this);
        return true;
    }
    bool visitIfcRelFillsElement(ifc2x3::IfcRelFillsElement* value) override
    {
        value->getRelatedBuildingElement()->acceptVisitor(this);
        return true;
    }
    std::string indent;
};

class PrintSpatialStructureVisitor : public ifc2x3::InheritVisitor
{
    /*
        IfcProject : 'project_name'
            IfcSite : 'site_name'
                IfcBuilding : 'building_name'
                    IfcBuildingStorey : 'storey_name'
                        IfcSpace : 'space_name'
                        ...
    */
public:
    bool visitIfcProject(ifc2x3::IfcProject* value) override
    {
        // visit children
        for(auto relation : value->getIsDecomposedBy())
        {
            relation->acceptVisitor(this);
        }

        return true;
    }
protected:

    bool visitIfcRelAggregates(ifc2x3::IfcRelAggregates* value) override
    {
        for(auto relatedObject : value->getRelatedObjects())
        {
            relatedObject->acceptVisitor(this);
        }

        return true;
    }
    bool visitIfcRelContainedInSpatialStructure(
        ifc2x3::IfcRelContainedInSpatialStructure* value)
    {
        for(auto relatedElement : value->getRelatedElements())
        {
            relatedElement->acceptVisitor(this);
        }

        return true;
    }

    bool visitIfcSpatialStructureElement(ifc2x3::IfcSpatialStructureElement* value)
    override
    {

        std::cout << indent << value->getType().getName() << " : " << value->getName()
                  << std::endl;

        std::string old_indent = indent;
        indent += "  ";

        // visit children
        for(auto relation : value->getIsDecomposedBy())
        {
            relation->acceptVisitor(this);
        }

        for(auto relation : value->getContainsElements())
        {
            relation->acceptVisitor(this);
        }

        indent = old_indent;
        return false;
    }

    bool visitIfcObjectDefinition(ifc2x3::IfcObjectDefinition* value) override
    {
        PrintObjectVisitor v(indent);

        value->acceptVisitor(&v);

        return true;
    }


    bool visitIfcOpeningElement(ifc2x3::IfcOpeningElement* /*value*/) override
    {
        // We don't want to visit Opening's in this visitor we have delegated 
        // to the PrintObjectVisitor
        return false;
    }

    bool visitIfcElement(ifc2x3::IfcElement* value) override
    {
        if(value->testFillsVoids() && value->getFillsVoids().empty() == false)
        {
            // We don't want to visit objects that fill voids they will be handled
            // byt the PrintObjectVisitor
            return false;
        }
        else
        {
            return InheritVisitor::visitIfcElement(value);
        }
    }
    std::string indent;
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

    for(auto& project : dataset->getAllIfcProject())
    {
        PrintSpatialStructureVisitor v;
        project.acceptVisitor(&v);
    }

    return 0;
}