/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_EXPRESSDATASET_H
#define IFC2X3_EXPRESSDATASET_H
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcSpatialStructureElementType.h"
#include "ifc2x3/IfcOpenShell.h"
#include "ifc2x3/IfcRectangleProfileDef.h"
#include "ifc2x3/IfcTask.h"
#include "ifc2x3/IfcRamp.h"
#include "ifc2x3/IfcTShapeProfileDef.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcPostalAddress.h"
#include "ifc2x3/IfcVector.h"
#include "ifc2x3/IfcRelConnectsStructuralElement.h"
#include "ifc2x3/IfcAnnotationFillAreaOccurrence.h"
#include "ifc2x3/IfcDoorStyle.h"
#include "ifc2x3/IfcProductDefinitionShape.h"
#include "ifc2x3/IfcLShapeProfileDef.h"
#include "ifc2x3/IfcFastenerType.h"
#include "ifc2x3/IfcPlanarExtent.h"
#include "ifc2x3/IfcPreDefinedCurveFont.h"
#include "ifc2x3/IfcConstraint.h"
#include "ifc2x3/IfcSurfaceOfLinearExtrusion.h"
#include "ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h"
#include "ifc2x3/IfcAnnotationSurface.h"
#include "ifc2x3/IfcSurface.h"
#include "ifc2x3/IfcWallType.h"
#include "ifc2x3/IfcSubedge.h"
#include "ifc2x3/IfcZShapeProfileDef.h"
#include "ifc2x3/IfcProjectionCurve.h"
#include "ifc2x3/IfcChamferEdgeFeature.h"
#include "ifc2x3/IfcLibraryReference.h"
#include "ifc2x3/IfcWorkPlan.h"
#include "ifc2x3/IfcSlippageConnectionCondition.h"
#include "ifc2x3/IfcSphere.h"
#include "ifc2x3/IfcFlowController.h"
#include "ifc2x3/IfcStructuredDimensionCallout.h"
#include "ifc2x3/IfcPreDefinedColour.h"
#include "ifc2x3/IfcPreDefinedSymbol.h"
#include "ifc2x3/IfcTendonAnchor.h"
#include "ifc2x3/IfcFurnitureType.h"
#include "ifc2x3/IfcShapeRepresentation.h"
#include "ifc2x3/IfcBoundingBox.h"
#include "ifc2x3/IfcDuctFittingType.h"
#include "ifc2x3/IfcAirToAirHeatRecoveryType.h"
#include "ifc2x3/IfcRibPlateProfileProperties.h"
#include "ifc2x3/IfcRelServicesBuildings.h"
#include "ifc2x3/IfcStructuralLoadStatic.h"
#include "ifc2x3/IfcGeometricRepresentationContext.h"
#include "ifc2x3/IfcFillAreaStyleHatching.h"
#include "ifc2x3/IfcObject.h"
#include "ifc2x3/IfcClassificationNotationFacet.h"
#include "ifc2x3/IfcGeneralProfileProperties.h"
#include "ifc2x3/IfcOpeningElement.h"
#include "ifc2x3/IfcCurveBoundedPlane.h"
#include "ifc2x3/IfcPile.h"
#include "ifc2x3/IfcDimensionCurveDirectedCallout.h"
#include "ifc2x3/IfcStructuralCurveConnection.h"
#include "ifc2x3/IfcRelNests.h"
#include "ifc2x3/IfcFaceOuterBound.h"
#include "ifc2x3/IfcRelReferencedInSpatialStructure.h"
#include "ifc2x3/IfcCompositeCurveSegment.h"
#include "ifc2x3/IfcBlock.h"
#include "ifc2x3/IfcPropertyDefinition.h"
#include "ifc2x3/IfcStructuralPointConnection.h"
#include "ifc2x3/IfcRelSchedulesCostItems.h"
#include "ifc2x3/IfcDistributionFlowElement.h"
#include "ifc2x3/IfcTextureVertex.h"
#include "ifc2x3/IfcWasteTerminalType.h"
#include "ifc2x3/IfcClassification.h"
#include "ifc2x3/IfcCircle.h"
#include "ifc2x3/IfcClassificationReference.h"
#include "ifc2x3/IfcMechanicalFastenerType.h"
#include "ifc2x3/IfcLightDistributionData.h"
#include "ifc2x3/IfcRelAssignsToControl.h"
#include "ifc2x3/IfcPhysicalSimpleQuantity.h"
#include "ifc2x3/IfcDraughtingPreDefinedColour.h"
#include "ifc2x3/IfcRelAssociatesClassification.h"
#include "ifc2x3/Ifc2DCompositeCurve.h"
#include "ifc2x3/IfcLightSourceGoniometric.h"
#include "ifc2x3/IfcTextLiteral.h"
#include "ifc2x3/IfcCableCarrierSegmentType.h"
#include "ifc2x3/IfcDoorLiningProperties.h"
#include "ifc2x3/IfcElectricTimeControlType.h"
#include "ifc2x3/IfcDimensionCalloutRelationship.h"
#include "ifc2x3/IfcAnnotationOccurrence.h"
#include "ifc2x3/IfcTextStyleWithBoxCharacteristics.h"
#include <Step/BaseExpressDataSet.h>
#include "ifc2x3/IfcHygroscopicMaterialProperties.h"
#include "ifc2x3/IfcStructuralLoadLinearForce.h"
#include "ifc2x3/IfcBuilding.h"
#include "ifc2x3/IfcOutletType.h"
#include "ifc2x3/IfcAxis1Placement.h"
#include "ifc2x3/IfcRailingType.h"
#include "ifc2x3/IfcSpaceThermalLoadProperties.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/IfcDerivedUnitElement.h"
#include "ifc2x3/IfcTrimmedCurve.h"
#include "ifc2x3/IfcSurfaceOfRevolution.h"
#include "ifc2x3/IfcPresentationStyle.h"
#include "ifc2x3/IfcActorRole.h"
#include "ifc2x3/IfcRelaxation.h"
#include "ifc2x3/IfcFireSuppressionTerminalType.h"
#include "ifc2x3/IfcDateAndTime.h"
#include "ifc2x3/IfcCondenserType.h"
#include "ifc2x3/IfcObjective.h"
#include "ifc2x3/IfcFurnishingElement.h"
#include "ifc2x3/IfcDocumentInformationRelationship.h"
#include "ifc2x3/IfcRelConnectsPathElements.h"
#include "ifc2x3/IfcBoilerType.h"
#include "ifc2x3/IfcEdge.h"
#include "ifc2x3/IfcReinforcementDefinitionProperties.h"
#include "ifc2x3/IfcAirTerminalType.h"
#include "ifc2x3/IfcRelAssociatesProfileProperties.h"
#include "ifc2x3/IfcConnectionCurveGeometry.h"
#include "ifc2x3/IfcLightFixtureType.h"
#include "ifc2x3/IfcElectricHeaterType.h"
#include "ifc2x3/IfcResource.h"
#include "ifc2x3/IfcRelOverridesProperties.h"
#include "ifc2x3/IfcProfileProperties.h"
#include "ifc2x3/IfcIrregularTimeSeriesValue.h"
#include "ifc2x3/IfcOrderAction.h"
#include "ifc2x3/IfcFaceBasedSurfaceModel.h"
#include "ifc2x3/IfcFaceSurface.h"
#include "ifc2x3/IfcLampType.h"
#include "ifc2x3/IfcStructuralLinearActionVarying.h"
#include "ifc2x3/IfcCompressorType.h"
#include "ifc2x3/IfcReinforcingMesh.h"
#include "ifc2x3/IfcRightCircularCylinder.h"
#include "ifc2x3/IfcMemberType.h"
#include "ifc2x3/IfcPermeableCoveringProperties.h"
#include "ifc2x3/IfcPerformanceHistory.h"
#include "ifc2x3/IfcPersonAndOrganization.h"
#include "ifc2x3/IfcConnectedFaceSet.h"
#include "ifc2x3/IfcStairFlight.h"
#include "ifc2x3/IfcFuelProperties.h"
#include "ifc2x3/IfcOwnerHistory.h"
#include "ifc2x3/IfcStructuralPlanarActionVarying.h"
#include "ifc2x3/IfcGasTerminalType.h"
#include "ifc2x3/IfcMechanicalSteelMaterialProperties.h"
#include "ifc2x3/IfcFooting.h"
#include "ifc2x3/IfcStructuralCurveMemberVarying.h"
#include "ifc2x3/IfcServiceLife.h"
#include "ifc2x3/IfcOrganizationRelationship.h"
#include "ifc2x3/IfcConnectionGeometry.h"
#include "ifc2x3/IfcPolygonalBoundedHalfSpace.h"
#include "ifc2x3/IfcStructuralPointAction.h"
#include "ifc2x3/IfcHumidifierType.h"
#include "ifc2x3/IfcCostSchedule.h"
#include "ifc2x3/IfcConstructionResource.h"
#include "ifc2x3/IfcConnectionPortGeometry.h"
#include "ifc2x3/IfcLocalPlacement.h"
#include "ifc2x3/IfcRelSequence.h"
#include "ifc2x3/IfcTerminatorSymbol.h"
#include "ifc2x3/IfcCartesianTransformationOperator3D.h"
#include "ifc2x3/IfcCraneRailFShapeProfileDef.h"
#include "ifc2x3/IfcRepresentationItem.h"
#include "ifc2x3/IfcDiscreteAccessoryType.h"
#include "ifc2x3/IfcSurfaceTexture.h"
#include "ifc2x3/IfcBuildingStorey.h"
#include "ifc2x3/IfcRelAssignsToGroup.h"
#include "ifc2x3/IfcPreDefinedTextFont.h"
#include "ifc2x3/IfcExternallyDefinedSurfaceStyle.h"
#include "ifc2x3/IfcSurfaceStyleRendering.h"
#include "ifc2x3/IfcBooleanClippingResult.h"
#include "ifc2x3/IfcPlate.h"
#include "ifc2x3/IfcStructuralSurfaceMember.h"
#include "ifc2x3/IfcStructuralLoadSingleDisplacement.h"
#include "ifc2x3/IfcSectionedSpine.h"
#include "ifc2x3/IfcPropertyBoundedValue.h"
#include "ifc2x3/IfcSolidModel.h"
#include "ifc2x3/IfcFlowFitting.h"
#include "ifc2x3/IfcAsset.h"
#include "ifc2x3/IfcFacetedBrep.h"
#include "ifc2x3/IfcCurveStyleFontPattern.h"
#include "ifc2x3/IfcTransportElement.h"
#include "ifc2x3/IfcImageTexture.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/IfcRelContainedInSpatialStructure.h"
#include "ifc2x3/IfcMetric.h"
#include "ifc2x3/IfcStructuralAction.h"
#include "ifc2x3/IfcWindow.h"
#include "ifc2x3/IfcSectionProperties.h"
#include "ifc2x3/IfcSurfaceCurveSweptAreaSolid.h"
#include "ifc2x3/IfcProcedure.h"
#include "ifc2x3/IfcElectricDistributionPoint.h"
#include "ifc2x3/IfcElementQuantity.h"
#include "ifc2x3/IfcTopologicalRepresentationItem.h"
#include "ifc2x3/IfcRelationship.h"
#include "ifc2x3/IfcDraughtingCallout.h"
#include "ifc2x3/IfcOpticalMaterialProperties.h"
#include "ifc2x3/IfcRectangularTrimmedSurface.h"
#include "ifc2x3/IfcActor.h"
#include "ifc2x3/IfcClassificationItem.h"
#include "ifc2x3/IfcPresentationLayerAssignment.h"
#include "ifc2x3/IfcTimeSeries.h"
#include "ifc2x3/IfcRationalBezierCurve.h"
#include "ifc2x3/IfcCompositeCurve.h"
#include "ifc2x3/IfcRelAssociatesAppliedValue.h"
#include "ifc2x3/IfcPolyLoop.h"
#include "ifc2x3/IfcApprovalPropertyRelationship.h"
#include "ifc2x3/IfcPoint.h"
#include "ifc2x3/IfcVertexLoop.h"
#include "ifc2x3/IfcSurfaceStyleLighting.h"
#include "ifc2x3/IfcOffsetCurve2D.h"
#include "ifc2x3/IfcFlowControllerType.h"
#include "ifc2x3/IfcRelConnects.h"
#include "ifc2x3/IfcEvaporatorType.h"
#include "ifc2x3/IfcShapeModel.h"
#include "ifc2x3/IfcIrregularTimeSeries.h"
#include "ifc2x3/IfcSpace.h"
#include <Step/Referenced.h>
#include "ifc2x3/IfcVertexPoint.h"
#include "ifc2x3/IfcSystemFurnitureElementType.h"
#include "ifc2x3/IfcRelAssignsToResource.h"
#include "ifc2x3/IfcDimensionCurveTerminator.h"
#include "ifc2x3/IfcColourRgb.h"
#include "ifc2x3/IfcArbitraryProfileDefWithVoids.h"
#include "ifc2x3/IfcInventory.h"
#include "ifc2x3/IfcRepresentation.h"
#include "ifc2x3/IfcFaceBound.h"
#include "ifc2x3/IfcDamperType.h"
#include "ifc2x3/IfcSlabType.h"
#include "ifc2x3/IfcConstraintClassificationRelationship.h"
#include "ifc2x3/IfcOffsetCurve3D.h"
#include "ifc2x3/IfcBuildingElementComponent.h"
#include "ifc2x3/IfcReinforcementBarProperties.h"
#include "ifc2x3/IfcEquipmentElement.h"
#include "ifc2x3/IfcRelAssociatesApproval.h"
#include "ifc2x3/IfcProjectOrder.h"
#include "ifc2x3/IfcSIUnit.h"
#include "ifc2x3/IfcPipeFittingType.h"
#include "ifc2x3/IfcUnitaryEquipmentType.h"
#include "ifc2x3/IfcGroup.h"
#include "ifc2x3/IfcPointOnSurface.h"
#include "ifc2x3/IfcEvaporativeCoolerType.h"
#include "ifc2x3/IfcFanType.h"
#include "ifc2x3/IfcBoundedSurface.h"
#include "ifc2x3/IfcProductsOfCombustionProperties.h"
#include "ifc2x3/IfcPlanarBox.h"
#include "ifc2x3/IfcTimeSeriesSchedule.h"
#include "ifc2x3/IfcElementType.h"
#include "ifc2x3/IfcClassificationNotation.h"
#include "ifc2x3/IfcUShapeProfileDef.h"
#include "ifc2x3/IfcFlowInstrumentType.h"
#include "ifc2x3/IfcManifoldSolidBrep.h"
#include "ifc2x3/IfcLightIntensityDistribution.h"
#include "ifc2x3/IfcCableSegmentType.h"
#include "ifc2x3/IfcElectricalElement.h"
#include "ifc2x3/IfcAnnotationCurveOccurrence.h"
#include "ifc2x3/IfcPixelTexture.h"
#include "ifc2x3/IfcRelConnectsStructuralMember.h"
#include "ifc2x3/IfcBoundaryCondition.h"
#include "ifc2x3/IfcWorkSchedule.h"
#include "ifc2x3/IfcRelDefinesByType.h"
#include "ifc2x3/IfcEdgeCurve.h"
#include "ifc2x3/IfcFurnishingElementType.h"
#include "ifc2x3/IfcOrganization.h"
#include "ifc2x3/IfcPhysicalComplexQuantity.h"
#include "ifc2x3/IfcHeatExchangerType.h"
#include "ifc2x3/IfcCenterLineProfileDef.h"
#include "ifc2x3/IfcContextDependentUnit.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/IfcShellBasedSurfaceModel.h"
#include "ifc2x3/IfcSurfaceStyle.h"
#include "ifc2x3/IfcDocumentElectronicFormat.h"
#include "ifc2x3/IfcDiscreteAccessory.h"
#include "ifc2x3/IfcRelAggregates.h"
#include "ifc2x3/IfcRelConnectsWithRealizingElements.h"
#include "ifc2x3/IfcRelConnectsWithEccentricity.h"
#include "ifc2x3/IfcGeneralMaterialProperties.h"
#include "ifc2x3/IfcCoveringType.h"
#include "ifc2x3/IfcColumnType.h"
#include "ifc2x3/IfcDraughtingCalloutRelationship.h"
#include "ifc2x3/IfcDerivedUnit.h"
#include "ifc2x3/IfcElectricGeneratorType.h"
#include "ifc2x3/IfcBeamType.h"
#include "ifc2x3/IfcLightSourcePositional.h"
#include "ifc2x3/IfcSurfaceStyleShading.h"
#include "ifc2x3/IfcRelDecomposes.h"
#include "ifc2x3/IfcDraughtingPreDefinedTextFont.h"
#include "ifc2x3/IfcQuantityArea.h"
#include "ifc2x3/IfcGridAxis.h"
#include "ifc2x3/IfcStructuralReaction.h"
#include "ifc2x3/IfcPropertyListValue.h"
#include "ifc2x3/IfcFillAreaStyle.h"
#include "ifc2x3/IfcOrientedEdge.h"
#include "ifc2x3/IfcTubeBundleType.h"
#include "ifc2x3/IfcCurveStyleFont.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcConditionCriterion.h"
#include "ifc2x3/IfcCoolingTowerType.h"
#include "ifc2x3/IfcGeometricCurveSet.h"
#include "ifc2x3/IfcElementAssembly.h"
#include "ifc2x3/IfcStructuralLoadGroup.h"
#include "ifc2x3/IfcPropertyDependencyRelationship.h"
#include "ifc2x3/IfcCostItem.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcFace.h"
#include "ifc2x3/IfcPermit.h"
#include "ifc2x3/IfcFastener.h"
#include "ifc2x3/IfcPresentationLayerWithStyle.h"
#include "ifc2x3/IfcCurrencyRelationship.h"
#include "ifc2x3/IfcAddress.h"
#include "ifc2x3/IfcRectangleHollowProfileDef.h"
#include "ifc2x3/IfcConnectionSurfaceGeometry.h"
#include "ifc2x3/IfcTable.h"
#include "ifc2x3/IfcCShapeProfileDef.h"
#include "ifc2x3/IfcSoundValue.h"
#include "ifc2x3/IfcReinforcingBar.h"
#include "ifc2x3/IfcPhysicalQuantity.h"
#include "ifc2x3/IfcRectangularPyramid.h"
#include "ifc2x3/IfcProjectionElement.h"
#include "ifc2x3/IfcEllipse.h"
#include "ifc2x3/IfcRampFlight.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/IfcStructuralAnalysisModel.h"
#include "ifc2x3/IfcCurveStyle.h"
#include "ifc2x3/IfcMaterialLayerSetUsage.h"
#include "ifc2x3/IfcMaterialClassificationRelationship.h"
#include "ifc2x3/IfcStairFlightType.h"
#include "ifc2x3/IfcRelFlowControlElements.h"
#include "ifc2x3/IfcArbitraryClosedProfileDef.h"
#include "ifc2x3/IfcAlarmType.h"
#include "ifc2x3/IfcPreDefinedPointMarkerSymbol.h"
#include "ifc2x3/IfcBeam.h"
#include "ifc2x3/IfcGrid.h"
#include "ifc2x3/IfcQuantityCount.h"
#include "ifc2x3/IfcClassificationItemRelationship.h"
#include "ifc2x3/IfcSpaceProgram.h"
#include "ifc2x3/IfcSite.h"
#include "ifc2x3/IfcServiceLifeFactor.h"
#include "ifc2x3/IfcCableCarrierFittingType.h"
#include "ifc2x3/IfcSubContractResource.h"
#include "ifc2x3/IfcConnectionPointGeometry.h"
#include "ifc2x3/IfcQuantityLength.h"
#include "ifc2x3/IfcDocumentInformation.h"
#include "ifc2x3/IfcFlowMovingDeviceType.h"
#include "ifc2x3/IfcDistributionControlElementType.h"
#include "ifc2x3/IfcCraneRailAShapeProfileDef.h"
#include "ifc2x3/IfcDoorPanelProperties.h"
#include "ifc2x3/IfcFlowFittingType.h"
#include "ifc2x3/IfcTwoDirectionRepeatFactor.h"
#include "ifc2x3/IfcPropertySet.h"
#include "ifc2x3/IfcEdgeFeature.h"
#include "ifc2x3/IfcParameterizedProfileDef.h"
#include "ifc2x3/IfcWall.h"
#include "ifc2x3/IfcPipeSegmentType.h"
#include "ifc2x3/IfcProductRepresentation.h"
#include "ifc2x3/IfcPlateType.h"
#include "ifc2x3/IfcTypeProduct.h"
#include "ifc2x3/IfcAnnotation.h"
#include "ifc2x3/IfcBuildingElementType.h"
#include "ifc2x3/IfcStructuralCurveMember.h"
#include "ifc2x3/IfcSensorType.h"
#include "ifc2x3/IfcBoundedCurve.h"
#include "ifc2x3/IfcStructuralProfileProperties.h"
#include "ifc2x3/IfcDoor.h"
#include "ifc2x3/IfcConstructionProductResource.h"
#include "ifc2x3/IfcBSplineCurve.h"
#include "ifc2x3/IfcRelAssociates.h"
#include "ifc2x3/IfcDuctSilencerType.h"
#include "ifc2x3/IfcAppliedValueRelationship.h"
#include "ifc2x3/IfcTimeSeriesReferenceRelationship.h"
#include "ifc2x3/IfcFlowStorageDevice.h"
#include "ifc2x3/IfcMember.h"
#include "ifc2x3/IfcTextStyle.h"
#include "ifc2x3/IfcElectricMotorType.h"
#include "ifc2x3/IfcDiameterDimension.h"
#include "ifc2x3/IfcMaterialLayerSet.h"
#include "ifc2x3/IfcWaterProperties.h"
#include "ifc2x3/IfcCurtainWall.h"
#include "ifc2x3/IfcRelDefines.h"
#include "ifc2x3/IfcOneDirectionRepeatFactor.h"
#include "ifc2x3/IfcElectricalBaseProperties.h"
#include "ifc2x3/IfcFailureConnectionCondition.h"
#include "ifc2x3/IfcStructuralSurfaceMemberVarying.h"
#include "ifc2x3/IfcExtrudedAreaSolid.h"
#include "ifc2x3/IfcCartesianTransformationOperator2DnonUniform.h"
#include "ifc2x3/IfcStructuralConnection.h"
#include "ifc2x3/IfcElectricFlowStorageDeviceType.h"
#include "ifc2x3/IfcRelAssociatesLibrary.h"
#include "ifc2x3/IfcSweptAreaSolid.h"
#include "ifc2x3/IfcBlobTexture.h"
#include "ifc2x3/IfcVirtualGridIntersection.h"
#include "ifc2x3/IfcDistributionChamberElement.h"
#include "ifc2x3/IfcMeasureWithUnit.h"
#include "ifc2x3/IfcStructuralLoad.h"
#include "ifc2x3/IfcCircleProfileDef.h"
#include "ifc2x3/IfcFillAreaStyleTiles.h"
#include "ifc2x3/IfcEnergyConversionDevice.h"
#include "ifc2x3/IfcMonetaryUnit.h"
#include "ifc2x3/IfcStructuralConnectionCondition.h"
#include "ifc2x3/IfcVertexBasedTextureMap.h"
#include "ifc2x3/IfcPreDefinedTerminatorSymbol.h"
#include "ifc2x3/IfcMaterialProperties.h"
#include "ifc2x3/IfcDimensionalExponents.h"
#include "ifc2x3/IfcSlab.h"
#include "ifc2x3/IfcTopologyRepresentation.h"
#include "ifc2x3/IfcRoundedRectangleProfileDef.h"
#include "ifc2x3/IfcExtendedMaterialProperties.h"
#include "ifc2x3/IfcComplexProperty.h"
#include "ifc2x3/IfcSymbolStyle.h"
#include "ifc2x3/IfcConnectionPointEccentricity.h"
#include "ifc2x3/IfcLine.h"
#include "ifc2x3/IfcSurfaceStyleRefraction.h"
#include "ifc2x3/IfcStructuralLoadSingleForce.h"
#include "ifc2x3/IfcTransportElementType.h"
#include "ifc2x3/IfcDraughtingPreDefinedCurveFont.h"
#include "ifc2x3/IfcStructuralSteelProfileProperties.h"
#include "ifc2x3/IfcBezierCurve.h"
#include "ifc2x3/IfcStructuralResultGroup.h"
#include "ifc2x3/IfcStructuralLoadTemperature.h"
#include "ifc2x3/IfcPropertySingleValue.h"
#include "ifc2x3/IfcEquipmentStandard.h"
#include "ifc2x3/IfcTypeObject.h"
#include "ifc2x3/IfcStructuralPointReaction.h"
#include <Step/BaseEntity.h>
#include "ifc2x3/IfcPreDefinedItem.h"
#include "ifc2x3/IfcTableRow.h"
#include "ifc2x3/IfcRelAssociatesMaterial.h"
#include "ifc2x3/IfcRegularTimeSeries.h"
#include "ifc2x3/IfcCostValue.h"
#include "ifc2x3/IfcTextStyleFontModel.h"
#include "ifc2x3/IfcApprovalActorRelationship.h"
#include "ifc2x3/IfcArbitraryOpenProfileDef.h"
#include "ifc2x3/IfcMappedItem.h"
#include "ifc2x3/IfcSweptDiskSolid.h"
#include "ifc2x3/IfcConstraintRelationship.h"
#include "ifc2x3/IfcMaterialList.h"
#include "ifc2x3/IfcLinearDimension.h"
#include "ifc2x3/IfcFlowStorageDeviceType.h"
#include "ifc2x3/IfcSpaceType.h"
#include "ifc2x3/IfcDistributionElementType.h"
#include "ifc2x3/IfcBoundaryEdgeCondition.h"
#include "ifc2x3/IfcRailing.h"
#include "ifc2x3/IfcQuantityWeight.h"
#include "ifc2x3/IfcRoundedEdgeFeature.h"
#include "ifc2x3/IfcProjectOrderRecord.h"
#include "ifc2x3/IfcFlowSegmentType.h"
#include "ifc2x3/IfcFlowTerminal.h"
#include "ifc2x3/IfcCartesianTransformationOperator3DnonUniform.h"
#include "ifc2x3/IfcChillerType.h"
#include "ifc2x3/IfcQuantityTime.h"
#include "ifc2x3/IfcNamedUnit.h"
#include "ifc2x3/IfcRelAssignsTasks.h"
#include "ifc2x3/IfcRightCircularCone.h"
#include "ifc2x3/IfcHalfSpaceSolid.h"
#include "ifc2x3/IfcPropertyConstraintRelationship.h"
#include "ifc2x3/IfcFluidFlowProperties.h"
#include "ifc2x3/IfcBoundaryNodeConditionWarping.h"
#include "ifc2x3/IfcFlowMovingDevice.h"
#include "ifc2x3/IfcObjectPlacement.h"
#include "ifc2x3/IfcQuantityVolume.h"
#include "ifc2x3/IfcConversionBasedUnit.h"
#include "ifc2x3/IfcFlowTerminalType.h"
#include "ifc2x3/IfcStructuralLoadSingleForceWarping.h"
#include "ifc2x3/IfcMotorConnectionType.h"
#include "ifc2x3/IfcSanitaryTerminalType.h"
#include "ifc2x3/IfcCurveStyleFontAndScaling.h"
#include "ifc2x3/IfcLightSource.h"
#include "ifc2x3/IfcExternalReference.h"
#include "ifc2x3/IfcPlacement.h"
#include "ifc2x3/IfcStyleModel.h"
#include "ifc2x3/IfcPropertyReferenceValue.h"
#include "ifc2x3/IfcShapeAspect.h"
#include "ifc2x3/IfcPolyline.h"
#include "ifc2x3/IfcStructuralItem.h"
#include "ifc2x3/IfcTelecomAddress.h"
#include "ifc2x3/IfcRelCoversBldgElements.h"
#include "ifc2x3/IfcExternallyDefinedHatchStyle.h"
#include "ifc2x3/IfcPort.h"
#include "ifc2x3/IfcRampFlightType.h"
#include "ifc2x3/IfcConstructionEquipmentResource.h"
#include "ifc2x3/IfcRelAssociatesConstraint.h"
#include "ifc2x3/IfcRelAssignsToProjectOrder.h"
#include "ifc2x3/IfcPropertyEnumeration.h"
#include "ifc2x3/IfcPath.h"
#include "ifc2x3/IfcRelConnectsPortToElement.h"
#include "ifc2x3/IfcRelConnectsPorts.h"
#include "ifc2x3/IfcCartesianTransformationOperator.h"
#include "ifc2x3/IfcSwitchingDeviceType.h"
#include "ifc2x3/IfcCsgPrimitive3D.h"
#include "ifc2x3/IfcApprovalRelationship.h"
#include "ifc2x3/IfcCondition.h"
#include "ifc2x3/IfcPreDefinedDimensionSymbol.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcElementComponent.h"
#include "ifc2x3/IfcDocumentReference.h"
#include "ifc2x3/IfcAnnotationSymbolOccurrence.h"
#include "ifc2x3/IfcBuildingElementProxy.h"
#include "ifc2x3/IfcPointOnCurve.h"
#include "ifc2x3/IfcFurnitureStandard.h"
#include "ifc2x3/IfcRelInteractionRequirements.h"
#include "ifc2x3/IfcRelConnectsElements.h"
#include "ifc2x3/IfcExternallyDefinedTextFont.h"
#include "ifc2x3/IfcMaterialDefinitionRepresentation.h"
#include "ifc2x3/IfcConstraintAggregationRelationship.h"
#include "ifc2x3/IfcJunctionBoxType.h"
#include "ifc2x3/IfcProperty.h"
#include "ifc2x3/IfcFeatureElementAddition.h"
#include "ifc2x3/IfcRepresentationContext.h"
#include "ifc2x3/IfcProfileDef.h"
#include "ifc2x3/IfcDistributionPort.h"
#include "ifc2x3/IfcApplication.h"
#include "ifc2x3/IfcDimensionCurve.h"
#include "ifc2x3/IfcGridPlacement.h"
#include "ifc2x3/IfcDerivedProfileDef.h"
#include "ifc2x3/IfcAnnotationSurfaceOccurrence.h"
#include "ifc2x3/IfcSimpleProperty.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcTrapeziumProfileDef.h"
#include "ifc2x3/IfcObjectDefinition.h"
#include "ifc2x3/IfcDuctSegmentType.h"
#include "ifc2x3/IfcReferencesValueDocument.h"
#include "ifc2x3/IfcStructuralSurfaceConnection.h"
#include "ifc2x3/IfcBoundaryNodeCondition.h"
#include "ifc2x3/IfcLightSourceDirectional.h"
#include "ifc2x3/IfcGeometricRepresentationSubContext.h"
#include "ifc2x3/IfcTextureMap.h"
#include <Step/RefLinkedList.h>
#include "ifc2x3/IfcStructuralLoadSingleDisplacementDistortion.h"
#include "ifc2x3/IfcCsgSolid.h"
#include "ifc2x3/IfcDefinedSymbol.h"
#include "ifc2x3/IfcRelProjectsElement.h"
#include "ifc2x3/IfcFlowTreatmentDeviceType.h"
#include "ifc2x3/IfcLoop.h"
#include "ifc2x3/IfcActionRequest.h"
#include "ifc2x3/IfcProxy.h"
#include "ifc2x3/IfcProject.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcFilterType.h"
#include "ifc2x3/IfcTankType.h"
#include "ifc2x3/IfcBoundaryFaceCondition.h"
#include "ifc2x3/IfcStyledItem.h"
#include "ifc2x3/IfcRepresentationMap.h"
#include "ifc2x3/IfcSectionReinforcementProperties.h"
#include "ifc2x3/IfcPlane.h"
#include "ifc2x3/IfcSweptSurface.h"
#include "ifc2x3/IfcAirTerminalBoxType.h"
#include "ifc2x3/IfcElectricalCircuit.h"
#include "ifc2x3/IfcStructuralActivity.h"
#include "ifc2x3/IfcCoordinatedUniversalTimeOffset.h"
#include "ifc2x3/IfcMechanicalConcreteMaterialProperties.h"
#include "ifc2x3/IfcCrewResource.h"
#include "ifc2x3/IfcStair.h"
#include "ifc2x3/IfcAnnotationFillArea.h"
#include "ifc2x3/IfcCompositeProfileDef.h"
#include "ifc2x3/IfcStructuralLinearAction.h"
#include "ifc2x3/IfcTextStyleTextModel.h"
#include "ifc2x3/IfcRelAssignsToProduct.h"
#include "ifc2x3/IfcWindowLiningProperties.h"
#include "ifc2x3/IfcEnvironmentalImpactValue.h"
#include "ifc2x3/IfcEllipseProfileDef.h"
#include "ifc2x3/IfcPresentationStyleAssignment.h"
#include "ifc2x3/IfcFeatureElement.h"
#include "ifc2x3/IfcBuildingElementProxyType.h"
#include "ifc2x3/IfcLightSourceSpot.h"
#include "ifc2x3/IfcPropertyTableValue.h"
#include "ifc2x3/IfcSoundProperties.h"
#include "ifc2x3/IfcCircleHollowProfileDef.h"
#include "ifc2x3/IfcConic.h"
#include "ifc2x3/IfcElementComponentType.h"
#include "ifc2x3/IfcFeatureElementSubtraction.h"
#include "ifc2x3/IfcRoof.h"
#include "ifc2x3/IfcPropertyEnumeratedValue.h"
#include "ifc2x3/IfcRelOccupiesSpaces.h"
#include "ifc2x3/IfcGeometricSet.h"
#include "ifc2x3/IfcWindowStyle.h"
#include "ifc2x3/IfcThermalMaterialProperties.h"
#include "ifc2x3/IfcStructuralLoadPlanarForce.h"
#include "ifc2x3/IfcControllerType.h"
#include "ifc2x3/IfcRelAssigns.h"
#include "ifc2x3/IfcElementarySurface.h"
#include "ifc2x3/IfcStructuralPlanarAction.h"
#include "ifc2x3/IfcCalendarDate.h"
#include "ifc2x3/IfcTendon.h"
#include "ifc2x3/IfcCovering.h"
#include "ifc2x3/IfcSurfaceStyleWithTextures.h"
#include "ifc2x3/IfcAxis2Placement2D.h"
#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include "ifc2x3/IfcProtectiveDeviceType.h"
#include "ifc2x3/IfcEdgeLoop.h"
#include "ifc2x3/IfcDistributionChamberElementType.h"
#include "ifc2x3/IfcDistributionElement.h"
#include "ifc2x3/IfcFacetedBrepWithVoids.h"
#include "ifc2x3/IfcSpaceHeaterType.h"
#include "ifc2x3/IfcRelFillsElement.h"
#include "ifc2x3/IfcTextureCoordinateGenerator.h"
#include "ifc2x3/IfcStackTerminalType.h"
#include "ifc2x3/IfcOccupant.h"
#include "ifc2x3/IfcWallStandardCase.h"
#include "ifc2x3/IfcLaborResource.h"
#include "ifc2x3/IfcMaterial.h"
#include "ifc2x3/IfcVibrationIsolatorType.h"
#include "ifc2x3/IfcUnitAssignment.h"
#include "ifc2x3/IfcTimeSeriesValue.h"
#include "ifc2x3/IfcProcess.h"
#include "ifc2x3/IfcRelVoidsElement.h"
#include "ifc2x3/IfcSystem.h"
#include "ifc2x3/IfcColourSpecification.h"
#include "ifc2x3/IfcDistributionFlowElementType.h"
#include "ifc2x3/IfcFlowSegment.h"
#include "ifc2x3/IfcMechanicalMaterialProperties.h"
#include "ifc2x3/IfcBuildingElementPart.h"
#include "ifc2x3/IfcPerson.h"
#include "ifc2x3/IfcVirtualElement.h"
#include "ifc2x3/IfcMaterialLayer.h"
#include "ifc2x3/IfcRelCoversSpaces.h"
#include "ifc2x3/IfcScheduleTimeControl.h"
#include "ifc2x3/IfcCooledBeamType.h"
#include "ifc2x3/IfcWindowPanelProperties.h"
#include "ifc2x3/IfcReinforcingElement.h"
#include "ifc2x3/IfcZone.h"
#include "ifc2x3/IfcTransformerType.h"
#include "ifc2x3/IfcCurtainWallType.h"
#include "ifc2x3/IfcRevolvedAreaSolid.h"
#include "ifc2x3/IfcStructuralMember.h"
#include "ifc2x3/IfcExternallyDefinedSymbol.h"
#include "ifc2x3/IfcFlowMeterType.h"
#include "ifc2x3/IfcConstructionMaterialResource.h"
#include "ifc2x3/IfcElectricApplianceType.h"
#include "ifc2x3/IfcCartesianTransformationOperator2D.h"
#include "ifc2x3/IfcFlowTreatmentDevice.h"
#include "ifc2x3/IfcBooleanResult.h"
#include "ifc2x3/IfcColumn.h"
#include "ifc2x3/IfcAngularDimension.h"
#include "ifc2x3/IfcClosedShell.h"
#include "ifc2x3/IfcRelSpaceBoundary.h"
#include "ifc2x3/IfcRelConnectsStructuralActivity.h"
#include "ifc2x3/IfcLibraryInformation.h"
#include "ifc2x3/IfcPumpType.h"
#include "ifc2x3/IfcDimensionPair.h"
#include "ifc2x3/IfcMechanicalFastener.h"
#include "ifc2x3/IfcRadiusDimension.h"
#include "ifc2x3/IfcStyledRepresentation.h"
#include "ifc2x3/IfcValveType.h"
#include "ifc2x3/IfcRelAssociatesDocument.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcTextLiteralWithExtent.h"
#include "ifc2x3/IfcRelDefinesByProperties.h"
#include "ifc2x3/IfcLocalTime.h"
#include "ifc2x3/IfcTextureCoordinate.h"
#include "ifc2x3/IfcApproval.h"
#include "ifc2x3/IfcRelAssignsToProcess.h"
#include "ifc2x3/IfcBoxedHalfSpace.h"
#include "ifc2x3/IfcMove.h"
#include "ifc2x3/IfcRelAssignsToActor.h"
#include "ifc2x3/IfcActuatorType.h"
#include "ifc2x3/IfcCoilType.h"
#include "ifc2x3/IfcAsymmetricIShapeProfileDef.h"
#include "ifc2x3/IfcVertex.h"
#include "ifc2x3/IfcRoot.h"
#include "ifc2x3/IfcIShapeProfileDef.h"
#include "ifc2x3/IfcTextStyleForDefinedFont.h"
#include "ifc2x3/IfcEnergyProperties.h"
#include "ifc2x3/IfcWorkControl.h"
#include "ifc2x3/IfcAppliedValue.h"
#include "ifc2x3/IfcDistributionControlElement.h"
#include "ifc2x3/IfcAnnotationTextOccurrence.h"
#include "ifc2x3/IfcLightSourceAmbient.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF ExpressDataSet : public Step::BaseExpressDataSet {
    public:
        /**
         */
        ExpressDataSet();
        virtual ~ExpressDataSet();
        /**
         * @param id
         */
        Ifc2DCompositeCurve *getIfc2DCompositeCurve(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfc2DCompositeCurve(Ifc2DCompositeCurve *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< Ifc2DCompositeCurve > createIfc2DCompositeCurve(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        Ifc2DCompositeCurve *cloneIfc2DCompositeCurve(const Ifc2DCompositeCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcActionRequest *getIfcActionRequest(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcActionRequest(IfcActionRequest *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcActionRequest > createIfcActionRequest(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcActionRequest *cloneIfcActionRequest(const IfcActionRequest &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcActor *getIfcActor(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcActor(IfcActor *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcActor > createIfcActor(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcActor *cloneIfcActor(const IfcActor &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcActorRole *getIfcActorRole(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcActorRole(IfcActorRole *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcActorRole > createIfcActorRole(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcActorRole *cloneIfcActorRole(const IfcActorRole &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcActuatorType *getIfcActuatorType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcActuatorType(IfcActuatorType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcActuatorType > createIfcActuatorType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcActuatorType *cloneIfcActuatorType(const IfcActuatorType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAirTerminalBoxType *getIfcAirTerminalBoxType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAirTerminalBoxType(IfcAirTerminalBoxType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAirTerminalBoxType > createIfcAirTerminalBoxType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAirTerminalBoxType *cloneIfcAirTerminalBoxType(const IfcAirTerminalBoxType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAirTerminalType *getIfcAirTerminalType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAirTerminalType(IfcAirTerminalType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAirTerminalType > createIfcAirTerminalType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAirTerminalType *cloneIfcAirTerminalType(const IfcAirTerminalType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAirToAirHeatRecoveryType *getIfcAirToAirHeatRecoveryType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAirToAirHeatRecoveryType > createIfcAirToAirHeatRecoveryType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAirToAirHeatRecoveryType *cloneIfcAirToAirHeatRecoveryType(const IfcAirToAirHeatRecoveryType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAlarmType *getIfcAlarmType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAlarmType(IfcAlarmType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAlarmType > createIfcAlarmType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAlarmType *cloneIfcAlarmType(const IfcAlarmType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAngularDimension *getIfcAngularDimension(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAngularDimension(IfcAngularDimension *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAngularDimension > createIfcAngularDimension(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAngularDimension *cloneIfcAngularDimension(const IfcAngularDimension &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAnnotation *getIfcAnnotation(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAnnotation(IfcAnnotation *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAnnotation > createIfcAnnotation(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAnnotation *cloneIfcAnnotation(const IfcAnnotation &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAnnotationCurveOccurrence *getIfcAnnotationCurveOccurrence(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAnnotationCurveOccurrence > createIfcAnnotationCurveOccurrence(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAnnotationCurveOccurrence *cloneIfcAnnotationCurveOccurrence(const IfcAnnotationCurveOccurrence &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAnnotationFillArea *getIfcAnnotationFillArea(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAnnotationFillArea(IfcAnnotationFillArea *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAnnotationFillArea > createIfcAnnotationFillArea(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAnnotationFillArea *cloneIfcAnnotationFillArea(const IfcAnnotationFillArea &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAnnotationFillAreaOccurrence *getIfcAnnotationFillAreaOccurrence(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAnnotationFillAreaOccurrence > createIfcAnnotationFillAreaOccurrence(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAnnotationFillAreaOccurrence *cloneIfcAnnotationFillAreaOccurrence(const IfcAnnotationFillAreaOccurrence &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAnnotationSurface *getIfcAnnotationSurface(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAnnotationSurface(IfcAnnotationSurface *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAnnotationSurface > createIfcAnnotationSurface(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAnnotationSurface *cloneIfcAnnotationSurface(const IfcAnnotationSurface &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAnnotationSurfaceOccurrence *getIfcAnnotationSurfaceOccurrence(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAnnotationSurfaceOccurrence > createIfcAnnotationSurfaceOccurrence(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAnnotationSurfaceOccurrence *cloneIfcAnnotationSurfaceOccurrence(const IfcAnnotationSurfaceOccurrence &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAnnotationSymbolOccurrence *getIfcAnnotationSymbolOccurrence(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAnnotationSymbolOccurrence > createIfcAnnotationSymbolOccurrence(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAnnotationSymbolOccurrence *cloneIfcAnnotationSymbolOccurrence(const IfcAnnotationSymbolOccurrence &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAnnotationTextOccurrence *getIfcAnnotationTextOccurrence(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAnnotationTextOccurrence > createIfcAnnotationTextOccurrence(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAnnotationTextOccurrence *cloneIfcAnnotationTextOccurrence(const IfcAnnotationTextOccurrence &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcApplication *getIfcApplication(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcApplication(IfcApplication *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcApplication > createIfcApplication(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcApplication *cloneIfcApplication(const IfcApplication &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAppliedValueRelationship *getIfcAppliedValueRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAppliedValueRelationship(IfcAppliedValueRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAppliedValueRelationship > createIfcAppliedValueRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAppliedValueRelationship *cloneIfcAppliedValueRelationship(const IfcAppliedValueRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcApproval *getIfcApproval(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcApproval(IfcApproval *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcApproval > createIfcApproval(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcApproval *cloneIfcApproval(const IfcApproval &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcApprovalActorRelationship *getIfcApprovalActorRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcApprovalActorRelationship(IfcApprovalActorRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcApprovalActorRelationship > createIfcApprovalActorRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcApprovalActorRelationship *cloneIfcApprovalActorRelationship(const IfcApprovalActorRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcApprovalPropertyRelationship *getIfcApprovalPropertyRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcApprovalPropertyRelationship > createIfcApprovalPropertyRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcApprovalPropertyRelationship *cloneIfcApprovalPropertyRelationship(const IfcApprovalPropertyRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcApprovalRelationship *getIfcApprovalRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcApprovalRelationship(IfcApprovalRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcApprovalRelationship > createIfcApprovalRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcApprovalRelationship *cloneIfcApprovalRelationship(const IfcApprovalRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcArbitraryClosedProfileDef *getIfcArbitraryClosedProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcArbitraryClosedProfileDef > createIfcArbitraryClosedProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcArbitraryClosedProfileDef *cloneIfcArbitraryClosedProfileDef(const IfcArbitraryClosedProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcArbitraryOpenProfileDef *getIfcArbitraryOpenProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcArbitraryOpenProfileDef > createIfcArbitraryOpenProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcArbitraryOpenProfileDef *cloneIfcArbitraryOpenProfileDef(const IfcArbitraryOpenProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcArbitraryProfileDefWithVoids *getIfcArbitraryProfileDefWithVoids(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcArbitraryProfileDefWithVoids > createIfcArbitraryProfileDefWithVoids(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcArbitraryProfileDefWithVoids *cloneIfcArbitraryProfileDefWithVoids(const IfcArbitraryProfileDefWithVoids &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAsset *getIfcAsset(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAsset(IfcAsset *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAsset > createIfcAsset(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAsset *cloneIfcAsset(const IfcAsset &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAsymmetricIShapeProfileDef *getIfcAsymmetricIShapeProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAsymmetricIShapeProfileDef > createIfcAsymmetricIShapeProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAsymmetricIShapeProfileDef *cloneIfcAsymmetricIShapeProfileDef(const IfcAsymmetricIShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAxis1Placement *getIfcAxis1Placement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAxis1Placement(IfcAxis1Placement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAxis1Placement > createIfcAxis1Placement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAxis1Placement *cloneIfcAxis1Placement(const IfcAxis1Placement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAxis2Placement2D *getIfcAxis2Placement2D(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAxis2Placement2D(IfcAxis2Placement2D *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAxis2Placement2D > createIfcAxis2Placement2D(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAxis2Placement2D *cloneIfcAxis2Placement2D(const IfcAxis2Placement2D &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAxis2Placement3D *getIfcAxis2Placement3D(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcAxis2Placement3D(IfcAxis2Placement3D *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcAxis2Placement3D > createIfcAxis2Placement3D(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcAxis2Placement3D *cloneIfcAxis2Placement3D(const IfcAxis2Placement3D &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBeam *getIfcBeam(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBeam(IfcBeam *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBeam > createIfcBeam(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBeam *cloneIfcBeam(const IfcBeam &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBeamType *getIfcBeamType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBeamType(IfcBeamType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBeamType > createIfcBeamType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBeamType *cloneIfcBeamType(const IfcBeamType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBezierCurve *getIfcBezierCurve(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBezierCurve(IfcBezierCurve *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBezierCurve > createIfcBezierCurve(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBezierCurve *cloneIfcBezierCurve(const IfcBezierCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBlobTexture *getIfcBlobTexture(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBlobTexture(IfcBlobTexture *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBlobTexture > createIfcBlobTexture(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBlobTexture *cloneIfcBlobTexture(const IfcBlobTexture &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBlock *getIfcBlock(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBlock(IfcBlock *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBlock > createIfcBlock(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBlock *cloneIfcBlock(const IfcBlock &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoilerType *getIfcBoilerType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBoilerType(IfcBoilerType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBoilerType > createIfcBoilerType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBoilerType *cloneIfcBoilerType(const IfcBoilerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBooleanClippingResult *getIfcBooleanClippingResult(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBooleanClippingResult(IfcBooleanClippingResult *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBooleanClippingResult > createIfcBooleanClippingResult(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBooleanClippingResult *cloneIfcBooleanClippingResult(const IfcBooleanClippingResult &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBooleanResult *getIfcBooleanResult(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBooleanResult(IfcBooleanResult *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBooleanResult > createIfcBooleanResult(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBooleanResult *cloneIfcBooleanResult(const IfcBooleanResult &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoundaryEdgeCondition *getIfcBoundaryEdgeCondition(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBoundaryEdgeCondition > createIfcBoundaryEdgeCondition(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBoundaryEdgeCondition *cloneIfcBoundaryEdgeCondition(const IfcBoundaryEdgeCondition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoundaryFaceCondition *getIfcBoundaryFaceCondition(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBoundaryFaceCondition > createIfcBoundaryFaceCondition(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBoundaryFaceCondition *cloneIfcBoundaryFaceCondition(const IfcBoundaryFaceCondition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoundaryNodeCondition *getIfcBoundaryNodeCondition(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBoundaryNodeCondition > createIfcBoundaryNodeCondition(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBoundaryNodeCondition *cloneIfcBoundaryNodeCondition(const IfcBoundaryNodeCondition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoundaryNodeConditionWarping *getIfcBoundaryNodeConditionWarping(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBoundaryNodeConditionWarping > createIfcBoundaryNodeConditionWarping(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBoundaryNodeConditionWarping *cloneIfcBoundaryNodeConditionWarping(const IfcBoundaryNodeConditionWarping &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoundedSurface *getIfcBoundedSurface(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBoundedSurface(IfcBoundedSurface *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBoundedSurface > createIfcBoundedSurface(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBoundedSurface *cloneIfcBoundedSurface(const IfcBoundedSurface &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoundingBox *getIfcBoundingBox(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBoundingBox(IfcBoundingBox *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBoundingBox > createIfcBoundingBox(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBoundingBox *cloneIfcBoundingBox(const IfcBoundingBox &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoxedHalfSpace *getIfcBoxedHalfSpace(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBoxedHalfSpace(IfcBoxedHalfSpace *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBoxedHalfSpace > createIfcBoxedHalfSpace(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBoxedHalfSpace *cloneIfcBoxedHalfSpace(const IfcBoxedHalfSpace &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBuilding *getIfcBuilding(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBuilding(IfcBuilding *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBuilding > createIfcBuilding(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBuilding *cloneIfcBuilding(const IfcBuilding &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBuildingElementPart *getIfcBuildingElementPart(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBuildingElementPart(IfcBuildingElementPart *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBuildingElementPart > createIfcBuildingElementPart(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBuildingElementPart *cloneIfcBuildingElementPart(const IfcBuildingElementPart &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBuildingElementProxy *getIfcBuildingElementProxy(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBuildingElementProxy(IfcBuildingElementProxy *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBuildingElementProxy > createIfcBuildingElementProxy(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBuildingElementProxy *cloneIfcBuildingElementProxy(const IfcBuildingElementProxy &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBuildingElementProxyType *getIfcBuildingElementProxyType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBuildingElementProxyType(IfcBuildingElementProxyType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBuildingElementProxyType > createIfcBuildingElementProxyType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBuildingElementProxyType *cloneIfcBuildingElementProxyType(const IfcBuildingElementProxyType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBuildingStorey *getIfcBuildingStorey(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcBuildingStorey(IfcBuildingStorey *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcBuildingStorey > createIfcBuildingStorey(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcBuildingStorey *cloneIfcBuildingStorey(const IfcBuildingStorey &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCShapeProfileDef *getIfcCShapeProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCShapeProfileDef(IfcCShapeProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCShapeProfileDef > createIfcCShapeProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCShapeProfileDef *cloneIfcCShapeProfileDef(const IfcCShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCableCarrierFittingType *getIfcCableCarrierFittingType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCableCarrierFittingType(IfcCableCarrierFittingType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCableCarrierFittingType > createIfcCableCarrierFittingType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCableCarrierFittingType *cloneIfcCableCarrierFittingType(const IfcCableCarrierFittingType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCableCarrierSegmentType *getIfcCableCarrierSegmentType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCableCarrierSegmentType > createIfcCableCarrierSegmentType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCableCarrierSegmentType *cloneIfcCableCarrierSegmentType(const IfcCableCarrierSegmentType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCableSegmentType *getIfcCableSegmentType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCableSegmentType(IfcCableSegmentType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCableSegmentType > createIfcCableSegmentType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCableSegmentType *cloneIfcCableSegmentType(const IfcCableSegmentType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCalendarDate *getIfcCalendarDate(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCalendarDate(IfcCalendarDate *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCalendarDate > createIfcCalendarDate(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCalendarDate *cloneIfcCalendarDate(const IfcCalendarDate &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCartesianPoint *getIfcCartesianPoint(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCartesianPoint(IfcCartesianPoint *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCartesianPoint > createIfcCartesianPoint(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCartesianPoint *cloneIfcCartesianPoint(const IfcCartesianPoint &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCartesianTransformationOperator2D *getIfcCartesianTransformationOperator2D(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCartesianTransformationOperator2D > createIfcCartesianTransformationOperator2D(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCartesianTransformationOperator2D *cloneIfcCartesianTransformationOperator2D(const IfcCartesianTransformationOperator2D &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCartesianTransformationOperator2DnonUniform *getIfcCartesianTransformationOperator2DnonUniform(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCartesianTransformationOperator2DnonUniform > createIfcCartesianTransformationOperator2DnonUniform(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCartesianTransformationOperator2DnonUniform *cloneIfcCartesianTransformationOperator2DnonUniform(const IfcCartesianTransformationOperator2DnonUniform &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCartesianTransformationOperator3D *getIfcCartesianTransformationOperator3D(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCartesianTransformationOperator3D > createIfcCartesianTransformationOperator3D(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCartesianTransformationOperator3D *cloneIfcCartesianTransformationOperator3D(const IfcCartesianTransformationOperator3D &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCartesianTransformationOperator3DnonUniform *getIfcCartesianTransformationOperator3DnonUniform(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCartesianTransformationOperator3DnonUniform > createIfcCartesianTransformationOperator3DnonUniform(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCartesianTransformationOperator3DnonUniform *cloneIfcCartesianTransformationOperator3DnonUniform(const IfcCartesianTransformationOperator3DnonUniform &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCenterLineProfileDef *getIfcCenterLineProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCenterLineProfileDef(IfcCenterLineProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCenterLineProfileDef > createIfcCenterLineProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCenterLineProfileDef *cloneIfcCenterLineProfileDef(const IfcCenterLineProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcChamferEdgeFeature *getIfcChamferEdgeFeature(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcChamferEdgeFeature(IfcChamferEdgeFeature *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcChamferEdgeFeature > createIfcChamferEdgeFeature(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcChamferEdgeFeature *cloneIfcChamferEdgeFeature(const IfcChamferEdgeFeature &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcChillerType *getIfcChillerType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcChillerType(IfcChillerType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcChillerType > createIfcChillerType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcChillerType *cloneIfcChillerType(const IfcChillerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCircle *getIfcCircle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCircle(IfcCircle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCircle > createIfcCircle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCircle *cloneIfcCircle(const IfcCircle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCircleHollowProfileDef *getIfcCircleHollowProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCircleHollowProfileDef > createIfcCircleHollowProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCircleHollowProfileDef *cloneIfcCircleHollowProfileDef(const IfcCircleHollowProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCircleProfileDef *getIfcCircleProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCircleProfileDef(IfcCircleProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCircleProfileDef > createIfcCircleProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCircleProfileDef *cloneIfcCircleProfileDef(const IfcCircleProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcClassification *getIfcClassification(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcClassification(IfcClassification *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcClassification > createIfcClassification(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcClassification *cloneIfcClassification(const IfcClassification &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcClassificationItem *getIfcClassificationItem(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcClassificationItem(IfcClassificationItem *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcClassificationItem > createIfcClassificationItem(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcClassificationItem *cloneIfcClassificationItem(const IfcClassificationItem &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcClassificationItemRelationship *getIfcClassificationItemRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcClassificationItemRelationship(IfcClassificationItemRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcClassificationItemRelationship > createIfcClassificationItemRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcClassificationItemRelationship *cloneIfcClassificationItemRelationship(const IfcClassificationItemRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcClassificationNotation *getIfcClassificationNotation(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcClassificationNotation(IfcClassificationNotation *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcClassificationNotation > createIfcClassificationNotation(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcClassificationNotation *cloneIfcClassificationNotation(const IfcClassificationNotation &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcClassificationNotationFacet *getIfcClassificationNotationFacet(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcClassificationNotationFacet(IfcClassificationNotationFacet *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcClassificationNotationFacet > createIfcClassificationNotationFacet(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcClassificationNotationFacet *cloneIfcClassificationNotationFacet(const IfcClassificationNotationFacet &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcClassificationReference *getIfcClassificationReference(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcClassificationReference(IfcClassificationReference *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcClassificationReference > createIfcClassificationReference(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcClassificationReference *cloneIfcClassificationReference(const IfcClassificationReference &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcClosedShell *getIfcClosedShell(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcClosedShell(IfcClosedShell *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcClosedShell > createIfcClosedShell(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcClosedShell *cloneIfcClosedShell(const IfcClosedShell &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCoilType *getIfcCoilType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCoilType(IfcCoilType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCoilType > createIfcCoilType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCoilType *cloneIfcCoilType(const IfcCoilType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcColourRgb *getIfcColourRgb(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcColourRgb(IfcColourRgb *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcColourRgb > createIfcColourRgb(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcColourRgb *cloneIfcColourRgb(const IfcColourRgb &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcColumn *getIfcColumn(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcColumn(IfcColumn *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcColumn > createIfcColumn(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcColumn *cloneIfcColumn(const IfcColumn &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcColumnType *getIfcColumnType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcColumnType(IfcColumnType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcColumnType > createIfcColumnType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcColumnType *cloneIfcColumnType(const IfcColumnType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcComplexProperty *getIfcComplexProperty(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcComplexProperty(IfcComplexProperty *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcComplexProperty > createIfcComplexProperty(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcComplexProperty *cloneIfcComplexProperty(const IfcComplexProperty &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCompositeCurve *getIfcCompositeCurve(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCompositeCurve(IfcCompositeCurve *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCompositeCurve > createIfcCompositeCurve(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCompositeCurve *cloneIfcCompositeCurve(const IfcCompositeCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCompositeCurveSegment *getIfcCompositeCurveSegment(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCompositeCurveSegment(IfcCompositeCurveSegment *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCompositeCurveSegment > createIfcCompositeCurveSegment(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCompositeCurveSegment *cloneIfcCompositeCurveSegment(const IfcCompositeCurveSegment &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCompositeProfileDef *getIfcCompositeProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCompositeProfileDef(IfcCompositeProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCompositeProfileDef > createIfcCompositeProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCompositeProfileDef *cloneIfcCompositeProfileDef(const IfcCompositeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCompressorType *getIfcCompressorType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCompressorType(IfcCompressorType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCompressorType > createIfcCompressorType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCompressorType *cloneIfcCompressorType(const IfcCompressorType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCondenserType *getIfcCondenserType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCondenserType(IfcCondenserType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCondenserType > createIfcCondenserType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCondenserType *cloneIfcCondenserType(const IfcCondenserType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCondition *getIfcCondition(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCondition(IfcCondition *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCondition > createIfcCondition(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCondition *cloneIfcCondition(const IfcCondition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConditionCriterion *getIfcConditionCriterion(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConditionCriterion(IfcConditionCriterion *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConditionCriterion > createIfcConditionCriterion(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConditionCriterion *cloneIfcConditionCriterion(const IfcConditionCriterion &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConnectedFaceSet *getIfcConnectedFaceSet(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConnectedFaceSet(IfcConnectedFaceSet *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConnectedFaceSet > createIfcConnectedFaceSet(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConnectedFaceSet *cloneIfcConnectedFaceSet(const IfcConnectedFaceSet &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConnectionCurveGeometry *getIfcConnectionCurveGeometry(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConnectionCurveGeometry > createIfcConnectionCurveGeometry(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConnectionCurveGeometry *cloneIfcConnectionCurveGeometry(const IfcConnectionCurveGeometry &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConnectionPointEccentricity *getIfcConnectionPointEccentricity(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConnectionPointEccentricity > createIfcConnectionPointEccentricity(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConnectionPointEccentricity *cloneIfcConnectionPointEccentricity(const IfcConnectionPointEccentricity &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConnectionPointGeometry *getIfcConnectionPointGeometry(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConnectionPointGeometry(IfcConnectionPointGeometry *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConnectionPointGeometry > createIfcConnectionPointGeometry(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConnectionPointGeometry *cloneIfcConnectionPointGeometry(const IfcConnectionPointGeometry &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConnectionPortGeometry *getIfcConnectionPortGeometry(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConnectionPortGeometry(IfcConnectionPortGeometry *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConnectionPortGeometry > createIfcConnectionPortGeometry(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConnectionPortGeometry *cloneIfcConnectionPortGeometry(const IfcConnectionPortGeometry &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConnectionSurfaceGeometry *getIfcConnectionSurfaceGeometry(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConnectionSurfaceGeometry > createIfcConnectionSurfaceGeometry(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConnectionSurfaceGeometry *cloneIfcConnectionSurfaceGeometry(const IfcConnectionSurfaceGeometry &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConstraintAggregationRelationship *getIfcConstraintAggregationRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConstraintAggregationRelationship > createIfcConstraintAggregationRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConstraintAggregationRelationship *cloneIfcConstraintAggregationRelationship(const IfcConstraintAggregationRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConstraintClassificationRelationship *getIfcConstraintClassificationRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConstraintClassificationRelationship > createIfcConstraintClassificationRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConstraintClassificationRelationship *cloneIfcConstraintClassificationRelationship(const IfcConstraintClassificationRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConstraintRelationship *getIfcConstraintRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConstraintRelationship(IfcConstraintRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConstraintRelationship > createIfcConstraintRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConstraintRelationship *cloneIfcConstraintRelationship(const IfcConstraintRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConstructionEquipmentResource *getIfcConstructionEquipmentResource(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConstructionEquipmentResource > createIfcConstructionEquipmentResource(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConstructionEquipmentResource *cloneIfcConstructionEquipmentResource(const IfcConstructionEquipmentResource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConstructionMaterialResource *getIfcConstructionMaterialResource(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConstructionMaterialResource(IfcConstructionMaterialResource *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConstructionMaterialResource > createIfcConstructionMaterialResource(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConstructionMaterialResource *cloneIfcConstructionMaterialResource(const IfcConstructionMaterialResource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConstructionProductResource *getIfcConstructionProductResource(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConstructionProductResource(IfcConstructionProductResource *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConstructionProductResource > createIfcConstructionProductResource(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConstructionProductResource *cloneIfcConstructionProductResource(const IfcConstructionProductResource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcContextDependentUnit *getIfcContextDependentUnit(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcContextDependentUnit(IfcContextDependentUnit *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcContextDependentUnit > createIfcContextDependentUnit(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcContextDependentUnit *cloneIfcContextDependentUnit(const IfcContextDependentUnit &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcControllerType *getIfcControllerType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcControllerType(IfcControllerType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcControllerType > createIfcControllerType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcControllerType *cloneIfcControllerType(const IfcControllerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConversionBasedUnit *getIfcConversionBasedUnit(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcConversionBasedUnit(IfcConversionBasedUnit *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcConversionBasedUnit > createIfcConversionBasedUnit(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcConversionBasedUnit *cloneIfcConversionBasedUnit(const IfcConversionBasedUnit &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCooledBeamType *getIfcCooledBeamType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCooledBeamType(IfcCooledBeamType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCooledBeamType > createIfcCooledBeamType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCooledBeamType *cloneIfcCooledBeamType(const IfcCooledBeamType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCoolingTowerType *getIfcCoolingTowerType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCoolingTowerType(IfcCoolingTowerType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCoolingTowerType > createIfcCoolingTowerType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCoolingTowerType *cloneIfcCoolingTowerType(const IfcCoolingTowerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCoordinatedUniversalTimeOffset *getIfcCoordinatedUniversalTimeOffset(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCoordinatedUniversalTimeOffset > createIfcCoordinatedUniversalTimeOffset(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCoordinatedUniversalTimeOffset *cloneIfcCoordinatedUniversalTimeOffset(const IfcCoordinatedUniversalTimeOffset &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCostItem *getIfcCostItem(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCostItem(IfcCostItem *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCostItem > createIfcCostItem(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCostItem *cloneIfcCostItem(const IfcCostItem &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCostSchedule *getIfcCostSchedule(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCostSchedule(IfcCostSchedule *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCostSchedule > createIfcCostSchedule(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCostSchedule *cloneIfcCostSchedule(const IfcCostSchedule &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCostValue *getIfcCostValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCostValue(IfcCostValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCostValue > createIfcCostValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCostValue *cloneIfcCostValue(const IfcCostValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCovering *getIfcCovering(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCovering(IfcCovering *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCovering > createIfcCovering(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCovering *cloneIfcCovering(const IfcCovering &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCoveringType *getIfcCoveringType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCoveringType(IfcCoveringType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCoveringType > createIfcCoveringType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCoveringType *cloneIfcCoveringType(const IfcCoveringType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCraneRailAShapeProfileDef *getIfcCraneRailAShapeProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCraneRailAShapeProfileDef > createIfcCraneRailAShapeProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCraneRailAShapeProfileDef *cloneIfcCraneRailAShapeProfileDef(const IfcCraneRailAShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCraneRailFShapeProfileDef *getIfcCraneRailFShapeProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCraneRailFShapeProfileDef > createIfcCraneRailFShapeProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCraneRailFShapeProfileDef *cloneIfcCraneRailFShapeProfileDef(const IfcCraneRailFShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCrewResource *getIfcCrewResource(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCrewResource(IfcCrewResource *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCrewResource > createIfcCrewResource(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCrewResource *cloneIfcCrewResource(const IfcCrewResource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCsgSolid *getIfcCsgSolid(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCsgSolid(IfcCsgSolid *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCsgSolid > createIfcCsgSolid(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCsgSolid *cloneIfcCsgSolid(const IfcCsgSolid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCurrencyRelationship *getIfcCurrencyRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCurrencyRelationship(IfcCurrencyRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCurrencyRelationship > createIfcCurrencyRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCurrencyRelationship *cloneIfcCurrencyRelationship(const IfcCurrencyRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCurtainWall *getIfcCurtainWall(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCurtainWall(IfcCurtainWall *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCurtainWall > createIfcCurtainWall(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCurtainWall *cloneIfcCurtainWall(const IfcCurtainWall &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCurtainWallType *getIfcCurtainWallType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCurtainWallType(IfcCurtainWallType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCurtainWallType > createIfcCurtainWallType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCurtainWallType *cloneIfcCurtainWallType(const IfcCurtainWallType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCurveBoundedPlane *getIfcCurveBoundedPlane(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCurveBoundedPlane(IfcCurveBoundedPlane *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCurveBoundedPlane > createIfcCurveBoundedPlane(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCurveBoundedPlane *cloneIfcCurveBoundedPlane(const IfcCurveBoundedPlane &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCurveStyle *getIfcCurveStyle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCurveStyle(IfcCurveStyle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCurveStyle > createIfcCurveStyle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCurveStyle *cloneIfcCurveStyle(const IfcCurveStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCurveStyleFont *getIfcCurveStyleFont(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCurveStyleFont(IfcCurveStyleFont *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCurveStyleFont > createIfcCurveStyleFont(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCurveStyleFont *cloneIfcCurveStyleFont(const IfcCurveStyleFont &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCurveStyleFontAndScaling *getIfcCurveStyleFontAndScaling(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCurveStyleFontAndScaling > createIfcCurveStyleFontAndScaling(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCurveStyleFontAndScaling *cloneIfcCurveStyleFontAndScaling(const IfcCurveStyleFontAndScaling &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCurveStyleFontPattern *getIfcCurveStyleFontPattern(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcCurveStyleFontPattern > createIfcCurveStyleFontPattern(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcCurveStyleFontPattern *cloneIfcCurveStyleFontPattern(const IfcCurveStyleFontPattern &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDamperType *getIfcDamperType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDamperType(IfcDamperType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDamperType > createIfcDamperType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDamperType *cloneIfcDamperType(const IfcDamperType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDateAndTime *getIfcDateAndTime(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDateAndTime(IfcDateAndTime *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDateAndTime > createIfcDateAndTime(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDateAndTime *cloneIfcDateAndTime(const IfcDateAndTime &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDefinedSymbol *getIfcDefinedSymbol(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDefinedSymbol(IfcDefinedSymbol *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDefinedSymbol > createIfcDefinedSymbol(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDefinedSymbol *cloneIfcDefinedSymbol(const IfcDefinedSymbol &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDerivedProfileDef *getIfcDerivedProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDerivedProfileDef(IfcDerivedProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDerivedProfileDef > createIfcDerivedProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDerivedProfileDef *cloneIfcDerivedProfileDef(const IfcDerivedProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDerivedUnit *getIfcDerivedUnit(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDerivedUnit(IfcDerivedUnit *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDerivedUnit > createIfcDerivedUnit(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDerivedUnit *cloneIfcDerivedUnit(const IfcDerivedUnit &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDerivedUnitElement *getIfcDerivedUnitElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDerivedUnitElement(IfcDerivedUnitElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDerivedUnitElement > createIfcDerivedUnitElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDerivedUnitElement *cloneIfcDerivedUnitElement(const IfcDerivedUnitElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDiameterDimension *getIfcDiameterDimension(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDiameterDimension(IfcDiameterDimension *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDiameterDimension > createIfcDiameterDimension(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDiameterDimension *cloneIfcDiameterDimension(const IfcDiameterDimension &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDimensionCalloutRelationship *getIfcDimensionCalloutRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDimensionCalloutRelationship > createIfcDimensionCalloutRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDimensionCalloutRelationship *cloneIfcDimensionCalloutRelationship(const IfcDimensionCalloutRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDimensionCurve *getIfcDimensionCurve(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDimensionCurve(IfcDimensionCurve *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDimensionCurve > createIfcDimensionCurve(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDimensionCurve *cloneIfcDimensionCurve(const IfcDimensionCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDimensionCurveDirectedCallout *getIfcDimensionCurveDirectedCallout(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDimensionCurveDirectedCallout > createIfcDimensionCurveDirectedCallout(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDimensionCurveDirectedCallout *cloneIfcDimensionCurveDirectedCallout(const IfcDimensionCurveDirectedCallout &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDimensionCurveTerminator *getIfcDimensionCurveTerminator(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDimensionCurveTerminator > createIfcDimensionCurveTerminator(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDimensionCurveTerminator *cloneIfcDimensionCurveTerminator(const IfcDimensionCurveTerminator &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDimensionPair *getIfcDimensionPair(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDimensionPair(IfcDimensionPair *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDimensionPair > createIfcDimensionPair(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDimensionPair *cloneIfcDimensionPair(const IfcDimensionPair &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDimensionalExponents *getIfcDimensionalExponents(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDimensionalExponents(IfcDimensionalExponents *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDimensionalExponents > createIfcDimensionalExponents(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDimensionalExponents *cloneIfcDimensionalExponents(const IfcDimensionalExponents &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDirection *getIfcDirection(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDirection(IfcDirection *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDirection > createIfcDirection(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDirection *cloneIfcDirection(const IfcDirection &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDiscreteAccessory *getIfcDiscreteAccessory(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDiscreteAccessory(IfcDiscreteAccessory *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDiscreteAccessory > createIfcDiscreteAccessory(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDiscreteAccessory *cloneIfcDiscreteAccessory(const IfcDiscreteAccessory &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDiscreteAccessoryType *getIfcDiscreteAccessoryType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDiscreteAccessoryType > createIfcDiscreteAccessoryType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDiscreteAccessoryType *cloneIfcDiscreteAccessoryType(const IfcDiscreteAccessoryType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDistributionChamberElement *getIfcDistributionChamberElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDistributionChamberElement(IfcDistributionChamberElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDistributionChamberElement > createIfcDistributionChamberElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDistributionChamberElement *cloneIfcDistributionChamberElement(const IfcDistributionChamberElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDistributionChamberElementType *getIfcDistributionChamberElementType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDistributionChamberElementType(IfcDistributionChamberElementType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDistributionChamberElementType > createIfcDistributionChamberElementType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDistributionChamberElementType *cloneIfcDistributionChamberElementType(const IfcDistributionChamberElementType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDistributionControlElement *getIfcDistributionControlElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDistributionControlElement(IfcDistributionControlElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDistributionControlElement > createIfcDistributionControlElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDistributionControlElement *cloneIfcDistributionControlElement(const IfcDistributionControlElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDistributionElement *getIfcDistributionElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDistributionElement(IfcDistributionElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDistributionElement > createIfcDistributionElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDistributionElement *cloneIfcDistributionElement(const IfcDistributionElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDistributionElementType *getIfcDistributionElementType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDistributionElementType(IfcDistributionElementType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDistributionElementType > createIfcDistributionElementType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDistributionElementType *cloneIfcDistributionElementType(const IfcDistributionElementType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDistributionFlowElement *getIfcDistributionFlowElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDistributionFlowElement(IfcDistributionFlowElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDistributionFlowElement > createIfcDistributionFlowElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDistributionFlowElement *cloneIfcDistributionFlowElement(const IfcDistributionFlowElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDistributionPort *getIfcDistributionPort(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDistributionPort(IfcDistributionPort *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDistributionPort > createIfcDistributionPort(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDistributionPort *cloneIfcDistributionPort(const IfcDistributionPort &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDocumentElectronicFormat *getIfcDocumentElectronicFormat(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDocumentElectronicFormat > createIfcDocumentElectronicFormat(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDocumentElectronicFormat *cloneIfcDocumentElectronicFormat(const IfcDocumentElectronicFormat &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDocumentInformation *getIfcDocumentInformation(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDocumentInformation(IfcDocumentInformation *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDocumentInformation > createIfcDocumentInformation(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDocumentInformation *cloneIfcDocumentInformation(const IfcDocumentInformation &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDocumentInformationRelationship *getIfcDocumentInformationRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDocumentInformationRelationship > createIfcDocumentInformationRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDocumentInformationRelationship *cloneIfcDocumentInformationRelationship(const IfcDocumentInformationRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDocumentReference *getIfcDocumentReference(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDocumentReference(IfcDocumentReference *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDocumentReference > createIfcDocumentReference(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDocumentReference *cloneIfcDocumentReference(const IfcDocumentReference &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDoor *getIfcDoor(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDoor(IfcDoor *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDoor > createIfcDoor(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDoor *cloneIfcDoor(const IfcDoor &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDoorLiningProperties *getIfcDoorLiningProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDoorLiningProperties(IfcDoorLiningProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDoorLiningProperties > createIfcDoorLiningProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDoorLiningProperties *cloneIfcDoorLiningProperties(const IfcDoorLiningProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDoorPanelProperties *getIfcDoorPanelProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDoorPanelProperties(IfcDoorPanelProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDoorPanelProperties > createIfcDoorPanelProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDoorPanelProperties *cloneIfcDoorPanelProperties(const IfcDoorPanelProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDoorStyle *getIfcDoorStyle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDoorStyle(IfcDoorStyle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDoorStyle > createIfcDoorStyle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDoorStyle *cloneIfcDoorStyle(const IfcDoorStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDraughtingCallout *getIfcDraughtingCallout(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDraughtingCallout(IfcDraughtingCallout *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDraughtingCallout > createIfcDraughtingCallout(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDraughtingCallout *cloneIfcDraughtingCallout(const IfcDraughtingCallout &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDraughtingCalloutRelationship *getIfcDraughtingCalloutRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDraughtingCalloutRelationship > createIfcDraughtingCalloutRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDraughtingCalloutRelationship *cloneIfcDraughtingCalloutRelationship(const IfcDraughtingCalloutRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDraughtingPreDefinedColour *getIfcDraughtingPreDefinedColour(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDraughtingPreDefinedColour > createIfcDraughtingPreDefinedColour(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDraughtingPreDefinedColour *cloneIfcDraughtingPreDefinedColour(const IfcDraughtingPreDefinedColour &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDraughtingPreDefinedCurveFont *getIfcDraughtingPreDefinedCurveFont(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDraughtingPreDefinedCurveFont > createIfcDraughtingPreDefinedCurveFont(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDraughtingPreDefinedCurveFont *cloneIfcDraughtingPreDefinedCurveFont(const IfcDraughtingPreDefinedCurveFont &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDraughtingPreDefinedTextFont *getIfcDraughtingPreDefinedTextFont(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDraughtingPreDefinedTextFont > createIfcDraughtingPreDefinedTextFont(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDraughtingPreDefinedTextFont *cloneIfcDraughtingPreDefinedTextFont(const IfcDraughtingPreDefinedTextFont &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDuctFittingType *getIfcDuctFittingType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDuctFittingType(IfcDuctFittingType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDuctFittingType > createIfcDuctFittingType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDuctFittingType *cloneIfcDuctFittingType(const IfcDuctFittingType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDuctSegmentType *getIfcDuctSegmentType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDuctSegmentType(IfcDuctSegmentType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDuctSegmentType > createIfcDuctSegmentType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDuctSegmentType *cloneIfcDuctSegmentType(const IfcDuctSegmentType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDuctSilencerType *getIfcDuctSilencerType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcDuctSilencerType(IfcDuctSilencerType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcDuctSilencerType > createIfcDuctSilencerType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcDuctSilencerType *cloneIfcDuctSilencerType(const IfcDuctSilencerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEdge *getIfcEdge(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEdge(IfcEdge *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEdge > createIfcEdge(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEdge *cloneIfcEdge(const IfcEdge &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEdgeCurve *getIfcEdgeCurve(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEdgeCurve(IfcEdgeCurve *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEdgeCurve > createIfcEdgeCurve(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEdgeCurve *cloneIfcEdgeCurve(const IfcEdgeCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEdgeLoop *getIfcEdgeLoop(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEdgeLoop(IfcEdgeLoop *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEdgeLoop > createIfcEdgeLoop(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEdgeLoop *cloneIfcEdgeLoop(const IfcEdgeLoop &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElectricApplianceType *getIfcElectricApplianceType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElectricApplianceType(IfcElectricApplianceType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElectricApplianceType > createIfcElectricApplianceType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElectricApplianceType *cloneIfcElectricApplianceType(const IfcElectricApplianceType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElectricDistributionPoint *getIfcElectricDistributionPoint(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElectricDistributionPoint(IfcElectricDistributionPoint *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElectricDistributionPoint > createIfcElectricDistributionPoint(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElectricDistributionPoint *cloneIfcElectricDistributionPoint(const IfcElectricDistributionPoint &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElectricFlowStorageDeviceType *getIfcElectricFlowStorageDeviceType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElectricFlowStorageDeviceType > createIfcElectricFlowStorageDeviceType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElectricFlowStorageDeviceType *cloneIfcElectricFlowStorageDeviceType(const IfcElectricFlowStorageDeviceType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElectricGeneratorType *getIfcElectricGeneratorType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElectricGeneratorType(IfcElectricGeneratorType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElectricGeneratorType > createIfcElectricGeneratorType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElectricGeneratorType *cloneIfcElectricGeneratorType(const IfcElectricGeneratorType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElectricHeaterType *getIfcElectricHeaterType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElectricHeaterType(IfcElectricHeaterType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElectricHeaterType > createIfcElectricHeaterType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElectricHeaterType *cloneIfcElectricHeaterType(const IfcElectricHeaterType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElectricMotorType *getIfcElectricMotorType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElectricMotorType(IfcElectricMotorType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElectricMotorType > createIfcElectricMotorType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElectricMotorType *cloneIfcElectricMotorType(const IfcElectricMotorType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElectricTimeControlType *getIfcElectricTimeControlType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElectricTimeControlType(IfcElectricTimeControlType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElectricTimeControlType > createIfcElectricTimeControlType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElectricTimeControlType *cloneIfcElectricTimeControlType(const IfcElectricTimeControlType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElectricalBaseProperties *getIfcElectricalBaseProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElectricalBaseProperties(IfcElectricalBaseProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElectricalBaseProperties > createIfcElectricalBaseProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElectricalBaseProperties *cloneIfcElectricalBaseProperties(const IfcElectricalBaseProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElectricalCircuit *getIfcElectricalCircuit(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElectricalCircuit(IfcElectricalCircuit *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElectricalCircuit > createIfcElectricalCircuit(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElectricalCircuit *cloneIfcElectricalCircuit(const IfcElectricalCircuit &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElectricalElement *getIfcElectricalElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElectricalElement(IfcElectricalElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElectricalElement > createIfcElectricalElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElectricalElement *cloneIfcElectricalElement(const IfcElectricalElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElementAssembly *getIfcElementAssembly(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElementAssembly(IfcElementAssembly *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElementAssembly > createIfcElementAssembly(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElementAssembly *cloneIfcElementAssembly(const IfcElementAssembly &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElementQuantity *getIfcElementQuantity(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcElementQuantity(IfcElementQuantity *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcElementQuantity > createIfcElementQuantity(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcElementQuantity *cloneIfcElementQuantity(const IfcElementQuantity &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEllipse *getIfcEllipse(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEllipse(IfcEllipse *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEllipse > createIfcEllipse(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEllipse *cloneIfcEllipse(const IfcEllipse &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEllipseProfileDef *getIfcEllipseProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEllipseProfileDef(IfcEllipseProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEllipseProfileDef > createIfcEllipseProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEllipseProfileDef *cloneIfcEllipseProfileDef(const IfcEllipseProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEnergyConversionDevice *getIfcEnergyConversionDevice(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEnergyConversionDevice(IfcEnergyConversionDevice *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEnergyConversionDevice > createIfcEnergyConversionDevice(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEnergyConversionDevice *cloneIfcEnergyConversionDevice(const IfcEnergyConversionDevice &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEnergyProperties *getIfcEnergyProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEnergyProperties(IfcEnergyProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEnergyProperties > createIfcEnergyProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEnergyProperties *cloneIfcEnergyProperties(const IfcEnergyProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEnvironmentalImpactValue *getIfcEnvironmentalImpactValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEnvironmentalImpactValue > createIfcEnvironmentalImpactValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEnvironmentalImpactValue *cloneIfcEnvironmentalImpactValue(const IfcEnvironmentalImpactValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEquipmentElement *getIfcEquipmentElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEquipmentElement(IfcEquipmentElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEquipmentElement > createIfcEquipmentElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEquipmentElement *cloneIfcEquipmentElement(const IfcEquipmentElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEquipmentStandard *getIfcEquipmentStandard(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEquipmentStandard(IfcEquipmentStandard *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEquipmentStandard > createIfcEquipmentStandard(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEquipmentStandard *cloneIfcEquipmentStandard(const IfcEquipmentStandard &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEvaporativeCoolerType *getIfcEvaporativeCoolerType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEvaporativeCoolerType > createIfcEvaporativeCoolerType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEvaporativeCoolerType *cloneIfcEvaporativeCoolerType(const IfcEvaporativeCoolerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEvaporatorType *getIfcEvaporatorType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcEvaporatorType(IfcEvaporatorType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcEvaporatorType > createIfcEvaporatorType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcEvaporatorType *cloneIfcEvaporatorType(const IfcEvaporatorType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcExtendedMaterialProperties *getIfcExtendedMaterialProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcExtendedMaterialProperties > createIfcExtendedMaterialProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcExtendedMaterialProperties *cloneIfcExtendedMaterialProperties(const IfcExtendedMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcExternallyDefinedHatchStyle *getIfcExternallyDefinedHatchStyle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcExternallyDefinedHatchStyle > createIfcExternallyDefinedHatchStyle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcExternallyDefinedHatchStyle *cloneIfcExternallyDefinedHatchStyle(const IfcExternallyDefinedHatchStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcExternallyDefinedSurfaceStyle *getIfcExternallyDefinedSurfaceStyle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcExternallyDefinedSurfaceStyle > createIfcExternallyDefinedSurfaceStyle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcExternallyDefinedSurfaceStyle *cloneIfcExternallyDefinedSurfaceStyle(const IfcExternallyDefinedSurfaceStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcExternallyDefinedSymbol *getIfcExternallyDefinedSymbol(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcExternallyDefinedSymbol > createIfcExternallyDefinedSymbol(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcExternallyDefinedSymbol *cloneIfcExternallyDefinedSymbol(const IfcExternallyDefinedSymbol &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcExternallyDefinedTextFont *getIfcExternallyDefinedTextFont(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcExternallyDefinedTextFont > createIfcExternallyDefinedTextFont(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcExternallyDefinedTextFont *cloneIfcExternallyDefinedTextFont(const IfcExternallyDefinedTextFont &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcExtrudedAreaSolid *getIfcExtrudedAreaSolid(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcExtrudedAreaSolid > createIfcExtrudedAreaSolid(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcExtrudedAreaSolid *cloneIfcExtrudedAreaSolid(const IfcExtrudedAreaSolid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFace *getIfcFace(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFace(IfcFace *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFace > createIfcFace(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFace *cloneIfcFace(const IfcFace &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFaceBasedSurfaceModel *getIfcFaceBasedSurfaceModel(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFaceBasedSurfaceModel > createIfcFaceBasedSurfaceModel(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFaceBasedSurfaceModel *cloneIfcFaceBasedSurfaceModel(const IfcFaceBasedSurfaceModel &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFaceBound *getIfcFaceBound(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFaceBound(IfcFaceBound *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFaceBound > createIfcFaceBound(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFaceBound *cloneIfcFaceBound(const IfcFaceBound &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFaceOuterBound *getIfcFaceOuterBound(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFaceOuterBound(IfcFaceOuterBound *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFaceOuterBound > createIfcFaceOuterBound(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFaceOuterBound *cloneIfcFaceOuterBound(const IfcFaceOuterBound &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFaceSurface *getIfcFaceSurface(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFaceSurface(IfcFaceSurface *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFaceSurface > createIfcFaceSurface(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFaceSurface *cloneIfcFaceSurface(const IfcFaceSurface &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFacetedBrep *getIfcFacetedBrep(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFacetedBrep(IfcFacetedBrep *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFacetedBrep > createIfcFacetedBrep(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFacetedBrep *cloneIfcFacetedBrep(const IfcFacetedBrep &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFacetedBrepWithVoids *getIfcFacetedBrepWithVoids(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFacetedBrepWithVoids > createIfcFacetedBrepWithVoids(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFacetedBrepWithVoids *cloneIfcFacetedBrepWithVoids(const IfcFacetedBrepWithVoids &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFailureConnectionCondition *getIfcFailureConnectionCondition(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFailureConnectionCondition(IfcFailureConnectionCondition *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFailureConnectionCondition > createIfcFailureConnectionCondition(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFailureConnectionCondition *cloneIfcFailureConnectionCondition(const IfcFailureConnectionCondition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFanType *getIfcFanType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFanType(IfcFanType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFanType > createIfcFanType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFanType *cloneIfcFanType(const IfcFanType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFastener *getIfcFastener(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFastener(IfcFastener *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFastener > createIfcFastener(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFastener *cloneIfcFastener(const IfcFastener &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFastenerType *getIfcFastenerType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFastenerType(IfcFastenerType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFastenerType > createIfcFastenerType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFastenerType *cloneIfcFastenerType(const IfcFastenerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFillAreaStyle *getIfcFillAreaStyle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFillAreaStyle(IfcFillAreaStyle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFillAreaStyle > createIfcFillAreaStyle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFillAreaStyle *cloneIfcFillAreaStyle(const IfcFillAreaStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFillAreaStyleHatching *getIfcFillAreaStyleHatching(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFillAreaStyleHatching > createIfcFillAreaStyleHatching(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFillAreaStyleHatching *cloneIfcFillAreaStyleHatching(const IfcFillAreaStyleHatching &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFillAreaStyleTileSymbolWithStyle *getIfcFillAreaStyleTileSymbolWithStyle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFillAreaStyleTileSymbolWithStyle > createIfcFillAreaStyleTileSymbolWithStyle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFillAreaStyleTileSymbolWithStyle *cloneIfcFillAreaStyleTileSymbolWithStyle(const IfcFillAreaStyleTileSymbolWithStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFillAreaStyleTiles *getIfcFillAreaStyleTiles(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFillAreaStyleTiles > createIfcFillAreaStyleTiles(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFillAreaStyleTiles *cloneIfcFillAreaStyleTiles(const IfcFillAreaStyleTiles &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFilterType *getIfcFilterType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFilterType(IfcFilterType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFilterType > createIfcFilterType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFilterType *cloneIfcFilterType(const IfcFilterType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFireSuppressionTerminalType *getIfcFireSuppressionTerminalType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFireSuppressionTerminalType > createIfcFireSuppressionTerminalType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFireSuppressionTerminalType *cloneIfcFireSuppressionTerminalType(const IfcFireSuppressionTerminalType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowController *getIfcFlowController(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFlowController(IfcFlowController *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFlowController > createIfcFlowController(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowController *cloneIfcFlowController(const IfcFlowController &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowFitting *getIfcFlowFitting(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFlowFitting(IfcFlowFitting *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFlowFitting > createIfcFlowFitting(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowFitting *cloneIfcFlowFitting(const IfcFlowFitting &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowInstrumentType *getIfcFlowInstrumentType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFlowInstrumentType(IfcFlowInstrumentType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFlowInstrumentType > createIfcFlowInstrumentType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowInstrumentType *cloneIfcFlowInstrumentType(const IfcFlowInstrumentType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowMeterType *getIfcFlowMeterType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFlowMeterType(IfcFlowMeterType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFlowMeterType > createIfcFlowMeterType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowMeterType *cloneIfcFlowMeterType(const IfcFlowMeterType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowMovingDevice *getIfcFlowMovingDevice(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFlowMovingDevice(IfcFlowMovingDevice *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFlowMovingDevice > createIfcFlowMovingDevice(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowMovingDevice *cloneIfcFlowMovingDevice(const IfcFlowMovingDevice &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowSegment *getIfcFlowSegment(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFlowSegment(IfcFlowSegment *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFlowSegment > createIfcFlowSegment(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowSegment *cloneIfcFlowSegment(const IfcFlowSegment &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowStorageDevice *getIfcFlowStorageDevice(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFlowStorageDevice(IfcFlowStorageDevice *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFlowStorageDevice > createIfcFlowStorageDevice(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowStorageDevice *cloneIfcFlowStorageDevice(const IfcFlowStorageDevice &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowTerminal *getIfcFlowTerminal(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFlowTerminal(IfcFlowTerminal *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFlowTerminal > createIfcFlowTerminal(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowTerminal *cloneIfcFlowTerminal(const IfcFlowTerminal &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowTreatmentDevice *getIfcFlowTreatmentDevice(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFlowTreatmentDevice > createIfcFlowTreatmentDevice(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowTreatmentDevice *cloneIfcFlowTreatmentDevice(const IfcFlowTreatmentDevice &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFluidFlowProperties *getIfcFluidFlowProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFluidFlowProperties(IfcFluidFlowProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFluidFlowProperties > createIfcFluidFlowProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFluidFlowProperties *cloneIfcFluidFlowProperties(const IfcFluidFlowProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFooting *getIfcFooting(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFooting(IfcFooting *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFooting > createIfcFooting(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFooting *cloneIfcFooting(const IfcFooting &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFuelProperties *getIfcFuelProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFuelProperties(IfcFuelProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFuelProperties > createIfcFuelProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFuelProperties *cloneIfcFuelProperties(const IfcFuelProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFurnishingElement *getIfcFurnishingElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFurnishingElement(IfcFurnishingElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFurnishingElement > createIfcFurnishingElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFurnishingElement *cloneIfcFurnishingElement(const IfcFurnishingElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFurnishingElementType *getIfcFurnishingElementType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFurnishingElementType(IfcFurnishingElementType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFurnishingElementType > createIfcFurnishingElementType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFurnishingElementType *cloneIfcFurnishingElementType(const IfcFurnishingElementType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFurnitureStandard *getIfcFurnitureStandard(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFurnitureStandard(IfcFurnitureStandard *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFurnitureStandard > createIfcFurnitureStandard(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFurnitureStandard *cloneIfcFurnitureStandard(const IfcFurnitureStandard &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFurnitureType *getIfcFurnitureType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcFurnitureType(IfcFurnitureType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcFurnitureType > createIfcFurnitureType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcFurnitureType *cloneIfcFurnitureType(const IfcFurnitureType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGasTerminalType *getIfcGasTerminalType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcGasTerminalType(IfcGasTerminalType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcGasTerminalType > createIfcGasTerminalType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcGasTerminalType *cloneIfcGasTerminalType(const IfcGasTerminalType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGeneralMaterialProperties *getIfcGeneralMaterialProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcGeneralMaterialProperties > createIfcGeneralMaterialProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcGeneralMaterialProperties *cloneIfcGeneralMaterialProperties(const IfcGeneralMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGeneralProfileProperties *getIfcGeneralProfileProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcGeneralProfileProperties(IfcGeneralProfileProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcGeneralProfileProperties > createIfcGeneralProfileProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcGeneralProfileProperties *cloneIfcGeneralProfileProperties(const IfcGeneralProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGeometricCurveSet *getIfcGeometricCurveSet(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcGeometricCurveSet(IfcGeometricCurveSet *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcGeometricCurveSet > createIfcGeometricCurveSet(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcGeometricCurveSet *cloneIfcGeometricCurveSet(const IfcGeometricCurveSet &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGeometricRepresentationContext *getIfcGeometricRepresentationContext(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcGeometricRepresentationContext > createIfcGeometricRepresentationContext(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcGeometricRepresentationContext *cloneIfcGeometricRepresentationContext(const IfcGeometricRepresentationContext &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGeometricRepresentationSubContext *getIfcGeometricRepresentationSubContext(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcGeometricRepresentationSubContext > createIfcGeometricRepresentationSubContext(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcGeometricRepresentationSubContext *cloneIfcGeometricRepresentationSubContext(const IfcGeometricRepresentationSubContext &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGeometricSet *getIfcGeometricSet(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcGeometricSet(IfcGeometricSet *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcGeometricSet > createIfcGeometricSet(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcGeometricSet *cloneIfcGeometricSet(const IfcGeometricSet &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGrid *getIfcGrid(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcGrid(IfcGrid *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcGrid > createIfcGrid(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcGrid *cloneIfcGrid(const IfcGrid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGridAxis *getIfcGridAxis(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcGridAxis(IfcGridAxis *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcGridAxis > createIfcGridAxis(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcGridAxis *cloneIfcGridAxis(const IfcGridAxis &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGridPlacement *getIfcGridPlacement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcGridPlacement(IfcGridPlacement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcGridPlacement > createIfcGridPlacement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcGridPlacement *cloneIfcGridPlacement(const IfcGridPlacement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGroup *getIfcGroup(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcGroup(IfcGroup *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcGroup > createIfcGroup(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcGroup *cloneIfcGroup(const IfcGroup &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcHalfSpaceSolid *getIfcHalfSpaceSolid(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcHalfSpaceSolid(IfcHalfSpaceSolid *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcHalfSpaceSolid > createIfcHalfSpaceSolid(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcHalfSpaceSolid *cloneIfcHalfSpaceSolid(const IfcHalfSpaceSolid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcHeatExchangerType *getIfcHeatExchangerType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcHeatExchangerType(IfcHeatExchangerType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcHeatExchangerType > createIfcHeatExchangerType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcHeatExchangerType *cloneIfcHeatExchangerType(const IfcHeatExchangerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcHumidifierType *getIfcHumidifierType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcHumidifierType(IfcHumidifierType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcHumidifierType > createIfcHumidifierType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcHumidifierType *cloneIfcHumidifierType(const IfcHumidifierType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcHygroscopicMaterialProperties *getIfcHygroscopicMaterialProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcHygroscopicMaterialProperties > createIfcHygroscopicMaterialProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcHygroscopicMaterialProperties *cloneIfcHygroscopicMaterialProperties(const IfcHygroscopicMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcIShapeProfileDef *getIfcIShapeProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcIShapeProfileDef(IfcIShapeProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcIShapeProfileDef > createIfcIShapeProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcIShapeProfileDef *cloneIfcIShapeProfileDef(const IfcIShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcImageTexture *getIfcImageTexture(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcImageTexture(IfcImageTexture *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcImageTexture > createIfcImageTexture(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcImageTexture *cloneIfcImageTexture(const IfcImageTexture &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcInventory *getIfcInventory(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcInventory(IfcInventory *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcInventory > createIfcInventory(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcInventory *cloneIfcInventory(const IfcInventory &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcIrregularTimeSeries *getIfcIrregularTimeSeries(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcIrregularTimeSeries(IfcIrregularTimeSeries *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcIrregularTimeSeries > createIfcIrregularTimeSeries(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcIrregularTimeSeries *cloneIfcIrregularTimeSeries(const IfcIrregularTimeSeries &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcIrregularTimeSeriesValue *getIfcIrregularTimeSeriesValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcIrregularTimeSeriesValue > createIfcIrregularTimeSeriesValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcIrregularTimeSeriesValue *cloneIfcIrregularTimeSeriesValue(const IfcIrregularTimeSeriesValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcJunctionBoxType *getIfcJunctionBoxType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcJunctionBoxType(IfcJunctionBoxType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcJunctionBoxType > createIfcJunctionBoxType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcJunctionBoxType *cloneIfcJunctionBoxType(const IfcJunctionBoxType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLShapeProfileDef *getIfcLShapeProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLShapeProfileDef(IfcLShapeProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLShapeProfileDef > createIfcLShapeProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLShapeProfileDef *cloneIfcLShapeProfileDef(const IfcLShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLaborResource *getIfcLaborResource(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLaborResource(IfcLaborResource *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLaborResource > createIfcLaborResource(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLaborResource *cloneIfcLaborResource(const IfcLaborResource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLampType *getIfcLampType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLampType(IfcLampType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLampType > createIfcLampType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLampType *cloneIfcLampType(const IfcLampType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLibraryInformation *getIfcLibraryInformation(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLibraryInformation(IfcLibraryInformation *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLibraryInformation > createIfcLibraryInformation(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLibraryInformation *cloneIfcLibraryInformation(const IfcLibraryInformation &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLibraryReference *getIfcLibraryReference(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLibraryReference(IfcLibraryReference *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLibraryReference > createIfcLibraryReference(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLibraryReference *cloneIfcLibraryReference(const IfcLibraryReference &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLightDistributionData *getIfcLightDistributionData(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLightDistributionData(IfcLightDistributionData *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLightDistributionData > createIfcLightDistributionData(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLightDistributionData *cloneIfcLightDistributionData(const IfcLightDistributionData &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLightFixtureType *getIfcLightFixtureType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLightFixtureType(IfcLightFixtureType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLightFixtureType > createIfcLightFixtureType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLightFixtureType *cloneIfcLightFixtureType(const IfcLightFixtureType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLightIntensityDistribution *getIfcLightIntensityDistribution(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLightIntensityDistribution(IfcLightIntensityDistribution *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLightIntensityDistribution > createIfcLightIntensityDistribution(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLightIntensityDistribution *cloneIfcLightIntensityDistribution(const IfcLightIntensityDistribution &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLightSourceAmbient *getIfcLightSourceAmbient(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLightSourceAmbient(IfcLightSourceAmbient *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLightSourceAmbient > createIfcLightSourceAmbient(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLightSourceAmbient *cloneIfcLightSourceAmbient(const IfcLightSourceAmbient &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLightSourceDirectional *getIfcLightSourceDirectional(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLightSourceDirectional(IfcLightSourceDirectional *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLightSourceDirectional > createIfcLightSourceDirectional(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLightSourceDirectional *cloneIfcLightSourceDirectional(const IfcLightSourceDirectional &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLightSourceGoniometric *getIfcLightSourceGoniometric(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLightSourceGoniometric(IfcLightSourceGoniometric *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLightSourceGoniometric > createIfcLightSourceGoniometric(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLightSourceGoniometric *cloneIfcLightSourceGoniometric(const IfcLightSourceGoniometric &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLightSourcePositional *getIfcLightSourcePositional(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLightSourcePositional(IfcLightSourcePositional *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLightSourcePositional > createIfcLightSourcePositional(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLightSourcePositional *cloneIfcLightSourcePositional(const IfcLightSourcePositional &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLightSourceSpot *getIfcLightSourceSpot(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLightSourceSpot(IfcLightSourceSpot *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLightSourceSpot > createIfcLightSourceSpot(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLightSourceSpot *cloneIfcLightSourceSpot(const IfcLightSourceSpot &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLine *getIfcLine(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLine(IfcLine *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLine > createIfcLine(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLine *cloneIfcLine(const IfcLine &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLinearDimension *getIfcLinearDimension(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLinearDimension(IfcLinearDimension *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLinearDimension > createIfcLinearDimension(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLinearDimension *cloneIfcLinearDimension(const IfcLinearDimension &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLocalPlacement *getIfcLocalPlacement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLocalPlacement(IfcLocalPlacement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLocalPlacement > createIfcLocalPlacement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLocalPlacement *cloneIfcLocalPlacement(const IfcLocalPlacement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLocalTime *getIfcLocalTime(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLocalTime(IfcLocalTime *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLocalTime > createIfcLocalTime(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLocalTime *cloneIfcLocalTime(const IfcLocalTime &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLoop *getIfcLoop(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcLoop(IfcLoop *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcLoop > createIfcLoop(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcLoop *cloneIfcLoop(const IfcLoop &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMappedItem *getIfcMappedItem(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMappedItem(IfcMappedItem *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMappedItem > createIfcMappedItem(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMappedItem *cloneIfcMappedItem(const IfcMappedItem &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMaterial *getIfcMaterial(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMaterial(IfcMaterial *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMaterial > createIfcMaterial(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMaterial *cloneIfcMaterial(const IfcMaterial &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMaterialClassificationRelationship *getIfcMaterialClassificationRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMaterialClassificationRelationship > createIfcMaterialClassificationRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMaterialClassificationRelationship *cloneIfcMaterialClassificationRelationship(const IfcMaterialClassificationRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMaterialDefinitionRepresentation *getIfcMaterialDefinitionRepresentation(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMaterialDefinitionRepresentation > createIfcMaterialDefinitionRepresentation(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMaterialDefinitionRepresentation *cloneIfcMaterialDefinitionRepresentation(const IfcMaterialDefinitionRepresentation &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMaterialLayer *getIfcMaterialLayer(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMaterialLayer(IfcMaterialLayer *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMaterialLayer > createIfcMaterialLayer(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMaterialLayer *cloneIfcMaterialLayer(const IfcMaterialLayer &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMaterialLayerSet *getIfcMaterialLayerSet(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMaterialLayerSet(IfcMaterialLayerSet *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMaterialLayerSet > createIfcMaterialLayerSet(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMaterialLayerSet *cloneIfcMaterialLayerSet(const IfcMaterialLayerSet &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMaterialLayerSetUsage *getIfcMaterialLayerSetUsage(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMaterialLayerSetUsage > createIfcMaterialLayerSetUsage(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMaterialLayerSetUsage *cloneIfcMaterialLayerSetUsage(const IfcMaterialLayerSetUsage &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMaterialList *getIfcMaterialList(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMaterialList(IfcMaterialList *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMaterialList > createIfcMaterialList(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMaterialList *cloneIfcMaterialList(const IfcMaterialList &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMeasureWithUnit *getIfcMeasureWithUnit(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMeasureWithUnit(IfcMeasureWithUnit *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMeasureWithUnit > createIfcMeasureWithUnit(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMeasureWithUnit *cloneIfcMeasureWithUnit(const IfcMeasureWithUnit &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMechanicalConcreteMaterialProperties *getIfcMechanicalConcreteMaterialProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMechanicalConcreteMaterialProperties > createIfcMechanicalConcreteMaterialProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMechanicalConcreteMaterialProperties *cloneIfcMechanicalConcreteMaterialProperties(const IfcMechanicalConcreteMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMechanicalFastener *getIfcMechanicalFastener(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMechanicalFastener(IfcMechanicalFastener *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMechanicalFastener > createIfcMechanicalFastener(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMechanicalFastener *cloneIfcMechanicalFastener(const IfcMechanicalFastener &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMechanicalFastenerType *getIfcMechanicalFastenerType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMechanicalFastenerType(IfcMechanicalFastenerType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMechanicalFastenerType > createIfcMechanicalFastenerType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMechanicalFastenerType *cloneIfcMechanicalFastenerType(const IfcMechanicalFastenerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMechanicalMaterialProperties *getIfcMechanicalMaterialProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMechanicalMaterialProperties > createIfcMechanicalMaterialProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMechanicalMaterialProperties *cloneIfcMechanicalMaterialProperties(const IfcMechanicalMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMechanicalSteelMaterialProperties *getIfcMechanicalSteelMaterialProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMechanicalSteelMaterialProperties > createIfcMechanicalSteelMaterialProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMechanicalSteelMaterialProperties *cloneIfcMechanicalSteelMaterialProperties(const IfcMechanicalSteelMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMember *getIfcMember(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMember(IfcMember *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMember > createIfcMember(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMember *cloneIfcMember(const IfcMember &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMemberType *getIfcMemberType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMemberType(IfcMemberType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMemberType > createIfcMemberType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMemberType *cloneIfcMemberType(const IfcMemberType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMetric *getIfcMetric(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMetric(IfcMetric *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMetric > createIfcMetric(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMetric *cloneIfcMetric(const IfcMetric &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMonetaryUnit *getIfcMonetaryUnit(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMonetaryUnit(IfcMonetaryUnit *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMonetaryUnit > createIfcMonetaryUnit(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMonetaryUnit *cloneIfcMonetaryUnit(const IfcMonetaryUnit &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMotorConnectionType *getIfcMotorConnectionType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMotorConnectionType(IfcMotorConnectionType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMotorConnectionType > createIfcMotorConnectionType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMotorConnectionType *cloneIfcMotorConnectionType(const IfcMotorConnectionType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMove *getIfcMove(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcMove(IfcMove *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcMove > createIfcMove(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcMove *cloneIfcMove(const IfcMove &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcObjective *getIfcObjective(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcObjective(IfcObjective *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcObjective > createIfcObjective(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcObjective *cloneIfcObjective(const IfcObjective &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOccupant *getIfcOccupant(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOccupant(IfcOccupant *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOccupant > createIfcOccupant(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOccupant *cloneIfcOccupant(const IfcOccupant &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOffsetCurve2D *getIfcOffsetCurve2D(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOffsetCurve2D(IfcOffsetCurve2D *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOffsetCurve2D > createIfcOffsetCurve2D(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOffsetCurve2D *cloneIfcOffsetCurve2D(const IfcOffsetCurve2D &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOffsetCurve3D *getIfcOffsetCurve3D(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOffsetCurve3D(IfcOffsetCurve3D *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOffsetCurve3D > createIfcOffsetCurve3D(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOffsetCurve3D *cloneIfcOffsetCurve3D(const IfcOffsetCurve3D &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOneDirectionRepeatFactor *getIfcOneDirectionRepeatFactor(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOneDirectionRepeatFactor > createIfcOneDirectionRepeatFactor(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOneDirectionRepeatFactor *cloneIfcOneDirectionRepeatFactor(const IfcOneDirectionRepeatFactor &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOpenShell *getIfcOpenShell(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOpenShell(IfcOpenShell *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOpenShell > createIfcOpenShell(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOpenShell *cloneIfcOpenShell(const IfcOpenShell &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOpeningElement *getIfcOpeningElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOpeningElement(IfcOpeningElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOpeningElement > createIfcOpeningElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOpeningElement *cloneIfcOpeningElement(const IfcOpeningElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOpticalMaterialProperties *getIfcOpticalMaterialProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOpticalMaterialProperties > createIfcOpticalMaterialProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOpticalMaterialProperties *cloneIfcOpticalMaterialProperties(const IfcOpticalMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOrderAction *getIfcOrderAction(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOrderAction(IfcOrderAction *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOrderAction > createIfcOrderAction(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOrderAction *cloneIfcOrderAction(const IfcOrderAction &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOrganization *getIfcOrganization(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOrganization(IfcOrganization *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOrganization > createIfcOrganization(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOrganization *cloneIfcOrganization(const IfcOrganization &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOrganizationRelationship *getIfcOrganizationRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOrganizationRelationship(IfcOrganizationRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOrganizationRelationship > createIfcOrganizationRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOrganizationRelationship *cloneIfcOrganizationRelationship(const IfcOrganizationRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOrientedEdge *getIfcOrientedEdge(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOrientedEdge(IfcOrientedEdge *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOrientedEdge > createIfcOrientedEdge(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOrientedEdge *cloneIfcOrientedEdge(const IfcOrientedEdge &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOutletType *getIfcOutletType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOutletType(IfcOutletType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOutletType > createIfcOutletType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOutletType *cloneIfcOutletType(const IfcOutletType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcOwnerHistory *getIfcOwnerHistory(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcOwnerHistory(IfcOwnerHistory *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcOwnerHistory > createIfcOwnerHistory(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcOwnerHistory *cloneIfcOwnerHistory(const IfcOwnerHistory &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPath *getIfcPath(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPath(IfcPath *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPath > createIfcPath(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPath *cloneIfcPath(const IfcPath &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPerformanceHistory *getIfcPerformanceHistory(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPerformanceHistory(IfcPerformanceHistory *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPerformanceHistory > createIfcPerformanceHistory(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPerformanceHistory *cloneIfcPerformanceHistory(const IfcPerformanceHistory &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPermeableCoveringProperties *getIfcPermeableCoveringProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPermeableCoveringProperties > createIfcPermeableCoveringProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPermeableCoveringProperties *cloneIfcPermeableCoveringProperties(const IfcPermeableCoveringProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPermit *getIfcPermit(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPermit(IfcPermit *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPermit > createIfcPermit(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPermit *cloneIfcPermit(const IfcPermit &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPerson *getIfcPerson(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPerson(IfcPerson *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPerson > createIfcPerson(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPerson *cloneIfcPerson(const IfcPerson &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPersonAndOrganization *getIfcPersonAndOrganization(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPersonAndOrganization(IfcPersonAndOrganization *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPersonAndOrganization > createIfcPersonAndOrganization(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPersonAndOrganization *cloneIfcPersonAndOrganization(const IfcPersonAndOrganization &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPhysicalComplexQuantity *getIfcPhysicalComplexQuantity(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPhysicalComplexQuantity > createIfcPhysicalComplexQuantity(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPhysicalComplexQuantity *cloneIfcPhysicalComplexQuantity(const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPile *getIfcPile(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPile(IfcPile *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPile > createIfcPile(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPile *cloneIfcPile(const IfcPile &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPipeFittingType *getIfcPipeFittingType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPipeFittingType(IfcPipeFittingType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPipeFittingType > createIfcPipeFittingType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPipeFittingType *cloneIfcPipeFittingType(const IfcPipeFittingType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPipeSegmentType *getIfcPipeSegmentType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPipeSegmentType(IfcPipeSegmentType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPipeSegmentType > createIfcPipeSegmentType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPipeSegmentType *cloneIfcPipeSegmentType(const IfcPipeSegmentType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPixelTexture *getIfcPixelTexture(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPixelTexture(IfcPixelTexture *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPixelTexture > createIfcPixelTexture(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPixelTexture *cloneIfcPixelTexture(const IfcPixelTexture &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPlanarBox *getIfcPlanarBox(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPlanarBox(IfcPlanarBox *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPlanarBox > createIfcPlanarBox(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPlanarBox *cloneIfcPlanarBox(const IfcPlanarBox &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPlanarExtent *getIfcPlanarExtent(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPlanarExtent(IfcPlanarExtent *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPlanarExtent > createIfcPlanarExtent(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPlanarExtent *cloneIfcPlanarExtent(const IfcPlanarExtent &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPlane *getIfcPlane(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPlane(IfcPlane *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPlane > createIfcPlane(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPlane *cloneIfcPlane(const IfcPlane &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPlate *getIfcPlate(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPlate(IfcPlate *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPlate > createIfcPlate(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPlate *cloneIfcPlate(const IfcPlate &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPlateType *getIfcPlateType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPlateType(IfcPlateType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPlateType > createIfcPlateType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPlateType *cloneIfcPlateType(const IfcPlateType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPointOnCurve *getIfcPointOnCurve(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPointOnCurve(IfcPointOnCurve *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPointOnCurve > createIfcPointOnCurve(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPointOnCurve *cloneIfcPointOnCurve(const IfcPointOnCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPointOnSurface *getIfcPointOnSurface(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPointOnSurface(IfcPointOnSurface *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPointOnSurface > createIfcPointOnSurface(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPointOnSurface *cloneIfcPointOnSurface(const IfcPointOnSurface &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPolyLoop *getIfcPolyLoop(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPolyLoop(IfcPolyLoop *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPolyLoop > createIfcPolyLoop(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPolyLoop *cloneIfcPolyLoop(const IfcPolyLoop &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPolygonalBoundedHalfSpace *getIfcPolygonalBoundedHalfSpace(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPolygonalBoundedHalfSpace > createIfcPolygonalBoundedHalfSpace(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPolygonalBoundedHalfSpace *cloneIfcPolygonalBoundedHalfSpace(const IfcPolygonalBoundedHalfSpace &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPolyline *getIfcPolyline(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPolyline(IfcPolyline *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPolyline > createIfcPolyline(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPolyline *cloneIfcPolyline(const IfcPolyline &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPostalAddress *getIfcPostalAddress(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPostalAddress(IfcPostalAddress *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPostalAddress > createIfcPostalAddress(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPostalAddress *cloneIfcPostalAddress(const IfcPostalAddress &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPreDefinedDimensionSymbol *getIfcPreDefinedDimensionSymbol(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPreDefinedDimensionSymbol > createIfcPreDefinedDimensionSymbol(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPreDefinedDimensionSymbol *cloneIfcPreDefinedDimensionSymbol(const IfcPreDefinedDimensionSymbol &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPreDefinedPointMarkerSymbol *getIfcPreDefinedPointMarkerSymbol(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPreDefinedPointMarkerSymbol > createIfcPreDefinedPointMarkerSymbol(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPreDefinedPointMarkerSymbol *cloneIfcPreDefinedPointMarkerSymbol(const IfcPreDefinedPointMarkerSymbol &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPreDefinedTerminatorSymbol *getIfcPreDefinedTerminatorSymbol(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPreDefinedTerminatorSymbol > createIfcPreDefinedTerminatorSymbol(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPreDefinedTerminatorSymbol *cloneIfcPreDefinedTerminatorSymbol(const IfcPreDefinedTerminatorSymbol &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPresentationLayerAssignment *getIfcPresentationLayerAssignment(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPresentationLayerAssignment > createIfcPresentationLayerAssignment(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPresentationLayerAssignment *cloneIfcPresentationLayerAssignment(const IfcPresentationLayerAssignment &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPresentationLayerWithStyle *getIfcPresentationLayerWithStyle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPresentationLayerWithStyle > createIfcPresentationLayerWithStyle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPresentationLayerWithStyle *cloneIfcPresentationLayerWithStyle(const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPresentationStyleAssignment *getIfcPresentationStyleAssignment(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPresentationStyleAssignment > createIfcPresentationStyleAssignment(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPresentationStyleAssignment *cloneIfcPresentationStyleAssignment(const IfcPresentationStyleAssignment &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProcedure *getIfcProcedure(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcProcedure(IfcProcedure *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcProcedure > createIfcProcedure(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcProcedure *cloneIfcProcedure(const IfcProcedure &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProductDefinitionShape *getIfcProductDefinitionShape(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcProductDefinitionShape(IfcProductDefinitionShape *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcProductDefinitionShape > createIfcProductDefinitionShape(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcProductDefinitionShape *cloneIfcProductDefinitionShape(const IfcProductDefinitionShape &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProductRepresentation *getIfcProductRepresentation(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcProductRepresentation(IfcProductRepresentation *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcProductRepresentation > createIfcProductRepresentation(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcProductRepresentation *cloneIfcProductRepresentation(const IfcProductRepresentation &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProductsOfCombustionProperties *getIfcProductsOfCombustionProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcProductsOfCombustionProperties > createIfcProductsOfCombustionProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcProductsOfCombustionProperties *cloneIfcProductsOfCombustionProperties(const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProject *getIfcProject(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcProject(IfcProject *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcProject > createIfcProject(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcProject *cloneIfcProject(const IfcProject &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProjectOrder *getIfcProjectOrder(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcProjectOrder(IfcProjectOrder *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcProjectOrder > createIfcProjectOrder(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcProjectOrder *cloneIfcProjectOrder(const IfcProjectOrder &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProjectOrderRecord *getIfcProjectOrderRecord(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcProjectOrderRecord(IfcProjectOrderRecord *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcProjectOrderRecord > createIfcProjectOrderRecord(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcProjectOrderRecord *cloneIfcProjectOrderRecord(const IfcProjectOrderRecord &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProjectionCurve *getIfcProjectionCurve(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcProjectionCurve(IfcProjectionCurve *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcProjectionCurve > createIfcProjectionCurve(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcProjectionCurve *cloneIfcProjectionCurve(const IfcProjectionCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProjectionElement *getIfcProjectionElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcProjectionElement(IfcProjectionElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcProjectionElement > createIfcProjectionElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcProjectionElement *cloneIfcProjectionElement(const IfcProjectionElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertyBoundedValue *getIfcPropertyBoundedValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPropertyBoundedValue(IfcPropertyBoundedValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPropertyBoundedValue > createIfcPropertyBoundedValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertyBoundedValue *cloneIfcPropertyBoundedValue(const IfcPropertyBoundedValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertyConstraintRelationship *getIfcPropertyConstraintRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPropertyConstraintRelationship > createIfcPropertyConstraintRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertyConstraintRelationship *cloneIfcPropertyConstraintRelationship(const IfcPropertyConstraintRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertyDependencyRelationship *getIfcPropertyDependencyRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPropertyDependencyRelationship > createIfcPropertyDependencyRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertyDependencyRelationship *cloneIfcPropertyDependencyRelationship(const IfcPropertyDependencyRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertyEnumeratedValue *getIfcPropertyEnumeratedValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPropertyEnumeratedValue > createIfcPropertyEnumeratedValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertyEnumeratedValue *cloneIfcPropertyEnumeratedValue(const IfcPropertyEnumeratedValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertyEnumeration *getIfcPropertyEnumeration(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPropertyEnumeration(IfcPropertyEnumeration *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPropertyEnumeration > createIfcPropertyEnumeration(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertyEnumeration *cloneIfcPropertyEnumeration(const IfcPropertyEnumeration &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertyListValue *getIfcPropertyListValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPropertyListValue(IfcPropertyListValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPropertyListValue > createIfcPropertyListValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertyListValue *cloneIfcPropertyListValue(const IfcPropertyListValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertyReferenceValue *getIfcPropertyReferenceValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPropertyReferenceValue(IfcPropertyReferenceValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPropertyReferenceValue > createIfcPropertyReferenceValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertyReferenceValue *cloneIfcPropertyReferenceValue(const IfcPropertyReferenceValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertySet *getIfcPropertySet(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPropertySet(IfcPropertySet *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPropertySet > createIfcPropertySet(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertySet *cloneIfcPropertySet(const IfcPropertySet &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertySingleValue *getIfcPropertySingleValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPropertySingleValue(IfcPropertySingleValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPropertySingleValue > createIfcPropertySingleValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertySingleValue *cloneIfcPropertySingleValue(const IfcPropertySingleValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertyTableValue *getIfcPropertyTableValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPropertyTableValue(IfcPropertyTableValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPropertyTableValue > createIfcPropertyTableValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertyTableValue *cloneIfcPropertyTableValue(const IfcPropertyTableValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProtectiveDeviceType *getIfcProtectiveDeviceType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcProtectiveDeviceType(IfcProtectiveDeviceType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcProtectiveDeviceType > createIfcProtectiveDeviceType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcProtectiveDeviceType *cloneIfcProtectiveDeviceType(const IfcProtectiveDeviceType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProxy *getIfcProxy(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcProxy(IfcProxy *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcProxy > createIfcProxy(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcProxy *cloneIfcProxy(const IfcProxy &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPumpType *getIfcPumpType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcPumpType(IfcPumpType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcPumpType > createIfcPumpType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcPumpType *cloneIfcPumpType(const IfcPumpType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcQuantityArea *getIfcQuantityArea(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcQuantityArea(IfcQuantityArea *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcQuantityArea > createIfcQuantityArea(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcQuantityArea *cloneIfcQuantityArea(const IfcQuantityArea &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcQuantityCount *getIfcQuantityCount(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcQuantityCount(IfcQuantityCount *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcQuantityCount > createIfcQuantityCount(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcQuantityCount *cloneIfcQuantityCount(const IfcQuantityCount &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcQuantityLength *getIfcQuantityLength(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcQuantityLength(IfcQuantityLength *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcQuantityLength > createIfcQuantityLength(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcQuantityLength *cloneIfcQuantityLength(const IfcQuantityLength &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcQuantityTime *getIfcQuantityTime(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcQuantityTime(IfcQuantityTime *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcQuantityTime > createIfcQuantityTime(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcQuantityTime *cloneIfcQuantityTime(const IfcQuantityTime &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcQuantityVolume *getIfcQuantityVolume(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcQuantityVolume(IfcQuantityVolume *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcQuantityVolume > createIfcQuantityVolume(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcQuantityVolume *cloneIfcQuantityVolume(const IfcQuantityVolume &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcQuantityWeight *getIfcQuantityWeight(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcQuantityWeight(IfcQuantityWeight *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcQuantityWeight > createIfcQuantityWeight(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcQuantityWeight *cloneIfcQuantityWeight(const IfcQuantityWeight &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRadiusDimension *getIfcRadiusDimension(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRadiusDimension(IfcRadiusDimension *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRadiusDimension > createIfcRadiusDimension(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRadiusDimension *cloneIfcRadiusDimension(const IfcRadiusDimension &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRailing *getIfcRailing(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRailing(IfcRailing *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRailing > createIfcRailing(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRailing *cloneIfcRailing(const IfcRailing &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRailingType *getIfcRailingType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRailingType(IfcRailingType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRailingType > createIfcRailingType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRailingType *cloneIfcRailingType(const IfcRailingType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRamp *getIfcRamp(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRamp(IfcRamp *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRamp > createIfcRamp(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRamp *cloneIfcRamp(const IfcRamp &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRampFlight *getIfcRampFlight(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRampFlight(IfcRampFlight *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRampFlight > createIfcRampFlight(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRampFlight *cloneIfcRampFlight(const IfcRampFlight &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRampFlightType *getIfcRampFlightType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRampFlightType(IfcRampFlightType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRampFlightType > createIfcRampFlightType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRampFlightType *cloneIfcRampFlightType(const IfcRampFlightType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRationalBezierCurve *getIfcRationalBezierCurve(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRationalBezierCurve(IfcRationalBezierCurve *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRationalBezierCurve > createIfcRationalBezierCurve(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRationalBezierCurve *cloneIfcRationalBezierCurve(const IfcRationalBezierCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRectangleHollowProfileDef *getIfcRectangleHollowProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRectangleHollowProfileDef > createIfcRectangleHollowProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRectangleHollowProfileDef *cloneIfcRectangleHollowProfileDef(const IfcRectangleHollowProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRectangleProfileDef *getIfcRectangleProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRectangleProfileDef(IfcRectangleProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRectangleProfileDef > createIfcRectangleProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRectangleProfileDef *cloneIfcRectangleProfileDef(const IfcRectangleProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRectangularPyramid *getIfcRectangularPyramid(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRectangularPyramid(IfcRectangularPyramid *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRectangularPyramid > createIfcRectangularPyramid(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRectangularPyramid *cloneIfcRectangularPyramid(const IfcRectangularPyramid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRectangularTrimmedSurface *getIfcRectangularTrimmedSurface(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRectangularTrimmedSurface > createIfcRectangularTrimmedSurface(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRectangularTrimmedSurface *cloneIfcRectangularTrimmedSurface(const IfcRectangularTrimmedSurface &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReferencesValueDocument *getIfcReferencesValueDocument(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcReferencesValueDocument(IfcReferencesValueDocument *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcReferencesValueDocument > createIfcReferencesValueDocument(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcReferencesValueDocument *cloneIfcReferencesValueDocument(const IfcReferencesValueDocument &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRegularTimeSeries *getIfcRegularTimeSeries(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRegularTimeSeries(IfcRegularTimeSeries *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRegularTimeSeries > createIfcRegularTimeSeries(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRegularTimeSeries *cloneIfcRegularTimeSeries(const IfcRegularTimeSeries &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReinforcementBarProperties *getIfcReinforcementBarProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcReinforcementBarProperties(IfcReinforcementBarProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcReinforcementBarProperties > createIfcReinforcementBarProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcReinforcementBarProperties *cloneIfcReinforcementBarProperties(const IfcReinforcementBarProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReinforcementDefinitionProperties *getIfcReinforcementDefinitionProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcReinforcementDefinitionProperties > createIfcReinforcementDefinitionProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcReinforcementDefinitionProperties *cloneIfcReinforcementDefinitionProperties(const IfcReinforcementDefinitionProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReinforcingBar *getIfcReinforcingBar(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcReinforcingBar(IfcReinforcingBar *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcReinforcingBar > createIfcReinforcingBar(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcReinforcingBar *cloneIfcReinforcingBar(const IfcReinforcingBar &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReinforcingMesh *getIfcReinforcingMesh(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcReinforcingMesh(IfcReinforcingMesh *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcReinforcingMesh > createIfcReinforcingMesh(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcReinforcingMesh *cloneIfcReinforcingMesh(const IfcReinforcingMesh &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAggregates *getIfcRelAggregates(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAggregates(IfcRelAggregates *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAggregates > createIfcRelAggregates(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAggregates *cloneIfcRelAggregates(const IfcRelAggregates &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssignsTasks *getIfcRelAssignsTasks(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssignsTasks(IfcRelAssignsTasks *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssignsTasks > createIfcRelAssignsTasks(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssignsTasks *cloneIfcRelAssignsTasks(const IfcRelAssignsTasks &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssignsToActor *getIfcRelAssignsToActor(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssignsToActor(IfcRelAssignsToActor *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssignsToActor > createIfcRelAssignsToActor(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssignsToActor *cloneIfcRelAssignsToActor(const IfcRelAssignsToActor &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssignsToControl *getIfcRelAssignsToControl(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssignsToControl(IfcRelAssignsToControl *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssignsToControl > createIfcRelAssignsToControl(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssignsToControl *cloneIfcRelAssignsToControl(const IfcRelAssignsToControl &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssignsToGroup *getIfcRelAssignsToGroup(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssignsToGroup(IfcRelAssignsToGroup *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssignsToGroup > createIfcRelAssignsToGroup(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssignsToGroup *cloneIfcRelAssignsToGroup(const IfcRelAssignsToGroup &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssignsToProcess *getIfcRelAssignsToProcess(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssignsToProcess(IfcRelAssignsToProcess *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssignsToProcess > createIfcRelAssignsToProcess(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssignsToProcess *cloneIfcRelAssignsToProcess(const IfcRelAssignsToProcess &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssignsToProduct *getIfcRelAssignsToProduct(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssignsToProduct(IfcRelAssignsToProduct *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssignsToProduct > createIfcRelAssignsToProduct(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssignsToProduct *cloneIfcRelAssignsToProduct(const IfcRelAssignsToProduct &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssignsToProjectOrder *getIfcRelAssignsToProjectOrder(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssignsToProjectOrder > createIfcRelAssignsToProjectOrder(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssignsToProjectOrder *cloneIfcRelAssignsToProjectOrder(const IfcRelAssignsToProjectOrder &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssignsToResource *getIfcRelAssignsToResource(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssignsToResource(IfcRelAssignsToResource *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssignsToResource > createIfcRelAssignsToResource(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssignsToResource *cloneIfcRelAssignsToResource(const IfcRelAssignsToResource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssociates *getIfcRelAssociates(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssociates(IfcRelAssociates *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssociates > createIfcRelAssociates(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssociates *cloneIfcRelAssociates(const IfcRelAssociates &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssociatesAppliedValue *getIfcRelAssociatesAppliedValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssociatesAppliedValue > createIfcRelAssociatesAppliedValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssociatesAppliedValue *cloneIfcRelAssociatesAppliedValue(const IfcRelAssociatesAppliedValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssociatesApproval *getIfcRelAssociatesApproval(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssociatesApproval(IfcRelAssociatesApproval *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssociatesApproval > createIfcRelAssociatesApproval(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssociatesApproval *cloneIfcRelAssociatesApproval(const IfcRelAssociatesApproval &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssociatesClassification *getIfcRelAssociatesClassification(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssociatesClassification(IfcRelAssociatesClassification *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssociatesClassification > createIfcRelAssociatesClassification(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssociatesClassification *cloneIfcRelAssociatesClassification(const IfcRelAssociatesClassification &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssociatesConstraint *getIfcRelAssociatesConstraint(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssociatesConstraint > createIfcRelAssociatesConstraint(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssociatesConstraint *cloneIfcRelAssociatesConstraint(const IfcRelAssociatesConstraint &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssociatesDocument *getIfcRelAssociatesDocument(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssociatesDocument(IfcRelAssociatesDocument *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssociatesDocument > createIfcRelAssociatesDocument(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssociatesDocument *cloneIfcRelAssociatesDocument(const IfcRelAssociatesDocument &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssociatesLibrary *getIfcRelAssociatesLibrary(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssociatesLibrary > createIfcRelAssociatesLibrary(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssociatesLibrary *cloneIfcRelAssociatesLibrary(const IfcRelAssociatesLibrary &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssociatesMaterial *getIfcRelAssociatesMaterial(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssociatesMaterial > createIfcRelAssociatesMaterial(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssociatesMaterial *cloneIfcRelAssociatesMaterial(const IfcRelAssociatesMaterial &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssociatesProfileProperties *getIfcRelAssociatesProfileProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelAssociatesProfileProperties > createIfcRelAssociatesProfileProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssociatesProfileProperties *cloneIfcRelAssociatesProfileProperties(const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelConnectsElements *getIfcRelConnectsElements(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelConnectsElements(IfcRelConnectsElements *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelConnectsElements > createIfcRelConnectsElements(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelConnectsElements *cloneIfcRelConnectsElements(const IfcRelConnectsElements &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelConnectsPathElements *getIfcRelConnectsPathElements(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelConnectsPathElements(IfcRelConnectsPathElements *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelConnectsPathElements > createIfcRelConnectsPathElements(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelConnectsPathElements *cloneIfcRelConnectsPathElements(const IfcRelConnectsPathElements &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelConnectsPortToElement *getIfcRelConnectsPortToElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelConnectsPortToElement > createIfcRelConnectsPortToElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelConnectsPortToElement *cloneIfcRelConnectsPortToElement(const IfcRelConnectsPortToElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelConnectsPorts *getIfcRelConnectsPorts(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelConnectsPorts(IfcRelConnectsPorts *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelConnectsPorts > createIfcRelConnectsPorts(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelConnectsPorts *cloneIfcRelConnectsPorts(const IfcRelConnectsPorts &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelConnectsStructuralActivity *getIfcRelConnectsStructuralActivity(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelConnectsStructuralActivity > createIfcRelConnectsStructuralActivity(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelConnectsStructuralActivity *cloneIfcRelConnectsStructuralActivity(const IfcRelConnectsStructuralActivity &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelConnectsStructuralElement *getIfcRelConnectsStructuralElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelConnectsStructuralElement > createIfcRelConnectsStructuralElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelConnectsStructuralElement *cloneIfcRelConnectsStructuralElement(const IfcRelConnectsStructuralElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelConnectsStructuralMember *getIfcRelConnectsStructuralMember(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelConnectsStructuralMember > createIfcRelConnectsStructuralMember(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelConnectsStructuralMember *cloneIfcRelConnectsStructuralMember(const IfcRelConnectsStructuralMember &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelConnectsWithEccentricity *getIfcRelConnectsWithEccentricity(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelConnectsWithEccentricity > createIfcRelConnectsWithEccentricity(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelConnectsWithEccentricity *cloneIfcRelConnectsWithEccentricity(const IfcRelConnectsWithEccentricity &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelConnectsWithRealizingElements *getIfcRelConnectsWithRealizingElements(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelConnectsWithRealizingElements > createIfcRelConnectsWithRealizingElements(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelConnectsWithRealizingElements *cloneIfcRelConnectsWithRealizingElements(const IfcRelConnectsWithRealizingElements &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelContainedInSpatialStructure *getIfcRelContainedInSpatialStructure(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelContainedInSpatialStructure > createIfcRelContainedInSpatialStructure(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelContainedInSpatialStructure *cloneIfcRelContainedInSpatialStructure(const IfcRelContainedInSpatialStructure &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelCoversBldgElements *getIfcRelCoversBldgElements(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelCoversBldgElements(IfcRelCoversBldgElements *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelCoversBldgElements > createIfcRelCoversBldgElements(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelCoversBldgElements *cloneIfcRelCoversBldgElements(const IfcRelCoversBldgElements &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelCoversSpaces *getIfcRelCoversSpaces(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelCoversSpaces(IfcRelCoversSpaces *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelCoversSpaces > createIfcRelCoversSpaces(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelCoversSpaces *cloneIfcRelCoversSpaces(const IfcRelCoversSpaces &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelDefinesByProperties *getIfcRelDefinesByProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelDefinesByProperties(IfcRelDefinesByProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelDefinesByProperties > createIfcRelDefinesByProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelDefinesByProperties *cloneIfcRelDefinesByProperties(const IfcRelDefinesByProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelDefinesByType *getIfcRelDefinesByType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelDefinesByType(IfcRelDefinesByType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelDefinesByType > createIfcRelDefinesByType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelDefinesByType *cloneIfcRelDefinesByType(const IfcRelDefinesByType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelFillsElement *getIfcRelFillsElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelFillsElement(IfcRelFillsElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelFillsElement > createIfcRelFillsElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelFillsElement *cloneIfcRelFillsElement(const IfcRelFillsElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelFlowControlElements *getIfcRelFlowControlElements(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelFlowControlElements(IfcRelFlowControlElements *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelFlowControlElements > createIfcRelFlowControlElements(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelFlowControlElements *cloneIfcRelFlowControlElements(const IfcRelFlowControlElements &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelInteractionRequirements *getIfcRelInteractionRequirements(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelInteractionRequirements(IfcRelInteractionRequirements *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelInteractionRequirements > createIfcRelInteractionRequirements(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelInteractionRequirements *cloneIfcRelInteractionRequirements(const IfcRelInteractionRequirements &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelNests *getIfcRelNests(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelNests(IfcRelNests *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelNests > createIfcRelNests(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelNests *cloneIfcRelNests(const IfcRelNests &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelOccupiesSpaces *getIfcRelOccupiesSpaces(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelOccupiesSpaces > createIfcRelOccupiesSpaces(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelOccupiesSpaces *cloneIfcRelOccupiesSpaces(const IfcRelOccupiesSpaces &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelOverridesProperties *getIfcRelOverridesProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelOverridesProperties(IfcRelOverridesProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelOverridesProperties > createIfcRelOverridesProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelOverridesProperties *cloneIfcRelOverridesProperties(const IfcRelOverridesProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelProjectsElement *getIfcRelProjectsElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelProjectsElement(IfcRelProjectsElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelProjectsElement > createIfcRelProjectsElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelProjectsElement *cloneIfcRelProjectsElement(const IfcRelProjectsElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelReferencedInSpatialStructure *getIfcRelReferencedInSpatialStructure(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelReferencedInSpatialStructure > createIfcRelReferencedInSpatialStructure(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelReferencedInSpatialStructure *cloneIfcRelReferencedInSpatialStructure(const IfcRelReferencedInSpatialStructure &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelSchedulesCostItems *getIfcRelSchedulesCostItems(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelSchedulesCostItems > createIfcRelSchedulesCostItems(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelSchedulesCostItems *cloneIfcRelSchedulesCostItems(const IfcRelSchedulesCostItems &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelSequence *getIfcRelSequence(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelSequence(IfcRelSequence *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelSequence > createIfcRelSequence(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelSequence *cloneIfcRelSequence(const IfcRelSequence &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelServicesBuildings *getIfcRelServicesBuildings(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelServicesBuildings(IfcRelServicesBuildings *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelServicesBuildings > createIfcRelServicesBuildings(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelServicesBuildings *cloneIfcRelServicesBuildings(const IfcRelServicesBuildings &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelSpaceBoundary *getIfcRelSpaceBoundary(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelSpaceBoundary(IfcRelSpaceBoundary *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelSpaceBoundary > createIfcRelSpaceBoundary(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelSpaceBoundary *cloneIfcRelSpaceBoundary(const IfcRelSpaceBoundary &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelVoidsElement *getIfcRelVoidsElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelVoidsElement(IfcRelVoidsElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelVoidsElement > createIfcRelVoidsElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelVoidsElement *cloneIfcRelVoidsElement(const IfcRelVoidsElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelaxation *getIfcRelaxation(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRelaxation(IfcRelaxation *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRelaxation > createIfcRelaxation(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelaxation *cloneIfcRelaxation(const IfcRelaxation &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRepresentation *getIfcRepresentation(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRepresentation(IfcRepresentation *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRepresentation > createIfcRepresentation(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRepresentation *cloneIfcRepresentation(const IfcRepresentation &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRepresentationContext *getIfcRepresentationContext(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRepresentationContext(IfcRepresentationContext *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRepresentationContext > createIfcRepresentationContext(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRepresentationContext *cloneIfcRepresentationContext(const IfcRepresentationContext &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRepresentationMap *getIfcRepresentationMap(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRepresentationMap(IfcRepresentationMap *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRepresentationMap > createIfcRepresentationMap(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRepresentationMap *cloneIfcRepresentationMap(const IfcRepresentationMap &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRevolvedAreaSolid *getIfcRevolvedAreaSolid(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRevolvedAreaSolid > createIfcRevolvedAreaSolid(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRevolvedAreaSolid *cloneIfcRevolvedAreaSolid(const IfcRevolvedAreaSolid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRibPlateProfileProperties *getIfcRibPlateProfileProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRibPlateProfileProperties > createIfcRibPlateProfileProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRibPlateProfileProperties *cloneIfcRibPlateProfileProperties(const IfcRibPlateProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRightCircularCone *getIfcRightCircularCone(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRightCircularCone(IfcRightCircularCone *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRightCircularCone > createIfcRightCircularCone(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRightCircularCone *cloneIfcRightCircularCone(const IfcRightCircularCone &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRightCircularCylinder *getIfcRightCircularCylinder(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRightCircularCylinder(IfcRightCircularCylinder *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRightCircularCylinder > createIfcRightCircularCylinder(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRightCircularCylinder *cloneIfcRightCircularCylinder(const IfcRightCircularCylinder &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRoof *getIfcRoof(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRoof(IfcRoof *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRoof > createIfcRoof(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRoof *cloneIfcRoof(const IfcRoof &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRoundedEdgeFeature *getIfcRoundedEdgeFeature(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRoundedEdgeFeature > createIfcRoundedEdgeFeature(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRoundedEdgeFeature *cloneIfcRoundedEdgeFeature(const IfcRoundedEdgeFeature &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRoundedRectangleProfileDef *getIfcRoundedRectangleProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcRoundedRectangleProfileDef > createIfcRoundedRectangleProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcRoundedRectangleProfileDef *cloneIfcRoundedRectangleProfileDef(const IfcRoundedRectangleProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSIUnit *getIfcSIUnit(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSIUnit(IfcSIUnit *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSIUnit > createIfcSIUnit(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSIUnit *cloneIfcSIUnit(const IfcSIUnit &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSanitaryTerminalType *getIfcSanitaryTerminalType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSanitaryTerminalType(IfcSanitaryTerminalType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSanitaryTerminalType > createIfcSanitaryTerminalType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSanitaryTerminalType *cloneIfcSanitaryTerminalType(const IfcSanitaryTerminalType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcScheduleTimeControl *getIfcScheduleTimeControl(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcScheduleTimeControl(IfcScheduleTimeControl *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcScheduleTimeControl > createIfcScheduleTimeControl(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcScheduleTimeControl *cloneIfcScheduleTimeControl(const IfcScheduleTimeControl &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSectionProperties *getIfcSectionProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSectionProperties(IfcSectionProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSectionProperties > createIfcSectionProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSectionProperties *cloneIfcSectionProperties(const IfcSectionProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSectionReinforcementProperties *getIfcSectionReinforcementProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSectionReinforcementProperties > createIfcSectionReinforcementProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSectionReinforcementProperties *cloneIfcSectionReinforcementProperties(const IfcSectionReinforcementProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSectionedSpine *getIfcSectionedSpine(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSectionedSpine(IfcSectionedSpine *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSectionedSpine > createIfcSectionedSpine(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSectionedSpine *cloneIfcSectionedSpine(const IfcSectionedSpine &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSensorType *getIfcSensorType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSensorType(IfcSensorType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSensorType > createIfcSensorType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSensorType *cloneIfcSensorType(const IfcSensorType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcServiceLife *getIfcServiceLife(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcServiceLife(IfcServiceLife *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcServiceLife > createIfcServiceLife(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcServiceLife *cloneIfcServiceLife(const IfcServiceLife &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcServiceLifeFactor *getIfcServiceLifeFactor(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcServiceLifeFactor(IfcServiceLifeFactor *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcServiceLifeFactor > createIfcServiceLifeFactor(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcServiceLifeFactor *cloneIfcServiceLifeFactor(const IfcServiceLifeFactor &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcShapeAspect *getIfcShapeAspect(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcShapeAspect(IfcShapeAspect *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcShapeAspect > createIfcShapeAspect(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcShapeAspect *cloneIfcShapeAspect(const IfcShapeAspect &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcShapeRepresentation *getIfcShapeRepresentation(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcShapeRepresentation(IfcShapeRepresentation *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcShapeRepresentation > createIfcShapeRepresentation(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcShapeRepresentation *cloneIfcShapeRepresentation(const IfcShapeRepresentation &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcShellBasedSurfaceModel *getIfcShellBasedSurfaceModel(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcShellBasedSurfaceModel > createIfcShellBasedSurfaceModel(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcShellBasedSurfaceModel *cloneIfcShellBasedSurfaceModel(const IfcShellBasedSurfaceModel &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSite *getIfcSite(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSite(IfcSite *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSite > createIfcSite(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSite *cloneIfcSite(const IfcSite &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSlab *getIfcSlab(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSlab(IfcSlab *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSlab > createIfcSlab(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSlab *cloneIfcSlab(const IfcSlab &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSlabType *getIfcSlabType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSlabType(IfcSlabType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSlabType > createIfcSlabType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSlabType *cloneIfcSlabType(const IfcSlabType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSlippageConnectionCondition *getIfcSlippageConnectionCondition(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSlippageConnectionCondition > createIfcSlippageConnectionCondition(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSlippageConnectionCondition *cloneIfcSlippageConnectionCondition(const IfcSlippageConnectionCondition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSoundProperties *getIfcSoundProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSoundProperties(IfcSoundProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSoundProperties > createIfcSoundProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSoundProperties *cloneIfcSoundProperties(const IfcSoundProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSoundValue *getIfcSoundValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSoundValue(IfcSoundValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSoundValue > createIfcSoundValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSoundValue *cloneIfcSoundValue(const IfcSoundValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSpace *getIfcSpace(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSpace(IfcSpace *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSpace > createIfcSpace(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSpace *cloneIfcSpace(const IfcSpace &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSpaceHeaterType *getIfcSpaceHeaterType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSpaceHeaterType(IfcSpaceHeaterType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSpaceHeaterType > createIfcSpaceHeaterType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSpaceHeaterType *cloneIfcSpaceHeaterType(const IfcSpaceHeaterType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSpaceProgram *getIfcSpaceProgram(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSpaceProgram(IfcSpaceProgram *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSpaceProgram > createIfcSpaceProgram(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSpaceProgram *cloneIfcSpaceProgram(const IfcSpaceProgram &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSpaceThermalLoadProperties *getIfcSpaceThermalLoadProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSpaceThermalLoadProperties > createIfcSpaceThermalLoadProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSpaceThermalLoadProperties *cloneIfcSpaceThermalLoadProperties(const IfcSpaceThermalLoadProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSpaceType *getIfcSpaceType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSpaceType(IfcSpaceType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSpaceType > createIfcSpaceType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSpaceType *cloneIfcSpaceType(const IfcSpaceType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSphere *getIfcSphere(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSphere(IfcSphere *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSphere > createIfcSphere(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSphere *cloneIfcSphere(const IfcSphere &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStackTerminalType *getIfcStackTerminalType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStackTerminalType(IfcStackTerminalType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStackTerminalType > createIfcStackTerminalType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStackTerminalType *cloneIfcStackTerminalType(const IfcStackTerminalType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStair *getIfcStair(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStair(IfcStair *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStair > createIfcStair(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStair *cloneIfcStair(const IfcStair &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStairFlight *getIfcStairFlight(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStairFlight(IfcStairFlight *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStairFlight > createIfcStairFlight(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStairFlight *cloneIfcStairFlight(const IfcStairFlight &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStairFlightType *getIfcStairFlightType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStairFlightType(IfcStairFlightType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStairFlightType > createIfcStairFlightType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStairFlightType *cloneIfcStairFlightType(const IfcStairFlightType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralAnalysisModel *getIfcStructuralAnalysisModel(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralAnalysisModel > createIfcStructuralAnalysisModel(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralAnalysisModel *cloneIfcStructuralAnalysisModel(const IfcStructuralAnalysisModel &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralCurveConnection *getIfcStructuralCurveConnection(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralCurveConnection(IfcStructuralCurveConnection *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralCurveConnection > createIfcStructuralCurveConnection(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralCurveConnection *cloneIfcStructuralCurveConnection(const IfcStructuralCurveConnection &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralCurveMember *getIfcStructuralCurveMember(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralCurveMember(IfcStructuralCurveMember *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralCurveMember > createIfcStructuralCurveMember(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralCurveMember *cloneIfcStructuralCurveMember(const IfcStructuralCurveMember &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralCurveMemberVarying *getIfcStructuralCurveMemberVarying(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralCurveMemberVarying > createIfcStructuralCurveMemberVarying(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralCurveMemberVarying *cloneIfcStructuralCurveMemberVarying(const IfcStructuralCurveMemberVarying &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLinearAction *getIfcStructuralLinearAction(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralLinearAction(IfcStructuralLinearAction *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralLinearAction > createIfcStructuralLinearAction(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLinearAction *cloneIfcStructuralLinearAction(const IfcStructuralLinearAction &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLinearActionVarying *getIfcStructuralLinearActionVarying(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralLinearActionVarying > createIfcStructuralLinearActionVarying(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLinearActionVarying *cloneIfcStructuralLinearActionVarying(const IfcStructuralLinearActionVarying &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoadGroup *getIfcStructuralLoadGroup(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralLoadGroup(IfcStructuralLoadGroup *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralLoadGroup > createIfcStructuralLoadGroup(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoadGroup *cloneIfcStructuralLoadGroup(const IfcStructuralLoadGroup &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoadLinearForce *getIfcStructuralLoadLinearForce(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralLoadLinearForce > createIfcStructuralLoadLinearForce(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoadLinearForce *cloneIfcStructuralLoadLinearForce(const IfcStructuralLoadLinearForce &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoadPlanarForce *getIfcStructuralLoadPlanarForce(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralLoadPlanarForce > createIfcStructuralLoadPlanarForce(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoadPlanarForce *cloneIfcStructuralLoadPlanarForce(const IfcStructuralLoadPlanarForce &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoadSingleDisplacement *getIfcStructuralLoadSingleDisplacement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralLoadSingleDisplacement > createIfcStructuralLoadSingleDisplacement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoadSingleDisplacement *cloneIfcStructuralLoadSingleDisplacement(const IfcStructuralLoadSingleDisplacement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoadSingleDisplacementDistortion *getIfcStructuralLoadSingleDisplacementDistortion(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralLoadSingleDisplacementDistortion > createIfcStructuralLoadSingleDisplacementDistortion(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoadSingleDisplacementDistortion *cloneIfcStructuralLoadSingleDisplacementDistortion(const IfcStructuralLoadSingleDisplacementDistortion &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoadSingleForce *getIfcStructuralLoadSingleForce(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralLoadSingleForce > createIfcStructuralLoadSingleForce(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoadSingleForce *cloneIfcStructuralLoadSingleForce(const IfcStructuralLoadSingleForce &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoadSingleForceWarping *getIfcStructuralLoadSingleForceWarping(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralLoadSingleForceWarping > createIfcStructuralLoadSingleForceWarping(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoadSingleForceWarping *cloneIfcStructuralLoadSingleForceWarping(const IfcStructuralLoadSingleForceWarping &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoadTemperature *getIfcStructuralLoadTemperature(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralLoadTemperature > createIfcStructuralLoadTemperature(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoadTemperature *cloneIfcStructuralLoadTemperature(const IfcStructuralLoadTemperature &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralPlanarAction *getIfcStructuralPlanarAction(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralPlanarAction(IfcStructuralPlanarAction *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralPlanarAction > createIfcStructuralPlanarAction(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralPlanarAction *cloneIfcStructuralPlanarAction(const IfcStructuralPlanarAction &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralPlanarActionVarying *getIfcStructuralPlanarActionVarying(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralPlanarActionVarying > createIfcStructuralPlanarActionVarying(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralPlanarActionVarying *cloneIfcStructuralPlanarActionVarying(const IfcStructuralPlanarActionVarying &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralPointAction *getIfcStructuralPointAction(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralPointAction(IfcStructuralPointAction *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralPointAction > createIfcStructuralPointAction(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralPointAction *cloneIfcStructuralPointAction(const IfcStructuralPointAction &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralPointConnection *getIfcStructuralPointConnection(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralPointConnection(IfcStructuralPointConnection *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralPointConnection > createIfcStructuralPointConnection(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralPointConnection *cloneIfcStructuralPointConnection(const IfcStructuralPointConnection &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralPointReaction *getIfcStructuralPointReaction(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralPointReaction(IfcStructuralPointReaction *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralPointReaction > createIfcStructuralPointReaction(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralPointReaction *cloneIfcStructuralPointReaction(const IfcStructuralPointReaction &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralProfileProperties *getIfcStructuralProfileProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralProfileProperties(IfcStructuralProfileProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralProfileProperties > createIfcStructuralProfileProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralProfileProperties *cloneIfcStructuralProfileProperties(const IfcStructuralProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralResultGroup *getIfcStructuralResultGroup(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralResultGroup(IfcStructuralResultGroup *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralResultGroup > createIfcStructuralResultGroup(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralResultGroup *cloneIfcStructuralResultGroup(const IfcStructuralResultGroup &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralSteelProfileProperties *getIfcStructuralSteelProfileProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralSteelProfileProperties > createIfcStructuralSteelProfileProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralSteelProfileProperties *cloneIfcStructuralSteelProfileProperties(const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralSurfaceConnection *getIfcStructuralSurfaceConnection(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralSurfaceConnection > createIfcStructuralSurfaceConnection(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralSurfaceConnection *cloneIfcStructuralSurfaceConnection(const IfcStructuralSurfaceConnection &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralSurfaceMember *getIfcStructuralSurfaceMember(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralSurfaceMember > createIfcStructuralSurfaceMember(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralSurfaceMember *cloneIfcStructuralSurfaceMember(const IfcStructuralSurfaceMember &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralSurfaceMemberVarying *getIfcStructuralSurfaceMemberVarying(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuralSurfaceMemberVarying > createIfcStructuralSurfaceMemberVarying(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralSurfaceMemberVarying *cloneIfcStructuralSurfaceMemberVarying(const IfcStructuralSurfaceMemberVarying &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuredDimensionCallout *getIfcStructuredDimensionCallout(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStructuredDimensionCallout > createIfcStructuredDimensionCallout(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuredDimensionCallout *cloneIfcStructuredDimensionCallout(const IfcStructuredDimensionCallout &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStyledItem *getIfcStyledItem(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStyledItem(IfcStyledItem *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStyledItem > createIfcStyledItem(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStyledItem *cloneIfcStyledItem(const IfcStyledItem &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStyledRepresentation *getIfcStyledRepresentation(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcStyledRepresentation(IfcStyledRepresentation *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcStyledRepresentation > createIfcStyledRepresentation(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcStyledRepresentation *cloneIfcStyledRepresentation(const IfcStyledRepresentation &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSubContractResource *getIfcSubContractResource(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSubContractResource(IfcSubContractResource *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSubContractResource > createIfcSubContractResource(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSubContractResource *cloneIfcSubContractResource(const IfcSubContractResource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSubedge *getIfcSubedge(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSubedge(IfcSubedge *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSubedge > createIfcSubedge(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSubedge *cloneIfcSubedge(const IfcSubedge &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurfaceCurveSweptAreaSolid *getIfcSurfaceCurveSweptAreaSolid(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSurfaceCurveSweptAreaSolid > createIfcSurfaceCurveSweptAreaSolid(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurfaceCurveSweptAreaSolid *cloneIfcSurfaceCurveSweptAreaSolid(const IfcSurfaceCurveSweptAreaSolid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurfaceOfLinearExtrusion *getIfcSurfaceOfLinearExtrusion(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSurfaceOfLinearExtrusion > createIfcSurfaceOfLinearExtrusion(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurfaceOfLinearExtrusion *cloneIfcSurfaceOfLinearExtrusion(const IfcSurfaceOfLinearExtrusion &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurfaceOfRevolution *getIfcSurfaceOfRevolution(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSurfaceOfRevolution > createIfcSurfaceOfRevolution(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurfaceOfRevolution *cloneIfcSurfaceOfRevolution(const IfcSurfaceOfRevolution &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurfaceStyle *getIfcSurfaceStyle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSurfaceStyle(IfcSurfaceStyle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSurfaceStyle > createIfcSurfaceStyle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurfaceStyle *cloneIfcSurfaceStyle(const IfcSurfaceStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurfaceStyleLighting *getIfcSurfaceStyleLighting(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSurfaceStyleLighting > createIfcSurfaceStyleLighting(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurfaceStyleLighting *cloneIfcSurfaceStyleLighting(const IfcSurfaceStyleLighting &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurfaceStyleRefraction *getIfcSurfaceStyleRefraction(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSurfaceStyleRefraction > createIfcSurfaceStyleRefraction(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurfaceStyleRefraction *cloneIfcSurfaceStyleRefraction(const IfcSurfaceStyleRefraction &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurfaceStyleRendering *getIfcSurfaceStyleRendering(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSurfaceStyleRendering > createIfcSurfaceStyleRendering(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurfaceStyleRendering *cloneIfcSurfaceStyleRendering(const IfcSurfaceStyleRendering &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurfaceStyleShading *getIfcSurfaceStyleShading(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSurfaceStyleShading(IfcSurfaceStyleShading *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSurfaceStyleShading > createIfcSurfaceStyleShading(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurfaceStyleShading *cloneIfcSurfaceStyleShading(const IfcSurfaceStyleShading &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurfaceStyleWithTextures *getIfcSurfaceStyleWithTextures(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSurfaceStyleWithTextures > createIfcSurfaceStyleWithTextures(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurfaceStyleWithTextures *cloneIfcSurfaceStyleWithTextures(const IfcSurfaceStyleWithTextures &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSweptDiskSolid *getIfcSweptDiskSolid(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSweptDiskSolid(IfcSweptDiskSolid *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSweptDiskSolid > createIfcSweptDiskSolid(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSweptDiskSolid *cloneIfcSweptDiskSolid(const IfcSweptDiskSolid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSwitchingDeviceType *getIfcSwitchingDeviceType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSwitchingDeviceType(IfcSwitchingDeviceType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSwitchingDeviceType > createIfcSwitchingDeviceType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSwitchingDeviceType *cloneIfcSwitchingDeviceType(const IfcSwitchingDeviceType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSymbolStyle *getIfcSymbolStyle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSymbolStyle(IfcSymbolStyle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSymbolStyle > createIfcSymbolStyle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSymbolStyle *cloneIfcSymbolStyle(const IfcSymbolStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSystem *getIfcSystem(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSystem(IfcSystem *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSystem > createIfcSystem(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSystem *cloneIfcSystem(const IfcSystem &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSystemFurnitureElementType *getIfcSystemFurnitureElementType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcSystemFurnitureElementType > createIfcSystemFurnitureElementType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcSystemFurnitureElementType *cloneIfcSystemFurnitureElementType(const IfcSystemFurnitureElementType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTShapeProfileDef *getIfcTShapeProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTShapeProfileDef(IfcTShapeProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTShapeProfileDef > createIfcTShapeProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTShapeProfileDef *cloneIfcTShapeProfileDef(const IfcTShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTable *getIfcTable(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTable(IfcTable *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTable > createIfcTable(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTable *cloneIfcTable(const IfcTable &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTableRow *getIfcTableRow(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTableRow(IfcTableRow *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTableRow > createIfcTableRow(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTableRow *cloneIfcTableRow(const IfcTableRow &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTankType *getIfcTankType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTankType(IfcTankType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTankType > createIfcTankType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTankType *cloneIfcTankType(const IfcTankType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTask *getIfcTask(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTask(IfcTask *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTask > createIfcTask(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTask *cloneIfcTask(const IfcTask &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTelecomAddress *getIfcTelecomAddress(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTelecomAddress(IfcTelecomAddress *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTelecomAddress > createIfcTelecomAddress(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTelecomAddress *cloneIfcTelecomAddress(const IfcTelecomAddress &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTendon *getIfcTendon(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTendon(IfcTendon *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTendon > createIfcTendon(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTendon *cloneIfcTendon(const IfcTendon &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTendonAnchor *getIfcTendonAnchor(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTendonAnchor(IfcTendonAnchor *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTendonAnchor > createIfcTendonAnchor(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTendonAnchor *cloneIfcTendonAnchor(const IfcTendonAnchor &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTerminatorSymbol *getIfcTerminatorSymbol(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTerminatorSymbol(IfcTerminatorSymbol *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTerminatorSymbol > createIfcTerminatorSymbol(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTerminatorSymbol *cloneIfcTerminatorSymbol(const IfcTerminatorSymbol &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextLiteral *getIfcTextLiteral(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTextLiteral(IfcTextLiteral *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTextLiteral > createIfcTextLiteral(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextLiteral *cloneIfcTextLiteral(const IfcTextLiteral &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextLiteralWithExtent *getIfcTextLiteralWithExtent(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTextLiteralWithExtent > createIfcTextLiteralWithExtent(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextLiteralWithExtent *cloneIfcTextLiteralWithExtent(const IfcTextLiteralWithExtent &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextStyle *getIfcTextStyle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTextStyle(IfcTextStyle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTextStyle > createIfcTextStyle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextStyle *cloneIfcTextStyle(const IfcTextStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextStyleFontModel *getIfcTextStyleFontModel(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTextStyleFontModel(IfcTextStyleFontModel *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTextStyleFontModel > createIfcTextStyleFontModel(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextStyleFontModel *cloneIfcTextStyleFontModel(const IfcTextStyleFontModel &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextStyleForDefinedFont *getIfcTextStyleForDefinedFont(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTextStyleForDefinedFont > createIfcTextStyleForDefinedFont(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextStyleForDefinedFont *cloneIfcTextStyleForDefinedFont(const IfcTextStyleForDefinedFont &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextStyleTextModel *getIfcTextStyleTextModel(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTextStyleTextModel(IfcTextStyleTextModel *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTextStyleTextModel > createIfcTextStyleTextModel(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextStyleTextModel *cloneIfcTextStyleTextModel(const IfcTextStyleTextModel &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextStyleWithBoxCharacteristics *getIfcTextStyleWithBoxCharacteristics(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTextStyleWithBoxCharacteristics > createIfcTextStyleWithBoxCharacteristics(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextStyleWithBoxCharacteristics *cloneIfcTextStyleWithBoxCharacteristics(const IfcTextStyleWithBoxCharacteristics &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextureCoordinateGenerator *getIfcTextureCoordinateGenerator(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTextureCoordinateGenerator > createIfcTextureCoordinateGenerator(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextureCoordinateGenerator *cloneIfcTextureCoordinateGenerator(const IfcTextureCoordinateGenerator &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextureMap *getIfcTextureMap(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTextureMap(IfcTextureMap *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTextureMap > createIfcTextureMap(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextureMap *cloneIfcTextureMap(const IfcTextureMap &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextureVertex *getIfcTextureVertex(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTextureVertex(IfcTextureVertex *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTextureVertex > createIfcTextureVertex(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextureVertex *cloneIfcTextureVertex(const IfcTextureVertex &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcThermalMaterialProperties *getIfcThermalMaterialProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcThermalMaterialProperties(IfcThermalMaterialProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcThermalMaterialProperties > createIfcThermalMaterialProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcThermalMaterialProperties *cloneIfcThermalMaterialProperties(const IfcThermalMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTimeSeriesReferenceRelationship *getIfcTimeSeriesReferenceRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTimeSeriesReferenceRelationship > createIfcTimeSeriesReferenceRelationship(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTimeSeriesReferenceRelationship *cloneIfcTimeSeriesReferenceRelationship(const IfcTimeSeriesReferenceRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTimeSeriesSchedule *getIfcTimeSeriesSchedule(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTimeSeriesSchedule > createIfcTimeSeriesSchedule(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTimeSeriesSchedule *cloneIfcTimeSeriesSchedule(const IfcTimeSeriesSchedule &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTimeSeriesValue *getIfcTimeSeriesValue(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTimeSeriesValue(IfcTimeSeriesValue *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTimeSeriesValue > createIfcTimeSeriesValue(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTimeSeriesValue *cloneIfcTimeSeriesValue(const IfcTimeSeriesValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTopologyRepresentation *getIfcTopologyRepresentation(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTopologyRepresentation(IfcTopologyRepresentation *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTopologyRepresentation > createIfcTopologyRepresentation(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTopologyRepresentation *cloneIfcTopologyRepresentation(const IfcTopologyRepresentation &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTransformerType *getIfcTransformerType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTransformerType(IfcTransformerType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTransformerType > createIfcTransformerType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTransformerType *cloneIfcTransformerType(const IfcTransformerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTransportElement *getIfcTransportElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTransportElement(IfcTransportElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTransportElement > createIfcTransportElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTransportElement *cloneIfcTransportElement(const IfcTransportElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTransportElementType *getIfcTransportElementType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTransportElementType(IfcTransportElementType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTransportElementType > createIfcTransportElementType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTransportElementType *cloneIfcTransportElementType(const IfcTransportElementType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTrapeziumProfileDef *getIfcTrapeziumProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTrapeziumProfileDef > createIfcTrapeziumProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTrapeziumProfileDef *cloneIfcTrapeziumProfileDef(const IfcTrapeziumProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTrimmedCurve *getIfcTrimmedCurve(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTrimmedCurve(IfcTrimmedCurve *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTrimmedCurve > createIfcTrimmedCurve(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTrimmedCurve *cloneIfcTrimmedCurve(const IfcTrimmedCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTubeBundleType *getIfcTubeBundleType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTubeBundleType(IfcTubeBundleType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTubeBundleType > createIfcTubeBundleType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTubeBundleType *cloneIfcTubeBundleType(const IfcTubeBundleType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTwoDirectionRepeatFactor *getIfcTwoDirectionRepeatFactor(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTwoDirectionRepeatFactor > createIfcTwoDirectionRepeatFactor(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTwoDirectionRepeatFactor *cloneIfcTwoDirectionRepeatFactor(const IfcTwoDirectionRepeatFactor &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTypeObject *getIfcTypeObject(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTypeObject(IfcTypeObject *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTypeObject > createIfcTypeObject(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTypeObject *cloneIfcTypeObject(const IfcTypeObject &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTypeProduct *getIfcTypeProduct(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcTypeProduct(IfcTypeProduct *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcTypeProduct > createIfcTypeProduct(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcTypeProduct *cloneIfcTypeProduct(const IfcTypeProduct &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcUShapeProfileDef *getIfcUShapeProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcUShapeProfileDef(IfcUShapeProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcUShapeProfileDef > createIfcUShapeProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcUShapeProfileDef *cloneIfcUShapeProfileDef(const IfcUShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcUnitAssignment *getIfcUnitAssignment(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcUnitAssignment(IfcUnitAssignment *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcUnitAssignment > createIfcUnitAssignment(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcUnitAssignment *cloneIfcUnitAssignment(const IfcUnitAssignment &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcUnitaryEquipmentType *getIfcUnitaryEquipmentType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcUnitaryEquipmentType > createIfcUnitaryEquipmentType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcUnitaryEquipmentType *cloneIfcUnitaryEquipmentType(const IfcUnitaryEquipmentType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcValveType *getIfcValveType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcValveType(IfcValveType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcValveType > createIfcValveType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcValveType *cloneIfcValveType(const IfcValveType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcVector *getIfcVector(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcVector(IfcVector *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcVector > createIfcVector(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcVector *cloneIfcVector(const IfcVector &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcVertex *getIfcVertex(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcVertex(IfcVertex *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcVertex > createIfcVertex(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcVertex *cloneIfcVertex(const IfcVertex &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcVertexBasedTextureMap *getIfcVertexBasedTextureMap(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcVertexBasedTextureMap > createIfcVertexBasedTextureMap(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcVertexBasedTextureMap *cloneIfcVertexBasedTextureMap(const IfcVertexBasedTextureMap &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcVertexLoop *getIfcVertexLoop(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcVertexLoop(IfcVertexLoop *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcVertexLoop > createIfcVertexLoop(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcVertexLoop *cloneIfcVertexLoop(const IfcVertexLoop &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcVertexPoint *getIfcVertexPoint(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcVertexPoint(IfcVertexPoint *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcVertexPoint > createIfcVertexPoint(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcVertexPoint *cloneIfcVertexPoint(const IfcVertexPoint &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcVibrationIsolatorType *getIfcVibrationIsolatorType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcVibrationIsolatorType(IfcVibrationIsolatorType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcVibrationIsolatorType > createIfcVibrationIsolatorType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcVibrationIsolatorType *cloneIfcVibrationIsolatorType(const IfcVibrationIsolatorType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcVirtualElement *getIfcVirtualElement(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcVirtualElement(IfcVirtualElement *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcVirtualElement > createIfcVirtualElement(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcVirtualElement *cloneIfcVirtualElement(const IfcVirtualElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcVirtualGridIntersection *getIfcVirtualGridIntersection(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcVirtualGridIntersection(IfcVirtualGridIntersection *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcVirtualGridIntersection > createIfcVirtualGridIntersection(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcVirtualGridIntersection *cloneIfcVirtualGridIntersection(const IfcVirtualGridIntersection &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWall *getIfcWall(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcWall(IfcWall *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcWall > createIfcWall(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcWall *cloneIfcWall(const IfcWall &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWallStandardCase *getIfcWallStandardCase(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcWallStandardCase(IfcWallStandardCase *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcWallStandardCase > createIfcWallStandardCase(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcWallStandardCase *cloneIfcWallStandardCase(const IfcWallStandardCase &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWallType *getIfcWallType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcWallType(IfcWallType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcWallType > createIfcWallType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcWallType *cloneIfcWallType(const IfcWallType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWasteTerminalType *getIfcWasteTerminalType(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcWasteTerminalType(IfcWasteTerminalType *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcWasteTerminalType > createIfcWasteTerminalType(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcWasteTerminalType *cloneIfcWasteTerminalType(const IfcWasteTerminalType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWaterProperties *getIfcWaterProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcWaterProperties(IfcWaterProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcWaterProperties > createIfcWaterProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcWaterProperties *cloneIfcWaterProperties(const IfcWaterProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWindow *getIfcWindow(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcWindow(IfcWindow *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcWindow > createIfcWindow(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcWindow *cloneIfcWindow(const IfcWindow &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWindowLiningProperties *getIfcWindowLiningProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcWindowLiningProperties(IfcWindowLiningProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcWindowLiningProperties > createIfcWindowLiningProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcWindowLiningProperties *cloneIfcWindowLiningProperties(const IfcWindowLiningProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWindowPanelProperties *getIfcWindowPanelProperties(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcWindowPanelProperties(IfcWindowPanelProperties *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcWindowPanelProperties > createIfcWindowPanelProperties(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcWindowPanelProperties *cloneIfcWindowPanelProperties(const IfcWindowPanelProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWindowStyle *getIfcWindowStyle(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcWindowStyle(IfcWindowStyle *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcWindowStyle > createIfcWindowStyle(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcWindowStyle *cloneIfcWindowStyle(const IfcWindowStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWorkPlan *getIfcWorkPlan(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcWorkPlan(IfcWorkPlan *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcWorkPlan > createIfcWorkPlan(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcWorkPlan *cloneIfcWorkPlan(const IfcWorkPlan &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWorkSchedule *getIfcWorkSchedule(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcWorkSchedule(IfcWorkSchedule *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcWorkSchedule > createIfcWorkSchedule(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcWorkSchedule *cloneIfcWorkSchedule(const IfcWorkSchedule &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcZShapeProfileDef *getIfcZShapeProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcZShapeProfileDef(IfcZShapeProfileDef *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcZShapeProfileDef > createIfcZShapeProfileDef(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcZShapeProfileDef *cloneIfcZShapeProfileDef(const IfcZShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcZone *getIfcZone(Step::Id id);
        /**
         * @param arg
         */
        bool removeIfcZone(IfcZone *arg);
        /**
         * @param isVolatile
         */
        Step::RefPtr< IfcZone > createIfcZone(bool isVolatile = false);
        /**
         * @param obj
         * @param copyop
         */
        IfcZone *cloneIfcZone(const IfcZone &obj, const CopyOp &copyop);
        /**
         */
        Step::RefLinkedList< Ifc2DCompositeCurve > &getAllIfc2DCompositeCurve();
        /**
         */
        Step::RefLinkedList< IfcActionRequest > &getAllIfcActionRequest();
        /**
         */
        Step::RefLinkedList< IfcActor > &getAllIfcActor();
        /**
         */
        Step::RefLinkedList< IfcActorRole > &getAllIfcActorRole();
        /**
         */
        Step::RefLinkedList< IfcActuatorType > &getAllIfcActuatorType();
        /**
         */
        Step::RefLinkedList< IfcAddress > &getAllIfcAddress();
        /**
         */
        Step::RefLinkedList< IfcAirTerminalBoxType > &getAllIfcAirTerminalBoxType();
        /**
         */
        Step::RefLinkedList< IfcAirTerminalType > &getAllIfcAirTerminalType();
        /**
         */
        Step::RefLinkedList< IfcAirToAirHeatRecoveryType > &getAllIfcAirToAirHeatRecoveryType();
        /**
         */
        Step::RefLinkedList< IfcAlarmType > &getAllIfcAlarmType();
        /**
         */
        Step::RefLinkedList< IfcAngularDimension > &getAllIfcAngularDimension();
        /**
         */
        Step::RefLinkedList< IfcAnnotation > &getAllIfcAnnotation();
        /**
         */
        Step::RefLinkedList< IfcAnnotationCurveOccurrence > &getAllIfcAnnotationCurveOccurrence();
        /**
         */
        Step::RefLinkedList< IfcAnnotationFillArea > &getAllIfcAnnotationFillArea();
        /**
         */
        Step::RefLinkedList< IfcAnnotationFillAreaOccurrence > &getAllIfcAnnotationFillAreaOccurrence();
        /**
         */
        Step::RefLinkedList< IfcAnnotationOccurrence > &getAllIfcAnnotationOccurrence();
        /**
         */
        Step::RefLinkedList< IfcAnnotationSurface > &getAllIfcAnnotationSurface();
        /**
         */
        Step::RefLinkedList< IfcAnnotationSurfaceOccurrence > &getAllIfcAnnotationSurfaceOccurrence();
        /**
         */
        Step::RefLinkedList< IfcAnnotationSymbolOccurrence > &getAllIfcAnnotationSymbolOccurrence();
        /**
         */
        Step::RefLinkedList< IfcAnnotationTextOccurrence > &getAllIfcAnnotationTextOccurrence();
        /**
         */
        Step::RefLinkedList< IfcApplication > &getAllIfcApplication();
        /**
         */
        Step::RefLinkedList< IfcAppliedValue > &getAllIfcAppliedValue();
        /**
         */
        Step::RefLinkedList< IfcAppliedValueRelationship > &getAllIfcAppliedValueRelationship();
        /**
         */
        Step::RefLinkedList< IfcApproval > &getAllIfcApproval();
        /**
         */
        Step::RefLinkedList< IfcApprovalActorRelationship > &getAllIfcApprovalActorRelationship();
        /**
         */
        Step::RefLinkedList< IfcApprovalPropertyRelationship > &getAllIfcApprovalPropertyRelationship();
        /**
         */
        Step::RefLinkedList< IfcApprovalRelationship > &getAllIfcApprovalRelationship();
        /**
         */
        Step::RefLinkedList< IfcArbitraryClosedProfileDef > &getAllIfcArbitraryClosedProfileDef();
        /**
         */
        Step::RefLinkedList< IfcArbitraryOpenProfileDef > &getAllIfcArbitraryOpenProfileDef();
        /**
         */
        Step::RefLinkedList< IfcArbitraryProfileDefWithVoids > &getAllIfcArbitraryProfileDefWithVoids();
        /**
         */
        Step::RefLinkedList< IfcAsset > &getAllIfcAsset();
        /**
         */
        Step::RefLinkedList< IfcAsymmetricIShapeProfileDef > &getAllIfcAsymmetricIShapeProfileDef();
        /**
         */
        Step::RefLinkedList< IfcAxis1Placement > &getAllIfcAxis1Placement();
        /**
         */
        Step::RefLinkedList< IfcAxis2Placement2D > &getAllIfcAxis2Placement2D();
        /**
         */
        Step::RefLinkedList< IfcAxis2Placement3D > &getAllIfcAxis2Placement3D();
        /**
         */
        Step::RefLinkedList< IfcBSplineCurve > &getAllIfcBSplineCurve();
        /**
         */
        Step::RefLinkedList< IfcBeam > &getAllIfcBeam();
        /**
         */
        Step::RefLinkedList< IfcBeamType > &getAllIfcBeamType();
        /**
         */
        Step::RefLinkedList< IfcBezierCurve > &getAllIfcBezierCurve();
        /**
         */
        Step::RefLinkedList< IfcBlobTexture > &getAllIfcBlobTexture();
        /**
         */
        Step::RefLinkedList< IfcBlock > &getAllIfcBlock();
        /**
         */
        Step::RefLinkedList< IfcBoilerType > &getAllIfcBoilerType();
        /**
         */
        Step::RefLinkedList< IfcBooleanClippingResult > &getAllIfcBooleanClippingResult();
        /**
         */
        Step::RefLinkedList< IfcBooleanResult > &getAllIfcBooleanResult();
        /**
         */
        Step::RefLinkedList< IfcBoundaryCondition > &getAllIfcBoundaryCondition();
        /**
         */
        Step::RefLinkedList< IfcBoundaryEdgeCondition > &getAllIfcBoundaryEdgeCondition();
        /**
         */
        Step::RefLinkedList< IfcBoundaryFaceCondition > &getAllIfcBoundaryFaceCondition();
        /**
         */
        Step::RefLinkedList< IfcBoundaryNodeCondition > &getAllIfcBoundaryNodeCondition();
        /**
         */
        Step::RefLinkedList< IfcBoundaryNodeConditionWarping > &getAllIfcBoundaryNodeConditionWarping();
        /**
         */
        Step::RefLinkedList< IfcBoundedCurve > &getAllIfcBoundedCurve();
        /**
         */
        Step::RefLinkedList< IfcBoundedSurface > &getAllIfcBoundedSurface();
        /**
         */
        Step::RefLinkedList< IfcBoundingBox > &getAllIfcBoundingBox();
        /**
         */
        Step::RefLinkedList< IfcBoxedHalfSpace > &getAllIfcBoxedHalfSpace();
        /**
         */
        Step::RefLinkedList< IfcBuilding > &getAllIfcBuilding();
        /**
         */
        Step::RefLinkedList< IfcBuildingElement > &getAllIfcBuildingElement();
        /**
         */
        Step::RefLinkedList< IfcBuildingElementComponent > &getAllIfcBuildingElementComponent();
        /**
         */
        Step::RefLinkedList< IfcBuildingElementPart > &getAllIfcBuildingElementPart();
        /**
         */
        Step::RefLinkedList< IfcBuildingElementProxy > &getAllIfcBuildingElementProxy();
        /**
         */
        Step::RefLinkedList< IfcBuildingElementProxyType > &getAllIfcBuildingElementProxyType();
        /**
         */
        Step::RefLinkedList< IfcBuildingElementType > &getAllIfcBuildingElementType();
        /**
         */
        Step::RefLinkedList< IfcBuildingStorey > &getAllIfcBuildingStorey();
        /**
         */
        Step::RefLinkedList< IfcCShapeProfileDef > &getAllIfcCShapeProfileDef();
        /**
         */
        Step::RefLinkedList< IfcCableCarrierFittingType > &getAllIfcCableCarrierFittingType();
        /**
         */
        Step::RefLinkedList< IfcCableCarrierSegmentType > &getAllIfcCableCarrierSegmentType();
        /**
         */
        Step::RefLinkedList< IfcCableSegmentType > &getAllIfcCableSegmentType();
        /**
         */
        Step::RefLinkedList< IfcCalendarDate > &getAllIfcCalendarDate();
        /**
         */
        Step::RefLinkedList< IfcCartesianPoint > &getAllIfcCartesianPoint();
        /**
         */
        Step::RefLinkedList< IfcCartesianTransformationOperator > &getAllIfcCartesianTransformationOperator();
        /**
         */
        Step::RefLinkedList< IfcCartesianTransformationOperator2D > &getAllIfcCartesianTransformationOperator2D();
        /**
         */
        Step::RefLinkedList< IfcCartesianTransformationOperator2DnonUniform > &getAllIfcCartesianTransformationOperator2DnonUniform();
        /**
         */
        Step::RefLinkedList< IfcCartesianTransformationOperator3D > &getAllIfcCartesianTransformationOperator3D();
        /**
         */
        Step::RefLinkedList< IfcCartesianTransformationOperator3DnonUniform > &getAllIfcCartesianTransformationOperator3DnonUniform();
        /**
         */
        Step::RefLinkedList< IfcCenterLineProfileDef > &getAllIfcCenterLineProfileDef();
        /**
         */
        Step::RefLinkedList< IfcChamferEdgeFeature > &getAllIfcChamferEdgeFeature();
        /**
         */
        Step::RefLinkedList< IfcChillerType > &getAllIfcChillerType();
        /**
         */
        Step::RefLinkedList< IfcCircle > &getAllIfcCircle();
        /**
         */
        Step::RefLinkedList< IfcCircleHollowProfileDef > &getAllIfcCircleHollowProfileDef();
        /**
         */
        Step::RefLinkedList< IfcCircleProfileDef > &getAllIfcCircleProfileDef();
        /**
         */
        Step::RefLinkedList< IfcClassification > &getAllIfcClassification();
        /**
         */
        Step::RefLinkedList< IfcClassificationItem > &getAllIfcClassificationItem();
        /**
         */
        Step::RefLinkedList< IfcClassificationItemRelationship > &getAllIfcClassificationItemRelationship();
        /**
         */
        Step::RefLinkedList< IfcClassificationNotation > &getAllIfcClassificationNotation();
        /**
         */
        Step::RefLinkedList< IfcClassificationNotationFacet > &getAllIfcClassificationNotationFacet();
        /**
         */
        Step::RefLinkedList< IfcClassificationReference > &getAllIfcClassificationReference();
        /**
         */
        Step::RefLinkedList< IfcClosedShell > &getAllIfcClosedShell();
        /**
         */
        Step::RefLinkedList< IfcCoilType > &getAllIfcCoilType();
        /**
         */
        Step::RefLinkedList< IfcColourRgb > &getAllIfcColourRgb();
        /**
         */
        Step::RefLinkedList< IfcColourSpecification > &getAllIfcColourSpecification();
        /**
         */
        Step::RefLinkedList< IfcColumn > &getAllIfcColumn();
        /**
         */
        Step::RefLinkedList< IfcColumnType > &getAllIfcColumnType();
        /**
         */
        Step::RefLinkedList< IfcComplexProperty > &getAllIfcComplexProperty();
        /**
         */
        Step::RefLinkedList< IfcCompositeCurve > &getAllIfcCompositeCurve();
        /**
         */
        Step::RefLinkedList< IfcCompositeCurveSegment > &getAllIfcCompositeCurveSegment();
        /**
         */
        Step::RefLinkedList< IfcCompositeProfileDef > &getAllIfcCompositeProfileDef();
        /**
         */
        Step::RefLinkedList< IfcCompressorType > &getAllIfcCompressorType();
        /**
         */
        Step::RefLinkedList< IfcCondenserType > &getAllIfcCondenserType();
        /**
         */
        Step::RefLinkedList< IfcCondition > &getAllIfcCondition();
        /**
         */
        Step::RefLinkedList< IfcConditionCriterion > &getAllIfcConditionCriterion();
        /**
         */
        Step::RefLinkedList< IfcConic > &getAllIfcConic();
        /**
         */
        Step::RefLinkedList< IfcConnectedFaceSet > &getAllIfcConnectedFaceSet();
        /**
         */
        Step::RefLinkedList< IfcConnectionCurveGeometry > &getAllIfcConnectionCurveGeometry();
        /**
         */
        Step::RefLinkedList< IfcConnectionGeometry > &getAllIfcConnectionGeometry();
        /**
         */
        Step::RefLinkedList< IfcConnectionPointEccentricity > &getAllIfcConnectionPointEccentricity();
        /**
         */
        Step::RefLinkedList< IfcConnectionPointGeometry > &getAllIfcConnectionPointGeometry();
        /**
         */
        Step::RefLinkedList< IfcConnectionPortGeometry > &getAllIfcConnectionPortGeometry();
        /**
         */
        Step::RefLinkedList< IfcConnectionSurfaceGeometry > &getAllIfcConnectionSurfaceGeometry();
        /**
         */
        Step::RefLinkedList< IfcConstraint > &getAllIfcConstraint();
        /**
         */
        Step::RefLinkedList< IfcConstraintAggregationRelationship > &getAllIfcConstraintAggregationRelationship();
        /**
         */
        Step::RefLinkedList< IfcConstraintClassificationRelationship > &getAllIfcConstraintClassificationRelationship();
        /**
         */
        Step::RefLinkedList< IfcConstraintRelationship > &getAllIfcConstraintRelationship();
        /**
         */
        Step::RefLinkedList< IfcConstructionEquipmentResource > &getAllIfcConstructionEquipmentResource();
        /**
         */
        Step::RefLinkedList< IfcConstructionMaterialResource > &getAllIfcConstructionMaterialResource();
        /**
         */
        Step::RefLinkedList< IfcConstructionProductResource > &getAllIfcConstructionProductResource();
        /**
         */
        Step::RefLinkedList< IfcConstructionResource > &getAllIfcConstructionResource();
        /**
         */
        Step::RefLinkedList< IfcContextDependentUnit > &getAllIfcContextDependentUnit();
        /**
         */
        Step::RefLinkedList< IfcControl > &getAllIfcControl();
        /**
         */
        Step::RefLinkedList< IfcControllerType > &getAllIfcControllerType();
        /**
         */
        Step::RefLinkedList< IfcConversionBasedUnit > &getAllIfcConversionBasedUnit();
        /**
         */
        Step::RefLinkedList< IfcCooledBeamType > &getAllIfcCooledBeamType();
        /**
         */
        Step::RefLinkedList< IfcCoolingTowerType > &getAllIfcCoolingTowerType();
        /**
         */
        Step::RefLinkedList< IfcCoordinatedUniversalTimeOffset > &getAllIfcCoordinatedUniversalTimeOffset();
        /**
         */
        Step::RefLinkedList< IfcCostItem > &getAllIfcCostItem();
        /**
         */
        Step::RefLinkedList< IfcCostSchedule > &getAllIfcCostSchedule();
        /**
         */
        Step::RefLinkedList< IfcCostValue > &getAllIfcCostValue();
        /**
         */
        Step::RefLinkedList< IfcCovering > &getAllIfcCovering();
        /**
         */
        Step::RefLinkedList< IfcCoveringType > &getAllIfcCoveringType();
        /**
         */
        Step::RefLinkedList< IfcCraneRailAShapeProfileDef > &getAllIfcCraneRailAShapeProfileDef();
        /**
         */
        Step::RefLinkedList< IfcCraneRailFShapeProfileDef > &getAllIfcCraneRailFShapeProfileDef();
        /**
         */
        Step::RefLinkedList< IfcCrewResource > &getAllIfcCrewResource();
        /**
         */
        Step::RefLinkedList< IfcCsgPrimitive3D > &getAllIfcCsgPrimitive3D();
        /**
         */
        Step::RefLinkedList< IfcCsgSolid > &getAllIfcCsgSolid();
        /**
         */
        Step::RefLinkedList< IfcCurrencyRelationship > &getAllIfcCurrencyRelationship();
        /**
         */
        Step::RefLinkedList< IfcCurtainWall > &getAllIfcCurtainWall();
        /**
         */
        Step::RefLinkedList< IfcCurtainWallType > &getAllIfcCurtainWallType();
        /**
         */
        Step::RefLinkedList< IfcCurve > &getAllIfcCurve();
        /**
         */
        Step::RefLinkedList< IfcCurveBoundedPlane > &getAllIfcCurveBoundedPlane();
        /**
         */
        Step::RefLinkedList< IfcCurveStyle > &getAllIfcCurveStyle();
        /**
         */
        Step::RefLinkedList< IfcCurveStyleFont > &getAllIfcCurveStyleFont();
        /**
         */
        Step::RefLinkedList< IfcCurveStyleFontAndScaling > &getAllIfcCurveStyleFontAndScaling();
        /**
         */
        Step::RefLinkedList< IfcCurveStyleFontPattern > &getAllIfcCurveStyleFontPattern();
        /**
         */
        Step::RefLinkedList< IfcDamperType > &getAllIfcDamperType();
        /**
         */
        Step::RefLinkedList< IfcDateAndTime > &getAllIfcDateAndTime();
        /**
         */
        Step::RefLinkedList< IfcDefinedSymbol > &getAllIfcDefinedSymbol();
        /**
         */
        Step::RefLinkedList< IfcDerivedProfileDef > &getAllIfcDerivedProfileDef();
        /**
         */
        Step::RefLinkedList< IfcDerivedUnit > &getAllIfcDerivedUnit();
        /**
         */
        Step::RefLinkedList< IfcDerivedUnitElement > &getAllIfcDerivedUnitElement();
        /**
         */
        Step::RefLinkedList< IfcDiameterDimension > &getAllIfcDiameterDimension();
        /**
         */
        Step::RefLinkedList< IfcDimensionCalloutRelationship > &getAllIfcDimensionCalloutRelationship();
        /**
         */
        Step::RefLinkedList< IfcDimensionCurve > &getAllIfcDimensionCurve();
        /**
         */
        Step::RefLinkedList< IfcDimensionCurveDirectedCallout > &getAllIfcDimensionCurveDirectedCallout();
        /**
         */
        Step::RefLinkedList< IfcDimensionCurveTerminator > &getAllIfcDimensionCurveTerminator();
        /**
         */
        Step::RefLinkedList< IfcDimensionPair > &getAllIfcDimensionPair();
        /**
         */
        Step::RefLinkedList< IfcDimensionalExponents > &getAllIfcDimensionalExponents();
        /**
         */
        Step::RefLinkedList< IfcDirection > &getAllIfcDirection();
        /**
         */
        Step::RefLinkedList< IfcDiscreteAccessory > &getAllIfcDiscreteAccessory();
        /**
         */
        Step::RefLinkedList< IfcDiscreteAccessoryType > &getAllIfcDiscreteAccessoryType();
        /**
         */
        Step::RefLinkedList< IfcDistributionChamberElement > &getAllIfcDistributionChamberElement();
        /**
         */
        Step::RefLinkedList< IfcDistributionChamberElementType > &getAllIfcDistributionChamberElementType();
        /**
         */
        Step::RefLinkedList< IfcDistributionControlElement > &getAllIfcDistributionControlElement();
        /**
         */
        Step::RefLinkedList< IfcDistributionControlElementType > &getAllIfcDistributionControlElementType();
        /**
         */
        Step::RefLinkedList< IfcDistributionElement > &getAllIfcDistributionElement();
        /**
         */
        Step::RefLinkedList< IfcDistributionElementType > &getAllIfcDistributionElementType();
        /**
         */
        Step::RefLinkedList< IfcDistributionFlowElement > &getAllIfcDistributionFlowElement();
        /**
         */
        Step::RefLinkedList< IfcDistributionFlowElementType > &getAllIfcDistributionFlowElementType();
        /**
         */
        Step::RefLinkedList< IfcDistributionPort > &getAllIfcDistributionPort();
        /**
         */
        Step::RefLinkedList< IfcDocumentElectronicFormat > &getAllIfcDocumentElectronicFormat();
        /**
         */
        Step::RefLinkedList< IfcDocumentInformation > &getAllIfcDocumentInformation();
        /**
         */
        Step::RefLinkedList< IfcDocumentInformationRelationship > &getAllIfcDocumentInformationRelationship();
        /**
         */
        Step::RefLinkedList< IfcDocumentReference > &getAllIfcDocumentReference();
        /**
         */
        Step::RefLinkedList< IfcDoor > &getAllIfcDoor();
        /**
         */
        Step::RefLinkedList< IfcDoorLiningProperties > &getAllIfcDoorLiningProperties();
        /**
         */
        Step::RefLinkedList< IfcDoorPanelProperties > &getAllIfcDoorPanelProperties();
        /**
         */
        Step::RefLinkedList< IfcDoorStyle > &getAllIfcDoorStyle();
        /**
         */
        Step::RefLinkedList< IfcDraughtingCallout > &getAllIfcDraughtingCallout();
        /**
         */
        Step::RefLinkedList< IfcDraughtingCalloutRelationship > &getAllIfcDraughtingCalloutRelationship();
        /**
         */
        Step::RefLinkedList< IfcDraughtingPreDefinedColour > &getAllIfcDraughtingPreDefinedColour();
        /**
         */
        Step::RefLinkedList< IfcDraughtingPreDefinedCurveFont > &getAllIfcDraughtingPreDefinedCurveFont();
        /**
         */
        Step::RefLinkedList< IfcDraughtingPreDefinedTextFont > &getAllIfcDraughtingPreDefinedTextFont();
        /**
         */
        Step::RefLinkedList< IfcDuctFittingType > &getAllIfcDuctFittingType();
        /**
         */
        Step::RefLinkedList< IfcDuctSegmentType > &getAllIfcDuctSegmentType();
        /**
         */
        Step::RefLinkedList< IfcDuctSilencerType > &getAllIfcDuctSilencerType();
        /**
         */
        Step::RefLinkedList< IfcEdge > &getAllIfcEdge();
        /**
         */
        Step::RefLinkedList< IfcEdgeCurve > &getAllIfcEdgeCurve();
        /**
         */
        Step::RefLinkedList< IfcEdgeFeature > &getAllIfcEdgeFeature();
        /**
         */
        Step::RefLinkedList< IfcEdgeLoop > &getAllIfcEdgeLoop();
        /**
         */
        Step::RefLinkedList< IfcElectricApplianceType > &getAllIfcElectricApplianceType();
        /**
         */
        Step::RefLinkedList< IfcElectricDistributionPoint > &getAllIfcElectricDistributionPoint();
        /**
         */
        Step::RefLinkedList< IfcElectricFlowStorageDeviceType > &getAllIfcElectricFlowStorageDeviceType();
        /**
         */
        Step::RefLinkedList< IfcElectricGeneratorType > &getAllIfcElectricGeneratorType();
        /**
         */
        Step::RefLinkedList< IfcElectricHeaterType > &getAllIfcElectricHeaterType();
        /**
         */
        Step::RefLinkedList< IfcElectricMotorType > &getAllIfcElectricMotorType();
        /**
         */
        Step::RefLinkedList< IfcElectricTimeControlType > &getAllIfcElectricTimeControlType();
        /**
         */
        Step::RefLinkedList< IfcElectricalBaseProperties > &getAllIfcElectricalBaseProperties();
        /**
         */
        Step::RefLinkedList< IfcElectricalCircuit > &getAllIfcElectricalCircuit();
        /**
         */
        Step::RefLinkedList< IfcElectricalElement > &getAllIfcElectricalElement();
        /**
         */
        Step::RefLinkedList< IfcElement > &getAllIfcElement();
        /**
         */
        Step::RefLinkedList< IfcElementAssembly > &getAllIfcElementAssembly();
        /**
         */
        Step::RefLinkedList< IfcElementComponent > &getAllIfcElementComponent();
        /**
         */
        Step::RefLinkedList< IfcElementComponentType > &getAllIfcElementComponentType();
        /**
         */
        Step::RefLinkedList< IfcElementQuantity > &getAllIfcElementQuantity();
        /**
         */
        Step::RefLinkedList< IfcElementType > &getAllIfcElementType();
        /**
         */
        Step::RefLinkedList< IfcElementarySurface > &getAllIfcElementarySurface();
        /**
         */
        Step::RefLinkedList< IfcEllipse > &getAllIfcEllipse();
        /**
         */
        Step::RefLinkedList< IfcEllipseProfileDef > &getAllIfcEllipseProfileDef();
        /**
         */
        Step::RefLinkedList< IfcEnergyConversionDevice > &getAllIfcEnergyConversionDevice();
        /**
         */
        Step::RefLinkedList< IfcEnergyConversionDeviceType > &getAllIfcEnergyConversionDeviceType();
        /**
         */
        Step::RefLinkedList< IfcEnergyProperties > &getAllIfcEnergyProperties();
        /**
         */
        Step::RefLinkedList< IfcEnvironmentalImpactValue > &getAllIfcEnvironmentalImpactValue();
        /**
         */
        Step::RefLinkedList< IfcEquipmentElement > &getAllIfcEquipmentElement();
        /**
         */
        Step::RefLinkedList< IfcEquipmentStandard > &getAllIfcEquipmentStandard();
        /**
         */
        Step::RefLinkedList< IfcEvaporativeCoolerType > &getAllIfcEvaporativeCoolerType();
        /**
         */
        Step::RefLinkedList< IfcEvaporatorType > &getAllIfcEvaporatorType();
        /**
         */
        Step::RefLinkedList< IfcExtendedMaterialProperties > &getAllIfcExtendedMaterialProperties();
        /**
         */
        Step::RefLinkedList< IfcExternalReference > &getAllIfcExternalReference();
        /**
         */
        Step::RefLinkedList< IfcExternallyDefinedHatchStyle > &getAllIfcExternallyDefinedHatchStyle();
        /**
         */
        Step::RefLinkedList< IfcExternallyDefinedSurfaceStyle > &getAllIfcExternallyDefinedSurfaceStyle();
        /**
         */
        Step::RefLinkedList< IfcExternallyDefinedSymbol > &getAllIfcExternallyDefinedSymbol();
        /**
         */
        Step::RefLinkedList< IfcExternallyDefinedTextFont > &getAllIfcExternallyDefinedTextFont();
        /**
         */
        Step::RefLinkedList< IfcExtrudedAreaSolid > &getAllIfcExtrudedAreaSolid();
        /**
         */
        Step::RefLinkedList< IfcFace > &getAllIfcFace();
        /**
         */
        Step::RefLinkedList< IfcFaceBasedSurfaceModel > &getAllIfcFaceBasedSurfaceModel();
        /**
         */
        Step::RefLinkedList< IfcFaceBound > &getAllIfcFaceBound();
        /**
         */
        Step::RefLinkedList< IfcFaceOuterBound > &getAllIfcFaceOuterBound();
        /**
         */
        Step::RefLinkedList< IfcFaceSurface > &getAllIfcFaceSurface();
        /**
         */
        Step::RefLinkedList< IfcFacetedBrep > &getAllIfcFacetedBrep();
        /**
         */
        Step::RefLinkedList< IfcFacetedBrepWithVoids > &getAllIfcFacetedBrepWithVoids();
        /**
         */
        Step::RefLinkedList< IfcFailureConnectionCondition > &getAllIfcFailureConnectionCondition();
        /**
         */
        Step::RefLinkedList< IfcFanType > &getAllIfcFanType();
        /**
         */
        Step::RefLinkedList< IfcFastener > &getAllIfcFastener();
        /**
         */
        Step::RefLinkedList< IfcFastenerType > &getAllIfcFastenerType();
        /**
         */
        Step::RefLinkedList< IfcFeatureElement > &getAllIfcFeatureElement();
        /**
         */
        Step::RefLinkedList< IfcFeatureElementAddition > &getAllIfcFeatureElementAddition();
        /**
         */
        Step::RefLinkedList< IfcFeatureElementSubtraction > &getAllIfcFeatureElementSubtraction();
        /**
         */
        Step::RefLinkedList< IfcFillAreaStyle > &getAllIfcFillAreaStyle();
        /**
         */
        Step::RefLinkedList< IfcFillAreaStyleHatching > &getAllIfcFillAreaStyleHatching();
        /**
         */
        Step::RefLinkedList< IfcFillAreaStyleTileSymbolWithStyle > &getAllIfcFillAreaStyleTileSymbolWithStyle();
        /**
         */
        Step::RefLinkedList< IfcFillAreaStyleTiles > &getAllIfcFillAreaStyleTiles();
        /**
         */
        Step::RefLinkedList< IfcFilterType > &getAllIfcFilterType();
        /**
         */
        Step::RefLinkedList< IfcFireSuppressionTerminalType > &getAllIfcFireSuppressionTerminalType();
        /**
         */
        Step::RefLinkedList< IfcFlowController > &getAllIfcFlowController();
        /**
         */
        Step::RefLinkedList< IfcFlowControllerType > &getAllIfcFlowControllerType();
        /**
         */
        Step::RefLinkedList< IfcFlowFitting > &getAllIfcFlowFitting();
        /**
         */
        Step::RefLinkedList< IfcFlowFittingType > &getAllIfcFlowFittingType();
        /**
         */
        Step::RefLinkedList< IfcFlowInstrumentType > &getAllIfcFlowInstrumentType();
        /**
         */
        Step::RefLinkedList< IfcFlowMeterType > &getAllIfcFlowMeterType();
        /**
         */
        Step::RefLinkedList< IfcFlowMovingDevice > &getAllIfcFlowMovingDevice();
        /**
         */
        Step::RefLinkedList< IfcFlowMovingDeviceType > &getAllIfcFlowMovingDeviceType();
        /**
         */
        Step::RefLinkedList< IfcFlowSegment > &getAllIfcFlowSegment();
        /**
         */
        Step::RefLinkedList< IfcFlowSegmentType > &getAllIfcFlowSegmentType();
        /**
         */
        Step::RefLinkedList< IfcFlowStorageDevice > &getAllIfcFlowStorageDevice();
        /**
         */
        Step::RefLinkedList< IfcFlowStorageDeviceType > &getAllIfcFlowStorageDeviceType();
        /**
         */
        Step::RefLinkedList< IfcFlowTerminal > &getAllIfcFlowTerminal();
        /**
         */
        Step::RefLinkedList< IfcFlowTerminalType > &getAllIfcFlowTerminalType();
        /**
         */
        Step::RefLinkedList< IfcFlowTreatmentDevice > &getAllIfcFlowTreatmentDevice();
        /**
         */
        Step::RefLinkedList< IfcFlowTreatmentDeviceType > &getAllIfcFlowTreatmentDeviceType();
        /**
         */
        Step::RefLinkedList< IfcFluidFlowProperties > &getAllIfcFluidFlowProperties();
        /**
         */
        Step::RefLinkedList< IfcFooting > &getAllIfcFooting();
        /**
         */
        Step::RefLinkedList< IfcFuelProperties > &getAllIfcFuelProperties();
        /**
         */
        Step::RefLinkedList< IfcFurnishingElement > &getAllIfcFurnishingElement();
        /**
         */
        Step::RefLinkedList< IfcFurnishingElementType > &getAllIfcFurnishingElementType();
        /**
         */
        Step::RefLinkedList< IfcFurnitureStandard > &getAllIfcFurnitureStandard();
        /**
         */
        Step::RefLinkedList< IfcFurnitureType > &getAllIfcFurnitureType();
        /**
         */
        Step::RefLinkedList< IfcGasTerminalType > &getAllIfcGasTerminalType();
        /**
         */
        Step::RefLinkedList< IfcGeneralMaterialProperties > &getAllIfcGeneralMaterialProperties();
        /**
         */
        Step::RefLinkedList< IfcGeneralProfileProperties > &getAllIfcGeneralProfileProperties();
        /**
         */
        Step::RefLinkedList< IfcGeometricCurveSet > &getAllIfcGeometricCurveSet();
        /**
         */
        Step::RefLinkedList< IfcGeometricRepresentationContext > &getAllIfcGeometricRepresentationContext();
        /**
         */
        Step::RefLinkedList< IfcGeometricRepresentationItem > &getAllIfcGeometricRepresentationItem();
        /**
         */
        Step::RefLinkedList< IfcGeometricRepresentationSubContext > &getAllIfcGeometricRepresentationSubContext();
        /**
         */
        Step::RefLinkedList< IfcGeometricSet > &getAllIfcGeometricSet();
        /**
         */
        Step::RefLinkedList< IfcGrid > &getAllIfcGrid();
        /**
         */
        Step::RefLinkedList< IfcGridAxis > &getAllIfcGridAxis();
        /**
         */
        Step::RefLinkedList< IfcGridPlacement > &getAllIfcGridPlacement();
        /**
         */
        Step::RefLinkedList< IfcGroup > &getAllIfcGroup();
        /**
         */
        Step::RefLinkedList< IfcHalfSpaceSolid > &getAllIfcHalfSpaceSolid();
        /**
         */
        Step::RefLinkedList< IfcHeatExchangerType > &getAllIfcHeatExchangerType();
        /**
         */
        Step::RefLinkedList< IfcHumidifierType > &getAllIfcHumidifierType();
        /**
         */
        Step::RefLinkedList< IfcHygroscopicMaterialProperties > &getAllIfcHygroscopicMaterialProperties();
        /**
         */
        Step::RefLinkedList< IfcIShapeProfileDef > &getAllIfcIShapeProfileDef();
        /**
         */
        Step::RefLinkedList< IfcImageTexture > &getAllIfcImageTexture();
        /**
         */
        Step::RefLinkedList< IfcInventory > &getAllIfcInventory();
        /**
         */
        Step::RefLinkedList< IfcIrregularTimeSeries > &getAllIfcIrregularTimeSeries();
        /**
         */
        Step::RefLinkedList< IfcIrregularTimeSeriesValue > &getAllIfcIrregularTimeSeriesValue();
        /**
         */
        Step::RefLinkedList< IfcJunctionBoxType > &getAllIfcJunctionBoxType();
        /**
         */
        Step::RefLinkedList< IfcLShapeProfileDef > &getAllIfcLShapeProfileDef();
        /**
         */
        Step::RefLinkedList< IfcLaborResource > &getAllIfcLaborResource();
        /**
         */
        Step::RefLinkedList< IfcLampType > &getAllIfcLampType();
        /**
         */
        Step::RefLinkedList< IfcLibraryInformation > &getAllIfcLibraryInformation();
        /**
         */
        Step::RefLinkedList< IfcLibraryReference > &getAllIfcLibraryReference();
        /**
         */
        Step::RefLinkedList< IfcLightDistributionData > &getAllIfcLightDistributionData();
        /**
         */
        Step::RefLinkedList< IfcLightFixtureType > &getAllIfcLightFixtureType();
        /**
         */
        Step::RefLinkedList< IfcLightIntensityDistribution > &getAllIfcLightIntensityDistribution();
        /**
         */
        Step::RefLinkedList< IfcLightSource > &getAllIfcLightSource();
        /**
         */
        Step::RefLinkedList< IfcLightSourceAmbient > &getAllIfcLightSourceAmbient();
        /**
         */
        Step::RefLinkedList< IfcLightSourceDirectional > &getAllIfcLightSourceDirectional();
        /**
         */
        Step::RefLinkedList< IfcLightSourceGoniometric > &getAllIfcLightSourceGoniometric();
        /**
         */
        Step::RefLinkedList< IfcLightSourcePositional > &getAllIfcLightSourcePositional();
        /**
         */
        Step::RefLinkedList< IfcLightSourceSpot > &getAllIfcLightSourceSpot();
        /**
         */
        Step::RefLinkedList< IfcLine > &getAllIfcLine();
        /**
         */
        Step::RefLinkedList< IfcLinearDimension > &getAllIfcLinearDimension();
        /**
         */
        Step::RefLinkedList< IfcLocalPlacement > &getAllIfcLocalPlacement();
        /**
         */
        Step::RefLinkedList< IfcLocalTime > &getAllIfcLocalTime();
        /**
         */
        Step::RefLinkedList< IfcLoop > &getAllIfcLoop();
        /**
         */
        Step::RefLinkedList< IfcManifoldSolidBrep > &getAllIfcManifoldSolidBrep();
        /**
         */
        Step::RefLinkedList< IfcMappedItem > &getAllIfcMappedItem();
        /**
         */
        Step::RefLinkedList< IfcMaterial > &getAllIfcMaterial();
        /**
         */
        Step::RefLinkedList< IfcMaterialClassificationRelationship > &getAllIfcMaterialClassificationRelationship();
        /**
         */
        Step::RefLinkedList< IfcMaterialDefinitionRepresentation > &getAllIfcMaterialDefinitionRepresentation();
        /**
         */
        Step::RefLinkedList< IfcMaterialLayer > &getAllIfcMaterialLayer();
        /**
         */
        Step::RefLinkedList< IfcMaterialLayerSet > &getAllIfcMaterialLayerSet();
        /**
         */
        Step::RefLinkedList< IfcMaterialLayerSetUsage > &getAllIfcMaterialLayerSetUsage();
        /**
         */
        Step::RefLinkedList< IfcMaterialList > &getAllIfcMaterialList();
        /**
         */
        Step::RefLinkedList< IfcMaterialProperties > &getAllIfcMaterialProperties();
        /**
         */
        Step::RefLinkedList< IfcMeasureWithUnit > &getAllIfcMeasureWithUnit();
        /**
         */
        Step::RefLinkedList< IfcMechanicalConcreteMaterialProperties > &getAllIfcMechanicalConcreteMaterialProperties();
        /**
         */
        Step::RefLinkedList< IfcMechanicalFastener > &getAllIfcMechanicalFastener();
        /**
         */
        Step::RefLinkedList< IfcMechanicalFastenerType > &getAllIfcMechanicalFastenerType();
        /**
         */
        Step::RefLinkedList< IfcMechanicalMaterialProperties > &getAllIfcMechanicalMaterialProperties();
        /**
         */
        Step::RefLinkedList< IfcMechanicalSteelMaterialProperties > &getAllIfcMechanicalSteelMaterialProperties();
        /**
         */
        Step::RefLinkedList< IfcMember > &getAllIfcMember();
        /**
         */
        Step::RefLinkedList< IfcMemberType > &getAllIfcMemberType();
        /**
         */
        Step::RefLinkedList< IfcMetric > &getAllIfcMetric();
        /**
         */
        Step::RefLinkedList< IfcMonetaryUnit > &getAllIfcMonetaryUnit();
        /**
         */
        Step::RefLinkedList< IfcMotorConnectionType > &getAllIfcMotorConnectionType();
        /**
         */
        Step::RefLinkedList< IfcMove > &getAllIfcMove();
        /**
         */
        Step::RefLinkedList< IfcNamedUnit > &getAllIfcNamedUnit();
        /**
         */
        Step::RefLinkedList< IfcObject > &getAllIfcObject();
        /**
         */
        Step::RefLinkedList< IfcObjectDefinition > &getAllIfcObjectDefinition();
        /**
         */
        Step::RefLinkedList< IfcObjectPlacement > &getAllIfcObjectPlacement();
        /**
         */
        Step::RefLinkedList< IfcObjective > &getAllIfcObjective();
        /**
         */
        Step::RefLinkedList< IfcOccupant > &getAllIfcOccupant();
        /**
         */
        Step::RefLinkedList< IfcOffsetCurve2D > &getAllIfcOffsetCurve2D();
        /**
         */
        Step::RefLinkedList< IfcOffsetCurve3D > &getAllIfcOffsetCurve3D();
        /**
         */
        Step::RefLinkedList< IfcOneDirectionRepeatFactor > &getAllIfcOneDirectionRepeatFactor();
        /**
         */
        Step::RefLinkedList< IfcOpenShell > &getAllIfcOpenShell();
        /**
         */
        Step::RefLinkedList< IfcOpeningElement > &getAllIfcOpeningElement();
        /**
         */
        Step::RefLinkedList< IfcOpticalMaterialProperties > &getAllIfcOpticalMaterialProperties();
        /**
         */
        Step::RefLinkedList< IfcOrderAction > &getAllIfcOrderAction();
        /**
         */
        Step::RefLinkedList< IfcOrganization > &getAllIfcOrganization();
        /**
         */
        Step::RefLinkedList< IfcOrganizationRelationship > &getAllIfcOrganizationRelationship();
        /**
         */
        Step::RefLinkedList< IfcOrientedEdge > &getAllIfcOrientedEdge();
        /**
         */
        Step::RefLinkedList< IfcOutletType > &getAllIfcOutletType();
        /**
         */
        Step::RefLinkedList< IfcOwnerHistory > &getAllIfcOwnerHistory();
        /**
         */
        Step::RefLinkedList< IfcParameterizedProfileDef > &getAllIfcParameterizedProfileDef();
        /**
         */
        Step::RefLinkedList< IfcPath > &getAllIfcPath();
        /**
         */
        Step::RefLinkedList< IfcPerformanceHistory > &getAllIfcPerformanceHistory();
        /**
         */
        Step::RefLinkedList< IfcPermeableCoveringProperties > &getAllIfcPermeableCoveringProperties();
        /**
         */
        Step::RefLinkedList< IfcPermit > &getAllIfcPermit();
        /**
         */
        Step::RefLinkedList< IfcPerson > &getAllIfcPerson();
        /**
         */
        Step::RefLinkedList< IfcPersonAndOrganization > &getAllIfcPersonAndOrganization();
        /**
         */
        Step::RefLinkedList< IfcPhysicalComplexQuantity > &getAllIfcPhysicalComplexQuantity();
        /**
         */
        Step::RefLinkedList< IfcPhysicalQuantity > &getAllIfcPhysicalQuantity();
        /**
         */
        Step::RefLinkedList< IfcPhysicalSimpleQuantity > &getAllIfcPhysicalSimpleQuantity();
        /**
         */
        Step::RefLinkedList< IfcPile > &getAllIfcPile();
        /**
         */
        Step::RefLinkedList< IfcPipeFittingType > &getAllIfcPipeFittingType();
        /**
         */
        Step::RefLinkedList< IfcPipeSegmentType > &getAllIfcPipeSegmentType();
        /**
         */
        Step::RefLinkedList< IfcPixelTexture > &getAllIfcPixelTexture();
        /**
         */
        Step::RefLinkedList< IfcPlacement > &getAllIfcPlacement();
        /**
         */
        Step::RefLinkedList< IfcPlanarBox > &getAllIfcPlanarBox();
        /**
         */
        Step::RefLinkedList< IfcPlanarExtent > &getAllIfcPlanarExtent();
        /**
         */
        Step::RefLinkedList< IfcPlane > &getAllIfcPlane();
        /**
         */
        Step::RefLinkedList< IfcPlate > &getAllIfcPlate();
        /**
         */
        Step::RefLinkedList< IfcPlateType > &getAllIfcPlateType();
        /**
         */
        Step::RefLinkedList< IfcPoint > &getAllIfcPoint();
        /**
         */
        Step::RefLinkedList< IfcPointOnCurve > &getAllIfcPointOnCurve();
        /**
         */
        Step::RefLinkedList< IfcPointOnSurface > &getAllIfcPointOnSurface();
        /**
         */
        Step::RefLinkedList< IfcPolyLoop > &getAllIfcPolyLoop();
        /**
         */
        Step::RefLinkedList< IfcPolygonalBoundedHalfSpace > &getAllIfcPolygonalBoundedHalfSpace();
        /**
         */
        Step::RefLinkedList< IfcPolyline > &getAllIfcPolyline();
        /**
         */
        Step::RefLinkedList< IfcPort > &getAllIfcPort();
        /**
         */
        Step::RefLinkedList< IfcPostalAddress > &getAllIfcPostalAddress();
        /**
         */
        Step::RefLinkedList< IfcPreDefinedColour > &getAllIfcPreDefinedColour();
        /**
         */
        Step::RefLinkedList< IfcPreDefinedCurveFont > &getAllIfcPreDefinedCurveFont();
        /**
         */
        Step::RefLinkedList< IfcPreDefinedDimensionSymbol > &getAllIfcPreDefinedDimensionSymbol();
        /**
         */
        Step::RefLinkedList< IfcPreDefinedItem > &getAllIfcPreDefinedItem();
        /**
         */
        Step::RefLinkedList< IfcPreDefinedPointMarkerSymbol > &getAllIfcPreDefinedPointMarkerSymbol();
        /**
         */
        Step::RefLinkedList< IfcPreDefinedSymbol > &getAllIfcPreDefinedSymbol();
        /**
         */
        Step::RefLinkedList< IfcPreDefinedTerminatorSymbol > &getAllIfcPreDefinedTerminatorSymbol();
        /**
         */
        Step::RefLinkedList< IfcPreDefinedTextFont > &getAllIfcPreDefinedTextFont();
        /**
         */
        Step::RefLinkedList< IfcPresentationLayerAssignment > &getAllIfcPresentationLayerAssignment();
        /**
         */
        Step::RefLinkedList< IfcPresentationLayerWithStyle > &getAllIfcPresentationLayerWithStyle();
        /**
         */
        Step::RefLinkedList< IfcPresentationStyle > &getAllIfcPresentationStyle();
        /**
         */
        Step::RefLinkedList< IfcPresentationStyleAssignment > &getAllIfcPresentationStyleAssignment();
        /**
         */
        Step::RefLinkedList< IfcProcedure > &getAllIfcProcedure();
        /**
         */
        Step::RefLinkedList< IfcProcess > &getAllIfcProcess();
        /**
         */
        Step::RefLinkedList< IfcProduct > &getAllIfcProduct();
        /**
         */
        Step::RefLinkedList< IfcProductDefinitionShape > &getAllIfcProductDefinitionShape();
        /**
         */
        Step::RefLinkedList< IfcProductRepresentation > &getAllIfcProductRepresentation();
        /**
         */
        Step::RefLinkedList< IfcProductsOfCombustionProperties > &getAllIfcProductsOfCombustionProperties();
        /**
         */
        Step::RefLinkedList< IfcProfileDef > &getAllIfcProfileDef();
        /**
         */
        Step::RefLinkedList< IfcProfileProperties > &getAllIfcProfileProperties();
        /**
         */
        Step::RefLinkedList< IfcProject > &getAllIfcProject();
        /**
         */
        Step::RefLinkedList< IfcProjectOrder > &getAllIfcProjectOrder();
        /**
         */
        Step::RefLinkedList< IfcProjectOrderRecord > &getAllIfcProjectOrderRecord();
        /**
         */
        Step::RefLinkedList< IfcProjectionCurve > &getAllIfcProjectionCurve();
        /**
         */
        Step::RefLinkedList< IfcProjectionElement > &getAllIfcProjectionElement();
        /**
         */
        Step::RefLinkedList< IfcProperty > &getAllIfcProperty();
        /**
         */
        Step::RefLinkedList< IfcPropertyBoundedValue > &getAllIfcPropertyBoundedValue();
        /**
         */
        Step::RefLinkedList< IfcPropertyConstraintRelationship > &getAllIfcPropertyConstraintRelationship();
        /**
         */
        Step::RefLinkedList< IfcPropertyDefinition > &getAllIfcPropertyDefinition();
        /**
         */
        Step::RefLinkedList< IfcPropertyDependencyRelationship > &getAllIfcPropertyDependencyRelationship();
        /**
         */
        Step::RefLinkedList< IfcPropertyEnumeratedValue > &getAllIfcPropertyEnumeratedValue();
        /**
         */
        Step::RefLinkedList< IfcPropertyEnumeration > &getAllIfcPropertyEnumeration();
        /**
         */
        Step::RefLinkedList< IfcPropertyListValue > &getAllIfcPropertyListValue();
        /**
         */
        Step::RefLinkedList< IfcPropertyReferenceValue > &getAllIfcPropertyReferenceValue();
        /**
         */
        Step::RefLinkedList< IfcPropertySet > &getAllIfcPropertySet();
        /**
         */
        Step::RefLinkedList< IfcPropertySetDefinition > &getAllIfcPropertySetDefinition();
        /**
         */
        Step::RefLinkedList< IfcPropertySingleValue > &getAllIfcPropertySingleValue();
        /**
         */
        Step::RefLinkedList< IfcPropertyTableValue > &getAllIfcPropertyTableValue();
        /**
         */
        Step::RefLinkedList< IfcProtectiveDeviceType > &getAllIfcProtectiveDeviceType();
        /**
         */
        Step::RefLinkedList< IfcProxy > &getAllIfcProxy();
        /**
         */
        Step::RefLinkedList< IfcPumpType > &getAllIfcPumpType();
        /**
         */
        Step::RefLinkedList< IfcQuantityArea > &getAllIfcQuantityArea();
        /**
         */
        Step::RefLinkedList< IfcQuantityCount > &getAllIfcQuantityCount();
        /**
         */
        Step::RefLinkedList< IfcQuantityLength > &getAllIfcQuantityLength();
        /**
         */
        Step::RefLinkedList< IfcQuantityTime > &getAllIfcQuantityTime();
        /**
         */
        Step::RefLinkedList< IfcQuantityVolume > &getAllIfcQuantityVolume();
        /**
         */
        Step::RefLinkedList< IfcQuantityWeight > &getAllIfcQuantityWeight();
        /**
         */
        Step::RefLinkedList< IfcRadiusDimension > &getAllIfcRadiusDimension();
        /**
         */
        Step::RefLinkedList< IfcRailing > &getAllIfcRailing();
        /**
         */
        Step::RefLinkedList< IfcRailingType > &getAllIfcRailingType();
        /**
         */
        Step::RefLinkedList< IfcRamp > &getAllIfcRamp();
        /**
         */
        Step::RefLinkedList< IfcRampFlight > &getAllIfcRampFlight();
        /**
         */
        Step::RefLinkedList< IfcRampFlightType > &getAllIfcRampFlightType();
        /**
         */
        Step::RefLinkedList< IfcRationalBezierCurve > &getAllIfcRationalBezierCurve();
        /**
         */
        Step::RefLinkedList< IfcRectangleHollowProfileDef > &getAllIfcRectangleHollowProfileDef();
        /**
         */
        Step::RefLinkedList< IfcRectangleProfileDef > &getAllIfcRectangleProfileDef();
        /**
         */
        Step::RefLinkedList< IfcRectangularPyramid > &getAllIfcRectangularPyramid();
        /**
         */
        Step::RefLinkedList< IfcRectangularTrimmedSurface > &getAllIfcRectangularTrimmedSurface();
        /**
         */
        Step::RefLinkedList< IfcReferencesValueDocument > &getAllIfcReferencesValueDocument();
        /**
         */
        Step::RefLinkedList< IfcRegularTimeSeries > &getAllIfcRegularTimeSeries();
        /**
         */
        Step::RefLinkedList< IfcReinforcementBarProperties > &getAllIfcReinforcementBarProperties();
        /**
         */
        Step::RefLinkedList< IfcReinforcementDefinitionProperties > &getAllIfcReinforcementDefinitionProperties();
        /**
         */
        Step::RefLinkedList< IfcReinforcingBar > &getAllIfcReinforcingBar();
        /**
         */
        Step::RefLinkedList< IfcReinforcingElement > &getAllIfcReinforcingElement();
        /**
         */
        Step::RefLinkedList< IfcReinforcingMesh > &getAllIfcReinforcingMesh();
        /**
         */
        Step::RefLinkedList< IfcRelAggregates > &getAllIfcRelAggregates();
        /**
         */
        Step::RefLinkedList< IfcRelAssigns > &getAllIfcRelAssigns();
        /**
         */
        Step::RefLinkedList< IfcRelAssignsTasks > &getAllIfcRelAssignsTasks();
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToActor > &getAllIfcRelAssignsToActor();
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToControl > &getAllIfcRelAssignsToControl();
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToGroup > &getAllIfcRelAssignsToGroup();
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToProcess > &getAllIfcRelAssignsToProcess();
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToProduct > &getAllIfcRelAssignsToProduct();
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToProjectOrder > &getAllIfcRelAssignsToProjectOrder();
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToResource > &getAllIfcRelAssignsToResource();
        /**
         */
        Step::RefLinkedList< IfcRelAssociates > &getAllIfcRelAssociates();
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesAppliedValue > &getAllIfcRelAssociatesAppliedValue();
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesApproval > &getAllIfcRelAssociatesApproval();
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesClassification > &getAllIfcRelAssociatesClassification();
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesConstraint > &getAllIfcRelAssociatesConstraint();
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesDocument > &getAllIfcRelAssociatesDocument();
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesLibrary > &getAllIfcRelAssociatesLibrary();
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesMaterial > &getAllIfcRelAssociatesMaterial();
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesProfileProperties > &getAllIfcRelAssociatesProfileProperties();
        /**
         */
        Step::RefLinkedList< IfcRelConnects > &getAllIfcRelConnects();
        /**
         */
        Step::RefLinkedList< IfcRelConnectsElements > &getAllIfcRelConnectsElements();
        /**
         */
        Step::RefLinkedList< IfcRelConnectsPathElements > &getAllIfcRelConnectsPathElements();
        /**
         */
        Step::RefLinkedList< IfcRelConnectsPortToElement > &getAllIfcRelConnectsPortToElement();
        /**
         */
        Step::RefLinkedList< IfcRelConnectsPorts > &getAllIfcRelConnectsPorts();
        /**
         */
        Step::RefLinkedList< IfcRelConnectsStructuralActivity > &getAllIfcRelConnectsStructuralActivity();
        /**
         */
        Step::RefLinkedList< IfcRelConnectsStructuralElement > &getAllIfcRelConnectsStructuralElement();
        /**
         */
        Step::RefLinkedList< IfcRelConnectsStructuralMember > &getAllIfcRelConnectsStructuralMember();
        /**
         */
        Step::RefLinkedList< IfcRelConnectsWithEccentricity > &getAllIfcRelConnectsWithEccentricity();
        /**
         */
        Step::RefLinkedList< IfcRelConnectsWithRealizingElements > &getAllIfcRelConnectsWithRealizingElements();
        /**
         */
        Step::RefLinkedList< IfcRelContainedInSpatialStructure > &getAllIfcRelContainedInSpatialStructure();
        /**
         */
        Step::RefLinkedList< IfcRelCoversBldgElements > &getAllIfcRelCoversBldgElements();
        /**
         */
        Step::RefLinkedList< IfcRelCoversSpaces > &getAllIfcRelCoversSpaces();
        /**
         */
        Step::RefLinkedList< IfcRelDecomposes > &getAllIfcRelDecomposes();
        /**
         */
        Step::RefLinkedList< IfcRelDefines > &getAllIfcRelDefines();
        /**
         */
        Step::RefLinkedList< IfcRelDefinesByProperties > &getAllIfcRelDefinesByProperties();
        /**
         */
        Step::RefLinkedList< IfcRelDefinesByType > &getAllIfcRelDefinesByType();
        /**
         */
        Step::RefLinkedList< IfcRelFillsElement > &getAllIfcRelFillsElement();
        /**
         */
        Step::RefLinkedList< IfcRelFlowControlElements > &getAllIfcRelFlowControlElements();
        /**
         */
        Step::RefLinkedList< IfcRelInteractionRequirements > &getAllIfcRelInteractionRequirements();
        /**
         */
        Step::RefLinkedList< IfcRelNests > &getAllIfcRelNests();
        /**
         */
        Step::RefLinkedList< IfcRelOccupiesSpaces > &getAllIfcRelOccupiesSpaces();
        /**
         */
        Step::RefLinkedList< IfcRelOverridesProperties > &getAllIfcRelOverridesProperties();
        /**
         */
        Step::RefLinkedList< IfcRelProjectsElement > &getAllIfcRelProjectsElement();
        /**
         */
        Step::RefLinkedList< IfcRelReferencedInSpatialStructure > &getAllIfcRelReferencedInSpatialStructure();
        /**
         */
        Step::RefLinkedList< IfcRelSchedulesCostItems > &getAllIfcRelSchedulesCostItems();
        /**
         */
        Step::RefLinkedList< IfcRelSequence > &getAllIfcRelSequence();
        /**
         */
        Step::RefLinkedList< IfcRelServicesBuildings > &getAllIfcRelServicesBuildings();
        /**
         */
        Step::RefLinkedList< IfcRelSpaceBoundary > &getAllIfcRelSpaceBoundary();
        /**
         */
        Step::RefLinkedList< IfcRelVoidsElement > &getAllIfcRelVoidsElement();
        /**
         */
        Step::RefLinkedList< IfcRelationship > &getAllIfcRelationship();
        /**
         */
        Step::RefLinkedList< IfcRelaxation > &getAllIfcRelaxation();
        /**
         */
        Step::RefLinkedList< IfcRepresentation > &getAllIfcRepresentation();
        /**
         */
        Step::RefLinkedList< IfcRepresentationContext > &getAllIfcRepresentationContext();
        /**
         */
        Step::RefLinkedList< IfcRepresentationItem > &getAllIfcRepresentationItem();
        /**
         */
        Step::RefLinkedList< IfcRepresentationMap > &getAllIfcRepresentationMap();
        /**
         */
        Step::RefLinkedList< IfcResource > &getAllIfcResource();
        /**
         */
        Step::RefLinkedList< IfcRevolvedAreaSolid > &getAllIfcRevolvedAreaSolid();
        /**
         */
        Step::RefLinkedList< IfcRibPlateProfileProperties > &getAllIfcRibPlateProfileProperties();
        /**
         */
        Step::RefLinkedList< IfcRightCircularCone > &getAllIfcRightCircularCone();
        /**
         */
        Step::RefLinkedList< IfcRightCircularCylinder > &getAllIfcRightCircularCylinder();
        /**
         */
        Step::RefLinkedList< IfcRoof > &getAllIfcRoof();
        /**
         */
        Step::RefLinkedList< IfcRoot > &getAllIfcRoot();
        /**
         */
        Step::RefLinkedList< IfcRoundedEdgeFeature > &getAllIfcRoundedEdgeFeature();
        /**
         */
        Step::RefLinkedList< IfcRoundedRectangleProfileDef > &getAllIfcRoundedRectangleProfileDef();
        /**
         */
        Step::RefLinkedList< IfcSIUnit > &getAllIfcSIUnit();
        /**
         */
        Step::RefLinkedList< IfcSanitaryTerminalType > &getAllIfcSanitaryTerminalType();
        /**
         */
        Step::RefLinkedList< IfcScheduleTimeControl > &getAllIfcScheduleTimeControl();
        /**
         */
        Step::RefLinkedList< IfcSectionProperties > &getAllIfcSectionProperties();
        /**
         */
        Step::RefLinkedList< IfcSectionReinforcementProperties > &getAllIfcSectionReinforcementProperties();
        /**
         */
        Step::RefLinkedList< IfcSectionedSpine > &getAllIfcSectionedSpine();
        /**
         */
        Step::RefLinkedList< IfcSensorType > &getAllIfcSensorType();
        /**
         */
        Step::RefLinkedList< IfcServiceLife > &getAllIfcServiceLife();
        /**
         */
        Step::RefLinkedList< IfcServiceLifeFactor > &getAllIfcServiceLifeFactor();
        /**
         */
        Step::RefLinkedList< IfcShapeAspect > &getAllIfcShapeAspect();
        /**
         */
        Step::RefLinkedList< IfcShapeModel > &getAllIfcShapeModel();
        /**
         */
        Step::RefLinkedList< IfcShapeRepresentation > &getAllIfcShapeRepresentation();
        /**
         */
        Step::RefLinkedList< IfcShellBasedSurfaceModel > &getAllIfcShellBasedSurfaceModel();
        /**
         */
        Step::RefLinkedList< IfcSimpleProperty > &getAllIfcSimpleProperty();
        /**
         */
        Step::RefLinkedList< IfcSite > &getAllIfcSite();
        /**
         */
        Step::RefLinkedList< IfcSlab > &getAllIfcSlab();
        /**
         */
        Step::RefLinkedList< IfcSlabType > &getAllIfcSlabType();
        /**
         */
        Step::RefLinkedList< IfcSlippageConnectionCondition > &getAllIfcSlippageConnectionCondition();
        /**
         */
        Step::RefLinkedList< IfcSolidModel > &getAllIfcSolidModel();
        /**
         */
        Step::RefLinkedList< IfcSoundProperties > &getAllIfcSoundProperties();
        /**
         */
        Step::RefLinkedList< IfcSoundValue > &getAllIfcSoundValue();
        /**
         */
        Step::RefLinkedList< IfcSpace > &getAllIfcSpace();
        /**
         */
        Step::RefLinkedList< IfcSpaceHeaterType > &getAllIfcSpaceHeaterType();
        /**
         */
        Step::RefLinkedList< IfcSpaceProgram > &getAllIfcSpaceProgram();
        /**
         */
        Step::RefLinkedList< IfcSpaceThermalLoadProperties > &getAllIfcSpaceThermalLoadProperties();
        /**
         */
        Step::RefLinkedList< IfcSpaceType > &getAllIfcSpaceType();
        /**
         */
        Step::RefLinkedList< IfcSpatialStructureElement > &getAllIfcSpatialStructureElement();
        /**
         */
        Step::RefLinkedList< IfcSpatialStructureElementType > &getAllIfcSpatialStructureElementType();
        /**
         */
        Step::RefLinkedList< IfcSphere > &getAllIfcSphere();
        /**
         */
        Step::RefLinkedList< IfcStackTerminalType > &getAllIfcStackTerminalType();
        /**
         */
        Step::RefLinkedList< IfcStair > &getAllIfcStair();
        /**
         */
        Step::RefLinkedList< IfcStairFlight > &getAllIfcStairFlight();
        /**
         */
        Step::RefLinkedList< IfcStairFlightType > &getAllIfcStairFlightType();
        /**
         */
        Step::RefLinkedList< IfcStructuralAction > &getAllIfcStructuralAction();
        /**
         */
        Step::RefLinkedList< IfcStructuralActivity > &getAllIfcStructuralActivity();
        /**
         */
        Step::RefLinkedList< IfcStructuralAnalysisModel > &getAllIfcStructuralAnalysisModel();
        /**
         */
        Step::RefLinkedList< IfcStructuralConnection > &getAllIfcStructuralConnection();
        /**
         */
        Step::RefLinkedList< IfcStructuralConnectionCondition > &getAllIfcStructuralConnectionCondition();
        /**
         */
        Step::RefLinkedList< IfcStructuralCurveConnection > &getAllIfcStructuralCurveConnection();
        /**
         */
        Step::RefLinkedList< IfcStructuralCurveMember > &getAllIfcStructuralCurveMember();
        /**
         */
        Step::RefLinkedList< IfcStructuralCurveMemberVarying > &getAllIfcStructuralCurveMemberVarying();
        /**
         */
        Step::RefLinkedList< IfcStructuralItem > &getAllIfcStructuralItem();
        /**
         */
        Step::RefLinkedList< IfcStructuralLinearAction > &getAllIfcStructuralLinearAction();
        /**
         */
        Step::RefLinkedList< IfcStructuralLinearActionVarying > &getAllIfcStructuralLinearActionVarying();
        /**
         */
        Step::RefLinkedList< IfcStructuralLoad > &getAllIfcStructuralLoad();
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadGroup > &getAllIfcStructuralLoadGroup();
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadLinearForce > &getAllIfcStructuralLoadLinearForce();
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadPlanarForce > &getAllIfcStructuralLoadPlanarForce();
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadSingleDisplacement > &getAllIfcStructuralLoadSingleDisplacement();
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadSingleDisplacementDistortion > &getAllIfcStructuralLoadSingleDisplacementDistortion();
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadSingleForce > &getAllIfcStructuralLoadSingleForce();
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadSingleForceWarping > &getAllIfcStructuralLoadSingleForceWarping();
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadStatic > &getAllIfcStructuralLoadStatic();
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadTemperature > &getAllIfcStructuralLoadTemperature();
        /**
         */
        Step::RefLinkedList< IfcStructuralMember > &getAllIfcStructuralMember();
        /**
         */
        Step::RefLinkedList< IfcStructuralPlanarAction > &getAllIfcStructuralPlanarAction();
        /**
         */
        Step::RefLinkedList< IfcStructuralPlanarActionVarying > &getAllIfcStructuralPlanarActionVarying();
        /**
         */
        Step::RefLinkedList< IfcStructuralPointAction > &getAllIfcStructuralPointAction();
        /**
         */
        Step::RefLinkedList< IfcStructuralPointConnection > &getAllIfcStructuralPointConnection();
        /**
         */
        Step::RefLinkedList< IfcStructuralPointReaction > &getAllIfcStructuralPointReaction();
        /**
         */
        Step::RefLinkedList< IfcStructuralProfileProperties > &getAllIfcStructuralProfileProperties();
        /**
         */
        Step::RefLinkedList< IfcStructuralReaction > &getAllIfcStructuralReaction();
        /**
         */
        Step::RefLinkedList< IfcStructuralResultGroup > &getAllIfcStructuralResultGroup();
        /**
         */
        Step::RefLinkedList< IfcStructuralSteelProfileProperties > &getAllIfcStructuralSteelProfileProperties();
        /**
         */
        Step::RefLinkedList< IfcStructuralSurfaceConnection > &getAllIfcStructuralSurfaceConnection();
        /**
         */
        Step::RefLinkedList< IfcStructuralSurfaceMember > &getAllIfcStructuralSurfaceMember();
        /**
         */
        Step::RefLinkedList< IfcStructuralSurfaceMemberVarying > &getAllIfcStructuralSurfaceMemberVarying();
        /**
         */
        Step::RefLinkedList< IfcStructuredDimensionCallout > &getAllIfcStructuredDimensionCallout();
        /**
         */
        Step::RefLinkedList< IfcStyleModel > &getAllIfcStyleModel();
        /**
         */
        Step::RefLinkedList< IfcStyledItem > &getAllIfcStyledItem();
        /**
         */
        Step::RefLinkedList< IfcStyledRepresentation > &getAllIfcStyledRepresentation();
        /**
         */
        Step::RefLinkedList< IfcSubContractResource > &getAllIfcSubContractResource();
        /**
         */
        Step::RefLinkedList< IfcSubedge > &getAllIfcSubedge();
        /**
         */
        Step::RefLinkedList< IfcSurface > &getAllIfcSurface();
        /**
         */
        Step::RefLinkedList< IfcSurfaceCurveSweptAreaSolid > &getAllIfcSurfaceCurveSweptAreaSolid();
        /**
         */
        Step::RefLinkedList< IfcSurfaceOfLinearExtrusion > &getAllIfcSurfaceOfLinearExtrusion();
        /**
         */
        Step::RefLinkedList< IfcSurfaceOfRevolution > &getAllIfcSurfaceOfRevolution();
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyle > &getAllIfcSurfaceStyle();
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyleLighting > &getAllIfcSurfaceStyleLighting();
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyleRefraction > &getAllIfcSurfaceStyleRefraction();
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyleRendering > &getAllIfcSurfaceStyleRendering();
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyleShading > &getAllIfcSurfaceStyleShading();
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyleWithTextures > &getAllIfcSurfaceStyleWithTextures();
        /**
         */
        Step::RefLinkedList< IfcSurfaceTexture > &getAllIfcSurfaceTexture();
        /**
         */
        Step::RefLinkedList< IfcSweptAreaSolid > &getAllIfcSweptAreaSolid();
        /**
         */
        Step::RefLinkedList< IfcSweptDiskSolid > &getAllIfcSweptDiskSolid();
        /**
         */
        Step::RefLinkedList< IfcSweptSurface > &getAllIfcSweptSurface();
        /**
         */
        Step::RefLinkedList< IfcSwitchingDeviceType > &getAllIfcSwitchingDeviceType();
        /**
         */
        Step::RefLinkedList< IfcSymbolStyle > &getAllIfcSymbolStyle();
        /**
         */
        Step::RefLinkedList< IfcSystem > &getAllIfcSystem();
        /**
         */
        Step::RefLinkedList< IfcSystemFurnitureElementType > &getAllIfcSystemFurnitureElementType();
        /**
         */
        Step::RefLinkedList< IfcTShapeProfileDef > &getAllIfcTShapeProfileDef();
        /**
         */
        Step::RefLinkedList< IfcTable > &getAllIfcTable();
        /**
         */
        Step::RefLinkedList< IfcTableRow > &getAllIfcTableRow();
        /**
         */
        Step::RefLinkedList< IfcTankType > &getAllIfcTankType();
        /**
         */
        Step::RefLinkedList< IfcTask > &getAllIfcTask();
        /**
         */
        Step::RefLinkedList< IfcTelecomAddress > &getAllIfcTelecomAddress();
        /**
         */
        Step::RefLinkedList< IfcTendon > &getAllIfcTendon();
        /**
         */
        Step::RefLinkedList< IfcTendonAnchor > &getAllIfcTendonAnchor();
        /**
         */
        Step::RefLinkedList< IfcTerminatorSymbol > &getAllIfcTerminatorSymbol();
        /**
         */
        Step::RefLinkedList< IfcTextLiteral > &getAllIfcTextLiteral();
        /**
         */
        Step::RefLinkedList< IfcTextLiteralWithExtent > &getAllIfcTextLiteralWithExtent();
        /**
         */
        Step::RefLinkedList< IfcTextStyle > &getAllIfcTextStyle();
        /**
         */
        Step::RefLinkedList< IfcTextStyleFontModel > &getAllIfcTextStyleFontModel();
        /**
         */
        Step::RefLinkedList< IfcTextStyleForDefinedFont > &getAllIfcTextStyleForDefinedFont();
        /**
         */
        Step::RefLinkedList< IfcTextStyleTextModel > &getAllIfcTextStyleTextModel();
        /**
         */
        Step::RefLinkedList< IfcTextStyleWithBoxCharacteristics > &getAllIfcTextStyleWithBoxCharacteristics();
        /**
         */
        Step::RefLinkedList< IfcTextureCoordinate > &getAllIfcTextureCoordinate();
        /**
         */
        Step::RefLinkedList< IfcTextureCoordinateGenerator > &getAllIfcTextureCoordinateGenerator();
        /**
         */
        Step::RefLinkedList< IfcTextureMap > &getAllIfcTextureMap();
        /**
         */
        Step::RefLinkedList< IfcTextureVertex > &getAllIfcTextureVertex();
        /**
         */
        Step::RefLinkedList< IfcThermalMaterialProperties > &getAllIfcThermalMaterialProperties();
        /**
         */
        Step::RefLinkedList< IfcTimeSeries > &getAllIfcTimeSeries();
        /**
         */
        Step::RefLinkedList< IfcTimeSeriesReferenceRelationship > &getAllIfcTimeSeriesReferenceRelationship();
        /**
         */
        Step::RefLinkedList< IfcTimeSeriesSchedule > &getAllIfcTimeSeriesSchedule();
        /**
         */
        Step::RefLinkedList< IfcTimeSeriesValue > &getAllIfcTimeSeriesValue();
        /**
         */
        Step::RefLinkedList< IfcTopologicalRepresentationItem > &getAllIfcTopologicalRepresentationItem();
        /**
         */
        Step::RefLinkedList< IfcTopologyRepresentation > &getAllIfcTopologyRepresentation();
        /**
         */
        Step::RefLinkedList< IfcTransformerType > &getAllIfcTransformerType();
        /**
         */
        Step::RefLinkedList< IfcTransportElement > &getAllIfcTransportElement();
        /**
         */
        Step::RefLinkedList< IfcTransportElementType > &getAllIfcTransportElementType();
        /**
         */
        Step::RefLinkedList< IfcTrapeziumProfileDef > &getAllIfcTrapeziumProfileDef();
        /**
         */
        Step::RefLinkedList< IfcTrimmedCurve > &getAllIfcTrimmedCurve();
        /**
         */
        Step::RefLinkedList< IfcTubeBundleType > &getAllIfcTubeBundleType();
        /**
         */
        Step::RefLinkedList< IfcTwoDirectionRepeatFactor > &getAllIfcTwoDirectionRepeatFactor();
        /**
         */
        Step::RefLinkedList< IfcTypeObject > &getAllIfcTypeObject();
        /**
         */
        Step::RefLinkedList< IfcTypeProduct > &getAllIfcTypeProduct();
        /**
         */
        Step::RefLinkedList< IfcUShapeProfileDef > &getAllIfcUShapeProfileDef();
        /**
         */
        Step::RefLinkedList< IfcUnitAssignment > &getAllIfcUnitAssignment();
        /**
         */
        Step::RefLinkedList< IfcUnitaryEquipmentType > &getAllIfcUnitaryEquipmentType();
        /**
         */
        Step::RefLinkedList< IfcValveType > &getAllIfcValveType();
        /**
         */
        Step::RefLinkedList< IfcVector > &getAllIfcVector();
        /**
         */
        Step::RefLinkedList< IfcVertex > &getAllIfcVertex();
        /**
         */
        Step::RefLinkedList< IfcVertexBasedTextureMap > &getAllIfcVertexBasedTextureMap();
        /**
         */
        Step::RefLinkedList< IfcVertexLoop > &getAllIfcVertexLoop();
        /**
         */
        Step::RefLinkedList< IfcVertexPoint > &getAllIfcVertexPoint();
        /**
         */
        Step::RefLinkedList< IfcVibrationIsolatorType > &getAllIfcVibrationIsolatorType();
        /**
         */
        Step::RefLinkedList< IfcVirtualElement > &getAllIfcVirtualElement();
        /**
         */
        Step::RefLinkedList< IfcVirtualGridIntersection > &getAllIfcVirtualGridIntersection();
        /**
         */
        Step::RefLinkedList< IfcWall > &getAllIfcWall();
        /**
         */
        Step::RefLinkedList< IfcWallStandardCase > &getAllIfcWallStandardCase();
        /**
         */
        Step::RefLinkedList< IfcWallType > &getAllIfcWallType();
        /**
         */
        Step::RefLinkedList< IfcWasteTerminalType > &getAllIfcWasteTerminalType();
        /**
         */
        Step::RefLinkedList< IfcWaterProperties > &getAllIfcWaterProperties();
        /**
         */
        Step::RefLinkedList< IfcWindow > &getAllIfcWindow();
        /**
         */
        Step::RefLinkedList< IfcWindowLiningProperties > &getAllIfcWindowLiningProperties();
        /**
         */
        Step::RefLinkedList< IfcWindowPanelProperties > &getAllIfcWindowPanelProperties();
        /**
         */
        Step::RefLinkedList< IfcWindowStyle > &getAllIfcWindowStyle();
        /**
         */
        Step::RefLinkedList< IfcWorkControl > &getAllIfcWorkControl();
        /**
         */
        Step::RefLinkedList< IfcWorkPlan > &getAllIfcWorkPlan();
        /**
         */
        Step::RefLinkedList< IfcWorkSchedule > &getAllIfcWorkSchedule();
        /**
         */
        Step::RefLinkedList< IfcZShapeProfileDef > &getAllIfcZShapeProfileDef();
        /**
         */
        Step::RefLinkedList< IfcZone > &getAllIfcZone();
        friend class SPFWriter;
        friend class SPFReader;

    private:
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_Ifc2DCompositeCurve_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcActionRequest_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcActor_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcActorRole_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcActuatorType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAirTerminalBoxType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAirTerminalType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAirToAirHeatRecoveryType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAlarmType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAngularDimension_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAnnotation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAnnotationCurveOccurrence_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAnnotationFillArea_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAnnotationFillAreaOccurrence_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAnnotationSurface_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAnnotationSurfaceOccurrence_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAnnotationSymbolOccurrence_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAnnotationTextOccurrence_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcApplication_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAppliedValueRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcApproval_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcApprovalActorRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcApprovalPropertyRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcApprovalRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcArbitraryClosedProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcArbitraryOpenProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcArbitraryProfileDefWithVoids_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAsset_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAsymmetricIShapeProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAxis1Placement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAxis2Placement2D_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAxis2Placement3D_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBeam_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBeamType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBezierCurve_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBlobTexture_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBlock_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBoilerType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBooleanClippingResult_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBooleanResult_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBoundaryEdgeCondition_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBoundaryFaceCondition_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBoundaryNodeCondition_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBoundaryNodeConditionWarping_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBoundedSurface_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBoundingBox_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBoxedHalfSpace_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBuilding_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBuildingElementPart_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBuildingElementProxy_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBuildingElementProxyType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBuildingStorey_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCShapeProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCableCarrierFittingType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCableCarrierSegmentType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCableSegmentType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCalendarDate_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCartesianPoint_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCartesianTransformationOperator2D_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCartesianTransformationOperator2DnonUniform_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCartesianTransformationOperator3D_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCartesianTransformationOperator3DnonUniform_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCenterLineProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcChamferEdgeFeature_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcChillerType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCircle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCircleHollowProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCircleProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcClassification_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcClassificationItem_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcClassificationItemRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcClassificationNotation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcClassificationNotationFacet_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcClassificationReference_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcClosedShell_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCoilType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcColourRgb_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcColumn_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcColumnType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcComplexProperty_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCompositeCurve_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCompositeCurveSegment_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCompositeProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCompressorType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCondenserType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCondition_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConditionCriterion_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConnectedFaceSet_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConnectionCurveGeometry_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConnectionPointEccentricity_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConnectionPointGeometry_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConnectionPortGeometry_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConnectionSurfaceGeometry_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConstraintAggregationRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConstraintClassificationRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConstraintRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConstructionEquipmentResource_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConstructionMaterialResource_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConstructionProductResource_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcContextDependentUnit_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcControllerType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConversionBasedUnit_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCooledBeamType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCoolingTowerType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCoordinatedUniversalTimeOffset_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCostItem_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCostSchedule_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCostValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCovering_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCoveringType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCraneRailAShapeProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCraneRailFShapeProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCrewResource_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCsgSolid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCurrencyRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCurtainWall_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCurtainWallType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCurveBoundedPlane_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCurveStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCurveStyleFont_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCurveStyleFontAndScaling_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCurveStyleFontPattern_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDamperType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDateAndTime_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDefinedSymbol_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDerivedProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDerivedUnit_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDerivedUnitElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDiameterDimension_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDimensionCalloutRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDimensionCurve_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDimensionCurveDirectedCallout_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDimensionCurveTerminator_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDimensionPair_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDimensionalExponents_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDirection_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDiscreteAccessory_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDiscreteAccessoryType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDistributionChamberElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDistributionChamberElementType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDistributionControlElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDistributionElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDistributionElementType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDistributionFlowElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDistributionPort_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDocumentElectronicFormat_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDocumentInformation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDocumentInformationRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDocumentReference_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDoor_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDoorLiningProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDoorPanelProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDoorStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDraughtingCallout_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDraughtingCalloutRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDraughtingPreDefinedColour_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDraughtingPreDefinedCurveFont_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDraughtingPreDefinedTextFont_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDuctFittingType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDuctSegmentType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDuctSilencerType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEdge_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEdgeCurve_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEdgeLoop_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElectricApplianceType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElectricDistributionPoint_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElectricFlowStorageDeviceType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElectricGeneratorType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElectricHeaterType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElectricMotorType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElectricTimeControlType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElectricalBaseProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElectricalCircuit_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElectricalElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElementAssembly_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElementQuantity_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEllipse_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEllipseProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEnergyConversionDevice_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEnergyProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEnvironmentalImpactValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEquipmentElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEquipmentStandard_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEvaporativeCoolerType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEvaporatorType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcExtendedMaterialProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcExternallyDefinedHatchStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcExternallyDefinedSurfaceStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcExternallyDefinedSymbol_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcExternallyDefinedTextFont_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcExtrudedAreaSolid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFace_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFaceBasedSurfaceModel_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFaceBound_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFaceOuterBound_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFaceSurface_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFacetedBrep_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFacetedBrepWithVoids_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFailureConnectionCondition_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFanType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFastener_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFastenerType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFillAreaStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFillAreaStyleHatching_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFillAreaStyleTileSymbolWithStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFillAreaStyleTiles_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFilterType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFireSuppressionTerminalType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowController_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowFitting_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowInstrumentType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowMeterType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowMovingDevice_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowSegment_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowStorageDevice_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowTerminal_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowTreatmentDevice_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFluidFlowProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFooting_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFuelProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFurnishingElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFurnishingElementType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFurnitureStandard_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFurnitureType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGasTerminalType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGeneralMaterialProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGeneralProfileProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGeometricCurveSet_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGeometricRepresentationContext_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGeometricRepresentationSubContext_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGeometricSet_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGrid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGridAxis_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGridPlacement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGroup_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcHalfSpaceSolid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcHeatExchangerType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcHumidifierType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcHygroscopicMaterialProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcIShapeProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcImageTexture_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcInventory_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcIrregularTimeSeries_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcIrregularTimeSeriesValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcJunctionBoxType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLShapeProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLaborResource_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLampType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLibraryInformation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLibraryReference_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLightDistributionData_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLightFixtureType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLightIntensityDistribution_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLightSourceAmbient_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLightSourceDirectional_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLightSourceGoniometric_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLightSourcePositional_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLightSourceSpot_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLine_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLinearDimension_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLocalPlacement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLocalTime_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLoop_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMappedItem_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMaterial_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMaterialClassificationRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMaterialDefinitionRepresentation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMaterialLayer_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMaterialLayerSet_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMaterialLayerSetUsage_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMaterialList_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMeasureWithUnit_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMechanicalConcreteMaterialProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMechanicalFastener_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMechanicalFastenerType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMechanicalMaterialProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMechanicalSteelMaterialProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMember_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMemberType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMetric_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMonetaryUnit_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMotorConnectionType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMove_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcObjective_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOccupant_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOffsetCurve2D_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOffsetCurve3D_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOneDirectionRepeatFactor_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOpenShell_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOpeningElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOpticalMaterialProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOrderAction_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOrganization_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOrganizationRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOrientedEdge_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOutletType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcOwnerHistory_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPath_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPerformanceHistory_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPermeableCoveringProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPermit_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPerson_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPersonAndOrganization_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPhysicalComplexQuantity_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPile_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPipeFittingType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPipeSegmentType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPixelTexture_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPlanarBox_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPlanarExtent_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPlane_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPlate_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPlateType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPointOnCurve_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPointOnSurface_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPolyLoop_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPolygonalBoundedHalfSpace_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPolyline_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPostalAddress_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPreDefinedDimensionSymbol_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPreDefinedPointMarkerSymbol_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPreDefinedTerminatorSymbol_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPresentationLayerAssignment_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPresentationLayerWithStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPresentationStyleAssignment_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProcedure_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProductDefinitionShape_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProductRepresentation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProductsOfCombustionProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProject_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProjectOrder_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProjectOrderRecord_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProjectionCurve_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProjectionElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertyBoundedValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertyConstraintRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertyDependencyRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertyEnumeratedValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertyEnumeration_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertyListValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertyReferenceValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertySet_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertySingleValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertyTableValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProtectiveDeviceType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProxy_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPumpType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcQuantityArea_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcQuantityCount_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcQuantityLength_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcQuantityTime_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcQuantityVolume_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcQuantityWeight_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRadiusDimension_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRailing_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRailingType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRamp_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRampFlight_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRampFlightType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRationalBezierCurve_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRectangleHollowProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRectangleProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRectangularPyramid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRectangularTrimmedSurface_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReferencesValueDocument_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRegularTimeSeries_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReinforcementBarProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReinforcementDefinitionProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReinforcingBar_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReinforcingMesh_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAggregates_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssignsTasks_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssignsToActor_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssignsToControl_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssignsToGroup_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssignsToProcess_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssignsToProduct_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssignsToProjectOrder_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssignsToResource_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssociates_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssociatesAppliedValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssociatesApproval_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssociatesClassification_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssociatesConstraint_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssociatesDocument_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssociatesLibrary_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssociatesMaterial_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssociatesProfileProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelConnectsElements_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelConnectsPathElements_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelConnectsPortToElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelConnectsPorts_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelConnectsStructuralActivity_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelConnectsStructuralElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelConnectsStructuralMember_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelConnectsWithEccentricity_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelConnectsWithRealizingElements_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelContainedInSpatialStructure_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelCoversBldgElements_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelCoversSpaces_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelDefinesByProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelDefinesByType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelFillsElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelFlowControlElements_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelInteractionRequirements_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelNests_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelOccupiesSpaces_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelOverridesProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelProjectsElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelReferencedInSpatialStructure_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelSchedulesCostItems_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelSequence_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelServicesBuildings_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelSpaceBoundary_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelVoidsElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelaxation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRepresentation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRepresentationContext_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRepresentationMap_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRevolvedAreaSolid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRibPlateProfileProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRightCircularCone_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRightCircularCylinder_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRoof_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRoundedEdgeFeature_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRoundedRectangleProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSIUnit_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSanitaryTerminalType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcScheduleTimeControl_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSectionProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSectionReinforcementProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSectionedSpine_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSensorType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcServiceLife_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcServiceLifeFactor_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcShapeAspect_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcShapeRepresentation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcShellBasedSurfaceModel_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSite_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSlab_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSlabType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSlippageConnectionCondition_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSoundProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSoundValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSpace_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSpaceHeaterType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSpaceProgram_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSpaceThermalLoadProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSpaceType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSphere_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStackTerminalType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStair_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStairFlight_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStairFlightType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralAnalysisModel_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralCurveConnection_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralCurveMember_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralCurveMemberVarying_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLinearAction_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLinearActionVarying_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLoadGroup_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLoadLinearForce_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLoadPlanarForce_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLoadSingleDisplacement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLoadSingleDisplacementDistortion_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLoadSingleForce_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLoadSingleForceWarping_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLoadTemperature_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralPlanarAction_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralPlanarActionVarying_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralPointAction_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralPointConnection_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralPointReaction_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralProfileProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralResultGroup_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralSteelProfileProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralSurfaceConnection_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralSurfaceMember_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralSurfaceMemberVarying_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuredDimensionCallout_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStyledItem_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStyledRepresentation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSubContractResource_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSubedge_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSurfaceCurveSweptAreaSolid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSurfaceOfLinearExtrusion_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSurfaceOfRevolution_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSurfaceStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSurfaceStyleLighting_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSurfaceStyleRefraction_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSurfaceStyleRendering_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSurfaceStyleShading_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSurfaceStyleWithTextures_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSweptDiskSolid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSwitchingDeviceType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSymbolStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSystem_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSystemFurnitureElementType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTShapeProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTable_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTableRow_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTankType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTask_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTelecomAddress_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTendon_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTendonAnchor_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTerminatorSymbol_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTextLiteral_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTextLiteralWithExtent_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTextStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTextStyleFontModel_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTextStyleForDefinedFont_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTextStyleTextModel_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTextStyleWithBoxCharacteristics_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTextureCoordinateGenerator_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTextureMap_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTextureVertex_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcThermalMaterialProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTimeSeriesReferenceRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTimeSeriesSchedule_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTimeSeriesValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTopologyRepresentation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTransformerType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTransportElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTransportElementType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTrapeziumProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTrimmedCurve_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTubeBundleType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTwoDirectionRepeatFactor_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTypeObject_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTypeProduct_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcUShapeProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcUnitAssignment_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcUnitaryEquipmentType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcValveType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcVector_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcVertex_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcVertexBasedTextureMap_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcVertexLoop_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcVertexPoint_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcVibrationIsolatorType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcVirtualElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcVirtualGridIntersection_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWall_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWallStandardCase_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWallType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWasteTerminalType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWaterProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWindow_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWindowLiningProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWindowPanelProperties_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWindowStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWorkPlan_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWorkSchedule_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcZShapeProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcZone_Map;
        /**
         */
        Step::RefLinkedList< Ifc2DCompositeCurve > m_refIfc2DCompositeCurveList;
        /**
         */
        Step::RefLinkedList< IfcActionRequest > m_refIfcActionRequestList;
        /**
         */
        Step::RefLinkedList< IfcActor > m_refIfcActorList;
        /**
         */
        Step::RefLinkedList< IfcActorRole > m_refIfcActorRoleList;
        /**
         */
        Step::RefLinkedList< IfcActuatorType > m_refIfcActuatorTypeList;
        /**
         */
        Step::RefLinkedList< IfcAddress > m_refIfcAddressList;
        /**
         */
        Step::RefLinkedList< IfcAirTerminalBoxType > m_refIfcAirTerminalBoxTypeList;
        /**
         */
        Step::RefLinkedList< IfcAirTerminalType > m_refIfcAirTerminalTypeList;
        /**
         */
        Step::RefLinkedList< IfcAirToAirHeatRecoveryType > m_refIfcAirToAirHeatRecoveryTypeList;
        /**
         */
        Step::RefLinkedList< IfcAlarmType > m_refIfcAlarmTypeList;
        /**
         */
        Step::RefLinkedList< IfcAngularDimension > m_refIfcAngularDimensionList;
        /**
         */
        Step::RefLinkedList< IfcAnnotation > m_refIfcAnnotationList;
        /**
         */
        Step::RefLinkedList< IfcAnnotationCurveOccurrence > m_refIfcAnnotationCurveOccurrenceList;
        /**
         */
        Step::RefLinkedList< IfcAnnotationFillArea > m_refIfcAnnotationFillAreaList;
        /**
         */
        Step::RefLinkedList< IfcAnnotationFillAreaOccurrence > m_refIfcAnnotationFillAreaOccurrenceList;
        /**
         */
        Step::RefLinkedList< IfcAnnotationOccurrence > m_refIfcAnnotationOccurrenceList;
        /**
         */
        Step::RefLinkedList< IfcAnnotationSurface > m_refIfcAnnotationSurfaceList;
        /**
         */
        Step::RefLinkedList< IfcAnnotationSurfaceOccurrence > m_refIfcAnnotationSurfaceOccurrenceList;
        /**
         */
        Step::RefLinkedList< IfcAnnotationSymbolOccurrence > m_refIfcAnnotationSymbolOccurrenceList;
        /**
         */
        Step::RefLinkedList< IfcAnnotationTextOccurrence > m_refIfcAnnotationTextOccurrenceList;
        /**
         */
        Step::RefLinkedList< IfcApplication > m_refIfcApplicationList;
        /**
         */
        Step::RefLinkedList< IfcAppliedValue > m_refIfcAppliedValueList;
        /**
         */
        Step::RefLinkedList< IfcAppliedValueRelationship > m_refIfcAppliedValueRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcApproval > m_refIfcApprovalList;
        /**
         */
        Step::RefLinkedList< IfcApprovalActorRelationship > m_refIfcApprovalActorRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcApprovalPropertyRelationship > m_refIfcApprovalPropertyRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcApprovalRelationship > m_refIfcApprovalRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcArbitraryClosedProfileDef > m_refIfcArbitraryClosedProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcArbitraryOpenProfileDef > m_refIfcArbitraryOpenProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcArbitraryProfileDefWithVoids > m_refIfcArbitraryProfileDefWithVoidsList;
        /**
         */
        Step::RefLinkedList< IfcAsset > m_refIfcAssetList;
        /**
         */
        Step::RefLinkedList< IfcAsymmetricIShapeProfileDef > m_refIfcAsymmetricIShapeProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcAxis1Placement > m_refIfcAxis1PlacementList;
        /**
         */
        Step::RefLinkedList< IfcAxis2Placement2D > m_refIfcAxis2Placement2DList;
        /**
         */
        Step::RefLinkedList< IfcAxis2Placement3D > m_refIfcAxis2Placement3DList;
        /**
         */
        Step::RefLinkedList< IfcBSplineCurve > m_refIfcBSplineCurveList;
        /**
         */
        Step::RefLinkedList< IfcBeam > m_refIfcBeamList;
        /**
         */
        Step::RefLinkedList< IfcBeamType > m_refIfcBeamTypeList;
        /**
         */
        Step::RefLinkedList< IfcBezierCurve > m_refIfcBezierCurveList;
        /**
         */
        Step::RefLinkedList< IfcBlobTexture > m_refIfcBlobTextureList;
        /**
         */
        Step::RefLinkedList< IfcBlock > m_refIfcBlockList;
        /**
         */
        Step::RefLinkedList< IfcBoilerType > m_refIfcBoilerTypeList;
        /**
         */
        Step::RefLinkedList< IfcBooleanClippingResult > m_refIfcBooleanClippingResultList;
        /**
         */
        Step::RefLinkedList< IfcBooleanResult > m_refIfcBooleanResultList;
        /**
         */
        Step::RefLinkedList< IfcBoundaryCondition > m_refIfcBoundaryConditionList;
        /**
         */
        Step::RefLinkedList< IfcBoundaryEdgeCondition > m_refIfcBoundaryEdgeConditionList;
        /**
         */
        Step::RefLinkedList< IfcBoundaryFaceCondition > m_refIfcBoundaryFaceConditionList;
        /**
         */
        Step::RefLinkedList< IfcBoundaryNodeCondition > m_refIfcBoundaryNodeConditionList;
        /**
         */
        Step::RefLinkedList< IfcBoundaryNodeConditionWarping > m_refIfcBoundaryNodeConditionWarpingList;
        /**
         */
        Step::RefLinkedList< IfcBoundedCurve > m_refIfcBoundedCurveList;
        /**
         */
        Step::RefLinkedList< IfcBoundedSurface > m_refIfcBoundedSurfaceList;
        /**
         */
        Step::RefLinkedList< IfcBoundingBox > m_refIfcBoundingBoxList;
        /**
         */
        Step::RefLinkedList< IfcBoxedHalfSpace > m_refIfcBoxedHalfSpaceList;
        /**
         */
        Step::RefLinkedList< IfcBuilding > m_refIfcBuildingList;
        /**
         */
        Step::RefLinkedList< IfcBuildingElement > m_refIfcBuildingElementList;
        /**
         */
        Step::RefLinkedList< IfcBuildingElementComponent > m_refIfcBuildingElementComponentList;
        /**
         */
        Step::RefLinkedList< IfcBuildingElementPart > m_refIfcBuildingElementPartList;
        /**
         */
        Step::RefLinkedList< IfcBuildingElementProxy > m_refIfcBuildingElementProxyList;
        /**
         */
        Step::RefLinkedList< IfcBuildingElementProxyType > m_refIfcBuildingElementProxyTypeList;
        /**
         */
        Step::RefLinkedList< IfcBuildingElementType > m_refIfcBuildingElementTypeList;
        /**
         */
        Step::RefLinkedList< IfcBuildingStorey > m_refIfcBuildingStoreyList;
        /**
         */
        Step::RefLinkedList< IfcCShapeProfileDef > m_refIfcCShapeProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcCableCarrierFittingType > m_refIfcCableCarrierFittingTypeList;
        /**
         */
        Step::RefLinkedList< IfcCableCarrierSegmentType > m_refIfcCableCarrierSegmentTypeList;
        /**
         */
        Step::RefLinkedList< IfcCableSegmentType > m_refIfcCableSegmentTypeList;
        /**
         */
        Step::RefLinkedList< IfcCalendarDate > m_refIfcCalendarDateList;
        /**
         */
        Step::RefLinkedList< IfcCartesianPoint > m_refIfcCartesianPointList;
        /**
         */
        Step::RefLinkedList< IfcCartesianTransformationOperator > m_refIfcCartesianTransformationOperatorList;
        /**
         */
        Step::RefLinkedList< IfcCartesianTransformationOperator2D > m_refIfcCartesianTransformationOperator2DList;
        /**
         */
        Step::RefLinkedList< IfcCartesianTransformationOperator2DnonUniform > m_refIfcCartesianTransformationOperator2DnonUniformList;
        /**
         */
        Step::RefLinkedList< IfcCartesianTransformationOperator3D > m_refIfcCartesianTransformationOperator3DList;
        /**
         */
        Step::RefLinkedList< IfcCartesianTransformationOperator3DnonUniform > m_refIfcCartesianTransformationOperator3DnonUniformList;
        /**
         */
        Step::RefLinkedList< IfcCenterLineProfileDef > m_refIfcCenterLineProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcChamferEdgeFeature > m_refIfcChamferEdgeFeatureList;
        /**
         */
        Step::RefLinkedList< IfcChillerType > m_refIfcChillerTypeList;
        /**
         */
        Step::RefLinkedList< IfcCircle > m_refIfcCircleList;
        /**
         */
        Step::RefLinkedList< IfcCircleHollowProfileDef > m_refIfcCircleHollowProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcCircleProfileDef > m_refIfcCircleProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcClassification > m_refIfcClassificationList;
        /**
         */
        Step::RefLinkedList< IfcClassificationItem > m_refIfcClassificationItemList;
        /**
         */
        Step::RefLinkedList< IfcClassificationItemRelationship > m_refIfcClassificationItemRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcClassificationNotation > m_refIfcClassificationNotationList;
        /**
         */
        Step::RefLinkedList< IfcClassificationNotationFacet > m_refIfcClassificationNotationFacetList;
        /**
         */
        Step::RefLinkedList< IfcClassificationReference > m_refIfcClassificationReferenceList;
        /**
         */
        Step::RefLinkedList< IfcClosedShell > m_refIfcClosedShellList;
        /**
         */
        Step::RefLinkedList< IfcCoilType > m_refIfcCoilTypeList;
        /**
         */
        Step::RefLinkedList< IfcColourRgb > m_refIfcColourRgbList;
        /**
         */
        Step::RefLinkedList< IfcColourSpecification > m_refIfcColourSpecificationList;
        /**
         */
        Step::RefLinkedList< IfcColumn > m_refIfcColumnList;
        /**
         */
        Step::RefLinkedList< IfcColumnType > m_refIfcColumnTypeList;
        /**
         */
        Step::RefLinkedList< IfcComplexProperty > m_refIfcComplexPropertyList;
        /**
         */
        Step::RefLinkedList< IfcCompositeCurve > m_refIfcCompositeCurveList;
        /**
         */
        Step::RefLinkedList< IfcCompositeCurveSegment > m_refIfcCompositeCurveSegmentList;
        /**
         */
        Step::RefLinkedList< IfcCompositeProfileDef > m_refIfcCompositeProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcCompressorType > m_refIfcCompressorTypeList;
        /**
         */
        Step::RefLinkedList< IfcCondenserType > m_refIfcCondenserTypeList;
        /**
         */
        Step::RefLinkedList< IfcCondition > m_refIfcConditionList;
        /**
         */
        Step::RefLinkedList< IfcConditionCriterion > m_refIfcConditionCriterionList;
        /**
         */
        Step::RefLinkedList< IfcConic > m_refIfcConicList;
        /**
         */
        Step::RefLinkedList< IfcConnectedFaceSet > m_refIfcConnectedFaceSetList;
        /**
         */
        Step::RefLinkedList< IfcConnectionCurveGeometry > m_refIfcConnectionCurveGeometryList;
        /**
         */
        Step::RefLinkedList< IfcConnectionGeometry > m_refIfcConnectionGeometryList;
        /**
         */
        Step::RefLinkedList< IfcConnectionPointEccentricity > m_refIfcConnectionPointEccentricityList;
        /**
         */
        Step::RefLinkedList< IfcConnectionPointGeometry > m_refIfcConnectionPointGeometryList;
        /**
         */
        Step::RefLinkedList< IfcConnectionPortGeometry > m_refIfcConnectionPortGeometryList;
        /**
         */
        Step::RefLinkedList< IfcConnectionSurfaceGeometry > m_refIfcConnectionSurfaceGeometryList;
        /**
         */
        Step::RefLinkedList< IfcConstraint > m_refIfcConstraintList;
        /**
         */
        Step::RefLinkedList< IfcConstraintAggregationRelationship > m_refIfcConstraintAggregationRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcConstraintClassificationRelationship > m_refIfcConstraintClassificationRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcConstraintRelationship > m_refIfcConstraintRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcConstructionEquipmentResource > m_refIfcConstructionEquipmentResourceList;
        /**
         */
        Step::RefLinkedList< IfcConstructionMaterialResource > m_refIfcConstructionMaterialResourceList;
        /**
         */
        Step::RefLinkedList< IfcConstructionProductResource > m_refIfcConstructionProductResourceList;
        /**
         */
        Step::RefLinkedList< IfcConstructionResource > m_refIfcConstructionResourceList;
        /**
         */
        Step::RefLinkedList< IfcContextDependentUnit > m_refIfcContextDependentUnitList;
        /**
         */
        Step::RefLinkedList< IfcControl > m_refIfcControlList;
        /**
         */
        Step::RefLinkedList< IfcControllerType > m_refIfcControllerTypeList;
        /**
         */
        Step::RefLinkedList< IfcConversionBasedUnit > m_refIfcConversionBasedUnitList;
        /**
         */
        Step::RefLinkedList< IfcCooledBeamType > m_refIfcCooledBeamTypeList;
        /**
         */
        Step::RefLinkedList< IfcCoolingTowerType > m_refIfcCoolingTowerTypeList;
        /**
         */
        Step::RefLinkedList< IfcCoordinatedUniversalTimeOffset > m_refIfcCoordinatedUniversalTimeOffsetList;
        /**
         */
        Step::RefLinkedList< IfcCostItem > m_refIfcCostItemList;
        /**
         */
        Step::RefLinkedList< IfcCostSchedule > m_refIfcCostScheduleList;
        /**
         */
        Step::RefLinkedList< IfcCostValue > m_refIfcCostValueList;
        /**
         */
        Step::RefLinkedList< IfcCovering > m_refIfcCoveringList;
        /**
         */
        Step::RefLinkedList< IfcCoveringType > m_refIfcCoveringTypeList;
        /**
         */
        Step::RefLinkedList< IfcCraneRailAShapeProfileDef > m_refIfcCraneRailAShapeProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcCraneRailFShapeProfileDef > m_refIfcCraneRailFShapeProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcCrewResource > m_refIfcCrewResourceList;
        /**
         */
        Step::RefLinkedList< IfcCsgPrimitive3D > m_refIfcCsgPrimitive3DList;
        /**
         */
        Step::RefLinkedList< IfcCsgSolid > m_refIfcCsgSolidList;
        /**
         */
        Step::RefLinkedList< IfcCurrencyRelationship > m_refIfcCurrencyRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcCurtainWall > m_refIfcCurtainWallList;
        /**
         */
        Step::RefLinkedList< IfcCurtainWallType > m_refIfcCurtainWallTypeList;
        /**
         */
        Step::RefLinkedList< IfcCurve > m_refIfcCurveList;
        /**
         */
        Step::RefLinkedList< IfcCurveBoundedPlane > m_refIfcCurveBoundedPlaneList;
        /**
         */
        Step::RefLinkedList< IfcCurveStyle > m_refIfcCurveStyleList;
        /**
         */
        Step::RefLinkedList< IfcCurveStyleFont > m_refIfcCurveStyleFontList;
        /**
         */
        Step::RefLinkedList< IfcCurveStyleFontAndScaling > m_refIfcCurveStyleFontAndScalingList;
        /**
         */
        Step::RefLinkedList< IfcCurveStyleFontPattern > m_refIfcCurveStyleFontPatternList;
        /**
         */
        Step::RefLinkedList< IfcDamperType > m_refIfcDamperTypeList;
        /**
         */
        Step::RefLinkedList< IfcDateAndTime > m_refIfcDateAndTimeList;
        /**
         */
        Step::RefLinkedList< IfcDefinedSymbol > m_refIfcDefinedSymbolList;
        /**
         */
        Step::RefLinkedList< IfcDerivedProfileDef > m_refIfcDerivedProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcDerivedUnit > m_refIfcDerivedUnitList;
        /**
         */
        Step::RefLinkedList< IfcDerivedUnitElement > m_refIfcDerivedUnitElementList;
        /**
         */
        Step::RefLinkedList< IfcDiameterDimension > m_refIfcDiameterDimensionList;
        /**
         */
        Step::RefLinkedList< IfcDimensionCalloutRelationship > m_refIfcDimensionCalloutRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcDimensionCurve > m_refIfcDimensionCurveList;
        /**
         */
        Step::RefLinkedList< IfcDimensionCurveDirectedCallout > m_refIfcDimensionCurveDirectedCalloutList;
        /**
         */
        Step::RefLinkedList< IfcDimensionCurveTerminator > m_refIfcDimensionCurveTerminatorList;
        /**
         */
        Step::RefLinkedList< IfcDimensionPair > m_refIfcDimensionPairList;
        /**
         */
        Step::RefLinkedList< IfcDimensionalExponents > m_refIfcDimensionalExponentsList;
        /**
         */
        Step::RefLinkedList< IfcDirection > m_refIfcDirectionList;
        /**
         */
        Step::RefLinkedList< IfcDiscreteAccessory > m_refIfcDiscreteAccessoryList;
        /**
         */
        Step::RefLinkedList< IfcDiscreteAccessoryType > m_refIfcDiscreteAccessoryTypeList;
        /**
         */
        Step::RefLinkedList< IfcDistributionChamberElement > m_refIfcDistributionChamberElementList;
        /**
         */
        Step::RefLinkedList< IfcDistributionChamberElementType > m_refIfcDistributionChamberElementTypeList;
        /**
         */
        Step::RefLinkedList< IfcDistributionControlElement > m_refIfcDistributionControlElementList;
        /**
         */
        Step::RefLinkedList< IfcDistributionControlElementType > m_refIfcDistributionControlElementTypeList;
        /**
         */
        Step::RefLinkedList< IfcDistributionElement > m_refIfcDistributionElementList;
        /**
         */
        Step::RefLinkedList< IfcDistributionElementType > m_refIfcDistributionElementTypeList;
        /**
         */
        Step::RefLinkedList< IfcDistributionFlowElement > m_refIfcDistributionFlowElementList;
        /**
         */
        Step::RefLinkedList< IfcDistributionFlowElementType > m_refIfcDistributionFlowElementTypeList;
        /**
         */
        Step::RefLinkedList< IfcDistributionPort > m_refIfcDistributionPortList;
        /**
         */
        Step::RefLinkedList< IfcDocumentElectronicFormat > m_refIfcDocumentElectronicFormatList;
        /**
         */
        Step::RefLinkedList< IfcDocumentInformation > m_refIfcDocumentInformationList;
        /**
         */
        Step::RefLinkedList< IfcDocumentInformationRelationship > m_refIfcDocumentInformationRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcDocumentReference > m_refIfcDocumentReferenceList;
        /**
         */
        Step::RefLinkedList< IfcDoor > m_refIfcDoorList;
        /**
         */
        Step::RefLinkedList< IfcDoorLiningProperties > m_refIfcDoorLiningPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcDoorPanelProperties > m_refIfcDoorPanelPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcDoorStyle > m_refIfcDoorStyleList;
        /**
         */
        Step::RefLinkedList< IfcDraughtingCallout > m_refIfcDraughtingCalloutList;
        /**
         */
        Step::RefLinkedList< IfcDraughtingCalloutRelationship > m_refIfcDraughtingCalloutRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcDraughtingPreDefinedColour > m_refIfcDraughtingPreDefinedColourList;
        /**
         */
        Step::RefLinkedList< IfcDraughtingPreDefinedCurveFont > m_refIfcDraughtingPreDefinedCurveFontList;
        /**
         */
        Step::RefLinkedList< IfcDraughtingPreDefinedTextFont > m_refIfcDraughtingPreDefinedTextFontList;
        /**
         */
        Step::RefLinkedList< IfcDuctFittingType > m_refIfcDuctFittingTypeList;
        /**
         */
        Step::RefLinkedList< IfcDuctSegmentType > m_refIfcDuctSegmentTypeList;
        /**
         */
        Step::RefLinkedList< IfcDuctSilencerType > m_refIfcDuctSilencerTypeList;
        /**
         */
        Step::RefLinkedList< IfcEdge > m_refIfcEdgeList;
        /**
         */
        Step::RefLinkedList< IfcEdgeCurve > m_refIfcEdgeCurveList;
        /**
         */
        Step::RefLinkedList< IfcEdgeFeature > m_refIfcEdgeFeatureList;
        /**
         */
        Step::RefLinkedList< IfcEdgeLoop > m_refIfcEdgeLoopList;
        /**
         */
        Step::RefLinkedList< IfcElectricApplianceType > m_refIfcElectricApplianceTypeList;
        /**
         */
        Step::RefLinkedList< IfcElectricDistributionPoint > m_refIfcElectricDistributionPointList;
        /**
         */
        Step::RefLinkedList< IfcElectricFlowStorageDeviceType > m_refIfcElectricFlowStorageDeviceTypeList;
        /**
         */
        Step::RefLinkedList< IfcElectricGeneratorType > m_refIfcElectricGeneratorTypeList;
        /**
         */
        Step::RefLinkedList< IfcElectricHeaterType > m_refIfcElectricHeaterTypeList;
        /**
         */
        Step::RefLinkedList< IfcElectricMotorType > m_refIfcElectricMotorTypeList;
        /**
         */
        Step::RefLinkedList< IfcElectricTimeControlType > m_refIfcElectricTimeControlTypeList;
        /**
         */
        Step::RefLinkedList< IfcElectricalBaseProperties > m_refIfcElectricalBasePropertiesList;
        /**
         */
        Step::RefLinkedList< IfcElectricalCircuit > m_refIfcElectricalCircuitList;
        /**
         */
        Step::RefLinkedList< IfcElectricalElement > m_refIfcElectricalElementList;
        /**
         */
        Step::RefLinkedList< IfcElement > m_refIfcElementList;
        /**
         */
        Step::RefLinkedList< IfcElementAssembly > m_refIfcElementAssemblyList;
        /**
         */
        Step::RefLinkedList< IfcElementComponent > m_refIfcElementComponentList;
        /**
         */
        Step::RefLinkedList< IfcElementComponentType > m_refIfcElementComponentTypeList;
        /**
         */
        Step::RefLinkedList< IfcElementQuantity > m_refIfcElementQuantityList;
        /**
         */
        Step::RefLinkedList< IfcElementType > m_refIfcElementTypeList;
        /**
         */
        Step::RefLinkedList< IfcElementarySurface > m_refIfcElementarySurfaceList;
        /**
         */
        Step::RefLinkedList< IfcEllipse > m_refIfcEllipseList;
        /**
         */
        Step::RefLinkedList< IfcEllipseProfileDef > m_refIfcEllipseProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcEnergyConversionDevice > m_refIfcEnergyConversionDeviceList;
        /**
         */
        Step::RefLinkedList< IfcEnergyConversionDeviceType > m_refIfcEnergyConversionDeviceTypeList;
        /**
         */
        Step::RefLinkedList< IfcEnergyProperties > m_refIfcEnergyPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcEnvironmentalImpactValue > m_refIfcEnvironmentalImpactValueList;
        /**
         */
        Step::RefLinkedList< IfcEquipmentElement > m_refIfcEquipmentElementList;
        /**
         */
        Step::RefLinkedList< IfcEquipmentStandard > m_refIfcEquipmentStandardList;
        /**
         */
        Step::RefLinkedList< IfcEvaporativeCoolerType > m_refIfcEvaporativeCoolerTypeList;
        /**
         */
        Step::RefLinkedList< IfcEvaporatorType > m_refIfcEvaporatorTypeList;
        /**
         */
        Step::RefLinkedList< IfcExtendedMaterialProperties > m_refIfcExtendedMaterialPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcExternalReference > m_refIfcExternalReferenceList;
        /**
         */
        Step::RefLinkedList< IfcExternallyDefinedHatchStyle > m_refIfcExternallyDefinedHatchStyleList;
        /**
         */
        Step::RefLinkedList< IfcExternallyDefinedSurfaceStyle > m_refIfcExternallyDefinedSurfaceStyleList;
        /**
         */
        Step::RefLinkedList< IfcExternallyDefinedSymbol > m_refIfcExternallyDefinedSymbolList;
        /**
         */
        Step::RefLinkedList< IfcExternallyDefinedTextFont > m_refIfcExternallyDefinedTextFontList;
        /**
         */
        Step::RefLinkedList< IfcExtrudedAreaSolid > m_refIfcExtrudedAreaSolidList;
        /**
         */
        Step::RefLinkedList< IfcFace > m_refIfcFaceList;
        /**
         */
        Step::RefLinkedList< IfcFaceBasedSurfaceModel > m_refIfcFaceBasedSurfaceModelList;
        /**
         */
        Step::RefLinkedList< IfcFaceBound > m_refIfcFaceBoundList;
        /**
         */
        Step::RefLinkedList< IfcFaceOuterBound > m_refIfcFaceOuterBoundList;
        /**
         */
        Step::RefLinkedList< IfcFaceSurface > m_refIfcFaceSurfaceList;
        /**
         */
        Step::RefLinkedList< IfcFacetedBrep > m_refIfcFacetedBrepList;
        /**
         */
        Step::RefLinkedList< IfcFacetedBrepWithVoids > m_refIfcFacetedBrepWithVoidsList;
        /**
         */
        Step::RefLinkedList< IfcFailureConnectionCondition > m_refIfcFailureConnectionConditionList;
        /**
         */
        Step::RefLinkedList< IfcFanType > m_refIfcFanTypeList;
        /**
         */
        Step::RefLinkedList< IfcFastener > m_refIfcFastenerList;
        /**
         */
        Step::RefLinkedList< IfcFastenerType > m_refIfcFastenerTypeList;
        /**
         */
        Step::RefLinkedList< IfcFeatureElement > m_refIfcFeatureElementList;
        /**
         */
        Step::RefLinkedList< IfcFeatureElementAddition > m_refIfcFeatureElementAdditionList;
        /**
         */
        Step::RefLinkedList< IfcFeatureElementSubtraction > m_refIfcFeatureElementSubtractionList;
        /**
         */
        Step::RefLinkedList< IfcFillAreaStyle > m_refIfcFillAreaStyleList;
        /**
         */
        Step::RefLinkedList< IfcFillAreaStyleHatching > m_refIfcFillAreaStyleHatchingList;
        /**
         */
        Step::RefLinkedList< IfcFillAreaStyleTileSymbolWithStyle > m_refIfcFillAreaStyleTileSymbolWithStyleList;
        /**
         */
        Step::RefLinkedList< IfcFillAreaStyleTiles > m_refIfcFillAreaStyleTilesList;
        /**
         */
        Step::RefLinkedList< IfcFilterType > m_refIfcFilterTypeList;
        /**
         */
        Step::RefLinkedList< IfcFireSuppressionTerminalType > m_refIfcFireSuppressionTerminalTypeList;
        /**
         */
        Step::RefLinkedList< IfcFlowController > m_refIfcFlowControllerList;
        /**
         */
        Step::RefLinkedList< IfcFlowControllerType > m_refIfcFlowControllerTypeList;
        /**
         */
        Step::RefLinkedList< IfcFlowFitting > m_refIfcFlowFittingList;
        /**
         */
        Step::RefLinkedList< IfcFlowFittingType > m_refIfcFlowFittingTypeList;
        /**
         */
        Step::RefLinkedList< IfcFlowInstrumentType > m_refIfcFlowInstrumentTypeList;
        /**
         */
        Step::RefLinkedList< IfcFlowMeterType > m_refIfcFlowMeterTypeList;
        /**
         */
        Step::RefLinkedList< IfcFlowMovingDevice > m_refIfcFlowMovingDeviceList;
        /**
         */
        Step::RefLinkedList< IfcFlowMovingDeviceType > m_refIfcFlowMovingDeviceTypeList;
        /**
         */
        Step::RefLinkedList< IfcFlowSegment > m_refIfcFlowSegmentList;
        /**
         */
        Step::RefLinkedList< IfcFlowSegmentType > m_refIfcFlowSegmentTypeList;
        /**
         */
        Step::RefLinkedList< IfcFlowStorageDevice > m_refIfcFlowStorageDeviceList;
        /**
         */
        Step::RefLinkedList< IfcFlowStorageDeviceType > m_refIfcFlowStorageDeviceTypeList;
        /**
         */
        Step::RefLinkedList< IfcFlowTerminal > m_refIfcFlowTerminalList;
        /**
         */
        Step::RefLinkedList< IfcFlowTerminalType > m_refIfcFlowTerminalTypeList;
        /**
         */
        Step::RefLinkedList< IfcFlowTreatmentDevice > m_refIfcFlowTreatmentDeviceList;
        /**
         */
        Step::RefLinkedList< IfcFlowTreatmentDeviceType > m_refIfcFlowTreatmentDeviceTypeList;
        /**
         */
        Step::RefLinkedList< IfcFluidFlowProperties > m_refIfcFluidFlowPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcFooting > m_refIfcFootingList;
        /**
         */
        Step::RefLinkedList< IfcFuelProperties > m_refIfcFuelPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcFurnishingElement > m_refIfcFurnishingElementList;
        /**
         */
        Step::RefLinkedList< IfcFurnishingElementType > m_refIfcFurnishingElementTypeList;
        /**
         */
        Step::RefLinkedList< IfcFurnitureStandard > m_refIfcFurnitureStandardList;
        /**
         */
        Step::RefLinkedList< IfcFurnitureType > m_refIfcFurnitureTypeList;
        /**
         */
        Step::RefLinkedList< IfcGasTerminalType > m_refIfcGasTerminalTypeList;
        /**
         */
        Step::RefLinkedList< IfcGeneralMaterialProperties > m_refIfcGeneralMaterialPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcGeneralProfileProperties > m_refIfcGeneralProfilePropertiesList;
        /**
         */
        Step::RefLinkedList< IfcGeometricCurveSet > m_refIfcGeometricCurveSetList;
        /**
         */
        Step::RefLinkedList< IfcGeometricRepresentationContext > m_refIfcGeometricRepresentationContextList;
        /**
         */
        Step::RefLinkedList< IfcGeometricRepresentationItem > m_refIfcGeometricRepresentationItemList;
        /**
         */
        Step::RefLinkedList< IfcGeometricRepresentationSubContext > m_refIfcGeometricRepresentationSubContextList;
        /**
         */
        Step::RefLinkedList< IfcGeometricSet > m_refIfcGeometricSetList;
        /**
         */
        Step::RefLinkedList< IfcGrid > m_refIfcGridList;
        /**
         */
        Step::RefLinkedList< IfcGridAxis > m_refIfcGridAxisList;
        /**
         */
        Step::RefLinkedList< IfcGridPlacement > m_refIfcGridPlacementList;
        /**
         */
        Step::RefLinkedList< IfcGroup > m_refIfcGroupList;
        /**
         */
        Step::RefLinkedList< IfcHalfSpaceSolid > m_refIfcHalfSpaceSolidList;
        /**
         */
        Step::RefLinkedList< IfcHeatExchangerType > m_refIfcHeatExchangerTypeList;
        /**
         */
        Step::RefLinkedList< IfcHumidifierType > m_refIfcHumidifierTypeList;
        /**
         */
        Step::RefLinkedList< IfcHygroscopicMaterialProperties > m_refIfcHygroscopicMaterialPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcIShapeProfileDef > m_refIfcIShapeProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcImageTexture > m_refIfcImageTextureList;
        /**
         */
        Step::RefLinkedList< IfcInventory > m_refIfcInventoryList;
        /**
         */
        Step::RefLinkedList< IfcIrregularTimeSeries > m_refIfcIrregularTimeSeriesList;
        /**
         */
        Step::RefLinkedList< IfcIrregularTimeSeriesValue > m_refIfcIrregularTimeSeriesValueList;
        /**
         */
        Step::RefLinkedList< IfcJunctionBoxType > m_refIfcJunctionBoxTypeList;
        /**
         */
        Step::RefLinkedList< IfcLShapeProfileDef > m_refIfcLShapeProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcLaborResource > m_refIfcLaborResourceList;
        /**
         */
        Step::RefLinkedList< IfcLampType > m_refIfcLampTypeList;
        /**
         */
        Step::RefLinkedList< IfcLibraryInformation > m_refIfcLibraryInformationList;
        /**
         */
        Step::RefLinkedList< IfcLibraryReference > m_refIfcLibraryReferenceList;
        /**
         */
        Step::RefLinkedList< IfcLightDistributionData > m_refIfcLightDistributionDataList;
        /**
         */
        Step::RefLinkedList< IfcLightFixtureType > m_refIfcLightFixtureTypeList;
        /**
         */
        Step::RefLinkedList< IfcLightIntensityDistribution > m_refIfcLightIntensityDistributionList;
        /**
         */
        Step::RefLinkedList< IfcLightSource > m_refIfcLightSourceList;
        /**
         */
        Step::RefLinkedList< IfcLightSourceAmbient > m_refIfcLightSourceAmbientList;
        /**
         */
        Step::RefLinkedList< IfcLightSourceDirectional > m_refIfcLightSourceDirectionalList;
        /**
         */
        Step::RefLinkedList< IfcLightSourceGoniometric > m_refIfcLightSourceGoniometricList;
        /**
         */
        Step::RefLinkedList< IfcLightSourcePositional > m_refIfcLightSourcePositionalList;
        /**
         */
        Step::RefLinkedList< IfcLightSourceSpot > m_refIfcLightSourceSpotList;
        /**
         */
        Step::RefLinkedList< IfcLine > m_refIfcLineList;
        /**
         */
        Step::RefLinkedList< IfcLinearDimension > m_refIfcLinearDimensionList;
        /**
         */
        Step::RefLinkedList< IfcLocalPlacement > m_refIfcLocalPlacementList;
        /**
         */
        Step::RefLinkedList< IfcLocalTime > m_refIfcLocalTimeList;
        /**
         */
        Step::RefLinkedList< IfcLoop > m_refIfcLoopList;
        /**
         */
        Step::RefLinkedList< IfcManifoldSolidBrep > m_refIfcManifoldSolidBrepList;
        /**
         */
        Step::RefLinkedList< IfcMappedItem > m_refIfcMappedItemList;
        /**
         */
        Step::RefLinkedList< IfcMaterial > m_refIfcMaterialList;
        /**
         */
        Step::RefLinkedList< IfcMaterialClassificationRelationship > m_refIfcMaterialClassificationRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcMaterialDefinitionRepresentation > m_refIfcMaterialDefinitionRepresentationList;
        /**
         */
        Step::RefLinkedList< IfcMaterialLayer > m_refIfcMaterialLayerList;
        /**
         */
        Step::RefLinkedList< IfcMaterialLayerSet > m_refIfcMaterialLayerSetList;
        /**
         */
        Step::RefLinkedList< IfcMaterialLayerSetUsage > m_refIfcMaterialLayerSetUsageList;
        /**
         */
        Step::RefLinkedList< IfcMaterialList > m_refIfcMaterialListList;
        /**
         */
        Step::RefLinkedList< IfcMaterialProperties > m_refIfcMaterialPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcMeasureWithUnit > m_refIfcMeasureWithUnitList;
        /**
         */
        Step::RefLinkedList< IfcMechanicalConcreteMaterialProperties > m_refIfcMechanicalConcreteMaterialPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcMechanicalFastener > m_refIfcMechanicalFastenerList;
        /**
         */
        Step::RefLinkedList< IfcMechanicalFastenerType > m_refIfcMechanicalFastenerTypeList;
        /**
         */
        Step::RefLinkedList< IfcMechanicalMaterialProperties > m_refIfcMechanicalMaterialPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcMechanicalSteelMaterialProperties > m_refIfcMechanicalSteelMaterialPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcMember > m_refIfcMemberList;
        /**
         */
        Step::RefLinkedList< IfcMemberType > m_refIfcMemberTypeList;
        /**
         */
        Step::RefLinkedList< IfcMetric > m_refIfcMetricList;
        /**
         */
        Step::RefLinkedList< IfcMonetaryUnit > m_refIfcMonetaryUnitList;
        /**
         */
        Step::RefLinkedList< IfcMotorConnectionType > m_refIfcMotorConnectionTypeList;
        /**
         */
        Step::RefLinkedList< IfcMove > m_refIfcMoveList;
        /**
         */
        Step::RefLinkedList< IfcNamedUnit > m_refIfcNamedUnitList;
        /**
         */
        Step::RefLinkedList< IfcObject > m_refIfcObjectList;
        /**
         */
        Step::RefLinkedList< IfcObjectDefinition > m_refIfcObjectDefinitionList;
        /**
         */
        Step::RefLinkedList< IfcObjectPlacement > m_refIfcObjectPlacementList;
        /**
         */
        Step::RefLinkedList< IfcObjective > m_refIfcObjectiveList;
        /**
         */
        Step::RefLinkedList< IfcOccupant > m_refIfcOccupantList;
        /**
         */
        Step::RefLinkedList< IfcOffsetCurve2D > m_refIfcOffsetCurve2DList;
        /**
         */
        Step::RefLinkedList< IfcOffsetCurve3D > m_refIfcOffsetCurve3DList;
        /**
         */
        Step::RefLinkedList< IfcOneDirectionRepeatFactor > m_refIfcOneDirectionRepeatFactorList;
        /**
         */
        Step::RefLinkedList< IfcOpenShell > m_refIfcOpenShellList;
        /**
         */
        Step::RefLinkedList< IfcOpeningElement > m_refIfcOpeningElementList;
        /**
         */
        Step::RefLinkedList< IfcOpticalMaterialProperties > m_refIfcOpticalMaterialPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcOrderAction > m_refIfcOrderActionList;
        /**
         */
        Step::RefLinkedList< IfcOrganization > m_refIfcOrganizationList;
        /**
         */
        Step::RefLinkedList< IfcOrganizationRelationship > m_refIfcOrganizationRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcOrientedEdge > m_refIfcOrientedEdgeList;
        /**
         */
        Step::RefLinkedList< IfcOutletType > m_refIfcOutletTypeList;
        /**
         */
        Step::RefLinkedList< IfcOwnerHistory > m_refIfcOwnerHistoryList;
        /**
         */
        Step::RefLinkedList< IfcParameterizedProfileDef > m_refIfcParameterizedProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcPath > m_refIfcPathList;
        /**
         */
        Step::RefLinkedList< IfcPerformanceHistory > m_refIfcPerformanceHistoryList;
        /**
         */
        Step::RefLinkedList< IfcPermeableCoveringProperties > m_refIfcPermeableCoveringPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcPermit > m_refIfcPermitList;
        /**
         */
        Step::RefLinkedList< IfcPerson > m_refIfcPersonList;
        /**
         */
        Step::RefLinkedList< IfcPersonAndOrganization > m_refIfcPersonAndOrganizationList;
        /**
         */
        Step::RefLinkedList< IfcPhysicalComplexQuantity > m_refIfcPhysicalComplexQuantityList;
        /**
         */
        Step::RefLinkedList< IfcPhysicalQuantity > m_refIfcPhysicalQuantityList;
        /**
         */
        Step::RefLinkedList< IfcPhysicalSimpleQuantity > m_refIfcPhysicalSimpleQuantityList;
        /**
         */
        Step::RefLinkedList< IfcPile > m_refIfcPileList;
        /**
         */
        Step::RefLinkedList< IfcPipeFittingType > m_refIfcPipeFittingTypeList;
        /**
         */
        Step::RefLinkedList< IfcPipeSegmentType > m_refIfcPipeSegmentTypeList;
        /**
         */
        Step::RefLinkedList< IfcPixelTexture > m_refIfcPixelTextureList;
        /**
         */
        Step::RefLinkedList< IfcPlacement > m_refIfcPlacementList;
        /**
         */
        Step::RefLinkedList< IfcPlanarBox > m_refIfcPlanarBoxList;
        /**
         */
        Step::RefLinkedList< IfcPlanarExtent > m_refIfcPlanarExtentList;
        /**
         */
        Step::RefLinkedList< IfcPlane > m_refIfcPlaneList;
        /**
         */
        Step::RefLinkedList< IfcPlate > m_refIfcPlateList;
        /**
         */
        Step::RefLinkedList< IfcPlateType > m_refIfcPlateTypeList;
        /**
         */
        Step::RefLinkedList< IfcPoint > m_refIfcPointList;
        /**
         */
        Step::RefLinkedList< IfcPointOnCurve > m_refIfcPointOnCurveList;
        /**
         */
        Step::RefLinkedList< IfcPointOnSurface > m_refIfcPointOnSurfaceList;
        /**
         */
        Step::RefLinkedList< IfcPolyLoop > m_refIfcPolyLoopList;
        /**
         */
        Step::RefLinkedList< IfcPolygonalBoundedHalfSpace > m_refIfcPolygonalBoundedHalfSpaceList;
        /**
         */
        Step::RefLinkedList< IfcPolyline > m_refIfcPolylineList;
        /**
         */
        Step::RefLinkedList< IfcPort > m_refIfcPortList;
        /**
         */
        Step::RefLinkedList< IfcPostalAddress > m_refIfcPostalAddressList;
        /**
         */
        Step::RefLinkedList< IfcPreDefinedColour > m_refIfcPreDefinedColourList;
        /**
         */
        Step::RefLinkedList< IfcPreDefinedCurveFont > m_refIfcPreDefinedCurveFontList;
        /**
         */
        Step::RefLinkedList< IfcPreDefinedDimensionSymbol > m_refIfcPreDefinedDimensionSymbolList;
        /**
         */
        Step::RefLinkedList< IfcPreDefinedItem > m_refIfcPreDefinedItemList;
        /**
         */
        Step::RefLinkedList< IfcPreDefinedPointMarkerSymbol > m_refIfcPreDefinedPointMarkerSymbolList;
        /**
         */
        Step::RefLinkedList< IfcPreDefinedSymbol > m_refIfcPreDefinedSymbolList;
        /**
         */
        Step::RefLinkedList< IfcPreDefinedTerminatorSymbol > m_refIfcPreDefinedTerminatorSymbolList;
        /**
         */
        Step::RefLinkedList< IfcPreDefinedTextFont > m_refIfcPreDefinedTextFontList;
        /**
         */
        Step::RefLinkedList< IfcPresentationLayerAssignment > m_refIfcPresentationLayerAssignmentList;
        /**
         */
        Step::RefLinkedList< IfcPresentationLayerWithStyle > m_refIfcPresentationLayerWithStyleList;
        /**
         */
        Step::RefLinkedList< IfcPresentationStyle > m_refIfcPresentationStyleList;
        /**
         */
        Step::RefLinkedList< IfcPresentationStyleAssignment > m_refIfcPresentationStyleAssignmentList;
        /**
         */
        Step::RefLinkedList< IfcProcedure > m_refIfcProcedureList;
        /**
         */
        Step::RefLinkedList< IfcProcess > m_refIfcProcessList;
        /**
         */
        Step::RefLinkedList< IfcProduct > m_refIfcProductList;
        /**
         */
        Step::RefLinkedList< IfcProductDefinitionShape > m_refIfcProductDefinitionShapeList;
        /**
         */
        Step::RefLinkedList< IfcProductRepresentation > m_refIfcProductRepresentationList;
        /**
         */
        Step::RefLinkedList< IfcProductsOfCombustionProperties > m_refIfcProductsOfCombustionPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcProfileDef > m_refIfcProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcProfileProperties > m_refIfcProfilePropertiesList;
        /**
         */
        Step::RefLinkedList< IfcProject > m_refIfcProjectList;
        /**
         */
        Step::RefLinkedList< IfcProjectOrder > m_refIfcProjectOrderList;
        /**
         */
        Step::RefLinkedList< IfcProjectOrderRecord > m_refIfcProjectOrderRecordList;
        /**
         */
        Step::RefLinkedList< IfcProjectionCurve > m_refIfcProjectionCurveList;
        /**
         */
        Step::RefLinkedList< IfcProjectionElement > m_refIfcProjectionElementList;
        /**
         */
        Step::RefLinkedList< IfcProperty > m_refIfcPropertyList;
        /**
         */
        Step::RefLinkedList< IfcPropertyBoundedValue > m_refIfcPropertyBoundedValueList;
        /**
         */
        Step::RefLinkedList< IfcPropertyConstraintRelationship > m_refIfcPropertyConstraintRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcPropertyDefinition > m_refIfcPropertyDefinitionList;
        /**
         */
        Step::RefLinkedList< IfcPropertyDependencyRelationship > m_refIfcPropertyDependencyRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcPropertyEnumeratedValue > m_refIfcPropertyEnumeratedValueList;
        /**
         */
        Step::RefLinkedList< IfcPropertyEnumeration > m_refIfcPropertyEnumerationList;
        /**
         */
        Step::RefLinkedList< IfcPropertyListValue > m_refIfcPropertyListValueList;
        /**
         */
        Step::RefLinkedList< IfcPropertyReferenceValue > m_refIfcPropertyReferenceValueList;
        /**
         */
        Step::RefLinkedList< IfcPropertySet > m_refIfcPropertySetList;
        /**
         */
        Step::RefLinkedList< IfcPropertySetDefinition > m_refIfcPropertySetDefinitionList;
        /**
         */
        Step::RefLinkedList< IfcPropertySingleValue > m_refIfcPropertySingleValueList;
        /**
         */
        Step::RefLinkedList< IfcPropertyTableValue > m_refIfcPropertyTableValueList;
        /**
         */
        Step::RefLinkedList< IfcProtectiveDeviceType > m_refIfcProtectiveDeviceTypeList;
        /**
         */
        Step::RefLinkedList< IfcProxy > m_refIfcProxyList;
        /**
         */
        Step::RefLinkedList< IfcPumpType > m_refIfcPumpTypeList;
        /**
         */
        Step::RefLinkedList< IfcQuantityArea > m_refIfcQuantityAreaList;
        /**
         */
        Step::RefLinkedList< IfcQuantityCount > m_refIfcQuantityCountList;
        /**
         */
        Step::RefLinkedList< IfcQuantityLength > m_refIfcQuantityLengthList;
        /**
         */
        Step::RefLinkedList< IfcQuantityTime > m_refIfcQuantityTimeList;
        /**
         */
        Step::RefLinkedList< IfcQuantityVolume > m_refIfcQuantityVolumeList;
        /**
         */
        Step::RefLinkedList< IfcQuantityWeight > m_refIfcQuantityWeightList;
        /**
         */
        Step::RefLinkedList< IfcRadiusDimension > m_refIfcRadiusDimensionList;
        /**
         */
        Step::RefLinkedList< IfcRailing > m_refIfcRailingList;
        /**
         */
        Step::RefLinkedList< IfcRailingType > m_refIfcRailingTypeList;
        /**
         */
        Step::RefLinkedList< IfcRamp > m_refIfcRampList;
        /**
         */
        Step::RefLinkedList< IfcRampFlight > m_refIfcRampFlightList;
        /**
         */
        Step::RefLinkedList< IfcRampFlightType > m_refIfcRampFlightTypeList;
        /**
         */
        Step::RefLinkedList< IfcRationalBezierCurve > m_refIfcRationalBezierCurveList;
        /**
         */
        Step::RefLinkedList< IfcRectangleHollowProfileDef > m_refIfcRectangleHollowProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcRectangleProfileDef > m_refIfcRectangleProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcRectangularPyramid > m_refIfcRectangularPyramidList;
        /**
         */
        Step::RefLinkedList< IfcRectangularTrimmedSurface > m_refIfcRectangularTrimmedSurfaceList;
        /**
         */
        Step::RefLinkedList< IfcReferencesValueDocument > m_refIfcReferencesValueDocumentList;
        /**
         */
        Step::RefLinkedList< IfcRegularTimeSeries > m_refIfcRegularTimeSeriesList;
        /**
         */
        Step::RefLinkedList< IfcReinforcementBarProperties > m_refIfcReinforcementBarPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcReinforcementDefinitionProperties > m_refIfcReinforcementDefinitionPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcReinforcingBar > m_refIfcReinforcingBarList;
        /**
         */
        Step::RefLinkedList< IfcReinforcingElement > m_refIfcReinforcingElementList;
        /**
         */
        Step::RefLinkedList< IfcReinforcingMesh > m_refIfcReinforcingMeshList;
        /**
         */
        Step::RefLinkedList< IfcRelAggregates > m_refIfcRelAggregatesList;
        /**
         */
        Step::RefLinkedList< IfcRelAssigns > m_refIfcRelAssignsList;
        /**
         */
        Step::RefLinkedList< IfcRelAssignsTasks > m_refIfcRelAssignsTasksList;
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToActor > m_refIfcRelAssignsToActorList;
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToControl > m_refIfcRelAssignsToControlList;
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToGroup > m_refIfcRelAssignsToGroupList;
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToProcess > m_refIfcRelAssignsToProcessList;
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToProduct > m_refIfcRelAssignsToProductList;
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToProjectOrder > m_refIfcRelAssignsToProjectOrderList;
        /**
         */
        Step::RefLinkedList< IfcRelAssignsToResource > m_refIfcRelAssignsToResourceList;
        /**
         */
        Step::RefLinkedList< IfcRelAssociates > m_refIfcRelAssociatesList;
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesAppliedValue > m_refIfcRelAssociatesAppliedValueList;
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesApproval > m_refIfcRelAssociatesApprovalList;
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesClassification > m_refIfcRelAssociatesClassificationList;
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesConstraint > m_refIfcRelAssociatesConstraintList;
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesDocument > m_refIfcRelAssociatesDocumentList;
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesLibrary > m_refIfcRelAssociatesLibraryList;
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesMaterial > m_refIfcRelAssociatesMaterialList;
        /**
         */
        Step::RefLinkedList< IfcRelAssociatesProfileProperties > m_refIfcRelAssociatesProfilePropertiesList;
        /**
         */
        Step::RefLinkedList< IfcRelConnects > m_refIfcRelConnectsList;
        /**
         */
        Step::RefLinkedList< IfcRelConnectsElements > m_refIfcRelConnectsElementsList;
        /**
         */
        Step::RefLinkedList< IfcRelConnectsPathElements > m_refIfcRelConnectsPathElementsList;
        /**
         */
        Step::RefLinkedList< IfcRelConnectsPortToElement > m_refIfcRelConnectsPortToElementList;
        /**
         */
        Step::RefLinkedList< IfcRelConnectsPorts > m_refIfcRelConnectsPortsList;
        /**
         */
        Step::RefLinkedList< IfcRelConnectsStructuralActivity > m_refIfcRelConnectsStructuralActivityList;
        /**
         */
        Step::RefLinkedList< IfcRelConnectsStructuralElement > m_refIfcRelConnectsStructuralElementList;
        /**
         */
        Step::RefLinkedList< IfcRelConnectsStructuralMember > m_refIfcRelConnectsStructuralMemberList;
        /**
         */
        Step::RefLinkedList< IfcRelConnectsWithEccentricity > m_refIfcRelConnectsWithEccentricityList;
        /**
         */
        Step::RefLinkedList< IfcRelConnectsWithRealizingElements > m_refIfcRelConnectsWithRealizingElementsList;
        /**
         */
        Step::RefLinkedList< IfcRelContainedInSpatialStructure > m_refIfcRelContainedInSpatialStructureList;
        /**
         */
        Step::RefLinkedList< IfcRelCoversBldgElements > m_refIfcRelCoversBldgElementsList;
        /**
         */
        Step::RefLinkedList< IfcRelCoversSpaces > m_refIfcRelCoversSpacesList;
        /**
         */
        Step::RefLinkedList< IfcRelDecomposes > m_refIfcRelDecomposesList;
        /**
         */
        Step::RefLinkedList< IfcRelDefines > m_refIfcRelDefinesList;
        /**
         */
        Step::RefLinkedList< IfcRelDefinesByProperties > m_refIfcRelDefinesByPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcRelDefinesByType > m_refIfcRelDefinesByTypeList;
        /**
         */
        Step::RefLinkedList< IfcRelFillsElement > m_refIfcRelFillsElementList;
        /**
         */
        Step::RefLinkedList< IfcRelFlowControlElements > m_refIfcRelFlowControlElementsList;
        /**
         */
        Step::RefLinkedList< IfcRelInteractionRequirements > m_refIfcRelInteractionRequirementsList;
        /**
         */
        Step::RefLinkedList< IfcRelNests > m_refIfcRelNestsList;
        /**
         */
        Step::RefLinkedList< IfcRelOccupiesSpaces > m_refIfcRelOccupiesSpacesList;
        /**
         */
        Step::RefLinkedList< IfcRelOverridesProperties > m_refIfcRelOverridesPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcRelProjectsElement > m_refIfcRelProjectsElementList;
        /**
         */
        Step::RefLinkedList< IfcRelReferencedInSpatialStructure > m_refIfcRelReferencedInSpatialStructureList;
        /**
         */
        Step::RefLinkedList< IfcRelSchedulesCostItems > m_refIfcRelSchedulesCostItemsList;
        /**
         */
        Step::RefLinkedList< IfcRelSequence > m_refIfcRelSequenceList;
        /**
         */
        Step::RefLinkedList< IfcRelServicesBuildings > m_refIfcRelServicesBuildingsList;
        /**
         */
        Step::RefLinkedList< IfcRelSpaceBoundary > m_refIfcRelSpaceBoundaryList;
        /**
         */
        Step::RefLinkedList< IfcRelVoidsElement > m_refIfcRelVoidsElementList;
        /**
         */
        Step::RefLinkedList< IfcRelationship > m_refIfcRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcRelaxation > m_refIfcRelaxationList;
        /**
         */
        Step::RefLinkedList< IfcRepresentation > m_refIfcRepresentationList;
        /**
         */
        Step::RefLinkedList< IfcRepresentationContext > m_refIfcRepresentationContextList;
        /**
         */
        Step::RefLinkedList< IfcRepresentationItem > m_refIfcRepresentationItemList;
        /**
         */
        Step::RefLinkedList< IfcRepresentationMap > m_refIfcRepresentationMapList;
        /**
         */
        Step::RefLinkedList< IfcResource > m_refIfcResourceList;
        /**
         */
        Step::RefLinkedList< IfcRevolvedAreaSolid > m_refIfcRevolvedAreaSolidList;
        /**
         */
        Step::RefLinkedList< IfcRibPlateProfileProperties > m_refIfcRibPlateProfilePropertiesList;
        /**
         */
        Step::RefLinkedList< IfcRightCircularCone > m_refIfcRightCircularConeList;
        /**
         */
        Step::RefLinkedList< IfcRightCircularCylinder > m_refIfcRightCircularCylinderList;
        /**
         */
        Step::RefLinkedList< IfcRoof > m_refIfcRoofList;
        /**
         */
        Step::RefLinkedList< IfcRoot > m_refIfcRootList;
        /**
         */
        Step::RefLinkedList< IfcRoundedEdgeFeature > m_refIfcRoundedEdgeFeatureList;
        /**
         */
        Step::RefLinkedList< IfcRoundedRectangleProfileDef > m_refIfcRoundedRectangleProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcSIUnit > m_refIfcSIUnitList;
        /**
         */
        Step::RefLinkedList< IfcSanitaryTerminalType > m_refIfcSanitaryTerminalTypeList;
        /**
         */
        Step::RefLinkedList< IfcScheduleTimeControl > m_refIfcScheduleTimeControlList;
        /**
         */
        Step::RefLinkedList< IfcSectionProperties > m_refIfcSectionPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcSectionReinforcementProperties > m_refIfcSectionReinforcementPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcSectionedSpine > m_refIfcSectionedSpineList;
        /**
         */
        Step::RefLinkedList< IfcSensorType > m_refIfcSensorTypeList;
        /**
         */
        Step::RefLinkedList< IfcServiceLife > m_refIfcServiceLifeList;
        /**
         */
        Step::RefLinkedList< IfcServiceLifeFactor > m_refIfcServiceLifeFactorList;
        /**
         */
        Step::RefLinkedList< IfcShapeAspect > m_refIfcShapeAspectList;
        /**
         */
        Step::RefLinkedList< IfcShapeModel > m_refIfcShapeModelList;
        /**
         */
        Step::RefLinkedList< IfcShapeRepresentation > m_refIfcShapeRepresentationList;
        /**
         */
        Step::RefLinkedList< IfcShellBasedSurfaceModel > m_refIfcShellBasedSurfaceModelList;
        /**
         */
        Step::RefLinkedList< IfcSimpleProperty > m_refIfcSimplePropertyList;
        /**
         */
        Step::RefLinkedList< IfcSite > m_refIfcSiteList;
        /**
         */
        Step::RefLinkedList< IfcSlab > m_refIfcSlabList;
        /**
         */
        Step::RefLinkedList< IfcSlabType > m_refIfcSlabTypeList;
        /**
         */
        Step::RefLinkedList< IfcSlippageConnectionCondition > m_refIfcSlippageConnectionConditionList;
        /**
         */
        Step::RefLinkedList< IfcSolidModel > m_refIfcSolidModelList;
        /**
         */
        Step::RefLinkedList< IfcSoundProperties > m_refIfcSoundPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcSoundValue > m_refIfcSoundValueList;
        /**
         */
        Step::RefLinkedList< IfcSpace > m_refIfcSpaceList;
        /**
         */
        Step::RefLinkedList< IfcSpaceHeaterType > m_refIfcSpaceHeaterTypeList;
        /**
         */
        Step::RefLinkedList< IfcSpaceProgram > m_refIfcSpaceProgramList;
        /**
         */
        Step::RefLinkedList< IfcSpaceThermalLoadProperties > m_refIfcSpaceThermalLoadPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcSpaceType > m_refIfcSpaceTypeList;
        /**
         */
        Step::RefLinkedList< IfcSpatialStructureElement > m_refIfcSpatialStructureElementList;
        /**
         */
        Step::RefLinkedList< IfcSpatialStructureElementType > m_refIfcSpatialStructureElementTypeList;
        /**
         */
        Step::RefLinkedList< IfcSphere > m_refIfcSphereList;
        /**
         */
        Step::RefLinkedList< IfcStackTerminalType > m_refIfcStackTerminalTypeList;
        /**
         */
        Step::RefLinkedList< IfcStair > m_refIfcStairList;
        /**
         */
        Step::RefLinkedList< IfcStairFlight > m_refIfcStairFlightList;
        /**
         */
        Step::RefLinkedList< IfcStairFlightType > m_refIfcStairFlightTypeList;
        /**
         */
        Step::RefLinkedList< IfcStructuralAction > m_refIfcStructuralActionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralActivity > m_refIfcStructuralActivityList;
        /**
         */
        Step::RefLinkedList< IfcStructuralAnalysisModel > m_refIfcStructuralAnalysisModelList;
        /**
         */
        Step::RefLinkedList< IfcStructuralConnection > m_refIfcStructuralConnectionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralConnectionCondition > m_refIfcStructuralConnectionConditionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralCurveConnection > m_refIfcStructuralCurveConnectionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralCurveMember > m_refIfcStructuralCurveMemberList;
        /**
         */
        Step::RefLinkedList< IfcStructuralCurveMemberVarying > m_refIfcStructuralCurveMemberVaryingList;
        /**
         */
        Step::RefLinkedList< IfcStructuralItem > m_refIfcStructuralItemList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLinearAction > m_refIfcStructuralLinearActionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLinearActionVarying > m_refIfcStructuralLinearActionVaryingList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLoad > m_refIfcStructuralLoadList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadGroup > m_refIfcStructuralLoadGroupList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadLinearForce > m_refIfcStructuralLoadLinearForceList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadPlanarForce > m_refIfcStructuralLoadPlanarForceList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadSingleDisplacement > m_refIfcStructuralLoadSingleDisplacementList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadSingleDisplacementDistortion > m_refIfcStructuralLoadSingleDisplacementDistortionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadSingleForce > m_refIfcStructuralLoadSingleForceList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadSingleForceWarping > m_refIfcStructuralLoadSingleForceWarpingList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadStatic > m_refIfcStructuralLoadStaticList;
        /**
         */
        Step::RefLinkedList< IfcStructuralLoadTemperature > m_refIfcStructuralLoadTemperatureList;
        /**
         */
        Step::RefLinkedList< IfcStructuralMember > m_refIfcStructuralMemberList;
        /**
         */
        Step::RefLinkedList< IfcStructuralPlanarAction > m_refIfcStructuralPlanarActionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralPlanarActionVarying > m_refIfcStructuralPlanarActionVaryingList;
        /**
         */
        Step::RefLinkedList< IfcStructuralPointAction > m_refIfcStructuralPointActionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralPointConnection > m_refIfcStructuralPointConnectionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralPointReaction > m_refIfcStructuralPointReactionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralProfileProperties > m_refIfcStructuralProfilePropertiesList;
        /**
         */
        Step::RefLinkedList< IfcStructuralReaction > m_refIfcStructuralReactionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralResultGroup > m_refIfcStructuralResultGroupList;
        /**
         */
        Step::RefLinkedList< IfcStructuralSteelProfileProperties > m_refIfcStructuralSteelProfilePropertiesList;
        /**
         */
        Step::RefLinkedList< IfcStructuralSurfaceConnection > m_refIfcStructuralSurfaceConnectionList;
        /**
         */
        Step::RefLinkedList< IfcStructuralSurfaceMember > m_refIfcStructuralSurfaceMemberList;
        /**
         */
        Step::RefLinkedList< IfcStructuralSurfaceMemberVarying > m_refIfcStructuralSurfaceMemberVaryingList;
        /**
         */
        Step::RefLinkedList< IfcStructuredDimensionCallout > m_refIfcStructuredDimensionCalloutList;
        /**
         */
        Step::RefLinkedList< IfcStyleModel > m_refIfcStyleModelList;
        /**
         */
        Step::RefLinkedList< IfcStyledItem > m_refIfcStyledItemList;
        /**
         */
        Step::RefLinkedList< IfcStyledRepresentation > m_refIfcStyledRepresentationList;
        /**
         */
        Step::RefLinkedList< IfcSubContractResource > m_refIfcSubContractResourceList;
        /**
         */
        Step::RefLinkedList< IfcSubedge > m_refIfcSubedgeList;
        /**
         */
        Step::RefLinkedList< IfcSurface > m_refIfcSurfaceList;
        /**
         */
        Step::RefLinkedList< IfcSurfaceCurveSweptAreaSolid > m_refIfcSurfaceCurveSweptAreaSolidList;
        /**
         */
        Step::RefLinkedList< IfcSurfaceOfLinearExtrusion > m_refIfcSurfaceOfLinearExtrusionList;
        /**
         */
        Step::RefLinkedList< IfcSurfaceOfRevolution > m_refIfcSurfaceOfRevolutionList;
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyle > m_refIfcSurfaceStyleList;
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyleLighting > m_refIfcSurfaceStyleLightingList;
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyleRefraction > m_refIfcSurfaceStyleRefractionList;
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyleRendering > m_refIfcSurfaceStyleRenderingList;
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyleShading > m_refIfcSurfaceStyleShadingList;
        /**
         */
        Step::RefLinkedList< IfcSurfaceStyleWithTextures > m_refIfcSurfaceStyleWithTexturesList;
        /**
         */
        Step::RefLinkedList< IfcSurfaceTexture > m_refIfcSurfaceTextureList;
        /**
         */
        Step::RefLinkedList< IfcSweptAreaSolid > m_refIfcSweptAreaSolidList;
        /**
         */
        Step::RefLinkedList< IfcSweptDiskSolid > m_refIfcSweptDiskSolidList;
        /**
         */
        Step::RefLinkedList< IfcSweptSurface > m_refIfcSweptSurfaceList;
        /**
         */
        Step::RefLinkedList< IfcSwitchingDeviceType > m_refIfcSwitchingDeviceTypeList;
        /**
         */
        Step::RefLinkedList< IfcSymbolStyle > m_refIfcSymbolStyleList;
        /**
         */
        Step::RefLinkedList< IfcSystem > m_refIfcSystemList;
        /**
         */
        Step::RefLinkedList< IfcSystemFurnitureElementType > m_refIfcSystemFurnitureElementTypeList;
        /**
         */
        Step::RefLinkedList< IfcTShapeProfileDef > m_refIfcTShapeProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcTable > m_refIfcTableList;
        /**
         */
        Step::RefLinkedList< IfcTableRow > m_refIfcTableRowList;
        /**
         */
        Step::RefLinkedList< IfcTankType > m_refIfcTankTypeList;
        /**
         */
        Step::RefLinkedList< IfcTask > m_refIfcTaskList;
        /**
         */
        Step::RefLinkedList< IfcTelecomAddress > m_refIfcTelecomAddressList;
        /**
         */
        Step::RefLinkedList< IfcTendon > m_refIfcTendonList;
        /**
         */
        Step::RefLinkedList< IfcTendonAnchor > m_refIfcTendonAnchorList;
        /**
         */
        Step::RefLinkedList< IfcTerminatorSymbol > m_refIfcTerminatorSymbolList;
        /**
         */
        Step::RefLinkedList< IfcTextLiteral > m_refIfcTextLiteralList;
        /**
         */
        Step::RefLinkedList< IfcTextLiteralWithExtent > m_refIfcTextLiteralWithExtentList;
        /**
         */
        Step::RefLinkedList< IfcTextStyle > m_refIfcTextStyleList;
        /**
         */
        Step::RefLinkedList< IfcTextStyleFontModel > m_refIfcTextStyleFontModelList;
        /**
         */
        Step::RefLinkedList< IfcTextStyleForDefinedFont > m_refIfcTextStyleForDefinedFontList;
        /**
         */
        Step::RefLinkedList< IfcTextStyleTextModel > m_refIfcTextStyleTextModelList;
        /**
         */
        Step::RefLinkedList< IfcTextStyleWithBoxCharacteristics > m_refIfcTextStyleWithBoxCharacteristicsList;
        /**
         */
        Step::RefLinkedList< IfcTextureCoordinate > m_refIfcTextureCoordinateList;
        /**
         */
        Step::RefLinkedList< IfcTextureCoordinateGenerator > m_refIfcTextureCoordinateGeneratorList;
        /**
         */
        Step::RefLinkedList< IfcTextureMap > m_refIfcTextureMapList;
        /**
         */
        Step::RefLinkedList< IfcTextureVertex > m_refIfcTextureVertexList;
        /**
         */
        Step::RefLinkedList< IfcThermalMaterialProperties > m_refIfcThermalMaterialPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcTimeSeries > m_refIfcTimeSeriesList;
        /**
         */
        Step::RefLinkedList< IfcTimeSeriesReferenceRelationship > m_refIfcTimeSeriesReferenceRelationshipList;
        /**
         */
        Step::RefLinkedList< IfcTimeSeriesSchedule > m_refIfcTimeSeriesScheduleList;
        /**
         */
        Step::RefLinkedList< IfcTimeSeriesValue > m_refIfcTimeSeriesValueList;
        /**
         */
        Step::RefLinkedList< IfcTopologicalRepresentationItem > m_refIfcTopologicalRepresentationItemList;
        /**
         */
        Step::RefLinkedList< IfcTopologyRepresentation > m_refIfcTopologyRepresentationList;
        /**
         */
        Step::RefLinkedList< IfcTransformerType > m_refIfcTransformerTypeList;
        /**
         */
        Step::RefLinkedList< IfcTransportElement > m_refIfcTransportElementList;
        /**
         */
        Step::RefLinkedList< IfcTransportElementType > m_refIfcTransportElementTypeList;
        /**
         */
        Step::RefLinkedList< IfcTrapeziumProfileDef > m_refIfcTrapeziumProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcTrimmedCurve > m_refIfcTrimmedCurveList;
        /**
         */
        Step::RefLinkedList< IfcTubeBundleType > m_refIfcTubeBundleTypeList;
        /**
         */
        Step::RefLinkedList< IfcTwoDirectionRepeatFactor > m_refIfcTwoDirectionRepeatFactorList;
        /**
         */
        Step::RefLinkedList< IfcTypeObject > m_refIfcTypeObjectList;
        /**
         */
        Step::RefLinkedList< IfcTypeProduct > m_refIfcTypeProductList;
        /**
         */
        Step::RefLinkedList< IfcUShapeProfileDef > m_refIfcUShapeProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcUnitAssignment > m_refIfcUnitAssignmentList;
        /**
         */
        Step::RefLinkedList< IfcUnitaryEquipmentType > m_refIfcUnitaryEquipmentTypeList;
        /**
         */
        Step::RefLinkedList< IfcValveType > m_refIfcValveTypeList;
        /**
         */
        Step::RefLinkedList< IfcVector > m_refIfcVectorList;
        /**
         */
        Step::RefLinkedList< IfcVertex > m_refIfcVertexList;
        /**
         */
        Step::RefLinkedList< IfcVertexBasedTextureMap > m_refIfcVertexBasedTextureMapList;
        /**
         */
        Step::RefLinkedList< IfcVertexLoop > m_refIfcVertexLoopList;
        /**
         */
        Step::RefLinkedList< IfcVertexPoint > m_refIfcVertexPointList;
        /**
         */
        Step::RefLinkedList< IfcVibrationIsolatorType > m_refIfcVibrationIsolatorTypeList;
        /**
         */
        Step::RefLinkedList< IfcVirtualElement > m_refIfcVirtualElementList;
        /**
         */
        Step::RefLinkedList< IfcVirtualGridIntersection > m_refIfcVirtualGridIntersectionList;
        /**
         */
        Step::RefLinkedList< IfcWall > m_refIfcWallList;
        /**
         */
        Step::RefLinkedList< IfcWallStandardCase > m_refIfcWallStandardCaseList;
        /**
         */
        Step::RefLinkedList< IfcWallType > m_refIfcWallTypeList;
        /**
         */
        Step::RefLinkedList< IfcWasteTerminalType > m_refIfcWasteTerminalTypeList;
        /**
         */
        Step::RefLinkedList< IfcWaterProperties > m_refIfcWaterPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcWindow > m_refIfcWindowList;
        /**
         */
        Step::RefLinkedList< IfcWindowLiningProperties > m_refIfcWindowLiningPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcWindowPanelProperties > m_refIfcWindowPanelPropertiesList;
        /**
         */
        Step::RefLinkedList< IfcWindowStyle > m_refIfcWindowStyleList;
        /**
         */
        Step::RefLinkedList< IfcWorkControl > m_refIfcWorkControlList;
        /**
         */
        Step::RefLinkedList< IfcWorkPlan > m_refIfcWorkPlanList;
        /**
         */
        Step::RefLinkedList< IfcWorkSchedule > m_refIfcWorkScheduleList;
        /**
         */
        Step::RefLinkedList< IfcZShapeProfileDef > m_refIfcZShapeProfileDefList;
        /**
         */
        Step::RefLinkedList< IfcZone > m_refIfcZoneList;
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfc2DCompositeCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static Ifc2DCompositeCurve *cloneIfc2DCompositeCurve(ExpressDataSet *expressDataSet, const Ifc2DCompositeCurve &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcActionRequest(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcActionRequest *cloneIfcActionRequest(ExpressDataSet *expressDataSet, const IfcActionRequest &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcActor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcActor *cloneIfcActor(ExpressDataSet *expressDataSet, const IfcActor &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcActorRole(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcActorRole *cloneIfcActorRole(ExpressDataSet *expressDataSet, const IfcActorRole &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcActuatorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcActuatorType *cloneIfcActuatorType(ExpressDataSet *expressDataSet, const IfcActuatorType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAirTerminalBoxType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAirTerminalBoxType *cloneIfcAirTerminalBoxType(ExpressDataSet *expressDataSet, const IfcAirTerminalBoxType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAirTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAirTerminalType *cloneIfcAirTerminalType(ExpressDataSet *expressDataSet, const IfcAirTerminalType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAirToAirHeatRecoveryType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAirToAirHeatRecoveryType *cloneIfcAirToAirHeatRecoveryType(ExpressDataSet *expressDataSet, const IfcAirToAirHeatRecoveryType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAlarmType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAlarmType *cloneIfcAlarmType(ExpressDataSet *expressDataSet, const IfcAlarmType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAngularDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAngularDimension *cloneIfcAngularDimension(ExpressDataSet *expressDataSet, const IfcAngularDimension &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotation *cloneIfcAnnotation(ExpressDataSet *expressDataSet, const IfcAnnotation &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationCurveOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationCurveOccurrence *cloneIfcAnnotationCurveOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationCurveOccurrence &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationFillArea(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationFillArea *cloneIfcAnnotationFillArea(ExpressDataSet *expressDataSet, const IfcAnnotationFillArea &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationFillAreaOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationFillAreaOccurrence *cloneIfcAnnotationFillAreaOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationFillAreaOccurrence &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationSurface *cloneIfcAnnotationSurface(ExpressDataSet *expressDataSet, const IfcAnnotationSurface &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationSurfaceOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationSurfaceOccurrence *cloneIfcAnnotationSurfaceOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationSurfaceOccurrence &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationSymbolOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationSymbolOccurrence *cloneIfcAnnotationSymbolOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationSymbolOccurrence &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationTextOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationTextOccurrence *cloneIfcAnnotationTextOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationTextOccurrence &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcApplication(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcApplication *cloneIfcApplication(ExpressDataSet *expressDataSet, const IfcApplication &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAppliedValueRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAppliedValueRelationship *cloneIfcAppliedValueRelationship(ExpressDataSet *expressDataSet, const IfcAppliedValueRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcApproval(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcApproval *cloneIfcApproval(ExpressDataSet *expressDataSet, const IfcApproval &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcApprovalActorRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcApprovalActorRelationship *cloneIfcApprovalActorRelationship(ExpressDataSet *expressDataSet, const IfcApprovalActorRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcApprovalPropertyRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcApprovalPropertyRelationship *cloneIfcApprovalPropertyRelationship(ExpressDataSet *expressDataSet, const IfcApprovalPropertyRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcApprovalRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcApprovalRelationship *cloneIfcApprovalRelationship(ExpressDataSet *expressDataSet, const IfcApprovalRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcArbitraryClosedProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcArbitraryClosedProfileDef *cloneIfcArbitraryClosedProfileDef(ExpressDataSet *expressDataSet, const IfcArbitraryClosedProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcArbitraryOpenProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcArbitraryOpenProfileDef *cloneIfcArbitraryOpenProfileDef(ExpressDataSet *expressDataSet, const IfcArbitraryOpenProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcArbitraryProfileDefWithVoids(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcArbitraryProfileDefWithVoids *cloneIfcArbitraryProfileDefWithVoids(ExpressDataSet *expressDataSet, const IfcArbitraryProfileDefWithVoids &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAsset(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAsset *cloneIfcAsset(ExpressDataSet *expressDataSet, const IfcAsset &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAsymmetricIShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAsymmetricIShapeProfileDef *cloneIfcAsymmetricIShapeProfileDef(ExpressDataSet *expressDataSet, const IfcAsymmetricIShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAxis1Placement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAxis1Placement *cloneIfcAxis1Placement(ExpressDataSet *expressDataSet, const IfcAxis1Placement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAxis2Placement2D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAxis2Placement2D *cloneIfcAxis2Placement2D(ExpressDataSet *expressDataSet, const IfcAxis2Placement2D &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAxis2Placement3D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAxis2Placement3D *cloneIfcAxis2Placement3D(ExpressDataSet *expressDataSet, const IfcAxis2Placement3D &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBeam(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBeam *cloneIfcBeam(ExpressDataSet *expressDataSet, const IfcBeam &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBeamType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBeamType *cloneIfcBeamType(ExpressDataSet *expressDataSet, const IfcBeamType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBezierCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBezierCurve *cloneIfcBezierCurve(ExpressDataSet *expressDataSet, const IfcBezierCurve &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBlobTexture(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBlobTexture *cloneIfcBlobTexture(ExpressDataSet *expressDataSet, const IfcBlobTexture &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBlock(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBlock *cloneIfcBlock(ExpressDataSet *expressDataSet, const IfcBlock &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoilerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoilerType *cloneIfcBoilerType(ExpressDataSet *expressDataSet, const IfcBoilerType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBooleanClippingResult(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBooleanClippingResult *cloneIfcBooleanClippingResult(ExpressDataSet *expressDataSet, const IfcBooleanClippingResult &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBooleanResult(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBooleanResult *cloneIfcBooleanResult(ExpressDataSet *expressDataSet, const IfcBooleanResult &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundaryEdgeCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundaryEdgeCondition *cloneIfcBoundaryEdgeCondition(ExpressDataSet *expressDataSet, const IfcBoundaryEdgeCondition &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundaryFaceCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundaryFaceCondition *cloneIfcBoundaryFaceCondition(ExpressDataSet *expressDataSet, const IfcBoundaryFaceCondition &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundaryNodeCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundaryNodeCondition *cloneIfcBoundaryNodeCondition(ExpressDataSet *expressDataSet, const IfcBoundaryNodeCondition &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundaryNodeConditionWarping(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundaryNodeConditionWarping *cloneIfcBoundaryNodeConditionWarping(ExpressDataSet *expressDataSet, const IfcBoundaryNodeConditionWarping &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundedSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundedSurface *cloneIfcBoundedSurface(ExpressDataSet *expressDataSet, const IfcBoundedSurface &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundingBox(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundingBox *cloneIfcBoundingBox(ExpressDataSet *expressDataSet, const IfcBoundingBox &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoxedHalfSpace(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoxedHalfSpace *cloneIfcBoxedHalfSpace(ExpressDataSet *expressDataSet, const IfcBoxedHalfSpace &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuilding(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuilding *cloneIfcBuilding(ExpressDataSet *expressDataSet, const IfcBuilding &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuildingElementPart(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuildingElementPart *cloneIfcBuildingElementPart(ExpressDataSet *expressDataSet, const IfcBuildingElementPart &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuildingElementProxy(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuildingElementProxy *cloneIfcBuildingElementProxy(ExpressDataSet *expressDataSet, const IfcBuildingElementProxy &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuildingElementProxyType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuildingElementProxyType *cloneIfcBuildingElementProxyType(ExpressDataSet *expressDataSet, const IfcBuildingElementProxyType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuildingStorey(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuildingStorey *cloneIfcBuildingStorey(ExpressDataSet *expressDataSet, const IfcBuildingStorey &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCShapeProfileDef *cloneIfcCShapeProfileDef(ExpressDataSet *expressDataSet, const IfcCShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCableCarrierFittingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCableCarrierFittingType *cloneIfcCableCarrierFittingType(ExpressDataSet *expressDataSet, const IfcCableCarrierFittingType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCableCarrierSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCableCarrierSegmentType *cloneIfcCableCarrierSegmentType(ExpressDataSet *expressDataSet, const IfcCableCarrierSegmentType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCableSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCableSegmentType *cloneIfcCableSegmentType(ExpressDataSet *expressDataSet, const IfcCableSegmentType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCalendarDate(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCalendarDate *cloneIfcCalendarDate(ExpressDataSet *expressDataSet, const IfcCalendarDate &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCartesianPoint(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCartesianPoint *cloneIfcCartesianPoint(ExpressDataSet *expressDataSet, const IfcCartesianPoint &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCartesianTransformationOperator2D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCartesianTransformationOperator2D *cloneIfcCartesianTransformationOperator2D(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator2D &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCartesianTransformationOperator2DnonUniform(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCartesianTransformationOperator2DnonUniform *cloneIfcCartesianTransformationOperator2DnonUniform(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator2DnonUniform &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCartesianTransformationOperator3D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCartesianTransformationOperator3D *cloneIfcCartesianTransformationOperator3D(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator3D &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCartesianTransformationOperator3DnonUniform(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCartesianTransformationOperator3DnonUniform *cloneIfcCartesianTransformationOperator3DnonUniform(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator3DnonUniform &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCenterLineProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCenterLineProfileDef *cloneIfcCenterLineProfileDef(ExpressDataSet *expressDataSet, const IfcCenterLineProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcChamferEdgeFeature(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcChamferEdgeFeature *cloneIfcChamferEdgeFeature(ExpressDataSet *expressDataSet, const IfcChamferEdgeFeature &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcChillerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcChillerType *cloneIfcChillerType(ExpressDataSet *expressDataSet, const IfcChillerType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCircle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCircle *cloneIfcCircle(ExpressDataSet *expressDataSet, const IfcCircle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCircleHollowProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCircleHollowProfileDef *cloneIfcCircleHollowProfileDef(ExpressDataSet *expressDataSet, const IfcCircleHollowProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCircleProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCircleProfileDef *cloneIfcCircleProfileDef(ExpressDataSet *expressDataSet, const IfcCircleProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassification(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassification *cloneIfcClassification(ExpressDataSet *expressDataSet, const IfcClassification &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassificationItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassificationItem *cloneIfcClassificationItem(ExpressDataSet *expressDataSet, const IfcClassificationItem &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassificationItemRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassificationItemRelationship *cloneIfcClassificationItemRelationship(ExpressDataSet *expressDataSet, const IfcClassificationItemRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassificationNotation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassificationNotation *cloneIfcClassificationNotation(ExpressDataSet *expressDataSet, const IfcClassificationNotation &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassificationNotationFacet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassificationNotationFacet *cloneIfcClassificationNotationFacet(ExpressDataSet *expressDataSet, const IfcClassificationNotationFacet &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassificationReference(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassificationReference *cloneIfcClassificationReference(ExpressDataSet *expressDataSet, const IfcClassificationReference &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClosedShell(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClosedShell *cloneIfcClosedShell(ExpressDataSet *expressDataSet, const IfcClosedShell &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCoilType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCoilType *cloneIfcCoilType(ExpressDataSet *expressDataSet, const IfcCoilType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcColourRgb(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcColourRgb *cloneIfcColourRgb(ExpressDataSet *expressDataSet, const IfcColourRgb &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcColumn(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcColumn *cloneIfcColumn(ExpressDataSet *expressDataSet, const IfcColumn &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcColumnType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcColumnType *cloneIfcColumnType(ExpressDataSet *expressDataSet, const IfcColumnType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcComplexProperty(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcComplexProperty *cloneIfcComplexProperty(ExpressDataSet *expressDataSet, const IfcComplexProperty &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCompositeCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCompositeCurve *cloneIfcCompositeCurve(ExpressDataSet *expressDataSet, const IfcCompositeCurve &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCompositeCurveSegment(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCompositeCurveSegment *cloneIfcCompositeCurveSegment(ExpressDataSet *expressDataSet, const IfcCompositeCurveSegment &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCompositeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCompositeProfileDef *cloneIfcCompositeProfileDef(ExpressDataSet *expressDataSet, const IfcCompositeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCompressorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCompressorType *cloneIfcCompressorType(ExpressDataSet *expressDataSet, const IfcCompressorType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCondenserType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCondenserType *cloneIfcCondenserType(ExpressDataSet *expressDataSet, const IfcCondenserType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCondition *cloneIfcCondition(ExpressDataSet *expressDataSet, const IfcCondition &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConditionCriterion(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConditionCriterion *cloneIfcConditionCriterion(ExpressDataSet *expressDataSet, const IfcConditionCriterion &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectedFaceSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectedFaceSet *cloneIfcConnectedFaceSet(ExpressDataSet *expressDataSet, const IfcConnectedFaceSet &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectionCurveGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectionCurveGeometry *cloneIfcConnectionCurveGeometry(ExpressDataSet *expressDataSet, const IfcConnectionCurveGeometry &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectionPointEccentricity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectionPointEccentricity *cloneIfcConnectionPointEccentricity(ExpressDataSet *expressDataSet, const IfcConnectionPointEccentricity &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectionPointGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectionPointGeometry *cloneIfcConnectionPointGeometry(ExpressDataSet *expressDataSet, const IfcConnectionPointGeometry &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectionPortGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectionPortGeometry *cloneIfcConnectionPortGeometry(ExpressDataSet *expressDataSet, const IfcConnectionPortGeometry &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectionSurfaceGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectionSurfaceGeometry *cloneIfcConnectionSurfaceGeometry(ExpressDataSet *expressDataSet, const IfcConnectionSurfaceGeometry &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstraintAggregationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstraintAggregationRelationship *cloneIfcConstraintAggregationRelationship(ExpressDataSet *expressDataSet, const IfcConstraintAggregationRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstraintClassificationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstraintClassificationRelationship *cloneIfcConstraintClassificationRelationship(ExpressDataSet *expressDataSet, const IfcConstraintClassificationRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstraintRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstraintRelationship *cloneIfcConstraintRelationship(ExpressDataSet *expressDataSet, const IfcConstraintRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstructionEquipmentResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstructionEquipmentResource *cloneIfcConstructionEquipmentResource(ExpressDataSet *expressDataSet, const IfcConstructionEquipmentResource &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstructionMaterialResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstructionMaterialResource *cloneIfcConstructionMaterialResource(ExpressDataSet *expressDataSet, const IfcConstructionMaterialResource &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstructionProductResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstructionProductResource *cloneIfcConstructionProductResource(ExpressDataSet *expressDataSet, const IfcConstructionProductResource &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcContextDependentUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcContextDependentUnit *cloneIfcContextDependentUnit(ExpressDataSet *expressDataSet, const IfcContextDependentUnit &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcControllerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcControllerType *cloneIfcControllerType(ExpressDataSet *expressDataSet, const IfcControllerType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConversionBasedUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConversionBasedUnit *cloneIfcConversionBasedUnit(ExpressDataSet *expressDataSet, const IfcConversionBasedUnit &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCooledBeamType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCooledBeamType *cloneIfcCooledBeamType(ExpressDataSet *expressDataSet, const IfcCooledBeamType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCoolingTowerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCoolingTowerType *cloneIfcCoolingTowerType(ExpressDataSet *expressDataSet, const IfcCoolingTowerType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCoordinatedUniversalTimeOffset(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCoordinatedUniversalTimeOffset *cloneIfcCoordinatedUniversalTimeOffset(ExpressDataSet *expressDataSet, const IfcCoordinatedUniversalTimeOffset &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCostItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCostItem *cloneIfcCostItem(ExpressDataSet *expressDataSet, const IfcCostItem &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCostSchedule(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCostSchedule *cloneIfcCostSchedule(ExpressDataSet *expressDataSet, const IfcCostSchedule &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCostValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCostValue *cloneIfcCostValue(ExpressDataSet *expressDataSet, const IfcCostValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCovering(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCovering *cloneIfcCovering(ExpressDataSet *expressDataSet, const IfcCovering &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCoveringType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCoveringType *cloneIfcCoveringType(ExpressDataSet *expressDataSet, const IfcCoveringType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCraneRailAShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCraneRailAShapeProfileDef *cloneIfcCraneRailAShapeProfileDef(ExpressDataSet *expressDataSet, const IfcCraneRailAShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCraneRailFShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCraneRailFShapeProfileDef *cloneIfcCraneRailFShapeProfileDef(ExpressDataSet *expressDataSet, const IfcCraneRailFShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCrewResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCrewResource *cloneIfcCrewResource(ExpressDataSet *expressDataSet, const IfcCrewResource &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCsgSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCsgSolid *cloneIfcCsgSolid(ExpressDataSet *expressDataSet, const IfcCsgSolid &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurrencyRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurrencyRelationship *cloneIfcCurrencyRelationship(ExpressDataSet *expressDataSet, const IfcCurrencyRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurtainWall(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurtainWall *cloneIfcCurtainWall(ExpressDataSet *expressDataSet, const IfcCurtainWall &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurtainWallType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurtainWallType *cloneIfcCurtainWallType(ExpressDataSet *expressDataSet, const IfcCurtainWallType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurveBoundedPlane(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurveBoundedPlane *cloneIfcCurveBoundedPlane(ExpressDataSet *expressDataSet, const IfcCurveBoundedPlane &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurveStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurveStyle *cloneIfcCurveStyle(ExpressDataSet *expressDataSet, const IfcCurveStyle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurveStyleFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurveStyleFont *cloneIfcCurveStyleFont(ExpressDataSet *expressDataSet, const IfcCurveStyleFont &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurveStyleFontAndScaling(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurveStyleFontAndScaling *cloneIfcCurveStyleFontAndScaling(ExpressDataSet *expressDataSet, const IfcCurveStyleFontAndScaling &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurveStyleFontPattern(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurveStyleFontPattern *cloneIfcCurveStyleFontPattern(ExpressDataSet *expressDataSet, const IfcCurveStyleFontPattern &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDamperType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDamperType *cloneIfcDamperType(ExpressDataSet *expressDataSet, const IfcDamperType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDateAndTime(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDateAndTime *cloneIfcDateAndTime(ExpressDataSet *expressDataSet, const IfcDateAndTime &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDefinedSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDefinedSymbol *cloneIfcDefinedSymbol(ExpressDataSet *expressDataSet, const IfcDefinedSymbol &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDerivedProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDerivedProfileDef *cloneIfcDerivedProfileDef(ExpressDataSet *expressDataSet, const IfcDerivedProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDerivedUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDerivedUnit *cloneIfcDerivedUnit(ExpressDataSet *expressDataSet, const IfcDerivedUnit &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDerivedUnitElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDerivedUnitElement *cloneIfcDerivedUnitElement(ExpressDataSet *expressDataSet, const IfcDerivedUnitElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDiameterDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDiameterDimension *cloneIfcDiameterDimension(ExpressDataSet *expressDataSet, const IfcDiameterDimension &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionCalloutRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionCalloutRelationship *cloneIfcDimensionCalloutRelationship(ExpressDataSet *expressDataSet, const IfcDimensionCalloutRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionCurve *cloneIfcDimensionCurve(ExpressDataSet *expressDataSet, const IfcDimensionCurve &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionCurveDirectedCallout(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionCurveDirectedCallout *cloneIfcDimensionCurveDirectedCallout(ExpressDataSet *expressDataSet, const IfcDimensionCurveDirectedCallout &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionCurveTerminator(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionCurveTerminator *cloneIfcDimensionCurveTerminator(ExpressDataSet *expressDataSet, const IfcDimensionCurveTerminator &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionPair(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionPair *cloneIfcDimensionPair(ExpressDataSet *expressDataSet, const IfcDimensionPair &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionalExponents(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionalExponents *cloneIfcDimensionalExponents(ExpressDataSet *expressDataSet, const IfcDimensionalExponents &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDirection(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDirection *cloneIfcDirection(ExpressDataSet *expressDataSet, const IfcDirection &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDiscreteAccessory(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDiscreteAccessory *cloneIfcDiscreteAccessory(ExpressDataSet *expressDataSet, const IfcDiscreteAccessory &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDiscreteAccessoryType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDiscreteAccessoryType *cloneIfcDiscreteAccessoryType(ExpressDataSet *expressDataSet, const IfcDiscreteAccessoryType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionChamberElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionChamberElement *cloneIfcDistributionChamberElement(ExpressDataSet *expressDataSet, const IfcDistributionChamberElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionChamberElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionChamberElementType *cloneIfcDistributionChamberElementType(ExpressDataSet *expressDataSet, const IfcDistributionChamberElementType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionControlElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionControlElement *cloneIfcDistributionControlElement(ExpressDataSet *expressDataSet, const IfcDistributionControlElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionElement *cloneIfcDistributionElement(ExpressDataSet *expressDataSet, const IfcDistributionElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionElementType *cloneIfcDistributionElementType(ExpressDataSet *expressDataSet, const IfcDistributionElementType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionFlowElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionFlowElement *cloneIfcDistributionFlowElement(ExpressDataSet *expressDataSet, const IfcDistributionFlowElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionPort(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionPort *cloneIfcDistributionPort(ExpressDataSet *expressDataSet, const IfcDistributionPort &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDocumentElectronicFormat(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDocumentElectronicFormat *cloneIfcDocumentElectronicFormat(ExpressDataSet *expressDataSet, const IfcDocumentElectronicFormat &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDocumentInformation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDocumentInformation *cloneIfcDocumentInformation(ExpressDataSet *expressDataSet, const IfcDocumentInformation &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDocumentInformationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDocumentInformationRelationship *cloneIfcDocumentInformationRelationship(ExpressDataSet *expressDataSet, const IfcDocumentInformationRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDocumentReference(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDocumentReference *cloneIfcDocumentReference(ExpressDataSet *expressDataSet, const IfcDocumentReference &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDoor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDoor *cloneIfcDoor(ExpressDataSet *expressDataSet, const IfcDoor &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDoorLiningProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDoorLiningProperties *cloneIfcDoorLiningProperties(ExpressDataSet *expressDataSet, const IfcDoorLiningProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDoorPanelProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDoorPanelProperties *cloneIfcDoorPanelProperties(ExpressDataSet *expressDataSet, const IfcDoorPanelProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDoorStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDoorStyle *cloneIfcDoorStyle(ExpressDataSet *expressDataSet, const IfcDoorStyle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDraughtingCallout(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDraughtingCallout *cloneIfcDraughtingCallout(ExpressDataSet *expressDataSet, const IfcDraughtingCallout &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDraughtingCalloutRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDraughtingCalloutRelationship *cloneIfcDraughtingCalloutRelationship(ExpressDataSet *expressDataSet, const IfcDraughtingCalloutRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDraughtingPreDefinedColour(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDraughtingPreDefinedColour *cloneIfcDraughtingPreDefinedColour(ExpressDataSet *expressDataSet, const IfcDraughtingPreDefinedColour &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDraughtingPreDefinedCurveFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDraughtingPreDefinedCurveFont *cloneIfcDraughtingPreDefinedCurveFont(ExpressDataSet *expressDataSet, const IfcDraughtingPreDefinedCurveFont &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDraughtingPreDefinedTextFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDraughtingPreDefinedTextFont *cloneIfcDraughtingPreDefinedTextFont(ExpressDataSet *expressDataSet, const IfcDraughtingPreDefinedTextFont &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDuctFittingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDuctFittingType *cloneIfcDuctFittingType(ExpressDataSet *expressDataSet, const IfcDuctFittingType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDuctSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDuctSegmentType *cloneIfcDuctSegmentType(ExpressDataSet *expressDataSet, const IfcDuctSegmentType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDuctSilencerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDuctSilencerType *cloneIfcDuctSilencerType(ExpressDataSet *expressDataSet, const IfcDuctSilencerType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEdge(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEdge *cloneIfcEdge(ExpressDataSet *expressDataSet, const IfcEdge &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEdgeCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEdgeCurve *cloneIfcEdgeCurve(ExpressDataSet *expressDataSet, const IfcEdgeCurve &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEdgeLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEdgeLoop *cloneIfcEdgeLoop(ExpressDataSet *expressDataSet, const IfcEdgeLoop &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricApplianceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricApplianceType *cloneIfcElectricApplianceType(ExpressDataSet *expressDataSet, const IfcElectricApplianceType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricDistributionPoint(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricDistributionPoint *cloneIfcElectricDistributionPoint(ExpressDataSet *expressDataSet, const IfcElectricDistributionPoint &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricFlowStorageDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricFlowStorageDeviceType *cloneIfcElectricFlowStorageDeviceType(ExpressDataSet *expressDataSet, const IfcElectricFlowStorageDeviceType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricGeneratorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricGeneratorType *cloneIfcElectricGeneratorType(ExpressDataSet *expressDataSet, const IfcElectricGeneratorType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricHeaterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricHeaterType *cloneIfcElectricHeaterType(ExpressDataSet *expressDataSet, const IfcElectricHeaterType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricMotorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricMotorType *cloneIfcElectricMotorType(ExpressDataSet *expressDataSet, const IfcElectricMotorType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricTimeControlType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricTimeControlType *cloneIfcElectricTimeControlType(ExpressDataSet *expressDataSet, const IfcElectricTimeControlType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricalBaseProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricalBaseProperties *cloneIfcElectricalBaseProperties(ExpressDataSet *expressDataSet, const IfcElectricalBaseProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricalCircuit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricalCircuit *cloneIfcElectricalCircuit(ExpressDataSet *expressDataSet, const IfcElectricalCircuit &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricalElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricalElement *cloneIfcElectricalElement(ExpressDataSet *expressDataSet, const IfcElectricalElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElementAssembly(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElementAssembly *cloneIfcElementAssembly(ExpressDataSet *expressDataSet, const IfcElementAssembly &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElementQuantity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElementQuantity *cloneIfcElementQuantity(ExpressDataSet *expressDataSet, const IfcElementQuantity &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEllipse(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEllipse *cloneIfcEllipse(ExpressDataSet *expressDataSet, const IfcEllipse &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEllipseProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEllipseProfileDef *cloneIfcEllipseProfileDef(ExpressDataSet *expressDataSet, const IfcEllipseProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEnergyConversionDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEnergyConversionDevice *cloneIfcEnergyConversionDevice(ExpressDataSet *expressDataSet, const IfcEnergyConversionDevice &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEnergyProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEnergyProperties *cloneIfcEnergyProperties(ExpressDataSet *expressDataSet, const IfcEnergyProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEnvironmentalImpactValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEnvironmentalImpactValue *cloneIfcEnvironmentalImpactValue(ExpressDataSet *expressDataSet, const IfcEnvironmentalImpactValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEquipmentElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEquipmentElement *cloneIfcEquipmentElement(ExpressDataSet *expressDataSet, const IfcEquipmentElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEquipmentStandard(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEquipmentStandard *cloneIfcEquipmentStandard(ExpressDataSet *expressDataSet, const IfcEquipmentStandard &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEvaporativeCoolerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEvaporativeCoolerType *cloneIfcEvaporativeCoolerType(ExpressDataSet *expressDataSet, const IfcEvaporativeCoolerType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEvaporatorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEvaporatorType *cloneIfcEvaporatorType(ExpressDataSet *expressDataSet, const IfcEvaporatorType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExtendedMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExtendedMaterialProperties *cloneIfcExtendedMaterialProperties(ExpressDataSet *expressDataSet, const IfcExtendedMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExternallyDefinedHatchStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExternallyDefinedHatchStyle *cloneIfcExternallyDefinedHatchStyle(ExpressDataSet *expressDataSet, const IfcExternallyDefinedHatchStyle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExternallyDefinedSurfaceStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExternallyDefinedSurfaceStyle *cloneIfcExternallyDefinedSurfaceStyle(ExpressDataSet *expressDataSet, const IfcExternallyDefinedSurfaceStyle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExternallyDefinedSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExternallyDefinedSymbol *cloneIfcExternallyDefinedSymbol(ExpressDataSet *expressDataSet, const IfcExternallyDefinedSymbol &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExternallyDefinedTextFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExternallyDefinedTextFont *cloneIfcExternallyDefinedTextFont(ExpressDataSet *expressDataSet, const IfcExternallyDefinedTextFont &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExtrudedAreaSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExtrudedAreaSolid *cloneIfcExtrudedAreaSolid(ExpressDataSet *expressDataSet, const IfcExtrudedAreaSolid &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFace(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFace *cloneIfcFace(ExpressDataSet *expressDataSet, const IfcFace &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFaceBasedSurfaceModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFaceBasedSurfaceModel *cloneIfcFaceBasedSurfaceModel(ExpressDataSet *expressDataSet, const IfcFaceBasedSurfaceModel &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFaceBound(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFaceBound *cloneIfcFaceBound(ExpressDataSet *expressDataSet, const IfcFaceBound &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFaceOuterBound(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFaceOuterBound *cloneIfcFaceOuterBound(ExpressDataSet *expressDataSet, const IfcFaceOuterBound &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFaceSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFaceSurface *cloneIfcFaceSurface(ExpressDataSet *expressDataSet, const IfcFaceSurface &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFacetedBrep(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFacetedBrep *cloneIfcFacetedBrep(ExpressDataSet *expressDataSet, const IfcFacetedBrep &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFacetedBrepWithVoids(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFacetedBrepWithVoids *cloneIfcFacetedBrepWithVoids(ExpressDataSet *expressDataSet, const IfcFacetedBrepWithVoids &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFailureConnectionCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFailureConnectionCondition *cloneIfcFailureConnectionCondition(ExpressDataSet *expressDataSet, const IfcFailureConnectionCondition &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFanType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFanType *cloneIfcFanType(ExpressDataSet *expressDataSet, const IfcFanType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFastener(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFastener *cloneIfcFastener(ExpressDataSet *expressDataSet, const IfcFastener &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFastenerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFastenerType *cloneIfcFastenerType(ExpressDataSet *expressDataSet, const IfcFastenerType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFillAreaStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFillAreaStyle *cloneIfcFillAreaStyle(ExpressDataSet *expressDataSet, const IfcFillAreaStyle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFillAreaStyleHatching(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFillAreaStyleHatching *cloneIfcFillAreaStyleHatching(ExpressDataSet *expressDataSet, const IfcFillAreaStyleHatching &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFillAreaStyleTileSymbolWithStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFillAreaStyleTileSymbolWithStyle *cloneIfcFillAreaStyleTileSymbolWithStyle(ExpressDataSet *expressDataSet, const IfcFillAreaStyleTileSymbolWithStyle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFillAreaStyleTiles(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFillAreaStyleTiles *cloneIfcFillAreaStyleTiles(ExpressDataSet *expressDataSet, const IfcFillAreaStyleTiles &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFilterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFilterType *cloneIfcFilterType(ExpressDataSet *expressDataSet, const IfcFilterType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFireSuppressionTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFireSuppressionTerminalType *cloneIfcFireSuppressionTerminalType(ExpressDataSet *expressDataSet, const IfcFireSuppressionTerminalType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowController(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowController *cloneIfcFlowController(ExpressDataSet *expressDataSet, const IfcFlowController &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowFitting(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowFitting *cloneIfcFlowFitting(ExpressDataSet *expressDataSet, const IfcFlowFitting &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowInstrumentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowInstrumentType *cloneIfcFlowInstrumentType(ExpressDataSet *expressDataSet, const IfcFlowInstrumentType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowMeterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowMeterType *cloneIfcFlowMeterType(ExpressDataSet *expressDataSet, const IfcFlowMeterType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowMovingDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowMovingDevice *cloneIfcFlowMovingDevice(ExpressDataSet *expressDataSet, const IfcFlowMovingDevice &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowSegment(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowSegment *cloneIfcFlowSegment(ExpressDataSet *expressDataSet, const IfcFlowSegment &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowStorageDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowStorageDevice *cloneIfcFlowStorageDevice(ExpressDataSet *expressDataSet, const IfcFlowStorageDevice &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowTerminal(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowTerminal *cloneIfcFlowTerminal(ExpressDataSet *expressDataSet, const IfcFlowTerminal &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowTreatmentDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowTreatmentDevice *cloneIfcFlowTreatmentDevice(ExpressDataSet *expressDataSet, const IfcFlowTreatmentDevice &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFluidFlowProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFluidFlowProperties *cloneIfcFluidFlowProperties(ExpressDataSet *expressDataSet, const IfcFluidFlowProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFooting(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFooting *cloneIfcFooting(ExpressDataSet *expressDataSet, const IfcFooting &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFuelProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFuelProperties *cloneIfcFuelProperties(ExpressDataSet *expressDataSet, const IfcFuelProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFurnishingElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFurnishingElement *cloneIfcFurnishingElement(ExpressDataSet *expressDataSet, const IfcFurnishingElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFurnishingElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFurnishingElementType *cloneIfcFurnishingElementType(ExpressDataSet *expressDataSet, const IfcFurnishingElementType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFurnitureStandard(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFurnitureStandard *cloneIfcFurnitureStandard(ExpressDataSet *expressDataSet, const IfcFurnitureStandard &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFurnitureType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFurnitureType *cloneIfcFurnitureType(ExpressDataSet *expressDataSet, const IfcFurnitureType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGasTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGasTerminalType *cloneIfcGasTerminalType(ExpressDataSet *expressDataSet, const IfcGasTerminalType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeneralMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeneralMaterialProperties *cloneIfcGeneralMaterialProperties(ExpressDataSet *expressDataSet, const IfcGeneralMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeneralProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeneralProfileProperties *cloneIfcGeneralProfileProperties(ExpressDataSet *expressDataSet, const IfcGeneralProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeometricCurveSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeometricCurveSet *cloneIfcGeometricCurveSet(ExpressDataSet *expressDataSet, const IfcGeometricCurveSet &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeometricRepresentationContext(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeometricRepresentationContext *cloneIfcGeometricRepresentationContext(ExpressDataSet *expressDataSet, const IfcGeometricRepresentationContext &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeometricRepresentationSubContext(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeometricRepresentationSubContext *cloneIfcGeometricRepresentationSubContext(ExpressDataSet *expressDataSet, const IfcGeometricRepresentationSubContext &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeometricSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeometricSet *cloneIfcGeometricSet(ExpressDataSet *expressDataSet, const IfcGeometricSet &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGrid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGrid *cloneIfcGrid(ExpressDataSet *expressDataSet, const IfcGrid &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGridAxis(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGridAxis *cloneIfcGridAxis(ExpressDataSet *expressDataSet, const IfcGridAxis &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGridPlacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGridPlacement *cloneIfcGridPlacement(ExpressDataSet *expressDataSet, const IfcGridPlacement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGroup *cloneIfcGroup(ExpressDataSet *expressDataSet, const IfcGroup &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcHalfSpaceSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcHalfSpaceSolid *cloneIfcHalfSpaceSolid(ExpressDataSet *expressDataSet, const IfcHalfSpaceSolid &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcHeatExchangerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcHeatExchangerType *cloneIfcHeatExchangerType(ExpressDataSet *expressDataSet, const IfcHeatExchangerType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcHumidifierType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcHumidifierType *cloneIfcHumidifierType(ExpressDataSet *expressDataSet, const IfcHumidifierType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcHygroscopicMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcHygroscopicMaterialProperties *cloneIfcHygroscopicMaterialProperties(ExpressDataSet *expressDataSet, const IfcHygroscopicMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcIShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcIShapeProfileDef *cloneIfcIShapeProfileDef(ExpressDataSet *expressDataSet, const IfcIShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcImageTexture(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcImageTexture *cloneIfcImageTexture(ExpressDataSet *expressDataSet, const IfcImageTexture &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcInventory(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcInventory *cloneIfcInventory(ExpressDataSet *expressDataSet, const IfcInventory &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcIrregularTimeSeries(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcIrregularTimeSeries *cloneIfcIrregularTimeSeries(ExpressDataSet *expressDataSet, const IfcIrregularTimeSeries &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcIrregularTimeSeriesValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcIrregularTimeSeriesValue *cloneIfcIrregularTimeSeriesValue(ExpressDataSet *expressDataSet, const IfcIrregularTimeSeriesValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcJunctionBoxType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcJunctionBoxType *cloneIfcJunctionBoxType(ExpressDataSet *expressDataSet, const IfcJunctionBoxType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLShapeProfileDef *cloneIfcLShapeProfileDef(ExpressDataSet *expressDataSet, const IfcLShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLaborResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLaborResource *cloneIfcLaborResource(ExpressDataSet *expressDataSet, const IfcLaborResource &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLampType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLampType *cloneIfcLampType(ExpressDataSet *expressDataSet, const IfcLampType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLibraryInformation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLibraryInformation *cloneIfcLibraryInformation(ExpressDataSet *expressDataSet, const IfcLibraryInformation &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLibraryReference(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLibraryReference *cloneIfcLibraryReference(ExpressDataSet *expressDataSet, const IfcLibraryReference &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightDistributionData(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightDistributionData *cloneIfcLightDistributionData(ExpressDataSet *expressDataSet, const IfcLightDistributionData &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightFixtureType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightFixtureType *cloneIfcLightFixtureType(ExpressDataSet *expressDataSet, const IfcLightFixtureType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightIntensityDistribution(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightIntensityDistribution *cloneIfcLightIntensityDistribution(ExpressDataSet *expressDataSet, const IfcLightIntensityDistribution &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightSourceAmbient(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightSourceAmbient *cloneIfcLightSourceAmbient(ExpressDataSet *expressDataSet, const IfcLightSourceAmbient &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightSourceDirectional(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightSourceDirectional *cloneIfcLightSourceDirectional(ExpressDataSet *expressDataSet, const IfcLightSourceDirectional &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightSourceGoniometric(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightSourceGoniometric *cloneIfcLightSourceGoniometric(ExpressDataSet *expressDataSet, const IfcLightSourceGoniometric &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightSourcePositional(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightSourcePositional *cloneIfcLightSourcePositional(ExpressDataSet *expressDataSet, const IfcLightSourcePositional &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightSourceSpot(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightSourceSpot *cloneIfcLightSourceSpot(ExpressDataSet *expressDataSet, const IfcLightSourceSpot &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLine(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLine *cloneIfcLine(ExpressDataSet *expressDataSet, const IfcLine &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLinearDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLinearDimension *cloneIfcLinearDimension(ExpressDataSet *expressDataSet, const IfcLinearDimension &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLocalPlacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLocalPlacement *cloneIfcLocalPlacement(ExpressDataSet *expressDataSet, const IfcLocalPlacement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLocalTime(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLocalTime *cloneIfcLocalTime(ExpressDataSet *expressDataSet, const IfcLocalTime &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLoop *cloneIfcLoop(ExpressDataSet *expressDataSet, const IfcLoop &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMappedItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMappedItem *cloneIfcMappedItem(ExpressDataSet *expressDataSet, const IfcMappedItem &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterial(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterial *cloneIfcMaterial(ExpressDataSet *expressDataSet, const IfcMaterial &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialClassificationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialClassificationRelationship *cloneIfcMaterialClassificationRelationship(ExpressDataSet *expressDataSet, const IfcMaterialClassificationRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialDefinitionRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialDefinitionRepresentation *cloneIfcMaterialDefinitionRepresentation(ExpressDataSet *expressDataSet, const IfcMaterialDefinitionRepresentation &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialLayer(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialLayer *cloneIfcMaterialLayer(ExpressDataSet *expressDataSet, const IfcMaterialLayer &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialLayerSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialLayerSet *cloneIfcMaterialLayerSet(ExpressDataSet *expressDataSet, const IfcMaterialLayerSet &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialLayerSetUsage(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialLayerSetUsage *cloneIfcMaterialLayerSetUsage(ExpressDataSet *expressDataSet, const IfcMaterialLayerSetUsage &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialList(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialList *cloneIfcMaterialList(ExpressDataSet *expressDataSet, const IfcMaterialList &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMeasureWithUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMeasureWithUnit *cloneIfcMeasureWithUnit(ExpressDataSet *expressDataSet, const IfcMeasureWithUnit &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMechanicalConcreteMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMechanicalConcreteMaterialProperties *cloneIfcMechanicalConcreteMaterialProperties(ExpressDataSet *expressDataSet, const IfcMechanicalConcreteMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMechanicalFastener(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMechanicalFastener *cloneIfcMechanicalFastener(ExpressDataSet *expressDataSet, const IfcMechanicalFastener &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMechanicalFastenerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMechanicalFastenerType *cloneIfcMechanicalFastenerType(ExpressDataSet *expressDataSet, const IfcMechanicalFastenerType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMechanicalMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMechanicalMaterialProperties *cloneIfcMechanicalMaterialProperties(ExpressDataSet *expressDataSet, const IfcMechanicalMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMechanicalSteelMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMechanicalSteelMaterialProperties *cloneIfcMechanicalSteelMaterialProperties(ExpressDataSet *expressDataSet, const IfcMechanicalSteelMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMember *cloneIfcMember(ExpressDataSet *expressDataSet, const IfcMember &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMemberType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMemberType *cloneIfcMemberType(ExpressDataSet *expressDataSet, const IfcMemberType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMetric(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMetric *cloneIfcMetric(ExpressDataSet *expressDataSet, const IfcMetric &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMonetaryUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMonetaryUnit *cloneIfcMonetaryUnit(ExpressDataSet *expressDataSet, const IfcMonetaryUnit &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMotorConnectionType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMotorConnectionType *cloneIfcMotorConnectionType(ExpressDataSet *expressDataSet, const IfcMotorConnectionType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMove(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMove *cloneIfcMove(ExpressDataSet *expressDataSet, const IfcMove &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcObjective(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcObjective *cloneIfcObjective(ExpressDataSet *expressDataSet, const IfcObjective &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOccupant(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOccupant *cloneIfcOccupant(ExpressDataSet *expressDataSet, const IfcOccupant &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOffsetCurve2D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOffsetCurve2D *cloneIfcOffsetCurve2D(ExpressDataSet *expressDataSet, const IfcOffsetCurve2D &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOffsetCurve3D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOffsetCurve3D *cloneIfcOffsetCurve3D(ExpressDataSet *expressDataSet, const IfcOffsetCurve3D &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOneDirectionRepeatFactor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOneDirectionRepeatFactor *cloneIfcOneDirectionRepeatFactor(ExpressDataSet *expressDataSet, const IfcOneDirectionRepeatFactor &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOpenShell(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOpenShell *cloneIfcOpenShell(ExpressDataSet *expressDataSet, const IfcOpenShell &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOpeningElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOpeningElement *cloneIfcOpeningElement(ExpressDataSet *expressDataSet, const IfcOpeningElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOpticalMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOpticalMaterialProperties *cloneIfcOpticalMaterialProperties(ExpressDataSet *expressDataSet, const IfcOpticalMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOrderAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOrderAction *cloneIfcOrderAction(ExpressDataSet *expressDataSet, const IfcOrderAction &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOrganization(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOrganization *cloneIfcOrganization(ExpressDataSet *expressDataSet, const IfcOrganization &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOrganizationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOrganizationRelationship *cloneIfcOrganizationRelationship(ExpressDataSet *expressDataSet, const IfcOrganizationRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOrientedEdge(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOrientedEdge *cloneIfcOrientedEdge(ExpressDataSet *expressDataSet, const IfcOrientedEdge &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOutletType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOutletType *cloneIfcOutletType(ExpressDataSet *expressDataSet, const IfcOutletType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOwnerHistory(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOwnerHistory *cloneIfcOwnerHistory(ExpressDataSet *expressDataSet, const IfcOwnerHistory &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPath(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPath *cloneIfcPath(ExpressDataSet *expressDataSet, const IfcPath &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPerformanceHistory(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPerformanceHistory *cloneIfcPerformanceHistory(ExpressDataSet *expressDataSet, const IfcPerformanceHistory &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPermeableCoveringProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPermeableCoveringProperties *cloneIfcPermeableCoveringProperties(ExpressDataSet *expressDataSet, const IfcPermeableCoveringProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPermit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPermit *cloneIfcPermit(ExpressDataSet *expressDataSet, const IfcPermit &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPerson(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPerson *cloneIfcPerson(ExpressDataSet *expressDataSet, const IfcPerson &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPersonAndOrganization(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPersonAndOrganization *cloneIfcPersonAndOrganization(ExpressDataSet *expressDataSet, const IfcPersonAndOrganization &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPhysicalComplexQuantity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPhysicalComplexQuantity *cloneIfcPhysicalComplexQuantity(ExpressDataSet *expressDataSet, const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPile(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPile *cloneIfcPile(ExpressDataSet *expressDataSet, const IfcPile &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPipeFittingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPipeFittingType *cloneIfcPipeFittingType(ExpressDataSet *expressDataSet, const IfcPipeFittingType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPipeSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPipeSegmentType *cloneIfcPipeSegmentType(ExpressDataSet *expressDataSet, const IfcPipeSegmentType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPixelTexture(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPixelTexture *cloneIfcPixelTexture(ExpressDataSet *expressDataSet, const IfcPixelTexture &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPlanarBox(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPlanarBox *cloneIfcPlanarBox(ExpressDataSet *expressDataSet, const IfcPlanarBox &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPlanarExtent(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPlanarExtent *cloneIfcPlanarExtent(ExpressDataSet *expressDataSet, const IfcPlanarExtent &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPlane(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPlane *cloneIfcPlane(ExpressDataSet *expressDataSet, const IfcPlane &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPlate(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPlate *cloneIfcPlate(ExpressDataSet *expressDataSet, const IfcPlate &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPlateType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPlateType *cloneIfcPlateType(ExpressDataSet *expressDataSet, const IfcPlateType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPointOnCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPointOnCurve *cloneIfcPointOnCurve(ExpressDataSet *expressDataSet, const IfcPointOnCurve &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPointOnSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPointOnSurface *cloneIfcPointOnSurface(ExpressDataSet *expressDataSet, const IfcPointOnSurface &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPolyLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPolyLoop *cloneIfcPolyLoop(ExpressDataSet *expressDataSet, const IfcPolyLoop &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPolygonalBoundedHalfSpace(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPolygonalBoundedHalfSpace *cloneIfcPolygonalBoundedHalfSpace(ExpressDataSet *expressDataSet, const IfcPolygonalBoundedHalfSpace &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPolyline(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPolyline *cloneIfcPolyline(ExpressDataSet *expressDataSet, const IfcPolyline &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPostalAddress(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPostalAddress *cloneIfcPostalAddress(ExpressDataSet *expressDataSet, const IfcPostalAddress &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPreDefinedDimensionSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPreDefinedDimensionSymbol *cloneIfcPreDefinedDimensionSymbol(ExpressDataSet *expressDataSet, const IfcPreDefinedDimensionSymbol &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPreDefinedPointMarkerSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPreDefinedPointMarkerSymbol *cloneIfcPreDefinedPointMarkerSymbol(ExpressDataSet *expressDataSet, const IfcPreDefinedPointMarkerSymbol &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPreDefinedTerminatorSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPreDefinedTerminatorSymbol *cloneIfcPreDefinedTerminatorSymbol(ExpressDataSet *expressDataSet, const IfcPreDefinedTerminatorSymbol &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPresentationLayerAssignment(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPresentationLayerAssignment *cloneIfcPresentationLayerAssignment(ExpressDataSet *expressDataSet, const IfcPresentationLayerAssignment &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPresentationLayerWithStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPresentationLayerWithStyle *cloneIfcPresentationLayerWithStyle(ExpressDataSet *expressDataSet, const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPresentationStyleAssignment(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPresentationStyleAssignment *cloneIfcPresentationStyleAssignment(ExpressDataSet *expressDataSet, const IfcPresentationStyleAssignment &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProcedure(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProcedure *cloneIfcProcedure(ExpressDataSet *expressDataSet, const IfcProcedure &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProductDefinitionShape(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProductDefinitionShape *cloneIfcProductDefinitionShape(ExpressDataSet *expressDataSet, const IfcProductDefinitionShape &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProductRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProductRepresentation *cloneIfcProductRepresentation(ExpressDataSet *expressDataSet, const IfcProductRepresentation &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProductsOfCombustionProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProductsOfCombustionProperties *cloneIfcProductsOfCombustionProperties(ExpressDataSet *expressDataSet, const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProject(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProject *cloneIfcProject(ExpressDataSet *expressDataSet, const IfcProject &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProjectOrder(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProjectOrder *cloneIfcProjectOrder(ExpressDataSet *expressDataSet, const IfcProjectOrder &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProjectOrderRecord(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProjectOrderRecord *cloneIfcProjectOrderRecord(ExpressDataSet *expressDataSet, const IfcProjectOrderRecord &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProjectionCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProjectionCurve *cloneIfcProjectionCurve(ExpressDataSet *expressDataSet, const IfcProjectionCurve &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProjectionElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProjectionElement *cloneIfcProjectionElement(ExpressDataSet *expressDataSet, const IfcProjectionElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyBoundedValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyBoundedValue *cloneIfcPropertyBoundedValue(ExpressDataSet *expressDataSet, const IfcPropertyBoundedValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyConstraintRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyConstraintRelationship *cloneIfcPropertyConstraintRelationship(ExpressDataSet *expressDataSet, const IfcPropertyConstraintRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyDependencyRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyDependencyRelationship *cloneIfcPropertyDependencyRelationship(ExpressDataSet *expressDataSet, const IfcPropertyDependencyRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyEnumeratedValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyEnumeratedValue *cloneIfcPropertyEnumeratedValue(ExpressDataSet *expressDataSet, const IfcPropertyEnumeratedValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyEnumeration(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyEnumeration *cloneIfcPropertyEnumeration(ExpressDataSet *expressDataSet, const IfcPropertyEnumeration &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyListValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyListValue *cloneIfcPropertyListValue(ExpressDataSet *expressDataSet, const IfcPropertyListValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyReferenceValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyReferenceValue *cloneIfcPropertyReferenceValue(ExpressDataSet *expressDataSet, const IfcPropertyReferenceValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertySet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertySet *cloneIfcPropertySet(ExpressDataSet *expressDataSet, const IfcPropertySet &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertySingleValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertySingleValue *cloneIfcPropertySingleValue(ExpressDataSet *expressDataSet, const IfcPropertySingleValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyTableValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyTableValue *cloneIfcPropertyTableValue(ExpressDataSet *expressDataSet, const IfcPropertyTableValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProtectiveDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProtectiveDeviceType *cloneIfcProtectiveDeviceType(ExpressDataSet *expressDataSet, const IfcProtectiveDeviceType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProxy(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProxy *cloneIfcProxy(ExpressDataSet *expressDataSet, const IfcProxy &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPumpType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPumpType *cloneIfcPumpType(ExpressDataSet *expressDataSet, const IfcPumpType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityArea(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityArea *cloneIfcQuantityArea(ExpressDataSet *expressDataSet, const IfcQuantityArea &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityCount(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityCount *cloneIfcQuantityCount(ExpressDataSet *expressDataSet, const IfcQuantityCount &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityLength(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityLength *cloneIfcQuantityLength(ExpressDataSet *expressDataSet, const IfcQuantityLength &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityTime(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityTime *cloneIfcQuantityTime(ExpressDataSet *expressDataSet, const IfcQuantityTime &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityVolume(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityVolume *cloneIfcQuantityVolume(ExpressDataSet *expressDataSet, const IfcQuantityVolume &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityWeight(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityWeight *cloneIfcQuantityWeight(ExpressDataSet *expressDataSet, const IfcQuantityWeight &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRadiusDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRadiusDimension *cloneIfcRadiusDimension(ExpressDataSet *expressDataSet, const IfcRadiusDimension &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRailing(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRailing *cloneIfcRailing(ExpressDataSet *expressDataSet, const IfcRailing &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRailingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRailingType *cloneIfcRailingType(ExpressDataSet *expressDataSet, const IfcRailingType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRamp(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRamp *cloneIfcRamp(ExpressDataSet *expressDataSet, const IfcRamp &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRampFlight(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRampFlight *cloneIfcRampFlight(ExpressDataSet *expressDataSet, const IfcRampFlight &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRampFlightType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRampFlightType *cloneIfcRampFlightType(ExpressDataSet *expressDataSet, const IfcRampFlightType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRationalBezierCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRationalBezierCurve *cloneIfcRationalBezierCurve(ExpressDataSet *expressDataSet, const IfcRationalBezierCurve &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRectangleHollowProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRectangleHollowProfileDef *cloneIfcRectangleHollowProfileDef(ExpressDataSet *expressDataSet, const IfcRectangleHollowProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRectangleProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRectangleProfileDef *cloneIfcRectangleProfileDef(ExpressDataSet *expressDataSet, const IfcRectangleProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRectangularPyramid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRectangularPyramid *cloneIfcRectangularPyramid(ExpressDataSet *expressDataSet, const IfcRectangularPyramid &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRectangularTrimmedSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRectangularTrimmedSurface *cloneIfcRectangularTrimmedSurface(ExpressDataSet *expressDataSet, const IfcRectangularTrimmedSurface &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReferencesValueDocument(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReferencesValueDocument *cloneIfcReferencesValueDocument(ExpressDataSet *expressDataSet, const IfcReferencesValueDocument &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRegularTimeSeries(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRegularTimeSeries *cloneIfcRegularTimeSeries(ExpressDataSet *expressDataSet, const IfcRegularTimeSeries &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReinforcementBarProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReinforcementBarProperties *cloneIfcReinforcementBarProperties(ExpressDataSet *expressDataSet, const IfcReinforcementBarProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReinforcementDefinitionProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReinforcementDefinitionProperties *cloneIfcReinforcementDefinitionProperties(ExpressDataSet *expressDataSet, const IfcReinforcementDefinitionProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReinforcingBar(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReinforcingBar *cloneIfcReinforcingBar(ExpressDataSet *expressDataSet, const IfcReinforcingBar &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReinforcingMesh(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReinforcingMesh *cloneIfcReinforcingMesh(ExpressDataSet *expressDataSet, const IfcReinforcingMesh &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAggregates(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAggregates *cloneIfcRelAggregates(ExpressDataSet *expressDataSet, const IfcRelAggregates &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsTasks(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsTasks *cloneIfcRelAssignsTasks(ExpressDataSet *expressDataSet, const IfcRelAssignsTasks &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToActor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToActor *cloneIfcRelAssignsToActor(ExpressDataSet *expressDataSet, const IfcRelAssignsToActor &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToControl(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToControl *cloneIfcRelAssignsToControl(ExpressDataSet *expressDataSet, const IfcRelAssignsToControl &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToGroup *cloneIfcRelAssignsToGroup(ExpressDataSet *expressDataSet, const IfcRelAssignsToGroup &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToProcess(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToProcess *cloneIfcRelAssignsToProcess(ExpressDataSet *expressDataSet, const IfcRelAssignsToProcess &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToProduct(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToProduct *cloneIfcRelAssignsToProduct(ExpressDataSet *expressDataSet, const IfcRelAssignsToProduct &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToProjectOrder(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToProjectOrder *cloneIfcRelAssignsToProjectOrder(ExpressDataSet *expressDataSet, const IfcRelAssignsToProjectOrder &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToResource *cloneIfcRelAssignsToResource(ExpressDataSet *expressDataSet, const IfcRelAssignsToResource &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociates(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociates *cloneIfcRelAssociates(ExpressDataSet *expressDataSet, const IfcRelAssociates &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesAppliedValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesAppliedValue *cloneIfcRelAssociatesAppliedValue(ExpressDataSet *expressDataSet, const IfcRelAssociatesAppliedValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesApproval(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesApproval *cloneIfcRelAssociatesApproval(ExpressDataSet *expressDataSet, const IfcRelAssociatesApproval &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesClassification(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesClassification *cloneIfcRelAssociatesClassification(ExpressDataSet *expressDataSet, const IfcRelAssociatesClassification &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesConstraint(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesConstraint *cloneIfcRelAssociatesConstraint(ExpressDataSet *expressDataSet, const IfcRelAssociatesConstraint &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesDocument(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesDocument *cloneIfcRelAssociatesDocument(ExpressDataSet *expressDataSet, const IfcRelAssociatesDocument &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesLibrary(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesLibrary *cloneIfcRelAssociatesLibrary(ExpressDataSet *expressDataSet, const IfcRelAssociatesLibrary &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesMaterial(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesMaterial *cloneIfcRelAssociatesMaterial(ExpressDataSet *expressDataSet, const IfcRelAssociatesMaterial &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesProfileProperties *cloneIfcRelAssociatesProfileProperties(ExpressDataSet *expressDataSet, const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsElements *cloneIfcRelConnectsElements(ExpressDataSet *expressDataSet, const IfcRelConnectsElements &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsPathElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsPathElements *cloneIfcRelConnectsPathElements(ExpressDataSet *expressDataSet, const IfcRelConnectsPathElements &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsPortToElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsPortToElement *cloneIfcRelConnectsPortToElement(ExpressDataSet *expressDataSet, const IfcRelConnectsPortToElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsPorts(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsPorts *cloneIfcRelConnectsPorts(ExpressDataSet *expressDataSet, const IfcRelConnectsPorts &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsStructuralActivity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsStructuralActivity *cloneIfcRelConnectsStructuralActivity(ExpressDataSet *expressDataSet, const IfcRelConnectsStructuralActivity &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsStructuralElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsStructuralElement *cloneIfcRelConnectsStructuralElement(ExpressDataSet *expressDataSet, const IfcRelConnectsStructuralElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsStructuralMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsStructuralMember *cloneIfcRelConnectsStructuralMember(ExpressDataSet *expressDataSet, const IfcRelConnectsStructuralMember &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsWithEccentricity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsWithEccentricity *cloneIfcRelConnectsWithEccentricity(ExpressDataSet *expressDataSet, const IfcRelConnectsWithEccentricity &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsWithRealizingElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsWithRealizingElements *cloneIfcRelConnectsWithRealizingElements(ExpressDataSet *expressDataSet, const IfcRelConnectsWithRealizingElements &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelContainedInSpatialStructure(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelContainedInSpatialStructure *cloneIfcRelContainedInSpatialStructure(ExpressDataSet *expressDataSet, const IfcRelContainedInSpatialStructure &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelCoversBldgElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelCoversBldgElements *cloneIfcRelCoversBldgElements(ExpressDataSet *expressDataSet, const IfcRelCoversBldgElements &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelCoversSpaces(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelCoversSpaces *cloneIfcRelCoversSpaces(ExpressDataSet *expressDataSet, const IfcRelCoversSpaces &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelDefinesByProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelDefinesByProperties *cloneIfcRelDefinesByProperties(ExpressDataSet *expressDataSet, const IfcRelDefinesByProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelDefinesByType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelDefinesByType *cloneIfcRelDefinesByType(ExpressDataSet *expressDataSet, const IfcRelDefinesByType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelFillsElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelFillsElement *cloneIfcRelFillsElement(ExpressDataSet *expressDataSet, const IfcRelFillsElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelFlowControlElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelFlowControlElements *cloneIfcRelFlowControlElements(ExpressDataSet *expressDataSet, const IfcRelFlowControlElements &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelInteractionRequirements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelInteractionRequirements *cloneIfcRelInteractionRequirements(ExpressDataSet *expressDataSet, const IfcRelInteractionRequirements &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelNests(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelNests *cloneIfcRelNests(ExpressDataSet *expressDataSet, const IfcRelNests &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelOccupiesSpaces(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelOccupiesSpaces *cloneIfcRelOccupiesSpaces(ExpressDataSet *expressDataSet, const IfcRelOccupiesSpaces &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelOverridesProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelOverridesProperties *cloneIfcRelOverridesProperties(ExpressDataSet *expressDataSet, const IfcRelOverridesProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelProjectsElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelProjectsElement *cloneIfcRelProjectsElement(ExpressDataSet *expressDataSet, const IfcRelProjectsElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelReferencedInSpatialStructure(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelReferencedInSpatialStructure *cloneIfcRelReferencedInSpatialStructure(ExpressDataSet *expressDataSet, const IfcRelReferencedInSpatialStructure &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelSchedulesCostItems(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelSchedulesCostItems *cloneIfcRelSchedulesCostItems(ExpressDataSet *expressDataSet, const IfcRelSchedulesCostItems &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelSequence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelSequence *cloneIfcRelSequence(ExpressDataSet *expressDataSet, const IfcRelSequence &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelServicesBuildings(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelServicesBuildings *cloneIfcRelServicesBuildings(ExpressDataSet *expressDataSet, const IfcRelServicesBuildings &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelSpaceBoundary(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelSpaceBoundary *cloneIfcRelSpaceBoundary(ExpressDataSet *expressDataSet, const IfcRelSpaceBoundary &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelVoidsElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelVoidsElement *cloneIfcRelVoidsElement(ExpressDataSet *expressDataSet, const IfcRelVoidsElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelaxation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelaxation *cloneIfcRelaxation(ExpressDataSet *expressDataSet, const IfcRelaxation &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRepresentation *cloneIfcRepresentation(ExpressDataSet *expressDataSet, const IfcRepresentation &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRepresentationContext(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRepresentationContext *cloneIfcRepresentationContext(ExpressDataSet *expressDataSet, const IfcRepresentationContext &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRepresentationMap(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRepresentationMap *cloneIfcRepresentationMap(ExpressDataSet *expressDataSet, const IfcRepresentationMap &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRevolvedAreaSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRevolvedAreaSolid *cloneIfcRevolvedAreaSolid(ExpressDataSet *expressDataSet, const IfcRevolvedAreaSolid &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRibPlateProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRibPlateProfileProperties *cloneIfcRibPlateProfileProperties(ExpressDataSet *expressDataSet, const IfcRibPlateProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRightCircularCone(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRightCircularCone *cloneIfcRightCircularCone(ExpressDataSet *expressDataSet, const IfcRightCircularCone &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRightCircularCylinder(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRightCircularCylinder *cloneIfcRightCircularCylinder(ExpressDataSet *expressDataSet, const IfcRightCircularCylinder &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRoof(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRoof *cloneIfcRoof(ExpressDataSet *expressDataSet, const IfcRoof &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRoundedEdgeFeature(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRoundedEdgeFeature *cloneIfcRoundedEdgeFeature(ExpressDataSet *expressDataSet, const IfcRoundedEdgeFeature &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRoundedRectangleProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRoundedRectangleProfileDef *cloneIfcRoundedRectangleProfileDef(ExpressDataSet *expressDataSet, const IfcRoundedRectangleProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSIUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSIUnit *cloneIfcSIUnit(ExpressDataSet *expressDataSet, const IfcSIUnit &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSanitaryTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSanitaryTerminalType *cloneIfcSanitaryTerminalType(ExpressDataSet *expressDataSet, const IfcSanitaryTerminalType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcScheduleTimeControl(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcScheduleTimeControl *cloneIfcScheduleTimeControl(ExpressDataSet *expressDataSet, const IfcScheduleTimeControl &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSectionProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSectionProperties *cloneIfcSectionProperties(ExpressDataSet *expressDataSet, const IfcSectionProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSectionReinforcementProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSectionReinforcementProperties *cloneIfcSectionReinforcementProperties(ExpressDataSet *expressDataSet, const IfcSectionReinforcementProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSectionedSpine(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSectionedSpine *cloneIfcSectionedSpine(ExpressDataSet *expressDataSet, const IfcSectionedSpine &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSensorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSensorType *cloneIfcSensorType(ExpressDataSet *expressDataSet, const IfcSensorType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcServiceLife(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcServiceLife *cloneIfcServiceLife(ExpressDataSet *expressDataSet, const IfcServiceLife &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcServiceLifeFactor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcServiceLifeFactor *cloneIfcServiceLifeFactor(ExpressDataSet *expressDataSet, const IfcServiceLifeFactor &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcShapeAspect(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcShapeAspect *cloneIfcShapeAspect(ExpressDataSet *expressDataSet, const IfcShapeAspect &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcShapeRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcShapeRepresentation *cloneIfcShapeRepresentation(ExpressDataSet *expressDataSet, const IfcShapeRepresentation &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcShellBasedSurfaceModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcShellBasedSurfaceModel *cloneIfcShellBasedSurfaceModel(ExpressDataSet *expressDataSet, const IfcShellBasedSurfaceModel &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSite(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSite *cloneIfcSite(ExpressDataSet *expressDataSet, const IfcSite &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSlab(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSlab *cloneIfcSlab(ExpressDataSet *expressDataSet, const IfcSlab &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSlabType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSlabType *cloneIfcSlabType(ExpressDataSet *expressDataSet, const IfcSlabType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSlippageConnectionCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSlippageConnectionCondition *cloneIfcSlippageConnectionCondition(ExpressDataSet *expressDataSet, const IfcSlippageConnectionCondition &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSoundProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSoundProperties *cloneIfcSoundProperties(ExpressDataSet *expressDataSet, const IfcSoundProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSoundValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSoundValue *cloneIfcSoundValue(ExpressDataSet *expressDataSet, const IfcSoundValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpace(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpace *cloneIfcSpace(ExpressDataSet *expressDataSet, const IfcSpace &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpaceHeaterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpaceHeaterType *cloneIfcSpaceHeaterType(ExpressDataSet *expressDataSet, const IfcSpaceHeaterType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpaceProgram(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpaceProgram *cloneIfcSpaceProgram(ExpressDataSet *expressDataSet, const IfcSpaceProgram &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpaceThermalLoadProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpaceThermalLoadProperties *cloneIfcSpaceThermalLoadProperties(ExpressDataSet *expressDataSet, const IfcSpaceThermalLoadProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpaceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpaceType *cloneIfcSpaceType(ExpressDataSet *expressDataSet, const IfcSpaceType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSphere(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSphere *cloneIfcSphere(ExpressDataSet *expressDataSet, const IfcSphere &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStackTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStackTerminalType *cloneIfcStackTerminalType(ExpressDataSet *expressDataSet, const IfcStackTerminalType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStair(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStair *cloneIfcStair(ExpressDataSet *expressDataSet, const IfcStair &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStairFlight(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStairFlight *cloneIfcStairFlight(ExpressDataSet *expressDataSet, const IfcStairFlight &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStairFlightType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStairFlightType *cloneIfcStairFlightType(ExpressDataSet *expressDataSet, const IfcStairFlightType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralAnalysisModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralAnalysisModel *cloneIfcStructuralAnalysisModel(ExpressDataSet *expressDataSet, const IfcStructuralAnalysisModel &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralCurveConnection(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralCurveConnection *cloneIfcStructuralCurveConnection(ExpressDataSet *expressDataSet, const IfcStructuralCurveConnection &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralCurveMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralCurveMember *cloneIfcStructuralCurveMember(ExpressDataSet *expressDataSet, const IfcStructuralCurveMember &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralCurveMemberVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralCurveMemberVarying *cloneIfcStructuralCurveMemberVarying(ExpressDataSet *expressDataSet, const IfcStructuralCurveMemberVarying &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLinearAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLinearAction *cloneIfcStructuralLinearAction(ExpressDataSet *expressDataSet, const IfcStructuralLinearAction &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLinearActionVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLinearActionVarying *cloneIfcStructuralLinearActionVarying(ExpressDataSet *expressDataSet, const IfcStructuralLinearActionVarying &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadGroup *cloneIfcStructuralLoadGroup(ExpressDataSet *expressDataSet, const IfcStructuralLoadGroup &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadLinearForce(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadLinearForce *cloneIfcStructuralLoadLinearForce(ExpressDataSet *expressDataSet, const IfcStructuralLoadLinearForce &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadPlanarForce(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadPlanarForce *cloneIfcStructuralLoadPlanarForce(ExpressDataSet *expressDataSet, const IfcStructuralLoadPlanarForce &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadSingleDisplacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadSingleDisplacement *cloneIfcStructuralLoadSingleDisplacement(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleDisplacement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadSingleDisplacementDistortion(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadSingleDisplacementDistortion *cloneIfcStructuralLoadSingleDisplacementDistortion(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleDisplacementDistortion &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadSingleForce(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadSingleForce *cloneIfcStructuralLoadSingleForce(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleForce &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadSingleForceWarping(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadSingleForceWarping *cloneIfcStructuralLoadSingleForceWarping(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleForceWarping &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadTemperature(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadTemperature *cloneIfcStructuralLoadTemperature(ExpressDataSet *expressDataSet, const IfcStructuralLoadTemperature &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralPlanarAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralPlanarAction *cloneIfcStructuralPlanarAction(ExpressDataSet *expressDataSet, const IfcStructuralPlanarAction &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralPlanarActionVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralPlanarActionVarying *cloneIfcStructuralPlanarActionVarying(ExpressDataSet *expressDataSet, const IfcStructuralPlanarActionVarying &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralPointAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralPointAction *cloneIfcStructuralPointAction(ExpressDataSet *expressDataSet, const IfcStructuralPointAction &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralPointConnection(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralPointConnection *cloneIfcStructuralPointConnection(ExpressDataSet *expressDataSet, const IfcStructuralPointConnection &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralPointReaction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralPointReaction *cloneIfcStructuralPointReaction(ExpressDataSet *expressDataSet, const IfcStructuralPointReaction &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralProfileProperties *cloneIfcStructuralProfileProperties(ExpressDataSet *expressDataSet, const IfcStructuralProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralResultGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralResultGroup *cloneIfcStructuralResultGroup(ExpressDataSet *expressDataSet, const IfcStructuralResultGroup &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralSteelProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralSteelProfileProperties *cloneIfcStructuralSteelProfileProperties(ExpressDataSet *expressDataSet, const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralSurfaceConnection(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralSurfaceConnection *cloneIfcStructuralSurfaceConnection(ExpressDataSet *expressDataSet, const IfcStructuralSurfaceConnection &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralSurfaceMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralSurfaceMember *cloneIfcStructuralSurfaceMember(ExpressDataSet *expressDataSet, const IfcStructuralSurfaceMember &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralSurfaceMemberVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralSurfaceMemberVarying *cloneIfcStructuralSurfaceMemberVarying(ExpressDataSet *expressDataSet, const IfcStructuralSurfaceMemberVarying &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuredDimensionCallout(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuredDimensionCallout *cloneIfcStructuredDimensionCallout(ExpressDataSet *expressDataSet, const IfcStructuredDimensionCallout &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStyledItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStyledItem *cloneIfcStyledItem(ExpressDataSet *expressDataSet, const IfcStyledItem &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStyledRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStyledRepresentation *cloneIfcStyledRepresentation(ExpressDataSet *expressDataSet, const IfcStyledRepresentation &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSubContractResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSubContractResource *cloneIfcSubContractResource(ExpressDataSet *expressDataSet, const IfcSubContractResource &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSubedge(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSubedge *cloneIfcSubedge(ExpressDataSet *expressDataSet, const IfcSubedge &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceCurveSweptAreaSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceCurveSweptAreaSolid *cloneIfcSurfaceCurveSweptAreaSolid(ExpressDataSet *expressDataSet, const IfcSurfaceCurveSweptAreaSolid &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceOfLinearExtrusion(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceOfLinearExtrusion *cloneIfcSurfaceOfLinearExtrusion(ExpressDataSet *expressDataSet, const IfcSurfaceOfLinearExtrusion &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceOfRevolution(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceOfRevolution *cloneIfcSurfaceOfRevolution(ExpressDataSet *expressDataSet, const IfcSurfaceOfRevolution &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyle *cloneIfcSurfaceStyle(ExpressDataSet *expressDataSet, const IfcSurfaceStyle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyleLighting(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyleLighting *cloneIfcSurfaceStyleLighting(ExpressDataSet *expressDataSet, const IfcSurfaceStyleLighting &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyleRefraction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyleRefraction *cloneIfcSurfaceStyleRefraction(ExpressDataSet *expressDataSet, const IfcSurfaceStyleRefraction &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyleRendering(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyleRendering *cloneIfcSurfaceStyleRendering(ExpressDataSet *expressDataSet, const IfcSurfaceStyleRendering &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyleShading(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyleShading *cloneIfcSurfaceStyleShading(ExpressDataSet *expressDataSet, const IfcSurfaceStyleShading &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyleWithTextures(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyleWithTextures *cloneIfcSurfaceStyleWithTextures(ExpressDataSet *expressDataSet, const IfcSurfaceStyleWithTextures &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSweptDiskSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSweptDiskSolid *cloneIfcSweptDiskSolid(ExpressDataSet *expressDataSet, const IfcSweptDiskSolid &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSwitchingDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSwitchingDeviceType *cloneIfcSwitchingDeviceType(ExpressDataSet *expressDataSet, const IfcSwitchingDeviceType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSymbolStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSymbolStyle *cloneIfcSymbolStyle(ExpressDataSet *expressDataSet, const IfcSymbolStyle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSystem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSystem *cloneIfcSystem(ExpressDataSet *expressDataSet, const IfcSystem &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSystemFurnitureElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSystemFurnitureElementType *cloneIfcSystemFurnitureElementType(ExpressDataSet *expressDataSet, const IfcSystemFurnitureElementType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTShapeProfileDef *cloneIfcTShapeProfileDef(ExpressDataSet *expressDataSet, const IfcTShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTable(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTable *cloneIfcTable(ExpressDataSet *expressDataSet, const IfcTable &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTableRow(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTableRow *cloneIfcTableRow(ExpressDataSet *expressDataSet, const IfcTableRow &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTankType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTankType *cloneIfcTankType(ExpressDataSet *expressDataSet, const IfcTankType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTask(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTask *cloneIfcTask(ExpressDataSet *expressDataSet, const IfcTask &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTelecomAddress(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTelecomAddress *cloneIfcTelecomAddress(ExpressDataSet *expressDataSet, const IfcTelecomAddress &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTendon(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTendon *cloneIfcTendon(ExpressDataSet *expressDataSet, const IfcTendon &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTendonAnchor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTendonAnchor *cloneIfcTendonAnchor(ExpressDataSet *expressDataSet, const IfcTendonAnchor &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTerminatorSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTerminatorSymbol *cloneIfcTerminatorSymbol(ExpressDataSet *expressDataSet, const IfcTerminatorSymbol &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextLiteral(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextLiteral *cloneIfcTextLiteral(ExpressDataSet *expressDataSet, const IfcTextLiteral &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextLiteralWithExtent(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextLiteralWithExtent *cloneIfcTextLiteralWithExtent(ExpressDataSet *expressDataSet, const IfcTextLiteralWithExtent &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextStyle *cloneIfcTextStyle(ExpressDataSet *expressDataSet, const IfcTextStyle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextStyleFontModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextStyleFontModel *cloneIfcTextStyleFontModel(ExpressDataSet *expressDataSet, const IfcTextStyleFontModel &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextStyleForDefinedFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextStyleForDefinedFont *cloneIfcTextStyleForDefinedFont(ExpressDataSet *expressDataSet, const IfcTextStyleForDefinedFont &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextStyleTextModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextStyleTextModel *cloneIfcTextStyleTextModel(ExpressDataSet *expressDataSet, const IfcTextStyleTextModel &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextStyleWithBoxCharacteristics(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextStyleWithBoxCharacteristics *cloneIfcTextStyleWithBoxCharacteristics(ExpressDataSet *expressDataSet, const IfcTextStyleWithBoxCharacteristics &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextureCoordinateGenerator(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextureCoordinateGenerator *cloneIfcTextureCoordinateGenerator(ExpressDataSet *expressDataSet, const IfcTextureCoordinateGenerator &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextureMap(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextureMap *cloneIfcTextureMap(ExpressDataSet *expressDataSet, const IfcTextureMap &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextureVertex(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextureVertex *cloneIfcTextureVertex(ExpressDataSet *expressDataSet, const IfcTextureVertex &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcThermalMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcThermalMaterialProperties *cloneIfcThermalMaterialProperties(ExpressDataSet *expressDataSet, const IfcThermalMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTimeSeriesReferenceRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTimeSeriesReferenceRelationship *cloneIfcTimeSeriesReferenceRelationship(ExpressDataSet *expressDataSet, const IfcTimeSeriesReferenceRelationship &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTimeSeriesSchedule(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTimeSeriesSchedule *cloneIfcTimeSeriesSchedule(ExpressDataSet *expressDataSet, const IfcTimeSeriesSchedule &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTimeSeriesValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTimeSeriesValue *cloneIfcTimeSeriesValue(ExpressDataSet *expressDataSet, const IfcTimeSeriesValue &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTopologyRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTopologyRepresentation *cloneIfcTopologyRepresentation(ExpressDataSet *expressDataSet, const IfcTopologyRepresentation &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTransformerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTransformerType *cloneIfcTransformerType(ExpressDataSet *expressDataSet, const IfcTransformerType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTransportElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTransportElement *cloneIfcTransportElement(ExpressDataSet *expressDataSet, const IfcTransportElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTransportElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTransportElementType *cloneIfcTransportElementType(ExpressDataSet *expressDataSet, const IfcTransportElementType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTrapeziumProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTrapeziumProfileDef *cloneIfcTrapeziumProfileDef(ExpressDataSet *expressDataSet, const IfcTrapeziumProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTrimmedCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTrimmedCurve *cloneIfcTrimmedCurve(ExpressDataSet *expressDataSet, const IfcTrimmedCurve &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTubeBundleType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTubeBundleType *cloneIfcTubeBundleType(ExpressDataSet *expressDataSet, const IfcTubeBundleType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTwoDirectionRepeatFactor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTwoDirectionRepeatFactor *cloneIfcTwoDirectionRepeatFactor(ExpressDataSet *expressDataSet, const IfcTwoDirectionRepeatFactor &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTypeObject(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTypeObject *cloneIfcTypeObject(ExpressDataSet *expressDataSet, const IfcTypeObject &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTypeProduct(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTypeProduct *cloneIfcTypeProduct(ExpressDataSet *expressDataSet, const IfcTypeProduct &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcUShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcUShapeProfileDef *cloneIfcUShapeProfileDef(ExpressDataSet *expressDataSet, const IfcUShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcUnitAssignment(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcUnitAssignment *cloneIfcUnitAssignment(ExpressDataSet *expressDataSet, const IfcUnitAssignment &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcUnitaryEquipmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcUnitaryEquipmentType *cloneIfcUnitaryEquipmentType(ExpressDataSet *expressDataSet, const IfcUnitaryEquipmentType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcValveType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcValveType *cloneIfcValveType(ExpressDataSet *expressDataSet, const IfcValveType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVector(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVector *cloneIfcVector(ExpressDataSet *expressDataSet, const IfcVector &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVertex(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVertex *cloneIfcVertex(ExpressDataSet *expressDataSet, const IfcVertex &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVertexBasedTextureMap(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVertexBasedTextureMap *cloneIfcVertexBasedTextureMap(ExpressDataSet *expressDataSet, const IfcVertexBasedTextureMap &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVertexLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVertexLoop *cloneIfcVertexLoop(ExpressDataSet *expressDataSet, const IfcVertexLoop &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVertexPoint(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVertexPoint *cloneIfcVertexPoint(ExpressDataSet *expressDataSet, const IfcVertexPoint &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVibrationIsolatorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVibrationIsolatorType *cloneIfcVibrationIsolatorType(ExpressDataSet *expressDataSet, const IfcVibrationIsolatorType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVirtualElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVirtualElement *cloneIfcVirtualElement(ExpressDataSet *expressDataSet, const IfcVirtualElement &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVirtualGridIntersection(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVirtualGridIntersection *cloneIfcVirtualGridIntersection(ExpressDataSet *expressDataSet, const IfcVirtualGridIntersection &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWall(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWall *cloneIfcWall(ExpressDataSet *expressDataSet, const IfcWall &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWallStandardCase(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWallStandardCase *cloneIfcWallStandardCase(ExpressDataSet *expressDataSet, const IfcWallStandardCase &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWallType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWallType *cloneIfcWallType(ExpressDataSet *expressDataSet, const IfcWallType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWasteTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWasteTerminalType *cloneIfcWasteTerminalType(ExpressDataSet *expressDataSet, const IfcWasteTerminalType &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWaterProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWaterProperties *cloneIfcWaterProperties(ExpressDataSet *expressDataSet, const IfcWaterProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWindow(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWindow *cloneIfcWindow(ExpressDataSet *expressDataSet, const IfcWindow &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWindowLiningProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWindowLiningProperties *cloneIfcWindowLiningProperties(ExpressDataSet *expressDataSet, const IfcWindowLiningProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWindowPanelProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWindowPanelProperties *cloneIfcWindowPanelProperties(ExpressDataSet *expressDataSet, const IfcWindowPanelProperties &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWindowStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWindowStyle *cloneIfcWindowStyle(ExpressDataSet *expressDataSet, const IfcWindowStyle &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWorkPlan(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWorkPlan *cloneIfcWorkPlan(ExpressDataSet *expressDataSet, const IfcWorkPlan &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWorkSchedule(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWorkSchedule *cloneIfcWorkSchedule(ExpressDataSet *expressDataSet, const IfcWorkSchedule &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcZShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcZShapeProfileDef *cloneIfcZShapeProfileDef(ExpressDataSet *expressDataSet, const IfcZShapeProfileDef &obj, const CopyOp &copyop);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcZone(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcZone *cloneIfcZone(ExpressDataSet *expressDataSet, const IfcZone &obj, const CopyOp &copyop);

    };

}

#endif // IFC2X3_EXPRESSDATASET_H
