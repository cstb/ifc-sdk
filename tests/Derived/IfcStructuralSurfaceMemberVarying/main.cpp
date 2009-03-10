#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcStructuralSurfaceMemberVarying.h>
#include <ifc2x3/IfcShapeAspect.h>
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

	Step::RefPtr< ifc2x3::IfcStructuralSurfaceMemberVarying > StructuralSurfaceMemberVarying = eds->createIfcStructuralSurfaceMemberVarying();
	TEST_ASSERT(StructuralSurfaceMemberVarying->getVaryingThickness().empty());


	Step::RefPtr< ifc2x3::IfcShapeAspect > ShapeAspect = eds->createIfcShapeAspect();
	TEST_VALIDITY(ShapeAspect);
	Step::RefPtr< ifc2x3::IfcShapeModel > ShapeModelRepresentation1 = eds->createIfcShapeRepresentation();
	Step::RefPtr< ifc2x3::IfcShapeModel > ShapeModelRepresentation2 = eds->createIfcShapeRepresentation();
	ShapeAspect->getShapeRepresentations().push_back(ShapeModelRepresentation1);
	ShapeAspect->getShapeRepresentations().push_back(ShapeModelRepresentation2);
	ShapeAspect->setName("ShapeAspect");
	ShapeAspect->setDescription("IfcShapeAspect");
	ShapeAspect->setProductDefinitional(Step::LTrue);
	Step::RefPtr< ifc2x3::IfcProductDefinitionShape > ProductDefinitionShape = eds->createIfcProductDefinitionShape();
	ShapeAspect->setPartOfProductDefinitionShape(ProductDefinitionShape);
	StructuralSurfaceMemberVarying->setVaryingThicknessLocation(ShapeAspect);

	StructuralSurfaceMemberVarying->getSubsequentThickness().push_back(1);
	StructuralSurfaceMemberVarying->getSubsequentThickness().push_back(2);
	StructuralSurfaceMemberVarying->getSubsequentThickness().push_back(3);

	ifc2x3::List_IfcPositiveLengthMeasure_3_n ListIfcStructuralLoad = StructuralSurfaceMemberVarying->getVaryingThickness();

	TEST_ASSERT(ListIfcStructuralLoad[0]==1);
	TEST_ASSERT(ListIfcStructuralLoad[1]==2);
	TEST_ASSERT(ListIfcStructuralLoad[2]==3);

	StructuralSurfaceMemberVarying->setThickness(0);

	ListIfcStructuralLoad = StructuralSurfaceMemberVarying->getVaryingThickness();
	TEST_ASSERT(ListIfcStructuralLoad[0]==0);
	TEST_ASSERT(ListIfcStructuralLoad[1]==1);
	TEST_ASSERT(ListIfcStructuralLoad[2]==2);
	TEST_ASSERT(ListIfcStructuralLoad[3]==3);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
