#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcBooleanResult.h>
#include <ifc2x3/IfcBooleanOperand.h>
#include "../../tests.h"

#include <sstream>
#include <string>
// uncomment the following line to test compilation types checks
// #define TEST_COMPILATION_ERRORS
#define LOG_DEBUG(message)

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

	Step::RefPtr<ifc2x3::IfcBooleanResult> BoolRes = eds->createIfcBooleanResult();

	LOG_DEBUG("TEST IFCSOLIDMODEL");
	Step::RefPtr<ifc2x3::IfcCsgSolid> BoolRestmp1 = eds->createIfcCsgSolid();
	Step::RefPtr<ifc2x3::IfcSweptDiskSolid> BoolRestmp2 = eds->createIfcSweptDiskSolid();

	Step::RefPtr<ifc2x3::IfcBooleanOperand> FirstOperand = new ifc2x3::IfcBooleanOperand();
	Step::RefPtr<ifc2x3::IfcBooleanOperand> SecondOperand = new ifc2x3::IfcBooleanOperand();

	FirstOperand->setIfcSolidModel(BoolRestmp1.get());
	SecondOperand->setIfcSolidModel(BoolRestmp2.get());

	BoolRes->setFirstOperand(FirstOperand);
	BoolRes->setSecondOperand(SecondOperand);

	ifc2x3::IfcDimensionCount Dim = BoolRes->getDim();
	TEST_ASSERT(Dim==BoolRestmp1->getDim());
	TEST_ASSERT(Dim==3);

	LOG_DEBUG("TEST IFCHALFSPACESOLID");
	Step::RefPtr<ifc2x3::IfcHalfSpaceSolid> BoolRestmp3 = eds->createIfcHalfSpaceSolid();
	Step::RefPtr<ifc2x3::IfcHalfSpaceSolid> BoolRestmp4 = eds->createIfcHalfSpaceSolid();

	FirstOperand->setIfcHalfSpaceSolid(BoolRestmp3.get());
	SecondOperand->setIfcHalfSpaceSolid(BoolRestmp4.get());

	BoolRes->setFirstOperand(FirstOperand);
	BoolRes->setSecondOperand(SecondOperand);

	Dim = BoolRes->getDim();
	TEST_ASSERT(Dim==BoolRestmp3->getDim());
	TEST_ASSERT(Dim==3);

	LOG_DEBUG("TEST IFCCSGPRIMITIVE3D");
	Step::RefPtr<ifc2x3::IfcBlock> BoolRestmp5 = eds->createIfcBlock();
	Step::RefPtr<ifc2x3::IfcSphere> BoolRestmp6 = eds->createIfcSphere();

	FirstOperand->setIfcCsgPrimitive3D(BoolRestmp5.get());
	SecondOperand->setIfcCsgPrimitive3D(BoolRestmp6.get());

	BoolRes->setFirstOperand(FirstOperand);
	BoolRes->setSecondOperand(SecondOperand);

	Dim = BoolRes->getDim();
	TEST_ASSERT(Dim==BoolRestmp5->getDim());
	TEST_ASSERT(Dim==3);

	LOG_DEBUG("TEST IFCBOOLEANRESULT");
	Step::RefPtr<ifc2x3::IfcBooleanResult> BoolRestmp7 = eds->createIfcBooleanResult();
	Step::RefPtr<ifc2x3::IfcBooleanResult> BoolRestmp8 = eds->createIfcBooleanResult();

	Step::RefPtr<ifc2x3::IfcHalfSpaceSolid> BoolRestmp7_1 = eds->createIfcHalfSpaceSolid();
	Step::RefPtr<ifc2x3::IfcHalfSpaceSolid> BoolRestmp7_2 = eds->createIfcHalfSpaceSolid();

	Step::RefPtr<ifc2x3::IfcBlock> BoolRestmp8_1 = eds->createIfcBlock();
	Step::RefPtr<ifc2x3::IfcSphere> BoolRestmp8_2 = eds->createIfcSphere();

	Step::RefPtr<ifc2x3::IfcBooleanOperand> FirstOperand_7 = new ifc2x3::IfcBooleanOperand();
	Step::RefPtr<ifc2x3::IfcBooleanOperand> SecondOperand_7 = new ifc2x3::IfcBooleanOperand();

	FirstOperand_7->setIfcHalfSpaceSolid(BoolRestmp7_1.get());
	SecondOperand_7->setIfcHalfSpaceSolid(BoolRestmp7_2.get());

	Step::RefPtr<ifc2x3::IfcBooleanOperand> FirstOperand_8 = new ifc2x3::IfcBooleanOperand();
	Step::RefPtr<ifc2x3::IfcBooleanOperand> SecondOperand_8 = new ifc2x3::IfcBooleanOperand();

	FirstOperand_8->setIfcCsgPrimitive3D(BoolRestmp8_1.get());
	SecondOperand_8->setIfcCsgPrimitive3D(BoolRestmp8_2.get());

	BoolRestmp7->setFirstOperand(FirstOperand_7);
	BoolRestmp7->setSecondOperand(SecondOperand_7);

	BoolRestmp8->setFirstOperand(FirstOperand_8);
	BoolRestmp8->setSecondOperand(SecondOperand_8);

	FirstOperand->setIfcBooleanResult(BoolRestmp7.get());
	SecondOperand->setIfcBooleanResult(BoolRestmp8.get());

	BoolRes->setFirstOperand(FirstOperand);
	BoolRes->setSecondOperand(SecondOperand);

	Dim = BoolRes->getDim();

	TEST_ASSERT(Dim==BoolRestmp7->getDim());
	TEST_ASSERT(Dim==3);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
