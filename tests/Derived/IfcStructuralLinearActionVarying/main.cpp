#define LOG_DEBUG_ENABLE 1

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcStructuralLinearActionVarying.h>
#include <ifc2x3/IfcShapeAspect.h>
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

	Step::RefPtr< ifc2x3::IfcStructuralLinearActionVarying > StructuralLinearActionVarying = eds->createIfcStructuralLinearActionVarying();
	TEST_ASSERT(StructuralLinearActionVarying->getVaryingAppliedLoads().empty());

	Step::RefPtr< ifc2x3::IfcShapeAspect > ShapeAspect = eds->createIfcShapeAspect();
	TEST_VALIDITY(ShapeAspect);
	Step::RefPtr< ifc2x3::IfcShapeModel > ShapeModelRepresentation1 = eds->createIfcShapeRepresentation();
	Step::RefPtr< ifc2x3::IfcShapeModel > ShapeModelRepresentation2 = eds->createIfcShapeRepresentation();
	ShapeAspect->getShapeRepresentations().push_back(ShapeModelRepresentation1);
	ShapeAspect->getShapeRepresentations().push_back(ShapeModelRepresentation2);
	ShapeAspect->setName("ShapeAspect");
	ShapeAspect->setDescription("IfcShapeAspect");
	ShapeAspect->setProductDefinitional(Step::LTrue);
	Step::RefPtr< ifc2x3::IfcProductDefinitionShape > ProductDefinitionShape = eds->createIfcProductDefinitionShape();
	ShapeAspect->setPartOfProductDefinitionShape(ProductDefinitionShape);
	StructuralLinearActionVarying->setVaryingAppliedLoadLocation(ShapeAspect);

	Step::RefPtr< ifc2x3::IfcStructuralLoad > StructuralLoad1 = eds->createIfcStructuralLoadLinearForce();
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralLoad1)->setLinearForceX(1);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralLoad1)->setLinearForceY(1);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralLoad1)->setLinearForceZ(1);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralLoad1)->setLinearMomentX(1);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralLoad1)->setLinearMomentY(1);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralLoad1)->setLinearMomentZ(1);
	StructuralLinearActionVarying->getSubsequentAppliedLoads().push_back(StructuralLoad1);

	Step::RefPtr< ifc2x3::IfcStructuralLoad > StructuralLoad2 = eds->createIfcStructuralLoadPlanarForce();
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadPlanarForce> > (StructuralLoad2)->setPlanarForceX(2);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadPlanarForce> > (StructuralLoad2)->setPlanarForceY(2);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadPlanarForce> > (StructuralLoad2)->setPlanarForceZ(2);
	StructuralLinearActionVarying->getSubsequentAppliedLoads().push_back(StructuralLoad2);
	Step::RefPtr< ifc2x3::IfcStructuralLoad > StructuralLoad3 = eds->createIfcStructuralLoadSingleDisplacement();
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleDisplacement> > (StructuralLoad3)->setDisplacementX(3);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleDisplacement> > (StructuralLoad3)->setDisplacementY(3);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleDisplacement> > (StructuralLoad3)->setDisplacementZ(3);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleDisplacement> > (StructuralLoad3)->setRotationalDisplacementRX(3);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleDisplacement> > (StructuralLoad3)->setRotationalDisplacementRY(3);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleDisplacement> > (StructuralLoad3)->setRotationalDisplacementRZ(3);
	StructuralLinearActionVarying->getSubsequentAppliedLoads().push_back(StructuralLoad3);
	Step::RefPtr< ifc2x3::IfcStructuralLoad > StructuralLoad4 = eds->createIfcStructuralLoadSingleForce();
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleForce> > (StructuralLoad4)->setForceX(4);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleForce> > (StructuralLoad4)->setForceY(4);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleForce> > (StructuralLoad4)->setForceZ(4);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleForce> > (StructuralLoad4)->setMomentX(4);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleForce> > (StructuralLoad4)->setMomentY(4);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadSingleForce> > (StructuralLoad4)->setMomentZ(4);
	StructuralLinearActionVarying->getSubsequentAppliedLoads().push_back(StructuralLoad4);
	Step::RefPtr< ifc2x3::IfcStructuralLoad > StructuralLoad5 = eds->createIfcStructuralLoadTemperature();
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadTemperature> > (StructuralLoad5)->setDeltaT_Constant(5);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadTemperature> > (StructuralLoad5)->setDeltaT_Y(5);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadTemperature> > (StructuralLoad5)->setDeltaT_Z(5);
	StructuralLinearActionVarying->getSubsequentAppliedLoads().push_back(StructuralLoad5);

	ifc2x3::List_IfcStructuralLoad_2_n ListIfcStructuralLoad = StructuralLinearActionVarying->getVaryingAppliedLoads();
	if(dynamic_cast<ifc2x3::IfcStructuralLoadLinearForce* > (ListIfcStructuralLoad[0].get()))
	{	
		Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> StructuralLoadLinearForce = static_cast<ifc2x3::IfcStructuralLoadLinearForce* > (ListIfcStructuralLoad[0].get());
		TEST_ASSERT(StructuralLoadLinearForce->getLinearForceX()==1);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearForceY()==1);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearForceZ()==1);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearMomentX()==1);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearMomentY()==1);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearMomentZ()==1);
	}
	if(dynamic_cast<ifc2x3::IfcStructuralLoadPlanarForce* > (ListIfcStructuralLoad[1].get()))
	{	
		Step::RefPtr<ifc2x3::IfcStructuralLoadPlanarForce> StructuralLoadPlanarForce = static_cast<ifc2x3::IfcStructuralLoadPlanarForce* > (ListIfcStructuralLoad[1].get());
		TEST_ASSERT(StructuralLoadPlanarForce->getPlanarForceX()==2);
		TEST_ASSERT(StructuralLoadPlanarForce->getPlanarForceY()==2);
		TEST_ASSERT(StructuralLoadPlanarForce->getPlanarForceZ()==2);

	}
	if(dynamic_cast<ifc2x3::IfcStructuralLoadSingleDisplacement* > (ListIfcStructuralLoad[2].get()))
	{	
		Step::RefPtr<ifc2x3::IfcStructuralLoadSingleDisplacement> StructuralLoadSingleDisplacement = static_cast<ifc2x3::IfcStructuralLoadSingleDisplacement* > (ListIfcStructuralLoad[2].get());
		TEST_ASSERT(StructuralLoadSingleDisplacement->getDisplacementX()==3);
		TEST_ASSERT(StructuralLoadSingleDisplacement->getDisplacementY()==3);
		TEST_ASSERT(StructuralLoadSingleDisplacement->getDisplacementZ()==3);
		TEST_ASSERT(StructuralLoadSingleDisplacement->getRotationalDisplacementRX()==3);
		TEST_ASSERT(StructuralLoadSingleDisplacement->getRotationalDisplacementRY()==3);
		TEST_ASSERT(StructuralLoadSingleDisplacement->getRotationalDisplacementRZ()==3);
	}
	if(dynamic_cast<ifc2x3::IfcStructuralLoadSingleForce* > (ListIfcStructuralLoad[3].get()))
	{	
		Step::RefPtr<ifc2x3::IfcStructuralLoadSingleForce> StructuralLoadSingleForce = static_cast<ifc2x3::IfcStructuralLoadSingleForce* > (ListIfcStructuralLoad[3].get());
		TEST_ASSERT(StructuralLoadSingleForce->getForceX()==4);
		TEST_ASSERT(StructuralLoadSingleForce->getForceY()==4);
		TEST_ASSERT(StructuralLoadSingleForce->getForceZ()==4);
		TEST_ASSERT(StructuralLoadSingleForce->getMomentX()==4);
		TEST_ASSERT(StructuralLoadSingleForce->getMomentY()==4);
		TEST_ASSERT(StructuralLoadSingleForce->getMomentZ()==4);
	}
	if(dynamic_cast<ifc2x3::IfcStructuralLoadTemperature* > (ListIfcStructuralLoad[4].get()))
	{	
		Step::RefPtr<ifc2x3::IfcStructuralLoadTemperature> StructuralLoadTemperature = static_cast<ifc2x3::IfcStructuralLoadTemperature* > (ListIfcStructuralLoad[4].get());
		TEST_ASSERT(StructuralLoadTemperature->getDeltaT_Constant()==5);
		TEST_ASSERT(StructuralLoadTemperature->getDeltaT_Y()==5);
		TEST_ASSERT(StructuralLoadTemperature->getDeltaT_Z()==5);
	}

	Step::RefPtr< ifc2x3::IfcStructuralLoad > StructuralAppliedLoad = eds->createIfcStructuralLoadLinearForce();
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralAppliedLoad)->setLinearForceX(0);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralAppliedLoad)->setLinearForceY(0);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralAppliedLoad)->setLinearForceZ(0);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralAppliedLoad)->setLinearMomentX(0);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralAppliedLoad)->setLinearMomentY(0);
	static_cast<Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> > (StructuralAppliedLoad)->setLinearMomentZ(0);
	StructuralLinearActionVarying->setAppliedLoad(StructuralAppliedLoad);

	ListIfcStructuralLoad = StructuralLinearActionVarying->getVaryingAppliedLoads();
	if(dynamic_cast<ifc2x3::IfcStructuralLoadLinearForce* > (ListIfcStructuralLoad[0].get()))
	{	
		Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> StructuralLoadLinearForce = static_cast<ifc2x3::IfcStructuralLoadLinearForce* > (ListIfcStructuralLoad[0].get());
		TEST_ASSERT(StructuralLoadLinearForce->getLinearForceX()==0);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearForceY()==0);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearForceZ()==0);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearMomentX()==0);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearMomentY()==0);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearMomentZ()==0);
	}
	if(dynamic_cast<ifc2x3::IfcStructuralLoadLinearForce* > (ListIfcStructuralLoad[1].get()))
	{	
		Step::RefPtr<ifc2x3::IfcStructuralLoadLinearForce> StructuralLoadLinearForce = static_cast<ifc2x3::IfcStructuralLoadLinearForce* > (ListIfcStructuralLoad[1].get());
		TEST_ASSERT(StructuralLoadLinearForce->getLinearForceX()==1);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearForceY()==1);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearForceZ()==1);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearMomentX()==1);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearMomentY()==1);
		TEST_ASSERT(StructuralLoadLinearForce->getLinearMomentZ()==1);
	}
	if(dynamic_cast<ifc2x3::IfcStructuralLoadPlanarForce* > (ListIfcStructuralLoad[2].get()))
	{	
		Step::RefPtr<ifc2x3::IfcStructuralLoadPlanarForce> StructuralLoadPlanarForce = static_cast<ifc2x3::IfcStructuralLoadPlanarForce* > (ListIfcStructuralLoad[2].get());
		TEST_ASSERT(StructuralLoadPlanarForce->getPlanarForceX()==2);
		TEST_ASSERT(StructuralLoadPlanarForce->getPlanarForceY()==2);
		TEST_ASSERT(StructuralLoadPlanarForce->getPlanarForceZ()==2);

	}
	if(dynamic_cast<ifc2x3::IfcStructuralLoadSingleDisplacement* > (ListIfcStructuralLoad[3].get()))
	{	
		Step::RefPtr<ifc2x3::IfcStructuralLoadSingleDisplacement> StructuralLoadSingleDisplacement = static_cast<ifc2x3::IfcStructuralLoadSingleDisplacement* > (ListIfcStructuralLoad[3].get());
		TEST_ASSERT(StructuralLoadSingleDisplacement->getDisplacementX()==3);
		TEST_ASSERT(StructuralLoadSingleDisplacement->getDisplacementY()==3);
		TEST_ASSERT(StructuralLoadSingleDisplacement->getDisplacementZ()==3);
		TEST_ASSERT(StructuralLoadSingleDisplacement->getRotationalDisplacementRX()==3);
		TEST_ASSERT(StructuralLoadSingleDisplacement->getRotationalDisplacementRY()==3);
		TEST_ASSERT(StructuralLoadSingleDisplacement->getRotationalDisplacementRZ()==3);
	}
	if(dynamic_cast<ifc2x3::IfcStructuralLoadSingleForce* > (ListIfcStructuralLoad[4].get()))
	{	
		Step::RefPtr<ifc2x3::IfcStructuralLoadSingleForce> StructuralLoadSingleForce = static_cast<ifc2x3::IfcStructuralLoadSingleForce* > (ListIfcStructuralLoad[4].get());
		TEST_ASSERT(StructuralLoadSingleForce->getForceX()==4);
		TEST_ASSERT(StructuralLoadSingleForce->getForceY()==4);
		TEST_ASSERT(StructuralLoadSingleForce->getForceZ()==4);
		TEST_ASSERT(StructuralLoadSingleForce->getMomentX()==4);
		TEST_ASSERT(StructuralLoadSingleForce->getMomentY()==4);
		TEST_ASSERT(StructuralLoadSingleForce->getMomentZ()==4);
	}
	if(dynamic_cast<ifc2x3::IfcStructuralLoadTemperature* > (ListIfcStructuralLoad[5].get()))
	{	
		Step::RefPtr<ifc2x3::IfcStructuralLoadTemperature> StructuralLoadTemperature = static_cast<ifc2x3::IfcStructuralLoadTemperature* > (ListIfcStructuralLoad[5].get());
		TEST_ASSERT(StructuralLoadTemperature->getDeltaT_Constant()==5);
		TEST_ASSERT(StructuralLoadTemperature->getDeltaT_Y()==5);
		TEST_ASSERT(StructuralLoadTemperature->getDeltaT_Z()==5);
	}

	std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

	return failure_results;
}
