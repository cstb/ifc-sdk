#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcTable.h>
#include <ifc2x3/IfcValue.h>
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

	Step::RefPtr< ifc2x3::IfcTable > Table = eds->createIfcTable();
	TEST_VALIDITY(Table);

	TEST_ASSERT(Table->getNumberOfCellsInRow()==0);
	TEST_ASSERT(Table->getNumberOfHeadings()==0);
	TEST_ASSERT(Table->getNumberOfDataRows()==0);
	
	Table->setName("Table");
	Step::RefPtr< ifc2x3::IfcTableRow > TableRow1 = eds->createIfcTableRow();
	Step::RefPtr< ifc2x3::IfcValue > Value = new ifc2x3::IfcValue();
	Value->setIfcVolumeMeasure(0.0);
	TableRow1->getRowCells().push_back(Value);
	Value->setIfcVolumeMeasure(1.0);
	TableRow1->getRowCells().push_back(Value);
	Value->setIfcVolumeMeasure(2.0);
	TableRow1->getRowCells().push_back(Value);
	TableRow1->setIsHeading(Step::BTrue);
	Table->getRows().push_back(TableRow1);
	LOG_DEBUG("Table->getNumberOfCellsInRow()=" << Table->getNumberOfCellsInRow() << std::endl);
	TEST_ASSERT(Table->getNumberOfCellsInRow()==3);
	LOG_DEBUG("Table->getNumberOfHeadings()=" << Table->getNumberOfHeadings() << std::endl);
	TEST_ASSERT(Table->getNumberOfHeadings()==1);
	LOG_DEBUG("Table->getNumberOfDataRows()=" << Table->getNumberOfDataRows() << std::endl);
	TEST_ASSERT(Table->getNumberOfDataRows()==0);

	Step::RefPtr< ifc2x3::IfcTableRow > TableRow2 = eds->createIfcTableRow();
	Value->setIfcVolumeMeasure(3.0);
	TableRow2->getRowCells().push_back(Value);
	Value->setIfcVolumeMeasure(4.0);
	TableRow2->getRowCells().push_back(Value);
	Value->setIfcVolumeMeasure(5.0);
	TableRow2->getRowCells().push_back(Value);
	TableRow2->setIsHeading(Step::BFalse);
	Table->getRows().push_back(TableRow2);
	LOG_DEBUG("Table->getNumberOfCellsInRow()=" << Table->getNumberOfCellsInRow() << std::endl);
	TEST_ASSERT(Table->getNumberOfCellsInRow()==3);
	LOG_DEBUG("Table->getNumberOfHeadings()=" << Table->getNumberOfHeadings() << std::endl);
	TEST_ASSERT(Table->getNumberOfHeadings()==1);
	LOG_DEBUG("Table->getNumberOfDataRows()=" << Table->getNumberOfDataRows() << std::endl);
	TEST_ASSERT(Table->getNumberOfDataRows()==1);
	Step::RefPtr< ifc2x3::IfcTableRow > TableRow3 = eds->createIfcTableRow();
	Value->setIfcVolumeMeasure(6.0);
	TableRow3->getRowCells().push_back(Value);
	Value->setIfcVolumeMeasure(7.0);
	TableRow3->getRowCells().push_back(Value);
	Value->setIfcVolumeMeasure(8.0);
	TableRow3->getRowCells().push_back(Value);
	TableRow3->setIsHeading(Step::BTrue);
	Table->getRows().push_back(TableRow3);
	LOG_DEBUG("Table->getNumberOfCellsInRow()=" << Table->getNumberOfCellsInRow() << std::endl);
	TEST_ASSERT(Table->getNumberOfCellsInRow()==3);
	LOG_DEBUG("Table->getNumberOfHeadings()=" << Table->getNumberOfHeadings() << std::endl);
	TEST_ASSERT(Table->getNumberOfHeadings()==2);
	LOG_DEBUG("Table->getNumberOfDataRows()=" << Table->getNumberOfDataRows() << std::endl);
	TEST_ASSERT(Table->getNumberOfDataRows()==1);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
