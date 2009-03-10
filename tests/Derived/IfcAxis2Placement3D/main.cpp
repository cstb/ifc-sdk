#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
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


	Step::RefPtr<ifc2x3::IfcAxis2Placement3D> placement1 = eds->createIfcAxis2Placement3D();

	ifc2x3::List_IfcDirection_3_3 P = placement1->getP();

	TEST_ASSERT(P.size()==3);

	TEST_VALIDITY(P[0]);
	TEST_VALIDITY(P[1]);
	TEST_VALIDITY(P[2]);

	if (P[0].valid() && P[1].valid() && P[2].valid())
	{
		// test default return value (1,0,0)
		TEST_ASSERT(P[0]->getDirectionRatios()[0]==1.0);
		TEST_ASSERT(P[0]->getDirectionRatios()[1]==0.0);
		TEST_ASSERT(P[0]->getDirectionRatios()[2]==0.0);
		// test default return value (0,1,0)
		TEST_ASSERT(P[1]->getDirectionRatios()[0]==0.0);
		TEST_ASSERT(P[1]->getDirectionRatios()[1]==1.0);
		TEST_ASSERT(P[1]->getDirectionRatios()[2]==0.0);
		// test default return value (0,0,1)
		TEST_ASSERT(P[2]->getDirectionRatios()[0]==0.0);
		TEST_ASSERT(P[2]->getDirectionRatios()[1]==0.0);
		TEST_ASSERT(P[2]->getDirectionRatios()[2]==1.0);
	}

	Step::RefPtr<ifc2x3::IfcDirection> axis1 = eds->createIfcDirection();
	axis1->getDirectionRatios().push_back(2);
	axis1->getDirectionRatios().push_back(1);
//		axis->getDirectionRatios().push_back(2);

	Step::RefPtr<ifc2x3::IfcCartesianPoint> location1 = eds->createIfcCartesianPoint();
	location1->getCoordinates().push_back(2);
	location1->getCoordinates().push_back(3);
	location1->getCoordinates().push_back(4);

	Step::RefPtr<ifc2x3::IfcDirection> RefDirection1 = eds->createIfcDirection();
	RefDirection1->getDirectionRatios().push_back(2);
	RefDirection1->getDirectionRatios().push_back(3);
//		RefDirection->getDirectionRatios().push_back(7);


	placement1->setAxis(axis1);
	placement1->setLocation(location1);
	placement1->setRefDirection(RefDirection1);

	ifc2x3::List_IfcDirection_3_3 P1 = placement1->getP();

	TEST_ASSERT(P1.size()==3);

	TEST_VALIDITY(P1[0]);
	TEST_VALIDITY(P1[1]);
	TEST_VALIDITY(P1[2]);

	if (P1[0].valid() && P1[1].valid() && P1[2].valid())
	{
		// test return value
		TEST_ASSERT(P1[0]->getDirectionRatios()[0]==1.0);
		TEST_ASSERT(P1[0]->getDirectionRatios()[1]==0.0);
		TEST_ASSERT(P1[0]->getDirectionRatios()[2]==0.0);
		// test return value
		TEST_ASSERT(P1[1]->getDirectionRatios()[0]==0.0);
		TEST_ASSERT(P1[1]->getDirectionRatios()[1]==1.0);
		TEST_ASSERT(P1[1]->getDirectionRatios()[2]==0.0);
		// test return value
		TEST_ASSERT(P1[2]->getDirectionRatios()[0]==0.0);
		TEST_ASSERT(P1[2]->getDirectionRatios()[1]==0.0);
		TEST_ASSERT(P1[2]->getDirectionRatios()[2]==1.0);
	}

    // ----------------------------
    // testing axis(1,0,0) and refDirection(0,1,0) should get x(0,0,-1)


	Step::RefPtr<ifc2x3::IfcDirection> axis2 = eds->createIfcDirection();
	axis2->getDirectionRatios().push_back(1);
	axis2->getDirectionRatios().push_back(0);
	axis2->getDirectionRatios().push_back(0);


	Step::RefPtr<ifc2x3::IfcDirection> RefDirection2 = eds->createIfcDirection();
	RefDirection2->getDirectionRatios().push_back(1);
	RefDirection2->getDirectionRatios().push_back(1);
	RefDirection2->getDirectionRatios().push_back(0);

	Step::RefPtr<ifc2x3::IfcAxis2Placement3D> placement2 = eds->createIfcAxis2Placement3D();
	placement2->setAxis(axis2);
    placement2->setRefDirection(RefDirection2);

    std::cerr << " testing axis(1,0,0) and refDirection(1,1,0) should get ([0,1,0],[0,0,1], [1,0,0])" << std::endl;

	ifc2x3::List_IfcDirection_3_3 P2 = placement2->getP();

	TEST_ASSERT(P2.size()==3);

	TEST_VALIDITY(P2[0]);
	TEST_VALIDITY(P2[1]);
	TEST_VALIDITY(P2[2]);

	if (P2[0].valid() && P2[1].valid() && P2[2].valid())
	{
		// test return value
		LOG_DEBUG(" Resulting P[0] : [" << P2[0]->getDirectionRatios()[0] << ";"<<
		P2[0]->getDirectionRatios()[1] << ";"<<
		P2[0]->getDirectionRatios()[2] << "]");

		TEST_ASSERT(P2[0]->getDirectionRatios()[0]==0.0);
		TEST_ASSERT(P2[0]->getDirectionRatios()[1]==1.0);
		TEST_ASSERT(P2[0]->getDirectionRatios()[2]==0.0);
		// test return value
		LOG_DEBUG( " Resulting P[1] : [" << P2[1]->getDirectionRatios()[0] << ";"<<
		P2[1]->getDirectionRatios()[1] << ";"<<
		P2[1]->getDirectionRatios()[2] << "]");

		TEST_ASSERT(P2[1]->getDirectionRatios()[0]==0.0);
		TEST_ASSERT(P2[1]->getDirectionRatios()[1]==0.0);
		TEST_ASSERT(P2[1]->getDirectionRatios()[2]==1.0);
		// test return value
		LOG_DEBUG(" Resulting P[2] : [" << P2[2]->getDirectionRatios()[0] << ";"<<
		P2[2]->getDirectionRatios()[1] << ";"<<
		P2[2]->getDirectionRatios()[2] << "]");

		TEST_ASSERT(P2[2]->getDirectionRatios()[0]==1.0);
		TEST_ASSERT(P2[2]->getDirectionRatios()[1]==0.0);
		TEST_ASSERT(P2[2]->getDirectionRatios()[2]==0.0);
	}

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
