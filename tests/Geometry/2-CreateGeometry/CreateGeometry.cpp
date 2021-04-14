#include <ifc2x3/all.h>
#include <ifc2x3/SPFReader.h>

#include "CreateConstructionPointVisitor.h"
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

#define PRINT_VALUE(x) \
    std::cout << "    " << #x << " = " << x << std::endl;

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
    ComputePlacementVisitor placementVisitor;

    // First wall
    std::cout << "    => Wall 1" << std::endl;
    CreateConstructionPointVisitor visitor1;
    Step::RefPtr<ifc2x3::IfcWall> wall1 = dataSet->getIfcWall(37);
    wall1->acceptVisitor(&visitor1);

    std::list<Vec3> points1 = visitor1.getPoints();

    for(const auto& point : points1)
    {
        PRINT_VALUE(point)
    }

    std::cout << "    => Wall 1 transformed" << std::endl;
    wall1->acceptVisitor(&placementVisitor);
    Matrix4 transform1 = placementVisitor.getTransformation();

    for(const auto& point : points1)
    {
        PRINT_VALUE(transform1 * point)
    }

    TEST_ASSERT(points1.size() == 8);

    // second wall
    std::cout << "    => Wall 2" << std::endl;
    CreateConstructionPointVisitor visitor2;
    Step::RefPtr<ifc2x3::IfcWall> wall2 = dataSet->getIfcWall(65);
    wall2->acceptVisitor(&visitor2);

    std::list<Vec3> points2 = visitor2.getPoints();

    for(const auto& point : points2)
    {
        PRINT_VALUE(point)
    }

    std::cout << "    => Wall 2 transformed" << std::endl;
    wall2->acceptVisitor(&placementVisitor);
    Matrix4 transform2 = placementVisitor.getTransformation();

    for(const auto& point : points2)
    {
        PRINT_VALUE(transform2 * point)
    }

    TEST_ASSERT(points2.size() == 8);

    std::cout << std::endl << "Failure : " << failure_results << " Success : " <<
              success_results << std::endl;

    return failure_results;
}
