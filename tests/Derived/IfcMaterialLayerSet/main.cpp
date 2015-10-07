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

	Step::RefPtr<ifc2x3::IfcMaterialLayerSet> MaterialLayerSet = eds->createIfcMaterialLayerSet();
	TEST_VALIDITY(MaterialLayerSet);
	LOG_DEBUG("MaterialLayerSet->getTotalThickness() = "<< MaterialLayerSet->getTotalThickness() <<std::endl);
	TEST_ASSERT(MaterialLayerSet->getTotalThickness()==0);

	Step::RefPtr<ifc2x3::IfcMaterialLayer> MaterialLayer1 = eds->createIfcMaterialLayer();
	Step::RefPtr<ifc2x3::IfcMaterial> Material1 = eds->createIfcMaterial();
	Material1->setName("Mat1");
	MaterialLayer1->setMaterial(Material1);
	MaterialLayer1->setLayerThickness(5);
	MaterialLayer1->setIsVentilated(Step::LTrue);
	MaterialLayerSet->getMaterialLayers().push_back(MaterialLayer1);

	LOG_DEBUG("MaterialLayerSet->getTotalThickness() = "<< MaterialLayerSet->getTotalThickness() <<std::endl);
	TEST_ASSERT(MaterialLayerSet->getTotalThickness()==5);

	Step::RefPtr<ifc2x3::IfcMaterialLayer> MaterialLayer2 = eds->createIfcMaterialLayer();
	Step::RefPtr<ifc2x3::IfcMaterial> Material2 = eds->createIfcMaterial();
	Material2->setName("Mat2");
	MaterialLayer2->setMaterial(Material2);
	MaterialLayer2->setLayerThickness(9);
	MaterialLayer2->setIsVentilated(Step::LFalse);
	MaterialLayerSet->getMaterialLayers().push_back(MaterialLayer2);

	LOG_DEBUG("MaterialLayerSet->getTotalThickness() = "<< MaterialLayerSet->getTotalThickness() <<std::endl);
	TEST_ASSERT(MaterialLayerSet->getTotalThickness()==14);

	Step::RefPtr<ifc2x3::IfcMaterialLayer> MaterialLayer3 = eds->createIfcMaterialLayer();
	Step::RefPtr<ifc2x3::IfcMaterial> Material3 = eds->createIfcMaterial();
	Material3->setName("Mat3");
	MaterialLayer3->setMaterial(Material3);
	MaterialLayer3->setLayerThickness(12);
	MaterialLayer3->setIsVentilated(Step::LTrue);
	
	MaterialLayerSet->getMaterialLayers().push_back(MaterialLayer3);
	MaterialLayerSet->setLayerSetName("Layer");

	LOG_DEBUG("MaterialLayerSet->getTotalThickness() = "<< MaterialLayerSet->getTotalThickness() <<std::endl);
	TEST_ASSERT(MaterialLayerSet->getTotalThickness()==26);

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
