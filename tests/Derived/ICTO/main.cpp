#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcCartesianTransformationOperator.h>
#include "../../tests.h"

#include <sstream>
#include <string>
//#include <math.h>
// uncomment the following line to test compilation types checks
// #define TEST_COMPILATION_ERRORS
#define LOG_DEBUG(message)

int main(int n, char **p)
{
    Step::RefPtr<Step::StepLogger> logger = new Step::StepLogger;
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr<ifc2x3::IfcCartesianTransformationOperator> CTOperator2D1 = eds->createIfcCartesianTransformationOperator2D();
	TEST_VALIDITY(CTOperator2D1);

	Step::RefPtr< ifc2x3::IfcCartesianPoint > LocalOrigin11 = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 LocalOriginListReal11;
	LocalOriginListReal11.push_back(0.0);
	LocalOriginListReal11.push_back(0.0);
	LocalOrigin11->setCoordinates(LocalOriginListReal11);
	CTOperator2D1->setLocalOrigin(LocalOrigin11);

	Step::RefPtr< ifc2x3::IfcDirection > Direction2DAxis11 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 Direction2DListReal11;
	Direction2DListReal11.push_back(1.0);
	Direction2DListReal11.push_back(0.0);
	Direction2DAxis11->setDirectionRatios(Direction2DListReal11);
	CTOperator2D1->setAxis1(Direction2DAxis11);

	Step::RefPtr< ifc2x3::IfcDirection > Direction2DAxis21 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 Direction2DListReal21;
	Direction2DListReal21.push_back(0.0);
	Direction2DListReal21.push_back(1.0);
	Direction2DAxis21->setDirectionRatios(Direction2DListReal21);
	CTOperator2D1->setAxis1(Direction2DAxis21);


    STEP_LOG_DEBUG(logger, "TEST 2D 1" << std::endl);
    STEP_LOG_DEBUG(logger, "getScl() = " << CTOperator2D1->getScl() << std::endl);
	TEST_ASSERT(CTOperator2D1->getScl()==1);
    STEP_LOG_DEBUG(logger, "getDim() = " << CTOperator2D1->getDim() << std::endl);
	TEST_ASSERT(CTOperator2D1->getDim()==2);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr<ifc2x3::IfcCartesianTransformationOperator> CTOperator3D1 = eds->createIfcCartesianTransformationOperator3D();
	TEST_VALIDITY(CTOperator3D1);

	Step::RefPtr< ifc2x3::IfcCartesianPoint > LocalOrigin21 = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 LocalOriginListReal21;
	LocalOriginListReal21.push_back(0.0);
	LocalOriginListReal21.push_back(0.0);
	LocalOriginListReal21.push_back(0.0);
	LocalOrigin21->setCoordinates(LocalOriginListReal21);
	CTOperator3D1->setLocalOrigin(LocalOrigin21);

	Step::RefPtr< ifc2x3::IfcDirection > Direction3DAxis11 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 Direction3DListReal11;
	Direction3DListReal11.push_back(1.0);
	Direction3DListReal11.push_back(0.0);
	Direction3DListReal11.push_back(0.0);
	Direction3DAxis11->setDirectionRatios(Direction3DListReal11);
	CTOperator3D1->setAxis1(Direction3DAxis11);

	Step::RefPtr< ifc2x3::IfcDirection > Direction3DAxis21 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 Direction3DListReal21;
	Direction3DListReal21.push_back(0.0);
	Direction3DListReal21.push_back(1.0);
	Direction3DListReal21.push_back(0.0);
	Direction3DAxis21->setDirectionRatios(Direction3DListReal21);
	CTOperator3D1->setAxis1(Direction3DAxis21);

	Step::RefPtr< ifc2x3::IfcDirection > Direction3DAxis31 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 Direction3DListReal31;
	Direction3DListReal31.push_back(0.0);
	Direction3DListReal31.push_back(0.0);
	Direction3DListReal31.push_back(1.0);
	Direction3DAxis31->setDirectionRatios(Direction3DListReal31);
	CTOperator3D1->setAxis1(Direction3DAxis31);


    STEP_LOG_DEBUG(logger, "TEST 3D 1" << std::endl);
    STEP_LOG_DEBUG(logger, "getScl() = " << CTOperator3D1->getScl() << std::endl);
	TEST_ASSERT(CTOperator3D1->getScl()==1);
    STEP_LOG_DEBUG(logger, "getDim() = " << CTOperator3D1->getDim() << std::endl);
	TEST_ASSERT(CTOperator3D1->getDim()==3);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr<ifc2x3::IfcCartesianTransformationOperator> CTOperator2D2 = eds->createIfcCartesianTransformationOperator2D();
	TEST_VALIDITY(CTOperator2D2);

	Step::RefPtr< ifc2x3::IfcCartesianPoint > LocalOrigin12 = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 LocalOriginListReal12;
	LocalOriginListReal12.push_back(0.0);
	LocalOriginListReal12.push_back(0.0);
	LocalOrigin12->setCoordinates(LocalOriginListReal12);
	CTOperator2D2->setLocalOrigin(LocalOrigin12);

	Step::Real ScaleOperator2D2 = 1.5;
	CTOperator2D2->setScale(ScaleOperator2D2);

	Step::RefPtr< ifc2x3::IfcDirection > Direction2DAxis12 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 Direction2DListReal12;
	Direction2DListReal12.push_back(0.0);
	Direction2DListReal12.push_back(1.0);
	Direction2DAxis12->setDirectionRatios(Direction2DListReal12);
	CTOperator2D2->setAxis1(Direction2DAxis12);

	Step::RefPtr< ifc2x3::IfcDirection > Direction2DAxis22 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 Direction2DListReal22;
	Direction2DListReal22.push_back(1.0);
	Direction2DListReal22.push_back(0.0);
	Direction2DAxis22->setDirectionRatios(Direction2DListReal22);
	CTOperator2D2->setAxis1(Direction2DAxis22);


    STEP_LOG_DEBUG(logger, "TEST 2D 2" << std::endl);
    STEP_LOG_DEBUG(logger, "getScl() = " << CTOperator2D2->getScl() << std::endl);
	TEST_ASSERT(CTOperator2D2->getScl()==1.5);
    STEP_LOG_DEBUG(logger, "getDim() = " << CTOperator2D2->getDim() << std::endl);
	TEST_ASSERT(CTOperator2D2->getDim()==2);


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Step::RefPtr<ifc2x3::IfcCartesianTransformationOperator> CTOperator3D2 = eds->createIfcCartesianTransformationOperator3D();
	TEST_VALIDITY(CTOperator3D2);

	Step::RefPtr< ifc2x3::IfcCartesianPoint > LocalOrigin22 = eds->createIfcCartesianPoint();
	ifc2x3::List_IfcLengthMeasure_1_3 LocalOriginListReal22;
	LocalOriginListReal22.push_back(1.0);
	LocalOriginListReal22.push_back(3.0);
	LocalOriginListReal22.push_back(2.0);
	LocalOrigin22->setCoordinates(LocalOriginListReal22);
	CTOperator3D2->setLocalOrigin(LocalOrigin22);

	Step::Real ScaleOperator3D2 = 3.5;
	CTOperator3D2->setScale(ScaleOperator3D2);

	Step::RefPtr< ifc2x3::IfcDirection > Direction3DAxis12 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 Direction3DListReal12;
	Direction3DListReal12.push_back(6.0);
	Direction3DListReal12.push_back(0.0);
	Direction3DListReal12.push_back(3.0);
	Direction3DAxis12->setDirectionRatios(Direction3DListReal12);
	CTOperator3D2->setAxis1(Direction3DAxis12);

	Step::RefPtr< ifc2x3::IfcDirection > Direction3DAxis22 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 Direction3DListReal22;
	Direction3DListReal22.push_back(2.0);
	Direction3DListReal22.push_back(2.0);
	Direction3DListReal22.push_back(2.0);
	Direction3DAxis22->setDirectionRatios(Direction3DListReal22);
	CTOperator3D2->setAxis1(Direction3DAxis22);

	Step::RefPtr< ifc2x3::IfcDirection > Direction3DAxis32 = eds->createIfcDirection();
	ifc2x3::List_Real_2_3 Direction3DListReal32;
	Direction3DListReal32.push_back(-2.0);
	Direction3DListReal32.push_back(2.0);
	Direction3DListReal32.push_back(-4.0);
	Direction3DAxis32->setDirectionRatios(Direction3DListReal32);
	CTOperator3D2->setAxis1(Direction3DAxis32);

    STEP_LOG_DEBUG(logger, "TEST 3D 2" << std::endl);
    STEP_LOG_DEBUG(logger, "getScl() = " << CTOperator3D2->getScl() << std::endl);
	TEST_ASSERT(CTOperator3D2->getScl()==3.5);
    STEP_LOG_DEBUG(logger, "getDim() = " << CTOperator3D2->getDim() << std::endl);
	TEST_ASSERT(CTOperator3D2->getDim()==3);


	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
