#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/SPFReader.h>

#include "../../tests.h"

#include <sstream>
#include <fstream>


/// tests for ticket5

/**
 Referencing an undeclared or undefined entity make the reader hang abruptly.
*/

int main (int n, char **p)
{
    ifc2x3::SPFReader reader;

    if (n==2)
    {
        std::ifstream input(p[1]);
        reader.read(input);

        ifc2x3::ExpressDataSet *eds = static_cast<ifc2x3::ExpressDataSet *>(reader.getExpressDataSet());

        // check for baseSPFObject that would have remained not initialized

//        Step::MapOfEntities entities = eds->getAll();


//
//
//        //Step::RefLinkedList< ifc2x3::IfcFooting > allIfcFooting = eds->getAllIfcFooting();
//        ifc2x3::IfcFooting &footing = *(eds->getAllIfcFooting().begin());
//
//
//
//        footing.getObjectPlacement();
//        //allIfcFooting

        eds->instantiateAll();

        Step::MapOfEntities::const_iterator end = eds->getAll().end();
        Step::MapOfEntities::const_iterator it  = eds->getAll().begin();
        while (it!=end)
        {
            if ((*it).second->isOfType(Step::BaseSPFObject::getClassType()))
            {
                std::cout << "OOOPS #" << (*it).first << "  is still a BaseSPFObject" << std::endl;
            }
            ++it;
        }
    }
    else
    {
        std::cout << "Usage : " << p[0] << " test_file.ifc" << std::endl;
        ++failure_results;
    }


    std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
