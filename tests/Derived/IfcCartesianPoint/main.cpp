#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcCartesianPoint.h>
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

	Step::RefPtr<ifc2x3::IfcCartesianPoint> Point = eds->createIfcCartesianPoint();
	TEST_VALIDITY(Point);
	TEST_ASSERT(Point->getDim()==0);

	ifc2x3::List_IfcLengthMeasure_1_3 Coordinates;
	Coordinates.push_back(0);
	Point->setCoordinates(Coordinates);
	TEST_ASSERT(Point->getDim()==1);

	Coordinates.push_back(1);
	Point->setCoordinates(Coordinates);
	TEST_ASSERT(Point->getDim()==2);

	Coordinates.push_back(2);
	Point->setCoordinates(Coordinates);
	TEST_ASSERT(Point->getDim()==3);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
