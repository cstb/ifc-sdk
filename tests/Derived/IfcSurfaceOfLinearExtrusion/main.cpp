#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcSurfaceOfLinearExtrusion.h>
#include "../../tests.h"

#include <sstream>
#include <string>
// uncomment the following line to test compilation types checks
// #define TEST_COMPILATION_ERRORS

int main(int n, char **p)
{
	Step::RefPtr<ifc2x3::ExpressDataSet> eds ;
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

	Step::RefPtr< ifc2x3::IfcSurfaceOfLinearExtrusion > SurfaceOfLinearExtrusion = eds->createIfcSurfaceOfLinearExtrusion();
	TEST_VALIDITY(SurfaceOfLinearExtrusion);

	Step::RefPtr< ifc2x3::IfcVector > VectorResult = SurfaceOfLinearExtrusion->getExtrusionAxis();
	TEST_ASSERT(VectorResult.valid())
	Step::RefPtr< ifc2x3::IfcDirection > DirectionResult = VectorResult->getOrientation();
	TEST_ASSERT(DirectionResult.valid()==false);
	TEST_ASSERT(Step::isUnset(VectorResult->getMagnitude()));

	Step::RefPtr< ifc2x3::IfcDirection > Direction = eds->createIfcDirection();
	Direction->getDirectionRatios().push_back(1);
	Direction->getDirectionRatios().push_back(1);
	Direction->getDirectionRatios().push_back(1);
	SurfaceOfLinearExtrusion->setExtrudedDirection(Direction);

	SurfaceOfLinearExtrusion->setDepth(1);

	VectorResult = SurfaceOfLinearExtrusion->getExtrusionAxis();
	TEST_ASSERT(VectorResult->getOrientation()->getDirectionRatios()[0]==1);
	TEST_ASSERT(VectorResult->getOrientation()->getDirectionRatios()[1]==1);
	TEST_ASSERT(VectorResult->getOrientation()->getDirectionRatios()[2]==1);

	TEST_ASSERT(VectorResult->getMagnitude()==1);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
