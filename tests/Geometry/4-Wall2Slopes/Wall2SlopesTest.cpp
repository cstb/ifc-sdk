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

void writePolygon(const std::list<Vec3>& points)
{
    std::cout << "   polygon(";

    std::list<Vec3>::const_iterator itList = points.begin();

    for(; itList != points.end(); ++itList)
    {
        std::cout << itList->x() << "|" << itList->y();

        if(std::next(itList) != points.end())
        {
            std::cout << " ";
        }
    }

    std::cout << ")" << std::endl;
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

    // Base footprint
    CreateConstructionPointVisitor visitor1;
    Step::RefPtr<ifc2x3::IfcExtrudedAreaSolid> extrudedSolid =
        dataSet->getIfcExtrudedAreaSolid(18);
    std::cout << "    => Base footprint" << std::endl;
    extrudedSolid->acceptVisitor(&visitor1);

    std::list<Vec3> points1 = visitor1.getPoints();

    for(const auto& point : points1)
    {
        PRINT_VALUE(point)
    }

    TEST_ASSERT(points1.size() == 8);

    // First boolean operation footprint
    CreateConstructionPointVisitor visitor2;
    Step::RefPtr<ifc2x3::IfcPolygonalBoundedHalfSpace> polygonHalfSpace1 =
        dataSet->getIfcPolygonalBoundedHalfSpace(28);
    std::cout << "    => First boolean operation" << std::endl;
    polygonHalfSpace1->acceptVisitor(&visitor2);

    std::list<Vec3> points2 = visitor2.getPoints();

    for(const auto& point : points2)
    {
        PRINT_VALUE(point)
    }

    TEST_ASSERT(points2.size() == 4);

    // Second boolean operation footprint
    CreateConstructionPointVisitor visitor3;
    Step::RefPtr<ifc2x3::IfcPolygonalBoundedHalfSpace> polygonHalfSpace2 =
        dataSet->getIfcPolygonalBoundedHalfSpace(43);
    std::cout << "    => Second boolean operation" << std::endl;
    polygonHalfSpace2->acceptVisitor(&visitor3);

    std::list<Vec3> points3 = visitor3.getPoints();

    for(const auto& point : points3)
    {
        PRINT_VALUE(point)
    }

    TEST_ASSERT(points3.size() == 4);

    writePolygon(points1);
    writePolygon(points2);
    writePolygon(points3);

    std::cout << std::endl << "Failure : " << failure_results << " Success : " <<
              success_results << std::endl;

    return failure_results;
}
