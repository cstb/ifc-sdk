#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcAxis2Placement2D.h>
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
		std::cout << "Creating ExpressDa20taSet" << std::endl;
		eds = new ifc2x3::ExpressDataSet;
	}
	catch (const std::exception& e)
	{
		TEST_FAILURE((std::string("Exception : ") + e.what()).c_str());
	}

	TEST_VALIDITY(eds);

	Step::RefPtr<ifc2x3::IfcAxis2Placement2D> placement = eds->createIfcAxis2Placement2D();

    // get P with an empty placement to check default values
	ifc2x3::List_IfcDirection_2_2 P = placement->getP();

    TEST_ASSERT(P.size()==2);

	TEST_VALIDITY(P[0]);
	TEST_VALIDITY(P[1]);

	if (P[0].valid() && P[1].valid())
	{
		// test default return value (1,0)
		TEST_ASSERT(P[0]->getDirectionRatios()[0]==1.0);
		TEST_ASSERT(P[0]->getDirectionRatios()[1]==0.0);
		// test default return value (0,1)
		TEST_ASSERT(P[1]->getDirectionRatios()[0]==0.0);
        TEST_ASSERT(P[1]->getDirectionRatios()[1]==1.0);

	}

	// create a IfcDirection(0,1) to give some information to the placement

    Step::RefPtr<ifc2x3::IfcDirection> RefDirection = eds->createIfcDirection();
    RefDirection->getDirectionRatios().push_back(0.0);
    RefDirection->getDirectionRatios().push_back(1.0);

    placement->setRefDirection(RefDirection);

    P = placement->getP();

    TEST_VALIDITY(P[0]);
    TEST_VALIDITY(P[1]);

    if (P[0].valid() && P[1].valid())
    {
        TEST_ASSERT(P[0]->getDirectionRatios()[0]==0.0);
        TEST_ASSERT(P[0]->getDirectionRatios()[1]==1.0);

        TEST_ASSERT(P[1]->getDirectionRatios()[0]==-1.0);
        TEST_ASSERT(P[1]->getDirectionRatios()[1]==0.0);
    }

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
