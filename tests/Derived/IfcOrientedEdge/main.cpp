#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcMaterialLayerSet.h>
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

	Step::RefPtr<ifc2x3::IfcOrientedEdge> OrientedEdge = eds->createIfcOrientedEdge();
	TEST_VALIDITY(OrientedEdge);

	TEST_ASSERT(OrientedEdge->getEdgeStart()==nullptr);
	TEST_ASSERT(OrientedEdge->getEdgeEnd()==nullptr);

	Step::RefPtr<ifc2x3::IfcEdgeCurve> EdgeCurve = eds->createIfcEdgeCurve();
	Step::RefPtr<ifc2x3::IfcVertexPoint> Vertex1 = eds->createIfcVertexPoint();
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointStart1 = eds->createIfcCartesianPoint();
	PointStart1->getCoordinates().push_back(1);
	PointStart1->getCoordinates().push_back(1);
	PointStart1->getCoordinates().push_back(1);
	Vertex1->setVertexGeometry(PointStart1);
	EdgeCurve->setEdgeStart(Vertex1);
	Step::RefPtr<ifc2x3::IfcVertexPoint> Vertex2 = eds->createIfcVertexPoint();
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointStart2 = eds->createIfcCartesianPoint();
	PointStart2->getCoordinates().push_back(2);
	PointStart2->getCoordinates().push_back(2);
	PointStart2->getCoordinates().push_back(2);
	Vertex2->setVertexGeometry(PointStart2);
	EdgeCurve->setEdgeEnd(Vertex2);

	OrientedEdge->setEdgeElement(EdgeCurve);
	OrientedEdge->setOrientation(Step::BTrue);

	Step::RefPtr<ifc2x3::IfcVertexPoint> VertexRes1 = dynamic_cast<ifc2x3::IfcVertexPoint*>(OrientedEdge->getEdgeStart());
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointRes1 = dynamic_cast<ifc2x3::IfcCartesianPoint*>(VertexRes1->getVertexGeometry());
	LOG_DEBUG("OrientedEdge->getEdgeStart()[0] = "<< PointRes1->getCoordinates()[0] <<std::endl);
	LOG_DEBUG("OrientedEdge->getEdgeStart()[1] = "<< PointRes1->getCoordinates()[1] <<std::endl);
	LOG_DEBUG("OrientedEdge->getEdgeStart()[2] = "<< PointRes1->getCoordinates()[2] <<std::endl);
	TEST_ASSERT(PointRes1->getCoordinates()[0]==1);
	TEST_ASSERT(PointRes1->getCoordinates()[1]==1);
	TEST_ASSERT(PointRes1->getCoordinates()[2]==1);

	Step::RefPtr<ifc2x3::IfcVertexPoint> VertexRes2 = dynamic_cast<ifc2x3::IfcVertexPoint*>(OrientedEdge->getEdgeEnd());
	Step::RefPtr<ifc2x3::IfcCartesianPoint> PointRes2 = dynamic_cast<ifc2x3::IfcCartesianPoint*>(VertexRes2->getVertexGeometry());
	LOG_DEBUG("OrientedEdge->getEdgeEnd()[0] = "<< PointRes2->getCoordinates()[0] <<std::endl);
	LOG_DEBUG("OrientedEdge->getEdgeEnd()[1] = "<< PointRes2->getCoordinates()[1] <<std::endl);
	LOG_DEBUG("OrientedEdge->getEdgeEnd()[2] = "<< PointRes2->getCoordinates()[2] <<std::endl);
	TEST_ASSERT(PointRes2->getCoordinates()[0]==2);
	TEST_ASSERT(PointRes2->getCoordinates()[1]==2);
	TEST_ASSERT(PointRes2->getCoordinates()[2]==2);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
