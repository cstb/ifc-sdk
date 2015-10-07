#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcSIUnit.h>

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

	Step::RefPtr<ifc2x3::IfcSIUnit> SIUnit = eds->createIfcSIUnit();
	TEST_VALIDITY(SIUnit);
	//TEST_ASSERT(SIUnit->getDimensions()==0);

	Step::RefPtr<ifc2x3::IfcDimensionalExponents> DimensionalExponents = eds->createIfcDimensionalExponents();

	DimensionalExponents->setLengthExponent(1);
	DimensionalExponents->setMassExponent(1);
	DimensionalExponents->setTimeExponent(1);
	DimensionalExponents->setElectricCurrentExponent(1);			
	DimensionalExponents->setThermodynamicTemperatureExponent(1);
	DimensionalExponents->setAmountOfSubstanceExponent(1);
	DimensionalExponents->setLuminousIntensityExponent(1);
	SIUnit->setDimensions(DimensionalExponents);

	Step::RefPtr<ifc2x3::IfcDimensionalExponents> ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
/*    
IfcUnitEnum_UNSET,
IfcUnitEnum_ABSORBEDDOSEUNIT,
IfcUnitEnum_AMOUNTOFSUBSTANCEUNIT,
IfcUnitEnum_AREAUNIT,
IfcUnitEnum_DOSEEQUIVALENTUNIT,
IfcUnitEnum_ELECTRICCAPACITANCEUNIT,
IfcUnitEnum_ELECTRICCHARGEUNIT,
IfcUnitEnum_ELECTRICCONDUCTANCEUNIT,
IfcUnitEnum_ELECTRICCURRENTUNIT,
IfcUnitEnum_ELECTRICRESISTANCEUNIT,
IfcUnitEnum_ELECTRICVOLTAGEUNIT,
IfcUnitEnum_ENERGYUNIT,
IfcUnitEnum_FORCEUNIT,
IfcUnitEnum_FREQUENCYUNIT,
IfcUnitEnum_ILLUMINANCEUNIT,
IfcUnitEnum_INDUCTANCEUNIT,
IfcUnitEnum_LENGTHUNIT,
IfcUnitEnum_LUMINOUSFLUXUNIT,
IfcUnitEnum_LUMINOUSINTENSITYUNIT,
IfcUnitEnum_MAGNETICFLUXDENSITYUNIT,
IfcUnitEnum_MAGNETICFLUXUNIT,
IfcUnitEnum_MASSUNIT,
IfcUnitEnum_PLANEANGLEUNIT,
IfcUnitEnum_POWERUNIT,
IfcUnitEnum_PRESSUREUNIT,
IfcUnitEnum_RADIOACTIVITYUNIT,
IfcUnitEnum_SOLIDANGLEUNIT,
IfcUnitEnum_THERMODYNAMICTEMPERATUREUNIT,
IfcUnitEnum_TIMEUNIT,
IfcUnitEnum_VOLUMEUNIT,
IfcUnitEnum_USERDEFINED,
*/
	SIUnit->setUnitType(ifc2x3::IfcUnitEnum_ABSORBEDDOSEUNIT);
/*
IfcSIPrefix_UNSET,
IfcSIPrefix_EXA,
IfcSIPrefix_PETA,
IfcSIPrefix_TERA,
IfcSIPrefix_GIGA,
IfcSIPrefix_MEGA,
IfcSIPrefix_KILO,
IfcSIPrefix_HECTO,
IfcSIPrefix_DECA,
IfcSIPrefix_DECI,
IfcSIPrefix_CENTI,
IfcSIPrefix_MILLI,
IfcSIPrefix_MICRO,
IfcSIPrefix_NANO,
IfcSIPrefix_PICO,
IfcSIPrefix_FEMTO,
IfcSIPrefix_ATTO,
*/
	SIUnit->setPrefix(ifc2x3::IfcSIPrefix_EXA);
/*
IfcSIUnitName_UNSET,
IfcSIUnitName_AMPERE,
IfcSIUnitName_BECQUEREL,
IfcSIUnitName_CANDELA,
IfcSIUnitName_COULOMB,
IfcSIUnitName_CUBIC_METRE,
IfcSIUnitName_DEGREE_CELSIUS,
IfcSIUnitName_FARAD,
IfcSIUnitName_GRAM,
IfcSIUnitName_GRAY,
IfcSIUnitName_HENRY,
IfcSIUnitName_HERTZ,
IfcSIUnitName_JOULE,
IfcSIUnitName_KELVIN,
IfcSIUnitName_LUMEN,
IfcSIUnitName_LUX,
IfcSIUnitName_METRE,
IfcSIUnitName_MOLE,
IfcSIUnitName_NEWTON,
IfcSIUnitName_OHM,
IfcSIUnitName_PASCAL,
IfcSIUnitName_RADIAN,
IfcSIUnitName_SECOND,
IfcSIUnitName_SIEMENS,
IfcSIUnitName_SIEVERT,
IfcSIUnitName_SQUARE_METRE,
IfcSIUnitName_STERADIAN,
IfcSIUnitName_TESLA,
IfcSIUnitName_VOLT,
IfcSIUnitName_WATT,
IfcSIUnitName_WEBER,*/
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_METRE");
	SIUnit->setName(ifc2x3::IfcSIUnitName_METRE);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_SQUARE_METRE");
	SIUnit->setName(ifc2x3::IfcSIUnitName_SQUARE_METRE);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_CUBIC_METRE");
	SIUnit->setName(ifc2x3::IfcSIUnitName_CUBIC_METRE);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==3);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_GRAM");
	SIUnit->setName(ifc2x3::IfcSIUnitName_GRAM);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_SECOND");
	SIUnit->setName(ifc2x3::IfcSIUnitName_SECOND);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_AMPERE");
	SIUnit->setName(ifc2x3::IfcSIUnitName_AMPERE);
	
	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_KELVIN");
	SIUnit->setName(ifc2x3::IfcSIUnitName_KELVIN);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_MOLE");
	SIUnit->setName(ifc2x3::IfcSIUnitName_MOLE);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_CANDELA");
	SIUnit->setName(ifc2x3::IfcSIUnitName_CANDELA);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==1);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_RADIAN");
	SIUnit->setName(ifc2x3::IfcSIUnitName_RADIAN);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_STERADIAN");
	SIUnit->setName(ifc2x3::IfcSIUnitName_STERADIAN);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_HERTZ");
	SIUnit->setName(ifc2x3::IfcSIUnitName_HERTZ);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-1);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_NEWTON");
	SIUnit->setName(ifc2x3::IfcSIUnitName_NEWTON);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_PASCAL");
	SIUnit->setName(ifc2x3::IfcSIUnitName_PASCAL);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==-1);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_JOULE");
	SIUnit->setName(ifc2x3::IfcSIUnitName_JOULE);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_WATT");
	SIUnit->setName(ifc2x3::IfcSIUnitName_WATT);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-3);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_COULOMB");
	SIUnit->setName(ifc2x3::IfcSIUnitName_COULOMB);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_VOLT");
	SIUnit->setName(ifc2x3::IfcSIUnitName_VOLT);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-3);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==-1);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);

////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_FARAD");
	SIUnit->setName(ifc2x3::IfcSIUnitName_FARAD);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==-1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==4);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_OHM");
	SIUnit->setName(ifc2x3::IfcSIUnitName_OHM);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-3);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_SIEMENS");
	SIUnit->setName(ifc2x3::IfcSIUnitName_SIEMENS);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==-1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==3);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==2);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_WEBER");
	SIUnit->setName(ifc2x3::IfcSIUnitName_WEBER);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==-1);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_TESLA");
	SIUnit->setName(ifc2x3::IfcSIUnitName_TESLA);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==-1);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_HENRY");
	SIUnit->setName(ifc2x3::IfcSIUnitName_HENRY);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_DEGREE_CELSIUS");
	SIUnit->setName(ifc2x3::IfcSIUnitName_DEGREE_CELSIUS);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==1);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_LUMEN");
	SIUnit->setName(ifc2x3::IfcSIUnitName_LUMEN);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==1);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_LUX");
	SIUnit->setName(ifc2x3::IfcSIUnitName_LUX);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==1);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_BECQUEREL");
	SIUnit->setName(ifc2x3::IfcSIUnitName_BECQUEREL);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-1);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_GRAY");
	SIUnit->setName(ifc2x3::IfcSIUnitName_GRAY);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);
////////////////////////////////////////////////////////////////////////////////////////////////////////
	LOG_DEBUG("IfcSIUnitName_SIEVERT");
	SIUnit->setName(ifc2x3::IfcSIUnitName_SIEVERT);

	ResultDimensionalExponents = SIUnit->getDimensions();
	TEST_ASSERT(ResultDimensionalExponents->getLengthExponent()==2);
	TEST_ASSERT(ResultDimensionalExponents->getMassExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getTimeExponent()==-2);
	TEST_ASSERT(ResultDimensionalExponents->getElectricCurrentExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getThermodynamicTemperatureExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getAmountOfSubstanceExponent()==0);
	TEST_ASSERT(ResultDimensionalExponents->getLuminousIntensityExponent()==0);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
