#include <ifc2x3/all.h>
#include <ifc2x3/SPFReader.h>

#include "SimpleVisitor.h"

#include "../../tests.h"

#include <sstream>
#include <fstream>

#define PRINT_TEST_MESSAGE() \
    std::cout << "    Message = " << visitor.getMessage() << std::endl; \
    TEST_ASSERT(visitor.getMessage() == "Implemented");

int main(int n, char** p)
{
    ifc2x3::ExpressDataSet* dataSet = new ifc2x3::ExpressDataSet;

    TEST_ASSERT(dataSet != nullptr);

    SimpleVisitor visitor;

    Step::RefPtr<ifc2x3::IfcWallStandardCase> wall =
        dataSet->createIfcWallStandardCase();
    wall->acceptVisitor(&visitor);

    PRINT_TEST_MESSAGE()
    visitor.resetMessage();

    Step::RefPtr<ifc2x3::IfcSlab> slab =
        dataSet->createIfcSlab();
    slab->acceptVisitor(&visitor);

    PRINT_TEST_MESSAGE()
    visitor.resetMessage();

    std::cout << std::endl << "Failure : " << failure_results << " Success : " <<
              success_results << std::endl;

    return failure_results;
}
