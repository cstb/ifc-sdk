#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcWallStandardCase.h>
#include "../../tests.h"

#include <sstream>
#include <string>
// uncomment the following line to test compilation types checks
// #define TEST_COMPILATION_ERRORS

int main(int n, char **p)
{
    Step::RefPtr<ifc2x3::ExpressDataSet> eds;
    try
    {
        std::cout << "Creating ExpressDataSet" << std::endl;
        eds = new ifc2x3::ExpressDataSet;
    }
    catch (const std::exception& e)
    {
        TEST_FAILURE((std::string("Exception : ") + e.what()).c_str());
    }

    TEST_VALIDITY(eds);

    // Create a wall
    Step::RefPtr<ifc2x3::IfcWallStandardCase> theWall = eds->createIfcWallStandardCase();

    // Create a product representation
    Step::RefPtr<ifc2x3::IfcProductRepresentation> representation1 = eds->createIfcProductRepresentation();
    // Set this product representation to the wall
    theWall->setRepresentation(representation1.get());
    // Get the product representation from the wall
    Step::RefPtr<ifc2x3::IfcProductRepresentation> representation1_get = theWall->getRepresentation();
    // Test if it is valid
    TEST_VALIDITY(representation1_get);

    // Now same test with the a product definition shape
    Step::RefPtr<ifc2x3::IfcProductDefinitionShape> representation2 = eds->createIfcProductDefinitionShape();
    theWall->setRepresentation(representation2.get());
    Step::RefPtr<ifc2x3::IfcProductDefinitionShape> representation2_get = (ifc2x3::IfcProductDefinitionShape*) theWall->getRepresentation();
    TEST_VALIDITY(representation2_get);
    if (representation2_get.valid())
    {
        // test the inverse
        TEST_ASSERT(*representation2_get->getShapeOfProduct().begin() == theWall.get());
    }

    // One more time to test the inverse
    Step::RefPtr<ifc2x3::IfcProductDefinitionShape> representation3 = eds->createIfcProductDefinitionShape();
    theWall->setRepresentation(representation3.get());
    Step::RefPtr<ifc2x3::IfcProductDefinitionShape> representation3_get = (ifc2x3::IfcProductDefinitionShape*) theWall->getRepresentation();
    TEST_VALIDITY(representation3_get);
    if (representation2_get.valid())
    {
        // test the inverse
        TEST_ASSERT(representation2_get->getShapeOfProduct().empty());
    }
    if (representation3_get.valid())
    {
        // test the inverse
        TEST_ASSERT(*representation3_get->getShapeOfProduct().begin() == theWall.get());
    }

    // And a last one
    theWall->setRepresentation(representation1.get());
    // Get the product representation from the wall
    representation1_get = theWall->getRepresentation();
    // Test if it is valid
    TEST_VALIDITY(representation1_get);
    if (representation2_get.valid())
    {
        // test the inverse
        TEST_ASSERT(representation2_get->getShapeOfProduct().empty());
    }
    if (representation3_get.valid())
    {
        // test the inverse
        TEST_ASSERT(representation3_get->getShapeOfProduct().empty());
    }

    std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
