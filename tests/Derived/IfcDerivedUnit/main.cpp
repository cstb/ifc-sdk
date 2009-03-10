#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcDerivedUnit.h>
#include <ifc2x3/IfcDerivedUnitElement.h>
#include <ifc2x3/IfcNamedUnit.h>
#include <ifc2x3/IfcDimensionalExponents.h>

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Step::RefPtr<ifc2x3::IfcDerivedUnit> DerivedUnit = eds->createIfcDerivedUnit();
	TEST_VALIDITY(DerivedUnit);
	Step::RefPtr<ifc2x3::IfcDimensionalExponents> ResultDimensionalExponents = DerivedUnit->getDimensions();
	TEST_VALIDITY(ResultDimensionalExponents);

	LOG_DEBUG("ResultDimensionalExponents->getLengthExponent() = " << ResultDimensionalExponents->getLengthExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	LOG_DEBUG("ResultDimensionalExponents->getMassExponent() = " << ResultDimensionalExponents->getMassExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	LOG_DEBUG("ResultDimensionalExponents->getTimeExponent() = " << ResultDimensionalExponents->getTimeExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	LOG_DEBUG("ResultDimensionalExponents->getElectricCurrentExponent() = " << ResultDimensionalExponents->getElectricCurrentExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	LOG_DEBUG("ResultDimensionalExponents->getThermodynamicTemperatureExponent() = " << ResultDimensionalExponents->getThermodynamicTemperatureExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	LOG_DEBUG("ResultDimensionalExponents->getAmountOfSubstanceExponent() = " << ResultDimensionalExponents->getAmountOfSubstanceExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	LOG_DEBUG("ResultDimensionalExponents->getLuminousIntensityExponent() = " << ResultDimensionalExponents->getLuminousIntensityExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Step::RefPtr<ifc2x3::IfcDerivedUnitElement> DerivedUnitElement1 = eds->createIfcDerivedUnitElement();
	Step::RefPtr<ifc2x3::IfcNamedUnit> ContextDependentUnit1 = eds->createIfcContextDependentUnit();
	Step::RefPtr<ifc2x3::IfcDimensionalExponents> DimensionalExponents1 = eds->createIfcDimensionalExponents();

	DimensionalExponents1->setLengthExponent(1);
	DimensionalExponents1->setMassExponent(1);
	DimensionalExponents1->setTimeExponent(1);
	DimensionalExponents1->setElectricCurrentExponent(1);			
	DimensionalExponents1->setThermodynamicTemperatureExponent(1);
	DimensionalExponents1->setAmountOfSubstanceExponent(1);
	DimensionalExponents1->setLuminousIntensityExponent(1);
	
	ContextDependentUnit1->setDimensions(DimensionalExponents1);
	
	DerivedUnitElement1->setUnit(ContextDependentUnit1);
	DerivedUnitElement1->setExponent(1);

	Step::RefPtr<ifc2x3::IfcDerivedUnitElement> DerivedUnitElement2 = eds->createIfcDerivedUnitElement();
	Step::RefPtr<ifc2x3::IfcNamedUnit> ContextDependentUnit2 = eds->createIfcContextDependentUnit();
	Step::RefPtr<ifc2x3::IfcDimensionalExponents> DimensionalExponents2 = eds->createIfcDimensionalExponents();
	DimensionalExponents2->setLengthExponent(2);
	DimensionalExponents2->setMassExponent(2);
	DimensionalExponents2->setTimeExponent(2);
	DimensionalExponents2->setElectricCurrentExponent(2);			
	DimensionalExponents2->setThermodynamicTemperatureExponent(2);
	DimensionalExponents2->setAmountOfSubstanceExponent(2);
	DimensionalExponents2->setLuminousIntensityExponent(2);
	ContextDependentUnit2->setDimensions(DimensionalExponents2);
	DerivedUnitElement2->setUnit(ContextDependentUnit2);
	DerivedUnitElement2->setExponent(2);

	Step::RefPtr<ifc2x3::IfcDerivedUnitElement> DerivedUnitElement3 = eds->createIfcDerivedUnitElement();
	Step::RefPtr<ifc2x3::IfcNamedUnit> ContextDependentUnit3 = eds->createIfcContextDependentUnit();
	Step::RefPtr<ifc2x3::IfcDimensionalExponents> DimensionalExponents3 = eds->createIfcDimensionalExponents();
	DimensionalExponents3->setLengthExponent(3);
	DimensionalExponents3->setMassExponent(3);
	DimensionalExponents3->setTimeExponent(3);
	DimensionalExponents3->setElectricCurrentExponent(3);			
	DimensionalExponents3->setThermodynamicTemperatureExponent(3);
	DimensionalExponents3->setAmountOfSubstanceExponent(3);
	DimensionalExponents3->setLuminousIntensityExponent(3);
	ContextDependentUnit3->setDimensions(DimensionalExponents3);
	DerivedUnitElement3->setUnit(ContextDependentUnit3);
	DerivedUnitElement3->setExponent(3);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

	ifc2x3::Set_IfcDerivedUnitElement_1_n SetDerivedUnitElement;

	SetDerivedUnitElement.insert(DerivedUnitElement1);
	
	DerivedUnit->setElements(SetDerivedUnitElement);

	ResultDimensionalExponents = DerivedUnit->getDimensions();
	
	LOG_DEBUG("ResultDimensionalExponents->getLengthExponent() = " << ResultDimensionalExponents->getLengthExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==1);
	LOG_DEBUG("ResultDimensionalExponents->getMassExponent() = " << ResultDimensionalExponents->getMassExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==1);
	LOG_DEBUG("ResultDimensionalExponents->getTimeExponent() = " << ResultDimensionalExponents->getTimeExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==1);
	LOG_DEBUG("ResultDimensionalExponents->getElectricCurrentExponent() = " << ResultDimensionalExponents->getElectricCurrentExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==1);
	LOG_DEBUG("ResultDimensionalExponents->getThermodynamicTemperatureExponent() = " << ResultDimensionalExponents->getThermodynamicTemperatureExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==1);
	LOG_DEBUG("ResultDimensionalExponents->getAmountOfSubstanceExponent() = " << ResultDimensionalExponents->getAmountOfSubstanceExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==1);
	LOG_DEBUG("ResultDimensionalExponents->getLuminousIntensityExponent() = " << ResultDimensionalExponents->getLuminousIntensityExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==1);


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	SetDerivedUnitElement.insert(DerivedUnitElement2);
	DerivedUnit->setElements(SetDerivedUnitElement);

	ResultDimensionalExponents = DerivedUnit->getDimensions();

	LOG_DEBUG("ResultDimensionalExponents->getLengthExponent() = " << ResultDimensionalExponents->getLengthExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==5);
	LOG_DEBUG("ResultDimensionalExponents->getMassExponent() = " << ResultDimensionalExponents->getMassExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==5);
	LOG_DEBUG("ResultDimensionalExponents->getTimeExponent() = " << ResultDimensionalExponents->getTimeExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==5);
	LOG_DEBUG("ResultDimensionalExponents->getElectricCurrentExponent() = " << ResultDimensionalExponents->getElectricCurrentExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==5);
	LOG_DEBUG("ResultDimensionalExponents->getThermodynamicTemperatureExponent() = " << ResultDimensionalExponents->getThermodynamicTemperatureExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==5);
	LOG_DEBUG("ResultDimensionalExponents->getAmountOfSubstanceExponent() = " << ResultDimensionalExponents->getAmountOfSubstanceExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==5);
	LOG_DEBUG("ResultDimensionalExponents->getLuminousIntensityExponent() = " << ResultDimensionalExponents->getLuminousIntensityExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==5);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	SetDerivedUnitElement.insert(DerivedUnitElement3);
	DerivedUnit->setElements(SetDerivedUnitElement);

	ResultDimensionalExponents = DerivedUnit->getDimensions();

	LOG_DEBUG("ResultDimensionalExponents->getLengthExponent() = " << ResultDimensionalExponents->getLengthExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==14);
	LOG_DEBUG("ResultDimensionalExponents->getMassExponent() = " << ResultDimensionalExponents->getMassExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==14);
	LOG_DEBUG("ResultDimensionalExponents->getTimeExponent() = " << ResultDimensionalExponents->getTimeExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==14);
	LOG_DEBUG("ResultDimensionalExponents->getElectricCurrentExponent() = " << ResultDimensionalExponents->getElectricCurrentExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==14);
	LOG_DEBUG("ResultDimensionalExponents->getThermodynamicTemperatureExponent() = " << ResultDimensionalExponents->getThermodynamicTemperatureExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==14);
	LOG_DEBUG("ResultDimensionalExponents->getAmountOfSubstanceExponent() = " << ResultDimensionalExponents->getAmountOfSubstanceExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==14);
	LOG_DEBUG("ResultDimensionalExponents->getLuminousIntensityExponent() = " << ResultDimensionalExponents->getLuminousIntensityExponent() << std::endl);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==14);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
