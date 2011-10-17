#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcCartesianTransformationOperator3D.h>
#include "../../tests.h"

#include <sstream>
#include <string>
//#include <math.h>
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

	Step::RefPtr<ifc2x3::IfcCartesianTransformationOperator3D> CTOperator3D = eds->createIfcCartesianTransformationOperator3D();
	TEST_VALIDITY(CTOperator3D);

///////////////////////////////////////////////////////////////////////////////////
	ifc2x3::List_IfcDirection_3_3 ListIfcDirection1 = CTOperator3D->getU();
	LOG_DEBUG("Axis1, Axis2 and Axis3 not exist" << std::endl);

	TEST_ASSERT(ListIfcDirection1[0]->getDirectionRatios()[0]==1.0);
	TEST_ASSERT(ListIfcDirection1[0]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection1[0]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection1[1]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection1[1]->getDirectionRatios()[1]==1.0);
	TEST_ASSERT(ListIfcDirection1[1]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection1[2]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection1[2]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection1[2]->getDirectionRatios()[2]==1.0);
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr< ifc2x3::IfcDirection > Axis1 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 ListReal1;
	ListReal1.push_back(1.0);
	ListReal1.push_back(0.0);
	ListReal1.push_back(0.0);
	Axis1->setDirectionRatios(ListReal1);
	
	CTOperator3D->setAxis1(Axis1);
	ifc2x3::List_IfcDirection_3_3 ListIfcDirection2 = CTOperator3D->getU();
	
	LOG_DEBUG("Axis1 [1.0;0.0] and Axis2 not exist" << std::endl);
	LOG_DEBUG("U[0] = ["<< ListIfcDirection2[0]->getDirectionRatios()[0] << " ; " << ListIfcDirection2[0]->getDirectionRatios()[1] << " ; " << ListIfcDirection2[0]->getDirectionRatios()[2] << "]" << std::endl);
	LOG_DEBUG("U[1] = ["<< ListIfcDirection2[1]->getDirectionRatios()[0] << " ; " << ListIfcDirection2[1]->getDirectionRatios()[1] << " ; " << ListIfcDirection2[1]->getDirectionRatios()[2] << "]" << std::endl);
	LOG_DEBUG("U[2] = ["<< ListIfcDirection2[2]->getDirectionRatios()[0] << " ; " << ListIfcDirection2[2]->getDirectionRatios()[1] << " ; " << ListIfcDirection2[2]->getDirectionRatios()[2] << "]" << std::endl);

	TEST_ASSERT(ListIfcDirection2[0]->getDirectionRatios()[0]==1.0);
	TEST_ASSERT(ListIfcDirection2[0]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection2[0]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection2[1]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection2[1]->getDirectionRatios()[1]==1.0);
	TEST_ASSERT(ListIfcDirection2[1]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection2[2]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection2[2]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection2[2]->getDirectionRatios()[2]==1.0);

///////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr< ifc2x3::IfcDirection > Axis2 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 ListReal2;
	ListReal2.push_back(0.0);
	ListReal2.push_back(1.0);
	ListReal2.push_back(0.0);
	Axis2->setDirectionRatios(ListReal2);

	CTOperator3D->setAxis2(Axis2);
	ifc2x3::List_IfcDirection_3_3 ListIfcDirection3 = CTOperator3D->getU();

	LOG_DEBUG("Axis1 [1.0;0.0;0.0] and Axis2[0.0;1.0;0.0]" << std::endl);
	LOG_DEBUG("U[0] = ["<< ListIfcDirection3[0]->getDirectionRatios()[0] << " ; " << ListIfcDirection3[0]->getDirectionRatios()[1] << " ; " << ListIfcDirection3[0]->getDirectionRatios()[2]<< "]" << std::endl);
	LOG_DEBUG("U[1] = ["<< ListIfcDirection3[1]->getDirectionRatios()[0] << " ; " << ListIfcDirection3[1]->getDirectionRatios()[1] << " ; " << ListIfcDirection3[1]->getDirectionRatios()[2]<< "]" << std::endl);
	LOG_DEBUG("U[2] = ["<< ListIfcDirection3[2]->getDirectionRatios()[0] << " ; " << ListIfcDirection3[2]->getDirectionRatios()[1] << " ; " << ListIfcDirection3[2]->getDirectionRatios()[2]<< "]" << std::endl);

	TEST_ASSERT(ListIfcDirection3[0]->getDirectionRatios()[0]==1.0);
	TEST_ASSERT(ListIfcDirection3[0]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection3[0]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection3[1]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection3[1]->getDirectionRatios()[1]==1.0);
	TEST_ASSERT(ListIfcDirection3[1]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection3[2]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection3[2]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection3[2]->getDirectionRatios()[2]==1.0);

///////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr< ifc2x3::IfcDirection > Axis3 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 ListReal3;
	ListReal3.push_back(0.0);
	ListReal3.push_back(0.0);
	ListReal3.push_back(1.0);
	Axis3->setDirectionRatios(ListReal3);

	CTOperator3D->setAxis3(Axis3);
	ifc2x3::List_IfcDirection_3_3 ListIfcDirection4 = CTOperator3D->getU();

	LOG_DEBUG("Axis1 [1.0;0.0;0.0], Axis2[0.0;1.0;0.0] And Axis3[0.0;0.0;1.0] " << std::endl);
	LOG_DEBUG("U[0] = ["<< ListIfcDirection4[0]->getDirectionRatios()[0] << " ; " << ListIfcDirection4[0]->getDirectionRatios()[1] << " ; " << ListIfcDirection4[0]->getDirectionRatios()[2]<< "]" << std::endl);
	LOG_DEBUG("U[1] = ["<< ListIfcDirection4[1]->getDirectionRatios()[0] << " ; " << ListIfcDirection4[1]->getDirectionRatios()[1] << " ; " << ListIfcDirection4[1]->getDirectionRatios()[2]<< "]" << std::endl);
	LOG_DEBUG("U[2] = ["<< ListIfcDirection4[2]->getDirectionRatios()[0] << " ; " << ListIfcDirection4[2]->getDirectionRatios()[1] << " ; " << ListIfcDirection4[2]->getDirectionRatios()[2]<< "]" << std::endl);

	TEST_ASSERT(ListIfcDirection4[0]->getDirectionRatios()[0]==1.0);
	TEST_ASSERT(ListIfcDirection4[0]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection4[0]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection4[1]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection4[1]->getDirectionRatios()[1]==1.0);
	TEST_ASSERT(ListIfcDirection4[1]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection4[2]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection4[2]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection4[2]->getDirectionRatios()[2]==1.0);

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

	ifc2x3::List_Real_2_3 ListReal4;
	ListReal4.push_back(0.0);
	ListReal4.push_back(0.0);
	ListReal4.push_back(1.0);
	Axis1->setDirectionRatios(ListReal4);
	CTOperator3D->setAxis1(Axis1);
	ifc2x3::List_IfcDirection_3_3 ListIfcDirection5 = CTOperator3D->getU();

	TEST_ASSERT(ListIfcDirection5.empty());
/*	
	LOG_DEBUG("Axis1 [0.0;0.0;1.0], Axis2[0.0;1.0;0.0] And Axis3[0.0;0.0;1.0]" << std::endl);
	LOG_DEBUG("U[0] = ["<< ListIfcDirection5[0]->getDirectionRatios()[0] << " ; " << ListIfcDirection5[0]->getDirectionRatios()[1] << " ; " << ListIfcDirection5[0]->getDirectionRatios()[2] << "]" << std::endl);
	LOG_DEBUG("U[1] = ["<< ListIfcDirection5[1]->getDirectionRatios()[0] << " ; " << ListIfcDirection5[1]->getDirectionRatios()[1] << " ; " << ListIfcDirection5[1]->getDirectionRatios()[2] << "]" << std::endl);
	LOG_DEBUG("U[2] = ["<< ListIfcDirection5[2]->getDirectionRatios()[0] << " ; " << ListIfcDirection5[2]->getDirectionRatios()[1] << " ; " << ListIfcDirection5[2]->getDirectionRatios()[2] << "]" << std::endl);

	TEST_ASSERT(ListIfcDirection5[0]->getDirectionRatios()[0]==1.0);
	TEST_ASSERT(ListIfcDirection5[0]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection5[0]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection5[1]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection5[1]->getDirectionRatios()[1]==1.0);
	TEST_ASSERT(ListIfcDirection5[1]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection5[2]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection5[2]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection5[2]->getDirectionRatios()[2]==1.0);
*/

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

	ifc2x3::List_Real_2_3 ListReal5;
	ListReal5.push_back(2.0);
	ListReal5.push_back(0.0);
	ListReal5.push_back(0.0);
	Axis1->setDirectionRatios(ListReal5);
	CTOperator3D->setAxis1(Axis1);

	ifc2x3::List_Real_2_3 ListReal6;
	ListReal6.push_back(0.0);
	ListReal6.push_back(6.0);
	ListReal6.push_back(0.0);
	Axis2->setDirectionRatios(ListReal6);

	ifc2x3::List_Real_2_3 ListReal7;
	ListReal7.push_back(0.0);
	ListReal7.push_back(0.0);
	ListReal7.push_back(8.0);
	Axis3->setDirectionRatios(ListReal7);

	ifc2x3::List_IfcDirection_3_3 ListIfcDirection6 = CTOperator3D->getU();
		
	LOG_DEBUG("Axis1 [2.0;0.0;0.0], Axis2[0.0;6.0;0.0] And Axis3[0.0;0.0;8.0]" << std::endl);
	LOG_DEBUG("U[0] = ["<< ListIfcDirection6[0]->getDirectionRatios()[0] << " ; " << ListIfcDirection6[0]->getDirectionRatios()[1] << " ; " << ListIfcDirection6[0]->getDirectionRatios()[2] << "]" << std::endl);
	LOG_DEBUG("U[1] = ["<< ListIfcDirection6[1]->getDirectionRatios()[0] << " ; " << ListIfcDirection6[1]->getDirectionRatios()[1] << " ; " << ListIfcDirection6[1]->getDirectionRatios()[2] << "]" << std::endl);
	LOG_DEBUG("U[2] = ["<< ListIfcDirection6[2]->getDirectionRatios()[0] << " ; " << ListIfcDirection6[2]->getDirectionRatios()[1] << " ; " << ListIfcDirection6[2]->getDirectionRatios()[2] << "]" << std::endl);

	TEST_ASSERT(ListIfcDirection6[0]->getDirectionRatios()[0]==1.0);
	TEST_ASSERT(ListIfcDirection6[0]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection6[0]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection6[1]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection6[1]->getDirectionRatios()[1]==1.0);
	TEST_ASSERT(ListIfcDirection6[1]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection6[2]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection6[2]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection6[2]->getDirectionRatios()[2]==1.0);
	
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

	ifc2x3::List_Real_2_3 ListReal8;
	ListReal8.push_back(0.0);
	ListReal8.push_back(0.0);
	ListReal8.push_back(5.0);
	Axis1->setDirectionRatios(ListReal8);
	CTOperator3D->setAxis1(Axis1);

	ifc2x3::List_Real_2_3 ListReal9;
	ListReal9.push_back(-5.0);
	ListReal9.push_back(0.0);
	ListReal9.push_back(0.0);
	Axis2->setDirectionRatios(ListReal9);

	ifc2x3::List_Real_2_3 ListReal10;
	ListReal10.push_back(0.0);
	ListReal10.push_back(-8.0);
	ListReal10.push_back(0.0);
	Axis3->setDirectionRatios(ListReal10);

	ifc2x3::List_IfcDirection_3_3 ListIfcDirection7 = CTOperator3D->getU();

	LOG_DEBUG("Axis1 [0.0;0.0;5.0], Axis2[-5.0;0.0;0.0] And Axis3[0.0;-8.0;0.0]" << std::endl);
	LOG_DEBUG("U[0] = ["<< ListIfcDirection7[0]->getDirectionRatios()[0] << " ; " << ListIfcDirection7[0]->getDirectionRatios()[1] << " ; " << ListIfcDirection7[0]->getDirectionRatios()[2] << "]" << std::endl);
	LOG_DEBUG("U[1] = ["<< ListIfcDirection7[1]->getDirectionRatios()[0] << " ; " << ListIfcDirection7[1]->getDirectionRatios()[1] << " ; " << ListIfcDirection7[1]->getDirectionRatios()[2] << "]" << std::endl);
	LOG_DEBUG("U[2] = ["<< ListIfcDirection7[2]->getDirectionRatios()[0] << " ; " << ListIfcDirection7[2]->getDirectionRatios()[1] << " ; " << ListIfcDirection7[2]->getDirectionRatios()[2] << "]" << std::endl);

	TEST_ASSERT(ListIfcDirection7[0]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection7[0]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection7[0]->getDirectionRatios()[2]==1.0);
	TEST_ASSERT(ListIfcDirection7[1]->getDirectionRatios()[0]==-1.0);
	TEST_ASSERT(ListIfcDirection7[1]->getDirectionRatios()[1]==0.0);
	TEST_ASSERT(ListIfcDirection7[1]->getDirectionRatios()[2]==0.0);
	TEST_ASSERT(ListIfcDirection7[2]->getDirectionRatios()[0]==0.0);
	TEST_ASSERT(ListIfcDirection7[2]->getDirectionRatios()[1]==-1.0);
	TEST_ASSERT(ListIfcDirection7[2]->getDirectionRatios()[2]==0.0);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
