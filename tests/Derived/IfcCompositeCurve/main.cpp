#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcCompositeCurve.h>
#include <ifc2x3/IfcCompositeCurveSegment.h>
#include "../../tests.h"

#include <sstream>
#include <string>
//#include <math.h>
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

	Step::RefPtr<ifc2x3::IfcCompositeCurve> CompositeCurve = eds->createIfcCompositeCurve();
	TEST_VALIDITY(CompositeCurve);

	TEST_ASSERT(CompositeCurve->getNSegments()==0);
	TEST_ASSERT(CompositeCurve->getClosedCurve()==Step::LUnset);

	Step::RefPtr<ifc2x3::IfcCompositeCurveSegment> CompositeCurveSegment1 = eds->createIfcCompositeCurveSegment();
	CompositeCurve->getSegments().push_back(CompositeCurveSegment1);
	Step::RefPtr<ifc2x3::IfcCompositeCurveSegment> CompositeCurveSegment2 = eds->createIfcCompositeCurveSegment();
	CompositeCurve->getSegments().push_back(CompositeCurveSegment2);
	Step::RefPtr<ifc2x3::IfcCompositeCurveSegment> CompositeCurveSegment3 = eds->createIfcCompositeCurveSegment();
	CompositeCurve->getSegments().push_back(CompositeCurveSegment3);
	Step::RefPtr<ifc2x3::IfcCompositeCurveSegment> CompositeCurveSegment4 = eds->createIfcCompositeCurveSegment();
	
	TEST_ASSERT(CompositeCurve->getNSegments()==3);
	ifc2x3::IfcTransitionCode Transition1 = ifc2x3::IfcTransitionCode_CONTINUOUS;
	CompositeCurveSegment4->setTransition(Transition1);
	CompositeCurve->getSegments().push_back(CompositeCurveSegment4);

	TEST_ASSERT(CompositeCurve->getNSegments()==4);
	TEST_ASSERT(CompositeCurve->getClosedCurve()==Step::LTrue);

	Step::RefPtr<ifc2x3::IfcCompositeCurveSegment> CompositeCurveSegment5 = eds->createIfcCompositeCurveSegment();
	CompositeCurve->getSegments().push_back(CompositeCurveSegment5);

	ifc2x3::IfcTransitionCode Transition2 = ifc2x3::IfcTransitionCode_DISCONTINUOUS;
	CompositeCurveSegment5->setTransition(Transition2);

	TEST_ASSERT(CompositeCurve->getNSegments()==5);
	TEST_ASSERT(CompositeCurve->getClosedCurve()==Step::LFalse);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
