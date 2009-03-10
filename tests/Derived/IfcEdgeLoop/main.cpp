#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcEdgeLoop.h>
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

	Step::RefPtr<ifc2x3::IfcEdgeLoop> EdgeLoop = eds->createIfcEdgeLoop();
	TEST_VALIDITY(EdgeLoop);
	TEST_ASSERT(EdgeLoop->getNe()==0);

	Step::RefPtr<ifc2x3::IfcOrientedEdge> OrientedEdge1 = eds->createIfcOrientedEdge();
	TEST_VALIDITY(OrientedEdge1);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointStart1 = eds->createIfcCartesianPoint();
	PointStart1->getCoordinates().push_back(0);
	PointStart1->getCoordinates().push_back(0);
	PointStart1->getCoordinates().push_back(0);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointEnd1 = eds->createIfcCartesianPoint();
	PointEnd1->getCoordinates().push_back(1);
	PointEnd1->getCoordinates().push_back(1);
	PointEnd1->getCoordinates().push_back(1);
	OrientedEdge1->setEdgeStart(PointStart1);
	OrientedEdge1->setEdgeEnd(PointEnd1);

	EdgeLoop->getEdgeList().push_back(OrientedEdge1);
	TEST_ASSERT(EdgeLoop->getNe()==1);
	LOG_DEBUG("EdgeLoop->getNe() = " <<EdgeLoop->getNe()<< std::endl);
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Step::RefPtr<ifc2x3::IfcOrientedEdge> OrientedEdge2 = eds->createIfcOrientedEdge();
	TEST_VALIDITY(OrientedEdge2);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointStart2 = eds->createIfcCartesianPoint();
	PointStart2->getCoordinates().push_back(0);
	PointStart2->getCoordinates().push_back(0);
	PointStart2->getCoordinates().push_back(0);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointEnd2 = eds->createIfcCartesianPoint();
	PointEnd2->getCoordinates().push_back(1);
	PointEnd2->getCoordinates().push_back(1);
	PointEnd2->getCoordinates().push_back(1);
	OrientedEdge2->setEdgeStart(PointStart2);
	OrientedEdge2->setEdgeEnd(PointEnd2);
	EdgeLoop->getEdgeList().push_back(OrientedEdge2);
	TEST_ASSERT(EdgeLoop->getNe()==2);
	LOG_DEBUG("EdgeLoop->getNe() = " <<EdgeLoop->getNe()<< std::endl);
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Step::RefPtr<ifc2x3::IfcOrientedEdge> OrientedEdge3 = eds->createIfcOrientedEdge();
	TEST_VALIDITY(OrientedEdge3);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointStart3 = eds->createIfcCartesianPoint();
	PointStart3->getCoordinates().push_back(0);
	PointStart3->getCoordinates().push_back(0);
	PointStart3->getCoordinates().push_back(0);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointEnd3 = eds->createIfcCartesianPoint();
	PointEnd3->getCoordinates().push_back(1);
	PointEnd3->getCoordinates().push_back(1);
	PointEnd3->getCoordinates().push_back(1);
	OrientedEdge3->setEdgeStart(PointStart3);
	OrientedEdge3->setEdgeEnd(PointEnd3);
	EdgeLoop->getEdgeList().push_back(OrientedEdge3);
	TEST_ASSERT(EdgeLoop->getNe()==3);
	LOG_DEBUG("EdgeLoop->getNe() = " <<EdgeLoop->getNe()<< std::endl);
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Step::RefPtr<ifc2x3::IfcOrientedEdge> OrientedEdge4 = eds->createIfcOrientedEdge();
	TEST_VALIDITY(OrientedEdge4);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointStart4 = eds->createIfcCartesianPoint();
	PointStart4->getCoordinates().push_back(0);
	PointStart4->getCoordinates().push_back(0);
	PointStart4->getCoordinates().push_back(0);
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointEnd4 = eds->createIfcCartesianPoint();
	PointEnd4->getCoordinates().push_back(1);
	PointEnd4->getCoordinates().push_back(1);
	PointEnd4->getCoordinates().push_back(1);
	OrientedEdge4->setEdgeStart(PointStart4);
	OrientedEdge4->setEdgeEnd(PointEnd4);
	EdgeLoop->getEdgeList().push_back(OrientedEdge4);
	TEST_ASSERT(EdgeLoop->getNe()==4);
	LOG_DEBUG("EdgeLoop->getNe() = " <<EdgeLoop->getNe()<< std::endl);
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
