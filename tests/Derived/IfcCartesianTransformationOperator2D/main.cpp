#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include "../../tests.h"

#include <sstream>
#include <string>
//#include <math.h>
#ifdef linux
#include <cmath>
#endif
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

	Step::RefPtr<ifc2x3::IfcCartesianTransformationOperator2D> CTOperator2D = eds->createIfcCartesianTransformationOperator2D();
	TEST_VALIDITY(CTOperator2D);

///////////////////////////////////////////////////////////////////////////////////
	ifc2x3::List_IfcDirection_2_2 ListIfcDirection1 = CTOperator2D->getU();
	LOG_DEBUG("Axis1 and Axis2 not exist" << std::endl);

	TEST_ASSERT(ListIfcDirection1[0]->getDirectionRatios()[0]==1.0);
	TEST_ASSERT(ListIfcDirection1[0]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection1[1]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection1[1]->getDirectionRatios()[1]==1.0);
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr< ifc2x3::IfcDirection > Axis1 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 ListReal1;
	ListReal1.push_back(1.0);
	ListReal1.push_back(0.0);
	Axis1->setDirectionRatios(ListReal1);
	
	CTOperator2D->setAxis1(Axis1);
	ifc2x3::List_IfcDirection_2_2 ListIfcDirection2 = CTOperator2D->getU();
	
	LOG_DEBUG("Axis1 [1.0;0.0] and Axis2 not exist" << std::endl);
	LOG_DEBUG("U[0] = ["<< ListIfcDirection2[0]->getDirectionRatios()[0] << " ; " << ListIfcDirection2[0]->getDirectionRatios()[1] << "]" << std::endl);
	LOG_DEBUG("U[1] = ["<< ListIfcDirection2[1]->getDirectionRatios()[0] << " ; " << ListIfcDirection2[1]->getDirectionRatios()[1] << "]" << std::endl);

	TEST_ASSERT(ListIfcDirection2[0]->getDirectionRatios()[0]==1.0);
	TEST_ASSERT(ListIfcDirection2[0]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection2[1]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection2[1]->getDirectionRatios()[1]==1.0);

///////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr< ifc2x3::IfcDirection > Axis2 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 ListReal2;
	ListReal2.push_back(0.0);
	ListReal2.push_back(1.0);
	Axis2->setDirectionRatios(ListReal2);

	CTOperator2D->setAxis2(Axis2);
	ifc2x3::List_IfcDirection_2_2 ListIfcDirection3 = CTOperator2D->getU();

	
	ListIfcDirection3 = CTOperator2D->getU();
	LOG_DEBUG("Axis1 [1.0;0.0] and Axis2[0.0;1.0]" << std::endl);
	LOG_DEBUG("U[0] = ["<< ListIfcDirection3[0]->getDirectionRatios()[0] << " ; " << ListIfcDirection3[0]->getDirectionRatios()[1] << "]" << std::endl);
	LOG_DEBUG("U[1] = ["<< ListIfcDirection3[1]->getDirectionRatios()[0] << " ; " << ListIfcDirection3[1]->getDirectionRatios()[1] << "]" << std::endl);

	TEST_ASSERT(ListIfcDirection3[0]->getDirectionRatios()[0]==1.0);
	TEST_ASSERT(ListIfcDirection3[0]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection3[1]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection3[1]->getDirectionRatios()[1]==1.0);

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

	ifc2x3::List_Real_2_3 ListReal3;
	ListReal3.push_back(0.0);
	ListReal3.push_back(1.0);
	Axis1->setDirectionRatios(ListReal3);

	CTOperator2D->setAxis1(Axis1);
	ifc2x3::List_IfcDirection_2_2 ListIfcDirection4 = CTOperator2D->getU();

	LOG_DEBUG("Axis1 [0.0;1.0] and Axis2[0.0;1.0]" << std::endl);
	LOG_DEBUG("U[0] = ["<< ListIfcDirection4[0]->getDirectionRatios()[0] << " ; " << ListIfcDirection4[0]->getDirectionRatios()[1] << "]" << std::endl);
	LOG_DEBUG("U[1] = ["<< ListIfcDirection4[1]->getDirectionRatios()[0] << " ; " << ListIfcDirection4[1]->getDirectionRatios()[1] << "]" << std::endl);

	TEST_ASSERT(ListIfcDirection4[0]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection4[0]->getDirectionRatios()[1]==1.0);
	TEST_ASSERT(ListIfcDirection4[1]->getDirectionRatios()[0]==-1.0);
	TEST_ASSERT(ListIfcDirection4[1]->getDirectionRatios()[1]==0.0);

	///////////////////////////////////////////////////////////////////////////////////

	ifc2x3::List_Real_2_3 ListReal4;
	ListReal4.push_back(1.0);
	ListReal4.push_back(0.0);
	Axis2->setDirectionRatios(ListReal4);

	CTOperator2D->setAxis2(Axis2);
	ifc2x3::List_IfcDirection_2_2 ListIfcDirection5 = CTOperator2D->getU();
	
	ListIfcDirection3 = CTOperator2D->getU();
	LOG_DEBUG("Axis1 [0.0;1.0] and Axis2[1.0;0.0]" << std::endl);
	LOG_DEBUG("U[0] = ["<< ListIfcDirection5[0]->getDirectionRatios()[0] << " ; " << ListIfcDirection5[0]->getDirectionRatios()[1] << "]" << std::endl);
	LOG_DEBUG("U[1] = ["<< ListIfcDirection5[1]->getDirectionRatios()[0] << " ; " << ListIfcDirection5[1]->getDirectionRatios()[1] << "]" << std::endl);

	TEST_ASSERT(ListIfcDirection5[0]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection5[0]->getDirectionRatios()[1]==1.0);
	TEST_ASSERT(ListIfcDirection5[1]->getDirectionRatios()[0]==1.0);
	TEST_ASSERT(ListIfcDirection5[1]->getDirectionRatios()[1]==0.0);

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

	ifc2x3::List_Real_2_3 ListReal5;
	ListReal5.push_back(1.0);
	ListReal5.push_back(1.0);
	Axis1->setDirectionRatios(ListReal5);

	CTOperator2D->setAxis1(Axis1);

	ifc2x3::List_Real_2_3 ListReal6;
	ListReal6.push_back(1.0);
	ListReal6.push_back(1.0);
	Axis2->setDirectionRatios(ListReal6);

	CTOperator2D->setAxis2(Axis2);

	ifc2x3::List_IfcDirection_2_2 ListIfcDirection6 = CTOperator2D->getU();

	LOG_DEBUG("Axis1 [1.0;1.0] and Axis2[1.0;1.0]" << std::endl);
	LOG_DEBUG("U[0] = ["<< ListIfcDirection6[0]->getDirectionRatios()[0] << " ; " << ListIfcDirection6[0]->getDirectionRatios()[1] << "]" << std::endl);
	LOG_DEBUG("U[1] = ["<< ListIfcDirection6[1]->getDirectionRatios()[0] << " ; " << ListIfcDirection6[1]->getDirectionRatios()[1] << "]" << std::endl);

	TEST_ASSERT(ListIfcDirection6[0]->getDirectionRatios()[0]==(1/sqrt(2.0)));
	TEST_ASSERT(ListIfcDirection6[0]->getDirectionRatios()[1]==(1/sqrt(2.0)));
	TEST_ASSERT(ListIfcDirection6[1]->getDirectionRatios()[0]==(-1/sqrt(2.0)));
	TEST_ASSERT(ListIfcDirection6[1]->getDirectionRatios()[1]==(1/sqrt(2.0)));

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
