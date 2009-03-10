#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>
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

	Step::RefPtr<ifc2x3::IfcCsgPrimitive3D> CsgPrimitive3DBlock = eds->createIfcBlock();
	TEST_VALIDITY(CsgPrimitive3DBlock);
	TEST_ASSERT(CsgPrimitive3DBlock->getDim()==3);

	Step::RefPtr<ifc2x3::IfcCsgPrimitive3D> CsgPrimitive3DRectangularPyramid = eds->createIfcRectangularPyramid();
	TEST_VALIDITY(CsgPrimitive3DRectangularPyramid);
	TEST_ASSERT(CsgPrimitive3DRectangularPyramid->getDim()==3);

	Step::RefPtr<ifc2x3::IfcCsgPrimitive3D> CsgPrimitive3DRightCircularCone = eds->createIfcRightCircularCone();
	TEST_VALIDITY(CsgPrimitive3DRightCircularCone);
	TEST_ASSERT(CsgPrimitive3DRightCircularCone->getDim()==3);

	Step::RefPtr<ifc2x3::IfcCsgPrimitive3D> CsgPrimitive3DRightCircularCylinder = eds->createIfcRightCircularCylinder();
	TEST_VALIDITY(CsgPrimitive3DRightCircularCylinder);
	TEST_ASSERT(CsgPrimitive3DRightCircularCylinder->getDim()==3);

	Step::RefPtr<ifc2x3::IfcCsgPrimitive3D> CsgPrimitive3DSphere = eds->createIfcSphere();
	TEST_VALIDITY(CsgPrimitive3DSphere);
	TEST_ASSERT(CsgPrimitive3DSphere->getDim()==3);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
