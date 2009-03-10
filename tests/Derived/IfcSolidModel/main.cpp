#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcSolidModel.h>
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

	Step::RefPtr<ifc2x3::IfcSolidModel> SolidModelCsgSolid = eds->createIfcCsgSolid();
	TEST_VALIDITY(SolidModelCsgSolid);
	TEST_ASSERT(SolidModelCsgSolid->getDim()==3);

	Step::RefPtr<ifc2x3::IfcSolidModel> SolidModelManifoldSolidBrepFacetedBrepWithVoids = eds->createIfcFacetedBrepWithVoids();
	TEST_VALIDITY(SolidModelManifoldSolidBrepFacetedBrepWithVoids);
	TEST_ASSERT(SolidModelManifoldSolidBrepFacetedBrepWithVoids->getDim()==3);
	Step::RefPtr<ifc2x3::IfcSolidModel> SolidModelManifoldSolidBrepFacetedBrep = eds->createIfcFacetedBrep();
	TEST_VALIDITY(SolidModelManifoldSolidBrepFacetedBrep);
	TEST_ASSERT(SolidModelManifoldSolidBrepFacetedBrep->getDim()==3);

	Step::RefPtr<ifc2x3::IfcSolidModel> SolidModelSweptAreaSolidExtrudedAreaSolid = eds->createIfcExtrudedAreaSolid();
	TEST_VALIDITY(SolidModelSweptAreaSolidExtrudedAreaSolid);
	TEST_ASSERT(SolidModelSweptAreaSolidExtrudedAreaSolid->getDim()==3);
	Step::RefPtr<ifc2x3::IfcSolidModel> SolidModelSweptAreaSolidRevolvedAreaSolid = eds->createIfcRevolvedAreaSolid();
	TEST_VALIDITY(SolidModelSweptAreaSolidRevolvedAreaSolid);
	TEST_ASSERT(SolidModelSweptAreaSolidRevolvedAreaSolid->getDim()==3);
	Step::RefPtr<ifc2x3::IfcSolidModel> SolidModelSweptAreaSolidSurfaceCurveSweptAreaSolid = eds->createIfcSurfaceCurveSweptAreaSolid();
	TEST_VALIDITY(SolidModelSweptAreaSolidSurfaceCurveSweptAreaSolid);
	TEST_ASSERT(SolidModelSweptAreaSolidSurfaceCurveSweptAreaSolid->getDim()==3);

	Step::RefPtr<ifc2x3::IfcSolidModel> SolidModelSweptDiskSolid = eds->createIfcSweptDiskSolid();
	TEST_VALIDITY(SolidModelSweptDiskSolid);
	TEST_ASSERT(SolidModelSweptDiskSolid->getDim()==3);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
