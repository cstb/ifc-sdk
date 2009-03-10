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

#include "ifc2x3/ExpressDataSet.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Ifc2DCompositeCurve.h"
#include "ifc2x3/IfcActionRequest.h"
#include "ifc2x3/IfcActor.h"
#include "ifc2x3/IfcActorRole.h"
#include "ifc2x3/IfcActuatorType.h"
#include "ifc2x3/IfcAirTerminalBoxType.h"
#include "ifc2x3/IfcAirTerminalType.h"
#include "ifc2x3/IfcAirToAirHeatRecoveryType.h"
#include "ifc2x3/IfcAlarmType.h"
#include "ifc2x3/IfcAngularDimension.h"
#include "ifc2x3/IfcAnnotation.h"
#include "ifc2x3/IfcAnnotationCurveOccurrence.h"
#include "ifc2x3/IfcAnnotationFillArea.h"
#include "ifc2x3/IfcAnnotationFillAreaOccurrence.h"
#include "ifc2x3/IfcAnnotationSurface.h"
#include "ifc2x3/IfcAnnotationSurfaceOccurrence.h"
#include "ifc2x3/IfcAnnotationSymbolOccurrence.h"
#include "ifc2x3/IfcAnnotationTextOccurrence.h"
#include "ifc2x3/IfcApplication.h"
#include "ifc2x3/IfcAppliedValueRelationship.h"
#include "ifc2x3/IfcApproval.h"
#include "ifc2x3/IfcApprovalActorRelationship.h"
#include "ifc2x3/IfcApprovalPropertyRelationship.h"
#include "ifc2x3/IfcApprovalRelationship.h"
#include "ifc2x3/IfcArbitraryClosedProfileDef.h"
#include "ifc2x3/IfcArbitraryOpenProfileDef.h"
#include "ifc2x3/IfcArbitraryProfileDefWithVoids.h"
#include "ifc2x3/IfcAsset.h"
#include "ifc2x3/IfcAsymmetricIShapeProfileDef.h"
#include "ifc2x3/IfcAxis1Placement.h"
#include "ifc2x3/IfcAxis2Placement2D.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcBeam.h"
#include "ifc2x3/IfcBeamType.h"
#include "ifc2x3/IfcBezierCurve.h"
#include "ifc2x3/IfcBlobTexture.h"
#include "ifc2x3/IfcBlock.h"
#include "ifc2x3/IfcBoilerType.h"
#include "ifc2x3/IfcBooleanClippingResult.h"
#include "ifc2x3/IfcBooleanResult.h"
#include "ifc2x3/IfcBoundaryEdgeCondition.h"
#include "ifc2x3/IfcBoundaryFaceCondition.h"
#include "ifc2x3/IfcBoundaryNodeCondition.h"
#include "ifc2x3/IfcBoundaryNodeConditionWarping.h"
#include "ifc2x3/IfcBoundedSurface.h"
#include "ifc2x3/IfcBoundingBox.h"
#include "ifc2x3/IfcBoxedHalfSpace.h"
#include "ifc2x3/IfcBuilding.h"
#include "ifc2x3/IfcBuildingElementPart.h"
#include "ifc2x3/IfcBuildingElementProxy.h"
#include "ifc2x3/IfcBuildingElementProxyType.h"
#include "ifc2x3/IfcBuildingStorey.h"
#include "ifc2x3/IfcCShapeProfileDef.h"
#include "ifc2x3/IfcCableCarrierFittingType.h"
#include "ifc2x3/IfcCableCarrierSegmentType.h"
#include "ifc2x3/IfcCableSegmentType.h"
#include "ifc2x3/IfcCalendarDate.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcCartesianTransformationOperator2D.h"
#include "ifc2x3/IfcCartesianTransformationOperator2DnonUniform.h"
#include "ifc2x3/IfcCartesianTransformationOperator3D.h"
#include "ifc2x3/IfcCartesianTransformationOperator3DnonUniform.h"
#include "ifc2x3/IfcCenterLineProfileDef.h"
#include "ifc2x3/IfcChamferEdgeFeature.h"
#include "ifc2x3/IfcChillerType.h"
#include "ifc2x3/IfcCircle.h"
#include "ifc2x3/IfcCircleHollowProfileDef.h"
#include "ifc2x3/IfcCircleProfileDef.h"
#include "ifc2x3/IfcClassification.h"
#include "ifc2x3/IfcClassificationItem.h"
#include "ifc2x3/IfcClassificationItemRelationship.h"
#include "ifc2x3/IfcClassificationNotation.h"
#include "ifc2x3/IfcClassificationNotationFacet.h"
#include "ifc2x3/IfcClassificationReference.h"
#include "ifc2x3/IfcClosedShell.h"
#include "ifc2x3/IfcCoilType.h"
#include "ifc2x3/IfcColourRgb.h"
#include "ifc2x3/IfcColumn.h"
#include "ifc2x3/IfcColumnType.h"
#include "ifc2x3/IfcComplexProperty.h"
#include "ifc2x3/IfcCompositeCurve.h"
#include "ifc2x3/IfcCompositeCurveSegment.h"
#include "ifc2x3/IfcCompositeProfileDef.h"
#include "ifc2x3/IfcCompressorType.h"
#include "ifc2x3/IfcCondenserType.h"
#include "ifc2x3/IfcCondition.h"
#include "ifc2x3/IfcConditionCriterion.h"
#include "ifc2x3/IfcConnectedFaceSet.h"
#include "ifc2x3/IfcConnectionCurveGeometry.h"
#include "ifc2x3/IfcConnectionPointEccentricity.h"
#include "ifc2x3/IfcConnectionPointGeometry.h"
#include "ifc2x3/IfcConnectionPortGeometry.h"
#include "ifc2x3/IfcConnectionSurfaceGeometry.h"
#include "ifc2x3/IfcConstraintAggregationRelationship.h"
#include "ifc2x3/IfcConstraintClassificationRelationship.h"
#include "ifc2x3/IfcConstraintRelationship.h"
#include "ifc2x3/IfcConstructionEquipmentResource.h"
#include "ifc2x3/IfcConstructionMaterialResource.h"
#include "ifc2x3/IfcConstructionProductResource.h"
#include "ifc2x3/IfcContextDependentUnit.h"
#include "ifc2x3/IfcControllerType.h"
#include "ifc2x3/IfcConversionBasedUnit.h"
#include "ifc2x3/IfcCooledBeamType.h"
#include "ifc2x3/IfcCoolingTowerType.h"
#include "ifc2x3/IfcCoordinatedUniversalTimeOffset.h"
#include "ifc2x3/IfcCostItem.h"
#include "ifc2x3/IfcCostSchedule.h"
#include "ifc2x3/IfcCostValue.h"
#include "ifc2x3/IfcCovering.h"
#include "ifc2x3/IfcCoveringType.h"
#include "ifc2x3/IfcCraneRailAShapeProfileDef.h"
#include "ifc2x3/IfcCraneRailFShapeProfileDef.h"
#include "ifc2x3/IfcCrewResource.h"
#include "ifc2x3/IfcCsgSolid.h"
#include "ifc2x3/IfcCurrencyRelationship.h"
#include "ifc2x3/IfcCurtainWall.h"
#include "ifc2x3/IfcCurtainWallType.h"
#include "ifc2x3/IfcCurveBoundedPlane.h"
#include "ifc2x3/IfcCurveStyle.h"
#include "ifc2x3/IfcCurveStyleFont.h"
#include "ifc2x3/IfcCurveStyleFontAndScaling.h"
#include "ifc2x3/IfcCurveStyleFontPattern.h"
#include "ifc2x3/IfcDamperType.h"
#include "ifc2x3/IfcDateAndTime.h"
#include "ifc2x3/IfcDefinedSymbol.h"
#include "ifc2x3/IfcDerivedProfileDef.h"
#include "ifc2x3/IfcDerivedUnit.h"
#include "ifc2x3/IfcDerivedUnitElement.h"
#include "ifc2x3/IfcDiameterDimension.h"
#include "ifc2x3/IfcDimensionCalloutRelationship.h"
#include "ifc2x3/IfcDimensionCurve.h"
#include "ifc2x3/IfcDimensionCurveDirectedCallout.h"
#include "ifc2x3/IfcDimensionCurveTerminator.h"
#include "ifc2x3/IfcDimensionPair.h"
#include "ifc2x3/IfcDimensionalExponents.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcDiscreteAccessory.h"
#include "ifc2x3/IfcDiscreteAccessoryType.h"
#include "ifc2x3/IfcDistributionChamberElement.h"
#include "ifc2x3/IfcDistributionChamberElementType.h"
#include "ifc2x3/IfcDistributionControlElement.h"
#include "ifc2x3/IfcDistributionElement.h"
#include "ifc2x3/IfcDistributionElementType.h"
#include "ifc2x3/IfcDistributionFlowElement.h"
#include "ifc2x3/IfcDistributionPort.h"
#include "ifc2x3/IfcDocumentElectronicFormat.h"
#include "ifc2x3/IfcDocumentInformation.h"
#include "ifc2x3/IfcDocumentInformationRelationship.h"
#include "ifc2x3/IfcDocumentReference.h"
#include "ifc2x3/IfcDoor.h"
#include "ifc2x3/IfcDoorLiningProperties.h"
#include "ifc2x3/IfcDoorPanelProperties.h"
#include "ifc2x3/IfcDoorStyle.h"
#include "ifc2x3/IfcDraughtingCallout.h"
#include "ifc2x3/IfcDraughtingCalloutRelationship.h"
#include "ifc2x3/IfcDraughtingPreDefinedColour.h"
#include "ifc2x3/IfcDraughtingPreDefinedCurveFont.h"
#include "ifc2x3/IfcDraughtingPreDefinedTextFont.h"
#include "ifc2x3/IfcDuctFittingType.h"
#include "ifc2x3/IfcDuctSegmentType.h"
#include "ifc2x3/IfcDuctSilencerType.h"
#include "ifc2x3/IfcEdge.h"
#include "ifc2x3/IfcEdgeCurve.h"
#include "ifc2x3/IfcEdgeLoop.h"
#include "ifc2x3/IfcElectricApplianceType.h"
#include "ifc2x3/IfcElectricDistributionPoint.h"
#include "ifc2x3/IfcElectricFlowStorageDeviceType.h"
#include "ifc2x3/IfcElectricGeneratorType.h"
#include "ifc2x3/IfcElectricHeaterType.h"
#include "ifc2x3/IfcElectricMotorType.h"
#include "ifc2x3/IfcElectricTimeControlType.h"
#include "ifc2x3/IfcElectricalBaseProperties.h"
#include "ifc2x3/IfcElectricalCircuit.h"
#include "ifc2x3/IfcElectricalElement.h"
#include "ifc2x3/IfcElementAssembly.h"
#include "ifc2x3/IfcElementQuantity.h"
#include "ifc2x3/IfcEllipse.h"
#include "ifc2x3/IfcEllipseProfileDef.h"
#include "ifc2x3/IfcEnergyConversionDevice.h"
#include "ifc2x3/IfcEnergyProperties.h"
#include "ifc2x3/IfcEnvironmentalImpactValue.h"
#include "ifc2x3/IfcEquipmentElement.h"
#include "ifc2x3/IfcEquipmentStandard.h"
#include "ifc2x3/IfcEvaporativeCoolerType.h"
#include "ifc2x3/IfcEvaporatorType.h"
#include "ifc2x3/IfcExtendedMaterialProperties.h"
#include "ifc2x3/IfcExternallyDefinedHatchStyle.h"
#include "ifc2x3/IfcExternallyDefinedSurfaceStyle.h"
#include "ifc2x3/IfcExternallyDefinedSymbol.h"
#include "ifc2x3/IfcExternallyDefinedTextFont.h"
#include "ifc2x3/IfcExtrudedAreaSolid.h"
#include "ifc2x3/IfcFace.h"
#include "ifc2x3/IfcFaceBasedSurfaceModel.h"
#include "ifc2x3/IfcFaceBound.h"
#include "ifc2x3/IfcFaceOuterBound.h"
#include "ifc2x3/IfcFaceSurface.h"
#include "ifc2x3/IfcFacetedBrep.h"
#include "ifc2x3/IfcFacetedBrepWithVoids.h"
#include "ifc2x3/IfcFailureConnectionCondition.h"
#include "ifc2x3/IfcFanType.h"
#include "ifc2x3/IfcFastener.h"
#include "ifc2x3/IfcFastenerType.h"
#include "ifc2x3/IfcFillAreaStyle.h"
#include "ifc2x3/IfcFillAreaStyleHatching.h"
#include "ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h"
#include "ifc2x3/IfcFillAreaStyleTiles.h"
#include "ifc2x3/IfcFilterType.h"
#include "ifc2x3/IfcFireSuppressionTerminalType.h"
#include "ifc2x3/IfcFlowController.h"
#include "ifc2x3/IfcFlowFitting.h"
#include "ifc2x3/IfcFlowInstrumentType.h"
#include "ifc2x3/IfcFlowMeterType.h"
#include "ifc2x3/IfcFlowMovingDevice.h"
#include "ifc2x3/IfcFlowSegment.h"
#include "ifc2x3/IfcFlowStorageDevice.h"
#include "ifc2x3/IfcFlowTerminal.h"
#include "ifc2x3/IfcFlowTreatmentDevice.h"
#include "ifc2x3/IfcFluidFlowProperties.h"
#include "ifc2x3/IfcFooting.h"
#include "ifc2x3/IfcFuelProperties.h"
#include "ifc2x3/IfcFurnishingElement.h"
#include "ifc2x3/IfcFurnishingElementType.h"
#include "ifc2x3/IfcFurnitureStandard.h"
#include "ifc2x3/IfcFurnitureType.h"
#include "ifc2x3/IfcGasTerminalType.h"
#include "ifc2x3/IfcGeneralMaterialProperties.h"
#include "ifc2x3/IfcGeneralProfileProperties.h"
#include "ifc2x3/IfcGeometricCurveSet.h"
#include "ifc2x3/IfcGeometricRepresentationContext.h"
#include "ifc2x3/IfcGeometricRepresentationSubContext.h"
#include "ifc2x3/IfcGeometricSet.h"
#include "ifc2x3/IfcGrid.h"
#include "ifc2x3/IfcGridAxis.h"
#include "ifc2x3/IfcGridPlacement.h"
#include "ifc2x3/IfcGroup.h"
#include "ifc2x3/IfcHalfSpaceSolid.h"
#include "ifc2x3/IfcHeatExchangerType.h"
#include "ifc2x3/IfcHumidifierType.h"
#include "ifc2x3/IfcHygroscopicMaterialProperties.h"
#include "ifc2x3/IfcIShapeProfileDef.h"
#include "ifc2x3/IfcImageTexture.h"
#include "ifc2x3/IfcInventory.h"
#include "ifc2x3/IfcIrregularTimeSeries.h"
#include "ifc2x3/IfcIrregularTimeSeriesValue.h"
#include "ifc2x3/IfcJunctionBoxType.h"
#include "ifc2x3/IfcLShapeProfileDef.h"
#include "ifc2x3/IfcLaborResource.h"
#include "ifc2x3/IfcLampType.h"
#include "ifc2x3/IfcLibraryInformation.h"
#include "ifc2x3/IfcLibraryReference.h"
#include "ifc2x3/IfcLightDistributionData.h"
#include "ifc2x3/IfcLightFixtureType.h"
#include "ifc2x3/IfcLightIntensityDistribution.h"
#include "ifc2x3/IfcLightSourceAmbient.h"
#include "ifc2x3/IfcLightSourceDirectional.h"
#include "ifc2x3/IfcLightSourceGoniometric.h"
#include "ifc2x3/IfcLightSourcePositional.h"
#include "ifc2x3/IfcLightSourceSpot.h"
#include "ifc2x3/IfcLine.h"
#include "ifc2x3/IfcLinearDimension.h"
#include "ifc2x3/IfcLocalPlacement.h"
#include "ifc2x3/IfcLocalTime.h"
#include "ifc2x3/IfcLoop.h"
#include "ifc2x3/IfcMappedItem.h"
#include "ifc2x3/IfcMaterial.h"
#include "ifc2x3/IfcMaterialClassificationRelationship.h"
#include "ifc2x3/IfcMaterialDefinitionRepresentation.h"
#include "ifc2x3/IfcMaterialLayer.h"
#include "ifc2x3/IfcMaterialLayerSet.h"
#include "ifc2x3/IfcMaterialLayerSetUsage.h"
#include "ifc2x3/IfcMaterialList.h"
#include "ifc2x3/IfcMeasureWithUnit.h"
#include "ifc2x3/IfcMechanicalConcreteMaterialProperties.h"
#include "ifc2x3/IfcMechanicalFastener.h"
#include "ifc2x3/IfcMechanicalFastenerType.h"
#include "ifc2x3/IfcMechanicalMaterialProperties.h"
#include "ifc2x3/IfcMechanicalSteelMaterialProperties.h"
#include "ifc2x3/IfcMember.h"
#include "ifc2x3/IfcMemberType.h"
#include "ifc2x3/IfcMetric.h"
#include "ifc2x3/IfcMonetaryUnit.h"
#include "ifc2x3/IfcMotorConnectionType.h"
#include "ifc2x3/IfcMove.h"
#include "ifc2x3/IfcObjective.h"
#include "ifc2x3/IfcOccupant.h"
#include "ifc2x3/IfcOffsetCurve2D.h"
#include "ifc2x3/IfcOffsetCurve3D.h"
#include "ifc2x3/IfcOneDirectionRepeatFactor.h"
#include "ifc2x3/IfcOpenShell.h"
#include "ifc2x3/IfcOpeningElement.h"
#include "ifc2x3/IfcOpticalMaterialProperties.h"
#include "ifc2x3/IfcOrderAction.h"
#include "ifc2x3/IfcOrganization.h"
#include "ifc2x3/IfcOrganizationRelationship.h"
#include "ifc2x3/IfcOrientedEdge.h"
#include "ifc2x3/IfcOutletType.h"
#include "ifc2x3/IfcOwnerHistory.h"
#include "ifc2x3/IfcPath.h"
#include "ifc2x3/IfcPerformanceHistory.h"
#include "ifc2x3/IfcPermeableCoveringProperties.h"
#include "ifc2x3/IfcPermit.h"
#include "ifc2x3/IfcPerson.h"
#include "ifc2x3/IfcPersonAndOrganization.h"
#include "ifc2x3/IfcPhysicalComplexQuantity.h"
#include "ifc2x3/IfcPile.h"
#include "ifc2x3/IfcPipeFittingType.h"
#include "ifc2x3/IfcPipeSegmentType.h"
#include "ifc2x3/IfcPixelTexture.h"
#include "ifc2x3/IfcPlanarBox.h"
#include "ifc2x3/IfcPlanarExtent.h"
#include "ifc2x3/IfcPlane.h"
#include "ifc2x3/IfcPlate.h"
#include "ifc2x3/IfcPlateType.h"
#include "ifc2x3/IfcPointOnCurve.h"
#include "ifc2x3/IfcPointOnSurface.h"
#include "ifc2x3/IfcPolyLoop.h"
#include "ifc2x3/IfcPolygonalBoundedHalfSpace.h"
#include "ifc2x3/IfcPolyline.h"
#include "ifc2x3/IfcPostalAddress.h"
#include "ifc2x3/IfcPreDefinedDimensionSymbol.h"
#include "ifc2x3/IfcPreDefinedPointMarkerSymbol.h"
#include "ifc2x3/IfcPreDefinedTerminatorSymbol.h"
#include "ifc2x3/IfcPresentationLayerAssignment.h"
#include "ifc2x3/IfcPresentationLayerWithStyle.h"
#include "ifc2x3/IfcPresentationStyleAssignment.h"
#include "ifc2x3/IfcProcedure.h"
#include "ifc2x3/IfcProductDefinitionShape.h"
#include "ifc2x3/IfcProductRepresentation.h"
#include "ifc2x3/IfcProductsOfCombustionProperties.h"
#include "ifc2x3/IfcProject.h"
#include "ifc2x3/IfcProjectOrder.h"
#include "ifc2x3/IfcProjectOrderRecord.h"
#include "ifc2x3/IfcProjectionCurve.h"
#include "ifc2x3/IfcProjectionElement.h"
#include "ifc2x3/IfcPropertyBoundedValue.h"
#include "ifc2x3/IfcPropertyConstraintRelationship.h"
#include "ifc2x3/IfcPropertyDependencyRelationship.h"
#include "ifc2x3/IfcPropertyEnumeratedValue.h"
#include "ifc2x3/IfcPropertyEnumeration.h"
#include "ifc2x3/IfcPropertyListValue.h"
#include "ifc2x3/IfcPropertyReferenceValue.h"
#include "ifc2x3/IfcPropertySet.h"
#include "ifc2x3/IfcPropertySingleValue.h"
#include "ifc2x3/IfcPropertyTableValue.h"
#include "ifc2x3/IfcProtectiveDeviceType.h"
#include "ifc2x3/IfcProxy.h"
#include "ifc2x3/IfcPumpType.h"
#include "ifc2x3/IfcQuantityArea.h"
#include "ifc2x3/IfcQuantityCount.h"
#include "ifc2x3/IfcQuantityLength.h"
#include "ifc2x3/IfcQuantityTime.h"
#include "ifc2x3/IfcQuantityVolume.h"
#include "ifc2x3/IfcQuantityWeight.h"
#include "ifc2x3/IfcRadiusDimension.h"
#include "ifc2x3/IfcRailing.h"
#include "ifc2x3/IfcRailingType.h"
#include "ifc2x3/IfcRamp.h"
#include "ifc2x3/IfcRampFlight.h"
#include "ifc2x3/IfcRampFlightType.h"
#include "ifc2x3/IfcRationalBezierCurve.h"
#include "ifc2x3/IfcRectangleHollowProfileDef.h"
#include "ifc2x3/IfcRectangleProfileDef.h"
#include "ifc2x3/IfcRectangularPyramid.h"
#include "ifc2x3/IfcRectangularTrimmedSurface.h"
#include "ifc2x3/IfcReferencesValueDocument.h"
#include "ifc2x3/IfcRegularTimeSeries.h"
#include "ifc2x3/IfcReinforcementBarProperties.h"
#include "ifc2x3/IfcReinforcementDefinitionProperties.h"
#include "ifc2x3/IfcReinforcingBar.h"
#include "ifc2x3/IfcReinforcingMesh.h"
#include "ifc2x3/IfcRelAggregates.h"
#include "ifc2x3/IfcRelAssignsTasks.h"
#include "ifc2x3/IfcRelAssignsToActor.h"
#include "ifc2x3/IfcRelAssignsToControl.h"
#include "ifc2x3/IfcRelAssignsToGroup.h"
#include "ifc2x3/IfcRelAssignsToProcess.h"
#include "ifc2x3/IfcRelAssignsToProduct.h"
#include "ifc2x3/IfcRelAssignsToProjectOrder.h"
#include "ifc2x3/IfcRelAssignsToResource.h"
#include "ifc2x3/IfcRelAssociates.h"
#include "ifc2x3/IfcRelAssociatesAppliedValue.h"
#include "ifc2x3/IfcRelAssociatesApproval.h"
#include "ifc2x3/IfcRelAssociatesClassification.h"
#include "ifc2x3/IfcRelAssociatesConstraint.h"
#include "ifc2x3/IfcRelAssociatesDocument.h"
#include "ifc2x3/IfcRelAssociatesLibrary.h"
#include "ifc2x3/IfcRelAssociatesMaterial.h"
#include "ifc2x3/IfcRelAssociatesProfileProperties.h"
#include "ifc2x3/IfcRelConnectsElements.h"
#include "ifc2x3/IfcRelConnectsPathElements.h"
#include "ifc2x3/IfcRelConnectsPortToElement.h"
#include "ifc2x3/IfcRelConnectsPorts.h"
#include "ifc2x3/IfcRelConnectsStructuralActivity.h"
#include "ifc2x3/IfcRelConnectsStructuralElement.h"
#include "ifc2x3/IfcRelConnectsStructuralMember.h"
#include "ifc2x3/IfcRelConnectsWithEccentricity.h"
#include "ifc2x3/IfcRelConnectsWithRealizingElements.h"
#include "ifc2x3/IfcRelContainedInSpatialStructure.h"
#include "ifc2x3/IfcRelCoversBldgElements.h"
#include "ifc2x3/IfcRelCoversSpaces.h"
#include "ifc2x3/IfcRelDefinesByProperties.h"
#include "ifc2x3/IfcRelDefinesByType.h"
#include "ifc2x3/IfcRelFillsElement.h"
#include "ifc2x3/IfcRelFlowControlElements.h"
#include "ifc2x3/IfcRelInteractionRequirements.h"
#include "ifc2x3/IfcRelNests.h"
#include "ifc2x3/IfcRelOccupiesSpaces.h"
#include "ifc2x3/IfcRelOverridesProperties.h"
#include "ifc2x3/IfcRelProjectsElement.h"
#include "ifc2x3/IfcRelReferencedInSpatialStructure.h"
#include "ifc2x3/IfcRelSchedulesCostItems.h"
#include "ifc2x3/IfcRelSequence.h"
#include "ifc2x3/IfcRelServicesBuildings.h"
#include "ifc2x3/IfcRelSpaceBoundary.h"
#include "ifc2x3/IfcRelVoidsElement.h"
#include "ifc2x3/IfcRelaxation.h"
#include "ifc2x3/IfcRepresentation.h"
#include "ifc2x3/IfcRepresentationContext.h"
#include "ifc2x3/IfcRepresentationMap.h"
#include "ifc2x3/IfcRevolvedAreaSolid.h"
#include "ifc2x3/IfcRibPlateProfileProperties.h"
#include "ifc2x3/IfcRightCircularCone.h"
#include "ifc2x3/IfcRightCircularCylinder.h"
#include "ifc2x3/IfcRoof.h"
#include "ifc2x3/IfcRoundedEdgeFeature.h"
#include "ifc2x3/IfcRoundedRectangleProfileDef.h"
#include "ifc2x3/IfcSIUnit.h"
#include "ifc2x3/IfcSanitaryTerminalType.h"
#include "ifc2x3/IfcScheduleTimeControl.h"
#include "ifc2x3/IfcSectionProperties.h"
#include "ifc2x3/IfcSectionReinforcementProperties.h"
#include "ifc2x3/IfcSectionedSpine.h"
#include "ifc2x3/IfcSensorType.h"
#include "ifc2x3/IfcServiceLife.h"
#include "ifc2x3/IfcServiceLifeFactor.h"
#include "ifc2x3/IfcShapeAspect.h"
#include "ifc2x3/IfcShapeRepresentation.h"
#include "ifc2x3/IfcShellBasedSurfaceModel.h"
#include "ifc2x3/IfcSite.h"
#include "ifc2x3/IfcSlab.h"
#include "ifc2x3/IfcSlabType.h"
#include "ifc2x3/IfcSlippageConnectionCondition.h"
#include "ifc2x3/IfcSoundProperties.h"
#include "ifc2x3/IfcSoundValue.h"
#include "ifc2x3/IfcSpace.h"
#include "ifc2x3/IfcSpaceHeaterType.h"
#include "ifc2x3/IfcSpaceProgram.h"
#include "ifc2x3/IfcSpaceThermalLoadProperties.h"
#include "ifc2x3/IfcSpaceType.h"
#include "ifc2x3/IfcSphere.h"
#include "ifc2x3/IfcStackTerminalType.h"
#include "ifc2x3/IfcStair.h"
#include "ifc2x3/IfcStairFlight.h"
#include "ifc2x3/IfcStairFlightType.h"
#include "ifc2x3/IfcStructuralAnalysisModel.h"
#include "ifc2x3/IfcStructuralCurveConnection.h"
#include "ifc2x3/IfcStructuralCurveMember.h"
#include "ifc2x3/IfcStructuralCurveMemberVarying.h"
#include "ifc2x3/IfcStructuralLinearAction.h"
#include "ifc2x3/IfcStructuralLinearActionVarying.h"
#include "ifc2x3/IfcStructuralLoadGroup.h"
#include "ifc2x3/IfcStructuralLoadLinearForce.h"
#include "ifc2x3/IfcStructuralLoadPlanarForce.h"
#include "ifc2x3/IfcStructuralLoadSingleDisplacement.h"
#include "ifc2x3/IfcStructuralLoadSingleDisplacementDistortion.h"
#include "ifc2x3/IfcStructuralLoadSingleForce.h"
#include "ifc2x3/IfcStructuralLoadSingleForceWarping.h"
#include "ifc2x3/IfcStructuralLoadTemperature.h"
#include "ifc2x3/IfcStructuralPlanarAction.h"
#include "ifc2x3/IfcStructuralPlanarActionVarying.h"
#include "ifc2x3/IfcStructuralPointAction.h"
#include "ifc2x3/IfcStructuralPointConnection.h"
#include "ifc2x3/IfcStructuralPointReaction.h"
#include "ifc2x3/IfcStructuralProfileProperties.h"
#include "ifc2x3/IfcStructuralResultGroup.h"
#include "ifc2x3/IfcStructuralSteelProfileProperties.h"
#include "ifc2x3/IfcStructuralSurfaceConnection.h"
#include "ifc2x3/IfcStructuralSurfaceMember.h"
#include "ifc2x3/IfcStructuralSurfaceMemberVarying.h"
#include "ifc2x3/IfcStructuredDimensionCallout.h"
#include "ifc2x3/IfcStyledItem.h"
#include "ifc2x3/IfcStyledRepresentation.h"
#include "ifc2x3/IfcSubContractResource.h"
#include "ifc2x3/IfcSubedge.h"
#include "ifc2x3/IfcSurfaceCurveSweptAreaSolid.h"
#include "ifc2x3/IfcSurfaceOfLinearExtrusion.h"
#include "ifc2x3/IfcSurfaceOfRevolution.h"
#include "ifc2x3/IfcSurfaceStyle.h"
#include "ifc2x3/IfcSurfaceStyleLighting.h"
#include "ifc2x3/IfcSurfaceStyleRefraction.h"
#include "ifc2x3/IfcSurfaceStyleRendering.h"
#include "ifc2x3/IfcSurfaceStyleShading.h"
#include "ifc2x3/IfcSurfaceStyleWithTextures.h"
#include "ifc2x3/IfcSweptDiskSolid.h"
#include "ifc2x3/IfcSwitchingDeviceType.h"
#include "ifc2x3/IfcSymbolStyle.h"
#include "ifc2x3/IfcSystem.h"
#include "ifc2x3/IfcSystemFurnitureElementType.h"
#include "ifc2x3/IfcTShapeProfileDef.h"
#include "ifc2x3/IfcTable.h"
#include "ifc2x3/IfcTableRow.h"
#include "ifc2x3/IfcTankType.h"
#include "ifc2x3/IfcTask.h"
#include "ifc2x3/IfcTelecomAddress.h"
#include "ifc2x3/IfcTendon.h"
#include "ifc2x3/IfcTendonAnchor.h"
#include "ifc2x3/IfcTerminatorSymbol.h"
#include "ifc2x3/IfcTextLiteral.h"
#include "ifc2x3/IfcTextLiteralWithExtent.h"
#include "ifc2x3/IfcTextStyle.h"
#include "ifc2x3/IfcTextStyleFontModel.h"
#include "ifc2x3/IfcTextStyleForDefinedFont.h"
#include "ifc2x3/IfcTextStyleTextModel.h"
#include "ifc2x3/IfcTextStyleWithBoxCharacteristics.h"
#include "ifc2x3/IfcTextureCoordinateGenerator.h"
#include "ifc2x3/IfcTextureMap.h"
#include "ifc2x3/IfcTextureVertex.h"
#include "ifc2x3/IfcThermalMaterialProperties.h"
#include "ifc2x3/IfcTimeSeriesReferenceRelationship.h"
#include "ifc2x3/IfcTimeSeriesSchedule.h"
#include "ifc2x3/IfcTimeSeriesValue.h"
#include "ifc2x3/IfcTopologyRepresentation.h"
#include "ifc2x3/IfcTransformerType.h"
#include "ifc2x3/IfcTransportElement.h"
#include "ifc2x3/IfcTransportElementType.h"
#include "ifc2x3/IfcTrapeziumProfileDef.h"
#include "ifc2x3/IfcTrimmedCurve.h"
#include "ifc2x3/IfcTubeBundleType.h"
#include "ifc2x3/IfcTwoDirectionRepeatFactor.h"
#include "ifc2x3/IfcTypeObject.h"
#include "ifc2x3/IfcTypeProduct.h"
#include "ifc2x3/IfcUShapeProfileDef.h"
#include "ifc2x3/IfcUnitAssignment.h"
#include "ifc2x3/IfcUnitaryEquipmentType.h"
#include "ifc2x3/IfcValveType.h"
#include "ifc2x3/IfcVector.h"
#include "ifc2x3/IfcVertex.h"
#include "ifc2x3/IfcVertexBasedTextureMap.h"
#include "ifc2x3/IfcVertexLoop.h"
#include "ifc2x3/IfcVertexPoint.h"
#include "ifc2x3/IfcVibrationIsolatorType.h"
#include "ifc2x3/IfcVirtualElement.h"
#include "ifc2x3/IfcVirtualGridIntersection.h"
#include "ifc2x3/IfcWall.h"
#include "ifc2x3/IfcWallStandardCase.h"
#include "ifc2x3/IfcWallType.h"
#include "ifc2x3/IfcWasteTerminalType.h"
#include "ifc2x3/IfcWaterProperties.h"
#include "ifc2x3/IfcWindow.h"
#include "ifc2x3/IfcWindowLiningProperties.h"
#include "ifc2x3/IfcWindowPanelProperties.h"
#include "ifc2x3/IfcWindowStyle.h"
#include "ifc2x3/IfcWorkPlan.h"
#include "ifc2x3/IfcWorkSchedule.h"
#include "ifc2x3/IfcZShapeProfileDef.h"
#include "ifc2x3/IfcZone.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/BaseSPFObject.h>
#include <Step/SPFData.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcLightIntensityDistribution *ExpressDataSet::getIfcLightIntensityDistribution(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLightIntensityDistribution * > (current->second.get());
    }
    else {
        IfcLightIntensityDistribution *ret = static_cast< IfcLightIntensityDistribution * > (allocateIfcLightIntensityDistribution(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLightIntensityDistribution(IfcLightIntensityDistribution *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcLightIntensityDistribution_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLightIntensityDistribution(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLightIntensityDistribution *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLightIntensityDistribution(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLightIntensityDistribution_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLightIntensityDistribution > ExpressDataSet::createIfcLightIntensityDistribution(bool isVolatile) {
    if (isVolatile) {
        return new IfcLightIntensityDistribution(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLightIntensityDistribution * > (allocateIfcLightIntensityDistribution(this, Step::Id_UNSET));
    }
}

IfcLightIntensityDistribution *ExpressDataSet::cloneIfcLightIntensityDistribution(ExpressDataSet *expressDataSet, const IfcLightIntensityDistribution &obj, const CopyOp &copyop) {
    IfcLightIntensityDistribution *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLightIntensityDistribution(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLightIntensityDistribution_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLightIntensityDistribution *ExpressDataSet::cloneIfcLightIntensityDistribution(const IfcLightIntensityDistribution &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLightIntensityDistribution(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLightIntensityDistribution(this, obj, copyop);
    }
}

IfcLightSourceAmbient *ExpressDataSet::getIfcLightSourceAmbient(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLightSourceAmbient * > (current->second.get());
    }
    else {
        IfcLightSourceAmbient *ret = static_cast< IfcLightSourceAmbient * > (allocateIfcLightSourceAmbient(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLightSourceAmbient(IfcLightSourceAmbient *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcLightSourceAmbient_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLightSourceAmbient(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLightSourceAmbient *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLightSourceAmbient(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLightSourceAmbient_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLightSourceAmbient > ExpressDataSet::createIfcLightSourceAmbient(bool isVolatile) {
    if (isVolatile) {
        return new IfcLightSourceAmbient(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLightSourceAmbient * > (allocateIfcLightSourceAmbient(this, Step::Id_UNSET));
    }
}

IfcLightSourceAmbient *ExpressDataSet::cloneIfcLightSourceAmbient(ExpressDataSet *expressDataSet, const IfcLightSourceAmbient &obj, const CopyOp &copyop) {
    IfcLightSourceAmbient *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLightSourceAmbient(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLightSourceAmbient_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLightSourceAmbient *ExpressDataSet::cloneIfcLightSourceAmbient(const IfcLightSourceAmbient &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLightSourceAmbient(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLightSourceAmbient(this, obj, copyop);
    }
}

IfcLightSourceDirectional *ExpressDataSet::getIfcLightSourceDirectional(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLightSourceDirectional * > (current->second.get());
    }
    else {
        IfcLightSourceDirectional *ret = static_cast< IfcLightSourceDirectional * > (allocateIfcLightSourceDirectional(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLightSourceDirectional(IfcLightSourceDirectional *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcLightSourceDirectional_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLightSourceDirectional(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLightSourceDirectional *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLightSourceDirectional(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLightSourceDirectional_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLightSourceDirectional > ExpressDataSet::createIfcLightSourceDirectional(bool isVolatile) {
    if (isVolatile) {
        return new IfcLightSourceDirectional(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLightSourceDirectional * > (allocateIfcLightSourceDirectional(this, Step::Id_UNSET));
    }
}

IfcLightSourceDirectional *ExpressDataSet::cloneIfcLightSourceDirectional(ExpressDataSet *expressDataSet, const IfcLightSourceDirectional &obj, const CopyOp &copyop) {
    IfcLightSourceDirectional *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLightSourceDirectional(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLightSourceDirectional_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLightSourceDirectional *ExpressDataSet::cloneIfcLightSourceDirectional(const IfcLightSourceDirectional &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLightSourceDirectional(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLightSourceDirectional(this, obj, copyop);
    }
}

IfcLightSourceGoniometric *ExpressDataSet::getIfcLightSourceGoniometric(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLightSourceGoniometric * > (current->second.get());
    }
    else {
        IfcLightSourceGoniometric *ret = static_cast< IfcLightSourceGoniometric * > (allocateIfcLightSourceGoniometric(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLightSourceGoniometric(IfcLightSourceGoniometric *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcLightSourceGoniometric_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLightSourceGoniometric(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLightSourceGoniometric *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLightSourceGoniometric(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLightSourceGoniometric_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLightSourceGoniometric > ExpressDataSet::createIfcLightSourceGoniometric(bool isVolatile) {
    if (isVolatile) {
        return new IfcLightSourceGoniometric(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLightSourceGoniometric * > (allocateIfcLightSourceGoniometric(this, Step::Id_UNSET));
    }
}

IfcLightSourceGoniometric *ExpressDataSet::cloneIfcLightSourceGoniometric(ExpressDataSet *expressDataSet, const IfcLightSourceGoniometric &obj, const CopyOp &copyop) {
    IfcLightSourceGoniometric *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLightSourceGoniometric(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLightSourceGoniometric_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLightSourceGoniometric *ExpressDataSet::cloneIfcLightSourceGoniometric(const IfcLightSourceGoniometric &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLightSourceGoniometric(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLightSourceGoniometric(this, obj, copyop);
    }
}

IfcLightSourcePositional *ExpressDataSet::getIfcLightSourcePositional(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLightSourcePositional * > (current->second.get());
    }
    else {
        IfcLightSourcePositional *ret = static_cast< IfcLightSourcePositional * > (allocateIfcLightSourcePositional(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLightSourcePositional(IfcLightSourcePositional *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcLightSourcePositional_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLightSourcePositional(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLightSourcePositional *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLightSourcePositional(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLightSourcePositional_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLightSourcePositional > ExpressDataSet::createIfcLightSourcePositional(bool isVolatile) {
    if (isVolatile) {
        return new IfcLightSourcePositional(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLightSourcePositional * > (allocateIfcLightSourcePositional(this, Step::Id_UNSET));
    }
}

IfcLightSourcePositional *ExpressDataSet::cloneIfcLightSourcePositional(ExpressDataSet *expressDataSet, const IfcLightSourcePositional &obj, const CopyOp &copyop) {
    IfcLightSourcePositional *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLightSourcePositional(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLightSourcePositional_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLightSourcePositional *ExpressDataSet::cloneIfcLightSourcePositional(const IfcLightSourcePositional &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLightSourcePositional(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLightSourcePositional(this, obj, copyop);
    }
}

IfcLightSourceSpot *ExpressDataSet::getIfcLightSourceSpot(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLightSourceSpot * > (current->second.get());
    }
    else {
        IfcLightSourceSpot *ret = static_cast< IfcLightSourceSpot * > (allocateIfcLightSourceSpot(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLightSourceSpot(IfcLightSourceSpot *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcLightSourceSpot_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLightSourceSpot(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLightSourceSpot *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLightSourceSpot(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLightSourceSpot_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLightSourceSpot > ExpressDataSet::createIfcLightSourceSpot(bool isVolatile) {
    if (isVolatile) {
        return new IfcLightSourceSpot(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLightSourceSpot * > (allocateIfcLightSourceSpot(this, Step::Id_UNSET));
    }
}

IfcLightSourceSpot *ExpressDataSet::cloneIfcLightSourceSpot(ExpressDataSet *expressDataSet, const IfcLightSourceSpot &obj, const CopyOp &copyop) {
    IfcLightSourceSpot *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLightSourceSpot(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLightSourceSpot_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLightSourceSpot *ExpressDataSet::cloneIfcLightSourceSpot(const IfcLightSourceSpot &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLightSourceSpot(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLightSourceSpot(this, obj, copyop);
    }
}

IfcLine *ExpressDataSet::getIfcLine(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLine * > (current->second.get());
    }
    else {
        IfcLine *ret = static_cast< IfcLine * > (allocateIfcLine(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLine(IfcLine *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcLine_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLine(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLine *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLine(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLine_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLine > ExpressDataSet::createIfcLine(bool isVolatile) {
    if (isVolatile) {
        return new IfcLine(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLine * > (allocateIfcLine(this, Step::Id_UNSET));
    }
}

IfcLine *ExpressDataSet::cloneIfcLine(ExpressDataSet *expressDataSet, const IfcLine &obj, const CopyOp &copyop) {
    IfcLine *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLine(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLine_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLine *ExpressDataSet::cloneIfcLine(const IfcLine &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLine(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLine(this, obj, copyop);
    }
}

IfcLinearDimension *ExpressDataSet::getIfcLinearDimension(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLinearDimension * > (current->second.get());
    }
    else {
        IfcLinearDimension *ret = static_cast< IfcLinearDimension * > (allocateIfcLinearDimension(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLinearDimension(IfcLinearDimension *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcLinearDimension_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLinearDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLinearDimension *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLinearDimension(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLinearDimension_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLinearDimension > ExpressDataSet::createIfcLinearDimension(bool isVolatile) {
    if (isVolatile) {
        return new IfcLinearDimension(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLinearDimension * > (allocateIfcLinearDimension(this, Step::Id_UNSET));
    }
}

IfcLinearDimension *ExpressDataSet::cloneIfcLinearDimension(ExpressDataSet *expressDataSet, const IfcLinearDimension &obj, const CopyOp &copyop) {
    IfcLinearDimension *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLinearDimension(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLinearDimension_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLinearDimension *ExpressDataSet::cloneIfcLinearDimension(const IfcLinearDimension &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLinearDimension(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLinearDimension(this, obj, copyop);
    }
}

IfcLocalPlacement *ExpressDataSet::getIfcLocalPlacement(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLocalPlacement * > (current->second.get());
    }
    else {
        IfcLocalPlacement *ret = static_cast< IfcLocalPlacement * > (allocateIfcLocalPlacement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLocalPlacement(IfcLocalPlacement *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcLocalPlacement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLocalPlacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLocalPlacement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLocalPlacement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLocalPlacement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLocalPlacement > ExpressDataSet::createIfcLocalPlacement(bool isVolatile) {
    if (isVolatile) {
        return new IfcLocalPlacement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLocalPlacement * > (allocateIfcLocalPlacement(this, Step::Id_UNSET));
    }
}

IfcLocalPlacement *ExpressDataSet::cloneIfcLocalPlacement(ExpressDataSet *expressDataSet, const IfcLocalPlacement &obj, const CopyOp &copyop) {
    IfcLocalPlacement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLocalPlacement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLocalPlacement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLocalPlacement *ExpressDataSet::cloneIfcLocalPlacement(const IfcLocalPlacement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLocalPlacement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLocalPlacement(this, obj, copyop);
    }
}

IfcLocalTime *ExpressDataSet::getIfcLocalTime(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLocalTime * > (current->second.get());
    }
    else {
        IfcLocalTime *ret = static_cast< IfcLocalTime * > (allocateIfcLocalTime(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLocalTime(IfcLocalTime *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcLocalTime_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLocalTime(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLocalTime *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLocalTime(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLocalTime_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLocalTime > ExpressDataSet::createIfcLocalTime(bool isVolatile) {
    if (isVolatile) {
        return new IfcLocalTime(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLocalTime * > (allocateIfcLocalTime(this, Step::Id_UNSET));
    }
}

IfcLocalTime *ExpressDataSet::cloneIfcLocalTime(ExpressDataSet *expressDataSet, const IfcLocalTime &obj, const CopyOp &copyop) {
    IfcLocalTime *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLocalTime(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLocalTime_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLocalTime *ExpressDataSet::cloneIfcLocalTime(const IfcLocalTime &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLocalTime(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLocalTime(this, obj, copyop);
    }
}

IfcLoop *ExpressDataSet::getIfcLoop(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLoop * > (current->second.get());
    }
    else {
        IfcLoop *ret = static_cast< IfcLoop * > (allocateIfcLoop(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLoop(IfcLoop *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcLoop_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLoop *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLoop(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLoop_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLoop > ExpressDataSet::createIfcLoop(bool isVolatile) {
    if (isVolatile) {
        return new IfcLoop(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLoop * > (allocateIfcLoop(this, Step::Id_UNSET));
    }
}

IfcLoop *ExpressDataSet::cloneIfcLoop(ExpressDataSet *expressDataSet, const IfcLoop &obj, const CopyOp &copyop) {
    IfcLoop *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLoop(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLoop_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLoop *ExpressDataSet::cloneIfcLoop(const IfcLoop &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLoop(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLoop(this, obj, copyop);
    }
}

IfcMappedItem *ExpressDataSet::getIfcMappedItem(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMappedItem * > (current->second.get());
    }
    else {
        IfcMappedItem *ret = static_cast< IfcMappedItem * > (allocateIfcMappedItem(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMappedItem(IfcMappedItem *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMappedItem_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMappedItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMappedItem *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMappedItem(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMappedItem_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMappedItem > ExpressDataSet::createIfcMappedItem(bool isVolatile) {
    if (isVolatile) {
        return new IfcMappedItem(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMappedItem * > (allocateIfcMappedItem(this, Step::Id_UNSET));
    }
}

IfcMappedItem *ExpressDataSet::cloneIfcMappedItem(ExpressDataSet *expressDataSet, const IfcMappedItem &obj, const CopyOp &copyop) {
    IfcMappedItem *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMappedItem(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMappedItem_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMappedItem *ExpressDataSet::cloneIfcMappedItem(const IfcMappedItem &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMappedItem(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMappedItem(this, obj, copyop);
    }
}

IfcMaterial *ExpressDataSet::getIfcMaterial(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMaterial * > (current->second.get());
    }
    else {
        IfcMaterial *ret = static_cast< IfcMaterial * > (allocateIfcMaterial(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMaterial(IfcMaterial *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMaterial_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMaterial(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMaterial *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMaterial(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMaterial_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMaterial > ExpressDataSet::createIfcMaterial(bool isVolatile) {
    if (isVolatile) {
        return new IfcMaterial(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMaterial * > (allocateIfcMaterial(this, Step::Id_UNSET));
    }
}

IfcMaterial *ExpressDataSet::cloneIfcMaterial(ExpressDataSet *expressDataSet, const IfcMaterial &obj, const CopyOp &copyop) {
    IfcMaterial *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMaterial(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMaterial_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMaterial *ExpressDataSet::cloneIfcMaterial(const IfcMaterial &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMaterial(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMaterial(this, obj, copyop);
    }
}

IfcMaterialClassificationRelationship *ExpressDataSet::getIfcMaterialClassificationRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMaterialClassificationRelationship * > (current->second.get());
    }
    else {
        IfcMaterialClassificationRelationship *ret = static_cast< IfcMaterialClassificationRelationship * > (allocateIfcMaterialClassificationRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMaterialClassificationRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMaterialClassificationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMaterialClassificationRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMaterialClassificationRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMaterialClassificationRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMaterialClassificationRelationship > ExpressDataSet::createIfcMaterialClassificationRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcMaterialClassificationRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMaterialClassificationRelationship * > (allocateIfcMaterialClassificationRelationship(this, Step::Id_UNSET));
    }
}

IfcMaterialClassificationRelationship *ExpressDataSet::cloneIfcMaterialClassificationRelationship(ExpressDataSet *expressDataSet, const IfcMaterialClassificationRelationship &obj, const CopyOp &copyop) {
    IfcMaterialClassificationRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMaterialClassificationRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMaterialClassificationRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMaterialClassificationRelationship *ExpressDataSet::cloneIfcMaterialClassificationRelationship(const IfcMaterialClassificationRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMaterialClassificationRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMaterialClassificationRelationship(this, obj, copyop);
    }
}

IfcMaterialDefinitionRepresentation *ExpressDataSet::getIfcMaterialDefinitionRepresentation(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMaterialDefinitionRepresentation * > (current->second.get());
    }
    else {
        IfcMaterialDefinitionRepresentation *ret = static_cast< IfcMaterialDefinitionRepresentation * > (allocateIfcMaterialDefinitionRepresentation(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMaterialDefinitionRepresentation_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMaterialDefinitionRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMaterialDefinitionRepresentation *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMaterialDefinitionRepresentation(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMaterialDefinitionRepresentation_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMaterialDefinitionRepresentation > ExpressDataSet::createIfcMaterialDefinitionRepresentation(bool isVolatile) {
    if (isVolatile) {
        return new IfcMaterialDefinitionRepresentation(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMaterialDefinitionRepresentation * > (allocateIfcMaterialDefinitionRepresentation(this, Step::Id_UNSET));
    }
}

IfcMaterialDefinitionRepresentation *ExpressDataSet::cloneIfcMaterialDefinitionRepresentation(ExpressDataSet *expressDataSet, const IfcMaterialDefinitionRepresentation &obj, const CopyOp &copyop) {
    IfcMaterialDefinitionRepresentation *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMaterialDefinitionRepresentation(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMaterialDefinitionRepresentation_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMaterialDefinitionRepresentation *ExpressDataSet::cloneIfcMaterialDefinitionRepresentation(const IfcMaterialDefinitionRepresentation &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMaterialDefinitionRepresentation(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMaterialDefinitionRepresentation(this, obj, copyop);
    }
}

IfcMaterialLayer *ExpressDataSet::getIfcMaterialLayer(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMaterialLayer * > (current->second.get());
    }
    else {
        IfcMaterialLayer *ret = static_cast< IfcMaterialLayer * > (allocateIfcMaterialLayer(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMaterialLayer(IfcMaterialLayer *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMaterialLayer_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMaterialLayer(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMaterialLayer *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMaterialLayer(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMaterialLayer_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMaterialLayer > ExpressDataSet::createIfcMaterialLayer(bool isVolatile) {
    if (isVolatile) {
        return new IfcMaterialLayer(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMaterialLayer * > (allocateIfcMaterialLayer(this, Step::Id_UNSET));
    }
}

IfcMaterialLayer *ExpressDataSet::cloneIfcMaterialLayer(ExpressDataSet *expressDataSet, const IfcMaterialLayer &obj, const CopyOp &copyop) {
    IfcMaterialLayer *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMaterialLayer(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMaterialLayer_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMaterialLayer *ExpressDataSet::cloneIfcMaterialLayer(const IfcMaterialLayer &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMaterialLayer(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMaterialLayer(this, obj, copyop);
    }
}

IfcMaterialLayerSet *ExpressDataSet::getIfcMaterialLayerSet(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMaterialLayerSet * > (current->second.get());
    }
    else {
        IfcMaterialLayerSet *ret = static_cast< IfcMaterialLayerSet * > (allocateIfcMaterialLayerSet(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMaterialLayerSet(IfcMaterialLayerSet *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMaterialLayerSet_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMaterialLayerSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMaterialLayerSet *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMaterialLayerSet(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMaterialLayerSet_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMaterialLayerSet > ExpressDataSet::createIfcMaterialLayerSet(bool isVolatile) {
    if (isVolatile) {
        return new IfcMaterialLayerSet(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMaterialLayerSet * > (allocateIfcMaterialLayerSet(this, Step::Id_UNSET));
    }
}

IfcMaterialLayerSet *ExpressDataSet::cloneIfcMaterialLayerSet(ExpressDataSet *expressDataSet, const IfcMaterialLayerSet &obj, const CopyOp &copyop) {
    IfcMaterialLayerSet *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMaterialLayerSet(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMaterialLayerSet_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMaterialLayerSet *ExpressDataSet::cloneIfcMaterialLayerSet(const IfcMaterialLayerSet &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMaterialLayerSet(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMaterialLayerSet(this, obj, copyop);
    }
}

IfcMaterialLayerSetUsage *ExpressDataSet::getIfcMaterialLayerSetUsage(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMaterialLayerSetUsage * > (current->second.get());
    }
    else {
        IfcMaterialLayerSetUsage *ret = static_cast< IfcMaterialLayerSetUsage * > (allocateIfcMaterialLayerSetUsage(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMaterialLayerSetUsage_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMaterialLayerSetUsage(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMaterialLayerSetUsage *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMaterialLayerSetUsage(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMaterialLayerSetUsage_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMaterialLayerSetUsage > ExpressDataSet::createIfcMaterialLayerSetUsage(bool isVolatile) {
    if (isVolatile) {
        return new IfcMaterialLayerSetUsage(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMaterialLayerSetUsage * > (allocateIfcMaterialLayerSetUsage(this, Step::Id_UNSET));
    }
}

IfcMaterialLayerSetUsage *ExpressDataSet::cloneIfcMaterialLayerSetUsage(ExpressDataSet *expressDataSet, const IfcMaterialLayerSetUsage &obj, const CopyOp &copyop) {
    IfcMaterialLayerSetUsage *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMaterialLayerSetUsage(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMaterialLayerSetUsage_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMaterialLayerSetUsage *ExpressDataSet::cloneIfcMaterialLayerSetUsage(const IfcMaterialLayerSetUsage &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMaterialLayerSetUsage(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMaterialLayerSetUsage(this, obj, copyop);
    }
}

IfcMaterialList *ExpressDataSet::getIfcMaterialList(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMaterialList * > (current->second.get());
    }
    else {
        IfcMaterialList *ret = static_cast< IfcMaterialList * > (allocateIfcMaterialList(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMaterialList(IfcMaterialList *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMaterialList_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMaterialList(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMaterialList *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMaterialList(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMaterialList_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMaterialList > ExpressDataSet::createIfcMaterialList(bool isVolatile) {
    if (isVolatile) {
        return new IfcMaterialList(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMaterialList * > (allocateIfcMaterialList(this, Step::Id_UNSET));
    }
}

IfcMaterialList *ExpressDataSet::cloneIfcMaterialList(ExpressDataSet *expressDataSet, const IfcMaterialList &obj, const CopyOp &copyop) {
    IfcMaterialList *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMaterialList(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMaterialList_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMaterialList *ExpressDataSet::cloneIfcMaterialList(const IfcMaterialList &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMaterialList(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMaterialList(this, obj, copyop);
    }
}

IfcMeasureWithUnit *ExpressDataSet::getIfcMeasureWithUnit(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMeasureWithUnit * > (current->second.get());
    }
    else {
        IfcMeasureWithUnit *ret = static_cast< IfcMeasureWithUnit * > (allocateIfcMeasureWithUnit(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMeasureWithUnit(IfcMeasureWithUnit *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMeasureWithUnit_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMeasureWithUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMeasureWithUnit *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMeasureWithUnit(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMeasureWithUnit_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMeasureWithUnit > ExpressDataSet::createIfcMeasureWithUnit(bool isVolatile) {
    if (isVolatile) {
        return new IfcMeasureWithUnit(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMeasureWithUnit * > (allocateIfcMeasureWithUnit(this, Step::Id_UNSET));
    }
}

IfcMeasureWithUnit *ExpressDataSet::cloneIfcMeasureWithUnit(ExpressDataSet *expressDataSet, const IfcMeasureWithUnit &obj, const CopyOp &copyop) {
    IfcMeasureWithUnit *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMeasureWithUnit(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMeasureWithUnit_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMeasureWithUnit *ExpressDataSet::cloneIfcMeasureWithUnit(const IfcMeasureWithUnit &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMeasureWithUnit(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMeasureWithUnit(this, obj, copyop);
    }
}

IfcMechanicalConcreteMaterialProperties *ExpressDataSet::getIfcMechanicalConcreteMaterialProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMechanicalConcreteMaterialProperties * > (current->second.get());
    }
    else {
        IfcMechanicalConcreteMaterialProperties *ret = static_cast< IfcMechanicalConcreteMaterialProperties * > (allocateIfcMechanicalConcreteMaterialProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMechanicalConcreteMaterialProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMechanicalConcreteMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMechanicalConcreteMaterialProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMechanicalConcreteMaterialProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMechanicalConcreteMaterialProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMechanicalConcreteMaterialProperties > ExpressDataSet::createIfcMechanicalConcreteMaterialProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcMechanicalConcreteMaterialProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMechanicalConcreteMaterialProperties * > (allocateIfcMechanicalConcreteMaterialProperties(this, Step::Id_UNSET));
    }
}

IfcMechanicalConcreteMaterialProperties *ExpressDataSet::cloneIfcMechanicalConcreteMaterialProperties(ExpressDataSet *expressDataSet, const IfcMechanicalConcreteMaterialProperties &obj, const CopyOp &copyop) {
    IfcMechanicalConcreteMaterialProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMechanicalConcreteMaterialProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMechanicalConcreteMaterialProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMechanicalConcreteMaterialProperties *ExpressDataSet::cloneIfcMechanicalConcreteMaterialProperties(const IfcMechanicalConcreteMaterialProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMechanicalConcreteMaterialProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMechanicalConcreteMaterialProperties(this, obj, copyop);
    }
}

IfcMechanicalFastener *ExpressDataSet::getIfcMechanicalFastener(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMechanicalFastener * > (current->second.get());
    }
    else {
        IfcMechanicalFastener *ret = static_cast< IfcMechanicalFastener * > (allocateIfcMechanicalFastener(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMechanicalFastener(IfcMechanicalFastener *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMechanicalFastener_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMechanicalFastener(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMechanicalFastener *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMechanicalFastener(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMechanicalFastener_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMechanicalFastener > ExpressDataSet::createIfcMechanicalFastener(bool isVolatile) {
    if (isVolatile) {
        return new IfcMechanicalFastener(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMechanicalFastener * > (allocateIfcMechanicalFastener(this, Step::Id_UNSET));
    }
}

IfcMechanicalFastener *ExpressDataSet::cloneIfcMechanicalFastener(ExpressDataSet *expressDataSet, const IfcMechanicalFastener &obj, const CopyOp &copyop) {
    IfcMechanicalFastener *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMechanicalFastener(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMechanicalFastener_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMechanicalFastener *ExpressDataSet::cloneIfcMechanicalFastener(const IfcMechanicalFastener &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMechanicalFastener(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMechanicalFastener(this, obj, copyop);
    }
}

IfcMechanicalFastenerType *ExpressDataSet::getIfcMechanicalFastenerType(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMechanicalFastenerType * > (current->second.get());
    }
    else {
        IfcMechanicalFastenerType *ret = static_cast< IfcMechanicalFastenerType * > (allocateIfcMechanicalFastenerType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMechanicalFastenerType(IfcMechanicalFastenerType *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMechanicalFastenerType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMechanicalFastenerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMechanicalFastenerType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMechanicalFastenerType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMechanicalFastenerType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMechanicalFastenerType > ExpressDataSet::createIfcMechanicalFastenerType(bool isVolatile) {
    if (isVolatile) {
        return new IfcMechanicalFastenerType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMechanicalFastenerType * > (allocateIfcMechanicalFastenerType(this, Step::Id_UNSET));
    }
}

IfcMechanicalFastenerType *ExpressDataSet::cloneIfcMechanicalFastenerType(ExpressDataSet *expressDataSet, const IfcMechanicalFastenerType &obj, const CopyOp &copyop) {
    IfcMechanicalFastenerType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMechanicalFastenerType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMechanicalFastenerType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMechanicalFastenerType *ExpressDataSet::cloneIfcMechanicalFastenerType(const IfcMechanicalFastenerType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMechanicalFastenerType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMechanicalFastenerType(this, obj, copyop);
    }
}

IfcMechanicalMaterialProperties *ExpressDataSet::getIfcMechanicalMaterialProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMechanicalMaterialProperties * > (current->second.get());
    }
    else {
        IfcMechanicalMaterialProperties *ret = static_cast< IfcMechanicalMaterialProperties * > (allocateIfcMechanicalMaterialProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMechanicalMaterialProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMechanicalMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMechanicalMaterialProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMechanicalMaterialProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMechanicalMaterialProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMechanicalMaterialProperties > ExpressDataSet::createIfcMechanicalMaterialProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcMechanicalMaterialProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMechanicalMaterialProperties * > (allocateIfcMechanicalMaterialProperties(this, Step::Id_UNSET));
    }
}

IfcMechanicalMaterialProperties *ExpressDataSet::cloneIfcMechanicalMaterialProperties(ExpressDataSet *expressDataSet, const IfcMechanicalMaterialProperties &obj, const CopyOp &copyop) {
    IfcMechanicalMaterialProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMechanicalMaterialProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMechanicalMaterialProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMechanicalMaterialProperties *ExpressDataSet::cloneIfcMechanicalMaterialProperties(const IfcMechanicalMaterialProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMechanicalMaterialProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMechanicalMaterialProperties(this, obj, copyop);
    }
}

IfcMechanicalSteelMaterialProperties *ExpressDataSet::getIfcMechanicalSteelMaterialProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMechanicalSteelMaterialProperties * > (current->second.get());
    }
    else {
        IfcMechanicalSteelMaterialProperties *ret = static_cast< IfcMechanicalSteelMaterialProperties * > (allocateIfcMechanicalSteelMaterialProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMechanicalSteelMaterialProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMechanicalSteelMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMechanicalSteelMaterialProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMechanicalSteelMaterialProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMechanicalSteelMaterialProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMechanicalSteelMaterialProperties > ExpressDataSet::createIfcMechanicalSteelMaterialProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcMechanicalSteelMaterialProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMechanicalSteelMaterialProperties * > (allocateIfcMechanicalSteelMaterialProperties(this, Step::Id_UNSET));
    }
}

IfcMechanicalSteelMaterialProperties *ExpressDataSet::cloneIfcMechanicalSteelMaterialProperties(ExpressDataSet *expressDataSet, const IfcMechanicalSteelMaterialProperties &obj, const CopyOp &copyop) {
    IfcMechanicalSteelMaterialProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMechanicalSteelMaterialProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMechanicalSteelMaterialProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMechanicalSteelMaterialProperties *ExpressDataSet::cloneIfcMechanicalSteelMaterialProperties(const IfcMechanicalSteelMaterialProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMechanicalSteelMaterialProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMechanicalSteelMaterialProperties(this, obj, copyop);
    }
}

IfcMember *ExpressDataSet::getIfcMember(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMember * > (current->second.get());
    }
    else {
        IfcMember *ret = static_cast< IfcMember * > (allocateIfcMember(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMember(IfcMember *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMember_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMember *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMember(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMember_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMember > ExpressDataSet::createIfcMember(bool isVolatile) {
    if (isVolatile) {
        return new IfcMember(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMember * > (allocateIfcMember(this, Step::Id_UNSET));
    }
}

IfcMember *ExpressDataSet::cloneIfcMember(ExpressDataSet *expressDataSet, const IfcMember &obj, const CopyOp &copyop) {
    IfcMember *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMember(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMember_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMember *ExpressDataSet::cloneIfcMember(const IfcMember &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMember(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMember(this, obj, copyop);
    }
}

IfcMemberType *ExpressDataSet::getIfcMemberType(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMemberType * > (current->second.get());
    }
    else {
        IfcMemberType *ret = static_cast< IfcMemberType * > (allocateIfcMemberType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMemberType(IfcMemberType *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMemberType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMemberType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMemberType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMemberType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMemberType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMemberType > ExpressDataSet::createIfcMemberType(bool isVolatile) {
    if (isVolatile) {
        return new IfcMemberType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMemberType * > (allocateIfcMemberType(this, Step::Id_UNSET));
    }
}

IfcMemberType *ExpressDataSet::cloneIfcMemberType(ExpressDataSet *expressDataSet, const IfcMemberType &obj, const CopyOp &copyop) {
    IfcMemberType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMemberType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMemberType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMemberType *ExpressDataSet::cloneIfcMemberType(const IfcMemberType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMemberType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMemberType(this, obj, copyop);
    }
}

IfcMetric *ExpressDataSet::getIfcMetric(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMetric * > (current->second.get());
    }
    else {
        IfcMetric *ret = static_cast< IfcMetric * > (allocateIfcMetric(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMetric(IfcMetric *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMetric_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMetric(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMetric *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMetric(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMetric_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMetric > ExpressDataSet::createIfcMetric(bool isVolatile) {
    if (isVolatile) {
        return new IfcMetric(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMetric * > (allocateIfcMetric(this, Step::Id_UNSET));
    }
}

IfcMetric *ExpressDataSet::cloneIfcMetric(ExpressDataSet *expressDataSet, const IfcMetric &obj, const CopyOp &copyop) {
    IfcMetric *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMetric(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMetric_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMetric *ExpressDataSet::cloneIfcMetric(const IfcMetric &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMetric(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMetric(this, obj, copyop);
    }
}

IfcMonetaryUnit *ExpressDataSet::getIfcMonetaryUnit(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMonetaryUnit * > (current->second.get());
    }
    else {
        IfcMonetaryUnit *ret = static_cast< IfcMonetaryUnit * > (allocateIfcMonetaryUnit(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMonetaryUnit(IfcMonetaryUnit *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMonetaryUnit_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMonetaryUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMonetaryUnit *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMonetaryUnit(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMonetaryUnit_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMonetaryUnit > ExpressDataSet::createIfcMonetaryUnit(bool isVolatile) {
    if (isVolatile) {
        return new IfcMonetaryUnit(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMonetaryUnit * > (allocateIfcMonetaryUnit(this, Step::Id_UNSET));
    }
}

IfcMonetaryUnit *ExpressDataSet::cloneIfcMonetaryUnit(ExpressDataSet *expressDataSet, const IfcMonetaryUnit &obj, const CopyOp &copyop) {
    IfcMonetaryUnit *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMonetaryUnit(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMonetaryUnit_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMonetaryUnit *ExpressDataSet::cloneIfcMonetaryUnit(const IfcMonetaryUnit &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMonetaryUnit(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMonetaryUnit(this, obj, copyop);
    }
}

IfcMotorConnectionType *ExpressDataSet::getIfcMotorConnectionType(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMotorConnectionType * > (current->second.get());
    }
    else {
        IfcMotorConnectionType *ret = static_cast< IfcMotorConnectionType * > (allocateIfcMotorConnectionType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMotorConnectionType(IfcMotorConnectionType *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMotorConnectionType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMotorConnectionType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMotorConnectionType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMotorConnectionType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMotorConnectionType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMotorConnectionType > ExpressDataSet::createIfcMotorConnectionType(bool isVolatile) {
    if (isVolatile) {
        return new IfcMotorConnectionType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMotorConnectionType * > (allocateIfcMotorConnectionType(this, Step::Id_UNSET));
    }
}

IfcMotorConnectionType *ExpressDataSet::cloneIfcMotorConnectionType(ExpressDataSet *expressDataSet, const IfcMotorConnectionType &obj, const CopyOp &copyop) {
    IfcMotorConnectionType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMotorConnectionType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMotorConnectionType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMotorConnectionType *ExpressDataSet::cloneIfcMotorConnectionType(const IfcMotorConnectionType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMotorConnectionType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMotorConnectionType(this, obj, copyop);
    }
}

IfcMove *ExpressDataSet::getIfcMove(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcMove * > (current->second.get());
    }
    else {
        IfcMove *ret = static_cast< IfcMove * > (allocateIfcMove(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcMove(IfcMove *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcMove_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcMove(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcMove *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcMove(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcMove_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcMove > ExpressDataSet::createIfcMove(bool isVolatile) {
    if (isVolatile) {
        return new IfcMove(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcMove * > (allocateIfcMove(this, Step::Id_UNSET));
    }
}

IfcMove *ExpressDataSet::cloneIfcMove(ExpressDataSet *expressDataSet, const IfcMove &obj, const CopyOp &copyop) {
    IfcMove *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcMove(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcMove_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcMove *ExpressDataSet::cloneIfcMove(const IfcMove &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcMove(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcMove(this, obj, copyop);
    }
}

IfcObjective *ExpressDataSet::getIfcObjective(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcObjective * > (current->second.get());
    }
    else {
        IfcObjective *ret = static_cast< IfcObjective * > (allocateIfcObjective(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcObjective(IfcObjective *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcObjective_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcObjective(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcObjective *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcObjective(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcObjective_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcObjective > ExpressDataSet::createIfcObjective(bool isVolatile) {
    if (isVolatile) {
        return new IfcObjective(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcObjective * > (allocateIfcObjective(this, Step::Id_UNSET));
    }
}

IfcObjective *ExpressDataSet::cloneIfcObjective(ExpressDataSet *expressDataSet, const IfcObjective &obj, const CopyOp &copyop) {
    IfcObjective *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcObjective(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcObjective_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcObjective *ExpressDataSet::cloneIfcObjective(const IfcObjective &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcObjective(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcObjective(this, obj, copyop);
    }
}

IfcOccupant *ExpressDataSet::getIfcOccupant(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOccupant * > (current->second.get());
    }
    else {
        IfcOccupant *ret = static_cast< IfcOccupant * > (allocateIfcOccupant(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOccupant(IfcOccupant *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOccupant_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOccupant(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOccupant *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOccupant(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOccupant_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOccupant > ExpressDataSet::createIfcOccupant(bool isVolatile) {
    if (isVolatile) {
        return new IfcOccupant(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOccupant * > (allocateIfcOccupant(this, Step::Id_UNSET));
    }
}

IfcOccupant *ExpressDataSet::cloneIfcOccupant(ExpressDataSet *expressDataSet, const IfcOccupant &obj, const CopyOp &copyop) {
    IfcOccupant *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOccupant(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOccupant_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOccupant *ExpressDataSet::cloneIfcOccupant(const IfcOccupant &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOccupant(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOccupant(this, obj, copyop);
    }
}

IfcOffsetCurve2D *ExpressDataSet::getIfcOffsetCurve2D(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOffsetCurve2D * > (current->second.get());
    }
    else {
        IfcOffsetCurve2D *ret = static_cast< IfcOffsetCurve2D * > (allocateIfcOffsetCurve2D(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOffsetCurve2D(IfcOffsetCurve2D *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOffsetCurve2D_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOffsetCurve2D(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOffsetCurve2D *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOffsetCurve2D(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOffsetCurve2D_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOffsetCurve2D > ExpressDataSet::createIfcOffsetCurve2D(bool isVolatile) {
    if (isVolatile) {
        return new IfcOffsetCurve2D(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOffsetCurve2D * > (allocateIfcOffsetCurve2D(this, Step::Id_UNSET));
    }
}

IfcOffsetCurve2D *ExpressDataSet::cloneIfcOffsetCurve2D(ExpressDataSet *expressDataSet, const IfcOffsetCurve2D &obj, const CopyOp &copyop) {
    IfcOffsetCurve2D *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOffsetCurve2D(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOffsetCurve2D_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOffsetCurve2D *ExpressDataSet::cloneIfcOffsetCurve2D(const IfcOffsetCurve2D &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOffsetCurve2D(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOffsetCurve2D(this, obj, copyop);
    }
}

IfcOffsetCurve3D *ExpressDataSet::getIfcOffsetCurve3D(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOffsetCurve3D * > (current->second.get());
    }
    else {
        IfcOffsetCurve3D *ret = static_cast< IfcOffsetCurve3D * > (allocateIfcOffsetCurve3D(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOffsetCurve3D(IfcOffsetCurve3D *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOffsetCurve3D_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOffsetCurve3D(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOffsetCurve3D *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOffsetCurve3D(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOffsetCurve3D_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOffsetCurve3D > ExpressDataSet::createIfcOffsetCurve3D(bool isVolatile) {
    if (isVolatile) {
        return new IfcOffsetCurve3D(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOffsetCurve3D * > (allocateIfcOffsetCurve3D(this, Step::Id_UNSET));
    }
}

IfcOffsetCurve3D *ExpressDataSet::cloneIfcOffsetCurve3D(ExpressDataSet *expressDataSet, const IfcOffsetCurve3D &obj, const CopyOp &copyop) {
    IfcOffsetCurve3D *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOffsetCurve3D(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOffsetCurve3D_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOffsetCurve3D *ExpressDataSet::cloneIfcOffsetCurve3D(const IfcOffsetCurve3D &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOffsetCurve3D(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOffsetCurve3D(this, obj, copyop);
    }
}

IfcOneDirectionRepeatFactor *ExpressDataSet::getIfcOneDirectionRepeatFactor(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOneDirectionRepeatFactor * > (current->second.get());
    }
    else {
        IfcOneDirectionRepeatFactor *ret = static_cast< IfcOneDirectionRepeatFactor * > (allocateIfcOneDirectionRepeatFactor(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOneDirectionRepeatFactor_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOneDirectionRepeatFactor(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOneDirectionRepeatFactor *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOneDirectionRepeatFactor(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOneDirectionRepeatFactor_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOneDirectionRepeatFactor > ExpressDataSet::createIfcOneDirectionRepeatFactor(bool isVolatile) {
    if (isVolatile) {
        return new IfcOneDirectionRepeatFactor(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOneDirectionRepeatFactor * > (allocateIfcOneDirectionRepeatFactor(this, Step::Id_UNSET));
    }
}

IfcOneDirectionRepeatFactor *ExpressDataSet::cloneIfcOneDirectionRepeatFactor(ExpressDataSet *expressDataSet, const IfcOneDirectionRepeatFactor &obj, const CopyOp &copyop) {
    IfcOneDirectionRepeatFactor *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOneDirectionRepeatFactor(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOneDirectionRepeatFactor_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOneDirectionRepeatFactor *ExpressDataSet::cloneIfcOneDirectionRepeatFactor(const IfcOneDirectionRepeatFactor &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOneDirectionRepeatFactor(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOneDirectionRepeatFactor(this, obj, copyop);
    }
}

IfcOpenShell *ExpressDataSet::getIfcOpenShell(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOpenShell * > (current->second.get());
    }
    else {
        IfcOpenShell *ret = static_cast< IfcOpenShell * > (allocateIfcOpenShell(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOpenShell(IfcOpenShell *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOpenShell_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOpenShell(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOpenShell *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOpenShell(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOpenShell_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOpenShell > ExpressDataSet::createIfcOpenShell(bool isVolatile) {
    if (isVolatile) {
        return new IfcOpenShell(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOpenShell * > (allocateIfcOpenShell(this, Step::Id_UNSET));
    }
}

IfcOpenShell *ExpressDataSet::cloneIfcOpenShell(ExpressDataSet *expressDataSet, const IfcOpenShell &obj, const CopyOp &copyop) {
    IfcOpenShell *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOpenShell(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOpenShell_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOpenShell *ExpressDataSet::cloneIfcOpenShell(const IfcOpenShell &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOpenShell(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOpenShell(this, obj, copyop);
    }
}

IfcOpeningElement *ExpressDataSet::getIfcOpeningElement(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOpeningElement * > (current->second.get());
    }
    else {
        IfcOpeningElement *ret = static_cast< IfcOpeningElement * > (allocateIfcOpeningElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOpeningElement(IfcOpeningElement *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOpeningElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOpeningElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOpeningElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOpeningElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOpeningElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOpeningElement > ExpressDataSet::createIfcOpeningElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcOpeningElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOpeningElement * > (allocateIfcOpeningElement(this, Step::Id_UNSET));
    }
}

IfcOpeningElement *ExpressDataSet::cloneIfcOpeningElement(ExpressDataSet *expressDataSet, const IfcOpeningElement &obj, const CopyOp &copyop) {
    IfcOpeningElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOpeningElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOpeningElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOpeningElement *ExpressDataSet::cloneIfcOpeningElement(const IfcOpeningElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOpeningElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOpeningElement(this, obj, copyop);
    }
}

IfcOpticalMaterialProperties *ExpressDataSet::getIfcOpticalMaterialProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOpticalMaterialProperties * > (current->second.get());
    }
    else {
        IfcOpticalMaterialProperties *ret = static_cast< IfcOpticalMaterialProperties * > (allocateIfcOpticalMaterialProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOpticalMaterialProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOpticalMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOpticalMaterialProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOpticalMaterialProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOpticalMaterialProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOpticalMaterialProperties > ExpressDataSet::createIfcOpticalMaterialProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcOpticalMaterialProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOpticalMaterialProperties * > (allocateIfcOpticalMaterialProperties(this, Step::Id_UNSET));
    }
}

IfcOpticalMaterialProperties *ExpressDataSet::cloneIfcOpticalMaterialProperties(ExpressDataSet *expressDataSet, const IfcOpticalMaterialProperties &obj, const CopyOp &copyop) {
    IfcOpticalMaterialProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOpticalMaterialProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOpticalMaterialProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOpticalMaterialProperties *ExpressDataSet::cloneIfcOpticalMaterialProperties(const IfcOpticalMaterialProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOpticalMaterialProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOpticalMaterialProperties(this, obj, copyop);
    }
}

IfcOrderAction *ExpressDataSet::getIfcOrderAction(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOrderAction * > (current->second.get());
    }
    else {
        IfcOrderAction *ret = static_cast< IfcOrderAction * > (allocateIfcOrderAction(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOrderAction(IfcOrderAction *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOrderAction_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOrderAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOrderAction *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOrderAction(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOrderAction_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOrderAction > ExpressDataSet::createIfcOrderAction(bool isVolatile) {
    if (isVolatile) {
        return new IfcOrderAction(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOrderAction * > (allocateIfcOrderAction(this, Step::Id_UNSET));
    }
}

IfcOrderAction *ExpressDataSet::cloneIfcOrderAction(ExpressDataSet *expressDataSet, const IfcOrderAction &obj, const CopyOp &copyop) {
    IfcOrderAction *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOrderAction(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOrderAction_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOrderAction *ExpressDataSet::cloneIfcOrderAction(const IfcOrderAction &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOrderAction(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOrderAction(this, obj, copyop);
    }
}

IfcOrganization *ExpressDataSet::getIfcOrganization(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOrganization * > (current->second.get());
    }
    else {
        IfcOrganization *ret = static_cast< IfcOrganization * > (allocateIfcOrganization(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOrganization(IfcOrganization *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOrganization_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOrganization(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOrganization *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOrganization(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOrganization_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOrganization > ExpressDataSet::createIfcOrganization(bool isVolatile) {
    if (isVolatile) {
        return new IfcOrganization(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOrganization * > (allocateIfcOrganization(this, Step::Id_UNSET));
    }
}

IfcOrganization *ExpressDataSet::cloneIfcOrganization(ExpressDataSet *expressDataSet, const IfcOrganization &obj, const CopyOp &copyop) {
    IfcOrganization *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOrganization(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOrganization_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOrganization *ExpressDataSet::cloneIfcOrganization(const IfcOrganization &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOrganization(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOrganization(this, obj, copyop);
    }
}

IfcOrganizationRelationship *ExpressDataSet::getIfcOrganizationRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOrganizationRelationship * > (current->second.get());
    }
    else {
        IfcOrganizationRelationship *ret = static_cast< IfcOrganizationRelationship * > (allocateIfcOrganizationRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOrganizationRelationship(IfcOrganizationRelationship *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOrganizationRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOrganizationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOrganizationRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOrganizationRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOrganizationRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOrganizationRelationship > ExpressDataSet::createIfcOrganizationRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcOrganizationRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOrganizationRelationship * > (allocateIfcOrganizationRelationship(this, Step::Id_UNSET));
    }
}

IfcOrganizationRelationship *ExpressDataSet::cloneIfcOrganizationRelationship(ExpressDataSet *expressDataSet, const IfcOrganizationRelationship &obj, const CopyOp &copyop) {
    IfcOrganizationRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOrganizationRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOrganizationRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOrganizationRelationship *ExpressDataSet::cloneIfcOrganizationRelationship(const IfcOrganizationRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOrganizationRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOrganizationRelationship(this, obj, copyop);
    }
}

IfcOrientedEdge *ExpressDataSet::getIfcOrientedEdge(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOrientedEdge * > (current->second.get());
    }
    else {
        IfcOrientedEdge *ret = static_cast< IfcOrientedEdge * > (allocateIfcOrientedEdge(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOrientedEdge(IfcOrientedEdge *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOrientedEdge_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOrientedEdge(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOrientedEdge *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOrientedEdge(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOrientedEdge_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOrientedEdge > ExpressDataSet::createIfcOrientedEdge(bool isVolatile) {
    if (isVolatile) {
        return new IfcOrientedEdge(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOrientedEdge * > (allocateIfcOrientedEdge(this, Step::Id_UNSET));
    }
}

IfcOrientedEdge *ExpressDataSet::cloneIfcOrientedEdge(ExpressDataSet *expressDataSet, const IfcOrientedEdge &obj, const CopyOp &copyop) {
    IfcOrientedEdge *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOrientedEdge(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOrientedEdge_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOrientedEdge *ExpressDataSet::cloneIfcOrientedEdge(const IfcOrientedEdge &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOrientedEdge(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOrientedEdge(this, obj, copyop);
    }
}

IfcOutletType *ExpressDataSet::getIfcOutletType(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOutletType * > (current->second.get());
    }
    else {
        IfcOutletType *ret = static_cast< IfcOutletType * > (allocateIfcOutletType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOutletType(IfcOutletType *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOutletType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOutletType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOutletType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOutletType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOutletType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOutletType > ExpressDataSet::createIfcOutletType(bool isVolatile) {
    if (isVolatile) {
        return new IfcOutletType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOutletType * > (allocateIfcOutletType(this, Step::Id_UNSET));
    }
}

IfcOutletType *ExpressDataSet::cloneIfcOutletType(ExpressDataSet *expressDataSet, const IfcOutletType &obj, const CopyOp &copyop) {
    IfcOutletType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOutletType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOutletType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOutletType *ExpressDataSet::cloneIfcOutletType(const IfcOutletType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOutletType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOutletType(this, obj, copyop);
    }
}

IfcOwnerHistory *ExpressDataSet::getIfcOwnerHistory(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcOwnerHistory * > (current->second.get());
    }
    else {
        IfcOwnerHistory *ret = static_cast< IfcOwnerHistory * > (allocateIfcOwnerHistory(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcOwnerHistory(IfcOwnerHistory *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcOwnerHistory_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcOwnerHistory(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcOwnerHistory *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcOwnerHistory(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcOwnerHistory_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcOwnerHistory > ExpressDataSet::createIfcOwnerHistory(bool isVolatile) {
    if (isVolatile) {
        return new IfcOwnerHistory(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcOwnerHistory * > (allocateIfcOwnerHistory(this, Step::Id_UNSET));
    }
}

IfcOwnerHistory *ExpressDataSet::cloneIfcOwnerHistory(ExpressDataSet *expressDataSet, const IfcOwnerHistory &obj, const CopyOp &copyop) {
    IfcOwnerHistory *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcOwnerHistory(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcOwnerHistory_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcOwnerHistory *ExpressDataSet::cloneIfcOwnerHistory(const IfcOwnerHistory &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcOwnerHistory(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcOwnerHistory(this, obj, copyop);
    }
}

IfcPath *ExpressDataSet::getIfcPath(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPath * > (current->second.get());
    }
    else {
        IfcPath *ret = static_cast< IfcPath * > (allocateIfcPath(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPath(IfcPath *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPath_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPath(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPath *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPath(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPath_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPath > ExpressDataSet::createIfcPath(bool isVolatile) {
    if (isVolatile) {
        return new IfcPath(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPath * > (allocateIfcPath(this, Step::Id_UNSET));
    }
}

IfcPath *ExpressDataSet::cloneIfcPath(ExpressDataSet *expressDataSet, const IfcPath &obj, const CopyOp &copyop) {
    IfcPath *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPath(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPath_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPath *ExpressDataSet::cloneIfcPath(const IfcPath &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPath(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPath(this, obj, copyop);
    }
}

IfcPerformanceHistory *ExpressDataSet::getIfcPerformanceHistory(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPerformanceHistory * > (current->second.get());
    }
    else {
        IfcPerformanceHistory *ret = static_cast< IfcPerformanceHistory * > (allocateIfcPerformanceHistory(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPerformanceHistory(IfcPerformanceHistory *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPerformanceHistory_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPerformanceHistory(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPerformanceHistory *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPerformanceHistory(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPerformanceHistory_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPerformanceHistory > ExpressDataSet::createIfcPerformanceHistory(bool isVolatile) {
    if (isVolatile) {
        return new IfcPerformanceHistory(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPerformanceHistory * > (allocateIfcPerformanceHistory(this, Step::Id_UNSET));
    }
}

IfcPerformanceHistory *ExpressDataSet::cloneIfcPerformanceHistory(ExpressDataSet *expressDataSet, const IfcPerformanceHistory &obj, const CopyOp &copyop) {
    IfcPerformanceHistory *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPerformanceHistory(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPerformanceHistory_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPerformanceHistory *ExpressDataSet::cloneIfcPerformanceHistory(const IfcPerformanceHistory &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPerformanceHistory(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPerformanceHistory(this, obj, copyop);
    }
}

IfcPermeableCoveringProperties *ExpressDataSet::getIfcPermeableCoveringProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPermeableCoveringProperties * > (current->second.get());
    }
    else {
        IfcPermeableCoveringProperties *ret = static_cast< IfcPermeableCoveringProperties * > (allocateIfcPermeableCoveringProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPermeableCoveringProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPermeableCoveringProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPermeableCoveringProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPermeableCoveringProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPermeableCoveringProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPermeableCoveringProperties > ExpressDataSet::createIfcPermeableCoveringProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcPermeableCoveringProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPermeableCoveringProperties * > (allocateIfcPermeableCoveringProperties(this, Step::Id_UNSET));
    }
}

IfcPermeableCoveringProperties *ExpressDataSet::cloneIfcPermeableCoveringProperties(ExpressDataSet *expressDataSet, const IfcPermeableCoveringProperties &obj, const CopyOp &copyop) {
    IfcPermeableCoveringProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPermeableCoveringProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPermeableCoveringProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPermeableCoveringProperties *ExpressDataSet::cloneIfcPermeableCoveringProperties(const IfcPermeableCoveringProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPermeableCoveringProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPermeableCoveringProperties(this, obj, copyop);
    }
}

IfcPermit *ExpressDataSet::getIfcPermit(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPermit * > (current->second.get());
    }
    else {
        IfcPermit *ret = static_cast< IfcPermit * > (allocateIfcPermit(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPermit(IfcPermit *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPermit_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPermit(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPermit *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPermit(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPermit_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPermit > ExpressDataSet::createIfcPermit(bool isVolatile) {
    if (isVolatile) {
        return new IfcPermit(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPermit * > (allocateIfcPermit(this, Step::Id_UNSET));
    }
}

IfcPermit *ExpressDataSet::cloneIfcPermit(ExpressDataSet *expressDataSet, const IfcPermit &obj, const CopyOp &copyop) {
    IfcPermit *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPermit(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPermit_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPermit *ExpressDataSet::cloneIfcPermit(const IfcPermit &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPermit(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPermit(this, obj, copyop);
    }
}

IfcPerson *ExpressDataSet::getIfcPerson(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPerson * > (current->second.get());
    }
    else {
        IfcPerson *ret = static_cast< IfcPerson * > (allocateIfcPerson(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPerson(IfcPerson *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPerson_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPerson(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPerson *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPerson(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPerson_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPerson > ExpressDataSet::createIfcPerson(bool isVolatile) {
    if (isVolatile) {
        return new IfcPerson(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPerson * > (allocateIfcPerson(this, Step::Id_UNSET));
    }
}

IfcPerson *ExpressDataSet::cloneIfcPerson(ExpressDataSet *expressDataSet, const IfcPerson &obj, const CopyOp &copyop) {
    IfcPerson *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPerson(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPerson_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPerson *ExpressDataSet::cloneIfcPerson(const IfcPerson &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPerson(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPerson(this, obj, copyop);
    }
}

IfcPersonAndOrganization *ExpressDataSet::getIfcPersonAndOrganization(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPersonAndOrganization * > (current->second.get());
    }
    else {
        IfcPersonAndOrganization *ret = static_cast< IfcPersonAndOrganization * > (allocateIfcPersonAndOrganization(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPersonAndOrganization(IfcPersonAndOrganization *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPersonAndOrganization_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPersonAndOrganization(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPersonAndOrganization *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPersonAndOrganization(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPersonAndOrganization_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPersonAndOrganization > ExpressDataSet::createIfcPersonAndOrganization(bool isVolatile) {
    if (isVolatile) {
        return new IfcPersonAndOrganization(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPersonAndOrganization * > (allocateIfcPersonAndOrganization(this, Step::Id_UNSET));
    }
}

IfcPersonAndOrganization *ExpressDataSet::cloneIfcPersonAndOrganization(ExpressDataSet *expressDataSet, const IfcPersonAndOrganization &obj, const CopyOp &copyop) {
    IfcPersonAndOrganization *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPersonAndOrganization(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPersonAndOrganization_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPersonAndOrganization *ExpressDataSet::cloneIfcPersonAndOrganization(const IfcPersonAndOrganization &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPersonAndOrganization(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPersonAndOrganization(this, obj, copyop);
    }
}

IfcPhysicalComplexQuantity *ExpressDataSet::getIfcPhysicalComplexQuantity(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPhysicalComplexQuantity * > (current->second.get());
    }
    else {
        IfcPhysicalComplexQuantity *ret = static_cast< IfcPhysicalComplexQuantity * > (allocateIfcPhysicalComplexQuantity(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPhysicalComplexQuantity_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPhysicalComplexQuantity(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPhysicalComplexQuantity *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPhysicalComplexQuantity(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPhysicalComplexQuantity_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPhysicalComplexQuantity > ExpressDataSet::createIfcPhysicalComplexQuantity(bool isVolatile) {
    if (isVolatile) {
        return new IfcPhysicalComplexQuantity(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPhysicalComplexQuantity * > (allocateIfcPhysicalComplexQuantity(this, Step::Id_UNSET));
    }
}

IfcPhysicalComplexQuantity *ExpressDataSet::cloneIfcPhysicalComplexQuantity(ExpressDataSet *expressDataSet, const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop) {
    IfcPhysicalComplexQuantity *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPhysicalComplexQuantity(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPhysicalComplexQuantity_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPhysicalComplexQuantity *ExpressDataSet::cloneIfcPhysicalComplexQuantity(const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPhysicalComplexQuantity(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPhysicalComplexQuantity(this, obj, copyop);
    }
}

IfcPile *ExpressDataSet::getIfcPile(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPile * > (current->second.get());
    }
    else {
        IfcPile *ret = static_cast< IfcPile * > (allocateIfcPile(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPile(IfcPile *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPile_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPile(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPile *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPile(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPile_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPile > ExpressDataSet::createIfcPile(bool isVolatile) {
    if (isVolatile) {
        return new IfcPile(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPile * > (allocateIfcPile(this, Step::Id_UNSET));
    }
}

IfcPile *ExpressDataSet::cloneIfcPile(ExpressDataSet *expressDataSet, const IfcPile &obj, const CopyOp &copyop) {
    IfcPile *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPile(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPile_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPile *ExpressDataSet::cloneIfcPile(const IfcPile &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPile(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPile(this, obj, copyop);
    }
}

IfcPipeFittingType *ExpressDataSet::getIfcPipeFittingType(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPipeFittingType * > (current->second.get());
    }
    else {
        IfcPipeFittingType *ret = static_cast< IfcPipeFittingType * > (allocateIfcPipeFittingType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPipeFittingType(IfcPipeFittingType *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPipeFittingType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPipeFittingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPipeFittingType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPipeFittingType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPipeFittingType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPipeFittingType > ExpressDataSet::createIfcPipeFittingType(bool isVolatile) {
    if (isVolatile) {
        return new IfcPipeFittingType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPipeFittingType * > (allocateIfcPipeFittingType(this, Step::Id_UNSET));
    }
}

IfcPipeFittingType *ExpressDataSet::cloneIfcPipeFittingType(ExpressDataSet *expressDataSet, const IfcPipeFittingType &obj, const CopyOp &copyop) {
    IfcPipeFittingType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPipeFittingType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPipeFittingType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPipeFittingType *ExpressDataSet::cloneIfcPipeFittingType(const IfcPipeFittingType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPipeFittingType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPipeFittingType(this, obj, copyop);
    }
}

IfcPipeSegmentType *ExpressDataSet::getIfcPipeSegmentType(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPipeSegmentType * > (current->second.get());
    }
    else {
        IfcPipeSegmentType *ret = static_cast< IfcPipeSegmentType * > (allocateIfcPipeSegmentType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPipeSegmentType(IfcPipeSegmentType *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPipeSegmentType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPipeSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPipeSegmentType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPipeSegmentType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPipeSegmentType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPipeSegmentType > ExpressDataSet::createIfcPipeSegmentType(bool isVolatile) {
    if (isVolatile) {
        return new IfcPipeSegmentType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPipeSegmentType * > (allocateIfcPipeSegmentType(this, Step::Id_UNSET));
    }
}

IfcPipeSegmentType *ExpressDataSet::cloneIfcPipeSegmentType(ExpressDataSet *expressDataSet, const IfcPipeSegmentType &obj, const CopyOp &copyop) {
    IfcPipeSegmentType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPipeSegmentType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPipeSegmentType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPipeSegmentType *ExpressDataSet::cloneIfcPipeSegmentType(const IfcPipeSegmentType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPipeSegmentType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPipeSegmentType(this, obj, copyop);
    }
}

IfcPixelTexture *ExpressDataSet::getIfcPixelTexture(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPixelTexture * > (current->second.get());
    }
    else {
        IfcPixelTexture *ret = static_cast< IfcPixelTexture * > (allocateIfcPixelTexture(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPixelTexture(IfcPixelTexture *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPixelTexture_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPixelTexture(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPixelTexture *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPixelTexture(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPixelTexture_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPixelTexture > ExpressDataSet::createIfcPixelTexture(bool isVolatile) {
    if (isVolatile) {
        return new IfcPixelTexture(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPixelTexture * > (allocateIfcPixelTexture(this, Step::Id_UNSET));
    }
}

IfcPixelTexture *ExpressDataSet::cloneIfcPixelTexture(ExpressDataSet *expressDataSet, const IfcPixelTexture &obj, const CopyOp &copyop) {
    IfcPixelTexture *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPixelTexture(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPixelTexture_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPixelTexture *ExpressDataSet::cloneIfcPixelTexture(const IfcPixelTexture &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPixelTexture(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPixelTexture(this, obj, copyop);
    }
}

IfcPlanarBox *ExpressDataSet::getIfcPlanarBox(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPlanarBox * > (current->second.get());
    }
    else {
        IfcPlanarBox *ret = static_cast< IfcPlanarBox * > (allocateIfcPlanarBox(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPlanarBox(IfcPlanarBox *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPlanarBox_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPlanarBox(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPlanarBox *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPlanarBox(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPlanarBox_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPlanarBox > ExpressDataSet::createIfcPlanarBox(bool isVolatile) {
    if (isVolatile) {
        return new IfcPlanarBox(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPlanarBox * > (allocateIfcPlanarBox(this, Step::Id_UNSET));
    }
}

IfcPlanarBox *ExpressDataSet::cloneIfcPlanarBox(ExpressDataSet *expressDataSet, const IfcPlanarBox &obj, const CopyOp &copyop) {
    IfcPlanarBox *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPlanarBox(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPlanarBox_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPlanarBox *ExpressDataSet::cloneIfcPlanarBox(const IfcPlanarBox &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPlanarBox(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPlanarBox(this, obj, copyop);
    }
}

IfcPlanarExtent *ExpressDataSet::getIfcPlanarExtent(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPlanarExtent * > (current->second.get());
    }
    else {
        IfcPlanarExtent *ret = static_cast< IfcPlanarExtent * > (allocateIfcPlanarExtent(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPlanarExtent(IfcPlanarExtent *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPlanarExtent_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPlanarExtent(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPlanarExtent *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPlanarExtent(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPlanarExtent_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPlanarExtent > ExpressDataSet::createIfcPlanarExtent(bool isVolatile) {
    if (isVolatile) {
        return new IfcPlanarExtent(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPlanarExtent * > (allocateIfcPlanarExtent(this, Step::Id_UNSET));
    }
}

IfcPlanarExtent *ExpressDataSet::cloneIfcPlanarExtent(ExpressDataSet *expressDataSet, const IfcPlanarExtent &obj, const CopyOp &copyop) {
    IfcPlanarExtent *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPlanarExtent(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPlanarExtent_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPlanarExtent *ExpressDataSet::cloneIfcPlanarExtent(const IfcPlanarExtent &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPlanarExtent(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPlanarExtent(this, obj, copyop);
    }
}

IfcPlane *ExpressDataSet::getIfcPlane(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPlane * > (current->second.get());
    }
    else {
        IfcPlane *ret = static_cast< IfcPlane * > (allocateIfcPlane(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPlane(IfcPlane *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPlane_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPlane(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPlane *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPlane(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPlane_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPlane > ExpressDataSet::createIfcPlane(bool isVolatile) {
    if (isVolatile) {
        return new IfcPlane(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPlane * > (allocateIfcPlane(this, Step::Id_UNSET));
    }
}

IfcPlane *ExpressDataSet::cloneIfcPlane(ExpressDataSet *expressDataSet, const IfcPlane &obj, const CopyOp &copyop) {
    IfcPlane *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPlane(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPlane_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPlane *ExpressDataSet::cloneIfcPlane(const IfcPlane &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPlane(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPlane(this, obj, copyop);
    }
}

IfcPlate *ExpressDataSet::getIfcPlate(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPlate * > (current->second.get());
    }
    else {
        IfcPlate *ret = static_cast< IfcPlate * > (allocateIfcPlate(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPlate(IfcPlate *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPlate_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPlate(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPlate *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPlate(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPlate_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPlate > ExpressDataSet::createIfcPlate(bool isVolatile) {
    if (isVolatile) {
        return new IfcPlate(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPlate * > (allocateIfcPlate(this, Step::Id_UNSET));
    }
}

IfcPlate *ExpressDataSet::cloneIfcPlate(ExpressDataSet *expressDataSet, const IfcPlate &obj, const CopyOp &copyop) {
    IfcPlate *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPlate(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPlate_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPlate *ExpressDataSet::cloneIfcPlate(const IfcPlate &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPlate(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPlate(this, obj, copyop);
    }
}

IfcPlateType *ExpressDataSet::getIfcPlateType(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPlateType * > (current->second.get());
    }
    else {
        IfcPlateType *ret = static_cast< IfcPlateType * > (allocateIfcPlateType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPlateType(IfcPlateType *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPlateType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPlateType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPlateType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPlateType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPlateType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPlateType > ExpressDataSet::createIfcPlateType(bool isVolatile) {
    if (isVolatile) {
        return new IfcPlateType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPlateType * > (allocateIfcPlateType(this, Step::Id_UNSET));
    }
}

IfcPlateType *ExpressDataSet::cloneIfcPlateType(ExpressDataSet *expressDataSet, const IfcPlateType &obj, const CopyOp &copyop) {
    IfcPlateType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPlateType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPlateType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPlateType *ExpressDataSet::cloneIfcPlateType(const IfcPlateType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPlateType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPlateType(this, obj, copyop);
    }
}

IfcPointOnCurve *ExpressDataSet::getIfcPointOnCurve(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPointOnCurve * > (current->second.get());
    }
    else {
        IfcPointOnCurve *ret = static_cast< IfcPointOnCurve * > (allocateIfcPointOnCurve(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPointOnCurve(IfcPointOnCurve *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPointOnCurve_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPointOnCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPointOnCurve *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPointOnCurve(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPointOnCurve_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPointOnCurve > ExpressDataSet::createIfcPointOnCurve(bool isVolatile) {
    if (isVolatile) {
        return new IfcPointOnCurve(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPointOnCurve * > (allocateIfcPointOnCurve(this, Step::Id_UNSET));
    }
}

IfcPointOnCurve *ExpressDataSet::cloneIfcPointOnCurve(ExpressDataSet *expressDataSet, const IfcPointOnCurve &obj, const CopyOp &copyop) {
    IfcPointOnCurve *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPointOnCurve(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPointOnCurve_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPointOnCurve *ExpressDataSet::cloneIfcPointOnCurve(const IfcPointOnCurve &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPointOnCurve(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPointOnCurve(this, obj, copyop);
    }
}

IfcPointOnSurface *ExpressDataSet::getIfcPointOnSurface(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPointOnSurface * > (current->second.get());
    }
    else {
        IfcPointOnSurface *ret = static_cast< IfcPointOnSurface * > (allocateIfcPointOnSurface(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPointOnSurface(IfcPointOnSurface *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPointOnSurface_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPointOnSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPointOnSurface *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPointOnSurface(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPointOnSurface_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPointOnSurface > ExpressDataSet::createIfcPointOnSurface(bool isVolatile) {
    if (isVolatile) {
        return new IfcPointOnSurface(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPointOnSurface * > (allocateIfcPointOnSurface(this, Step::Id_UNSET));
    }
}

IfcPointOnSurface *ExpressDataSet::cloneIfcPointOnSurface(ExpressDataSet *expressDataSet, const IfcPointOnSurface &obj, const CopyOp &copyop) {
    IfcPointOnSurface *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPointOnSurface(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPointOnSurface_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPointOnSurface *ExpressDataSet::cloneIfcPointOnSurface(const IfcPointOnSurface &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPointOnSurface(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPointOnSurface(this, obj, copyop);
    }
}

IfcPolyLoop *ExpressDataSet::getIfcPolyLoop(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPolyLoop * > (current->second.get());
    }
    else {
        IfcPolyLoop *ret = static_cast< IfcPolyLoop * > (allocateIfcPolyLoop(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPolyLoop(IfcPolyLoop *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPolyLoop_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPolyLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPolyLoop *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPolyLoop(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPolyLoop_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPolyLoop > ExpressDataSet::createIfcPolyLoop(bool isVolatile) {
    if (isVolatile) {
        return new IfcPolyLoop(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPolyLoop * > (allocateIfcPolyLoop(this, Step::Id_UNSET));
    }
}

IfcPolyLoop *ExpressDataSet::cloneIfcPolyLoop(ExpressDataSet *expressDataSet, const IfcPolyLoop &obj, const CopyOp &copyop) {
    IfcPolyLoop *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPolyLoop(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPolyLoop_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPolyLoop *ExpressDataSet::cloneIfcPolyLoop(const IfcPolyLoop &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPolyLoop(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPolyLoop(this, obj, copyop);
    }
}

IfcPolygonalBoundedHalfSpace *ExpressDataSet::getIfcPolygonalBoundedHalfSpace(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPolygonalBoundedHalfSpace * > (current->second.get());
    }
    else {
        IfcPolygonalBoundedHalfSpace *ret = static_cast< IfcPolygonalBoundedHalfSpace * > (allocateIfcPolygonalBoundedHalfSpace(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPolygonalBoundedHalfSpace_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPolygonalBoundedHalfSpace(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPolygonalBoundedHalfSpace *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPolygonalBoundedHalfSpace(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPolygonalBoundedHalfSpace_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPolygonalBoundedHalfSpace > ExpressDataSet::createIfcPolygonalBoundedHalfSpace(bool isVolatile) {
    if (isVolatile) {
        return new IfcPolygonalBoundedHalfSpace(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPolygonalBoundedHalfSpace * > (allocateIfcPolygonalBoundedHalfSpace(this, Step::Id_UNSET));
    }
}

IfcPolygonalBoundedHalfSpace *ExpressDataSet::cloneIfcPolygonalBoundedHalfSpace(ExpressDataSet *expressDataSet, const IfcPolygonalBoundedHalfSpace &obj, const CopyOp &copyop) {
    IfcPolygonalBoundedHalfSpace *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPolygonalBoundedHalfSpace(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPolygonalBoundedHalfSpace_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPolygonalBoundedHalfSpace *ExpressDataSet::cloneIfcPolygonalBoundedHalfSpace(const IfcPolygonalBoundedHalfSpace &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPolygonalBoundedHalfSpace(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPolygonalBoundedHalfSpace(this, obj, copyop);
    }
}

IfcPolyline *ExpressDataSet::getIfcPolyline(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPolyline * > (current->second.get());
    }
    else {
        IfcPolyline *ret = static_cast< IfcPolyline * > (allocateIfcPolyline(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPolyline(IfcPolyline *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPolyline_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPolyline(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPolyline *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPolyline(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPolyline_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPolyline > ExpressDataSet::createIfcPolyline(bool isVolatile) {
    if (isVolatile) {
        return new IfcPolyline(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPolyline * > (allocateIfcPolyline(this, Step::Id_UNSET));
    }
}

IfcPolyline *ExpressDataSet::cloneIfcPolyline(ExpressDataSet *expressDataSet, const IfcPolyline &obj, const CopyOp &copyop) {
    IfcPolyline *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPolyline(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPolyline_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPolyline *ExpressDataSet::cloneIfcPolyline(const IfcPolyline &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPolyline(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPolyline(this, obj, copyop);
    }
}

IfcPostalAddress *ExpressDataSet::getIfcPostalAddress(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPostalAddress * > (current->second.get());
    }
    else {
        IfcPostalAddress *ret = static_cast< IfcPostalAddress * > (allocateIfcPostalAddress(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPostalAddress(IfcPostalAddress *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPostalAddress_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPostalAddress(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPostalAddress *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPostalAddress(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPostalAddress_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPostalAddress > ExpressDataSet::createIfcPostalAddress(bool isVolatile) {
    if (isVolatile) {
        return new IfcPostalAddress(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPostalAddress * > (allocateIfcPostalAddress(this, Step::Id_UNSET));
    }
}

IfcPostalAddress *ExpressDataSet::cloneIfcPostalAddress(ExpressDataSet *expressDataSet, const IfcPostalAddress &obj, const CopyOp &copyop) {
    IfcPostalAddress *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPostalAddress(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPostalAddress_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPostalAddress *ExpressDataSet::cloneIfcPostalAddress(const IfcPostalAddress &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPostalAddress(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPostalAddress(this, obj, copyop);
    }
}

IfcPreDefinedDimensionSymbol *ExpressDataSet::getIfcPreDefinedDimensionSymbol(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPreDefinedDimensionSymbol * > (current->second.get());
    }
    else {
        IfcPreDefinedDimensionSymbol *ret = static_cast< IfcPreDefinedDimensionSymbol * > (allocateIfcPreDefinedDimensionSymbol(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPreDefinedDimensionSymbol_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPreDefinedDimensionSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPreDefinedDimensionSymbol *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPreDefinedDimensionSymbol(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPreDefinedDimensionSymbol_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPreDefinedDimensionSymbol > ExpressDataSet::createIfcPreDefinedDimensionSymbol(bool isVolatile) {
    if (isVolatile) {
        return new IfcPreDefinedDimensionSymbol(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPreDefinedDimensionSymbol * > (allocateIfcPreDefinedDimensionSymbol(this, Step::Id_UNSET));
    }
}

IfcPreDefinedDimensionSymbol *ExpressDataSet::cloneIfcPreDefinedDimensionSymbol(ExpressDataSet *expressDataSet, const IfcPreDefinedDimensionSymbol &obj, const CopyOp &copyop) {
    IfcPreDefinedDimensionSymbol *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPreDefinedDimensionSymbol(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPreDefinedDimensionSymbol_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPreDefinedDimensionSymbol *ExpressDataSet::cloneIfcPreDefinedDimensionSymbol(const IfcPreDefinedDimensionSymbol &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPreDefinedDimensionSymbol(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPreDefinedDimensionSymbol(this, obj, copyop);
    }
}

IfcPreDefinedPointMarkerSymbol *ExpressDataSet::getIfcPreDefinedPointMarkerSymbol(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPreDefinedPointMarkerSymbol * > (current->second.get());
    }
    else {
        IfcPreDefinedPointMarkerSymbol *ret = static_cast< IfcPreDefinedPointMarkerSymbol * > (allocateIfcPreDefinedPointMarkerSymbol(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPreDefinedPointMarkerSymbol_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPreDefinedPointMarkerSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPreDefinedPointMarkerSymbol *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPreDefinedPointMarkerSymbol(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPreDefinedPointMarkerSymbol_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPreDefinedPointMarkerSymbol > ExpressDataSet::createIfcPreDefinedPointMarkerSymbol(bool isVolatile) {
    if (isVolatile) {
        return new IfcPreDefinedPointMarkerSymbol(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPreDefinedPointMarkerSymbol * > (allocateIfcPreDefinedPointMarkerSymbol(this, Step::Id_UNSET));
    }
}

IfcPreDefinedPointMarkerSymbol *ExpressDataSet::cloneIfcPreDefinedPointMarkerSymbol(ExpressDataSet *expressDataSet, const IfcPreDefinedPointMarkerSymbol &obj, const CopyOp &copyop) {
    IfcPreDefinedPointMarkerSymbol *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPreDefinedPointMarkerSymbol(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPreDefinedPointMarkerSymbol_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPreDefinedPointMarkerSymbol *ExpressDataSet::cloneIfcPreDefinedPointMarkerSymbol(const IfcPreDefinedPointMarkerSymbol &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPreDefinedPointMarkerSymbol(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPreDefinedPointMarkerSymbol(this, obj, copyop);
    }
}

IfcPreDefinedTerminatorSymbol *ExpressDataSet::getIfcPreDefinedTerminatorSymbol(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPreDefinedTerminatorSymbol * > (current->second.get());
    }
    else {
        IfcPreDefinedTerminatorSymbol *ret = static_cast< IfcPreDefinedTerminatorSymbol * > (allocateIfcPreDefinedTerminatorSymbol(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPreDefinedTerminatorSymbol_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPreDefinedTerminatorSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPreDefinedTerminatorSymbol *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPreDefinedTerminatorSymbol(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPreDefinedTerminatorSymbol_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPreDefinedTerminatorSymbol > ExpressDataSet::createIfcPreDefinedTerminatorSymbol(bool isVolatile) {
    if (isVolatile) {
        return new IfcPreDefinedTerminatorSymbol(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPreDefinedTerminatorSymbol * > (allocateIfcPreDefinedTerminatorSymbol(this, Step::Id_UNSET));
    }
}

IfcPreDefinedTerminatorSymbol *ExpressDataSet::cloneIfcPreDefinedTerminatorSymbol(ExpressDataSet *expressDataSet, const IfcPreDefinedTerminatorSymbol &obj, const CopyOp &copyop) {
    IfcPreDefinedTerminatorSymbol *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPreDefinedTerminatorSymbol(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPreDefinedTerminatorSymbol_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPreDefinedTerminatorSymbol *ExpressDataSet::cloneIfcPreDefinedTerminatorSymbol(const IfcPreDefinedTerminatorSymbol &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPreDefinedTerminatorSymbol(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPreDefinedTerminatorSymbol(this, obj, copyop);
    }
}

IfcPresentationLayerAssignment *ExpressDataSet::getIfcPresentationLayerAssignment(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPresentationLayerAssignment * > (current->second.get());
    }
    else {
        IfcPresentationLayerAssignment *ret = static_cast< IfcPresentationLayerAssignment * > (allocateIfcPresentationLayerAssignment(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPresentationLayerAssignment_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPresentationLayerAssignment(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPresentationLayerAssignment *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPresentationLayerAssignment(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPresentationLayerAssignment_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPresentationLayerAssignment > ExpressDataSet::createIfcPresentationLayerAssignment(bool isVolatile) {
    if (isVolatile) {
        return new IfcPresentationLayerAssignment(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPresentationLayerAssignment * > (allocateIfcPresentationLayerAssignment(this, Step::Id_UNSET));
    }
}

IfcPresentationLayerAssignment *ExpressDataSet::cloneIfcPresentationLayerAssignment(ExpressDataSet *expressDataSet, const IfcPresentationLayerAssignment &obj, const CopyOp &copyop) {
    IfcPresentationLayerAssignment *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPresentationLayerAssignment(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPresentationLayerAssignment_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPresentationLayerAssignment *ExpressDataSet::cloneIfcPresentationLayerAssignment(const IfcPresentationLayerAssignment &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPresentationLayerAssignment(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPresentationLayerAssignment(this, obj, copyop);
    }
}

IfcPresentationLayerWithStyle *ExpressDataSet::getIfcPresentationLayerWithStyle(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPresentationLayerWithStyle * > (current->second.get());
    }
    else {
        IfcPresentationLayerWithStyle *ret = static_cast< IfcPresentationLayerWithStyle * > (allocateIfcPresentationLayerWithStyle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPresentationLayerWithStyle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPresentationLayerWithStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPresentationLayerWithStyle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPresentationLayerWithStyle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPresentationLayerWithStyle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPresentationLayerWithStyle > ExpressDataSet::createIfcPresentationLayerWithStyle(bool isVolatile) {
    if (isVolatile) {
        return new IfcPresentationLayerWithStyle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPresentationLayerWithStyle * > (allocateIfcPresentationLayerWithStyle(this, Step::Id_UNSET));
    }
}

IfcPresentationLayerWithStyle *ExpressDataSet::cloneIfcPresentationLayerWithStyle(ExpressDataSet *expressDataSet, const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop) {
    IfcPresentationLayerWithStyle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPresentationLayerWithStyle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPresentationLayerWithStyle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPresentationLayerWithStyle *ExpressDataSet::cloneIfcPresentationLayerWithStyle(const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPresentationLayerWithStyle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPresentationLayerWithStyle(this, obj, copyop);
    }
}

IfcPresentationStyleAssignment *ExpressDataSet::getIfcPresentationStyleAssignment(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPresentationStyleAssignment * > (current->second.get());
    }
    else {
        IfcPresentationStyleAssignment *ret = static_cast< IfcPresentationStyleAssignment * > (allocateIfcPresentationStyleAssignment(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPresentationStyleAssignment_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPresentationStyleAssignment(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPresentationStyleAssignment *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPresentationStyleAssignment(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPresentationStyleAssignment_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPresentationStyleAssignment > ExpressDataSet::createIfcPresentationStyleAssignment(bool isVolatile) {
    if (isVolatile) {
        return new IfcPresentationStyleAssignment(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPresentationStyleAssignment * > (allocateIfcPresentationStyleAssignment(this, Step::Id_UNSET));
    }
}

IfcPresentationStyleAssignment *ExpressDataSet::cloneIfcPresentationStyleAssignment(ExpressDataSet *expressDataSet, const IfcPresentationStyleAssignment &obj, const CopyOp &copyop) {
    IfcPresentationStyleAssignment *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPresentationStyleAssignment(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPresentationStyleAssignment_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPresentationStyleAssignment *ExpressDataSet::cloneIfcPresentationStyleAssignment(const IfcPresentationStyleAssignment &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPresentationStyleAssignment(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPresentationStyleAssignment(this, obj, copyop);
    }
}

IfcProcedure *ExpressDataSet::getIfcProcedure(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcProcedure * > (current->second.get());
    }
    else {
        IfcProcedure *ret = static_cast< IfcProcedure * > (allocateIfcProcedure(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcProcedure(IfcProcedure *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcProcedure_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcProcedure(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcProcedure *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcProcedure(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcProcedure_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcProcedure > ExpressDataSet::createIfcProcedure(bool isVolatile) {
    if (isVolatile) {
        return new IfcProcedure(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcProcedure * > (allocateIfcProcedure(this, Step::Id_UNSET));
    }
}

IfcProcedure *ExpressDataSet::cloneIfcProcedure(ExpressDataSet *expressDataSet, const IfcProcedure &obj, const CopyOp &copyop) {
    IfcProcedure *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcProcedure(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcProcedure_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcProcedure *ExpressDataSet::cloneIfcProcedure(const IfcProcedure &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcProcedure(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcProcedure(this, obj, copyop);
    }
}

IfcProductDefinitionShape *ExpressDataSet::getIfcProductDefinitionShape(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcProductDefinitionShape * > (current->second.get());
    }
    else {
        IfcProductDefinitionShape *ret = static_cast< IfcProductDefinitionShape * > (allocateIfcProductDefinitionShape(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcProductDefinitionShape(IfcProductDefinitionShape *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcProductDefinitionShape_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcProductDefinitionShape(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcProductDefinitionShape *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcProductDefinitionShape(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcProductDefinitionShape_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcProductDefinitionShape > ExpressDataSet::createIfcProductDefinitionShape(bool isVolatile) {
    if (isVolatile) {
        return new IfcProductDefinitionShape(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcProductDefinitionShape * > (allocateIfcProductDefinitionShape(this, Step::Id_UNSET));
    }
}

IfcProductDefinitionShape *ExpressDataSet::cloneIfcProductDefinitionShape(ExpressDataSet *expressDataSet, const IfcProductDefinitionShape &obj, const CopyOp &copyop) {
    IfcProductDefinitionShape *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcProductDefinitionShape(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcProductDefinitionShape_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcProductDefinitionShape *ExpressDataSet::cloneIfcProductDefinitionShape(const IfcProductDefinitionShape &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcProductDefinitionShape(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcProductDefinitionShape(this, obj, copyop);
    }
}

IfcProductRepresentation *ExpressDataSet::getIfcProductRepresentation(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcProductRepresentation * > (current->second.get());
    }
    else {
        IfcProductRepresentation *ret = static_cast< IfcProductRepresentation * > (allocateIfcProductRepresentation(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcProductRepresentation(IfcProductRepresentation *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcProductRepresentation_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcProductRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcProductRepresentation *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcProductRepresentation(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcProductRepresentation_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcProductRepresentation > ExpressDataSet::createIfcProductRepresentation(bool isVolatile) {
    if (isVolatile) {
        return new IfcProductRepresentation(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcProductRepresentation * > (allocateIfcProductRepresentation(this, Step::Id_UNSET));
    }
}

IfcProductRepresentation *ExpressDataSet::cloneIfcProductRepresentation(ExpressDataSet *expressDataSet, const IfcProductRepresentation &obj, const CopyOp &copyop) {
    IfcProductRepresentation *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcProductRepresentation(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcProductRepresentation_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcProductRepresentation *ExpressDataSet::cloneIfcProductRepresentation(const IfcProductRepresentation &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcProductRepresentation(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcProductRepresentation(this, obj, copyop);
    }
}

IfcProductsOfCombustionProperties *ExpressDataSet::getIfcProductsOfCombustionProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcProductsOfCombustionProperties * > (current->second.get());
    }
    else {
        IfcProductsOfCombustionProperties *ret = static_cast< IfcProductsOfCombustionProperties * > (allocateIfcProductsOfCombustionProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcProductsOfCombustionProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcProductsOfCombustionProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcProductsOfCombustionProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcProductsOfCombustionProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcProductsOfCombustionProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcProductsOfCombustionProperties > ExpressDataSet::createIfcProductsOfCombustionProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcProductsOfCombustionProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcProductsOfCombustionProperties * > (allocateIfcProductsOfCombustionProperties(this, Step::Id_UNSET));
    }
}

IfcProductsOfCombustionProperties *ExpressDataSet::cloneIfcProductsOfCombustionProperties(ExpressDataSet *expressDataSet, const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop) {
    IfcProductsOfCombustionProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcProductsOfCombustionProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcProductsOfCombustionProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcProductsOfCombustionProperties *ExpressDataSet::cloneIfcProductsOfCombustionProperties(const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcProductsOfCombustionProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcProductsOfCombustionProperties(this, obj, copyop);
    }
}

IfcProject *ExpressDataSet::getIfcProject(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcProject * > (current->second.get());
    }
    else {
        IfcProject *ret = static_cast< IfcProject * > (allocateIfcProject(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcProject(IfcProject *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcProject_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcProject(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcProject *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcProject(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcProject_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcProject > ExpressDataSet::createIfcProject(bool isVolatile) {
    if (isVolatile) {
        return new IfcProject(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcProject * > (allocateIfcProject(this, Step::Id_UNSET));
    }
}

IfcProject *ExpressDataSet::cloneIfcProject(ExpressDataSet *expressDataSet, const IfcProject &obj, const CopyOp &copyop) {
    IfcProject *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcProject(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcProject_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcProject *ExpressDataSet::cloneIfcProject(const IfcProject &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcProject(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcProject(this, obj, copyop);
    }
}

IfcProjectOrder *ExpressDataSet::getIfcProjectOrder(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcProjectOrder * > (current->second.get());
    }
    else {
        IfcProjectOrder *ret = static_cast< IfcProjectOrder * > (allocateIfcProjectOrder(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcProjectOrder(IfcProjectOrder *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcProjectOrder_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcProjectOrder(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcProjectOrder *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcProjectOrder(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcProjectOrder_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcProjectOrder > ExpressDataSet::createIfcProjectOrder(bool isVolatile) {
    if (isVolatile) {
        return new IfcProjectOrder(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcProjectOrder * > (allocateIfcProjectOrder(this, Step::Id_UNSET));
    }
}

IfcProjectOrder *ExpressDataSet::cloneIfcProjectOrder(ExpressDataSet *expressDataSet, const IfcProjectOrder &obj, const CopyOp &copyop) {
    IfcProjectOrder *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcProjectOrder(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcProjectOrder_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcProjectOrder *ExpressDataSet::cloneIfcProjectOrder(const IfcProjectOrder &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcProjectOrder(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcProjectOrder(this, obj, copyop);
    }
}

IfcProjectOrderRecord *ExpressDataSet::getIfcProjectOrderRecord(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcProjectOrderRecord * > (current->second.get());
    }
    else {
        IfcProjectOrderRecord *ret = static_cast< IfcProjectOrderRecord * > (allocateIfcProjectOrderRecord(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcProjectOrderRecord(IfcProjectOrderRecord *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcProjectOrderRecord_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcProjectOrderRecord(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcProjectOrderRecord *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcProjectOrderRecord(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcProjectOrderRecord_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcProjectOrderRecord > ExpressDataSet::createIfcProjectOrderRecord(bool isVolatile) {
    if (isVolatile) {
        return new IfcProjectOrderRecord(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcProjectOrderRecord * > (allocateIfcProjectOrderRecord(this, Step::Id_UNSET));
    }
}

IfcProjectOrderRecord *ExpressDataSet::cloneIfcProjectOrderRecord(ExpressDataSet *expressDataSet, const IfcProjectOrderRecord &obj, const CopyOp &copyop) {
    IfcProjectOrderRecord *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcProjectOrderRecord(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcProjectOrderRecord_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcProjectOrderRecord *ExpressDataSet::cloneIfcProjectOrderRecord(const IfcProjectOrderRecord &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcProjectOrderRecord(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcProjectOrderRecord(this, obj, copyop);
    }
}

IfcProjectionCurve *ExpressDataSet::getIfcProjectionCurve(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcProjectionCurve * > (current->second.get());
    }
    else {
        IfcProjectionCurve *ret = static_cast< IfcProjectionCurve * > (allocateIfcProjectionCurve(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcProjectionCurve(IfcProjectionCurve *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcProjectionCurve_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcProjectionCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcProjectionCurve *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcProjectionCurve(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcProjectionCurve_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcProjectionCurve > ExpressDataSet::createIfcProjectionCurve(bool isVolatile) {
    if (isVolatile) {
        return new IfcProjectionCurve(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcProjectionCurve * > (allocateIfcProjectionCurve(this, Step::Id_UNSET));
    }
}

IfcProjectionCurve *ExpressDataSet::cloneIfcProjectionCurve(ExpressDataSet *expressDataSet, const IfcProjectionCurve &obj, const CopyOp &copyop) {
    IfcProjectionCurve *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcProjectionCurve(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcProjectionCurve_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcProjectionCurve *ExpressDataSet::cloneIfcProjectionCurve(const IfcProjectionCurve &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcProjectionCurve(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcProjectionCurve(this, obj, copyop);
    }
}

IfcProjectionElement *ExpressDataSet::getIfcProjectionElement(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcProjectionElement * > (current->second.get());
    }
    else {
        IfcProjectionElement *ret = static_cast< IfcProjectionElement * > (allocateIfcProjectionElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcProjectionElement(IfcProjectionElement *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcProjectionElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcProjectionElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcProjectionElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcProjectionElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcProjectionElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcProjectionElement > ExpressDataSet::createIfcProjectionElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcProjectionElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcProjectionElement * > (allocateIfcProjectionElement(this, Step::Id_UNSET));
    }
}

IfcProjectionElement *ExpressDataSet::cloneIfcProjectionElement(ExpressDataSet *expressDataSet, const IfcProjectionElement &obj, const CopyOp &copyop) {
    IfcProjectionElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcProjectionElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcProjectionElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcProjectionElement *ExpressDataSet::cloneIfcProjectionElement(const IfcProjectionElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcProjectionElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcProjectionElement(this, obj, copyop);
    }
}

IfcPropertyBoundedValue *ExpressDataSet::getIfcPropertyBoundedValue(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPropertyBoundedValue * > (current->second.get());
    }
    else {
        IfcPropertyBoundedValue *ret = static_cast< IfcPropertyBoundedValue * > (allocateIfcPropertyBoundedValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPropertyBoundedValue(IfcPropertyBoundedValue *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPropertyBoundedValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPropertyBoundedValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPropertyBoundedValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPropertyBoundedValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPropertyBoundedValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPropertyBoundedValue > ExpressDataSet::createIfcPropertyBoundedValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcPropertyBoundedValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPropertyBoundedValue * > (allocateIfcPropertyBoundedValue(this, Step::Id_UNSET));
    }
}

IfcPropertyBoundedValue *ExpressDataSet::cloneIfcPropertyBoundedValue(ExpressDataSet *expressDataSet, const IfcPropertyBoundedValue &obj, const CopyOp &copyop) {
    IfcPropertyBoundedValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPropertyBoundedValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPropertyBoundedValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPropertyBoundedValue *ExpressDataSet::cloneIfcPropertyBoundedValue(const IfcPropertyBoundedValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPropertyBoundedValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPropertyBoundedValue(this, obj, copyop);
    }
}

IfcPropertyConstraintRelationship *ExpressDataSet::getIfcPropertyConstraintRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPropertyConstraintRelationship * > (current->second.get());
    }
    else {
        IfcPropertyConstraintRelationship *ret = static_cast< IfcPropertyConstraintRelationship * > (allocateIfcPropertyConstraintRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPropertyConstraintRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPropertyConstraintRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPropertyConstraintRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPropertyConstraintRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPropertyConstraintRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPropertyConstraintRelationship > ExpressDataSet::createIfcPropertyConstraintRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcPropertyConstraintRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPropertyConstraintRelationship * > (allocateIfcPropertyConstraintRelationship(this, Step::Id_UNSET));
    }
}

IfcPropertyConstraintRelationship *ExpressDataSet::cloneIfcPropertyConstraintRelationship(ExpressDataSet *expressDataSet, const IfcPropertyConstraintRelationship &obj, const CopyOp &copyop) {
    IfcPropertyConstraintRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPropertyConstraintRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPropertyConstraintRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPropertyConstraintRelationship *ExpressDataSet::cloneIfcPropertyConstraintRelationship(const IfcPropertyConstraintRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPropertyConstraintRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPropertyConstraintRelationship(this, obj, copyop);
    }
}

IfcPropertyDependencyRelationship *ExpressDataSet::getIfcPropertyDependencyRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPropertyDependencyRelationship * > (current->second.get());
    }
    else {
        IfcPropertyDependencyRelationship *ret = static_cast< IfcPropertyDependencyRelationship * > (allocateIfcPropertyDependencyRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPropertyDependencyRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPropertyDependencyRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPropertyDependencyRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPropertyDependencyRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPropertyDependencyRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPropertyDependencyRelationship > ExpressDataSet::createIfcPropertyDependencyRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcPropertyDependencyRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPropertyDependencyRelationship * > (allocateIfcPropertyDependencyRelationship(this, Step::Id_UNSET));
    }
}

IfcPropertyDependencyRelationship *ExpressDataSet::cloneIfcPropertyDependencyRelationship(ExpressDataSet *expressDataSet, const IfcPropertyDependencyRelationship &obj, const CopyOp &copyop) {
    IfcPropertyDependencyRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPropertyDependencyRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPropertyDependencyRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPropertyDependencyRelationship *ExpressDataSet::cloneIfcPropertyDependencyRelationship(const IfcPropertyDependencyRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPropertyDependencyRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPropertyDependencyRelationship(this, obj, copyop);
    }
}

IfcPropertyEnumeratedValue *ExpressDataSet::getIfcPropertyEnumeratedValue(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPropertyEnumeratedValue * > (current->second.get());
    }
    else {
        IfcPropertyEnumeratedValue *ret = static_cast< IfcPropertyEnumeratedValue * > (allocateIfcPropertyEnumeratedValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPropertyEnumeratedValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPropertyEnumeratedValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPropertyEnumeratedValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPropertyEnumeratedValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPropertyEnumeratedValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPropertyEnumeratedValue > ExpressDataSet::createIfcPropertyEnumeratedValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcPropertyEnumeratedValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPropertyEnumeratedValue * > (allocateIfcPropertyEnumeratedValue(this, Step::Id_UNSET));
    }
}

IfcPropertyEnumeratedValue *ExpressDataSet::cloneIfcPropertyEnumeratedValue(ExpressDataSet *expressDataSet, const IfcPropertyEnumeratedValue &obj, const CopyOp &copyop) {
    IfcPropertyEnumeratedValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPropertyEnumeratedValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPropertyEnumeratedValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPropertyEnumeratedValue *ExpressDataSet::cloneIfcPropertyEnumeratedValue(const IfcPropertyEnumeratedValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPropertyEnumeratedValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPropertyEnumeratedValue(this, obj, copyop);
    }
}

IfcPropertyEnumeration *ExpressDataSet::getIfcPropertyEnumeration(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPropertyEnumeration * > (current->second.get());
    }
    else {
        IfcPropertyEnumeration *ret = static_cast< IfcPropertyEnumeration * > (allocateIfcPropertyEnumeration(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPropertyEnumeration(IfcPropertyEnumeration *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPropertyEnumeration_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPropertyEnumeration(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPropertyEnumeration *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPropertyEnumeration(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPropertyEnumeration_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPropertyEnumeration > ExpressDataSet::createIfcPropertyEnumeration(bool isVolatile) {
    if (isVolatile) {
        return new IfcPropertyEnumeration(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPropertyEnumeration * > (allocateIfcPropertyEnumeration(this, Step::Id_UNSET));
    }
}

IfcPropertyEnumeration *ExpressDataSet::cloneIfcPropertyEnumeration(ExpressDataSet *expressDataSet, const IfcPropertyEnumeration &obj, const CopyOp &copyop) {
    IfcPropertyEnumeration *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPropertyEnumeration(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPropertyEnumeration_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPropertyEnumeration *ExpressDataSet::cloneIfcPropertyEnumeration(const IfcPropertyEnumeration &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPropertyEnumeration(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPropertyEnumeration(this, obj, copyop);
    }
}

IfcPropertyListValue *ExpressDataSet::getIfcPropertyListValue(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPropertyListValue * > (current->second.get());
    }
    else {
        IfcPropertyListValue *ret = static_cast< IfcPropertyListValue * > (allocateIfcPropertyListValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPropertyListValue(IfcPropertyListValue *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPropertyListValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPropertyListValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPropertyListValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPropertyListValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPropertyListValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPropertyListValue > ExpressDataSet::createIfcPropertyListValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcPropertyListValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPropertyListValue * > (allocateIfcPropertyListValue(this, Step::Id_UNSET));
    }
}

IfcPropertyListValue *ExpressDataSet::cloneIfcPropertyListValue(ExpressDataSet *expressDataSet, const IfcPropertyListValue &obj, const CopyOp &copyop) {
    IfcPropertyListValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPropertyListValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPropertyListValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPropertyListValue *ExpressDataSet::cloneIfcPropertyListValue(const IfcPropertyListValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPropertyListValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPropertyListValue(this, obj, copyop);
    }
}

IfcPropertyReferenceValue *ExpressDataSet::getIfcPropertyReferenceValue(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPropertyReferenceValue * > (current->second.get());
    }
    else {
        IfcPropertyReferenceValue *ret = static_cast< IfcPropertyReferenceValue * > (allocateIfcPropertyReferenceValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPropertyReferenceValue(IfcPropertyReferenceValue *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPropertyReferenceValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPropertyReferenceValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPropertyReferenceValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPropertyReferenceValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPropertyReferenceValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPropertyReferenceValue > ExpressDataSet::createIfcPropertyReferenceValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcPropertyReferenceValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPropertyReferenceValue * > (allocateIfcPropertyReferenceValue(this, Step::Id_UNSET));
    }
}

IfcPropertyReferenceValue *ExpressDataSet::cloneIfcPropertyReferenceValue(ExpressDataSet *expressDataSet, const IfcPropertyReferenceValue &obj, const CopyOp &copyop) {
    IfcPropertyReferenceValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPropertyReferenceValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPropertyReferenceValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPropertyReferenceValue *ExpressDataSet::cloneIfcPropertyReferenceValue(const IfcPropertyReferenceValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPropertyReferenceValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPropertyReferenceValue(this, obj, copyop);
    }
}

IfcPropertySet *ExpressDataSet::getIfcPropertySet(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPropertySet * > (current->second.get());
    }
    else {
        IfcPropertySet *ret = static_cast< IfcPropertySet * > (allocateIfcPropertySet(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPropertySet(IfcPropertySet *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPropertySet_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPropertySet(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPropertySet *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPropertySet(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPropertySet_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPropertySet > ExpressDataSet::createIfcPropertySet(bool isVolatile) {
    if (isVolatile) {
        return new IfcPropertySet(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPropertySet * > (allocateIfcPropertySet(this, Step::Id_UNSET));
    }
}

IfcPropertySet *ExpressDataSet::cloneIfcPropertySet(ExpressDataSet *expressDataSet, const IfcPropertySet &obj, const CopyOp &copyop) {
    IfcPropertySet *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPropertySet(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPropertySet_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPropertySet *ExpressDataSet::cloneIfcPropertySet(const IfcPropertySet &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPropertySet(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPropertySet(this, obj, copyop);
    }
}

IfcPropertySingleValue *ExpressDataSet::getIfcPropertySingleValue(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPropertySingleValue * > (current->second.get());
    }
    else {
        IfcPropertySingleValue *ret = static_cast< IfcPropertySingleValue * > (allocateIfcPropertySingleValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPropertySingleValue(IfcPropertySingleValue *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPropertySingleValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPropertySingleValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPropertySingleValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPropertySingleValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPropertySingleValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPropertySingleValue > ExpressDataSet::createIfcPropertySingleValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcPropertySingleValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPropertySingleValue * > (allocateIfcPropertySingleValue(this, Step::Id_UNSET));
    }
}

IfcPropertySingleValue *ExpressDataSet::cloneIfcPropertySingleValue(ExpressDataSet *expressDataSet, const IfcPropertySingleValue &obj, const CopyOp &copyop) {
    IfcPropertySingleValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPropertySingleValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPropertySingleValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPropertySingleValue *ExpressDataSet::cloneIfcPropertySingleValue(const IfcPropertySingleValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPropertySingleValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPropertySingleValue(this, obj, copyop);
    }
}

IfcPropertyTableValue *ExpressDataSet::getIfcPropertyTableValue(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPropertyTableValue * > (current->second.get());
    }
    else {
        IfcPropertyTableValue *ret = static_cast< IfcPropertyTableValue * > (allocateIfcPropertyTableValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPropertyTableValue(IfcPropertyTableValue *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPropertyTableValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPropertyTableValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPropertyTableValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPropertyTableValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPropertyTableValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPropertyTableValue > ExpressDataSet::createIfcPropertyTableValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcPropertyTableValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPropertyTableValue * > (allocateIfcPropertyTableValue(this, Step::Id_UNSET));
    }
}

IfcPropertyTableValue *ExpressDataSet::cloneIfcPropertyTableValue(ExpressDataSet *expressDataSet, const IfcPropertyTableValue &obj, const CopyOp &copyop) {
    IfcPropertyTableValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPropertyTableValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPropertyTableValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPropertyTableValue *ExpressDataSet::cloneIfcPropertyTableValue(const IfcPropertyTableValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPropertyTableValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPropertyTableValue(this, obj, copyop);
    }
}

IfcProtectiveDeviceType *ExpressDataSet::getIfcProtectiveDeviceType(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcProtectiveDeviceType * > (current->second.get());
    }
    else {
        IfcProtectiveDeviceType *ret = static_cast< IfcProtectiveDeviceType * > (allocateIfcProtectiveDeviceType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcProtectiveDeviceType(IfcProtectiveDeviceType *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcProtectiveDeviceType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcProtectiveDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcProtectiveDeviceType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcProtectiveDeviceType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcProtectiveDeviceType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcProtectiveDeviceType > ExpressDataSet::createIfcProtectiveDeviceType(bool isVolatile) {
    if (isVolatile) {
        return new IfcProtectiveDeviceType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcProtectiveDeviceType * > (allocateIfcProtectiveDeviceType(this, Step::Id_UNSET));
    }
}

IfcProtectiveDeviceType *ExpressDataSet::cloneIfcProtectiveDeviceType(ExpressDataSet *expressDataSet, const IfcProtectiveDeviceType &obj, const CopyOp &copyop) {
    IfcProtectiveDeviceType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcProtectiveDeviceType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcProtectiveDeviceType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcProtectiveDeviceType *ExpressDataSet::cloneIfcProtectiveDeviceType(const IfcProtectiveDeviceType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcProtectiveDeviceType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcProtectiveDeviceType(this, obj, copyop);
    }
}

IfcProxy *ExpressDataSet::getIfcProxy(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcProxy * > (current->second.get());
    }
    else {
        IfcProxy *ret = static_cast< IfcProxy * > (allocateIfcProxy(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcProxy(IfcProxy *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcProxy_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcProxy(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcProxy *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcProxy(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcProxy_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcProxy > ExpressDataSet::createIfcProxy(bool isVolatile) {
    if (isVolatile) {
        return new IfcProxy(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcProxy * > (allocateIfcProxy(this, Step::Id_UNSET));
    }
}

IfcProxy *ExpressDataSet::cloneIfcProxy(ExpressDataSet *expressDataSet, const IfcProxy &obj, const CopyOp &copyop) {
    IfcProxy *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcProxy(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcProxy_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcProxy *ExpressDataSet::cloneIfcProxy(const IfcProxy &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcProxy(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcProxy(this, obj, copyop);
    }
}

IfcPumpType *ExpressDataSet::getIfcPumpType(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcPumpType * > (current->second.get());
    }
    else {
        IfcPumpType *ret = static_cast< IfcPumpType * > (allocateIfcPumpType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcPumpType(IfcPumpType *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcPumpType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcPumpType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcPumpType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcPumpType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcPumpType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcPumpType > ExpressDataSet::createIfcPumpType(bool isVolatile) {
    if (isVolatile) {
        return new IfcPumpType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcPumpType * > (allocateIfcPumpType(this, Step::Id_UNSET));
    }
}

IfcPumpType *ExpressDataSet::cloneIfcPumpType(ExpressDataSet *expressDataSet, const IfcPumpType &obj, const CopyOp &copyop) {
    IfcPumpType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcPumpType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcPumpType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcPumpType *ExpressDataSet::cloneIfcPumpType(const IfcPumpType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcPumpType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcPumpType(this, obj, copyop);
    }
}

IfcQuantityArea *ExpressDataSet::getIfcQuantityArea(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcQuantityArea * > (current->second.get());
    }
    else {
        IfcQuantityArea *ret = static_cast< IfcQuantityArea * > (allocateIfcQuantityArea(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcQuantityArea(IfcQuantityArea *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcQuantityArea_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcQuantityArea(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcQuantityArea *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcQuantityArea(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcQuantityArea_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcQuantityArea > ExpressDataSet::createIfcQuantityArea(bool isVolatile) {
    if (isVolatile) {
        return new IfcQuantityArea(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcQuantityArea * > (allocateIfcQuantityArea(this, Step::Id_UNSET));
    }
}

IfcQuantityArea *ExpressDataSet::cloneIfcQuantityArea(ExpressDataSet *expressDataSet, const IfcQuantityArea &obj, const CopyOp &copyop) {
    IfcQuantityArea *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcQuantityArea(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcQuantityArea_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcQuantityArea *ExpressDataSet::cloneIfcQuantityArea(const IfcQuantityArea &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcQuantityArea(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcQuantityArea(this, obj, copyop);
    }
}

IfcQuantityCount *ExpressDataSet::getIfcQuantityCount(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcQuantityCount * > (current->second.get());
    }
    else {
        IfcQuantityCount *ret = static_cast< IfcQuantityCount * > (allocateIfcQuantityCount(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcQuantityCount(IfcQuantityCount *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcQuantityCount_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcQuantityCount(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcQuantityCount *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcQuantityCount(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcQuantityCount_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcQuantityCount > ExpressDataSet::createIfcQuantityCount(bool isVolatile) {
    if (isVolatile) {
        return new IfcQuantityCount(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcQuantityCount * > (allocateIfcQuantityCount(this, Step::Id_UNSET));
    }
}

IfcQuantityCount *ExpressDataSet::cloneIfcQuantityCount(ExpressDataSet *expressDataSet, const IfcQuantityCount &obj, const CopyOp &copyop) {
    IfcQuantityCount *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcQuantityCount(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcQuantityCount_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcQuantityCount *ExpressDataSet::cloneIfcQuantityCount(const IfcQuantityCount &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcQuantityCount(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcQuantityCount(this, obj, copyop);
    }
}

IfcQuantityLength *ExpressDataSet::getIfcQuantityLength(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcQuantityLength * > (current->second.get());
    }
    else {
        IfcQuantityLength *ret = static_cast< IfcQuantityLength * > (allocateIfcQuantityLength(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcQuantityLength(IfcQuantityLength *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcQuantityLength_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcQuantityLength(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcQuantityLength *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcQuantityLength(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcQuantityLength_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcQuantityLength > ExpressDataSet::createIfcQuantityLength(bool isVolatile) {
    if (isVolatile) {
        return new IfcQuantityLength(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcQuantityLength * > (allocateIfcQuantityLength(this, Step::Id_UNSET));
    }
}

IfcQuantityLength *ExpressDataSet::cloneIfcQuantityLength(ExpressDataSet *expressDataSet, const IfcQuantityLength &obj, const CopyOp &copyop) {
    IfcQuantityLength *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcQuantityLength(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcQuantityLength_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcQuantityLength *ExpressDataSet::cloneIfcQuantityLength(const IfcQuantityLength &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcQuantityLength(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcQuantityLength(this, obj, copyop);
    }
}

IfcQuantityTime *ExpressDataSet::getIfcQuantityTime(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcQuantityTime * > (current->second.get());
    }
    else {
        IfcQuantityTime *ret = static_cast< IfcQuantityTime * > (allocateIfcQuantityTime(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcQuantityTime(IfcQuantityTime *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcQuantityTime_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcQuantityTime(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcQuantityTime *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcQuantityTime(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcQuantityTime_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcQuantityTime > ExpressDataSet::createIfcQuantityTime(bool isVolatile) {
    if (isVolatile) {
        return new IfcQuantityTime(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcQuantityTime * > (allocateIfcQuantityTime(this, Step::Id_UNSET));
    }
}

IfcQuantityTime *ExpressDataSet::cloneIfcQuantityTime(ExpressDataSet *expressDataSet, const IfcQuantityTime &obj, const CopyOp &copyop) {
    IfcQuantityTime *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcQuantityTime(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcQuantityTime_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcQuantityTime *ExpressDataSet::cloneIfcQuantityTime(const IfcQuantityTime &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcQuantityTime(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcQuantityTime(this, obj, copyop);
    }
}

IfcQuantityVolume *ExpressDataSet::getIfcQuantityVolume(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcQuantityVolume * > (current->second.get());
    }
    else {
        IfcQuantityVolume *ret = static_cast< IfcQuantityVolume * > (allocateIfcQuantityVolume(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcQuantityVolume(IfcQuantityVolume *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcQuantityVolume_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcQuantityVolume(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcQuantityVolume *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcQuantityVolume(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcQuantityVolume_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcQuantityVolume > ExpressDataSet::createIfcQuantityVolume(bool isVolatile) {
    if (isVolatile) {
        return new IfcQuantityVolume(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcQuantityVolume * > (allocateIfcQuantityVolume(this, Step::Id_UNSET));
    }
}

IfcQuantityVolume *ExpressDataSet::cloneIfcQuantityVolume(ExpressDataSet *expressDataSet, const IfcQuantityVolume &obj, const CopyOp &copyop) {
    IfcQuantityVolume *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcQuantityVolume(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcQuantityVolume_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcQuantityVolume *ExpressDataSet::cloneIfcQuantityVolume(const IfcQuantityVolume &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcQuantityVolume(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcQuantityVolume(this, obj, copyop);
    }
}

IfcQuantityWeight *ExpressDataSet::getIfcQuantityWeight(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcQuantityWeight * > (current->second.get());
    }
    else {
        IfcQuantityWeight *ret = static_cast< IfcQuantityWeight * > (allocateIfcQuantityWeight(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcQuantityWeight(IfcQuantityWeight *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcQuantityWeight_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcQuantityWeight(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcQuantityWeight *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcQuantityWeight(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcQuantityWeight_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcQuantityWeight > ExpressDataSet::createIfcQuantityWeight(bool isVolatile) {
    if (isVolatile) {
        return new IfcQuantityWeight(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcQuantityWeight * > (allocateIfcQuantityWeight(this, Step::Id_UNSET));
    }
}

IfcQuantityWeight *ExpressDataSet::cloneIfcQuantityWeight(ExpressDataSet *expressDataSet, const IfcQuantityWeight &obj, const CopyOp &copyop) {
    IfcQuantityWeight *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcQuantityWeight(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcQuantityWeight_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcQuantityWeight *ExpressDataSet::cloneIfcQuantityWeight(const IfcQuantityWeight &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcQuantityWeight(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcQuantityWeight(this, obj, copyop);
    }
}

IfcRadiusDimension *ExpressDataSet::getIfcRadiusDimension(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRadiusDimension * > (current->second.get());
    }
    else {
        IfcRadiusDimension *ret = static_cast< IfcRadiusDimension * > (allocateIfcRadiusDimension(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRadiusDimension(IfcRadiusDimension *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRadiusDimension_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRadiusDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRadiusDimension *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRadiusDimension(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRadiusDimension_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRadiusDimension > ExpressDataSet::createIfcRadiusDimension(bool isVolatile) {
    if (isVolatile) {
        return new IfcRadiusDimension(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRadiusDimension * > (allocateIfcRadiusDimension(this, Step::Id_UNSET));
    }
}

IfcRadiusDimension *ExpressDataSet::cloneIfcRadiusDimension(ExpressDataSet *expressDataSet, const IfcRadiusDimension &obj, const CopyOp &copyop) {
    IfcRadiusDimension *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRadiusDimension(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRadiusDimension_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRadiusDimension *ExpressDataSet::cloneIfcRadiusDimension(const IfcRadiusDimension &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRadiusDimension(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRadiusDimension(this, obj, copyop);
    }
}

IfcRailing *ExpressDataSet::getIfcRailing(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRailing * > (current->second.get());
    }
    else {
        IfcRailing *ret = static_cast< IfcRailing * > (allocateIfcRailing(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRailing(IfcRailing *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRailing_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRailing(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRailing *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRailing(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRailing_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRailing > ExpressDataSet::createIfcRailing(bool isVolatile) {
    if (isVolatile) {
        return new IfcRailing(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRailing * > (allocateIfcRailing(this, Step::Id_UNSET));
    }
}

IfcRailing *ExpressDataSet::cloneIfcRailing(ExpressDataSet *expressDataSet, const IfcRailing &obj, const CopyOp &copyop) {
    IfcRailing *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRailing(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRailing_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRailing *ExpressDataSet::cloneIfcRailing(const IfcRailing &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRailing(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRailing(this, obj, copyop);
    }
}

IfcRailingType *ExpressDataSet::getIfcRailingType(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRailingType * > (current->second.get());
    }
    else {
        IfcRailingType *ret = static_cast< IfcRailingType * > (allocateIfcRailingType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRailingType(IfcRailingType *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRailingType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRailingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRailingType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRailingType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRailingType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRailingType > ExpressDataSet::createIfcRailingType(bool isVolatile) {
    if (isVolatile) {
        return new IfcRailingType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRailingType * > (allocateIfcRailingType(this, Step::Id_UNSET));
    }
}

IfcRailingType *ExpressDataSet::cloneIfcRailingType(ExpressDataSet *expressDataSet, const IfcRailingType &obj, const CopyOp &copyop) {
    IfcRailingType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRailingType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRailingType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRailingType *ExpressDataSet::cloneIfcRailingType(const IfcRailingType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRailingType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRailingType(this, obj, copyop);
    }
}

IfcRamp *ExpressDataSet::getIfcRamp(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRamp * > (current->second.get());
    }
    else {
        IfcRamp *ret = static_cast< IfcRamp * > (allocateIfcRamp(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRamp(IfcRamp *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRamp_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRamp(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRamp *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRamp(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRamp_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRamp > ExpressDataSet::createIfcRamp(bool isVolatile) {
    if (isVolatile) {
        return new IfcRamp(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRamp * > (allocateIfcRamp(this, Step::Id_UNSET));
    }
}

IfcRamp *ExpressDataSet::cloneIfcRamp(ExpressDataSet *expressDataSet, const IfcRamp &obj, const CopyOp &copyop) {
    IfcRamp *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRamp(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRamp_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRamp *ExpressDataSet::cloneIfcRamp(const IfcRamp &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRamp(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRamp(this, obj, copyop);
    }
}

IfcRampFlight *ExpressDataSet::getIfcRampFlight(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRampFlight * > (current->second.get());
    }
    else {
        IfcRampFlight *ret = static_cast< IfcRampFlight * > (allocateIfcRampFlight(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRampFlight(IfcRampFlight *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRampFlight_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRampFlight(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRampFlight *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRampFlight(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRampFlight_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRampFlight > ExpressDataSet::createIfcRampFlight(bool isVolatile) {
    if (isVolatile) {
        return new IfcRampFlight(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRampFlight * > (allocateIfcRampFlight(this, Step::Id_UNSET));
    }
}

IfcRampFlight *ExpressDataSet::cloneIfcRampFlight(ExpressDataSet *expressDataSet, const IfcRampFlight &obj, const CopyOp &copyop) {
    IfcRampFlight *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRampFlight(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRampFlight_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRampFlight *ExpressDataSet::cloneIfcRampFlight(const IfcRampFlight &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRampFlight(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRampFlight(this, obj, copyop);
    }
}

IfcRampFlightType *ExpressDataSet::getIfcRampFlightType(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRampFlightType * > (current->second.get());
    }
    else {
        IfcRampFlightType *ret = static_cast< IfcRampFlightType * > (allocateIfcRampFlightType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRampFlightType(IfcRampFlightType *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRampFlightType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRampFlightType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRampFlightType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRampFlightType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRampFlightType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRampFlightType > ExpressDataSet::createIfcRampFlightType(bool isVolatile) {
    if (isVolatile) {
        return new IfcRampFlightType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRampFlightType * > (allocateIfcRampFlightType(this, Step::Id_UNSET));
    }
}

IfcRampFlightType *ExpressDataSet::cloneIfcRampFlightType(ExpressDataSet *expressDataSet, const IfcRampFlightType &obj, const CopyOp &copyop) {
    IfcRampFlightType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRampFlightType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRampFlightType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRampFlightType *ExpressDataSet::cloneIfcRampFlightType(const IfcRampFlightType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRampFlightType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRampFlightType(this, obj, copyop);
    }
}

IfcRationalBezierCurve *ExpressDataSet::getIfcRationalBezierCurve(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRationalBezierCurve * > (current->second.get());
    }
    else {
        IfcRationalBezierCurve *ret = static_cast< IfcRationalBezierCurve * > (allocateIfcRationalBezierCurve(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRationalBezierCurve(IfcRationalBezierCurve *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRationalBezierCurve_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRationalBezierCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRationalBezierCurve *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRationalBezierCurve(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRationalBezierCurve_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRationalBezierCurve > ExpressDataSet::createIfcRationalBezierCurve(bool isVolatile) {
    if (isVolatile) {
        return new IfcRationalBezierCurve(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRationalBezierCurve * > (allocateIfcRationalBezierCurve(this, Step::Id_UNSET));
    }
}

IfcRationalBezierCurve *ExpressDataSet::cloneIfcRationalBezierCurve(ExpressDataSet *expressDataSet, const IfcRationalBezierCurve &obj, const CopyOp &copyop) {
    IfcRationalBezierCurve *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRationalBezierCurve(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRationalBezierCurve_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRationalBezierCurve *ExpressDataSet::cloneIfcRationalBezierCurve(const IfcRationalBezierCurve &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRationalBezierCurve(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRationalBezierCurve(this, obj, copyop);
    }
}

IfcRectangleHollowProfileDef *ExpressDataSet::getIfcRectangleHollowProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRectangleHollowProfileDef * > (current->second.get());
    }
    else {
        IfcRectangleHollowProfileDef *ret = static_cast< IfcRectangleHollowProfileDef * > (allocateIfcRectangleHollowProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRectangleHollowProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRectangleHollowProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRectangleHollowProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRectangleHollowProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRectangleHollowProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRectangleHollowProfileDef > ExpressDataSet::createIfcRectangleHollowProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcRectangleHollowProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRectangleHollowProfileDef * > (allocateIfcRectangleHollowProfileDef(this, Step::Id_UNSET));
    }
}

IfcRectangleHollowProfileDef *ExpressDataSet::cloneIfcRectangleHollowProfileDef(ExpressDataSet *expressDataSet, const IfcRectangleHollowProfileDef &obj, const CopyOp &copyop) {
    IfcRectangleHollowProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRectangleHollowProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRectangleHollowProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRectangleHollowProfileDef *ExpressDataSet::cloneIfcRectangleHollowProfileDef(const IfcRectangleHollowProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRectangleHollowProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRectangleHollowProfileDef(this, obj, copyop);
    }
}

IfcRectangleProfileDef *ExpressDataSet::getIfcRectangleProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRectangleProfileDef * > (current->second.get());
    }
    else {
        IfcRectangleProfileDef *ret = static_cast< IfcRectangleProfileDef * > (allocateIfcRectangleProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRectangleProfileDef(IfcRectangleProfileDef *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRectangleProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRectangleProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRectangleProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRectangleProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRectangleProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRectangleProfileDef > ExpressDataSet::createIfcRectangleProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcRectangleProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRectangleProfileDef * > (allocateIfcRectangleProfileDef(this, Step::Id_UNSET));
    }
}

IfcRectangleProfileDef *ExpressDataSet::cloneIfcRectangleProfileDef(ExpressDataSet *expressDataSet, const IfcRectangleProfileDef &obj, const CopyOp &copyop) {
    IfcRectangleProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRectangleProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRectangleProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRectangleProfileDef *ExpressDataSet::cloneIfcRectangleProfileDef(const IfcRectangleProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRectangleProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRectangleProfileDef(this, obj, copyop);
    }
}

IfcRectangularPyramid *ExpressDataSet::getIfcRectangularPyramid(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRectangularPyramid * > (current->second.get());
    }
    else {
        IfcRectangularPyramid *ret = static_cast< IfcRectangularPyramid * > (allocateIfcRectangularPyramid(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRectangularPyramid(IfcRectangularPyramid *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRectangularPyramid_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRectangularPyramid(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRectangularPyramid *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRectangularPyramid(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRectangularPyramid_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRectangularPyramid > ExpressDataSet::createIfcRectangularPyramid(bool isVolatile) {
    if (isVolatile) {
        return new IfcRectangularPyramid(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRectangularPyramid * > (allocateIfcRectangularPyramid(this, Step::Id_UNSET));
    }
}

IfcRectangularPyramid *ExpressDataSet::cloneIfcRectangularPyramid(ExpressDataSet *expressDataSet, const IfcRectangularPyramid &obj, const CopyOp &copyop) {
    IfcRectangularPyramid *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRectangularPyramid(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRectangularPyramid_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRectangularPyramid *ExpressDataSet::cloneIfcRectangularPyramid(const IfcRectangularPyramid &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRectangularPyramid(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRectangularPyramid(this, obj, copyop);
    }
}

IfcRectangularTrimmedSurface *ExpressDataSet::getIfcRectangularTrimmedSurface(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRectangularTrimmedSurface * > (current->second.get());
    }
    else {
        IfcRectangularTrimmedSurface *ret = static_cast< IfcRectangularTrimmedSurface * > (allocateIfcRectangularTrimmedSurface(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRectangularTrimmedSurface_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRectangularTrimmedSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRectangularTrimmedSurface *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRectangularTrimmedSurface(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRectangularTrimmedSurface_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRectangularTrimmedSurface > ExpressDataSet::createIfcRectangularTrimmedSurface(bool isVolatile) {
    if (isVolatile) {
        return new IfcRectangularTrimmedSurface(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRectangularTrimmedSurface * > (allocateIfcRectangularTrimmedSurface(this, Step::Id_UNSET));
    }
}

IfcRectangularTrimmedSurface *ExpressDataSet::cloneIfcRectangularTrimmedSurface(ExpressDataSet *expressDataSet, const IfcRectangularTrimmedSurface &obj, const CopyOp &copyop) {
    IfcRectangularTrimmedSurface *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRectangularTrimmedSurface(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRectangularTrimmedSurface_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRectangularTrimmedSurface *ExpressDataSet::cloneIfcRectangularTrimmedSurface(const IfcRectangularTrimmedSurface &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRectangularTrimmedSurface(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRectangularTrimmedSurface(this, obj, copyop);
    }
}

IfcReferencesValueDocument *ExpressDataSet::getIfcReferencesValueDocument(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcReferencesValueDocument * > (current->second.get());
    }
    else {
        IfcReferencesValueDocument *ret = static_cast< IfcReferencesValueDocument * > (allocateIfcReferencesValueDocument(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcReferencesValueDocument(IfcReferencesValueDocument *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcReferencesValueDocument_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcReferencesValueDocument(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcReferencesValueDocument *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcReferencesValueDocument(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcReferencesValueDocument_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcReferencesValueDocument > ExpressDataSet::createIfcReferencesValueDocument(bool isVolatile) {
    if (isVolatile) {
        return new IfcReferencesValueDocument(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcReferencesValueDocument * > (allocateIfcReferencesValueDocument(this, Step::Id_UNSET));
    }
}

IfcReferencesValueDocument *ExpressDataSet::cloneIfcReferencesValueDocument(ExpressDataSet *expressDataSet, const IfcReferencesValueDocument &obj, const CopyOp &copyop) {
    IfcReferencesValueDocument *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcReferencesValueDocument(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcReferencesValueDocument_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcReferencesValueDocument *ExpressDataSet::cloneIfcReferencesValueDocument(const IfcReferencesValueDocument &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcReferencesValueDocument(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcReferencesValueDocument(this, obj, copyop);
    }
}

IfcRegularTimeSeries *ExpressDataSet::getIfcRegularTimeSeries(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRegularTimeSeries * > (current->second.get());
    }
    else {
        IfcRegularTimeSeries *ret = static_cast< IfcRegularTimeSeries * > (allocateIfcRegularTimeSeries(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRegularTimeSeries(IfcRegularTimeSeries *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRegularTimeSeries_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRegularTimeSeries(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRegularTimeSeries *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRegularTimeSeries(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRegularTimeSeries_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRegularTimeSeries > ExpressDataSet::createIfcRegularTimeSeries(bool isVolatile) {
    if (isVolatile) {
        return new IfcRegularTimeSeries(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRegularTimeSeries * > (allocateIfcRegularTimeSeries(this, Step::Id_UNSET));
    }
}

IfcRegularTimeSeries *ExpressDataSet::cloneIfcRegularTimeSeries(ExpressDataSet *expressDataSet, const IfcRegularTimeSeries &obj, const CopyOp &copyop) {
    IfcRegularTimeSeries *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRegularTimeSeries(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRegularTimeSeries_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRegularTimeSeries *ExpressDataSet::cloneIfcRegularTimeSeries(const IfcRegularTimeSeries &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRegularTimeSeries(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRegularTimeSeries(this, obj, copyop);
    }
}

IfcReinforcementBarProperties *ExpressDataSet::getIfcReinforcementBarProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcReinforcementBarProperties * > (current->second.get());
    }
    else {
        IfcReinforcementBarProperties *ret = static_cast< IfcReinforcementBarProperties * > (allocateIfcReinforcementBarProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcReinforcementBarProperties(IfcReinforcementBarProperties *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcReinforcementBarProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcReinforcementBarProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcReinforcementBarProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcReinforcementBarProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcReinforcementBarProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcReinforcementBarProperties > ExpressDataSet::createIfcReinforcementBarProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcReinforcementBarProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcReinforcementBarProperties * > (allocateIfcReinforcementBarProperties(this, Step::Id_UNSET));
    }
}

IfcReinforcementBarProperties *ExpressDataSet::cloneIfcReinforcementBarProperties(ExpressDataSet *expressDataSet, const IfcReinforcementBarProperties &obj, const CopyOp &copyop) {
    IfcReinforcementBarProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcReinforcementBarProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcReinforcementBarProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcReinforcementBarProperties *ExpressDataSet::cloneIfcReinforcementBarProperties(const IfcReinforcementBarProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcReinforcementBarProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcReinforcementBarProperties(this, obj, copyop);
    }
}

IfcReinforcementDefinitionProperties *ExpressDataSet::getIfcReinforcementDefinitionProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcReinforcementDefinitionProperties * > (current->second.get());
    }
    else {
        IfcReinforcementDefinitionProperties *ret = static_cast< IfcReinforcementDefinitionProperties * > (allocateIfcReinforcementDefinitionProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcReinforcementDefinitionProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcReinforcementDefinitionProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcReinforcementDefinitionProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcReinforcementDefinitionProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcReinforcementDefinitionProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcReinforcementDefinitionProperties > ExpressDataSet::createIfcReinforcementDefinitionProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcReinforcementDefinitionProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcReinforcementDefinitionProperties * > (allocateIfcReinforcementDefinitionProperties(this, Step::Id_UNSET));
    }
}

IfcReinforcementDefinitionProperties *ExpressDataSet::cloneIfcReinforcementDefinitionProperties(ExpressDataSet *expressDataSet, const IfcReinforcementDefinitionProperties &obj, const CopyOp &copyop) {
    IfcReinforcementDefinitionProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcReinforcementDefinitionProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcReinforcementDefinitionProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcReinforcementDefinitionProperties *ExpressDataSet::cloneIfcReinforcementDefinitionProperties(const IfcReinforcementDefinitionProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcReinforcementDefinitionProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcReinforcementDefinitionProperties(this, obj, copyop);
    }
}

IfcReinforcingBar *ExpressDataSet::getIfcReinforcingBar(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcReinforcingBar * > (current->second.get());
    }
    else {
        IfcReinforcingBar *ret = static_cast< IfcReinforcingBar * > (allocateIfcReinforcingBar(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcReinforcingBar(IfcReinforcingBar *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcReinforcingBar_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcReinforcingBar(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcReinforcingBar *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcReinforcingBar(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcReinforcingBar_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcReinforcingBar > ExpressDataSet::createIfcReinforcingBar(bool isVolatile) {
    if (isVolatile) {
        return new IfcReinforcingBar(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcReinforcingBar * > (allocateIfcReinforcingBar(this, Step::Id_UNSET));
    }
}

IfcReinforcingBar *ExpressDataSet::cloneIfcReinforcingBar(ExpressDataSet *expressDataSet, const IfcReinforcingBar &obj, const CopyOp &copyop) {
    IfcReinforcingBar *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcReinforcingBar(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcReinforcingBar_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcReinforcingBar *ExpressDataSet::cloneIfcReinforcingBar(const IfcReinforcingBar &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcReinforcingBar(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcReinforcingBar(this, obj, copyop);
    }
}

IfcReinforcingMesh *ExpressDataSet::getIfcReinforcingMesh(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcReinforcingMesh * > (current->second.get());
    }
    else {
        IfcReinforcingMesh *ret = static_cast< IfcReinforcingMesh * > (allocateIfcReinforcingMesh(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcReinforcingMesh(IfcReinforcingMesh *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcReinforcingMesh_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcReinforcingMesh(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcReinforcingMesh *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcReinforcingMesh(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcReinforcingMesh_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcReinforcingMesh > ExpressDataSet::createIfcReinforcingMesh(bool isVolatile) {
    if (isVolatile) {
        return new IfcReinforcingMesh(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcReinforcingMesh * > (allocateIfcReinforcingMesh(this, Step::Id_UNSET));
    }
}

IfcReinforcingMesh *ExpressDataSet::cloneIfcReinforcingMesh(ExpressDataSet *expressDataSet, const IfcReinforcingMesh &obj, const CopyOp &copyop) {
    IfcReinforcingMesh *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcReinforcingMesh(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcReinforcingMesh_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcReinforcingMesh *ExpressDataSet::cloneIfcReinforcingMesh(const IfcReinforcingMesh &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcReinforcingMesh(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcReinforcingMesh(this, obj, copyop);
    }
}

IfcRelAggregates *ExpressDataSet::getIfcRelAggregates(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAggregates * > (current->second.get());
    }
    else {
        IfcRelAggregates *ret = static_cast< IfcRelAggregates * > (allocateIfcRelAggregates(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAggregates(IfcRelAggregates *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAggregates_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAggregates(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAggregates *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAggregates(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAggregates_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAggregates > ExpressDataSet::createIfcRelAggregates(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAggregates(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAggregates * > (allocateIfcRelAggregates(this, Step::Id_UNSET));
    }
}

IfcRelAggregates *ExpressDataSet::cloneIfcRelAggregates(ExpressDataSet *expressDataSet, const IfcRelAggregates &obj, const CopyOp &copyop) {
    IfcRelAggregates *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAggregates(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAggregates_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAggregates *ExpressDataSet::cloneIfcRelAggregates(const IfcRelAggregates &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAggregates(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAggregates(this, obj, copyop);
    }
}

IfcRelAssignsTasks *ExpressDataSet::getIfcRelAssignsTasks(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssignsTasks * > (current->second.get());
    }
    else {
        IfcRelAssignsTasks *ret = static_cast< IfcRelAssignsTasks * > (allocateIfcRelAssignsTasks(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssignsTasks(IfcRelAssignsTasks *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssignsTasks_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssignsTasks(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssignsTasks *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssignsTasks(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssignsTasks_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssignsTasks > ExpressDataSet::createIfcRelAssignsTasks(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssignsTasks(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssignsTasks * > (allocateIfcRelAssignsTasks(this, Step::Id_UNSET));
    }
}

IfcRelAssignsTasks *ExpressDataSet::cloneIfcRelAssignsTasks(ExpressDataSet *expressDataSet, const IfcRelAssignsTasks &obj, const CopyOp &copyop) {
    IfcRelAssignsTasks *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssignsTasks(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssignsTasks_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssignsTasks *ExpressDataSet::cloneIfcRelAssignsTasks(const IfcRelAssignsTasks &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssignsTasks(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssignsTasks(this, obj, copyop);
    }
}

IfcRelAssignsToActor *ExpressDataSet::getIfcRelAssignsToActor(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssignsToActor * > (current->second.get());
    }
    else {
        IfcRelAssignsToActor *ret = static_cast< IfcRelAssignsToActor * > (allocateIfcRelAssignsToActor(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssignsToActor(IfcRelAssignsToActor *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssignsToActor_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssignsToActor(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssignsToActor *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssignsToActor(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssignsToActor_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssignsToActor > ExpressDataSet::createIfcRelAssignsToActor(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssignsToActor(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssignsToActor * > (allocateIfcRelAssignsToActor(this, Step::Id_UNSET));
    }
}

IfcRelAssignsToActor *ExpressDataSet::cloneIfcRelAssignsToActor(ExpressDataSet *expressDataSet, const IfcRelAssignsToActor &obj, const CopyOp &copyop) {
    IfcRelAssignsToActor *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssignsToActor(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssignsToActor_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssignsToActor *ExpressDataSet::cloneIfcRelAssignsToActor(const IfcRelAssignsToActor &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssignsToActor(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssignsToActor(this, obj, copyop);
    }
}

IfcRelAssignsToControl *ExpressDataSet::getIfcRelAssignsToControl(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssignsToControl * > (current->second.get());
    }
    else {
        IfcRelAssignsToControl *ret = static_cast< IfcRelAssignsToControl * > (allocateIfcRelAssignsToControl(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssignsToControl(IfcRelAssignsToControl *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssignsToControl_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssignsToControl(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssignsToControl *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssignsToControl(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssignsToControl_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssignsToControl > ExpressDataSet::createIfcRelAssignsToControl(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssignsToControl(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssignsToControl * > (allocateIfcRelAssignsToControl(this, Step::Id_UNSET));
    }
}

IfcRelAssignsToControl *ExpressDataSet::cloneIfcRelAssignsToControl(ExpressDataSet *expressDataSet, const IfcRelAssignsToControl &obj, const CopyOp &copyop) {
    IfcRelAssignsToControl *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssignsToControl(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssignsToControl_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssignsToControl *ExpressDataSet::cloneIfcRelAssignsToControl(const IfcRelAssignsToControl &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssignsToControl(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssignsToControl(this, obj, copyop);
    }
}

IfcRelAssignsToGroup *ExpressDataSet::getIfcRelAssignsToGroup(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssignsToGroup * > (current->second.get());
    }
    else {
        IfcRelAssignsToGroup *ret = static_cast< IfcRelAssignsToGroup * > (allocateIfcRelAssignsToGroup(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssignsToGroup(IfcRelAssignsToGroup *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssignsToGroup_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssignsToGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssignsToGroup *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssignsToGroup(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssignsToGroup_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssignsToGroup > ExpressDataSet::createIfcRelAssignsToGroup(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssignsToGroup(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssignsToGroup * > (allocateIfcRelAssignsToGroup(this, Step::Id_UNSET));
    }
}

IfcRelAssignsToGroup *ExpressDataSet::cloneIfcRelAssignsToGroup(ExpressDataSet *expressDataSet, const IfcRelAssignsToGroup &obj, const CopyOp &copyop) {
    IfcRelAssignsToGroup *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssignsToGroup(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssignsToGroup_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssignsToGroup *ExpressDataSet::cloneIfcRelAssignsToGroup(const IfcRelAssignsToGroup &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssignsToGroup(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssignsToGroup(this, obj, copyop);
    }
}

IfcRelAssignsToProcess *ExpressDataSet::getIfcRelAssignsToProcess(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssignsToProcess * > (current->second.get());
    }
    else {
        IfcRelAssignsToProcess *ret = static_cast< IfcRelAssignsToProcess * > (allocateIfcRelAssignsToProcess(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssignsToProcess(IfcRelAssignsToProcess *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssignsToProcess_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssignsToProcess(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssignsToProcess *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssignsToProcess(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssignsToProcess_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssignsToProcess > ExpressDataSet::createIfcRelAssignsToProcess(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssignsToProcess(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssignsToProcess * > (allocateIfcRelAssignsToProcess(this, Step::Id_UNSET));
    }
}

IfcRelAssignsToProcess *ExpressDataSet::cloneIfcRelAssignsToProcess(ExpressDataSet *expressDataSet, const IfcRelAssignsToProcess &obj, const CopyOp &copyop) {
    IfcRelAssignsToProcess *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssignsToProcess(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssignsToProcess_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssignsToProcess *ExpressDataSet::cloneIfcRelAssignsToProcess(const IfcRelAssignsToProcess &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssignsToProcess(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssignsToProcess(this, obj, copyop);
    }
}

IfcRelAssignsToProduct *ExpressDataSet::getIfcRelAssignsToProduct(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssignsToProduct * > (current->second.get());
    }
    else {
        IfcRelAssignsToProduct *ret = static_cast< IfcRelAssignsToProduct * > (allocateIfcRelAssignsToProduct(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssignsToProduct(IfcRelAssignsToProduct *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssignsToProduct_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssignsToProduct(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssignsToProduct *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssignsToProduct(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssignsToProduct_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssignsToProduct > ExpressDataSet::createIfcRelAssignsToProduct(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssignsToProduct(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssignsToProduct * > (allocateIfcRelAssignsToProduct(this, Step::Id_UNSET));
    }
}

IfcRelAssignsToProduct *ExpressDataSet::cloneIfcRelAssignsToProduct(ExpressDataSet *expressDataSet, const IfcRelAssignsToProduct &obj, const CopyOp &copyop) {
    IfcRelAssignsToProduct *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssignsToProduct(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssignsToProduct_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssignsToProduct *ExpressDataSet::cloneIfcRelAssignsToProduct(const IfcRelAssignsToProduct &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssignsToProduct(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssignsToProduct(this, obj, copyop);
    }
}

IfcRelAssignsToProjectOrder *ExpressDataSet::getIfcRelAssignsToProjectOrder(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssignsToProjectOrder * > (current->second.get());
    }
    else {
        IfcRelAssignsToProjectOrder *ret = static_cast< IfcRelAssignsToProjectOrder * > (allocateIfcRelAssignsToProjectOrder(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssignsToProjectOrder_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssignsToProjectOrder(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssignsToProjectOrder *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssignsToProjectOrder(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssignsToProjectOrder_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssignsToProjectOrder > ExpressDataSet::createIfcRelAssignsToProjectOrder(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssignsToProjectOrder(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssignsToProjectOrder * > (allocateIfcRelAssignsToProjectOrder(this, Step::Id_UNSET));
    }
}

IfcRelAssignsToProjectOrder *ExpressDataSet::cloneIfcRelAssignsToProjectOrder(ExpressDataSet *expressDataSet, const IfcRelAssignsToProjectOrder &obj, const CopyOp &copyop) {
    IfcRelAssignsToProjectOrder *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssignsToProjectOrder(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssignsToProjectOrder_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssignsToProjectOrder *ExpressDataSet::cloneIfcRelAssignsToProjectOrder(const IfcRelAssignsToProjectOrder &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssignsToProjectOrder(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssignsToProjectOrder(this, obj, copyop);
    }
}

IfcRelAssignsToResource *ExpressDataSet::getIfcRelAssignsToResource(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssignsToResource * > (current->second.get());
    }
    else {
        IfcRelAssignsToResource *ret = static_cast< IfcRelAssignsToResource * > (allocateIfcRelAssignsToResource(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssignsToResource(IfcRelAssignsToResource *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssignsToResource_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssignsToResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssignsToResource *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssignsToResource(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssignsToResource_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssignsToResource > ExpressDataSet::createIfcRelAssignsToResource(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssignsToResource(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssignsToResource * > (allocateIfcRelAssignsToResource(this, Step::Id_UNSET));
    }
}

IfcRelAssignsToResource *ExpressDataSet::cloneIfcRelAssignsToResource(ExpressDataSet *expressDataSet, const IfcRelAssignsToResource &obj, const CopyOp &copyop) {
    IfcRelAssignsToResource *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssignsToResource(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssignsToResource_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssignsToResource *ExpressDataSet::cloneIfcRelAssignsToResource(const IfcRelAssignsToResource &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssignsToResource(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssignsToResource(this, obj, copyop);
    }
}

IfcRelAssociates *ExpressDataSet::getIfcRelAssociates(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssociates * > (current->second.get());
    }
    else {
        IfcRelAssociates *ret = static_cast< IfcRelAssociates * > (allocateIfcRelAssociates(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssociates(IfcRelAssociates *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssociates_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssociates(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssociates *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssociates(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssociates_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssociates > ExpressDataSet::createIfcRelAssociates(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssociates(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssociates * > (allocateIfcRelAssociates(this, Step::Id_UNSET));
    }
}

IfcRelAssociates *ExpressDataSet::cloneIfcRelAssociates(ExpressDataSet *expressDataSet, const IfcRelAssociates &obj, const CopyOp &copyop) {
    IfcRelAssociates *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssociates(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssociates_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssociates *ExpressDataSet::cloneIfcRelAssociates(const IfcRelAssociates &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssociates(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssociates(this, obj, copyop);
    }
}

IfcRelAssociatesAppliedValue *ExpressDataSet::getIfcRelAssociatesAppliedValue(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssociatesAppliedValue * > (current->second.get());
    }
    else {
        IfcRelAssociatesAppliedValue *ret = static_cast< IfcRelAssociatesAppliedValue * > (allocateIfcRelAssociatesAppliedValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssociatesAppliedValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssociatesAppliedValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssociatesAppliedValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssociatesAppliedValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssociatesAppliedValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssociatesAppliedValue > ExpressDataSet::createIfcRelAssociatesAppliedValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssociatesAppliedValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssociatesAppliedValue * > (allocateIfcRelAssociatesAppliedValue(this, Step::Id_UNSET));
    }
}

IfcRelAssociatesAppliedValue *ExpressDataSet::cloneIfcRelAssociatesAppliedValue(ExpressDataSet *expressDataSet, const IfcRelAssociatesAppliedValue &obj, const CopyOp &copyop) {
    IfcRelAssociatesAppliedValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssociatesAppliedValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssociatesAppliedValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssociatesAppliedValue *ExpressDataSet::cloneIfcRelAssociatesAppliedValue(const IfcRelAssociatesAppliedValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssociatesAppliedValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssociatesAppliedValue(this, obj, copyop);
    }
}

IfcRelAssociatesApproval *ExpressDataSet::getIfcRelAssociatesApproval(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssociatesApproval * > (current->second.get());
    }
    else {
        IfcRelAssociatesApproval *ret = static_cast< IfcRelAssociatesApproval * > (allocateIfcRelAssociatesApproval(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssociatesApproval(IfcRelAssociatesApproval *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssociatesApproval_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssociatesApproval(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssociatesApproval *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssociatesApproval(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssociatesApproval_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssociatesApproval > ExpressDataSet::createIfcRelAssociatesApproval(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssociatesApproval(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssociatesApproval * > (allocateIfcRelAssociatesApproval(this, Step::Id_UNSET));
    }
}

IfcRelAssociatesApproval *ExpressDataSet::cloneIfcRelAssociatesApproval(ExpressDataSet *expressDataSet, const IfcRelAssociatesApproval &obj, const CopyOp &copyop) {
    IfcRelAssociatesApproval *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssociatesApproval(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssociatesApproval_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssociatesApproval *ExpressDataSet::cloneIfcRelAssociatesApproval(const IfcRelAssociatesApproval &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssociatesApproval(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssociatesApproval(this, obj, copyop);
    }
}

IfcRelAssociatesClassification *ExpressDataSet::getIfcRelAssociatesClassification(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssociatesClassification * > (current->second.get());
    }
    else {
        IfcRelAssociatesClassification *ret = static_cast< IfcRelAssociatesClassification * > (allocateIfcRelAssociatesClassification(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssociatesClassification(IfcRelAssociatesClassification *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssociatesClassification_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssociatesClassification(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssociatesClassification *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssociatesClassification(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssociatesClassification_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssociatesClassification > ExpressDataSet::createIfcRelAssociatesClassification(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssociatesClassification(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssociatesClassification * > (allocateIfcRelAssociatesClassification(this, Step::Id_UNSET));
    }
}

IfcRelAssociatesClassification *ExpressDataSet::cloneIfcRelAssociatesClassification(ExpressDataSet *expressDataSet, const IfcRelAssociatesClassification &obj, const CopyOp &copyop) {
    IfcRelAssociatesClassification *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssociatesClassification(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssociatesClassification_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssociatesClassification *ExpressDataSet::cloneIfcRelAssociatesClassification(const IfcRelAssociatesClassification &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssociatesClassification(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssociatesClassification(this, obj, copyop);
    }
}

IfcRelAssociatesConstraint *ExpressDataSet::getIfcRelAssociatesConstraint(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssociatesConstraint * > (current->second.get());
    }
    else {
        IfcRelAssociatesConstraint *ret = static_cast< IfcRelAssociatesConstraint * > (allocateIfcRelAssociatesConstraint(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssociatesConstraint_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssociatesConstraint(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssociatesConstraint *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssociatesConstraint(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssociatesConstraint_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssociatesConstraint > ExpressDataSet::createIfcRelAssociatesConstraint(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssociatesConstraint(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssociatesConstraint * > (allocateIfcRelAssociatesConstraint(this, Step::Id_UNSET));
    }
}

IfcRelAssociatesConstraint *ExpressDataSet::cloneIfcRelAssociatesConstraint(ExpressDataSet *expressDataSet, const IfcRelAssociatesConstraint &obj, const CopyOp &copyop) {
    IfcRelAssociatesConstraint *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssociatesConstraint(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssociatesConstraint_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssociatesConstraint *ExpressDataSet::cloneIfcRelAssociatesConstraint(const IfcRelAssociatesConstraint &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssociatesConstraint(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssociatesConstraint(this, obj, copyop);
    }
}

IfcRelAssociatesDocument *ExpressDataSet::getIfcRelAssociatesDocument(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssociatesDocument * > (current->second.get());
    }
    else {
        IfcRelAssociatesDocument *ret = static_cast< IfcRelAssociatesDocument * > (allocateIfcRelAssociatesDocument(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssociatesDocument(IfcRelAssociatesDocument *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssociatesDocument_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssociatesDocument(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssociatesDocument *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssociatesDocument(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssociatesDocument_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssociatesDocument > ExpressDataSet::createIfcRelAssociatesDocument(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssociatesDocument(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssociatesDocument * > (allocateIfcRelAssociatesDocument(this, Step::Id_UNSET));
    }
}

IfcRelAssociatesDocument *ExpressDataSet::cloneIfcRelAssociatesDocument(ExpressDataSet *expressDataSet, const IfcRelAssociatesDocument &obj, const CopyOp &copyop) {
    IfcRelAssociatesDocument *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssociatesDocument(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssociatesDocument_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssociatesDocument *ExpressDataSet::cloneIfcRelAssociatesDocument(const IfcRelAssociatesDocument &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssociatesDocument(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssociatesDocument(this, obj, copyop);
    }
}

IfcRelAssociatesLibrary *ExpressDataSet::getIfcRelAssociatesLibrary(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssociatesLibrary * > (current->second.get());
    }
    else {
        IfcRelAssociatesLibrary *ret = static_cast< IfcRelAssociatesLibrary * > (allocateIfcRelAssociatesLibrary(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssociatesLibrary_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssociatesLibrary(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssociatesLibrary *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssociatesLibrary(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssociatesLibrary_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssociatesLibrary > ExpressDataSet::createIfcRelAssociatesLibrary(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssociatesLibrary(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssociatesLibrary * > (allocateIfcRelAssociatesLibrary(this, Step::Id_UNSET));
    }
}

IfcRelAssociatesLibrary *ExpressDataSet::cloneIfcRelAssociatesLibrary(ExpressDataSet *expressDataSet, const IfcRelAssociatesLibrary &obj, const CopyOp &copyop) {
    IfcRelAssociatesLibrary *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssociatesLibrary(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssociatesLibrary_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssociatesLibrary *ExpressDataSet::cloneIfcRelAssociatesLibrary(const IfcRelAssociatesLibrary &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssociatesLibrary(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssociatesLibrary(this, obj, copyop);
    }
}

IfcRelAssociatesMaterial *ExpressDataSet::getIfcRelAssociatesMaterial(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssociatesMaterial * > (current->second.get());
    }
    else {
        IfcRelAssociatesMaterial *ret = static_cast< IfcRelAssociatesMaterial * > (allocateIfcRelAssociatesMaterial(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssociatesMaterial_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssociatesMaterial(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssociatesMaterial *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssociatesMaterial(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssociatesMaterial_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssociatesMaterial > ExpressDataSet::createIfcRelAssociatesMaterial(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssociatesMaterial(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssociatesMaterial * > (allocateIfcRelAssociatesMaterial(this, Step::Id_UNSET));
    }
}

IfcRelAssociatesMaterial *ExpressDataSet::cloneIfcRelAssociatesMaterial(ExpressDataSet *expressDataSet, const IfcRelAssociatesMaterial &obj, const CopyOp &copyop) {
    IfcRelAssociatesMaterial *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssociatesMaterial(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssociatesMaterial_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssociatesMaterial *ExpressDataSet::cloneIfcRelAssociatesMaterial(const IfcRelAssociatesMaterial &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssociatesMaterial(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssociatesMaterial(this, obj, copyop);
    }
}

IfcRelAssociatesProfileProperties *ExpressDataSet::getIfcRelAssociatesProfileProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelAssociatesProfileProperties * > (current->second.get());
    }
    else {
        IfcRelAssociatesProfileProperties *ret = static_cast< IfcRelAssociatesProfileProperties * > (allocateIfcRelAssociatesProfileProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelAssociatesProfileProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelAssociatesProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelAssociatesProfileProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelAssociatesProfileProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelAssociatesProfileProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelAssociatesProfileProperties > ExpressDataSet::createIfcRelAssociatesProfileProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelAssociatesProfileProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelAssociatesProfileProperties * > (allocateIfcRelAssociatesProfileProperties(this, Step::Id_UNSET));
    }
}

IfcRelAssociatesProfileProperties *ExpressDataSet::cloneIfcRelAssociatesProfileProperties(ExpressDataSet *expressDataSet, const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop) {
    IfcRelAssociatesProfileProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelAssociatesProfileProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelAssociatesProfileProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelAssociatesProfileProperties *ExpressDataSet::cloneIfcRelAssociatesProfileProperties(const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelAssociatesProfileProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelAssociatesProfileProperties(this, obj, copyop);
    }
}

IfcRelConnectsElements *ExpressDataSet::getIfcRelConnectsElements(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelConnectsElements * > (current->second.get());
    }
    else {
        IfcRelConnectsElements *ret = static_cast< IfcRelConnectsElements * > (allocateIfcRelConnectsElements(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelConnectsElements(IfcRelConnectsElements *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelConnectsElements_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelConnectsElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelConnectsElements *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelConnectsElements(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelConnectsElements_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelConnectsElements > ExpressDataSet::createIfcRelConnectsElements(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelConnectsElements(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelConnectsElements * > (allocateIfcRelConnectsElements(this, Step::Id_UNSET));
    }
}

IfcRelConnectsElements *ExpressDataSet::cloneIfcRelConnectsElements(ExpressDataSet *expressDataSet, const IfcRelConnectsElements &obj, const CopyOp &copyop) {
    IfcRelConnectsElements *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelConnectsElements(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelConnectsElements_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelConnectsElements *ExpressDataSet::cloneIfcRelConnectsElements(const IfcRelConnectsElements &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelConnectsElements(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelConnectsElements(this, obj, copyop);
    }
}

IfcRelConnectsPathElements *ExpressDataSet::getIfcRelConnectsPathElements(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelConnectsPathElements * > (current->second.get());
    }
    else {
        IfcRelConnectsPathElements *ret = static_cast< IfcRelConnectsPathElements * > (allocateIfcRelConnectsPathElements(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelConnectsPathElements(IfcRelConnectsPathElements *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelConnectsPathElements_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelConnectsPathElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelConnectsPathElements *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelConnectsPathElements(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelConnectsPathElements_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelConnectsPathElements > ExpressDataSet::createIfcRelConnectsPathElements(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelConnectsPathElements(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelConnectsPathElements * > (allocateIfcRelConnectsPathElements(this, Step::Id_UNSET));
    }
}

IfcRelConnectsPathElements *ExpressDataSet::cloneIfcRelConnectsPathElements(ExpressDataSet *expressDataSet, const IfcRelConnectsPathElements &obj, const CopyOp &copyop) {
    IfcRelConnectsPathElements *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelConnectsPathElements(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelConnectsPathElements_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelConnectsPathElements *ExpressDataSet::cloneIfcRelConnectsPathElements(const IfcRelConnectsPathElements &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelConnectsPathElements(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelConnectsPathElements(this, obj, copyop);
    }
}

IfcRelConnectsPortToElement *ExpressDataSet::getIfcRelConnectsPortToElement(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelConnectsPortToElement * > (current->second.get());
    }
    else {
        IfcRelConnectsPortToElement *ret = static_cast< IfcRelConnectsPortToElement * > (allocateIfcRelConnectsPortToElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelConnectsPortToElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelConnectsPortToElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelConnectsPortToElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelConnectsPortToElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelConnectsPortToElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelConnectsPortToElement > ExpressDataSet::createIfcRelConnectsPortToElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelConnectsPortToElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelConnectsPortToElement * > (allocateIfcRelConnectsPortToElement(this, Step::Id_UNSET));
    }
}

IfcRelConnectsPortToElement *ExpressDataSet::cloneIfcRelConnectsPortToElement(ExpressDataSet *expressDataSet, const IfcRelConnectsPortToElement &obj, const CopyOp &copyop) {
    IfcRelConnectsPortToElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelConnectsPortToElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelConnectsPortToElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelConnectsPortToElement *ExpressDataSet::cloneIfcRelConnectsPortToElement(const IfcRelConnectsPortToElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelConnectsPortToElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelConnectsPortToElement(this, obj, copyop);
    }
}

IfcRelConnectsPorts *ExpressDataSet::getIfcRelConnectsPorts(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelConnectsPorts * > (current->second.get());
    }
    else {
        IfcRelConnectsPorts *ret = static_cast< IfcRelConnectsPorts * > (allocateIfcRelConnectsPorts(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelConnectsPorts(IfcRelConnectsPorts *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelConnectsPorts_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelConnectsPorts(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelConnectsPorts *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelConnectsPorts(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelConnectsPorts_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelConnectsPorts > ExpressDataSet::createIfcRelConnectsPorts(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelConnectsPorts(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelConnectsPorts * > (allocateIfcRelConnectsPorts(this, Step::Id_UNSET));
    }
}

IfcRelConnectsPorts *ExpressDataSet::cloneIfcRelConnectsPorts(ExpressDataSet *expressDataSet, const IfcRelConnectsPorts &obj, const CopyOp &copyop) {
    IfcRelConnectsPorts *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelConnectsPorts(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelConnectsPorts_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelConnectsPorts *ExpressDataSet::cloneIfcRelConnectsPorts(const IfcRelConnectsPorts &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelConnectsPorts(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelConnectsPorts(this, obj, copyop);
    }
}

IfcRelConnectsStructuralActivity *ExpressDataSet::getIfcRelConnectsStructuralActivity(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelConnectsStructuralActivity * > (current->second.get());
    }
    else {
        IfcRelConnectsStructuralActivity *ret = static_cast< IfcRelConnectsStructuralActivity * > (allocateIfcRelConnectsStructuralActivity(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelConnectsStructuralActivity_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelConnectsStructuralActivity(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelConnectsStructuralActivity *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelConnectsStructuralActivity(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelConnectsStructuralActivity_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelConnectsStructuralActivity > ExpressDataSet::createIfcRelConnectsStructuralActivity(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelConnectsStructuralActivity(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelConnectsStructuralActivity * > (allocateIfcRelConnectsStructuralActivity(this, Step::Id_UNSET));
    }
}

IfcRelConnectsStructuralActivity *ExpressDataSet::cloneIfcRelConnectsStructuralActivity(ExpressDataSet *expressDataSet, const IfcRelConnectsStructuralActivity &obj, const CopyOp &copyop) {
    IfcRelConnectsStructuralActivity *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelConnectsStructuralActivity(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelConnectsStructuralActivity_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelConnectsStructuralActivity *ExpressDataSet::cloneIfcRelConnectsStructuralActivity(const IfcRelConnectsStructuralActivity &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelConnectsStructuralActivity(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelConnectsStructuralActivity(this, obj, copyop);
    }
}

IfcRelConnectsStructuralElement *ExpressDataSet::getIfcRelConnectsStructuralElement(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelConnectsStructuralElement * > (current->second.get());
    }
    else {
        IfcRelConnectsStructuralElement *ret = static_cast< IfcRelConnectsStructuralElement * > (allocateIfcRelConnectsStructuralElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelConnectsStructuralElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelConnectsStructuralElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelConnectsStructuralElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelConnectsStructuralElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelConnectsStructuralElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelConnectsStructuralElement > ExpressDataSet::createIfcRelConnectsStructuralElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelConnectsStructuralElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelConnectsStructuralElement * > (allocateIfcRelConnectsStructuralElement(this, Step::Id_UNSET));
    }
}

IfcRelConnectsStructuralElement *ExpressDataSet::cloneIfcRelConnectsStructuralElement(ExpressDataSet *expressDataSet, const IfcRelConnectsStructuralElement &obj, const CopyOp &copyop) {
    IfcRelConnectsStructuralElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelConnectsStructuralElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelConnectsStructuralElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelConnectsStructuralElement *ExpressDataSet::cloneIfcRelConnectsStructuralElement(const IfcRelConnectsStructuralElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelConnectsStructuralElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelConnectsStructuralElement(this, obj, copyop);
    }
}

IfcRelConnectsStructuralMember *ExpressDataSet::getIfcRelConnectsStructuralMember(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelConnectsStructuralMember * > (current->second.get());
    }
    else {
        IfcRelConnectsStructuralMember *ret = static_cast< IfcRelConnectsStructuralMember * > (allocateIfcRelConnectsStructuralMember(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelConnectsStructuralMember_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelConnectsStructuralMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelConnectsStructuralMember *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelConnectsStructuralMember(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelConnectsStructuralMember_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelConnectsStructuralMember > ExpressDataSet::createIfcRelConnectsStructuralMember(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelConnectsStructuralMember(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelConnectsStructuralMember * > (allocateIfcRelConnectsStructuralMember(this, Step::Id_UNSET));
    }
}

IfcRelConnectsStructuralMember *ExpressDataSet::cloneIfcRelConnectsStructuralMember(ExpressDataSet *expressDataSet, const IfcRelConnectsStructuralMember &obj, const CopyOp &copyop) {
    IfcRelConnectsStructuralMember *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelConnectsStructuralMember(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelConnectsStructuralMember_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelConnectsStructuralMember *ExpressDataSet::cloneIfcRelConnectsStructuralMember(const IfcRelConnectsStructuralMember &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelConnectsStructuralMember(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelConnectsStructuralMember(this, obj, copyop);
    }
}

IfcRelConnectsWithEccentricity *ExpressDataSet::getIfcRelConnectsWithEccentricity(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelConnectsWithEccentricity * > (current->second.get());
    }
    else {
        IfcRelConnectsWithEccentricity *ret = static_cast< IfcRelConnectsWithEccentricity * > (allocateIfcRelConnectsWithEccentricity(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelConnectsWithEccentricity_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelConnectsWithEccentricity(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelConnectsWithEccentricity *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelConnectsWithEccentricity(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelConnectsWithEccentricity_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelConnectsWithEccentricity > ExpressDataSet::createIfcRelConnectsWithEccentricity(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelConnectsWithEccentricity(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelConnectsWithEccentricity * > (allocateIfcRelConnectsWithEccentricity(this, Step::Id_UNSET));
    }
}

IfcRelConnectsWithEccentricity *ExpressDataSet::cloneIfcRelConnectsWithEccentricity(ExpressDataSet *expressDataSet, const IfcRelConnectsWithEccentricity &obj, const CopyOp &copyop) {
    IfcRelConnectsWithEccentricity *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelConnectsWithEccentricity(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelConnectsWithEccentricity_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelConnectsWithEccentricity *ExpressDataSet::cloneIfcRelConnectsWithEccentricity(const IfcRelConnectsWithEccentricity &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelConnectsWithEccentricity(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelConnectsWithEccentricity(this, obj, copyop);
    }
}

IfcRelConnectsWithRealizingElements *ExpressDataSet::getIfcRelConnectsWithRealizingElements(Step::Id id) {
    Step::MapOfEntities::iterator current = m_Id2BaseObject.find(id);
    if (current == m_Id2BaseObject.end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRelConnectsWithRealizingElements * > (current->second.get());
    }
    else {
        IfcRelConnectsWithRealizingElements *ret = static_cast< IfcRelConnectsWithRealizingElements * > (allocateIfcRelConnectsWithRealizingElements(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *arg) {
    m_Id2BaseObject.erase(arg->getKey());
    return m_IfcRelConnectsWithRealizingElements_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRelConnectsWithRealizingElements(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRelConnectsWithRealizingElements *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRelConnectsWithRealizingElements(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRelConnectsWithRealizingElements_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRelConnectsWithRealizingElements > ExpressDataSet::createIfcRelConnectsWithRealizingElements(bool isVolatile) {
    if (isVolatile) {
        return new IfcRelConnectsWithRealizingElements(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRelConnectsWithRealizingElements * > (allocateIfcRelConnectsWithRealizingElements(this, Step::Id_UNSET));
    }
}

IfcRelConnectsWithRealizingElements *ExpressDataSet::cloneIfcRelConnectsWithRealizingElements(ExpressDataSet *expressDataSet, const IfcRelConnectsWithRealizingElements &obj, const CopyOp &copyop) {
    IfcRelConnectsWithRealizingElements *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRelConnectsWithRealizingElements(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRelConnectsWithRealizingElements_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRelConnectsWithRealizingElements *ExpressDataSet::cloneIfcRelConnectsWithRealizingElements(const IfcRelConnectsWithRealizingElements &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRelConnectsWithRealizingElements(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRelConnectsWithRealizingElements(this, obj, copyop);
    }
}
