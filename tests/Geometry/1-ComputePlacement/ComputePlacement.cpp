#include <ifc2x3/all.h>
#include <ifc2x3/SPFReader.h>

#include "ComputePlacementVisitor.h"

#include "../../tests.h"

#include <sstream>
#include <fstream>

#define DISTANCE_TOLERANCE 0.001

bool equals(const Vec3& lhs, const Vec3& rhs)
{
    return (lhs - rhs).Length() < DISTANCE_TOLERANCE;
}

std::ostream& operator<<(std::ostream& os, const Vec3& v)
{
    os << "[ " << v.x() << ", "
       << v.y() << ", "
       << v.z() << " ]";
    return os;
}

int main(int n, char** p)
{
    ifc2x3::SPFReader reader;

    if(n != 2)
    {
        ++failure_results;
        std::cout << "Missing input file " << std::endl;
        return failure_results;
    }

    std::ifstream input(p[1]);
    bool result = reader.read(input);

    TEST_ASSERT(result);

    ifc2x3::ExpressDataSet* dataSet = static_cast<ifc2x3::ExpressDataSet*>
                                      (reader.getExpressDataSet());

    TEST_ASSERT(dataSet != nullptr);

    dataSet->instantiateAll();
    ComputePlacementVisitor visitor;

    // First wall
    Step::RefPtr<ifc2x3::IfcWall> wall1 = dataSet->getIfcWall(37);
    wall1->acceptVisitor(&visitor);

    Vec3 wall1Origin = visitor.getOrigin();
    std::cout << "wall1Origin = " << wall1Origin << std::endl;
    TEST_ASSERT(equals(wall1Origin, Vec3(10., 20., 30.)));

    std::cout << std::endl << "Failure : " << failure_results << " Success : " <<
              success_results << std::endl;

    return failure_results;
}
