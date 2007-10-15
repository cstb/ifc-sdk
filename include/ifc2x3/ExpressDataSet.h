/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
#include "ifc2x3/IfcBridgeElement.h"
#include "ifc2x3/IfcRectangleProfileDef.h"
#include "ifc2x3/IfcTask.h"
#include "ifc2x3/IfcRamp.h"
#include "ifc2x3/IfcTShapeProfileDef.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcPostalAddress.h"
#include "ifc2x3/IfcVector.h"
#include "ifc2x3/IfcReferenceCurvePlacement.h"
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
#include "ifc2x3/IfcBridgeSegmentPart.h"
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
#include "ifc2x3/IfcElectricTimeControlType.h"
#include "ifc2x3/IfcDoorLiningProperties.h"
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
#include "ifc2x3/IfcReferencedSectionedSpine.h"
#include "ifc2x3/IfcEdge.h"
#include "ifc2x3/IfcReinforcementDefinitionProperties.h"
#include "ifc2x3/IfcAirTerminalType.h"
#include "ifc2x3/IfcRelAssociatesProfileProperties.h"
#include "ifc2x3/IfcConnectionCurveGeometry.h"
#include "ifc2x3/IfcLightFixtureType.h"
#include "ifc2x3/IfcElectricHeaterType.h"
#include "ifc2x3/IfcResource.h"
#include "ifc2x3/IfcRelOverridesProperties.h"
#include "ifc2x3/IfcReferenceElement.h"
#include "ifc2x3/IfcBridgeStructureElement.h"
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
#include "ifc2x3/IfcCivilElement.h"
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
#include "ifc2x3/IfcBridgeSegment.h"
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
#include "ifc2x3/IfcAlignmentElement.h"
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
#include "ifc2x3/IfcReferenceCurve3D.h"
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
#include "ifc2x3/IfcBridgePart.h"
#include "ifc2x3/IfcPermit.h"
#include "ifc2x3/IfcFastener.h"
#include "ifc2x3/IfcPresentationLayerWithStyle.h"
#include "ifc2x3/IfcCurrencyRelationship.h"
#include "ifc2x3/IfcAddress.h"
#include "ifc2x3/IfcReferenceCurveAlignment2D.h"
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
#include "ifc2x3/IfcElementPart.h"
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
#include "ifc2x3/IfcCivilSheath.h"
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
#include "ifc2x3/IfcReferenceCurvePlacementSystem.h"
#include "ifc2x3/IfcDistributionElementType.h"
#include "ifc2x3/IfcBridge.h"
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
#include "ifc2x3/IfcReferencePlacement.h"
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
#include "ifc2x3/IfcCivilStructureElement.h"
#include "ifc2x3/IfcApprovalRelationship.h"
#include "ifc2x3/IfcCondition.h"
#include "ifc2x3/IfcPreDefinedDimensionSymbol.h"
#include "ifc2x3/IfcCivilElementPart.h"
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
#include "ifc2x3/IfcCivilVoid.h"
#include "ifc2x3/IfcPerson.h"
#include "ifc2x3/IfcVirtualElement.h"
#include "ifc2x3/IfcMaterialLayer.h"
#include "ifc2x3/IfcBridgePrismaticElement.h"
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
#include "ifc2x3/IfcBridgeContactElement.h"
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
#include "ifc2x3/IfcReferenceCurve.h"
#include "ifc2x3/IfcDistributionControlElement.h"
#include "ifc2x3/IfcClothoid.h"
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
        bool remove(Ifc2DCompositeCurve *arg);
        /**
         */
        Step::RefPtr< Ifc2DCompositeCurve > createIfc2DCompositeCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static Ifc2DCompositeCurve *cloneIfc2DCompositeCurve(ExpressDataSet *expressDataSet, const Ifc2DCompositeCurve &obj, const CopyOp &copyop);
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
        bool remove(IfcActionRequest *arg);
        /**
         */
        Step::RefPtr< IfcActionRequest > createIfcActionRequest();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcActionRequest *cloneIfcActionRequest(ExpressDataSet *expressDataSet, const IfcActionRequest &obj, const CopyOp &copyop);
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
        bool remove(IfcActor *arg);
        /**
         */
        Step::RefPtr< IfcActor > createIfcActor();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcActor *cloneIfcActor(ExpressDataSet *expressDataSet, const IfcActor &obj, const CopyOp &copyop);
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
        bool remove(IfcActorRole *arg);
        /**
         */
        Step::RefPtr< IfcActorRole > createIfcActorRole();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcActorRole *cloneIfcActorRole(ExpressDataSet *expressDataSet, const IfcActorRole &obj, const CopyOp &copyop);
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
        bool remove(IfcActuatorType *arg);
        /**
         */
        Step::RefPtr< IfcActuatorType > createIfcActuatorType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcActuatorType *cloneIfcActuatorType(ExpressDataSet *expressDataSet, const IfcActuatorType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcActuatorType *cloneIfcActuatorType(const IfcActuatorType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAddress *getIfcAddress(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcAddress *arg);
        /**
         */
        Step::RefPtr< IfcAddress > createIfcAddress();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAddress *cloneIfcAddress(ExpressDataSet *expressDataSet, const IfcAddress &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcAddress *cloneIfcAddress(const IfcAddress &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAirTerminalBoxType *getIfcAirTerminalBoxType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcAirTerminalBoxType *arg);
        /**
         */
        Step::RefPtr< IfcAirTerminalBoxType > createIfcAirTerminalBoxType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAirTerminalBoxType *cloneIfcAirTerminalBoxType(ExpressDataSet *expressDataSet, const IfcAirTerminalBoxType &obj, const CopyOp &copyop);
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
        bool remove(IfcAirTerminalType *arg);
        /**
         */
        Step::RefPtr< IfcAirTerminalType > createIfcAirTerminalType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAirTerminalType *cloneIfcAirTerminalType(ExpressDataSet *expressDataSet, const IfcAirTerminalType &obj, const CopyOp &copyop);
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
        bool remove(IfcAirToAirHeatRecoveryType *arg);
        /**
         */
        Step::RefPtr< IfcAirToAirHeatRecoveryType > createIfcAirToAirHeatRecoveryType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAirToAirHeatRecoveryType *cloneIfcAirToAirHeatRecoveryType(ExpressDataSet *expressDataSet, const IfcAirToAirHeatRecoveryType &obj, const CopyOp &copyop);
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
        bool remove(IfcAlarmType *arg);
        /**
         */
        Step::RefPtr< IfcAlarmType > createIfcAlarmType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAlarmType *cloneIfcAlarmType(ExpressDataSet *expressDataSet, const IfcAlarmType &obj, const CopyOp &copyop);
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
        bool remove(IfcAngularDimension *arg);
        /**
         */
        Step::RefPtr< IfcAngularDimension > createIfcAngularDimension();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAngularDimension *cloneIfcAngularDimension(ExpressDataSet *expressDataSet, const IfcAngularDimension &obj, const CopyOp &copyop);
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
        bool remove(IfcAnnotation *arg);
        /**
         */
        Step::RefPtr< IfcAnnotation > createIfcAnnotation();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotation *cloneIfcAnnotation(ExpressDataSet *expressDataSet, const IfcAnnotation &obj, const CopyOp &copyop);
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
        bool remove(IfcAnnotationCurveOccurrence *arg);
        /**
         */
        Step::RefPtr< IfcAnnotationCurveOccurrence > createIfcAnnotationCurveOccurrence();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationCurveOccurrence *cloneIfcAnnotationCurveOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationCurveOccurrence &obj, const CopyOp &copyop);
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
        bool remove(IfcAnnotationFillArea *arg);
        /**
         */
        Step::RefPtr< IfcAnnotationFillArea > createIfcAnnotationFillArea();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationFillArea *cloneIfcAnnotationFillArea(ExpressDataSet *expressDataSet, const IfcAnnotationFillArea &obj, const CopyOp &copyop);
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
        bool remove(IfcAnnotationFillAreaOccurrence *arg);
        /**
         */
        Step::RefPtr< IfcAnnotationFillAreaOccurrence > createIfcAnnotationFillAreaOccurrence();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationFillAreaOccurrence *cloneIfcAnnotationFillAreaOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationFillAreaOccurrence &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcAnnotationFillAreaOccurrence *cloneIfcAnnotationFillAreaOccurrence(const IfcAnnotationFillAreaOccurrence &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAnnotationOccurrence *getIfcAnnotationOccurrence(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcAnnotationOccurrence *arg);
        /**
         */
        Step::RefPtr< IfcAnnotationOccurrence > createIfcAnnotationOccurrence();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationOccurrence *cloneIfcAnnotationOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationOccurrence &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcAnnotationOccurrence *cloneIfcAnnotationOccurrence(const IfcAnnotationOccurrence &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAnnotationSurface *getIfcAnnotationSurface(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcAnnotationSurface *arg);
        /**
         */
        Step::RefPtr< IfcAnnotationSurface > createIfcAnnotationSurface();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationSurface *cloneIfcAnnotationSurface(ExpressDataSet *expressDataSet, const IfcAnnotationSurface &obj, const CopyOp &copyop);
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
        bool remove(IfcAnnotationSurfaceOccurrence *arg);
        /**
         */
        Step::RefPtr< IfcAnnotationSurfaceOccurrence > createIfcAnnotationSurfaceOccurrence();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationSurfaceOccurrence *cloneIfcAnnotationSurfaceOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationSurfaceOccurrence &obj, const CopyOp &copyop);
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
        bool remove(IfcAnnotationSymbolOccurrence *arg);
        /**
         */
        Step::RefPtr< IfcAnnotationSymbolOccurrence > createIfcAnnotationSymbolOccurrence();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationSymbolOccurrence *cloneIfcAnnotationSymbolOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationSymbolOccurrence &obj, const CopyOp &copyop);
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
        bool remove(IfcAnnotationTextOccurrence *arg);
        /**
         */
        Step::RefPtr< IfcAnnotationTextOccurrence > createIfcAnnotationTextOccurrence();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAnnotationTextOccurrence *cloneIfcAnnotationTextOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationTextOccurrence &obj, const CopyOp &copyop);
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
        bool remove(IfcApplication *arg);
        /**
         */
        Step::RefPtr< IfcApplication > createIfcApplication();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcApplication *cloneIfcApplication(ExpressDataSet *expressDataSet, const IfcApplication &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcApplication *cloneIfcApplication(const IfcApplication &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAppliedValue *getIfcAppliedValue(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcAppliedValue *arg);
        /**
         */
        Step::RefPtr< IfcAppliedValue > createIfcAppliedValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAppliedValue *cloneIfcAppliedValue(ExpressDataSet *expressDataSet, const IfcAppliedValue &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcAppliedValue *cloneIfcAppliedValue(const IfcAppliedValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAppliedValueRelationship *getIfcAppliedValueRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcAppliedValueRelationship *arg);
        /**
         */
        Step::RefPtr< IfcAppliedValueRelationship > createIfcAppliedValueRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAppliedValueRelationship *cloneIfcAppliedValueRelationship(ExpressDataSet *expressDataSet, const IfcAppliedValueRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcApproval *arg);
        /**
         */
        Step::RefPtr< IfcApproval > createIfcApproval();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcApproval *cloneIfcApproval(ExpressDataSet *expressDataSet, const IfcApproval &obj, const CopyOp &copyop);
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
        bool remove(IfcApprovalActorRelationship *arg);
        /**
         */
        Step::RefPtr< IfcApprovalActorRelationship > createIfcApprovalActorRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcApprovalActorRelationship *cloneIfcApprovalActorRelationship(ExpressDataSet *expressDataSet, const IfcApprovalActorRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcApprovalPropertyRelationship *arg);
        /**
         */
        Step::RefPtr< IfcApprovalPropertyRelationship > createIfcApprovalPropertyRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcApprovalPropertyRelationship *cloneIfcApprovalPropertyRelationship(ExpressDataSet *expressDataSet, const IfcApprovalPropertyRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcApprovalRelationship *arg);
        /**
         */
        Step::RefPtr< IfcApprovalRelationship > createIfcApprovalRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcApprovalRelationship *cloneIfcApprovalRelationship(ExpressDataSet *expressDataSet, const IfcApprovalRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcArbitraryClosedProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcArbitraryClosedProfileDef > createIfcArbitraryClosedProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcArbitraryClosedProfileDef *cloneIfcArbitraryClosedProfileDef(ExpressDataSet *expressDataSet, const IfcArbitraryClosedProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcArbitraryOpenProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcArbitraryOpenProfileDef > createIfcArbitraryOpenProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcArbitraryOpenProfileDef *cloneIfcArbitraryOpenProfileDef(ExpressDataSet *expressDataSet, const IfcArbitraryOpenProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcArbitraryProfileDefWithVoids *arg);
        /**
         */
        Step::RefPtr< IfcArbitraryProfileDefWithVoids > createIfcArbitraryProfileDefWithVoids();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcArbitraryProfileDefWithVoids *cloneIfcArbitraryProfileDefWithVoids(ExpressDataSet *expressDataSet, const IfcArbitraryProfileDefWithVoids &obj, const CopyOp &copyop);
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
        bool remove(IfcAsset *arg);
        /**
         */
        Step::RefPtr< IfcAsset > createIfcAsset();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAsset *cloneIfcAsset(ExpressDataSet *expressDataSet, const IfcAsset &obj, const CopyOp &copyop);
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
        bool remove(IfcAsymmetricIShapeProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcAsymmetricIShapeProfileDef > createIfcAsymmetricIShapeProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAsymmetricIShapeProfileDef *cloneIfcAsymmetricIShapeProfileDef(ExpressDataSet *expressDataSet, const IfcAsymmetricIShapeProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcAxis1Placement *arg);
        /**
         */
        Step::RefPtr< IfcAxis1Placement > createIfcAxis1Placement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAxis1Placement *cloneIfcAxis1Placement(ExpressDataSet *expressDataSet, const IfcAxis1Placement &obj, const CopyOp &copyop);
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
        bool remove(IfcAxis2Placement2D *arg);
        /**
         */
        Step::RefPtr< IfcAxis2Placement2D > createIfcAxis2Placement2D();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAxis2Placement2D *cloneIfcAxis2Placement2D(ExpressDataSet *expressDataSet, const IfcAxis2Placement2D &obj, const CopyOp &copyop);
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
        bool remove(IfcAxis2Placement3D *arg);
        /**
         */
        Step::RefPtr< IfcAxis2Placement3D > createIfcAxis2Placement3D();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAxis2Placement3D *cloneIfcAxis2Placement3D(ExpressDataSet *expressDataSet, const IfcAxis2Placement3D &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcAxis2Placement3D *cloneIfcAxis2Placement3D(const IfcAxis2Placement3D &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBSplineCurve *getIfcBSplineCurve(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBSplineCurve *arg);
        /**
         */
        Step::RefPtr< IfcBSplineCurve > createIfcBSplineCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBSplineCurve *cloneIfcBSplineCurve(ExpressDataSet *expressDataSet, const IfcBSplineCurve &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBSplineCurve *cloneIfcBSplineCurve(const IfcBSplineCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBeam *getIfcBeam(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBeam *arg);
        /**
         */
        Step::RefPtr< IfcBeam > createIfcBeam();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBeam *cloneIfcBeam(ExpressDataSet *expressDataSet, const IfcBeam &obj, const CopyOp &copyop);
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
        bool remove(IfcBeamType *arg);
        /**
         */
        Step::RefPtr< IfcBeamType > createIfcBeamType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBeamType *cloneIfcBeamType(ExpressDataSet *expressDataSet, const IfcBeamType &obj, const CopyOp &copyop);
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
        bool remove(IfcBezierCurve *arg);
        /**
         */
        Step::RefPtr< IfcBezierCurve > createIfcBezierCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBezierCurve *cloneIfcBezierCurve(ExpressDataSet *expressDataSet, const IfcBezierCurve &obj, const CopyOp &copyop);
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
        bool remove(IfcBlobTexture *arg);
        /**
         */
        Step::RefPtr< IfcBlobTexture > createIfcBlobTexture();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBlobTexture *cloneIfcBlobTexture(ExpressDataSet *expressDataSet, const IfcBlobTexture &obj, const CopyOp &copyop);
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
        bool remove(IfcBlock *arg);
        /**
         */
        Step::RefPtr< IfcBlock > createIfcBlock();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBlock *cloneIfcBlock(ExpressDataSet *expressDataSet, const IfcBlock &obj, const CopyOp &copyop);
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
        bool remove(IfcBoilerType *arg);
        /**
         */
        Step::RefPtr< IfcBoilerType > createIfcBoilerType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoilerType *cloneIfcBoilerType(ExpressDataSet *expressDataSet, const IfcBoilerType &obj, const CopyOp &copyop);
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
        bool remove(IfcBooleanClippingResult *arg);
        /**
         */
        Step::RefPtr< IfcBooleanClippingResult > createIfcBooleanClippingResult();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBooleanClippingResult *cloneIfcBooleanClippingResult(ExpressDataSet *expressDataSet, const IfcBooleanClippingResult &obj, const CopyOp &copyop);
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
        bool remove(IfcBooleanResult *arg);
        /**
         */
        Step::RefPtr< IfcBooleanResult > createIfcBooleanResult();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBooleanResult *cloneIfcBooleanResult(ExpressDataSet *expressDataSet, const IfcBooleanResult &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBooleanResult *cloneIfcBooleanResult(const IfcBooleanResult &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoundaryCondition *getIfcBoundaryCondition(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBoundaryCondition *arg);
        /**
         */
        Step::RefPtr< IfcBoundaryCondition > createIfcBoundaryCondition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundaryCondition *cloneIfcBoundaryCondition(ExpressDataSet *expressDataSet, const IfcBoundaryCondition &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBoundaryCondition *cloneIfcBoundaryCondition(const IfcBoundaryCondition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoundaryEdgeCondition *getIfcBoundaryEdgeCondition(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBoundaryEdgeCondition *arg);
        /**
         */
        Step::RefPtr< IfcBoundaryEdgeCondition > createIfcBoundaryEdgeCondition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundaryEdgeCondition *cloneIfcBoundaryEdgeCondition(ExpressDataSet *expressDataSet, const IfcBoundaryEdgeCondition &obj, const CopyOp &copyop);
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
        bool remove(IfcBoundaryFaceCondition *arg);
        /**
         */
        Step::RefPtr< IfcBoundaryFaceCondition > createIfcBoundaryFaceCondition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundaryFaceCondition *cloneIfcBoundaryFaceCondition(ExpressDataSet *expressDataSet, const IfcBoundaryFaceCondition &obj, const CopyOp &copyop);
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
        bool remove(IfcBoundaryNodeCondition *arg);
        /**
         */
        Step::RefPtr< IfcBoundaryNodeCondition > createIfcBoundaryNodeCondition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundaryNodeCondition *cloneIfcBoundaryNodeCondition(ExpressDataSet *expressDataSet, const IfcBoundaryNodeCondition &obj, const CopyOp &copyop);
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
        bool remove(IfcBoundaryNodeConditionWarping *arg);
        /**
         */
        Step::RefPtr< IfcBoundaryNodeConditionWarping > createIfcBoundaryNodeConditionWarping();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundaryNodeConditionWarping *cloneIfcBoundaryNodeConditionWarping(ExpressDataSet *expressDataSet, const IfcBoundaryNodeConditionWarping &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBoundaryNodeConditionWarping *cloneIfcBoundaryNodeConditionWarping(const IfcBoundaryNodeConditionWarping &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoundedCurve *getIfcBoundedCurve(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBoundedCurve *arg);
        /**
         */
        Step::RefPtr< IfcBoundedCurve > createIfcBoundedCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundedCurve *cloneIfcBoundedCurve(ExpressDataSet *expressDataSet, const IfcBoundedCurve &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBoundedCurve *cloneIfcBoundedCurve(const IfcBoundedCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBoundedSurface *getIfcBoundedSurface(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBoundedSurface *arg);
        /**
         */
        Step::RefPtr< IfcBoundedSurface > createIfcBoundedSurface();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundedSurface *cloneIfcBoundedSurface(ExpressDataSet *expressDataSet, const IfcBoundedSurface &obj, const CopyOp &copyop);
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
        bool remove(IfcBoundingBox *arg);
        /**
         */
        Step::RefPtr< IfcBoundingBox > createIfcBoundingBox();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoundingBox *cloneIfcBoundingBox(ExpressDataSet *expressDataSet, const IfcBoundingBox &obj, const CopyOp &copyop);
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
        bool remove(IfcBoxedHalfSpace *arg);
        /**
         */
        Step::RefPtr< IfcBoxedHalfSpace > createIfcBoxedHalfSpace();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBoxedHalfSpace *cloneIfcBoxedHalfSpace(ExpressDataSet *expressDataSet, const IfcBoxedHalfSpace &obj, const CopyOp &copyop);
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
        bool remove(IfcBuilding *arg);
        /**
         */
        Step::RefPtr< IfcBuilding > createIfcBuilding();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuilding *cloneIfcBuilding(ExpressDataSet *expressDataSet, const IfcBuilding &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBuilding *cloneIfcBuilding(const IfcBuilding &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBuildingElement *getIfcBuildingElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBuildingElement *arg);
        /**
         */
        Step::RefPtr< IfcBuildingElement > createIfcBuildingElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuildingElement *cloneIfcBuildingElement(ExpressDataSet *expressDataSet, const IfcBuildingElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBuildingElement *cloneIfcBuildingElement(const IfcBuildingElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBuildingElementPart *getIfcBuildingElementPart(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBuildingElementPart *arg);
        /**
         */
        Step::RefPtr< IfcBuildingElementPart > createIfcBuildingElementPart();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuildingElementPart *cloneIfcBuildingElementPart(ExpressDataSet *expressDataSet, const IfcBuildingElementPart &obj, const CopyOp &copyop);
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
        bool remove(IfcBuildingElementProxy *arg);
        /**
         */
        Step::RefPtr< IfcBuildingElementProxy > createIfcBuildingElementProxy();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuildingElementProxy *cloneIfcBuildingElementProxy(ExpressDataSet *expressDataSet, const IfcBuildingElementProxy &obj, const CopyOp &copyop);
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
        bool remove(IfcBuildingElementProxyType *arg);
        /**
         */
        Step::RefPtr< IfcBuildingElementProxyType > createIfcBuildingElementProxyType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuildingElementProxyType *cloneIfcBuildingElementProxyType(ExpressDataSet *expressDataSet, const IfcBuildingElementProxyType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBuildingElementProxyType *cloneIfcBuildingElementProxyType(const IfcBuildingElementProxyType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBuildingElementType *getIfcBuildingElementType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBuildingElementType *arg);
        /**
         */
        Step::RefPtr< IfcBuildingElementType > createIfcBuildingElementType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuildingElementType *cloneIfcBuildingElementType(ExpressDataSet *expressDataSet, const IfcBuildingElementType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBuildingElementType *cloneIfcBuildingElementType(const IfcBuildingElementType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBuildingStorey *getIfcBuildingStorey(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBuildingStorey *arg);
        /**
         */
        Step::RefPtr< IfcBuildingStorey > createIfcBuildingStorey();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBuildingStorey *cloneIfcBuildingStorey(ExpressDataSet *expressDataSet, const IfcBuildingStorey &obj, const CopyOp &copyop);
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
        bool remove(IfcCShapeProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcCShapeProfileDef > createIfcCShapeProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCShapeProfileDef *cloneIfcCShapeProfileDef(ExpressDataSet *expressDataSet, const IfcCShapeProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcCableCarrierFittingType *arg);
        /**
         */
        Step::RefPtr< IfcCableCarrierFittingType > createIfcCableCarrierFittingType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCableCarrierFittingType *cloneIfcCableCarrierFittingType(ExpressDataSet *expressDataSet, const IfcCableCarrierFittingType &obj, const CopyOp &copyop);
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
        bool remove(IfcCableCarrierSegmentType *arg);
        /**
         */
        Step::RefPtr< IfcCableCarrierSegmentType > createIfcCableCarrierSegmentType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCableCarrierSegmentType *cloneIfcCableCarrierSegmentType(ExpressDataSet *expressDataSet, const IfcCableCarrierSegmentType &obj, const CopyOp &copyop);
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
        bool remove(IfcCableSegmentType *arg);
        /**
         */
        Step::RefPtr< IfcCableSegmentType > createIfcCableSegmentType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCableSegmentType *cloneIfcCableSegmentType(ExpressDataSet *expressDataSet, const IfcCableSegmentType &obj, const CopyOp &copyop);
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
        bool remove(IfcCalendarDate *arg);
        /**
         */
        Step::RefPtr< IfcCalendarDate > createIfcCalendarDate();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCalendarDate *cloneIfcCalendarDate(ExpressDataSet *expressDataSet, const IfcCalendarDate &obj, const CopyOp &copyop);
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
        bool remove(IfcCartesianPoint *arg);
        /**
         */
        Step::RefPtr< IfcCartesianPoint > createIfcCartesianPoint();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCartesianPoint *cloneIfcCartesianPoint(ExpressDataSet *expressDataSet, const IfcCartesianPoint &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcCartesianPoint *cloneIfcCartesianPoint(const IfcCartesianPoint &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCartesianTransformationOperator *getIfcCartesianTransformationOperator(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcCartesianTransformationOperator *arg);
        /**
         */
        Step::RefPtr< IfcCartesianTransformationOperator > createIfcCartesianTransformationOperator();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCartesianTransformationOperator *cloneIfcCartesianTransformationOperator(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcCartesianTransformationOperator *cloneIfcCartesianTransformationOperator(const IfcCartesianTransformationOperator &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCartesianTransformationOperator2D *getIfcCartesianTransformationOperator2D(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcCartesianTransformationOperator2D *arg);
        /**
         */
        Step::RefPtr< IfcCartesianTransformationOperator2D > createIfcCartesianTransformationOperator2D();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCartesianTransformationOperator2D *cloneIfcCartesianTransformationOperator2D(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator2D &obj, const CopyOp &copyop);
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
        bool remove(IfcCartesianTransformationOperator2DnonUniform *arg);
        /**
         */
        Step::RefPtr< IfcCartesianTransformationOperator2DnonUniform > createIfcCartesianTransformationOperator2DnonUniform();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCartesianTransformationOperator2DnonUniform *cloneIfcCartesianTransformationOperator2DnonUniform(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator2DnonUniform &obj, const CopyOp &copyop);
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
        bool remove(IfcCartesianTransformationOperator3D *arg);
        /**
         */
        Step::RefPtr< IfcCartesianTransformationOperator3D > createIfcCartesianTransformationOperator3D();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCartesianTransformationOperator3D *cloneIfcCartesianTransformationOperator3D(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator3D &obj, const CopyOp &copyop);
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
        bool remove(IfcCartesianTransformationOperator3DnonUniform *arg);
        /**
         */
        Step::RefPtr< IfcCartesianTransformationOperator3DnonUniform > createIfcCartesianTransformationOperator3DnonUniform();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCartesianTransformationOperator3DnonUniform *cloneIfcCartesianTransformationOperator3DnonUniform(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator3DnonUniform &obj, const CopyOp &copyop);
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
        bool remove(IfcCenterLineProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcCenterLineProfileDef > createIfcCenterLineProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCenterLineProfileDef *cloneIfcCenterLineProfileDef(ExpressDataSet *expressDataSet, const IfcCenterLineProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcChamferEdgeFeature *arg);
        /**
         */
        Step::RefPtr< IfcChamferEdgeFeature > createIfcChamferEdgeFeature();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcChamferEdgeFeature *cloneIfcChamferEdgeFeature(ExpressDataSet *expressDataSet, const IfcChamferEdgeFeature &obj, const CopyOp &copyop);
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
        bool remove(IfcChillerType *arg);
        /**
         */
        Step::RefPtr< IfcChillerType > createIfcChillerType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcChillerType *cloneIfcChillerType(ExpressDataSet *expressDataSet, const IfcChillerType &obj, const CopyOp &copyop);
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
        bool remove(IfcCircle *arg);
        /**
         */
        Step::RefPtr< IfcCircle > createIfcCircle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCircle *cloneIfcCircle(ExpressDataSet *expressDataSet, const IfcCircle &obj, const CopyOp &copyop);
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
        bool remove(IfcCircleHollowProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcCircleHollowProfileDef > createIfcCircleHollowProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCircleHollowProfileDef *cloneIfcCircleHollowProfileDef(ExpressDataSet *expressDataSet, const IfcCircleHollowProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcCircleProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcCircleProfileDef > createIfcCircleProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCircleProfileDef *cloneIfcCircleProfileDef(ExpressDataSet *expressDataSet, const IfcCircleProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcClassification *arg);
        /**
         */
        Step::RefPtr< IfcClassification > createIfcClassification();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassification *cloneIfcClassification(ExpressDataSet *expressDataSet, const IfcClassification &obj, const CopyOp &copyop);
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
        bool remove(IfcClassificationItem *arg);
        /**
         */
        Step::RefPtr< IfcClassificationItem > createIfcClassificationItem();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassificationItem *cloneIfcClassificationItem(ExpressDataSet *expressDataSet, const IfcClassificationItem &obj, const CopyOp &copyop);
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
        bool remove(IfcClassificationItemRelationship *arg);
        /**
         */
        Step::RefPtr< IfcClassificationItemRelationship > createIfcClassificationItemRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassificationItemRelationship *cloneIfcClassificationItemRelationship(ExpressDataSet *expressDataSet, const IfcClassificationItemRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcClassificationNotation *arg);
        /**
         */
        Step::RefPtr< IfcClassificationNotation > createIfcClassificationNotation();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassificationNotation *cloneIfcClassificationNotation(ExpressDataSet *expressDataSet, const IfcClassificationNotation &obj, const CopyOp &copyop);
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
        bool remove(IfcClassificationNotationFacet *arg);
        /**
         */
        Step::RefPtr< IfcClassificationNotationFacet > createIfcClassificationNotationFacet();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassificationNotationFacet *cloneIfcClassificationNotationFacet(ExpressDataSet *expressDataSet, const IfcClassificationNotationFacet &obj, const CopyOp &copyop);
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
        bool remove(IfcClassificationReference *arg);
        /**
         */
        Step::RefPtr< IfcClassificationReference > createIfcClassificationReference();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClassificationReference *cloneIfcClassificationReference(ExpressDataSet *expressDataSet, const IfcClassificationReference &obj, const CopyOp &copyop);
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
        bool remove(IfcClosedShell *arg);
        /**
         */
        Step::RefPtr< IfcClosedShell > createIfcClosedShell();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClosedShell *cloneIfcClosedShell(ExpressDataSet *expressDataSet, const IfcClosedShell &obj, const CopyOp &copyop);
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
        bool remove(IfcCoilType *arg);
        /**
         */
        Step::RefPtr< IfcCoilType > createIfcCoilType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCoilType *cloneIfcCoilType(ExpressDataSet *expressDataSet, const IfcCoilType &obj, const CopyOp &copyop);
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
        bool remove(IfcColourRgb *arg);
        /**
         */
        Step::RefPtr< IfcColourRgb > createIfcColourRgb();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcColourRgb *cloneIfcColourRgb(ExpressDataSet *expressDataSet, const IfcColourRgb &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcColourRgb *cloneIfcColourRgb(const IfcColourRgb &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcColourSpecification *getIfcColourSpecification(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcColourSpecification *arg);
        /**
         */
        Step::RefPtr< IfcColourSpecification > createIfcColourSpecification();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcColourSpecification *cloneIfcColourSpecification(ExpressDataSet *expressDataSet, const IfcColourSpecification &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcColourSpecification *cloneIfcColourSpecification(const IfcColourSpecification &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcColumn *getIfcColumn(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcColumn *arg);
        /**
         */
        Step::RefPtr< IfcColumn > createIfcColumn();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcColumn *cloneIfcColumn(ExpressDataSet *expressDataSet, const IfcColumn &obj, const CopyOp &copyop);
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
        bool remove(IfcColumnType *arg);
        /**
         */
        Step::RefPtr< IfcColumnType > createIfcColumnType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcColumnType *cloneIfcColumnType(ExpressDataSet *expressDataSet, const IfcColumnType &obj, const CopyOp &copyop);
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
        bool remove(IfcComplexProperty *arg);
        /**
         */
        Step::RefPtr< IfcComplexProperty > createIfcComplexProperty();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcComplexProperty *cloneIfcComplexProperty(ExpressDataSet *expressDataSet, const IfcComplexProperty &obj, const CopyOp &copyop);
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
        bool remove(IfcCompositeCurve *arg);
        /**
         */
        Step::RefPtr< IfcCompositeCurve > createIfcCompositeCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCompositeCurve *cloneIfcCompositeCurve(ExpressDataSet *expressDataSet, const IfcCompositeCurve &obj, const CopyOp &copyop);
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
        bool remove(IfcCompositeCurveSegment *arg);
        /**
         */
        Step::RefPtr< IfcCompositeCurveSegment > createIfcCompositeCurveSegment();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCompositeCurveSegment *cloneIfcCompositeCurveSegment(ExpressDataSet *expressDataSet, const IfcCompositeCurveSegment &obj, const CopyOp &copyop);
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
        bool remove(IfcCompositeProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcCompositeProfileDef > createIfcCompositeProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCompositeProfileDef *cloneIfcCompositeProfileDef(ExpressDataSet *expressDataSet, const IfcCompositeProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcCompressorType *arg);
        /**
         */
        Step::RefPtr< IfcCompressorType > createIfcCompressorType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCompressorType *cloneIfcCompressorType(ExpressDataSet *expressDataSet, const IfcCompressorType &obj, const CopyOp &copyop);
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
        bool remove(IfcCondenserType *arg);
        /**
         */
        Step::RefPtr< IfcCondenserType > createIfcCondenserType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCondenserType *cloneIfcCondenserType(ExpressDataSet *expressDataSet, const IfcCondenserType &obj, const CopyOp &copyop);
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
        bool remove(IfcCondition *arg);
        /**
         */
        Step::RefPtr< IfcCondition > createIfcCondition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCondition *cloneIfcCondition(ExpressDataSet *expressDataSet, const IfcCondition &obj, const CopyOp &copyop);
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
        bool remove(IfcConditionCriterion *arg);
        /**
         */
        Step::RefPtr< IfcConditionCriterion > createIfcConditionCriterion();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConditionCriterion *cloneIfcConditionCriterion(ExpressDataSet *expressDataSet, const IfcConditionCriterion &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcConditionCriterion *cloneIfcConditionCriterion(const IfcConditionCriterion &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConic *getIfcConic(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcConic *arg);
        /**
         */
        Step::RefPtr< IfcConic > createIfcConic();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConic *cloneIfcConic(ExpressDataSet *expressDataSet, const IfcConic &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcConic *cloneIfcConic(const IfcConic &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConnectedFaceSet *getIfcConnectedFaceSet(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcConnectedFaceSet *arg);
        /**
         */
        Step::RefPtr< IfcConnectedFaceSet > createIfcConnectedFaceSet();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectedFaceSet *cloneIfcConnectedFaceSet(ExpressDataSet *expressDataSet, const IfcConnectedFaceSet &obj, const CopyOp &copyop);
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
        bool remove(IfcConnectionCurveGeometry *arg);
        /**
         */
        Step::RefPtr< IfcConnectionCurveGeometry > createIfcConnectionCurveGeometry();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectionCurveGeometry *cloneIfcConnectionCurveGeometry(ExpressDataSet *expressDataSet, const IfcConnectionCurveGeometry &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcConnectionCurveGeometry *cloneIfcConnectionCurveGeometry(const IfcConnectionCurveGeometry &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConnectionGeometry *getIfcConnectionGeometry(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcConnectionGeometry *arg);
        /**
         */
        Step::RefPtr< IfcConnectionGeometry > createIfcConnectionGeometry();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectionGeometry *cloneIfcConnectionGeometry(ExpressDataSet *expressDataSet, const IfcConnectionGeometry &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcConnectionGeometry *cloneIfcConnectionGeometry(const IfcConnectionGeometry &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConnectionPointEccentricity *getIfcConnectionPointEccentricity(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcConnectionPointEccentricity *arg);
        /**
         */
        Step::RefPtr< IfcConnectionPointEccentricity > createIfcConnectionPointEccentricity();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectionPointEccentricity *cloneIfcConnectionPointEccentricity(ExpressDataSet *expressDataSet, const IfcConnectionPointEccentricity &obj, const CopyOp &copyop);
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
        bool remove(IfcConnectionPointGeometry *arg);
        /**
         */
        Step::RefPtr< IfcConnectionPointGeometry > createIfcConnectionPointGeometry();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectionPointGeometry *cloneIfcConnectionPointGeometry(ExpressDataSet *expressDataSet, const IfcConnectionPointGeometry &obj, const CopyOp &copyop);
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
        bool remove(IfcConnectionPortGeometry *arg);
        /**
         */
        Step::RefPtr< IfcConnectionPortGeometry > createIfcConnectionPortGeometry();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectionPortGeometry *cloneIfcConnectionPortGeometry(ExpressDataSet *expressDataSet, const IfcConnectionPortGeometry &obj, const CopyOp &copyop);
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
        bool remove(IfcConnectionSurfaceGeometry *arg);
        /**
         */
        Step::RefPtr< IfcConnectionSurfaceGeometry > createIfcConnectionSurfaceGeometry();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConnectionSurfaceGeometry *cloneIfcConnectionSurfaceGeometry(ExpressDataSet *expressDataSet, const IfcConnectionSurfaceGeometry &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcConnectionSurfaceGeometry *cloneIfcConnectionSurfaceGeometry(const IfcConnectionSurfaceGeometry &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConstraint *getIfcConstraint(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcConstraint *arg);
        /**
         */
        Step::RefPtr< IfcConstraint > createIfcConstraint();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstraint *cloneIfcConstraint(ExpressDataSet *expressDataSet, const IfcConstraint &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcConstraint *cloneIfcConstraint(const IfcConstraint &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConstraintAggregationRelationship *getIfcConstraintAggregationRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcConstraintAggregationRelationship *arg);
        /**
         */
        Step::RefPtr< IfcConstraintAggregationRelationship > createIfcConstraintAggregationRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstraintAggregationRelationship *cloneIfcConstraintAggregationRelationship(ExpressDataSet *expressDataSet, const IfcConstraintAggregationRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcConstraintClassificationRelationship *arg);
        /**
         */
        Step::RefPtr< IfcConstraintClassificationRelationship > createIfcConstraintClassificationRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstraintClassificationRelationship *cloneIfcConstraintClassificationRelationship(ExpressDataSet *expressDataSet, const IfcConstraintClassificationRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcConstraintRelationship *arg);
        /**
         */
        Step::RefPtr< IfcConstraintRelationship > createIfcConstraintRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstraintRelationship *cloneIfcConstraintRelationship(ExpressDataSet *expressDataSet, const IfcConstraintRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcConstructionEquipmentResource *arg);
        /**
         */
        Step::RefPtr< IfcConstructionEquipmentResource > createIfcConstructionEquipmentResource();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstructionEquipmentResource *cloneIfcConstructionEquipmentResource(ExpressDataSet *expressDataSet, const IfcConstructionEquipmentResource &obj, const CopyOp &copyop);
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
        bool remove(IfcConstructionMaterialResource *arg);
        /**
         */
        Step::RefPtr< IfcConstructionMaterialResource > createIfcConstructionMaterialResource();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstructionMaterialResource *cloneIfcConstructionMaterialResource(ExpressDataSet *expressDataSet, const IfcConstructionMaterialResource &obj, const CopyOp &copyop);
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
        bool remove(IfcConstructionProductResource *arg);
        /**
         */
        Step::RefPtr< IfcConstructionProductResource > createIfcConstructionProductResource();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstructionProductResource *cloneIfcConstructionProductResource(ExpressDataSet *expressDataSet, const IfcConstructionProductResource &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcConstructionProductResource *cloneIfcConstructionProductResource(const IfcConstructionProductResource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcConstructionResource *getIfcConstructionResource(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcConstructionResource *arg);
        /**
         */
        Step::RefPtr< IfcConstructionResource > createIfcConstructionResource();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConstructionResource *cloneIfcConstructionResource(ExpressDataSet *expressDataSet, const IfcConstructionResource &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcConstructionResource *cloneIfcConstructionResource(const IfcConstructionResource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcContextDependentUnit *getIfcContextDependentUnit(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcContextDependentUnit *arg);
        /**
         */
        Step::RefPtr< IfcContextDependentUnit > createIfcContextDependentUnit();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcContextDependentUnit *cloneIfcContextDependentUnit(ExpressDataSet *expressDataSet, const IfcContextDependentUnit &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcContextDependentUnit *cloneIfcContextDependentUnit(const IfcContextDependentUnit &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcControl *getIfcControl(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcControl *arg);
        /**
         */
        Step::RefPtr< IfcControl > createIfcControl();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcControl *cloneIfcControl(ExpressDataSet *expressDataSet, const IfcControl &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcControl *cloneIfcControl(const IfcControl &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcControllerType *getIfcControllerType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcControllerType *arg);
        /**
         */
        Step::RefPtr< IfcControllerType > createIfcControllerType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcControllerType *cloneIfcControllerType(ExpressDataSet *expressDataSet, const IfcControllerType &obj, const CopyOp &copyop);
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
        bool remove(IfcConversionBasedUnit *arg);
        /**
         */
        Step::RefPtr< IfcConversionBasedUnit > createIfcConversionBasedUnit();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcConversionBasedUnit *cloneIfcConversionBasedUnit(ExpressDataSet *expressDataSet, const IfcConversionBasedUnit &obj, const CopyOp &copyop);
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
        bool remove(IfcCooledBeamType *arg);
        /**
         */
        Step::RefPtr< IfcCooledBeamType > createIfcCooledBeamType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCooledBeamType *cloneIfcCooledBeamType(ExpressDataSet *expressDataSet, const IfcCooledBeamType &obj, const CopyOp &copyop);
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
        bool remove(IfcCoolingTowerType *arg);
        /**
         */
        Step::RefPtr< IfcCoolingTowerType > createIfcCoolingTowerType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCoolingTowerType *cloneIfcCoolingTowerType(ExpressDataSet *expressDataSet, const IfcCoolingTowerType &obj, const CopyOp &copyop);
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
        bool remove(IfcCoordinatedUniversalTimeOffset *arg);
        /**
         */
        Step::RefPtr< IfcCoordinatedUniversalTimeOffset > createIfcCoordinatedUniversalTimeOffset();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCoordinatedUniversalTimeOffset *cloneIfcCoordinatedUniversalTimeOffset(ExpressDataSet *expressDataSet, const IfcCoordinatedUniversalTimeOffset &obj, const CopyOp &copyop);
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
        bool remove(IfcCostItem *arg);
        /**
         */
        Step::RefPtr< IfcCostItem > createIfcCostItem();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCostItem *cloneIfcCostItem(ExpressDataSet *expressDataSet, const IfcCostItem &obj, const CopyOp &copyop);
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
        bool remove(IfcCostSchedule *arg);
        /**
         */
        Step::RefPtr< IfcCostSchedule > createIfcCostSchedule();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCostSchedule *cloneIfcCostSchedule(ExpressDataSet *expressDataSet, const IfcCostSchedule &obj, const CopyOp &copyop);
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
        bool remove(IfcCostValue *arg);
        /**
         */
        Step::RefPtr< IfcCostValue > createIfcCostValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCostValue *cloneIfcCostValue(ExpressDataSet *expressDataSet, const IfcCostValue &obj, const CopyOp &copyop);
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
        bool remove(IfcCovering *arg);
        /**
         */
        Step::RefPtr< IfcCovering > createIfcCovering();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCovering *cloneIfcCovering(ExpressDataSet *expressDataSet, const IfcCovering &obj, const CopyOp &copyop);
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
        bool remove(IfcCoveringType *arg);
        /**
         */
        Step::RefPtr< IfcCoveringType > createIfcCoveringType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCoveringType *cloneIfcCoveringType(ExpressDataSet *expressDataSet, const IfcCoveringType &obj, const CopyOp &copyop);
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
        bool remove(IfcCraneRailAShapeProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcCraneRailAShapeProfileDef > createIfcCraneRailAShapeProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCraneRailAShapeProfileDef *cloneIfcCraneRailAShapeProfileDef(ExpressDataSet *expressDataSet, const IfcCraneRailAShapeProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcCraneRailFShapeProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcCraneRailFShapeProfileDef > createIfcCraneRailFShapeProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCraneRailFShapeProfileDef *cloneIfcCraneRailFShapeProfileDef(ExpressDataSet *expressDataSet, const IfcCraneRailFShapeProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcCrewResource *arg);
        /**
         */
        Step::RefPtr< IfcCrewResource > createIfcCrewResource();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCrewResource *cloneIfcCrewResource(ExpressDataSet *expressDataSet, const IfcCrewResource &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcCrewResource *cloneIfcCrewResource(const IfcCrewResource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCsgPrimitive3D *getIfcCsgPrimitive3D(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcCsgPrimitive3D *arg);
        /**
         */
        Step::RefPtr< IfcCsgPrimitive3D > createIfcCsgPrimitive3D();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCsgPrimitive3D *cloneIfcCsgPrimitive3D(ExpressDataSet *expressDataSet, const IfcCsgPrimitive3D &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcCsgPrimitive3D *cloneIfcCsgPrimitive3D(const IfcCsgPrimitive3D &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCsgSolid *getIfcCsgSolid(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcCsgSolid *arg);
        /**
         */
        Step::RefPtr< IfcCsgSolid > createIfcCsgSolid();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCsgSolid *cloneIfcCsgSolid(ExpressDataSet *expressDataSet, const IfcCsgSolid &obj, const CopyOp &copyop);
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
        bool remove(IfcCurrencyRelationship *arg);
        /**
         */
        Step::RefPtr< IfcCurrencyRelationship > createIfcCurrencyRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurrencyRelationship *cloneIfcCurrencyRelationship(ExpressDataSet *expressDataSet, const IfcCurrencyRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcCurtainWall *arg);
        /**
         */
        Step::RefPtr< IfcCurtainWall > createIfcCurtainWall();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurtainWall *cloneIfcCurtainWall(ExpressDataSet *expressDataSet, const IfcCurtainWall &obj, const CopyOp &copyop);
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
        bool remove(IfcCurtainWallType *arg);
        /**
         */
        Step::RefPtr< IfcCurtainWallType > createIfcCurtainWallType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurtainWallType *cloneIfcCurtainWallType(ExpressDataSet *expressDataSet, const IfcCurtainWallType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcCurtainWallType *cloneIfcCurtainWallType(const IfcCurtainWallType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCurve *getIfcCurve(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcCurve *arg);
        /**
         */
        Step::RefPtr< IfcCurve > createIfcCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurve *cloneIfcCurve(ExpressDataSet *expressDataSet, const IfcCurve &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcCurve *cloneIfcCurve(const IfcCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCurveBoundedPlane *getIfcCurveBoundedPlane(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcCurveBoundedPlane *arg);
        /**
         */
        Step::RefPtr< IfcCurveBoundedPlane > createIfcCurveBoundedPlane();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurveBoundedPlane *cloneIfcCurveBoundedPlane(ExpressDataSet *expressDataSet, const IfcCurveBoundedPlane &obj, const CopyOp &copyop);
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
        bool remove(IfcCurveStyle *arg);
        /**
         */
        Step::RefPtr< IfcCurveStyle > createIfcCurveStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurveStyle *cloneIfcCurveStyle(ExpressDataSet *expressDataSet, const IfcCurveStyle &obj, const CopyOp &copyop);
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
        bool remove(IfcCurveStyleFont *arg);
        /**
         */
        Step::RefPtr< IfcCurveStyleFont > createIfcCurveStyleFont();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurveStyleFont *cloneIfcCurveStyleFont(ExpressDataSet *expressDataSet, const IfcCurveStyleFont &obj, const CopyOp &copyop);
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
        bool remove(IfcCurveStyleFontAndScaling *arg);
        /**
         */
        Step::RefPtr< IfcCurveStyleFontAndScaling > createIfcCurveStyleFontAndScaling();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurveStyleFontAndScaling *cloneIfcCurveStyleFontAndScaling(ExpressDataSet *expressDataSet, const IfcCurveStyleFontAndScaling &obj, const CopyOp &copyop);
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
        bool remove(IfcCurveStyleFontPattern *arg);
        /**
         */
        Step::RefPtr< IfcCurveStyleFontPattern > createIfcCurveStyleFontPattern();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCurveStyleFontPattern *cloneIfcCurveStyleFontPattern(ExpressDataSet *expressDataSet, const IfcCurveStyleFontPattern &obj, const CopyOp &copyop);
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
        bool remove(IfcDamperType *arg);
        /**
         */
        Step::RefPtr< IfcDamperType > createIfcDamperType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDamperType *cloneIfcDamperType(ExpressDataSet *expressDataSet, const IfcDamperType &obj, const CopyOp &copyop);
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
        bool remove(IfcDateAndTime *arg);
        /**
         */
        Step::RefPtr< IfcDateAndTime > createIfcDateAndTime();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDateAndTime *cloneIfcDateAndTime(ExpressDataSet *expressDataSet, const IfcDateAndTime &obj, const CopyOp &copyop);
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
        bool remove(IfcDefinedSymbol *arg);
        /**
         */
        Step::RefPtr< IfcDefinedSymbol > createIfcDefinedSymbol();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDefinedSymbol *cloneIfcDefinedSymbol(ExpressDataSet *expressDataSet, const IfcDefinedSymbol &obj, const CopyOp &copyop);
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
        bool remove(IfcDerivedProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcDerivedProfileDef > createIfcDerivedProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDerivedProfileDef *cloneIfcDerivedProfileDef(ExpressDataSet *expressDataSet, const IfcDerivedProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcDerivedUnit *arg);
        /**
         */
        Step::RefPtr< IfcDerivedUnit > createIfcDerivedUnit();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDerivedUnit *cloneIfcDerivedUnit(ExpressDataSet *expressDataSet, const IfcDerivedUnit &obj, const CopyOp &copyop);
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
        bool remove(IfcDerivedUnitElement *arg);
        /**
         */
        Step::RefPtr< IfcDerivedUnitElement > createIfcDerivedUnitElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDerivedUnitElement *cloneIfcDerivedUnitElement(ExpressDataSet *expressDataSet, const IfcDerivedUnitElement &obj, const CopyOp &copyop);
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
        bool remove(IfcDiameterDimension *arg);
        /**
         */
        Step::RefPtr< IfcDiameterDimension > createIfcDiameterDimension();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDiameterDimension *cloneIfcDiameterDimension(ExpressDataSet *expressDataSet, const IfcDiameterDimension &obj, const CopyOp &copyop);
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
        bool remove(IfcDimensionCalloutRelationship *arg);
        /**
         */
        Step::RefPtr< IfcDimensionCalloutRelationship > createIfcDimensionCalloutRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionCalloutRelationship *cloneIfcDimensionCalloutRelationship(ExpressDataSet *expressDataSet, const IfcDimensionCalloutRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcDimensionCurve *arg);
        /**
         */
        Step::RefPtr< IfcDimensionCurve > createIfcDimensionCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionCurve *cloneIfcDimensionCurve(ExpressDataSet *expressDataSet, const IfcDimensionCurve &obj, const CopyOp &copyop);
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
        bool remove(IfcDimensionCurveDirectedCallout *arg);
        /**
         */
        Step::RefPtr< IfcDimensionCurveDirectedCallout > createIfcDimensionCurveDirectedCallout();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionCurveDirectedCallout *cloneIfcDimensionCurveDirectedCallout(ExpressDataSet *expressDataSet, const IfcDimensionCurveDirectedCallout &obj, const CopyOp &copyop);
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
        bool remove(IfcDimensionCurveTerminator *arg);
        /**
         */
        Step::RefPtr< IfcDimensionCurveTerminator > createIfcDimensionCurveTerminator();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionCurveTerminator *cloneIfcDimensionCurveTerminator(ExpressDataSet *expressDataSet, const IfcDimensionCurveTerminator &obj, const CopyOp &copyop);
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
        bool remove(IfcDimensionPair *arg);
        /**
         */
        Step::RefPtr< IfcDimensionPair > createIfcDimensionPair();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionPair *cloneIfcDimensionPair(ExpressDataSet *expressDataSet, const IfcDimensionPair &obj, const CopyOp &copyop);
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
        bool remove(IfcDimensionalExponents *arg);
        /**
         */
        Step::RefPtr< IfcDimensionalExponents > createIfcDimensionalExponents();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDimensionalExponents *cloneIfcDimensionalExponents(ExpressDataSet *expressDataSet, const IfcDimensionalExponents &obj, const CopyOp &copyop);
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
        bool remove(IfcDirection *arg);
        /**
         */
        Step::RefPtr< IfcDirection > createIfcDirection();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDirection *cloneIfcDirection(ExpressDataSet *expressDataSet, const IfcDirection &obj, const CopyOp &copyop);
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
        bool remove(IfcDiscreteAccessory *arg);
        /**
         */
        Step::RefPtr< IfcDiscreteAccessory > createIfcDiscreteAccessory();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDiscreteAccessory *cloneIfcDiscreteAccessory(ExpressDataSet *expressDataSet, const IfcDiscreteAccessory &obj, const CopyOp &copyop);
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
        bool remove(IfcDiscreteAccessoryType *arg);
        /**
         */
        Step::RefPtr< IfcDiscreteAccessoryType > createIfcDiscreteAccessoryType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDiscreteAccessoryType *cloneIfcDiscreteAccessoryType(ExpressDataSet *expressDataSet, const IfcDiscreteAccessoryType &obj, const CopyOp &copyop);
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
        bool remove(IfcDistributionChamberElement *arg);
        /**
         */
        Step::RefPtr< IfcDistributionChamberElement > createIfcDistributionChamberElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionChamberElement *cloneIfcDistributionChamberElement(ExpressDataSet *expressDataSet, const IfcDistributionChamberElement &obj, const CopyOp &copyop);
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
        bool remove(IfcDistributionChamberElementType *arg);
        /**
         */
        Step::RefPtr< IfcDistributionChamberElementType > createIfcDistributionChamberElementType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionChamberElementType *cloneIfcDistributionChamberElementType(ExpressDataSet *expressDataSet, const IfcDistributionChamberElementType &obj, const CopyOp &copyop);
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
        bool remove(IfcDistributionControlElement *arg);
        /**
         */
        Step::RefPtr< IfcDistributionControlElement > createIfcDistributionControlElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionControlElement *cloneIfcDistributionControlElement(ExpressDataSet *expressDataSet, const IfcDistributionControlElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcDistributionControlElement *cloneIfcDistributionControlElement(const IfcDistributionControlElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDistributionControlElementType *getIfcDistributionControlElementType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcDistributionControlElementType *arg);
        /**
         */
        Step::RefPtr< IfcDistributionControlElementType > createIfcDistributionControlElementType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionControlElementType *cloneIfcDistributionControlElementType(ExpressDataSet *expressDataSet, const IfcDistributionControlElementType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcDistributionControlElementType *cloneIfcDistributionControlElementType(const IfcDistributionControlElementType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDistributionElement *getIfcDistributionElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcDistributionElement *arg);
        /**
         */
        Step::RefPtr< IfcDistributionElement > createIfcDistributionElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionElement *cloneIfcDistributionElement(ExpressDataSet *expressDataSet, const IfcDistributionElement &obj, const CopyOp &copyop);
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
        bool remove(IfcDistributionElementType *arg);
        /**
         */
        Step::RefPtr< IfcDistributionElementType > createIfcDistributionElementType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionElementType *cloneIfcDistributionElementType(ExpressDataSet *expressDataSet, const IfcDistributionElementType &obj, const CopyOp &copyop);
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
        bool remove(IfcDistributionFlowElement *arg);
        /**
         */
        Step::RefPtr< IfcDistributionFlowElement > createIfcDistributionFlowElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionFlowElement *cloneIfcDistributionFlowElement(ExpressDataSet *expressDataSet, const IfcDistributionFlowElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcDistributionFlowElement *cloneIfcDistributionFlowElement(const IfcDistributionFlowElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDistributionFlowElementType *getIfcDistributionFlowElementType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcDistributionFlowElementType *arg);
        /**
         */
        Step::RefPtr< IfcDistributionFlowElementType > createIfcDistributionFlowElementType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionFlowElementType *cloneIfcDistributionFlowElementType(ExpressDataSet *expressDataSet, const IfcDistributionFlowElementType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcDistributionFlowElementType *cloneIfcDistributionFlowElementType(const IfcDistributionFlowElementType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcDistributionPort *getIfcDistributionPort(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcDistributionPort *arg);
        /**
         */
        Step::RefPtr< IfcDistributionPort > createIfcDistributionPort();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDistributionPort *cloneIfcDistributionPort(ExpressDataSet *expressDataSet, const IfcDistributionPort &obj, const CopyOp &copyop);
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
        bool remove(IfcDocumentElectronicFormat *arg);
        /**
         */
        Step::RefPtr< IfcDocumentElectronicFormat > createIfcDocumentElectronicFormat();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDocumentElectronicFormat *cloneIfcDocumentElectronicFormat(ExpressDataSet *expressDataSet, const IfcDocumentElectronicFormat &obj, const CopyOp &copyop);
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
        bool remove(IfcDocumentInformation *arg);
        /**
         */
        Step::RefPtr< IfcDocumentInformation > createIfcDocumentInformation();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDocumentInformation *cloneIfcDocumentInformation(ExpressDataSet *expressDataSet, const IfcDocumentInformation &obj, const CopyOp &copyop);
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
        bool remove(IfcDocumentInformationRelationship *arg);
        /**
         */
        Step::RefPtr< IfcDocumentInformationRelationship > createIfcDocumentInformationRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDocumentInformationRelationship *cloneIfcDocumentInformationRelationship(ExpressDataSet *expressDataSet, const IfcDocumentInformationRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcDocumentReference *arg);
        /**
         */
        Step::RefPtr< IfcDocumentReference > createIfcDocumentReference();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDocumentReference *cloneIfcDocumentReference(ExpressDataSet *expressDataSet, const IfcDocumentReference &obj, const CopyOp &copyop);
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
        bool remove(IfcDoor *arg);
        /**
         */
        Step::RefPtr< IfcDoor > createIfcDoor();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDoor *cloneIfcDoor(ExpressDataSet *expressDataSet, const IfcDoor &obj, const CopyOp &copyop);
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
        bool remove(IfcDoorLiningProperties *arg);
        /**
         */
        Step::RefPtr< IfcDoorLiningProperties > createIfcDoorLiningProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDoorLiningProperties *cloneIfcDoorLiningProperties(ExpressDataSet *expressDataSet, const IfcDoorLiningProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcDoorPanelProperties *arg);
        /**
         */
        Step::RefPtr< IfcDoorPanelProperties > createIfcDoorPanelProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDoorPanelProperties *cloneIfcDoorPanelProperties(ExpressDataSet *expressDataSet, const IfcDoorPanelProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcDoorStyle *arg);
        /**
         */
        Step::RefPtr< IfcDoorStyle > createIfcDoorStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDoorStyle *cloneIfcDoorStyle(ExpressDataSet *expressDataSet, const IfcDoorStyle &obj, const CopyOp &copyop);
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
        bool remove(IfcDraughtingCallout *arg);
        /**
         */
        Step::RefPtr< IfcDraughtingCallout > createIfcDraughtingCallout();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDraughtingCallout *cloneIfcDraughtingCallout(ExpressDataSet *expressDataSet, const IfcDraughtingCallout &obj, const CopyOp &copyop);
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
        bool remove(IfcDraughtingCalloutRelationship *arg);
        /**
         */
        Step::RefPtr< IfcDraughtingCalloutRelationship > createIfcDraughtingCalloutRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDraughtingCalloutRelationship *cloneIfcDraughtingCalloutRelationship(ExpressDataSet *expressDataSet, const IfcDraughtingCalloutRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcDraughtingPreDefinedColour *arg);
        /**
         */
        Step::RefPtr< IfcDraughtingPreDefinedColour > createIfcDraughtingPreDefinedColour();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDraughtingPreDefinedColour *cloneIfcDraughtingPreDefinedColour(ExpressDataSet *expressDataSet, const IfcDraughtingPreDefinedColour &obj, const CopyOp &copyop);
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
        bool remove(IfcDraughtingPreDefinedCurveFont *arg);
        /**
         */
        Step::RefPtr< IfcDraughtingPreDefinedCurveFont > createIfcDraughtingPreDefinedCurveFont();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDraughtingPreDefinedCurveFont *cloneIfcDraughtingPreDefinedCurveFont(ExpressDataSet *expressDataSet, const IfcDraughtingPreDefinedCurveFont &obj, const CopyOp &copyop);
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
        bool remove(IfcDraughtingPreDefinedTextFont *arg);
        /**
         */
        Step::RefPtr< IfcDraughtingPreDefinedTextFont > createIfcDraughtingPreDefinedTextFont();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDraughtingPreDefinedTextFont *cloneIfcDraughtingPreDefinedTextFont(ExpressDataSet *expressDataSet, const IfcDraughtingPreDefinedTextFont &obj, const CopyOp &copyop);
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
        bool remove(IfcDuctFittingType *arg);
        /**
         */
        Step::RefPtr< IfcDuctFittingType > createIfcDuctFittingType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDuctFittingType *cloneIfcDuctFittingType(ExpressDataSet *expressDataSet, const IfcDuctFittingType &obj, const CopyOp &copyop);
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
        bool remove(IfcDuctSegmentType *arg);
        /**
         */
        Step::RefPtr< IfcDuctSegmentType > createIfcDuctSegmentType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDuctSegmentType *cloneIfcDuctSegmentType(ExpressDataSet *expressDataSet, const IfcDuctSegmentType &obj, const CopyOp &copyop);
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
        bool remove(IfcDuctSilencerType *arg);
        /**
         */
        Step::RefPtr< IfcDuctSilencerType > createIfcDuctSilencerType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcDuctSilencerType *cloneIfcDuctSilencerType(ExpressDataSet *expressDataSet, const IfcDuctSilencerType &obj, const CopyOp &copyop);
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
        bool remove(IfcEdge *arg);
        /**
         */
        Step::RefPtr< IfcEdge > createIfcEdge();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEdge *cloneIfcEdge(ExpressDataSet *expressDataSet, const IfcEdge &obj, const CopyOp &copyop);
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
        bool remove(IfcEdgeCurve *arg);
        /**
         */
        Step::RefPtr< IfcEdgeCurve > createIfcEdgeCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEdgeCurve *cloneIfcEdgeCurve(ExpressDataSet *expressDataSet, const IfcEdgeCurve &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcEdgeCurve *cloneIfcEdgeCurve(const IfcEdgeCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEdgeFeature *getIfcEdgeFeature(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcEdgeFeature *arg);
        /**
         */
        Step::RefPtr< IfcEdgeFeature > createIfcEdgeFeature();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEdgeFeature *cloneIfcEdgeFeature(ExpressDataSet *expressDataSet, const IfcEdgeFeature &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcEdgeFeature *cloneIfcEdgeFeature(const IfcEdgeFeature &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEdgeLoop *getIfcEdgeLoop(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcEdgeLoop *arg);
        /**
         */
        Step::RefPtr< IfcEdgeLoop > createIfcEdgeLoop();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEdgeLoop *cloneIfcEdgeLoop(ExpressDataSet *expressDataSet, const IfcEdgeLoop &obj, const CopyOp &copyop);
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
        bool remove(IfcElectricApplianceType *arg);
        /**
         */
        Step::RefPtr< IfcElectricApplianceType > createIfcElectricApplianceType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricApplianceType *cloneIfcElectricApplianceType(ExpressDataSet *expressDataSet, const IfcElectricApplianceType &obj, const CopyOp &copyop);
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
        bool remove(IfcElectricDistributionPoint *arg);
        /**
         */
        Step::RefPtr< IfcElectricDistributionPoint > createIfcElectricDistributionPoint();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricDistributionPoint *cloneIfcElectricDistributionPoint(ExpressDataSet *expressDataSet, const IfcElectricDistributionPoint &obj, const CopyOp &copyop);
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
        bool remove(IfcElectricFlowStorageDeviceType *arg);
        /**
         */
        Step::RefPtr< IfcElectricFlowStorageDeviceType > createIfcElectricFlowStorageDeviceType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricFlowStorageDeviceType *cloneIfcElectricFlowStorageDeviceType(ExpressDataSet *expressDataSet, const IfcElectricFlowStorageDeviceType &obj, const CopyOp &copyop);
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
        bool remove(IfcElectricGeneratorType *arg);
        /**
         */
        Step::RefPtr< IfcElectricGeneratorType > createIfcElectricGeneratorType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricGeneratorType *cloneIfcElectricGeneratorType(ExpressDataSet *expressDataSet, const IfcElectricGeneratorType &obj, const CopyOp &copyop);
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
        bool remove(IfcElectricHeaterType *arg);
        /**
         */
        Step::RefPtr< IfcElectricHeaterType > createIfcElectricHeaterType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricHeaterType *cloneIfcElectricHeaterType(ExpressDataSet *expressDataSet, const IfcElectricHeaterType &obj, const CopyOp &copyop);
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
        bool remove(IfcElectricMotorType *arg);
        /**
         */
        Step::RefPtr< IfcElectricMotorType > createIfcElectricMotorType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricMotorType *cloneIfcElectricMotorType(ExpressDataSet *expressDataSet, const IfcElectricMotorType &obj, const CopyOp &copyop);
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
        bool remove(IfcElectricTimeControlType *arg);
        /**
         */
        Step::RefPtr< IfcElectricTimeControlType > createIfcElectricTimeControlType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricTimeControlType *cloneIfcElectricTimeControlType(ExpressDataSet *expressDataSet, const IfcElectricTimeControlType &obj, const CopyOp &copyop);
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
        bool remove(IfcElectricalBaseProperties *arg);
        /**
         */
        Step::RefPtr< IfcElectricalBaseProperties > createIfcElectricalBaseProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricalBaseProperties *cloneIfcElectricalBaseProperties(ExpressDataSet *expressDataSet, const IfcElectricalBaseProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcElectricalCircuit *arg);
        /**
         */
        Step::RefPtr< IfcElectricalCircuit > createIfcElectricalCircuit();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricalCircuit *cloneIfcElectricalCircuit(ExpressDataSet *expressDataSet, const IfcElectricalCircuit &obj, const CopyOp &copyop);
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
        bool remove(IfcElectricalElement *arg);
        /**
         */
        Step::RefPtr< IfcElectricalElement > createIfcElectricalElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElectricalElement *cloneIfcElectricalElement(ExpressDataSet *expressDataSet, const IfcElectricalElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcElectricalElement *cloneIfcElectricalElement(const IfcElectricalElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElement *getIfcElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcElement *arg);
        /**
         */
        Step::RefPtr< IfcElement > createIfcElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElement *cloneIfcElement(ExpressDataSet *expressDataSet, const IfcElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcElement *cloneIfcElement(const IfcElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElementAssembly *getIfcElementAssembly(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcElementAssembly *arg);
        /**
         */
        Step::RefPtr< IfcElementAssembly > createIfcElementAssembly();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElementAssembly *cloneIfcElementAssembly(ExpressDataSet *expressDataSet, const IfcElementAssembly &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcElementAssembly *cloneIfcElementAssembly(const IfcElementAssembly &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElementComponent *getIfcElementComponent(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcElementComponent *arg);
        /**
         */
        Step::RefPtr< IfcElementComponent > createIfcElementComponent();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElementComponent *cloneIfcElementComponent(ExpressDataSet *expressDataSet, const IfcElementComponent &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcElementComponent *cloneIfcElementComponent(const IfcElementComponent &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElementComponentType *getIfcElementComponentType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcElementComponentType *arg);
        /**
         */
        Step::RefPtr< IfcElementComponentType > createIfcElementComponentType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElementComponentType *cloneIfcElementComponentType(ExpressDataSet *expressDataSet, const IfcElementComponentType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcElementComponentType *cloneIfcElementComponentType(const IfcElementComponentType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElementQuantity *getIfcElementQuantity(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcElementQuantity *arg);
        /**
         */
        Step::RefPtr< IfcElementQuantity > createIfcElementQuantity();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElementQuantity *cloneIfcElementQuantity(ExpressDataSet *expressDataSet, const IfcElementQuantity &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcElementQuantity *cloneIfcElementQuantity(const IfcElementQuantity &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElementType *getIfcElementType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcElementType *arg);
        /**
         */
        Step::RefPtr< IfcElementType > createIfcElementType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElementType *cloneIfcElementType(ExpressDataSet *expressDataSet, const IfcElementType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcElementType *cloneIfcElementType(const IfcElementType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElementarySurface *getIfcElementarySurface(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcElementarySurface *arg);
        /**
         */
        Step::RefPtr< IfcElementarySurface > createIfcElementarySurface();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElementarySurface *cloneIfcElementarySurface(ExpressDataSet *expressDataSet, const IfcElementarySurface &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcElementarySurface *cloneIfcElementarySurface(const IfcElementarySurface &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEllipse *getIfcEllipse(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcEllipse *arg);
        /**
         */
        Step::RefPtr< IfcEllipse > createIfcEllipse();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEllipse *cloneIfcEllipse(ExpressDataSet *expressDataSet, const IfcEllipse &obj, const CopyOp &copyop);
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
        bool remove(IfcEllipseProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcEllipseProfileDef > createIfcEllipseProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEllipseProfileDef *cloneIfcEllipseProfileDef(ExpressDataSet *expressDataSet, const IfcEllipseProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcEnergyConversionDevice *arg);
        /**
         */
        Step::RefPtr< IfcEnergyConversionDevice > createIfcEnergyConversionDevice();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEnergyConversionDevice *cloneIfcEnergyConversionDevice(ExpressDataSet *expressDataSet, const IfcEnergyConversionDevice &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcEnergyConversionDevice *cloneIfcEnergyConversionDevice(const IfcEnergyConversionDevice &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEnergyConversionDeviceType *getIfcEnergyConversionDeviceType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcEnergyConversionDeviceType *arg);
        /**
         */
        Step::RefPtr< IfcEnergyConversionDeviceType > createIfcEnergyConversionDeviceType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEnergyConversionDeviceType *cloneIfcEnergyConversionDeviceType(ExpressDataSet *expressDataSet, const IfcEnergyConversionDeviceType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcEnergyConversionDeviceType *cloneIfcEnergyConversionDeviceType(const IfcEnergyConversionDeviceType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcEnergyProperties *getIfcEnergyProperties(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcEnergyProperties *arg);
        /**
         */
        Step::RefPtr< IfcEnergyProperties > createIfcEnergyProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEnergyProperties *cloneIfcEnergyProperties(ExpressDataSet *expressDataSet, const IfcEnergyProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcEnvironmentalImpactValue *arg);
        /**
         */
        Step::RefPtr< IfcEnvironmentalImpactValue > createIfcEnvironmentalImpactValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEnvironmentalImpactValue *cloneIfcEnvironmentalImpactValue(ExpressDataSet *expressDataSet, const IfcEnvironmentalImpactValue &obj, const CopyOp &copyop);
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
        bool remove(IfcEquipmentElement *arg);
        /**
         */
        Step::RefPtr< IfcEquipmentElement > createIfcEquipmentElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEquipmentElement *cloneIfcEquipmentElement(ExpressDataSet *expressDataSet, const IfcEquipmentElement &obj, const CopyOp &copyop);
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
        bool remove(IfcEquipmentStandard *arg);
        /**
         */
        Step::RefPtr< IfcEquipmentStandard > createIfcEquipmentStandard();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEquipmentStandard *cloneIfcEquipmentStandard(ExpressDataSet *expressDataSet, const IfcEquipmentStandard &obj, const CopyOp &copyop);
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
        bool remove(IfcEvaporativeCoolerType *arg);
        /**
         */
        Step::RefPtr< IfcEvaporativeCoolerType > createIfcEvaporativeCoolerType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEvaporativeCoolerType *cloneIfcEvaporativeCoolerType(ExpressDataSet *expressDataSet, const IfcEvaporativeCoolerType &obj, const CopyOp &copyop);
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
        bool remove(IfcEvaporatorType *arg);
        /**
         */
        Step::RefPtr< IfcEvaporatorType > createIfcEvaporatorType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcEvaporatorType *cloneIfcEvaporatorType(ExpressDataSet *expressDataSet, const IfcEvaporatorType &obj, const CopyOp &copyop);
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
        bool remove(IfcExtendedMaterialProperties *arg);
        /**
         */
        Step::RefPtr< IfcExtendedMaterialProperties > createIfcExtendedMaterialProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExtendedMaterialProperties *cloneIfcExtendedMaterialProperties(ExpressDataSet *expressDataSet, const IfcExtendedMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcExtendedMaterialProperties *cloneIfcExtendedMaterialProperties(const IfcExtendedMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcExternalReference *getIfcExternalReference(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcExternalReference *arg);
        /**
         */
        Step::RefPtr< IfcExternalReference > createIfcExternalReference();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExternalReference *cloneIfcExternalReference(ExpressDataSet *expressDataSet, const IfcExternalReference &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcExternalReference *cloneIfcExternalReference(const IfcExternalReference &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcExternallyDefinedHatchStyle *getIfcExternallyDefinedHatchStyle(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcExternallyDefinedHatchStyle *arg);
        /**
         */
        Step::RefPtr< IfcExternallyDefinedHatchStyle > createIfcExternallyDefinedHatchStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExternallyDefinedHatchStyle *cloneIfcExternallyDefinedHatchStyle(ExpressDataSet *expressDataSet, const IfcExternallyDefinedHatchStyle &obj, const CopyOp &copyop);
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
        bool remove(IfcExternallyDefinedSurfaceStyle *arg);
        /**
         */
        Step::RefPtr< IfcExternallyDefinedSurfaceStyle > createIfcExternallyDefinedSurfaceStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExternallyDefinedSurfaceStyle *cloneIfcExternallyDefinedSurfaceStyle(ExpressDataSet *expressDataSet, const IfcExternallyDefinedSurfaceStyle &obj, const CopyOp &copyop);
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
        bool remove(IfcExternallyDefinedSymbol *arg);
        /**
         */
        Step::RefPtr< IfcExternallyDefinedSymbol > createIfcExternallyDefinedSymbol();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExternallyDefinedSymbol *cloneIfcExternallyDefinedSymbol(ExpressDataSet *expressDataSet, const IfcExternallyDefinedSymbol &obj, const CopyOp &copyop);
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
        bool remove(IfcExternallyDefinedTextFont *arg);
        /**
         */
        Step::RefPtr< IfcExternallyDefinedTextFont > createIfcExternallyDefinedTextFont();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExternallyDefinedTextFont *cloneIfcExternallyDefinedTextFont(ExpressDataSet *expressDataSet, const IfcExternallyDefinedTextFont &obj, const CopyOp &copyop);
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
        bool remove(IfcExtrudedAreaSolid *arg);
        /**
         */
        Step::RefPtr< IfcExtrudedAreaSolid > createIfcExtrudedAreaSolid();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcExtrudedAreaSolid *cloneIfcExtrudedAreaSolid(ExpressDataSet *expressDataSet, const IfcExtrudedAreaSolid &obj, const CopyOp &copyop);
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
        bool remove(IfcFace *arg);
        /**
         */
        Step::RefPtr< IfcFace > createIfcFace();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFace *cloneIfcFace(ExpressDataSet *expressDataSet, const IfcFace &obj, const CopyOp &copyop);
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
        bool remove(IfcFaceBasedSurfaceModel *arg);
        /**
         */
        Step::RefPtr< IfcFaceBasedSurfaceModel > createIfcFaceBasedSurfaceModel();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFaceBasedSurfaceModel *cloneIfcFaceBasedSurfaceModel(ExpressDataSet *expressDataSet, const IfcFaceBasedSurfaceModel &obj, const CopyOp &copyop);
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
        bool remove(IfcFaceBound *arg);
        /**
         */
        Step::RefPtr< IfcFaceBound > createIfcFaceBound();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFaceBound *cloneIfcFaceBound(ExpressDataSet *expressDataSet, const IfcFaceBound &obj, const CopyOp &copyop);
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
        bool remove(IfcFaceOuterBound *arg);
        /**
         */
        Step::RefPtr< IfcFaceOuterBound > createIfcFaceOuterBound();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFaceOuterBound *cloneIfcFaceOuterBound(ExpressDataSet *expressDataSet, const IfcFaceOuterBound &obj, const CopyOp &copyop);
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
        bool remove(IfcFaceSurface *arg);
        /**
         */
        Step::RefPtr< IfcFaceSurface > createIfcFaceSurface();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFaceSurface *cloneIfcFaceSurface(ExpressDataSet *expressDataSet, const IfcFaceSurface &obj, const CopyOp &copyop);
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
        bool remove(IfcFacetedBrep *arg);
        /**
         */
        Step::RefPtr< IfcFacetedBrep > createIfcFacetedBrep();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFacetedBrep *cloneIfcFacetedBrep(ExpressDataSet *expressDataSet, const IfcFacetedBrep &obj, const CopyOp &copyop);
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
        bool remove(IfcFacetedBrepWithVoids *arg);
        /**
         */
        Step::RefPtr< IfcFacetedBrepWithVoids > createIfcFacetedBrepWithVoids();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFacetedBrepWithVoids *cloneIfcFacetedBrepWithVoids(ExpressDataSet *expressDataSet, const IfcFacetedBrepWithVoids &obj, const CopyOp &copyop);
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
        bool remove(IfcFailureConnectionCondition *arg);
        /**
         */
        Step::RefPtr< IfcFailureConnectionCondition > createIfcFailureConnectionCondition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFailureConnectionCondition *cloneIfcFailureConnectionCondition(ExpressDataSet *expressDataSet, const IfcFailureConnectionCondition &obj, const CopyOp &copyop);
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
        bool remove(IfcFanType *arg);
        /**
         */
        Step::RefPtr< IfcFanType > createIfcFanType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFanType *cloneIfcFanType(ExpressDataSet *expressDataSet, const IfcFanType &obj, const CopyOp &copyop);
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
        bool remove(IfcFastener *arg);
        /**
         */
        Step::RefPtr< IfcFastener > createIfcFastener();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFastener *cloneIfcFastener(ExpressDataSet *expressDataSet, const IfcFastener &obj, const CopyOp &copyop);
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
        bool remove(IfcFastenerType *arg);
        /**
         */
        Step::RefPtr< IfcFastenerType > createIfcFastenerType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFastenerType *cloneIfcFastenerType(ExpressDataSet *expressDataSet, const IfcFastenerType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFastenerType *cloneIfcFastenerType(const IfcFastenerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFeatureElement *getIfcFeatureElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFeatureElement *arg);
        /**
         */
        Step::RefPtr< IfcFeatureElement > createIfcFeatureElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFeatureElement *cloneIfcFeatureElement(ExpressDataSet *expressDataSet, const IfcFeatureElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFeatureElement *cloneIfcFeatureElement(const IfcFeatureElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFeatureElementAddition *getIfcFeatureElementAddition(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFeatureElementAddition *arg);
        /**
         */
        Step::RefPtr< IfcFeatureElementAddition > createIfcFeatureElementAddition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFeatureElementAddition *cloneIfcFeatureElementAddition(ExpressDataSet *expressDataSet, const IfcFeatureElementAddition &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFeatureElementAddition *cloneIfcFeatureElementAddition(const IfcFeatureElementAddition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFeatureElementSubtraction *getIfcFeatureElementSubtraction(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFeatureElementSubtraction *arg);
        /**
         */
        Step::RefPtr< IfcFeatureElementSubtraction > createIfcFeatureElementSubtraction();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFeatureElementSubtraction *cloneIfcFeatureElementSubtraction(ExpressDataSet *expressDataSet, const IfcFeatureElementSubtraction &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFeatureElementSubtraction *cloneIfcFeatureElementSubtraction(const IfcFeatureElementSubtraction &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFillAreaStyle *getIfcFillAreaStyle(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFillAreaStyle *arg);
        /**
         */
        Step::RefPtr< IfcFillAreaStyle > createIfcFillAreaStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFillAreaStyle *cloneIfcFillAreaStyle(ExpressDataSet *expressDataSet, const IfcFillAreaStyle &obj, const CopyOp &copyop);
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
        bool remove(IfcFillAreaStyleHatching *arg);
        /**
         */
        Step::RefPtr< IfcFillAreaStyleHatching > createIfcFillAreaStyleHatching();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFillAreaStyleHatching *cloneIfcFillAreaStyleHatching(ExpressDataSet *expressDataSet, const IfcFillAreaStyleHatching &obj, const CopyOp &copyop);
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
        bool remove(IfcFillAreaStyleTileSymbolWithStyle *arg);
        /**
         */
        Step::RefPtr< IfcFillAreaStyleTileSymbolWithStyle > createIfcFillAreaStyleTileSymbolWithStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFillAreaStyleTileSymbolWithStyle *cloneIfcFillAreaStyleTileSymbolWithStyle(ExpressDataSet *expressDataSet, const IfcFillAreaStyleTileSymbolWithStyle &obj, const CopyOp &copyop);
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
        bool remove(IfcFillAreaStyleTiles *arg);
        /**
         */
        Step::RefPtr< IfcFillAreaStyleTiles > createIfcFillAreaStyleTiles();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFillAreaStyleTiles *cloneIfcFillAreaStyleTiles(ExpressDataSet *expressDataSet, const IfcFillAreaStyleTiles &obj, const CopyOp &copyop);
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
        bool remove(IfcFilterType *arg);
        /**
         */
        Step::RefPtr< IfcFilterType > createIfcFilterType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFilterType *cloneIfcFilterType(ExpressDataSet *expressDataSet, const IfcFilterType &obj, const CopyOp &copyop);
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
        bool remove(IfcFireSuppressionTerminalType *arg);
        /**
         */
        Step::RefPtr< IfcFireSuppressionTerminalType > createIfcFireSuppressionTerminalType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFireSuppressionTerminalType *cloneIfcFireSuppressionTerminalType(ExpressDataSet *expressDataSet, const IfcFireSuppressionTerminalType &obj, const CopyOp &copyop);
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
        bool remove(IfcFlowController *arg);
        /**
         */
        Step::RefPtr< IfcFlowController > createIfcFlowController();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowController *cloneIfcFlowController(ExpressDataSet *expressDataSet, const IfcFlowController &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowController *cloneIfcFlowController(const IfcFlowController &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowControllerType *getIfcFlowControllerType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowControllerType *arg);
        /**
         */
        Step::RefPtr< IfcFlowControllerType > createIfcFlowControllerType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowControllerType *cloneIfcFlowControllerType(ExpressDataSet *expressDataSet, const IfcFlowControllerType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowControllerType *cloneIfcFlowControllerType(const IfcFlowControllerType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowFitting *getIfcFlowFitting(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowFitting *arg);
        /**
         */
        Step::RefPtr< IfcFlowFitting > createIfcFlowFitting();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowFitting *cloneIfcFlowFitting(ExpressDataSet *expressDataSet, const IfcFlowFitting &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowFitting *cloneIfcFlowFitting(const IfcFlowFitting &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowFittingType *getIfcFlowFittingType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowFittingType *arg);
        /**
         */
        Step::RefPtr< IfcFlowFittingType > createIfcFlowFittingType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowFittingType *cloneIfcFlowFittingType(ExpressDataSet *expressDataSet, const IfcFlowFittingType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowFittingType *cloneIfcFlowFittingType(const IfcFlowFittingType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowInstrumentType *getIfcFlowInstrumentType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowInstrumentType *arg);
        /**
         */
        Step::RefPtr< IfcFlowInstrumentType > createIfcFlowInstrumentType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowInstrumentType *cloneIfcFlowInstrumentType(ExpressDataSet *expressDataSet, const IfcFlowInstrumentType &obj, const CopyOp &copyop);
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
        bool remove(IfcFlowMeterType *arg);
        /**
         */
        Step::RefPtr< IfcFlowMeterType > createIfcFlowMeterType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowMeterType *cloneIfcFlowMeterType(ExpressDataSet *expressDataSet, const IfcFlowMeterType &obj, const CopyOp &copyop);
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
        bool remove(IfcFlowMovingDevice *arg);
        /**
         */
        Step::RefPtr< IfcFlowMovingDevice > createIfcFlowMovingDevice();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowMovingDevice *cloneIfcFlowMovingDevice(ExpressDataSet *expressDataSet, const IfcFlowMovingDevice &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowMovingDevice *cloneIfcFlowMovingDevice(const IfcFlowMovingDevice &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowMovingDeviceType *getIfcFlowMovingDeviceType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowMovingDeviceType *arg);
        /**
         */
        Step::RefPtr< IfcFlowMovingDeviceType > createIfcFlowMovingDeviceType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowMovingDeviceType *cloneIfcFlowMovingDeviceType(ExpressDataSet *expressDataSet, const IfcFlowMovingDeviceType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowMovingDeviceType *cloneIfcFlowMovingDeviceType(const IfcFlowMovingDeviceType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowSegment *getIfcFlowSegment(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowSegment *arg);
        /**
         */
        Step::RefPtr< IfcFlowSegment > createIfcFlowSegment();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowSegment *cloneIfcFlowSegment(ExpressDataSet *expressDataSet, const IfcFlowSegment &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowSegment *cloneIfcFlowSegment(const IfcFlowSegment &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowSegmentType *getIfcFlowSegmentType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowSegmentType *arg);
        /**
         */
        Step::RefPtr< IfcFlowSegmentType > createIfcFlowSegmentType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowSegmentType *cloneIfcFlowSegmentType(ExpressDataSet *expressDataSet, const IfcFlowSegmentType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowSegmentType *cloneIfcFlowSegmentType(const IfcFlowSegmentType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowStorageDevice *getIfcFlowStorageDevice(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowStorageDevice *arg);
        /**
         */
        Step::RefPtr< IfcFlowStorageDevice > createIfcFlowStorageDevice();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowStorageDevice *cloneIfcFlowStorageDevice(ExpressDataSet *expressDataSet, const IfcFlowStorageDevice &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowStorageDevice *cloneIfcFlowStorageDevice(const IfcFlowStorageDevice &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowStorageDeviceType *getIfcFlowStorageDeviceType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowStorageDeviceType *arg);
        /**
         */
        Step::RefPtr< IfcFlowStorageDeviceType > createIfcFlowStorageDeviceType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowStorageDeviceType *cloneIfcFlowStorageDeviceType(ExpressDataSet *expressDataSet, const IfcFlowStorageDeviceType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowStorageDeviceType *cloneIfcFlowStorageDeviceType(const IfcFlowStorageDeviceType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowTerminal *getIfcFlowTerminal(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowTerminal *arg);
        /**
         */
        Step::RefPtr< IfcFlowTerminal > createIfcFlowTerminal();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowTerminal *cloneIfcFlowTerminal(ExpressDataSet *expressDataSet, const IfcFlowTerminal &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowTerminal *cloneIfcFlowTerminal(const IfcFlowTerminal &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowTerminalType *getIfcFlowTerminalType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowTerminalType *arg);
        /**
         */
        Step::RefPtr< IfcFlowTerminalType > createIfcFlowTerminalType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowTerminalType *cloneIfcFlowTerminalType(ExpressDataSet *expressDataSet, const IfcFlowTerminalType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowTerminalType *cloneIfcFlowTerminalType(const IfcFlowTerminalType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowTreatmentDevice *getIfcFlowTreatmentDevice(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowTreatmentDevice *arg);
        /**
         */
        Step::RefPtr< IfcFlowTreatmentDevice > createIfcFlowTreatmentDevice();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowTreatmentDevice *cloneIfcFlowTreatmentDevice(ExpressDataSet *expressDataSet, const IfcFlowTreatmentDevice &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowTreatmentDevice *cloneIfcFlowTreatmentDevice(const IfcFlowTreatmentDevice &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFlowTreatmentDeviceType *getIfcFlowTreatmentDeviceType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFlowTreatmentDeviceType *arg);
        /**
         */
        Step::RefPtr< IfcFlowTreatmentDeviceType > createIfcFlowTreatmentDeviceType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFlowTreatmentDeviceType *cloneIfcFlowTreatmentDeviceType(ExpressDataSet *expressDataSet, const IfcFlowTreatmentDeviceType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcFlowTreatmentDeviceType *cloneIfcFlowTreatmentDeviceType(const IfcFlowTreatmentDeviceType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcFluidFlowProperties *getIfcFluidFlowProperties(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcFluidFlowProperties *arg);
        /**
         */
        Step::RefPtr< IfcFluidFlowProperties > createIfcFluidFlowProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFluidFlowProperties *cloneIfcFluidFlowProperties(ExpressDataSet *expressDataSet, const IfcFluidFlowProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcFooting *arg);
        /**
         */
        Step::RefPtr< IfcFooting > createIfcFooting();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFooting *cloneIfcFooting(ExpressDataSet *expressDataSet, const IfcFooting &obj, const CopyOp &copyop);
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
        bool remove(IfcFuelProperties *arg);
        /**
         */
        Step::RefPtr< IfcFuelProperties > createIfcFuelProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFuelProperties *cloneIfcFuelProperties(ExpressDataSet *expressDataSet, const IfcFuelProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcFurnishingElement *arg);
        /**
         */
        Step::RefPtr< IfcFurnishingElement > createIfcFurnishingElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFurnishingElement *cloneIfcFurnishingElement(ExpressDataSet *expressDataSet, const IfcFurnishingElement &obj, const CopyOp &copyop);
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
        bool remove(IfcFurnishingElementType *arg);
        /**
         */
        Step::RefPtr< IfcFurnishingElementType > createIfcFurnishingElementType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFurnishingElementType *cloneIfcFurnishingElementType(ExpressDataSet *expressDataSet, const IfcFurnishingElementType &obj, const CopyOp &copyop);
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
        bool remove(IfcFurnitureStandard *arg);
        /**
         */
        Step::RefPtr< IfcFurnitureStandard > createIfcFurnitureStandard();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFurnitureStandard *cloneIfcFurnitureStandard(ExpressDataSet *expressDataSet, const IfcFurnitureStandard &obj, const CopyOp &copyop);
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
        bool remove(IfcFurnitureType *arg);
        /**
         */
        Step::RefPtr< IfcFurnitureType > createIfcFurnitureType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcFurnitureType *cloneIfcFurnitureType(ExpressDataSet *expressDataSet, const IfcFurnitureType &obj, const CopyOp &copyop);
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
        bool remove(IfcGasTerminalType *arg);
        /**
         */
        Step::RefPtr< IfcGasTerminalType > createIfcGasTerminalType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGasTerminalType *cloneIfcGasTerminalType(ExpressDataSet *expressDataSet, const IfcGasTerminalType &obj, const CopyOp &copyop);
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
        bool remove(IfcGeneralMaterialProperties *arg);
        /**
         */
        Step::RefPtr< IfcGeneralMaterialProperties > createIfcGeneralMaterialProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeneralMaterialProperties *cloneIfcGeneralMaterialProperties(ExpressDataSet *expressDataSet, const IfcGeneralMaterialProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcGeneralProfileProperties *arg);
        /**
         */
        Step::RefPtr< IfcGeneralProfileProperties > createIfcGeneralProfileProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeneralProfileProperties *cloneIfcGeneralProfileProperties(ExpressDataSet *expressDataSet, const IfcGeneralProfileProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcGeometricCurveSet *arg);
        /**
         */
        Step::RefPtr< IfcGeometricCurveSet > createIfcGeometricCurveSet();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeometricCurveSet *cloneIfcGeometricCurveSet(ExpressDataSet *expressDataSet, const IfcGeometricCurveSet &obj, const CopyOp &copyop);
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
        bool remove(IfcGeometricRepresentationContext *arg);
        /**
         */
        Step::RefPtr< IfcGeometricRepresentationContext > createIfcGeometricRepresentationContext();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeometricRepresentationContext *cloneIfcGeometricRepresentationContext(ExpressDataSet *expressDataSet, const IfcGeometricRepresentationContext &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcGeometricRepresentationContext *cloneIfcGeometricRepresentationContext(const IfcGeometricRepresentationContext &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGeometricRepresentationItem *getIfcGeometricRepresentationItem(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcGeometricRepresentationItem *arg);
        /**
         */
        Step::RefPtr< IfcGeometricRepresentationItem > createIfcGeometricRepresentationItem();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeometricRepresentationItem *cloneIfcGeometricRepresentationItem(ExpressDataSet *expressDataSet, const IfcGeometricRepresentationItem &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcGeometricRepresentationItem *cloneIfcGeometricRepresentationItem(const IfcGeometricRepresentationItem &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcGeometricRepresentationSubContext *getIfcGeometricRepresentationSubContext(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcGeometricRepresentationSubContext *arg);
        /**
         */
        Step::RefPtr< IfcGeometricRepresentationSubContext > createIfcGeometricRepresentationSubContext();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeometricRepresentationSubContext *cloneIfcGeometricRepresentationSubContext(ExpressDataSet *expressDataSet, const IfcGeometricRepresentationSubContext &obj, const CopyOp &copyop);
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
        bool remove(IfcGeometricSet *arg);
        /**
         */
        Step::RefPtr< IfcGeometricSet > createIfcGeometricSet();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGeometricSet *cloneIfcGeometricSet(ExpressDataSet *expressDataSet, const IfcGeometricSet &obj, const CopyOp &copyop);
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
        bool remove(IfcGrid *arg);
        /**
         */
        Step::RefPtr< IfcGrid > createIfcGrid();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGrid *cloneIfcGrid(ExpressDataSet *expressDataSet, const IfcGrid &obj, const CopyOp &copyop);
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
        bool remove(IfcGridAxis *arg);
        /**
         */
        Step::RefPtr< IfcGridAxis > createIfcGridAxis();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGridAxis *cloneIfcGridAxis(ExpressDataSet *expressDataSet, const IfcGridAxis &obj, const CopyOp &copyop);
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
        bool remove(IfcGridPlacement *arg);
        /**
         */
        Step::RefPtr< IfcGridPlacement > createIfcGridPlacement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGridPlacement *cloneIfcGridPlacement(ExpressDataSet *expressDataSet, const IfcGridPlacement &obj, const CopyOp &copyop);
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
        bool remove(IfcGroup *arg);
        /**
         */
        Step::RefPtr< IfcGroup > createIfcGroup();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcGroup *cloneIfcGroup(ExpressDataSet *expressDataSet, const IfcGroup &obj, const CopyOp &copyop);
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
        bool remove(IfcHalfSpaceSolid *arg);
        /**
         */
        Step::RefPtr< IfcHalfSpaceSolid > createIfcHalfSpaceSolid();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcHalfSpaceSolid *cloneIfcHalfSpaceSolid(ExpressDataSet *expressDataSet, const IfcHalfSpaceSolid &obj, const CopyOp &copyop);
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
        bool remove(IfcHeatExchangerType *arg);
        /**
         */
        Step::RefPtr< IfcHeatExchangerType > createIfcHeatExchangerType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcHeatExchangerType *cloneIfcHeatExchangerType(ExpressDataSet *expressDataSet, const IfcHeatExchangerType &obj, const CopyOp &copyop);
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
        bool remove(IfcHumidifierType *arg);
        /**
         */
        Step::RefPtr< IfcHumidifierType > createIfcHumidifierType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcHumidifierType *cloneIfcHumidifierType(ExpressDataSet *expressDataSet, const IfcHumidifierType &obj, const CopyOp &copyop);
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
        bool remove(IfcHygroscopicMaterialProperties *arg);
        /**
         */
        Step::RefPtr< IfcHygroscopicMaterialProperties > createIfcHygroscopicMaterialProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcHygroscopicMaterialProperties *cloneIfcHygroscopicMaterialProperties(ExpressDataSet *expressDataSet, const IfcHygroscopicMaterialProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcIShapeProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcIShapeProfileDef > createIfcIShapeProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcIShapeProfileDef *cloneIfcIShapeProfileDef(ExpressDataSet *expressDataSet, const IfcIShapeProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcImageTexture *arg);
        /**
         */
        Step::RefPtr< IfcImageTexture > createIfcImageTexture();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcImageTexture *cloneIfcImageTexture(ExpressDataSet *expressDataSet, const IfcImageTexture &obj, const CopyOp &copyop);
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
        bool remove(IfcInventory *arg);
        /**
         */
        Step::RefPtr< IfcInventory > createIfcInventory();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcInventory *cloneIfcInventory(ExpressDataSet *expressDataSet, const IfcInventory &obj, const CopyOp &copyop);
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
        bool remove(IfcIrregularTimeSeries *arg);
        /**
         */
        Step::RefPtr< IfcIrregularTimeSeries > createIfcIrregularTimeSeries();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcIrregularTimeSeries *cloneIfcIrregularTimeSeries(ExpressDataSet *expressDataSet, const IfcIrregularTimeSeries &obj, const CopyOp &copyop);
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
        bool remove(IfcIrregularTimeSeriesValue *arg);
        /**
         */
        Step::RefPtr< IfcIrregularTimeSeriesValue > createIfcIrregularTimeSeriesValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcIrregularTimeSeriesValue *cloneIfcIrregularTimeSeriesValue(ExpressDataSet *expressDataSet, const IfcIrregularTimeSeriesValue &obj, const CopyOp &copyop);
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
        bool remove(IfcJunctionBoxType *arg);
        /**
         */
        Step::RefPtr< IfcJunctionBoxType > createIfcJunctionBoxType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcJunctionBoxType *cloneIfcJunctionBoxType(ExpressDataSet *expressDataSet, const IfcJunctionBoxType &obj, const CopyOp &copyop);
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
        bool remove(IfcLShapeProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcLShapeProfileDef > createIfcLShapeProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLShapeProfileDef *cloneIfcLShapeProfileDef(ExpressDataSet *expressDataSet, const IfcLShapeProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcLaborResource *arg);
        /**
         */
        Step::RefPtr< IfcLaborResource > createIfcLaborResource();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLaborResource *cloneIfcLaborResource(ExpressDataSet *expressDataSet, const IfcLaborResource &obj, const CopyOp &copyop);
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
        bool remove(IfcLampType *arg);
        /**
         */
        Step::RefPtr< IfcLampType > createIfcLampType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLampType *cloneIfcLampType(ExpressDataSet *expressDataSet, const IfcLampType &obj, const CopyOp &copyop);
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
        bool remove(IfcLibraryInformation *arg);
        /**
         */
        Step::RefPtr< IfcLibraryInformation > createIfcLibraryInformation();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLibraryInformation *cloneIfcLibraryInformation(ExpressDataSet *expressDataSet, const IfcLibraryInformation &obj, const CopyOp &copyop);
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
        bool remove(IfcLibraryReference *arg);
        /**
         */
        Step::RefPtr< IfcLibraryReference > createIfcLibraryReference();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLibraryReference *cloneIfcLibraryReference(ExpressDataSet *expressDataSet, const IfcLibraryReference &obj, const CopyOp &copyop);
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
        bool remove(IfcLightDistributionData *arg);
        /**
         */
        Step::RefPtr< IfcLightDistributionData > createIfcLightDistributionData();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightDistributionData *cloneIfcLightDistributionData(ExpressDataSet *expressDataSet, const IfcLightDistributionData &obj, const CopyOp &copyop);
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
        bool remove(IfcLightFixtureType *arg);
        /**
         */
        Step::RefPtr< IfcLightFixtureType > createIfcLightFixtureType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightFixtureType *cloneIfcLightFixtureType(ExpressDataSet *expressDataSet, const IfcLightFixtureType &obj, const CopyOp &copyop);
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
        bool remove(IfcLightIntensityDistribution *arg);
        /**
         */
        Step::RefPtr< IfcLightIntensityDistribution > createIfcLightIntensityDistribution();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightIntensityDistribution *cloneIfcLightIntensityDistribution(ExpressDataSet *expressDataSet, const IfcLightIntensityDistribution &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcLightIntensityDistribution *cloneIfcLightIntensityDistribution(const IfcLightIntensityDistribution &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLightSource *getIfcLightSource(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcLightSource *arg);
        /**
         */
        Step::RefPtr< IfcLightSource > createIfcLightSource();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightSource *cloneIfcLightSource(ExpressDataSet *expressDataSet, const IfcLightSource &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcLightSource *cloneIfcLightSource(const IfcLightSource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcLightSourceAmbient *getIfcLightSourceAmbient(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcLightSourceAmbient *arg);
        /**
         */
        Step::RefPtr< IfcLightSourceAmbient > createIfcLightSourceAmbient();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightSourceAmbient *cloneIfcLightSourceAmbient(ExpressDataSet *expressDataSet, const IfcLightSourceAmbient &obj, const CopyOp &copyop);
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
        bool remove(IfcLightSourceDirectional *arg);
        /**
         */
        Step::RefPtr< IfcLightSourceDirectional > createIfcLightSourceDirectional();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightSourceDirectional *cloneIfcLightSourceDirectional(ExpressDataSet *expressDataSet, const IfcLightSourceDirectional &obj, const CopyOp &copyop);
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
        bool remove(IfcLightSourceGoniometric *arg);
        /**
         */
        Step::RefPtr< IfcLightSourceGoniometric > createIfcLightSourceGoniometric();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightSourceGoniometric *cloneIfcLightSourceGoniometric(ExpressDataSet *expressDataSet, const IfcLightSourceGoniometric &obj, const CopyOp &copyop);
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
        bool remove(IfcLightSourcePositional *arg);
        /**
         */
        Step::RefPtr< IfcLightSourcePositional > createIfcLightSourcePositional();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightSourcePositional *cloneIfcLightSourcePositional(ExpressDataSet *expressDataSet, const IfcLightSourcePositional &obj, const CopyOp &copyop);
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
        bool remove(IfcLightSourceSpot *arg);
        /**
         */
        Step::RefPtr< IfcLightSourceSpot > createIfcLightSourceSpot();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLightSourceSpot *cloneIfcLightSourceSpot(ExpressDataSet *expressDataSet, const IfcLightSourceSpot &obj, const CopyOp &copyop);
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
        bool remove(IfcLine *arg);
        /**
         */
        Step::RefPtr< IfcLine > createIfcLine();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLine *cloneIfcLine(ExpressDataSet *expressDataSet, const IfcLine &obj, const CopyOp &copyop);
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
        bool remove(IfcLinearDimension *arg);
        /**
         */
        Step::RefPtr< IfcLinearDimension > createIfcLinearDimension();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLinearDimension *cloneIfcLinearDimension(ExpressDataSet *expressDataSet, const IfcLinearDimension &obj, const CopyOp &copyop);
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
        bool remove(IfcLocalPlacement *arg);
        /**
         */
        Step::RefPtr< IfcLocalPlacement > createIfcLocalPlacement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLocalPlacement *cloneIfcLocalPlacement(ExpressDataSet *expressDataSet, const IfcLocalPlacement &obj, const CopyOp &copyop);
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
        bool remove(IfcLocalTime *arg);
        /**
         */
        Step::RefPtr< IfcLocalTime > createIfcLocalTime();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLocalTime *cloneIfcLocalTime(ExpressDataSet *expressDataSet, const IfcLocalTime &obj, const CopyOp &copyop);
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
        bool remove(IfcLoop *arg);
        /**
         */
        Step::RefPtr< IfcLoop > createIfcLoop();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcLoop *cloneIfcLoop(ExpressDataSet *expressDataSet, const IfcLoop &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcLoop *cloneIfcLoop(const IfcLoop &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcManifoldSolidBrep *getIfcManifoldSolidBrep(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcManifoldSolidBrep *arg);
        /**
         */
        Step::RefPtr< IfcManifoldSolidBrep > createIfcManifoldSolidBrep();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcManifoldSolidBrep *cloneIfcManifoldSolidBrep(ExpressDataSet *expressDataSet, const IfcManifoldSolidBrep &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcManifoldSolidBrep *cloneIfcManifoldSolidBrep(const IfcManifoldSolidBrep &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMappedItem *getIfcMappedItem(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcMappedItem *arg);
        /**
         */
        Step::RefPtr< IfcMappedItem > createIfcMappedItem();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMappedItem *cloneIfcMappedItem(ExpressDataSet *expressDataSet, const IfcMappedItem &obj, const CopyOp &copyop);
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
        bool remove(IfcMaterial *arg);
        /**
         */
        Step::RefPtr< IfcMaterial > createIfcMaterial();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterial *cloneIfcMaterial(ExpressDataSet *expressDataSet, const IfcMaterial &obj, const CopyOp &copyop);
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
        bool remove(IfcMaterialClassificationRelationship *arg);
        /**
         */
        Step::RefPtr< IfcMaterialClassificationRelationship > createIfcMaterialClassificationRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialClassificationRelationship *cloneIfcMaterialClassificationRelationship(ExpressDataSet *expressDataSet, const IfcMaterialClassificationRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcMaterialDefinitionRepresentation *arg);
        /**
         */
        Step::RefPtr< IfcMaterialDefinitionRepresentation > createIfcMaterialDefinitionRepresentation();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialDefinitionRepresentation *cloneIfcMaterialDefinitionRepresentation(ExpressDataSet *expressDataSet, const IfcMaterialDefinitionRepresentation &obj, const CopyOp &copyop);
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
        bool remove(IfcMaterialLayer *arg);
        /**
         */
        Step::RefPtr< IfcMaterialLayer > createIfcMaterialLayer();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialLayer *cloneIfcMaterialLayer(ExpressDataSet *expressDataSet, const IfcMaterialLayer &obj, const CopyOp &copyop);
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
        bool remove(IfcMaterialLayerSet *arg);
        /**
         */
        Step::RefPtr< IfcMaterialLayerSet > createIfcMaterialLayerSet();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialLayerSet *cloneIfcMaterialLayerSet(ExpressDataSet *expressDataSet, const IfcMaterialLayerSet &obj, const CopyOp &copyop);
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
        bool remove(IfcMaterialLayerSetUsage *arg);
        /**
         */
        Step::RefPtr< IfcMaterialLayerSetUsage > createIfcMaterialLayerSetUsage();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialLayerSetUsage *cloneIfcMaterialLayerSetUsage(ExpressDataSet *expressDataSet, const IfcMaterialLayerSetUsage &obj, const CopyOp &copyop);
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
        bool remove(IfcMaterialList *arg);
        /**
         */
        Step::RefPtr< IfcMaterialList > createIfcMaterialList();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialList *cloneIfcMaterialList(ExpressDataSet *expressDataSet, const IfcMaterialList &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcMaterialList *cloneIfcMaterialList(const IfcMaterialList &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMaterialProperties *getIfcMaterialProperties(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcMaterialProperties *arg);
        /**
         */
        Step::RefPtr< IfcMaterialProperties > createIfcMaterialProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMaterialProperties *cloneIfcMaterialProperties(ExpressDataSet *expressDataSet, const IfcMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcMaterialProperties *cloneIfcMaterialProperties(const IfcMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcMeasureWithUnit *getIfcMeasureWithUnit(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcMeasureWithUnit *arg);
        /**
         */
        Step::RefPtr< IfcMeasureWithUnit > createIfcMeasureWithUnit();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMeasureWithUnit *cloneIfcMeasureWithUnit(ExpressDataSet *expressDataSet, const IfcMeasureWithUnit &obj, const CopyOp &copyop);
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
        bool remove(IfcMechanicalConcreteMaterialProperties *arg);
        /**
         */
        Step::RefPtr< IfcMechanicalConcreteMaterialProperties > createIfcMechanicalConcreteMaterialProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMechanicalConcreteMaterialProperties *cloneIfcMechanicalConcreteMaterialProperties(ExpressDataSet *expressDataSet, const IfcMechanicalConcreteMaterialProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcMechanicalFastener *arg);
        /**
         */
        Step::RefPtr< IfcMechanicalFastener > createIfcMechanicalFastener();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMechanicalFastener *cloneIfcMechanicalFastener(ExpressDataSet *expressDataSet, const IfcMechanicalFastener &obj, const CopyOp &copyop);
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
        bool remove(IfcMechanicalFastenerType *arg);
        /**
         */
        Step::RefPtr< IfcMechanicalFastenerType > createIfcMechanicalFastenerType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMechanicalFastenerType *cloneIfcMechanicalFastenerType(ExpressDataSet *expressDataSet, const IfcMechanicalFastenerType &obj, const CopyOp &copyop);
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
        bool remove(IfcMechanicalMaterialProperties *arg);
        /**
         */
        Step::RefPtr< IfcMechanicalMaterialProperties > createIfcMechanicalMaterialProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMechanicalMaterialProperties *cloneIfcMechanicalMaterialProperties(ExpressDataSet *expressDataSet, const IfcMechanicalMaterialProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcMechanicalSteelMaterialProperties *arg);
        /**
         */
        Step::RefPtr< IfcMechanicalSteelMaterialProperties > createIfcMechanicalSteelMaterialProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMechanicalSteelMaterialProperties *cloneIfcMechanicalSteelMaterialProperties(ExpressDataSet *expressDataSet, const IfcMechanicalSteelMaterialProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcMember *arg);
        /**
         */
        Step::RefPtr< IfcMember > createIfcMember();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMember *cloneIfcMember(ExpressDataSet *expressDataSet, const IfcMember &obj, const CopyOp &copyop);
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
        bool remove(IfcMemberType *arg);
        /**
         */
        Step::RefPtr< IfcMemberType > createIfcMemberType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMemberType *cloneIfcMemberType(ExpressDataSet *expressDataSet, const IfcMemberType &obj, const CopyOp &copyop);
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
        bool remove(IfcMetric *arg);
        /**
         */
        Step::RefPtr< IfcMetric > createIfcMetric();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMetric *cloneIfcMetric(ExpressDataSet *expressDataSet, const IfcMetric &obj, const CopyOp &copyop);
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
        bool remove(IfcMonetaryUnit *arg);
        /**
         */
        Step::RefPtr< IfcMonetaryUnit > createIfcMonetaryUnit();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMonetaryUnit *cloneIfcMonetaryUnit(ExpressDataSet *expressDataSet, const IfcMonetaryUnit &obj, const CopyOp &copyop);
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
        bool remove(IfcMotorConnectionType *arg);
        /**
         */
        Step::RefPtr< IfcMotorConnectionType > createIfcMotorConnectionType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMotorConnectionType *cloneIfcMotorConnectionType(ExpressDataSet *expressDataSet, const IfcMotorConnectionType &obj, const CopyOp &copyop);
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
        bool remove(IfcMove *arg);
        /**
         */
        Step::RefPtr< IfcMove > createIfcMove();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcMove *cloneIfcMove(ExpressDataSet *expressDataSet, const IfcMove &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcMove *cloneIfcMove(const IfcMove &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcNamedUnit *getIfcNamedUnit(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcNamedUnit *arg);
        /**
         */
        Step::RefPtr< IfcNamedUnit > createIfcNamedUnit();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcNamedUnit *cloneIfcNamedUnit(ExpressDataSet *expressDataSet, const IfcNamedUnit &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcNamedUnit *cloneIfcNamedUnit(const IfcNamedUnit &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcObject *getIfcObject(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcObject *arg);
        /**
         */
        Step::RefPtr< IfcObject > createIfcObject();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcObject *cloneIfcObject(ExpressDataSet *expressDataSet, const IfcObject &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcObject *cloneIfcObject(const IfcObject &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcObjectDefinition *getIfcObjectDefinition(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcObjectDefinition *arg);
        /**
         */
        Step::RefPtr< IfcObjectDefinition > createIfcObjectDefinition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcObjectDefinition *cloneIfcObjectDefinition(ExpressDataSet *expressDataSet, const IfcObjectDefinition &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcObjectDefinition *cloneIfcObjectDefinition(const IfcObjectDefinition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcObjectPlacement *getIfcObjectPlacement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcObjectPlacement *arg);
        /**
         */
        Step::RefPtr< IfcObjectPlacement > createIfcObjectPlacement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcObjectPlacement *cloneIfcObjectPlacement(ExpressDataSet *expressDataSet, const IfcObjectPlacement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcObjectPlacement *cloneIfcObjectPlacement(const IfcObjectPlacement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcObjective *getIfcObjective(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcObjective *arg);
        /**
         */
        Step::RefPtr< IfcObjective > createIfcObjective();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcObjective *cloneIfcObjective(ExpressDataSet *expressDataSet, const IfcObjective &obj, const CopyOp &copyop);
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
        bool remove(IfcOccupant *arg);
        /**
         */
        Step::RefPtr< IfcOccupant > createIfcOccupant();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOccupant *cloneIfcOccupant(ExpressDataSet *expressDataSet, const IfcOccupant &obj, const CopyOp &copyop);
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
        bool remove(IfcOffsetCurve2D *arg);
        /**
         */
        Step::RefPtr< IfcOffsetCurve2D > createIfcOffsetCurve2D();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOffsetCurve2D *cloneIfcOffsetCurve2D(ExpressDataSet *expressDataSet, const IfcOffsetCurve2D &obj, const CopyOp &copyop);
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
        bool remove(IfcOffsetCurve3D *arg);
        /**
         */
        Step::RefPtr< IfcOffsetCurve3D > createIfcOffsetCurve3D();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOffsetCurve3D *cloneIfcOffsetCurve3D(ExpressDataSet *expressDataSet, const IfcOffsetCurve3D &obj, const CopyOp &copyop);
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
        bool remove(IfcOneDirectionRepeatFactor *arg);
        /**
         */
        Step::RefPtr< IfcOneDirectionRepeatFactor > createIfcOneDirectionRepeatFactor();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOneDirectionRepeatFactor *cloneIfcOneDirectionRepeatFactor(ExpressDataSet *expressDataSet, const IfcOneDirectionRepeatFactor &obj, const CopyOp &copyop);
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
        bool remove(IfcOpenShell *arg);
        /**
         */
        Step::RefPtr< IfcOpenShell > createIfcOpenShell();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOpenShell *cloneIfcOpenShell(ExpressDataSet *expressDataSet, const IfcOpenShell &obj, const CopyOp &copyop);
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
        bool remove(IfcOpeningElement *arg);
        /**
         */
        Step::RefPtr< IfcOpeningElement > createIfcOpeningElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOpeningElement *cloneIfcOpeningElement(ExpressDataSet *expressDataSet, const IfcOpeningElement &obj, const CopyOp &copyop);
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
        bool remove(IfcOpticalMaterialProperties *arg);
        /**
         */
        Step::RefPtr< IfcOpticalMaterialProperties > createIfcOpticalMaterialProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOpticalMaterialProperties *cloneIfcOpticalMaterialProperties(ExpressDataSet *expressDataSet, const IfcOpticalMaterialProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcOrderAction *arg);
        /**
         */
        Step::RefPtr< IfcOrderAction > createIfcOrderAction();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOrderAction *cloneIfcOrderAction(ExpressDataSet *expressDataSet, const IfcOrderAction &obj, const CopyOp &copyop);
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
        bool remove(IfcOrganization *arg);
        /**
         */
        Step::RefPtr< IfcOrganization > createIfcOrganization();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOrganization *cloneIfcOrganization(ExpressDataSet *expressDataSet, const IfcOrganization &obj, const CopyOp &copyop);
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
        bool remove(IfcOrganizationRelationship *arg);
        /**
         */
        Step::RefPtr< IfcOrganizationRelationship > createIfcOrganizationRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOrganizationRelationship *cloneIfcOrganizationRelationship(ExpressDataSet *expressDataSet, const IfcOrganizationRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcOrientedEdge *arg);
        /**
         */
        Step::RefPtr< IfcOrientedEdge > createIfcOrientedEdge();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOrientedEdge *cloneIfcOrientedEdge(ExpressDataSet *expressDataSet, const IfcOrientedEdge &obj, const CopyOp &copyop);
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
        bool remove(IfcOutletType *arg);
        /**
         */
        Step::RefPtr< IfcOutletType > createIfcOutletType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOutletType *cloneIfcOutletType(ExpressDataSet *expressDataSet, const IfcOutletType &obj, const CopyOp &copyop);
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
        bool remove(IfcOwnerHistory *arg);
        /**
         */
        Step::RefPtr< IfcOwnerHistory > createIfcOwnerHistory();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcOwnerHistory *cloneIfcOwnerHistory(ExpressDataSet *expressDataSet, const IfcOwnerHistory &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcOwnerHistory *cloneIfcOwnerHistory(const IfcOwnerHistory &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcParameterizedProfileDef *getIfcParameterizedProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcParameterizedProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcParameterizedProfileDef > createIfcParameterizedProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcParameterizedProfileDef *cloneIfcParameterizedProfileDef(ExpressDataSet *expressDataSet, const IfcParameterizedProfileDef &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcParameterizedProfileDef *cloneIfcParameterizedProfileDef(const IfcParameterizedProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPath *getIfcPath(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPath *arg);
        /**
         */
        Step::RefPtr< IfcPath > createIfcPath();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPath *cloneIfcPath(ExpressDataSet *expressDataSet, const IfcPath &obj, const CopyOp &copyop);
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
        bool remove(IfcPerformanceHistory *arg);
        /**
         */
        Step::RefPtr< IfcPerformanceHistory > createIfcPerformanceHistory();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPerformanceHistory *cloneIfcPerformanceHistory(ExpressDataSet *expressDataSet, const IfcPerformanceHistory &obj, const CopyOp &copyop);
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
        bool remove(IfcPermeableCoveringProperties *arg);
        /**
         */
        Step::RefPtr< IfcPermeableCoveringProperties > createIfcPermeableCoveringProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPermeableCoveringProperties *cloneIfcPermeableCoveringProperties(ExpressDataSet *expressDataSet, const IfcPermeableCoveringProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcPermit *arg);
        /**
         */
        Step::RefPtr< IfcPermit > createIfcPermit();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPermit *cloneIfcPermit(ExpressDataSet *expressDataSet, const IfcPermit &obj, const CopyOp &copyop);
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
        bool remove(IfcPerson *arg);
        /**
         */
        Step::RefPtr< IfcPerson > createIfcPerson();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPerson *cloneIfcPerson(ExpressDataSet *expressDataSet, const IfcPerson &obj, const CopyOp &copyop);
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
        bool remove(IfcPersonAndOrganization *arg);
        /**
         */
        Step::RefPtr< IfcPersonAndOrganization > createIfcPersonAndOrganization();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPersonAndOrganization *cloneIfcPersonAndOrganization(ExpressDataSet *expressDataSet, const IfcPersonAndOrganization &obj, const CopyOp &copyop);
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
        bool remove(IfcPhysicalComplexQuantity *arg);
        /**
         */
        Step::RefPtr< IfcPhysicalComplexQuantity > createIfcPhysicalComplexQuantity();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPhysicalComplexQuantity *cloneIfcPhysicalComplexQuantity(ExpressDataSet *expressDataSet, const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPhysicalComplexQuantity *cloneIfcPhysicalComplexQuantity(const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPhysicalQuantity *getIfcPhysicalQuantity(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPhysicalQuantity *arg);
        /**
         */
        Step::RefPtr< IfcPhysicalQuantity > createIfcPhysicalQuantity();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPhysicalQuantity *cloneIfcPhysicalQuantity(ExpressDataSet *expressDataSet, const IfcPhysicalQuantity &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPhysicalQuantity *cloneIfcPhysicalQuantity(const IfcPhysicalQuantity &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPhysicalSimpleQuantity *getIfcPhysicalSimpleQuantity(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPhysicalSimpleQuantity *arg);
        /**
         */
        Step::RefPtr< IfcPhysicalSimpleQuantity > createIfcPhysicalSimpleQuantity();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPhysicalSimpleQuantity *cloneIfcPhysicalSimpleQuantity(ExpressDataSet *expressDataSet, const IfcPhysicalSimpleQuantity &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPhysicalSimpleQuantity *cloneIfcPhysicalSimpleQuantity(const IfcPhysicalSimpleQuantity &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPile *getIfcPile(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPile *arg);
        /**
         */
        Step::RefPtr< IfcPile > createIfcPile();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPile *cloneIfcPile(ExpressDataSet *expressDataSet, const IfcPile &obj, const CopyOp &copyop);
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
        bool remove(IfcPipeFittingType *arg);
        /**
         */
        Step::RefPtr< IfcPipeFittingType > createIfcPipeFittingType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPipeFittingType *cloneIfcPipeFittingType(ExpressDataSet *expressDataSet, const IfcPipeFittingType &obj, const CopyOp &copyop);
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
        bool remove(IfcPipeSegmentType *arg);
        /**
         */
        Step::RefPtr< IfcPipeSegmentType > createIfcPipeSegmentType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPipeSegmentType *cloneIfcPipeSegmentType(ExpressDataSet *expressDataSet, const IfcPipeSegmentType &obj, const CopyOp &copyop);
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
        bool remove(IfcPixelTexture *arg);
        /**
         */
        Step::RefPtr< IfcPixelTexture > createIfcPixelTexture();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPixelTexture *cloneIfcPixelTexture(ExpressDataSet *expressDataSet, const IfcPixelTexture &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPixelTexture *cloneIfcPixelTexture(const IfcPixelTexture &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPlacement *getIfcPlacement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPlacement *arg);
        /**
         */
        Step::RefPtr< IfcPlacement > createIfcPlacement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPlacement *cloneIfcPlacement(ExpressDataSet *expressDataSet, const IfcPlacement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPlacement *cloneIfcPlacement(const IfcPlacement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPlanarBox *getIfcPlanarBox(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPlanarBox *arg);
        /**
         */
        Step::RefPtr< IfcPlanarBox > createIfcPlanarBox();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPlanarBox *cloneIfcPlanarBox(ExpressDataSet *expressDataSet, const IfcPlanarBox &obj, const CopyOp &copyop);
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
        bool remove(IfcPlanarExtent *arg);
        /**
         */
        Step::RefPtr< IfcPlanarExtent > createIfcPlanarExtent();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPlanarExtent *cloneIfcPlanarExtent(ExpressDataSet *expressDataSet, const IfcPlanarExtent &obj, const CopyOp &copyop);
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
        bool remove(IfcPlane *arg);
        /**
         */
        Step::RefPtr< IfcPlane > createIfcPlane();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPlane *cloneIfcPlane(ExpressDataSet *expressDataSet, const IfcPlane &obj, const CopyOp &copyop);
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
        bool remove(IfcPlate *arg);
        /**
         */
        Step::RefPtr< IfcPlate > createIfcPlate();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPlate *cloneIfcPlate(ExpressDataSet *expressDataSet, const IfcPlate &obj, const CopyOp &copyop);
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
        bool remove(IfcPlateType *arg);
        /**
         */
        Step::RefPtr< IfcPlateType > createIfcPlateType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPlateType *cloneIfcPlateType(ExpressDataSet *expressDataSet, const IfcPlateType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPlateType *cloneIfcPlateType(const IfcPlateType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPoint *getIfcPoint(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPoint *arg);
        /**
         */
        Step::RefPtr< IfcPoint > createIfcPoint();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPoint *cloneIfcPoint(ExpressDataSet *expressDataSet, const IfcPoint &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPoint *cloneIfcPoint(const IfcPoint &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPointOnCurve *getIfcPointOnCurve(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPointOnCurve *arg);
        /**
         */
        Step::RefPtr< IfcPointOnCurve > createIfcPointOnCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPointOnCurve *cloneIfcPointOnCurve(ExpressDataSet *expressDataSet, const IfcPointOnCurve &obj, const CopyOp &copyop);
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
        bool remove(IfcPointOnSurface *arg);
        /**
         */
        Step::RefPtr< IfcPointOnSurface > createIfcPointOnSurface();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPointOnSurface *cloneIfcPointOnSurface(ExpressDataSet *expressDataSet, const IfcPointOnSurface &obj, const CopyOp &copyop);
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
        bool remove(IfcPolyLoop *arg);
        /**
         */
        Step::RefPtr< IfcPolyLoop > createIfcPolyLoop();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPolyLoop *cloneIfcPolyLoop(ExpressDataSet *expressDataSet, const IfcPolyLoop &obj, const CopyOp &copyop);
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
        bool remove(IfcPolygonalBoundedHalfSpace *arg);
        /**
         */
        Step::RefPtr< IfcPolygonalBoundedHalfSpace > createIfcPolygonalBoundedHalfSpace();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPolygonalBoundedHalfSpace *cloneIfcPolygonalBoundedHalfSpace(ExpressDataSet *expressDataSet, const IfcPolygonalBoundedHalfSpace &obj, const CopyOp &copyop);
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
        bool remove(IfcPolyline *arg);
        /**
         */
        Step::RefPtr< IfcPolyline > createIfcPolyline();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPolyline *cloneIfcPolyline(ExpressDataSet *expressDataSet, const IfcPolyline &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPolyline *cloneIfcPolyline(const IfcPolyline &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPort *getIfcPort(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPort *arg);
        /**
         */
        Step::RefPtr< IfcPort > createIfcPort();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPort *cloneIfcPort(ExpressDataSet *expressDataSet, const IfcPort &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPort *cloneIfcPort(const IfcPort &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPostalAddress *getIfcPostalAddress(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPostalAddress *arg);
        /**
         */
        Step::RefPtr< IfcPostalAddress > createIfcPostalAddress();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPostalAddress *cloneIfcPostalAddress(ExpressDataSet *expressDataSet, const IfcPostalAddress &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPostalAddress *cloneIfcPostalAddress(const IfcPostalAddress &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPreDefinedColour *getIfcPreDefinedColour(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPreDefinedColour *arg);
        /**
         */
        Step::RefPtr< IfcPreDefinedColour > createIfcPreDefinedColour();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPreDefinedColour *cloneIfcPreDefinedColour(ExpressDataSet *expressDataSet, const IfcPreDefinedColour &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPreDefinedColour *cloneIfcPreDefinedColour(const IfcPreDefinedColour &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPreDefinedCurveFont *getIfcPreDefinedCurveFont(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPreDefinedCurveFont *arg);
        /**
         */
        Step::RefPtr< IfcPreDefinedCurveFont > createIfcPreDefinedCurveFont();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPreDefinedCurveFont *cloneIfcPreDefinedCurveFont(ExpressDataSet *expressDataSet, const IfcPreDefinedCurveFont &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPreDefinedCurveFont *cloneIfcPreDefinedCurveFont(const IfcPreDefinedCurveFont &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPreDefinedDimensionSymbol *getIfcPreDefinedDimensionSymbol(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPreDefinedDimensionSymbol *arg);
        /**
         */
        Step::RefPtr< IfcPreDefinedDimensionSymbol > createIfcPreDefinedDimensionSymbol();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPreDefinedDimensionSymbol *cloneIfcPreDefinedDimensionSymbol(ExpressDataSet *expressDataSet, const IfcPreDefinedDimensionSymbol &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPreDefinedDimensionSymbol *cloneIfcPreDefinedDimensionSymbol(const IfcPreDefinedDimensionSymbol &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPreDefinedItem *getIfcPreDefinedItem(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPreDefinedItem *arg);
        /**
         */
        Step::RefPtr< IfcPreDefinedItem > createIfcPreDefinedItem();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPreDefinedItem *cloneIfcPreDefinedItem(ExpressDataSet *expressDataSet, const IfcPreDefinedItem &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPreDefinedItem *cloneIfcPreDefinedItem(const IfcPreDefinedItem &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPreDefinedPointMarkerSymbol *getIfcPreDefinedPointMarkerSymbol(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPreDefinedPointMarkerSymbol *arg);
        /**
         */
        Step::RefPtr< IfcPreDefinedPointMarkerSymbol > createIfcPreDefinedPointMarkerSymbol();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPreDefinedPointMarkerSymbol *cloneIfcPreDefinedPointMarkerSymbol(ExpressDataSet *expressDataSet, const IfcPreDefinedPointMarkerSymbol &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPreDefinedPointMarkerSymbol *cloneIfcPreDefinedPointMarkerSymbol(const IfcPreDefinedPointMarkerSymbol &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPreDefinedSymbol *getIfcPreDefinedSymbol(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPreDefinedSymbol *arg);
        /**
         */
        Step::RefPtr< IfcPreDefinedSymbol > createIfcPreDefinedSymbol();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPreDefinedSymbol *cloneIfcPreDefinedSymbol(ExpressDataSet *expressDataSet, const IfcPreDefinedSymbol &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPreDefinedSymbol *cloneIfcPreDefinedSymbol(const IfcPreDefinedSymbol &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPreDefinedTerminatorSymbol *getIfcPreDefinedTerminatorSymbol(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPreDefinedTerminatorSymbol *arg);
        /**
         */
        Step::RefPtr< IfcPreDefinedTerminatorSymbol > createIfcPreDefinedTerminatorSymbol();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPreDefinedTerminatorSymbol *cloneIfcPreDefinedTerminatorSymbol(ExpressDataSet *expressDataSet, const IfcPreDefinedTerminatorSymbol &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPreDefinedTerminatorSymbol *cloneIfcPreDefinedTerminatorSymbol(const IfcPreDefinedTerminatorSymbol &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPreDefinedTextFont *getIfcPreDefinedTextFont(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPreDefinedTextFont *arg);
        /**
         */
        Step::RefPtr< IfcPreDefinedTextFont > createIfcPreDefinedTextFont();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPreDefinedTextFont *cloneIfcPreDefinedTextFont(ExpressDataSet *expressDataSet, const IfcPreDefinedTextFont &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPreDefinedTextFont *cloneIfcPreDefinedTextFont(const IfcPreDefinedTextFont &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPresentationLayerAssignment *getIfcPresentationLayerAssignment(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPresentationLayerAssignment *arg);
        /**
         */
        Step::RefPtr< IfcPresentationLayerAssignment > createIfcPresentationLayerAssignment();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPresentationLayerAssignment *cloneIfcPresentationLayerAssignment(ExpressDataSet *expressDataSet, const IfcPresentationLayerAssignment &obj, const CopyOp &copyop);
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
        bool remove(IfcPresentationLayerWithStyle *arg);
        /**
         */
        Step::RefPtr< IfcPresentationLayerWithStyle > createIfcPresentationLayerWithStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPresentationLayerWithStyle *cloneIfcPresentationLayerWithStyle(ExpressDataSet *expressDataSet, const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPresentationLayerWithStyle *cloneIfcPresentationLayerWithStyle(const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPresentationStyle *getIfcPresentationStyle(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPresentationStyle *arg);
        /**
         */
        Step::RefPtr< IfcPresentationStyle > createIfcPresentationStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPresentationStyle *cloneIfcPresentationStyle(ExpressDataSet *expressDataSet, const IfcPresentationStyle &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPresentationStyle *cloneIfcPresentationStyle(const IfcPresentationStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPresentationStyleAssignment *getIfcPresentationStyleAssignment(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPresentationStyleAssignment *arg);
        /**
         */
        Step::RefPtr< IfcPresentationStyleAssignment > createIfcPresentationStyleAssignment();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPresentationStyleAssignment *cloneIfcPresentationStyleAssignment(ExpressDataSet *expressDataSet, const IfcPresentationStyleAssignment &obj, const CopyOp &copyop);
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
        bool remove(IfcProcedure *arg);
        /**
         */
        Step::RefPtr< IfcProcedure > createIfcProcedure();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProcedure *cloneIfcProcedure(ExpressDataSet *expressDataSet, const IfcProcedure &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcProcedure *cloneIfcProcedure(const IfcProcedure &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProcess *getIfcProcess(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcProcess *arg);
        /**
         */
        Step::RefPtr< IfcProcess > createIfcProcess();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProcess *cloneIfcProcess(ExpressDataSet *expressDataSet, const IfcProcess &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcProcess *cloneIfcProcess(const IfcProcess &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProduct *getIfcProduct(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcProduct *arg);
        /**
         */
        Step::RefPtr< IfcProduct > createIfcProduct();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProduct *cloneIfcProduct(ExpressDataSet *expressDataSet, const IfcProduct &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcProduct *cloneIfcProduct(const IfcProduct &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProductDefinitionShape *getIfcProductDefinitionShape(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcProductDefinitionShape *arg);
        /**
         */
        Step::RefPtr< IfcProductDefinitionShape > createIfcProductDefinitionShape();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProductDefinitionShape *cloneIfcProductDefinitionShape(ExpressDataSet *expressDataSet, const IfcProductDefinitionShape &obj, const CopyOp &copyop);
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
        bool remove(IfcProductRepresentation *arg);
        /**
         */
        Step::RefPtr< IfcProductRepresentation > createIfcProductRepresentation();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProductRepresentation *cloneIfcProductRepresentation(ExpressDataSet *expressDataSet, const IfcProductRepresentation &obj, const CopyOp &copyop);
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
        bool remove(IfcProductsOfCombustionProperties *arg);
        /**
         */
        Step::RefPtr< IfcProductsOfCombustionProperties > createIfcProductsOfCombustionProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProductsOfCombustionProperties *cloneIfcProductsOfCombustionProperties(ExpressDataSet *expressDataSet, const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcProductsOfCombustionProperties *cloneIfcProductsOfCombustionProperties(const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProfileDef *getIfcProfileDef(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcProfileDef > createIfcProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProfileDef *cloneIfcProfileDef(ExpressDataSet *expressDataSet, const IfcProfileDef &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcProfileDef *cloneIfcProfileDef(const IfcProfileDef &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProfileProperties *getIfcProfileProperties(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcProfileProperties *arg);
        /**
         */
        Step::RefPtr< IfcProfileProperties > createIfcProfileProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProfileProperties *cloneIfcProfileProperties(ExpressDataSet *expressDataSet, const IfcProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcProfileProperties *cloneIfcProfileProperties(const IfcProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProject *getIfcProject(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcProject *arg);
        /**
         */
        Step::RefPtr< IfcProject > createIfcProject();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProject *cloneIfcProject(ExpressDataSet *expressDataSet, const IfcProject &obj, const CopyOp &copyop);
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
        bool remove(IfcProjectOrder *arg);
        /**
         */
        Step::RefPtr< IfcProjectOrder > createIfcProjectOrder();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProjectOrder *cloneIfcProjectOrder(ExpressDataSet *expressDataSet, const IfcProjectOrder &obj, const CopyOp &copyop);
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
        bool remove(IfcProjectOrderRecord *arg);
        /**
         */
        Step::RefPtr< IfcProjectOrderRecord > createIfcProjectOrderRecord();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProjectOrderRecord *cloneIfcProjectOrderRecord(ExpressDataSet *expressDataSet, const IfcProjectOrderRecord &obj, const CopyOp &copyop);
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
        bool remove(IfcProjectionCurve *arg);
        /**
         */
        Step::RefPtr< IfcProjectionCurve > createIfcProjectionCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProjectionCurve *cloneIfcProjectionCurve(ExpressDataSet *expressDataSet, const IfcProjectionCurve &obj, const CopyOp &copyop);
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
        bool remove(IfcProjectionElement *arg);
        /**
         */
        Step::RefPtr< IfcProjectionElement > createIfcProjectionElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProjectionElement *cloneIfcProjectionElement(ExpressDataSet *expressDataSet, const IfcProjectionElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcProjectionElement *cloneIfcProjectionElement(const IfcProjectionElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcProperty *getIfcProperty(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcProperty *arg);
        /**
         */
        Step::RefPtr< IfcProperty > createIfcProperty();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProperty *cloneIfcProperty(ExpressDataSet *expressDataSet, const IfcProperty &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcProperty *cloneIfcProperty(const IfcProperty &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertyBoundedValue *getIfcPropertyBoundedValue(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPropertyBoundedValue *arg);
        /**
         */
        Step::RefPtr< IfcPropertyBoundedValue > createIfcPropertyBoundedValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyBoundedValue *cloneIfcPropertyBoundedValue(ExpressDataSet *expressDataSet, const IfcPropertyBoundedValue &obj, const CopyOp &copyop);
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
        bool remove(IfcPropertyConstraintRelationship *arg);
        /**
         */
        Step::RefPtr< IfcPropertyConstraintRelationship > createIfcPropertyConstraintRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyConstraintRelationship *cloneIfcPropertyConstraintRelationship(ExpressDataSet *expressDataSet, const IfcPropertyConstraintRelationship &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertyConstraintRelationship *cloneIfcPropertyConstraintRelationship(const IfcPropertyConstraintRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertyDefinition *getIfcPropertyDefinition(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPropertyDefinition *arg);
        /**
         */
        Step::RefPtr< IfcPropertyDefinition > createIfcPropertyDefinition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyDefinition *cloneIfcPropertyDefinition(ExpressDataSet *expressDataSet, const IfcPropertyDefinition &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertyDefinition *cloneIfcPropertyDefinition(const IfcPropertyDefinition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertyDependencyRelationship *getIfcPropertyDependencyRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPropertyDependencyRelationship *arg);
        /**
         */
        Step::RefPtr< IfcPropertyDependencyRelationship > createIfcPropertyDependencyRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyDependencyRelationship *cloneIfcPropertyDependencyRelationship(ExpressDataSet *expressDataSet, const IfcPropertyDependencyRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcPropertyEnumeratedValue *arg);
        /**
         */
        Step::RefPtr< IfcPropertyEnumeratedValue > createIfcPropertyEnumeratedValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyEnumeratedValue *cloneIfcPropertyEnumeratedValue(ExpressDataSet *expressDataSet, const IfcPropertyEnumeratedValue &obj, const CopyOp &copyop);
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
        bool remove(IfcPropertyEnumeration *arg);
        /**
         */
        Step::RefPtr< IfcPropertyEnumeration > createIfcPropertyEnumeration();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyEnumeration *cloneIfcPropertyEnumeration(ExpressDataSet *expressDataSet, const IfcPropertyEnumeration &obj, const CopyOp &copyop);
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
        bool remove(IfcPropertyListValue *arg);
        /**
         */
        Step::RefPtr< IfcPropertyListValue > createIfcPropertyListValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyListValue *cloneIfcPropertyListValue(ExpressDataSet *expressDataSet, const IfcPropertyListValue &obj, const CopyOp &copyop);
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
        bool remove(IfcPropertyReferenceValue *arg);
        /**
         */
        Step::RefPtr< IfcPropertyReferenceValue > createIfcPropertyReferenceValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyReferenceValue *cloneIfcPropertyReferenceValue(ExpressDataSet *expressDataSet, const IfcPropertyReferenceValue &obj, const CopyOp &copyop);
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
        bool remove(IfcPropertySet *arg);
        /**
         */
        Step::RefPtr< IfcPropertySet > createIfcPropertySet();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertySet *cloneIfcPropertySet(ExpressDataSet *expressDataSet, const IfcPropertySet &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertySet *cloneIfcPropertySet(const IfcPropertySet &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertySetDefinition *getIfcPropertySetDefinition(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPropertySetDefinition *arg);
        /**
         */
        Step::RefPtr< IfcPropertySetDefinition > createIfcPropertySetDefinition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertySetDefinition *cloneIfcPropertySetDefinition(ExpressDataSet *expressDataSet, const IfcPropertySetDefinition &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcPropertySetDefinition *cloneIfcPropertySetDefinition(const IfcPropertySetDefinition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcPropertySingleValue *getIfcPropertySingleValue(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcPropertySingleValue *arg);
        /**
         */
        Step::RefPtr< IfcPropertySingleValue > createIfcPropertySingleValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertySingleValue *cloneIfcPropertySingleValue(ExpressDataSet *expressDataSet, const IfcPropertySingleValue &obj, const CopyOp &copyop);
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
        bool remove(IfcPropertyTableValue *arg);
        /**
         */
        Step::RefPtr< IfcPropertyTableValue > createIfcPropertyTableValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPropertyTableValue *cloneIfcPropertyTableValue(ExpressDataSet *expressDataSet, const IfcPropertyTableValue &obj, const CopyOp &copyop);
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
        bool remove(IfcProtectiveDeviceType *arg);
        /**
         */
        Step::RefPtr< IfcProtectiveDeviceType > createIfcProtectiveDeviceType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProtectiveDeviceType *cloneIfcProtectiveDeviceType(ExpressDataSet *expressDataSet, const IfcProtectiveDeviceType &obj, const CopyOp &copyop);
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
        bool remove(IfcProxy *arg);
        /**
         */
        Step::RefPtr< IfcProxy > createIfcProxy();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcProxy *cloneIfcProxy(ExpressDataSet *expressDataSet, const IfcProxy &obj, const CopyOp &copyop);
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
        bool remove(IfcPumpType *arg);
        /**
         */
        Step::RefPtr< IfcPumpType > createIfcPumpType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcPumpType *cloneIfcPumpType(ExpressDataSet *expressDataSet, const IfcPumpType &obj, const CopyOp &copyop);
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
        bool remove(IfcQuantityArea *arg);
        /**
         */
        Step::RefPtr< IfcQuantityArea > createIfcQuantityArea();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityArea *cloneIfcQuantityArea(ExpressDataSet *expressDataSet, const IfcQuantityArea &obj, const CopyOp &copyop);
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
        bool remove(IfcQuantityCount *arg);
        /**
         */
        Step::RefPtr< IfcQuantityCount > createIfcQuantityCount();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityCount *cloneIfcQuantityCount(ExpressDataSet *expressDataSet, const IfcQuantityCount &obj, const CopyOp &copyop);
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
        bool remove(IfcQuantityLength *arg);
        /**
         */
        Step::RefPtr< IfcQuantityLength > createIfcQuantityLength();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityLength *cloneIfcQuantityLength(ExpressDataSet *expressDataSet, const IfcQuantityLength &obj, const CopyOp &copyop);
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
        bool remove(IfcQuantityTime *arg);
        /**
         */
        Step::RefPtr< IfcQuantityTime > createIfcQuantityTime();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityTime *cloneIfcQuantityTime(ExpressDataSet *expressDataSet, const IfcQuantityTime &obj, const CopyOp &copyop);
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
        bool remove(IfcQuantityVolume *arg);
        /**
         */
        Step::RefPtr< IfcQuantityVolume > createIfcQuantityVolume();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityVolume *cloneIfcQuantityVolume(ExpressDataSet *expressDataSet, const IfcQuantityVolume &obj, const CopyOp &copyop);
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
        bool remove(IfcQuantityWeight *arg);
        /**
         */
        Step::RefPtr< IfcQuantityWeight > createIfcQuantityWeight();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcQuantityWeight *cloneIfcQuantityWeight(ExpressDataSet *expressDataSet, const IfcQuantityWeight &obj, const CopyOp &copyop);
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
        bool remove(IfcRadiusDimension *arg);
        /**
         */
        Step::RefPtr< IfcRadiusDimension > createIfcRadiusDimension();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRadiusDimension *cloneIfcRadiusDimension(ExpressDataSet *expressDataSet, const IfcRadiusDimension &obj, const CopyOp &copyop);
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
        bool remove(IfcRailing *arg);
        /**
         */
        Step::RefPtr< IfcRailing > createIfcRailing();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRailing *cloneIfcRailing(ExpressDataSet *expressDataSet, const IfcRailing &obj, const CopyOp &copyop);
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
        bool remove(IfcRailingType *arg);
        /**
         */
        Step::RefPtr< IfcRailingType > createIfcRailingType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRailingType *cloneIfcRailingType(ExpressDataSet *expressDataSet, const IfcRailingType &obj, const CopyOp &copyop);
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
        bool remove(IfcRamp *arg);
        /**
         */
        Step::RefPtr< IfcRamp > createIfcRamp();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRamp *cloneIfcRamp(ExpressDataSet *expressDataSet, const IfcRamp &obj, const CopyOp &copyop);
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
        bool remove(IfcRampFlight *arg);
        /**
         */
        Step::RefPtr< IfcRampFlight > createIfcRampFlight();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRampFlight *cloneIfcRampFlight(ExpressDataSet *expressDataSet, const IfcRampFlight &obj, const CopyOp &copyop);
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
        bool remove(IfcRampFlightType *arg);
        /**
         */
        Step::RefPtr< IfcRampFlightType > createIfcRampFlightType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRampFlightType *cloneIfcRampFlightType(ExpressDataSet *expressDataSet, const IfcRampFlightType &obj, const CopyOp &copyop);
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
        bool remove(IfcRationalBezierCurve *arg);
        /**
         */
        Step::RefPtr< IfcRationalBezierCurve > createIfcRationalBezierCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRationalBezierCurve *cloneIfcRationalBezierCurve(ExpressDataSet *expressDataSet, const IfcRationalBezierCurve &obj, const CopyOp &copyop);
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
        bool remove(IfcRectangleHollowProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcRectangleHollowProfileDef > createIfcRectangleHollowProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRectangleHollowProfileDef *cloneIfcRectangleHollowProfileDef(ExpressDataSet *expressDataSet, const IfcRectangleHollowProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcRectangleProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcRectangleProfileDef > createIfcRectangleProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRectangleProfileDef *cloneIfcRectangleProfileDef(ExpressDataSet *expressDataSet, const IfcRectangleProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcRectangularPyramid *arg);
        /**
         */
        Step::RefPtr< IfcRectangularPyramid > createIfcRectangularPyramid();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRectangularPyramid *cloneIfcRectangularPyramid(ExpressDataSet *expressDataSet, const IfcRectangularPyramid &obj, const CopyOp &copyop);
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
        bool remove(IfcRectangularTrimmedSurface *arg);
        /**
         */
        Step::RefPtr< IfcRectangularTrimmedSurface > createIfcRectangularTrimmedSurface();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRectangularTrimmedSurface *cloneIfcRectangularTrimmedSurface(ExpressDataSet *expressDataSet, const IfcRectangularTrimmedSurface &obj, const CopyOp &copyop);
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
        bool remove(IfcReferencesValueDocument *arg);
        /**
         */
        Step::RefPtr< IfcReferencesValueDocument > createIfcReferencesValueDocument();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReferencesValueDocument *cloneIfcReferencesValueDocument(ExpressDataSet *expressDataSet, const IfcReferencesValueDocument &obj, const CopyOp &copyop);
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
        bool remove(IfcRegularTimeSeries *arg);
        /**
         */
        Step::RefPtr< IfcRegularTimeSeries > createIfcRegularTimeSeries();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRegularTimeSeries *cloneIfcRegularTimeSeries(ExpressDataSet *expressDataSet, const IfcRegularTimeSeries &obj, const CopyOp &copyop);
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
        bool remove(IfcReinforcementBarProperties *arg);
        /**
         */
        Step::RefPtr< IfcReinforcementBarProperties > createIfcReinforcementBarProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReinforcementBarProperties *cloneIfcReinforcementBarProperties(ExpressDataSet *expressDataSet, const IfcReinforcementBarProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcReinforcementDefinitionProperties *arg);
        /**
         */
        Step::RefPtr< IfcReinforcementDefinitionProperties > createIfcReinforcementDefinitionProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReinforcementDefinitionProperties *cloneIfcReinforcementDefinitionProperties(ExpressDataSet *expressDataSet, const IfcReinforcementDefinitionProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcReinforcingBar *arg);
        /**
         */
        Step::RefPtr< IfcReinforcingBar > createIfcReinforcingBar();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReinforcingBar *cloneIfcReinforcingBar(ExpressDataSet *expressDataSet, const IfcReinforcingBar &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcReinforcingBar *cloneIfcReinforcingBar(const IfcReinforcingBar &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReinforcingElement *getIfcReinforcingElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcReinforcingElement *arg);
        /**
         */
        Step::RefPtr< IfcReinforcingElement > createIfcReinforcingElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReinforcingElement *cloneIfcReinforcingElement(ExpressDataSet *expressDataSet, const IfcReinforcingElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcReinforcingElement *cloneIfcReinforcingElement(const IfcReinforcingElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReinforcingMesh *getIfcReinforcingMesh(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcReinforcingMesh *arg);
        /**
         */
        Step::RefPtr< IfcReinforcingMesh > createIfcReinforcingMesh();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReinforcingMesh *cloneIfcReinforcingMesh(ExpressDataSet *expressDataSet, const IfcReinforcingMesh &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAggregates *arg);
        /**
         */
        Step::RefPtr< IfcRelAggregates > createIfcRelAggregates();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAggregates *cloneIfcRelAggregates(ExpressDataSet *expressDataSet, const IfcRelAggregates &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAggregates *cloneIfcRelAggregates(const IfcRelAggregates &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssigns *getIfcRelAssigns(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRelAssigns *arg);
        /**
         */
        Step::RefPtr< IfcRelAssigns > createIfcRelAssigns();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssigns *cloneIfcRelAssigns(ExpressDataSet *expressDataSet, const IfcRelAssigns &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssigns *cloneIfcRelAssigns(const IfcRelAssigns &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelAssignsTasks *getIfcRelAssignsTasks(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRelAssignsTasks *arg);
        /**
         */
        Step::RefPtr< IfcRelAssignsTasks > createIfcRelAssignsTasks();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsTasks *cloneIfcRelAssignsTasks(ExpressDataSet *expressDataSet, const IfcRelAssignsTasks &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssignsToActor *arg);
        /**
         */
        Step::RefPtr< IfcRelAssignsToActor > createIfcRelAssignsToActor();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToActor *cloneIfcRelAssignsToActor(ExpressDataSet *expressDataSet, const IfcRelAssignsToActor &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssignsToControl *arg);
        /**
         */
        Step::RefPtr< IfcRelAssignsToControl > createIfcRelAssignsToControl();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToControl *cloneIfcRelAssignsToControl(ExpressDataSet *expressDataSet, const IfcRelAssignsToControl &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssignsToGroup *arg);
        /**
         */
        Step::RefPtr< IfcRelAssignsToGroup > createIfcRelAssignsToGroup();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToGroup *cloneIfcRelAssignsToGroup(ExpressDataSet *expressDataSet, const IfcRelAssignsToGroup &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssignsToProcess *arg);
        /**
         */
        Step::RefPtr< IfcRelAssignsToProcess > createIfcRelAssignsToProcess();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToProcess *cloneIfcRelAssignsToProcess(ExpressDataSet *expressDataSet, const IfcRelAssignsToProcess &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssignsToProduct *arg);
        /**
         */
        Step::RefPtr< IfcRelAssignsToProduct > createIfcRelAssignsToProduct();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToProduct *cloneIfcRelAssignsToProduct(ExpressDataSet *expressDataSet, const IfcRelAssignsToProduct &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssignsToProjectOrder *arg);
        /**
         */
        Step::RefPtr< IfcRelAssignsToProjectOrder > createIfcRelAssignsToProjectOrder();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToProjectOrder *cloneIfcRelAssignsToProjectOrder(ExpressDataSet *expressDataSet, const IfcRelAssignsToProjectOrder &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssignsToResource *arg);
        /**
         */
        Step::RefPtr< IfcRelAssignsToResource > createIfcRelAssignsToResource();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssignsToResource *cloneIfcRelAssignsToResource(ExpressDataSet *expressDataSet, const IfcRelAssignsToResource &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssociates *arg);
        /**
         */
        Step::RefPtr< IfcRelAssociates > createIfcRelAssociates();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociates *cloneIfcRelAssociates(ExpressDataSet *expressDataSet, const IfcRelAssociates &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssociatesAppliedValue *arg);
        /**
         */
        Step::RefPtr< IfcRelAssociatesAppliedValue > createIfcRelAssociatesAppliedValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesAppliedValue *cloneIfcRelAssociatesAppliedValue(ExpressDataSet *expressDataSet, const IfcRelAssociatesAppliedValue &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssociatesApproval *arg);
        /**
         */
        Step::RefPtr< IfcRelAssociatesApproval > createIfcRelAssociatesApproval();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesApproval *cloneIfcRelAssociatesApproval(ExpressDataSet *expressDataSet, const IfcRelAssociatesApproval &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssociatesClassification *arg);
        /**
         */
        Step::RefPtr< IfcRelAssociatesClassification > createIfcRelAssociatesClassification();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesClassification *cloneIfcRelAssociatesClassification(ExpressDataSet *expressDataSet, const IfcRelAssociatesClassification &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssociatesConstraint *arg);
        /**
         */
        Step::RefPtr< IfcRelAssociatesConstraint > createIfcRelAssociatesConstraint();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesConstraint *cloneIfcRelAssociatesConstraint(ExpressDataSet *expressDataSet, const IfcRelAssociatesConstraint &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssociatesDocument *arg);
        /**
         */
        Step::RefPtr< IfcRelAssociatesDocument > createIfcRelAssociatesDocument();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesDocument *cloneIfcRelAssociatesDocument(ExpressDataSet *expressDataSet, const IfcRelAssociatesDocument &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssociatesLibrary *arg);
        /**
         */
        Step::RefPtr< IfcRelAssociatesLibrary > createIfcRelAssociatesLibrary();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesLibrary *cloneIfcRelAssociatesLibrary(ExpressDataSet *expressDataSet, const IfcRelAssociatesLibrary &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssociatesMaterial *arg);
        /**
         */
        Step::RefPtr< IfcRelAssociatesMaterial > createIfcRelAssociatesMaterial();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesMaterial *cloneIfcRelAssociatesMaterial(ExpressDataSet *expressDataSet, const IfcRelAssociatesMaterial &obj, const CopyOp &copyop);
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
        bool remove(IfcRelAssociatesProfileProperties *arg);
        /**
         */
        Step::RefPtr< IfcRelAssociatesProfileProperties > createIfcRelAssociatesProfileProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelAssociatesProfileProperties *cloneIfcRelAssociatesProfileProperties(ExpressDataSet *expressDataSet, const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelAssociatesProfileProperties *cloneIfcRelAssociatesProfileProperties(const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelConnects *getIfcRelConnects(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRelConnects *arg);
        /**
         */
        Step::RefPtr< IfcRelConnects > createIfcRelConnects();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnects *cloneIfcRelConnects(ExpressDataSet *expressDataSet, const IfcRelConnects &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelConnects *cloneIfcRelConnects(const IfcRelConnects &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelConnectsElements *getIfcRelConnectsElements(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRelConnectsElements *arg);
        /**
         */
        Step::RefPtr< IfcRelConnectsElements > createIfcRelConnectsElements();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsElements *cloneIfcRelConnectsElements(ExpressDataSet *expressDataSet, const IfcRelConnectsElements &obj, const CopyOp &copyop);
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
        bool remove(IfcRelConnectsPathElements *arg);
        /**
         */
        Step::RefPtr< IfcRelConnectsPathElements > createIfcRelConnectsPathElements();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsPathElements *cloneIfcRelConnectsPathElements(ExpressDataSet *expressDataSet, const IfcRelConnectsPathElements &obj, const CopyOp &copyop);
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
        bool remove(IfcRelConnectsPortToElement *arg);
        /**
         */
        Step::RefPtr< IfcRelConnectsPortToElement > createIfcRelConnectsPortToElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsPortToElement *cloneIfcRelConnectsPortToElement(ExpressDataSet *expressDataSet, const IfcRelConnectsPortToElement &obj, const CopyOp &copyop);
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
        bool remove(IfcRelConnectsPorts *arg);
        /**
         */
        Step::RefPtr< IfcRelConnectsPorts > createIfcRelConnectsPorts();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsPorts *cloneIfcRelConnectsPorts(ExpressDataSet *expressDataSet, const IfcRelConnectsPorts &obj, const CopyOp &copyop);
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
        bool remove(IfcRelConnectsStructuralActivity *arg);
        /**
         */
        Step::RefPtr< IfcRelConnectsStructuralActivity > createIfcRelConnectsStructuralActivity();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsStructuralActivity *cloneIfcRelConnectsStructuralActivity(ExpressDataSet *expressDataSet, const IfcRelConnectsStructuralActivity &obj, const CopyOp &copyop);
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
        bool remove(IfcRelConnectsStructuralElement *arg);
        /**
         */
        Step::RefPtr< IfcRelConnectsStructuralElement > createIfcRelConnectsStructuralElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsStructuralElement *cloneIfcRelConnectsStructuralElement(ExpressDataSet *expressDataSet, const IfcRelConnectsStructuralElement &obj, const CopyOp &copyop);
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
        bool remove(IfcRelConnectsStructuralMember *arg);
        /**
         */
        Step::RefPtr< IfcRelConnectsStructuralMember > createIfcRelConnectsStructuralMember();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsStructuralMember *cloneIfcRelConnectsStructuralMember(ExpressDataSet *expressDataSet, const IfcRelConnectsStructuralMember &obj, const CopyOp &copyop);
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
        bool remove(IfcRelConnectsWithEccentricity *arg);
        /**
         */
        Step::RefPtr< IfcRelConnectsWithEccentricity > createIfcRelConnectsWithEccentricity();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsWithEccentricity *cloneIfcRelConnectsWithEccentricity(ExpressDataSet *expressDataSet, const IfcRelConnectsWithEccentricity &obj, const CopyOp &copyop);
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
        bool remove(IfcRelConnectsWithRealizingElements *arg);
        /**
         */
        Step::RefPtr< IfcRelConnectsWithRealizingElements > createIfcRelConnectsWithRealizingElements();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelConnectsWithRealizingElements *cloneIfcRelConnectsWithRealizingElements(ExpressDataSet *expressDataSet, const IfcRelConnectsWithRealizingElements &obj, const CopyOp &copyop);
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
        bool remove(IfcRelContainedInSpatialStructure *arg);
        /**
         */
        Step::RefPtr< IfcRelContainedInSpatialStructure > createIfcRelContainedInSpatialStructure();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelContainedInSpatialStructure *cloneIfcRelContainedInSpatialStructure(ExpressDataSet *expressDataSet, const IfcRelContainedInSpatialStructure &obj, const CopyOp &copyop);
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
        bool remove(IfcRelCoversBldgElements *arg);
        /**
         */
        Step::RefPtr< IfcRelCoversBldgElements > createIfcRelCoversBldgElements();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelCoversBldgElements *cloneIfcRelCoversBldgElements(ExpressDataSet *expressDataSet, const IfcRelCoversBldgElements &obj, const CopyOp &copyop);
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
        bool remove(IfcRelCoversSpaces *arg);
        /**
         */
        Step::RefPtr< IfcRelCoversSpaces > createIfcRelCoversSpaces();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelCoversSpaces *cloneIfcRelCoversSpaces(ExpressDataSet *expressDataSet, const IfcRelCoversSpaces &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelCoversSpaces *cloneIfcRelCoversSpaces(const IfcRelCoversSpaces &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelDecomposes *getIfcRelDecomposes(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRelDecomposes *arg);
        /**
         */
        Step::RefPtr< IfcRelDecomposes > createIfcRelDecomposes();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelDecomposes *cloneIfcRelDecomposes(ExpressDataSet *expressDataSet, const IfcRelDecomposes &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelDecomposes *cloneIfcRelDecomposes(const IfcRelDecomposes &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelDefines *getIfcRelDefines(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRelDefines *arg);
        /**
         */
        Step::RefPtr< IfcRelDefines > createIfcRelDefines();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelDefines *cloneIfcRelDefines(ExpressDataSet *expressDataSet, const IfcRelDefines &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelDefines *cloneIfcRelDefines(const IfcRelDefines &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelDefinesByProperties *getIfcRelDefinesByProperties(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRelDefinesByProperties *arg);
        /**
         */
        Step::RefPtr< IfcRelDefinesByProperties > createIfcRelDefinesByProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelDefinesByProperties *cloneIfcRelDefinesByProperties(ExpressDataSet *expressDataSet, const IfcRelDefinesByProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcRelDefinesByType *arg);
        /**
         */
        Step::RefPtr< IfcRelDefinesByType > createIfcRelDefinesByType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelDefinesByType *cloneIfcRelDefinesByType(ExpressDataSet *expressDataSet, const IfcRelDefinesByType &obj, const CopyOp &copyop);
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
        bool remove(IfcRelFillsElement *arg);
        /**
         */
        Step::RefPtr< IfcRelFillsElement > createIfcRelFillsElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelFillsElement *cloneIfcRelFillsElement(ExpressDataSet *expressDataSet, const IfcRelFillsElement &obj, const CopyOp &copyop);
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
        bool remove(IfcRelFlowControlElements *arg);
        /**
         */
        Step::RefPtr< IfcRelFlowControlElements > createIfcRelFlowControlElements();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelFlowControlElements *cloneIfcRelFlowControlElements(ExpressDataSet *expressDataSet, const IfcRelFlowControlElements &obj, const CopyOp &copyop);
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
        bool remove(IfcRelInteractionRequirements *arg);
        /**
         */
        Step::RefPtr< IfcRelInteractionRequirements > createIfcRelInteractionRequirements();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelInteractionRequirements *cloneIfcRelInteractionRequirements(ExpressDataSet *expressDataSet, const IfcRelInteractionRequirements &obj, const CopyOp &copyop);
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
        bool remove(IfcRelNests *arg);
        /**
         */
        Step::RefPtr< IfcRelNests > createIfcRelNests();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelNests *cloneIfcRelNests(ExpressDataSet *expressDataSet, const IfcRelNests &obj, const CopyOp &copyop);
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
        bool remove(IfcRelOccupiesSpaces *arg);
        /**
         */
        Step::RefPtr< IfcRelOccupiesSpaces > createIfcRelOccupiesSpaces();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelOccupiesSpaces *cloneIfcRelOccupiesSpaces(ExpressDataSet *expressDataSet, const IfcRelOccupiesSpaces &obj, const CopyOp &copyop);
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
        bool remove(IfcRelOverridesProperties *arg);
        /**
         */
        Step::RefPtr< IfcRelOverridesProperties > createIfcRelOverridesProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelOverridesProperties *cloneIfcRelOverridesProperties(ExpressDataSet *expressDataSet, const IfcRelOverridesProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcRelProjectsElement *arg);
        /**
         */
        Step::RefPtr< IfcRelProjectsElement > createIfcRelProjectsElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelProjectsElement *cloneIfcRelProjectsElement(ExpressDataSet *expressDataSet, const IfcRelProjectsElement &obj, const CopyOp &copyop);
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
        bool remove(IfcRelReferencedInSpatialStructure *arg);
        /**
         */
        Step::RefPtr< IfcRelReferencedInSpatialStructure > createIfcRelReferencedInSpatialStructure();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelReferencedInSpatialStructure *cloneIfcRelReferencedInSpatialStructure(ExpressDataSet *expressDataSet, const IfcRelReferencedInSpatialStructure &obj, const CopyOp &copyop);
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
        bool remove(IfcRelSchedulesCostItems *arg);
        /**
         */
        Step::RefPtr< IfcRelSchedulesCostItems > createIfcRelSchedulesCostItems();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelSchedulesCostItems *cloneIfcRelSchedulesCostItems(ExpressDataSet *expressDataSet, const IfcRelSchedulesCostItems &obj, const CopyOp &copyop);
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
        bool remove(IfcRelSequence *arg);
        /**
         */
        Step::RefPtr< IfcRelSequence > createIfcRelSequence();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelSequence *cloneIfcRelSequence(ExpressDataSet *expressDataSet, const IfcRelSequence &obj, const CopyOp &copyop);
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
        bool remove(IfcRelServicesBuildings *arg);
        /**
         */
        Step::RefPtr< IfcRelServicesBuildings > createIfcRelServicesBuildings();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelServicesBuildings *cloneIfcRelServicesBuildings(ExpressDataSet *expressDataSet, const IfcRelServicesBuildings &obj, const CopyOp &copyop);
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
        bool remove(IfcRelSpaceBoundary *arg);
        /**
         */
        Step::RefPtr< IfcRelSpaceBoundary > createIfcRelSpaceBoundary();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelSpaceBoundary *cloneIfcRelSpaceBoundary(ExpressDataSet *expressDataSet, const IfcRelSpaceBoundary &obj, const CopyOp &copyop);
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
        bool remove(IfcRelVoidsElement *arg);
        /**
         */
        Step::RefPtr< IfcRelVoidsElement > createIfcRelVoidsElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelVoidsElement *cloneIfcRelVoidsElement(ExpressDataSet *expressDataSet, const IfcRelVoidsElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelVoidsElement *cloneIfcRelVoidsElement(const IfcRelVoidsElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelationship *getIfcRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRelationship *arg);
        /**
         */
        Step::RefPtr< IfcRelationship > createIfcRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelationship *cloneIfcRelationship(ExpressDataSet *expressDataSet, const IfcRelationship &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRelationship *cloneIfcRelationship(const IfcRelationship &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRelaxation *getIfcRelaxation(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRelaxation *arg);
        /**
         */
        Step::RefPtr< IfcRelaxation > createIfcRelaxation();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRelaxation *cloneIfcRelaxation(ExpressDataSet *expressDataSet, const IfcRelaxation &obj, const CopyOp &copyop);
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
        bool remove(IfcRepresentation *arg);
        /**
         */
        Step::RefPtr< IfcRepresentation > createIfcRepresentation();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRepresentation *cloneIfcRepresentation(ExpressDataSet *expressDataSet, const IfcRepresentation &obj, const CopyOp &copyop);
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
        bool remove(IfcRepresentationContext *arg);
        /**
         */
        Step::RefPtr< IfcRepresentationContext > createIfcRepresentationContext();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRepresentationContext *cloneIfcRepresentationContext(ExpressDataSet *expressDataSet, const IfcRepresentationContext &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRepresentationContext *cloneIfcRepresentationContext(const IfcRepresentationContext &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRepresentationItem *getIfcRepresentationItem(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRepresentationItem *arg);
        /**
         */
        Step::RefPtr< IfcRepresentationItem > createIfcRepresentationItem();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRepresentationItem *cloneIfcRepresentationItem(ExpressDataSet *expressDataSet, const IfcRepresentationItem &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRepresentationItem *cloneIfcRepresentationItem(const IfcRepresentationItem &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRepresentationMap *getIfcRepresentationMap(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRepresentationMap *arg);
        /**
         */
        Step::RefPtr< IfcRepresentationMap > createIfcRepresentationMap();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRepresentationMap *cloneIfcRepresentationMap(ExpressDataSet *expressDataSet, const IfcRepresentationMap &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRepresentationMap *cloneIfcRepresentationMap(const IfcRepresentationMap &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcResource *getIfcResource(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcResource *arg);
        /**
         */
        Step::RefPtr< IfcResource > createIfcResource();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcResource *cloneIfcResource(ExpressDataSet *expressDataSet, const IfcResource &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcResource *cloneIfcResource(const IfcResource &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRevolvedAreaSolid *getIfcRevolvedAreaSolid(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRevolvedAreaSolid *arg);
        /**
         */
        Step::RefPtr< IfcRevolvedAreaSolid > createIfcRevolvedAreaSolid();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRevolvedAreaSolid *cloneIfcRevolvedAreaSolid(ExpressDataSet *expressDataSet, const IfcRevolvedAreaSolid &obj, const CopyOp &copyop);
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
        bool remove(IfcRibPlateProfileProperties *arg);
        /**
         */
        Step::RefPtr< IfcRibPlateProfileProperties > createIfcRibPlateProfileProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRibPlateProfileProperties *cloneIfcRibPlateProfileProperties(ExpressDataSet *expressDataSet, const IfcRibPlateProfileProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcRightCircularCone *arg);
        /**
         */
        Step::RefPtr< IfcRightCircularCone > createIfcRightCircularCone();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRightCircularCone *cloneIfcRightCircularCone(ExpressDataSet *expressDataSet, const IfcRightCircularCone &obj, const CopyOp &copyop);
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
        bool remove(IfcRightCircularCylinder *arg);
        /**
         */
        Step::RefPtr< IfcRightCircularCylinder > createIfcRightCircularCylinder();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRightCircularCylinder *cloneIfcRightCircularCylinder(ExpressDataSet *expressDataSet, const IfcRightCircularCylinder &obj, const CopyOp &copyop);
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
        bool remove(IfcRoof *arg);
        /**
         */
        Step::RefPtr< IfcRoof > createIfcRoof();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRoof *cloneIfcRoof(ExpressDataSet *expressDataSet, const IfcRoof &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRoof *cloneIfcRoof(const IfcRoof &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRoot *getIfcRoot(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRoot *arg);
        /**
         */
        Step::RefPtr< IfcRoot > createIfcRoot();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRoot *cloneIfcRoot(ExpressDataSet *expressDataSet, const IfcRoot &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcRoot *cloneIfcRoot(const IfcRoot &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcRoundedEdgeFeature *getIfcRoundedEdgeFeature(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcRoundedEdgeFeature *arg);
        /**
         */
        Step::RefPtr< IfcRoundedEdgeFeature > createIfcRoundedEdgeFeature();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRoundedEdgeFeature *cloneIfcRoundedEdgeFeature(ExpressDataSet *expressDataSet, const IfcRoundedEdgeFeature &obj, const CopyOp &copyop);
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
        bool remove(IfcRoundedRectangleProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcRoundedRectangleProfileDef > createIfcRoundedRectangleProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcRoundedRectangleProfileDef *cloneIfcRoundedRectangleProfileDef(ExpressDataSet *expressDataSet, const IfcRoundedRectangleProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcSIUnit *arg);
        /**
         */
        Step::RefPtr< IfcSIUnit > createIfcSIUnit();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSIUnit *cloneIfcSIUnit(ExpressDataSet *expressDataSet, const IfcSIUnit &obj, const CopyOp &copyop);
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
        bool remove(IfcSanitaryTerminalType *arg);
        /**
         */
        Step::RefPtr< IfcSanitaryTerminalType > createIfcSanitaryTerminalType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSanitaryTerminalType *cloneIfcSanitaryTerminalType(ExpressDataSet *expressDataSet, const IfcSanitaryTerminalType &obj, const CopyOp &copyop);
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
        bool remove(IfcScheduleTimeControl *arg);
        /**
         */
        Step::RefPtr< IfcScheduleTimeControl > createIfcScheduleTimeControl();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcScheduleTimeControl *cloneIfcScheduleTimeControl(ExpressDataSet *expressDataSet, const IfcScheduleTimeControl &obj, const CopyOp &copyop);
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
        bool remove(IfcSectionProperties *arg);
        /**
         */
        Step::RefPtr< IfcSectionProperties > createIfcSectionProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSectionProperties *cloneIfcSectionProperties(ExpressDataSet *expressDataSet, const IfcSectionProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcSectionReinforcementProperties *arg);
        /**
         */
        Step::RefPtr< IfcSectionReinforcementProperties > createIfcSectionReinforcementProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSectionReinforcementProperties *cloneIfcSectionReinforcementProperties(ExpressDataSet *expressDataSet, const IfcSectionReinforcementProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcSectionedSpine *arg);
        /**
         */
        Step::RefPtr< IfcSectionedSpine > createIfcSectionedSpine();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSectionedSpine *cloneIfcSectionedSpine(ExpressDataSet *expressDataSet, const IfcSectionedSpine &obj, const CopyOp &copyop);
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
        bool remove(IfcSensorType *arg);
        /**
         */
        Step::RefPtr< IfcSensorType > createIfcSensorType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSensorType *cloneIfcSensorType(ExpressDataSet *expressDataSet, const IfcSensorType &obj, const CopyOp &copyop);
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
        bool remove(IfcServiceLife *arg);
        /**
         */
        Step::RefPtr< IfcServiceLife > createIfcServiceLife();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcServiceLife *cloneIfcServiceLife(ExpressDataSet *expressDataSet, const IfcServiceLife &obj, const CopyOp &copyop);
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
        bool remove(IfcServiceLifeFactor *arg);
        /**
         */
        Step::RefPtr< IfcServiceLifeFactor > createIfcServiceLifeFactor();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcServiceLifeFactor *cloneIfcServiceLifeFactor(ExpressDataSet *expressDataSet, const IfcServiceLifeFactor &obj, const CopyOp &copyop);
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
        bool remove(IfcShapeAspect *arg);
        /**
         */
        Step::RefPtr< IfcShapeAspect > createIfcShapeAspect();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcShapeAspect *cloneIfcShapeAspect(ExpressDataSet *expressDataSet, const IfcShapeAspect &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcShapeAspect *cloneIfcShapeAspect(const IfcShapeAspect &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcShapeModel *getIfcShapeModel(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcShapeModel *arg);
        /**
         */
        Step::RefPtr< IfcShapeModel > createIfcShapeModel();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcShapeModel *cloneIfcShapeModel(ExpressDataSet *expressDataSet, const IfcShapeModel &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcShapeModel *cloneIfcShapeModel(const IfcShapeModel &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcShapeRepresentation *getIfcShapeRepresentation(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcShapeRepresentation *arg);
        /**
         */
        Step::RefPtr< IfcShapeRepresentation > createIfcShapeRepresentation();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcShapeRepresentation *cloneIfcShapeRepresentation(ExpressDataSet *expressDataSet, const IfcShapeRepresentation &obj, const CopyOp &copyop);
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
        bool remove(IfcShellBasedSurfaceModel *arg);
        /**
         */
        Step::RefPtr< IfcShellBasedSurfaceModel > createIfcShellBasedSurfaceModel();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcShellBasedSurfaceModel *cloneIfcShellBasedSurfaceModel(ExpressDataSet *expressDataSet, const IfcShellBasedSurfaceModel &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcShellBasedSurfaceModel *cloneIfcShellBasedSurfaceModel(const IfcShellBasedSurfaceModel &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSimpleProperty *getIfcSimpleProperty(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSimpleProperty *arg);
        /**
         */
        Step::RefPtr< IfcSimpleProperty > createIfcSimpleProperty();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSimpleProperty *cloneIfcSimpleProperty(ExpressDataSet *expressDataSet, const IfcSimpleProperty &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSimpleProperty *cloneIfcSimpleProperty(const IfcSimpleProperty &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSite *getIfcSite(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSite *arg);
        /**
         */
        Step::RefPtr< IfcSite > createIfcSite();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSite *cloneIfcSite(ExpressDataSet *expressDataSet, const IfcSite &obj, const CopyOp &copyop);
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
        bool remove(IfcSlab *arg);
        /**
         */
        Step::RefPtr< IfcSlab > createIfcSlab();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSlab *cloneIfcSlab(ExpressDataSet *expressDataSet, const IfcSlab &obj, const CopyOp &copyop);
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
        bool remove(IfcSlabType *arg);
        /**
         */
        Step::RefPtr< IfcSlabType > createIfcSlabType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSlabType *cloneIfcSlabType(ExpressDataSet *expressDataSet, const IfcSlabType &obj, const CopyOp &copyop);
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
        bool remove(IfcSlippageConnectionCondition *arg);
        /**
         */
        Step::RefPtr< IfcSlippageConnectionCondition > createIfcSlippageConnectionCondition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSlippageConnectionCondition *cloneIfcSlippageConnectionCondition(ExpressDataSet *expressDataSet, const IfcSlippageConnectionCondition &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSlippageConnectionCondition *cloneIfcSlippageConnectionCondition(const IfcSlippageConnectionCondition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSolidModel *getIfcSolidModel(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSolidModel *arg);
        /**
         */
        Step::RefPtr< IfcSolidModel > createIfcSolidModel();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSolidModel *cloneIfcSolidModel(ExpressDataSet *expressDataSet, const IfcSolidModel &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSolidModel *cloneIfcSolidModel(const IfcSolidModel &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSoundProperties *getIfcSoundProperties(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSoundProperties *arg);
        /**
         */
        Step::RefPtr< IfcSoundProperties > createIfcSoundProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSoundProperties *cloneIfcSoundProperties(ExpressDataSet *expressDataSet, const IfcSoundProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcSoundValue *arg);
        /**
         */
        Step::RefPtr< IfcSoundValue > createIfcSoundValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSoundValue *cloneIfcSoundValue(ExpressDataSet *expressDataSet, const IfcSoundValue &obj, const CopyOp &copyop);
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
        bool remove(IfcSpace *arg);
        /**
         */
        Step::RefPtr< IfcSpace > createIfcSpace();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpace *cloneIfcSpace(ExpressDataSet *expressDataSet, const IfcSpace &obj, const CopyOp &copyop);
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
        bool remove(IfcSpaceHeaterType *arg);
        /**
         */
        Step::RefPtr< IfcSpaceHeaterType > createIfcSpaceHeaterType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpaceHeaterType *cloneIfcSpaceHeaterType(ExpressDataSet *expressDataSet, const IfcSpaceHeaterType &obj, const CopyOp &copyop);
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
        bool remove(IfcSpaceProgram *arg);
        /**
         */
        Step::RefPtr< IfcSpaceProgram > createIfcSpaceProgram();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpaceProgram *cloneIfcSpaceProgram(ExpressDataSet *expressDataSet, const IfcSpaceProgram &obj, const CopyOp &copyop);
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
        bool remove(IfcSpaceThermalLoadProperties *arg);
        /**
         */
        Step::RefPtr< IfcSpaceThermalLoadProperties > createIfcSpaceThermalLoadProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpaceThermalLoadProperties *cloneIfcSpaceThermalLoadProperties(ExpressDataSet *expressDataSet, const IfcSpaceThermalLoadProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcSpaceType *arg);
        /**
         */
        Step::RefPtr< IfcSpaceType > createIfcSpaceType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpaceType *cloneIfcSpaceType(ExpressDataSet *expressDataSet, const IfcSpaceType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSpaceType *cloneIfcSpaceType(const IfcSpaceType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSpatialStructureElement *getIfcSpatialStructureElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSpatialStructureElement *arg);
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > createIfcSpatialStructureElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpatialStructureElement *cloneIfcSpatialStructureElement(ExpressDataSet *expressDataSet, const IfcSpatialStructureElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSpatialStructureElement *cloneIfcSpatialStructureElement(const IfcSpatialStructureElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSpatialStructureElementType *getIfcSpatialStructureElementType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSpatialStructureElementType *arg);
        /**
         */
        Step::RefPtr< IfcSpatialStructureElementType > createIfcSpatialStructureElementType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSpatialStructureElementType *cloneIfcSpatialStructureElementType(ExpressDataSet *expressDataSet, const IfcSpatialStructureElementType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSpatialStructureElementType *cloneIfcSpatialStructureElementType(const IfcSpatialStructureElementType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSphere *getIfcSphere(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSphere *arg);
        /**
         */
        Step::RefPtr< IfcSphere > createIfcSphere();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSphere *cloneIfcSphere(ExpressDataSet *expressDataSet, const IfcSphere &obj, const CopyOp &copyop);
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
        bool remove(IfcStackTerminalType *arg);
        /**
         */
        Step::RefPtr< IfcStackTerminalType > createIfcStackTerminalType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStackTerminalType *cloneIfcStackTerminalType(ExpressDataSet *expressDataSet, const IfcStackTerminalType &obj, const CopyOp &copyop);
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
        bool remove(IfcStair *arg);
        /**
         */
        Step::RefPtr< IfcStair > createIfcStair();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStair *cloneIfcStair(ExpressDataSet *expressDataSet, const IfcStair &obj, const CopyOp &copyop);
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
        bool remove(IfcStairFlight *arg);
        /**
         */
        Step::RefPtr< IfcStairFlight > createIfcStairFlight();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStairFlight *cloneIfcStairFlight(ExpressDataSet *expressDataSet, const IfcStairFlight &obj, const CopyOp &copyop);
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
        bool remove(IfcStairFlightType *arg);
        /**
         */
        Step::RefPtr< IfcStairFlightType > createIfcStairFlightType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStairFlightType *cloneIfcStairFlightType(ExpressDataSet *expressDataSet, const IfcStairFlightType &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStairFlightType *cloneIfcStairFlightType(const IfcStairFlightType &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralAction *getIfcStructuralAction(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralAction *arg);
        /**
         */
        Step::RefPtr< IfcStructuralAction > createIfcStructuralAction();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralAction *cloneIfcStructuralAction(ExpressDataSet *expressDataSet, const IfcStructuralAction &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralAction *cloneIfcStructuralAction(const IfcStructuralAction &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralActivity *getIfcStructuralActivity(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralActivity *arg);
        /**
         */
        Step::RefPtr< IfcStructuralActivity > createIfcStructuralActivity();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralActivity *cloneIfcStructuralActivity(ExpressDataSet *expressDataSet, const IfcStructuralActivity &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralActivity *cloneIfcStructuralActivity(const IfcStructuralActivity &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralAnalysisModel *getIfcStructuralAnalysisModel(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralAnalysisModel *arg);
        /**
         */
        Step::RefPtr< IfcStructuralAnalysisModel > createIfcStructuralAnalysisModel();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralAnalysisModel *cloneIfcStructuralAnalysisModel(ExpressDataSet *expressDataSet, const IfcStructuralAnalysisModel &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralAnalysisModel *cloneIfcStructuralAnalysisModel(const IfcStructuralAnalysisModel &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralConnection *getIfcStructuralConnection(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralConnection *arg);
        /**
         */
        Step::RefPtr< IfcStructuralConnection > createIfcStructuralConnection();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralConnection *cloneIfcStructuralConnection(ExpressDataSet *expressDataSet, const IfcStructuralConnection &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralConnection *cloneIfcStructuralConnection(const IfcStructuralConnection &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralConnectionCondition *getIfcStructuralConnectionCondition(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralConnectionCondition *arg);
        /**
         */
        Step::RefPtr< IfcStructuralConnectionCondition > createIfcStructuralConnectionCondition();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralConnectionCondition *cloneIfcStructuralConnectionCondition(ExpressDataSet *expressDataSet, const IfcStructuralConnectionCondition &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralConnectionCondition *cloneIfcStructuralConnectionCondition(const IfcStructuralConnectionCondition &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralCurveConnection *getIfcStructuralCurveConnection(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralCurveConnection *arg);
        /**
         */
        Step::RefPtr< IfcStructuralCurveConnection > createIfcStructuralCurveConnection();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralCurveConnection *cloneIfcStructuralCurveConnection(ExpressDataSet *expressDataSet, const IfcStructuralCurveConnection &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralCurveMember *arg);
        /**
         */
        Step::RefPtr< IfcStructuralCurveMember > createIfcStructuralCurveMember();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralCurveMember *cloneIfcStructuralCurveMember(ExpressDataSet *expressDataSet, const IfcStructuralCurveMember &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralCurveMemberVarying *arg);
        /**
         */
        Step::RefPtr< IfcStructuralCurveMemberVarying > createIfcStructuralCurveMemberVarying();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralCurveMemberVarying *cloneIfcStructuralCurveMemberVarying(ExpressDataSet *expressDataSet, const IfcStructuralCurveMemberVarying &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralCurveMemberVarying *cloneIfcStructuralCurveMemberVarying(const IfcStructuralCurveMemberVarying &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralItem *getIfcStructuralItem(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralItem *arg);
        /**
         */
        Step::RefPtr< IfcStructuralItem > createIfcStructuralItem();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralItem *cloneIfcStructuralItem(ExpressDataSet *expressDataSet, const IfcStructuralItem &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralItem *cloneIfcStructuralItem(const IfcStructuralItem &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLinearAction *getIfcStructuralLinearAction(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralLinearAction *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLinearAction > createIfcStructuralLinearAction();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLinearAction *cloneIfcStructuralLinearAction(ExpressDataSet *expressDataSet, const IfcStructuralLinearAction &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralLinearActionVarying *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLinearActionVarying > createIfcStructuralLinearActionVarying();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLinearActionVarying *cloneIfcStructuralLinearActionVarying(ExpressDataSet *expressDataSet, const IfcStructuralLinearActionVarying &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLinearActionVarying *cloneIfcStructuralLinearActionVarying(const IfcStructuralLinearActionVarying &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoad *getIfcStructuralLoad(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralLoad *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLoad > createIfcStructuralLoad();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoad *cloneIfcStructuralLoad(ExpressDataSet *expressDataSet, const IfcStructuralLoad &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoad *cloneIfcStructuralLoad(const IfcStructuralLoad &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoadGroup *getIfcStructuralLoadGroup(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralLoadGroup *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLoadGroup > createIfcStructuralLoadGroup();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadGroup *cloneIfcStructuralLoadGroup(ExpressDataSet *expressDataSet, const IfcStructuralLoadGroup &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralLoadLinearForce *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLoadLinearForce > createIfcStructuralLoadLinearForce();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadLinearForce *cloneIfcStructuralLoadLinearForce(ExpressDataSet *expressDataSet, const IfcStructuralLoadLinearForce &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralLoadPlanarForce *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLoadPlanarForce > createIfcStructuralLoadPlanarForce();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadPlanarForce *cloneIfcStructuralLoadPlanarForce(ExpressDataSet *expressDataSet, const IfcStructuralLoadPlanarForce &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralLoadSingleDisplacement *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLoadSingleDisplacement > createIfcStructuralLoadSingleDisplacement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadSingleDisplacement *cloneIfcStructuralLoadSingleDisplacement(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleDisplacement &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralLoadSingleDisplacementDistortion *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLoadSingleDisplacementDistortion > createIfcStructuralLoadSingleDisplacementDistortion();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadSingleDisplacementDistortion *cloneIfcStructuralLoadSingleDisplacementDistortion(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleDisplacementDistortion &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralLoadSingleForce *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLoadSingleForce > createIfcStructuralLoadSingleForce();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadSingleForce *cloneIfcStructuralLoadSingleForce(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleForce &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralLoadSingleForceWarping *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLoadSingleForceWarping > createIfcStructuralLoadSingleForceWarping();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadSingleForceWarping *cloneIfcStructuralLoadSingleForceWarping(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleForceWarping &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoadSingleForceWarping *cloneIfcStructuralLoadSingleForceWarping(const IfcStructuralLoadSingleForceWarping &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoadStatic *getIfcStructuralLoadStatic(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralLoadStatic *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLoadStatic > createIfcStructuralLoadStatic();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadStatic *cloneIfcStructuralLoadStatic(ExpressDataSet *expressDataSet, const IfcStructuralLoadStatic &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoadStatic *cloneIfcStructuralLoadStatic(const IfcStructuralLoadStatic &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralLoadTemperature *getIfcStructuralLoadTemperature(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralLoadTemperature *arg);
        /**
         */
        Step::RefPtr< IfcStructuralLoadTemperature > createIfcStructuralLoadTemperature();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralLoadTemperature *cloneIfcStructuralLoadTemperature(ExpressDataSet *expressDataSet, const IfcStructuralLoadTemperature &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralLoadTemperature *cloneIfcStructuralLoadTemperature(const IfcStructuralLoadTemperature &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralMember *getIfcStructuralMember(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralMember *arg);
        /**
         */
        Step::RefPtr< IfcStructuralMember > createIfcStructuralMember();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralMember *cloneIfcStructuralMember(ExpressDataSet *expressDataSet, const IfcStructuralMember &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralMember *cloneIfcStructuralMember(const IfcStructuralMember &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralPlanarAction *getIfcStructuralPlanarAction(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralPlanarAction *arg);
        /**
         */
        Step::RefPtr< IfcStructuralPlanarAction > createIfcStructuralPlanarAction();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralPlanarAction *cloneIfcStructuralPlanarAction(ExpressDataSet *expressDataSet, const IfcStructuralPlanarAction &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralPlanarActionVarying *arg);
        /**
         */
        Step::RefPtr< IfcStructuralPlanarActionVarying > createIfcStructuralPlanarActionVarying();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralPlanarActionVarying *cloneIfcStructuralPlanarActionVarying(ExpressDataSet *expressDataSet, const IfcStructuralPlanarActionVarying &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralPointAction *arg);
        /**
         */
        Step::RefPtr< IfcStructuralPointAction > createIfcStructuralPointAction();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralPointAction *cloneIfcStructuralPointAction(ExpressDataSet *expressDataSet, const IfcStructuralPointAction &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralPointConnection *arg);
        /**
         */
        Step::RefPtr< IfcStructuralPointConnection > createIfcStructuralPointConnection();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralPointConnection *cloneIfcStructuralPointConnection(ExpressDataSet *expressDataSet, const IfcStructuralPointConnection &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralPointReaction *arg);
        /**
         */
        Step::RefPtr< IfcStructuralPointReaction > createIfcStructuralPointReaction();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralPointReaction *cloneIfcStructuralPointReaction(ExpressDataSet *expressDataSet, const IfcStructuralPointReaction &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralProfileProperties *arg);
        /**
         */
        Step::RefPtr< IfcStructuralProfileProperties > createIfcStructuralProfileProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralProfileProperties *cloneIfcStructuralProfileProperties(ExpressDataSet *expressDataSet, const IfcStructuralProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralProfileProperties *cloneIfcStructuralProfileProperties(const IfcStructuralProfileProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralReaction *getIfcStructuralReaction(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralReaction *arg);
        /**
         */
        Step::RefPtr< IfcStructuralReaction > createIfcStructuralReaction();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralReaction *cloneIfcStructuralReaction(ExpressDataSet *expressDataSet, const IfcStructuralReaction &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuralReaction *cloneIfcStructuralReaction(const IfcStructuralReaction &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStructuralResultGroup *getIfcStructuralResultGroup(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStructuralResultGroup *arg);
        /**
         */
        Step::RefPtr< IfcStructuralResultGroup > createIfcStructuralResultGroup();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralResultGroup *cloneIfcStructuralResultGroup(ExpressDataSet *expressDataSet, const IfcStructuralResultGroup &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralSteelProfileProperties *arg);
        /**
         */
        Step::RefPtr< IfcStructuralSteelProfileProperties > createIfcStructuralSteelProfileProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralSteelProfileProperties *cloneIfcStructuralSteelProfileProperties(ExpressDataSet *expressDataSet, const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralSurfaceConnection *arg);
        /**
         */
        Step::RefPtr< IfcStructuralSurfaceConnection > createIfcStructuralSurfaceConnection();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralSurfaceConnection *cloneIfcStructuralSurfaceConnection(ExpressDataSet *expressDataSet, const IfcStructuralSurfaceConnection &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralSurfaceMember *arg);
        /**
         */
        Step::RefPtr< IfcStructuralSurfaceMember > createIfcStructuralSurfaceMember();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralSurfaceMember *cloneIfcStructuralSurfaceMember(ExpressDataSet *expressDataSet, const IfcStructuralSurfaceMember &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuralSurfaceMemberVarying *arg);
        /**
         */
        Step::RefPtr< IfcStructuralSurfaceMemberVarying > createIfcStructuralSurfaceMemberVarying();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuralSurfaceMemberVarying *cloneIfcStructuralSurfaceMemberVarying(ExpressDataSet *expressDataSet, const IfcStructuralSurfaceMemberVarying &obj, const CopyOp &copyop);
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
        bool remove(IfcStructuredDimensionCallout *arg);
        /**
         */
        Step::RefPtr< IfcStructuredDimensionCallout > createIfcStructuredDimensionCallout();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStructuredDimensionCallout *cloneIfcStructuredDimensionCallout(ExpressDataSet *expressDataSet, const IfcStructuredDimensionCallout &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStructuredDimensionCallout *cloneIfcStructuredDimensionCallout(const IfcStructuredDimensionCallout &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStyleModel *getIfcStyleModel(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStyleModel *arg);
        /**
         */
        Step::RefPtr< IfcStyleModel > createIfcStyleModel();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStyleModel *cloneIfcStyleModel(ExpressDataSet *expressDataSet, const IfcStyleModel &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcStyleModel *cloneIfcStyleModel(const IfcStyleModel &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcStyledItem *getIfcStyledItem(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcStyledItem *arg);
        /**
         */
        Step::RefPtr< IfcStyledItem > createIfcStyledItem();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStyledItem *cloneIfcStyledItem(ExpressDataSet *expressDataSet, const IfcStyledItem &obj, const CopyOp &copyop);
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
        bool remove(IfcStyledRepresentation *arg);
        /**
         */
        Step::RefPtr< IfcStyledRepresentation > createIfcStyledRepresentation();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcStyledRepresentation *cloneIfcStyledRepresentation(ExpressDataSet *expressDataSet, const IfcStyledRepresentation &obj, const CopyOp &copyop);
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
        bool remove(IfcSubContractResource *arg);
        /**
         */
        Step::RefPtr< IfcSubContractResource > createIfcSubContractResource();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSubContractResource *cloneIfcSubContractResource(ExpressDataSet *expressDataSet, const IfcSubContractResource &obj, const CopyOp &copyop);
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
        bool remove(IfcSubedge *arg);
        /**
         */
        Step::RefPtr< IfcSubedge > createIfcSubedge();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSubedge *cloneIfcSubedge(ExpressDataSet *expressDataSet, const IfcSubedge &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSubedge *cloneIfcSubedge(const IfcSubedge &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurface *getIfcSurface(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSurface *arg);
        /**
         */
        Step::RefPtr< IfcSurface > createIfcSurface();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurface *cloneIfcSurface(ExpressDataSet *expressDataSet, const IfcSurface &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurface *cloneIfcSurface(const IfcSurface &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurfaceCurveSweptAreaSolid *getIfcSurfaceCurveSweptAreaSolid(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSurfaceCurveSweptAreaSolid *arg);
        /**
         */
        Step::RefPtr< IfcSurfaceCurveSweptAreaSolid > createIfcSurfaceCurveSweptAreaSolid();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceCurveSweptAreaSolid *cloneIfcSurfaceCurveSweptAreaSolid(ExpressDataSet *expressDataSet, const IfcSurfaceCurveSweptAreaSolid &obj, const CopyOp &copyop);
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
        bool remove(IfcSurfaceOfLinearExtrusion *arg);
        /**
         */
        Step::RefPtr< IfcSurfaceOfLinearExtrusion > createIfcSurfaceOfLinearExtrusion();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceOfLinearExtrusion *cloneIfcSurfaceOfLinearExtrusion(ExpressDataSet *expressDataSet, const IfcSurfaceOfLinearExtrusion &obj, const CopyOp &copyop);
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
        bool remove(IfcSurfaceOfRevolution *arg);
        /**
         */
        Step::RefPtr< IfcSurfaceOfRevolution > createIfcSurfaceOfRevolution();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceOfRevolution *cloneIfcSurfaceOfRevolution(ExpressDataSet *expressDataSet, const IfcSurfaceOfRevolution &obj, const CopyOp &copyop);
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
        bool remove(IfcSurfaceStyle *arg);
        /**
         */
        Step::RefPtr< IfcSurfaceStyle > createIfcSurfaceStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyle *cloneIfcSurfaceStyle(ExpressDataSet *expressDataSet, const IfcSurfaceStyle &obj, const CopyOp &copyop);
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
        bool remove(IfcSurfaceStyleLighting *arg);
        /**
         */
        Step::RefPtr< IfcSurfaceStyleLighting > createIfcSurfaceStyleLighting();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyleLighting *cloneIfcSurfaceStyleLighting(ExpressDataSet *expressDataSet, const IfcSurfaceStyleLighting &obj, const CopyOp &copyop);
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
        bool remove(IfcSurfaceStyleRefraction *arg);
        /**
         */
        Step::RefPtr< IfcSurfaceStyleRefraction > createIfcSurfaceStyleRefraction();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyleRefraction *cloneIfcSurfaceStyleRefraction(ExpressDataSet *expressDataSet, const IfcSurfaceStyleRefraction &obj, const CopyOp &copyop);
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
        bool remove(IfcSurfaceStyleRendering *arg);
        /**
         */
        Step::RefPtr< IfcSurfaceStyleRendering > createIfcSurfaceStyleRendering();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyleRendering *cloneIfcSurfaceStyleRendering(ExpressDataSet *expressDataSet, const IfcSurfaceStyleRendering &obj, const CopyOp &copyop);
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
        bool remove(IfcSurfaceStyleShading *arg);
        /**
         */
        Step::RefPtr< IfcSurfaceStyleShading > createIfcSurfaceStyleShading();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyleShading *cloneIfcSurfaceStyleShading(ExpressDataSet *expressDataSet, const IfcSurfaceStyleShading &obj, const CopyOp &copyop);
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
        bool remove(IfcSurfaceStyleWithTextures *arg);
        /**
         */
        Step::RefPtr< IfcSurfaceStyleWithTextures > createIfcSurfaceStyleWithTextures();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceStyleWithTextures *cloneIfcSurfaceStyleWithTextures(ExpressDataSet *expressDataSet, const IfcSurfaceStyleWithTextures &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurfaceStyleWithTextures *cloneIfcSurfaceStyleWithTextures(const IfcSurfaceStyleWithTextures &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSurfaceTexture *getIfcSurfaceTexture(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSurfaceTexture *arg);
        /**
         */
        Step::RefPtr< IfcSurfaceTexture > createIfcSurfaceTexture();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSurfaceTexture *cloneIfcSurfaceTexture(ExpressDataSet *expressDataSet, const IfcSurfaceTexture &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSurfaceTexture *cloneIfcSurfaceTexture(const IfcSurfaceTexture &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSweptAreaSolid *getIfcSweptAreaSolid(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSweptAreaSolid *arg);
        /**
         */
        Step::RefPtr< IfcSweptAreaSolid > createIfcSweptAreaSolid();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSweptAreaSolid *cloneIfcSweptAreaSolid(ExpressDataSet *expressDataSet, const IfcSweptAreaSolid &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSweptAreaSolid *cloneIfcSweptAreaSolid(const IfcSweptAreaSolid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSweptDiskSolid *getIfcSweptDiskSolid(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSweptDiskSolid *arg);
        /**
         */
        Step::RefPtr< IfcSweptDiskSolid > createIfcSweptDiskSolid();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSweptDiskSolid *cloneIfcSweptDiskSolid(ExpressDataSet *expressDataSet, const IfcSweptDiskSolid &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSweptDiskSolid *cloneIfcSweptDiskSolid(const IfcSweptDiskSolid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSweptSurface *getIfcSweptSurface(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSweptSurface *arg);
        /**
         */
        Step::RefPtr< IfcSweptSurface > createIfcSweptSurface();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSweptSurface *cloneIfcSweptSurface(ExpressDataSet *expressDataSet, const IfcSweptSurface &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcSweptSurface *cloneIfcSweptSurface(const IfcSweptSurface &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcSwitchingDeviceType *getIfcSwitchingDeviceType(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcSwitchingDeviceType *arg);
        /**
         */
        Step::RefPtr< IfcSwitchingDeviceType > createIfcSwitchingDeviceType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSwitchingDeviceType *cloneIfcSwitchingDeviceType(ExpressDataSet *expressDataSet, const IfcSwitchingDeviceType &obj, const CopyOp &copyop);
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
        bool remove(IfcSymbolStyle *arg);
        /**
         */
        Step::RefPtr< IfcSymbolStyle > createIfcSymbolStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSymbolStyle *cloneIfcSymbolStyle(ExpressDataSet *expressDataSet, const IfcSymbolStyle &obj, const CopyOp &copyop);
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
        bool remove(IfcSystem *arg);
        /**
         */
        Step::RefPtr< IfcSystem > createIfcSystem();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSystem *cloneIfcSystem(ExpressDataSet *expressDataSet, const IfcSystem &obj, const CopyOp &copyop);
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
        bool remove(IfcSystemFurnitureElementType *arg);
        /**
         */
        Step::RefPtr< IfcSystemFurnitureElementType > createIfcSystemFurnitureElementType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcSystemFurnitureElementType *cloneIfcSystemFurnitureElementType(ExpressDataSet *expressDataSet, const IfcSystemFurnitureElementType &obj, const CopyOp &copyop);
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
        bool remove(IfcTShapeProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcTShapeProfileDef > createIfcTShapeProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTShapeProfileDef *cloneIfcTShapeProfileDef(ExpressDataSet *expressDataSet, const IfcTShapeProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcTable *arg);
        /**
         */
        Step::RefPtr< IfcTable > createIfcTable();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTable *cloneIfcTable(ExpressDataSet *expressDataSet, const IfcTable &obj, const CopyOp &copyop);
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
        bool remove(IfcTableRow *arg);
        /**
         */
        Step::RefPtr< IfcTableRow > createIfcTableRow();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTableRow *cloneIfcTableRow(ExpressDataSet *expressDataSet, const IfcTableRow &obj, const CopyOp &copyop);
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
        bool remove(IfcTankType *arg);
        /**
         */
        Step::RefPtr< IfcTankType > createIfcTankType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTankType *cloneIfcTankType(ExpressDataSet *expressDataSet, const IfcTankType &obj, const CopyOp &copyop);
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
        bool remove(IfcTask *arg);
        /**
         */
        Step::RefPtr< IfcTask > createIfcTask();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTask *cloneIfcTask(ExpressDataSet *expressDataSet, const IfcTask &obj, const CopyOp &copyop);
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
        bool remove(IfcTelecomAddress *arg);
        /**
         */
        Step::RefPtr< IfcTelecomAddress > createIfcTelecomAddress();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTelecomAddress *cloneIfcTelecomAddress(ExpressDataSet *expressDataSet, const IfcTelecomAddress &obj, const CopyOp &copyop);
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
        bool remove(IfcTendon *arg);
        /**
         */
        Step::RefPtr< IfcTendon > createIfcTendon();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTendon *cloneIfcTendon(ExpressDataSet *expressDataSet, const IfcTendon &obj, const CopyOp &copyop);
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
        bool remove(IfcTendonAnchor *arg);
        /**
         */
        Step::RefPtr< IfcTendonAnchor > createIfcTendonAnchor();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTendonAnchor *cloneIfcTendonAnchor(ExpressDataSet *expressDataSet, const IfcTendonAnchor &obj, const CopyOp &copyop);
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
        bool remove(IfcTerminatorSymbol *arg);
        /**
         */
        Step::RefPtr< IfcTerminatorSymbol > createIfcTerminatorSymbol();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTerminatorSymbol *cloneIfcTerminatorSymbol(ExpressDataSet *expressDataSet, const IfcTerminatorSymbol &obj, const CopyOp &copyop);
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
        bool remove(IfcTextLiteral *arg);
        /**
         */
        Step::RefPtr< IfcTextLiteral > createIfcTextLiteral();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextLiteral *cloneIfcTextLiteral(ExpressDataSet *expressDataSet, const IfcTextLiteral &obj, const CopyOp &copyop);
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
        bool remove(IfcTextLiteralWithExtent *arg);
        /**
         */
        Step::RefPtr< IfcTextLiteralWithExtent > createIfcTextLiteralWithExtent();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextLiteralWithExtent *cloneIfcTextLiteralWithExtent(ExpressDataSet *expressDataSet, const IfcTextLiteralWithExtent &obj, const CopyOp &copyop);
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
        bool remove(IfcTextStyle *arg);
        /**
         */
        Step::RefPtr< IfcTextStyle > createIfcTextStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextStyle *cloneIfcTextStyle(ExpressDataSet *expressDataSet, const IfcTextStyle &obj, const CopyOp &copyop);
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
        bool remove(IfcTextStyleFontModel *arg);
        /**
         */
        Step::RefPtr< IfcTextStyleFontModel > createIfcTextStyleFontModel();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextStyleFontModel *cloneIfcTextStyleFontModel(ExpressDataSet *expressDataSet, const IfcTextStyleFontModel &obj, const CopyOp &copyop);
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
        bool remove(IfcTextStyleForDefinedFont *arg);
        /**
         */
        Step::RefPtr< IfcTextStyleForDefinedFont > createIfcTextStyleForDefinedFont();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextStyleForDefinedFont *cloneIfcTextStyleForDefinedFont(ExpressDataSet *expressDataSet, const IfcTextStyleForDefinedFont &obj, const CopyOp &copyop);
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
        bool remove(IfcTextStyleTextModel *arg);
        /**
         */
        Step::RefPtr< IfcTextStyleTextModel > createIfcTextStyleTextModel();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextStyleTextModel *cloneIfcTextStyleTextModel(ExpressDataSet *expressDataSet, const IfcTextStyleTextModel &obj, const CopyOp &copyop);
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
        bool remove(IfcTextStyleWithBoxCharacteristics *arg);
        /**
         */
        Step::RefPtr< IfcTextStyleWithBoxCharacteristics > createIfcTextStyleWithBoxCharacteristics();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextStyleWithBoxCharacteristics *cloneIfcTextStyleWithBoxCharacteristics(ExpressDataSet *expressDataSet, const IfcTextStyleWithBoxCharacteristics &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextStyleWithBoxCharacteristics *cloneIfcTextStyleWithBoxCharacteristics(const IfcTextStyleWithBoxCharacteristics &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextureCoordinate *getIfcTextureCoordinate(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcTextureCoordinate *arg);
        /**
         */
        Step::RefPtr< IfcTextureCoordinate > createIfcTextureCoordinate();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextureCoordinate *cloneIfcTextureCoordinate(ExpressDataSet *expressDataSet, const IfcTextureCoordinate &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcTextureCoordinate *cloneIfcTextureCoordinate(const IfcTextureCoordinate &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTextureCoordinateGenerator *getIfcTextureCoordinateGenerator(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcTextureCoordinateGenerator *arg);
        /**
         */
        Step::RefPtr< IfcTextureCoordinateGenerator > createIfcTextureCoordinateGenerator();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextureCoordinateGenerator *cloneIfcTextureCoordinateGenerator(ExpressDataSet *expressDataSet, const IfcTextureCoordinateGenerator &obj, const CopyOp &copyop);
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
        bool remove(IfcTextureMap *arg);
        /**
         */
        Step::RefPtr< IfcTextureMap > createIfcTextureMap();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextureMap *cloneIfcTextureMap(ExpressDataSet *expressDataSet, const IfcTextureMap &obj, const CopyOp &copyop);
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
        bool remove(IfcTextureVertex *arg);
        /**
         */
        Step::RefPtr< IfcTextureVertex > createIfcTextureVertex();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTextureVertex *cloneIfcTextureVertex(ExpressDataSet *expressDataSet, const IfcTextureVertex &obj, const CopyOp &copyop);
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
        bool remove(IfcThermalMaterialProperties *arg);
        /**
         */
        Step::RefPtr< IfcThermalMaterialProperties > createIfcThermalMaterialProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcThermalMaterialProperties *cloneIfcThermalMaterialProperties(ExpressDataSet *expressDataSet, const IfcThermalMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcThermalMaterialProperties *cloneIfcThermalMaterialProperties(const IfcThermalMaterialProperties &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTimeSeries *getIfcTimeSeries(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcTimeSeries *arg);
        /**
         */
        Step::RefPtr< IfcTimeSeries > createIfcTimeSeries();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTimeSeries *cloneIfcTimeSeries(ExpressDataSet *expressDataSet, const IfcTimeSeries &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcTimeSeries *cloneIfcTimeSeries(const IfcTimeSeries &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTimeSeriesReferenceRelationship *getIfcTimeSeriesReferenceRelationship(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcTimeSeriesReferenceRelationship *arg);
        /**
         */
        Step::RefPtr< IfcTimeSeriesReferenceRelationship > createIfcTimeSeriesReferenceRelationship();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTimeSeriesReferenceRelationship *cloneIfcTimeSeriesReferenceRelationship(ExpressDataSet *expressDataSet, const IfcTimeSeriesReferenceRelationship &obj, const CopyOp &copyop);
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
        bool remove(IfcTimeSeriesSchedule *arg);
        /**
         */
        Step::RefPtr< IfcTimeSeriesSchedule > createIfcTimeSeriesSchedule();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTimeSeriesSchedule *cloneIfcTimeSeriesSchedule(ExpressDataSet *expressDataSet, const IfcTimeSeriesSchedule &obj, const CopyOp &copyop);
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
        bool remove(IfcTimeSeriesValue *arg);
        /**
         */
        Step::RefPtr< IfcTimeSeriesValue > createIfcTimeSeriesValue();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTimeSeriesValue *cloneIfcTimeSeriesValue(ExpressDataSet *expressDataSet, const IfcTimeSeriesValue &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcTimeSeriesValue *cloneIfcTimeSeriesValue(const IfcTimeSeriesValue &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTopologicalRepresentationItem *getIfcTopologicalRepresentationItem(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcTopologicalRepresentationItem *arg);
        /**
         */
        Step::RefPtr< IfcTopologicalRepresentationItem > createIfcTopologicalRepresentationItem();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTopologicalRepresentationItem *cloneIfcTopologicalRepresentationItem(ExpressDataSet *expressDataSet, const IfcTopologicalRepresentationItem &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcTopologicalRepresentationItem *cloneIfcTopologicalRepresentationItem(const IfcTopologicalRepresentationItem &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcTopologyRepresentation *getIfcTopologyRepresentation(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcTopologyRepresentation *arg);
        /**
         */
        Step::RefPtr< IfcTopologyRepresentation > createIfcTopologyRepresentation();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTopologyRepresentation *cloneIfcTopologyRepresentation(ExpressDataSet *expressDataSet, const IfcTopologyRepresentation &obj, const CopyOp &copyop);
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
        bool remove(IfcTransformerType *arg);
        /**
         */
        Step::RefPtr< IfcTransformerType > createIfcTransformerType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTransformerType *cloneIfcTransformerType(ExpressDataSet *expressDataSet, const IfcTransformerType &obj, const CopyOp &copyop);
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
        bool remove(IfcTransportElement *arg);
        /**
         */
        Step::RefPtr< IfcTransportElement > createIfcTransportElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTransportElement *cloneIfcTransportElement(ExpressDataSet *expressDataSet, const IfcTransportElement &obj, const CopyOp &copyop);
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
        bool remove(IfcTransportElementType *arg);
        /**
         */
        Step::RefPtr< IfcTransportElementType > createIfcTransportElementType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTransportElementType *cloneIfcTransportElementType(ExpressDataSet *expressDataSet, const IfcTransportElementType &obj, const CopyOp &copyop);
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
        bool remove(IfcTrapeziumProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcTrapeziumProfileDef > createIfcTrapeziumProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTrapeziumProfileDef *cloneIfcTrapeziumProfileDef(ExpressDataSet *expressDataSet, const IfcTrapeziumProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcTrimmedCurve *arg);
        /**
         */
        Step::RefPtr< IfcTrimmedCurve > createIfcTrimmedCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTrimmedCurve *cloneIfcTrimmedCurve(ExpressDataSet *expressDataSet, const IfcTrimmedCurve &obj, const CopyOp &copyop);
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
        bool remove(IfcTubeBundleType *arg);
        /**
         */
        Step::RefPtr< IfcTubeBundleType > createIfcTubeBundleType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTubeBundleType *cloneIfcTubeBundleType(ExpressDataSet *expressDataSet, const IfcTubeBundleType &obj, const CopyOp &copyop);
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
        bool remove(IfcTwoDirectionRepeatFactor *arg);
        /**
         */
        Step::RefPtr< IfcTwoDirectionRepeatFactor > createIfcTwoDirectionRepeatFactor();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTwoDirectionRepeatFactor *cloneIfcTwoDirectionRepeatFactor(ExpressDataSet *expressDataSet, const IfcTwoDirectionRepeatFactor &obj, const CopyOp &copyop);
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
        bool remove(IfcTypeObject *arg);
        /**
         */
        Step::RefPtr< IfcTypeObject > createIfcTypeObject();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTypeObject *cloneIfcTypeObject(ExpressDataSet *expressDataSet, const IfcTypeObject &obj, const CopyOp &copyop);
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
        bool remove(IfcTypeProduct *arg);
        /**
         */
        Step::RefPtr< IfcTypeProduct > createIfcTypeProduct();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcTypeProduct *cloneIfcTypeProduct(ExpressDataSet *expressDataSet, const IfcTypeProduct &obj, const CopyOp &copyop);
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
        bool remove(IfcUShapeProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcUShapeProfileDef > createIfcUShapeProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcUShapeProfileDef *cloneIfcUShapeProfileDef(ExpressDataSet *expressDataSet, const IfcUShapeProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcUnitAssignment *arg);
        /**
         */
        Step::RefPtr< IfcUnitAssignment > createIfcUnitAssignment();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcUnitAssignment *cloneIfcUnitAssignment(ExpressDataSet *expressDataSet, const IfcUnitAssignment &obj, const CopyOp &copyop);
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
        bool remove(IfcUnitaryEquipmentType *arg);
        /**
         */
        Step::RefPtr< IfcUnitaryEquipmentType > createIfcUnitaryEquipmentType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcUnitaryEquipmentType *cloneIfcUnitaryEquipmentType(ExpressDataSet *expressDataSet, const IfcUnitaryEquipmentType &obj, const CopyOp &copyop);
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
        bool remove(IfcValveType *arg);
        /**
         */
        Step::RefPtr< IfcValveType > createIfcValveType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcValveType *cloneIfcValveType(ExpressDataSet *expressDataSet, const IfcValveType &obj, const CopyOp &copyop);
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
        bool remove(IfcVector *arg);
        /**
         */
        Step::RefPtr< IfcVector > createIfcVector();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVector *cloneIfcVector(ExpressDataSet *expressDataSet, const IfcVector &obj, const CopyOp &copyop);
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
        bool remove(IfcVertex *arg);
        /**
         */
        Step::RefPtr< IfcVertex > createIfcVertex();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVertex *cloneIfcVertex(ExpressDataSet *expressDataSet, const IfcVertex &obj, const CopyOp &copyop);
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
        bool remove(IfcVertexBasedTextureMap *arg);
        /**
         */
        Step::RefPtr< IfcVertexBasedTextureMap > createIfcVertexBasedTextureMap();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVertexBasedTextureMap *cloneIfcVertexBasedTextureMap(ExpressDataSet *expressDataSet, const IfcVertexBasedTextureMap &obj, const CopyOp &copyop);
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
        bool remove(IfcVertexLoop *arg);
        /**
         */
        Step::RefPtr< IfcVertexLoop > createIfcVertexLoop();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVertexLoop *cloneIfcVertexLoop(ExpressDataSet *expressDataSet, const IfcVertexLoop &obj, const CopyOp &copyop);
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
        bool remove(IfcVertexPoint *arg);
        /**
         */
        Step::RefPtr< IfcVertexPoint > createIfcVertexPoint();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVertexPoint *cloneIfcVertexPoint(ExpressDataSet *expressDataSet, const IfcVertexPoint &obj, const CopyOp &copyop);
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
        bool remove(IfcVibrationIsolatorType *arg);
        /**
         */
        Step::RefPtr< IfcVibrationIsolatorType > createIfcVibrationIsolatorType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVibrationIsolatorType *cloneIfcVibrationIsolatorType(ExpressDataSet *expressDataSet, const IfcVibrationIsolatorType &obj, const CopyOp &copyop);
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
        bool remove(IfcVirtualElement *arg);
        /**
         */
        Step::RefPtr< IfcVirtualElement > createIfcVirtualElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVirtualElement *cloneIfcVirtualElement(ExpressDataSet *expressDataSet, const IfcVirtualElement &obj, const CopyOp &copyop);
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
        bool remove(IfcVirtualGridIntersection *arg);
        /**
         */
        Step::RefPtr< IfcVirtualGridIntersection > createIfcVirtualGridIntersection();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcVirtualGridIntersection *cloneIfcVirtualGridIntersection(ExpressDataSet *expressDataSet, const IfcVirtualGridIntersection &obj, const CopyOp &copyop);
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
        bool remove(IfcWall *arg);
        /**
         */
        Step::RefPtr< IfcWall > createIfcWall();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWall *cloneIfcWall(ExpressDataSet *expressDataSet, const IfcWall &obj, const CopyOp &copyop);
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
        bool remove(IfcWallStandardCase *arg);
        /**
         */
        Step::RefPtr< IfcWallStandardCase > createIfcWallStandardCase();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWallStandardCase *cloneIfcWallStandardCase(ExpressDataSet *expressDataSet, const IfcWallStandardCase &obj, const CopyOp &copyop);
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
        bool remove(IfcWallType *arg);
        /**
         */
        Step::RefPtr< IfcWallType > createIfcWallType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWallType *cloneIfcWallType(ExpressDataSet *expressDataSet, const IfcWallType &obj, const CopyOp &copyop);
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
        bool remove(IfcWasteTerminalType *arg);
        /**
         */
        Step::RefPtr< IfcWasteTerminalType > createIfcWasteTerminalType();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWasteTerminalType *cloneIfcWasteTerminalType(ExpressDataSet *expressDataSet, const IfcWasteTerminalType &obj, const CopyOp &copyop);
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
        bool remove(IfcWaterProperties *arg);
        /**
         */
        Step::RefPtr< IfcWaterProperties > createIfcWaterProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWaterProperties *cloneIfcWaterProperties(ExpressDataSet *expressDataSet, const IfcWaterProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcWindow *arg);
        /**
         */
        Step::RefPtr< IfcWindow > createIfcWindow();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWindow *cloneIfcWindow(ExpressDataSet *expressDataSet, const IfcWindow &obj, const CopyOp &copyop);
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
        bool remove(IfcWindowLiningProperties *arg);
        /**
         */
        Step::RefPtr< IfcWindowLiningProperties > createIfcWindowLiningProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWindowLiningProperties *cloneIfcWindowLiningProperties(ExpressDataSet *expressDataSet, const IfcWindowLiningProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcWindowPanelProperties *arg);
        /**
         */
        Step::RefPtr< IfcWindowPanelProperties > createIfcWindowPanelProperties();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWindowPanelProperties *cloneIfcWindowPanelProperties(ExpressDataSet *expressDataSet, const IfcWindowPanelProperties &obj, const CopyOp &copyop);
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
        bool remove(IfcWindowStyle *arg);
        /**
         */
        Step::RefPtr< IfcWindowStyle > createIfcWindowStyle();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWindowStyle *cloneIfcWindowStyle(ExpressDataSet *expressDataSet, const IfcWindowStyle &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcWindowStyle *cloneIfcWindowStyle(const IfcWindowStyle &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWorkControl *getIfcWorkControl(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcWorkControl *arg);
        /**
         */
        Step::RefPtr< IfcWorkControl > createIfcWorkControl();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWorkControl *cloneIfcWorkControl(ExpressDataSet *expressDataSet, const IfcWorkControl &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcWorkControl *cloneIfcWorkControl(const IfcWorkControl &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcWorkPlan *getIfcWorkPlan(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcWorkPlan *arg);
        /**
         */
        Step::RefPtr< IfcWorkPlan > createIfcWorkPlan();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWorkPlan *cloneIfcWorkPlan(ExpressDataSet *expressDataSet, const IfcWorkPlan &obj, const CopyOp &copyop);
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
        bool remove(IfcWorkSchedule *arg);
        /**
         */
        Step::RefPtr< IfcWorkSchedule > createIfcWorkSchedule();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcWorkSchedule *cloneIfcWorkSchedule(ExpressDataSet *expressDataSet, const IfcWorkSchedule &obj, const CopyOp &copyop);
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
        bool remove(IfcZShapeProfileDef *arg);
        /**
         */
        Step::RefPtr< IfcZShapeProfileDef > createIfcZShapeProfileDef();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcZShapeProfileDef *cloneIfcZShapeProfileDef(ExpressDataSet *expressDataSet, const IfcZShapeProfileDef &obj, const CopyOp &copyop);
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
        bool remove(IfcZone *arg);
        /**
         */
        Step::RefPtr< IfcZone > createIfcZone();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcZone *cloneIfcZone(ExpressDataSet *expressDataSet, const IfcZone &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcZone *cloneIfcZone(const IfcZone &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCivilStructureElement *getIfcCivilStructureElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcCivilStructureElement *arg);
        /**
         */
        Step::RefPtr< IfcCivilStructureElement > createIfcCivilStructureElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCivilStructureElement *cloneIfcCivilStructureElement(ExpressDataSet *expressDataSet, const IfcCivilStructureElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcCivilStructureElement *cloneIfcCivilStructureElement(const IfcCivilStructureElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBridgeStructureElement *getIfcBridgeStructureElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBridgeStructureElement *arg);
        /**
         */
        Step::RefPtr< IfcBridgeStructureElement > createIfcBridgeStructureElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBridgeStructureElement *cloneIfcBridgeStructureElement(ExpressDataSet *expressDataSet, const IfcBridgeStructureElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBridgeStructureElement *cloneIfcBridgeStructureElement(const IfcBridgeStructureElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBridge *getIfcBridge(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBridge *arg);
        /**
         */
        Step::RefPtr< IfcBridge > createIfcBridge();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBridge *cloneIfcBridge(ExpressDataSet *expressDataSet, const IfcBridge &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBridge *cloneIfcBridge(const IfcBridge &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBridgePart *getIfcBridgePart(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBridgePart *arg);
        /**
         */
        Step::RefPtr< IfcBridgePart > createIfcBridgePart();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBridgePart *cloneIfcBridgePart(ExpressDataSet *expressDataSet, const IfcBridgePart &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBridgePart *cloneIfcBridgePart(const IfcBridgePart &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCivilElement *getIfcCivilElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcCivilElement *arg);
        /**
         */
        Step::RefPtr< IfcCivilElement > createIfcCivilElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCivilElement *cloneIfcCivilElement(ExpressDataSet *expressDataSet, const IfcCivilElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcCivilElement *cloneIfcCivilElement(const IfcCivilElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBridgeElement *getIfcBridgeElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBridgeElement *arg);
        /**
         */
        Step::RefPtr< IfcBridgeElement > createIfcBridgeElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBridgeElement *cloneIfcBridgeElement(ExpressDataSet *expressDataSet, const IfcBridgeElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBridgeElement *cloneIfcBridgeElement(const IfcBridgeElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBridgeSegment *getIfcBridgeSegment(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBridgeSegment *arg);
        /**
         */
        Step::RefPtr< IfcBridgeSegment > createIfcBridgeSegment();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBridgeSegment *cloneIfcBridgeSegment(ExpressDataSet *expressDataSet, const IfcBridgeSegment &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBridgeSegment *cloneIfcBridgeSegment(const IfcBridgeSegment &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBridgeSegmentPart *getIfcBridgeSegmentPart(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBridgeSegmentPart *arg);
        /**
         */
        Step::RefPtr< IfcBridgeSegmentPart > createIfcBridgeSegmentPart();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBridgeSegmentPart *cloneIfcBridgeSegmentPart(ExpressDataSet *expressDataSet, const IfcBridgeSegmentPart &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBridgeSegmentPart *cloneIfcBridgeSegmentPart(const IfcBridgeSegmentPart &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBridgeContactElement *getIfcBridgeContactElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBridgeContactElement *arg);
        /**
         */
        Step::RefPtr< IfcBridgeContactElement > createIfcBridgeContactElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBridgeContactElement *cloneIfcBridgeContactElement(ExpressDataSet *expressDataSet, const IfcBridgeContactElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBridgeContactElement *cloneIfcBridgeContactElement(const IfcBridgeContactElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcBridgePrismaticElement *getIfcBridgePrismaticElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcBridgePrismaticElement *arg);
        /**
         */
        Step::RefPtr< IfcBridgePrismaticElement > createIfcBridgePrismaticElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcBridgePrismaticElement *cloneIfcBridgePrismaticElement(ExpressDataSet *expressDataSet, const IfcBridgePrismaticElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcBridgePrismaticElement *cloneIfcBridgePrismaticElement(const IfcBridgePrismaticElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcAlignmentElement *getIfcAlignmentElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcAlignmentElement *arg);
        /**
         */
        Step::RefPtr< IfcAlignmentElement > createIfcAlignmentElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcAlignmentElement *cloneIfcAlignmentElement(ExpressDataSet *expressDataSet, const IfcAlignmentElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcAlignmentElement *cloneIfcAlignmentElement(const IfcAlignmentElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReferenceElement *getIfcReferenceElement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcReferenceElement *arg);
        /**
         */
        Step::RefPtr< IfcReferenceElement > createIfcReferenceElement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReferenceElement *cloneIfcReferenceElement(ExpressDataSet *expressDataSet, const IfcReferenceElement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcReferenceElement *cloneIfcReferenceElement(const IfcReferenceElement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReferenceCurve *getIfcReferenceCurve(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcReferenceCurve *arg);
        /**
         */
        Step::RefPtr< IfcReferenceCurve > createIfcReferenceCurve();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReferenceCurve *cloneIfcReferenceCurve(ExpressDataSet *expressDataSet, const IfcReferenceCurve &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcReferenceCurve *cloneIfcReferenceCurve(const IfcReferenceCurve &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReferenceCurve3D *getIfcReferenceCurve3D(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcReferenceCurve3D *arg);
        /**
         */
        Step::RefPtr< IfcReferenceCurve3D > createIfcReferenceCurve3D();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReferenceCurve3D *cloneIfcReferenceCurve3D(ExpressDataSet *expressDataSet, const IfcReferenceCurve3D &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcReferenceCurve3D *cloneIfcReferenceCurve3D(const IfcReferenceCurve3D &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReferenceCurveAlignment2D *getIfcReferenceCurveAlignment2D(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcReferenceCurveAlignment2D *arg);
        /**
         */
        Step::RefPtr< IfcReferenceCurveAlignment2D > createIfcReferenceCurveAlignment2D();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReferenceCurveAlignment2D *cloneIfcReferenceCurveAlignment2D(ExpressDataSet *expressDataSet, const IfcReferenceCurveAlignment2D &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcReferenceCurveAlignment2D *cloneIfcReferenceCurveAlignment2D(const IfcReferenceCurveAlignment2D &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReferencePlacement *getIfcReferencePlacement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcReferencePlacement *arg);
        /**
         */
        Step::RefPtr< IfcReferencePlacement > createIfcReferencePlacement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReferencePlacement *cloneIfcReferencePlacement(ExpressDataSet *expressDataSet, const IfcReferencePlacement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcReferencePlacement *cloneIfcReferencePlacement(const IfcReferencePlacement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReferenceCurvePlacement *getIfcReferenceCurvePlacement(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcReferenceCurvePlacement *arg);
        /**
         */
        Step::RefPtr< IfcReferenceCurvePlacement > createIfcReferenceCurvePlacement();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReferenceCurvePlacement *cloneIfcReferenceCurvePlacement(ExpressDataSet *expressDataSet, const IfcReferenceCurvePlacement &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcReferenceCurvePlacement *cloneIfcReferenceCurvePlacement(const IfcReferenceCurvePlacement &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReferenceCurvePlacementSystem *getIfcReferenceCurvePlacementSystem(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcReferenceCurvePlacementSystem *arg);
        /**
         */
        Step::RefPtr< IfcReferenceCurvePlacementSystem > createIfcReferenceCurvePlacementSystem();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReferenceCurvePlacementSystem *cloneIfcReferenceCurvePlacementSystem(ExpressDataSet *expressDataSet, const IfcReferenceCurvePlacementSystem &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcReferenceCurvePlacementSystem *cloneIfcReferenceCurvePlacementSystem(const IfcReferenceCurvePlacementSystem &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcElementPart *getIfcElementPart(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcElementPart *arg);
        /**
         */
        Step::RefPtr< IfcElementPart > createIfcElementPart();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcElementPart *cloneIfcElementPart(ExpressDataSet *expressDataSet, const IfcElementPart &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcElementPart *cloneIfcElementPart(const IfcElementPart &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCivilElementPart *getIfcCivilElementPart(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcCivilElementPart *arg);
        /**
         */
        Step::RefPtr< IfcCivilElementPart > createIfcCivilElementPart();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCivilElementPart *cloneIfcCivilElementPart(ExpressDataSet *expressDataSet, const IfcCivilElementPart &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcCivilElementPart *cloneIfcCivilElementPart(const IfcCivilElementPart &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCivilSheath *getIfcCivilSheath(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcCivilSheath *arg);
        /**
         */
        Step::RefPtr< IfcCivilSheath > createIfcCivilSheath();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCivilSheath *cloneIfcCivilSheath(ExpressDataSet *expressDataSet, const IfcCivilSheath &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcCivilSheath *cloneIfcCivilSheath(const IfcCivilSheath &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcCivilVoid *getIfcCivilVoid(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcCivilVoid *arg);
        /**
         */
        Step::RefPtr< IfcCivilVoid > createIfcCivilVoid();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcCivilVoid *cloneIfcCivilVoid(ExpressDataSet *expressDataSet, const IfcCivilVoid &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcCivilVoid *cloneIfcCivilVoid(const IfcCivilVoid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcClothoid *getIfcClothoid(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcClothoid *arg);
        /**
         */
        Step::RefPtr< IfcClothoid > createIfcClothoid();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcClothoid *cloneIfcClothoid(ExpressDataSet *expressDataSet, const IfcClothoid &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcClothoid *cloneIfcClothoid(const IfcClothoid &obj, const CopyOp &copyop);
        /**
         * @param id
         */
        IfcReferencedSectionedSpine *getIfcReferencedSectionedSpine(Step::Id id);
        /**
         * @param arg
         */
        bool remove(IfcReferencedSectionedSpine *arg);
        /**
         */
        Step::RefPtr< IfcReferencedSectionedSpine > createIfcReferencedSectionedSpine();
        /**
         * @param expressDataSet
         * @param obj
         * @param copyop
         */
        static IfcReferencedSectionedSpine *cloneIfcReferencedSectionedSpine(ExpressDataSet *expressDataSet, const IfcReferencedSectionedSpine &obj, const CopyOp &copyop);
        /**
         * @param obj
         * @param copyop
         */
        IfcReferencedSectionedSpine *cloneIfcReferencedSectionedSpine(const IfcReferencedSectionedSpine &obj, const CopyOp &copyop);
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
        /**
         */
        Step::RefLinkedList< IfcCivilStructureElement > &getAllIfcCivilStructureElement();
        /**
         */
        Step::RefLinkedList< IfcBridgeStructureElement > &getAllIfcBridgeStructureElement();
        /**
         */
        Step::RefLinkedList< IfcBridge > &getAllIfcBridge();
        /**
         */
        Step::RefLinkedList< IfcBridgePart > &getAllIfcBridgePart();
        /**
         */
        Step::RefLinkedList< IfcCivilElement > &getAllIfcCivilElement();
        /**
         */
        Step::RefLinkedList< IfcBridgeElement > &getAllIfcBridgeElement();
        /**
         */
        Step::RefLinkedList< IfcBridgeSegment > &getAllIfcBridgeSegment();
        /**
         */
        Step::RefLinkedList< IfcBridgeSegmentPart > &getAllIfcBridgeSegmentPart();
        /**
         */
        Step::RefLinkedList< IfcBridgeContactElement > &getAllIfcBridgeContactElement();
        /**
         */
        Step::RefLinkedList< IfcBridgePrismaticElement > &getAllIfcBridgePrismaticElement();
        /**
         */
        Step::RefLinkedList< IfcAlignmentElement > &getAllIfcAlignmentElement();
        /**
         */
        Step::RefLinkedList< IfcReferenceElement > &getAllIfcReferenceElement();
        /**
         */
        Step::RefLinkedList< IfcReferenceCurve > &getAllIfcReferenceCurve();
        /**
         */
        Step::RefLinkedList< IfcReferenceCurve3D > &getAllIfcReferenceCurve3D();
        /**
         */
        Step::RefLinkedList< IfcReferenceCurveAlignment2D > &getAllIfcReferenceCurveAlignment2D();
        /**
         */
        Step::RefLinkedList< IfcReferencePlacement > &getAllIfcReferencePlacement();
        /**
         */
        Step::RefLinkedList< IfcReferenceCurvePlacement > &getAllIfcReferenceCurvePlacement();
        /**
         */
        Step::RefLinkedList< IfcReferenceCurvePlacementSystem > &getAllIfcReferenceCurvePlacementSystem();
        /**
         */
        Step::RefLinkedList< IfcElementPart > &getAllIfcElementPart();
        /**
         */
        Step::RefLinkedList< IfcCivilElementPart > &getAllIfcCivilElementPart();
        /**
         */
        Step::RefLinkedList< IfcCivilSheath > &getAllIfcCivilSheath();
        /**
         */
        Step::RefLinkedList< IfcCivilVoid > &getAllIfcCivilVoid();
        /**
         */
        Step::RefLinkedList< IfcClothoid > &getAllIfcClothoid();
        /**
         */
        Step::RefLinkedList< IfcReferencedSectionedSpine > &getAllIfcReferencedSectionedSpine();
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAddress_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAnnotationOccurrence_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAppliedValue_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBSplineCurve_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBoundaryCondition_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBoundedCurve_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBuildingElement_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBuildingElementType_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCartesianTransformationOperator_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcColourSpecification_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConic_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConnectedFaceSet_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConnectionCurveGeometry_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConnectionGeometry_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConstraint_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcConstructionResource_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcContextDependentUnit_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcControl_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCsgPrimitive3D_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCurve_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDistributionControlElementType_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcDistributionFlowElementType_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEdgeFeature_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElementAssembly_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElementComponent_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElementComponentType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElementQuantity_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElementType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElementarySurface_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcEnergyConversionDeviceType_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcExternalReference_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFeatureElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFeatureElementAddition_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFeatureElementSubtraction_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowControllerType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowFitting_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowFittingType_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowMovingDeviceType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowSegment_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowSegmentType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowStorageDevice_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowStorageDeviceType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowTerminal_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowTerminalType_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowTreatmentDevice_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcFlowTreatmentDeviceType_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcGeometricRepresentationItem_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcLightSource_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcManifoldSolidBrep_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcMaterialProperties_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcNamedUnit_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcObject_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcObjectDefinition_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcObjectPlacement_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcParameterizedProfileDef_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPhysicalQuantity_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPhysicalSimpleQuantity_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPlacement_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPoint_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPort_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPostalAddress_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPreDefinedColour_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPreDefinedCurveFont_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPreDefinedDimensionSymbol_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPreDefinedItem_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPreDefinedPointMarkerSymbol_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPreDefinedSymbol_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPreDefinedTerminatorSymbol_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPreDefinedTextFont_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPresentationLayerAssignment_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPresentationLayerWithStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPresentationStyle_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPresentationStyleAssignment_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProcedure_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProcess_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProduct_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProfileDef_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProfileProperties_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcProperty_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertyBoundedValue_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertyConstraintRelationship_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertyDefinition_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcPropertySetDefinition_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReinforcingElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReinforcingMesh_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAggregates_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelAssigns_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelConnects_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelDecomposes_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelDefines_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRelationship_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRepresentationItem_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRepresentationMap_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcResource_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcRoot_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcShapeModel_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcShapeRepresentation_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcShellBasedSurfaceModel_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSimpleProperty_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSolidModel_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSpatialStructureElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSpatialStructureElementType_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralAction_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralActivity_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralAnalysisModel_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralConnection_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralConnectionCondition_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralItem_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLinearAction_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLinearActionVarying_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLoad_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLoadStatic_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralLoadTemperature_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralMember_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStructuralReaction_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcStyleModel_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSurface_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSurfaceTexture_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSweptAreaSolid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSweptDiskSolid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcSweptSurface_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTextureCoordinate_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTimeSeries_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcTopologicalRepresentationItem_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcWorkControl_Map;
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
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCivilStructureElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBridgeStructureElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBridge_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBridgePart_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCivilElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBridgeElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBridgeSegment_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBridgeSegmentPart_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBridgeContactElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcBridgePrismaticElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcAlignmentElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReferenceElement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReferenceCurve_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReferenceCurve3D_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReferenceCurveAlignment2D_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReferencePlacement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReferenceCurvePlacement_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReferenceCurvePlacementSystem_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcElementPart_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCivilElementPart_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCivilSheath_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcCivilVoid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcClothoid_Map;
        /**
         */
        std::map<Step::Id, Step::BaseObjectPtr > m_IfcReferencedSectionedSpine_Map;
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
         */
        Step::RefLinkedList< IfcCivilStructureElement > m_refIfcCivilStructureElementList;
        /**
         */
        Step::RefLinkedList< IfcBridgeStructureElement > m_refIfcBridgeStructureElementList;
        /**
         */
        Step::RefLinkedList< IfcBridge > m_refIfcBridgeList;
        /**
         */
        Step::RefLinkedList< IfcBridgePart > m_refIfcBridgePartList;
        /**
         */
        Step::RefLinkedList< IfcCivilElement > m_refIfcCivilElementList;
        /**
         */
        Step::RefLinkedList< IfcBridgeElement > m_refIfcBridgeElementList;
        /**
         */
        Step::RefLinkedList< IfcBridgeSegment > m_refIfcBridgeSegmentList;
        /**
         */
        Step::RefLinkedList< IfcBridgeSegmentPart > m_refIfcBridgeSegmentPartList;
        /**
         */
        Step::RefLinkedList< IfcBridgeContactElement > m_refIfcBridgeContactElementList;
        /**
         */
        Step::RefLinkedList< IfcBridgePrismaticElement > m_refIfcBridgePrismaticElementList;
        /**
         */
        Step::RefLinkedList< IfcAlignmentElement > m_refIfcAlignmentElementList;
        /**
         */
        Step::RefLinkedList< IfcReferenceElement > m_refIfcReferenceElementList;
        /**
         */
        Step::RefLinkedList< IfcReferenceCurve > m_refIfcReferenceCurveList;
        /**
         */
        Step::RefLinkedList< IfcReferenceCurve3D > m_refIfcReferenceCurve3DList;
        /**
         */
        Step::RefLinkedList< IfcReferenceCurveAlignment2D > m_refIfcReferenceCurveAlignment2DList;
        /**
         */
        Step::RefLinkedList< IfcReferencePlacement > m_refIfcReferencePlacementList;
        /**
         */
        Step::RefLinkedList< IfcReferenceCurvePlacement > m_refIfcReferenceCurvePlacementList;
        /**
         */
        Step::RefLinkedList< IfcReferenceCurvePlacementSystem > m_refIfcReferenceCurvePlacementSystemList;
        /**
         */
        Step::RefLinkedList< IfcElementPart > m_refIfcElementPartList;
        /**
         */
        Step::RefLinkedList< IfcCivilElementPart > m_refIfcCivilElementPartList;
        /**
         */
        Step::RefLinkedList< IfcCivilSheath > m_refIfcCivilSheathList;
        /**
         */
        Step::RefLinkedList< IfcCivilVoid > m_refIfcCivilVoidList;
        /**
         */
        Step::RefLinkedList< IfcClothoid > m_refIfcClothoidList;
        /**
         */
        Step::RefLinkedList< IfcReferencedSectionedSpine > m_refIfcReferencedSectionedSpineList;
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfc2DCompositeCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcActionRequest(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcActor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcActorRole(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcActuatorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAddress(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAirTerminalBoxType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAirTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAirToAirHeatRecoveryType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAlarmType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAngularDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationCurveOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationFillArea(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationFillAreaOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationSurfaceOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationSymbolOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAnnotationTextOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcApplication(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAppliedValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAppliedValueRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcApproval(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcApprovalActorRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcApprovalPropertyRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcApprovalRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcArbitraryClosedProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcArbitraryOpenProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcArbitraryProfileDefWithVoids(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAsset(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAsymmetricIShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAxis1Placement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAxis2Placement2D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAxis2Placement3D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBSplineCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBeam(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBeamType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBezierCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBlobTexture(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBlock(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoilerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBooleanClippingResult(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBooleanResult(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundaryCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundaryEdgeCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundaryFaceCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundaryNodeCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundaryNodeConditionWarping(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundedCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundedSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoundingBox(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBoxedHalfSpace(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuilding(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuildingElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuildingElementPart(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuildingElementProxy(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuildingElementProxyType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuildingElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBuildingStorey(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCableCarrierFittingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCableCarrierSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCableSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCalendarDate(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCartesianPoint(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCartesianTransformationOperator(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCartesianTransformationOperator2D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCartesianTransformationOperator2DnonUniform(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCartesianTransformationOperator3D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCartesianTransformationOperator3DnonUniform(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCenterLineProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcChamferEdgeFeature(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcChillerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCircle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCircleHollowProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCircleProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassification(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassificationItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassificationItemRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassificationNotation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassificationNotationFacet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClassificationReference(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClosedShell(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCoilType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcColourRgb(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcColourSpecification(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcColumn(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcColumnType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcComplexProperty(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCompositeCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCompositeCurveSegment(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCompositeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCompressorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCondenserType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConditionCriterion(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConic(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectedFaceSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectionCurveGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectionGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectionPointEccentricity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectionPointGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectionPortGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConnectionSurfaceGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstraint(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstraintAggregationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstraintClassificationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstraintRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstructionEquipmentResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstructionMaterialResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstructionProductResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConstructionResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcContextDependentUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcControl(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcControllerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcConversionBasedUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCooledBeamType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCoolingTowerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCoordinatedUniversalTimeOffset(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCostItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCostSchedule(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCostValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCovering(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCoveringType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCraneRailAShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCraneRailFShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCrewResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCsgPrimitive3D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCsgSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurrencyRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurtainWall(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurtainWallType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurveBoundedPlane(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurveStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurveStyleFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurveStyleFontAndScaling(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCurveStyleFontPattern(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDamperType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDateAndTime(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDefinedSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDerivedProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDerivedUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDerivedUnitElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDiameterDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionCalloutRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionCurveDirectedCallout(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionCurveTerminator(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionPair(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDimensionalExponents(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDirection(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDiscreteAccessory(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDiscreteAccessoryType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionChamberElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionChamberElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionControlElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionControlElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionFlowElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionFlowElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDistributionPort(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDocumentElectronicFormat(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDocumentInformation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDocumentInformationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDocumentReference(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDoor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDoorLiningProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDoorPanelProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDoorStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDraughtingCallout(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDraughtingCalloutRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDraughtingPreDefinedColour(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDraughtingPreDefinedCurveFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDraughtingPreDefinedTextFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDuctFittingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDuctSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcDuctSilencerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEdge(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEdgeCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEdgeFeature(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEdgeLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricApplianceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricDistributionPoint(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricFlowStorageDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricGeneratorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricHeaterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricMotorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricTimeControlType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricalBaseProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricalCircuit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElectricalElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElementAssembly(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElementComponent(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElementComponentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElementQuantity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElementarySurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEllipse(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEllipseProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEnergyConversionDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEnergyConversionDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEnergyProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEnvironmentalImpactValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEquipmentElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEquipmentStandard(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEvaporativeCoolerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcEvaporatorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExtendedMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExternalReference(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExternallyDefinedHatchStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExternallyDefinedSurfaceStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExternallyDefinedSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExternallyDefinedTextFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcExtrudedAreaSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFace(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFaceBasedSurfaceModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFaceBound(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFaceOuterBound(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFaceSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFacetedBrep(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFacetedBrepWithVoids(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFailureConnectionCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFanType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFastener(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFastenerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFeatureElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFeatureElementAddition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFeatureElementSubtraction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFillAreaStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFillAreaStyleHatching(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFillAreaStyleTileSymbolWithStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFillAreaStyleTiles(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFilterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFireSuppressionTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowController(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowControllerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowFitting(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowFittingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowInstrumentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowMeterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowMovingDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowMovingDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowSegment(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowStorageDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowStorageDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowTerminal(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowTreatmentDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFlowTreatmentDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFluidFlowProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFooting(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFuelProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFurnishingElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFurnishingElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFurnitureStandard(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcFurnitureType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGasTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeneralMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeneralProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeometricCurveSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeometricRepresentationContext(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeometricRepresentationItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeometricRepresentationSubContext(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGeometricSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGrid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGridAxis(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGridPlacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcHalfSpaceSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcHeatExchangerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcHumidifierType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcHygroscopicMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcIShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcImageTexture(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcInventory(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcIrregularTimeSeries(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcIrregularTimeSeriesValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcJunctionBoxType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLaborResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLampType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLibraryInformation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLibraryReference(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightDistributionData(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightFixtureType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightIntensityDistribution(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightSource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightSourceAmbient(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightSourceDirectional(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightSourceGoniometric(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightSourcePositional(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLightSourceSpot(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLine(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLinearDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLocalPlacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLocalTime(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcManifoldSolidBrep(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMappedItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterial(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialClassificationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialDefinitionRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialLayer(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialLayerSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialLayerSetUsage(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialList(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMeasureWithUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMechanicalConcreteMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMechanicalFastener(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMechanicalFastenerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMechanicalMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMechanicalSteelMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMemberType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMetric(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMonetaryUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMotorConnectionType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcMove(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcNamedUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcObject(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcObjectDefinition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcObjectPlacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcObjective(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOccupant(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOffsetCurve2D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOffsetCurve3D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOneDirectionRepeatFactor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOpenShell(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOpeningElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOpticalMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOrderAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOrganization(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOrganizationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOrientedEdge(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOutletType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcOwnerHistory(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcParameterizedProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPath(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPerformanceHistory(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPermeableCoveringProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPermit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPerson(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPersonAndOrganization(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPhysicalComplexQuantity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPhysicalQuantity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPhysicalSimpleQuantity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPile(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPipeFittingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPipeSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPixelTexture(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPlacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPlanarBox(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPlanarExtent(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPlane(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPlate(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPlateType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPoint(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPointOnCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPointOnSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPolyLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPolygonalBoundedHalfSpace(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPolyline(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPort(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPostalAddress(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPreDefinedColour(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPreDefinedCurveFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPreDefinedDimensionSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPreDefinedItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPreDefinedPointMarkerSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPreDefinedSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPreDefinedTerminatorSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPreDefinedTextFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPresentationLayerAssignment(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPresentationLayerWithStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPresentationStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPresentationStyleAssignment(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProcedure(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProcess(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProduct(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProductDefinitionShape(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProductRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProductsOfCombustionProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProject(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProjectOrder(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProjectOrderRecord(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProjectionCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProjectionElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProperty(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyBoundedValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyConstraintRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyDefinition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyDependencyRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyEnumeratedValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyEnumeration(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyListValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyReferenceValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertySet(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertySetDefinition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertySingleValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPropertyTableValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProtectiveDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcProxy(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcPumpType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityArea(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityCount(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityLength(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityTime(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityVolume(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcQuantityWeight(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRadiusDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRailing(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRailingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRamp(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRampFlight(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRampFlightType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRationalBezierCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRectangleHollowProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRectangleProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRectangularPyramid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRectangularTrimmedSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReferencesValueDocument(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRegularTimeSeries(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReinforcementBarProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReinforcementDefinitionProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReinforcingBar(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReinforcingElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReinforcingMesh(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAggregates(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssigns(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsTasks(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToActor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToControl(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToProcess(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToProduct(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToProjectOrder(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssignsToResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociates(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesAppliedValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesApproval(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesClassification(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesConstraint(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesDocument(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesLibrary(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesMaterial(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelAssociatesProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnects(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsPathElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsPortToElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsPorts(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsStructuralActivity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsStructuralElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsStructuralMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsWithEccentricity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelConnectsWithRealizingElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelContainedInSpatialStructure(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelCoversBldgElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelCoversSpaces(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelDecomposes(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelDefines(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelDefinesByProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelDefinesByType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelFillsElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelFlowControlElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelInteractionRequirements(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelNests(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelOccupiesSpaces(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelOverridesProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelProjectsElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelReferencedInSpatialStructure(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelSchedulesCostItems(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelSequence(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelServicesBuildings(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelSpaceBoundary(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelVoidsElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRelaxation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRepresentationContext(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRepresentationItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRepresentationMap(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRevolvedAreaSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRibPlateProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRightCircularCone(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRightCircularCylinder(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRoof(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRoot(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRoundedEdgeFeature(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcRoundedRectangleProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSIUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSanitaryTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcScheduleTimeControl(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSectionProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSectionReinforcementProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSectionedSpine(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSensorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcServiceLife(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcServiceLifeFactor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcShapeAspect(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcShapeModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcShapeRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcShellBasedSurfaceModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSimpleProperty(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSite(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSlab(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSlabType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSlippageConnectionCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSolidModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSoundProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSoundValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpace(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpaceHeaterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpaceProgram(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpaceThermalLoadProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpaceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpatialStructureElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSpatialStructureElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSphere(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStackTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStair(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStairFlight(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStairFlightType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralActivity(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralAnalysisModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralConnection(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralConnectionCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralCurveConnection(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralCurveMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralCurveMemberVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLinearAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLinearActionVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoad(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadLinearForce(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadPlanarForce(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadSingleDisplacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadSingleDisplacementDistortion(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadSingleForce(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadSingleForceWarping(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadStatic(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralLoadTemperature(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralPlanarAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralPlanarActionVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralPointAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralPointConnection(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralPointReaction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralReaction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralResultGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralSteelProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralSurfaceConnection(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralSurfaceMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuralSurfaceMemberVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStructuredDimensionCallout(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStyleModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStyledItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcStyledRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSubContractResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSubedge(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceCurveSweptAreaSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceOfLinearExtrusion(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceOfRevolution(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyleLighting(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyleRefraction(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyleRendering(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyleShading(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceStyleWithTextures(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSurfaceTexture(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSweptAreaSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSweptDiskSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSweptSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSwitchingDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSymbolStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSystem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcSystemFurnitureElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTable(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTableRow(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTankType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTask(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTelecomAddress(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTendon(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTendonAnchor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTerminatorSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextLiteral(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextLiteralWithExtent(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextStyleFontModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextStyleForDefinedFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextStyleTextModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextStyleWithBoxCharacteristics(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextureCoordinate(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextureCoordinateGenerator(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextureMap(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTextureVertex(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcThermalMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTimeSeries(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTimeSeriesReferenceRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTimeSeriesSchedule(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTimeSeriesValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTopologicalRepresentationItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTopologyRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTransformerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTransportElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTransportElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTrapeziumProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTrimmedCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTubeBundleType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTwoDirectionRepeatFactor(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTypeObject(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcTypeProduct(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcUShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcUnitAssignment(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcUnitaryEquipmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcValveType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVector(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVertex(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVertexBasedTextureMap(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVertexLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVertexPoint(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVibrationIsolatorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVirtualElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcVirtualGridIntersection(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWall(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWallStandardCase(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWallType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWasteTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWaterProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWindow(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWindowLiningProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWindowPanelProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWindowStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWorkControl(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWorkPlan(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcWorkSchedule(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcZShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcZone(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCivilStructureElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBridgeStructureElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBridge(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBridgePart(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCivilElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBridgeElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBridgeSegment(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBridgeSegmentPart(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBridgeContactElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcBridgePrismaticElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcAlignmentElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReferenceElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReferenceCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReferenceCurve3D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReferenceCurveAlignment2D(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReferencePlacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReferenceCurvePlacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReferenceCurvePlacementSystem(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcElementPart(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCivilElementPart(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCivilSheath(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcCivilVoid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcClothoid(Step::BaseExpressDataSet *expressDataSet, Step::Id id);
        /**
         * @param expressDataSet
         * @param id
         */
        static Step::BaseEntity *allocateIfcReferencedSectionedSpine(Step::BaseExpressDataSet *expressDataSet, Step::Id id);

    };

}

#endif // IFC2X3_EXPRESSDATASET_H
