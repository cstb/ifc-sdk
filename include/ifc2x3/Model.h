/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_MODEL_H
#define IFC2X3_MODEL_H
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseModel.h>

namespace ifc2x3 {

  class Ifc2DCompositeCurve_Factory;
  class IfcActionRequest_Factory;
  class IfcActorRole_Factory;
  class IfcActor_Factory;
  class IfcActuatorType_Factory;
  class IfcAirTerminalBoxType_Factory;
  class IfcAirTerminalType_Factory;
  class IfcAirToAirHeatRecoveryType_Factory;
  class IfcAlarmType_Factory;
  class IfcAngularDimension_Factory;
  class IfcAnnotationCurveOccurrence_Factory;
  class IfcAnnotationFillAreaOccurrence_Factory;
  class IfcAnnotationFillArea_Factory;
  class IfcAnnotationSurfaceOccurrence_Factory;
  class IfcAnnotationSurface_Factory;
  class IfcAnnotationSymbolOccurrence_Factory;
  class IfcAnnotationTextOccurrence_Factory;
  class IfcAnnotation_Factory;
  class IfcApplication_Factory;
  class IfcAppliedValueRelationship_Factory;
  class IfcApprovalActorRelationship_Factory;
  class IfcApprovalPropertyRelationship_Factory;
  class IfcApprovalRelationship_Factory;
  class IfcApproval_Factory;
  class IfcArbitraryClosedProfileDef_Factory;
  class IfcArbitraryOpenProfileDef_Factory;
  class IfcArbitraryProfileDefWithVoids_Factory;
  class IfcAsset_Factory;
  class IfcAsymmetricIShapeProfileDef_Factory;
  class IfcAxis1Placement_Factory;
  class IfcAxis2Placement2D_Factory;
  class IfcAxis2Placement3D_Factory;
  class IfcBeamType_Factory;
  class IfcBeam_Factory;
  class IfcBezierCurve_Factory;
  class IfcBlobTexture_Factory;
  class IfcBlock_Factory;
  class IfcBoilerType_Factory;
  class IfcBooleanClippingResult_Factory;
  class IfcBooleanResult_Factory;
  class IfcBoundaryEdgeCondition_Factory;
  class IfcBoundaryFaceCondition_Factory;
  class IfcBoundaryNodeConditionWarping_Factory;
  class IfcBoundaryNodeCondition_Factory;
  class IfcBoundedSurface_Factory;
  class IfcBoundingBox_Factory;
  class IfcBoxedHalfSpace_Factory;
  class IfcBuildingElementPart_Factory;
  class IfcBuildingElementProxyType_Factory;
  class IfcBuildingElementProxy_Factory;
  class IfcBuildingStorey_Factory;
  class IfcBuilding_Factory;
  class IfcCShapeProfileDef_Factory;
  class IfcCableCarrierFittingType_Factory;
  class IfcCableCarrierSegmentType_Factory;
  class IfcCableSegmentType_Factory;
  class IfcCalendarDate_Factory;
  class IfcCartesianPoint_Factory;
  class IfcCartesianTransformationOperator2D_Factory;
  class IfcCartesianTransformationOperator2DnonUniform_Factory;
  class IfcCartesianTransformationOperator3D_Factory;
  class IfcCartesianTransformationOperator3DnonUniform_Factory;
  class IfcCenterLineProfileDef_Factory;
  class IfcChamferEdgeFeature_Factory;
  class IfcChillerType_Factory;
  class IfcCircleHollowProfileDef_Factory;
  class IfcCircleProfileDef_Factory;
  class IfcCircle_Factory;
  class IfcClassificationItemRelationship_Factory;
  class IfcClassificationItem_Factory;
  class IfcClassificationNotationFacet_Factory;
  class IfcClassificationNotation_Factory;
  class IfcClassificationReference_Factory;
  class IfcClassification_Factory;
  class IfcClosedShell_Factory;
  class IfcCoilType_Factory;
  class IfcColourRgb_Factory;
  class IfcColumnType_Factory;
  class IfcColumn_Factory;
  class IfcComplexProperty_Factory;
  class IfcCompositeCurveSegment_Factory;
  class IfcCompositeCurve_Factory;
  class IfcCompositeProfileDef_Factory;
  class IfcCompressorType_Factory;
  class IfcCondenserType_Factory;
  class IfcConditionCriterion_Factory;
  class IfcCondition_Factory;
  class IfcConnectedFaceSet_Factory;
  class IfcConnectionCurveGeometry_Factory;
  class IfcConnectionPointEccentricity_Factory;
  class IfcConnectionPointGeometry_Factory;
  class IfcConnectionPortGeometry_Factory;
  class IfcConnectionSurfaceGeometry_Factory;
  class IfcConstraintAggregationRelationship_Factory;
  class IfcConstraintClassificationRelationship_Factory;
  class IfcConstraintRelationship_Factory;
  class IfcConstructionEquipmentResource_Factory;
  class IfcConstructionMaterialResource_Factory;
  class IfcConstructionProductResource_Factory;
  class IfcContextDependentUnit_Factory;
  class IfcControllerType_Factory;
  class IfcConversionBasedUnit_Factory;
  class IfcCooledBeamType_Factory;
  class IfcCoolingTowerType_Factory;
  class IfcCoordinatedUniversalTimeOffset_Factory;
  class IfcCostItem_Factory;
  class IfcCostSchedule_Factory;
  class IfcCostValue_Factory;
  class IfcCoveringType_Factory;
  class IfcCovering_Factory;
  class IfcCraneRailAShapeProfileDef_Factory;
  class IfcCraneRailFShapeProfileDef_Factory;
  class IfcCrewResource_Factory;
  class IfcCsgSolid_Factory;
  class IfcCurrencyRelationship_Factory;
  class IfcCurtainWallType_Factory;
  class IfcCurtainWall_Factory;
  class IfcCurveBoundedPlane_Factory;
  class IfcCurveStyleFontAndScaling_Factory;
  class IfcCurveStyleFontPattern_Factory;
  class IfcCurveStyleFont_Factory;
  class IfcCurveStyle_Factory;
  class IfcDamperType_Factory;
  class IfcDateAndTime_Factory;
  class IfcDefinedSymbol_Factory;
  class IfcDerivedProfileDef_Factory;
  class IfcDerivedUnitElement_Factory;
  class IfcDerivedUnit_Factory;
  class IfcDiameterDimension_Factory;
  class IfcDimensionCalloutRelationship_Factory;
  class IfcDimensionCurveDirectedCallout_Factory;
  class IfcDimensionCurveTerminator_Factory;
  class IfcDimensionCurve_Factory;
  class IfcDimensionPair_Factory;
  class IfcDimensionalExponents_Factory;
  class IfcDirection_Factory;
  class IfcDiscreteAccessoryType_Factory;
  class IfcDiscreteAccessory_Factory;
  class IfcDistributionChamberElementType_Factory;
  class IfcDistributionChamberElement_Factory;
  class IfcDistributionControlElement_Factory;
  class IfcDistributionElementType_Factory;
  class IfcDistributionElement_Factory;
  class IfcDistributionFlowElement_Factory;
  class IfcDistributionPort_Factory;
  class IfcDocumentElectronicFormat_Factory;
  class IfcDocumentInformationRelationship_Factory;
  class IfcDocumentInformation_Factory;
  class IfcDocumentReference_Factory;
  class IfcDoorLiningProperties_Factory;
  class IfcDoorPanelProperties_Factory;
  class IfcDoorStyle_Factory;
  class IfcDoor_Factory;
  class IfcDraughtingCalloutRelationship_Factory;
  class IfcDraughtingCallout_Factory;
  class IfcDraughtingPreDefinedColour_Factory;
  class IfcDraughtingPreDefinedCurveFont_Factory;
  class IfcDraughtingPreDefinedTextFont_Factory;
  class IfcDuctFittingType_Factory;
  class IfcDuctSegmentType_Factory;
  class IfcDuctSilencerType_Factory;
  class IfcEdgeCurve_Factory;
  class IfcEdgeLoop_Factory;
  class IfcEdge_Factory;
  class IfcElectricApplianceType_Factory;
  class IfcElectricDistributionPoint_Factory;
  class IfcElectricFlowStorageDeviceType_Factory;
  class IfcElectricGeneratorType_Factory;
  class IfcElectricHeaterType_Factory;
  class IfcElectricMotorType_Factory;
  class IfcElectricTimeControlType_Factory;
  class IfcElectricalBaseProperties_Factory;
  class IfcElectricalCircuit_Factory;
  class IfcElectricalElement_Factory;
  class IfcElementAssembly_Factory;
  class IfcElementQuantity_Factory;
  class IfcEllipseProfileDef_Factory;
  class IfcEllipse_Factory;
  class IfcEnergyConversionDevice_Factory;
  class IfcEnergyProperties_Factory;
  class IfcEnvironmentalImpactValue_Factory;
  class IfcEquipmentElement_Factory;
  class IfcEquipmentStandard_Factory;
  class IfcEvaporativeCoolerType_Factory;
  class IfcEvaporatorType_Factory;
  class IfcExtendedMaterialProperties_Factory;
  class IfcExternallyDefinedHatchStyle_Factory;
  class IfcExternallyDefinedSurfaceStyle_Factory;
  class IfcExternallyDefinedSymbol_Factory;
  class IfcExternallyDefinedTextFont_Factory;
  class IfcExtrudedAreaSolid_Factory;
  class IfcFaceBasedSurfaceModel_Factory;
  class IfcFaceBound_Factory;
  class IfcFaceOuterBound_Factory;
  class IfcFaceSurface_Factory;
  class IfcFace_Factory;
  class IfcFacetedBrepWithVoids_Factory;
  class IfcFacetedBrep_Factory;
  class IfcFailureConnectionCondition_Factory;
  class IfcFanType_Factory;
  class IfcFastenerType_Factory;
  class IfcFastener_Factory;
  class IfcFillAreaStyleHatching_Factory;
  class IfcFillAreaStyleTileSymbolWithStyle_Factory;
  class IfcFillAreaStyleTiles_Factory;
  class IfcFillAreaStyle_Factory;
  class IfcFilterType_Factory;
  class IfcFireSuppressionTerminalType_Factory;
  class IfcFlowController_Factory;
  class IfcFlowFitting_Factory;
  class IfcFlowInstrumentType_Factory;
  class IfcFlowMeterType_Factory;
  class IfcFlowMovingDevice_Factory;
  class IfcFlowSegment_Factory;
  class IfcFlowStorageDevice_Factory;
  class IfcFlowTerminal_Factory;
  class IfcFlowTreatmentDevice_Factory;
  class IfcFluidFlowProperties_Factory;
  class IfcFooting_Factory;
  class IfcFuelProperties_Factory;
  class IfcFurnishingElementType_Factory;
  class IfcFurnishingElement_Factory;
  class IfcFurnitureStandard_Factory;
  class IfcFurnitureType_Factory;
  class IfcGasTerminalType_Factory;
  class IfcGeneralMaterialProperties_Factory;
  class IfcGeneralProfileProperties_Factory;
  class IfcGeometricCurveSet_Factory;
  class IfcGeometricRepresentationContext_Factory;
  class IfcGeometricRepresentationSubContext_Factory;
  class IfcGeometricSet_Factory;
  class IfcGridAxis_Factory;
  class IfcGridPlacement_Factory;
  class IfcGrid_Factory;
  class IfcGroup_Factory;
  class IfcHalfSpaceSolid_Factory;
  class IfcHeatExchangerType_Factory;
  class IfcHumidifierType_Factory;
  class IfcHygroscopicMaterialProperties_Factory;
  class IfcIShapeProfileDef_Factory;
  class IfcImageTexture_Factory;
  class IfcInventory_Factory;
  class IfcIrregularTimeSeriesValue_Factory;
  class IfcIrregularTimeSeries_Factory;
  class IfcJunctionBoxType_Factory;
  class IfcLShapeProfileDef_Factory;
  class IfcLaborResource_Factory;
  class IfcLampType_Factory;
  class IfcLibraryInformation_Factory;
  class IfcLibraryReference_Factory;
  class IfcLightDistributionData_Factory;
  class IfcLightFixtureType_Factory;
  class IfcLightIntensityDistribution_Factory;
  class IfcLightSourceAmbient_Factory;
  class IfcLightSourceDirectional_Factory;
  class IfcLightSourceGoniometric_Factory;
  class IfcLightSourcePositional_Factory;
  class IfcLightSourceSpot_Factory;
  class IfcLine_Factory;
  class IfcLinearDimension_Factory;
  class IfcLocalPlacement_Factory;
  class IfcLocalTime_Factory;
  class IfcLoop_Factory;
  class IfcMappedItem_Factory;
  class IfcMaterialClassificationRelationship_Factory;
  class IfcMaterialDefinitionRepresentation_Factory;
  class IfcMaterialLayerSetUsage_Factory;
  class IfcMaterialLayerSet_Factory;
  class IfcMaterialLayer_Factory;
  class IfcMaterialList_Factory;
  class IfcMaterial_Factory;
  class IfcMeasureWithUnit_Factory;
  class IfcMechanicalConcreteMaterialProperties_Factory;
  class IfcMechanicalFastenerType_Factory;
  class IfcMechanicalFastener_Factory;
  class IfcMechanicalMaterialProperties_Factory;
  class IfcMechanicalSteelMaterialProperties_Factory;
  class IfcMemberType_Factory;
  class IfcMember_Factory;
  class IfcMetric_Factory;
  class IfcMonetaryUnit_Factory;
  class IfcMotorConnectionType_Factory;
  class IfcMove_Factory;
  class IfcObjective_Factory;
  class IfcOccupant_Factory;
  class IfcOffsetCurve2D_Factory;
  class IfcOffsetCurve3D_Factory;
  class IfcOneDirectionRepeatFactor_Factory;
  class IfcOpenShell_Factory;
  class IfcOpeningElement_Factory;
  class IfcOpticalMaterialProperties_Factory;
  class IfcOrderAction_Factory;
  class IfcOrganizationRelationship_Factory;
  class IfcOrganization_Factory;
  class IfcOrientedEdge_Factory;
  class IfcOutletType_Factory;
  class IfcOwnerHistory_Factory;
  class IfcPath_Factory;
  class IfcPerformanceHistory_Factory;
  class IfcPermeableCoveringProperties_Factory;
  class IfcPermit_Factory;
  class IfcPersonAndOrganization_Factory;
  class IfcPerson_Factory;
  class IfcPhysicalComplexQuantity_Factory;
  class IfcPile_Factory;
  class IfcPipeFittingType_Factory;
  class IfcPipeSegmentType_Factory;
  class IfcPixelTexture_Factory;
  class IfcPlanarBox_Factory;
  class IfcPlanarExtent_Factory;
  class IfcPlane_Factory;
  class IfcPlateType_Factory;
  class IfcPlate_Factory;
  class IfcPointOnCurve_Factory;
  class IfcPointOnSurface_Factory;
  class IfcPolyLoop_Factory;
  class IfcPolygonalBoundedHalfSpace_Factory;
  class IfcPolyline_Factory;
  class IfcPostalAddress_Factory;
  class IfcPreDefinedDimensionSymbol_Factory;
  class IfcPreDefinedPointMarkerSymbol_Factory;
  class IfcPreDefinedTerminatorSymbol_Factory;
  class IfcPresentationLayerAssignment_Factory;
  class IfcPresentationLayerWithStyle_Factory;
  class IfcPresentationStyleAssignment_Factory;
  class IfcProcedure_Factory;
  class IfcProductDefinitionShape_Factory;
  class IfcProductRepresentation_Factory;
  class IfcProductsOfCombustionProperties_Factory;
  class IfcProjectOrderRecord_Factory;
  class IfcProjectOrder_Factory;
  class IfcProject_Factory;
  class IfcProjectionCurve_Factory;
  class IfcProjectionElement_Factory;
  class IfcPropertyBoundedValue_Factory;
  class IfcPropertyConstraintRelationship_Factory;
  class IfcPropertyDependencyRelationship_Factory;
  class IfcPropertyEnumeratedValue_Factory;
  class IfcPropertyEnumeration_Factory;
  class IfcPropertyListValue_Factory;
  class IfcPropertyReferenceValue_Factory;
  class IfcPropertySet_Factory;
  class IfcPropertySingleValue_Factory;
  class IfcPropertyTableValue_Factory;
  class IfcProtectiveDeviceType_Factory;
  class IfcProxy_Factory;
  class IfcPumpType_Factory;
  class IfcQuantityArea_Factory;
  class IfcQuantityCount_Factory;
  class IfcQuantityLength_Factory;
  class IfcQuantityTime_Factory;
  class IfcQuantityVolume_Factory;
  class IfcQuantityWeight_Factory;
  class IfcRadiusDimension_Factory;
  class IfcRailingType_Factory;
  class IfcRailing_Factory;
  class IfcRampFlightType_Factory;
  class IfcRampFlight_Factory;
  class IfcRamp_Factory;
  class IfcRationalBezierCurve_Factory;
  class IfcRectangleHollowProfileDef_Factory;
  class IfcRectangleProfileDef_Factory;
  class IfcRectangularPyramid_Factory;
  class IfcRectangularTrimmedSurface_Factory;
  class IfcReferencesValueDocument_Factory;
  class IfcRegularTimeSeries_Factory;
  class IfcReinforcementBarProperties_Factory;
  class IfcReinforcementDefinitionProperties_Factory;
  class IfcReinforcingBar_Factory;
  class IfcReinforcingMesh_Factory;
  class IfcRelAggregates_Factory;
  class IfcRelAssignsTasks_Factory;
  class IfcRelAssignsToActor_Factory;
  class IfcRelAssignsToControl_Factory;
  class IfcRelAssignsToGroup_Factory;
  class IfcRelAssignsToProcess_Factory;
  class IfcRelAssignsToProduct_Factory;
  class IfcRelAssignsToProjectOrder_Factory;
  class IfcRelAssignsToResource_Factory;
  class IfcRelAssociatesAppliedValue_Factory;
  class IfcRelAssociatesApproval_Factory;
  class IfcRelAssociatesClassification_Factory;
  class IfcRelAssociatesConstraint_Factory;
  class IfcRelAssociatesDocument_Factory;
  class IfcRelAssociatesLibrary_Factory;
  class IfcRelAssociatesMaterial_Factory;
  class IfcRelAssociatesProfileProperties_Factory;
  class IfcRelAssociates_Factory;
  class IfcRelConnectsElements_Factory;
  class IfcRelConnectsPathElements_Factory;
  class IfcRelConnectsPortToElement_Factory;
  class IfcRelConnectsPorts_Factory;
  class IfcRelConnectsStructuralActivity_Factory;
  class IfcRelConnectsStructuralElement_Factory;
  class IfcRelConnectsStructuralMember_Factory;
  class IfcRelConnectsWithEccentricity_Factory;
  class IfcRelConnectsWithRealizingElements_Factory;
  class IfcRelContainedInSpatialStructure_Factory;
  class IfcRelCoversBldgElements_Factory;
  class IfcRelCoversSpaces_Factory;
  class IfcRelDefinesByProperties_Factory;
  class IfcRelDefinesByType_Factory;
  class IfcRelFillsElement_Factory;
  class IfcRelFlowControlElements_Factory;
  class IfcRelInteractionRequirements_Factory;
  class IfcRelNests_Factory;
  class IfcRelOccupiesSpaces_Factory;
  class IfcRelOverridesProperties_Factory;
  class IfcRelProjectsElement_Factory;
  class IfcRelReferencedInSpatialStructure_Factory;
  class IfcRelSchedulesCostItems_Factory;
  class IfcRelSequence_Factory;
  class IfcRelServicesBuildings_Factory;
  class IfcRelSpaceBoundary_Factory;
  class IfcRelVoidsElement_Factory;
  class IfcRelaxation_Factory;
  class IfcRepresentationContext_Factory;
  class IfcRepresentationMap_Factory;
  class IfcRepresentation_Factory;
  class IfcRevolvedAreaSolid_Factory;
  class IfcRibPlateProfileProperties_Factory;
  class IfcRightCircularCone_Factory;
  class IfcRightCircularCylinder_Factory;
  class IfcRoof_Factory;
  class IfcRoundedEdgeFeature_Factory;
  class IfcRoundedRectangleProfileDef_Factory;
  class IfcSIUnit_Factory;
  class IfcSanitaryTerminalType_Factory;
  class IfcScheduleTimeControl_Factory;
  class IfcSectionProperties_Factory;
  class IfcSectionReinforcementProperties_Factory;
  class IfcSectionedSpine_Factory;
  class IfcSensorType_Factory;
  class IfcServiceLifeFactor_Factory;
  class IfcServiceLife_Factory;
  class IfcShapeAspect_Factory;
  class IfcShapeRepresentation_Factory;
  class IfcShellBasedSurfaceModel_Factory;
  class IfcSite_Factory;
  class IfcSlabType_Factory;
  class IfcSlab_Factory;
  class IfcSlippageConnectionCondition_Factory;
  class IfcSoundProperties_Factory;
  class IfcSoundValue_Factory;
  class IfcSpaceHeaterType_Factory;
  class IfcSpaceProgram_Factory;
  class IfcSpaceThermalLoadProperties_Factory;
  class IfcSpaceType_Factory;
  class IfcSpace_Factory;
  class IfcSphere_Factory;
  class IfcStackTerminalType_Factory;
  class IfcStairFlightType_Factory;
  class IfcStairFlight_Factory;
  class IfcStair_Factory;
  class IfcStructuralAnalysisModel_Factory;
  class IfcStructuralCurveConnection_Factory;
  class IfcStructuralCurveMemberVarying_Factory;
  class IfcStructuralCurveMember_Factory;
  class IfcStructuralLinearActionVarying_Factory;
  class IfcStructuralLinearAction_Factory;
  class IfcStructuralLoadGroup_Factory;
  class IfcStructuralLoadLinearForce_Factory;
  class IfcStructuralLoadPlanarForce_Factory;
  class IfcStructuralLoadSingleDisplacementDistortion_Factory;
  class IfcStructuralLoadSingleDisplacement_Factory;
  class IfcStructuralLoadSingleForceWarping_Factory;
  class IfcStructuralLoadSingleForce_Factory;
  class IfcStructuralLoadTemperature_Factory;
  class IfcStructuralPlanarActionVarying_Factory;
  class IfcStructuralPlanarAction_Factory;
  class IfcStructuralPointAction_Factory;
  class IfcStructuralPointConnection_Factory;
  class IfcStructuralPointReaction_Factory;
  class IfcStructuralProfileProperties_Factory;
  class IfcStructuralResultGroup_Factory;
  class IfcStructuralSteelProfileProperties_Factory;
  class IfcStructuralSurfaceConnection_Factory;
  class IfcStructuralSurfaceMemberVarying_Factory;
  class IfcStructuralSurfaceMember_Factory;
  class IfcStructuredDimensionCallout_Factory;
  class IfcStyledItem_Factory;
  class IfcStyledRepresentation_Factory;
  class IfcSubContractResource_Factory;
  class IfcSubedge_Factory;
  class IfcSurfaceCurveSweptAreaSolid_Factory;
  class IfcSurfaceOfLinearExtrusion_Factory;
  class IfcSurfaceOfRevolution_Factory;
  class IfcSurfaceStyleLighting_Factory;
  class IfcSurfaceStyleRefraction_Factory;
  class IfcSurfaceStyleRendering_Factory;
  class IfcSurfaceStyleShading_Factory;
  class IfcSurfaceStyleWithTextures_Factory;
  class IfcSurfaceStyle_Factory;
  class IfcSweptDiskSolid_Factory;
  class IfcSwitchingDeviceType_Factory;
  class IfcSymbolStyle_Factory;
  class IfcSystemFurnitureElementType_Factory;
  class IfcSystem_Factory;
  class IfcTShapeProfileDef_Factory;
  class IfcTableRow_Factory;
  class IfcTable_Factory;
  class IfcTankType_Factory;
  class IfcTask_Factory;
  class IfcTelecomAddress_Factory;
  class IfcTendonAnchor_Factory;
  class IfcTendon_Factory;
  class IfcTerminatorSymbol_Factory;
  class IfcTextLiteralWithExtent_Factory;
  class IfcTextLiteral_Factory;
  class IfcTextStyleFontModel_Factory;
  class IfcTextStyleForDefinedFont_Factory;
  class IfcTextStyleTextModel_Factory;
  class IfcTextStyleWithBoxCharacteristics_Factory;
  class IfcTextStyle_Factory;
  class IfcTextureCoordinateGenerator_Factory;
  class IfcTextureMap_Factory;
  class IfcTextureVertex_Factory;
  class IfcThermalMaterialProperties_Factory;
  class IfcTimeSeriesReferenceRelationship_Factory;
  class IfcTimeSeriesSchedule_Factory;
  class IfcTimeSeriesValue_Factory;
  class IfcTopologyRepresentation_Factory;
  class IfcTransformerType_Factory;
  class IfcTransportElementType_Factory;
  class IfcTransportElement_Factory;
  class IfcTrapeziumProfileDef_Factory;
  class IfcTrimmedCurve_Factory;
  class IfcTubeBundleType_Factory;
  class IfcTwoDirectionRepeatFactor_Factory;
  class IfcTypeObject_Factory;
  class IfcTypeProduct_Factory;
  class IfcUShapeProfileDef_Factory;
  class IfcUnitAssignment_Factory;
  class IfcUnitaryEquipmentType_Factory;
  class IfcValveType_Factory;
  class IfcVector_Factory;
  class IfcVertexBasedTextureMap_Factory;
  class IfcVertexLoop_Factory;
  class IfcVertexPoint_Factory;
  class IfcVertex_Factory;
  class IfcVibrationIsolatorType_Factory;
  class IfcVirtualElement_Factory;
  class IfcVirtualGridIntersection_Factory;
  class IfcWallStandardCase_Factory;
  class IfcWallType_Factory;
  class IfcWall_Factory;
  class IfcWasteTerminalType_Factory;
  class IfcWaterProperties_Factory;
  class IfcWindowLiningProperties_Factory;
  class IfcWindowPanelProperties_Factory;
  class IfcWindowStyle_Factory;
  class IfcWindow_Factory;
  class IfcWorkPlan_Factory;
  class IfcWorkSchedule_Factory;
  class IfcZShapeProfileDef_Factory;
  class IfcZone_Factory;

  /**
   */
  class IFC2X3_DLL_DEF Model : public Step::BaseModel {
  public:
    Ifc2DCompositeCurve_Factory *m_Ifc2DCompositeCurve_Factory;
    IfcActionRequest_Factory *m_IfcActionRequest_Factory;
    IfcActor_Factory *m_IfcActor_Factory;
    IfcActorRole_Factory *m_IfcActorRole_Factory;
    IfcActuatorType_Factory *m_IfcActuatorType_Factory;
    IfcAirTerminalBoxType_Factory *m_IfcAirTerminalBoxType_Factory;
    IfcAirTerminalType_Factory *m_IfcAirTerminalType_Factory;
    IfcAirToAirHeatRecoveryType_Factory *m_IfcAirToAirHeatRecoveryType_Factory;
    IfcAlarmType_Factory *m_IfcAlarmType_Factory;
    IfcAngularDimension_Factory *m_IfcAngularDimension_Factory;
    IfcAnnotation_Factory *m_IfcAnnotation_Factory;
    IfcAnnotationCurveOccurrence_Factory *m_IfcAnnotationCurveOccurrence_Factory;
    IfcAnnotationFillArea_Factory *m_IfcAnnotationFillArea_Factory;
    IfcAnnotationFillAreaOccurrence_Factory *m_IfcAnnotationFillAreaOccurrence_Factory;
    IfcAnnotationSurface_Factory *m_IfcAnnotationSurface_Factory;
    IfcAnnotationSurfaceOccurrence_Factory *m_IfcAnnotationSurfaceOccurrence_Factory;
    IfcAnnotationSymbolOccurrence_Factory *m_IfcAnnotationSymbolOccurrence_Factory;
    IfcAnnotationTextOccurrence_Factory *m_IfcAnnotationTextOccurrence_Factory;
    IfcApplication_Factory *m_IfcApplication_Factory;
    IfcAppliedValueRelationship_Factory *m_IfcAppliedValueRelationship_Factory;
    IfcApproval_Factory *m_IfcApproval_Factory;
    IfcApprovalActorRelationship_Factory *m_IfcApprovalActorRelationship_Factory;
    IfcApprovalPropertyRelationship_Factory *m_IfcApprovalPropertyRelationship_Factory;
    IfcApprovalRelationship_Factory *m_IfcApprovalRelationship_Factory;
    IfcArbitraryClosedProfileDef_Factory *m_IfcArbitraryClosedProfileDef_Factory;
    IfcArbitraryOpenProfileDef_Factory *m_IfcArbitraryOpenProfileDef_Factory;
    IfcArbitraryProfileDefWithVoids_Factory *m_IfcArbitraryProfileDefWithVoids_Factory;
    IfcAsset_Factory *m_IfcAsset_Factory;
    IfcAsymmetricIShapeProfileDef_Factory *m_IfcAsymmetricIShapeProfileDef_Factory;
    IfcAxis1Placement_Factory *m_IfcAxis1Placement_Factory;
    IfcAxis2Placement2D_Factory *m_IfcAxis2Placement2D_Factory;
    IfcAxis2Placement3D_Factory *m_IfcAxis2Placement3D_Factory;
    IfcBeam_Factory *m_IfcBeam_Factory;
    IfcBeamType_Factory *m_IfcBeamType_Factory;
    IfcBezierCurve_Factory *m_IfcBezierCurve_Factory;
    IfcBlobTexture_Factory *m_IfcBlobTexture_Factory;
    IfcBlock_Factory *m_IfcBlock_Factory;
    IfcBoilerType_Factory *m_IfcBoilerType_Factory;
    IfcBooleanClippingResult_Factory *m_IfcBooleanClippingResult_Factory;
    IfcBooleanResult_Factory *m_IfcBooleanResult_Factory;
    IfcBoundaryEdgeCondition_Factory *m_IfcBoundaryEdgeCondition_Factory;
    IfcBoundaryFaceCondition_Factory *m_IfcBoundaryFaceCondition_Factory;
    IfcBoundaryNodeCondition_Factory *m_IfcBoundaryNodeCondition_Factory;
    IfcBoundaryNodeConditionWarping_Factory *m_IfcBoundaryNodeConditionWarping_Factory;
    IfcBoundedSurface_Factory *m_IfcBoundedSurface_Factory;
    IfcBoundingBox_Factory *m_IfcBoundingBox_Factory;
    IfcBoxedHalfSpace_Factory *m_IfcBoxedHalfSpace_Factory;
    IfcBuilding_Factory *m_IfcBuilding_Factory;
    IfcBuildingElementPart_Factory *m_IfcBuildingElementPart_Factory;
    IfcBuildingElementProxy_Factory *m_IfcBuildingElementProxy_Factory;
    IfcBuildingElementProxyType_Factory *m_IfcBuildingElementProxyType_Factory;
    IfcBuildingStorey_Factory *m_IfcBuildingStorey_Factory;
    IfcCShapeProfileDef_Factory *m_IfcCShapeProfileDef_Factory;
    IfcCableCarrierFittingType_Factory *m_IfcCableCarrierFittingType_Factory;
    IfcCableCarrierSegmentType_Factory *m_IfcCableCarrierSegmentType_Factory;
    IfcCableSegmentType_Factory *m_IfcCableSegmentType_Factory;
    IfcCalendarDate_Factory *m_IfcCalendarDate_Factory;
    IfcCartesianPoint_Factory *m_IfcCartesianPoint_Factory;
    IfcCartesianTransformationOperator2D_Factory *m_IfcCartesianTransformationOperator2D_Factory;
    IfcCartesianTransformationOperator2DnonUniform_Factory *m_IfcCartesianTransformationOperator2DnonUniform_Factory;
    IfcCartesianTransformationOperator3D_Factory *m_IfcCartesianTransformationOperator3D_Factory;
    IfcCartesianTransformationOperator3DnonUniform_Factory *m_IfcCartesianTransformationOperator3DnonUniform_Factory;
    IfcCenterLineProfileDef_Factory *m_IfcCenterLineProfileDef_Factory;
    IfcChamferEdgeFeature_Factory *m_IfcChamferEdgeFeature_Factory;
    IfcChillerType_Factory *m_IfcChillerType_Factory;
    IfcCircle_Factory *m_IfcCircle_Factory;
    IfcCircleHollowProfileDef_Factory *m_IfcCircleHollowProfileDef_Factory;
    IfcCircleProfileDef_Factory *m_IfcCircleProfileDef_Factory;
    IfcClassification_Factory *m_IfcClassification_Factory;
    IfcClassificationItem_Factory *m_IfcClassificationItem_Factory;
    IfcClassificationItemRelationship_Factory *m_IfcClassificationItemRelationship_Factory;
    IfcClassificationNotation_Factory *m_IfcClassificationNotation_Factory;
    IfcClassificationNotationFacet_Factory *m_IfcClassificationNotationFacet_Factory;
    IfcClassificationReference_Factory *m_IfcClassificationReference_Factory;
    IfcClosedShell_Factory *m_IfcClosedShell_Factory;
    IfcCoilType_Factory *m_IfcCoilType_Factory;
    IfcColourRgb_Factory *m_IfcColourRgb_Factory;
    IfcColumn_Factory *m_IfcColumn_Factory;
    IfcColumnType_Factory *m_IfcColumnType_Factory;
    IfcComplexProperty_Factory *m_IfcComplexProperty_Factory;
    IfcCompositeCurve_Factory *m_IfcCompositeCurve_Factory;
    IfcCompositeCurveSegment_Factory *m_IfcCompositeCurveSegment_Factory;
    IfcCompositeProfileDef_Factory *m_IfcCompositeProfileDef_Factory;
    IfcCompressorType_Factory *m_IfcCompressorType_Factory;
    IfcCondenserType_Factory *m_IfcCondenserType_Factory;
    IfcCondition_Factory *m_IfcCondition_Factory;
    IfcConditionCriterion_Factory *m_IfcConditionCriterion_Factory;
    IfcConnectedFaceSet_Factory *m_IfcConnectedFaceSet_Factory;
    IfcConnectionCurveGeometry_Factory *m_IfcConnectionCurveGeometry_Factory;
    IfcConnectionPointEccentricity_Factory *m_IfcConnectionPointEccentricity_Factory;
    IfcConnectionPointGeometry_Factory *m_IfcConnectionPointGeometry_Factory;
    IfcConnectionPortGeometry_Factory *m_IfcConnectionPortGeometry_Factory;
    IfcConnectionSurfaceGeometry_Factory *m_IfcConnectionSurfaceGeometry_Factory;
    IfcConstraintAggregationRelationship_Factory *m_IfcConstraintAggregationRelationship_Factory;
    IfcConstraintClassificationRelationship_Factory *m_IfcConstraintClassificationRelationship_Factory;
    IfcConstraintRelationship_Factory *m_IfcConstraintRelationship_Factory;
    IfcConstructionEquipmentResource_Factory *m_IfcConstructionEquipmentResource_Factory;
    IfcConstructionMaterialResource_Factory *m_IfcConstructionMaterialResource_Factory;
    IfcConstructionProductResource_Factory *m_IfcConstructionProductResource_Factory;
    IfcContextDependentUnit_Factory *m_IfcContextDependentUnit_Factory;
    IfcControllerType_Factory *m_IfcControllerType_Factory;
    IfcConversionBasedUnit_Factory *m_IfcConversionBasedUnit_Factory;
    IfcCooledBeamType_Factory *m_IfcCooledBeamType_Factory;
    IfcCoolingTowerType_Factory *m_IfcCoolingTowerType_Factory;
    IfcCoordinatedUniversalTimeOffset_Factory *m_IfcCoordinatedUniversalTimeOffset_Factory;
    IfcCostItem_Factory *m_IfcCostItem_Factory;
    IfcCostSchedule_Factory *m_IfcCostSchedule_Factory;
    IfcCostValue_Factory *m_IfcCostValue_Factory;
    IfcCovering_Factory *m_IfcCovering_Factory;
    IfcCoveringType_Factory *m_IfcCoveringType_Factory;
    IfcCraneRailAShapeProfileDef_Factory *m_IfcCraneRailAShapeProfileDef_Factory;
    IfcCraneRailFShapeProfileDef_Factory *m_IfcCraneRailFShapeProfileDef_Factory;
    IfcCrewResource_Factory *m_IfcCrewResource_Factory;
    IfcCsgSolid_Factory *m_IfcCsgSolid_Factory;
    IfcCurrencyRelationship_Factory *m_IfcCurrencyRelationship_Factory;
    IfcCurtainWall_Factory *m_IfcCurtainWall_Factory;
    IfcCurtainWallType_Factory *m_IfcCurtainWallType_Factory;
    IfcCurveBoundedPlane_Factory *m_IfcCurveBoundedPlane_Factory;
    IfcCurveStyle_Factory *m_IfcCurveStyle_Factory;
    IfcCurveStyleFont_Factory *m_IfcCurveStyleFont_Factory;
    IfcCurveStyleFontAndScaling_Factory *m_IfcCurveStyleFontAndScaling_Factory;
    IfcCurveStyleFontPattern_Factory *m_IfcCurveStyleFontPattern_Factory;
    IfcDamperType_Factory *m_IfcDamperType_Factory;
    IfcDateAndTime_Factory *m_IfcDateAndTime_Factory;
    IfcDefinedSymbol_Factory *m_IfcDefinedSymbol_Factory;
    IfcDerivedProfileDef_Factory *m_IfcDerivedProfileDef_Factory;
    IfcDerivedUnit_Factory *m_IfcDerivedUnit_Factory;
    IfcDerivedUnitElement_Factory *m_IfcDerivedUnitElement_Factory;
    IfcDiameterDimension_Factory *m_IfcDiameterDimension_Factory;
    IfcDimensionCalloutRelationship_Factory *m_IfcDimensionCalloutRelationship_Factory;
    IfcDimensionCurve_Factory *m_IfcDimensionCurve_Factory;
    IfcDimensionCurveDirectedCallout_Factory *m_IfcDimensionCurveDirectedCallout_Factory;
    IfcDimensionCurveTerminator_Factory *m_IfcDimensionCurveTerminator_Factory;
    IfcDimensionPair_Factory *m_IfcDimensionPair_Factory;
    IfcDimensionalExponents_Factory *m_IfcDimensionalExponents_Factory;
    IfcDirection_Factory *m_IfcDirection_Factory;
    IfcDiscreteAccessory_Factory *m_IfcDiscreteAccessory_Factory;
    IfcDiscreteAccessoryType_Factory *m_IfcDiscreteAccessoryType_Factory;
    IfcDistributionChamberElement_Factory *m_IfcDistributionChamberElement_Factory;
    IfcDistributionChamberElementType_Factory *m_IfcDistributionChamberElementType_Factory;
    IfcDistributionControlElement_Factory *m_IfcDistributionControlElement_Factory;
    IfcDistributionElement_Factory *m_IfcDistributionElement_Factory;
    IfcDistributionElementType_Factory *m_IfcDistributionElementType_Factory;
    IfcDistributionFlowElement_Factory *m_IfcDistributionFlowElement_Factory;
    IfcDistributionPort_Factory *m_IfcDistributionPort_Factory;
    IfcDocumentElectronicFormat_Factory *m_IfcDocumentElectronicFormat_Factory;
    IfcDocumentInformation_Factory *m_IfcDocumentInformation_Factory;
    IfcDocumentInformationRelationship_Factory *m_IfcDocumentInformationRelationship_Factory;
    IfcDocumentReference_Factory *m_IfcDocumentReference_Factory;
    IfcDoor_Factory *m_IfcDoor_Factory;
    IfcDoorLiningProperties_Factory *m_IfcDoorLiningProperties_Factory;
    IfcDoorPanelProperties_Factory *m_IfcDoorPanelProperties_Factory;
    IfcDoorStyle_Factory *m_IfcDoorStyle_Factory;
    IfcDraughtingCallout_Factory *m_IfcDraughtingCallout_Factory;
    IfcDraughtingCalloutRelationship_Factory *m_IfcDraughtingCalloutRelationship_Factory;
    IfcDraughtingPreDefinedColour_Factory *m_IfcDraughtingPreDefinedColour_Factory;
    IfcDraughtingPreDefinedCurveFont_Factory *m_IfcDraughtingPreDefinedCurveFont_Factory;
    IfcDraughtingPreDefinedTextFont_Factory *m_IfcDraughtingPreDefinedTextFont_Factory;
    IfcDuctFittingType_Factory *m_IfcDuctFittingType_Factory;
    IfcDuctSegmentType_Factory *m_IfcDuctSegmentType_Factory;
    IfcDuctSilencerType_Factory *m_IfcDuctSilencerType_Factory;
    IfcEdge_Factory *m_IfcEdge_Factory;
    IfcEdgeCurve_Factory *m_IfcEdgeCurve_Factory;
    IfcEdgeLoop_Factory *m_IfcEdgeLoop_Factory;
    IfcElectricApplianceType_Factory *m_IfcElectricApplianceType_Factory;
    IfcElectricDistributionPoint_Factory *m_IfcElectricDistributionPoint_Factory;
    IfcElectricFlowStorageDeviceType_Factory *m_IfcElectricFlowStorageDeviceType_Factory;
    IfcElectricGeneratorType_Factory *m_IfcElectricGeneratorType_Factory;
    IfcElectricHeaterType_Factory *m_IfcElectricHeaterType_Factory;
    IfcElectricMotorType_Factory *m_IfcElectricMotorType_Factory;
    IfcElectricTimeControlType_Factory *m_IfcElectricTimeControlType_Factory;
    IfcElectricalBaseProperties_Factory *m_IfcElectricalBaseProperties_Factory;
    IfcElectricalCircuit_Factory *m_IfcElectricalCircuit_Factory;
    IfcElectricalElement_Factory *m_IfcElectricalElement_Factory;
    IfcElementAssembly_Factory *m_IfcElementAssembly_Factory;
    IfcElementQuantity_Factory *m_IfcElementQuantity_Factory;
    IfcEllipse_Factory *m_IfcEllipse_Factory;
    IfcEllipseProfileDef_Factory *m_IfcEllipseProfileDef_Factory;
    IfcEnergyConversionDevice_Factory *m_IfcEnergyConversionDevice_Factory;
    IfcEnergyProperties_Factory *m_IfcEnergyProperties_Factory;
    IfcEnvironmentalImpactValue_Factory *m_IfcEnvironmentalImpactValue_Factory;
    IfcEquipmentElement_Factory *m_IfcEquipmentElement_Factory;
    IfcEquipmentStandard_Factory *m_IfcEquipmentStandard_Factory;
    IfcEvaporativeCoolerType_Factory *m_IfcEvaporativeCoolerType_Factory;
    IfcEvaporatorType_Factory *m_IfcEvaporatorType_Factory;
    IfcExtendedMaterialProperties_Factory *m_IfcExtendedMaterialProperties_Factory;
    IfcExternallyDefinedHatchStyle_Factory *m_IfcExternallyDefinedHatchStyle_Factory;
    IfcExternallyDefinedSurfaceStyle_Factory *m_IfcExternallyDefinedSurfaceStyle_Factory;
    IfcExternallyDefinedSymbol_Factory *m_IfcExternallyDefinedSymbol_Factory;
    IfcExternallyDefinedTextFont_Factory *m_IfcExternallyDefinedTextFont_Factory;
    IfcExtrudedAreaSolid_Factory *m_IfcExtrudedAreaSolid_Factory;
    IfcFace_Factory *m_IfcFace_Factory;
    IfcFaceBasedSurfaceModel_Factory *m_IfcFaceBasedSurfaceModel_Factory;
    IfcFaceBound_Factory *m_IfcFaceBound_Factory;
    IfcFaceOuterBound_Factory *m_IfcFaceOuterBound_Factory;
    IfcFaceSurface_Factory *m_IfcFaceSurface_Factory;
    IfcFacetedBrep_Factory *m_IfcFacetedBrep_Factory;
    IfcFacetedBrepWithVoids_Factory *m_IfcFacetedBrepWithVoids_Factory;
    IfcFailureConnectionCondition_Factory *m_IfcFailureConnectionCondition_Factory;
    IfcFanType_Factory *m_IfcFanType_Factory;
    IfcFastener_Factory *m_IfcFastener_Factory;
    IfcFastenerType_Factory *m_IfcFastenerType_Factory;
    IfcFillAreaStyle_Factory *m_IfcFillAreaStyle_Factory;
    IfcFillAreaStyleHatching_Factory *m_IfcFillAreaStyleHatching_Factory;
    IfcFillAreaStyleTileSymbolWithStyle_Factory *m_IfcFillAreaStyleTileSymbolWithStyle_Factory;
    IfcFillAreaStyleTiles_Factory *m_IfcFillAreaStyleTiles_Factory;
    IfcFilterType_Factory *m_IfcFilterType_Factory;
    IfcFireSuppressionTerminalType_Factory *m_IfcFireSuppressionTerminalType_Factory;
    IfcFlowController_Factory *m_IfcFlowController_Factory;
    IfcFlowFitting_Factory *m_IfcFlowFitting_Factory;
    IfcFlowInstrumentType_Factory *m_IfcFlowInstrumentType_Factory;
    IfcFlowMeterType_Factory *m_IfcFlowMeterType_Factory;
    IfcFlowMovingDevice_Factory *m_IfcFlowMovingDevice_Factory;
    IfcFlowSegment_Factory *m_IfcFlowSegment_Factory;
    IfcFlowStorageDevice_Factory *m_IfcFlowStorageDevice_Factory;
    IfcFlowTerminal_Factory *m_IfcFlowTerminal_Factory;
    IfcFlowTreatmentDevice_Factory *m_IfcFlowTreatmentDevice_Factory;
    IfcFluidFlowProperties_Factory *m_IfcFluidFlowProperties_Factory;
    IfcFooting_Factory *m_IfcFooting_Factory;
    IfcFuelProperties_Factory *m_IfcFuelProperties_Factory;
    IfcFurnishingElement_Factory *m_IfcFurnishingElement_Factory;
    IfcFurnishingElementType_Factory *m_IfcFurnishingElementType_Factory;
    IfcFurnitureStandard_Factory *m_IfcFurnitureStandard_Factory;
    IfcFurnitureType_Factory *m_IfcFurnitureType_Factory;
    IfcGasTerminalType_Factory *m_IfcGasTerminalType_Factory;
    IfcGeneralMaterialProperties_Factory *m_IfcGeneralMaterialProperties_Factory;
    IfcGeneralProfileProperties_Factory *m_IfcGeneralProfileProperties_Factory;
    IfcGeometricCurveSet_Factory *m_IfcGeometricCurveSet_Factory;
    IfcGeometricRepresentationContext_Factory *m_IfcGeometricRepresentationContext_Factory;
    IfcGeometricRepresentationSubContext_Factory *m_IfcGeometricRepresentationSubContext_Factory;
    IfcGeometricSet_Factory *m_IfcGeometricSet_Factory;
    IfcGrid_Factory *m_IfcGrid_Factory;
    IfcGridAxis_Factory *m_IfcGridAxis_Factory;
    IfcGridPlacement_Factory *m_IfcGridPlacement_Factory;
    IfcGroup_Factory *m_IfcGroup_Factory;
    IfcHalfSpaceSolid_Factory *m_IfcHalfSpaceSolid_Factory;
    IfcHeatExchangerType_Factory *m_IfcHeatExchangerType_Factory;
    IfcHumidifierType_Factory *m_IfcHumidifierType_Factory;
    IfcHygroscopicMaterialProperties_Factory *m_IfcHygroscopicMaterialProperties_Factory;
    IfcIShapeProfileDef_Factory *m_IfcIShapeProfileDef_Factory;
    IfcImageTexture_Factory *m_IfcImageTexture_Factory;
    IfcInventory_Factory *m_IfcInventory_Factory;
    IfcIrregularTimeSeries_Factory *m_IfcIrregularTimeSeries_Factory;
    IfcIrregularTimeSeriesValue_Factory *m_IfcIrregularTimeSeriesValue_Factory;
    IfcJunctionBoxType_Factory *m_IfcJunctionBoxType_Factory;
    IfcLShapeProfileDef_Factory *m_IfcLShapeProfileDef_Factory;
    IfcLaborResource_Factory *m_IfcLaborResource_Factory;
    IfcLampType_Factory *m_IfcLampType_Factory;
    IfcLibraryInformation_Factory *m_IfcLibraryInformation_Factory;
    IfcLibraryReference_Factory *m_IfcLibraryReference_Factory;
    IfcLightDistributionData_Factory *m_IfcLightDistributionData_Factory;
    IfcLightFixtureType_Factory *m_IfcLightFixtureType_Factory;
    IfcLightIntensityDistribution_Factory *m_IfcLightIntensityDistribution_Factory;
    IfcLightSourceAmbient_Factory *m_IfcLightSourceAmbient_Factory;
    IfcLightSourceDirectional_Factory *m_IfcLightSourceDirectional_Factory;
    IfcLightSourceGoniometric_Factory *m_IfcLightSourceGoniometric_Factory;
    IfcLightSourcePositional_Factory *m_IfcLightSourcePositional_Factory;
    IfcLightSourceSpot_Factory *m_IfcLightSourceSpot_Factory;
    IfcLine_Factory *m_IfcLine_Factory;
    IfcLinearDimension_Factory *m_IfcLinearDimension_Factory;
    IfcLocalPlacement_Factory *m_IfcLocalPlacement_Factory;
    IfcLocalTime_Factory *m_IfcLocalTime_Factory;
    IfcLoop_Factory *m_IfcLoop_Factory;
    IfcMappedItem_Factory *m_IfcMappedItem_Factory;
    IfcMaterial_Factory *m_IfcMaterial_Factory;
    IfcMaterialClassificationRelationship_Factory *m_IfcMaterialClassificationRelationship_Factory;
    IfcMaterialDefinitionRepresentation_Factory *m_IfcMaterialDefinitionRepresentation_Factory;
    IfcMaterialLayer_Factory *m_IfcMaterialLayer_Factory;
    IfcMaterialLayerSet_Factory *m_IfcMaterialLayerSet_Factory;
    IfcMaterialLayerSetUsage_Factory *m_IfcMaterialLayerSetUsage_Factory;
    IfcMaterialList_Factory *m_IfcMaterialList_Factory;
    IfcMeasureWithUnit_Factory *m_IfcMeasureWithUnit_Factory;
    IfcMechanicalConcreteMaterialProperties_Factory *m_IfcMechanicalConcreteMaterialProperties_Factory;
    IfcMechanicalFastener_Factory *m_IfcMechanicalFastener_Factory;
    IfcMechanicalFastenerType_Factory *m_IfcMechanicalFastenerType_Factory;
    IfcMechanicalMaterialProperties_Factory *m_IfcMechanicalMaterialProperties_Factory;
    IfcMechanicalSteelMaterialProperties_Factory *m_IfcMechanicalSteelMaterialProperties_Factory;
    IfcMember_Factory *m_IfcMember_Factory;
    IfcMemberType_Factory *m_IfcMemberType_Factory;
    IfcMetric_Factory *m_IfcMetric_Factory;
    IfcMonetaryUnit_Factory *m_IfcMonetaryUnit_Factory;
    IfcMotorConnectionType_Factory *m_IfcMotorConnectionType_Factory;
    IfcMove_Factory *m_IfcMove_Factory;
    IfcObjective_Factory *m_IfcObjective_Factory;
    IfcOccupant_Factory *m_IfcOccupant_Factory;
    IfcOffsetCurve2D_Factory *m_IfcOffsetCurve2D_Factory;
    IfcOffsetCurve3D_Factory *m_IfcOffsetCurve3D_Factory;
    IfcOneDirectionRepeatFactor_Factory *m_IfcOneDirectionRepeatFactor_Factory;
    IfcOpenShell_Factory *m_IfcOpenShell_Factory;
    IfcOpeningElement_Factory *m_IfcOpeningElement_Factory;
    IfcOpticalMaterialProperties_Factory *m_IfcOpticalMaterialProperties_Factory;
    IfcOrderAction_Factory *m_IfcOrderAction_Factory;
    IfcOrganization_Factory *m_IfcOrganization_Factory;
    IfcOrganizationRelationship_Factory *m_IfcOrganizationRelationship_Factory;
    IfcOrientedEdge_Factory *m_IfcOrientedEdge_Factory;
    IfcOutletType_Factory *m_IfcOutletType_Factory;
    IfcOwnerHistory_Factory *m_IfcOwnerHistory_Factory;
    IfcPath_Factory *m_IfcPath_Factory;
    IfcPerformanceHistory_Factory *m_IfcPerformanceHistory_Factory;
    IfcPermeableCoveringProperties_Factory *m_IfcPermeableCoveringProperties_Factory;
    IfcPermit_Factory *m_IfcPermit_Factory;
    IfcPerson_Factory *m_IfcPerson_Factory;
    IfcPersonAndOrganization_Factory *m_IfcPersonAndOrganization_Factory;
    IfcPhysicalComplexQuantity_Factory *m_IfcPhysicalComplexQuantity_Factory;
    IfcPile_Factory *m_IfcPile_Factory;
    IfcPipeFittingType_Factory *m_IfcPipeFittingType_Factory;
    IfcPipeSegmentType_Factory *m_IfcPipeSegmentType_Factory;
    IfcPixelTexture_Factory *m_IfcPixelTexture_Factory;
    IfcPlanarBox_Factory *m_IfcPlanarBox_Factory;
    IfcPlanarExtent_Factory *m_IfcPlanarExtent_Factory;
    IfcPlane_Factory *m_IfcPlane_Factory;
    IfcPlate_Factory *m_IfcPlate_Factory;
    IfcPlateType_Factory *m_IfcPlateType_Factory;
    IfcPointOnCurve_Factory *m_IfcPointOnCurve_Factory;
    IfcPointOnSurface_Factory *m_IfcPointOnSurface_Factory;
    IfcPolyLoop_Factory *m_IfcPolyLoop_Factory;
    IfcPolygonalBoundedHalfSpace_Factory *m_IfcPolygonalBoundedHalfSpace_Factory;
    IfcPolyline_Factory *m_IfcPolyline_Factory;
    IfcPostalAddress_Factory *m_IfcPostalAddress_Factory;
    IfcPreDefinedDimensionSymbol_Factory *m_IfcPreDefinedDimensionSymbol_Factory;
    IfcPreDefinedPointMarkerSymbol_Factory *m_IfcPreDefinedPointMarkerSymbol_Factory;
    IfcPreDefinedTerminatorSymbol_Factory *m_IfcPreDefinedTerminatorSymbol_Factory;
    IfcPresentationLayerAssignment_Factory *m_IfcPresentationLayerAssignment_Factory;
    IfcPresentationLayerWithStyle_Factory *m_IfcPresentationLayerWithStyle_Factory;
    IfcPresentationStyleAssignment_Factory *m_IfcPresentationStyleAssignment_Factory;
    IfcProcedure_Factory *m_IfcProcedure_Factory;
    IfcProductDefinitionShape_Factory *m_IfcProductDefinitionShape_Factory;
    IfcProductRepresentation_Factory *m_IfcProductRepresentation_Factory;
    IfcProductsOfCombustionProperties_Factory *m_IfcProductsOfCombustionProperties_Factory;
    IfcProject_Factory *m_IfcProject_Factory;
    IfcProjectOrder_Factory *m_IfcProjectOrder_Factory;
    IfcProjectOrderRecord_Factory *m_IfcProjectOrderRecord_Factory;
    IfcProjectionCurve_Factory *m_IfcProjectionCurve_Factory;
    IfcProjectionElement_Factory *m_IfcProjectionElement_Factory;
    IfcPropertyBoundedValue_Factory *m_IfcPropertyBoundedValue_Factory;
    IfcPropertyConstraintRelationship_Factory *m_IfcPropertyConstraintRelationship_Factory;
    IfcPropertyDependencyRelationship_Factory *m_IfcPropertyDependencyRelationship_Factory;
    IfcPropertyEnumeratedValue_Factory *m_IfcPropertyEnumeratedValue_Factory;
    IfcPropertyEnumeration_Factory *m_IfcPropertyEnumeration_Factory;
    IfcPropertyListValue_Factory *m_IfcPropertyListValue_Factory;
    IfcPropertyReferenceValue_Factory *m_IfcPropertyReferenceValue_Factory;
    IfcPropertySet_Factory *m_IfcPropertySet_Factory;
    IfcPropertySingleValue_Factory *m_IfcPropertySingleValue_Factory;
    IfcPropertyTableValue_Factory *m_IfcPropertyTableValue_Factory;
    IfcProtectiveDeviceType_Factory *m_IfcProtectiveDeviceType_Factory;
    IfcProxy_Factory *m_IfcProxy_Factory;
    IfcPumpType_Factory *m_IfcPumpType_Factory;
    IfcQuantityArea_Factory *m_IfcQuantityArea_Factory;
    IfcQuantityCount_Factory *m_IfcQuantityCount_Factory;
    IfcQuantityLength_Factory *m_IfcQuantityLength_Factory;
    IfcQuantityTime_Factory *m_IfcQuantityTime_Factory;
    IfcQuantityVolume_Factory *m_IfcQuantityVolume_Factory;
    IfcQuantityWeight_Factory *m_IfcQuantityWeight_Factory;
    IfcRadiusDimension_Factory *m_IfcRadiusDimension_Factory;
    IfcRailing_Factory *m_IfcRailing_Factory;
    IfcRailingType_Factory *m_IfcRailingType_Factory;
    IfcRamp_Factory *m_IfcRamp_Factory;
    IfcRampFlight_Factory *m_IfcRampFlight_Factory;
    IfcRampFlightType_Factory *m_IfcRampFlightType_Factory;
    IfcRationalBezierCurve_Factory *m_IfcRationalBezierCurve_Factory;
    IfcRectangleHollowProfileDef_Factory *m_IfcRectangleHollowProfileDef_Factory;
    IfcRectangleProfileDef_Factory *m_IfcRectangleProfileDef_Factory;
    IfcRectangularPyramid_Factory *m_IfcRectangularPyramid_Factory;
    IfcRectangularTrimmedSurface_Factory *m_IfcRectangularTrimmedSurface_Factory;
    IfcReferencesValueDocument_Factory *m_IfcReferencesValueDocument_Factory;
    IfcRegularTimeSeries_Factory *m_IfcRegularTimeSeries_Factory;
    IfcReinforcementBarProperties_Factory *m_IfcReinforcementBarProperties_Factory;
    IfcReinforcementDefinitionProperties_Factory *m_IfcReinforcementDefinitionProperties_Factory;
    IfcReinforcingBar_Factory *m_IfcReinforcingBar_Factory;
    IfcReinforcingMesh_Factory *m_IfcReinforcingMesh_Factory;
    IfcRelAggregates_Factory *m_IfcRelAggregates_Factory;
    IfcRelAssignsTasks_Factory *m_IfcRelAssignsTasks_Factory;
    IfcRelAssignsToActor_Factory *m_IfcRelAssignsToActor_Factory;
    IfcRelAssignsToControl_Factory *m_IfcRelAssignsToControl_Factory;
    IfcRelAssignsToGroup_Factory *m_IfcRelAssignsToGroup_Factory;
    IfcRelAssignsToProcess_Factory *m_IfcRelAssignsToProcess_Factory;
    IfcRelAssignsToProduct_Factory *m_IfcRelAssignsToProduct_Factory;
    IfcRelAssignsToProjectOrder_Factory *m_IfcRelAssignsToProjectOrder_Factory;
    IfcRelAssignsToResource_Factory *m_IfcRelAssignsToResource_Factory;
    IfcRelAssociates_Factory *m_IfcRelAssociates_Factory;
    IfcRelAssociatesAppliedValue_Factory *m_IfcRelAssociatesAppliedValue_Factory;
    IfcRelAssociatesApproval_Factory *m_IfcRelAssociatesApproval_Factory;
    IfcRelAssociatesClassification_Factory *m_IfcRelAssociatesClassification_Factory;
    IfcRelAssociatesConstraint_Factory *m_IfcRelAssociatesConstraint_Factory;
    IfcRelAssociatesDocument_Factory *m_IfcRelAssociatesDocument_Factory;
    IfcRelAssociatesLibrary_Factory *m_IfcRelAssociatesLibrary_Factory;
    IfcRelAssociatesMaterial_Factory *m_IfcRelAssociatesMaterial_Factory;
    IfcRelAssociatesProfileProperties_Factory *m_IfcRelAssociatesProfileProperties_Factory;
    IfcRelConnectsElements_Factory *m_IfcRelConnectsElements_Factory;
    IfcRelConnectsPathElements_Factory *m_IfcRelConnectsPathElements_Factory;
    IfcRelConnectsPortToElement_Factory *m_IfcRelConnectsPortToElement_Factory;
    IfcRelConnectsPorts_Factory *m_IfcRelConnectsPorts_Factory;
    IfcRelConnectsStructuralActivity_Factory *m_IfcRelConnectsStructuralActivity_Factory;
    IfcRelConnectsStructuralElement_Factory *m_IfcRelConnectsStructuralElement_Factory;
    IfcRelConnectsStructuralMember_Factory *m_IfcRelConnectsStructuralMember_Factory;
    IfcRelConnectsWithEccentricity_Factory *m_IfcRelConnectsWithEccentricity_Factory;
    IfcRelConnectsWithRealizingElements_Factory *m_IfcRelConnectsWithRealizingElements_Factory;
    IfcRelContainedInSpatialStructure_Factory *m_IfcRelContainedInSpatialStructure_Factory;
    IfcRelCoversBldgElements_Factory *m_IfcRelCoversBldgElements_Factory;
    IfcRelCoversSpaces_Factory *m_IfcRelCoversSpaces_Factory;
    IfcRelDefinesByProperties_Factory *m_IfcRelDefinesByProperties_Factory;
    IfcRelDefinesByType_Factory *m_IfcRelDefinesByType_Factory;
    IfcRelFillsElement_Factory *m_IfcRelFillsElement_Factory;
    IfcRelFlowControlElements_Factory *m_IfcRelFlowControlElements_Factory;
    IfcRelInteractionRequirements_Factory *m_IfcRelInteractionRequirements_Factory;
    IfcRelNests_Factory *m_IfcRelNests_Factory;
    IfcRelOccupiesSpaces_Factory *m_IfcRelOccupiesSpaces_Factory;
    IfcRelOverridesProperties_Factory *m_IfcRelOverridesProperties_Factory;
    IfcRelProjectsElement_Factory *m_IfcRelProjectsElement_Factory;
    IfcRelReferencedInSpatialStructure_Factory *m_IfcRelReferencedInSpatialStructure_Factory;
    IfcRelSchedulesCostItems_Factory *m_IfcRelSchedulesCostItems_Factory;
    IfcRelSequence_Factory *m_IfcRelSequence_Factory;
    IfcRelServicesBuildings_Factory *m_IfcRelServicesBuildings_Factory;
    IfcRelSpaceBoundary_Factory *m_IfcRelSpaceBoundary_Factory;
    IfcRelVoidsElement_Factory *m_IfcRelVoidsElement_Factory;
    IfcRelaxation_Factory *m_IfcRelaxation_Factory;
    IfcRepresentation_Factory *m_IfcRepresentation_Factory;
    IfcRepresentationContext_Factory *m_IfcRepresentationContext_Factory;
    IfcRepresentationMap_Factory *m_IfcRepresentationMap_Factory;
    IfcRevolvedAreaSolid_Factory *m_IfcRevolvedAreaSolid_Factory;
    IfcRibPlateProfileProperties_Factory *m_IfcRibPlateProfileProperties_Factory;
    IfcRightCircularCone_Factory *m_IfcRightCircularCone_Factory;
    IfcRightCircularCylinder_Factory *m_IfcRightCircularCylinder_Factory;
    IfcRoof_Factory *m_IfcRoof_Factory;
    IfcRoundedEdgeFeature_Factory *m_IfcRoundedEdgeFeature_Factory;
    IfcRoundedRectangleProfileDef_Factory *m_IfcRoundedRectangleProfileDef_Factory;
    IfcSIUnit_Factory *m_IfcSIUnit_Factory;
    IfcSanitaryTerminalType_Factory *m_IfcSanitaryTerminalType_Factory;
    IfcScheduleTimeControl_Factory *m_IfcScheduleTimeControl_Factory;
    IfcSectionProperties_Factory *m_IfcSectionProperties_Factory;
    IfcSectionReinforcementProperties_Factory *m_IfcSectionReinforcementProperties_Factory;
    IfcSectionedSpine_Factory *m_IfcSectionedSpine_Factory;
    IfcSensorType_Factory *m_IfcSensorType_Factory;
    IfcServiceLife_Factory *m_IfcServiceLife_Factory;
    IfcServiceLifeFactor_Factory *m_IfcServiceLifeFactor_Factory;
    IfcShapeAspect_Factory *m_IfcShapeAspect_Factory;
    IfcShapeRepresentation_Factory *m_IfcShapeRepresentation_Factory;
    IfcShellBasedSurfaceModel_Factory *m_IfcShellBasedSurfaceModel_Factory;
    IfcSite_Factory *m_IfcSite_Factory;
    IfcSlab_Factory *m_IfcSlab_Factory;
    IfcSlabType_Factory *m_IfcSlabType_Factory;
    IfcSlippageConnectionCondition_Factory *m_IfcSlippageConnectionCondition_Factory;
    IfcSoundProperties_Factory *m_IfcSoundProperties_Factory;
    IfcSoundValue_Factory *m_IfcSoundValue_Factory;
    IfcSpace_Factory *m_IfcSpace_Factory;
    IfcSpaceHeaterType_Factory *m_IfcSpaceHeaterType_Factory;
    IfcSpaceProgram_Factory *m_IfcSpaceProgram_Factory;
    IfcSpaceThermalLoadProperties_Factory *m_IfcSpaceThermalLoadProperties_Factory;
    IfcSpaceType_Factory *m_IfcSpaceType_Factory;
    IfcSphere_Factory *m_IfcSphere_Factory;
    IfcStackTerminalType_Factory *m_IfcStackTerminalType_Factory;
    IfcStair_Factory *m_IfcStair_Factory;
    IfcStairFlight_Factory *m_IfcStairFlight_Factory;
    IfcStairFlightType_Factory *m_IfcStairFlightType_Factory;
    IfcStructuralAnalysisModel_Factory *m_IfcStructuralAnalysisModel_Factory;
    IfcStructuralCurveConnection_Factory *m_IfcStructuralCurveConnection_Factory;
    IfcStructuralCurveMember_Factory *m_IfcStructuralCurveMember_Factory;
    IfcStructuralCurveMemberVarying_Factory *m_IfcStructuralCurveMemberVarying_Factory;
    IfcStructuralLinearAction_Factory *m_IfcStructuralLinearAction_Factory;
    IfcStructuralLinearActionVarying_Factory *m_IfcStructuralLinearActionVarying_Factory;
    IfcStructuralLoadGroup_Factory *m_IfcStructuralLoadGroup_Factory;
    IfcStructuralLoadLinearForce_Factory *m_IfcStructuralLoadLinearForce_Factory;
    IfcStructuralLoadPlanarForce_Factory *m_IfcStructuralLoadPlanarForce_Factory;
    IfcStructuralLoadSingleDisplacement_Factory *m_IfcStructuralLoadSingleDisplacement_Factory;
    IfcStructuralLoadSingleDisplacementDistortion_Factory *m_IfcStructuralLoadSingleDisplacementDistortion_Factory;
    IfcStructuralLoadSingleForce_Factory *m_IfcStructuralLoadSingleForce_Factory;
    IfcStructuralLoadSingleForceWarping_Factory *m_IfcStructuralLoadSingleForceWarping_Factory;
    IfcStructuralLoadTemperature_Factory *m_IfcStructuralLoadTemperature_Factory;
    IfcStructuralPlanarAction_Factory *m_IfcStructuralPlanarAction_Factory;
    IfcStructuralPlanarActionVarying_Factory *m_IfcStructuralPlanarActionVarying_Factory;
    IfcStructuralPointAction_Factory *m_IfcStructuralPointAction_Factory;
    IfcStructuralPointConnection_Factory *m_IfcStructuralPointConnection_Factory;
    IfcStructuralPointReaction_Factory *m_IfcStructuralPointReaction_Factory;
    IfcStructuralProfileProperties_Factory *m_IfcStructuralProfileProperties_Factory;
    IfcStructuralResultGroup_Factory *m_IfcStructuralResultGroup_Factory;
    IfcStructuralSteelProfileProperties_Factory *m_IfcStructuralSteelProfileProperties_Factory;
    IfcStructuralSurfaceConnection_Factory *m_IfcStructuralSurfaceConnection_Factory;
    IfcStructuralSurfaceMember_Factory *m_IfcStructuralSurfaceMember_Factory;
    IfcStructuralSurfaceMemberVarying_Factory *m_IfcStructuralSurfaceMemberVarying_Factory;
    IfcStructuredDimensionCallout_Factory *m_IfcStructuredDimensionCallout_Factory;
    IfcStyledItem_Factory *m_IfcStyledItem_Factory;
    IfcStyledRepresentation_Factory *m_IfcStyledRepresentation_Factory;
    IfcSubContractResource_Factory *m_IfcSubContractResource_Factory;
    IfcSubedge_Factory *m_IfcSubedge_Factory;
    IfcSurfaceCurveSweptAreaSolid_Factory *m_IfcSurfaceCurveSweptAreaSolid_Factory;
    IfcSurfaceOfLinearExtrusion_Factory *m_IfcSurfaceOfLinearExtrusion_Factory;
    IfcSurfaceOfRevolution_Factory *m_IfcSurfaceOfRevolution_Factory;
    IfcSurfaceStyle_Factory *m_IfcSurfaceStyle_Factory;
    IfcSurfaceStyleLighting_Factory *m_IfcSurfaceStyleLighting_Factory;
    IfcSurfaceStyleRefraction_Factory *m_IfcSurfaceStyleRefraction_Factory;
    IfcSurfaceStyleRendering_Factory *m_IfcSurfaceStyleRendering_Factory;
    IfcSurfaceStyleShading_Factory *m_IfcSurfaceStyleShading_Factory;
    IfcSurfaceStyleWithTextures_Factory *m_IfcSurfaceStyleWithTextures_Factory;
    IfcSweptDiskSolid_Factory *m_IfcSweptDiskSolid_Factory;
    IfcSwitchingDeviceType_Factory *m_IfcSwitchingDeviceType_Factory;
    IfcSymbolStyle_Factory *m_IfcSymbolStyle_Factory;
    IfcSystem_Factory *m_IfcSystem_Factory;
    IfcSystemFurnitureElementType_Factory *m_IfcSystemFurnitureElementType_Factory;
    IfcTShapeProfileDef_Factory *m_IfcTShapeProfileDef_Factory;
    IfcTable_Factory *m_IfcTable_Factory;
    IfcTableRow_Factory *m_IfcTableRow_Factory;
    IfcTankType_Factory *m_IfcTankType_Factory;
    IfcTask_Factory *m_IfcTask_Factory;
    IfcTelecomAddress_Factory *m_IfcTelecomAddress_Factory;
    IfcTendon_Factory *m_IfcTendon_Factory;
    IfcTendonAnchor_Factory *m_IfcTendonAnchor_Factory;
    IfcTerminatorSymbol_Factory *m_IfcTerminatorSymbol_Factory;
    IfcTextLiteral_Factory *m_IfcTextLiteral_Factory;
    IfcTextLiteralWithExtent_Factory *m_IfcTextLiteralWithExtent_Factory;
    IfcTextStyle_Factory *m_IfcTextStyle_Factory;
    IfcTextStyleFontModel_Factory *m_IfcTextStyleFontModel_Factory;
    IfcTextStyleForDefinedFont_Factory *m_IfcTextStyleForDefinedFont_Factory;
    IfcTextStyleTextModel_Factory *m_IfcTextStyleTextModel_Factory;
    IfcTextStyleWithBoxCharacteristics_Factory *m_IfcTextStyleWithBoxCharacteristics_Factory;
    IfcTextureCoordinateGenerator_Factory *m_IfcTextureCoordinateGenerator_Factory;
    IfcTextureMap_Factory *m_IfcTextureMap_Factory;
    IfcTextureVertex_Factory *m_IfcTextureVertex_Factory;
    IfcThermalMaterialProperties_Factory *m_IfcThermalMaterialProperties_Factory;
    IfcTimeSeriesReferenceRelationship_Factory *m_IfcTimeSeriesReferenceRelationship_Factory;
    IfcTimeSeriesSchedule_Factory *m_IfcTimeSeriesSchedule_Factory;
    IfcTimeSeriesValue_Factory *m_IfcTimeSeriesValue_Factory;
    IfcTopologyRepresentation_Factory *m_IfcTopologyRepresentation_Factory;
    IfcTransformerType_Factory *m_IfcTransformerType_Factory;
    IfcTransportElement_Factory *m_IfcTransportElement_Factory;
    IfcTransportElementType_Factory *m_IfcTransportElementType_Factory;
    IfcTrapeziumProfileDef_Factory *m_IfcTrapeziumProfileDef_Factory;
    IfcTrimmedCurve_Factory *m_IfcTrimmedCurve_Factory;
    IfcTubeBundleType_Factory *m_IfcTubeBundleType_Factory;
    IfcTwoDirectionRepeatFactor_Factory *m_IfcTwoDirectionRepeatFactor_Factory;
    IfcTypeObject_Factory *m_IfcTypeObject_Factory;
    IfcTypeProduct_Factory *m_IfcTypeProduct_Factory;
    IfcUShapeProfileDef_Factory *m_IfcUShapeProfileDef_Factory;
    IfcUnitAssignment_Factory *m_IfcUnitAssignment_Factory;
    IfcUnitaryEquipmentType_Factory *m_IfcUnitaryEquipmentType_Factory;
    IfcValveType_Factory *m_IfcValveType_Factory;
    IfcVector_Factory *m_IfcVector_Factory;
    IfcVertex_Factory *m_IfcVertex_Factory;
    IfcVertexBasedTextureMap_Factory *m_IfcVertexBasedTextureMap_Factory;
    IfcVertexLoop_Factory *m_IfcVertexLoop_Factory;
    IfcVertexPoint_Factory *m_IfcVertexPoint_Factory;
    IfcVibrationIsolatorType_Factory *m_IfcVibrationIsolatorType_Factory;
    IfcVirtualElement_Factory *m_IfcVirtualElement_Factory;
    IfcVirtualGridIntersection_Factory *m_IfcVirtualGridIntersection_Factory;
    IfcWall_Factory *m_IfcWall_Factory;
    IfcWallStandardCase_Factory *m_IfcWallStandardCase_Factory;
    IfcWallType_Factory *m_IfcWallType_Factory;
    IfcWasteTerminalType_Factory *m_IfcWasteTerminalType_Factory;
    IfcWaterProperties_Factory *m_IfcWaterProperties_Factory;
    IfcWindow_Factory *m_IfcWindow_Factory;
    IfcWindowLiningProperties_Factory *m_IfcWindowLiningProperties_Factory;
    IfcWindowPanelProperties_Factory *m_IfcWindowPanelProperties_Factory;
    IfcWindowStyle_Factory *m_IfcWindowStyle_Factory;
    IfcWorkPlan_Factory *m_IfcWorkPlan_Factory;
    IfcWorkSchedule_Factory *m_IfcWorkSchedule_Factory;
    IfcZShapeProfileDef_Factory *m_IfcZShapeProfileDef_Factory;
    IfcZone_Factory *m_IfcZone_Factory;
    /**
     */
    Model();
    virtual ~Model();
    /**
     */
    Ifc2DCompositeCurve_Factory *getIfc2DCompositeCurve_Factory();
    /**
     */
    IfcActionRequest_Factory *getIfcActionRequest_Factory();
    /**
     */
    IfcActor_Factory *getIfcActor_Factory();
    /**
     */
    IfcActorRole_Factory *getIfcActorRole_Factory();
    /**
     */
    IfcActuatorType_Factory *getIfcActuatorType_Factory();
    /**
     */
    IfcAirTerminalBoxType_Factory *getIfcAirTerminalBoxType_Factory();
    /**
     */
    IfcAirTerminalType_Factory *getIfcAirTerminalType_Factory();
    /**
     */
    IfcAirToAirHeatRecoveryType_Factory *getIfcAirToAirHeatRecoveryType_Factory();
    /**
     */
    IfcAlarmType_Factory *getIfcAlarmType_Factory();
    /**
     */
    IfcAngularDimension_Factory *getIfcAngularDimension_Factory();
    /**
     */
    IfcAnnotation_Factory *getIfcAnnotation_Factory();
    /**
     */
    IfcAnnotationCurveOccurrence_Factory *getIfcAnnotationCurveOccurrence_Factory();
    /**
     */
    IfcAnnotationFillArea_Factory *getIfcAnnotationFillArea_Factory();
    /**
     */
    IfcAnnotationFillAreaOccurrence_Factory *getIfcAnnotationFillAreaOccurrence_Factory();
    /**
     */
    IfcAnnotationSurface_Factory *getIfcAnnotationSurface_Factory();
    /**
     */
    IfcAnnotationSurfaceOccurrence_Factory *getIfcAnnotationSurfaceOccurrence_Factory();
    /**
     */
    IfcAnnotationSymbolOccurrence_Factory *getIfcAnnotationSymbolOccurrence_Factory();
    /**
     */
    IfcAnnotationTextOccurrence_Factory *getIfcAnnotationTextOccurrence_Factory();
    /**
     */
    IfcApplication_Factory *getIfcApplication_Factory();
    /**
     */
    IfcAppliedValueRelationship_Factory *getIfcAppliedValueRelationship_Factory();
    /**
     */
    IfcApproval_Factory *getIfcApproval_Factory();
    /**
     */
    IfcApprovalActorRelationship_Factory *getIfcApprovalActorRelationship_Factory();
    /**
     */
    IfcApprovalPropertyRelationship_Factory *getIfcApprovalPropertyRelationship_Factory();
    /**
     */
    IfcApprovalRelationship_Factory *getIfcApprovalRelationship_Factory();
    /**
     */
    IfcArbitraryClosedProfileDef_Factory *getIfcArbitraryClosedProfileDef_Factory();
    /**
     */
    IfcArbitraryOpenProfileDef_Factory *getIfcArbitraryOpenProfileDef_Factory();
    /**
     */
    IfcArbitraryProfileDefWithVoids_Factory *getIfcArbitraryProfileDefWithVoids_Factory();
    /**
     */
    IfcAsset_Factory *getIfcAsset_Factory();
    /**
     */
    IfcAsymmetricIShapeProfileDef_Factory *getIfcAsymmetricIShapeProfileDef_Factory();
    /**
     */
    IfcAxis1Placement_Factory *getIfcAxis1Placement_Factory();
    /**
     */
    IfcAxis2Placement2D_Factory *getIfcAxis2Placement2D_Factory();
    /**
     */
    IfcAxis2Placement3D_Factory *getIfcAxis2Placement3D_Factory();
    /**
     */
    IfcBeam_Factory *getIfcBeam_Factory();
    /**
     */
    IfcBeamType_Factory *getIfcBeamType_Factory();
    /**
     */
    IfcBezierCurve_Factory *getIfcBezierCurve_Factory();
    /**
     */
    IfcBlobTexture_Factory *getIfcBlobTexture_Factory();
    /**
     */
    IfcBlock_Factory *getIfcBlock_Factory();
    /**
     */
    IfcBoilerType_Factory *getIfcBoilerType_Factory();
    /**
     */
    IfcBooleanClippingResult_Factory *getIfcBooleanClippingResult_Factory();
    /**
     */
    IfcBooleanResult_Factory *getIfcBooleanResult_Factory();
    /**
     */
    IfcBoundaryEdgeCondition_Factory *getIfcBoundaryEdgeCondition_Factory();
    /**
     */
    IfcBoundaryFaceCondition_Factory *getIfcBoundaryFaceCondition_Factory();
    /**
     */
    IfcBoundaryNodeCondition_Factory *getIfcBoundaryNodeCondition_Factory();
    /**
     */
    IfcBoundaryNodeConditionWarping_Factory *getIfcBoundaryNodeConditionWarping_Factory();
    /**
     */
    IfcBoundedSurface_Factory *getIfcBoundedSurface_Factory();
    /**
     */
    IfcBoundingBox_Factory *getIfcBoundingBox_Factory();
    /**
     */
    IfcBoxedHalfSpace_Factory *getIfcBoxedHalfSpace_Factory();
    /**
     */
    IfcBuilding_Factory *getIfcBuilding_Factory();
    /**
     */
    IfcBuildingElementPart_Factory *getIfcBuildingElementPart_Factory();
    /**
     */
    IfcBuildingElementProxy_Factory *getIfcBuildingElementProxy_Factory();
    /**
     */
    IfcBuildingElementProxyType_Factory *getIfcBuildingElementProxyType_Factory();
    /**
     */
    IfcBuildingStorey_Factory *getIfcBuildingStorey_Factory();
    /**
     */
    IfcCShapeProfileDef_Factory *getIfcCShapeProfileDef_Factory();
    /**
     */
    IfcCableCarrierFittingType_Factory *getIfcCableCarrierFittingType_Factory();
    /**
     */
    IfcCableCarrierSegmentType_Factory *getIfcCableCarrierSegmentType_Factory();
    /**
     */
    IfcCableSegmentType_Factory *getIfcCableSegmentType_Factory();
    /**
     */
    IfcCalendarDate_Factory *getIfcCalendarDate_Factory();
    /**
     */
    IfcCartesianPoint_Factory *getIfcCartesianPoint_Factory();
    /**
     */
    IfcCartesianTransformationOperator2D_Factory *getIfcCartesianTransformationOperator2D_Factory();
    /**
     */
    IfcCartesianTransformationOperator2DnonUniform_Factory *getIfcCartesianTransformationOperator2DnonUniform_Factory();
    /**
     */
    IfcCartesianTransformationOperator3D_Factory *getIfcCartesianTransformationOperator3D_Factory();
    /**
     */
    IfcCartesianTransformationOperator3DnonUniform_Factory *getIfcCartesianTransformationOperator3DnonUniform_Factory();
    /**
     */
    IfcCenterLineProfileDef_Factory *getIfcCenterLineProfileDef_Factory();
    /**
     */
    IfcChamferEdgeFeature_Factory *getIfcChamferEdgeFeature_Factory();
    /**
     */
    IfcChillerType_Factory *getIfcChillerType_Factory();
    /**
     */
    IfcCircle_Factory *getIfcCircle_Factory();
    /**
     */
    IfcCircleHollowProfileDef_Factory *getIfcCircleHollowProfileDef_Factory();
    /**
     */
    IfcCircleProfileDef_Factory *getIfcCircleProfileDef_Factory();
    /**
     */
    IfcClassification_Factory *getIfcClassification_Factory();
    /**
     */
    IfcClassificationItem_Factory *getIfcClassificationItem_Factory();
    /**
     */
    IfcClassificationItemRelationship_Factory *getIfcClassificationItemRelationship_Factory();
    /**
     */
    IfcClassificationNotation_Factory *getIfcClassificationNotation_Factory();
    /**
     */
    IfcClassificationNotationFacet_Factory *getIfcClassificationNotationFacet_Factory();
    /**
     */
    IfcClassificationReference_Factory *getIfcClassificationReference_Factory();
    /**
     */
    IfcClosedShell_Factory *getIfcClosedShell_Factory();
    /**
     */
    IfcCoilType_Factory *getIfcCoilType_Factory();
    /**
     */
    IfcColourRgb_Factory *getIfcColourRgb_Factory();
    /**
     */
    IfcColumn_Factory *getIfcColumn_Factory();
    /**
     */
    IfcColumnType_Factory *getIfcColumnType_Factory();
    /**
     */
    IfcComplexProperty_Factory *getIfcComplexProperty_Factory();
    /**
     */
    IfcCompositeCurve_Factory *getIfcCompositeCurve_Factory();
    /**
     */
    IfcCompositeCurveSegment_Factory *getIfcCompositeCurveSegment_Factory();
    /**
     */
    IfcCompositeProfileDef_Factory *getIfcCompositeProfileDef_Factory();
    /**
     */
    IfcCompressorType_Factory *getIfcCompressorType_Factory();
    /**
     */
    IfcCondenserType_Factory *getIfcCondenserType_Factory();
    /**
     */
    IfcCondition_Factory *getIfcCondition_Factory();
    /**
     */
    IfcConditionCriterion_Factory *getIfcConditionCriterion_Factory();
    /**
     */
    IfcConnectedFaceSet_Factory *getIfcConnectedFaceSet_Factory();
    /**
     */
    IfcConnectionCurveGeometry_Factory *getIfcConnectionCurveGeometry_Factory();
    /**
     */
    IfcConnectionPointEccentricity_Factory *getIfcConnectionPointEccentricity_Factory();
    /**
     */
    IfcConnectionPointGeometry_Factory *getIfcConnectionPointGeometry_Factory();
    /**
     */
    IfcConnectionPortGeometry_Factory *getIfcConnectionPortGeometry_Factory();
    /**
     */
    IfcConnectionSurfaceGeometry_Factory *getIfcConnectionSurfaceGeometry_Factory();
    /**
     */
    IfcConstraintAggregationRelationship_Factory *getIfcConstraintAggregationRelationship_Factory();
    /**
     */
    IfcConstraintClassificationRelationship_Factory *getIfcConstraintClassificationRelationship_Factory();
    /**
     */
    IfcConstraintRelationship_Factory *getIfcConstraintRelationship_Factory();
    /**
     */
    IfcConstructionEquipmentResource_Factory *getIfcConstructionEquipmentResource_Factory();
    /**
     */
    IfcConstructionMaterialResource_Factory *getIfcConstructionMaterialResource_Factory();
    /**
     */
    IfcConstructionProductResource_Factory *getIfcConstructionProductResource_Factory();
    /**
     */
    IfcContextDependentUnit_Factory *getIfcContextDependentUnit_Factory();
    /**
     */
    IfcControllerType_Factory *getIfcControllerType_Factory();
    /**
     */
    IfcConversionBasedUnit_Factory *getIfcConversionBasedUnit_Factory();
    /**
     */
    IfcCooledBeamType_Factory *getIfcCooledBeamType_Factory();
    /**
     */
    IfcCoolingTowerType_Factory *getIfcCoolingTowerType_Factory();
    /**
     */
    IfcCoordinatedUniversalTimeOffset_Factory *getIfcCoordinatedUniversalTimeOffset_Factory();
    /**
     */
    IfcCostItem_Factory *getIfcCostItem_Factory();
    /**
     */
    IfcCostSchedule_Factory *getIfcCostSchedule_Factory();
    /**
     */
    IfcCostValue_Factory *getIfcCostValue_Factory();
    /**
     */
    IfcCovering_Factory *getIfcCovering_Factory();
    /**
     */
    IfcCoveringType_Factory *getIfcCoveringType_Factory();
    /**
     */
    IfcCraneRailAShapeProfileDef_Factory *getIfcCraneRailAShapeProfileDef_Factory();
    /**
     */
    IfcCraneRailFShapeProfileDef_Factory *getIfcCraneRailFShapeProfileDef_Factory();
    /**
     */
    IfcCrewResource_Factory *getIfcCrewResource_Factory();
    /**
     */
    IfcCsgSolid_Factory *getIfcCsgSolid_Factory();
    /**
     */
    IfcCurrencyRelationship_Factory *getIfcCurrencyRelationship_Factory();
    /**
     */
    IfcCurtainWall_Factory *getIfcCurtainWall_Factory();
    /**
     */
    IfcCurtainWallType_Factory *getIfcCurtainWallType_Factory();
    /**
     */
    IfcCurveBoundedPlane_Factory *getIfcCurveBoundedPlane_Factory();
    /**
     */
    IfcCurveStyle_Factory *getIfcCurveStyle_Factory();
    /**
     */
    IfcCurveStyleFont_Factory *getIfcCurveStyleFont_Factory();
    /**
     */
    IfcCurveStyleFontAndScaling_Factory *getIfcCurveStyleFontAndScaling_Factory();
    /**
     */
    IfcCurveStyleFontPattern_Factory *getIfcCurveStyleFontPattern_Factory();
    /**
     */
    IfcDamperType_Factory *getIfcDamperType_Factory();
    /**
     */
    IfcDateAndTime_Factory *getIfcDateAndTime_Factory();
    /**
     */
    IfcDefinedSymbol_Factory *getIfcDefinedSymbol_Factory();
    /**
     */
    IfcDerivedProfileDef_Factory *getIfcDerivedProfileDef_Factory();
    /**
     */
    IfcDerivedUnit_Factory *getIfcDerivedUnit_Factory();
    /**
     */
    IfcDerivedUnitElement_Factory *getIfcDerivedUnitElement_Factory();
    /**
     */
    IfcDiameterDimension_Factory *getIfcDiameterDimension_Factory();
    /**
     */
    IfcDimensionCalloutRelationship_Factory *getIfcDimensionCalloutRelationship_Factory();
    /**
     */
    IfcDimensionCurve_Factory *getIfcDimensionCurve_Factory();
    /**
     */
    IfcDimensionCurveDirectedCallout_Factory *getIfcDimensionCurveDirectedCallout_Factory();
    /**
     */
    IfcDimensionCurveTerminator_Factory *getIfcDimensionCurveTerminator_Factory();
    /**
     */
    IfcDimensionPair_Factory *getIfcDimensionPair_Factory();
    /**
     */
    IfcDimensionalExponents_Factory *getIfcDimensionalExponents_Factory();
    /**
     */
    IfcDirection_Factory *getIfcDirection_Factory();
    /**
     */
    IfcDiscreteAccessory_Factory *getIfcDiscreteAccessory_Factory();
    /**
     */
    IfcDiscreteAccessoryType_Factory *getIfcDiscreteAccessoryType_Factory();
    /**
     */
    IfcDistributionChamberElement_Factory *getIfcDistributionChamberElement_Factory();
    /**
     */
    IfcDistributionChamberElementType_Factory *getIfcDistributionChamberElementType_Factory();
    /**
     */
    IfcDistributionControlElement_Factory *getIfcDistributionControlElement_Factory();
    /**
     */
    IfcDistributionElement_Factory *getIfcDistributionElement_Factory();
    /**
     */
    IfcDistributionElementType_Factory *getIfcDistributionElementType_Factory();
    /**
     */
    IfcDistributionFlowElement_Factory *getIfcDistributionFlowElement_Factory();
    /**
     */
    IfcDistributionPort_Factory *getIfcDistributionPort_Factory();
    /**
     */
    IfcDocumentElectronicFormat_Factory *getIfcDocumentElectronicFormat_Factory();
    /**
     */
    IfcDocumentInformation_Factory *getIfcDocumentInformation_Factory();
    /**
     */
    IfcDocumentInformationRelationship_Factory *getIfcDocumentInformationRelationship_Factory();
    /**
     */
    IfcDocumentReference_Factory *getIfcDocumentReference_Factory();
    /**
     */
    IfcDoor_Factory *getIfcDoor_Factory();
    /**
     */
    IfcDoorLiningProperties_Factory *getIfcDoorLiningProperties_Factory();
    /**
     */
    IfcDoorPanelProperties_Factory *getIfcDoorPanelProperties_Factory();
    /**
     */
    IfcDoorStyle_Factory *getIfcDoorStyle_Factory();
    /**
     */
    IfcDraughtingCallout_Factory *getIfcDraughtingCallout_Factory();
    /**
     */
    IfcDraughtingCalloutRelationship_Factory *getIfcDraughtingCalloutRelationship_Factory();
    /**
     */
    IfcDraughtingPreDefinedColour_Factory *getIfcDraughtingPreDefinedColour_Factory();
    /**
     */
    IfcDraughtingPreDefinedCurveFont_Factory *getIfcDraughtingPreDefinedCurveFont_Factory();
    /**
     */
    IfcDraughtingPreDefinedTextFont_Factory *getIfcDraughtingPreDefinedTextFont_Factory();
    /**
     */
    IfcDuctFittingType_Factory *getIfcDuctFittingType_Factory();
    /**
     */
    IfcDuctSegmentType_Factory *getIfcDuctSegmentType_Factory();
    /**
     */
    IfcDuctSilencerType_Factory *getIfcDuctSilencerType_Factory();
    /**
     */
    IfcEdge_Factory *getIfcEdge_Factory();
    /**
     */
    IfcEdgeCurve_Factory *getIfcEdgeCurve_Factory();
    /**
     */
    IfcEdgeLoop_Factory *getIfcEdgeLoop_Factory();
    /**
     */
    IfcElectricApplianceType_Factory *getIfcElectricApplianceType_Factory();
    /**
     */
    IfcElectricDistributionPoint_Factory *getIfcElectricDistributionPoint_Factory();
    /**
     */
    IfcElectricFlowStorageDeviceType_Factory *getIfcElectricFlowStorageDeviceType_Factory();
    /**
     */
    IfcElectricGeneratorType_Factory *getIfcElectricGeneratorType_Factory();
    /**
     */
    IfcElectricHeaterType_Factory *getIfcElectricHeaterType_Factory();
    /**
     */
    IfcElectricMotorType_Factory *getIfcElectricMotorType_Factory();
    /**
     */
    IfcElectricTimeControlType_Factory *getIfcElectricTimeControlType_Factory();
    /**
     */
    IfcElectricalBaseProperties_Factory *getIfcElectricalBaseProperties_Factory();
    /**
     */
    IfcElectricalCircuit_Factory *getIfcElectricalCircuit_Factory();
    /**
     */
    IfcElectricalElement_Factory *getIfcElectricalElement_Factory();
    /**
     */
    IfcElementAssembly_Factory *getIfcElementAssembly_Factory();
    /**
     */
    IfcElementQuantity_Factory *getIfcElementQuantity_Factory();
    /**
     */
    IfcEllipse_Factory *getIfcEllipse_Factory();
    /**
     */
    IfcEllipseProfileDef_Factory *getIfcEllipseProfileDef_Factory();
    /**
     */
    IfcEnergyConversionDevice_Factory *getIfcEnergyConversionDevice_Factory();
    /**
     */
    IfcEnergyProperties_Factory *getIfcEnergyProperties_Factory();
    /**
     */
    IfcEnvironmentalImpactValue_Factory *getIfcEnvironmentalImpactValue_Factory();
    /**
     */
    IfcEquipmentElement_Factory *getIfcEquipmentElement_Factory();
    /**
     */
    IfcEquipmentStandard_Factory *getIfcEquipmentStandard_Factory();
    /**
     */
    IfcEvaporativeCoolerType_Factory *getIfcEvaporativeCoolerType_Factory();
    /**
     */
    IfcEvaporatorType_Factory *getIfcEvaporatorType_Factory();
    /**
     */
    IfcExtendedMaterialProperties_Factory *getIfcExtendedMaterialProperties_Factory();
    /**
     */
    IfcExternallyDefinedHatchStyle_Factory *getIfcExternallyDefinedHatchStyle_Factory();
    /**
     */
    IfcExternallyDefinedSurfaceStyle_Factory *getIfcExternallyDefinedSurfaceStyle_Factory();
    /**
     */
    IfcExternallyDefinedSymbol_Factory *getIfcExternallyDefinedSymbol_Factory();
    /**
     */
    IfcExternallyDefinedTextFont_Factory *getIfcExternallyDefinedTextFont_Factory();
    /**
     */
    IfcExtrudedAreaSolid_Factory *getIfcExtrudedAreaSolid_Factory();
    /**
     */
    IfcFace_Factory *getIfcFace_Factory();
    /**
     */
    IfcFaceBasedSurfaceModel_Factory *getIfcFaceBasedSurfaceModel_Factory();
    /**
     */
    IfcFaceBound_Factory *getIfcFaceBound_Factory();
    /**
     */
    IfcFaceOuterBound_Factory *getIfcFaceOuterBound_Factory();
    /**
     */
    IfcFaceSurface_Factory *getIfcFaceSurface_Factory();
    /**
     */
    IfcFacetedBrep_Factory *getIfcFacetedBrep_Factory();
    /**
     */
    IfcFacetedBrepWithVoids_Factory *getIfcFacetedBrepWithVoids_Factory();
    /**
     */
    IfcFailureConnectionCondition_Factory *getIfcFailureConnectionCondition_Factory();
    /**
     */
    IfcFanType_Factory *getIfcFanType_Factory();
    /**
     */
    IfcFastener_Factory *getIfcFastener_Factory();
    /**
     */
    IfcFastenerType_Factory *getIfcFastenerType_Factory();
    /**
     */
    IfcFillAreaStyle_Factory *getIfcFillAreaStyle_Factory();
    /**
     */
    IfcFillAreaStyleHatching_Factory *getIfcFillAreaStyleHatching_Factory();
    /**
     */
    IfcFillAreaStyleTileSymbolWithStyle_Factory *getIfcFillAreaStyleTileSymbolWithStyle_Factory();
    /**
     */
    IfcFillAreaStyleTiles_Factory *getIfcFillAreaStyleTiles_Factory();
    /**
     */
    IfcFilterType_Factory *getIfcFilterType_Factory();
    /**
     */
    IfcFireSuppressionTerminalType_Factory *getIfcFireSuppressionTerminalType_Factory();
    /**
     */
    IfcFlowController_Factory *getIfcFlowController_Factory();
    /**
     */
    IfcFlowFitting_Factory *getIfcFlowFitting_Factory();
    /**
     */
    IfcFlowInstrumentType_Factory *getIfcFlowInstrumentType_Factory();
    /**
     */
    IfcFlowMeterType_Factory *getIfcFlowMeterType_Factory();
    /**
     */
    IfcFlowMovingDevice_Factory *getIfcFlowMovingDevice_Factory();
    /**
     */
    IfcFlowSegment_Factory *getIfcFlowSegment_Factory();
    /**
     */
    IfcFlowStorageDevice_Factory *getIfcFlowStorageDevice_Factory();
    /**
     */
    IfcFlowTerminal_Factory *getIfcFlowTerminal_Factory();
    /**
     */
    IfcFlowTreatmentDevice_Factory *getIfcFlowTreatmentDevice_Factory();
    /**
     */
    IfcFluidFlowProperties_Factory *getIfcFluidFlowProperties_Factory();
    /**
     */
    IfcFooting_Factory *getIfcFooting_Factory();
    /**
     */
    IfcFuelProperties_Factory *getIfcFuelProperties_Factory();
    /**
     */
    IfcFurnishingElement_Factory *getIfcFurnishingElement_Factory();
    /**
     */
    IfcFurnishingElementType_Factory *getIfcFurnishingElementType_Factory();
    /**
     */
    IfcFurnitureStandard_Factory *getIfcFurnitureStandard_Factory();
    /**
     */
    IfcFurnitureType_Factory *getIfcFurnitureType_Factory();
    /**
     */
    IfcGasTerminalType_Factory *getIfcGasTerminalType_Factory();
    /**
     */
    IfcGeneralMaterialProperties_Factory *getIfcGeneralMaterialProperties_Factory();
    /**
     */
    IfcGeneralProfileProperties_Factory *getIfcGeneralProfileProperties_Factory();
    /**
     */
    IfcGeometricCurveSet_Factory *getIfcGeometricCurveSet_Factory();
    /**
     */
    IfcGeometricRepresentationContext_Factory *getIfcGeometricRepresentationContext_Factory();
    /**
     */
    IfcGeometricRepresentationSubContext_Factory *getIfcGeometricRepresentationSubContext_Factory();
    /**
     */
    IfcGeometricSet_Factory *getIfcGeometricSet_Factory();
    /**
     */
    IfcGrid_Factory *getIfcGrid_Factory();
    /**
     */
    IfcGridAxis_Factory *getIfcGridAxis_Factory();
    /**
     */
    IfcGridPlacement_Factory *getIfcGridPlacement_Factory();
    /**
     */
    IfcGroup_Factory *getIfcGroup_Factory();
    /**
     */
    IfcHalfSpaceSolid_Factory *getIfcHalfSpaceSolid_Factory();
    /**
     */
    IfcHeatExchangerType_Factory *getIfcHeatExchangerType_Factory();
    /**
     */
    IfcHumidifierType_Factory *getIfcHumidifierType_Factory();
    /**
     */
    IfcHygroscopicMaterialProperties_Factory *getIfcHygroscopicMaterialProperties_Factory();
    /**
     */
    IfcIShapeProfileDef_Factory *getIfcIShapeProfileDef_Factory();
    /**
     */
    IfcImageTexture_Factory *getIfcImageTexture_Factory();
    /**
     */
    IfcInventory_Factory *getIfcInventory_Factory();
    /**
     */
    IfcIrregularTimeSeries_Factory *getIfcIrregularTimeSeries_Factory();
    /**
     */
    IfcIrregularTimeSeriesValue_Factory *getIfcIrregularTimeSeriesValue_Factory();
    /**
     */
    IfcJunctionBoxType_Factory *getIfcJunctionBoxType_Factory();
    /**
     */
    IfcLShapeProfileDef_Factory *getIfcLShapeProfileDef_Factory();
    /**
     */
    IfcLaborResource_Factory *getIfcLaborResource_Factory();
    /**
     */
    IfcLampType_Factory *getIfcLampType_Factory();
    /**
     */
    IfcLibraryInformation_Factory *getIfcLibraryInformation_Factory();
    /**
     */
    IfcLibraryReference_Factory *getIfcLibraryReference_Factory();
    /**
     */
    IfcLightDistributionData_Factory *getIfcLightDistributionData_Factory();
    /**
     */
    IfcLightFixtureType_Factory *getIfcLightFixtureType_Factory();
    /**
     */
    IfcLightIntensityDistribution_Factory *getIfcLightIntensityDistribution_Factory();
    /**
     */
    IfcLightSourceAmbient_Factory *getIfcLightSourceAmbient_Factory();
    /**
     */
    IfcLightSourceDirectional_Factory *getIfcLightSourceDirectional_Factory();
    /**
     */
    IfcLightSourceGoniometric_Factory *getIfcLightSourceGoniometric_Factory();
    /**
     */
    IfcLightSourcePositional_Factory *getIfcLightSourcePositional_Factory();
    /**
     */
    IfcLightSourceSpot_Factory *getIfcLightSourceSpot_Factory();
    /**
     */
    IfcLine_Factory *getIfcLine_Factory();
    /**
     */
    IfcLinearDimension_Factory *getIfcLinearDimension_Factory();
    /**
     */
    IfcLocalPlacement_Factory *getIfcLocalPlacement_Factory();
    /**
     */
    IfcLocalTime_Factory *getIfcLocalTime_Factory();
    /**
     */
    IfcLoop_Factory *getIfcLoop_Factory();
    /**
     */
    IfcMappedItem_Factory *getIfcMappedItem_Factory();
    /**
     */
    IfcMaterial_Factory *getIfcMaterial_Factory();
    /**
     */
    IfcMaterialClassificationRelationship_Factory *getIfcMaterialClassificationRelationship_Factory();
    /**
     */
    IfcMaterialDefinitionRepresentation_Factory *getIfcMaterialDefinitionRepresentation_Factory();
    /**
     */
    IfcMaterialLayer_Factory *getIfcMaterialLayer_Factory();
    /**
     */
    IfcMaterialLayerSet_Factory *getIfcMaterialLayerSet_Factory();
    /**
     */
    IfcMaterialLayerSetUsage_Factory *getIfcMaterialLayerSetUsage_Factory();
    /**
     */
    IfcMaterialList_Factory *getIfcMaterialList_Factory();
    /**
     */
    IfcMeasureWithUnit_Factory *getIfcMeasureWithUnit_Factory();
    /**
     */
    IfcMechanicalConcreteMaterialProperties_Factory *getIfcMechanicalConcreteMaterialProperties_Factory();
    /**
     */
    IfcMechanicalFastener_Factory *getIfcMechanicalFastener_Factory();
    /**
     */
    IfcMechanicalFastenerType_Factory *getIfcMechanicalFastenerType_Factory();
    /**
     */
    IfcMechanicalMaterialProperties_Factory *getIfcMechanicalMaterialProperties_Factory();
    /**
     */
    IfcMechanicalSteelMaterialProperties_Factory *getIfcMechanicalSteelMaterialProperties_Factory();
    /**
     */
    IfcMember_Factory *getIfcMember_Factory();
    /**
     */
    IfcMemberType_Factory *getIfcMemberType_Factory();
    /**
     */
    IfcMetric_Factory *getIfcMetric_Factory();
    /**
     */
    IfcMonetaryUnit_Factory *getIfcMonetaryUnit_Factory();
    /**
     */
    IfcMotorConnectionType_Factory *getIfcMotorConnectionType_Factory();
    /**
     */
    IfcMove_Factory *getIfcMove_Factory();
    /**
     */
    IfcObjective_Factory *getIfcObjective_Factory();
    /**
     */
    IfcOccupant_Factory *getIfcOccupant_Factory();
    /**
     */
    IfcOffsetCurve2D_Factory *getIfcOffsetCurve2D_Factory();
    /**
     */
    IfcOffsetCurve3D_Factory *getIfcOffsetCurve3D_Factory();
    /**
     */
    IfcOneDirectionRepeatFactor_Factory *getIfcOneDirectionRepeatFactor_Factory();
    /**
     */
    IfcOpenShell_Factory *getIfcOpenShell_Factory();
    /**
     */
    IfcOpeningElement_Factory *getIfcOpeningElement_Factory();
    /**
     */
    IfcOpticalMaterialProperties_Factory *getIfcOpticalMaterialProperties_Factory();
    /**
     */
    IfcOrderAction_Factory *getIfcOrderAction_Factory();
    /**
     */
    IfcOrganization_Factory *getIfcOrganization_Factory();
    /**
     */
    IfcOrganizationRelationship_Factory *getIfcOrganizationRelationship_Factory();
    /**
     */
    IfcOrientedEdge_Factory *getIfcOrientedEdge_Factory();
    /**
     */
    IfcOutletType_Factory *getIfcOutletType_Factory();
    /**
     */
    IfcOwnerHistory_Factory *getIfcOwnerHistory_Factory();
    /**
     */
    IfcPath_Factory *getIfcPath_Factory();
    /**
     */
    IfcPerformanceHistory_Factory *getIfcPerformanceHistory_Factory();
    /**
     */
    IfcPermeableCoveringProperties_Factory *getIfcPermeableCoveringProperties_Factory();
    /**
     */
    IfcPermit_Factory *getIfcPermit_Factory();
    /**
     */
    IfcPerson_Factory *getIfcPerson_Factory();
    /**
     */
    IfcPersonAndOrganization_Factory *getIfcPersonAndOrganization_Factory();
    /**
     */
    IfcPhysicalComplexQuantity_Factory *getIfcPhysicalComplexQuantity_Factory();
    /**
     */
    IfcPile_Factory *getIfcPile_Factory();
    /**
     */
    IfcPipeFittingType_Factory *getIfcPipeFittingType_Factory();
    /**
     */
    IfcPipeSegmentType_Factory *getIfcPipeSegmentType_Factory();
    /**
     */
    IfcPixelTexture_Factory *getIfcPixelTexture_Factory();
    /**
     */
    IfcPlanarBox_Factory *getIfcPlanarBox_Factory();
    /**
     */
    IfcPlanarExtent_Factory *getIfcPlanarExtent_Factory();
    /**
     */
    IfcPlane_Factory *getIfcPlane_Factory();
    /**
     */
    IfcPlate_Factory *getIfcPlate_Factory();
    /**
     */
    IfcPlateType_Factory *getIfcPlateType_Factory();
    /**
     */
    IfcPointOnCurve_Factory *getIfcPointOnCurve_Factory();
    /**
     */
    IfcPointOnSurface_Factory *getIfcPointOnSurface_Factory();
    /**
     */
    IfcPolyLoop_Factory *getIfcPolyLoop_Factory();
    /**
     */
    IfcPolygonalBoundedHalfSpace_Factory *getIfcPolygonalBoundedHalfSpace_Factory();
    /**
     */
    IfcPolyline_Factory *getIfcPolyline_Factory();
    /**
     */
    IfcPostalAddress_Factory *getIfcPostalAddress_Factory();
    /**
     */
    IfcPreDefinedDimensionSymbol_Factory *getIfcPreDefinedDimensionSymbol_Factory();
    /**
     */
    IfcPreDefinedPointMarkerSymbol_Factory *getIfcPreDefinedPointMarkerSymbol_Factory();
    /**
     */
    IfcPreDefinedTerminatorSymbol_Factory *getIfcPreDefinedTerminatorSymbol_Factory();
    /**
     */
    IfcPresentationLayerAssignment_Factory *getIfcPresentationLayerAssignment_Factory();
    /**
     */
    IfcPresentationLayerWithStyle_Factory *getIfcPresentationLayerWithStyle_Factory();
    /**
     */
    IfcPresentationStyleAssignment_Factory *getIfcPresentationStyleAssignment_Factory();
    /**
     */
    IfcProcedure_Factory *getIfcProcedure_Factory();
    /**
     */
    IfcProductDefinitionShape_Factory *getIfcProductDefinitionShape_Factory();
    /**
     */
    IfcProductRepresentation_Factory *getIfcProductRepresentation_Factory();
    /**
     */
    IfcProductsOfCombustionProperties_Factory *getIfcProductsOfCombustionProperties_Factory();
    /**
     */
    IfcProject_Factory *getIfcProject_Factory();
    /**
     */
    IfcProjectOrder_Factory *getIfcProjectOrder_Factory();
    /**
     */
    IfcProjectOrderRecord_Factory *getIfcProjectOrderRecord_Factory();
    /**
     */
    IfcProjectionCurve_Factory *getIfcProjectionCurve_Factory();
    /**
     */
    IfcProjectionElement_Factory *getIfcProjectionElement_Factory();
    /**
     */
    IfcPropertyBoundedValue_Factory *getIfcPropertyBoundedValue_Factory();
    /**
     */
    IfcPropertyConstraintRelationship_Factory *getIfcPropertyConstraintRelationship_Factory();
    /**
     */
    IfcPropertyDependencyRelationship_Factory *getIfcPropertyDependencyRelationship_Factory();
    /**
     */
    IfcPropertyEnumeratedValue_Factory *getIfcPropertyEnumeratedValue_Factory();
    /**
     */
    IfcPropertyEnumeration_Factory *getIfcPropertyEnumeration_Factory();
    /**
     */
    IfcPropertyListValue_Factory *getIfcPropertyListValue_Factory();
    /**
     */
    IfcPropertyReferenceValue_Factory *getIfcPropertyReferenceValue_Factory();
    /**
     */
    IfcPropertySet_Factory *getIfcPropertySet_Factory();
    /**
     */
    IfcPropertySingleValue_Factory *getIfcPropertySingleValue_Factory();
    /**
     */
    IfcPropertyTableValue_Factory *getIfcPropertyTableValue_Factory();
    /**
     */
    IfcProtectiveDeviceType_Factory *getIfcProtectiveDeviceType_Factory();
    /**
     */
    IfcProxy_Factory *getIfcProxy_Factory();
    /**
     */
    IfcPumpType_Factory *getIfcPumpType_Factory();
    /**
     */
    IfcQuantityArea_Factory *getIfcQuantityArea_Factory();
    /**
     */
    IfcQuantityCount_Factory *getIfcQuantityCount_Factory();
    /**
     */
    IfcQuantityLength_Factory *getIfcQuantityLength_Factory();
    /**
     */
    IfcQuantityTime_Factory *getIfcQuantityTime_Factory();
    /**
     */
    IfcQuantityVolume_Factory *getIfcQuantityVolume_Factory();
    /**
     */
    IfcQuantityWeight_Factory *getIfcQuantityWeight_Factory();
    /**
     */
    IfcRadiusDimension_Factory *getIfcRadiusDimension_Factory();
    /**
     */
    IfcRailing_Factory *getIfcRailing_Factory();
    /**
     */
    IfcRailingType_Factory *getIfcRailingType_Factory();
    /**
     */
    IfcRamp_Factory *getIfcRamp_Factory();
    /**
     */
    IfcRampFlight_Factory *getIfcRampFlight_Factory();
    /**
     */
    IfcRampFlightType_Factory *getIfcRampFlightType_Factory();
    /**
     */
    IfcRationalBezierCurve_Factory *getIfcRationalBezierCurve_Factory();
    /**
     */
    IfcRectangleHollowProfileDef_Factory *getIfcRectangleHollowProfileDef_Factory();
    /**
     */
    IfcRectangleProfileDef_Factory *getIfcRectangleProfileDef_Factory();
    /**
     */
    IfcRectangularPyramid_Factory *getIfcRectangularPyramid_Factory();
    /**
     */
    IfcRectangularTrimmedSurface_Factory *getIfcRectangularTrimmedSurface_Factory();
    /**
     */
    IfcReferencesValueDocument_Factory *getIfcReferencesValueDocument_Factory();
    /**
     */
    IfcRegularTimeSeries_Factory *getIfcRegularTimeSeries_Factory();
    /**
     */
    IfcReinforcementBarProperties_Factory *getIfcReinforcementBarProperties_Factory();
    /**
     */
    IfcReinforcementDefinitionProperties_Factory *getIfcReinforcementDefinitionProperties_Factory();
    /**
     */
    IfcReinforcingBar_Factory *getIfcReinforcingBar_Factory();
    /**
     */
    IfcReinforcingMesh_Factory *getIfcReinforcingMesh_Factory();
    /**
     */
    IfcRelAggregates_Factory *getIfcRelAggregates_Factory();
    /**
     */
    IfcRelAssignsTasks_Factory *getIfcRelAssignsTasks_Factory();
    /**
     */
    IfcRelAssignsToActor_Factory *getIfcRelAssignsToActor_Factory();
    /**
     */
    IfcRelAssignsToControl_Factory *getIfcRelAssignsToControl_Factory();
    /**
     */
    IfcRelAssignsToGroup_Factory *getIfcRelAssignsToGroup_Factory();
    /**
     */
    IfcRelAssignsToProcess_Factory *getIfcRelAssignsToProcess_Factory();
    /**
     */
    IfcRelAssignsToProduct_Factory *getIfcRelAssignsToProduct_Factory();
    /**
     */
    IfcRelAssignsToProjectOrder_Factory *getIfcRelAssignsToProjectOrder_Factory();
    /**
     */
    IfcRelAssignsToResource_Factory *getIfcRelAssignsToResource_Factory();
    /**
     */
    IfcRelAssociates_Factory *getIfcRelAssociates_Factory();
    /**
     */
    IfcRelAssociatesAppliedValue_Factory *getIfcRelAssociatesAppliedValue_Factory();
    /**
     */
    IfcRelAssociatesApproval_Factory *getIfcRelAssociatesApproval_Factory();
    /**
     */
    IfcRelAssociatesClassification_Factory *getIfcRelAssociatesClassification_Factory();
    /**
     */
    IfcRelAssociatesConstraint_Factory *getIfcRelAssociatesConstraint_Factory();
    /**
     */
    IfcRelAssociatesDocument_Factory *getIfcRelAssociatesDocument_Factory();
    /**
     */
    IfcRelAssociatesLibrary_Factory *getIfcRelAssociatesLibrary_Factory();
    /**
     */
    IfcRelAssociatesMaterial_Factory *getIfcRelAssociatesMaterial_Factory();
    /**
     */
    IfcRelAssociatesProfileProperties_Factory *getIfcRelAssociatesProfileProperties_Factory();
    /**
     */
    IfcRelConnectsElements_Factory *getIfcRelConnectsElements_Factory();
    /**
     */
    IfcRelConnectsPathElements_Factory *getIfcRelConnectsPathElements_Factory();
    /**
     */
    IfcRelConnectsPortToElement_Factory *getIfcRelConnectsPortToElement_Factory();
    /**
     */
    IfcRelConnectsPorts_Factory *getIfcRelConnectsPorts_Factory();
    /**
     */
    IfcRelConnectsStructuralActivity_Factory *getIfcRelConnectsStructuralActivity_Factory();
    /**
     */
    IfcRelConnectsStructuralElement_Factory *getIfcRelConnectsStructuralElement_Factory();
    /**
     */
    IfcRelConnectsStructuralMember_Factory *getIfcRelConnectsStructuralMember_Factory();
    /**
     */
    IfcRelConnectsWithEccentricity_Factory *getIfcRelConnectsWithEccentricity_Factory();
    /**
     */
    IfcRelConnectsWithRealizingElements_Factory *getIfcRelConnectsWithRealizingElements_Factory();
    /**
     */
    IfcRelContainedInSpatialStructure_Factory *getIfcRelContainedInSpatialStructure_Factory();
    /**
     */
    IfcRelCoversBldgElements_Factory *getIfcRelCoversBldgElements_Factory();
    /**
     */
    IfcRelCoversSpaces_Factory *getIfcRelCoversSpaces_Factory();
    /**
     */
    IfcRelDefinesByProperties_Factory *getIfcRelDefinesByProperties_Factory();
    /**
     */
    IfcRelDefinesByType_Factory *getIfcRelDefinesByType_Factory();
    /**
     */
    IfcRelFillsElement_Factory *getIfcRelFillsElement_Factory();
    /**
     */
    IfcRelFlowControlElements_Factory *getIfcRelFlowControlElements_Factory();
    /**
     */
    IfcRelInteractionRequirements_Factory *getIfcRelInteractionRequirements_Factory();
    /**
     */
    IfcRelNests_Factory *getIfcRelNests_Factory();
    /**
     */
    IfcRelOccupiesSpaces_Factory *getIfcRelOccupiesSpaces_Factory();
    /**
     */
    IfcRelOverridesProperties_Factory *getIfcRelOverridesProperties_Factory();
    /**
     */
    IfcRelProjectsElement_Factory *getIfcRelProjectsElement_Factory();
    /**
     */
    IfcRelReferencedInSpatialStructure_Factory *getIfcRelReferencedInSpatialStructure_Factory();
    /**
     */
    IfcRelSchedulesCostItems_Factory *getIfcRelSchedulesCostItems_Factory();
    /**
     */
    IfcRelSequence_Factory *getIfcRelSequence_Factory();
    /**
     */
    IfcRelServicesBuildings_Factory *getIfcRelServicesBuildings_Factory();
    /**
     */
    IfcRelSpaceBoundary_Factory *getIfcRelSpaceBoundary_Factory();
    /**
     */
    IfcRelVoidsElement_Factory *getIfcRelVoidsElement_Factory();
    /**
     */
    IfcRelaxation_Factory *getIfcRelaxation_Factory();
    /**
     */
    IfcRepresentation_Factory *getIfcRepresentation_Factory();
    /**
     */
    IfcRepresentationContext_Factory *getIfcRepresentationContext_Factory();
    /**
     */
    IfcRepresentationMap_Factory *getIfcRepresentationMap_Factory();
    /**
     */
    IfcRevolvedAreaSolid_Factory *getIfcRevolvedAreaSolid_Factory();
    /**
     */
    IfcRibPlateProfileProperties_Factory *getIfcRibPlateProfileProperties_Factory();
    /**
     */
    IfcRightCircularCone_Factory *getIfcRightCircularCone_Factory();
    /**
     */
    IfcRightCircularCylinder_Factory *getIfcRightCircularCylinder_Factory();
    /**
     */
    IfcRoof_Factory *getIfcRoof_Factory();
    /**
     */
    IfcRoundedEdgeFeature_Factory *getIfcRoundedEdgeFeature_Factory();
    /**
     */
    IfcRoundedRectangleProfileDef_Factory *getIfcRoundedRectangleProfileDef_Factory();
    /**
     */
    IfcSIUnit_Factory *getIfcSIUnit_Factory();
    /**
     */
    IfcSanitaryTerminalType_Factory *getIfcSanitaryTerminalType_Factory();
    /**
     */
    IfcScheduleTimeControl_Factory *getIfcScheduleTimeControl_Factory();
    /**
     */
    IfcSectionProperties_Factory *getIfcSectionProperties_Factory();
    /**
     */
    IfcSectionReinforcementProperties_Factory *getIfcSectionReinforcementProperties_Factory();
    /**
     */
    IfcSectionedSpine_Factory *getIfcSectionedSpine_Factory();
    /**
     */
    IfcSensorType_Factory *getIfcSensorType_Factory();
    /**
     */
    IfcServiceLife_Factory *getIfcServiceLife_Factory();
    /**
     */
    IfcServiceLifeFactor_Factory *getIfcServiceLifeFactor_Factory();
    /**
     */
    IfcShapeAspect_Factory *getIfcShapeAspect_Factory();
    /**
     */
    IfcShapeRepresentation_Factory *getIfcShapeRepresentation_Factory();
    /**
     */
    IfcShellBasedSurfaceModel_Factory *getIfcShellBasedSurfaceModel_Factory();
    /**
     */
    IfcSite_Factory *getIfcSite_Factory();
    /**
     */
    IfcSlab_Factory *getIfcSlab_Factory();
    /**
     */
    IfcSlabType_Factory *getIfcSlabType_Factory();
    /**
     */
    IfcSlippageConnectionCondition_Factory *getIfcSlippageConnectionCondition_Factory();
    /**
     */
    IfcSoundProperties_Factory *getIfcSoundProperties_Factory();
    /**
     */
    IfcSoundValue_Factory *getIfcSoundValue_Factory();
    /**
     */
    IfcSpace_Factory *getIfcSpace_Factory();
    /**
     */
    IfcSpaceHeaterType_Factory *getIfcSpaceHeaterType_Factory();
    /**
     */
    IfcSpaceProgram_Factory *getIfcSpaceProgram_Factory();
    /**
     */
    IfcSpaceThermalLoadProperties_Factory *getIfcSpaceThermalLoadProperties_Factory();
    /**
     */
    IfcSpaceType_Factory *getIfcSpaceType_Factory();
    /**
     */
    IfcSphere_Factory *getIfcSphere_Factory();
    /**
     */
    IfcStackTerminalType_Factory *getIfcStackTerminalType_Factory();
    /**
     */
    IfcStair_Factory *getIfcStair_Factory();
    /**
     */
    IfcStairFlight_Factory *getIfcStairFlight_Factory();
    /**
     */
    IfcStairFlightType_Factory *getIfcStairFlightType_Factory();
    /**
     */
    IfcStructuralAnalysisModel_Factory *getIfcStructuralAnalysisModel_Factory();
    /**
     */
    IfcStructuralCurveConnection_Factory *getIfcStructuralCurveConnection_Factory();
    /**
     */
    IfcStructuralCurveMember_Factory *getIfcStructuralCurveMember_Factory();
    /**
     */
    IfcStructuralCurveMemberVarying_Factory *getIfcStructuralCurveMemberVarying_Factory();
    /**
     */
    IfcStructuralLinearAction_Factory *getIfcStructuralLinearAction_Factory();
    /**
     */
    IfcStructuralLinearActionVarying_Factory *getIfcStructuralLinearActionVarying_Factory();
    /**
     */
    IfcStructuralLoadGroup_Factory *getIfcStructuralLoadGroup_Factory();
    /**
     */
    IfcStructuralLoadLinearForce_Factory *getIfcStructuralLoadLinearForce_Factory();
    /**
     */
    IfcStructuralLoadPlanarForce_Factory *getIfcStructuralLoadPlanarForce_Factory();
    /**
     */
    IfcStructuralLoadSingleDisplacement_Factory *getIfcStructuralLoadSingleDisplacement_Factory();
    /**
     */
    IfcStructuralLoadSingleDisplacementDistortion_Factory *getIfcStructuralLoadSingleDisplacementDistortion_Factory();
    /**
     */
    IfcStructuralLoadSingleForce_Factory *getIfcStructuralLoadSingleForce_Factory();
    /**
     */
    IfcStructuralLoadSingleForceWarping_Factory *getIfcStructuralLoadSingleForceWarping_Factory();
    /**
     */
    IfcStructuralLoadTemperature_Factory *getIfcStructuralLoadTemperature_Factory();
    /**
     */
    IfcStructuralPlanarAction_Factory *getIfcStructuralPlanarAction_Factory();
    /**
     */
    IfcStructuralPlanarActionVarying_Factory *getIfcStructuralPlanarActionVarying_Factory();
    /**
     */
    IfcStructuralPointAction_Factory *getIfcStructuralPointAction_Factory();
    /**
     */
    IfcStructuralPointConnection_Factory *getIfcStructuralPointConnection_Factory();
    /**
     */
    IfcStructuralPointReaction_Factory *getIfcStructuralPointReaction_Factory();
    /**
     */
    IfcStructuralProfileProperties_Factory *getIfcStructuralProfileProperties_Factory();
    /**
     */
    IfcStructuralResultGroup_Factory *getIfcStructuralResultGroup_Factory();
    /**
     */
    IfcStructuralSteelProfileProperties_Factory *getIfcStructuralSteelProfileProperties_Factory();
    /**
     */
    IfcStructuralSurfaceConnection_Factory *getIfcStructuralSurfaceConnection_Factory();
    /**
     */
    IfcStructuralSurfaceMember_Factory *getIfcStructuralSurfaceMember_Factory();
    /**
     */
    IfcStructuralSurfaceMemberVarying_Factory *getIfcStructuralSurfaceMemberVarying_Factory();
    /**
     */
    IfcStructuredDimensionCallout_Factory *getIfcStructuredDimensionCallout_Factory();
    /**
     */
    IfcStyledItem_Factory *getIfcStyledItem_Factory();
    /**
     */
    IfcStyledRepresentation_Factory *getIfcStyledRepresentation_Factory();
    /**
     */
    IfcSubContractResource_Factory *getIfcSubContractResource_Factory();
    /**
     */
    IfcSubedge_Factory *getIfcSubedge_Factory();
    /**
     */
    IfcSurfaceCurveSweptAreaSolid_Factory *getIfcSurfaceCurveSweptAreaSolid_Factory();
    /**
     */
    IfcSurfaceOfLinearExtrusion_Factory *getIfcSurfaceOfLinearExtrusion_Factory();
    /**
     */
    IfcSurfaceOfRevolution_Factory *getIfcSurfaceOfRevolution_Factory();
    /**
     */
    IfcSurfaceStyle_Factory *getIfcSurfaceStyle_Factory();
    /**
     */
    IfcSurfaceStyleLighting_Factory *getIfcSurfaceStyleLighting_Factory();
    /**
     */
    IfcSurfaceStyleRefraction_Factory *getIfcSurfaceStyleRefraction_Factory();
    /**
     */
    IfcSurfaceStyleRendering_Factory *getIfcSurfaceStyleRendering_Factory();
    /**
     */
    IfcSurfaceStyleShading_Factory *getIfcSurfaceStyleShading_Factory();
    /**
     */
    IfcSurfaceStyleWithTextures_Factory *getIfcSurfaceStyleWithTextures_Factory();
    /**
     */
    IfcSweptDiskSolid_Factory *getIfcSweptDiskSolid_Factory();
    /**
     */
    IfcSwitchingDeviceType_Factory *getIfcSwitchingDeviceType_Factory();
    /**
     */
    IfcSymbolStyle_Factory *getIfcSymbolStyle_Factory();
    /**
     */
    IfcSystem_Factory *getIfcSystem_Factory();
    /**
     */
    IfcSystemFurnitureElementType_Factory *getIfcSystemFurnitureElementType_Factory();
    /**
     */
    IfcTShapeProfileDef_Factory *getIfcTShapeProfileDef_Factory();
    /**
     */
    IfcTable_Factory *getIfcTable_Factory();
    /**
     */
    IfcTableRow_Factory *getIfcTableRow_Factory();
    /**
     */
    IfcTankType_Factory *getIfcTankType_Factory();
    /**
     */
    IfcTask_Factory *getIfcTask_Factory();
    /**
     */
    IfcTelecomAddress_Factory *getIfcTelecomAddress_Factory();
    /**
     */
    IfcTendon_Factory *getIfcTendon_Factory();
    /**
     */
    IfcTendonAnchor_Factory *getIfcTendonAnchor_Factory();
    /**
     */
    IfcTerminatorSymbol_Factory *getIfcTerminatorSymbol_Factory();
    /**
     */
    IfcTextLiteral_Factory *getIfcTextLiteral_Factory();
    /**
     */
    IfcTextLiteralWithExtent_Factory *getIfcTextLiteralWithExtent_Factory();
    /**
     */
    IfcTextStyle_Factory *getIfcTextStyle_Factory();
    /**
     */
    IfcTextStyleFontModel_Factory *getIfcTextStyleFontModel_Factory();
    /**
     */
    IfcTextStyleForDefinedFont_Factory *getIfcTextStyleForDefinedFont_Factory();
    /**
     */
    IfcTextStyleTextModel_Factory *getIfcTextStyleTextModel_Factory();
    /**
     */
    IfcTextStyleWithBoxCharacteristics_Factory *getIfcTextStyleWithBoxCharacteristics_Factory();
    /**
     */
    IfcTextureCoordinateGenerator_Factory *getIfcTextureCoordinateGenerator_Factory();
    /**
     */
    IfcTextureMap_Factory *getIfcTextureMap_Factory();
    /**
     */
    IfcTextureVertex_Factory *getIfcTextureVertex_Factory();
    /**
     */
    IfcThermalMaterialProperties_Factory *getIfcThermalMaterialProperties_Factory();
    /**
     */
    IfcTimeSeriesReferenceRelationship_Factory *getIfcTimeSeriesReferenceRelationship_Factory();
    /**
     */
    IfcTimeSeriesSchedule_Factory *getIfcTimeSeriesSchedule_Factory();
    /**
     */
    IfcTimeSeriesValue_Factory *getIfcTimeSeriesValue_Factory();
    /**
     */
    IfcTopologyRepresentation_Factory *getIfcTopologyRepresentation_Factory();
    /**
     */
    IfcTransformerType_Factory *getIfcTransformerType_Factory();
    /**
     */
    IfcTransportElement_Factory *getIfcTransportElement_Factory();
    /**
     */
    IfcTransportElementType_Factory *getIfcTransportElementType_Factory();
    /**
     */
    IfcTrapeziumProfileDef_Factory *getIfcTrapeziumProfileDef_Factory();
    /**
     */
    IfcTrimmedCurve_Factory *getIfcTrimmedCurve_Factory();
    /**
     */
    IfcTubeBundleType_Factory *getIfcTubeBundleType_Factory();
    /**
     */
    IfcTwoDirectionRepeatFactor_Factory *getIfcTwoDirectionRepeatFactor_Factory();
    /**
     */
    IfcTypeObject_Factory *getIfcTypeObject_Factory();
    /**
     */
    IfcTypeProduct_Factory *getIfcTypeProduct_Factory();
    /**
     */
    IfcUShapeProfileDef_Factory *getIfcUShapeProfileDef_Factory();
    /**
     */
    IfcUnitAssignment_Factory *getIfcUnitAssignment_Factory();
    /**
     */
    IfcUnitaryEquipmentType_Factory *getIfcUnitaryEquipmentType_Factory();
    /**
     */
    IfcValveType_Factory *getIfcValveType_Factory();
    /**
     */
    IfcVector_Factory *getIfcVector_Factory();
    /**
     */
    IfcVertex_Factory *getIfcVertex_Factory();
    /**
     */
    IfcVertexBasedTextureMap_Factory *getIfcVertexBasedTextureMap_Factory();
    /**
     */
    IfcVertexLoop_Factory *getIfcVertexLoop_Factory();
    /**
     */
    IfcVertexPoint_Factory *getIfcVertexPoint_Factory();
    /**
     */
    IfcVibrationIsolatorType_Factory *getIfcVibrationIsolatorType_Factory();
    /**
     */
    IfcVirtualElement_Factory *getIfcVirtualElement_Factory();
    /**
     */
    IfcVirtualGridIntersection_Factory *getIfcVirtualGridIntersection_Factory();
    /**
     */
    IfcWall_Factory *getIfcWall_Factory();
    /**
     */
    IfcWallStandardCase_Factory *getIfcWallStandardCase_Factory();
    /**
     */
    IfcWallType_Factory *getIfcWallType_Factory();
    /**
     */
    IfcWasteTerminalType_Factory *getIfcWasteTerminalType_Factory();
    /**
     */
    IfcWaterProperties_Factory *getIfcWaterProperties_Factory();
    /**
     */
    IfcWindow_Factory *getIfcWindow_Factory();
    /**
     */
    IfcWindowLiningProperties_Factory *getIfcWindowLiningProperties_Factory();
    /**
     */
    IfcWindowPanelProperties_Factory *getIfcWindowPanelProperties_Factory();
    /**
     */
    IfcWindowStyle_Factory *getIfcWindowStyle_Factory();
    /**
     */
    IfcWorkPlan_Factory *getIfcWorkPlan_Factory();
    /**
     */
    IfcWorkSchedule_Factory *getIfcWorkSchedule_Factory();
    /**
     */
    IfcZShapeProfileDef_Factory *getIfcZShapeProfileDef_Factory();
    /**
     */
    IfcZone_Factory *getIfcZone_Factory();

  };

}

#endif // IFC2X3_MODEL_H
