// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#include <ifc2x3/ExpressDataSet.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Ifc2DCompositeCurve.h>
#include <ifc2x3/IfcActionRequest.h>
#include <ifc2x3/IfcActor.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcActuatorType.h>
#include <ifc2x3/IfcAirTerminalBoxType.h>
#include <ifc2x3/IfcAirTerminalType.h>
#include <ifc2x3/IfcAirToAirHeatRecoveryType.h>
#include <ifc2x3/IfcAlarmType.h>
#include <ifc2x3/IfcAngularDimension.h>
#include <ifc2x3/IfcAnnotation.h>
#include <ifc2x3/IfcAnnotationCurveOccurrence.h>
#include <ifc2x3/IfcAnnotationFillArea.h>
#include <ifc2x3/IfcAnnotationFillAreaOccurrence.h>
#include <ifc2x3/IfcAnnotationSurface.h>
#include <ifc2x3/IfcAnnotationSurfaceOccurrence.h>
#include <ifc2x3/IfcAnnotationSymbolOccurrence.h>
#include <ifc2x3/IfcAnnotationTextOccurrence.h>
#include <ifc2x3/IfcApplication.h>
#include <ifc2x3/IfcAppliedValueRelationship.h>
#include <ifc2x3/IfcApproval.h>
#include <ifc2x3/IfcApprovalActorRelationship.h>
#include <ifc2x3/IfcApprovalPropertyRelationship.h>
#include <ifc2x3/IfcApprovalRelationship.h>
#include <ifc2x3/IfcArbitraryClosedProfileDef.h>
#include <ifc2x3/IfcArbitraryOpenProfileDef.h>
#include <ifc2x3/IfcArbitraryProfileDefWithVoids.h>
#include <ifc2x3/IfcAsset.h>
#include <ifc2x3/IfcAsymmetricIShapeProfileDef.h>
#include <ifc2x3/IfcAxis1Placement.h>
#include <ifc2x3/IfcAxis2Placement2D.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcBeam.h>
#include <ifc2x3/IfcBeamType.h>
#include <ifc2x3/IfcBezierCurve.h>
#include <ifc2x3/IfcBlobTexture.h>
#include <ifc2x3/IfcBlock.h>
#include <ifc2x3/IfcBoilerType.h>
#include <ifc2x3/IfcBooleanClippingResult.h>
#include <ifc2x3/IfcBooleanResult.h>
#include <ifc2x3/IfcBoundaryEdgeCondition.h>
#include <ifc2x3/IfcBoundaryFaceCondition.h>
#include <ifc2x3/IfcBoundaryNodeCondition.h>
#include <ifc2x3/IfcBoundaryNodeConditionWarping.h>
#include <ifc2x3/IfcBoundedSurface.h>
#include <ifc2x3/IfcBoundingBox.h>
#include <ifc2x3/IfcBoxedHalfSpace.h>
#include <ifc2x3/IfcBuilding.h>
#include <ifc2x3/IfcBuildingElementPart.h>
#include <ifc2x3/IfcBuildingElementProxy.h>
#include <ifc2x3/IfcBuildingElementProxyType.h>
#include <ifc2x3/IfcBuildingStorey.h>
#include <ifc2x3/IfcCShapeProfileDef.h>
#include <ifc2x3/IfcCableCarrierFittingType.h>
#include <ifc2x3/IfcCableCarrierSegmentType.h>
#include <ifc2x3/IfcCableSegmentType.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include <ifc2x3/IfcCartesianTransformationOperator2DnonUniform.h>
#include <ifc2x3/IfcCartesianTransformationOperator3D.h>
#include <ifc2x3/IfcCartesianTransformationOperator3DnonUniform.h>
#include <ifc2x3/IfcCenterLineProfileDef.h>
#include <ifc2x3/IfcChamferEdgeFeature.h>
#include <ifc2x3/IfcChillerType.h>
#include <ifc2x3/IfcCircle.h>
#include <ifc2x3/IfcCircleHollowProfileDef.h>
#include <ifc2x3/IfcCircleProfileDef.h>
#include <ifc2x3/IfcClassification.h>
#include <ifc2x3/IfcClassificationItem.h>
#include <ifc2x3/IfcClassificationItemRelationship.h>
#include <ifc2x3/IfcClassificationNotation.h>
#include <ifc2x3/IfcClassificationNotationFacet.h>
#include <ifc2x3/IfcClassificationReference.h>
#include <ifc2x3/IfcClosedShell.h>
#include <ifc2x3/IfcCoilType.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/IfcColumn.h>
#include <ifc2x3/IfcColumnType.h>
#include <ifc2x3/IfcComplexProperty.h>
#include <ifc2x3/IfcCompositeCurve.h>
#include <ifc2x3/IfcCompositeCurveSegment.h>
#include <ifc2x3/IfcCompositeProfileDef.h>
#include <ifc2x3/IfcCompressorType.h>
#include <ifc2x3/IfcCondenserType.h>
#include <ifc2x3/IfcCondition.h>
#include <ifc2x3/IfcConditionCriterion.h>
#include <ifc2x3/IfcConnectedFaceSet.h>
#include <ifc2x3/IfcConnectionCurveGeometry.h>
#include <ifc2x3/IfcConnectionPointEccentricity.h>
#include <ifc2x3/IfcConnectionPointGeometry.h>
#include <ifc2x3/IfcConnectionPortGeometry.h>
#include <ifc2x3/IfcConnectionSurfaceGeometry.h>
#include <ifc2x3/IfcConstraintAggregationRelationship.h>
#include <ifc2x3/IfcConstraintClassificationRelationship.h>
#include <ifc2x3/IfcConstraintRelationship.h>
#include <ifc2x3/IfcConstructionEquipmentResource.h>
#include <ifc2x3/IfcConstructionMaterialResource.h>
#include <ifc2x3/IfcConstructionProductResource.h>
#include <ifc2x3/IfcContextDependentUnit.h>
#include <ifc2x3/IfcControllerType.h>
#include <ifc2x3/IfcConversionBasedUnit.h>
#include <ifc2x3/IfcCooledBeamType.h>
#include <ifc2x3/IfcCoolingTowerType.h>
#include <ifc2x3/IfcCoordinatedUniversalTimeOffset.h>
#include <ifc2x3/IfcCostItem.h>
#include <ifc2x3/IfcCostSchedule.h>
#include <ifc2x3/IfcCostValue.h>
#include <ifc2x3/IfcCovering.h>
#include <ifc2x3/IfcCoveringType.h>
#include <ifc2x3/IfcCraneRailAShapeProfileDef.h>
#include <ifc2x3/IfcCraneRailFShapeProfileDef.h>
#include <ifc2x3/IfcCrewResource.h>
#include <ifc2x3/IfcCsgSolid.h>
#include <ifc2x3/IfcCurrencyRelationship.h>
#include <ifc2x3/IfcCurtainWall.h>
#include <ifc2x3/IfcCurtainWallType.h>
#include <ifc2x3/IfcCurveBoundedPlane.h>
#include <ifc2x3/IfcCurveStyle.h>
#include <ifc2x3/IfcCurveStyleFont.h>
#include <ifc2x3/IfcCurveStyleFontAndScaling.h>
#include <ifc2x3/IfcCurveStyleFontPattern.h>
#include <ifc2x3/IfcDamperType.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcDefinedSymbol.h>
#include <ifc2x3/IfcDerivedProfileDef.h>
#include <ifc2x3/IfcDerivedUnit.h>
#include <ifc2x3/IfcDerivedUnitElement.h>
#include <ifc2x3/IfcDiameterDimension.h>
#include <ifc2x3/IfcDimensionCalloutRelationship.h>
#include <ifc2x3/IfcDimensionCurve.h>
#include <ifc2x3/IfcDimensionCurveDirectedCallout.h>
#include <ifc2x3/IfcDimensionCurveTerminator.h>
#include <ifc2x3/IfcDimensionPair.h>
#include <ifc2x3/IfcDimensionalExponents.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcDiscreteAccessory.h>
#include <ifc2x3/IfcDiscreteAccessoryType.h>
#include <ifc2x3/IfcDistributionChamberElement.h>
#include <ifc2x3/IfcDistributionChamberElementType.h>
#include <ifc2x3/IfcDistributionControlElement.h>
#include <ifc2x3/IfcDistributionElement.h>
#include <ifc2x3/IfcDistributionElementType.h>
#include <ifc2x3/IfcDistributionFlowElement.h>
#include <ifc2x3/IfcDistributionPort.h>
#include <ifc2x3/IfcDocumentElectronicFormat.h>
#include <ifc2x3/IfcDocumentInformation.h>
#include <ifc2x3/IfcDocumentInformationRelationship.h>
#include <ifc2x3/IfcDocumentReference.h>
#include <ifc2x3/IfcDoor.h>
#include <ifc2x3/IfcDoorLiningProperties.h>
#include <ifc2x3/IfcDoorPanelProperties.h>
#include <ifc2x3/IfcDoorStyle.h>
#include <ifc2x3/IfcDraughtingCallout.h>
#include <ifc2x3/IfcDraughtingCalloutRelationship.h>
#include <ifc2x3/IfcDraughtingPreDefinedColour.h>
#include <ifc2x3/IfcDraughtingPreDefinedCurveFont.h>
#include <ifc2x3/IfcDraughtingPreDefinedTextFont.h>
#include <ifc2x3/IfcDuctFittingType.h>
#include <ifc2x3/IfcDuctSegmentType.h>
#include <ifc2x3/IfcDuctSilencerType.h>
#include <ifc2x3/IfcEdge.h>
#include <ifc2x3/IfcEdgeCurve.h>
#include <ifc2x3/IfcEdgeLoop.h>
#include <ifc2x3/IfcElectricApplianceType.h>
#include <ifc2x3/IfcElectricDistributionPoint.h>
#include <ifc2x3/IfcElectricFlowStorageDeviceType.h>
#include <ifc2x3/IfcElectricGeneratorType.h>
#include <ifc2x3/IfcElectricHeaterType.h>
#include <ifc2x3/IfcElectricMotorType.h>
#include <ifc2x3/IfcElectricTimeControlType.h>
#include <ifc2x3/IfcElectricalBaseProperties.h>
#include <ifc2x3/IfcElectricalCircuit.h>
#include <ifc2x3/IfcElectricalElement.h>
#include <ifc2x3/IfcElementAssembly.h>
#include <ifc2x3/IfcElementQuantity.h>
#include <ifc2x3/IfcEllipse.h>
#include <ifc2x3/IfcEllipseProfileDef.h>
#include <ifc2x3/IfcEnergyConversionDevice.h>
#include <ifc2x3/IfcEnergyProperties.h>
#include <ifc2x3/IfcEnvironmentalImpactValue.h>
#include <ifc2x3/IfcEquipmentElement.h>
#include <ifc2x3/IfcEquipmentStandard.h>
#include <ifc2x3/IfcEvaporativeCoolerType.h>
#include <ifc2x3/IfcEvaporatorType.h>
#include <ifc2x3/IfcExtendedMaterialProperties.h>
#include <ifc2x3/IfcExternallyDefinedHatchStyle.h>
#include <ifc2x3/IfcExternallyDefinedSurfaceStyle.h>
#include <ifc2x3/IfcExternallyDefinedSymbol.h>
#include <ifc2x3/IfcExternallyDefinedTextFont.h>
#include <ifc2x3/IfcExtrudedAreaSolid.h>
#include <ifc2x3/IfcFace.h>
#include <ifc2x3/IfcFaceBasedSurfaceModel.h>
#include <ifc2x3/IfcFaceBound.h>
#include <ifc2x3/IfcFaceOuterBound.h>
#include <ifc2x3/IfcFaceSurface.h>
#include <ifc2x3/IfcFacetedBrep.h>
#include <ifc2x3/IfcFacetedBrepWithVoids.h>
#include <ifc2x3/IfcFailureConnectionCondition.h>
#include <ifc2x3/IfcFanType.h>
#include <ifc2x3/IfcFastener.h>
#include <ifc2x3/IfcFastenerType.h>
#include <ifc2x3/IfcFillAreaStyle.h>
#include <ifc2x3/IfcFillAreaStyleHatching.h>
#include <ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h>
#include <ifc2x3/IfcFillAreaStyleTiles.h>
#include <ifc2x3/IfcFilterType.h>
#include <ifc2x3/IfcFireSuppressionTerminalType.h>
#include <ifc2x3/IfcFlowController.h>
#include <ifc2x3/IfcFlowFitting.h>
#include <ifc2x3/IfcFlowInstrumentType.h>
#include <ifc2x3/IfcFlowMeterType.h>
#include <ifc2x3/IfcFlowMovingDevice.h>
#include <ifc2x3/IfcFlowSegment.h>
#include <ifc2x3/IfcFlowStorageDevice.h>
#include <ifc2x3/IfcFlowTerminal.h>
#include <ifc2x3/IfcFlowTreatmentDevice.h>
#include <ifc2x3/IfcFluidFlowProperties.h>
#include <ifc2x3/IfcFooting.h>
#include <ifc2x3/IfcFuelProperties.h>
#include <ifc2x3/IfcFurnishingElement.h>
#include <ifc2x3/IfcFurnishingElementType.h>
#include <ifc2x3/IfcFurnitureStandard.h>
#include <ifc2x3/IfcFurnitureType.h>
#include <ifc2x3/IfcGasTerminalType.h>
#include <ifc2x3/IfcGeneralMaterialProperties.h>
#include <ifc2x3/IfcGeneralProfileProperties.h>
#include <ifc2x3/IfcGeometricCurveSet.h>
#include <ifc2x3/IfcGeometricRepresentationContext.h>
#include <ifc2x3/IfcGeometricRepresentationSubContext.h>
#include <ifc2x3/IfcGeometricSet.h>
#include <ifc2x3/IfcGrid.h>
#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcGridPlacement.h>
#include <ifc2x3/IfcGroup.h>
#include <ifc2x3/IfcHalfSpaceSolid.h>
#include <ifc2x3/IfcHeatExchangerType.h>
#include <ifc2x3/IfcHumidifierType.h>
#include <ifc2x3/IfcHygroscopicMaterialProperties.h>
#include <ifc2x3/IfcIShapeProfileDef.h>
#include <ifc2x3/IfcImageTexture.h>
#include <ifc2x3/IfcInventory.h>
#include <ifc2x3/IfcIrregularTimeSeries.h>
#include <ifc2x3/IfcIrregularTimeSeriesValue.h>
#include <ifc2x3/IfcJunctionBoxType.h>
#include <ifc2x3/IfcLShapeProfileDef.h>
#include <ifc2x3/IfcLaborResource.h>
#include <ifc2x3/IfcLampType.h>
#include <ifc2x3/IfcLibraryInformation.h>
#include <ifc2x3/IfcLibraryReference.h>
#include <ifc2x3/IfcLightDistributionData.h>
#include <ifc2x3/IfcLightFixtureType.h>
#include <ifc2x3/IfcLightIntensityDistribution.h>
#include <ifc2x3/IfcLightSourceAmbient.h>
#include <ifc2x3/IfcLightSourceDirectional.h>
#include <ifc2x3/IfcLightSourceGoniometric.h>
#include <ifc2x3/IfcLightSourcePositional.h>
#include <ifc2x3/IfcLightSourceSpot.h>
#include <ifc2x3/IfcLine.h>
#include <ifc2x3/IfcLinearDimension.h>
#include <ifc2x3/IfcLocalPlacement.h>
#include <ifc2x3/IfcLocalTime.h>
#include <ifc2x3/IfcLoop.h>
#include <ifc2x3/IfcMappedItem.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcMaterialClassificationRelationship.h>
#include <ifc2x3/IfcMaterialDefinitionRepresentation.h>
#include <ifc2x3/IfcMaterialLayer.h>
#include <ifc2x3/IfcMaterialLayerSet.h>
#include <ifc2x3/IfcMaterialLayerSetUsage.h>
#include <ifc2x3/IfcMaterialList.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcMechanicalConcreteMaterialProperties.h>
#include <ifc2x3/IfcMechanicalFastener.h>
#include <ifc2x3/IfcMechanicalFastenerType.h>
#include <ifc2x3/IfcMechanicalMaterialProperties.h>
#include <ifc2x3/IfcMechanicalSteelMaterialProperties.h>
#include <ifc2x3/IfcMember.h>
#include <ifc2x3/IfcMemberType.h>
#include <ifc2x3/IfcMetric.h>
#include <ifc2x3/IfcMonetaryUnit.h>
#include <ifc2x3/IfcMotorConnectionType.h>
#include <ifc2x3/IfcMove.h>
#include <ifc2x3/IfcObjective.h>
#include <ifc2x3/IfcOccupant.h>
#include <ifc2x3/IfcOffsetCurve2D.h>
#include <ifc2x3/IfcOffsetCurve3D.h>
#include <ifc2x3/IfcOneDirectionRepeatFactor.h>
#include <ifc2x3/IfcOpenShell.h>
#include <ifc2x3/IfcOpeningElement.h>
#include <ifc2x3/IfcOpticalMaterialProperties.h>
#include <ifc2x3/IfcOrderAction.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcOrganizationRelationship.h>
#include <ifc2x3/IfcOrientedEdge.h>
#include <ifc2x3/IfcOutletType.h>
#include <ifc2x3/IfcOwnerHistory.h>
#include <ifc2x3/IfcPath.h>
#include <ifc2x3/IfcPerformanceHistory.h>
#include <ifc2x3/IfcPermeableCoveringProperties.h>
#include <ifc2x3/IfcPermit.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/IfcPhysicalComplexQuantity.h>
#include <ifc2x3/IfcPile.h>
#include <ifc2x3/IfcPipeFittingType.h>
#include <ifc2x3/IfcPipeSegmentType.h>
#include <ifc2x3/IfcPixelTexture.h>
#include <ifc2x3/IfcPlanarBox.h>
#include <ifc2x3/IfcPlanarExtent.h>
#include <ifc2x3/IfcPlane.h>
#include <ifc2x3/IfcPlate.h>
#include <ifc2x3/IfcPlateType.h>
#include <ifc2x3/IfcPointOnCurve.h>
#include <ifc2x3/IfcPointOnSurface.h>
#include <ifc2x3/IfcPolyLoop.h>
#include <ifc2x3/IfcPolygonalBoundedHalfSpace.h>
#include <ifc2x3/IfcPolyline.h>
#include <ifc2x3/IfcPostalAddress.h>
#include <ifc2x3/IfcPreDefinedDimensionSymbol.h>
#include <ifc2x3/IfcPreDefinedPointMarkerSymbol.h>
#include <ifc2x3/IfcPreDefinedTerminatorSymbol.h>
#include <ifc2x3/IfcPresentationLayerAssignment.h>
#include <ifc2x3/IfcPresentationLayerWithStyle.h>
#include <ifc2x3/IfcPresentationStyleAssignment.h>
#include <ifc2x3/IfcProcedure.h>
#include <ifc2x3/IfcProductDefinitionShape.h>
#include <ifc2x3/IfcProductRepresentation.h>
#include <ifc2x3/IfcProductsOfCombustionProperties.h>
#include <ifc2x3/IfcProject.h>
#include <ifc2x3/IfcProjectOrder.h>
#include <ifc2x3/IfcProjectOrderRecord.h>
#include <ifc2x3/IfcProjectionCurve.h>
#include <ifc2x3/IfcProjectionElement.h>
#include <ifc2x3/IfcPropertyBoundedValue.h>
#include <ifc2x3/IfcPropertyConstraintRelationship.h>
#include <ifc2x3/IfcPropertyDependencyRelationship.h>
#include <ifc2x3/IfcPropertyEnumeratedValue.h>
#include <ifc2x3/IfcPropertyEnumeration.h>
#include <ifc2x3/IfcPropertyListValue.h>
#include <ifc2x3/IfcPropertyReferenceValue.h>
#include <ifc2x3/IfcPropertySet.h>
#include <ifc2x3/IfcPropertySingleValue.h>
#include <ifc2x3/IfcPropertyTableValue.h>
#include <ifc2x3/IfcProtectiveDeviceType.h>
#include <ifc2x3/IfcProxy.h>
#include <ifc2x3/IfcPumpType.h>
#include <ifc2x3/IfcQuantityArea.h>
#include <ifc2x3/IfcQuantityCount.h>
#include <ifc2x3/IfcQuantityLength.h>
#include <ifc2x3/IfcQuantityTime.h>
#include <ifc2x3/IfcQuantityVolume.h>
#include <ifc2x3/IfcQuantityWeight.h>
#include <ifc2x3/IfcRadiusDimension.h>
#include <ifc2x3/IfcRailing.h>
#include <ifc2x3/IfcRailingType.h>
#include <ifc2x3/IfcRamp.h>
#include <ifc2x3/IfcRampFlight.h>
#include <ifc2x3/IfcRampFlightType.h>
#include <ifc2x3/IfcRationalBezierCurve.h>
#include <ifc2x3/IfcRectangleHollowProfileDef.h>
#include <ifc2x3/IfcRectangleProfileDef.h>
#include <ifc2x3/IfcRectangularPyramid.h>
#include <ifc2x3/IfcRectangularTrimmedSurface.h>
#include <ifc2x3/IfcReferencesValueDocument.h>
#include <ifc2x3/IfcRegularTimeSeries.h>
#include <ifc2x3/IfcReinforcementBarProperties.h>
#include <ifc2x3/IfcReinforcementDefinitionProperties.h>
#include <ifc2x3/IfcReinforcingBar.h>
#include <ifc2x3/IfcReinforcingMesh.h>
#include <ifc2x3/IfcRelAggregates.h>
#include <ifc2x3/IfcRelAssignsTasks.h>
#include <ifc2x3/IfcRelAssignsToActor.h>
#include <ifc2x3/IfcRelAssignsToControl.h>
#include <ifc2x3/IfcRelAssignsToGroup.h>
#include <ifc2x3/IfcRelAssignsToProcess.h>
#include <ifc2x3/IfcRelAssignsToProduct.h>
#include <ifc2x3/IfcRelAssignsToProjectOrder.h>
#include <ifc2x3/IfcRelAssignsToResource.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/IfcRelAssociatesAppliedValue.h>
#include <ifc2x3/IfcRelAssociatesApproval.h>
#include <ifc2x3/IfcRelAssociatesClassification.h>
#include <ifc2x3/IfcRelAssociatesConstraint.h>
#include <ifc2x3/IfcRelAssociatesDocument.h>
#include <ifc2x3/IfcRelAssociatesLibrary.h>
#include <ifc2x3/IfcRelAssociatesMaterial.h>
#include <ifc2x3/IfcRelAssociatesProfileProperties.h>
#include <ifc2x3/IfcRelConnectsElements.h>
#include <ifc2x3/IfcRelConnectsPathElements.h>
#include <ifc2x3/IfcRelConnectsPortToElement.h>
#include <ifc2x3/IfcRelConnectsPorts.h>
#include <ifc2x3/IfcRelConnectsStructuralActivity.h>
#include <ifc2x3/IfcRelConnectsStructuralElement.h>
#include <ifc2x3/IfcRelConnectsStructuralMember.h>
#include <ifc2x3/IfcRelConnectsWithEccentricity.h>
#include <ifc2x3/IfcRelConnectsWithRealizingElements.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
#include <ifc2x3/IfcRelCoversBldgElements.h>
#include <ifc2x3/IfcRelCoversSpaces.h>
#include <ifc2x3/IfcRelDefinesByProperties.h>
#include <ifc2x3/IfcRelDefinesByType.h>
#include <ifc2x3/IfcRelFillsElement.h>
#include <ifc2x3/IfcRelFlowControlElements.h>
#include <ifc2x3/IfcRelInteractionRequirements.h>
#include <ifc2x3/IfcRelNests.h>
#include <ifc2x3/IfcRelOccupiesSpaces.h>
#include <ifc2x3/IfcRelOverridesProperties.h>
#include <ifc2x3/IfcRelProjectsElement.h>
#include <ifc2x3/IfcRelReferencedInSpatialStructure.h>
#include <ifc2x3/IfcRelSchedulesCostItems.h>
#include <ifc2x3/IfcRelSequence.h>
#include <ifc2x3/IfcRelServicesBuildings.h>
#include <ifc2x3/IfcRelSpaceBoundary.h>
#include <ifc2x3/IfcRelVoidsElement.h>
#include <ifc2x3/IfcRelaxation.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/IfcRepresentationContext.h>
#include <ifc2x3/IfcRepresentationMap.h>
#include <ifc2x3/IfcRevolvedAreaSolid.h>
#include <ifc2x3/IfcRibPlateProfileProperties.h>
#include <ifc2x3/IfcRightCircularCone.h>
#include <ifc2x3/IfcRightCircularCylinder.h>
#include <ifc2x3/IfcRoof.h>
#include <ifc2x3/IfcRoundedEdgeFeature.h>
#include <ifc2x3/IfcRoundedRectangleProfileDef.h>
#include <ifc2x3/IfcSIUnit.h>
#include <ifc2x3/IfcSanitaryTerminalType.h>
#include <ifc2x3/IfcScheduleTimeControl.h>
#include <ifc2x3/IfcSectionProperties.h>
#include <ifc2x3/IfcSectionReinforcementProperties.h>
#include <ifc2x3/IfcSectionedSpine.h>
#include <ifc2x3/IfcSensorType.h>
#include <ifc2x3/IfcServiceLife.h>
#include <ifc2x3/IfcServiceLifeFactor.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/IfcShapeRepresentation.h>
#include <ifc2x3/IfcShellBasedSurfaceModel.h>
#include <ifc2x3/IfcSite.h>
#include <ifc2x3/IfcSlab.h>
#include <ifc2x3/IfcSlabType.h>
#include <ifc2x3/IfcSlippageConnectionCondition.h>
#include <ifc2x3/IfcSoundProperties.h>
#include <ifc2x3/IfcSoundValue.h>
#include <ifc2x3/IfcSpace.h>
#include <ifc2x3/IfcSpaceHeaterType.h>
#include <ifc2x3/IfcSpaceProgram.h>
#include <ifc2x3/IfcSpaceThermalLoadProperties.h>
#include <ifc2x3/IfcSpaceType.h>
#include <ifc2x3/IfcSphere.h>
#include <ifc2x3/IfcStackTerminalType.h>
#include <ifc2x3/IfcStair.h>
#include <ifc2x3/IfcStairFlight.h>
#include <ifc2x3/IfcStairFlightType.h>
#include <ifc2x3/IfcStructuralAnalysisModel.h>
#include <ifc2x3/IfcStructuralCurveConnection.h>
#include <ifc2x3/IfcStructuralCurveMember.h>
#include <ifc2x3/IfcStructuralCurveMemberVarying.h>
#include <ifc2x3/IfcStructuralLinearAction.h>
#include <ifc2x3/IfcStructuralLinearActionVarying.h>
#include <ifc2x3/IfcStructuralLoadGroup.h>
#include <ifc2x3/IfcStructuralLoadLinearForce.h>
#include <ifc2x3/IfcStructuralLoadPlanarForce.h>
#include <ifc2x3/IfcStructuralLoadSingleDisplacement.h>
#include <ifc2x3/IfcStructuralLoadSingleDisplacementDistortion.h>
#include <ifc2x3/IfcStructuralLoadSingleForce.h>
#include <ifc2x3/IfcStructuralLoadSingleForceWarping.h>
#include <ifc2x3/IfcStructuralLoadTemperature.h>
#include <ifc2x3/IfcStructuralPlanarAction.h>
#include <ifc2x3/IfcStructuralPlanarActionVarying.h>
#include <ifc2x3/IfcStructuralPointAction.h>
#include <ifc2x3/IfcStructuralPointConnection.h>
#include <ifc2x3/IfcStructuralPointReaction.h>
#include <ifc2x3/IfcStructuralProfileProperties.h>
#include <ifc2x3/IfcStructuralResultGroup.h>
#include <ifc2x3/IfcStructuralSteelProfileProperties.h>
#include <ifc2x3/IfcStructuralSurfaceConnection.h>
#include <ifc2x3/IfcStructuralSurfaceMember.h>
#include <ifc2x3/IfcStructuralSurfaceMemberVarying.h>
#include <ifc2x3/IfcStructuredDimensionCallout.h>
#include <ifc2x3/IfcStyledItem.h>
#include <ifc2x3/IfcStyledRepresentation.h>
#include <ifc2x3/IfcSubContractResource.h>
#include <ifc2x3/IfcSubedge.h>
#include <ifc2x3/IfcSurfaceCurveSweptAreaSolid.h>
#include <ifc2x3/IfcSurfaceOfLinearExtrusion.h>
#include <ifc2x3/IfcSurfaceOfRevolution.h>
#include <ifc2x3/IfcSurfaceStyle.h>
#include <ifc2x3/IfcSurfaceStyleLighting.h>
#include <ifc2x3/IfcSurfaceStyleRefraction.h>
#include <ifc2x3/IfcSurfaceStyleRendering.h>
#include <ifc2x3/IfcSurfaceStyleShading.h>
#include <ifc2x3/IfcSurfaceStyleWithTextures.h>
#include <ifc2x3/IfcSweptDiskSolid.h>
#include <ifc2x3/IfcSwitchingDeviceType.h>
#include <ifc2x3/IfcSymbolStyle.h>
#include <ifc2x3/IfcSystem.h>
#include <ifc2x3/IfcSystemFurnitureElementType.h>
#include <ifc2x3/IfcTShapeProfileDef.h>
#include <ifc2x3/IfcTable.h>
#include <ifc2x3/IfcTableRow.h>
#include <ifc2x3/IfcTankType.h>
#include <ifc2x3/IfcTask.h>
#include <ifc2x3/IfcTelecomAddress.h>
#include <ifc2x3/IfcTendon.h>
#include <ifc2x3/IfcTendonAnchor.h>
#include <ifc2x3/IfcTerminatorSymbol.h>
#include <ifc2x3/IfcTextLiteral.h>
#include <ifc2x3/IfcTextLiteralWithExtent.h>
#include <ifc2x3/IfcTextStyle.h>
#include <ifc2x3/IfcTextStyleFontModel.h>
#include <ifc2x3/IfcTextStyleForDefinedFont.h>
#include <ifc2x3/IfcTextStyleTextModel.h>
#include <ifc2x3/IfcTextStyleWithBoxCharacteristics.h>
#include <ifc2x3/IfcTextureCoordinateGenerator.h>
#include <ifc2x3/IfcTextureMap.h>
#include <ifc2x3/IfcTextureVertex.h>
#include <ifc2x3/IfcThermalMaterialProperties.h>
#include <ifc2x3/IfcTimeSeriesReferenceRelationship.h>
#include <ifc2x3/IfcTimeSeriesSchedule.h>
#include <ifc2x3/IfcTimeSeriesValue.h>
#include <ifc2x3/IfcTopologyRepresentation.h>
#include <ifc2x3/IfcTransformerType.h>
#include <ifc2x3/IfcTransportElement.h>
#include <ifc2x3/IfcTransportElementType.h>
#include <ifc2x3/IfcTrapeziumProfileDef.h>
#include <ifc2x3/IfcTrimmedCurve.h>
#include <ifc2x3/IfcTubeBundleType.h>
#include <ifc2x3/IfcTwoDirectionRepeatFactor.h>
#include <ifc2x3/IfcTypeObject.h>
#include <ifc2x3/IfcTypeProduct.h>
#include <ifc2x3/IfcUShapeProfileDef.h>
#include <ifc2x3/IfcUnitAssignment.h>
#include <ifc2x3/IfcUnitaryEquipmentType.h>
#include <ifc2x3/IfcValveType.h>
#include <ifc2x3/IfcVector.h>
#include <ifc2x3/IfcVertex.h>
#include <ifc2x3/IfcVertexBasedTextureMap.h>
#include <ifc2x3/IfcVertexLoop.h>
#include <ifc2x3/IfcVertexPoint.h>
#include <ifc2x3/IfcVibrationIsolatorType.h>
#include <ifc2x3/IfcVirtualElement.h>
#include <ifc2x3/IfcVirtualGridIntersection.h>
#include <ifc2x3/IfcWall.h>
#include <ifc2x3/IfcWallStandardCase.h>
#include <ifc2x3/IfcWallType.h>
#include <ifc2x3/IfcWasteTerminalType.h>
#include <ifc2x3/IfcWaterProperties.h>
#include <ifc2x3/IfcWindow.h>
#include <ifc2x3/IfcWindowLiningProperties.h>
#include <ifc2x3/IfcWindowPanelProperties.h>
#include <ifc2x3/IfcWindowStyle.h>
#include <ifc2x3/IfcWorkPlan.h>
#include <ifc2x3/IfcWorkSchedule.h>
#include <ifc2x3/IfcZShapeProfileDef.h>
#include <ifc2x3/IfcZone.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/BaseSPFObject.h>
#include <Step/SPFData.h>



#include "precompiled.h"

using namespace ifc2x3;

ExpressDataSet::ExpressDataSet() : Step::BaseExpressDataSet() {
    m_refIfc2DCompositeCurveList.push_back(&m_Ifc2DCompositeCurve_Map);
    m_refIfcActionRequestList.push_back(&m_IfcActionRequest_Map);
    m_refIfcActorList.push_back(&m_IfcActor_Map);
    m_refIfcActorList.push_back(&m_IfcOccupant_Map);
    m_refIfcActorRoleList.push_back(&m_IfcActorRole_Map);
    m_refIfcActuatorTypeList.push_back(&m_IfcActuatorType_Map);
    m_refIfcAddressList.push_back(&m_IfcPostalAddress_Map);
    m_refIfcAddressList.push_back(&m_IfcTelecomAddress_Map);
    m_refIfcAirTerminalBoxTypeList.push_back(&m_IfcAirTerminalBoxType_Map);
    m_refIfcAirTerminalTypeList.push_back(&m_IfcAirTerminalType_Map);
    m_refIfcAirToAirHeatRecoveryTypeList.push_back(&m_IfcAirToAirHeatRecoveryType_Map);
    m_refIfcAlarmTypeList.push_back(&m_IfcAlarmType_Map);
    m_refIfcAngularDimensionList.push_back(&m_IfcAngularDimension_Map);
    m_refIfcAnnotationList.push_back(&m_IfcAnnotation_Map);
    m_refIfcAnnotationCurveOccurrenceList.push_back(&m_IfcAnnotationCurveOccurrence_Map);
    m_refIfcAnnotationCurveOccurrenceList.push_back(&m_IfcDimensionCurve_Map);
    m_refIfcAnnotationCurveOccurrenceList.push_back(&m_IfcProjectionCurve_Map);
    m_refIfcAnnotationFillAreaList.push_back(&m_IfcAnnotationFillArea_Map);
    m_refIfcAnnotationFillAreaOccurrenceList.push_back(&m_IfcAnnotationFillAreaOccurrence_Map);
    m_refIfcAnnotationOccurrenceList.push_back(&m_IfcDimensionCurve_Map);
    m_refIfcAnnotationOccurrenceList.push_back(&m_IfcProjectionCurve_Map);
    m_refIfcAnnotationOccurrenceList.push_back(&m_IfcAnnotationCurveOccurrence_Map);
    m_refIfcAnnotationOccurrenceList.push_back(&m_IfcDimensionCurveTerminator_Map);
    m_refIfcAnnotationOccurrenceList.push_back(&m_IfcTerminatorSymbol_Map);
    m_refIfcAnnotationOccurrenceList.push_back(&m_IfcAnnotationSymbolOccurrence_Map);
    m_refIfcAnnotationOccurrenceList.push_back(&m_IfcAnnotationTextOccurrence_Map);
    m_refIfcAnnotationOccurrenceList.push_back(&m_IfcAnnotationFillAreaOccurrence_Map);
    m_refIfcAnnotationOccurrenceList.push_back(&m_IfcAnnotationSurfaceOccurrence_Map);
    m_refIfcAnnotationSurfaceList.push_back(&m_IfcAnnotationSurface_Map);
    m_refIfcAnnotationSurfaceOccurrenceList.push_back(&m_IfcAnnotationSurfaceOccurrence_Map);
    m_refIfcAnnotationSymbolOccurrenceList.push_back(&m_IfcAnnotationSymbolOccurrence_Map);
    m_refIfcAnnotationSymbolOccurrenceList.push_back(&m_IfcDimensionCurveTerminator_Map);
    m_refIfcAnnotationSymbolOccurrenceList.push_back(&m_IfcTerminatorSymbol_Map);
    m_refIfcAnnotationTextOccurrenceList.push_back(&m_IfcAnnotationTextOccurrence_Map);
    m_refIfcApplicationList.push_back(&m_IfcApplication_Map);
    m_refIfcAppliedValueList.push_back(&m_IfcCostValue_Map);
    m_refIfcAppliedValueList.push_back(&m_IfcEnvironmentalImpactValue_Map);
    m_refIfcAppliedValueRelationshipList.push_back(&m_IfcAppliedValueRelationship_Map);
    m_refIfcApprovalList.push_back(&m_IfcApproval_Map);
    m_refIfcApprovalActorRelationshipList.push_back(&m_IfcApprovalActorRelationship_Map);
    m_refIfcApprovalPropertyRelationshipList.push_back(&m_IfcApprovalPropertyRelationship_Map);
    m_refIfcApprovalRelationshipList.push_back(&m_IfcApprovalRelationship_Map);
    m_refIfcArbitraryClosedProfileDefList.push_back(&m_IfcArbitraryClosedProfileDef_Map);
    m_refIfcArbitraryClosedProfileDefList.push_back(&m_IfcArbitraryProfileDefWithVoids_Map);
    m_refIfcArbitraryOpenProfileDefList.push_back(&m_IfcArbitraryOpenProfileDef_Map);
    m_refIfcArbitraryOpenProfileDefList.push_back(&m_IfcCenterLineProfileDef_Map);
    m_refIfcArbitraryProfileDefWithVoidsList.push_back(&m_IfcArbitraryProfileDefWithVoids_Map);
    m_refIfcAssetList.push_back(&m_IfcAsset_Map);
    m_refIfcAsymmetricIShapeProfileDefList.push_back(&m_IfcAsymmetricIShapeProfileDef_Map);
    m_refIfcAxis1PlacementList.push_back(&m_IfcAxis1Placement_Map);
    m_refIfcAxis2Placement2DList.push_back(&m_IfcAxis2Placement2D_Map);
    m_refIfcAxis2Placement3DList.push_back(&m_IfcAxis2Placement3D_Map);
    m_refIfcBSplineCurveList.push_back(&m_IfcRationalBezierCurve_Map);
    m_refIfcBSplineCurveList.push_back(&m_IfcBezierCurve_Map);
    m_refIfcBeamList.push_back(&m_IfcBeam_Map);
    m_refIfcBeamTypeList.push_back(&m_IfcBeamType_Map);
    m_refIfcBezierCurveList.push_back(&m_IfcBezierCurve_Map);
    m_refIfcBezierCurveList.push_back(&m_IfcRationalBezierCurve_Map);
    m_refIfcBlobTextureList.push_back(&m_IfcBlobTexture_Map);
    m_refIfcBlockList.push_back(&m_IfcBlock_Map);
    m_refIfcBoilerTypeList.push_back(&m_IfcBoilerType_Map);
    m_refIfcBooleanClippingResultList.push_back(&m_IfcBooleanClippingResult_Map);
    m_refIfcBooleanResultList.push_back(&m_IfcBooleanResult_Map);
    m_refIfcBooleanResultList.push_back(&m_IfcBooleanClippingResult_Map);
    m_refIfcBoundaryConditionList.push_back(&m_IfcBoundaryEdgeCondition_Map);
    m_refIfcBoundaryConditionList.push_back(&m_IfcBoundaryFaceCondition_Map);
    m_refIfcBoundaryConditionList.push_back(&m_IfcBoundaryNodeConditionWarping_Map);
    m_refIfcBoundaryConditionList.push_back(&m_IfcBoundaryNodeCondition_Map);
    m_refIfcBoundaryEdgeConditionList.push_back(&m_IfcBoundaryEdgeCondition_Map);
    m_refIfcBoundaryFaceConditionList.push_back(&m_IfcBoundaryFaceCondition_Map);
    m_refIfcBoundaryNodeConditionList.push_back(&m_IfcBoundaryNodeCondition_Map);
    m_refIfcBoundaryNodeConditionList.push_back(&m_IfcBoundaryNodeConditionWarping_Map);
    m_refIfcBoundaryNodeConditionWarpingList.push_back(&m_IfcBoundaryNodeConditionWarping_Map);
    m_refIfcBoundedCurveList.push_back(&m_IfcPolyline_Map);
    m_refIfcBoundedCurveList.push_back(&m_IfcTrimmedCurve_Map);
    m_refIfcBoundedCurveList.push_back(&m_Ifc2DCompositeCurve_Map);
    m_refIfcBoundedCurveList.push_back(&m_IfcCompositeCurve_Map);
    m_refIfcBoundedCurveList.push_back(&m_IfcRationalBezierCurve_Map);
    m_refIfcBoundedCurveList.push_back(&m_IfcBezierCurve_Map);
    m_refIfcBoundedSurfaceList.push_back(&m_IfcBoundedSurface_Map);
    m_refIfcBoundedSurfaceList.push_back(&m_IfcCurveBoundedPlane_Map);
    m_refIfcBoundedSurfaceList.push_back(&m_IfcRectangularTrimmedSurface_Map);
    m_refIfcBoundingBoxList.push_back(&m_IfcBoundingBox_Map);
    m_refIfcBoxedHalfSpaceList.push_back(&m_IfcBoxedHalfSpace_Map);
    m_refIfcBuildingList.push_back(&m_IfcBuilding_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcCovering_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcBeam_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcBuildingElementPart_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcReinforcingBar_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcReinforcingMesh_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcTendon_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcTendonAnchor_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcBuildingElementProxy_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcColumn_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcCurtainWall_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcDoor_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcFooting_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcMember_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcPile_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcPlate_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcRailing_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcRamp_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcRampFlight_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcRoof_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcSlab_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcStair_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcStairFlight_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcWallStandardCase_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcWall_Map);
    m_refIfcBuildingElementList.push_back(&m_IfcWindow_Map);
    m_refIfcBuildingElementComponentList.push_back(&m_IfcBuildingElementPart_Map);
    m_refIfcBuildingElementComponentList.push_back(&m_IfcReinforcingBar_Map);
    m_refIfcBuildingElementComponentList.push_back(&m_IfcReinforcingMesh_Map);
    m_refIfcBuildingElementComponentList.push_back(&m_IfcTendon_Map);
    m_refIfcBuildingElementComponentList.push_back(&m_IfcTendonAnchor_Map);
    m_refIfcBuildingElementPartList.push_back(&m_IfcBuildingElementPart_Map);
    m_refIfcBuildingElementProxyList.push_back(&m_IfcBuildingElementProxy_Map);
    m_refIfcBuildingElementProxyTypeList.push_back(&m_IfcBuildingElementProxyType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcBeamType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcBuildingElementProxyType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcColumnType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcCoveringType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcCurtainWallType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcMemberType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcPlateType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcRailingType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcRampFlightType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcSlabType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcStairFlightType_Map);
    m_refIfcBuildingElementTypeList.push_back(&m_IfcWallType_Map);
    m_refIfcBuildingStoreyList.push_back(&m_IfcBuildingStorey_Map);
    m_refIfcCShapeProfileDefList.push_back(&m_IfcCShapeProfileDef_Map);
    m_refIfcCableCarrierFittingTypeList.push_back(&m_IfcCableCarrierFittingType_Map);
    m_refIfcCableCarrierSegmentTypeList.push_back(&m_IfcCableCarrierSegmentType_Map);
    m_refIfcCableSegmentTypeList.push_back(&m_IfcCableSegmentType_Map);
    m_refIfcCalendarDateList.push_back(&m_IfcCalendarDate_Map);
    m_refIfcCartesianPointList.push_back(&m_IfcCartesianPoint_Map);
    m_refIfcCartesianTransformationOperatorList.push_back(&m_IfcCartesianTransformationOperator2DnonUniform_Map);
    m_refIfcCartesianTransformationOperatorList.push_back(&m_IfcCartesianTransformationOperator2D_Map);
    m_refIfcCartesianTransformationOperatorList.push_back(&m_IfcCartesianTransformationOperator3DnonUniform_Map);
    m_refIfcCartesianTransformationOperatorList.push_back(&m_IfcCartesianTransformationOperator3D_Map);
    m_refIfcCartesianTransformationOperator2DList.push_back(&m_IfcCartesianTransformationOperator2D_Map);
    m_refIfcCartesianTransformationOperator2DList.push_back(&m_IfcCartesianTransformationOperator2DnonUniform_Map);
    m_refIfcCartesianTransformationOperator2DnonUniformList.push_back(&m_IfcCartesianTransformationOperator2DnonUniform_Map);
    m_refIfcCartesianTransformationOperator3DList.push_back(&m_IfcCartesianTransformationOperator3D_Map);
    m_refIfcCartesianTransformationOperator3DList.push_back(&m_IfcCartesianTransformationOperator3DnonUniform_Map);
    m_refIfcCartesianTransformationOperator3DnonUniformList.push_back(&m_IfcCartesianTransformationOperator3DnonUniform_Map);
    m_refIfcCenterLineProfileDefList.push_back(&m_IfcCenterLineProfileDef_Map);
    m_refIfcChamferEdgeFeatureList.push_back(&m_IfcChamferEdgeFeature_Map);
    m_refIfcChillerTypeList.push_back(&m_IfcChillerType_Map);
    m_refIfcCircleList.push_back(&m_IfcCircle_Map);
    m_refIfcCircleHollowProfileDefList.push_back(&m_IfcCircleHollowProfileDef_Map);
    m_refIfcCircleProfileDefList.push_back(&m_IfcCircleProfileDef_Map);
    m_refIfcCircleProfileDefList.push_back(&m_IfcCircleHollowProfileDef_Map);
    m_refIfcClassificationList.push_back(&m_IfcClassification_Map);
    m_refIfcClassificationItemList.push_back(&m_IfcClassificationItem_Map);
    m_refIfcClassificationItemRelationshipList.push_back(&m_IfcClassificationItemRelationship_Map);
    m_refIfcClassificationNotationList.push_back(&m_IfcClassificationNotation_Map);
    m_refIfcClassificationNotationFacetList.push_back(&m_IfcClassificationNotationFacet_Map);
    m_refIfcClassificationReferenceList.push_back(&m_IfcClassificationReference_Map);
    m_refIfcClosedShellList.push_back(&m_IfcClosedShell_Map);
    m_refIfcCoilTypeList.push_back(&m_IfcCoilType_Map);
    m_refIfcColourRgbList.push_back(&m_IfcColourRgb_Map);
    m_refIfcColourSpecificationList.push_back(&m_IfcColourRgb_Map);
    m_refIfcColumnList.push_back(&m_IfcColumn_Map);
    m_refIfcColumnTypeList.push_back(&m_IfcColumnType_Map);
    m_refIfcComplexPropertyList.push_back(&m_IfcComplexProperty_Map);
    m_refIfcCompositeCurveList.push_back(&m_IfcCompositeCurve_Map);
    m_refIfcCompositeCurveList.push_back(&m_Ifc2DCompositeCurve_Map);
    m_refIfcCompositeCurveSegmentList.push_back(&m_IfcCompositeCurveSegment_Map);
    m_refIfcCompositeProfileDefList.push_back(&m_IfcCompositeProfileDef_Map);
    m_refIfcCompressorTypeList.push_back(&m_IfcCompressorType_Map);
    m_refIfcCondenserTypeList.push_back(&m_IfcCondenserType_Map);
    m_refIfcConditionList.push_back(&m_IfcCondition_Map);
    m_refIfcConditionCriterionList.push_back(&m_IfcConditionCriterion_Map);
    m_refIfcConicList.push_back(&m_IfcCircle_Map);
    m_refIfcConicList.push_back(&m_IfcEllipse_Map);
    m_refIfcConnectedFaceSetList.push_back(&m_IfcConnectedFaceSet_Map);
    m_refIfcConnectedFaceSetList.push_back(&m_IfcOpenShell_Map);
    m_refIfcConnectedFaceSetList.push_back(&m_IfcClosedShell_Map);
    m_refIfcConnectionCurveGeometryList.push_back(&m_IfcConnectionCurveGeometry_Map);
    m_refIfcConnectionGeometryList.push_back(&m_IfcConnectionCurveGeometry_Map);
    m_refIfcConnectionGeometryList.push_back(&m_IfcConnectionPointEccentricity_Map);
    m_refIfcConnectionGeometryList.push_back(&m_IfcConnectionPointGeometry_Map);
    m_refIfcConnectionGeometryList.push_back(&m_IfcConnectionPortGeometry_Map);
    m_refIfcConnectionGeometryList.push_back(&m_IfcConnectionSurfaceGeometry_Map);
    m_refIfcConnectionPointEccentricityList.push_back(&m_IfcConnectionPointEccentricity_Map);
    m_refIfcConnectionPointGeometryList.push_back(&m_IfcConnectionPointGeometry_Map);
    m_refIfcConnectionPointGeometryList.push_back(&m_IfcConnectionPointEccentricity_Map);
    m_refIfcConnectionPortGeometryList.push_back(&m_IfcConnectionPortGeometry_Map);
    m_refIfcConnectionSurfaceGeometryList.push_back(&m_IfcConnectionSurfaceGeometry_Map);
    m_refIfcConstraintList.push_back(&m_IfcMetric_Map);
    m_refIfcConstraintList.push_back(&m_IfcObjective_Map);
    m_refIfcConstraintAggregationRelationshipList.push_back(&m_IfcConstraintAggregationRelationship_Map);
    m_refIfcConstraintClassificationRelationshipList.push_back(&m_IfcConstraintClassificationRelationship_Map);
    m_refIfcConstraintRelationshipList.push_back(&m_IfcConstraintRelationship_Map);
    m_refIfcConstructionEquipmentResourceList.push_back(&m_IfcConstructionEquipmentResource_Map);
    m_refIfcConstructionMaterialResourceList.push_back(&m_IfcConstructionMaterialResource_Map);
    m_refIfcConstructionProductResourceList.push_back(&m_IfcConstructionProductResource_Map);
    m_refIfcConstructionResourceList.push_back(&m_IfcConstructionEquipmentResource_Map);
    m_refIfcConstructionResourceList.push_back(&m_IfcConstructionMaterialResource_Map);
    m_refIfcConstructionResourceList.push_back(&m_IfcConstructionProductResource_Map);
    m_refIfcConstructionResourceList.push_back(&m_IfcCrewResource_Map);
    m_refIfcConstructionResourceList.push_back(&m_IfcLaborResource_Map);
    m_refIfcConstructionResourceList.push_back(&m_IfcSubContractResource_Map);
    m_refIfcContextDependentUnitList.push_back(&m_IfcContextDependentUnit_Map);
    m_refIfcControlList.push_back(&m_IfcScheduleTimeControl_Map);
    m_refIfcControlList.push_back(&m_IfcActionRequest_Map);
    m_refIfcControlList.push_back(&m_IfcConditionCriterion_Map);
    m_refIfcControlList.push_back(&m_IfcCostItem_Map);
    m_refIfcControlList.push_back(&m_IfcCostSchedule_Map);
    m_refIfcControlList.push_back(&m_IfcEquipmentStandard_Map);
    m_refIfcControlList.push_back(&m_IfcFurnitureStandard_Map);
    m_refIfcControlList.push_back(&m_IfcPerformanceHistory_Map);
    m_refIfcControlList.push_back(&m_IfcPermit_Map);
    m_refIfcControlList.push_back(&m_IfcProjectOrder_Map);
    m_refIfcControlList.push_back(&m_IfcProjectOrderRecord_Map);
    m_refIfcControlList.push_back(&m_IfcSpaceProgram_Map);
    m_refIfcControlList.push_back(&m_IfcServiceLife_Map);
    m_refIfcControlList.push_back(&m_IfcTimeSeriesSchedule_Map);
    m_refIfcControlList.push_back(&m_IfcWorkPlan_Map);
    m_refIfcControlList.push_back(&m_IfcWorkSchedule_Map);
    m_refIfcControllerTypeList.push_back(&m_IfcControllerType_Map);
    m_refIfcConversionBasedUnitList.push_back(&m_IfcConversionBasedUnit_Map);
    m_refIfcCooledBeamTypeList.push_back(&m_IfcCooledBeamType_Map);
    m_refIfcCoolingTowerTypeList.push_back(&m_IfcCoolingTowerType_Map);
    m_refIfcCoordinatedUniversalTimeOffsetList.push_back(&m_IfcCoordinatedUniversalTimeOffset_Map);
    m_refIfcCostItemList.push_back(&m_IfcCostItem_Map);
    m_refIfcCostScheduleList.push_back(&m_IfcCostSchedule_Map);
    m_refIfcCostValueList.push_back(&m_IfcCostValue_Map);
    m_refIfcCoveringList.push_back(&m_IfcCovering_Map);
    m_refIfcCoveringTypeList.push_back(&m_IfcCoveringType_Map);
    m_refIfcCraneRailAShapeProfileDefList.push_back(&m_IfcCraneRailAShapeProfileDef_Map);
    m_refIfcCraneRailFShapeProfileDefList.push_back(&m_IfcCraneRailFShapeProfileDef_Map);
    m_refIfcCrewResourceList.push_back(&m_IfcCrewResource_Map);
    m_refIfcCsgPrimitive3DList.push_back(&m_IfcBlock_Map);
    m_refIfcCsgPrimitive3DList.push_back(&m_IfcRectangularPyramid_Map);
    m_refIfcCsgPrimitive3DList.push_back(&m_IfcRightCircularCone_Map);
    m_refIfcCsgPrimitive3DList.push_back(&m_IfcRightCircularCylinder_Map);
    m_refIfcCsgPrimitive3DList.push_back(&m_IfcSphere_Map);
    m_refIfcCsgSolidList.push_back(&m_IfcCsgSolid_Map);
    m_refIfcCurrencyRelationshipList.push_back(&m_IfcCurrencyRelationship_Map);
    m_refIfcCurtainWallList.push_back(&m_IfcCurtainWall_Map);
    m_refIfcCurtainWallTypeList.push_back(&m_IfcCurtainWallType_Map);
    m_refIfcCurveList.push_back(&m_IfcLine_Map);
    m_refIfcCurveList.push_back(&m_IfcCircle_Map);
    m_refIfcCurveList.push_back(&m_IfcEllipse_Map);
    m_refIfcCurveList.push_back(&m_IfcPolyline_Map);
    m_refIfcCurveList.push_back(&m_IfcTrimmedCurve_Map);
    m_refIfcCurveList.push_back(&m_Ifc2DCompositeCurve_Map);
    m_refIfcCurveList.push_back(&m_IfcCompositeCurve_Map);
    m_refIfcCurveList.push_back(&m_IfcRationalBezierCurve_Map);
    m_refIfcCurveList.push_back(&m_IfcBezierCurve_Map);
    m_refIfcCurveList.push_back(&m_IfcOffsetCurve2D_Map);
    m_refIfcCurveList.push_back(&m_IfcOffsetCurve3D_Map);
    m_refIfcCurveBoundedPlaneList.push_back(&m_IfcCurveBoundedPlane_Map);
    m_refIfcCurveStyleList.push_back(&m_IfcCurveStyle_Map);
    m_refIfcCurveStyleFontList.push_back(&m_IfcCurveStyleFont_Map);
    m_refIfcCurveStyleFontAndScalingList.push_back(&m_IfcCurveStyleFontAndScaling_Map);
    m_refIfcCurveStyleFontPatternList.push_back(&m_IfcCurveStyleFontPattern_Map);
    m_refIfcDamperTypeList.push_back(&m_IfcDamperType_Map);
    m_refIfcDateAndTimeList.push_back(&m_IfcDateAndTime_Map);
    m_refIfcDefinedSymbolList.push_back(&m_IfcDefinedSymbol_Map);
    m_refIfcDerivedProfileDefList.push_back(&m_IfcDerivedProfileDef_Map);
    m_refIfcDerivedUnitList.push_back(&m_IfcDerivedUnit_Map);
    m_refIfcDerivedUnitElementList.push_back(&m_IfcDerivedUnitElement_Map);
    m_refIfcDiameterDimensionList.push_back(&m_IfcDiameterDimension_Map);
    m_refIfcDimensionCalloutRelationshipList.push_back(&m_IfcDimensionCalloutRelationship_Map);
    m_refIfcDimensionCurveList.push_back(&m_IfcDimensionCurve_Map);
    m_refIfcDimensionCurveDirectedCalloutList.push_back(&m_IfcDimensionCurveDirectedCallout_Map);
    m_refIfcDimensionCurveDirectedCalloutList.push_back(&m_IfcDiameterDimension_Map);
    m_refIfcDimensionCurveDirectedCalloutList.push_back(&m_IfcLinearDimension_Map);
    m_refIfcDimensionCurveDirectedCalloutList.push_back(&m_IfcRadiusDimension_Map);
    m_refIfcDimensionCurveDirectedCalloutList.push_back(&m_IfcAngularDimension_Map);
    m_refIfcDimensionCurveTerminatorList.push_back(&m_IfcDimensionCurveTerminator_Map);
    m_refIfcDimensionPairList.push_back(&m_IfcDimensionPair_Map);
    m_refIfcDimensionalExponentsList.push_back(&m_IfcDimensionalExponents_Map);
    m_refIfcDirectionList.push_back(&m_IfcDirection_Map);
    m_refIfcDiscreteAccessoryList.push_back(&m_IfcDiscreteAccessory_Map);
    m_refIfcDiscreteAccessoryTypeList.push_back(&m_IfcDiscreteAccessoryType_Map);
    m_refIfcDiscreteAccessoryTypeList.push_back(&m_IfcVibrationIsolatorType_Map);
    m_refIfcDistributionChamberElementList.push_back(&m_IfcDistributionChamberElement_Map);
    m_refIfcDistributionChamberElementTypeList.push_back(&m_IfcDistributionChamberElementType_Map);
    m_refIfcDistributionControlElementList.push_back(&m_IfcDistributionControlElement_Map);
    m_refIfcDistributionControlElementTypeList.push_back(&m_IfcActuatorType_Map);
    m_refIfcDistributionControlElementTypeList.push_back(&m_IfcAlarmType_Map);
    m_refIfcDistributionControlElementTypeList.push_back(&m_IfcControllerType_Map);
    m_refIfcDistributionControlElementTypeList.push_back(&m_IfcFlowInstrumentType_Map);
    m_refIfcDistributionControlElementTypeList.push_back(&m_IfcSensorType_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcDistributionElement_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcDistributionControlElement_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcEnergyConversionDevice_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcElectricDistributionPoint_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcFlowController_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcFlowFitting_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcFlowMovingDevice_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcFlowSegment_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcFlowStorageDevice_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcFlowTerminal_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcFlowTreatmentDevice_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcDistributionChamberElement_Map);
    m_refIfcDistributionElementList.push_back(&m_IfcDistributionFlowElement_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcDistributionElementType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcAirTerminalBoxType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcDamperType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcElectricTimeControlType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcFlowMeterType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcProtectiveDeviceType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcSwitchingDeviceType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcValveType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcAirTerminalType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcElectricApplianceType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcElectricHeaterType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcFireSuppressionTerminalType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcGasTerminalType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcLampType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcLightFixtureType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcOutletType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcSanitaryTerminalType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcStackTerminalType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcWasteTerminalType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcAirToAirHeatRecoveryType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcBoilerType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcChillerType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcCoilType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcCondenserType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcCooledBeamType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcCoolingTowerType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcElectricGeneratorType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcElectricMotorType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcEvaporativeCoolerType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcEvaporatorType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcHeatExchangerType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcHumidifierType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcMotorConnectionType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcSpaceHeaterType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcTransformerType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcTubeBundleType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcUnitaryEquipmentType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcCableCarrierFittingType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcDuctFittingType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcJunctionBoxType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcPipeFittingType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcCableCarrierSegmentType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcCableSegmentType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcDuctSegmentType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcPipeSegmentType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcCompressorType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcFanType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcPumpType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcDistributionChamberElementType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcDuctSilencerType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcFilterType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcElectricFlowStorageDeviceType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcTankType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcActuatorType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcAlarmType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcControllerType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcFlowInstrumentType_Map);
    m_refIfcDistributionElementTypeList.push_back(&m_IfcSensorType_Map);
    m_refIfcDistributionFlowElementList.push_back(&m_IfcDistributionFlowElement_Map);
    m_refIfcDistributionFlowElementList.push_back(&m_IfcEnergyConversionDevice_Map);
    m_refIfcDistributionFlowElementList.push_back(&m_IfcElectricDistributionPoint_Map);
    m_refIfcDistributionFlowElementList.push_back(&m_IfcFlowController_Map);
    m_refIfcDistributionFlowElementList.push_back(&m_IfcFlowFitting_Map);
    m_refIfcDistributionFlowElementList.push_back(&m_IfcFlowMovingDevice_Map);
    m_refIfcDistributionFlowElementList.push_back(&m_IfcFlowSegment_Map);
    m_refIfcDistributionFlowElementList.push_back(&m_IfcFlowStorageDevice_Map);
    m_refIfcDistributionFlowElementList.push_back(&m_IfcFlowTerminal_Map);
    m_refIfcDistributionFlowElementList.push_back(&m_IfcFlowTreatmentDevice_Map);
    m_refIfcDistributionFlowElementList.push_back(&m_IfcDistributionChamberElement_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcAirTerminalBoxType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcDamperType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcElectricTimeControlType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcFlowMeterType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcProtectiveDeviceType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcSwitchingDeviceType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcValveType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcAirTerminalType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcElectricApplianceType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcElectricHeaterType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcFireSuppressionTerminalType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcGasTerminalType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcLampType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcLightFixtureType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcOutletType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcSanitaryTerminalType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcStackTerminalType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcWasteTerminalType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcAirToAirHeatRecoveryType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcBoilerType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcChillerType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcCoilType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcCondenserType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcCooledBeamType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcCoolingTowerType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcElectricGeneratorType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcElectricMotorType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcEvaporativeCoolerType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcEvaporatorType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcHeatExchangerType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcHumidifierType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcMotorConnectionType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcSpaceHeaterType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcTransformerType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcTubeBundleType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcUnitaryEquipmentType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcCableCarrierFittingType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcDuctFittingType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcJunctionBoxType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcPipeFittingType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcCableCarrierSegmentType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcCableSegmentType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcDuctSegmentType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcPipeSegmentType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcCompressorType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcFanType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcPumpType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcDistributionChamberElementType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcDuctSilencerType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcFilterType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcElectricFlowStorageDeviceType_Map);
    m_refIfcDistributionFlowElementTypeList.push_back(&m_IfcTankType_Map);
    m_refIfcDistributionPortList.push_back(&m_IfcDistributionPort_Map);
    m_refIfcDocumentElectronicFormatList.push_back(&m_IfcDocumentElectronicFormat_Map);
    m_refIfcDocumentInformationList.push_back(&m_IfcDocumentInformation_Map);
    m_refIfcDocumentInformationRelationshipList.push_back(&m_IfcDocumentInformationRelationship_Map);
    m_refIfcDocumentReferenceList.push_back(&m_IfcDocumentReference_Map);
    m_refIfcDoorList.push_back(&m_IfcDoor_Map);
    m_refIfcDoorLiningPropertiesList.push_back(&m_IfcDoorLiningProperties_Map);
    m_refIfcDoorPanelPropertiesList.push_back(&m_IfcDoorPanelProperties_Map);
    m_refIfcDoorStyleList.push_back(&m_IfcDoorStyle_Map);
    m_refIfcDraughtingCalloutList.push_back(&m_IfcDraughtingCallout_Map);
    m_refIfcDraughtingCalloutList.push_back(&m_IfcStructuredDimensionCallout_Map);
    m_refIfcDraughtingCalloutList.push_back(&m_IfcDiameterDimension_Map);
    m_refIfcDraughtingCalloutList.push_back(&m_IfcLinearDimension_Map);
    m_refIfcDraughtingCalloutList.push_back(&m_IfcRadiusDimension_Map);
    m_refIfcDraughtingCalloutList.push_back(&m_IfcAngularDimension_Map);
    m_refIfcDraughtingCalloutList.push_back(&m_IfcDimensionCurveDirectedCallout_Map);
    m_refIfcDraughtingCalloutRelationshipList.push_back(&m_IfcDraughtingCalloutRelationship_Map);
    m_refIfcDraughtingCalloutRelationshipList.push_back(&m_IfcDimensionCalloutRelationship_Map);
    m_refIfcDraughtingCalloutRelationshipList.push_back(&m_IfcDimensionPair_Map);
    m_refIfcDraughtingPreDefinedColourList.push_back(&m_IfcDraughtingPreDefinedColour_Map);
    m_refIfcDraughtingPreDefinedCurveFontList.push_back(&m_IfcDraughtingPreDefinedCurveFont_Map);
    m_refIfcDraughtingPreDefinedTextFontList.push_back(&m_IfcDraughtingPreDefinedTextFont_Map);
    m_refIfcDuctFittingTypeList.push_back(&m_IfcDuctFittingType_Map);
    m_refIfcDuctSegmentTypeList.push_back(&m_IfcDuctSegmentType_Map);
    m_refIfcDuctSilencerTypeList.push_back(&m_IfcDuctSilencerType_Map);
    m_refIfcEdgeList.push_back(&m_IfcEdge_Map);
    m_refIfcEdgeList.push_back(&m_IfcOrientedEdge_Map);
    m_refIfcEdgeList.push_back(&m_IfcSubedge_Map);
    m_refIfcEdgeList.push_back(&m_IfcEdgeCurve_Map);
    m_refIfcEdgeCurveList.push_back(&m_IfcEdgeCurve_Map);
    m_refIfcEdgeFeatureList.push_back(&m_IfcChamferEdgeFeature_Map);
    m_refIfcEdgeFeatureList.push_back(&m_IfcRoundedEdgeFeature_Map);
    m_refIfcEdgeLoopList.push_back(&m_IfcEdgeLoop_Map);
    m_refIfcElectricApplianceTypeList.push_back(&m_IfcElectricApplianceType_Map);
    m_refIfcElectricDistributionPointList.push_back(&m_IfcElectricDistributionPoint_Map);
    m_refIfcElectricFlowStorageDeviceTypeList.push_back(&m_IfcElectricFlowStorageDeviceType_Map);
    m_refIfcElectricGeneratorTypeList.push_back(&m_IfcElectricGeneratorType_Map);
    m_refIfcElectricHeaterTypeList.push_back(&m_IfcElectricHeaterType_Map);
    m_refIfcElectricMotorTypeList.push_back(&m_IfcElectricMotorType_Map);
    m_refIfcElectricTimeControlTypeList.push_back(&m_IfcElectricTimeControlType_Map);
    m_refIfcElectricalBasePropertiesList.push_back(&m_IfcElectricalBaseProperties_Map);
    m_refIfcElectricalCircuitList.push_back(&m_IfcElectricalCircuit_Map);
    m_refIfcElectricalElementList.push_back(&m_IfcElectricalElement_Map);
    m_refIfcElementList.push_back(&m_IfcOpeningElement_Map);
    m_refIfcElementList.push_back(&m_IfcChamferEdgeFeature_Map);
    m_refIfcElementList.push_back(&m_IfcRoundedEdgeFeature_Map);
    m_refIfcElementList.push_back(&m_IfcProjectionElement_Map);
    m_refIfcElementList.push_back(&m_IfcCovering_Map);
    m_refIfcElementList.push_back(&m_IfcBeam_Map);
    m_refIfcElementList.push_back(&m_IfcBuildingElementPart_Map);
    m_refIfcElementList.push_back(&m_IfcReinforcingBar_Map);
    m_refIfcElementList.push_back(&m_IfcReinforcingMesh_Map);
    m_refIfcElementList.push_back(&m_IfcTendon_Map);
    m_refIfcElementList.push_back(&m_IfcTendonAnchor_Map);
    m_refIfcElementList.push_back(&m_IfcBuildingElementProxy_Map);
    m_refIfcElementList.push_back(&m_IfcColumn_Map);
    m_refIfcElementList.push_back(&m_IfcCurtainWall_Map);
    m_refIfcElementList.push_back(&m_IfcDoor_Map);
    m_refIfcElementList.push_back(&m_IfcFooting_Map);
    m_refIfcElementList.push_back(&m_IfcMember_Map);
    m_refIfcElementList.push_back(&m_IfcPile_Map);
    m_refIfcElementList.push_back(&m_IfcPlate_Map);
    m_refIfcElementList.push_back(&m_IfcRailing_Map);
    m_refIfcElementList.push_back(&m_IfcRamp_Map);
    m_refIfcElementList.push_back(&m_IfcRampFlight_Map);
    m_refIfcElementList.push_back(&m_IfcRoof_Map);
    m_refIfcElementList.push_back(&m_IfcSlab_Map);
    m_refIfcElementList.push_back(&m_IfcStair_Map);
    m_refIfcElementList.push_back(&m_IfcStairFlight_Map);
    m_refIfcElementList.push_back(&m_IfcWallStandardCase_Map);
    m_refIfcElementList.push_back(&m_IfcWall_Map);
    m_refIfcElementList.push_back(&m_IfcWindow_Map);
    m_refIfcElementList.push_back(&m_IfcDiscreteAccessory_Map);
    m_refIfcElementList.push_back(&m_IfcMechanicalFastener_Map);
    m_refIfcElementList.push_back(&m_IfcFastener_Map);
    m_refIfcElementList.push_back(&m_IfcDistributionControlElement_Map);
    m_refIfcElementList.push_back(&m_IfcEnergyConversionDevice_Map);
    m_refIfcElementList.push_back(&m_IfcElectricDistributionPoint_Map);
    m_refIfcElementList.push_back(&m_IfcFlowController_Map);
    m_refIfcElementList.push_back(&m_IfcFlowFitting_Map);
    m_refIfcElementList.push_back(&m_IfcFlowMovingDevice_Map);
    m_refIfcElementList.push_back(&m_IfcFlowSegment_Map);
    m_refIfcElementList.push_back(&m_IfcFlowStorageDevice_Map);
    m_refIfcElementList.push_back(&m_IfcFlowTerminal_Map);
    m_refIfcElementList.push_back(&m_IfcFlowTreatmentDevice_Map);
    m_refIfcElementList.push_back(&m_IfcDistributionChamberElement_Map);
    m_refIfcElementList.push_back(&m_IfcDistributionFlowElement_Map);
    m_refIfcElementList.push_back(&m_IfcDistributionElement_Map);
    m_refIfcElementList.push_back(&m_IfcElectricalElement_Map);
    m_refIfcElementList.push_back(&m_IfcElementAssembly_Map);
    m_refIfcElementList.push_back(&m_IfcEquipmentElement_Map);
    m_refIfcElementList.push_back(&m_IfcFurnishingElement_Map);
    m_refIfcElementList.push_back(&m_IfcTransportElement_Map);
    m_refIfcElementList.push_back(&m_IfcVirtualElement_Map);
    m_refIfcElementAssemblyList.push_back(&m_IfcElementAssembly_Map);
    m_refIfcElementComponentList.push_back(&m_IfcDiscreteAccessory_Map);
    m_refIfcElementComponentList.push_back(&m_IfcMechanicalFastener_Map);
    m_refIfcElementComponentList.push_back(&m_IfcFastener_Map);
    m_refIfcElementComponentTypeList.push_back(&m_IfcVibrationIsolatorType_Map);
    m_refIfcElementComponentTypeList.push_back(&m_IfcDiscreteAccessoryType_Map);
    m_refIfcElementComponentTypeList.push_back(&m_IfcMechanicalFastenerType_Map);
    m_refIfcElementComponentTypeList.push_back(&m_IfcFastenerType_Map);
    m_refIfcElementQuantityList.push_back(&m_IfcElementQuantity_Map);
    m_refIfcElementTypeList.push_back(&m_IfcAirTerminalBoxType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcDamperType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcElectricTimeControlType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcFlowMeterType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcProtectiveDeviceType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcSwitchingDeviceType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcValveType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcAirTerminalType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcElectricApplianceType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcElectricHeaterType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcFireSuppressionTerminalType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcGasTerminalType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcLampType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcLightFixtureType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcOutletType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcSanitaryTerminalType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcStackTerminalType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcWasteTerminalType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcAirToAirHeatRecoveryType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcBoilerType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcChillerType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcCoilType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcCondenserType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcCooledBeamType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcCoolingTowerType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcElectricGeneratorType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcElectricMotorType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcEvaporativeCoolerType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcEvaporatorType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcHeatExchangerType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcHumidifierType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcMotorConnectionType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcSpaceHeaterType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcTransformerType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcTubeBundleType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcUnitaryEquipmentType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcCableCarrierFittingType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcDuctFittingType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcJunctionBoxType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcPipeFittingType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcCableCarrierSegmentType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcCableSegmentType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcDuctSegmentType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcPipeSegmentType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcCompressorType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcFanType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcPumpType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcDistributionChamberElementType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcDuctSilencerType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcFilterType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcElectricFlowStorageDeviceType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcTankType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcActuatorType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcAlarmType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcControllerType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcFlowInstrumentType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcSensorType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcDistributionElementType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcBeamType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcBuildingElementProxyType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcColumnType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcCoveringType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcCurtainWallType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcMemberType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcPlateType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcRailingType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcRampFlightType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcSlabType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcStairFlightType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcWallType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcVibrationIsolatorType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcDiscreteAccessoryType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcMechanicalFastenerType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcFastenerType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcFurnitureType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcSystemFurnitureElementType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcFurnishingElementType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcSpaceType_Map);
    m_refIfcElementTypeList.push_back(&m_IfcTransportElementType_Map);
    m_refIfcElementarySurfaceList.push_back(&m_IfcPlane_Map);
    m_refIfcEllipseList.push_back(&m_IfcEllipse_Map);
    m_refIfcEllipseProfileDefList.push_back(&m_IfcEllipseProfileDef_Map);
    m_refIfcEnergyConversionDeviceList.push_back(&m_IfcEnergyConversionDevice_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcAirToAirHeatRecoveryType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcBoilerType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcChillerType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcCoilType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcCondenserType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcCooledBeamType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcCoolingTowerType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcElectricGeneratorType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcElectricMotorType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcEvaporativeCoolerType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcEvaporatorType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcHeatExchangerType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcHumidifierType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcMotorConnectionType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcSpaceHeaterType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcTransformerType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcTubeBundleType_Map);
    m_refIfcEnergyConversionDeviceTypeList.push_back(&m_IfcUnitaryEquipmentType_Map);
    m_refIfcEnergyPropertiesList.push_back(&m_IfcEnergyProperties_Map);
    m_refIfcEnergyPropertiesList.push_back(&m_IfcElectricalBaseProperties_Map);
    m_refIfcEnvironmentalImpactValueList.push_back(&m_IfcEnvironmentalImpactValue_Map);
    m_refIfcEquipmentElementList.push_back(&m_IfcEquipmentElement_Map);
    m_refIfcEquipmentStandardList.push_back(&m_IfcEquipmentStandard_Map);
    m_refIfcEvaporativeCoolerTypeList.push_back(&m_IfcEvaporativeCoolerType_Map);
    m_refIfcEvaporatorTypeList.push_back(&m_IfcEvaporatorType_Map);
    m_refIfcExtendedMaterialPropertiesList.push_back(&m_IfcExtendedMaterialProperties_Map);
    m_refIfcExternalReferenceList.push_back(&m_IfcExternallyDefinedHatchStyle_Map);
    m_refIfcExternalReferenceList.push_back(&m_IfcExternallyDefinedTextFont_Map);
    m_refIfcExternalReferenceList.push_back(&m_IfcExternallyDefinedSurfaceStyle_Map);
    m_refIfcExternalReferenceList.push_back(&m_IfcClassificationReference_Map);
    m_refIfcExternalReferenceList.push_back(&m_IfcDocumentReference_Map);
    m_refIfcExternalReferenceList.push_back(&m_IfcLibraryReference_Map);
    m_refIfcExternalReferenceList.push_back(&m_IfcExternallyDefinedSymbol_Map);
    m_refIfcExternallyDefinedHatchStyleList.push_back(&m_IfcExternallyDefinedHatchStyle_Map);
    m_refIfcExternallyDefinedSurfaceStyleList.push_back(&m_IfcExternallyDefinedSurfaceStyle_Map);
    m_refIfcExternallyDefinedSymbolList.push_back(&m_IfcExternallyDefinedSymbol_Map);
    m_refIfcExternallyDefinedTextFontList.push_back(&m_IfcExternallyDefinedTextFont_Map);
    m_refIfcExtrudedAreaSolidList.push_back(&m_IfcExtrudedAreaSolid_Map);
    m_refIfcFaceList.push_back(&m_IfcFace_Map);
    m_refIfcFaceList.push_back(&m_IfcFaceSurface_Map);
    m_refIfcFaceBasedSurfaceModelList.push_back(&m_IfcFaceBasedSurfaceModel_Map);
    m_refIfcFaceBoundList.push_back(&m_IfcFaceBound_Map);
    m_refIfcFaceBoundList.push_back(&m_IfcFaceOuterBound_Map);
    m_refIfcFaceOuterBoundList.push_back(&m_IfcFaceOuterBound_Map);
    m_refIfcFaceSurfaceList.push_back(&m_IfcFaceSurface_Map);
    m_refIfcFacetedBrepList.push_back(&m_IfcFacetedBrep_Map);
    m_refIfcFacetedBrepWithVoidsList.push_back(&m_IfcFacetedBrepWithVoids_Map);
    m_refIfcFailureConnectionConditionList.push_back(&m_IfcFailureConnectionCondition_Map);
    m_refIfcFanTypeList.push_back(&m_IfcFanType_Map);
    m_refIfcFastenerList.push_back(&m_IfcFastener_Map);
    m_refIfcFastenerList.push_back(&m_IfcMechanicalFastener_Map);
    m_refIfcFastenerTypeList.push_back(&m_IfcFastenerType_Map);
    m_refIfcFastenerTypeList.push_back(&m_IfcMechanicalFastenerType_Map);
    m_refIfcFeatureElementList.push_back(&m_IfcOpeningElement_Map);
    m_refIfcFeatureElementList.push_back(&m_IfcChamferEdgeFeature_Map);
    m_refIfcFeatureElementList.push_back(&m_IfcRoundedEdgeFeature_Map);
    m_refIfcFeatureElementList.push_back(&m_IfcProjectionElement_Map);
    m_refIfcFeatureElementAdditionList.push_back(&m_IfcProjectionElement_Map);
    m_refIfcFeatureElementSubtractionList.push_back(&m_IfcOpeningElement_Map);
    m_refIfcFeatureElementSubtractionList.push_back(&m_IfcChamferEdgeFeature_Map);
    m_refIfcFeatureElementSubtractionList.push_back(&m_IfcRoundedEdgeFeature_Map);
    m_refIfcFillAreaStyleList.push_back(&m_IfcFillAreaStyle_Map);
    m_refIfcFillAreaStyleHatchingList.push_back(&m_IfcFillAreaStyleHatching_Map);
    m_refIfcFillAreaStyleTileSymbolWithStyleList.push_back(&m_IfcFillAreaStyleTileSymbolWithStyle_Map);
    m_refIfcFillAreaStyleTilesList.push_back(&m_IfcFillAreaStyleTiles_Map);
    m_refIfcFilterTypeList.push_back(&m_IfcFilterType_Map);
    m_refIfcFireSuppressionTerminalTypeList.push_back(&m_IfcFireSuppressionTerminalType_Map);
    m_refIfcFlowControllerList.push_back(&m_IfcFlowController_Map);
    m_refIfcFlowControllerList.push_back(&m_IfcElectricDistributionPoint_Map);
    m_refIfcFlowControllerTypeList.push_back(&m_IfcAirTerminalBoxType_Map);
    m_refIfcFlowControllerTypeList.push_back(&m_IfcDamperType_Map);
    m_refIfcFlowControllerTypeList.push_back(&m_IfcElectricTimeControlType_Map);
    m_refIfcFlowControllerTypeList.push_back(&m_IfcFlowMeterType_Map);
    m_refIfcFlowControllerTypeList.push_back(&m_IfcProtectiveDeviceType_Map);
    m_refIfcFlowControllerTypeList.push_back(&m_IfcSwitchingDeviceType_Map);
    m_refIfcFlowControllerTypeList.push_back(&m_IfcValveType_Map);
    m_refIfcFlowFittingList.push_back(&m_IfcFlowFitting_Map);
    m_refIfcFlowFittingTypeList.push_back(&m_IfcCableCarrierFittingType_Map);
    m_refIfcFlowFittingTypeList.push_back(&m_IfcDuctFittingType_Map);
    m_refIfcFlowFittingTypeList.push_back(&m_IfcJunctionBoxType_Map);
    m_refIfcFlowFittingTypeList.push_back(&m_IfcPipeFittingType_Map);
    m_refIfcFlowInstrumentTypeList.push_back(&m_IfcFlowInstrumentType_Map);
    m_refIfcFlowMeterTypeList.push_back(&m_IfcFlowMeterType_Map);
    m_refIfcFlowMovingDeviceList.push_back(&m_IfcFlowMovingDevice_Map);
    m_refIfcFlowMovingDeviceTypeList.push_back(&m_IfcCompressorType_Map);
    m_refIfcFlowMovingDeviceTypeList.push_back(&m_IfcFanType_Map);
    m_refIfcFlowMovingDeviceTypeList.push_back(&m_IfcPumpType_Map);
    m_refIfcFlowSegmentList.push_back(&m_IfcFlowSegment_Map);
    m_refIfcFlowSegmentTypeList.push_back(&m_IfcCableCarrierSegmentType_Map);
    m_refIfcFlowSegmentTypeList.push_back(&m_IfcCableSegmentType_Map);
    m_refIfcFlowSegmentTypeList.push_back(&m_IfcDuctSegmentType_Map);
    m_refIfcFlowSegmentTypeList.push_back(&m_IfcPipeSegmentType_Map);
    m_refIfcFlowStorageDeviceList.push_back(&m_IfcFlowStorageDevice_Map);
    m_refIfcFlowStorageDeviceTypeList.push_back(&m_IfcElectricFlowStorageDeviceType_Map);
    m_refIfcFlowStorageDeviceTypeList.push_back(&m_IfcTankType_Map);
    m_refIfcFlowTerminalList.push_back(&m_IfcFlowTerminal_Map);
    m_refIfcFlowTerminalTypeList.push_back(&m_IfcAirTerminalType_Map);
    m_refIfcFlowTerminalTypeList.push_back(&m_IfcElectricApplianceType_Map);
    m_refIfcFlowTerminalTypeList.push_back(&m_IfcElectricHeaterType_Map);
    m_refIfcFlowTerminalTypeList.push_back(&m_IfcFireSuppressionTerminalType_Map);
    m_refIfcFlowTerminalTypeList.push_back(&m_IfcGasTerminalType_Map);
    m_refIfcFlowTerminalTypeList.push_back(&m_IfcLampType_Map);
    m_refIfcFlowTerminalTypeList.push_back(&m_IfcLightFixtureType_Map);
    m_refIfcFlowTerminalTypeList.push_back(&m_IfcOutletType_Map);
    m_refIfcFlowTerminalTypeList.push_back(&m_IfcSanitaryTerminalType_Map);
    m_refIfcFlowTerminalTypeList.push_back(&m_IfcStackTerminalType_Map);
    m_refIfcFlowTerminalTypeList.push_back(&m_IfcWasteTerminalType_Map);
    m_refIfcFlowTreatmentDeviceList.push_back(&m_IfcFlowTreatmentDevice_Map);
    m_refIfcFlowTreatmentDeviceTypeList.push_back(&m_IfcDuctSilencerType_Map);
    m_refIfcFlowTreatmentDeviceTypeList.push_back(&m_IfcFilterType_Map);
    m_refIfcFluidFlowPropertiesList.push_back(&m_IfcFluidFlowProperties_Map);
    m_refIfcFootingList.push_back(&m_IfcFooting_Map);
    m_refIfcFuelPropertiesList.push_back(&m_IfcFuelProperties_Map);
    m_refIfcFurnishingElementList.push_back(&m_IfcFurnishingElement_Map);
    m_refIfcFurnishingElementTypeList.push_back(&m_IfcFurnishingElementType_Map);
    m_refIfcFurnishingElementTypeList.push_back(&m_IfcFurnitureType_Map);
    m_refIfcFurnishingElementTypeList.push_back(&m_IfcSystemFurnitureElementType_Map);
    m_refIfcFurnitureStandardList.push_back(&m_IfcFurnitureStandard_Map);
    m_refIfcFurnitureTypeList.push_back(&m_IfcFurnitureType_Map);
    m_refIfcGasTerminalTypeList.push_back(&m_IfcGasTerminalType_Map);
    m_refIfcGeneralMaterialPropertiesList.push_back(&m_IfcGeneralMaterialProperties_Map);
    m_refIfcGeneralProfilePropertiesList.push_back(&m_IfcGeneralProfileProperties_Map);
    m_refIfcGeneralProfilePropertiesList.push_back(&m_IfcStructuralSteelProfileProperties_Map);
    m_refIfcGeneralProfilePropertiesList.push_back(&m_IfcStructuralProfileProperties_Map);
    m_refIfcGeometricCurveSetList.push_back(&m_IfcGeometricCurveSet_Map);
    m_refIfcGeometricRepresentationContextList.push_back(&m_IfcGeometricRepresentationContext_Map);
    m_refIfcGeometricRepresentationContextList.push_back(&m_IfcGeometricRepresentationSubContext_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcFillAreaStyleHatching_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcVector_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcDirection_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcTwoDirectionRepeatFactor_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcOneDirectionRepeatFactor_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcCartesianPoint_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcPointOnCurve_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcPointOnSurface_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcFillAreaStyleTiles_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcFillAreaStyleTileSymbolWithStyle_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcCartesianTransformationOperator2DnonUniform_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcCartesianTransformationOperator2D_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcCartesianTransformationOperator3DnonUniform_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcCartesianTransformationOperator3D_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcAxis2Placement2D_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcAxis2Placement3D_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcAxis1Placement_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcCsgSolid_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcExtrudedAreaSolid_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcRevolvedAreaSolid_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcSurfaceCurveSweptAreaSolid_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcFacetedBrep_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcFacetedBrepWithVoids_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcSweptDiskSolid_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcBoundingBox_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcLine_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcCircle_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcEllipse_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcPolyline_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcTrimmedCurve_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_Ifc2DCompositeCurve_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcCompositeCurve_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcRationalBezierCurve_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcBezierCurve_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcOffsetCurve2D_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcOffsetCurve3D_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcCompositeCurveSegment_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcBoxedHalfSpace_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcPolygonalBoundedHalfSpace_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcHalfSpaceSolid_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcPlane_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcCurveBoundedPlane_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcRectangularTrimmedSurface_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcBoundedSurface_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcSurfaceOfLinearExtrusion_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcSurfaceOfRevolution_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcBooleanClippingResult_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcBooleanResult_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcBlock_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcRectangularPyramid_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcRightCircularCone_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcRightCircularCylinder_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcSphere_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcFaceBasedSurfaceModel_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcStructuredDimensionCallout_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcDiameterDimension_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcLinearDimension_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcRadiusDimension_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcAngularDimension_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcDimensionCurveDirectedCallout_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcDraughtingCallout_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcAnnotationFillArea_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcAnnotationSurface_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcDefinedSymbol_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcGeometricCurveSet_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcGeometricSet_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcLightSourceAmbient_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcLightSourceDirectional_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcLightSourceGoniometric_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcLightSourceSpot_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcLightSourcePositional_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcPlanarBox_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcPlanarExtent_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcSectionedSpine_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcShellBasedSurfaceModel_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcTextLiteralWithExtent_Map);
    m_refIfcGeometricRepresentationItemList.push_back(&m_IfcTextLiteral_Map);
    m_refIfcGeometricRepresentationSubContextList.push_back(&m_IfcGeometricRepresentationSubContext_Map);
    m_refIfcGeometricSetList.push_back(&m_IfcGeometricSet_Map);
    m_refIfcGeometricSetList.push_back(&m_IfcGeometricCurveSet_Map);
    m_refIfcGridList.push_back(&m_IfcGrid_Map);
    m_refIfcGridAxisList.push_back(&m_IfcGridAxis_Map);
    m_refIfcGridPlacementList.push_back(&m_IfcGridPlacement_Map);
    m_refIfcGroupList.push_back(&m_IfcGroup_Map);
    m_refIfcGroupList.push_back(&m_IfcAsset_Map);
    m_refIfcGroupList.push_back(&m_IfcCondition_Map);
    m_refIfcGroupList.push_back(&m_IfcInventory_Map);
    m_refIfcGroupList.push_back(&m_IfcStructuralResultGroup_Map);
    m_refIfcGroupList.push_back(&m_IfcZone_Map);
    m_refIfcGroupList.push_back(&m_IfcStructuralLoadGroup_Map);
    m_refIfcGroupList.push_back(&m_IfcElectricalCircuit_Map);
    m_refIfcGroupList.push_back(&m_IfcStructuralAnalysisModel_Map);
    m_refIfcGroupList.push_back(&m_IfcSystem_Map);
    m_refIfcHalfSpaceSolidList.push_back(&m_IfcHalfSpaceSolid_Map);
    m_refIfcHalfSpaceSolidList.push_back(&m_IfcBoxedHalfSpace_Map);
    m_refIfcHalfSpaceSolidList.push_back(&m_IfcPolygonalBoundedHalfSpace_Map);
    m_refIfcHeatExchangerTypeList.push_back(&m_IfcHeatExchangerType_Map);
    m_refIfcHumidifierTypeList.push_back(&m_IfcHumidifierType_Map);
    m_refIfcHygroscopicMaterialPropertiesList.push_back(&m_IfcHygroscopicMaterialProperties_Map);
    m_refIfcIShapeProfileDefList.push_back(&m_IfcIShapeProfileDef_Map);
    m_refIfcIShapeProfileDefList.push_back(&m_IfcAsymmetricIShapeProfileDef_Map);
    m_refIfcImageTextureList.push_back(&m_IfcImageTexture_Map);
    m_refIfcInventoryList.push_back(&m_IfcInventory_Map);
    m_refIfcIrregularTimeSeriesList.push_back(&m_IfcIrregularTimeSeries_Map);
    m_refIfcIrregularTimeSeriesValueList.push_back(&m_IfcIrregularTimeSeriesValue_Map);
    m_refIfcJunctionBoxTypeList.push_back(&m_IfcJunctionBoxType_Map);
    m_refIfcLShapeProfileDefList.push_back(&m_IfcLShapeProfileDef_Map);
    m_refIfcLaborResourceList.push_back(&m_IfcLaborResource_Map);
    m_refIfcLampTypeList.push_back(&m_IfcLampType_Map);
    m_refIfcLibraryInformationList.push_back(&m_IfcLibraryInformation_Map);
    m_refIfcLibraryReferenceList.push_back(&m_IfcLibraryReference_Map);
    m_refIfcLightDistributionDataList.push_back(&m_IfcLightDistributionData_Map);
    m_refIfcLightFixtureTypeList.push_back(&m_IfcLightFixtureType_Map);
    m_refIfcLightIntensityDistributionList.push_back(&m_IfcLightIntensityDistribution_Map);
    m_refIfcLightSourceList.push_back(&m_IfcLightSourceAmbient_Map);
    m_refIfcLightSourceList.push_back(&m_IfcLightSourceDirectional_Map);
    m_refIfcLightSourceList.push_back(&m_IfcLightSourceGoniometric_Map);
    m_refIfcLightSourceList.push_back(&m_IfcLightSourceSpot_Map);
    m_refIfcLightSourceList.push_back(&m_IfcLightSourcePositional_Map);
    m_refIfcLightSourceAmbientList.push_back(&m_IfcLightSourceAmbient_Map);
    m_refIfcLightSourceDirectionalList.push_back(&m_IfcLightSourceDirectional_Map);
    m_refIfcLightSourceGoniometricList.push_back(&m_IfcLightSourceGoniometric_Map);
    m_refIfcLightSourcePositionalList.push_back(&m_IfcLightSourcePositional_Map);
    m_refIfcLightSourcePositionalList.push_back(&m_IfcLightSourceSpot_Map);
    m_refIfcLightSourceSpotList.push_back(&m_IfcLightSourceSpot_Map);
    m_refIfcLineList.push_back(&m_IfcLine_Map);
    m_refIfcLinearDimensionList.push_back(&m_IfcLinearDimension_Map);
    m_refIfcLocalPlacementList.push_back(&m_IfcLocalPlacement_Map);
    m_refIfcLocalTimeList.push_back(&m_IfcLocalTime_Map);
    m_refIfcLoopList.push_back(&m_IfcLoop_Map);
    m_refIfcLoopList.push_back(&m_IfcEdgeLoop_Map);
    m_refIfcLoopList.push_back(&m_IfcPolyLoop_Map);
    m_refIfcLoopList.push_back(&m_IfcVertexLoop_Map);
    m_refIfcManifoldSolidBrepList.push_back(&m_IfcFacetedBrep_Map);
    m_refIfcManifoldSolidBrepList.push_back(&m_IfcFacetedBrepWithVoids_Map);
    m_refIfcMappedItemList.push_back(&m_IfcMappedItem_Map);
    m_refIfcMaterialList.push_back(&m_IfcMaterial_Map);
    m_refIfcMaterialClassificationRelationshipList.push_back(&m_IfcMaterialClassificationRelationship_Map);
    m_refIfcMaterialDefinitionRepresentationList.push_back(&m_IfcMaterialDefinitionRepresentation_Map);
    m_refIfcMaterialLayerList.push_back(&m_IfcMaterialLayer_Map);
    m_refIfcMaterialLayerSetList.push_back(&m_IfcMaterialLayerSet_Map);
    m_refIfcMaterialLayerSetUsageList.push_back(&m_IfcMaterialLayerSetUsage_Map);
    m_refIfcMaterialListList.push_back(&m_IfcMaterialList_Map);
    m_refIfcMaterialPropertiesList.push_back(&m_IfcExtendedMaterialProperties_Map);
    m_refIfcMaterialPropertiesList.push_back(&m_IfcFuelProperties_Map);
    m_refIfcMaterialPropertiesList.push_back(&m_IfcGeneralMaterialProperties_Map);
    m_refIfcMaterialPropertiesList.push_back(&m_IfcHygroscopicMaterialProperties_Map);
    m_refIfcMaterialPropertiesList.push_back(&m_IfcMechanicalSteelMaterialProperties_Map);
    m_refIfcMaterialPropertiesList.push_back(&m_IfcMechanicalConcreteMaterialProperties_Map);
    m_refIfcMaterialPropertiesList.push_back(&m_IfcMechanicalMaterialProperties_Map);
    m_refIfcMaterialPropertiesList.push_back(&m_IfcOpticalMaterialProperties_Map);
    m_refIfcMaterialPropertiesList.push_back(&m_IfcProductsOfCombustionProperties_Map);
    m_refIfcMaterialPropertiesList.push_back(&m_IfcThermalMaterialProperties_Map);
    m_refIfcMaterialPropertiesList.push_back(&m_IfcWaterProperties_Map);
    m_refIfcMeasureWithUnitList.push_back(&m_IfcMeasureWithUnit_Map);
    m_refIfcMechanicalConcreteMaterialPropertiesList.push_back(&m_IfcMechanicalConcreteMaterialProperties_Map);
    m_refIfcMechanicalFastenerList.push_back(&m_IfcMechanicalFastener_Map);
    m_refIfcMechanicalFastenerTypeList.push_back(&m_IfcMechanicalFastenerType_Map);
    m_refIfcMechanicalMaterialPropertiesList.push_back(&m_IfcMechanicalMaterialProperties_Map);
    m_refIfcMechanicalMaterialPropertiesList.push_back(&m_IfcMechanicalSteelMaterialProperties_Map);
    m_refIfcMechanicalMaterialPropertiesList.push_back(&m_IfcMechanicalConcreteMaterialProperties_Map);
    m_refIfcMechanicalSteelMaterialPropertiesList.push_back(&m_IfcMechanicalSteelMaterialProperties_Map);
    m_refIfcMemberList.push_back(&m_IfcMember_Map);
    m_refIfcMemberTypeList.push_back(&m_IfcMemberType_Map);
    m_refIfcMetricList.push_back(&m_IfcMetric_Map);
    m_refIfcMonetaryUnitList.push_back(&m_IfcMonetaryUnit_Map);
    m_refIfcMotorConnectionTypeList.push_back(&m_IfcMotorConnectionType_Map);
    m_refIfcMoveList.push_back(&m_IfcMove_Map);
    m_refIfcNamedUnitList.push_back(&m_IfcContextDependentUnit_Map);
    m_refIfcNamedUnitList.push_back(&m_IfcConversionBasedUnit_Map);
    m_refIfcNamedUnitList.push_back(&m_IfcSIUnit_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralCurveMemberVarying_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralCurveMember_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralSurfaceMemberVarying_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralSurfaceMember_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralCurveConnection_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralPointConnection_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralSurfaceConnection_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralLinearActionVarying_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralLinearAction_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralPlanarActionVarying_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralPlanarAction_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralPointAction_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralPointReaction_Map);
    m_refIfcObjectList.push_back(&m_IfcOpeningElement_Map);
    m_refIfcObjectList.push_back(&m_IfcChamferEdgeFeature_Map);
    m_refIfcObjectList.push_back(&m_IfcRoundedEdgeFeature_Map);
    m_refIfcObjectList.push_back(&m_IfcProjectionElement_Map);
    m_refIfcObjectList.push_back(&m_IfcCovering_Map);
    m_refIfcObjectList.push_back(&m_IfcBeam_Map);
    m_refIfcObjectList.push_back(&m_IfcBuildingElementPart_Map);
    m_refIfcObjectList.push_back(&m_IfcReinforcingBar_Map);
    m_refIfcObjectList.push_back(&m_IfcReinforcingMesh_Map);
    m_refIfcObjectList.push_back(&m_IfcTendon_Map);
    m_refIfcObjectList.push_back(&m_IfcTendonAnchor_Map);
    m_refIfcObjectList.push_back(&m_IfcBuildingElementProxy_Map);
    m_refIfcObjectList.push_back(&m_IfcColumn_Map);
    m_refIfcObjectList.push_back(&m_IfcCurtainWall_Map);
    m_refIfcObjectList.push_back(&m_IfcDoor_Map);
    m_refIfcObjectList.push_back(&m_IfcFooting_Map);
    m_refIfcObjectList.push_back(&m_IfcMember_Map);
    m_refIfcObjectList.push_back(&m_IfcPile_Map);
    m_refIfcObjectList.push_back(&m_IfcPlate_Map);
    m_refIfcObjectList.push_back(&m_IfcRailing_Map);
    m_refIfcObjectList.push_back(&m_IfcRamp_Map);
    m_refIfcObjectList.push_back(&m_IfcRampFlight_Map);
    m_refIfcObjectList.push_back(&m_IfcRoof_Map);
    m_refIfcObjectList.push_back(&m_IfcSlab_Map);
    m_refIfcObjectList.push_back(&m_IfcStair_Map);
    m_refIfcObjectList.push_back(&m_IfcStairFlight_Map);
    m_refIfcObjectList.push_back(&m_IfcWallStandardCase_Map);
    m_refIfcObjectList.push_back(&m_IfcWall_Map);
    m_refIfcObjectList.push_back(&m_IfcWindow_Map);
    m_refIfcObjectList.push_back(&m_IfcDiscreteAccessory_Map);
    m_refIfcObjectList.push_back(&m_IfcMechanicalFastener_Map);
    m_refIfcObjectList.push_back(&m_IfcFastener_Map);
    m_refIfcObjectList.push_back(&m_IfcDistributionControlElement_Map);
    m_refIfcObjectList.push_back(&m_IfcEnergyConversionDevice_Map);
    m_refIfcObjectList.push_back(&m_IfcElectricDistributionPoint_Map);
    m_refIfcObjectList.push_back(&m_IfcFlowController_Map);
    m_refIfcObjectList.push_back(&m_IfcFlowFitting_Map);
    m_refIfcObjectList.push_back(&m_IfcFlowMovingDevice_Map);
    m_refIfcObjectList.push_back(&m_IfcFlowSegment_Map);
    m_refIfcObjectList.push_back(&m_IfcFlowStorageDevice_Map);
    m_refIfcObjectList.push_back(&m_IfcFlowTerminal_Map);
    m_refIfcObjectList.push_back(&m_IfcFlowTreatmentDevice_Map);
    m_refIfcObjectList.push_back(&m_IfcDistributionChamberElement_Map);
    m_refIfcObjectList.push_back(&m_IfcDistributionFlowElement_Map);
    m_refIfcObjectList.push_back(&m_IfcDistributionElement_Map);
    m_refIfcObjectList.push_back(&m_IfcElectricalElement_Map);
    m_refIfcObjectList.push_back(&m_IfcElementAssembly_Map);
    m_refIfcObjectList.push_back(&m_IfcEquipmentElement_Map);
    m_refIfcObjectList.push_back(&m_IfcFurnishingElement_Map);
    m_refIfcObjectList.push_back(&m_IfcTransportElement_Map);
    m_refIfcObjectList.push_back(&m_IfcVirtualElement_Map);
    m_refIfcObjectList.push_back(&m_IfcSpace_Map);
    m_refIfcObjectList.push_back(&m_IfcBuilding_Map);
    m_refIfcObjectList.push_back(&m_IfcBuildingStorey_Map);
    m_refIfcObjectList.push_back(&m_IfcSite_Map);
    m_refIfcObjectList.push_back(&m_IfcDistributionPort_Map);
    m_refIfcObjectList.push_back(&m_IfcAnnotation_Map);
    m_refIfcObjectList.push_back(&m_IfcGrid_Map);
    m_refIfcObjectList.push_back(&m_IfcProxy_Map);
    m_refIfcObjectList.push_back(&m_IfcAsset_Map);
    m_refIfcObjectList.push_back(&m_IfcCondition_Map);
    m_refIfcObjectList.push_back(&m_IfcInventory_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralResultGroup_Map);
    m_refIfcObjectList.push_back(&m_IfcZone_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralLoadGroup_Map);
    m_refIfcObjectList.push_back(&m_IfcElectricalCircuit_Map);
    m_refIfcObjectList.push_back(&m_IfcStructuralAnalysisModel_Map);
    m_refIfcObjectList.push_back(&m_IfcSystem_Map);
    m_refIfcObjectList.push_back(&m_IfcGroup_Map);
    m_refIfcObjectList.push_back(&m_IfcScheduleTimeControl_Map);
    m_refIfcObjectList.push_back(&m_IfcActionRequest_Map);
    m_refIfcObjectList.push_back(&m_IfcConditionCriterion_Map);
    m_refIfcObjectList.push_back(&m_IfcCostItem_Map);
    m_refIfcObjectList.push_back(&m_IfcCostSchedule_Map);
    m_refIfcObjectList.push_back(&m_IfcEquipmentStandard_Map);
    m_refIfcObjectList.push_back(&m_IfcFurnitureStandard_Map);
    m_refIfcObjectList.push_back(&m_IfcPerformanceHistory_Map);
    m_refIfcObjectList.push_back(&m_IfcPermit_Map);
    m_refIfcObjectList.push_back(&m_IfcProjectOrder_Map);
    m_refIfcObjectList.push_back(&m_IfcProjectOrderRecord_Map);
    m_refIfcObjectList.push_back(&m_IfcSpaceProgram_Map);
    m_refIfcObjectList.push_back(&m_IfcServiceLife_Map);
    m_refIfcObjectList.push_back(&m_IfcTimeSeriesSchedule_Map);
    m_refIfcObjectList.push_back(&m_IfcWorkPlan_Map);
    m_refIfcObjectList.push_back(&m_IfcWorkSchedule_Map);
    m_refIfcObjectList.push_back(&m_IfcOccupant_Map);
    m_refIfcObjectList.push_back(&m_IfcActor_Map);
    m_refIfcObjectList.push_back(&m_IfcConstructionEquipmentResource_Map);
    m_refIfcObjectList.push_back(&m_IfcConstructionMaterialResource_Map);
    m_refIfcObjectList.push_back(&m_IfcConstructionProductResource_Map);
    m_refIfcObjectList.push_back(&m_IfcCrewResource_Map);
    m_refIfcObjectList.push_back(&m_IfcLaborResource_Map);
    m_refIfcObjectList.push_back(&m_IfcSubContractResource_Map);
    m_refIfcObjectList.push_back(&m_IfcOrderAction_Map);
    m_refIfcObjectList.push_back(&m_IfcMove_Map);
    m_refIfcObjectList.push_back(&m_IfcTask_Map);
    m_refIfcObjectList.push_back(&m_IfcProcedure_Map);
    m_refIfcObjectList.push_back(&m_IfcProject_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralCurveMemberVarying_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralCurveMember_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralSurfaceMemberVarying_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralSurfaceMember_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralCurveConnection_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralPointConnection_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralSurfaceConnection_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralLinearActionVarying_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralLinearAction_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralPlanarActionVarying_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralPlanarAction_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralPointAction_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralPointReaction_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcOpeningElement_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcChamferEdgeFeature_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcRoundedEdgeFeature_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcProjectionElement_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCovering_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcBeam_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcBuildingElementPart_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcReinforcingBar_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcReinforcingMesh_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcTendon_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcTendonAnchor_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcBuildingElementProxy_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcColumn_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCurtainWall_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDoor_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFooting_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcMember_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcPile_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcPlate_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcRailing_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcRamp_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcRampFlight_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcRoof_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSlab_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStair_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStairFlight_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcWallStandardCase_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcWall_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcWindow_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDiscreteAccessory_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcMechanicalFastener_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFastener_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDistributionControlElement_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcEnergyConversionDevice_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcElectricDistributionPoint_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFlowController_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFlowFitting_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFlowMovingDevice_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFlowSegment_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFlowStorageDevice_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFlowTerminal_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFlowTreatmentDevice_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDistributionChamberElement_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDistributionFlowElement_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDistributionElement_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcElectricalElement_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcElementAssembly_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcEquipmentElement_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFurnishingElement_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcTransportElement_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcVirtualElement_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSpace_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcBuilding_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcBuildingStorey_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSite_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDistributionPort_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcAnnotation_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcGrid_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcProxy_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcAsset_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCondition_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcInventory_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralResultGroup_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcZone_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralLoadGroup_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcElectricalCircuit_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStructuralAnalysisModel_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSystem_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcGroup_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcScheduleTimeControl_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcActionRequest_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcConditionCriterion_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCostItem_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCostSchedule_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcEquipmentStandard_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFurnitureStandard_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcPerformanceHistory_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcPermit_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcProjectOrder_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcProjectOrderRecord_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSpaceProgram_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcServiceLife_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcTimeSeriesSchedule_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcWorkPlan_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcWorkSchedule_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcOccupant_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcActor_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcConstructionEquipmentResource_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcConstructionMaterialResource_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcConstructionProductResource_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCrewResource_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcLaborResource_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSubContractResource_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcOrderAction_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcMove_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcTask_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcProcedure_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcProject_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDoorStyle_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcWindowStyle_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcAirTerminalBoxType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDamperType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcElectricTimeControlType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFlowMeterType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcProtectiveDeviceType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSwitchingDeviceType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcValveType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcAirTerminalType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcElectricApplianceType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcElectricHeaterType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFireSuppressionTerminalType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcGasTerminalType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcLampType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcLightFixtureType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcOutletType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSanitaryTerminalType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStackTerminalType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcWasteTerminalType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcAirToAirHeatRecoveryType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcBoilerType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcChillerType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCoilType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCondenserType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCooledBeamType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCoolingTowerType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcElectricGeneratorType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcElectricMotorType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcEvaporativeCoolerType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcEvaporatorType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcHeatExchangerType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcHumidifierType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcMotorConnectionType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSpaceHeaterType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcTransformerType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcTubeBundleType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcUnitaryEquipmentType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCableCarrierFittingType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDuctFittingType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcJunctionBoxType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcPipeFittingType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCableCarrierSegmentType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCableSegmentType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDuctSegmentType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcPipeSegmentType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCompressorType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFanType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcPumpType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDistributionChamberElementType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDuctSilencerType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFilterType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcElectricFlowStorageDeviceType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcTankType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcActuatorType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcAlarmType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcControllerType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFlowInstrumentType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSensorType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDistributionElementType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcBeamType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcBuildingElementProxyType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcColumnType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCoveringType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcCurtainWallType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcMemberType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcPlateType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcRailingType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcRampFlightType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSlabType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcStairFlightType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcWallType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcVibrationIsolatorType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcDiscreteAccessoryType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcMechanicalFastenerType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFastenerType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFurnitureType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSystemFurnitureElementType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcFurnishingElementType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcSpaceType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcTransportElementType_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcTypeProduct_Map);
    m_refIfcObjectDefinitionList.push_back(&m_IfcTypeObject_Map);
    m_refIfcObjectPlacementList.push_back(&m_IfcLocalPlacement_Map);
    m_refIfcObjectPlacementList.push_back(&m_IfcGridPlacement_Map);
    m_refIfcObjectiveList.push_back(&m_IfcObjective_Map);
    m_refIfcOccupantList.push_back(&m_IfcOccupant_Map);
    m_refIfcOffsetCurve2DList.push_back(&m_IfcOffsetCurve2D_Map);
    m_refIfcOffsetCurve3DList.push_back(&m_IfcOffsetCurve3D_Map);
    m_refIfcOneDirectionRepeatFactorList.push_back(&m_IfcOneDirectionRepeatFactor_Map);
    m_refIfcOneDirectionRepeatFactorList.push_back(&m_IfcTwoDirectionRepeatFactor_Map);
    m_refIfcOpenShellList.push_back(&m_IfcOpenShell_Map);
    m_refIfcOpeningElementList.push_back(&m_IfcOpeningElement_Map);
    m_refIfcOpticalMaterialPropertiesList.push_back(&m_IfcOpticalMaterialProperties_Map);
    m_refIfcOrderActionList.push_back(&m_IfcOrderAction_Map);
    m_refIfcOrganizationList.push_back(&m_IfcOrganization_Map);
    m_refIfcOrganizationRelationshipList.push_back(&m_IfcOrganizationRelationship_Map);
    m_refIfcOrientedEdgeList.push_back(&m_IfcOrientedEdge_Map);
    m_refIfcOutletTypeList.push_back(&m_IfcOutletType_Map);
    m_refIfcOwnerHistoryList.push_back(&m_IfcOwnerHistory_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcAsymmetricIShapeProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcIShapeProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcCShapeProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcCircleHollowProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcCircleProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcCraneRailAShapeProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcCraneRailFShapeProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcEllipseProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcLShapeProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcRoundedRectangleProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcRectangleHollowProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcRectangleProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcTShapeProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcTrapeziumProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcUShapeProfileDef_Map);
    m_refIfcParameterizedProfileDefList.push_back(&m_IfcZShapeProfileDef_Map);
    m_refIfcPathList.push_back(&m_IfcPath_Map);
    m_refIfcPerformanceHistoryList.push_back(&m_IfcPerformanceHistory_Map);
    m_refIfcPermeableCoveringPropertiesList.push_back(&m_IfcPermeableCoveringProperties_Map);
    m_refIfcPermitList.push_back(&m_IfcPermit_Map);
    m_refIfcPersonList.push_back(&m_IfcPerson_Map);
    m_refIfcPersonAndOrganizationList.push_back(&m_IfcPersonAndOrganization_Map);
    m_refIfcPhysicalComplexQuantityList.push_back(&m_IfcPhysicalComplexQuantity_Map);
    m_refIfcPhysicalQuantityList.push_back(&m_IfcPhysicalComplexQuantity_Map);
    m_refIfcPhysicalQuantityList.push_back(&m_IfcQuantityArea_Map);
    m_refIfcPhysicalQuantityList.push_back(&m_IfcQuantityCount_Map);
    m_refIfcPhysicalQuantityList.push_back(&m_IfcQuantityLength_Map);
    m_refIfcPhysicalQuantityList.push_back(&m_IfcQuantityTime_Map);
    m_refIfcPhysicalQuantityList.push_back(&m_IfcQuantityVolume_Map);
    m_refIfcPhysicalQuantityList.push_back(&m_IfcQuantityWeight_Map);
    m_refIfcPhysicalSimpleQuantityList.push_back(&m_IfcQuantityArea_Map);
    m_refIfcPhysicalSimpleQuantityList.push_back(&m_IfcQuantityCount_Map);
    m_refIfcPhysicalSimpleQuantityList.push_back(&m_IfcQuantityLength_Map);
    m_refIfcPhysicalSimpleQuantityList.push_back(&m_IfcQuantityTime_Map);
    m_refIfcPhysicalSimpleQuantityList.push_back(&m_IfcQuantityVolume_Map);
    m_refIfcPhysicalSimpleQuantityList.push_back(&m_IfcQuantityWeight_Map);
    m_refIfcPileList.push_back(&m_IfcPile_Map);
    m_refIfcPipeFittingTypeList.push_back(&m_IfcPipeFittingType_Map);
    m_refIfcPipeSegmentTypeList.push_back(&m_IfcPipeSegmentType_Map);
    m_refIfcPixelTextureList.push_back(&m_IfcPixelTexture_Map);
    m_refIfcPlacementList.push_back(&m_IfcAxis2Placement2D_Map);
    m_refIfcPlacementList.push_back(&m_IfcAxis2Placement3D_Map);
    m_refIfcPlacementList.push_back(&m_IfcAxis1Placement_Map);
    m_refIfcPlanarBoxList.push_back(&m_IfcPlanarBox_Map);
    m_refIfcPlanarExtentList.push_back(&m_IfcPlanarExtent_Map);
    m_refIfcPlanarExtentList.push_back(&m_IfcPlanarBox_Map);
    m_refIfcPlaneList.push_back(&m_IfcPlane_Map);
    m_refIfcPlateList.push_back(&m_IfcPlate_Map);
    m_refIfcPlateTypeList.push_back(&m_IfcPlateType_Map);
    m_refIfcPointList.push_back(&m_IfcCartesianPoint_Map);
    m_refIfcPointList.push_back(&m_IfcPointOnCurve_Map);
    m_refIfcPointList.push_back(&m_IfcPointOnSurface_Map);
    m_refIfcPointOnCurveList.push_back(&m_IfcPointOnCurve_Map);
    m_refIfcPointOnSurfaceList.push_back(&m_IfcPointOnSurface_Map);
    m_refIfcPolyLoopList.push_back(&m_IfcPolyLoop_Map);
    m_refIfcPolygonalBoundedHalfSpaceList.push_back(&m_IfcPolygonalBoundedHalfSpace_Map);
    m_refIfcPolylineList.push_back(&m_IfcPolyline_Map);
    m_refIfcPortList.push_back(&m_IfcDistributionPort_Map);
    m_refIfcPostalAddressList.push_back(&m_IfcPostalAddress_Map);
    m_refIfcPreDefinedColourList.push_back(&m_IfcDraughtingPreDefinedColour_Map);
    m_refIfcPreDefinedCurveFontList.push_back(&m_IfcDraughtingPreDefinedCurveFont_Map);
    m_refIfcPreDefinedDimensionSymbolList.push_back(&m_IfcPreDefinedDimensionSymbol_Map);
    m_refIfcPreDefinedItemList.push_back(&m_IfcDraughtingPreDefinedCurveFont_Map);
    m_refIfcPreDefinedItemList.push_back(&m_IfcDraughtingPreDefinedColour_Map);
    m_refIfcPreDefinedItemList.push_back(&m_IfcDraughtingPreDefinedTextFont_Map);
    m_refIfcPreDefinedItemList.push_back(&m_IfcTextStyleFontModel_Map);
    m_refIfcPreDefinedItemList.push_back(&m_IfcPreDefinedDimensionSymbol_Map);
    m_refIfcPreDefinedItemList.push_back(&m_IfcPreDefinedPointMarkerSymbol_Map);
    m_refIfcPreDefinedItemList.push_back(&m_IfcPreDefinedTerminatorSymbol_Map);
    m_refIfcPreDefinedPointMarkerSymbolList.push_back(&m_IfcPreDefinedPointMarkerSymbol_Map);
    m_refIfcPreDefinedSymbolList.push_back(&m_IfcPreDefinedDimensionSymbol_Map);
    m_refIfcPreDefinedSymbolList.push_back(&m_IfcPreDefinedPointMarkerSymbol_Map);
    m_refIfcPreDefinedSymbolList.push_back(&m_IfcPreDefinedTerminatorSymbol_Map);
    m_refIfcPreDefinedTerminatorSymbolList.push_back(&m_IfcPreDefinedTerminatorSymbol_Map);
    m_refIfcPreDefinedTextFontList.push_back(&m_IfcDraughtingPreDefinedTextFont_Map);
    m_refIfcPreDefinedTextFontList.push_back(&m_IfcTextStyleFontModel_Map);
    m_refIfcPresentationLayerAssignmentList.push_back(&m_IfcPresentationLayerAssignment_Map);
    m_refIfcPresentationLayerAssignmentList.push_back(&m_IfcPresentationLayerWithStyle_Map);
    m_refIfcPresentationLayerWithStyleList.push_back(&m_IfcPresentationLayerWithStyle_Map);
    m_refIfcPresentationStyleList.push_back(&m_IfcCurveStyle_Map);
    m_refIfcPresentationStyleList.push_back(&m_IfcSymbolStyle_Map);
    m_refIfcPresentationStyleList.push_back(&m_IfcFillAreaStyle_Map);
    m_refIfcPresentationStyleList.push_back(&m_IfcTextStyle_Map);
    m_refIfcPresentationStyleList.push_back(&m_IfcSurfaceStyle_Map);
    m_refIfcPresentationStyleAssignmentList.push_back(&m_IfcPresentationStyleAssignment_Map);
    m_refIfcProcedureList.push_back(&m_IfcProcedure_Map);
    m_refIfcProcessList.push_back(&m_IfcOrderAction_Map);
    m_refIfcProcessList.push_back(&m_IfcMove_Map);
    m_refIfcProcessList.push_back(&m_IfcTask_Map);
    m_refIfcProcessList.push_back(&m_IfcProcedure_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralCurveMemberVarying_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralCurveMember_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralSurfaceMemberVarying_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralSurfaceMember_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralCurveConnection_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralPointConnection_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralSurfaceConnection_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralLinearActionVarying_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralLinearAction_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralPlanarActionVarying_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralPlanarAction_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralPointAction_Map);
    m_refIfcProductList.push_back(&m_IfcStructuralPointReaction_Map);
    m_refIfcProductList.push_back(&m_IfcOpeningElement_Map);
    m_refIfcProductList.push_back(&m_IfcChamferEdgeFeature_Map);
    m_refIfcProductList.push_back(&m_IfcRoundedEdgeFeature_Map);
    m_refIfcProductList.push_back(&m_IfcProjectionElement_Map);
    m_refIfcProductList.push_back(&m_IfcCovering_Map);
    m_refIfcProductList.push_back(&m_IfcBeam_Map);
    m_refIfcProductList.push_back(&m_IfcBuildingElementPart_Map);
    m_refIfcProductList.push_back(&m_IfcReinforcingBar_Map);
    m_refIfcProductList.push_back(&m_IfcReinforcingMesh_Map);
    m_refIfcProductList.push_back(&m_IfcTendon_Map);
    m_refIfcProductList.push_back(&m_IfcTendonAnchor_Map);
    m_refIfcProductList.push_back(&m_IfcBuildingElementProxy_Map);
    m_refIfcProductList.push_back(&m_IfcColumn_Map);
    m_refIfcProductList.push_back(&m_IfcCurtainWall_Map);
    m_refIfcProductList.push_back(&m_IfcDoor_Map);
    m_refIfcProductList.push_back(&m_IfcFooting_Map);
    m_refIfcProductList.push_back(&m_IfcMember_Map);
    m_refIfcProductList.push_back(&m_IfcPile_Map);
    m_refIfcProductList.push_back(&m_IfcPlate_Map);
    m_refIfcProductList.push_back(&m_IfcRailing_Map);
    m_refIfcProductList.push_back(&m_IfcRamp_Map);
    m_refIfcProductList.push_back(&m_IfcRampFlight_Map);
    m_refIfcProductList.push_back(&m_IfcRoof_Map);
    m_refIfcProductList.push_back(&m_IfcSlab_Map);
    m_refIfcProductList.push_back(&m_IfcStair_Map);
    m_refIfcProductList.push_back(&m_IfcStairFlight_Map);
    m_refIfcProductList.push_back(&m_IfcWallStandardCase_Map);
    m_refIfcProductList.push_back(&m_IfcWall_Map);
    m_refIfcProductList.push_back(&m_IfcWindow_Map);
    m_refIfcProductList.push_back(&m_IfcDiscreteAccessory_Map);
    m_refIfcProductList.push_back(&m_IfcMechanicalFastener_Map);
    m_refIfcProductList.push_back(&m_IfcFastener_Map);
    m_refIfcProductList.push_back(&m_IfcDistributionControlElement_Map);
    m_refIfcProductList.push_back(&m_IfcEnergyConversionDevice_Map);
    m_refIfcProductList.push_back(&m_IfcElectricDistributionPoint_Map);
    m_refIfcProductList.push_back(&m_IfcFlowController_Map);
    m_refIfcProductList.push_back(&m_IfcFlowFitting_Map);
    m_refIfcProductList.push_back(&m_IfcFlowMovingDevice_Map);
    m_refIfcProductList.push_back(&m_IfcFlowSegment_Map);
    m_refIfcProductList.push_back(&m_IfcFlowStorageDevice_Map);
    m_refIfcProductList.push_back(&m_IfcFlowTerminal_Map);
    m_refIfcProductList.push_back(&m_IfcFlowTreatmentDevice_Map);
    m_refIfcProductList.push_back(&m_IfcDistributionChamberElement_Map);
    m_refIfcProductList.push_back(&m_IfcDistributionFlowElement_Map);
    m_refIfcProductList.push_back(&m_IfcDistributionElement_Map);
    m_refIfcProductList.push_back(&m_IfcElectricalElement_Map);
    m_refIfcProductList.push_back(&m_IfcElementAssembly_Map);
    m_refIfcProductList.push_back(&m_IfcEquipmentElement_Map);
    m_refIfcProductList.push_back(&m_IfcFurnishingElement_Map);
    m_refIfcProductList.push_back(&m_IfcTransportElement_Map);
    m_refIfcProductList.push_back(&m_IfcVirtualElement_Map);
    m_refIfcProductList.push_back(&m_IfcSpace_Map);
    m_refIfcProductList.push_back(&m_IfcBuilding_Map);
    m_refIfcProductList.push_back(&m_IfcBuildingStorey_Map);
    m_refIfcProductList.push_back(&m_IfcSite_Map);
    m_refIfcProductList.push_back(&m_IfcDistributionPort_Map);
    m_refIfcProductList.push_back(&m_IfcAnnotation_Map);
    m_refIfcProductList.push_back(&m_IfcGrid_Map);
    m_refIfcProductList.push_back(&m_IfcProxy_Map);
    m_refIfcProductDefinitionShapeList.push_back(&m_IfcProductDefinitionShape_Map);
    m_refIfcProductRepresentationList.push_back(&m_IfcProductRepresentation_Map);
    m_refIfcProductRepresentationList.push_back(&m_IfcMaterialDefinitionRepresentation_Map);
    m_refIfcProductRepresentationList.push_back(&m_IfcProductDefinitionShape_Map);
    m_refIfcProductsOfCombustionPropertiesList.push_back(&m_IfcProductsOfCombustionProperties_Map);
    m_refIfcProfileDefList.push_back(&m_IfcArbitraryProfileDefWithVoids_Map);
    m_refIfcProfileDefList.push_back(&m_IfcArbitraryClosedProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcCenterLineProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcArbitraryOpenProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcAsymmetricIShapeProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcIShapeProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcCShapeProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcCircleHollowProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcCircleProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcCraneRailAShapeProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcCraneRailFShapeProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcEllipseProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcLShapeProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcRoundedRectangleProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcRectangleHollowProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcRectangleProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcTShapeProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcTrapeziumProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcUShapeProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcZShapeProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcCompositeProfileDef_Map);
    m_refIfcProfileDefList.push_back(&m_IfcDerivedProfileDef_Map);
    m_refIfcProfilePropertiesList.push_back(&m_IfcStructuralSteelProfileProperties_Map);
    m_refIfcProfilePropertiesList.push_back(&m_IfcStructuralProfileProperties_Map);
    m_refIfcProfilePropertiesList.push_back(&m_IfcGeneralProfileProperties_Map);
    m_refIfcProfilePropertiesList.push_back(&m_IfcRibPlateProfileProperties_Map);
    m_refIfcProjectList.push_back(&m_IfcProject_Map);
    m_refIfcProjectOrderList.push_back(&m_IfcProjectOrder_Map);
    m_refIfcProjectOrderRecordList.push_back(&m_IfcProjectOrderRecord_Map);
    m_refIfcProjectionCurveList.push_back(&m_IfcProjectionCurve_Map);
    m_refIfcProjectionElementList.push_back(&m_IfcProjectionElement_Map);
    m_refIfcPropertyList.push_back(&m_IfcComplexProperty_Map);
    m_refIfcPropertyList.push_back(&m_IfcPropertyBoundedValue_Map);
    m_refIfcPropertyList.push_back(&m_IfcPropertyEnumeratedValue_Map);
    m_refIfcPropertyList.push_back(&m_IfcPropertyListValue_Map);
    m_refIfcPropertyList.push_back(&m_IfcPropertyReferenceValue_Map);
    m_refIfcPropertyList.push_back(&m_IfcPropertySingleValue_Map);
    m_refIfcPropertyList.push_back(&m_IfcPropertyTableValue_Map);
    m_refIfcPropertyBoundedValueList.push_back(&m_IfcPropertyBoundedValue_Map);
    m_refIfcPropertyConstraintRelationshipList.push_back(&m_IfcPropertyConstraintRelationship_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcDoorLiningProperties_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcDoorPanelProperties_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcElectricalBaseProperties_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcEnergyProperties_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcElementQuantity_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcFluidFlowProperties_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcPermeableCoveringProperties_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcPropertySet_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcReinforcementDefinitionProperties_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcServiceLifeFactor_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcSoundProperties_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcSoundValue_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcSpaceThermalLoadProperties_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcWindowLiningProperties_Map);
    m_refIfcPropertyDefinitionList.push_back(&m_IfcWindowPanelProperties_Map);
    m_refIfcPropertyDependencyRelationshipList.push_back(&m_IfcPropertyDependencyRelationship_Map);
    m_refIfcPropertyEnumeratedValueList.push_back(&m_IfcPropertyEnumeratedValue_Map);
    m_refIfcPropertyEnumerationList.push_back(&m_IfcPropertyEnumeration_Map);
    m_refIfcPropertyListValueList.push_back(&m_IfcPropertyListValue_Map);
    m_refIfcPropertyReferenceValueList.push_back(&m_IfcPropertyReferenceValue_Map);
    m_refIfcPropertySetList.push_back(&m_IfcPropertySet_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcDoorLiningProperties_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcDoorPanelProperties_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcElectricalBaseProperties_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcEnergyProperties_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcElementQuantity_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcFluidFlowProperties_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcPermeableCoveringProperties_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcPropertySet_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcReinforcementDefinitionProperties_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcServiceLifeFactor_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcSoundProperties_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcSoundValue_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcSpaceThermalLoadProperties_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcWindowLiningProperties_Map);
    m_refIfcPropertySetDefinitionList.push_back(&m_IfcWindowPanelProperties_Map);
    m_refIfcPropertySingleValueList.push_back(&m_IfcPropertySingleValue_Map);
    m_refIfcPropertyTableValueList.push_back(&m_IfcPropertyTableValue_Map);
    m_refIfcProtectiveDeviceTypeList.push_back(&m_IfcProtectiveDeviceType_Map);
    m_refIfcProxyList.push_back(&m_IfcProxy_Map);
    m_refIfcPumpTypeList.push_back(&m_IfcPumpType_Map);
    m_refIfcQuantityAreaList.push_back(&m_IfcQuantityArea_Map);
    m_refIfcQuantityCountList.push_back(&m_IfcQuantityCount_Map);
    m_refIfcQuantityLengthList.push_back(&m_IfcQuantityLength_Map);
    m_refIfcQuantityTimeList.push_back(&m_IfcQuantityTime_Map);
    m_refIfcQuantityVolumeList.push_back(&m_IfcQuantityVolume_Map);
    m_refIfcQuantityWeightList.push_back(&m_IfcQuantityWeight_Map);
    m_refIfcRadiusDimensionList.push_back(&m_IfcRadiusDimension_Map);
    m_refIfcRailingList.push_back(&m_IfcRailing_Map);
    m_refIfcRailingTypeList.push_back(&m_IfcRailingType_Map);
    m_refIfcRampList.push_back(&m_IfcRamp_Map);
    m_refIfcRampFlightList.push_back(&m_IfcRampFlight_Map);
    m_refIfcRampFlightTypeList.push_back(&m_IfcRampFlightType_Map);
    m_refIfcRationalBezierCurveList.push_back(&m_IfcRationalBezierCurve_Map);
    m_refIfcRectangleHollowProfileDefList.push_back(&m_IfcRectangleHollowProfileDef_Map);
    m_refIfcRectangleProfileDefList.push_back(&m_IfcRectangleProfileDef_Map);
    m_refIfcRectangleProfileDefList.push_back(&m_IfcRoundedRectangleProfileDef_Map);
    m_refIfcRectangleProfileDefList.push_back(&m_IfcRectangleHollowProfileDef_Map);
    m_refIfcRectangularPyramidList.push_back(&m_IfcRectangularPyramid_Map);
    m_refIfcRectangularTrimmedSurfaceList.push_back(&m_IfcRectangularTrimmedSurface_Map);
    m_refIfcReferencesValueDocumentList.push_back(&m_IfcReferencesValueDocument_Map);
    m_refIfcRegularTimeSeriesList.push_back(&m_IfcRegularTimeSeries_Map);
    m_refIfcReinforcementBarPropertiesList.push_back(&m_IfcReinforcementBarProperties_Map);
    m_refIfcReinforcementDefinitionPropertiesList.push_back(&m_IfcReinforcementDefinitionProperties_Map);
    m_refIfcReinforcingBarList.push_back(&m_IfcReinforcingBar_Map);
    m_refIfcReinforcingElementList.push_back(&m_IfcReinforcingBar_Map);
    m_refIfcReinforcingElementList.push_back(&m_IfcReinforcingMesh_Map);
    m_refIfcReinforcingElementList.push_back(&m_IfcTendon_Map);
    m_refIfcReinforcingElementList.push_back(&m_IfcTendonAnchor_Map);
    m_refIfcReinforcingMeshList.push_back(&m_IfcReinforcingMesh_Map);
    m_refIfcRelAggregatesList.push_back(&m_IfcRelAggregates_Map);
    m_refIfcRelAssignsList.push_back(&m_IfcRelAssignsToProduct_Map);
    m_refIfcRelAssignsList.push_back(&m_IfcRelAssignsToGroup_Map);
    m_refIfcRelAssignsList.push_back(&m_IfcRelAssignsTasks_Map);
    m_refIfcRelAssignsList.push_back(&m_IfcRelAssignsToProjectOrder_Map);
    m_refIfcRelAssignsList.push_back(&m_IfcRelSchedulesCostItems_Map);
    m_refIfcRelAssignsList.push_back(&m_IfcRelAssignsToControl_Map);
    m_refIfcRelAssignsList.push_back(&m_IfcRelOccupiesSpaces_Map);
    m_refIfcRelAssignsList.push_back(&m_IfcRelAssignsToActor_Map);
    m_refIfcRelAssignsList.push_back(&m_IfcRelAssignsToResource_Map);
    m_refIfcRelAssignsList.push_back(&m_IfcRelAssignsToProcess_Map);
    m_refIfcRelAssignsTasksList.push_back(&m_IfcRelAssignsTasks_Map);
    m_refIfcRelAssignsToActorList.push_back(&m_IfcRelAssignsToActor_Map);
    m_refIfcRelAssignsToActorList.push_back(&m_IfcRelOccupiesSpaces_Map);
    m_refIfcRelAssignsToControlList.push_back(&m_IfcRelAssignsToControl_Map);
    m_refIfcRelAssignsToControlList.push_back(&m_IfcRelAssignsTasks_Map);
    m_refIfcRelAssignsToControlList.push_back(&m_IfcRelAssignsToProjectOrder_Map);
    m_refIfcRelAssignsToControlList.push_back(&m_IfcRelSchedulesCostItems_Map);
    m_refIfcRelAssignsToGroupList.push_back(&m_IfcRelAssignsToGroup_Map);
    m_refIfcRelAssignsToProcessList.push_back(&m_IfcRelAssignsToProcess_Map);
    m_refIfcRelAssignsToProductList.push_back(&m_IfcRelAssignsToProduct_Map);
    m_refIfcRelAssignsToProjectOrderList.push_back(&m_IfcRelAssignsToProjectOrder_Map);
    m_refIfcRelAssignsToResourceList.push_back(&m_IfcRelAssignsToResource_Map);
    m_refIfcRelAssociatesList.push_back(&m_IfcRelAssociates_Map);
    m_refIfcRelAssociatesList.push_back(&m_IfcRelAssociatesAppliedValue_Map);
    m_refIfcRelAssociatesList.push_back(&m_IfcRelAssociatesApproval_Map);
    m_refIfcRelAssociatesList.push_back(&m_IfcRelAssociatesClassification_Map);
    m_refIfcRelAssociatesList.push_back(&m_IfcRelAssociatesConstraint_Map);
    m_refIfcRelAssociatesList.push_back(&m_IfcRelAssociatesDocument_Map);
    m_refIfcRelAssociatesList.push_back(&m_IfcRelAssociatesLibrary_Map);
    m_refIfcRelAssociatesList.push_back(&m_IfcRelAssociatesMaterial_Map);
    m_refIfcRelAssociatesList.push_back(&m_IfcRelAssociatesProfileProperties_Map);
    m_refIfcRelAssociatesAppliedValueList.push_back(&m_IfcRelAssociatesAppliedValue_Map);
    m_refIfcRelAssociatesApprovalList.push_back(&m_IfcRelAssociatesApproval_Map);
    m_refIfcRelAssociatesClassificationList.push_back(&m_IfcRelAssociatesClassification_Map);
    m_refIfcRelAssociatesConstraintList.push_back(&m_IfcRelAssociatesConstraint_Map);
    m_refIfcRelAssociatesDocumentList.push_back(&m_IfcRelAssociatesDocument_Map);
    m_refIfcRelAssociatesLibraryList.push_back(&m_IfcRelAssociatesLibrary_Map);
    m_refIfcRelAssociatesMaterialList.push_back(&m_IfcRelAssociatesMaterial_Map);
    m_refIfcRelAssociatesProfilePropertiesList.push_back(&m_IfcRelAssociatesProfileProperties_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelConnectsStructuralActivity_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelConnectsStructuralElement_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelConnectsWithEccentricity_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelConnectsStructuralMember_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelFillsElement_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelVoidsElement_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelConnectsPathElements_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelConnectsWithRealizingElements_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelConnectsElements_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelCoversBldgElements_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelCoversSpaces_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelReferencedInSpatialStructure_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelServicesBuildings_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelContainedInSpatialStructure_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelSpaceBoundary_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelProjectsElement_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelConnectsPortToElement_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelConnectsPorts_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelFlowControlElements_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelSequence_Map);
    m_refIfcRelConnectsList.push_back(&m_IfcRelInteractionRequirements_Map);
    m_refIfcRelConnectsElementsList.push_back(&m_IfcRelConnectsElements_Map);
    m_refIfcRelConnectsElementsList.push_back(&m_IfcRelConnectsPathElements_Map);
    m_refIfcRelConnectsElementsList.push_back(&m_IfcRelConnectsWithRealizingElements_Map);
    m_refIfcRelConnectsPathElementsList.push_back(&m_IfcRelConnectsPathElements_Map);
    m_refIfcRelConnectsPortToElementList.push_back(&m_IfcRelConnectsPortToElement_Map);
    m_refIfcRelConnectsPortsList.push_back(&m_IfcRelConnectsPorts_Map);
    m_refIfcRelConnectsStructuralActivityList.push_back(&m_IfcRelConnectsStructuralActivity_Map);
    m_refIfcRelConnectsStructuralElementList.push_back(&m_IfcRelConnectsStructuralElement_Map);
    m_refIfcRelConnectsStructuralMemberList.push_back(&m_IfcRelConnectsStructuralMember_Map);
    m_refIfcRelConnectsStructuralMemberList.push_back(&m_IfcRelConnectsWithEccentricity_Map);
    m_refIfcRelConnectsWithEccentricityList.push_back(&m_IfcRelConnectsWithEccentricity_Map);
    m_refIfcRelConnectsWithRealizingElementsList.push_back(&m_IfcRelConnectsWithRealizingElements_Map);
    m_refIfcRelContainedInSpatialStructureList.push_back(&m_IfcRelContainedInSpatialStructure_Map);
    m_refIfcRelCoversBldgElementsList.push_back(&m_IfcRelCoversBldgElements_Map);
    m_refIfcRelCoversSpacesList.push_back(&m_IfcRelCoversSpaces_Map);
    m_refIfcRelDecomposesList.push_back(&m_IfcRelAggregates_Map);
    m_refIfcRelDecomposesList.push_back(&m_IfcRelNests_Map);
    m_refIfcRelDefinesList.push_back(&m_IfcRelOverridesProperties_Map);
    m_refIfcRelDefinesList.push_back(&m_IfcRelDefinesByProperties_Map);
    m_refIfcRelDefinesList.push_back(&m_IfcRelDefinesByType_Map);
    m_refIfcRelDefinesByPropertiesList.push_back(&m_IfcRelDefinesByProperties_Map);
    m_refIfcRelDefinesByPropertiesList.push_back(&m_IfcRelOverridesProperties_Map);
    m_refIfcRelDefinesByTypeList.push_back(&m_IfcRelDefinesByType_Map);
    m_refIfcRelFillsElementList.push_back(&m_IfcRelFillsElement_Map);
    m_refIfcRelFlowControlElementsList.push_back(&m_IfcRelFlowControlElements_Map);
    m_refIfcRelInteractionRequirementsList.push_back(&m_IfcRelInteractionRequirements_Map);
    m_refIfcRelNestsList.push_back(&m_IfcRelNests_Map);
    m_refIfcRelOccupiesSpacesList.push_back(&m_IfcRelOccupiesSpaces_Map);
    m_refIfcRelOverridesPropertiesList.push_back(&m_IfcRelOverridesProperties_Map);
    m_refIfcRelProjectsElementList.push_back(&m_IfcRelProjectsElement_Map);
    m_refIfcRelReferencedInSpatialStructureList.push_back(&m_IfcRelReferencedInSpatialStructure_Map);
    m_refIfcRelSchedulesCostItemsList.push_back(&m_IfcRelSchedulesCostItems_Map);
    m_refIfcRelSequenceList.push_back(&m_IfcRelSequence_Map);
    m_refIfcRelServicesBuildingsList.push_back(&m_IfcRelServicesBuildings_Map);
    m_refIfcRelSpaceBoundaryList.push_back(&m_IfcRelSpaceBoundary_Map);
    m_refIfcRelVoidsElementList.push_back(&m_IfcRelVoidsElement_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssignsToProduct_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssignsToGroup_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssignsTasks_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssignsToProjectOrder_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelSchedulesCostItems_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssignsToControl_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelOccupiesSpaces_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssignsToActor_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssignsToResource_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssignsToProcess_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAggregates_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelNests_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssociatesAppliedValue_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssociatesApproval_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssociatesClassification_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssociatesConstraint_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssociatesDocument_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssociatesLibrary_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssociatesMaterial_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssociatesProfileProperties_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelAssociates_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelOverridesProperties_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelDefinesByProperties_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelDefinesByType_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelConnectsStructuralActivity_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelConnectsStructuralElement_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelConnectsWithEccentricity_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelConnectsStructuralMember_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelFillsElement_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelVoidsElement_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelConnectsPathElements_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelConnectsWithRealizingElements_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelConnectsElements_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelCoversBldgElements_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelCoversSpaces_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelReferencedInSpatialStructure_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelServicesBuildings_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelContainedInSpatialStructure_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelSpaceBoundary_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelProjectsElement_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelConnectsPortToElement_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelConnectsPorts_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelFlowControlElements_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelSequence_Map);
    m_refIfcRelationshipList.push_back(&m_IfcRelInteractionRequirements_Map);
    m_refIfcRelaxationList.push_back(&m_IfcRelaxation_Map);
    m_refIfcRepresentationList.push_back(&m_IfcRepresentation_Map);
    m_refIfcRepresentationList.push_back(&m_IfcShapeRepresentation_Map);
    m_refIfcRepresentationList.push_back(&m_IfcTopologyRepresentation_Map);
    m_refIfcRepresentationList.push_back(&m_IfcStyledRepresentation_Map);
    m_refIfcRepresentationContextList.push_back(&m_IfcRepresentationContext_Map);
    m_refIfcRepresentationContextList.push_back(&m_IfcGeometricRepresentationSubContext_Map);
    m_refIfcRepresentationContextList.push_back(&m_IfcGeometricRepresentationContext_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcDimensionCurve_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcProjectionCurve_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcAnnotationCurveOccurrence_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcDimensionCurveTerminator_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcTerminatorSymbol_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcAnnotationSymbolOccurrence_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcAnnotationTextOccurrence_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcAnnotationFillAreaOccurrence_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcAnnotationSurfaceOccurrence_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcStyledItem_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcMappedItem_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcFillAreaStyleHatching_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcVector_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcDirection_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcTwoDirectionRepeatFactor_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcOneDirectionRepeatFactor_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcCartesianPoint_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcPointOnCurve_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcPointOnSurface_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcFillAreaStyleTiles_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcFillAreaStyleTileSymbolWithStyle_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcCartesianTransformationOperator2DnonUniform_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcCartesianTransformationOperator2D_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcCartesianTransformationOperator3DnonUniform_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcCartesianTransformationOperator3D_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcAxis2Placement2D_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcAxis2Placement3D_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcAxis1Placement_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcCsgSolid_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcExtrudedAreaSolid_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcRevolvedAreaSolid_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcSurfaceCurveSweptAreaSolid_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcFacetedBrep_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcFacetedBrepWithVoids_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcSweptDiskSolid_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcBoundingBox_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcLine_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcCircle_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcEllipse_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcPolyline_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcTrimmedCurve_Map);
    m_refIfcRepresentationItemList.push_back(&m_Ifc2DCompositeCurve_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcCompositeCurve_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcRationalBezierCurve_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcBezierCurve_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcOffsetCurve2D_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcOffsetCurve3D_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcCompositeCurveSegment_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcBoxedHalfSpace_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcPolygonalBoundedHalfSpace_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcHalfSpaceSolid_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcPlane_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcCurveBoundedPlane_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcRectangularTrimmedSurface_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcBoundedSurface_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcSurfaceOfLinearExtrusion_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcSurfaceOfRevolution_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcBooleanClippingResult_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcBooleanResult_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcBlock_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcRectangularPyramid_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcRightCircularCone_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcRightCircularCylinder_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcSphere_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcFaceBasedSurfaceModel_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcStructuredDimensionCallout_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcDiameterDimension_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcLinearDimension_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcRadiusDimension_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcAngularDimension_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcDimensionCurveDirectedCallout_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcDraughtingCallout_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcAnnotationFillArea_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcAnnotationSurface_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcDefinedSymbol_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcGeometricCurveSet_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcGeometricSet_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcLightSourceAmbient_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcLightSourceDirectional_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcLightSourceGoniometric_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcLightSourceSpot_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcLightSourcePositional_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcPlanarBox_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcPlanarExtent_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcSectionedSpine_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcShellBasedSurfaceModel_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcTextLiteralWithExtent_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcTextLiteral_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcVertexPoint_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcVertex_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcOrientedEdge_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcSubedge_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcEdgeCurve_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcEdge_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcOpenShell_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcClosedShell_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcConnectedFaceSet_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcFaceSurface_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcFace_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcFaceOuterBound_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcFaceBound_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcEdgeLoop_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcPolyLoop_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcVertexLoop_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcLoop_Map);
    m_refIfcRepresentationItemList.push_back(&m_IfcPath_Map);
    m_refIfcRepresentationMapList.push_back(&m_IfcRepresentationMap_Map);
    m_refIfcResourceList.push_back(&m_IfcConstructionEquipmentResource_Map);
    m_refIfcResourceList.push_back(&m_IfcConstructionMaterialResource_Map);
    m_refIfcResourceList.push_back(&m_IfcConstructionProductResource_Map);
    m_refIfcResourceList.push_back(&m_IfcCrewResource_Map);
    m_refIfcResourceList.push_back(&m_IfcLaborResource_Map);
    m_refIfcResourceList.push_back(&m_IfcSubContractResource_Map);
    m_refIfcRevolvedAreaSolidList.push_back(&m_IfcRevolvedAreaSolid_Map);
    m_refIfcRibPlateProfilePropertiesList.push_back(&m_IfcRibPlateProfileProperties_Map);
    m_refIfcRightCircularConeList.push_back(&m_IfcRightCircularCone_Map);
    m_refIfcRightCircularCylinderList.push_back(&m_IfcRightCircularCylinder_Map);
    m_refIfcRoofList.push_back(&m_IfcRoof_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralCurveMemberVarying_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralCurveMember_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralSurfaceMemberVarying_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralSurfaceMember_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralCurveConnection_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralPointConnection_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralSurfaceConnection_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralLinearActionVarying_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralLinearAction_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralPlanarActionVarying_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralPlanarAction_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralPointAction_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralPointReaction_Map);
    m_refIfcRootList.push_back(&m_IfcOpeningElement_Map);
    m_refIfcRootList.push_back(&m_IfcChamferEdgeFeature_Map);
    m_refIfcRootList.push_back(&m_IfcRoundedEdgeFeature_Map);
    m_refIfcRootList.push_back(&m_IfcProjectionElement_Map);
    m_refIfcRootList.push_back(&m_IfcCovering_Map);
    m_refIfcRootList.push_back(&m_IfcBeam_Map);
    m_refIfcRootList.push_back(&m_IfcBuildingElementPart_Map);
    m_refIfcRootList.push_back(&m_IfcReinforcingBar_Map);
    m_refIfcRootList.push_back(&m_IfcReinforcingMesh_Map);
    m_refIfcRootList.push_back(&m_IfcTendon_Map);
    m_refIfcRootList.push_back(&m_IfcTendonAnchor_Map);
    m_refIfcRootList.push_back(&m_IfcBuildingElementProxy_Map);
    m_refIfcRootList.push_back(&m_IfcColumn_Map);
    m_refIfcRootList.push_back(&m_IfcCurtainWall_Map);
    m_refIfcRootList.push_back(&m_IfcDoor_Map);
    m_refIfcRootList.push_back(&m_IfcFooting_Map);
    m_refIfcRootList.push_back(&m_IfcMember_Map);
    m_refIfcRootList.push_back(&m_IfcPile_Map);
    m_refIfcRootList.push_back(&m_IfcPlate_Map);
    m_refIfcRootList.push_back(&m_IfcRailing_Map);
    m_refIfcRootList.push_back(&m_IfcRamp_Map);
    m_refIfcRootList.push_back(&m_IfcRampFlight_Map);
    m_refIfcRootList.push_back(&m_IfcRoof_Map);
    m_refIfcRootList.push_back(&m_IfcSlab_Map);
    m_refIfcRootList.push_back(&m_IfcStair_Map);
    m_refIfcRootList.push_back(&m_IfcStairFlight_Map);
    m_refIfcRootList.push_back(&m_IfcWallStandardCase_Map);
    m_refIfcRootList.push_back(&m_IfcWall_Map);
    m_refIfcRootList.push_back(&m_IfcWindow_Map);
    m_refIfcRootList.push_back(&m_IfcDiscreteAccessory_Map);
    m_refIfcRootList.push_back(&m_IfcMechanicalFastener_Map);
    m_refIfcRootList.push_back(&m_IfcFastener_Map);
    m_refIfcRootList.push_back(&m_IfcDistributionControlElement_Map);
    m_refIfcRootList.push_back(&m_IfcEnergyConversionDevice_Map);
    m_refIfcRootList.push_back(&m_IfcElectricDistributionPoint_Map);
    m_refIfcRootList.push_back(&m_IfcFlowController_Map);
    m_refIfcRootList.push_back(&m_IfcFlowFitting_Map);
    m_refIfcRootList.push_back(&m_IfcFlowMovingDevice_Map);
    m_refIfcRootList.push_back(&m_IfcFlowSegment_Map);
    m_refIfcRootList.push_back(&m_IfcFlowStorageDevice_Map);
    m_refIfcRootList.push_back(&m_IfcFlowTerminal_Map);
    m_refIfcRootList.push_back(&m_IfcFlowTreatmentDevice_Map);
    m_refIfcRootList.push_back(&m_IfcDistributionChamberElement_Map);
    m_refIfcRootList.push_back(&m_IfcDistributionFlowElement_Map);
    m_refIfcRootList.push_back(&m_IfcDistributionElement_Map);
    m_refIfcRootList.push_back(&m_IfcElectricalElement_Map);
    m_refIfcRootList.push_back(&m_IfcElementAssembly_Map);
    m_refIfcRootList.push_back(&m_IfcEquipmentElement_Map);
    m_refIfcRootList.push_back(&m_IfcFurnishingElement_Map);
    m_refIfcRootList.push_back(&m_IfcTransportElement_Map);
    m_refIfcRootList.push_back(&m_IfcVirtualElement_Map);
    m_refIfcRootList.push_back(&m_IfcSpace_Map);
    m_refIfcRootList.push_back(&m_IfcBuilding_Map);
    m_refIfcRootList.push_back(&m_IfcBuildingStorey_Map);
    m_refIfcRootList.push_back(&m_IfcSite_Map);
    m_refIfcRootList.push_back(&m_IfcDistributionPort_Map);
    m_refIfcRootList.push_back(&m_IfcAnnotation_Map);
    m_refIfcRootList.push_back(&m_IfcGrid_Map);
    m_refIfcRootList.push_back(&m_IfcProxy_Map);
    m_refIfcRootList.push_back(&m_IfcAsset_Map);
    m_refIfcRootList.push_back(&m_IfcCondition_Map);
    m_refIfcRootList.push_back(&m_IfcInventory_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralResultGroup_Map);
    m_refIfcRootList.push_back(&m_IfcZone_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralLoadGroup_Map);
    m_refIfcRootList.push_back(&m_IfcElectricalCircuit_Map);
    m_refIfcRootList.push_back(&m_IfcStructuralAnalysisModel_Map);
    m_refIfcRootList.push_back(&m_IfcSystem_Map);
    m_refIfcRootList.push_back(&m_IfcGroup_Map);
    m_refIfcRootList.push_back(&m_IfcScheduleTimeControl_Map);
    m_refIfcRootList.push_back(&m_IfcActionRequest_Map);
    m_refIfcRootList.push_back(&m_IfcConditionCriterion_Map);
    m_refIfcRootList.push_back(&m_IfcCostItem_Map);
    m_refIfcRootList.push_back(&m_IfcCostSchedule_Map);
    m_refIfcRootList.push_back(&m_IfcEquipmentStandard_Map);
    m_refIfcRootList.push_back(&m_IfcFurnitureStandard_Map);
    m_refIfcRootList.push_back(&m_IfcPerformanceHistory_Map);
    m_refIfcRootList.push_back(&m_IfcPermit_Map);
    m_refIfcRootList.push_back(&m_IfcProjectOrder_Map);
    m_refIfcRootList.push_back(&m_IfcProjectOrderRecord_Map);
    m_refIfcRootList.push_back(&m_IfcSpaceProgram_Map);
    m_refIfcRootList.push_back(&m_IfcServiceLife_Map);
    m_refIfcRootList.push_back(&m_IfcTimeSeriesSchedule_Map);
    m_refIfcRootList.push_back(&m_IfcWorkPlan_Map);
    m_refIfcRootList.push_back(&m_IfcWorkSchedule_Map);
    m_refIfcRootList.push_back(&m_IfcOccupant_Map);
    m_refIfcRootList.push_back(&m_IfcActor_Map);
    m_refIfcRootList.push_back(&m_IfcConstructionEquipmentResource_Map);
    m_refIfcRootList.push_back(&m_IfcConstructionMaterialResource_Map);
    m_refIfcRootList.push_back(&m_IfcConstructionProductResource_Map);
    m_refIfcRootList.push_back(&m_IfcCrewResource_Map);
    m_refIfcRootList.push_back(&m_IfcLaborResource_Map);
    m_refIfcRootList.push_back(&m_IfcSubContractResource_Map);
    m_refIfcRootList.push_back(&m_IfcOrderAction_Map);
    m_refIfcRootList.push_back(&m_IfcMove_Map);
    m_refIfcRootList.push_back(&m_IfcTask_Map);
    m_refIfcRootList.push_back(&m_IfcProcedure_Map);
    m_refIfcRootList.push_back(&m_IfcProject_Map);
    m_refIfcRootList.push_back(&m_IfcDoorStyle_Map);
    m_refIfcRootList.push_back(&m_IfcWindowStyle_Map);
    m_refIfcRootList.push_back(&m_IfcAirTerminalBoxType_Map);
    m_refIfcRootList.push_back(&m_IfcDamperType_Map);
    m_refIfcRootList.push_back(&m_IfcElectricTimeControlType_Map);
    m_refIfcRootList.push_back(&m_IfcFlowMeterType_Map);
    m_refIfcRootList.push_back(&m_IfcProtectiveDeviceType_Map);
    m_refIfcRootList.push_back(&m_IfcSwitchingDeviceType_Map);
    m_refIfcRootList.push_back(&m_IfcValveType_Map);
    m_refIfcRootList.push_back(&m_IfcAirTerminalType_Map);
    m_refIfcRootList.push_back(&m_IfcElectricApplianceType_Map);
    m_refIfcRootList.push_back(&m_IfcElectricHeaterType_Map);
    m_refIfcRootList.push_back(&m_IfcFireSuppressionTerminalType_Map);
    m_refIfcRootList.push_back(&m_IfcGasTerminalType_Map);
    m_refIfcRootList.push_back(&m_IfcLampType_Map);
    m_refIfcRootList.push_back(&m_IfcLightFixtureType_Map);
    m_refIfcRootList.push_back(&m_IfcOutletType_Map);
    m_refIfcRootList.push_back(&m_IfcSanitaryTerminalType_Map);
    m_refIfcRootList.push_back(&m_IfcStackTerminalType_Map);
    m_refIfcRootList.push_back(&m_IfcWasteTerminalType_Map);
    m_refIfcRootList.push_back(&m_IfcAirToAirHeatRecoveryType_Map);
    m_refIfcRootList.push_back(&m_IfcBoilerType_Map);
    m_refIfcRootList.push_back(&m_IfcChillerType_Map);
    m_refIfcRootList.push_back(&m_IfcCoilType_Map);
    m_refIfcRootList.push_back(&m_IfcCondenserType_Map);
    m_refIfcRootList.push_back(&m_IfcCooledBeamType_Map);
    m_refIfcRootList.push_back(&m_IfcCoolingTowerType_Map);
    m_refIfcRootList.push_back(&m_IfcElectricGeneratorType_Map);
    m_refIfcRootList.push_back(&m_IfcElectricMotorType_Map);
    m_refIfcRootList.push_back(&m_IfcEvaporativeCoolerType_Map);
    m_refIfcRootList.push_back(&m_IfcEvaporatorType_Map);
    m_refIfcRootList.push_back(&m_IfcHeatExchangerType_Map);
    m_refIfcRootList.push_back(&m_IfcHumidifierType_Map);
    m_refIfcRootList.push_back(&m_IfcMotorConnectionType_Map);
    m_refIfcRootList.push_back(&m_IfcSpaceHeaterType_Map);
    m_refIfcRootList.push_back(&m_IfcTransformerType_Map);
    m_refIfcRootList.push_back(&m_IfcTubeBundleType_Map);
    m_refIfcRootList.push_back(&m_IfcUnitaryEquipmentType_Map);
    m_refIfcRootList.push_back(&m_IfcCableCarrierFittingType_Map);
    m_refIfcRootList.push_back(&m_IfcDuctFittingType_Map);
    m_refIfcRootList.push_back(&m_IfcJunctionBoxType_Map);
    m_refIfcRootList.push_back(&m_IfcPipeFittingType_Map);
    m_refIfcRootList.push_back(&m_IfcCableCarrierSegmentType_Map);
    m_refIfcRootList.push_back(&m_IfcCableSegmentType_Map);
    m_refIfcRootList.push_back(&m_IfcDuctSegmentType_Map);
    m_refIfcRootList.push_back(&m_IfcPipeSegmentType_Map);
    m_refIfcRootList.push_back(&m_IfcCompressorType_Map);
    m_refIfcRootList.push_back(&m_IfcFanType_Map);
    m_refIfcRootList.push_back(&m_IfcPumpType_Map);
    m_refIfcRootList.push_back(&m_IfcDistributionChamberElementType_Map);
    m_refIfcRootList.push_back(&m_IfcDuctSilencerType_Map);
    m_refIfcRootList.push_back(&m_IfcFilterType_Map);
    m_refIfcRootList.push_back(&m_IfcElectricFlowStorageDeviceType_Map);
    m_refIfcRootList.push_back(&m_IfcTankType_Map);
    m_refIfcRootList.push_back(&m_IfcActuatorType_Map);
    m_refIfcRootList.push_back(&m_IfcAlarmType_Map);
    m_refIfcRootList.push_back(&m_IfcControllerType_Map);
    m_refIfcRootList.push_back(&m_IfcFlowInstrumentType_Map);
    m_refIfcRootList.push_back(&m_IfcSensorType_Map);
    m_refIfcRootList.push_back(&m_IfcDistributionElementType_Map);
    m_refIfcRootList.push_back(&m_IfcBeamType_Map);
    m_refIfcRootList.push_back(&m_IfcBuildingElementProxyType_Map);
    m_refIfcRootList.push_back(&m_IfcColumnType_Map);
    m_refIfcRootList.push_back(&m_IfcCoveringType_Map);
    m_refIfcRootList.push_back(&m_IfcCurtainWallType_Map);
    m_refIfcRootList.push_back(&m_IfcMemberType_Map);
    m_refIfcRootList.push_back(&m_IfcPlateType_Map);
    m_refIfcRootList.push_back(&m_IfcRailingType_Map);
    m_refIfcRootList.push_back(&m_IfcRampFlightType_Map);
    m_refIfcRootList.push_back(&m_IfcSlabType_Map);
    m_refIfcRootList.push_back(&m_IfcStairFlightType_Map);
    m_refIfcRootList.push_back(&m_IfcWallType_Map);
    m_refIfcRootList.push_back(&m_IfcVibrationIsolatorType_Map);
    m_refIfcRootList.push_back(&m_IfcDiscreteAccessoryType_Map);
    m_refIfcRootList.push_back(&m_IfcMechanicalFastenerType_Map);
    m_refIfcRootList.push_back(&m_IfcFastenerType_Map);
    m_refIfcRootList.push_back(&m_IfcFurnitureType_Map);
    m_refIfcRootList.push_back(&m_IfcSystemFurnitureElementType_Map);
    m_refIfcRootList.push_back(&m_IfcFurnishingElementType_Map);
    m_refIfcRootList.push_back(&m_IfcSpaceType_Map);
    m_refIfcRootList.push_back(&m_IfcTransportElementType_Map);
    m_refIfcRootList.push_back(&m_IfcTypeProduct_Map);
    m_refIfcRootList.push_back(&m_IfcTypeObject_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssignsToProduct_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssignsToGroup_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssignsTasks_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssignsToProjectOrder_Map);
    m_refIfcRootList.push_back(&m_IfcRelSchedulesCostItems_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssignsToControl_Map);
    m_refIfcRootList.push_back(&m_IfcRelOccupiesSpaces_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssignsToActor_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssignsToResource_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssignsToProcess_Map);
    m_refIfcRootList.push_back(&m_IfcRelAggregates_Map);
    m_refIfcRootList.push_back(&m_IfcRelNests_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssociatesAppliedValue_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssociatesApproval_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssociatesClassification_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssociatesConstraint_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssociatesDocument_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssociatesLibrary_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssociatesMaterial_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssociatesProfileProperties_Map);
    m_refIfcRootList.push_back(&m_IfcRelAssociates_Map);
    m_refIfcRootList.push_back(&m_IfcRelOverridesProperties_Map);
    m_refIfcRootList.push_back(&m_IfcRelDefinesByProperties_Map);
    m_refIfcRootList.push_back(&m_IfcRelDefinesByType_Map);
    m_refIfcRootList.push_back(&m_IfcRelConnectsStructuralActivity_Map);
    m_refIfcRootList.push_back(&m_IfcRelConnectsStructuralElement_Map);
    m_refIfcRootList.push_back(&m_IfcRelConnectsWithEccentricity_Map);
    m_refIfcRootList.push_back(&m_IfcRelConnectsStructuralMember_Map);
    m_refIfcRootList.push_back(&m_IfcRelFillsElement_Map);
    m_refIfcRootList.push_back(&m_IfcRelVoidsElement_Map);
    m_refIfcRootList.push_back(&m_IfcRelConnectsPathElements_Map);
    m_refIfcRootList.push_back(&m_IfcRelConnectsWithRealizingElements_Map);
    m_refIfcRootList.push_back(&m_IfcRelConnectsElements_Map);
    m_refIfcRootList.push_back(&m_IfcRelCoversBldgElements_Map);
    m_refIfcRootList.push_back(&m_IfcRelCoversSpaces_Map);
    m_refIfcRootList.push_back(&m_IfcRelReferencedInSpatialStructure_Map);
    m_refIfcRootList.push_back(&m_IfcRelServicesBuildings_Map);
    m_refIfcRootList.push_back(&m_IfcRelContainedInSpatialStructure_Map);
    m_refIfcRootList.push_back(&m_IfcRelSpaceBoundary_Map);
    m_refIfcRootList.push_back(&m_IfcRelProjectsElement_Map);
    m_refIfcRootList.push_back(&m_IfcRelConnectsPortToElement_Map);
    m_refIfcRootList.push_back(&m_IfcRelConnectsPorts_Map);
    m_refIfcRootList.push_back(&m_IfcRelFlowControlElements_Map);
    m_refIfcRootList.push_back(&m_IfcRelSequence_Map);
    m_refIfcRootList.push_back(&m_IfcRelInteractionRequirements_Map);
    m_refIfcRootList.push_back(&m_IfcDoorLiningProperties_Map);
    m_refIfcRootList.push_back(&m_IfcDoorPanelProperties_Map);
    m_refIfcRootList.push_back(&m_IfcElectricalBaseProperties_Map);
    m_refIfcRootList.push_back(&m_IfcEnergyProperties_Map);
    m_refIfcRootList.push_back(&m_IfcElementQuantity_Map);
    m_refIfcRootList.push_back(&m_IfcFluidFlowProperties_Map);
    m_refIfcRootList.push_back(&m_IfcPermeableCoveringProperties_Map);
    m_refIfcRootList.push_back(&m_IfcPropertySet_Map);
    m_refIfcRootList.push_back(&m_IfcReinforcementDefinitionProperties_Map);
    m_refIfcRootList.push_back(&m_IfcServiceLifeFactor_Map);
    m_refIfcRootList.push_back(&m_IfcSoundProperties_Map);
    m_refIfcRootList.push_back(&m_IfcSoundValue_Map);
    m_refIfcRootList.push_back(&m_IfcSpaceThermalLoadProperties_Map);
    m_refIfcRootList.push_back(&m_IfcWindowLiningProperties_Map);
    m_refIfcRootList.push_back(&m_IfcWindowPanelProperties_Map);
    m_refIfcRoundedEdgeFeatureList.push_back(&m_IfcRoundedEdgeFeature_Map);
    m_refIfcRoundedRectangleProfileDefList.push_back(&m_IfcRoundedRectangleProfileDef_Map);
    m_refIfcSIUnitList.push_back(&m_IfcSIUnit_Map);
    m_refIfcSanitaryTerminalTypeList.push_back(&m_IfcSanitaryTerminalType_Map);
    m_refIfcScheduleTimeControlList.push_back(&m_IfcScheduleTimeControl_Map);
    m_refIfcSectionPropertiesList.push_back(&m_IfcSectionProperties_Map);
    m_refIfcSectionReinforcementPropertiesList.push_back(&m_IfcSectionReinforcementProperties_Map);
    m_refIfcSectionedSpineList.push_back(&m_IfcSectionedSpine_Map);
    m_refIfcSensorTypeList.push_back(&m_IfcSensorType_Map);
    m_refIfcServiceLifeList.push_back(&m_IfcServiceLife_Map);
    m_refIfcServiceLifeFactorList.push_back(&m_IfcServiceLifeFactor_Map);
    m_refIfcShapeAspectList.push_back(&m_IfcShapeAspect_Map);
    m_refIfcShapeModelList.push_back(&m_IfcShapeRepresentation_Map);
    m_refIfcShapeModelList.push_back(&m_IfcTopologyRepresentation_Map);
    m_refIfcShapeRepresentationList.push_back(&m_IfcShapeRepresentation_Map);
    m_refIfcShellBasedSurfaceModelList.push_back(&m_IfcShellBasedSurfaceModel_Map);
    m_refIfcSimplePropertyList.push_back(&m_IfcPropertyBoundedValue_Map);
    m_refIfcSimplePropertyList.push_back(&m_IfcPropertyEnumeratedValue_Map);
    m_refIfcSimplePropertyList.push_back(&m_IfcPropertyListValue_Map);
    m_refIfcSimplePropertyList.push_back(&m_IfcPropertyReferenceValue_Map);
    m_refIfcSimplePropertyList.push_back(&m_IfcPropertySingleValue_Map);
    m_refIfcSimplePropertyList.push_back(&m_IfcPropertyTableValue_Map);
    m_refIfcSiteList.push_back(&m_IfcSite_Map);
    m_refIfcSlabList.push_back(&m_IfcSlab_Map);
    m_refIfcSlabTypeList.push_back(&m_IfcSlabType_Map);
    m_refIfcSlippageConnectionConditionList.push_back(&m_IfcSlippageConnectionCondition_Map);
    m_refIfcSolidModelList.push_back(&m_IfcCsgSolid_Map);
    m_refIfcSolidModelList.push_back(&m_IfcExtrudedAreaSolid_Map);
    m_refIfcSolidModelList.push_back(&m_IfcRevolvedAreaSolid_Map);
    m_refIfcSolidModelList.push_back(&m_IfcSurfaceCurveSweptAreaSolid_Map);
    m_refIfcSolidModelList.push_back(&m_IfcFacetedBrep_Map);
    m_refIfcSolidModelList.push_back(&m_IfcFacetedBrepWithVoids_Map);
    m_refIfcSolidModelList.push_back(&m_IfcSweptDiskSolid_Map);
    m_refIfcSoundPropertiesList.push_back(&m_IfcSoundProperties_Map);
    m_refIfcSoundValueList.push_back(&m_IfcSoundValue_Map);
    m_refIfcSpaceList.push_back(&m_IfcSpace_Map);
    m_refIfcSpaceHeaterTypeList.push_back(&m_IfcSpaceHeaterType_Map);
    m_refIfcSpaceProgramList.push_back(&m_IfcSpaceProgram_Map);
    m_refIfcSpaceThermalLoadPropertiesList.push_back(&m_IfcSpaceThermalLoadProperties_Map);
    m_refIfcSpaceTypeList.push_back(&m_IfcSpaceType_Map);
    m_refIfcSpatialStructureElementList.push_back(&m_IfcSpace_Map);
    m_refIfcSpatialStructureElementList.push_back(&m_IfcBuilding_Map);
    m_refIfcSpatialStructureElementList.push_back(&m_IfcBuildingStorey_Map);
    m_refIfcSpatialStructureElementList.push_back(&m_IfcSite_Map);
    m_refIfcSpatialStructureElementTypeList.push_back(&m_IfcSpaceType_Map);
    m_refIfcSphereList.push_back(&m_IfcSphere_Map);
    m_refIfcStackTerminalTypeList.push_back(&m_IfcStackTerminalType_Map);
    m_refIfcStairList.push_back(&m_IfcStair_Map);
    m_refIfcStairFlightList.push_back(&m_IfcStairFlight_Map);
    m_refIfcStairFlightTypeList.push_back(&m_IfcStairFlightType_Map);
    m_refIfcStructuralActionList.push_back(&m_IfcStructuralLinearActionVarying_Map);
    m_refIfcStructuralActionList.push_back(&m_IfcStructuralLinearAction_Map);
    m_refIfcStructuralActionList.push_back(&m_IfcStructuralPlanarActionVarying_Map);
    m_refIfcStructuralActionList.push_back(&m_IfcStructuralPlanarAction_Map);
    m_refIfcStructuralActionList.push_back(&m_IfcStructuralPointAction_Map);
    m_refIfcStructuralActivityList.push_back(&m_IfcStructuralLinearActionVarying_Map);
    m_refIfcStructuralActivityList.push_back(&m_IfcStructuralLinearAction_Map);
    m_refIfcStructuralActivityList.push_back(&m_IfcStructuralPlanarActionVarying_Map);
    m_refIfcStructuralActivityList.push_back(&m_IfcStructuralPlanarAction_Map);
    m_refIfcStructuralActivityList.push_back(&m_IfcStructuralPointAction_Map);
    m_refIfcStructuralActivityList.push_back(&m_IfcStructuralPointReaction_Map);
    m_refIfcStructuralAnalysisModelList.push_back(&m_IfcStructuralAnalysisModel_Map);
    m_refIfcStructuralConnectionList.push_back(&m_IfcStructuralCurveConnection_Map);
    m_refIfcStructuralConnectionList.push_back(&m_IfcStructuralPointConnection_Map);
    m_refIfcStructuralConnectionList.push_back(&m_IfcStructuralSurfaceConnection_Map);
    m_refIfcStructuralConnectionConditionList.push_back(&m_IfcFailureConnectionCondition_Map);
    m_refIfcStructuralConnectionConditionList.push_back(&m_IfcSlippageConnectionCondition_Map);
    m_refIfcStructuralCurveConnectionList.push_back(&m_IfcStructuralCurveConnection_Map);
    m_refIfcStructuralCurveMemberList.push_back(&m_IfcStructuralCurveMember_Map);
    m_refIfcStructuralCurveMemberList.push_back(&m_IfcStructuralCurveMemberVarying_Map);
    m_refIfcStructuralCurveMemberVaryingList.push_back(&m_IfcStructuralCurveMemberVarying_Map);
    m_refIfcStructuralItemList.push_back(&m_IfcStructuralCurveMemberVarying_Map);
    m_refIfcStructuralItemList.push_back(&m_IfcStructuralCurveMember_Map);
    m_refIfcStructuralItemList.push_back(&m_IfcStructuralSurfaceMemberVarying_Map);
    m_refIfcStructuralItemList.push_back(&m_IfcStructuralSurfaceMember_Map);
    m_refIfcStructuralItemList.push_back(&m_IfcStructuralCurveConnection_Map);
    m_refIfcStructuralItemList.push_back(&m_IfcStructuralPointConnection_Map);
    m_refIfcStructuralItemList.push_back(&m_IfcStructuralSurfaceConnection_Map);
    m_refIfcStructuralLinearActionList.push_back(&m_IfcStructuralLinearAction_Map);
    m_refIfcStructuralLinearActionList.push_back(&m_IfcStructuralLinearActionVarying_Map);
    m_refIfcStructuralLinearActionVaryingList.push_back(&m_IfcStructuralLinearActionVarying_Map);
    m_refIfcStructuralLoadList.push_back(&m_IfcStructuralLoadLinearForce_Map);
    m_refIfcStructuralLoadList.push_back(&m_IfcStructuralLoadPlanarForce_Map);
    m_refIfcStructuralLoadList.push_back(&m_IfcStructuralLoadSingleDisplacementDistortion_Map);
    m_refIfcStructuralLoadList.push_back(&m_IfcStructuralLoadSingleDisplacement_Map);
    m_refIfcStructuralLoadList.push_back(&m_IfcStructuralLoadSingleForceWarping_Map);
    m_refIfcStructuralLoadList.push_back(&m_IfcStructuralLoadSingleForce_Map);
    m_refIfcStructuralLoadList.push_back(&m_IfcStructuralLoadTemperature_Map);
    m_refIfcStructuralLoadGroupList.push_back(&m_IfcStructuralLoadGroup_Map);
    m_refIfcStructuralLoadLinearForceList.push_back(&m_IfcStructuralLoadLinearForce_Map);
    m_refIfcStructuralLoadPlanarForceList.push_back(&m_IfcStructuralLoadPlanarForce_Map);
    m_refIfcStructuralLoadSingleDisplacementList.push_back(&m_IfcStructuralLoadSingleDisplacement_Map);
    m_refIfcStructuralLoadSingleDisplacementList.push_back(&m_IfcStructuralLoadSingleDisplacementDistortion_Map);
    m_refIfcStructuralLoadSingleDisplacementDistortionList.push_back(&m_IfcStructuralLoadSingleDisplacementDistortion_Map);
    m_refIfcStructuralLoadSingleForceList.push_back(&m_IfcStructuralLoadSingleForce_Map);
    m_refIfcStructuralLoadSingleForceList.push_back(&m_IfcStructuralLoadSingleForceWarping_Map);
    m_refIfcStructuralLoadSingleForceWarpingList.push_back(&m_IfcStructuralLoadSingleForceWarping_Map);
    m_refIfcStructuralLoadStaticList.push_back(&m_IfcStructuralLoadLinearForce_Map);
    m_refIfcStructuralLoadStaticList.push_back(&m_IfcStructuralLoadPlanarForce_Map);
    m_refIfcStructuralLoadStaticList.push_back(&m_IfcStructuralLoadSingleDisplacementDistortion_Map);
    m_refIfcStructuralLoadStaticList.push_back(&m_IfcStructuralLoadSingleDisplacement_Map);
    m_refIfcStructuralLoadStaticList.push_back(&m_IfcStructuralLoadSingleForceWarping_Map);
    m_refIfcStructuralLoadStaticList.push_back(&m_IfcStructuralLoadSingleForce_Map);
    m_refIfcStructuralLoadStaticList.push_back(&m_IfcStructuralLoadTemperature_Map);
    m_refIfcStructuralLoadTemperatureList.push_back(&m_IfcStructuralLoadTemperature_Map);
    m_refIfcStructuralMemberList.push_back(&m_IfcStructuralCurveMemberVarying_Map);
    m_refIfcStructuralMemberList.push_back(&m_IfcStructuralCurveMember_Map);
    m_refIfcStructuralMemberList.push_back(&m_IfcStructuralSurfaceMemberVarying_Map);
    m_refIfcStructuralMemberList.push_back(&m_IfcStructuralSurfaceMember_Map);
    m_refIfcStructuralPlanarActionList.push_back(&m_IfcStructuralPlanarAction_Map);
    m_refIfcStructuralPlanarActionList.push_back(&m_IfcStructuralPlanarActionVarying_Map);
    m_refIfcStructuralPlanarActionVaryingList.push_back(&m_IfcStructuralPlanarActionVarying_Map);
    m_refIfcStructuralPointActionList.push_back(&m_IfcStructuralPointAction_Map);
    m_refIfcStructuralPointConnectionList.push_back(&m_IfcStructuralPointConnection_Map);
    m_refIfcStructuralPointReactionList.push_back(&m_IfcStructuralPointReaction_Map);
    m_refIfcStructuralProfilePropertiesList.push_back(&m_IfcStructuralProfileProperties_Map);
    m_refIfcStructuralProfilePropertiesList.push_back(&m_IfcStructuralSteelProfileProperties_Map);
    m_refIfcStructuralReactionList.push_back(&m_IfcStructuralPointReaction_Map);
    m_refIfcStructuralResultGroupList.push_back(&m_IfcStructuralResultGroup_Map);
    m_refIfcStructuralSteelProfilePropertiesList.push_back(&m_IfcStructuralSteelProfileProperties_Map);
    m_refIfcStructuralSurfaceConnectionList.push_back(&m_IfcStructuralSurfaceConnection_Map);
    m_refIfcStructuralSurfaceMemberList.push_back(&m_IfcStructuralSurfaceMember_Map);
    m_refIfcStructuralSurfaceMemberList.push_back(&m_IfcStructuralSurfaceMemberVarying_Map);
    m_refIfcStructuralSurfaceMemberVaryingList.push_back(&m_IfcStructuralSurfaceMemberVarying_Map);
    m_refIfcStructuredDimensionCalloutList.push_back(&m_IfcStructuredDimensionCallout_Map);
    m_refIfcStyleModelList.push_back(&m_IfcStyledRepresentation_Map);
    m_refIfcStyledItemList.push_back(&m_IfcStyledItem_Map);
    m_refIfcStyledItemList.push_back(&m_IfcDimensionCurve_Map);
    m_refIfcStyledItemList.push_back(&m_IfcProjectionCurve_Map);
    m_refIfcStyledItemList.push_back(&m_IfcAnnotationCurveOccurrence_Map);
    m_refIfcStyledItemList.push_back(&m_IfcDimensionCurveTerminator_Map);
    m_refIfcStyledItemList.push_back(&m_IfcTerminatorSymbol_Map);
    m_refIfcStyledItemList.push_back(&m_IfcAnnotationSymbolOccurrence_Map);
    m_refIfcStyledItemList.push_back(&m_IfcAnnotationTextOccurrence_Map);
    m_refIfcStyledItemList.push_back(&m_IfcAnnotationFillAreaOccurrence_Map);
    m_refIfcStyledItemList.push_back(&m_IfcAnnotationSurfaceOccurrence_Map);
    m_refIfcStyledRepresentationList.push_back(&m_IfcStyledRepresentation_Map);
    m_refIfcSubContractResourceList.push_back(&m_IfcSubContractResource_Map);
    m_refIfcSubedgeList.push_back(&m_IfcSubedge_Map);
    m_refIfcSurfaceList.push_back(&m_IfcPlane_Map);
    m_refIfcSurfaceList.push_back(&m_IfcCurveBoundedPlane_Map);
    m_refIfcSurfaceList.push_back(&m_IfcRectangularTrimmedSurface_Map);
    m_refIfcSurfaceList.push_back(&m_IfcBoundedSurface_Map);
    m_refIfcSurfaceList.push_back(&m_IfcSurfaceOfLinearExtrusion_Map);
    m_refIfcSurfaceList.push_back(&m_IfcSurfaceOfRevolution_Map);
    m_refIfcSurfaceCurveSweptAreaSolidList.push_back(&m_IfcSurfaceCurveSweptAreaSolid_Map);
    m_refIfcSurfaceOfLinearExtrusionList.push_back(&m_IfcSurfaceOfLinearExtrusion_Map);
    m_refIfcSurfaceOfRevolutionList.push_back(&m_IfcSurfaceOfRevolution_Map);
    m_refIfcSurfaceStyleList.push_back(&m_IfcSurfaceStyle_Map);
    m_refIfcSurfaceStyleLightingList.push_back(&m_IfcSurfaceStyleLighting_Map);
    m_refIfcSurfaceStyleRefractionList.push_back(&m_IfcSurfaceStyleRefraction_Map);
    m_refIfcSurfaceStyleRenderingList.push_back(&m_IfcSurfaceStyleRendering_Map);
    m_refIfcSurfaceStyleShadingList.push_back(&m_IfcSurfaceStyleShading_Map);
    m_refIfcSurfaceStyleShadingList.push_back(&m_IfcSurfaceStyleRendering_Map);
    m_refIfcSurfaceStyleWithTexturesList.push_back(&m_IfcSurfaceStyleWithTextures_Map);
    m_refIfcSurfaceTextureList.push_back(&m_IfcBlobTexture_Map);
    m_refIfcSurfaceTextureList.push_back(&m_IfcImageTexture_Map);
    m_refIfcSurfaceTextureList.push_back(&m_IfcPixelTexture_Map);
    m_refIfcSweptAreaSolidList.push_back(&m_IfcExtrudedAreaSolid_Map);
    m_refIfcSweptAreaSolidList.push_back(&m_IfcRevolvedAreaSolid_Map);
    m_refIfcSweptAreaSolidList.push_back(&m_IfcSurfaceCurveSweptAreaSolid_Map);
    m_refIfcSweptDiskSolidList.push_back(&m_IfcSweptDiskSolid_Map);
    m_refIfcSweptSurfaceList.push_back(&m_IfcSurfaceOfLinearExtrusion_Map);
    m_refIfcSweptSurfaceList.push_back(&m_IfcSurfaceOfRevolution_Map);
    m_refIfcSwitchingDeviceTypeList.push_back(&m_IfcSwitchingDeviceType_Map);
    m_refIfcSymbolStyleList.push_back(&m_IfcSymbolStyle_Map);
    m_refIfcSystemList.push_back(&m_IfcSystem_Map);
    m_refIfcSystemList.push_back(&m_IfcElectricalCircuit_Map);
    m_refIfcSystemList.push_back(&m_IfcStructuralAnalysisModel_Map);
    m_refIfcSystemFurnitureElementTypeList.push_back(&m_IfcSystemFurnitureElementType_Map);
    m_refIfcTShapeProfileDefList.push_back(&m_IfcTShapeProfileDef_Map);
    m_refIfcTableList.push_back(&m_IfcTable_Map);
    m_refIfcTableRowList.push_back(&m_IfcTableRow_Map);
    m_refIfcTankTypeList.push_back(&m_IfcTankType_Map);
    m_refIfcTaskList.push_back(&m_IfcTask_Map);
    m_refIfcTaskList.push_back(&m_IfcOrderAction_Map);
    m_refIfcTaskList.push_back(&m_IfcMove_Map);
    m_refIfcTelecomAddressList.push_back(&m_IfcTelecomAddress_Map);
    m_refIfcTendonList.push_back(&m_IfcTendon_Map);
    m_refIfcTendonAnchorList.push_back(&m_IfcTendonAnchor_Map);
    m_refIfcTerminatorSymbolList.push_back(&m_IfcTerminatorSymbol_Map);
    m_refIfcTerminatorSymbolList.push_back(&m_IfcDimensionCurveTerminator_Map);
    m_refIfcTextLiteralList.push_back(&m_IfcTextLiteral_Map);
    m_refIfcTextLiteralList.push_back(&m_IfcTextLiteralWithExtent_Map);
    m_refIfcTextLiteralWithExtentList.push_back(&m_IfcTextLiteralWithExtent_Map);
    m_refIfcTextStyleList.push_back(&m_IfcTextStyle_Map);
    m_refIfcTextStyleFontModelList.push_back(&m_IfcTextStyleFontModel_Map);
    m_refIfcTextStyleForDefinedFontList.push_back(&m_IfcTextStyleForDefinedFont_Map);
    m_refIfcTextStyleTextModelList.push_back(&m_IfcTextStyleTextModel_Map);
    m_refIfcTextStyleWithBoxCharacteristicsList.push_back(&m_IfcTextStyleWithBoxCharacteristics_Map);
    m_refIfcTextureCoordinateList.push_back(&m_IfcTextureCoordinateGenerator_Map);
    m_refIfcTextureCoordinateList.push_back(&m_IfcTextureMap_Map);
    m_refIfcTextureCoordinateGeneratorList.push_back(&m_IfcTextureCoordinateGenerator_Map);
    m_refIfcTextureMapList.push_back(&m_IfcTextureMap_Map);
    m_refIfcTextureVertexList.push_back(&m_IfcTextureVertex_Map);
    m_refIfcThermalMaterialPropertiesList.push_back(&m_IfcThermalMaterialProperties_Map);
    m_refIfcTimeSeriesList.push_back(&m_IfcIrregularTimeSeries_Map);
    m_refIfcTimeSeriesList.push_back(&m_IfcRegularTimeSeries_Map);
    m_refIfcTimeSeriesReferenceRelationshipList.push_back(&m_IfcTimeSeriesReferenceRelationship_Map);
    m_refIfcTimeSeriesScheduleList.push_back(&m_IfcTimeSeriesSchedule_Map);
    m_refIfcTimeSeriesValueList.push_back(&m_IfcTimeSeriesValue_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcVertexPoint_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcVertex_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcOrientedEdge_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcSubedge_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcEdgeCurve_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcEdge_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcOpenShell_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcClosedShell_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcConnectedFaceSet_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcFaceSurface_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcFace_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcFaceOuterBound_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcFaceBound_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcEdgeLoop_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcPolyLoop_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcVertexLoop_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcLoop_Map);
    m_refIfcTopologicalRepresentationItemList.push_back(&m_IfcPath_Map);
    m_refIfcTopologyRepresentationList.push_back(&m_IfcTopologyRepresentation_Map);
    m_refIfcTransformerTypeList.push_back(&m_IfcTransformerType_Map);
    m_refIfcTransportElementList.push_back(&m_IfcTransportElement_Map);
    m_refIfcTransportElementTypeList.push_back(&m_IfcTransportElementType_Map);
    m_refIfcTrapeziumProfileDefList.push_back(&m_IfcTrapeziumProfileDef_Map);
    m_refIfcTrimmedCurveList.push_back(&m_IfcTrimmedCurve_Map);
    m_refIfcTubeBundleTypeList.push_back(&m_IfcTubeBundleType_Map);
    m_refIfcTwoDirectionRepeatFactorList.push_back(&m_IfcTwoDirectionRepeatFactor_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcTypeObject_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcDoorStyle_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcWindowStyle_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcAirTerminalBoxType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcDamperType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcElectricTimeControlType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcFlowMeterType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcProtectiveDeviceType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcSwitchingDeviceType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcValveType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcAirTerminalType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcElectricApplianceType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcElectricHeaterType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcFireSuppressionTerminalType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcGasTerminalType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcLampType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcLightFixtureType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcOutletType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcSanitaryTerminalType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcStackTerminalType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcWasteTerminalType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcAirToAirHeatRecoveryType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcBoilerType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcChillerType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcCoilType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcCondenserType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcCooledBeamType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcCoolingTowerType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcElectricGeneratorType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcElectricMotorType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcEvaporativeCoolerType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcEvaporatorType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcHeatExchangerType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcHumidifierType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcMotorConnectionType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcSpaceHeaterType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcTransformerType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcTubeBundleType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcUnitaryEquipmentType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcCableCarrierFittingType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcDuctFittingType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcJunctionBoxType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcPipeFittingType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcCableCarrierSegmentType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcCableSegmentType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcDuctSegmentType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcPipeSegmentType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcCompressorType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcFanType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcPumpType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcDistributionChamberElementType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcDuctSilencerType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcFilterType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcElectricFlowStorageDeviceType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcTankType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcActuatorType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcAlarmType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcControllerType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcFlowInstrumentType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcSensorType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcDistributionElementType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcBeamType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcBuildingElementProxyType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcColumnType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcCoveringType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcCurtainWallType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcMemberType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcPlateType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcRailingType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcRampFlightType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcSlabType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcStairFlightType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcWallType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcVibrationIsolatorType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcDiscreteAccessoryType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcMechanicalFastenerType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcFastenerType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcFurnitureType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcSystemFurnitureElementType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcFurnishingElementType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcSpaceType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcTransportElementType_Map);
    m_refIfcTypeObjectList.push_back(&m_IfcTypeProduct_Map);
    m_refIfcTypeProductList.push_back(&m_IfcTypeProduct_Map);
    m_refIfcTypeProductList.push_back(&m_IfcDoorStyle_Map);
    m_refIfcTypeProductList.push_back(&m_IfcWindowStyle_Map);
    m_refIfcTypeProductList.push_back(&m_IfcAirTerminalBoxType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcDamperType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcElectricTimeControlType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcFlowMeterType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcProtectiveDeviceType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcSwitchingDeviceType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcValveType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcAirTerminalType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcElectricApplianceType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcElectricHeaterType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcFireSuppressionTerminalType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcGasTerminalType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcLampType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcLightFixtureType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcOutletType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcSanitaryTerminalType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcStackTerminalType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcWasteTerminalType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcAirToAirHeatRecoveryType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcBoilerType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcChillerType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcCoilType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcCondenserType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcCooledBeamType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcCoolingTowerType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcElectricGeneratorType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcElectricMotorType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcEvaporativeCoolerType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcEvaporatorType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcHeatExchangerType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcHumidifierType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcMotorConnectionType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcSpaceHeaterType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcTransformerType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcTubeBundleType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcUnitaryEquipmentType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcCableCarrierFittingType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcDuctFittingType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcJunctionBoxType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcPipeFittingType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcCableCarrierSegmentType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcCableSegmentType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcDuctSegmentType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcPipeSegmentType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcCompressorType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcFanType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcPumpType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcDistributionChamberElementType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcDuctSilencerType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcFilterType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcElectricFlowStorageDeviceType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcTankType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcActuatorType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcAlarmType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcControllerType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcFlowInstrumentType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcSensorType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcDistributionElementType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcBeamType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcBuildingElementProxyType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcColumnType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcCoveringType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcCurtainWallType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcMemberType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcPlateType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcRailingType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcRampFlightType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcSlabType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcStairFlightType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcWallType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcVibrationIsolatorType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcDiscreteAccessoryType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcMechanicalFastenerType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcFastenerType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcFurnitureType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcSystemFurnitureElementType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcFurnishingElementType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcSpaceType_Map);
    m_refIfcTypeProductList.push_back(&m_IfcTransportElementType_Map);
    m_refIfcUShapeProfileDefList.push_back(&m_IfcUShapeProfileDef_Map);
    m_refIfcUnitAssignmentList.push_back(&m_IfcUnitAssignment_Map);
    m_refIfcUnitaryEquipmentTypeList.push_back(&m_IfcUnitaryEquipmentType_Map);
    m_refIfcValveTypeList.push_back(&m_IfcValveType_Map);
    m_refIfcVectorList.push_back(&m_IfcVector_Map);
    m_refIfcVertexList.push_back(&m_IfcVertex_Map);
    m_refIfcVertexList.push_back(&m_IfcVertexPoint_Map);
    m_refIfcVertexBasedTextureMapList.push_back(&m_IfcVertexBasedTextureMap_Map);
    m_refIfcVertexLoopList.push_back(&m_IfcVertexLoop_Map);
    m_refIfcVertexPointList.push_back(&m_IfcVertexPoint_Map);
    m_refIfcVibrationIsolatorTypeList.push_back(&m_IfcVibrationIsolatorType_Map);
    m_refIfcVirtualElementList.push_back(&m_IfcVirtualElement_Map);
    m_refIfcVirtualGridIntersectionList.push_back(&m_IfcVirtualGridIntersection_Map);
    m_refIfcWallList.push_back(&m_IfcWall_Map);
    m_refIfcWallList.push_back(&m_IfcWallStandardCase_Map);
    m_refIfcWallStandardCaseList.push_back(&m_IfcWallStandardCase_Map);
    m_refIfcWallTypeList.push_back(&m_IfcWallType_Map);
    m_refIfcWasteTerminalTypeList.push_back(&m_IfcWasteTerminalType_Map);
    m_refIfcWaterPropertiesList.push_back(&m_IfcWaterProperties_Map);
    m_refIfcWindowList.push_back(&m_IfcWindow_Map);
    m_refIfcWindowLiningPropertiesList.push_back(&m_IfcWindowLiningProperties_Map);
    m_refIfcWindowPanelPropertiesList.push_back(&m_IfcWindowPanelProperties_Map);
    m_refIfcWindowStyleList.push_back(&m_IfcWindowStyle_Map);
    m_refIfcWorkControlList.push_back(&m_IfcWorkPlan_Map);
    m_refIfcWorkControlList.push_back(&m_IfcWorkSchedule_Map);
    m_refIfcWorkPlanList.push_back(&m_IfcWorkPlan_Map);
    m_refIfcWorkScheduleList.push_back(&m_IfcWorkSchedule_Map);
    m_refIfcZShapeProfileDefList.push_back(&m_IfcZShapeProfileDef_Map);
    m_refIfcZoneList.push_back(&m_IfcZone_Map);
}

ExpressDataSet::~ExpressDataSet() {
}

Ifc2DCompositeCurve *ExpressDataSet::getIfc2DCompositeCurve(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< Ifc2DCompositeCurve * > (current->second.get());
    }
    else {
        Ifc2DCompositeCurve *ret = static_cast< Ifc2DCompositeCurve * > (allocateIfc2DCompositeCurve(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfc2DCompositeCurve(Ifc2DCompositeCurve *arg) {
    getAll().erase(arg->getKey());
    return m_Ifc2DCompositeCurve_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfc2DCompositeCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    Ifc2DCompositeCurve *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new Ifc2DCompositeCurve(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_Ifc2DCompositeCurve_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< Ifc2DCompositeCurve > ExpressDataSet::createIfc2DCompositeCurve(bool isVolatile) {
    if (isVolatile) {
        return new Ifc2DCompositeCurve(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< Ifc2DCompositeCurve * > (allocateIfc2DCompositeCurve(this, Step::Id_UNSET));
    }
}

Ifc2DCompositeCurve *ExpressDataSet::cloneIfc2DCompositeCurve(ExpressDataSet *expressDataSet, const Ifc2DCompositeCurve &obj, const CopyOp &copyop) {
    Ifc2DCompositeCurve *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new Ifc2DCompositeCurve(id, 0);
    ret->setKey(id);
    expressDataSet->m_Ifc2DCompositeCurve_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

Ifc2DCompositeCurve *ExpressDataSet::cloneIfc2DCompositeCurve(const Ifc2DCompositeCurve &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfc2DCompositeCurve(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfc2DCompositeCurve(this, obj, copyop);
    }
}

IfcActionRequest *ExpressDataSet::getIfcActionRequest(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcActionRequest * > (current->second.get());
    }
    else {
        IfcActionRequest *ret = static_cast< IfcActionRequest * > (allocateIfcActionRequest(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcActionRequest(IfcActionRequest *arg) {
    getAll().erase(arg->getKey());
    return m_IfcActionRequest_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcActionRequest(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcActionRequest *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcActionRequest(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcActionRequest_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcActionRequest > ExpressDataSet::createIfcActionRequest(bool isVolatile) {
    if (isVolatile) {
        return new IfcActionRequest(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcActionRequest * > (allocateIfcActionRequest(this, Step::Id_UNSET));
    }
}

IfcActionRequest *ExpressDataSet::cloneIfcActionRequest(ExpressDataSet *expressDataSet, const IfcActionRequest &obj, const CopyOp &copyop) {
    IfcActionRequest *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcActionRequest(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcActionRequest_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcActionRequest *ExpressDataSet::cloneIfcActionRequest(const IfcActionRequest &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcActionRequest(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcActionRequest(this, obj, copyop);
    }
}

IfcActor *ExpressDataSet::getIfcActor(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcActor * > (current->second.get());
    }
    else {
        IfcActor *ret = static_cast< IfcActor * > (allocateIfcActor(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcActor(IfcActor *arg) {
    getAll().erase(arg->getKey());
    return m_IfcActor_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcActor(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcActor *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcActor(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcActor_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcActor > ExpressDataSet::createIfcActor(bool isVolatile) {
    if (isVolatile) {
        return new IfcActor(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcActor * > (allocateIfcActor(this, Step::Id_UNSET));
    }
}

IfcActor *ExpressDataSet::cloneIfcActor(ExpressDataSet *expressDataSet, const IfcActor &obj, const CopyOp &copyop) {
    IfcActor *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcActor(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcActor_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcActor *ExpressDataSet::cloneIfcActor(const IfcActor &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcActor(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcActor(this, obj, copyop);
    }
}

IfcActorRole *ExpressDataSet::getIfcActorRole(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcActorRole * > (current->second.get());
    }
    else {
        IfcActorRole *ret = static_cast< IfcActorRole * > (allocateIfcActorRole(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcActorRole(IfcActorRole *arg) {
    getAll().erase(arg->getKey());
    return m_IfcActorRole_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcActorRole(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcActorRole *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcActorRole(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcActorRole_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcActorRole > ExpressDataSet::createIfcActorRole(bool isVolatile) {
    if (isVolatile) {
        return new IfcActorRole(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcActorRole * > (allocateIfcActorRole(this, Step::Id_UNSET));
    }
}

IfcActorRole *ExpressDataSet::cloneIfcActorRole(ExpressDataSet *expressDataSet, const IfcActorRole &obj, const CopyOp &copyop) {
    IfcActorRole *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcActorRole(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcActorRole_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcActorRole *ExpressDataSet::cloneIfcActorRole(const IfcActorRole &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcActorRole(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcActorRole(this, obj, copyop);
    }
}

IfcActuatorType *ExpressDataSet::getIfcActuatorType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcActuatorType * > (current->second.get());
    }
    else {
        IfcActuatorType *ret = static_cast< IfcActuatorType * > (allocateIfcActuatorType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcActuatorType(IfcActuatorType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcActuatorType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcActuatorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcActuatorType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcActuatorType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcActuatorType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcActuatorType > ExpressDataSet::createIfcActuatorType(bool isVolatile) {
    if (isVolatile) {
        return new IfcActuatorType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcActuatorType * > (allocateIfcActuatorType(this, Step::Id_UNSET));
    }
}

IfcActuatorType *ExpressDataSet::cloneIfcActuatorType(ExpressDataSet *expressDataSet, const IfcActuatorType &obj, const CopyOp &copyop) {
    IfcActuatorType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcActuatorType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcActuatorType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcActuatorType *ExpressDataSet::cloneIfcActuatorType(const IfcActuatorType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcActuatorType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcActuatorType(this, obj, copyop);
    }
}

IfcAirTerminalBoxType *ExpressDataSet::getIfcAirTerminalBoxType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAirTerminalBoxType * > (current->second.get());
    }
    else {
        IfcAirTerminalBoxType *ret = static_cast< IfcAirTerminalBoxType * > (allocateIfcAirTerminalBoxType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAirTerminalBoxType(IfcAirTerminalBoxType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAirTerminalBoxType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAirTerminalBoxType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAirTerminalBoxType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAirTerminalBoxType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAirTerminalBoxType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAirTerminalBoxType > ExpressDataSet::createIfcAirTerminalBoxType(bool isVolatile) {
    if (isVolatile) {
        return new IfcAirTerminalBoxType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAirTerminalBoxType * > (allocateIfcAirTerminalBoxType(this, Step::Id_UNSET));
    }
}

IfcAirTerminalBoxType *ExpressDataSet::cloneIfcAirTerminalBoxType(ExpressDataSet *expressDataSet, const IfcAirTerminalBoxType &obj, const CopyOp &copyop) {
    IfcAirTerminalBoxType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAirTerminalBoxType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAirTerminalBoxType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAirTerminalBoxType *ExpressDataSet::cloneIfcAirTerminalBoxType(const IfcAirTerminalBoxType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAirTerminalBoxType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAirTerminalBoxType(this, obj, copyop);
    }
}

IfcAirTerminalType *ExpressDataSet::getIfcAirTerminalType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAirTerminalType * > (current->second.get());
    }
    else {
        IfcAirTerminalType *ret = static_cast< IfcAirTerminalType * > (allocateIfcAirTerminalType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAirTerminalType(IfcAirTerminalType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAirTerminalType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAirTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAirTerminalType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAirTerminalType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAirTerminalType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAirTerminalType > ExpressDataSet::createIfcAirTerminalType(bool isVolatile) {
    if (isVolatile) {
        return new IfcAirTerminalType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAirTerminalType * > (allocateIfcAirTerminalType(this, Step::Id_UNSET));
    }
}

IfcAirTerminalType *ExpressDataSet::cloneIfcAirTerminalType(ExpressDataSet *expressDataSet, const IfcAirTerminalType &obj, const CopyOp &copyop) {
    IfcAirTerminalType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAirTerminalType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAirTerminalType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAirTerminalType *ExpressDataSet::cloneIfcAirTerminalType(const IfcAirTerminalType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAirTerminalType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAirTerminalType(this, obj, copyop);
    }
}

IfcAirToAirHeatRecoveryType *ExpressDataSet::getIfcAirToAirHeatRecoveryType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAirToAirHeatRecoveryType * > (current->second.get());
    }
    else {
        IfcAirToAirHeatRecoveryType *ret = static_cast< IfcAirToAirHeatRecoveryType * > (allocateIfcAirToAirHeatRecoveryType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAirToAirHeatRecoveryType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAirToAirHeatRecoveryType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAirToAirHeatRecoveryType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAirToAirHeatRecoveryType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAirToAirHeatRecoveryType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAirToAirHeatRecoveryType > ExpressDataSet::createIfcAirToAirHeatRecoveryType(bool isVolatile) {
    if (isVolatile) {
        return new IfcAirToAirHeatRecoveryType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAirToAirHeatRecoveryType * > (allocateIfcAirToAirHeatRecoveryType(this, Step::Id_UNSET));
    }
}

IfcAirToAirHeatRecoveryType *ExpressDataSet::cloneIfcAirToAirHeatRecoveryType(ExpressDataSet *expressDataSet, const IfcAirToAirHeatRecoveryType &obj, const CopyOp &copyop) {
    IfcAirToAirHeatRecoveryType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAirToAirHeatRecoveryType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAirToAirHeatRecoveryType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAirToAirHeatRecoveryType *ExpressDataSet::cloneIfcAirToAirHeatRecoveryType(const IfcAirToAirHeatRecoveryType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAirToAirHeatRecoveryType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAirToAirHeatRecoveryType(this, obj, copyop);
    }
}

IfcAlarmType *ExpressDataSet::getIfcAlarmType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAlarmType * > (current->second.get());
    }
    else {
        IfcAlarmType *ret = static_cast< IfcAlarmType * > (allocateIfcAlarmType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAlarmType(IfcAlarmType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAlarmType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAlarmType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAlarmType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAlarmType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAlarmType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAlarmType > ExpressDataSet::createIfcAlarmType(bool isVolatile) {
    if (isVolatile) {
        return new IfcAlarmType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAlarmType * > (allocateIfcAlarmType(this, Step::Id_UNSET));
    }
}

IfcAlarmType *ExpressDataSet::cloneIfcAlarmType(ExpressDataSet *expressDataSet, const IfcAlarmType &obj, const CopyOp &copyop) {
    IfcAlarmType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAlarmType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAlarmType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAlarmType *ExpressDataSet::cloneIfcAlarmType(const IfcAlarmType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAlarmType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAlarmType(this, obj, copyop);
    }
}

IfcAngularDimension *ExpressDataSet::getIfcAngularDimension(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAngularDimension * > (current->second.get());
    }
    else {
        IfcAngularDimension *ret = static_cast< IfcAngularDimension * > (allocateIfcAngularDimension(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAngularDimension(IfcAngularDimension *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAngularDimension_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAngularDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAngularDimension *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAngularDimension(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAngularDimension_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAngularDimension > ExpressDataSet::createIfcAngularDimension(bool isVolatile) {
    if (isVolatile) {
        return new IfcAngularDimension(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAngularDimension * > (allocateIfcAngularDimension(this, Step::Id_UNSET));
    }
}

IfcAngularDimension *ExpressDataSet::cloneIfcAngularDimension(ExpressDataSet *expressDataSet, const IfcAngularDimension &obj, const CopyOp &copyop) {
    IfcAngularDimension *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAngularDimension(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAngularDimension_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAngularDimension *ExpressDataSet::cloneIfcAngularDimension(const IfcAngularDimension &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAngularDimension(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAngularDimension(this, obj, copyop);
    }
}

IfcAnnotation *ExpressDataSet::getIfcAnnotation(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAnnotation * > (current->second.get());
    }
    else {
        IfcAnnotation *ret = static_cast< IfcAnnotation * > (allocateIfcAnnotation(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAnnotation(IfcAnnotation *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAnnotation_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAnnotation(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAnnotation *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAnnotation(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAnnotation_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAnnotation > ExpressDataSet::createIfcAnnotation(bool isVolatile) {
    if (isVolatile) {
        return new IfcAnnotation(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAnnotation * > (allocateIfcAnnotation(this, Step::Id_UNSET));
    }
}

IfcAnnotation *ExpressDataSet::cloneIfcAnnotation(ExpressDataSet *expressDataSet, const IfcAnnotation &obj, const CopyOp &copyop) {
    IfcAnnotation *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAnnotation(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAnnotation_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAnnotation *ExpressDataSet::cloneIfcAnnotation(const IfcAnnotation &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAnnotation(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAnnotation(this, obj, copyop);
    }
}

IfcAnnotationCurveOccurrence *ExpressDataSet::getIfcAnnotationCurveOccurrence(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAnnotationCurveOccurrence * > (current->second.get());
    }
    else {
        IfcAnnotationCurveOccurrence *ret = static_cast< IfcAnnotationCurveOccurrence * > (allocateIfcAnnotationCurveOccurrence(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAnnotationCurveOccurrence_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAnnotationCurveOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAnnotationCurveOccurrence *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAnnotationCurveOccurrence(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAnnotationCurveOccurrence_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAnnotationCurveOccurrence > ExpressDataSet::createIfcAnnotationCurveOccurrence(bool isVolatile) {
    if (isVolatile) {
        return new IfcAnnotationCurveOccurrence(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAnnotationCurveOccurrence * > (allocateIfcAnnotationCurveOccurrence(this, Step::Id_UNSET));
    }
}

IfcAnnotationCurveOccurrence *ExpressDataSet::cloneIfcAnnotationCurveOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationCurveOccurrence &obj, const CopyOp &copyop) {
    IfcAnnotationCurveOccurrence *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAnnotationCurveOccurrence(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAnnotationCurveOccurrence_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAnnotationCurveOccurrence *ExpressDataSet::cloneIfcAnnotationCurveOccurrence(const IfcAnnotationCurveOccurrence &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAnnotationCurveOccurrence(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAnnotationCurveOccurrence(this, obj, copyop);
    }
}

IfcAnnotationFillArea *ExpressDataSet::getIfcAnnotationFillArea(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAnnotationFillArea * > (current->second.get());
    }
    else {
        IfcAnnotationFillArea *ret = static_cast< IfcAnnotationFillArea * > (allocateIfcAnnotationFillArea(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAnnotationFillArea(IfcAnnotationFillArea *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAnnotationFillArea_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAnnotationFillArea(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAnnotationFillArea *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAnnotationFillArea(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAnnotationFillArea_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAnnotationFillArea > ExpressDataSet::createIfcAnnotationFillArea(bool isVolatile) {
    if (isVolatile) {
        return new IfcAnnotationFillArea(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAnnotationFillArea * > (allocateIfcAnnotationFillArea(this, Step::Id_UNSET));
    }
}

IfcAnnotationFillArea *ExpressDataSet::cloneIfcAnnotationFillArea(ExpressDataSet *expressDataSet, const IfcAnnotationFillArea &obj, const CopyOp &copyop) {
    IfcAnnotationFillArea *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAnnotationFillArea(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAnnotationFillArea_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAnnotationFillArea *ExpressDataSet::cloneIfcAnnotationFillArea(const IfcAnnotationFillArea &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAnnotationFillArea(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAnnotationFillArea(this, obj, copyop);
    }
}

IfcAnnotationFillAreaOccurrence *ExpressDataSet::getIfcAnnotationFillAreaOccurrence(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAnnotationFillAreaOccurrence * > (current->second.get());
    }
    else {
        IfcAnnotationFillAreaOccurrence *ret = static_cast< IfcAnnotationFillAreaOccurrence * > (allocateIfcAnnotationFillAreaOccurrence(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAnnotationFillAreaOccurrence_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAnnotationFillAreaOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAnnotationFillAreaOccurrence *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAnnotationFillAreaOccurrence(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAnnotationFillAreaOccurrence_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAnnotationFillAreaOccurrence > ExpressDataSet::createIfcAnnotationFillAreaOccurrence(bool isVolatile) {
    if (isVolatile) {
        return new IfcAnnotationFillAreaOccurrence(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAnnotationFillAreaOccurrence * > (allocateIfcAnnotationFillAreaOccurrence(this, Step::Id_UNSET));
    }
}

IfcAnnotationFillAreaOccurrence *ExpressDataSet::cloneIfcAnnotationFillAreaOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationFillAreaOccurrence &obj, const CopyOp &copyop) {
    IfcAnnotationFillAreaOccurrence *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAnnotationFillAreaOccurrence(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAnnotationFillAreaOccurrence_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAnnotationFillAreaOccurrence *ExpressDataSet::cloneIfcAnnotationFillAreaOccurrence(const IfcAnnotationFillAreaOccurrence &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAnnotationFillAreaOccurrence(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAnnotationFillAreaOccurrence(this, obj, copyop);
    }
}

IfcAnnotationSurface *ExpressDataSet::getIfcAnnotationSurface(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAnnotationSurface * > (current->second.get());
    }
    else {
        IfcAnnotationSurface *ret = static_cast< IfcAnnotationSurface * > (allocateIfcAnnotationSurface(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAnnotationSurface(IfcAnnotationSurface *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAnnotationSurface_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAnnotationSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAnnotationSurface *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAnnotationSurface(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAnnotationSurface_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAnnotationSurface > ExpressDataSet::createIfcAnnotationSurface(bool isVolatile) {
    if (isVolatile) {
        return new IfcAnnotationSurface(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAnnotationSurface * > (allocateIfcAnnotationSurface(this, Step::Id_UNSET));
    }
}

IfcAnnotationSurface *ExpressDataSet::cloneIfcAnnotationSurface(ExpressDataSet *expressDataSet, const IfcAnnotationSurface &obj, const CopyOp &copyop) {
    IfcAnnotationSurface *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAnnotationSurface(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAnnotationSurface_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAnnotationSurface *ExpressDataSet::cloneIfcAnnotationSurface(const IfcAnnotationSurface &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAnnotationSurface(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAnnotationSurface(this, obj, copyop);
    }
}

IfcAnnotationSurfaceOccurrence *ExpressDataSet::getIfcAnnotationSurfaceOccurrence(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAnnotationSurfaceOccurrence * > (current->second.get());
    }
    else {
        IfcAnnotationSurfaceOccurrence *ret = static_cast< IfcAnnotationSurfaceOccurrence * > (allocateIfcAnnotationSurfaceOccurrence(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAnnotationSurfaceOccurrence_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAnnotationSurfaceOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAnnotationSurfaceOccurrence *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAnnotationSurfaceOccurrence(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAnnotationSurfaceOccurrence_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAnnotationSurfaceOccurrence > ExpressDataSet::createIfcAnnotationSurfaceOccurrence(bool isVolatile) {
    if (isVolatile) {
        return new IfcAnnotationSurfaceOccurrence(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAnnotationSurfaceOccurrence * > (allocateIfcAnnotationSurfaceOccurrence(this, Step::Id_UNSET));
    }
}

IfcAnnotationSurfaceOccurrence *ExpressDataSet::cloneIfcAnnotationSurfaceOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationSurfaceOccurrence &obj, const CopyOp &copyop) {
    IfcAnnotationSurfaceOccurrence *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAnnotationSurfaceOccurrence(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAnnotationSurfaceOccurrence_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAnnotationSurfaceOccurrence *ExpressDataSet::cloneIfcAnnotationSurfaceOccurrence(const IfcAnnotationSurfaceOccurrence &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAnnotationSurfaceOccurrence(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAnnotationSurfaceOccurrence(this, obj, copyop);
    }
}

IfcAnnotationSymbolOccurrence *ExpressDataSet::getIfcAnnotationSymbolOccurrence(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAnnotationSymbolOccurrence * > (current->second.get());
    }
    else {
        IfcAnnotationSymbolOccurrence *ret = static_cast< IfcAnnotationSymbolOccurrence * > (allocateIfcAnnotationSymbolOccurrence(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAnnotationSymbolOccurrence_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAnnotationSymbolOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAnnotationSymbolOccurrence *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAnnotationSymbolOccurrence(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAnnotationSymbolOccurrence_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAnnotationSymbolOccurrence > ExpressDataSet::createIfcAnnotationSymbolOccurrence(bool isVolatile) {
    if (isVolatile) {
        return new IfcAnnotationSymbolOccurrence(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAnnotationSymbolOccurrence * > (allocateIfcAnnotationSymbolOccurrence(this, Step::Id_UNSET));
    }
}

IfcAnnotationSymbolOccurrence *ExpressDataSet::cloneIfcAnnotationSymbolOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationSymbolOccurrence &obj, const CopyOp &copyop) {
    IfcAnnotationSymbolOccurrence *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAnnotationSymbolOccurrence(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAnnotationSymbolOccurrence_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAnnotationSymbolOccurrence *ExpressDataSet::cloneIfcAnnotationSymbolOccurrence(const IfcAnnotationSymbolOccurrence &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAnnotationSymbolOccurrence(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAnnotationSymbolOccurrence(this, obj, copyop);
    }
}

IfcAnnotationTextOccurrence *ExpressDataSet::getIfcAnnotationTextOccurrence(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAnnotationTextOccurrence * > (current->second.get());
    }
    else {
        IfcAnnotationTextOccurrence *ret = static_cast< IfcAnnotationTextOccurrence * > (allocateIfcAnnotationTextOccurrence(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAnnotationTextOccurrence_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAnnotationTextOccurrence(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAnnotationTextOccurrence *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAnnotationTextOccurrence(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAnnotationTextOccurrence_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAnnotationTextOccurrence > ExpressDataSet::createIfcAnnotationTextOccurrence(bool isVolatile) {
    if (isVolatile) {
        return new IfcAnnotationTextOccurrence(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAnnotationTextOccurrence * > (allocateIfcAnnotationTextOccurrence(this, Step::Id_UNSET));
    }
}

IfcAnnotationTextOccurrence *ExpressDataSet::cloneIfcAnnotationTextOccurrence(ExpressDataSet *expressDataSet, const IfcAnnotationTextOccurrence &obj, const CopyOp &copyop) {
    IfcAnnotationTextOccurrence *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAnnotationTextOccurrence(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAnnotationTextOccurrence_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAnnotationTextOccurrence *ExpressDataSet::cloneIfcAnnotationTextOccurrence(const IfcAnnotationTextOccurrence &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAnnotationTextOccurrence(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAnnotationTextOccurrence(this, obj, copyop);
    }
}

IfcApplication *ExpressDataSet::getIfcApplication(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcApplication * > (current->second.get());
    }
    else {
        IfcApplication *ret = static_cast< IfcApplication * > (allocateIfcApplication(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcApplication(IfcApplication *arg) {
    getAll().erase(arg->getKey());
    return m_IfcApplication_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcApplication(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcApplication *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcApplication(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcApplication_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcApplication > ExpressDataSet::createIfcApplication(bool isVolatile) {
    if (isVolatile) {
        return new IfcApplication(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcApplication * > (allocateIfcApplication(this, Step::Id_UNSET));
    }
}

IfcApplication *ExpressDataSet::cloneIfcApplication(ExpressDataSet *expressDataSet, const IfcApplication &obj, const CopyOp &copyop) {
    IfcApplication *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcApplication(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcApplication_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcApplication *ExpressDataSet::cloneIfcApplication(const IfcApplication &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcApplication(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcApplication(this, obj, copyop);
    }
}

IfcAppliedValueRelationship *ExpressDataSet::getIfcAppliedValueRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAppliedValueRelationship * > (current->second.get());
    }
    else {
        IfcAppliedValueRelationship *ret = static_cast< IfcAppliedValueRelationship * > (allocateIfcAppliedValueRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAppliedValueRelationship(IfcAppliedValueRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAppliedValueRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAppliedValueRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAppliedValueRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAppliedValueRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAppliedValueRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAppliedValueRelationship > ExpressDataSet::createIfcAppliedValueRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcAppliedValueRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAppliedValueRelationship * > (allocateIfcAppliedValueRelationship(this, Step::Id_UNSET));
    }
}

IfcAppliedValueRelationship *ExpressDataSet::cloneIfcAppliedValueRelationship(ExpressDataSet *expressDataSet, const IfcAppliedValueRelationship &obj, const CopyOp &copyop) {
    IfcAppliedValueRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAppliedValueRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAppliedValueRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAppliedValueRelationship *ExpressDataSet::cloneIfcAppliedValueRelationship(const IfcAppliedValueRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAppliedValueRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAppliedValueRelationship(this, obj, copyop);
    }
}

IfcApproval *ExpressDataSet::getIfcApproval(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcApproval * > (current->second.get());
    }
    else {
        IfcApproval *ret = static_cast< IfcApproval * > (allocateIfcApproval(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcApproval(IfcApproval *arg) {
    getAll().erase(arg->getKey());
    return m_IfcApproval_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcApproval(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcApproval *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcApproval(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcApproval_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcApproval > ExpressDataSet::createIfcApproval(bool isVolatile) {
    if (isVolatile) {
        return new IfcApproval(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcApproval * > (allocateIfcApproval(this, Step::Id_UNSET));
    }
}

IfcApproval *ExpressDataSet::cloneIfcApproval(ExpressDataSet *expressDataSet, const IfcApproval &obj, const CopyOp &copyop) {
    IfcApproval *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcApproval(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcApproval_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcApproval *ExpressDataSet::cloneIfcApproval(const IfcApproval &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcApproval(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcApproval(this, obj, copyop);
    }
}

IfcApprovalActorRelationship *ExpressDataSet::getIfcApprovalActorRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcApprovalActorRelationship * > (current->second.get());
    }
    else {
        IfcApprovalActorRelationship *ret = static_cast< IfcApprovalActorRelationship * > (allocateIfcApprovalActorRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcApprovalActorRelationship(IfcApprovalActorRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcApprovalActorRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcApprovalActorRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcApprovalActorRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcApprovalActorRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcApprovalActorRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcApprovalActorRelationship > ExpressDataSet::createIfcApprovalActorRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcApprovalActorRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcApprovalActorRelationship * > (allocateIfcApprovalActorRelationship(this, Step::Id_UNSET));
    }
}

IfcApprovalActorRelationship *ExpressDataSet::cloneIfcApprovalActorRelationship(ExpressDataSet *expressDataSet, const IfcApprovalActorRelationship &obj, const CopyOp &copyop) {
    IfcApprovalActorRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcApprovalActorRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcApprovalActorRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcApprovalActorRelationship *ExpressDataSet::cloneIfcApprovalActorRelationship(const IfcApprovalActorRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcApprovalActorRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcApprovalActorRelationship(this, obj, copyop);
    }
}

IfcApprovalPropertyRelationship *ExpressDataSet::getIfcApprovalPropertyRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcApprovalPropertyRelationship * > (current->second.get());
    }
    else {
        IfcApprovalPropertyRelationship *ret = static_cast< IfcApprovalPropertyRelationship * > (allocateIfcApprovalPropertyRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcApprovalPropertyRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcApprovalPropertyRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcApprovalPropertyRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcApprovalPropertyRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcApprovalPropertyRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcApprovalPropertyRelationship > ExpressDataSet::createIfcApprovalPropertyRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcApprovalPropertyRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcApprovalPropertyRelationship * > (allocateIfcApprovalPropertyRelationship(this, Step::Id_UNSET));
    }
}

IfcApprovalPropertyRelationship *ExpressDataSet::cloneIfcApprovalPropertyRelationship(ExpressDataSet *expressDataSet, const IfcApprovalPropertyRelationship &obj, const CopyOp &copyop) {
    IfcApprovalPropertyRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcApprovalPropertyRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcApprovalPropertyRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcApprovalPropertyRelationship *ExpressDataSet::cloneIfcApprovalPropertyRelationship(const IfcApprovalPropertyRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcApprovalPropertyRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcApprovalPropertyRelationship(this, obj, copyop);
    }
}

IfcApprovalRelationship *ExpressDataSet::getIfcApprovalRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcApprovalRelationship * > (current->second.get());
    }
    else {
        IfcApprovalRelationship *ret = static_cast< IfcApprovalRelationship * > (allocateIfcApprovalRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcApprovalRelationship(IfcApprovalRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcApprovalRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcApprovalRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcApprovalRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcApprovalRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcApprovalRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcApprovalRelationship > ExpressDataSet::createIfcApprovalRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcApprovalRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcApprovalRelationship * > (allocateIfcApprovalRelationship(this, Step::Id_UNSET));
    }
}

IfcApprovalRelationship *ExpressDataSet::cloneIfcApprovalRelationship(ExpressDataSet *expressDataSet, const IfcApprovalRelationship &obj, const CopyOp &copyop) {
    IfcApprovalRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcApprovalRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcApprovalRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcApprovalRelationship *ExpressDataSet::cloneIfcApprovalRelationship(const IfcApprovalRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcApprovalRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcApprovalRelationship(this, obj, copyop);
    }
}

IfcArbitraryClosedProfileDef *ExpressDataSet::getIfcArbitraryClosedProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcArbitraryClosedProfileDef * > (current->second.get());
    }
    else {
        IfcArbitraryClosedProfileDef *ret = static_cast< IfcArbitraryClosedProfileDef * > (allocateIfcArbitraryClosedProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcArbitraryClosedProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcArbitraryClosedProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcArbitraryClosedProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcArbitraryClosedProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcArbitraryClosedProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcArbitraryClosedProfileDef > ExpressDataSet::createIfcArbitraryClosedProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcArbitraryClosedProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcArbitraryClosedProfileDef * > (allocateIfcArbitraryClosedProfileDef(this, Step::Id_UNSET));
    }
}

IfcArbitraryClosedProfileDef *ExpressDataSet::cloneIfcArbitraryClosedProfileDef(ExpressDataSet *expressDataSet, const IfcArbitraryClosedProfileDef &obj, const CopyOp &copyop) {
    IfcArbitraryClosedProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcArbitraryClosedProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcArbitraryClosedProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcArbitraryClosedProfileDef *ExpressDataSet::cloneIfcArbitraryClosedProfileDef(const IfcArbitraryClosedProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcArbitraryClosedProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcArbitraryClosedProfileDef(this, obj, copyop);
    }
}

IfcArbitraryOpenProfileDef *ExpressDataSet::getIfcArbitraryOpenProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcArbitraryOpenProfileDef * > (current->second.get());
    }
    else {
        IfcArbitraryOpenProfileDef *ret = static_cast< IfcArbitraryOpenProfileDef * > (allocateIfcArbitraryOpenProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcArbitraryOpenProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcArbitraryOpenProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcArbitraryOpenProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcArbitraryOpenProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcArbitraryOpenProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcArbitraryOpenProfileDef > ExpressDataSet::createIfcArbitraryOpenProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcArbitraryOpenProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcArbitraryOpenProfileDef * > (allocateIfcArbitraryOpenProfileDef(this, Step::Id_UNSET));
    }
}

IfcArbitraryOpenProfileDef *ExpressDataSet::cloneIfcArbitraryOpenProfileDef(ExpressDataSet *expressDataSet, const IfcArbitraryOpenProfileDef &obj, const CopyOp &copyop) {
    IfcArbitraryOpenProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcArbitraryOpenProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcArbitraryOpenProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcArbitraryOpenProfileDef *ExpressDataSet::cloneIfcArbitraryOpenProfileDef(const IfcArbitraryOpenProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcArbitraryOpenProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcArbitraryOpenProfileDef(this, obj, copyop);
    }
}

IfcArbitraryProfileDefWithVoids *ExpressDataSet::getIfcArbitraryProfileDefWithVoids(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcArbitraryProfileDefWithVoids * > (current->second.get());
    }
    else {
        IfcArbitraryProfileDefWithVoids *ret = static_cast< IfcArbitraryProfileDefWithVoids * > (allocateIfcArbitraryProfileDefWithVoids(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *arg) {
    getAll().erase(arg->getKey());
    return m_IfcArbitraryProfileDefWithVoids_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcArbitraryProfileDefWithVoids(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcArbitraryProfileDefWithVoids *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcArbitraryProfileDefWithVoids(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcArbitraryProfileDefWithVoids_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcArbitraryProfileDefWithVoids > ExpressDataSet::createIfcArbitraryProfileDefWithVoids(bool isVolatile) {
    if (isVolatile) {
        return new IfcArbitraryProfileDefWithVoids(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcArbitraryProfileDefWithVoids * > (allocateIfcArbitraryProfileDefWithVoids(this, Step::Id_UNSET));
    }
}

IfcArbitraryProfileDefWithVoids *ExpressDataSet::cloneIfcArbitraryProfileDefWithVoids(ExpressDataSet *expressDataSet, const IfcArbitraryProfileDefWithVoids &obj, const CopyOp &copyop) {
    IfcArbitraryProfileDefWithVoids *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcArbitraryProfileDefWithVoids(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcArbitraryProfileDefWithVoids_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcArbitraryProfileDefWithVoids *ExpressDataSet::cloneIfcArbitraryProfileDefWithVoids(const IfcArbitraryProfileDefWithVoids &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcArbitraryProfileDefWithVoids(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcArbitraryProfileDefWithVoids(this, obj, copyop);
    }
}

IfcAsset *ExpressDataSet::getIfcAsset(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAsset * > (current->second.get());
    }
    else {
        IfcAsset *ret = static_cast< IfcAsset * > (allocateIfcAsset(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAsset(IfcAsset *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAsset_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAsset(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAsset *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAsset(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAsset_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAsset > ExpressDataSet::createIfcAsset(bool isVolatile) {
    if (isVolatile) {
        return new IfcAsset(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAsset * > (allocateIfcAsset(this, Step::Id_UNSET));
    }
}

IfcAsset *ExpressDataSet::cloneIfcAsset(ExpressDataSet *expressDataSet, const IfcAsset &obj, const CopyOp &copyop) {
    IfcAsset *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAsset(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAsset_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAsset *ExpressDataSet::cloneIfcAsset(const IfcAsset &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAsset(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAsset(this, obj, copyop);
    }
}

IfcAsymmetricIShapeProfileDef *ExpressDataSet::getIfcAsymmetricIShapeProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAsymmetricIShapeProfileDef * > (current->second.get());
    }
    else {
        IfcAsymmetricIShapeProfileDef *ret = static_cast< IfcAsymmetricIShapeProfileDef * > (allocateIfcAsymmetricIShapeProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAsymmetricIShapeProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAsymmetricIShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAsymmetricIShapeProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAsymmetricIShapeProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAsymmetricIShapeProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAsymmetricIShapeProfileDef > ExpressDataSet::createIfcAsymmetricIShapeProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcAsymmetricIShapeProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAsymmetricIShapeProfileDef * > (allocateIfcAsymmetricIShapeProfileDef(this, Step::Id_UNSET));
    }
}

IfcAsymmetricIShapeProfileDef *ExpressDataSet::cloneIfcAsymmetricIShapeProfileDef(ExpressDataSet *expressDataSet, const IfcAsymmetricIShapeProfileDef &obj, const CopyOp &copyop) {
    IfcAsymmetricIShapeProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAsymmetricIShapeProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAsymmetricIShapeProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAsymmetricIShapeProfileDef *ExpressDataSet::cloneIfcAsymmetricIShapeProfileDef(const IfcAsymmetricIShapeProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAsymmetricIShapeProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAsymmetricIShapeProfileDef(this, obj, copyop);
    }
}

IfcAxis1Placement *ExpressDataSet::getIfcAxis1Placement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAxis1Placement * > (current->second.get());
    }
    else {
        IfcAxis1Placement *ret = static_cast< IfcAxis1Placement * > (allocateIfcAxis1Placement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAxis1Placement(IfcAxis1Placement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAxis1Placement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAxis1Placement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAxis1Placement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAxis1Placement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAxis1Placement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAxis1Placement > ExpressDataSet::createIfcAxis1Placement(bool isVolatile) {
    if (isVolatile) {
        return new IfcAxis1Placement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAxis1Placement * > (allocateIfcAxis1Placement(this, Step::Id_UNSET));
    }
}

IfcAxis1Placement *ExpressDataSet::cloneIfcAxis1Placement(ExpressDataSet *expressDataSet, const IfcAxis1Placement &obj, const CopyOp &copyop) {
    IfcAxis1Placement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAxis1Placement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAxis1Placement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAxis1Placement *ExpressDataSet::cloneIfcAxis1Placement(const IfcAxis1Placement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAxis1Placement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAxis1Placement(this, obj, copyop);
    }
}

IfcAxis2Placement2D *ExpressDataSet::getIfcAxis2Placement2D(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAxis2Placement2D * > (current->second.get());
    }
    else {
        IfcAxis2Placement2D *ret = static_cast< IfcAxis2Placement2D * > (allocateIfcAxis2Placement2D(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAxis2Placement2D(IfcAxis2Placement2D *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAxis2Placement2D_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAxis2Placement2D(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAxis2Placement2D *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAxis2Placement2D(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAxis2Placement2D_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAxis2Placement2D > ExpressDataSet::createIfcAxis2Placement2D(bool isVolatile) {
    if (isVolatile) {
        return new IfcAxis2Placement2D(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAxis2Placement2D * > (allocateIfcAxis2Placement2D(this, Step::Id_UNSET));
    }
}

IfcAxis2Placement2D *ExpressDataSet::cloneIfcAxis2Placement2D(ExpressDataSet *expressDataSet, const IfcAxis2Placement2D &obj, const CopyOp &copyop) {
    IfcAxis2Placement2D *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAxis2Placement2D(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAxis2Placement2D_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAxis2Placement2D *ExpressDataSet::cloneIfcAxis2Placement2D(const IfcAxis2Placement2D &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAxis2Placement2D(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAxis2Placement2D(this, obj, copyop);
    }
}

IfcAxis2Placement3D *ExpressDataSet::getIfcAxis2Placement3D(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcAxis2Placement3D * > (current->second.get());
    }
    else {
        IfcAxis2Placement3D *ret = static_cast< IfcAxis2Placement3D * > (allocateIfcAxis2Placement3D(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcAxis2Placement3D(IfcAxis2Placement3D *arg) {
    getAll().erase(arg->getKey());
    return m_IfcAxis2Placement3D_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcAxis2Placement3D(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcAxis2Placement3D *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcAxis2Placement3D(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcAxis2Placement3D_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcAxis2Placement3D > ExpressDataSet::createIfcAxis2Placement3D(bool isVolatile) {
    if (isVolatile) {
        return new IfcAxis2Placement3D(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcAxis2Placement3D * > (allocateIfcAxis2Placement3D(this, Step::Id_UNSET));
    }
}

IfcAxis2Placement3D *ExpressDataSet::cloneIfcAxis2Placement3D(ExpressDataSet *expressDataSet, const IfcAxis2Placement3D &obj, const CopyOp &copyop) {
    IfcAxis2Placement3D *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcAxis2Placement3D(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcAxis2Placement3D_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcAxis2Placement3D *ExpressDataSet::cloneIfcAxis2Placement3D(const IfcAxis2Placement3D &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcAxis2Placement3D(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcAxis2Placement3D(this, obj, copyop);
    }
}

IfcBeam *ExpressDataSet::getIfcBeam(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBeam * > (current->second.get());
    }
    else {
        IfcBeam *ret = static_cast< IfcBeam * > (allocateIfcBeam(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBeam(IfcBeam *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBeam_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBeam(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBeam *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBeam(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBeam_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBeam > ExpressDataSet::createIfcBeam(bool isVolatile) {
    if (isVolatile) {
        return new IfcBeam(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBeam * > (allocateIfcBeam(this, Step::Id_UNSET));
    }
}

IfcBeam *ExpressDataSet::cloneIfcBeam(ExpressDataSet *expressDataSet, const IfcBeam &obj, const CopyOp &copyop) {
    IfcBeam *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBeam(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBeam_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBeam *ExpressDataSet::cloneIfcBeam(const IfcBeam &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBeam(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBeam(this, obj, copyop);
    }
}

IfcBeamType *ExpressDataSet::getIfcBeamType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBeamType * > (current->second.get());
    }
    else {
        IfcBeamType *ret = static_cast< IfcBeamType * > (allocateIfcBeamType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBeamType(IfcBeamType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBeamType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBeamType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBeamType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBeamType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBeamType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBeamType > ExpressDataSet::createIfcBeamType(bool isVolatile) {
    if (isVolatile) {
        return new IfcBeamType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBeamType * > (allocateIfcBeamType(this, Step::Id_UNSET));
    }
}

IfcBeamType *ExpressDataSet::cloneIfcBeamType(ExpressDataSet *expressDataSet, const IfcBeamType &obj, const CopyOp &copyop) {
    IfcBeamType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBeamType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBeamType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBeamType *ExpressDataSet::cloneIfcBeamType(const IfcBeamType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBeamType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBeamType(this, obj, copyop);
    }
}

IfcBezierCurve *ExpressDataSet::getIfcBezierCurve(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBezierCurve * > (current->second.get());
    }
    else {
        IfcBezierCurve *ret = static_cast< IfcBezierCurve * > (allocateIfcBezierCurve(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBezierCurve(IfcBezierCurve *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBezierCurve_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBezierCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBezierCurve *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBezierCurve(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBezierCurve_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBezierCurve > ExpressDataSet::createIfcBezierCurve(bool isVolatile) {
    if (isVolatile) {
        return new IfcBezierCurve(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBezierCurve * > (allocateIfcBezierCurve(this, Step::Id_UNSET));
    }
}

IfcBezierCurve *ExpressDataSet::cloneIfcBezierCurve(ExpressDataSet *expressDataSet, const IfcBezierCurve &obj, const CopyOp &copyop) {
    IfcBezierCurve *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBezierCurve(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBezierCurve_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBezierCurve *ExpressDataSet::cloneIfcBezierCurve(const IfcBezierCurve &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBezierCurve(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBezierCurve(this, obj, copyop);
    }
}

IfcBlobTexture *ExpressDataSet::getIfcBlobTexture(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBlobTexture * > (current->second.get());
    }
    else {
        IfcBlobTexture *ret = static_cast< IfcBlobTexture * > (allocateIfcBlobTexture(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBlobTexture(IfcBlobTexture *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBlobTexture_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBlobTexture(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBlobTexture *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBlobTexture(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBlobTexture_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBlobTexture > ExpressDataSet::createIfcBlobTexture(bool isVolatile) {
    if (isVolatile) {
        return new IfcBlobTexture(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBlobTexture * > (allocateIfcBlobTexture(this, Step::Id_UNSET));
    }
}

IfcBlobTexture *ExpressDataSet::cloneIfcBlobTexture(ExpressDataSet *expressDataSet, const IfcBlobTexture &obj, const CopyOp &copyop) {
    IfcBlobTexture *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBlobTexture(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBlobTexture_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBlobTexture *ExpressDataSet::cloneIfcBlobTexture(const IfcBlobTexture &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBlobTexture(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBlobTexture(this, obj, copyop);
    }
}

IfcBlock *ExpressDataSet::getIfcBlock(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBlock * > (current->second.get());
    }
    else {
        IfcBlock *ret = static_cast< IfcBlock * > (allocateIfcBlock(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBlock(IfcBlock *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBlock_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBlock(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBlock *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBlock(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBlock_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBlock > ExpressDataSet::createIfcBlock(bool isVolatile) {
    if (isVolatile) {
        return new IfcBlock(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBlock * > (allocateIfcBlock(this, Step::Id_UNSET));
    }
}

IfcBlock *ExpressDataSet::cloneIfcBlock(ExpressDataSet *expressDataSet, const IfcBlock &obj, const CopyOp &copyop) {
    IfcBlock *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBlock(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBlock_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBlock *ExpressDataSet::cloneIfcBlock(const IfcBlock &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBlock(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBlock(this, obj, copyop);
    }
}

IfcBoilerType *ExpressDataSet::getIfcBoilerType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBoilerType * > (current->second.get());
    }
    else {
        IfcBoilerType *ret = static_cast< IfcBoilerType * > (allocateIfcBoilerType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBoilerType(IfcBoilerType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBoilerType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBoilerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBoilerType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBoilerType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBoilerType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBoilerType > ExpressDataSet::createIfcBoilerType(bool isVolatile) {
    if (isVolatile) {
        return new IfcBoilerType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBoilerType * > (allocateIfcBoilerType(this, Step::Id_UNSET));
    }
}

IfcBoilerType *ExpressDataSet::cloneIfcBoilerType(ExpressDataSet *expressDataSet, const IfcBoilerType &obj, const CopyOp &copyop) {
    IfcBoilerType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBoilerType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBoilerType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBoilerType *ExpressDataSet::cloneIfcBoilerType(const IfcBoilerType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBoilerType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBoilerType(this, obj, copyop);
    }
}

IfcBooleanClippingResult *ExpressDataSet::getIfcBooleanClippingResult(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBooleanClippingResult * > (current->second.get());
    }
    else {
        IfcBooleanClippingResult *ret = static_cast< IfcBooleanClippingResult * > (allocateIfcBooleanClippingResult(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBooleanClippingResult(IfcBooleanClippingResult *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBooleanClippingResult_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBooleanClippingResult(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBooleanClippingResult *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBooleanClippingResult(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBooleanClippingResult_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBooleanClippingResult > ExpressDataSet::createIfcBooleanClippingResult(bool isVolatile) {
    if (isVolatile) {
        return new IfcBooleanClippingResult(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBooleanClippingResult * > (allocateIfcBooleanClippingResult(this, Step::Id_UNSET));
    }
}

IfcBooleanClippingResult *ExpressDataSet::cloneIfcBooleanClippingResult(ExpressDataSet *expressDataSet, const IfcBooleanClippingResult &obj, const CopyOp &copyop) {
    IfcBooleanClippingResult *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBooleanClippingResult(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBooleanClippingResult_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBooleanClippingResult *ExpressDataSet::cloneIfcBooleanClippingResult(const IfcBooleanClippingResult &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBooleanClippingResult(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBooleanClippingResult(this, obj, copyop);
    }
}

IfcBooleanResult *ExpressDataSet::getIfcBooleanResult(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBooleanResult * > (current->second.get());
    }
    else {
        IfcBooleanResult *ret = static_cast< IfcBooleanResult * > (allocateIfcBooleanResult(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBooleanResult(IfcBooleanResult *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBooleanResult_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBooleanResult(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBooleanResult *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBooleanResult(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBooleanResult_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBooleanResult > ExpressDataSet::createIfcBooleanResult(bool isVolatile) {
    if (isVolatile) {
        return new IfcBooleanResult(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBooleanResult * > (allocateIfcBooleanResult(this, Step::Id_UNSET));
    }
}

IfcBooleanResult *ExpressDataSet::cloneIfcBooleanResult(ExpressDataSet *expressDataSet, const IfcBooleanResult &obj, const CopyOp &copyop) {
    IfcBooleanResult *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBooleanResult(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBooleanResult_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBooleanResult *ExpressDataSet::cloneIfcBooleanResult(const IfcBooleanResult &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBooleanResult(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBooleanResult(this, obj, copyop);
    }
}

IfcBoundaryEdgeCondition *ExpressDataSet::getIfcBoundaryEdgeCondition(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBoundaryEdgeCondition * > (current->second.get());
    }
    else {
        IfcBoundaryEdgeCondition *ret = static_cast< IfcBoundaryEdgeCondition * > (allocateIfcBoundaryEdgeCondition(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBoundaryEdgeCondition_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBoundaryEdgeCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBoundaryEdgeCondition *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBoundaryEdgeCondition(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBoundaryEdgeCondition_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBoundaryEdgeCondition > ExpressDataSet::createIfcBoundaryEdgeCondition(bool isVolatile) {
    if (isVolatile) {
        return new IfcBoundaryEdgeCondition(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBoundaryEdgeCondition * > (allocateIfcBoundaryEdgeCondition(this, Step::Id_UNSET));
    }
}

IfcBoundaryEdgeCondition *ExpressDataSet::cloneIfcBoundaryEdgeCondition(ExpressDataSet *expressDataSet, const IfcBoundaryEdgeCondition &obj, const CopyOp &copyop) {
    IfcBoundaryEdgeCondition *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBoundaryEdgeCondition(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBoundaryEdgeCondition_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBoundaryEdgeCondition *ExpressDataSet::cloneIfcBoundaryEdgeCondition(const IfcBoundaryEdgeCondition &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBoundaryEdgeCondition(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBoundaryEdgeCondition(this, obj, copyop);
    }
}

IfcBoundaryFaceCondition *ExpressDataSet::getIfcBoundaryFaceCondition(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBoundaryFaceCondition * > (current->second.get());
    }
    else {
        IfcBoundaryFaceCondition *ret = static_cast< IfcBoundaryFaceCondition * > (allocateIfcBoundaryFaceCondition(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBoundaryFaceCondition_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBoundaryFaceCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBoundaryFaceCondition *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBoundaryFaceCondition(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBoundaryFaceCondition_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBoundaryFaceCondition > ExpressDataSet::createIfcBoundaryFaceCondition(bool isVolatile) {
    if (isVolatile) {
        return new IfcBoundaryFaceCondition(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBoundaryFaceCondition * > (allocateIfcBoundaryFaceCondition(this, Step::Id_UNSET));
    }
}

IfcBoundaryFaceCondition *ExpressDataSet::cloneIfcBoundaryFaceCondition(ExpressDataSet *expressDataSet, const IfcBoundaryFaceCondition &obj, const CopyOp &copyop) {
    IfcBoundaryFaceCondition *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBoundaryFaceCondition(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBoundaryFaceCondition_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBoundaryFaceCondition *ExpressDataSet::cloneIfcBoundaryFaceCondition(const IfcBoundaryFaceCondition &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBoundaryFaceCondition(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBoundaryFaceCondition(this, obj, copyop);
    }
}

IfcBoundaryNodeCondition *ExpressDataSet::getIfcBoundaryNodeCondition(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBoundaryNodeCondition * > (current->second.get());
    }
    else {
        IfcBoundaryNodeCondition *ret = static_cast< IfcBoundaryNodeCondition * > (allocateIfcBoundaryNodeCondition(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBoundaryNodeCondition_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBoundaryNodeCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBoundaryNodeCondition *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBoundaryNodeCondition(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBoundaryNodeCondition_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBoundaryNodeCondition > ExpressDataSet::createIfcBoundaryNodeCondition(bool isVolatile) {
    if (isVolatile) {
        return new IfcBoundaryNodeCondition(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBoundaryNodeCondition * > (allocateIfcBoundaryNodeCondition(this, Step::Id_UNSET));
    }
}

IfcBoundaryNodeCondition *ExpressDataSet::cloneIfcBoundaryNodeCondition(ExpressDataSet *expressDataSet, const IfcBoundaryNodeCondition &obj, const CopyOp &copyop) {
    IfcBoundaryNodeCondition *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBoundaryNodeCondition(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBoundaryNodeCondition_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBoundaryNodeCondition *ExpressDataSet::cloneIfcBoundaryNodeCondition(const IfcBoundaryNodeCondition &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBoundaryNodeCondition(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBoundaryNodeCondition(this, obj, copyop);
    }
}

IfcBoundaryNodeConditionWarping *ExpressDataSet::getIfcBoundaryNodeConditionWarping(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBoundaryNodeConditionWarping * > (current->second.get());
    }
    else {
        IfcBoundaryNodeConditionWarping *ret = static_cast< IfcBoundaryNodeConditionWarping * > (allocateIfcBoundaryNodeConditionWarping(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBoundaryNodeConditionWarping_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBoundaryNodeConditionWarping(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBoundaryNodeConditionWarping *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBoundaryNodeConditionWarping(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBoundaryNodeConditionWarping_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBoundaryNodeConditionWarping > ExpressDataSet::createIfcBoundaryNodeConditionWarping(bool isVolatile) {
    if (isVolatile) {
        return new IfcBoundaryNodeConditionWarping(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBoundaryNodeConditionWarping * > (allocateIfcBoundaryNodeConditionWarping(this, Step::Id_UNSET));
    }
}

IfcBoundaryNodeConditionWarping *ExpressDataSet::cloneIfcBoundaryNodeConditionWarping(ExpressDataSet *expressDataSet, const IfcBoundaryNodeConditionWarping &obj, const CopyOp &copyop) {
    IfcBoundaryNodeConditionWarping *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBoundaryNodeConditionWarping(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBoundaryNodeConditionWarping_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBoundaryNodeConditionWarping *ExpressDataSet::cloneIfcBoundaryNodeConditionWarping(const IfcBoundaryNodeConditionWarping &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBoundaryNodeConditionWarping(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBoundaryNodeConditionWarping(this, obj, copyop);
    }
}

IfcBoundedSurface *ExpressDataSet::getIfcBoundedSurface(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBoundedSurface * > (current->second.get());
    }
    else {
        IfcBoundedSurface *ret = static_cast< IfcBoundedSurface * > (allocateIfcBoundedSurface(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBoundedSurface(IfcBoundedSurface *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBoundedSurface_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBoundedSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBoundedSurface *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBoundedSurface(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBoundedSurface_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBoundedSurface > ExpressDataSet::createIfcBoundedSurface(bool isVolatile) {
    if (isVolatile) {
        return new IfcBoundedSurface(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBoundedSurface * > (allocateIfcBoundedSurface(this, Step::Id_UNSET));
    }
}

IfcBoundedSurface *ExpressDataSet::cloneIfcBoundedSurface(ExpressDataSet *expressDataSet, const IfcBoundedSurface &obj, const CopyOp &copyop) {
    IfcBoundedSurface *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBoundedSurface(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBoundedSurface_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBoundedSurface *ExpressDataSet::cloneIfcBoundedSurface(const IfcBoundedSurface &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBoundedSurface(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBoundedSurface(this, obj, copyop);
    }
}

IfcBoundingBox *ExpressDataSet::getIfcBoundingBox(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBoundingBox * > (current->second.get());
    }
    else {
        IfcBoundingBox *ret = static_cast< IfcBoundingBox * > (allocateIfcBoundingBox(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBoundingBox(IfcBoundingBox *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBoundingBox_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBoundingBox(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBoundingBox *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBoundingBox(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBoundingBox_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBoundingBox > ExpressDataSet::createIfcBoundingBox(bool isVolatile) {
    if (isVolatile) {
        return new IfcBoundingBox(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBoundingBox * > (allocateIfcBoundingBox(this, Step::Id_UNSET));
    }
}

IfcBoundingBox *ExpressDataSet::cloneIfcBoundingBox(ExpressDataSet *expressDataSet, const IfcBoundingBox &obj, const CopyOp &copyop) {
    IfcBoundingBox *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBoundingBox(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBoundingBox_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBoundingBox *ExpressDataSet::cloneIfcBoundingBox(const IfcBoundingBox &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBoundingBox(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBoundingBox(this, obj, copyop);
    }
}

IfcBoxedHalfSpace *ExpressDataSet::getIfcBoxedHalfSpace(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBoxedHalfSpace * > (current->second.get());
    }
    else {
        IfcBoxedHalfSpace *ret = static_cast< IfcBoxedHalfSpace * > (allocateIfcBoxedHalfSpace(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBoxedHalfSpace(IfcBoxedHalfSpace *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBoxedHalfSpace_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBoxedHalfSpace(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBoxedHalfSpace *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBoxedHalfSpace(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBoxedHalfSpace_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBoxedHalfSpace > ExpressDataSet::createIfcBoxedHalfSpace(bool isVolatile) {
    if (isVolatile) {
        return new IfcBoxedHalfSpace(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBoxedHalfSpace * > (allocateIfcBoxedHalfSpace(this, Step::Id_UNSET));
    }
}

IfcBoxedHalfSpace *ExpressDataSet::cloneIfcBoxedHalfSpace(ExpressDataSet *expressDataSet, const IfcBoxedHalfSpace &obj, const CopyOp &copyop) {
    IfcBoxedHalfSpace *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBoxedHalfSpace(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBoxedHalfSpace_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBoxedHalfSpace *ExpressDataSet::cloneIfcBoxedHalfSpace(const IfcBoxedHalfSpace &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBoxedHalfSpace(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBoxedHalfSpace(this, obj, copyop);
    }
}

IfcBuilding *ExpressDataSet::getIfcBuilding(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBuilding * > (current->second.get());
    }
    else {
        IfcBuilding *ret = static_cast< IfcBuilding * > (allocateIfcBuilding(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBuilding(IfcBuilding *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBuilding_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBuilding(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBuilding *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBuilding(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBuilding_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBuilding > ExpressDataSet::createIfcBuilding(bool isVolatile) {
    if (isVolatile) {
        return new IfcBuilding(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBuilding * > (allocateIfcBuilding(this, Step::Id_UNSET));
    }
}

IfcBuilding *ExpressDataSet::cloneIfcBuilding(ExpressDataSet *expressDataSet, const IfcBuilding &obj, const CopyOp &copyop) {
    IfcBuilding *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBuilding(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBuilding_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBuilding *ExpressDataSet::cloneIfcBuilding(const IfcBuilding &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBuilding(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBuilding(this, obj, copyop);
    }
}

IfcBuildingElementPart *ExpressDataSet::getIfcBuildingElementPart(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBuildingElementPart * > (current->second.get());
    }
    else {
        IfcBuildingElementPart *ret = static_cast< IfcBuildingElementPart * > (allocateIfcBuildingElementPart(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBuildingElementPart(IfcBuildingElementPart *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBuildingElementPart_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBuildingElementPart(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBuildingElementPart *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBuildingElementPart(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBuildingElementPart_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBuildingElementPart > ExpressDataSet::createIfcBuildingElementPart(bool isVolatile) {
    if (isVolatile) {
        return new IfcBuildingElementPart(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBuildingElementPart * > (allocateIfcBuildingElementPart(this, Step::Id_UNSET));
    }
}

IfcBuildingElementPart *ExpressDataSet::cloneIfcBuildingElementPart(ExpressDataSet *expressDataSet, const IfcBuildingElementPart &obj, const CopyOp &copyop) {
    IfcBuildingElementPart *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBuildingElementPart(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBuildingElementPart_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBuildingElementPart *ExpressDataSet::cloneIfcBuildingElementPart(const IfcBuildingElementPart &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBuildingElementPart(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBuildingElementPart(this, obj, copyop);
    }
}

IfcBuildingElementProxy *ExpressDataSet::getIfcBuildingElementProxy(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBuildingElementProxy * > (current->second.get());
    }
    else {
        IfcBuildingElementProxy *ret = static_cast< IfcBuildingElementProxy * > (allocateIfcBuildingElementProxy(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBuildingElementProxy(IfcBuildingElementProxy *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBuildingElementProxy_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBuildingElementProxy(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBuildingElementProxy *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBuildingElementProxy(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBuildingElementProxy_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBuildingElementProxy > ExpressDataSet::createIfcBuildingElementProxy(bool isVolatile) {
    if (isVolatile) {
        return new IfcBuildingElementProxy(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBuildingElementProxy * > (allocateIfcBuildingElementProxy(this, Step::Id_UNSET));
    }
}

IfcBuildingElementProxy *ExpressDataSet::cloneIfcBuildingElementProxy(ExpressDataSet *expressDataSet, const IfcBuildingElementProxy &obj, const CopyOp &copyop) {
    IfcBuildingElementProxy *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBuildingElementProxy(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBuildingElementProxy_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBuildingElementProxy *ExpressDataSet::cloneIfcBuildingElementProxy(const IfcBuildingElementProxy &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBuildingElementProxy(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBuildingElementProxy(this, obj, copyop);
    }
}

IfcBuildingElementProxyType *ExpressDataSet::getIfcBuildingElementProxyType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBuildingElementProxyType * > (current->second.get());
    }
    else {
        IfcBuildingElementProxyType *ret = static_cast< IfcBuildingElementProxyType * > (allocateIfcBuildingElementProxyType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBuildingElementProxyType(IfcBuildingElementProxyType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBuildingElementProxyType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBuildingElementProxyType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBuildingElementProxyType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBuildingElementProxyType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBuildingElementProxyType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBuildingElementProxyType > ExpressDataSet::createIfcBuildingElementProxyType(bool isVolatile) {
    if (isVolatile) {
        return new IfcBuildingElementProxyType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBuildingElementProxyType * > (allocateIfcBuildingElementProxyType(this, Step::Id_UNSET));
    }
}

IfcBuildingElementProxyType *ExpressDataSet::cloneIfcBuildingElementProxyType(ExpressDataSet *expressDataSet, const IfcBuildingElementProxyType &obj, const CopyOp &copyop) {
    IfcBuildingElementProxyType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBuildingElementProxyType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBuildingElementProxyType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBuildingElementProxyType *ExpressDataSet::cloneIfcBuildingElementProxyType(const IfcBuildingElementProxyType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBuildingElementProxyType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBuildingElementProxyType(this, obj, copyop);
    }
}

IfcBuildingStorey *ExpressDataSet::getIfcBuildingStorey(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcBuildingStorey * > (current->second.get());
    }
    else {
        IfcBuildingStorey *ret = static_cast< IfcBuildingStorey * > (allocateIfcBuildingStorey(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcBuildingStorey(IfcBuildingStorey *arg) {
    getAll().erase(arg->getKey());
    return m_IfcBuildingStorey_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcBuildingStorey(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcBuildingStorey *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcBuildingStorey(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcBuildingStorey_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcBuildingStorey > ExpressDataSet::createIfcBuildingStorey(bool isVolatile) {
    if (isVolatile) {
        return new IfcBuildingStorey(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcBuildingStorey * > (allocateIfcBuildingStorey(this, Step::Id_UNSET));
    }
}

IfcBuildingStorey *ExpressDataSet::cloneIfcBuildingStorey(ExpressDataSet *expressDataSet, const IfcBuildingStorey &obj, const CopyOp &copyop) {
    IfcBuildingStorey *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcBuildingStorey(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcBuildingStorey_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcBuildingStorey *ExpressDataSet::cloneIfcBuildingStorey(const IfcBuildingStorey &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcBuildingStorey(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcBuildingStorey(this, obj, copyop);
    }
}

IfcCShapeProfileDef *ExpressDataSet::getIfcCShapeProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCShapeProfileDef * > (current->second.get());
    }
    else {
        IfcCShapeProfileDef *ret = static_cast< IfcCShapeProfileDef * > (allocateIfcCShapeProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCShapeProfileDef(IfcCShapeProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCShapeProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCShapeProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCShapeProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCShapeProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCShapeProfileDef > ExpressDataSet::createIfcCShapeProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcCShapeProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCShapeProfileDef * > (allocateIfcCShapeProfileDef(this, Step::Id_UNSET));
    }
}

IfcCShapeProfileDef *ExpressDataSet::cloneIfcCShapeProfileDef(ExpressDataSet *expressDataSet, const IfcCShapeProfileDef &obj, const CopyOp &copyop) {
    IfcCShapeProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCShapeProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCShapeProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCShapeProfileDef *ExpressDataSet::cloneIfcCShapeProfileDef(const IfcCShapeProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCShapeProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCShapeProfileDef(this, obj, copyop);
    }
}

IfcCableCarrierFittingType *ExpressDataSet::getIfcCableCarrierFittingType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCableCarrierFittingType * > (current->second.get());
    }
    else {
        IfcCableCarrierFittingType *ret = static_cast< IfcCableCarrierFittingType * > (allocateIfcCableCarrierFittingType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCableCarrierFittingType(IfcCableCarrierFittingType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCableCarrierFittingType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCableCarrierFittingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCableCarrierFittingType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCableCarrierFittingType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCableCarrierFittingType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCableCarrierFittingType > ExpressDataSet::createIfcCableCarrierFittingType(bool isVolatile) {
    if (isVolatile) {
        return new IfcCableCarrierFittingType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCableCarrierFittingType * > (allocateIfcCableCarrierFittingType(this, Step::Id_UNSET));
    }
}

IfcCableCarrierFittingType *ExpressDataSet::cloneIfcCableCarrierFittingType(ExpressDataSet *expressDataSet, const IfcCableCarrierFittingType &obj, const CopyOp &copyop) {
    IfcCableCarrierFittingType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCableCarrierFittingType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCableCarrierFittingType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCableCarrierFittingType *ExpressDataSet::cloneIfcCableCarrierFittingType(const IfcCableCarrierFittingType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCableCarrierFittingType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCableCarrierFittingType(this, obj, copyop);
    }
}

IfcCableCarrierSegmentType *ExpressDataSet::getIfcCableCarrierSegmentType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCableCarrierSegmentType * > (current->second.get());
    }
    else {
        IfcCableCarrierSegmentType *ret = static_cast< IfcCableCarrierSegmentType * > (allocateIfcCableCarrierSegmentType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCableCarrierSegmentType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCableCarrierSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCableCarrierSegmentType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCableCarrierSegmentType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCableCarrierSegmentType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCableCarrierSegmentType > ExpressDataSet::createIfcCableCarrierSegmentType(bool isVolatile) {
    if (isVolatile) {
        return new IfcCableCarrierSegmentType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCableCarrierSegmentType * > (allocateIfcCableCarrierSegmentType(this, Step::Id_UNSET));
    }
}

IfcCableCarrierSegmentType *ExpressDataSet::cloneIfcCableCarrierSegmentType(ExpressDataSet *expressDataSet, const IfcCableCarrierSegmentType &obj, const CopyOp &copyop) {
    IfcCableCarrierSegmentType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCableCarrierSegmentType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCableCarrierSegmentType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCableCarrierSegmentType *ExpressDataSet::cloneIfcCableCarrierSegmentType(const IfcCableCarrierSegmentType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCableCarrierSegmentType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCableCarrierSegmentType(this, obj, copyop);
    }
}

IfcCableSegmentType *ExpressDataSet::getIfcCableSegmentType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCableSegmentType * > (current->second.get());
    }
    else {
        IfcCableSegmentType *ret = static_cast< IfcCableSegmentType * > (allocateIfcCableSegmentType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCableSegmentType(IfcCableSegmentType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCableSegmentType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCableSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCableSegmentType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCableSegmentType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCableSegmentType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCableSegmentType > ExpressDataSet::createIfcCableSegmentType(bool isVolatile) {
    if (isVolatile) {
        return new IfcCableSegmentType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCableSegmentType * > (allocateIfcCableSegmentType(this, Step::Id_UNSET));
    }
}

IfcCableSegmentType *ExpressDataSet::cloneIfcCableSegmentType(ExpressDataSet *expressDataSet, const IfcCableSegmentType &obj, const CopyOp &copyop) {
    IfcCableSegmentType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCableSegmentType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCableSegmentType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCableSegmentType *ExpressDataSet::cloneIfcCableSegmentType(const IfcCableSegmentType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCableSegmentType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCableSegmentType(this, obj, copyop);
    }
}

IfcCalendarDate *ExpressDataSet::getIfcCalendarDate(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCalendarDate * > (current->second.get());
    }
    else {
        IfcCalendarDate *ret = static_cast< IfcCalendarDate * > (allocateIfcCalendarDate(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCalendarDate(IfcCalendarDate *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCalendarDate_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCalendarDate(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCalendarDate *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCalendarDate(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCalendarDate_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCalendarDate > ExpressDataSet::createIfcCalendarDate(bool isVolatile) {
    if (isVolatile) {
        return new IfcCalendarDate(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCalendarDate * > (allocateIfcCalendarDate(this, Step::Id_UNSET));
    }
}

IfcCalendarDate *ExpressDataSet::cloneIfcCalendarDate(ExpressDataSet *expressDataSet, const IfcCalendarDate &obj, const CopyOp &copyop) {
    IfcCalendarDate *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCalendarDate(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCalendarDate_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCalendarDate *ExpressDataSet::cloneIfcCalendarDate(const IfcCalendarDate &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCalendarDate(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCalendarDate(this, obj, copyop);
    }
}

IfcCartesianPoint *ExpressDataSet::getIfcCartesianPoint(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCartesianPoint * > (current->second.get());
    }
    else {
        IfcCartesianPoint *ret = static_cast< IfcCartesianPoint * > (allocateIfcCartesianPoint(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCartesianPoint(IfcCartesianPoint *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCartesianPoint_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCartesianPoint(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCartesianPoint *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCartesianPoint(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCartesianPoint_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCartesianPoint > ExpressDataSet::createIfcCartesianPoint(bool isVolatile) {
    if (isVolatile) {
        return new IfcCartesianPoint(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCartesianPoint * > (allocateIfcCartesianPoint(this, Step::Id_UNSET));
    }
}

IfcCartesianPoint *ExpressDataSet::cloneIfcCartesianPoint(ExpressDataSet *expressDataSet, const IfcCartesianPoint &obj, const CopyOp &copyop) {
    IfcCartesianPoint *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCartesianPoint(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCartesianPoint_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCartesianPoint *ExpressDataSet::cloneIfcCartesianPoint(const IfcCartesianPoint &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCartesianPoint(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCartesianPoint(this, obj, copyop);
    }
}

IfcCartesianTransformationOperator2D *ExpressDataSet::getIfcCartesianTransformationOperator2D(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCartesianTransformationOperator2D * > (current->second.get());
    }
    else {
        IfcCartesianTransformationOperator2D *ret = static_cast< IfcCartesianTransformationOperator2D * > (allocateIfcCartesianTransformationOperator2D(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCartesianTransformationOperator2D_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCartesianTransformationOperator2D(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCartesianTransformationOperator2D *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCartesianTransformationOperator2D(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCartesianTransformationOperator2D_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCartesianTransformationOperator2D > ExpressDataSet::createIfcCartesianTransformationOperator2D(bool isVolatile) {
    if (isVolatile) {
        return new IfcCartesianTransformationOperator2D(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCartesianTransformationOperator2D * > (allocateIfcCartesianTransformationOperator2D(this, Step::Id_UNSET));
    }
}

IfcCartesianTransformationOperator2D *ExpressDataSet::cloneIfcCartesianTransformationOperator2D(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator2D &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator2D *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCartesianTransformationOperator2D(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCartesianTransformationOperator2D_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCartesianTransformationOperator2D *ExpressDataSet::cloneIfcCartesianTransformationOperator2D(const IfcCartesianTransformationOperator2D &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCartesianTransformationOperator2D(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCartesianTransformationOperator2D(this, obj, copyop);
    }
}

IfcCartesianTransformationOperator2DnonUniform *ExpressDataSet::getIfcCartesianTransformationOperator2DnonUniform(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCartesianTransformationOperator2DnonUniform * > (current->second.get());
    }
    else {
        IfcCartesianTransformationOperator2DnonUniform *ret = static_cast< IfcCartesianTransformationOperator2DnonUniform * > (allocateIfcCartesianTransformationOperator2DnonUniform(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCartesianTransformationOperator2DnonUniform_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCartesianTransformationOperator2DnonUniform(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCartesianTransformationOperator2DnonUniform *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCartesianTransformationOperator2DnonUniform(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCartesianTransformationOperator2DnonUniform_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCartesianTransformationOperator2DnonUniform > ExpressDataSet::createIfcCartesianTransformationOperator2DnonUniform(bool isVolatile) {
    if (isVolatile) {
        return new IfcCartesianTransformationOperator2DnonUniform(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCartesianTransformationOperator2DnonUniform * > (allocateIfcCartesianTransformationOperator2DnonUniform(this, Step::Id_UNSET));
    }
}

IfcCartesianTransformationOperator2DnonUniform *ExpressDataSet::cloneIfcCartesianTransformationOperator2DnonUniform(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator2DnonUniform &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator2DnonUniform *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCartesianTransformationOperator2DnonUniform(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCartesianTransformationOperator2DnonUniform_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCartesianTransformationOperator2DnonUniform *ExpressDataSet::cloneIfcCartesianTransformationOperator2DnonUniform(const IfcCartesianTransformationOperator2DnonUniform &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCartesianTransformationOperator2DnonUniform(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCartesianTransformationOperator2DnonUniform(this, obj, copyop);
    }
}

IfcCartesianTransformationOperator3D *ExpressDataSet::getIfcCartesianTransformationOperator3D(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCartesianTransformationOperator3D * > (current->second.get());
    }
    else {
        IfcCartesianTransformationOperator3D *ret = static_cast< IfcCartesianTransformationOperator3D * > (allocateIfcCartesianTransformationOperator3D(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCartesianTransformationOperator3D_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCartesianTransformationOperator3D(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCartesianTransformationOperator3D *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCartesianTransformationOperator3D(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCartesianTransformationOperator3D_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCartesianTransformationOperator3D > ExpressDataSet::createIfcCartesianTransformationOperator3D(bool isVolatile) {
    if (isVolatile) {
        return new IfcCartesianTransformationOperator3D(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCartesianTransformationOperator3D * > (allocateIfcCartesianTransformationOperator3D(this, Step::Id_UNSET));
    }
}

IfcCartesianTransformationOperator3D *ExpressDataSet::cloneIfcCartesianTransformationOperator3D(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator3D &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator3D *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCartesianTransformationOperator3D(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCartesianTransformationOperator3D_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCartesianTransformationOperator3D *ExpressDataSet::cloneIfcCartesianTransformationOperator3D(const IfcCartesianTransformationOperator3D &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCartesianTransformationOperator3D(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCartesianTransformationOperator3D(this, obj, copyop);
    }
}

IfcCartesianTransformationOperator3DnonUniform *ExpressDataSet::getIfcCartesianTransformationOperator3DnonUniform(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCartesianTransformationOperator3DnonUniform * > (current->second.get());
    }
    else {
        IfcCartesianTransformationOperator3DnonUniform *ret = static_cast< IfcCartesianTransformationOperator3DnonUniform * > (allocateIfcCartesianTransformationOperator3DnonUniform(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCartesianTransformationOperator3DnonUniform_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCartesianTransformationOperator3DnonUniform(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCartesianTransformationOperator3DnonUniform *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCartesianTransformationOperator3DnonUniform(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCartesianTransformationOperator3DnonUniform_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCartesianTransformationOperator3DnonUniform > ExpressDataSet::createIfcCartesianTransformationOperator3DnonUniform(bool isVolatile) {
    if (isVolatile) {
        return new IfcCartesianTransformationOperator3DnonUniform(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCartesianTransformationOperator3DnonUniform * > (allocateIfcCartesianTransformationOperator3DnonUniform(this, Step::Id_UNSET));
    }
}

IfcCartesianTransformationOperator3DnonUniform *ExpressDataSet::cloneIfcCartesianTransformationOperator3DnonUniform(ExpressDataSet *expressDataSet, const IfcCartesianTransformationOperator3DnonUniform &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator3DnonUniform *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCartesianTransformationOperator3DnonUniform(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCartesianTransformationOperator3DnonUniform_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCartesianTransformationOperator3DnonUniform *ExpressDataSet::cloneIfcCartesianTransformationOperator3DnonUniform(const IfcCartesianTransformationOperator3DnonUniform &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCartesianTransformationOperator3DnonUniform(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCartesianTransformationOperator3DnonUniform(this, obj, copyop);
    }
}

IfcCenterLineProfileDef *ExpressDataSet::getIfcCenterLineProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCenterLineProfileDef * > (current->second.get());
    }
    else {
        IfcCenterLineProfileDef *ret = static_cast< IfcCenterLineProfileDef * > (allocateIfcCenterLineProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCenterLineProfileDef(IfcCenterLineProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCenterLineProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCenterLineProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCenterLineProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCenterLineProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCenterLineProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCenterLineProfileDef > ExpressDataSet::createIfcCenterLineProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcCenterLineProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCenterLineProfileDef * > (allocateIfcCenterLineProfileDef(this, Step::Id_UNSET));
    }
}

IfcCenterLineProfileDef *ExpressDataSet::cloneIfcCenterLineProfileDef(ExpressDataSet *expressDataSet, const IfcCenterLineProfileDef &obj, const CopyOp &copyop) {
    IfcCenterLineProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCenterLineProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCenterLineProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCenterLineProfileDef *ExpressDataSet::cloneIfcCenterLineProfileDef(const IfcCenterLineProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCenterLineProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCenterLineProfileDef(this, obj, copyop);
    }
}

IfcChamferEdgeFeature *ExpressDataSet::getIfcChamferEdgeFeature(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcChamferEdgeFeature * > (current->second.get());
    }
    else {
        IfcChamferEdgeFeature *ret = static_cast< IfcChamferEdgeFeature * > (allocateIfcChamferEdgeFeature(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcChamferEdgeFeature(IfcChamferEdgeFeature *arg) {
    getAll().erase(arg->getKey());
    return m_IfcChamferEdgeFeature_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcChamferEdgeFeature(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcChamferEdgeFeature *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcChamferEdgeFeature(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcChamferEdgeFeature_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcChamferEdgeFeature > ExpressDataSet::createIfcChamferEdgeFeature(bool isVolatile) {
    if (isVolatile) {
        return new IfcChamferEdgeFeature(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcChamferEdgeFeature * > (allocateIfcChamferEdgeFeature(this, Step::Id_UNSET));
    }
}

IfcChamferEdgeFeature *ExpressDataSet::cloneIfcChamferEdgeFeature(ExpressDataSet *expressDataSet, const IfcChamferEdgeFeature &obj, const CopyOp &copyop) {
    IfcChamferEdgeFeature *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcChamferEdgeFeature(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcChamferEdgeFeature_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcChamferEdgeFeature *ExpressDataSet::cloneIfcChamferEdgeFeature(const IfcChamferEdgeFeature &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcChamferEdgeFeature(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcChamferEdgeFeature(this, obj, copyop);
    }
}

IfcChillerType *ExpressDataSet::getIfcChillerType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcChillerType * > (current->second.get());
    }
    else {
        IfcChillerType *ret = static_cast< IfcChillerType * > (allocateIfcChillerType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcChillerType(IfcChillerType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcChillerType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcChillerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcChillerType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcChillerType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcChillerType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcChillerType > ExpressDataSet::createIfcChillerType(bool isVolatile) {
    if (isVolatile) {
        return new IfcChillerType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcChillerType * > (allocateIfcChillerType(this, Step::Id_UNSET));
    }
}

IfcChillerType *ExpressDataSet::cloneIfcChillerType(ExpressDataSet *expressDataSet, const IfcChillerType &obj, const CopyOp &copyop) {
    IfcChillerType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcChillerType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcChillerType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcChillerType *ExpressDataSet::cloneIfcChillerType(const IfcChillerType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcChillerType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcChillerType(this, obj, copyop);
    }
}

IfcCircle *ExpressDataSet::getIfcCircle(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCircle * > (current->second.get());
    }
    else {
        IfcCircle *ret = static_cast< IfcCircle * > (allocateIfcCircle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCircle(IfcCircle *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCircle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCircle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCircle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCircle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCircle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCircle > ExpressDataSet::createIfcCircle(bool isVolatile) {
    if (isVolatile) {
        return new IfcCircle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCircle * > (allocateIfcCircle(this, Step::Id_UNSET));
    }
}

IfcCircle *ExpressDataSet::cloneIfcCircle(ExpressDataSet *expressDataSet, const IfcCircle &obj, const CopyOp &copyop) {
    IfcCircle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCircle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCircle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCircle *ExpressDataSet::cloneIfcCircle(const IfcCircle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCircle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCircle(this, obj, copyop);
    }
}

IfcCircleHollowProfileDef *ExpressDataSet::getIfcCircleHollowProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCircleHollowProfileDef * > (current->second.get());
    }
    else {
        IfcCircleHollowProfileDef *ret = static_cast< IfcCircleHollowProfileDef * > (allocateIfcCircleHollowProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCircleHollowProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCircleHollowProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCircleHollowProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCircleHollowProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCircleHollowProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCircleHollowProfileDef > ExpressDataSet::createIfcCircleHollowProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcCircleHollowProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCircleHollowProfileDef * > (allocateIfcCircleHollowProfileDef(this, Step::Id_UNSET));
    }
}

IfcCircleHollowProfileDef *ExpressDataSet::cloneIfcCircleHollowProfileDef(ExpressDataSet *expressDataSet, const IfcCircleHollowProfileDef &obj, const CopyOp &copyop) {
    IfcCircleHollowProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCircleHollowProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCircleHollowProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCircleHollowProfileDef *ExpressDataSet::cloneIfcCircleHollowProfileDef(const IfcCircleHollowProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCircleHollowProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCircleHollowProfileDef(this, obj, copyop);
    }
}

IfcCircleProfileDef *ExpressDataSet::getIfcCircleProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCircleProfileDef * > (current->second.get());
    }
    else {
        IfcCircleProfileDef *ret = static_cast< IfcCircleProfileDef * > (allocateIfcCircleProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCircleProfileDef(IfcCircleProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCircleProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCircleProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCircleProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCircleProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCircleProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCircleProfileDef > ExpressDataSet::createIfcCircleProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcCircleProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCircleProfileDef * > (allocateIfcCircleProfileDef(this, Step::Id_UNSET));
    }
}

IfcCircleProfileDef *ExpressDataSet::cloneIfcCircleProfileDef(ExpressDataSet *expressDataSet, const IfcCircleProfileDef &obj, const CopyOp &copyop) {
    IfcCircleProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCircleProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCircleProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCircleProfileDef *ExpressDataSet::cloneIfcCircleProfileDef(const IfcCircleProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCircleProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCircleProfileDef(this, obj, copyop);
    }
}

IfcClassification *ExpressDataSet::getIfcClassification(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcClassification * > (current->second.get());
    }
    else {
        IfcClassification *ret = static_cast< IfcClassification * > (allocateIfcClassification(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcClassification(IfcClassification *arg) {
    getAll().erase(arg->getKey());
    return m_IfcClassification_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcClassification(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcClassification *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcClassification(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcClassification_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcClassification > ExpressDataSet::createIfcClassification(bool isVolatile) {
    if (isVolatile) {
        return new IfcClassification(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcClassification * > (allocateIfcClassification(this, Step::Id_UNSET));
    }
}

IfcClassification *ExpressDataSet::cloneIfcClassification(ExpressDataSet *expressDataSet, const IfcClassification &obj, const CopyOp &copyop) {
    IfcClassification *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcClassification(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcClassification_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcClassification *ExpressDataSet::cloneIfcClassification(const IfcClassification &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcClassification(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcClassification(this, obj, copyop);
    }
}

IfcClassificationItem *ExpressDataSet::getIfcClassificationItem(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcClassificationItem * > (current->second.get());
    }
    else {
        IfcClassificationItem *ret = static_cast< IfcClassificationItem * > (allocateIfcClassificationItem(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcClassificationItem(IfcClassificationItem *arg) {
    getAll().erase(arg->getKey());
    return m_IfcClassificationItem_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcClassificationItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcClassificationItem *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcClassificationItem(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcClassificationItem_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcClassificationItem > ExpressDataSet::createIfcClassificationItem(bool isVolatile) {
    if (isVolatile) {
        return new IfcClassificationItem(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcClassificationItem * > (allocateIfcClassificationItem(this, Step::Id_UNSET));
    }
}

IfcClassificationItem *ExpressDataSet::cloneIfcClassificationItem(ExpressDataSet *expressDataSet, const IfcClassificationItem &obj, const CopyOp &copyop) {
    IfcClassificationItem *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcClassificationItem(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcClassificationItem_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcClassificationItem *ExpressDataSet::cloneIfcClassificationItem(const IfcClassificationItem &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcClassificationItem(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcClassificationItem(this, obj, copyop);
    }
}

IfcClassificationItemRelationship *ExpressDataSet::getIfcClassificationItemRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcClassificationItemRelationship * > (current->second.get());
    }
    else {
        IfcClassificationItemRelationship *ret = static_cast< IfcClassificationItemRelationship * > (allocateIfcClassificationItemRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcClassificationItemRelationship(IfcClassificationItemRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcClassificationItemRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcClassificationItemRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcClassificationItemRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcClassificationItemRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcClassificationItemRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcClassificationItemRelationship > ExpressDataSet::createIfcClassificationItemRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcClassificationItemRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcClassificationItemRelationship * > (allocateIfcClassificationItemRelationship(this, Step::Id_UNSET));
    }
}

IfcClassificationItemRelationship *ExpressDataSet::cloneIfcClassificationItemRelationship(ExpressDataSet *expressDataSet, const IfcClassificationItemRelationship &obj, const CopyOp &copyop) {
    IfcClassificationItemRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcClassificationItemRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcClassificationItemRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcClassificationItemRelationship *ExpressDataSet::cloneIfcClassificationItemRelationship(const IfcClassificationItemRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcClassificationItemRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcClassificationItemRelationship(this, obj, copyop);
    }
}

IfcClassificationNotation *ExpressDataSet::getIfcClassificationNotation(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcClassificationNotation * > (current->second.get());
    }
    else {
        IfcClassificationNotation *ret = static_cast< IfcClassificationNotation * > (allocateIfcClassificationNotation(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcClassificationNotation(IfcClassificationNotation *arg) {
    getAll().erase(arg->getKey());
    return m_IfcClassificationNotation_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcClassificationNotation(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcClassificationNotation *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcClassificationNotation(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcClassificationNotation_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcClassificationNotation > ExpressDataSet::createIfcClassificationNotation(bool isVolatile) {
    if (isVolatile) {
        return new IfcClassificationNotation(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcClassificationNotation * > (allocateIfcClassificationNotation(this, Step::Id_UNSET));
    }
}

IfcClassificationNotation *ExpressDataSet::cloneIfcClassificationNotation(ExpressDataSet *expressDataSet, const IfcClassificationNotation &obj, const CopyOp &copyop) {
    IfcClassificationNotation *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcClassificationNotation(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcClassificationNotation_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcClassificationNotation *ExpressDataSet::cloneIfcClassificationNotation(const IfcClassificationNotation &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcClassificationNotation(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcClassificationNotation(this, obj, copyop);
    }
}

IfcClassificationNotationFacet *ExpressDataSet::getIfcClassificationNotationFacet(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcClassificationNotationFacet * > (current->second.get());
    }
    else {
        IfcClassificationNotationFacet *ret = static_cast< IfcClassificationNotationFacet * > (allocateIfcClassificationNotationFacet(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcClassificationNotationFacet(IfcClassificationNotationFacet *arg) {
    getAll().erase(arg->getKey());
    return m_IfcClassificationNotationFacet_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcClassificationNotationFacet(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcClassificationNotationFacet *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcClassificationNotationFacet(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcClassificationNotationFacet_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcClassificationNotationFacet > ExpressDataSet::createIfcClassificationNotationFacet(bool isVolatile) {
    if (isVolatile) {
        return new IfcClassificationNotationFacet(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcClassificationNotationFacet * > (allocateIfcClassificationNotationFacet(this, Step::Id_UNSET));
    }
}

IfcClassificationNotationFacet *ExpressDataSet::cloneIfcClassificationNotationFacet(ExpressDataSet *expressDataSet, const IfcClassificationNotationFacet &obj, const CopyOp &copyop) {
    IfcClassificationNotationFacet *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcClassificationNotationFacet(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcClassificationNotationFacet_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcClassificationNotationFacet *ExpressDataSet::cloneIfcClassificationNotationFacet(const IfcClassificationNotationFacet &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcClassificationNotationFacet(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcClassificationNotationFacet(this, obj, copyop);
    }
}

IfcClassificationReference *ExpressDataSet::getIfcClassificationReference(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcClassificationReference * > (current->second.get());
    }
    else {
        IfcClassificationReference *ret = static_cast< IfcClassificationReference * > (allocateIfcClassificationReference(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcClassificationReference(IfcClassificationReference *arg) {
    getAll().erase(arg->getKey());
    return m_IfcClassificationReference_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcClassificationReference(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcClassificationReference *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcClassificationReference(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcClassificationReference_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcClassificationReference > ExpressDataSet::createIfcClassificationReference(bool isVolatile) {
    if (isVolatile) {
        return new IfcClassificationReference(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcClassificationReference * > (allocateIfcClassificationReference(this, Step::Id_UNSET));
    }
}

IfcClassificationReference *ExpressDataSet::cloneIfcClassificationReference(ExpressDataSet *expressDataSet, const IfcClassificationReference &obj, const CopyOp &copyop) {
    IfcClassificationReference *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcClassificationReference(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcClassificationReference_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcClassificationReference *ExpressDataSet::cloneIfcClassificationReference(const IfcClassificationReference &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcClassificationReference(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcClassificationReference(this, obj, copyop);
    }
}

IfcClosedShell *ExpressDataSet::getIfcClosedShell(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcClosedShell * > (current->second.get());
    }
    else {
        IfcClosedShell *ret = static_cast< IfcClosedShell * > (allocateIfcClosedShell(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcClosedShell(IfcClosedShell *arg) {
    getAll().erase(arg->getKey());
    return m_IfcClosedShell_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcClosedShell(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcClosedShell *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcClosedShell(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcClosedShell_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcClosedShell > ExpressDataSet::createIfcClosedShell(bool isVolatile) {
    if (isVolatile) {
        return new IfcClosedShell(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcClosedShell * > (allocateIfcClosedShell(this, Step::Id_UNSET));
    }
}

IfcClosedShell *ExpressDataSet::cloneIfcClosedShell(ExpressDataSet *expressDataSet, const IfcClosedShell &obj, const CopyOp &copyop) {
    IfcClosedShell *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcClosedShell(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcClosedShell_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcClosedShell *ExpressDataSet::cloneIfcClosedShell(const IfcClosedShell &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcClosedShell(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcClosedShell(this, obj, copyop);
    }
}

IfcCoilType *ExpressDataSet::getIfcCoilType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCoilType * > (current->second.get());
    }
    else {
        IfcCoilType *ret = static_cast< IfcCoilType * > (allocateIfcCoilType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCoilType(IfcCoilType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCoilType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCoilType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCoilType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCoilType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCoilType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCoilType > ExpressDataSet::createIfcCoilType(bool isVolatile) {
    if (isVolatile) {
        return new IfcCoilType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCoilType * > (allocateIfcCoilType(this, Step::Id_UNSET));
    }
}

IfcCoilType *ExpressDataSet::cloneIfcCoilType(ExpressDataSet *expressDataSet, const IfcCoilType &obj, const CopyOp &copyop) {
    IfcCoilType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCoilType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCoilType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCoilType *ExpressDataSet::cloneIfcCoilType(const IfcCoilType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCoilType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCoilType(this, obj, copyop);
    }
}

IfcColourRgb *ExpressDataSet::getIfcColourRgb(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcColourRgb * > (current->second.get());
    }
    else {
        IfcColourRgb *ret = static_cast< IfcColourRgb * > (allocateIfcColourRgb(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcColourRgb(IfcColourRgb *arg) {
    getAll().erase(arg->getKey());
    return m_IfcColourRgb_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcColourRgb(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcColourRgb *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcColourRgb(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcColourRgb_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcColourRgb > ExpressDataSet::createIfcColourRgb(bool isVolatile) {
    if (isVolatile) {
        return new IfcColourRgb(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcColourRgb * > (allocateIfcColourRgb(this, Step::Id_UNSET));
    }
}

IfcColourRgb *ExpressDataSet::cloneIfcColourRgb(ExpressDataSet *expressDataSet, const IfcColourRgb &obj, const CopyOp &copyop) {
    IfcColourRgb *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcColourRgb(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcColourRgb_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcColourRgb *ExpressDataSet::cloneIfcColourRgb(const IfcColourRgb &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcColourRgb(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcColourRgb(this, obj, copyop);
    }
}

IfcColumn *ExpressDataSet::getIfcColumn(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcColumn * > (current->second.get());
    }
    else {
        IfcColumn *ret = static_cast< IfcColumn * > (allocateIfcColumn(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcColumn(IfcColumn *arg) {
    getAll().erase(arg->getKey());
    return m_IfcColumn_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcColumn(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcColumn *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcColumn(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcColumn_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcColumn > ExpressDataSet::createIfcColumn(bool isVolatile) {
    if (isVolatile) {
        return new IfcColumn(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcColumn * > (allocateIfcColumn(this, Step::Id_UNSET));
    }
}

IfcColumn *ExpressDataSet::cloneIfcColumn(ExpressDataSet *expressDataSet, const IfcColumn &obj, const CopyOp &copyop) {
    IfcColumn *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcColumn(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcColumn_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcColumn *ExpressDataSet::cloneIfcColumn(const IfcColumn &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcColumn(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcColumn(this, obj, copyop);
    }
}

IfcColumnType *ExpressDataSet::getIfcColumnType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcColumnType * > (current->second.get());
    }
    else {
        IfcColumnType *ret = static_cast< IfcColumnType * > (allocateIfcColumnType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcColumnType(IfcColumnType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcColumnType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcColumnType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcColumnType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcColumnType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcColumnType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcColumnType > ExpressDataSet::createIfcColumnType(bool isVolatile) {
    if (isVolatile) {
        return new IfcColumnType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcColumnType * > (allocateIfcColumnType(this, Step::Id_UNSET));
    }
}

IfcColumnType *ExpressDataSet::cloneIfcColumnType(ExpressDataSet *expressDataSet, const IfcColumnType &obj, const CopyOp &copyop) {
    IfcColumnType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcColumnType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcColumnType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcColumnType *ExpressDataSet::cloneIfcColumnType(const IfcColumnType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcColumnType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcColumnType(this, obj, copyop);
    }
}

IfcComplexProperty *ExpressDataSet::getIfcComplexProperty(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcComplexProperty * > (current->second.get());
    }
    else {
        IfcComplexProperty *ret = static_cast< IfcComplexProperty * > (allocateIfcComplexProperty(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcComplexProperty(IfcComplexProperty *arg) {
    getAll().erase(arg->getKey());
    return m_IfcComplexProperty_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcComplexProperty(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcComplexProperty *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcComplexProperty(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcComplexProperty_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcComplexProperty > ExpressDataSet::createIfcComplexProperty(bool isVolatile) {
    if (isVolatile) {
        return new IfcComplexProperty(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcComplexProperty * > (allocateIfcComplexProperty(this, Step::Id_UNSET));
    }
}

IfcComplexProperty *ExpressDataSet::cloneIfcComplexProperty(ExpressDataSet *expressDataSet, const IfcComplexProperty &obj, const CopyOp &copyop) {
    IfcComplexProperty *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcComplexProperty(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcComplexProperty_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcComplexProperty *ExpressDataSet::cloneIfcComplexProperty(const IfcComplexProperty &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcComplexProperty(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcComplexProperty(this, obj, copyop);
    }
}

IfcCompositeCurve *ExpressDataSet::getIfcCompositeCurve(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCompositeCurve * > (current->second.get());
    }
    else {
        IfcCompositeCurve *ret = static_cast< IfcCompositeCurve * > (allocateIfcCompositeCurve(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCompositeCurve(IfcCompositeCurve *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCompositeCurve_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCompositeCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCompositeCurve *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCompositeCurve(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCompositeCurve_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCompositeCurve > ExpressDataSet::createIfcCompositeCurve(bool isVolatile) {
    if (isVolatile) {
        return new IfcCompositeCurve(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCompositeCurve * > (allocateIfcCompositeCurve(this, Step::Id_UNSET));
    }
}

IfcCompositeCurve *ExpressDataSet::cloneIfcCompositeCurve(ExpressDataSet *expressDataSet, const IfcCompositeCurve &obj, const CopyOp &copyop) {
    IfcCompositeCurve *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCompositeCurve(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCompositeCurve_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCompositeCurve *ExpressDataSet::cloneIfcCompositeCurve(const IfcCompositeCurve &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCompositeCurve(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCompositeCurve(this, obj, copyop);
    }
}

IfcCompositeCurveSegment *ExpressDataSet::getIfcCompositeCurveSegment(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCompositeCurveSegment * > (current->second.get());
    }
    else {
        IfcCompositeCurveSegment *ret = static_cast< IfcCompositeCurveSegment * > (allocateIfcCompositeCurveSegment(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCompositeCurveSegment(IfcCompositeCurveSegment *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCompositeCurveSegment_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCompositeCurveSegment(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCompositeCurveSegment *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCompositeCurveSegment(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCompositeCurveSegment_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCompositeCurveSegment > ExpressDataSet::createIfcCompositeCurveSegment(bool isVolatile) {
    if (isVolatile) {
        return new IfcCompositeCurveSegment(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCompositeCurveSegment * > (allocateIfcCompositeCurveSegment(this, Step::Id_UNSET));
    }
}

IfcCompositeCurveSegment *ExpressDataSet::cloneIfcCompositeCurveSegment(ExpressDataSet *expressDataSet, const IfcCompositeCurveSegment &obj, const CopyOp &copyop) {
    IfcCompositeCurveSegment *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCompositeCurveSegment(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCompositeCurveSegment_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCompositeCurveSegment *ExpressDataSet::cloneIfcCompositeCurveSegment(const IfcCompositeCurveSegment &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCompositeCurveSegment(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCompositeCurveSegment(this, obj, copyop);
    }
}

IfcCompositeProfileDef *ExpressDataSet::getIfcCompositeProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCompositeProfileDef * > (current->second.get());
    }
    else {
        IfcCompositeProfileDef *ret = static_cast< IfcCompositeProfileDef * > (allocateIfcCompositeProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCompositeProfileDef(IfcCompositeProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCompositeProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCompositeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCompositeProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCompositeProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCompositeProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCompositeProfileDef > ExpressDataSet::createIfcCompositeProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcCompositeProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCompositeProfileDef * > (allocateIfcCompositeProfileDef(this, Step::Id_UNSET));
    }
}

IfcCompositeProfileDef *ExpressDataSet::cloneIfcCompositeProfileDef(ExpressDataSet *expressDataSet, const IfcCompositeProfileDef &obj, const CopyOp &copyop) {
    IfcCompositeProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCompositeProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCompositeProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCompositeProfileDef *ExpressDataSet::cloneIfcCompositeProfileDef(const IfcCompositeProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCompositeProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCompositeProfileDef(this, obj, copyop);
    }
}

IfcCompressorType *ExpressDataSet::getIfcCompressorType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCompressorType * > (current->second.get());
    }
    else {
        IfcCompressorType *ret = static_cast< IfcCompressorType * > (allocateIfcCompressorType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCompressorType(IfcCompressorType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCompressorType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCompressorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCompressorType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCompressorType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCompressorType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCompressorType > ExpressDataSet::createIfcCompressorType(bool isVolatile) {
    if (isVolatile) {
        return new IfcCompressorType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCompressorType * > (allocateIfcCompressorType(this, Step::Id_UNSET));
    }
}

IfcCompressorType *ExpressDataSet::cloneIfcCompressorType(ExpressDataSet *expressDataSet, const IfcCompressorType &obj, const CopyOp &copyop) {
    IfcCompressorType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCompressorType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCompressorType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCompressorType *ExpressDataSet::cloneIfcCompressorType(const IfcCompressorType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCompressorType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCompressorType(this, obj, copyop);
    }
}

IfcCondenserType *ExpressDataSet::getIfcCondenserType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCondenserType * > (current->second.get());
    }
    else {
        IfcCondenserType *ret = static_cast< IfcCondenserType * > (allocateIfcCondenserType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCondenserType(IfcCondenserType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCondenserType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCondenserType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCondenserType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCondenserType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCondenserType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCondenserType > ExpressDataSet::createIfcCondenserType(bool isVolatile) {
    if (isVolatile) {
        return new IfcCondenserType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCondenserType * > (allocateIfcCondenserType(this, Step::Id_UNSET));
    }
}

IfcCondenserType *ExpressDataSet::cloneIfcCondenserType(ExpressDataSet *expressDataSet, const IfcCondenserType &obj, const CopyOp &copyop) {
    IfcCondenserType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCondenserType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCondenserType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCondenserType *ExpressDataSet::cloneIfcCondenserType(const IfcCondenserType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCondenserType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCondenserType(this, obj, copyop);
    }
}

IfcCondition *ExpressDataSet::getIfcCondition(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCondition * > (current->second.get());
    }
    else {
        IfcCondition *ret = static_cast< IfcCondition * > (allocateIfcCondition(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCondition(IfcCondition *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCondition_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCondition *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCondition(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCondition_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCondition > ExpressDataSet::createIfcCondition(bool isVolatile) {
    if (isVolatile) {
        return new IfcCondition(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCondition * > (allocateIfcCondition(this, Step::Id_UNSET));
    }
}

IfcCondition *ExpressDataSet::cloneIfcCondition(ExpressDataSet *expressDataSet, const IfcCondition &obj, const CopyOp &copyop) {
    IfcCondition *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCondition(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCondition_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCondition *ExpressDataSet::cloneIfcCondition(const IfcCondition &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCondition(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCondition(this, obj, copyop);
    }
}

IfcConditionCriterion *ExpressDataSet::getIfcConditionCriterion(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConditionCriterion * > (current->second.get());
    }
    else {
        IfcConditionCriterion *ret = static_cast< IfcConditionCriterion * > (allocateIfcConditionCriterion(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConditionCriterion(IfcConditionCriterion *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConditionCriterion_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConditionCriterion(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConditionCriterion *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConditionCriterion(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConditionCriterion_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConditionCriterion > ExpressDataSet::createIfcConditionCriterion(bool isVolatile) {
    if (isVolatile) {
        return new IfcConditionCriterion(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConditionCriterion * > (allocateIfcConditionCriterion(this, Step::Id_UNSET));
    }
}

IfcConditionCriterion *ExpressDataSet::cloneIfcConditionCriterion(ExpressDataSet *expressDataSet, const IfcConditionCriterion &obj, const CopyOp &copyop) {
    IfcConditionCriterion *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConditionCriterion(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConditionCriterion_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConditionCriterion *ExpressDataSet::cloneIfcConditionCriterion(const IfcConditionCriterion &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConditionCriterion(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConditionCriterion(this, obj, copyop);
    }
}

IfcConnectedFaceSet *ExpressDataSet::getIfcConnectedFaceSet(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConnectedFaceSet * > (current->second.get());
    }
    else {
        IfcConnectedFaceSet *ret = static_cast< IfcConnectedFaceSet * > (allocateIfcConnectedFaceSet(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConnectedFaceSet(IfcConnectedFaceSet *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConnectedFaceSet_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConnectedFaceSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConnectedFaceSet *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConnectedFaceSet(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConnectedFaceSet_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConnectedFaceSet > ExpressDataSet::createIfcConnectedFaceSet(bool isVolatile) {
    if (isVolatile) {
        return new IfcConnectedFaceSet(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConnectedFaceSet * > (allocateIfcConnectedFaceSet(this, Step::Id_UNSET));
    }
}

IfcConnectedFaceSet *ExpressDataSet::cloneIfcConnectedFaceSet(ExpressDataSet *expressDataSet, const IfcConnectedFaceSet &obj, const CopyOp &copyop) {
    IfcConnectedFaceSet *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConnectedFaceSet(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConnectedFaceSet_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConnectedFaceSet *ExpressDataSet::cloneIfcConnectedFaceSet(const IfcConnectedFaceSet &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConnectedFaceSet(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConnectedFaceSet(this, obj, copyop);
    }
}

IfcConnectionCurveGeometry *ExpressDataSet::getIfcConnectionCurveGeometry(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConnectionCurveGeometry * > (current->second.get());
    }
    else {
        IfcConnectionCurveGeometry *ret = static_cast< IfcConnectionCurveGeometry * > (allocateIfcConnectionCurveGeometry(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConnectionCurveGeometry_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConnectionCurveGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConnectionCurveGeometry *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConnectionCurveGeometry(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConnectionCurveGeometry_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConnectionCurveGeometry > ExpressDataSet::createIfcConnectionCurveGeometry(bool isVolatile) {
    if (isVolatile) {
        return new IfcConnectionCurveGeometry(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConnectionCurveGeometry * > (allocateIfcConnectionCurveGeometry(this, Step::Id_UNSET));
    }
}

IfcConnectionCurveGeometry *ExpressDataSet::cloneIfcConnectionCurveGeometry(ExpressDataSet *expressDataSet, const IfcConnectionCurveGeometry &obj, const CopyOp &copyop) {
    IfcConnectionCurveGeometry *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConnectionCurveGeometry(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConnectionCurveGeometry_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConnectionCurveGeometry *ExpressDataSet::cloneIfcConnectionCurveGeometry(const IfcConnectionCurveGeometry &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConnectionCurveGeometry(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConnectionCurveGeometry(this, obj, copyop);
    }
}

IfcConnectionPointEccentricity *ExpressDataSet::getIfcConnectionPointEccentricity(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConnectionPointEccentricity * > (current->second.get());
    }
    else {
        IfcConnectionPointEccentricity *ret = static_cast< IfcConnectionPointEccentricity * > (allocateIfcConnectionPointEccentricity(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConnectionPointEccentricity_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConnectionPointEccentricity(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConnectionPointEccentricity *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConnectionPointEccentricity(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConnectionPointEccentricity_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConnectionPointEccentricity > ExpressDataSet::createIfcConnectionPointEccentricity(bool isVolatile) {
    if (isVolatile) {
        return new IfcConnectionPointEccentricity(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConnectionPointEccentricity * > (allocateIfcConnectionPointEccentricity(this, Step::Id_UNSET));
    }
}

IfcConnectionPointEccentricity *ExpressDataSet::cloneIfcConnectionPointEccentricity(ExpressDataSet *expressDataSet, const IfcConnectionPointEccentricity &obj, const CopyOp &copyop) {
    IfcConnectionPointEccentricity *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConnectionPointEccentricity(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConnectionPointEccentricity_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConnectionPointEccentricity *ExpressDataSet::cloneIfcConnectionPointEccentricity(const IfcConnectionPointEccentricity &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConnectionPointEccentricity(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConnectionPointEccentricity(this, obj, copyop);
    }
}

IfcConnectionPointGeometry *ExpressDataSet::getIfcConnectionPointGeometry(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConnectionPointGeometry * > (current->second.get());
    }
    else {
        IfcConnectionPointGeometry *ret = static_cast< IfcConnectionPointGeometry * > (allocateIfcConnectionPointGeometry(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConnectionPointGeometry(IfcConnectionPointGeometry *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConnectionPointGeometry_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConnectionPointGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConnectionPointGeometry *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConnectionPointGeometry(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConnectionPointGeometry_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConnectionPointGeometry > ExpressDataSet::createIfcConnectionPointGeometry(bool isVolatile) {
    if (isVolatile) {
        return new IfcConnectionPointGeometry(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConnectionPointGeometry * > (allocateIfcConnectionPointGeometry(this, Step::Id_UNSET));
    }
}

IfcConnectionPointGeometry *ExpressDataSet::cloneIfcConnectionPointGeometry(ExpressDataSet *expressDataSet, const IfcConnectionPointGeometry &obj, const CopyOp &copyop) {
    IfcConnectionPointGeometry *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConnectionPointGeometry(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConnectionPointGeometry_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConnectionPointGeometry *ExpressDataSet::cloneIfcConnectionPointGeometry(const IfcConnectionPointGeometry &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConnectionPointGeometry(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConnectionPointGeometry(this, obj, copyop);
    }
}

IfcConnectionPortGeometry *ExpressDataSet::getIfcConnectionPortGeometry(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConnectionPortGeometry * > (current->second.get());
    }
    else {
        IfcConnectionPortGeometry *ret = static_cast< IfcConnectionPortGeometry * > (allocateIfcConnectionPortGeometry(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConnectionPortGeometry(IfcConnectionPortGeometry *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConnectionPortGeometry_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConnectionPortGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConnectionPortGeometry *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConnectionPortGeometry(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConnectionPortGeometry_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConnectionPortGeometry > ExpressDataSet::createIfcConnectionPortGeometry(bool isVolatile) {
    if (isVolatile) {
        return new IfcConnectionPortGeometry(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConnectionPortGeometry * > (allocateIfcConnectionPortGeometry(this, Step::Id_UNSET));
    }
}

IfcConnectionPortGeometry *ExpressDataSet::cloneIfcConnectionPortGeometry(ExpressDataSet *expressDataSet, const IfcConnectionPortGeometry &obj, const CopyOp &copyop) {
    IfcConnectionPortGeometry *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConnectionPortGeometry(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConnectionPortGeometry_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConnectionPortGeometry *ExpressDataSet::cloneIfcConnectionPortGeometry(const IfcConnectionPortGeometry &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConnectionPortGeometry(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConnectionPortGeometry(this, obj, copyop);
    }
}

IfcConnectionSurfaceGeometry *ExpressDataSet::getIfcConnectionSurfaceGeometry(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConnectionSurfaceGeometry * > (current->second.get());
    }
    else {
        IfcConnectionSurfaceGeometry *ret = static_cast< IfcConnectionSurfaceGeometry * > (allocateIfcConnectionSurfaceGeometry(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConnectionSurfaceGeometry_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConnectionSurfaceGeometry(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConnectionSurfaceGeometry *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConnectionSurfaceGeometry(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConnectionSurfaceGeometry_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConnectionSurfaceGeometry > ExpressDataSet::createIfcConnectionSurfaceGeometry(bool isVolatile) {
    if (isVolatile) {
        return new IfcConnectionSurfaceGeometry(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConnectionSurfaceGeometry * > (allocateIfcConnectionSurfaceGeometry(this, Step::Id_UNSET));
    }
}

IfcConnectionSurfaceGeometry *ExpressDataSet::cloneIfcConnectionSurfaceGeometry(ExpressDataSet *expressDataSet, const IfcConnectionSurfaceGeometry &obj, const CopyOp &copyop) {
    IfcConnectionSurfaceGeometry *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConnectionSurfaceGeometry(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConnectionSurfaceGeometry_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConnectionSurfaceGeometry *ExpressDataSet::cloneIfcConnectionSurfaceGeometry(const IfcConnectionSurfaceGeometry &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConnectionSurfaceGeometry(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConnectionSurfaceGeometry(this, obj, copyop);
    }
}

IfcConstraintAggregationRelationship *ExpressDataSet::getIfcConstraintAggregationRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConstraintAggregationRelationship * > (current->second.get());
    }
    else {
        IfcConstraintAggregationRelationship *ret = static_cast< IfcConstraintAggregationRelationship * > (allocateIfcConstraintAggregationRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConstraintAggregationRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConstraintAggregationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConstraintAggregationRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConstraintAggregationRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConstraintAggregationRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConstraintAggregationRelationship > ExpressDataSet::createIfcConstraintAggregationRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcConstraintAggregationRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConstraintAggregationRelationship * > (allocateIfcConstraintAggregationRelationship(this, Step::Id_UNSET));
    }
}

IfcConstraintAggregationRelationship *ExpressDataSet::cloneIfcConstraintAggregationRelationship(ExpressDataSet *expressDataSet, const IfcConstraintAggregationRelationship &obj, const CopyOp &copyop) {
    IfcConstraintAggregationRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConstraintAggregationRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConstraintAggregationRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConstraintAggregationRelationship *ExpressDataSet::cloneIfcConstraintAggregationRelationship(const IfcConstraintAggregationRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConstraintAggregationRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConstraintAggregationRelationship(this, obj, copyop);
    }
}

IfcConstraintClassificationRelationship *ExpressDataSet::getIfcConstraintClassificationRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConstraintClassificationRelationship * > (current->second.get());
    }
    else {
        IfcConstraintClassificationRelationship *ret = static_cast< IfcConstraintClassificationRelationship * > (allocateIfcConstraintClassificationRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConstraintClassificationRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConstraintClassificationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConstraintClassificationRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConstraintClassificationRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConstraintClassificationRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConstraintClassificationRelationship > ExpressDataSet::createIfcConstraintClassificationRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcConstraintClassificationRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConstraintClassificationRelationship * > (allocateIfcConstraintClassificationRelationship(this, Step::Id_UNSET));
    }
}

IfcConstraintClassificationRelationship *ExpressDataSet::cloneIfcConstraintClassificationRelationship(ExpressDataSet *expressDataSet, const IfcConstraintClassificationRelationship &obj, const CopyOp &copyop) {
    IfcConstraintClassificationRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConstraintClassificationRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConstraintClassificationRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConstraintClassificationRelationship *ExpressDataSet::cloneIfcConstraintClassificationRelationship(const IfcConstraintClassificationRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConstraintClassificationRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConstraintClassificationRelationship(this, obj, copyop);
    }
}

IfcConstraintRelationship *ExpressDataSet::getIfcConstraintRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConstraintRelationship * > (current->second.get());
    }
    else {
        IfcConstraintRelationship *ret = static_cast< IfcConstraintRelationship * > (allocateIfcConstraintRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConstraintRelationship(IfcConstraintRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConstraintRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConstraintRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConstraintRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConstraintRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConstraintRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConstraintRelationship > ExpressDataSet::createIfcConstraintRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcConstraintRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConstraintRelationship * > (allocateIfcConstraintRelationship(this, Step::Id_UNSET));
    }
}

IfcConstraintRelationship *ExpressDataSet::cloneIfcConstraintRelationship(ExpressDataSet *expressDataSet, const IfcConstraintRelationship &obj, const CopyOp &copyop) {
    IfcConstraintRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConstraintRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConstraintRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConstraintRelationship *ExpressDataSet::cloneIfcConstraintRelationship(const IfcConstraintRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConstraintRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConstraintRelationship(this, obj, copyop);
    }
}

IfcConstructionEquipmentResource *ExpressDataSet::getIfcConstructionEquipmentResource(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConstructionEquipmentResource * > (current->second.get());
    }
    else {
        IfcConstructionEquipmentResource *ret = static_cast< IfcConstructionEquipmentResource * > (allocateIfcConstructionEquipmentResource(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConstructionEquipmentResource_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConstructionEquipmentResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConstructionEquipmentResource *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConstructionEquipmentResource(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConstructionEquipmentResource_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConstructionEquipmentResource > ExpressDataSet::createIfcConstructionEquipmentResource(bool isVolatile) {
    if (isVolatile) {
        return new IfcConstructionEquipmentResource(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConstructionEquipmentResource * > (allocateIfcConstructionEquipmentResource(this, Step::Id_UNSET));
    }
}

IfcConstructionEquipmentResource *ExpressDataSet::cloneIfcConstructionEquipmentResource(ExpressDataSet *expressDataSet, const IfcConstructionEquipmentResource &obj, const CopyOp &copyop) {
    IfcConstructionEquipmentResource *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConstructionEquipmentResource(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConstructionEquipmentResource_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConstructionEquipmentResource *ExpressDataSet::cloneIfcConstructionEquipmentResource(const IfcConstructionEquipmentResource &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConstructionEquipmentResource(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConstructionEquipmentResource(this, obj, copyop);
    }
}

IfcConstructionMaterialResource *ExpressDataSet::getIfcConstructionMaterialResource(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConstructionMaterialResource * > (current->second.get());
    }
    else {
        IfcConstructionMaterialResource *ret = static_cast< IfcConstructionMaterialResource * > (allocateIfcConstructionMaterialResource(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConstructionMaterialResource(IfcConstructionMaterialResource *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConstructionMaterialResource_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConstructionMaterialResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConstructionMaterialResource *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConstructionMaterialResource(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConstructionMaterialResource_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConstructionMaterialResource > ExpressDataSet::createIfcConstructionMaterialResource(bool isVolatile) {
    if (isVolatile) {
        return new IfcConstructionMaterialResource(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConstructionMaterialResource * > (allocateIfcConstructionMaterialResource(this, Step::Id_UNSET));
    }
}

IfcConstructionMaterialResource *ExpressDataSet::cloneIfcConstructionMaterialResource(ExpressDataSet *expressDataSet, const IfcConstructionMaterialResource &obj, const CopyOp &copyop) {
    IfcConstructionMaterialResource *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConstructionMaterialResource(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConstructionMaterialResource_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConstructionMaterialResource *ExpressDataSet::cloneIfcConstructionMaterialResource(const IfcConstructionMaterialResource &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConstructionMaterialResource(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConstructionMaterialResource(this, obj, copyop);
    }
}

IfcConstructionProductResource *ExpressDataSet::getIfcConstructionProductResource(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConstructionProductResource * > (current->second.get());
    }
    else {
        IfcConstructionProductResource *ret = static_cast< IfcConstructionProductResource * > (allocateIfcConstructionProductResource(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConstructionProductResource(IfcConstructionProductResource *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConstructionProductResource_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConstructionProductResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConstructionProductResource *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConstructionProductResource(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConstructionProductResource_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConstructionProductResource > ExpressDataSet::createIfcConstructionProductResource(bool isVolatile) {
    if (isVolatile) {
        return new IfcConstructionProductResource(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConstructionProductResource * > (allocateIfcConstructionProductResource(this, Step::Id_UNSET));
    }
}

IfcConstructionProductResource *ExpressDataSet::cloneIfcConstructionProductResource(ExpressDataSet *expressDataSet, const IfcConstructionProductResource &obj, const CopyOp &copyop) {
    IfcConstructionProductResource *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConstructionProductResource(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConstructionProductResource_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConstructionProductResource *ExpressDataSet::cloneIfcConstructionProductResource(const IfcConstructionProductResource &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConstructionProductResource(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConstructionProductResource(this, obj, copyop);
    }
}

IfcContextDependentUnit *ExpressDataSet::getIfcContextDependentUnit(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcContextDependentUnit * > (current->second.get());
    }
    else {
        IfcContextDependentUnit *ret = static_cast< IfcContextDependentUnit * > (allocateIfcContextDependentUnit(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcContextDependentUnit(IfcContextDependentUnit *arg) {
    getAll().erase(arg->getKey());
    return m_IfcContextDependentUnit_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcContextDependentUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcContextDependentUnit *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcContextDependentUnit(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcContextDependentUnit_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcContextDependentUnit > ExpressDataSet::createIfcContextDependentUnit(bool isVolatile) {
    if (isVolatile) {
        return new IfcContextDependentUnit(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcContextDependentUnit * > (allocateIfcContextDependentUnit(this, Step::Id_UNSET));
    }
}

IfcContextDependentUnit *ExpressDataSet::cloneIfcContextDependentUnit(ExpressDataSet *expressDataSet, const IfcContextDependentUnit &obj, const CopyOp &copyop) {
    IfcContextDependentUnit *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcContextDependentUnit(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcContextDependentUnit_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcContextDependentUnit *ExpressDataSet::cloneIfcContextDependentUnit(const IfcContextDependentUnit &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcContextDependentUnit(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcContextDependentUnit(this, obj, copyop);
    }
}

IfcControllerType *ExpressDataSet::getIfcControllerType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcControllerType * > (current->second.get());
    }
    else {
        IfcControllerType *ret = static_cast< IfcControllerType * > (allocateIfcControllerType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcControllerType(IfcControllerType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcControllerType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcControllerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcControllerType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcControllerType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcControllerType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcControllerType > ExpressDataSet::createIfcControllerType(bool isVolatile) {
    if (isVolatile) {
        return new IfcControllerType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcControllerType * > (allocateIfcControllerType(this, Step::Id_UNSET));
    }
}

IfcControllerType *ExpressDataSet::cloneIfcControllerType(ExpressDataSet *expressDataSet, const IfcControllerType &obj, const CopyOp &copyop) {
    IfcControllerType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcControllerType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcControllerType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcControllerType *ExpressDataSet::cloneIfcControllerType(const IfcControllerType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcControllerType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcControllerType(this, obj, copyop);
    }
}

IfcConversionBasedUnit *ExpressDataSet::getIfcConversionBasedUnit(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcConversionBasedUnit * > (current->second.get());
    }
    else {
        IfcConversionBasedUnit *ret = static_cast< IfcConversionBasedUnit * > (allocateIfcConversionBasedUnit(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcConversionBasedUnit(IfcConversionBasedUnit *arg) {
    getAll().erase(arg->getKey());
    return m_IfcConversionBasedUnit_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcConversionBasedUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcConversionBasedUnit *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcConversionBasedUnit(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcConversionBasedUnit_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcConversionBasedUnit > ExpressDataSet::createIfcConversionBasedUnit(bool isVolatile) {
    if (isVolatile) {
        return new IfcConversionBasedUnit(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcConversionBasedUnit * > (allocateIfcConversionBasedUnit(this, Step::Id_UNSET));
    }
}

IfcConversionBasedUnit *ExpressDataSet::cloneIfcConversionBasedUnit(ExpressDataSet *expressDataSet, const IfcConversionBasedUnit &obj, const CopyOp &copyop) {
    IfcConversionBasedUnit *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcConversionBasedUnit(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcConversionBasedUnit_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcConversionBasedUnit *ExpressDataSet::cloneIfcConversionBasedUnit(const IfcConversionBasedUnit &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcConversionBasedUnit(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcConversionBasedUnit(this, obj, copyop);
    }
}

IfcCooledBeamType *ExpressDataSet::getIfcCooledBeamType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCooledBeamType * > (current->second.get());
    }
    else {
        IfcCooledBeamType *ret = static_cast< IfcCooledBeamType * > (allocateIfcCooledBeamType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCooledBeamType(IfcCooledBeamType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCooledBeamType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCooledBeamType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCooledBeamType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCooledBeamType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCooledBeamType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCooledBeamType > ExpressDataSet::createIfcCooledBeamType(bool isVolatile) {
    if (isVolatile) {
        return new IfcCooledBeamType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCooledBeamType * > (allocateIfcCooledBeamType(this, Step::Id_UNSET));
    }
}

IfcCooledBeamType *ExpressDataSet::cloneIfcCooledBeamType(ExpressDataSet *expressDataSet, const IfcCooledBeamType &obj, const CopyOp &copyop) {
    IfcCooledBeamType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCooledBeamType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCooledBeamType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCooledBeamType *ExpressDataSet::cloneIfcCooledBeamType(const IfcCooledBeamType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCooledBeamType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCooledBeamType(this, obj, copyop);
    }
}

IfcCoolingTowerType *ExpressDataSet::getIfcCoolingTowerType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCoolingTowerType * > (current->second.get());
    }
    else {
        IfcCoolingTowerType *ret = static_cast< IfcCoolingTowerType * > (allocateIfcCoolingTowerType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCoolingTowerType(IfcCoolingTowerType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCoolingTowerType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCoolingTowerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCoolingTowerType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCoolingTowerType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCoolingTowerType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCoolingTowerType > ExpressDataSet::createIfcCoolingTowerType(bool isVolatile) {
    if (isVolatile) {
        return new IfcCoolingTowerType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCoolingTowerType * > (allocateIfcCoolingTowerType(this, Step::Id_UNSET));
    }
}

IfcCoolingTowerType *ExpressDataSet::cloneIfcCoolingTowerType(ExpressDataSet *expressDataSet, const IfcCoolingTowerType &obj, const CopyOp &copyop) {
    IfcCoolingTowerType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCoolingTowerType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCoolingTowerType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCoolingTowerType *ExpressDataSet::cloneIfcCoolingTowerType(const IfcCoolingTowerType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCoolingTowerType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCoolingTowerType(this, obj, copyop);
    }
}

IfcCoordinatedUniversalTimeOffset *ExpressDataSet::getIfcCoordinatedUniversalTimeOffset(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCoordinatedUniversalTimeOffset * > (current->second.get());
    }
    else {
        IfcCoordinatedUniversalTimeOffset *ret = static_cast< IfcCoordinatedUniversalTimeOffset * > (allocateIfcCoordinatedUniversalTimeOffset(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCoordinatedUniversalTimeOffset_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCoordinatedUniversalTimeOffset(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCoordinatedUniversalTimeOffset *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCoordinatedUniversalTimeOffset(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCoordinatedUniversalTimeOffset_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCoordinatedUniversalTimeOffset > ExpressDataSet::createIfcCoordinatedUniversalTimeOffset(bool isVolatile) {
    if (isVolatile) {
        return new IfcCoordinatedUniversalTimeOffset(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCoordinatedUniversalTimeOffset * > (allocateIfcCoordinatedUniversalTimeOffset(this, Step::Id_UNSET));
    }
}

IfcCoordinatedUniversalTimeOffset *ExpressDataSet::cloneIfcCoordinatedUniversalTimeOffset(ExpressDataSet *expressDataSet, const IfcCoordinatedUniversalTimeOffset &obj, const CopyOp &copyop) {
    IfcCoordinatedUniversalTimeOffset *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCoordinatedUniversalTimeOffset(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCoordinatedUniversalTimeOffset_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCoordinatedUniversalTimeOffset *ExpressDataSet::cloneIfcCoordinatedUniversalTimeOffset(const IfcCoordinatedUniversalTimeOffset &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCoordinatedUniversalTimeOffset(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCoordinatedUniversalTimeOffset(this, obj, copyop);
    }
}

IfcCostItem *ExpressDataSet::getIfcCostItem(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCostItem * > (current->second.get());
    }
    else {
        IfcCostItem *ret = static_cast< IfcCostItem * > (allocateIfcCostItem(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCostItem(IfcCostItem *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCostItem_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCostItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCostItem *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCostItem(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCostItem_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCostItem > ExpressDataSet::createIfcCostItem(bool isVolatile) {
    if (isVolatile) {
        return new IfcCostItem(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCostItem * > (allocateIfcCostItem(this, Step::Id_UNSET));
    }
}

IfcCostItem *ExpressDataSet::cloneIfcCostItem(ExpressDataSet *expressDataSet, const IfcCostItem &obj, const CopyOp &copyop) {
    IfcCostItem *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCostItem(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCostItem_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCostItem *ExpressDataSet::cloneIfcCostItem(const IfcCostItem &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCostItem(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCostItem(this, obj, copyop);
    }
}

IfcCostSchedule *ExpressDataSet::getIfcCostSchedule(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCostSchedule * > (current->second.get());
    }
    else {
        IfcCostSchedule *ret = static_cast< IfcCostSchedule * > (allocateIfcCostSchedule(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCostSchedule(IfcCostSchedule *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCostSchedule_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCostSchedule(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCostSchedule *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCostSchedule(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCostSchedule_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCostSchedule > ExpressDataSet::createIfcCostSchedule(bool isVolatile) {
    if (isVolatile) {
        return new IfcCostSchedule(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCostSchedule * > (allocateIfcCostSchedule(this, Step::Id_UNSET));
    }
}

IfcCostSchedule *ExpressDataSet::cloneIfcCostSchedule(ExpressDataSet *expressDataSet, const IfcCostSchedule &obj, const CopyOp &copyop) {
    IfcCostSchedule *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCostSchedule(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCostSchedule_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCostSchedule *ExpressDataSet::cloneIfcCostSchedule(const IfcCostSchedule &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCostSchedule(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCostSchedule(this, obj, copyop);
    }
}

IfcCostValue *ExpressDataSet::getIfcCostValue(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCostValue * > (current->second.get());
    }
    else {
        IfcCostValue *ret = static_cast< IfcCostValue * > (allocateIfcCostValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCostValue(IfcCostValue *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCostValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCostValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCostValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCostValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCostValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCostValue > ExpressDataSet::createIfcCostValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcCostValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCostValue * > (allocateIfcCostValue(this, Step::Id_UNSET));
    }
}

IfcCostValue *ExpressDataSet::cloneIfcCostValue(ExpressDataSet *expressDataSet, const IfcCostValue &obj, const CopyOp &copyop) {
    IfcCostValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCostValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCostValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCostValue *ExpressDataSet::cloneIfcCostValue(const IfcCostValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCostValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCostValue(this, obj, copyop);
    }
}

IfcCovering *ExpressDataSet::getIfcCovering(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCovering * > (current->second.get());
    }
    else {
        IfcCovering *ret = static_cast< IfcCovering * > (allocateIfcCovering(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCovering(IfcCovering *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCovering_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCovering(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCovering *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCovering(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCovering_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCovering > ExpressDataSet::createIfcCovering(bool isVolatile) {
    if (isVolatile) {
        return new IfcCovering(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCovering * > (allocateIfcCovering(this, Step::Id_UNSET));
    }
}

IfcCovering *ExpressDataSet::cloneIfcCovering(ExpressDataSet *expressDataSet, const IfcCovering &obj, const CopyOp &copyop) {
    IfcCovering *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCovering(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCovering_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCovering *ExpressDataSet::cloneIfcCovering(const IfcCovering &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCovering(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCovering(this, obj, copyop);
    }
}

IfcCoveringType *ExpressDataSet::getIfcCoveringType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCoveringType * > (current->second.get());
    }
    else {
        IfcCoveringType *ret = static_cast< IfcCoveringType * > (allocateIfcCoveringType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCoveringType(IfcCoveringType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCoveringType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCoveringType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCoveringType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCoveringType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCoveringType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCoveringType > ExpressDataSet::createIfcCoveringType(bool isVolatile) {
    if (isVolatile) {
        return new IfcCoveringType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCoveringType * > (allocateIfcCoveringType(this, Step::Id_UNSET));
    }
}

IfcCoveringType *ExpressDataSet::cloneIfcCoveringType(ExpressDataSet *expressDataSet, const IfcCoveringType &obj, const CopyOp &copyop) {
    IfcCoveringType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCoveringType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCoveringType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCoveringType *ExpressDataSet::cloneIfcCoveringType(const IfcCoveringType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCoveringType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCoveringType(this, obj, copyop);
    }
}

IfcCraneRailAShapeProfileDef *ExpressDataSet::getIfcCraneRailAShapeProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCraneRailAShapeProfileDef * > (current->second.get());
    }
    else {
        IfcCraneRailAShapeProfileDef *ret = static_cast< IfcCraneRailAShapeProfileDef * > (allocateIfcCraneRailAShapeProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCraneRailAShapeProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCraneRailAShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCraneRailAShapeProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCraneRailAShapeProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCraneRailAShapeProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCraneRailAShapeProfileDef > ExpressDataSet::createIfcCraneRailAShapeProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcCraneRailAShapeProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCraneRailAShapeProfileDef * > (allocateIfcCraneRailAShapeProfileDef(this, Step::Id_UNSET));
    }
}

IfcCraneRailAShapeProfileDef *ExpressDataSet::cloneIfcCraneRailAShapeProfileDef(ExpressDataSet *expressDataSet, const IfcCraneRailAShapeProfileDef &obj, const CopyOp &copyop) {
    IfcCraneRailAShapeProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCraneRailAShapeProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCraneRailAShapeProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCraneRailAShapeProfileDef *ExpressDataSet::cloneIfcCraneRailAShapeProfileDef(const IfcCraneRailAShapeProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCraneRailAShapeProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCraneRailAShapeProfileDef(this, obj, copyop);
    }
}

IfcCraneRailFShapeProfileDef *ExpressDataSet::getIfcCraneRailFShapeProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCraneRailFShapeProfileDef * > (current->second.get());
    }
    else {
        IfcCraneRailFShapeProfileDef *ret = static_cast< IfcCraneRailFShapeProfileDef * > (allocateIfcCraneRailFShapeProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCraneRailFShapeProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCraneRailFShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCraneRailFShapeProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCraneRailFShapeProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCraneRailFShapeProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCraneRailFShapeProfileDef > ExpressDataSet::createIfcCraneRailFShapeProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcCraneRailFShapeProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCraneRailFShapeProfileDef * > (allocateIfcCraneRailFShapeProfileDef(this, Step::Id_UNSET));
    }
}

IfcCraneRailFShapeProfileDef *ExpressDataSet::cloneIfcCraneRailFShapeProfileDef(ExpressDataSet *expressDataSet, const IfcCraneRailFShapeProfileDef &obj, const CopyOp &copyop) {
    IfcCraneRailFShapeProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCraneRailFShapeProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCraneRailFShapeProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCraneRailFShapeProfileDef *ExpressDataSet::cloneIfcCraneRailFShapeProfileDef(const IfcCraneRailFShapeProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCraneRailFShapeProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCraneRailFShapeProfileDef(this, obj, copyop);
    }
}

IfcCrewResource *ExpressDataSet::getIfcCrewResource(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCrewResource * > (current->second.get());
    }
    else {
        IfcCrewResource *ret = static_cast< IfcCrewResource * > (allocateIfcCrewResource(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCrewResource(IfcCrewResource *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCrewResource_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCrewResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCrewResource *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCrewResource(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCrewResource_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCrewResource > ExpressDataSet::createIfcCrewResource(bool isVolatile) {
    if (isVolatile) {
        return new IfcCrewResource(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCrewResource * > (allocateIfcCrewResource(this, Step::Id_UNSET));
    }
}

IfcCrewResource *ExpressDataSet::cloneIfcCrewResource(ExpressDataSet *expressDataSet, const IfcCrewResource &obj, const CopyOp &copyop) {
    IfcCrewResource *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCrewResource(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCrewResource_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCrewResource *ExpressDataSet::cloneIfcCrewResource(const IfcCrewResource &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCrewResource(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCrewResource(this, obj, copyop);
    }
}

IfcCsgSolid *ExpressDataSet::getIfcCsgSolid(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCsgSolid * > (current->second.get());
    }
    else {
        IfcCsgSolid *ret = static_cast< IfcCsgSolid * > (allocateIfcCsgSolid(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCsgSolid(IfcCsgSolid *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCsgSolid_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCsgSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCsgSolid *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCsgSolid(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCsgSolid_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCsgSolid > ExpressDataSet::createIfcCsgSolid(bool isVolatile) {
    if (isVolatile) {
        return new IfcCsgSolid(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCsgSolid * > (allocateIfcCsgSolid(this, Step::Id_UNSET));
    }
}

IfcCsgSolid *ExpressDataSet::cloneIfcCsgSolid(ExpressDataSet *expressDataSet, const IfcCsgSolid &obj, const CopyOp &copyop) {
    IfcCsgSolid *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCsgSolid(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCsgSolid_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCsgSolid *ExpressDataSet::cloneIfcCsgSolid(const IfcCsgSolid &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCsgSolid(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCsgSolid(this, obj, copyop);
    }
}

IfcCurrencyRelationship *ExpressDataSet::getIfcCurrencyRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCurrencyRelationship * > (current->second.get());
    }
    else {
        IfcCurrencyRelationship *ret = static_cast< IfcCurrencyRelationship * > (allocateIfcCurrencyRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCurrencyRelationship(IfcCurrencyRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCurrencyRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCurrencyRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCurrencyRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCurrencyRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCurrencyRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCurrencyRelationship > ExpressDataSet::createIfcCurrencyRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcCurrencyRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCurrencyRelationship * > (allocateIfcCurrencyRelationship(this, Step::Id_UNSET));
    }
}

IfcCurrencyRelationship *ExpressDataSet::cloneIfcCurrencyRelationship(ExpressDataSet *expressDataSet, const IfcCurrencyRelationship &obj, const CopyOp &copyop) {
    IfcCurrencyRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCurrencyRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCurrencyRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCurrencyRelationship *ExpressDataSet::cloneIfcCurrencyRelationship(const IfcCurrencyRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCurrencyRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCurrencyRelationship(this, obj, copyop);
    }
}

