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

        //eds->get(47228);
        eds->instantiateAll();
        std::cout << "eds->instantiateAll();" << std::endl;

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

        unsigned lastSize=0;
#define DSIZEOF(T)  std::cout << #T << " : " << sizeof(T) << "( +" << sizeof(T) - lastSize << " ) " << std::endl; lastSize = sizeof(T)
        DSIZEOF(Step::Referenced);
        DSIZEOF(Step::ClientDataHandler);
        DSIZEOF(Step::BaseObject);
        DSIZEOF(Step::BaseEntity);
        DSIZEOF(ifc2x3::IfcRepresentationItem);
        DSIZEOF(ifc2x3::IfcGeometricRepresentationItem);
        DSIZEOF(ifc2x3::IfcPoint);
        DSIZEOF(ifc2x3::IfcCartesianPoint);

        std::cout << std::endl;
        lastSize=0;
        DSIZEOF(ifc2x3::Inverse_Set_IfcPresentationLayerAssignment_0_n);

        std::cout << std::endl;
        lastSize=0;
        DSIZEOF(ifc2x3::Inverse_Set_IfcStyledItem_0_1);

        std::cout << std::endl;
        lastSize=0;
        DSIZEOF(std::vector<double>);
        DSIZEOF(ifc2x3::List_IfcLengthMeasure_1_3);


        ++failure_results;
    }


    std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
