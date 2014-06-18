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

IfcCurtainWall *ExpressDataSet::getIfcCurtainWall(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCurtainWall * > (current->second.get());
    }
    else {
        IfcCurtainWall *ret = static_cast< IfcCurtainWall * > (allocateIfcCurtainWall(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCurtainWall(IfcCurtainWall *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCurtainWall_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCurtainWall(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCurtainWall *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCurtainWall(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCurtainWall_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCurtainWall > ExpressDataSet::createIfcCurtainWall(bool isVolatile) {
    if (isVolatile) {
        return new IfcCurtainWall(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCurtainWall * > (allocateIfcCurtainWall(this, Step::Id_UNSET));
    }
}

IfcCurtainWall *ExpressDataSet::cloneIfcCurtainWall(ExpressDataSet *expressDataSet, const IfcCurtainWall &obj, const CopyOp &copyop) {
    IfcCurtainWall *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCurtainWall(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCurtainWall_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCurtainWall *ExpressDataSet::cloneIfcCurtainWall(const IfcCurtainWall &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCurtainWall(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCurtainWall(this, obj, copyop);
    }
}

IfcCurtainWallType *ExpressDataSet::getIfcCurtainWallType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCurtainWallType * > (current->second.get());
    }
    else {
        IfcCurtainWallType *ret = static_cast< IfcCurtainWallType * > (allocateIfcCurtainWallType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCurtainWallType(IfcCurtainWallType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCurtainWallType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCurtainWallType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCurtainWallType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCurtainWallType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCurtainWallType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCurtainWallType > ExpressDataSet::createIfcCurtainWallType(bool isVolatile) {
    if (isVolatile) {
        return new IfcCurtainWallType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCurtainWallType * > (allocateIfcCurtainWallType(this, Step::Id_UNSET));
    }
}

IfcCurtainWallType *ExpressDataSet::cloneIfcCurtainWallType(ExpressDataSet *expressDataSet, const IfcCurtainWallType &obj, const CopyOp &copyop) {
    IfcCurtainWallType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCurtainWallType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCurtainWallType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCurtainWallType *ExpressDataSet::cloneIfcCurtainWallType(const IfcCurtainWallType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCurtainWallType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCurtainWallType(this, obj, copyop);
    }
}

IfcCurveBoundedPlane *ExpressDataSet::getIfcCurveBoundedPlane(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCurveBoundedPlane * > (current->second.get());
    }
    else {
        IfcCurveBoundedPlane *ret = static_cast< IfcCurveBoundedPlane * > (allocateIfcCurveBoundedPlane(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCurveBoundedPlane(IfcCurveBoundedPlane *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCurveBoundedPlane_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCurveBoundedPlane(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCurveBoundedPlane *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCurveBoundedPlane(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCurveBoundedPlane_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCurveBoundedPlane > ExpressDataSet::createIfcCurveBoundedPlane(bool isVolatile) {
    if (isVolatile) {
        return new IfcCurveBoundedPlane(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCurveBoundedPlane * > (allocateIfcCurveBoundedPlane(this, Step::Id_UNSET));
    }
}

IfcCurveBoundedPlane *ExpressDataSet::cloneIfcCurveBoundedPlane(ExpressDataSet *expressDataSet, const IfcCurveBoundedPlane &obj, const CopyOp &copyop) {
    IfcCurveBoundedPlane *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCurveBoundedPlane(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCurveBoundedPlane_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCurveBoundedPlane *ExpressDataSet::cloneIfcCurveBoundedPlane(const IfcCurveBoundedPlane &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCurveBoundedPlane(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCurveBoundedPlane(this, obj, copyop);
    }
}

IfcCurveStyle *ExpressDataSet::getIfcCurveStyle(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCurveStyle * > (current->second.get());
    }
    else {
        IfcCurveStyle *ret = static_cast< IfcCurveStyle * > (allocateIfcCurveStyle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCurveStyle(IfcCurveStyle *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCurveStyle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCurveStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCurveStyle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCurveStyle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCurveStyle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCurveStyle > ExpressDataSet::createIfcCurveStyle(bool isVolatile) {
    if (isVolatile) {
        return new IfcCurveStyle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCurveStyle * > (allocateIfcCurveStyle(this, Step::Id_UNSET));
    }
}

IfcCurveStyle *ExpressDataSet::cloneIfcCurveStyle(ExpressDataSet *expressDataSet, const IfcCurveStyle &obj, const CopyOp &copyop) {
    IfcCurveStyle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCurveStyle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCurveStyle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCurveStyle *ExpressDataSet::cloneIfcCurveStyle(const IfcCurveStyle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCurveStyle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCurveStyle(this, obj, copyop);
    }
}

IfcCurveStyleFont *ExpressDataSet::getIfcCurveStyleFont(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCurveStyleFont * > (current->second.get());
    }
    else {
        IfcCurveStyleFont *ret = static_cast< IfcCurveStyleFont * > (allocateIfcCurveStyleFont(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCurveStyleFont(IfcCurveStyleFont *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCurveStyleFont_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCurveStyleFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCurveStyleFont *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCurveStyleFont(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCurveStyleFont_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCurveStyleFont > ExpressDataSet::createIfcCurveStyleFont(bool isVolatile) {
    if (isVolatile) {
        return new IfcCurveStyleFont(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCurveStyleFont * > (allocateIfcCurveStyleFont(this, Step::Id_UNSET));
    }
}

IfcCurveStyleFont *ExpressDataSet::cloneIfcCurveStyleFont(ExpressDataSet *expressDataSet, const IfcCurveStyleFont &obj, const CopyOp &copyop) {
    IfcCurveStyleFont *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCurveStyleFont(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCurveStyleFont_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCurveStyleFont *ExpressDataSet::cloneIfcCurveStyleFont(const IfcCurveStyleFont &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCurveStyleFont(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCurveStyleFont(this, obj, copyop);
    }
}

IfcCurveStyleFontAndScaling *ExpressDataSet::getIfcCurveStyleFontAndScaling(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCurveStyleFontAndScaling * > (current->second.get());
    }
    else {
        IfcCurveStyleFontAndScaling *ret = static_cast< IfcCurveStyleFontAndScaling * > (allocateIfcCurveStyleFontAndScaling(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCurveStyleFontAndScaling_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCurveStyleFontAndScaling(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCurveStyleFontAndScaling *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCurveStyleFontAndScaling(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCurveStyleFontAndScaling_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCurveStyleFontAndScaling > ExpressDataSet::createIfcCurveStyleFontAndScaling(bool isVolatile) {
    if (isVolatile) {
        return new IfcCurveStyleFontAndScaling(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCurveStyleFontAndScaling * > (allocateIfcCurveStyleFontAndScaling(this, Step::Id_UNSET));
    }
}

IfcCurveStyleFontAndScaling *ExpressDataSet::cloneIfcCurveStyleFontAndScaling(ExpressDataSet *expressDataSet, const IfcCurveStyleFontAndScaling &obj, const CopyOp &copyop) {
    IfcCurveStyleFontAndScaling *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCurveStyleFontAndScaling(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCurveStyleFontAndScaling_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCurveStyleFontAndScaling *ExpressDataSet::cloneIfcCurveStyleFontAndScaling(const IfcCurveStyleFontAndScaling &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCurveStyleFontAndScaling(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCurveStyleFontAndScaling(this, obj, copyop);
    }
}

IfcCurveStyleFontPattern *ExpressDataSet::getIfcCurveStyleFontPattern(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcCurveStyleFontPattern * > (current->second.get());
    }
    else {
        IfcCurveStyleFontPattern *ret = static_cast< IfcCurveStyleFontPattern * > (allocateIfcCurveStyleFontPattern(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *arg) {
    getAll().erase(arg->getKey());
    return m_IfcCurveStyleFontPattern_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcCurveStyleFontPattern(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcCurveStyleFontPattern *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcCurveStyleFontPattern(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcCurveStyleFontPattern_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcCurveStyleFontPattern > ExpressDataSet::createIfcCurveStyleFontPattern(bool isVolatile) {
    if (isVolatile) {
        return new IfcCurveStyleFontPattern(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcCurveStyleFontPattern * > (allocateIfcCurveStyleFontPattern(this, Step::Id_UNSET));
    }
}

IfcCurveStyleFontPattern *ExpressDataSet::cloneIfcCurveStyleFontPattern(ExpressDataSet *expressDataSet, const IfcCurveStyleFontPattern &obj, const CopyOp &copyop) {
    IfcCurveStyleFontPattern *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcCurveStyleFontPattern(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcCurveStyleFontPattern_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcCurveStyleFontPattern *ExpressDataSet::cloneIfcCurveStyleFontPattern(const IfcCurveStyleFontPattern &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcCurveStyleFontPattern(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcCurveStyleFontPattern(this, obj, copyop);
    }
}

IfcDamperType *ExpressDataSet::getIfcDamperType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDamperType * > (current->second.get());
    }
    else {
        IfcDamperType *ret = static_cast< IfcDamperType * > (allocateIfcDamperType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDamperType(IfcDamperType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDamperType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDamperType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDamperType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDamperType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDamperType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDamperType > ExpressDataSet::createIfcDamperType(bool isVolatile) {
    if (isVolatile) {
        return new IfcDamperType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDamperType * > (allocateIfcDamperType(this, Step::Id_UNSET));
    }
}

IfcDamperType *ExpressDataSet::cloneIfcDamperType(ExpressDataSet *expressDataSet, const IfcDamperType &obj, const CopyOp &copyop) {
    IfcDamperType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDamperType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDamperType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDamperType *ExpressDataSet::cloneIfcDamperType(const IfcDamperType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDamperType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDamperType(this, obj, copyop);
    }
}

IfcDateAndTime *ExpressDataSet::getIfcDateAndTime(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDateAndTime * > (current->second.get());
    }
    else {
        IfcDateAndTime *ret = static_cast< IfcDateAndTime * > (allocateIfcDateAndTime(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDateAndTime(IfcDateAndTime *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDateAndTime_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDateAndTime(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDateAndTime *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDateAndTime(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDateAndTime_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDateAndTime > ExpressDataSet::createIfcDateAndTime(bool isVolatile) {
    if (isVolatile) {
        return new IfcDateAndTime(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDateAndTime * > (allocateIfcDateAndTime(this, Step::Id_UNSET));
    }
}

IfcDateAndTime *ExpressDataSet::cloneIfcDateAndTime(ExpressDataSet *expressDataSet, const IfcDateAndTime &obj, const CopyOp &copyop) {
    IfcDateAndTime *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDateAndTime(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDateAndTime_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDateAndTime *ExpressDataSet::cloneIfcDateAndTime(const IfcDateAndTime &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDateAndTime(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDateAndTime(this, obj, copyop);
    }
}

IfcDefinedSymbol *ExpressDataSet::getIfcDefinedSymbol(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDefinedSymbol * > (current->second.get());
    }
    else {
        IfcDefinedSymbol *ret = static_cast< IfcDefinedSymbol * > (allocateIfcDefinedSymbol(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDefinedSymbol(IfcDefinedSymbol *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDefinedSymbol_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDefinedSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDefinedSymbol *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDefinedSymbol(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDefinedSymbol_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDefinedSymbol > ExpressDataSet::createIfcDefinedSymbol(bool isVolatile) {
    if (isVolatile) {
        return new IfcDefinedSymbol(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDefinedSymbol * > (allocateIfcDefinedSymbol(this, Step::Id_UNSET));
    }
}

IfcDefinedSymbol *ExpressDataSet::cloneIfcDefinedSymbol(ExpressDataSet *expressDataSet, const IfcDefinedSymbol &obj, const CopyOp &copyop) {
    IfcDefinedSymbol *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDefinedSymbol(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDefinedSymbol_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDefinedSymbol *ExpressDataSet::cloneIfcDefinedSymbol(const IfcDefinedSymbol &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDefinedSymbol(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDefinedSymbol(this, obj, copyop);
    }
}

IfcDerivedProfileDef *ExpressDataSet::getIfcDerivedProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDerivedProfileDef * > (current->second.get());
    }
    else {
        IfcDerivedProfileDef *ret = static_cast< IfcDerivedProfileDef * > (allocateIfcDerivedProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDerivedProfileDef(IfcDerivedProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDerivedProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDerivedProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDerivedProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDerivedProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDerivedProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDerivedProfileDef > ExpressDataSet::createIfcDerivedProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcDerivedProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDerivedProfileDef * > (allocateIfcDerivedProfileDef(this, Step::Id_UNSET));
    }
}

IfcDerivedProfileDef *ExpressDataSet::cloneIfcDerivedProfileDef(ExpressDataSet *expressDataSet, const IfcDerivedProfileDef &obj, const CopyOp &copyop) {
    IfcDerivedProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDerivedProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDerivedProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDerivedProfileDef *ExpressDataSet::cloneIfcDerivedProfileDef(const IfcDerivedProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDerivedProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDerivedProfileDef(this, obj, copyop);
    }
}

IfcDerivedUnit *ExpressDataSet::getIfcDerivedUnit(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDerivedUnit * > (current->second.get());
    }
    else {
        IfcDerivedUnit *ret = static_cast< IfcDerivedUnit * > (allocateIfcDerivedUnit(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDerivedUnit(IfcDerivedUnit *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDerivedUnit_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDerivedUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDerivedUnit *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDerivedUnit(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDerivedUnit_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDerivedUnit > ExpressDataSet::createIfcDerivedUnit(bool isVolatile) {
    if (isVolatile) {
        return new IfcDerivedUnit(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDerivedUnit * > (allocateIfcDerivedUnit(this, Step::Id_UNSET));
    }
}

IfcDerivedUnit *ExpressDataSet::cloneIfcDerivedUnit(ExpressDataSet *expressDataSet, const IfcDerivedUnit &obj, const CopyOp &copyop) {
    IfcDerivedUnit *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDerivedUnit(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDerivedUnit_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDerivedUnit *ExpressDataSet::cloneIfcDerivedUnit(const IfcDerivedUnit &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDerivedUnit(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDerivedUnit(this, obj, copyop);
    }
}

IfcDerivedUnitElement *ExpressDataSet::getIfcDerivedUnitElement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDerivedUnitElement * > (current->second.get());
    }
    else {
        IfcDerivedUnitElement *ret = static_cast< IfcDerivedUnitElement * > (allocateIfcDerivedUnitElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDerivedUnitElement(IfcDerivedUnitElement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDerivedUnitElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDerivedUnitElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDerivedUnitElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDerivedUnitElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDerivedUnitElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDerivedUnitElement > ExpressDataSet::createIfcDerivedUnitElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcDerivedUnitElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDerivedUnitElement * > (allocateIfcDerivedUnitElement(this, Step::Id_UNSET));
    }
}

IfcDerivedUnitElement *ExpressDataSet::cloneIfcDerivedUnitElement(ExpressDataSet *expressDataSet, const IfcDerivedUnitElement &obj, const CopyOp &copyop) {
    IfcDerivedUnitElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDerivedUnitElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDerivedUnitElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDerivedUnitElement *ExpressDataSet::cloneIfcDerivedUnitElement(const IfcDerivedUnitElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDerivedUnitElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDerivedUnitElement(this, obj, copyop);
    }
}

IfcDiameterDimension *ExpressDataSet::getIfcDiameterDimension(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDiameterDimension * > (current->second.get());
    }
    else {
        IfcDiameterDimension *ret = static_cast< IfcDiameterDimension * > (allocateIfcDiameterDimension(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDiameterDimension(IfcDiameterDimension *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDiameterDimension_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDiameterDimension(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDiameterDimension *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDiameterDimension(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDiameterDimension_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDiameterDimension > ExpressDataSet::createIfcDiameterDimension(bool isVolatile) {
    if (isVolatile) {
        return new IfcDiameterDimension(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDiameterDimension * > (allocateIfcDiameterDimension(this, Step::Id_UNSET));
    }
}

IfcDiameterDimension *ExpressDataSet::cloneIfcDiameterDimension(ExpressDataSet *expressDataSet, const IfcDiameterDimension &obj, const CopyOp &copyop) {
    IfcDiameterDimension *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDiameterDimension(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDiameterDimension_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDiameterDimension *ExpressDataSet::cloneIfcDiameterDimension(const IfcDiameterDimension &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDiameterDimension(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDiameterDimension(this, obj, copyop);
    }
}

IfcDimensionCalloutRelationship *ExpressDataSet::getIfcDimensionCalloutRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDimensionCalloutRelationship * > (current->second.get());
    }
    else {
        IfcDimensionCalloutRelationship *ret = static_cast< IfcDimensionCalloutRelationship * > (allocateIfcDimensionCalloutRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDimensionCalloutRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDimensionCalloutRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDimensionCalloutRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDimensionCalloutRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDimensionCalloutRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDimensionCalloutRelationship > ExpressDataSet::createIfcDimensionCalloutRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcDimensionCalloutRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDimensionCalloutRelationship * > (allocateIfcDimensionCalloutRelationship(this, Step::Id_UNSET));
    }
}

IfcDimensionCalloutRelationship *ExpressDataSet::cloneIfcDimensionCalloutRelationship(ExpressDataSet *expressDataSet, const IfcDimensionCalloutRelationship &obj, const CopyOp &copyop) {
    IfcDimensionCalloutRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDimensionCalloutRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDimensionCalloutRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDimensionCalloutRelationship *ExpressDataSet::cloneIfcDimensionCalloutRelationship(const IfcDimensionCalloutRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDimensionCalloutRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDimensionCalloutRelationship(this, obj, copyop);
    }
}

IfcDimensionCurve *ExpressDataSet::getIfcDimensionCurve(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDimensionCurve * > (current->second.get());
    }
    else {
        IfcDimensionCurve *ret = static_cast< IfcDimensionCurve * > (allocateIfcDimensionCurve(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDimensionCurve(IfcDimensionCurve *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDimensionCurve_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDimensionCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDimensionCurve *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDimensionCurve(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDimensionCurve_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDimensionCurve > ExpressDataSet::createIfcDimensionCurve(bool isVolatile) {
    if (isVolatile) {
        return new IfcDimensionCurve(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDimensionCurve * > (allocateIfcDimensionCurve(this, Step::Id_UNSET));
    }
}

IfcDimensionCurve *ExpressDataSet::cloneIfcDimensionCurve(ExpressDataSet *expressDataSet, const IfcDimensionCurve &obj, const CopyOp &copyop) {
    IfcDimensionCurve *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDimensionCurve(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDimensionCurve_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDimensionCurve *ExpressDataSet::cloneIfcDimensionCurve(const IfcDimensionCurve &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDimensionCurve(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDimensionCurve(this, obj, copyop);
    }
}

IfcDimensionCurveDirectedCallout *ExpressDataSet::getIfcDimensionCurveDirectedCallout(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDimensionCurveDirectedCallout * > (current->second.get());
    }
    else {
        IfcDimensionCurveDirectedCallout *ret = static_cast< IfcDimensionCurveDirectedCallout * > (allocateIfcDimensionCurveDirectedCallout(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDimensionCurveDirectedCallout_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDimensionCurveDirectedCallout(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDimensionCurveDirectedCallout *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDimensionCurveDirectedCallout(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDimensionCurveDirectedCallout_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDimensionCurveDirectedCallout > ExpressDataSet::createIfcDimensionCurveDirectedCallout(bool isVolatile) {
    if (isVolatile) {
        return new IfcDimensionCurveDirectedCallout(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDimensionCurveDirectedCallout * > (allocateIfcDimensionCurveDirectedCallout(this, Step::Id_UNSET));
    }
}

IfcDimensionCurveDirectedCallout *ExpressDataSet::cloneIfcDimensionCurveDirectedCallout(ExpressDataSet *expressDataSet, const IfcDimensionCurveDirectedCallout &obj, const CopyOp &copyop) {
    IfcDimensionCurveDirectedCallout *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDimensionCurveDirectedCallout(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDimensionCurveDirectedCallout_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDimensionCurveDirectedCallout *ExpressDataSet::cloneIfcDimensionCurveDirectedCallout(const IfcDimensionCurveDirectedCallout &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDimensionCurveDirectedCallout(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDimensionCurveDirectedCallout(this, obj, copyop);
    }
}

IfcDimensionCurveTerminator *ExpressDataSet::getIfcDimensionCurveTerminator(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDimensionCurveTerminator * > (current->second.get());
    }
    else {
        IfcDimensionCurveTerminator *ret = static_cast< IfcDimensionCurveTerminator * > (allocateIfcDimensionCurveTerminator(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDimensionCurveTerminator_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDimensionCurveTerminator(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDimensionCurveTerminator *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDimensionCurveTerminator(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDimensionCurveTerminator_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDimensionCurveTerminator > ExpressDataSet::createIfcDimensionCurveTerminator(bool isVolatile) {
    if (isVolatile) {
        return new IfcDimensionCurveTerminator(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDimensionCurveTerminator * > (allocateIfcDimensionCurveTerminator(this, Step::Id_UNSET));
    }
}

IfcDimensionCurveTerminator *ExpressDataSet::cloneIfcDimensionCurveTerminator(ExpressDataSet *expressDataSet, const IfcDimensionCurveTerminator &obj, const CopyOp &copyop) {
    IfcDimensionCurveTerminator *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDimensionCurveTerminator(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDimensionCurveTerminator_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDimensionCurveTerminator *ExpressDataSet::cloneIfcDimensionCurveTerminator(const IfcDimensionCurveTerminator &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDimensionCurveTerminator(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDimensionCurveTerminator(this, obj, copyop);
    }
}

IfcDimensionPair *ExpressDataSet::getIfcDimensionPair(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDimensionPair * > (current->second.get());
    }
    else {
        IfcDimensionPair *ret = static_cast< IfcDimensionPair * > (allocateIfcDimensionPair(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDimensionPair(IfcDimensionPair *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDimensionPair_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDimensionPair(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDimensionPair *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDimensionPair(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDimensionPair_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDimensionPair > ExpressDataSet::createIfcDimensionPair(bool isVolatile) {
    if (isVolatile) {
        return new IfcDimensionPair(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDimensionPair * > (allocateIfcDimensionPair(this, Step::Id_UNSET));
    }
}

IfcDimensionPair *ExpressDataSet::cloneIfcDimensionPair(ExpressDataSet *expressDataSet, const IfcDimensionPair &obj, const CopyOp &copyop) {
    IfcDimensionPair *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDimensionPair(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDimensionPair_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDimensionPair *ExpressDataSet::cloneIfcDimensionPair(const IfcDimensionPair &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDimensionPair(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDimensionPair(this, obj, copyop);
    }
}

IfcDimensionalExponents *ExpressDataSet::getIfcDimensionalExponents(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDimensionalExponents * > (current->second.get());
    }
    else {
        IfcDimensionalExponents *ret = static_cast< IfcDimensionalExponents * > (allocateIfcDimensionalExponents(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDimensionalExponents(IfcDimensionalExponents *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDimensionalExponents_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDimensionalExponents(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDimensionalExponents *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDimensionalExponents(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDimensionalExponents_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDimensionalExponents > ExpressDataSet::createIfcDimensionalExponents(bool isVolatile) {
    if (isVolatile) {
        return new IfcDimensionalExponents(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDimensionalExponents * > (allocateIfcDimensionalExponents(this, Step::Id_UNSET));
    }
}

IfcDimensionalExponents *ExpressDataSet::cloneIfcDimensionalExponents(ExpressDataSet *expressDataSet, const IfcDimensionalExponents &obj, const CopyOp &copyop) {
    IfcDimensionalExponents *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDimensionalExponents(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDimensionalExponents_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDimensionalExponents *ExpressDataSet::cloneIfcDimensionalExponents(const IfcDimensionalExponents &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDimensionalExponents(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDimensionalExponents(this, obj, copyop);
    }
}

IfcDirection *ExpressDataSet::getIfcDirection(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDirection * > (current->second.get());
    }
    else {
        IfcDirection *ret = static_cast< IfcDirection * > (allocateIfcDirection(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDirection(IfcDirection *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDirection_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDirection(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDirection *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDirection(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDirection_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDirection > ExpressDataSet::createIfcDirection(bool isVolatile) {
    if (isVolatile) {
        return new IfcDirection(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDirection * > (allocateIfcDirection(this, Step::Id_UNSET));
    }
}

IfcDirection *ExpressDataSet::cloneIfcDirection(ExpressDataSet *expressDataSet, const IfcDirection &obj, const CopyOp &copyop) {
    IfcDirection *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDirection(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDirection_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDirection *ExpressDataSet::cloneIfcDirection(const IfcDirection &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDirection(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDirection(this, obj, copyop);
    }
}

IfcDiscreteAccessory *ExpressDataSet::getIfcDiscreteAccessory(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDiscreteAccessory * > (current->second.get());
    }
    else {
        IfcDiscreteAccessory *ret = static_cast< IfcDiscreteAccessory * > (allocateIfcDiscreteAccessory(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDiscreteAccessory(IfcDiscreteAccessory *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDiscreteAccessory_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDiscreteAccessory(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDiscreteAccessory *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDiscreteAccessory(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDiscreteAccessory_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDiscreteAccessory > ExpressDataSet::createIfcDiscreteAccessory(bool isVolatile) {
    if (isVolatile) {
        return new IfcDiscreteAccessory(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDiscreteAccessory * > (allocateIfcDiscreteAccessory(this, Step::Id_UNSET));
    }
}

IfcDiscreteAccessory *ExpressDataSet::cloneIfcDiscreteAccessory(ExpressDataSet *expressDataSet, const IfcDiscreteAccessory &obj, const CopyOp &copyop) {
    IfcDiscreteAccessory *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDiscreteAccessory(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDiscreteAccessory_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDiscreteAccessory *ExpressDataSet::cloneIfcDiscreteAccessory(const IfcDiscreteAccessory &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDiscreteAccessory(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDiscreteAccessory(this, obj, copyop);
    }
}

IfcDiscreteAccessoryType *ExpressDataSet::getIfcDiscreteAccessoryType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDiscreteAccessoryType * > (current->second.get());
    }
    else {
        IfcDiscreteAccessoryType *ret = static_cast< IfcDiscreteAccessoryType * > (allocateIfcDiscreteAccessoryType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDiscreteAccessoryType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDiscreteAccessoryType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDiscreteAccessoryType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDiscreteAccessoryType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDiscreteAccessoryType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDiscreteAccessoryType > ExpressDataSet::createIfcDiscreteAccessoryType(bool isVolatile) {
    if (isVolatile) {
        return new IfcDiscreteAccessoryType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDiscreteAccessoryType * > (allocateIfcDiscreteAccessoryType(this, Step::Id_UNSET));
    }
}

IfcDiscreteAccessoryType *ExpressDataSet::cloneIfcDiscreteAccessoryType(ExpressDataSet *expressDataSet, const IfcDiscreteAccessoryType &obj, const CopyOp &copyop) {
    IfcDiscreteAccessoryType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDiscreteAccessoryType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDiscreteAccessoryType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDiscreteAccessoryType *ExpressDataSet::cloneIfcDiscreteAccessoryType(const IfcDiscreteAccessoryType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDiscreteAccessoryType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDiscreteAccessoryType(this, obj, copyop);
    }
}

IfcDistributionChamberElement *ExpressDataSet::getIfcDistributionChamberElement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDistributionChamberElement * > (current->second.get());
    }
    else {
        IfcDistributionChamberElement *ret = static_cast< IfcDistributionChamberElement * > (allocateIfcDistributionChamberElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDistributionChamberElement(IfcDistributionChamberElement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDistributionChamberElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDistributionChamberElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDistributionChamberElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDistributionChamberElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDistributionChamberElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDistributionChamberElement > ExpressDataSet::createIfcDistributionChamberElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcDistributionChamberElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDistributionChamberElement * > (allocateIfcDistributionChamberElement(this, Step::Id_UNSET));
    }
}

IfcDistributionChamberElement *ExpressDataSet::cloneIfcDistributionChamberElement(ExpressDataSet *expressDataSet, const IfcDistributionChamberElement &obj, const CopyOp &copyop) {
    IfcDistributionChamberElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDistributionChamberElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDistributionChamberElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDistributionChamberElement *ExpressDataSet::cloneIfcDistributionChamberElement(const IfcDistributionChamberElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDistributionChamberElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDistributionChamberElement(this, obj, copyop);
    }
}

IfcDistributionChamberElementType *ExpressDataSet::getIfcDistributionChamberElementType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDistributionChamberElementType * > (current->second.get());
    }
    else {
        IfcDistributionChamberElementType *ret = static_cast< IfcDistributionChamberElementType * > (allocateIfcDistributionChamberElementType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDistributionChamberElementType(IfcDistributionChamberElementType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDistributionChamberElementType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDistributionChamberElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDistributionChamberElementType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDistributionChamberElementType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDistributionChamberElementType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDistributionChamberElementType > ExpressDataSet::createIfcDistributionChamberElementType(bool isVolatile) {
    if (isVolatile) {
        return new IfcDistributionChamberElementType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDistributionChamberElementType * > (allocateIfcDistributionChamberElementType(this, Step::Id_UNSET));
    }
}

IfcDistributionChamberElementType *ExpressDataSet::cloneIfcDistributionChamberElementType(ExpressDataSet *expressDataSet, const IfcDistributionChamberElementType &obj, const CopyOp &copyop) {
    IfcDistributionChamberElementType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDistributionChamberElementType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDistributionChamberElementType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDistributionChamberElementType *ExpressDataSet::cloneIfcDistributionChamberElementType(const IfcDistributionChamberElementType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDistributionChamberElementType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDistributionChamberElementType(this, obj, copyop);
    }
}

IfcDistributionControlElement *ExpressDataSet::getIfcDistributionControlElement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDistributionControlElement * > (current->second.get());
    }
    else {
        IfcDistributionControlElement *ret = static_cast< IfcDistributionControlElement * > (allocateIfcDistributionControlElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDistributionControlElement(IfcDistributionControlElement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDistributionControlElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDistributionControlElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDistributionControlElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDistributionControlElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDistributionControlElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDistributionControlElement > ExpressDataSet::createIfcDistributionControlElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcDistributionControlElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDistributionControlElement * > (allocateIfcDistributionControlElement(this, Step::Id_UNSET));
    }
}

IfcDistributionControlElement *ExpressDataSet::cloneIfcDistributionControlElement(ExpressDataSet *expressDataSet, const IfcDistributionControlElement &obj, const CopyOp &copyop) {
    IfcDistributionControlElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDistributionControlElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDistributionControlElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDistributionControlElement *ExpressDataSet::cloneIfcDistributionControlElement(const IfcDistributionControlElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDistributionControlElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDistributionControlElement(this, obj, copyop);
    }
}

IfcDistributionElement *ExpressDataSet::getIfcDistributionElement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDistributionElement * > (current->second.get());
    }
    else {
        IfcDistributionElement *ret = static_cast< IfcDistributionElement * > (allocateIfcDistributionElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDistributionElement(IfcDistributionElement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDistributionElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDistributionElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDistributionElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDistributionElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDistributionElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDistributionElement > ExpressDataSet::createIfcDistributionElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcDistributionElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDistributionElement * > (allocateIfcDistributionElement(this, Step::Id_UNSET));
    }
}

IfcDistributionElement *ExpressDataSet::cloneIfcDistributionElement(ExpressDataSet *expressDataSet, const IfcDistributionElement &obj, const CopyOp &copyop) {
    IfcDistributionElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDistributionElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDistributionElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDistributionElement *ExpressDataSet::cloneIfcDistributionElement(const IfcDistributionElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDistributionElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDistributionElement(this, obj, copyop);
    }
}

IfcDistributionElementType *ExpressDataSet::getIfcDistributionElementType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDistributionElementType * > (current->second.get());
    }
    else {
        IfcDistributionElementType *ret = static_cast< IfcDistributionElementType * > (allocateIfcDistributionElementType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDistributionElementType(IfcDistributionElementType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDistributionElementType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDistributionElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDistributionElementType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDistributionElementType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDistributionElementType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDistributionElementType > ExpressDataSet::createIfcDistributionElementType(bool isVolatile) {
    if (isVolatile) {
        return new IfcDistributionElementType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDistributionElementType * > (allocateIfcDistributionElementType(this, Step::Id_UNSET));
    }
}

IfcDistributionElementType *ExpressDataSet::cloneIfcDistributionElementType(ExpressDataSet *expressDataSet, const IfcDistributionElementType &obj, const CopyOp &copyop) {
    IfcDistributionElementType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDistributionElementType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDistributionElementType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDistributionElementType *ExpressDataSet::cloneIfcDistributionElementType(const IfcDistributionElementType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDistributionElementType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDistributionElementType(this, obj, copyop);
    }
}

IfcDistributionFlowElement *ExpressDataSet::getIfcDistributionFlowElement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDistributionFlowElement * > (current->second.get());
    }
    else {
        IfcDistributionFlowElement *ret = static_cast< IfcDistributionFlowElement * > (allocateIfcDistributionFlowElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDistributionFlowElement(IfcDistributionFlowElement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDistributionFlowElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDistributionFlowElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDistributionFlowElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDistributionFlowElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDistributionFlowElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDistributionFlowElement > ExpressDataSet::createIfcDistributionFlowElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcDistributionFlowElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDistributionFlowElement * > (allocateIfcDistributionFlowElement(this, Step::Id_UNSET));
    }
}

IfcDistributionFlowElement *ExpressDataSet::cloneIfcDistributionFlowElement(ExpressDataSet *expressDataSet, const IfcDistributionFlowElement &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDistributionFlowElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDistributionFlowElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDistributionFlowElement *ExpressDataSet::cloneIfcDistributionFlowElement(const IfcDistributionFlowElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDistributionFlowElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDistributionFlowElement(this, obj, copyop);
    }
}

IfcDistributionPort *ExpressDataSet::getIfcDistributionPort(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDistributionPort * > (current->second.get());
    }
    else {
        IfcDistributionPort *ret = static_cast< IfcDistributionPort * > (allocateIfcDistributionPort(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDistributionPort(IfcDistributionPort *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDistributionPort_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDistributionPort(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDistributionPort *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDistributionPort(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDistributionPort_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDistributionPort > ExpressDataSet::createIfcDistributionPort(bool isVolatile) {
    if (isVolatile) {
        return new IfcDistributionPort(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDistributionPort * > (allocateIfcDistributionPort(this, Step::Id_UNSET));
    }
}

IfcDistributionPort *ExpressDataSet::cloneIfcDistributionPort(ExpressDataSet *expressDataSet, const IfcDistributionPort &obj, const CopyOp &copyop) {
    IfcDistributionPort *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDistributionPort(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDistributionPort_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDistributionPort *ExpressDataSet::cloneIfcDistributionPort(const IfcDistributionPort &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDistributionPort(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDistributionPort(this, obj, copyop);
    }
}

IfcDocumentElectronicFormat *ExpressDataSet::getIfcDocumentElectronicFormat(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDocumentElectronicFormat * > (current->second.get());
    }
    else {
        IfcDocumentElectronicFormat *ret = static_cast< IfcDocumentElectronicFormat * > (allocateIfcDocumentElectronicFormat(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDocumentElectronicFormat_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDocumentElectronicFormat(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDocumentElectronicFormat *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDocumentElectronicFormat(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDocumentElectronicFormat_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDocumentElectronicFormat > ExpressDataSet::createIfcDocumentElectronicFormat(bool isVolatile) {
    if (isVolatile) {
        return new IfcDocumentElectronicFormat(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDocumentElectronicFormat * > (allocateIfcDocumentElectronicFormat(this, Step::Id_UNSET));
    }
}

IfcDocumentElectronicFormat *ExpressDataSet::cloneIfcDocumentElectronicFormat(ExpressDataSet *expressDataSet, const IfcDocumentElectronicFormat &obj, const CopyOp &copyop) {
    IfcDocumentElectronicFormat *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDocumentElectronicFormat(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDocumentElectronicFormat_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDocumentElectronicFormat *ExpressDataSet::cloneIfcDocumentElectronicFormat(const IfcDocumentElectronicFormat &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDocumentElectronicFormat(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDocumentElectronicFormat(this, obj, copyop);
    }
}

IfcDocumentInformation *ExpressDataSet::getIfcDocumentInformation(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDocumentInformation * > (current->second.get());
    }
    else {
        IfcDocumentInformation *ret = static_cast< IfcDocumentInformation * > (allocateIfcDocumentInformation(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDocumentInformation(IfcDocumentInformation *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDocumentInformation_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDocumentInformation(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDocumentInformation *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDocumentInformation(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDocumentInformation_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDocumentInformation > ExpressDataSet::createIfcDocumentInformation(bool isVolatile) {
    if (isVolatile) {
        return new IfcDocumentInformation(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDocumentInformation * > (allocateIfcDocumentInformation(this, Step::Id_UNSET));
    }
}

IfcDocumentInformation *ExpressDataSet::cloneIfcDocumentInformation(ExpressDataSet *expressDataSet, const IfcDocumentInformation &obj, const CopyOp &copyop) {
    IfcDocumentInformation *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDocumentInformation(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDocumentInformation_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDocumentInformation *ExpressDataSet::cloneIfcDocumentInformation(const IfcDocumentInformation &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDocumentInformation(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDocumentInformation(this, obj, copyop);
    }
}

IfcDocumentInformationRelationship *ExpressDataSet::getIfcDocumentInformationRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDocumentInformationRelationship * > (current->second.get());
    }
    else {
        IfcDocumentInformationRelationship *ret = static_cast< IfcDocumentInformationRelationship * > (allocateIfcDocumentInformationRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDocumentInformationRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDocumentInformationRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDocumentInformationRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDocumentInformationRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDocumentInformationRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDocumentInformationRelationship > ExpressDataSet::createIfcDocumentInformationRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcDocumentInformationRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDocumentInformationRelationship * > (allocateIfcDocumentInformationRelationship(this, Step::Id_UNSET));
    }
}

IfcDocumentInformationRelationship *ExpressDataSet::cloneIfcDocumentInformationRelationship(ExpressDataSet *expressDataSet, const IfcDocumentInformationRelationship &obj, const CopyOp &copyop) {
    IfcDocumentInformationRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDocumentInformationRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDocumentInformationRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDocumentInformationRelationship *ExpressDataSet::cloneIfcDocumentInformationRelationship(const IfcDocumentInformationRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDocumentInformationRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDocumentInformationRelationship(this, obj, copyop);
    }
}

IfcDocumentReference *ExpressDataSet::getIfcDocumentReference(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDocumentReference * > (current->second.get());
    }
    else {
        IfcDocumentReference *ret = static_cast< IfcDocumentReference * > (allocateIfcDocumentReference(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDocumentReference(IfcDocumentReference *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDocumentReference_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDocumentReference(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDocumentReference *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDocumentReference(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDocumentReference_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDocumentReference > ExpressDataSet::createIfcDocumentReference(bool isVolatile) {
    if (isVolatile) {
        return new IfcDocumentReference(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDocumentReference * > (allocateIfcDocumentReference(this, Step::Id_UNSET));
    }
}

IfcDocumentReference *ExpressDataSet::cloneIfcDocumentReference(ExpressDataSet *expressDataSet, const IfcDocumentReference &obj, const CopyOp &copyop) {
    IfcDocumentReference *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDocumentReference(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDocumentReference_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDocumentReference *ExpressDataSet::cloneIfcDocumentReference(const IfcDocumentReference &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDocumentReference(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDocumentReference(this, obj, copyop);
    }
}

IfcDoor *ExpressDataSet::getIfcDoor(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDoor * > (current->second.get());
    }
    else {
        IfcDoor *ret = static_cast< IfcDoor * > (allocateIfcDoor(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDoor(IfcDoor *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDoor_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDoor(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDoor *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDoor(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDoor_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDoor > ExpressDataSet::createIfcDoor(bool isVolatile) {
    if (isVolatile) {
        return new IfcDoor(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDoor * > (allocateIfcDoor(this, Step::Id_UNSET));
    }
}

IfcDoor *ExpressDataSet::cloneIfcDoor(ExpressDataSet *expressDataSet, const IfcDoor &obj, const CopyOp &copyop) {
    IfcDoor *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDoor(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDoor_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDoor *ExpressDataSet::cloneIfcDoor(const IfcDoor &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDoor(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDoor(this, obj, copyop);
    }
}

IfcDoorLiningProperties *ExpressDataSet::getIfcDoorLiningProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDoorLiningProperties * > (current->second.get());
    }
    else {
        IfcDoorLiningProperties *ret = static_cast< IfcDoorLiningProperties * > (allocateIfcDoorLiningProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDoorLiningProperties(IfcDoorLiningProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDoorLiningProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDoorLiningProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDoorLiningProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDoorLiningProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDoorLiningProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDoorLiningProperties > ExpressDataSet::createIfcDoorLiningProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcDoorLiningProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDoorLiningProperties * > (allocateIfcDoorLiningProperties(this, Step::Id_UNSET));
    }
}

IfcDoorLiningProperties *ExpressDataSet::cloneIfcDoorLiningProperties(ExpressDataSet *expressDataSet, const IfcDoorLiningProperties &obj, const CopyOp &copyop) {
    IfcDoorLiningProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDoorLiningProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDoorLiningProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDoorLiningProperties *ExpressDataSet::cloneIfcDoorLiningProperties(const IfcDoorLiningProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDoorLiningProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDoorLiningProperties(this, obj, copyop);
    }
}

IfcDoorPanelProperties *ExpressDataSet::getIfcDoorPanelProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDoorPanelProperties * > (current->second.get());
    }
    else {
        IfcDoorPanelProperties *ret = static_cast< IfcDoorPanelProperties * > (allocateIfcDoorPanelProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDoorPanelProperties(IfcDoorPanelProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDoorPanelProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDoorPanelProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDoorPanelProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDoorPanelProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDoorPanelProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDoorPanelProperties > ExpressDataSet::createIfcDoorPanelProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcDoorPanelProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDoorPanelProperties * > (allocateIfcDoorPanelProperties(this, Step::Id_UNSET));
    }
}

IfcDoorPanelProperties *ExpressDataSet::cloneIfcDoorPanelProperties(ExpressDataSet *expressDataSet, const IfcDoorPanelProperties &obj, const CopyOp &copyop) {
    IfcDoorPanelProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDoorPanelProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDoorPanelProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDoorPanelProperties *ExpressDataSet::cloneIfcDoorPanelProperties(const IfcDoorPanelProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDoorPanelProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDoorPanelProperties(this, obj, copyop);
    }
}

IfcDoorStyle *ExpressDataSet::getIfcDoorStyle(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDoorStyle * > (current->second.get());
    }
    else {
        IfcDoorStyle *ret = static_cast< IfcDoorStyle * > (allocateIfcDoorStyle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDoorStyle(IfcDoorStyle *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDoorStyle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDoorStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDoorStyle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDoorStyle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDoorStyle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDoorStyle > ExpressDataSet::createIfcDoorStyle(bool isVolatile) {
    if (isVolatile) {
        return new IfcDoorStyle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDoorStyle * > (allocateIfcDoorStyle(this, Step::Id_UNSET));
    }
}

IfcDoorStyle *ExpressDataSet::cloneIfcDoorStyle(ExpressDataSet *expressDataSet, const IfcDoorStyle &obj, const CopyOp &copyop) {
    IfcDoorStyle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDoorStyle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDoorStyle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDoorStyle *ExpressDataSet::cloneIfcDoorStyle(const IfcDoorStyle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDoorStyle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDoorStyle(this, obj, copyop);
    }
}

IfcDraughtingCallout *ExpressDataSet::getIfcDraughtingCallout(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDraughtingCallout * > (current->second.get());
    }
    else {
        IfcDraughtingCallout *ret = static_cast< IfcDraughtingCallout * > (allocateIfcDraughtingCallout(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDraughtingCallout(IfcDraughtingCallout *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDraughtingCallout_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDraughtingCallout(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDraughtingCallout *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDraughtingCallout(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDraughtingCallout_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDraughtingCallout > ExpressDataSet::createIfcDraughtingCallout(bool isVolatile) {
    if (isVolatile) {
        return new IfcDraughtingCallout(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDraughtingCallout * > (allocateIfcDraughtingCallout(this, Step::Id_UNSET));
    }
}

IfcDraughtingCallout *ExpressDataSet::cloneIfcDraughtingCallout(ExpressDataSet *expressDataSet, const IfcDraughtingCallout &obj, const CopyOp &copyop) {
    IfcDraughtingCallout *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDraughtingCallout(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDraughtingCallout_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDraughtingCallout *ExpressDataSet::cloneIfcDraughtingCallout(const IfcDraughtingCallout &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDraughtingCallout(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDraughtingCallout(this, obj, copyop);
    }
}

IfcDraughtingCalloutRelationship *ExpressDataSet::getIfcDraughtingCalloutRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDraughtingCalloutRelationship * > (current->second.get());
    }
    else {
        IfcDraughtingCalloutRelationship *ret = static_cast< IfcDraughtingCalloutRelationship * > (allocateIfcDraughtingCalloutRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDraughtingCalloutRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDraughtingCalloutRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDraughtingCalloutRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDraughtingCalloutRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDraughtingCalloutRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDraughtingCalloutRelationship > ExpressDataSet::createIfcDraughtingCalloutRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcDraughtingCalloutRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDraughtingCalloutRelationship * > (allocateIfcDraughtingCalloutRelationship(this, Step::Id_UNSET));
    }
}

IfcDraughtingCalloutRelationship *ExpressDataSet::cloneIfcDraughtingCalloutRelationship(ExpressDataSet *expressDataSet, const IfcDraughtingCalloutRelationship &obj, const CopyOp &copyop) {
    IfcDraughtingCalloutRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDraughtingCalloutRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDraughtingCalloutRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDraughtingCalloutRelationship *ExpressDataSet::cloneIfcDraughtingCalloutRelationship(const IfcDraughtingCalloutRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDraughtingCalloutRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDraughtingCalloutRelationship(this, obj, copyop);
    }
}

IfcDraughtingPreDefinedColour *ExpressDataSet::getIfcDraughtingPreDefinedColour(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDraughtingPreDefinedColour * > (current->second.get());
    }
    else {
        IfcDraughtingPreDefinedColour *ret = static_cast< IfcDraughtingPreDefinedColour * > (allocateIfcDraughtingPreDefinedColour(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDraughtingPreDefinedColour_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDraughtingPreDefinedColour(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDraughtingPreDefinedColour *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDraughtingPreDefinedColour(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDraughtingPreDefinedColour_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDraughtingPreDefinedColour > ExpressDataSet::createIfcDraughtingPreDefinedColour(bool isVolatile) {
    if (isVolatile) {
        return new IfcDraughtingPreDefinedColour(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDraughtingPreDefinedColour * > (allocateIfcDraughtingPreDefinedColour(this, Step::Id_UNSET));
    }
}

IfcDraughtingPreDefinedColour *ExpressDataSet::cloneIfcDraughtingPreDefinedColour(ExpressDataSet *expressDataSet, const IfcDraughtingPreDefinedColour &obj, const CopyOp &copyop) {
    IfcDraughtingPreDefinedColour *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDraughtingPreDefinedColour(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDraughtingPreDefinedColour_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDraughtingPreDefinedColour *ExpressDataSet::cloneIfcDraughtingPreDefinedColour(const IfcDraughtingPreDefinedColour &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDraughtingPreDefinedColour(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDraughtingPreDefinedColour(this, obj, copyop);
    }
}

IfcDraughtingPreDefinedCurveFont *ExpressDataSet::getIfcDraughtingPreDefinedCurveFont(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDraughtingPreDefinedCurveFont * > (current->second.get());
    }
    else {
        IfcDraughtingPreDefinedCurveFont *ret = static_cast< IfcDraughtingPreDefinedCurveFont * > (allocateIfcDraughtingPreDefinedCurveFont(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDraughtingPreDefinedCurveFont_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDraughtingPreDefinedCurveFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDraughtingPreDefinedCurveFont *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDraughtingPreDefinedCurveFont(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDraughtingPreDefinedCurveFont_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDraughtingPreDefinedCurveFont > ExpressDataSet::createIfcDraughtingPreDefinedCurveFont(bool isVolatile) {
    if (isVolatile) {
        return new IfcDraughtingPreDefinedCurveFont(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDraughtingPreDefinedCurveFont * > (allocateIfcDraughtingPreDefinedCurveFont(this, Step::Id_UNSET));
    }
}

IfcDraughtingPreDefinedCurveFont *ExpressDataSet::cloneIfcDraughtingPreDefinedCurveFont(ExpressDataSet *expressDataSet, const IfcDraughtingPreDefinedCurveFont &obj, const CopyOp &copyop) {
    IfcDraughtingPreDefinedCurveFont *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDraughtingPreDefinedCurveFont(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDraughtingPreDefinedCurveFont_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDraughtingPreDefinedCurveFont *ExpressDataSet::cloneIfcDraughtingPreDefinedCurveFont(const IfcDraughtingPreDefinedCurveFont &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDraughtingPreDefinedCurveFont(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDraughtingPreDefinedCurveFont(this, obj, copyop);
    }
}

IfcDraughtingPreDefinedTextFont *ExpressDataSet::getIfcDraughtingPreDefinedTextFont(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDraughtingPreDefinedTextFont * > (current->second.get());
    }
    else {
        IfcDraughtingPreDefinedTextFont *ret = static_cast< IfcDraughtingPreDefinedTextFont * > (allocateIfcDraughtingPreDefinedTextFont(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDraughtingPreDefinedTextFont_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDraughtingPreDefinedTextFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDraughtingPreDefinedTextFont *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDraughtingPreDefinedTextFont(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDraughtingPreDefinedTextFont_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDraughtingPreDefinedTextFont > ExpressDataSet::createIfcDraughtingPreDefinedTextFont(bool isVolatile) {
    if (isVolatile) {
        return new IfcDraughtingPreDefinedTextFont(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDraughtingPreDefinedTextFont * > (allocateIfcDraughtingPreDefinedTextFont(this, Step::Id_UNSET));
    }
}

IfcDraughtingPreDefinedTextFont *ExpressDataSet::cloneIfcDraughtingPreDefinedTextFont(ExpressDataSet *expressDataSet, const IfcDraughtingPreDefinedTextFont &obj, const CopyOp &copyop) {
    IfcDraughtingPreDefinedTextFont *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDraughtingPreDefinedTextFont(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDraughtingPreDefinedTextFont_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDraughtingPreDefinedTextFont *ExpressDataSet::cloneIfcDraughtingPreDefinedTextFont(const IfcDraughtingPreDefinedTextFont &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDraughtingPreDefinedTextFont(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDraughtingPreDefinedTextFont(this, obj, copyop);
    }
}

IfcDuctFittingType *ExpressDataSet::getIfcDuctFittingType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDuctFittingType * > (current->second.get());
    }
    else {
        IfcDuctFittingType *ret = static_cast< IfcDuctFittingType * > (allocateIfcDuctFittingType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDuctFittingType(IfcDuctFittingType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDuctFittingType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDuctFittingType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDuctFittingType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDuctFittingType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDuctFittingType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDuctFittingType > ExpressDataSet::createIfcDuctFittingType(bool isVolatile) {
    if (isVolatile) {
        return new IfcDuctFittingType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDuctFittingType * > (allocateIfcDuctFittingType(this, Step::Id_UNSET));
    }
}

IfcDuctFittingType *ExpressDataSet::cloneIfcDuctFittingType(ExpressDataSet *expressDataSet, const IfcDuctFittingType &obj, const CopyOp &copyop) {
    IfcDuctFittingType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDuctFittingType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDuctFittingType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDuctFittingType *ExpressDataSet::cloneIfcDuctFittingType(const IfcDuctFittingType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDuctFittingType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDuctFittingType(this, obj, copyop);
    }
}

IfcDuctSegmentType *ExpressDataSet::getIfcDuctSegmentType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDuctSegmentType * > (current->second.get());
    }
    else {
        IfcDuctSegmentType *ret = static_cast< IfcDuctSegmentType * > (allocateIfcDuctSegmentType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDuctSegmentType(IfcDuctSegmentType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDuctSegmentType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDuctSegmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDuctSegmentType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDuctSegmentType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDuctSegmentType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDuctSegmentType > ExpressDataSet::createIfcDuctSegmentType(bool isVolatile) {
    if (isVolatile) {
        return new IfcDuctSegmentType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDuctSegmentType * > (allocateIfcDuctSegmentType(this, Step::Id_UNSET));
    }
}

IfcDuctSegmentType *ExpressDataSet::cloneIfcDuctSegmentType(ExpressDataSet *expressDataSet, const IfcDuctSegmentType &obj, const CopyOp &copyop) {
    IfcDuctSegmentType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDuctSegmentType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDuctSegmentType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDuctSegmentType *ExpressDataSet::cloneIfcDuctSegmentType(const IfcDuctSegmentType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDuctSegmentType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDuctSegmentType(this, obj, copyop);
    }
}

IfcDuctSilencerType *ExpressDataSet::getIfcDuctSilencerType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcDuctSilencerType * > (current->second.get());
    }
    else {
        IfcDuctSilencerType *ret = static_cast< IfcDuctSilencerType * > (allocateIfcDuctSilencerType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcDuctSilencerType(IfcDuctSilencerType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcDuctSilencerType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcDuctSilencerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcDuctSilencerType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcDuctSilencerType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcDuctSilencerType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcDuctSilencerType > ExpressDataSet::createIfcDuctSilencerType(bool isVolatile) {
    if (isVolatile) {
        return new IfcDuctSilencerType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcDuctSilencerType * > (allocateIfcDuctSilencerType(this, Step::Id_UNSET));
    }
}

IfcDuctSilencerType *ExpressDataSet::cloneIfcDuctSilencerType(ExpressDataSet *expressDataSet, const IfcDuctSilencerType &obj, const CopyOp &copyop) {
    IfcDuctSilencerType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcDuctSilencerType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcDuctSilencerType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcDuctSilencerType *ExpressDataSet::cloneIfcDuctSilencerType(const IfcDuctSilencerType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcDuctSilencerType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcDuctSilencerType(this, obj, copyop);
    }
}

IfcEdge *ExpressDataSet::getIfcEdge(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEdge * > (current->second.get());
    }
    else {
        IfcEdge *ret = static_cast< IfcEdge * > (allocateIfcEdge(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEdge(IfcEdge *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEdge_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEdge(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEdge *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEdge(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEdge_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEdge > ExpressDataSet::createIfcEdge(bool isVolatile) {
    if (isVolatile) {
        return new IfcEdge(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEdge * > (allocateIfcEdge(this, Step::Id_UNSET));
    }
}

IfcEdge *ExpressDataSet::cloneIfcEdge(ExpressDataSet *expressDataSet, const IfcEdge &obj, const CopyOp &copyop) {
    IfcEdge *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEdge(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEdge_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEdge *ExpressDataSet::cloneIfcEdge(const IfcEdge &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEdge(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEdge(this, obj, copyop);
    }
}

IfcEdgeCurve *ExpressDataSet::getIfcEdgeCurve(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEdgeCurve * > (current->second.get());
    }
    else {
        IfcEdgeCurve *ret = static_cast< IfcEdgeCurve * > (allocateIfcEdgeCurve(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEdgeCurve(IfcEdgeCurve *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEdgeCurve_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEdgeCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEdgeCurve *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEdgeCurve(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEdgeCurve_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEdgeCurve > ExpressDataSet::createIfcEdgeCurve(bool isVolatile) {
    if (isVolatile) {
        return new IfcEdgeCurve(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEdgeCurve * > (allocateIfcEdgeCurve(this, Step::Id_UNSET));
    }
}

IfcEdgeCurve *ExpressDataSet::cloneIfcEdgeCurve(ExpressDataSet *expressDataSet, const IfcEdgeCurve &obj, const CopyOp &copyop) {
    IfcEdgeCurve *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEdgeCurve(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEdgeCurve_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEdgeCurve *ExpressDataSet::cloneIfcEdgeCurve(const IfcEdgeCurve &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEdgeCurve(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEdgeCurve(this, obj, copyop);
    }
}

IfcEdgeLoop *ExpressDataSet::getIfcEdgeLoop(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEdgeLoop * > (current->second.get());
    }
    else {
        IfcEdgeLoop *ret = static_cast< IfcEdgeLoop * > (allocateIfcEdgeLoop(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEdgeLoop(IfcEdgeLoop *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEdgeLoop_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEdgeLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEdgeLoop *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEdgeLoop(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEdgeLoop_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEdgeLoop > ExpressDataSet::createIfcEdgeLoop(bool isVolatile) {
    if (isVolatile) {
        return new IfcEdgeLoop(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEdgeLoop * > (allocateIfcEdgeLoop(this, Step::Id_UNSET));
    }
}

IfcEdgeLoop *ExpressDataSet::cloneIfcEdgeLoop(ExpressDataSet *expressDataSet, const IfcEdgeLoop &obj, const CopyOp &copyop) {
    IfcEdgeLoop *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEdgeLoop(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEdgeLoop_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEdgeLoop *ExpressDataSet::cloneIfcEdgeLoop(const IfcEdgeLoop &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEdgeLoop(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEdgeLoop(this, obj, copyop);
    }
}

IfcElectricApplianceType *ExpressDataSet::getIfcElectricApplianceType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElectricApplianceType * > (current->second.get());
    }
    else {
        IfcElectricApplianceType *ret = static_cast< IfcElectricApplianceType * > (allocateIfcElectricApplianceType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElectricApplianceType(IfcElectricApplianceType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElectricApplianceType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElectricApplianceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElectricApplianceType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElectricApplianceType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElectricApplianceType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElectricApplianceType > ExpressDataSet::createIfcElectricApplianceType(bool isVolatile) {
    if (isVolatile) {
        return new IfcElectricApplianceType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElectricApplianceType * > (allocateIfcElectricApplianceType(this, Step::Id_UNSET));
    }
}

IfcElectricApplianceType *ExpressDataSet::cloneIfcElectricApplianceType(ExpressDataSet *expressDataSet, const IfcElectricApplianceType &obj, const CopyOp &copyop) {
    IfcElectricApplianceType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElectricApplianceType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElectricApplianceType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElectricApplianceType *ExpressDataSet::cloneIfcElectricApplianceType(const IfcElectricApplianceType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElectricApplianceType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElectricApplianceType(this, obj, copyop);
    }
}

IfcElectricDistributionPoint *ExpressDataSet::getIfcElectricDistributionPoint(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElectricDistributionPoint * > (current->second.get());
    }
    else {
        IfcElectricDistributionPoint *ret = static_cast< IfcElectricDistributionPoint * > (allocateIfcElectricDistributionPoint(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElectricDistributionPoint(IfcElectricDistributionPoint *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElectricDistributionPoint_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElectricDistributionPoint(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElectricDistributionPoint *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElectricDistributionPoint(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElectricDistributionPoint_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElectricDistributionPoint > ExpressDataSet::createIfcElectricDistributionPoint(bool isVolatile) {
    if (isVolatile) {
        return new IfcElectricDistributionPoint(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElectricDistributionPoint * > (allocateIfcElectricDistributionPoint(this, Step::Id_UNSET));
    }
}

IfcElectricDistributionPoint *ExpressDataSet::cloneIfcElectricDistributionPoint(ExpressDataSet *expressDataSet, const IfcElectricDistributionPoint &obj, const CopyOp &copyop) {
    IfcElectricDistributionPoint *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElectricDistributionPoint(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElectricDistributionPoint_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElectricDistributionPoint *ExpressDataSet::cloneIfcElectricDistributionPoint(const IfcElectricDistributionPoint &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElectricDistributionPoint(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElectricDistributionPoint(this, obj, copyop);
    }
}

IfcElectricFlowStorageDeviceType *ExpressDataSet::getIfcElectricFlowStorageDeviceType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElectricFlowStorageDeviceType * > (current->second.get());
    }
    else {
        IfcElectricFlowStorageDeviceType *ret = static_cast< IfcElectricFlowStorageDeviceType * > (allocateIfcElectricFlowStorageDeviceType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElectricFlowStorageDeviceType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElectricFlowStorageDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElectricFlowStorageDeviceType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElectricFlowStorageDeviceType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElectricFlowStorageDeviceType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElectricFlowStorageDeviceType > ExpressDataSet::createIfcElectricFlowStorageDeviceType(bool isVolatile) {
    if (isVolatile) {
        return new IfcElectricFlowStorageDeviceType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElectricFlowStorageDeviceType * > (allocateIfcElectricFlowStorageDeviceType(this, Step::Id_UNSET));
    }
}

IfcElectricFlowStorageDeviceType *ExpressDataSet::cloneIfcElectricFlowStorageDeviceType(ExpressDataSet *expressDataSet, const IfcElectricFlowStorageDeviceType &obj, const CopyOp &copyop) {
    IfcElectricFlowStorageDeviceType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElectricFlowStorageDeviceType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElectricFlowStorageDeviceType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElectricFlowStorageDeviceType *ExpressDataSet::cloneIfcElectricFlowStorageDeviceType(const IfcElectricFlowStorageDeviceType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElectricFlowStorageDeviceType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElectricFlowStorageDeviceType(this, obj, copyop);
    }
}

IfcElectricGeneratorType *ExpressDataSet::getIfcElectricGeneratorType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElectricGeneratorType * > (current->second.get());
    }
    else {
        IfcElectricGeneratorType *ret = static_cast< IfcElectricGeneratorType * > (allocateIfcElectricGeneratorType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElectricGeneratorType(IfcElectricGeneratorType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElectricGeneratorType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElectricGeneratorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElectricGeneratorType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElectricGeneratorType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElectricGeneratorType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElectricGeneratorType > ExpressDataSet::createIfcElectricGeneratorType(bool isVolatile) {
    if (isVolatile) {
        return new IfcElectricGeneratorType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElectricGeneratorType * > (allocateIfcElectricGeneratorType(this, Step::Id_UNSET));
    }
}

IfcElectricGeneratorType *ExpressDataSet::cloneIfcElectricGeneratorType(ExpressDataSet *expressDataSet, const IfcElectricGeneratorType &obj, const CopyOp &copyop) {
    IfcElectricGeneratorType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElectricGeneratorType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElectricGeneratorType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElectricGeneratorType *ExpressDataSet::cloneIfcElectricGeneratorType(const IfcElectricGeneratorType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElectricGeneratorType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElectricGeneratorType(this, obj, copyop);
    }
}

IfcElectricHeaterType *ExpressDataSet::getIfcElectricHeaterType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElectricHeaterType * > (current->second.get());
    }
    else {
        IfcElectricHeaterType *ret = static_cast< IfcElectricHeaterType * > (allocateIfcElectricHeaterType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElectricHeaterType(IfcElectricHeaterType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElectricHeaterType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElectricHeaterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElectricHeaterType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElectricHeaterType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElectricHeaterType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElectricHeaterType > ExpressDataSet::createIfcElectricHeaterType(bool isVolatile) {
    if (isVolatile) {
        return new IfcElectricHeaterType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElectricHeaterType * > (allocateIfcElectricHeaterType(this, Step::Id_UNSET));
    }
}

IfcElectricHeaterType *ExpressDataSet::cloneIfcElectricHeaterType(ExpressDataSet *expressDataSet, const IfcElectricHeaterType &obj, const CopyOp &copyop) {
    IfcElectricHeaterType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElectricHeaterType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElectricHeaterType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElectricHeaterType *ExpressDataSet::cloneIfcElectricHeaterType(const IfcElectricHeaterType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElectricHeaterType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElectricHeaterType(this, obj, copyop);
    }
}

IfcElectricMotorType *ExpressDataSet::getIfcElectricMotorType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElectricMotorType * > (current->second.get());
    }
    else {
        IfcElectricMotorType *ret = static_cast< IfcElectricMotorType * > (allocateIfcElectricMotorType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElectricMotorType(IfcElectricMotorType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElectricMotorType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElectricMotorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElectricMotorType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElectricMotorType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElectricMotorType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElectricMotorType > ExpressDataSet::createIfcElectricMotorType(bool isVolatile) {
    if (isVolatile) {
        return new IfcElectricMotorType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElectricMotorType * > (allocateIfcElectricMotorType(this, Step::Id_UNSET));
    }
}

IfcElectricMotorType *ExpressDataSet::cloneIfcElectricMotorType(ExpressDataSet *expressDataSet, const IfcElectricMotorType &obj, const CopyOp &copyop) {
    IfcElectricMotorType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElectricMotorType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElectricMotorType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElectricMotorType *ExpressDataSet::cloneIfcElectricMotorType(const IfcElectricMotorType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElectricMotorType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElectricMotorType(this, obj, copyop);
    }
}

IfcElectricTimeControlType *ExpressDataSet::getIfcElectricTimeControlType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElectricTimeControlType * > (current->second.get());
    }
    else {
        IfcElectricTimeControlType *ret = static_cast< IfcElectricTimeControlType * > (allocateIfcElectricTimeControlType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElectricTimeControlType(IfcElectricTimeControlType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElectricTimeControlType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElectricTimeControlType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElectricTimeControlType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElectricTimeControlType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElectricTimeControlType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElectricTimeControlType > ExpressDataSet::createIfcElectricTimeControlType(bool isVolatile) {
    if (isVolatile) {
        return new IfcElectricTimeControlType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElectricTimeControlType * > (allocateIfcElectricTimeControlType(this, Step::Id_UNSET));
    }
}

IfcElectricTimeControlType *ExpressDataSet::cloneIfcElectricTimeControlType(ExpressDataSet *expressDataSet, const IfcElectricTimeControlType &obj, const CopyOp &copyop) {
    IfcElectricTimeControlType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElectricTimeControlType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElectricTimeControlType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElectricTimeControlType *ExpressDataSet::cloneIfcElectricTimeControlType(const IfcElectricTimeControlType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElectricTimeControlType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElectricTimeControlType(this, obj, copyop);
    }
}

IfcElectricalBaseProperties *ExpressDataSet::getIfcElectricalBaseProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElectricalBaseProperties * > (current->second.get());
    }
    else {
        IfcElectricalBaseProperties *ret = static_cast< IfcElectricalBaseProperties * > (allocateIfcElectricalBaseProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElectricalBaseProperties(IfcElectricalBaseProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElectricalBaseProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElectricalBaseProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElectricalBaseProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElectricalBaseProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElectricalBaseProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElectricalBaseProperties > ExpressDataSet::createIfcElectricalBaseProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcElectricalBaseProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElectricalBaseProperties * > (allocateIfcElectricalBaseProperties(this, Step::Id_UNSET));
    }
}

IfcElectricalBaseProperties *ExpressDataSet::cloneIfcElectricalBaseProperties(ExpressDataSet *expressDataSet, const IfcElectricalBaseProperties &obj, const CopyOp &copyop) {
    IfcElectricalBaseProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElectricalBaseProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElectricalBaseProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElectricalBaseProperties *ExpressDataSet::cloneIfcElectricalBaseProperties(const IfcElectricalBaseProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElectricalBaseProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElectricalBaseProperties(this, obj, copyop);
    }
}

IfcElectricalCircuit *ExpressDataSet::getIfcElectricalCircuit(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElectricalCircuit * > (current->second.get());
    }
    else {
        IfcElectricalCircuit *ret = static_cast< IfcElectricalCircuit * > (allocateIfcElectricalCircuit(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElectricalCircuit(IfcElectricalCircuit *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElectricalCircuit_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElectricalCircuit(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElectricalCircuit *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElectricalCircuit(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElectricalCircuit_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElectricalCircuit > ExpressDataSet::createIfcElectricalCircuit(bool isVolatile) {
    if (isVolatile) {
        return new IfcElectricalCircuit(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElectricalCircuit * > (allocateIfcElectricalCircuit(this, Step::Id_UNSET));
    }
}

IfcElectricalCircuit *ExpressDataSet::cloneIfcElectricalCircuit(ExpressDataSet *expressDataSet, const IfcElectricalCircuit &obj, const CopyOp &copyop) {
    IfcElectricalCircuit *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElectricalCircuit(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElectricalCircuit_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElectricalCircuit *ExpressDataSet::cloneIfcElectricalCircuit(const IfcElectricalCircuit &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElectricalCircuit(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElectricalCircuit(this, obj, copyop);
    }
}

IfcElectricalElement *ExpressDataSet::getIfcElectricalElement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElectricalElement * > (current->second.get());
    }
    else {
        IfcElectricalElement *ret = static_cast< IfcElectricalElement * > (allocateIfcElectricalElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElectricalElement(IfcElectricalElement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElectricalElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElectricalElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElectricalElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElectricalElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElectricalElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElectricalElement > ExpressDataSet::createIfcElectricalElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcElectricalElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElectricalElement * > (allocateIfcElectricalElement(this, Step::Id_UNSET));
    }
}

IfcElectricalElement *ExpressDataSet::cloneIfcElectricalElement(ExpressDataSet *expressDataSet, const IfcElectricalElement &obj, const CopyOp &copyop) {
    IfcElectricalElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElectricalElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElectricalElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElectricalElement *ExpressDataSet::cloneIfcElectricalElement(const IfcElectricalElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElectricalElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElectricalElement(this, obj, copyop);
    }
}

IfcElementAssembly *ExpressDataSet::getIfcElementAssembly(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElementAssembly * > (current->second.get());
    }
    else {
        IfcElementAssembly *ret = static_cast< IfcElementAssembly * > (allocateIfcElementAssembly(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElementAssembly(IfcElementAssembly *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElementAssembly_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElementAssembly(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElementAssembly *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElementAssembly(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElementAssembly_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElementAssembly > ExpressDataSet::createIfcElementAssembly(bool isVolatile) {
    if (isVolatile) {
        return new IfcElementAssembly(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElementAssembly * > (allocateIfcElementAssembly(this, Step::Id_UNSET));
    }
}

IfcElementAssembly *ExpressDataSet::cloneIfcElementAssembly(ExpressDataSet *expressDataSet, const IfcElementAssembly &obj, const CopyOp &copyop) {
    IfcElementAssembly *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElementAssembly(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElementAssembly_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElementAssembly *ExpressDataSet::cloneIfcElementAssembly(const IfcElementAssembly &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElementAssembly(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElementAssembly(this, obj, copyop);
    }
}

IfcElementQuantity *ExpressDataSet::getIfcElementQuantity(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcElementQuantity * > (current->second.get());
    }
    else {
        IfcElementQuantity *ret = static_cast< IfcElementQuantity * > (allocateIfcElementQuantity(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcElementQuantity(IfcElementQuantity *arg) {
    getAll().erase(arg->getKey());
    return m_IfcElementQuantity_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcElementQuantity(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcElementQuantity *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcElementQuantity(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcElementQuantity_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcElementQuantity > ExpressDataSet::createIfcElementQuantity(bool isVolatile) {
    if (isVolatile) {
        return new IfcElementQuantity(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcElementQuantity * > (allocateIfcElementQuantity(this, Step::Id_UNSET));
    }
}

IfcElementQuantity *ExpressDataSet::cloneIfcElementQuantity(ExpressDataSet *expressDataSet, const IfcElementQuantity &obj, const CopyOp &copyop) {
    IfcElementQuantity *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcElementQuantity(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcElementQuantity_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcElementQuantity *ExpressDataSet::cloneIfcElementQuantity(const IfcElementQuantity &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcElementQuantity(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcElementQuantity(this, obj, copyop);
    }
}

IfcEllipse *ExpressDataSet::getIfcEllipse(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEllipse * > (current->second.get());
    }
    else {
        IfcEllipse *ret = static_cast< IfcEllipse * > (allocateIfcEllipse(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEllipse(IfcEllipse *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEllipse_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEllipse(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEllipse *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEllipse(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEllipse_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEllipse > ExpressDataSet::createIfcEllipse(bool isVolatile) {
    if (isVolatile) {
        return new IfcEllipse(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEllipse * > (allocateIfcEllipse(this, Step::Id_UNSET));
    }
}

IfcEllipse *ExpressDataSet::cloneIfcEllipse(ExpressDataSet *expressDataSet, const IfcEllipse &obj, const CopyOp &copyop) {
    IfcEllipse *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEllipse(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEllipse_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEllipse *ExpressDataSet::cloneIfcEllipse(const IfcEllipse &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEllipse(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEllipse(this, obj, copyop);
    }
}

IfcEllipseProfileDef *ExpressDataSet::getIfcEllipseProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEllipseProfileDef * > (current->second.get());
    }
    else {
        IfcEllipseProfileDef *ret = static_cast< IfcEllipseProfileDef * > (allocateIfcEllipseProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEllipseProfileDef(IfcEllipseProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEllipseProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEllipseProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEllipseProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEllipseProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEllipseProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEllipseProfileDef > ExpressDataSet::createIfcEllipseProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcEllipseProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEllipseProfileDef * > (allocateIfcEllipseProfileDef(this, Step::Id_UNSET));
    }
}

IfcEllipseProfileDef *ExpressDataSet::cloneIfcEllipseProfileDef(ExpressDataSet *expressDataSet, const IfcEllipseProfileDef &obj, const CopyOp &copyop) {
    IfcEllipseProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEllipseProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEllipseProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEllipseProfileDef *ExpressDataSet::cloneIfcEllipseProfileDef(const IfcEllipseProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEllipseProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEllipseProfileDef(this, obj, copyop);
    }
}

IfcEnergyConversionDevice *ExpressDataSet::getIfcEnergyConversionDevice(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEnergyConversionDevice * > (current->second.get());
    }
    else {
        IfcEnergyConversionDevice *ret = static_cast< IfcEnergyConversionDevice * > (allocateIfcEnergyConversionDevice(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEnergyConversionDevice(IfcEnergyConversionDevice *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEnergyConversionDevice_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEnergyConversionDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEnergyConversionDevice *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEnergyConversionDevice(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEnergyConversionDevice_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEnergyConversionDevice > ExpressDataSet::createIfcEnergyConversionDevice(bool isVolatile) {
    if (isVolatile) {
        return new IfcEnergyConversionDevice(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEnergyConversionDevice * > (allocateIfcEnergyConversionDevice(this, Step::Id_UNSET));
    }
}

IfcEnergyConversionDevice *ExpressDataSet::cloneIfcEnergyConversionDevice(ExpressDataSet *expressDataSet, const IfcEnergyConversionDevice &obj, const CopyOp &copyop) {
    IfcEnergyConversionDevice *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEnergyConversionDevice(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEnergyConversionDevice_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEnergyConversionDevice *ExpressDataSet::cloneIfcEnergyConversionDevice(const IfcEnergyConversionDevice &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEnergyConversionDevice(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEnergyConversionDevice(this, obj, copyop);
    }
}

IfcEnergyProperties *ExpressDataSet::getIfcEnergyProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEnergyProperties * > (current->second.get());
    }
    else {
        IfcEnergyProperties *ret = static_cast< IfcEnergyProperties * > (allocateIfcEnergyProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEnergyProperties(IfcEnergyProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEnergyProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEnergyProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEnergyProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEnergyProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEnergyProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEnergyProperties > ExpressDataSet::createIfcEnergyProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcEnergyProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEnergyProperties * > (allocateIfcEnergyProperties(this, Step::Id_UNSET));
    }
}

IfcEnergyProperties *ExpressDataSet::cloneIfcEnergyProperties(ExpressDataSet *expressDataSet, const IfcEnergyProperties &obj, const CopyOp &copyop) {
    IfcEnergyProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEnergyProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEnergyProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEnergyProperties *ExpressDataSet::cloneIfcEnergyProperties(const IfcEnergyProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEnergyProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEnergyProperties(this, obj, copyop);
    }
}

IfcEnvironmentalImpactValue *ExpressDataSet::getIfcEnvironmentalImpactValue(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEnvironmentalImpactValue * > (current->second.get());
    }
    else {
        IfcEnvironmentalImpactValue *ret = static_cast< IfcEnvironmentalImpactValue * > (allocateIfcEnvironmentalImpactValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEnvironmentalImpactValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEnvironmentalImpactValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEnvironmentalImpactValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEnvironmentalImpactValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEnvironmentalImpactValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEnvironmentalImpactValue > ExpressDataSet::createIfcEnvironmentalImpactValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcEnvironmentalImpactValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEnvironmentalImpactValue * > (allocateIfcEnvironmentalImpactValue(this, Step::Id_UNSET));
    }
}

IfcEnvironmentalImpactValue *ExpressDataSet::cloneIfcEnvironmentalImpactValue(ExpressDataSet *expressDataSet, const IfcEnvironmentalImpactValue &obj, const CopyOp &copyop) {
    IfcEnvironmentalImpactValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEnvironmentalImpactValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEnvironmentalImpactValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEnvironmentalImpactValue *ExpressDataSet::cloneIfcEnvironmentalImpactValue(const IfcEnvironmentalImpactValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEnvironmentalImpactValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEnvironmentalImpactValue(this, obj, copyop);
    }
}

IfcEquipmentElement *ExpressDataSet::getIfcEquipmentElement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEquipmentElement * > (current->second.get());
    }
    else {
        IfcEquipmentElement *ret = static_cast< IfcEquipmentElement * > (allocateIfcEquipmentElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEquipmentElement(IfcEquipmentElement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEquipmentElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEquipmentElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEquipmentElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEquipmentElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEquipmentElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEquipmentElement > ExpressDataSet::createIfcEquipmentElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcEquipmentElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEquipmentElement * > (allocateIfcEquipmentElement(this, Step::Id_UNSET));
    }
}

IfcEquipmentElement *ExpressDataSet::cloneIfcEquipmentElement(ExpressDataSet *expressDataSet, const IfcEquipmentElement &obj, const CopyOp &copyop) {
    IfcEquipmentElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEquipmentElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEquipmentElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEquipmentElement *ExpressDataSet::cloneIfcEquipmentElement(const IfcEquipmentElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEquipmentElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEquipmentElement(this, obj, copyop);
    }
}

IfcEquipmentStandard *ExpressDataSet::getIfcEquipmentStandard(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEquipmentStandard * > (current->second.get());
    }
    else {
        IfcEquipmentStandard *ret = static_cast< IfcEquipmentStandard * > (allocateIfcEquipmentStandard(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEquipmentStandard(IfcEquipmentStandard *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEquipmentStandard_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEquipmentStandard(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEquipmentStandard *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEquipmentStandard(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEquipmentStandard_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEquipmentStandard > ExpressDataSet::createIfcEquipmentStandard(bool isVolatile) {
    if (isVolatile) {
        return new IfcEquipmentStandard(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEquipmentStandard * > (allocateIfcEquipmentStandard(this, Step::Id_UNSET));
    }
}

IfcEquipmentStandard *ExpressDataSet::cloneIfcEquipmentStandard(ExpressDataSet *expressDataSet, const IfcEquipmentStandard &obj, const CopyOp &copyop) {
    IfcEquipmentStandard *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEquipmentStandard(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEquipmentStandard_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEquipmentStandard *ExpressDataSet::cloneIfcEquipmentStandard(const IfcEquipmentStandard &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEquipmentStandard(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEquipmentStandard(this, obj, copyop);
    }
}

IfcEvaporativeCoolerType *ExpressDataSet::getIfcEvaporativeCoolerType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEvaporativeCoolerType * > (current->second.get());
    }
    else {
        IfcEvaporativeCoolerType *ret = static_cast< IfcEvaporativeCoolerType * > (allocateIfcEvaporativeCoolerType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEvaporativeCoolerType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEvaporativeCoolerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEvaporativeCoolerType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEvaporativeCoolerType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEvaporativeCoolerType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEvaporativeCoolerType > ExpressDataSet::createIfcEvaporativeCoolerType(bool isVolatile) {
    if (isVolatile) {
        return new IfcEvaporativeCoolerType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEvaporativeCoolerType * > (allocateIfcEvaporativeCoolerType(this, Step::Id_UNSET));
    }
}

IfcEvaporativeCoolerType *ExpressDataSet::cloneIfcEvaporativeCoolerType(ExpressDataSet *expressDataSet, const IfcEvaporativeCoolerType &obj, const CopyOp &copyop) {
    IfcEvaporativeCoolerType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEvaporativeCoolerType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEvaporativeCoolerType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEvaporativeCoolerType *ExpressDataSet::cloneIfcEvaporativeCoolerType(const IfcEvaporativeCoolerType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEvaporativeCoolerType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEvaporativeCoolerType(this, obj, copyop);
    }
}

IfcEvaporatorType *ExpressDataSet::getIfcEvaporatorType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcEvaporatorType * > (current->second.get());
    }
    else {
        IfcEvaporatorType *ret = static_cast< IfcEvaporatorType * > (allocateIfcEvaporatorType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcEvaporatorType(IfcEvaporatorType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcEvaporatorType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcEvaporatorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcEvaporatorType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcEvaporatorType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcEvaporatorType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcEvaporatorType > ExpressDataSet::createIfcEvaporatorType(bool isVolatile) {
    if (isVolatile) {
        return new IfcEvaporatorType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcEvaporatorType * > (allocateIfcEvaporatorType(this, Step::Id_UNSET));
    }
}

IfcEvaporatorType *ExpressDataSet::cloneIfcEvaporatorType(ExpressDataSet *expressDataSet, const IfcEvaporatorType &obj, const CopyOp &copyop) {
    IfcEvaporatorType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcEvaporatorType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcEvaporatorType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcEvaporatorType *ExpressDataSet::cloneIfcEvaporatorType(const IfcEvaporatorType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcEvaporatorType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcEvaporatorType(this, obj, copyop);
    }
}

IfcExtendedMaterialProperties *ExpressDataSet::getIfcExtendedMaterialProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcExtendedMaterialProperties * > (current->second.get());
    }
    else {
        IfcExtendedMaterialProperties *ret = static_cast< IfcExtendedMaterialProperties * > (allocateIfcExtendedMaterialProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcExtendedMaterialProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcExtendedMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcExtendedMaterialProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcExtendedMaterialProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcExtendedMaterialProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcExtendedMaterialProperties > ExpressDataSet::createIfcExtendedMaterialProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcExtendedMaterialProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcExtendedMaterialProperties * > (allocateIfcExtendedMaterialProperties(this, Step::Id_UNSET));
    }
}

IfcExtendedMaterialProperties *ExpressDataSet::cloneIfcExtendedMaterialProperties(ExpressDataSet *expressDataSet, const IfcExtendedMaterialProperties &obj, const CopyOp &copyop) {
    IfcExtendedMaterialProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcExtendedMaterialProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcExtendedMaterialProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcExtendedMaterialProperties *ExpressDataSet::cloneIfcExtendedMaterialProperties(const IfcExtendedMaterialProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcExtendedMaterialProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcExtendedMaterialProperties(this, obj, copyop);
    }
}

IfcExternallyDefinedHatchStyle *ExpressDataSet::getIfcExternallyDefinedHatchStyle(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcExternallyDefinedHatchStyle * > (current->second.get());
    }
    else {
        IfcExternallyDefinedHatchStyle *ret = static_cast< IfcExternallyDefinedHatchStyle * > (allocateIfcExternallyDefinedHatchStyle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *arg) {
    getAll().erase(arg->getKey());
    return m_IfcExternallyDefinedHatchStyle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcExternallyDefinedHatchStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcExternallyDefinedHatchStyle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcExternallyDefinedHatchStyle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcExternallyDefinedHatchStyle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcExternallyDefinedHatchStyle > ExpressDataSet::createIfcExternallyDefinedHatchStyle(bool isVolatile) {
    if (isVolatile) {
        return new IfcExternallyDefinedHatchStyle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcExternallyDefinedHatchStyle * > (allocateIfcExternallyDefinedHatchStyle(this, Step::Id_UNSET));
    }
}

IfcExternallyDefinedHatchStyle *ExpressDataSet::cloneIfcExternallyDefinedHatchStyle(ExpressDataSet *expressDataSet, const IfcExternallyDefinedHatchStyle &obj, const CopyOp &copyop) {
    IfcExternallyDefinedHatchStyle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcExternallyDefinedHatchStyle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcExternallyDefinedHatchStyle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcExternallyDefinedHatchStyle *ExpressDataSet::cloneIfcExternallyDefinedHatchStyle(const IfcExternallyDefinedHatchStyle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcExternallyDefinedHatchStyle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcExternallyDefinedHatchStyle(this, obj, copyop);
    }
}

IfcExternallyDefinedSurfaceStyle *ExpressDataSet::getIfcExternallyDefinedSurfaceStyle(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcExternallyDefinedSurfaceStyle * > (current->second.get());
    }
    else {
        IfcExternallyDefinedSurfaceStyle *ret = static_cast< IfcExternallyDefinedSurfaceStyle * > (allocateIfcExternallyDefinedSurfaceStyle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *arg) {
    getAll().erase(arg->getKey());
    return m_IfcExternallyDefinedSurfaceStyle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcExternallyDefinedSurfaceStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcExternallyDefinedSurfaceStyle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcExternallyDefinedSurfaceStyle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcExternallyDefinedSurfaceStyle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcExternallyDefinedSurfaceStyle > ExpressDataSet::createIfcExternallyDefinedSurfaceStyle(bool isVolatile) {
    if (isVolatile) {
        return new IfcExternallyDefinedSurfaceStyle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcExternallyDefinedSurfaceStyle * > (allocateIfcExternallyDefinedSurfaceStyle(this, Step::Id_UNSET));
    }
}

IfcExternallyDefinedSurfaceStyle *ExpressDataSet::cloneIfcExternallyDefinedSurfaceStyle(ExpressDataSet *expressDataSet, const IfcExternallyDefinedSurfaceStyle &obj, const CopyOp &copyop) {
    IfcExternallyDefinedSurfaceStyle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcExternallyDefinedSurfaceStyle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcExternallyDefinedSurfaceStyle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcExternallyDefinedSurfaceStyle *ExpressDataSet::cloneIfcExternallyDefinedSurfaceStyle(const IfcExternallyDefinedSurfaceStyle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcExternallyDefinedSurfaceStyle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcExternallyDefinedSurfaceStyle(this, obj, copyop);
    }
}

IfcExternallyDefinedSymbol *ExpressDataSet::getIfcExternallyDefinedSymbol(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcExternallyDefinedSymbol * > (current->second.get());
    }
    else {
        IfcExternallyDefinedSymbol *ret = static_cast< IfcExternallyDefinedSymbol * > (allocateIfcExternallyDefinedSymbol(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *arg) {
    getAll().erase(arg->getKey());
    return m_IfcExternallyDefinedSymbol_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcExternallyDefinedSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcExternallyDefinedSymbol *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcExternallyDefinedSymbol(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcExternallyDefinedSymbol_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcExternallyDefinedSymbol > ExpressDataSet::createIfcExternallyDefinedSymbol(bool isVolatile) {
    if (isVolatile) {
        return new IfcExternallyDefinedSymbol(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcExternallyDefinedSymbol * > (allocateIfcExternallyDefinedSymbol(this, Step::Id_UNSET));
    }
}

IfcExternallyDefinedSymbol *ExpressDataSet::cloneIfcExternallyDefinedSymbol(ExpressDataSet *expressDataSet, const IfcExternallyDefinedSymbol &obj, const CopyOp &copyop) {
    IfcExternallyDefinedSymbol *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcExternallyDefinedSymbol(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcExternallyDefinedSymbol_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcExternallyDefinedSymbol *ExpressDataSet::cloneIfcExternallyDefinedSymbol(const IfcExternallyDefinedSymbol &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcExternallyDefinedSymbol(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcExternallyDefinedSymbol(this, obj, copyop);
    }
}

IfcExternallyDefinedTextFont *ExpressDataSet::getIfcExternallyDefinedTextFont(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcExternallyDefinedTextFont * > (current->second.get());
    }
    else {
        IfcExternallyDefinedTextFont *ret = static_cast< IfcExternallyDefinedTextFont * > (allocateIfcExternallyDefinedTextFont(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *arg) {
    getAll().erase(arg->getKey());
    return m_IfcExternallyDefinedTextFont_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcExternallyDefinedTextFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcExternallyDefinedTextFont *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcExternallyDefinedTextFont(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcExternallyDefinedTextFont_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcExternallyDefinedTextFont > ExpressDataSet::createIfcExternallyDefinedTextFont(bool isVolatile) {
    if (isVolatile) {
        return new IfcExternallyDefinedTextFont(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcExternallyDefinedTextFont * > (allocateIfcExternallyDefinedTextFont(this, Step::Id_UNSET));
    }
}

IfcExternallyDefinedTextFont *ExpressDataSet::cloneIfcExternallyDefinedTextFont(ExpressDataSet *expressDataSet, const IfcExternallyDefinedTextFont &obj, const CopyOp &copyop) {
    IfcExternallyDefinedTextFont *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcExternallyDefinedTextFont(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcExternallyDefinedTextFont_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcExternallyDefinedTextFont *ExpressDataSet::cloneIfcExternallyDefinedTextFont(const IfcExternallyDefinedTextFont &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcExternallyDefinedTextFont(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcExternallyDefinedTextFont(this, obj, copyop);
    }
}

IfcExtrudedAreaSolid *ExpressDataSet::getIfcExtrudedAreaSolid(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcExtrudedAreaSolid * > (current->second.get());
    }
    else {
        IfcExtrudedAreaSolid *ret = static_cast< IfcExtrudedAreaSolid * > (allocateIfcExtrudedAreaSolid(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *arg) {
    getAll().erase(arg->getKey());
    return m_IfcExtrudedAreaSolid_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcExtrudedAreaSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcExtrudedAreaSolid *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcExtrudedAreaSolid(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcExtrudedAreaSolid_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcExtrudedAreaSolid > ExpressDataSet::createIfcExtrudedAreaSolid(bool isVolatile) {
    if (isVolatile) {
        return new IfcExtrudedAreaSolid(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcExtrudedAreaSolid * > (allocateIfcExtrudedAreaSolid(this, Step::Id_UNSET));
    }
}

IfcExtrudedAreaSolid *ExpressDataSet::cloneIfcExtrudedAreaSolid(ExpressDataSet *expressDataSet, const IfcExtrudedAreaSolid &obj, const CopyOp &copyop) {
    IfcExtrudedAreaSolid *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcExtrudedAreaSolid(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcExtrudedAreaSolid_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcExtrudedAreaSolid *ExpressDataSet::cloneIfcExtrudedAreaSolid(const IfcExtrudedAreaSolid &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcExtrudedAreaSolid(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcExtrudedAreaSolid(this, obj, copyop);
    }
}

IfcFace *ExpressDataSet::getIfcFace(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFace * > (current->second.get());
    }
    else {
        IfcFace *ret = static_cast< IfcFace * > (allocateIfcFace(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFace(IfcFace *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFace_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFace(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFace *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFace(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFace_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFace > ExpressDataSet::createIfcFace(bool isVolatile) {
    if (isVolatile) {
        return new IfcFace(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFace * > (allocateIfcFace(this, Step::Id_UNSET));
    }
}

IfcFace *ExpressDataSet::cloneIfcFace(ExpressDataSet *expressDataSet, const IfcFace &obj, const CopyOp &copyop) {
    IfcFace *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFace(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFace_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFace *ExpressDataSet::cloneIfcFace(const IfcFace &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFace(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFace(this, obj, copyop);
    }
}

IfcFaceBasedSurfaceModel *ExpressDataSet::getIfcFaceBasedSurfaceModel(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFaceBasedSurfaceModel * > (current->second.get());
    }
    else {
        IfcFaceBasedSurfaceModel *ret = static_cast< IfcFaceBasedSurfaceModel * > (allocateIfcFaceBasedSurfaceModel(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFaceBasedSurfaceModel_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFaceBasedSurfaceModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFaceBasedSurfaceModel *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFaceBasedSurfaceModel(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFaceBasedSurfaceModel_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFaceBasedSurfaceModel > ExpressDataSet::createIfcFaceBasedSurfaceModel(bool isVolatile) {
    if (isVolatile) {
        return new IfcFaceBasedSurfaceModel(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFaceBasedSurfaceModel * > (allocateIfcFaceBasedSurfaceModel(this, Step::Id_UNSET));
    }
}

IfcFaceBasedSurfaceModel *ExpressDataSet::cloneIfcFaceBasedSurfaceModel(ExpressDataSet *expressDataSet, const IfcFaceBasedSurfaceModel &obj, const CopyOp &copyop) {
    IfcFaceBasedSurfaceModel *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFaceBasedSurfaceModel(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFaceBasedSurfaceModel_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFaceBasedSurfaceModel *ExpressDataSet::cloneIfcFaceBasedSurfaceModel(const IfcFaceBasedSurfaceModel &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFaceBasedSurfaceModel(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFaceBasedSurfaceModel(this, obj, copyop);
    }
}

IfcFaceBound *ExpressDataSet::getIfcFaceBound(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFaceBound * > (current->second.get());
    }
    else {
        IfcFaceBound *ret = static_cast< IfcFaceBound * > (allocateIfcFaceBound(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFaceBound(IfcFaceBound *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFaceBound_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFaceBound(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFaceBound *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFaceBound(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFaceBound_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFaceBound > ExpressDataSet::createIfcFaceBound(bool isVolatile) {
    if (isVolatile) {
        return new IfcFaceBound(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFaceBound * > (allocateIfcFaceBound(this, Step::Id_UNSET));
    }
}

IfcFaceBound *ExpressDataSet::cloneIfcFaceBound(ExpressDataSet *expressDataSet, const IfcFaceBound &obj, const CopyOp &copyop) {
    IfcFaceBound *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFaceBound(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFaceBound_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFaceBound *ExpressDataSet::cloneIfcFaceBound(const IfcFaceBound &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFaceBound(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFaceBound(this, obj, copyop);
    }
}

IfcFaceOuterBound *ExpressDataSet::getIfcFaceOuterBound(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFaceOuterBound * > (current->second.get());
    }
    else {
        IfcFaceOuterBound *ret = static_cast< IfcFaceOuterBound * > (allocateIfcFaceOuterBound(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFaceOuterBound(IfcFaceOuterBound *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFaceOuterBound_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFaceOuterBound(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFaceOuterBound *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFaceOuterBound(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFaceOuterBound_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFaceOuterBound > ExpressDataSet::createIfcFaceOuterBound(bool isVolatile) {
    if (isVolatile) {
        return new IfcFaceOuterBound(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFaceOuterBound * > (allocateIfcFaceOuterBound(this, Step::Id_UNSET));
    }
}

IfcFaceOuterBound *ExpressDataSet::cloneIfcFaceOuterBound(ExpressDataSet *expressDataSet, const IfcFaceOuterBound &obj, const CopyOp &copyop) {
    IfcFaceOuterBound *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFaceOuterBound(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFaceOuterBound_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFaceOuterBound *ExpressDataSet::cloneIfcFaceOuterBound(const IfcFaceOuterBound &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFaceOuterBound(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFaceOuterBound(this, obj, copyop);
    }
}

IfcFaceSurface *ExpressDataSet::getIfcFaceSurface(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFaceSurface * > (current->second.get());
    }
    else {
        IfcFaceSurface *ret = static_cast< IfcFaceSurface * > (allocateIfcFaceSurface(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFaceSurface(IfcFaceSurface *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFaceSurface_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFaceSurface(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFaceSurface *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFaceSurface(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFaceSurface_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFaceSurface > ExpressDataSet::createIfcFaceSurface(bool isVolatile) {
    if (isVolatile) {
        return new IfcFaceSurface(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFaceSurface * > (allocateIfcFaceSurface(this, Step::Id_UNSET));
    }
}

IfcFaceSurface *ExpressDataSet::cloneIfcFaceSurface(ExpressDataSet *expressDataSet, const IfcFaceSurface &obj, const CopyOp &copyop) {
    IfcFaceSurface *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFaceSurface(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFaceSurface_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFaceSurface *ExpressDataSet::cloneIfcFaceSurface(const IfcFaceSurface &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFaceSurface(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFaceSurface(this, obj, copyop);
    }
}

IfcFacetedBrep *ExpressDataSet::getIfcFacetedBrep(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFacetedBrep * > (current->second.get());
    }
    else {
        IfcFacetedBrep *ret = static_cast< IfcFacetedBrep * > (allocateIfcFacetedBrep(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFacetedBrep(IfcFacetedBrep *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFacetedBrep_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFacetedBrep(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFacetedBrep *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFacetedBrep(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFacetedBrep_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFacetedBrep > ExpressDataSet::createIfcFacetedBrep(bool isVolatile) {
    if (isVolatile) {
        return new IfcFacetedBrep(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFacetedBrep * > (allocateIfcFacetedBrep(this, Step::Id_UNSET));
    }
}

IfcFacetedBrep *ExpressDataSet::cloneIfcFacetedBrep(ExpressDataSet *expressDataSet, const IfcFacetedBrep &obj, const CopyOp &copyop) {
    IfcFacetedBrep *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFacetedBrep(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFacetedBrep_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFacetedBrep *ExpressDataSet::cloneIfcFacetedBrep(const IfcFacetedBrep &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFacetedBrep(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFacetedBrep(this, obj, copyop);
    }
}

IfcFacetedBrepWithVoids *ExpressDataSet::getIfcFacetedBrepWithVoids(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFacetedBrepWithVoids * > (current->second.get());
    }
    else {
        IfcFacetedBrepWithVoids *ret = static_cast< IfcFacetedBrepWithVoids * > (allocateIfcFacetedBrepWithVoids(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFacetedBrepWithVoids_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFacetedBrepWithVoids(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFacetedBrepWithVoids *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFacetedBrepWithVoids(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFacetedBrepWithVoids_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFacetedBrepWithVoids > ExpressDataSet::createIfcFacetedBrepWithVoids(bool isVolatile) {
    if (isVolatile) {
        return new IfcFacetedBrepWithVoids(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFacetedBrepWithVoids * > (allocateIfcFacetedBrepWithVoids(this, Step::Id_UNSET));
    }
}

IfcFacetedBrepWithVoids *ExpressDataSet::cloneIfcFacetedBrepWithVoids(ExpressDataSet *expressDataSet, const IfcFacetedBrepWithVoids &obj, const CopyOp &copyop) {
    IfcFacetedBrepWithVoids *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFacetedBrepWithVoids(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFacetedBrepWithVoids_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFacetedBrepWithVoids *ExpressDataSet::cloneIfcFacetedBrepWithVoids(const IfcFacetedBrepWithVoids &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFacetedBrepWithVoids(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFacetedBrepWithVoids(this, obj, copyop);
    }
}

IfcFailureConnectionCondition *ExpressDataSet::getIfcFailureConnectionCondition(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFailureConnectionCondition * > (current->second.get());
    }
    else {
        IfcFailureConnectionCondition *ret = static_cast< IfcFailureConnectionCondition * > (allocateIfcFailureConnectionCondition(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFailureConnectionCondition(IfcFailureConnectionCondition *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFailureConnectionCondition_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFailureConnectionCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFailureConnectionCondition *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFailureConnectionCondition(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFailureConnectionCondition_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFailureConnectionCondition > ExpressDataSet::createIfcFailureConnectionCondition(bool isVolatile) {
    if (isVolatile) {
        return new IfcFailureConnectionCondition(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFailureConnectionCondition * > (allocateIfcFailureConnectionCondition(this, Step::Id_UNSET));
    }
}

IfcFailureConnectionCondition *ExpressDataSet::cloneIfcFailureConnectionCondition(ExpressDataSet *expressDataSet, const IfcFailureConnectionCondition &obj, const CopyOp &copyop) {
    IfcFailureConnectionCondition *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFailureConnectionCondition(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFailureConnectionCondition_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFailureConnectionCondition *ExpressDataSet::cloneIfcFailureConnectionCondition(const IfcFailureConnectionCondition &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFailureConnectionCondition(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFailureConnectionCondition(this, obj, copyop);
    }
}

IfcFanType *ExpressDataSet::getIfcFanType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFanType * > (current->second.get());
    }
    else {
        IfcFanType *ret = static_cast< IfcFanType * > (allocateIfcFanType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFanType(IfcFanType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFanType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFanType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFanType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFanType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFanType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFanType > ExpressDataSet::createIfcFanType(bool isVolatile) {
    if (isVolatile) {
        return new IfcFanType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFanType * > (allocateIfcFanType(this, Step::Id_UNSET));
    }
}

IfcFanType *ExpressDataSet::cloneIfcFanType(ExpressDataSet *expressDataSet, const IfcFanType &obj, const CopyOp &copyop) {
    IfcFanType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFanType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFanType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFanType *ExpressDataSet::cloneIfcFanType(const IfcFanType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFanType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFanType(this, obj, copyop);
    }
}

IfcFastener *ExpressDataSet::getIfcFastener(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFastener * > (current->second.get());
    }
    else {
        IfcFastener *ret = static_cast< IfcFastener * > (allocateIfcFastener(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFastener(IfcFastener *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFastener_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFastener(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFastener *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFastener(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFastener_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFastener > ExpressDataSet::createIfcFastener(bool isVolatile) {
    if (isVolatile) {
        return new IfcFastener(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFastener * > (allocateIfcFastener(this, Step::Id_UNSET));
    }
}

IfcFastener *ExpressDataSet::cloneIfcFastener(ExpressDataSet *expressDataSet, const IfcFastener &obj, const CopyOp &copyop) {
    IfcFastener *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFastener(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFastener_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFastener *ExpressDataSet::cloneIfcFastener(const IfcFastener &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFastener(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFastener(this, obj, copyop);
    }
}

IfcFastenerType *ExpressDataSet::getIfcFastenerType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFastenerType * > (current->second.get());
    }
    else {
        IfcFastenerType *ret = static_cast< IfcFastenerType * > (allocateIfcFastenerType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFastenerType(IfcFastenerType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFastenerType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFastenerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFastenerType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFastenerType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFastenerType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFastenerType > ExpressDataSet::createIfcFastenerType(bool isVolatile) {
    if (isVolatile) {
        return new IfcFastenerType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFastenerType * > (allocateIfcFastenerType(this, Step::Id_UNSET));
    }
}

IfcFastenerType *ExpressDataSet::cloneIfcFastenerType(ExpressDataSet *expressDataSet, const IfcFastenerType &obj, const CopyOp &copyop) {
    IfcFastenerType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFastenerType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFastenerType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFastenerType *ExpressDataSet::cloneIfcFastenerType(const IfcFastenerType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFastenerType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFastenerType(this, obj, copyop);
    }
}

IfcFillAreaStyle *ExpressDataSet::getIfcFillAreaStyle(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFillAreaStyle * > (current->second.get());
    }
    else {
        IfcFillAreaStyle *ret = static_cast< IfcFillAreaStyle * > (allocateIfcFillAreaStyle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFillAreaStyle(IfcFillAreaStyle *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFillAreaStyle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFillAreaStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFillAreaStyle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFillAreaStyle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFillAreaStyle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFillAreaStyle > ExpressDataSet::createIfcFillAreaStyle(bool isVolatile) {
    if (isVolatile) {
        return new IfcFillAreaStyle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFillAreaStyle * > (allocateIfcFillAreaStyle(this, Step::Id_UNSET));
    }
}

IfcFillAreaStyle *ExpressDataSet::cloneIfcFillAreaStyle(ExpressDataSet *expressDataSet, const IfcFillAreaStyle &obj, const CopyOp &copyop) {
    IfcFillAreaStyle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFillAreaStyle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFillAreaStyle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFillAreaStyle *ExpressDataSet::cloneIfcFillAreaStyle(const IfcFillAreaStyle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFillAreaStyle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFillAreaStyle(this, obj, copyop);
    }
}

IfcFillAreaStyleHatching *ExpressDataSet::getIfcFillAreaStyleHatching(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFillAreaStyleHatching * > (current->second.get());
    }
    else {
        IfcFillAreaStyleHatching *ret = static_cast< IfcFillAreaStyleHatching * > (allocateIfcFillAreaStyleHatching(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFillAreaStyleHatching_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFillAreaStyleHatching(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFillAreaStyleHatching *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFillAreaStyleHatching(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFillAreaStyleHatching_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFillAreaStyleHatching > ExpressDataSet::createIfcFillAreaStyleHatching(bool isVolatile) {
    if (isVolatile) {
        return new IfcFillAreaStyleHatching(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFillAreaStyleHatching * > (allocateIfcFillAreaStyleHatching(this, Step::Id_UNSET));
    }
}

IfcFillAreaStyleHatching *ExpressDataSet::cloneIfcFillAreaStyleHatching(ExpressDataSet *expressDataSet, const IfcFillAreaStyleHatching &obj, const CopyOp &copyop) {
    IfcFillAreaStyleHatching *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFillAreaStyleHatching(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFillAreaStyleHatching_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFillAreaStyleHatching *ExpressDataSet::cloneIfcFillAreaStyleHatching(const IfcFillAreaStyleHatching &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFillAreaStyleHatching(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFillAreaStyleHatching(this, obj, copyop);
    }
}

IfcFillAreaStyleTileSymbolWithStyle *ExpressDataSet::getIfcFillAreaStyleTileSymbolWithStyle(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFillAreaStyleTileSymbolWithStyle * > (current->second.get());
    }
    else {
        IfcFillAreaStyleTileSymbolWithStyle *ret = static_cast< IfcFillAreaStyleTileSymbolWithStyle * > (allocateIfcFillAreaStyleTileSymbolWithStyle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFillAreaStyleTileSymbolWithStyle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFillAreaStyleTileSymbolWithStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFillAreaStyleTileSymbolWithStyle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFillAreaStyleTileSymbolWithStyle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFillAreaStyleTileSymbolWithStyle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFillAreaStyleTileSymbolWithStyle > ExpressDataSet::createIfcFillAreaStyleTileSymbolWithStyle(bool isVolatile) {
    if (isVolatile) {
        return new IfcFillAreaStyleTileSymbolWithStyle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFillAreaStyleTileSymbolWithStyle * > (allocateIfcFillAreaStyleTileSymbolWithStyle(this, Step::Id_UNSET));
    }
}

IfcFillAreaStyleTileSymbolWithStyle *ExpressDataSet::cloneIfcFillAreaStyleTileSymbolWithStyle(ExpressDataSet *expressDataSet, const IfcFillAreaStyleTileSymbolWithStyle &obj, const CopyOp &copyop) {
    IfcFillAreaStyleTileSymbolWithStyle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFillAreaStyleTileSymbolWithStyle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFillAreaStyleTileSymbolWithStyle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFillAreaStyleTileSymbolWithStyle *ExpressDataSet::cloneIfcFillAreaStyleTileSymbolWithStyle(const IfcFillAreaStyleTileSymbolWithStyle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFillAreaStyleTileSymbolWithStyle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFillAreaStyleTileSymbolWithStyle(this, obj, copyop);
    }
}

IfcFillAreaStyleTiles *ExpressDataSet::getIfcFillAreaStyleTiles(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFillAreaStyleTiles * > (current->second.get());
    }
    else {
        IfcFillAreaStyleTiles *ret = static_cast< IfcFillAreaStyleTiles * > (allocateIfcFillAreaStyleTiles(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFillAreaStyleTiles_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFillAreaStyleTiles(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFillAreaStyleTiles *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFillAreaStyleTiles(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFillAreaStyleTiles_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFillAreaStyleTiles > ExpressDataSet::createIfcFillAreaStyleTiles(bool isVolatile) {
    if (isVolatile) {
        return new IfcFillAreaStyleTiles(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFillAreaStyleTiles * > (allocateIfcFillAreaStyleTiles(this, Step::Id_UNSET));
    }
}

IfcFillAreaStyleTiles *ExpressDataSet::cloneIfcFillAreaStyleTiles(ExpressDataSet *expressDataSet, const IfcFillAreaStyleTiles &obj, const CopyOp &copyop) {
    IfcFillAreaStyleTiles *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFillAreaStyleTiles(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFillAreaStyleTiles_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFillAreaStyleTiles *ExpressDataSet::cloneIfcFillAreaStyleTiles(const IfcFillAreaStyleTiles &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFillAreaStyleTiles(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFillAreaStyleTiles(this, obj, copyop);
    }
}

IfcFilterType *ExpressDataSet::getIfcFilterType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFilterType * > (current->second.get());
    }
    else {
        IfcFilterType *ret = static_cast< IfcFilterType * > (allocateIfcFilterType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFilterType(IfcFilterType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFilterType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFilterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFilterType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFilterType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFilterType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFilterType > ExpressDataSet::createIfcFilterType(bool isVolatile) {
    if (isVolatile) {
        return new IfcFilterType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFilterType * > (allocateIfcFilterType(this, Step::Id_UNSET));
    }
}

IfcFilterType *ExpressDataSet::cloneIfcFilterType(ExpressDataSet *expressDataSet, const IfcFilterType &obj, const CopyOp &copyop) {
    IfcFilterType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFilterType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFilterType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFilterType *ExpressDataSet::cloneIfcFilterType(const IfcFilterType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFilterType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFilterType(this, obj, copyop);
    }
}

IfcFireSuppressionTerminalType *ExpressDataSet::getIfcFireSuppressionTerminalType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFireSuppressionTerminalType * > (current->second.get());
    }
    else {
        IfcFireSuppressionTerminalType *ret = static_cast< IfcFireSuppressionTerminalType * > (allocateIfcFireSuppressionTerminalType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFireSuppressionTerminalType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFireSuppressionTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFireSuppressionTerminalType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFireSuppressionTerminalType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFireSuppressionTerminalType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFireSuppressionTerminalType > ExpressDataSet::createIfcFireSuppressionTerminalType(bool isVolatile) {
    if (isVolatile) {
        return new IfcFireSuppressionTerminalType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFireSuppressionTerminalType * > (allocateIfcFireSuppressionTerminalType(this, Step::Id_UNSET));
    }
}

IfcFireSuppressionTerminalType *ExpressDataSet::cloneIfcFireSuppressionTerminalType(ExpressDataSet *expressDataSet, const IfcFireSuppressionTerminalType &obj, const CopyOp &copyop) {
    IfcFireSuppressionTerminalType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFireSuppressionTerminalType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFireSuppressionTerminalType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFireSuppressionTerminalType *ExpressDataSet::cloneIfcFireSuppressionTerminalType(const IfcFireSuppressionTerminalType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFireSuppressionTerminalType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFireSuppressionTerminalType(this, obj, copyop);
    }
}

IfcFlowController *ExpressDataSet::getIfcFlowController(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFlowController * > (current->second.get());
    }
    else {
        IfcFlowController *ret = static_cast< IfcFlowController * > (allocateIfcFlowController(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFlowController(IfcFlowController *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFlowController_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFlowController(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFlowController *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFlowController(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFlowController_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFlowController > ExpressDataSet::createIfcFlowController(bool isVolatile) {
    if (isVolatile) {
        return new IfcFlowController(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFlowController * > (allocateIfcFlowController(this, Step::Id_UNSET));
    }
}

IfcFlowController *ExpressDataSet::cloneIfcFlowController(ExpressDataSet *expressDataSet, const IfcFlowController &obj, const CopyOp &copyop) {
    IfcFlowController *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFlowController(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFlowController_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFlowController *ExpressDataSet::cloneIfcFlowController(const IfcFlowController &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFlowController(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFlowController(this, obj, copyop);
    }
}

IfcFlowFitting *ExpressDataSet::getIfcFlowFitting(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFlowFitting * > (current->second.get());
    }
    else {
        IfcFlowFitting *ret = static_cast< IfcFlowFitting * > (allocateIfcFlowFitting(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFlowFitting(IfcFlowFitting *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFlowFitting_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFlowFitting(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFlowFitting *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFlowFitting(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFlowFitting_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFlowFitting > ExpressDataSet::createIfcFlowFitting(bool isVolatile) {
    if (isVolatile) {
        return new IfcFlowFitting(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFlowFitting * > (allocateIfcFlowFitting(this, Step::Id_UNSET));
    }
}

IfcFlowFitting *ExpressDataSet::cloneIfcFlowFitting(ExpressDataSet *expressDataSet, const IfcFlowFitting &obj, const CopyOp &copyop) {
    IfcFlowFitting *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFlowFitting(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFlowFitting_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFlowFitting *ExpressDataSet::cloneIfcFlowFitting(const IfcFlowFitting &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFlowFitting(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFlowFitting(this, obj, copyop);
    }
}

IfcFlowInstrumentType *ExpressDataSet::getIfcFlowInstrumentType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFlowInstrumentType * > (current->second.get());
    }
    else {
        IfcFlowInstrumentType *ret = static_cast< IfcFlowInstrumentType * > (allocateIfcFlowInstrumentType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFlowInstrumentType(IfcFlowInstrumentType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFlowInstrumentType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFlowInstrumentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFlowInstrumentType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFlowInstrumentType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFlowInstrumentType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFlowInstrumentType > ExpressDataSet::createIfcFlowInstrumentType(bool isVolatile) {
    if (isVolatile) {
        return new IfcFlowInstrumentType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFlowInstrumentType * > (allocateIfcFlowInstrumentType(this, Step::Id_UNSET));
    }
}

IfcFlowInstrumentType *ExpressDataSet::cloneIfcFlowInstrumentType(ExpressDataSet *expressDataSet, const IfcFlowInstrumentType &obj, const CopyOp &copyop) {
    IfcFlowInstrumentType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFlowInstrumentType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFlowInstrumentType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFlowInstrumentType *ExpressDataSet::cloneIfcFlowInstrumentType(const IfcFlowInstrumentType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFlowInstrumentType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFlowInstrumentType(this, obj, copyop);
    }
}

IfcFlowMeterType *ExpressDataSet::getIfcFlowMeterType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFlowMeterType * > (current->second.get());
    }
    else {
        IfcFlowMeterType *ret = static_cast< IfcFlowMeterType * > (allocateIfcFlowMeterType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFlowMeterType(IfcFlowMeterType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFlowMeterType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFlowMeterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFlowMeterType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFlowMeterType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFlowMeterType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFlowMeterType > ExpressDataSet::createIfcFlowMeterType(bool isVolatile) {
    if (isVolatile) {
        return new IfcFlowMeterType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFlowMeterType * > (allocateIfcFlowMeterType(this, Step::Id_UNSET));
    }
}

IfcFlowMeterType *ExpressDataSet::cloneIfcFlowMeterType(ExpressDataSet *expressDataSet, const IfcFlowMeterType &obj, const CopyOp &copyop) {
    IfcFlowMeterType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFlowMeterType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFlowMeterType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFlowMeterType *ExpressDataSet::cloneIfcFlowMeterType(const IfcFlowMeterType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFlowMeterType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFlowMeterType(this, obj, copyop);
    }
}

IfcFlowMovingDevice *ExpressDataSet::getIfcFlowMovingDevice(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFlowMovingDevice * > (current->second.get());
    }
    else {
        IfcFlowMovingDevice *ret = static_cast< IfcFlowMovingDevice * > (allocateIfcFlowMovingDevice(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFlowMovingDevice(IfcFlowMovingDevice *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFlowMovingDevice_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFlowMovingDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFlowMovingDevice *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFlowMovingDevice(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFlowMovingDevice_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFlowMovingDevice > ExpressDataSet::createIfcFlowMovingDevice(bool isVolatile) {
    if (isVolatile) {
        return new IfcFlowMovingDevice(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFlowMovingDevice * > (allocateIfcFlowMovingDevice(this, Step::Id_UNSET));
    }
}

IfcFlowMovingDevice *ExpressDataSet::cloneIfcFlowMovingDevice(ExpressDataSet *expressDataSet, const IfcFlowMovingDevice &obj, const CopyOp &copyop) {
    IfcFlowMovingDevice *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFlowMovingDevice(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFlowMovingDevice_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFlowMovingDevice *ExpressDataSet::cloneIfcFlowMovingDevice(const IfcFlowMovingDevice &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFlowMovingDevice(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFlowMovingDevice(this, obj, copyop);
    }
}

IfcFlowSegment *ExpressDataSet::getIfcFlowSegment(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFlowSegment * > (current->second.get());
    }
    else {
        IfcFlowSegment *ret = static_cast< IfcFlowSegment * > (allocateIfcFlowSegment(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFlowSegment(IfcFlowSegment *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFlowSegment_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFlowSegment(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFlowSegment *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFlowSegment(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFlowSegment_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFlowSegment > ExpressDataSet::createIfcFlowSegment(bool isVolatile) {
    if (isVolatile) {
        return new IfcFlowSegment(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFlowSegment * > (allocateIfcFlowSegment(this, Step::Id_UNSET));
    }
}

IfcFlowSegment *ExpressDataSet::cloneIfcFlowSegment(ExpressDataSet *expressDataSet, const IfcFlowSegment &obj, const CopyOp &copyop) {
    IfcFlowSegment *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFlowSegment(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFlowSegment_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFlowSegment *ExpressDataSet::cloneIfcFlowSegment(const IfcFlowSegment &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFlowSegment(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFlowSegment(this, obj, copyop);
    }
}

IfcFlowStorageDevice *ExpressDataSet::getIfcFlowStorageDevice(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFlowStorageDevice * > (current->second.get());
    }
    else {
        IfcFlowStorageDevice *ret = static_cast< IfcFlowStorageDevice * > (allocateIfcFlowStorageDevice(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFlowStorageDevice(IfcFlowStorageDevice *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFlowStorageDevice_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFlowStorageDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFlowStorageDevice *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFlowStorageDevice(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFlowStorageDevice_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFlowStorageDevice > ExpressDataSet::createIfcFlowStorageDevice(bool isVolatile) {
    if (isVolatile) {
        return new IfcFlowStorageDevice(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFlowStorageDevice * > (allocateIfcFlowStorageDevice(this, Step::Id_UNSET));
    }
}

IfcFlowStorageDevice *ExpressDataSet::cloneIfcFlowStorageDevice(ExpressDataSet *expressDataSet, const IfcFlowStorageDevice &obj, const CopyOp &copyop) {
    IfcFlowStorageDevice *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFlowStorageDevice(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFlowStorageDevice_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFlowStorageDevice *ExpressDataSet::cloneIfcFlowStorageDevice(const IfcFlowStorageDevice &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFlowStorageDevice(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFlowStorageDevice(this, obj, copyop);
    }
}

IfcFlowTerminal *ExpressDataSet::getIfcFlowTerminal(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFlowTerminal * > (current->second.get());
    }
    else {
        IfcFlowTerminal *ret = static_cast< IfcFlowTerminal * > (allocateIfcFlowTerminal(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFlowTerminal(IfcFlowTerminal *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFlowTerminal_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFlowTerminal(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFlowTerminal *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFlowTerminal(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFlowTerminal_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFlowTerminal > ExpressDataSet::createIfcFlowTerminal(bool isVolatile) {
    if (isVolatile) {
        return new IfcFlowTerminal(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFlowTerminal * > (allocateIfcFlowTerminal(this, Step::Id_UNSET));
    }
}

IfcFlowTerminal *ExpressDataSet::cloneIfcFlowTerminal(ExpressDataSet *expressDataSet, const IfcFlowTerminal &obj, const CopyOp &copyop) {
    IfcFlowTerminal *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFlowTerminal(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFlowTerminal_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFlowTerminal *ExpressDataSet::cloneIfcFlowTerminal(const IfcFlowTerminal &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFlowTerminal(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFlowTerminal(this, obj, copyop);
    }
}

IfcFlowTreatmentDevice *ExpressDataSet::getIfcFlowTreatmentDevice(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFlowTreatmentDevice * > (current->second.get());
    }
    else {
        IfcFlowTreatmentDevice *ret = static_cast< IfcFlowTreatmentDevice * > (allocateIfcFlowTreatmentDevice(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFlowTreatmentDevice_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFlowTreatmentDevice(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFlowTreatmentDevice *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFlowTreatmentDevice(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFlowTreatmentDevice_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFlowTreatmentDevice > ExpressDataSet::createIfcFlowTreatmentDevice(bool isVolatile) {
    if (isVolatile) {
        return new IfcFlowTreatmentDevice(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFlowTreatmentDevice * > (allocateIfcFlowTreatmentDevice(this, Step::Id_UNSET));
    }
}

IfcFlowTreatmentDevice *ExpressDataSet::cloneIfcFlowTreatmentDevice(ExpressDataSet *expressDataSet, const IfcFlowTreatmentDevice &obj, const CopyOp &copyop) {
    IfcFlowTreatmentDevice *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFlowTreatmentDevice(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFlowTreatmentDevice_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFlowTreatmentDevice *ExpressDataSet::cloneIfcFlowTreatmentDevice(const IfcFlowTreatmentDevice &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFlowTreatmentDevice(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFlowTreatmentDevice(this, obj, copyop);
    }
}

IfcFluidFlowProperties *ExpressDataSet::getIfcFluidFlowProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFluidFlowProperties * > (current->second.get());
    }
    else {
        IfcFluidFlowProperties *ret = static_cast< IfcFluidFlowProperties * > (allocateIfcFluidFlowProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFluidFlowProperties(IfcFluidFlowProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFluidFlowProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFluidFlowProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFluidFlowProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFluidFlowProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFluidFlowProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFluidFlowProperties > ExpressDataSet::createIfcFluidFlowProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcFluidFlowProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFluidFlowProperties * > (allocateIfcFluidFlowProperties(this, Step::Id_UNSET));
    }
}

IfcFluidFlowProperties *ExpressDataSet::cloneIfcFluidFlowProperties(ExpressDataSet *expressDataSet, const IfcFluidFlowProperties &obj, const CopyOp &copyop) {
    IfcFluidFlowProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFluidFlowProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFluidFlowProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFluidFlowProperties *ExpressDataSet::cloneIfcFluidFlowProperties(const IfcFluidFlowProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFluidFlowProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFluidFlowProperties(this, obj, copyop);
    }
}

IfcFooting *ExpressDataSet::getIfcFooting(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFooting * > (current->second.get());
    }
    else {
        IfcFooting *ret = static_cast< IfcFooting * > (allocateIfcFooting(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFooting(IfcFooting *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFooting_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFooting(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFooting *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFooting(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFooting_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFooting > ExpressDataSet::createIfcFooting(bool isVolatile) {
    if (isVolatile) {
        return new IfcFooting(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFooting * > (allocateIfcFooting(this, Step::Id_UNSET));
    }
}

IfcFooting *ExpressDataSet::cloneIfcFooting(ExpressDataSet *expressDataSet, const IfcFooting &obj, const CopyOp &copyop) {
    IfcFooting *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFooting(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFooting_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFooting *ExpressDataSet::cloneIfcFooting(const IfcFooting &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFooting(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFooting(this, obj, copyop);
    }
}

IfcFuelProperties *ExpressDataSet::getIfcFuelProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFuelProperties * > (current->second.get());
    }
    else {
        IfcFuelProperties *ret = static_cast< IfcFuelProperties * > (allocateIfcFuelProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFuelProperties(IfcFuelProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFuelProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFuelProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFuelProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFuelProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFuelProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFuelProperties > ExpressDataSet::createIfcFuelProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcFuelProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFuelProperties * > (allocateIfcFuelProperties(this, Step::Id_UNSET));
    }
}

IfcFuelProperties *ExpressDataSet::cloneIfcFuelProperties(ExpressDataSet *expressDataSet, const IfcFuelProperties &obj, const CopyOp &copyop) {
    IfcFuelProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFuelProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFuelProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFuelProperties *ExpressDataSet::cloneIfcFuelProperties(const IfcFuelProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFuelProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFuelProperties(this, obj, copyop);
    }
}

IfcFurnishingElement *ExpressDataSet::getIfcFurnishingElement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFurnishingElement * > (current->second.get());
    }
    else {
        IfcFurnishingElement *ret = static_cast< IfcFurnishingElement * > (allocateIfcFurnishingElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFurnishingElement(IfcFurnishingElement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFurnishingElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFurnishingElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFurnishingElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFurnishingElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFurnishingElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFurnishingElement > ExpressDataSet::createIfcFurnishingElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcFurnishingElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFurnishingElement * > (allocateIfcFurnishingElement(this, Step::Id_UNSET));
    }
}

IfcFurnishingElement *ExpressDataSet::cloneIfcFurnishingElement(ExpressDataSet *expressDataSet, const IfcFurnishingElement &obj, const CopyOp &copyop) {
    IfcFurnishingElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFurnishingElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFurnishingElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFurnishingElement *ExpressDataSet::cloneIfcFurnishingElement(const IfcFurnishingElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFurnishingElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFurnishingElement(this, obj, copyop);
    }
}

IfcFurnishingElementType *ExpressDataSet::getIfcFurnishingElementType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFurnishingElementType * > (current->second.get());
    }
    else {
        IfcFurnishingElementType *ret = static_cast< IfcFurnishingElementType * > (allocateIfcFurnishingElementType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFurnishingElementType(IfcFurnishingElementType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFurnishingElementType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFurnishingElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFurnishingElementType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFurnishingElementType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFurnishingElementType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFurnishingElementType > ExpressDataSet::createIfcFurnishingElementType(bool isVolatile) {
    if (isVolatile) {
        return new IfcFurnishingElementType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFurnishingElementType * > (allocateIfcFurnishingElementType(this, Step::Id_UNSET));
    }
}

IfcFurnishingElementType *ExpressDataSet::cloneIfcFurnishingElementType(ExpressDataSet *expressDataSet, const IfcFurnishingElementType &obj, const CopyOp &copyop) {
    IfcFurnishingElementType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFurnishingElementType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFurnishingElementType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFurnishingElementType *ExpressDataSet::cloneIfcFurnishingElementType(const IfcFurnishingElementType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFurnishingElementType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFurnishingElementType(this, obj, copyop);
    }
}

IfcFurnitureStandard *ExpressDataSet::getIfcFurnitureStandard(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFurnitureStandard * > (current->second.get());
    }
    else {
        IfcFurnitureStandard *ret = static_cast< IfcFurnitureStandard * > (allocateIfcFurnitureStandard(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFurnitureStandard(IfcFurnitureStandard *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFurnitureStandard_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFurnitureStandard(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFurnitureStandard *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFurnitureStandard(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFurnitureStandard_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFurnitureStandard > ExpressDataSet::createIfcFurnitureStandard(bool isVolatile) {
    if (isVolatile) {
        return new IfcFurnitureStandard(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFurnitureStandard * > (allocateIfcFurnitureStandard(this, Step::Id_UNSET));
    }
}

IfcFurnitureStandard *ExpressDataSet::cloneIfcFurnitureStandard(ExpressDataSet *expressDataSet, const IfcFurnitureStandard &obj, const CopyOp &copyop) {
    IfcFurnitureStandard *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFurnitureStandard(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFurnitureStandard_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFurnitureStandard *ExpressDataSet::cloneIfcFurnitureStandard(const IfcFurnitureStandard &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFurnitureStandard(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFurnitureStandard(this, obj, copyop);
    }
}

IfcFurnitureType *ExpressDataSet::getIfcFurnitureType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcFurnitureType * > (current->second.get());
    }
    else {
        IfcFurnitureType *ret = static_cast< IfcFurnitureType * > (allocateIfcFurnitureType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcFurnitureType(IfcFurnitureType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcFurnitureType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcFurnitureType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcFurnitureType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcFurnitureType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcFurnitureType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcFurnitureType > ExpressDataSet::createIfcFurnitureType(bool isVolatile) {
    if (isVolatile) {
        return new IfcFurnitureType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcFurnitureType * > (allocateIfcFurnitureType(this, Step::Id_UNSET));
    }
}

IfcFurnitureType *ExpressDataSet::cloneIfcFurnitureType(ExpressDataSet *expressDataSet, const IfcFurnitureType &obj, const CopyOp &copyop) {
    IfcFurnitureType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcFurnitureType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcFurnitureType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcFurnitureType *ExpressDataSet::cloneIfcFurnitureType(const IfcFurnitureType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcFurnitureType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcFurnitureType(this, obj, copyop);
    }
}

IfcGasTerminalType *ExpressDataSet::getIfcGasTerminalType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcGasTerminalType * > (current->second.get());
    }
    else {
        IfcGasTerminalType *ret = static_cast< IfcGasTerminalType * > (allocateIfcGasTerminalType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcGasTerminalType(IfcGasTerminalType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcGasTerminalType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcGasTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcGasTerminalType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcGasTerminalType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcGasTerminalType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcGasTerminalType > ExpressDataSet::createIfcGasTerminalType(bool isVolatile) {
    if (isVolatile) {
        return new IfcGasTerminalType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcGasTerminalType * > (allocateIfcGasTerminalType(this, Step::Id_UNSET));
    }
}

IfcGasTerminalType *ExpressDataSet::cloneIfcGasTerminalType(ExpressDataSet *expressDataSet, const IfcGasTerminalType &obj, const CopyOp &copyop) {
    IfcGasTerminalType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcGasTerminalType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcGasTerminalType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcGasTerminalType *ExpressDataSet::cloneIfcGasTerminalType(const IfcGasTerminalType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcGasTerminalType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcGasTerminalType(this, obj, copyop);
    }
}

IfcGeneralMaterialProperties *ExpressDataSet::getIfcGeneralMaterialProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcGeneralMaterialProperties * > (current->second.get());
    }
    else {
        IfcGeneralMaterialProperties *ret = static_cast< IfcGeneralMaterialProperties * > (allocateIfcGeneralMaterialProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcGeneralMaterialProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcGeneralMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcGeneralMaterialProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcGeneralMaterialProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcGeneralMaterialProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcGeneralMaterialProperties > ExpressDataSet::createIfcGeneralMaterialProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcGeneralMaterialProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcGeneralMaterialProperties * > (allocateIfcGeneralMaterialProperties(this, Step::Id_UNSET));
    }
}

IfcGeneralMaterialProperties *ExpressDataSet::cloneIfcGeneralMaterialProperties(ExpressDataSet *expressDataSet, const IfcGeneralMaterialProperties &obj, const CopyOp &copyop) {
    IfcGeneralMaterialProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcGeneralMaterialProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcGeneralMaterialProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcGeneralMaterialProperties *ExpressDataSet::cloneIfcGeneralMaterialProperties(const IfcGeneralMaterialProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcGeneralMaterialProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcGeneralMaterialProperties(this, obj, copyop);
    }
}

IfcGeneralProfileProperties *ExpressDataSet::getIfcGeneralProfileProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcGeneralProfileProperties * > (current->second.get());
    }
    else {
        IfcGeneralProfileProperties *ret = static_cast< IfcGeneralProfileProperties * > (allocateIfcGeneralProfileProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcGeneralProfileProperties(IfcGeneralProfileProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcGeneralProfileProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcGeneralProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcGeneralProfileProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcGeneralProfileProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcGeneralProfileProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcGeneralProfileProperties > ExpressDataSet::createIfcGeneralProfileProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcGeneralProfileProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcGeneralProfileProperties * > (allocateIfcGeneralProfileProperties(this, Step::Id_UNSET));
    }
}

IfcGeneralProfileProperties *ExpressDataSet::cloneIfcGeneralProfileProperties(ExpressDataSet *expressDataSet, const IfcGeneralProfileProperties &obj, const CopyOp &copyop) {
    IfcGeneralProfileProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcGeneralProfileProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcGeneralProfileProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcGeneralProfileProperties *ExpressDataSet::cloneIfcGeneralProfileProperties(const IfcGeneralProfileProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcGeneralProfileProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcGeneralProfileProperties(this, obj, copyop);
    }
}

IfcGeometricCurveSet *ExpressDataSet::getIfcGeometricCurveSet(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcGeometricCurveSet * > (current->second.get());
    }
    else {
        IfcGeometricCurveSet *ret = static_cast< IfcGeometricCurveSet * > (allocateIfcGeometricCurveSet(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcGeometricCurveSet(IfcGeometricCurveSet *arg) {
    getAll().erase(arg->getKey());
    return m_IfcGeometricCurveSet_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcGeometricCurveSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcGeometricCurveSet *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcGeometricCurveSet(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcGeometricCurveSet_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcGeometricCurveSet > ExpressDataSet::createIfcGeometricCurveSet(bool isVolatile) {
    if (isVolatile) {
        return new IfcGeometricCurveSet(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcGeometricCurveSet * > (allocateIfcGeometricCurveSet(this, Step::Id_UNSET));
    }
}

IfcGeometricCurveSet *ExpressDataSet::cloneIfcGeometricCurveSet(ExpressDataSet *expressDataSet, const IfcGeometricCurveSet &obj, const CopyOp &copyop) {
    IfcGeometricCurveSet *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcGeometricCurveSet(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcGeometricCurveSet_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcGeometricCurveSet *ExpressDataSet::cloneIfcGeometricCurveSet(const IfcGeometricCurveSet &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcGeometricCurveSet(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcGeometricCurveSet(this, obj, copyop);
    }
}

IfcGeometricRepresentationContext *ExpressDataSet::getIfcGeometricRepresentationContext(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcGeometricRepresentationContext * > (current->second.get());
    }
    else {
        IfcGeometricRepresentationContext *ret = static_cast< IfcGeometricRepresentationContext * > (allocateIfcGeometricRepresentationContext(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *arg) {
    getAll().erase(arg->getKey());
    return m_IfcGeometricRepresentationContext_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcGeometricRepresentationContext(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcGeometricRepresentationContext *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcGeometricRepresentationContext(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcGeometricRepresentationContext_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcGeometricRepresentationContext > ExpressDataSet::createIfcGeometricRepresentationContext(bool isVolatile) {
    if (isVolatile) {
        return new IfcGeometricRepresentationContext(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcGeometricRepresentationContext * > (allocateIfcGeometricRepresentationContext(this, Step::Id_UNSET));
    }
}

IfcGeometricRepresentationContext *ExpressDataSet::cloneIfcGeometricRepresentationContext(ExpressDataSet *expressDataSet, const IfcGeometricRepresentationContext &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationContext *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcGeometricRepresentationContext(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcGeometricRepresentationContext_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcGeometricRepresentationContext *ExpressDataSet::cloneIfcGeometricRepresentationContext(const IfcGeometricRepresentationContext &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcGeometricRepresentationContext(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcGeometricRepresentationContext(this, obj, copyop);
    }
}

IfcGeometricRepresentationSubContext *ExpressDataSet::getIfcGeometricRepresentationSubContext(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcGeometricRepresentationSubContext * > (current->second.get());
    }
    else {
        IfcGeometricRepresentationSubContext *ret = static_cast< IfcGeometricRepresentationSubContext * > (allocateIfcGeometricRepresentationSubContext(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *arg) {
    getAll().erase(arg->getKey());
    return m_IfcGeometricRepresentationSubContext_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcGeometricRepresentationSubContext(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcGeometricRepresentationSubContext *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcGeometricRepresentationSubContext(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcGeometricRepresentationSubContext_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcGeometricRepresentationSubContext > ExpressDataSet::createIfcGeometricRepresentationSubContext(bool isVolatile) {
    if (isVolatile) {
        return new IfcGeometricRepresentationSubContext(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcGeometricRepresentationSubContext * > (allocateIfcGeometricRepresentationSubContext(this, Step::Id_UNSET));
    }
}

IfcGeometricRepresentationSubContext *ExpressDataSet::cloneIfcGeometricRepresentationSubContext(ExpressDataSet *expressDataSet, const IfcGeometricRepresentationSubContext &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationSubContext *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcGeometricRepresentationSubContext(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcGeometricRepresentationSubContext_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcGeometricRepresentationSubContext *ExpressDataSet::cloneIfcGeometricRepresentationSubContext(const IfcGeometricRepresentationSubContext &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcGeometricRepresentationSubContext(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcGeometricRepresentationSubContext(this, obj, copyop);
    }
}

IfcGeometricSet *ExpressDataSet::getIfcGeometricSet(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcGeometricSet * > (current->second.get());
    }
    else {
        IfcGeometricSet *ret = static_cast< IfcGeometricSet * > (allocateIfcGeometricSet(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcGeometricSet(IfcGeometricSet *arg) {
    getAll().erase(arg->getKey());
    return m_IfcGeometricSet_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcGeometricSet(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcGeometricSet *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcGeometricSet(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcGeometricSet_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcGeometricSet > ExpressDataSet::createIfcGeometricSet(bool isVolatile) {
    if (isVolatile) {
        return new IfcGeometricSet(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcGeometricSet * > (allocateIfcGeometricSet(this, Step::Id_UNSET));
    }
}

IfcGeometricSet *ExpressDataSet::cloneIfcGeometricSet(ExpressDataSet *expressDataSet, const IfcGeometricSet &obj, const CopyOp &copyop) {
    IfcGeometricSet *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcGeometricSet(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcGeometricSet_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcGeometricSet *ExpressDataSet::cloneIfcGeometricSet(const IfcGeometricSet &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcGeometricSet(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcGeometricSet(this, obj, copyop);
    }
}

IfcGrid *ExpressDataSet::getIfcGrid(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcGrid * > (current->second.get());
    }
    else {
        IfcGrid *ret = static_cast< IfcGrid * > (allocateIfcGrid(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcGrid(IfcGrid *arg) {
    getAll().erase(arg->getKey());
    return m_IfcGrid_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcGrid(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcGrid *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcGrid(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcGrid_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcGrid > ExpressDataSet::createIfcGrid(bool isVolatile) {
    if (isVolatile) {
        return new IfcGrid(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcGrid * > (allocateIfcGrid(this, Step::Id_UNSET));
    }
}

IfcGrid *ExpressDataSet::cloneIfcGrid(ExpressDataSet *expressDataSet, const IfcGrid &obj, const CopyOp &copyop) {
    IfcGrid *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcGrid(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcGrid_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcGrid *ExpressDataSet::cloneIfcGrid(const IfcGrid &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcGrid(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcGrid(this, obj, copyop);
    }
}

IfcGridAxis *ExpressDataSet::getIfcGridAxis(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcGridAxis * > (current->second.get());
    }
    else {
        IfcGridAxis *ret = static_cast< IfcGridAxis * > (allocateIfcGridAxis(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcGridAxis(IfcGridAxis *arg) {
    getAll().erase(arg->getKey());
    return m_IfcGridAxis_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcGridAxis(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcGridAxis *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcGridAxis(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcGridAxis_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcGridAxis > ExpressDataSet::createIfcGridAxis(bool isVolatile) {
    if (isVolatile) {
        return new IfcGridAxis(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcGridAxis * > (allocateIfcGridAxis(this, Step::Id_UNSET));
    }
}

IfcGridAxis *ExpressDataSet::cloneIfcGridAxis(ExpressDataSet *expressDataSet, const IfcGridAxis &obj, const CopyOp &copyop) {
    IfcGridAxis *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcGridAxis(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcGridAxis_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcGridAxis *ExpressDataSet::cloneIfcGridAxis(const IfcGridAxis &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcGridAxis(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcGridAxis(this, obj, copyop);
    }
}

IfcGridPlacement *ExpressDataSet::getIfcGridPlacement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcGridPlacement * > (current->second.get());
    }
    else {
        IfcGridPlacement *ret = static_cast< IfcGridPlacement * > (allocateIfcGridPlacement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcGridPlacement(IfcGridPlacement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcGridPlacement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcGridPlacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcGridPlacement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcGridPlacement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcGridPlacement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcGridPlacement > ExpressDataSet::createIfcGridPlacement(bool isVolatile) {
    if (isVolatile) {
        return new IfcGridPlacement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcGridPlacement * > (allocateIfcGridPlacement(this, Step::Id_UNSET));
    }
}

IfcGridPlacement *ExpressDataSet::cloneIfcGridPlacement(ExpressDataSet *expressDataSet, const IfcGridPlacement &obj, const CopyOp &copyop) {
    IfcGridPlacement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcGridPlacement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcGridPlacement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcGridPlacement *ExpressDataSet::cloneIfcGridPlacement(const IfcGridPlacement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcGridPlacement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcGridPlacement(this, obj, copyop);
    }
}

IfcGroup *ExpressDataSet::getIfcGroup(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcGroup * > (current->second.get());
    }
    else {
        IfcGroup *ret = static_cast< IfcGroup * > (allocateIfcGroup(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcGroup(IfcGroup *arg) {
    getAll().erase(arg->getKey());
    return m_IfcGroup_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcGroup *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcGroup(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcGroup_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcGroup > ExpressDataSet::createIfcGroup(bool isVolatile) {
    if (isVolatile) {
        return new IfcGroup(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcGroup * > (allocateIfcGroup(this, Step::Id_UNSET));
    }
}

IfcGroup *ExpressDataSet::cloneIfcGroup(ExpressDataSet *expressDataSet, const IfcGroup &obj, const CopyOp &copyop) {
    IfcGroup *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcGroup(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcGroup_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcGroup *ExpressDataSet::cloneIfcGroup(const IfcGroup &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcGroup(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcGroup(this, obj, copyop);
    }
}

IfcHalfSpaceSolid *ExpressDataSet::getIfcHalfSpaceSolid(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcHalfSpaceSolid * > (current->second.get());
    }
    else {
        IfcHalfSpaceSolid *ret = static_cast< IfcHalfSpaceSolid * > (allocateIfcHalfSpaceSolid(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcHalfSpaceSolid(IfcHalfSpaceSolid *arg) {
    getAll().erase(arg->getKey());
    return m_IfcHalfSpaceSolid_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcHalfSpaceSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcHalfSpaceSolid *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcHalfSpaceSolid(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcHalfSpaceSolid_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcHalfSpaceSolid > ExpressDataSet::createIfcHalfSpaceSolid(bool isVolatile) {
    if (isVolatile) {
        return new IfcHalfSpaceSolid(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcHalfSpaceSolid * > (allocateIfcHalfSpaceSolid(this, Step::Id_UNSET));
    }
}

IfcHalfSpaceSolid *ExpressDataSet::cloneIfcHalfSpaceSolid(ExpressDataSet *expressDataSet, const IfcHalfSpaceSolid &obj, const CopyOp &copyop) {
    IfcHalfSpaceSolid *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcHalfSpaceSolid(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcHalfSpaceSolid_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcHalfSpaceSolid *ExpressDataSet::cloneIfcHalfSpaceSolid(const IfcHalfSpaceSolid &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcHalfSpaceSolid(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcHalfSpaceSolid(this, obj, copyop);
    }
}

IfcHeatExchangerType *ExpressDataSet::getIfcHeatExchangerType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcHeatExchangerType * > (current->second.get());
    }
    else {
        IfcHeatExchangerType *ret = static_cast< IfcHeatExchangerType * > (allocateIfcHeatExchangerType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcHeatExchangerType(IfcHeatExchangerType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcHeatExchangerType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcHeatExchangerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcHeatExchangerType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcHeatExchangerType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcHeatExchangerType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcHeatExchangerType > ExpressDataSet::createIfcHeatExchangerType(bool isVolatile) {
    if (isVolatile) {
        return new IfcHeatExchangerType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcHeatExchangerType * > (allocateIfcHeatExchangerType(this, Step::Id_UNSET));
    }
}

IfcHeatExchangerType *ExpressDataSet::cloneIfcHeatExchangerType(ExpressDataSet *expressDataSet, const IfcHeatExchangerType &obj, const CopyOp &copyop) {
    IfcHeatExchangerType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcHeatExchangerType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcHeatExchangerType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcHeatExchangerType *ExpressDataSet::cloneIfcHeatExchangerType(const IfcHeatExchangerType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcHeatExchangerType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcHeatExchangerType(this, obj, copyop);
    }
}

IfcHumidifierType *ExpressDataSet::getIfcHumidifierType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcHumidifierType * > (current->second.get());
    }
    else {
        IfcHumidifierType *ret = static_cast< IfcHumidifierType * > (allocateIfcHumidifierType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcHumidifierType(IfcHumidifierType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcHumidifierType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcHumidifierType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcHumidifierType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcHumidifierType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcHumidifierType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcHumidifierType > ExpressDataSet::createIfcHumidifierType(bool isVolatile) {
    if (isVolatile) {
        return new IfcHumidifierType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcHumidifierType * > (allocateIfcHumidifierType(this, Step::Id_UNSET));
    }
}

IfcHumidifierType *ExpressDataSet::cloneIfcHumidifierType(ExpressDataSet *expressDataSet, const IfcHumidifierType &obj, const CopyOp &copyop) {
    IfcHumidifierType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcHumidifierType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcHumidifierType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcHumidifierType *ExpressDataSet::cloneIfcHumidifierType(const IfcHumidifierType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcHumidifierType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcHumidifierType(this, obj, copyop);
    }
}

IfcHygroscopicMaterialProperties *ExpressDataSet::getIfcHygroscopicMaterialProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcHygroscopicMaterialProperties * > (current->second.get());
    }
    else {
        IfcHygroscopicMaterialProperties *ret = static_cast< IfcHygroscopicMaterialProperties * > (allocateIfcHygroscopicMaterialProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcHygroscopicMaterialProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcHygroscopicMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcHygroscopicMaterialProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcHygroscopicMaterialProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcHygroscopicMaterialProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcHygroscopicMaterialProperties > ExpressDataSet::createIfcHygroscopicMaterialProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcHygroscopicMaterialProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcHygroscopicMaterialProperties * > (allocateIfcHygroscopicMaterialProperties(this, Step::Id_UNSET));
    }
}

IfcHygroscopicMaterialProperties *ExpressDataSet::cloneIfcHygroscopicMaterialProperties(ExpressDataSet *expressDataSet, const IfcHygroscopicMaterialProperties &obj, const CopyOp &copyop) {
    IfcHygroscopicMaterialProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcHygroscopicMaterialProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcHygroscopicMaterialProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcHygroscopicMaterialProperties *ExpressDataSet::cloneIfcHygroscopicMaterialProperties(const IfcHygroscopicMaterialProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcHygroscopicMaterialProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcHygroscopicMaterialProperties(this, obj, copyop);
    }
}

IfcIShapeProfileDef *ExpressDataSet::getIfcIShapeProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcIShapeProfileDef * > (current->second.get());
    }
    else {
        IfcIShapeProfileDef *ret = static_cast< IfcIShapeProfileDef * > (allocateIfcIShapeProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcIShapeProfileDef(IfcIShapeProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcIShapeProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcIShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcIShapeProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcIShapeProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcIShapeProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcIShapeProfileDef > ExpressDataSet::createIfcIShapeProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcIShapeProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcIShapeProfileDef * > (allocateIfcIShapeProfileDef(this, Step::Id_UNSET));
    }
}

IfcIShapeProfileDef *ExpressDataSet::cloneIfcIShapeProfileDef(ExpressDataSet *expressDataSet, const IfcIShapeProfileDef &obj, const CopyOp &copyop) {
    IfcIShapeProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcIShapeProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcIShapeProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcIShapeProfileDef *ExpressDataSet::cloneIfcIShapeProfileDef(const IfcIShapeProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcIShapeProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcIShapeProfileDef(this, obj, copyop);
    }
}

IfcImageTexture *ExpressDataSet::getIfcImageTexture(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcImageTexture * > (current->second.get());
    }
    else {
        IfcImageTexture *ret = static_cast< IfcImageTexture * > (allocateIfcImageTexture(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcImageTexture(IfcImageTexture *arg) {
    getAll().erase(arg->getKey());
    return m_IfcImageTexture_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcImageTexture(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcImageTexture *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcImageTexture(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcImageTexture_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcImageTexture > ExpressDataSet::createIfcImageTexture(bool isVolatile) {
    if (isVolatile) {
        return new IfcImageTexture(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcImageTexture * > (allocateIfcImageTexture(this, Step::Id_UNSET));
    }
}

IfcImageTexture *ExpressDataSet::cloneIfcImageTexture(ExpressDataSet *expressDataSet, const IfcImageTexture &obj, const CopyOp &copyop) {
    IfcImageTexture *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcImageTexture(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcImageTexture_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcImageTexture *ExpressDataSet::cloneIfcImageTexture(const IfcImageTexture &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcImageTexture(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcImageTexture(this, obj, copyop);
    }
}

IfcInventory *ExpressDataSet::getIfcInventory(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcInventory * > (current->second.get());
    }
    else {
        IfcInventory *ret = static_cast< IfcInventory * > (allocateIfcInventory(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcInventory(IfcInventory *arg) {
    getAll().erase(arg->getKey());
    return m_IfcInventory_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcInventory(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcInventory *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcInventory(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcInventory_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcInventory > ExpressDataSet::createIfcInventory(bool isVolatile) {
    if (isVolatile) {
        return new IfcInventory(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcInventory * > (allocateIfcInventory(this, Step::Id_UNSET));
    }
}

IfcInventory *ExpressDataSet::cloneIfcInventory(ExpressDataSet *expressDataSet, const IfcInventory &obj, const CopyOp &copyop) {
    IfcInventory *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcInventory(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcInventory_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcInventory *ExpressDataSet::cloneIfcInventory(const IfcInventory &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcInventory(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcInventory(this, obj, copyop);
    }
}

IfcIrregularTimeSeries *ExpressDataSet::getIfcIrregularTimeSeries(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcIrregularTimeSeries * > (current->second.get());
    }
    else {
        IfcIrregularTimeSeries *ret = static_cast< IfcIrregularTimeSeries * > (allocateIfcIrregularTimeSeries(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcIrregularTimeSeries(IfcIrregularTimeSeries *arg) {
    getAll().erase(arg->getKey());
    return m_IfcIrregularTimeSeries_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcIrregularTimeSeries(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcIrregularTimeSeries *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcIrregularTimeSeries(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcIrregularTimeSeries_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcIrregularTimeSeries > ExpressDataSet::createIfcIrregularTimeSeries(bool isVolatile) {
    if (isVolatile) {
        return new IfcIrregularTimeSeries(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcIrregularTimeSeries * > (allocateIfcIrregularTimeSeries(this, Step::Id_UNSET));
    }
}

IfcIrregularTimeSeries *ExpressDataSet::cloneIfcIrregularTimeSeries(ExpressDataSet *expressDataSet, const IfcIrregularTimeSeries &obj, const CopyOp &copyop) {
    IfcIrregularTimeSeries *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcIrregularTimeSeries(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcIrregularTimeSeries_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcIrregularTimeSeries *ExpressDataSet::cloneIfcIrregularTimeSeries(const IfcIrregularTimeSeries &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcIrregularTimeSeries(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcIrregularTimeSeries(this, obj, copyop);
    }
}

IfcIrregularTimeSeriesValue *ExpressDataSet::getIfcIrregularTimeSeriesValue(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcIrregularTimeSeriesValue * > (current->second.get());
    }
    else {
        IfcIrregularTimeSeriesValue *ret = static_cast< IfcIrregularTimeSeriesValue * > (allocateIfcIrregularTimeSeriesValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *arg) {
    getAll().erase(arg->getKey());
    return m_IfcIrregularTimeSeriesValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcIrregularTimeSeriesValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcIrregularTimeSeriesValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcIrregularTimeSeriesValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcIrregularTimeSeriesValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcIrregularTimeSeriesValue > ExpressDataSet::createIfcIrregularTimeSeriesValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcIrregularTimeSeriesValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcIrregularTimeSeriesValue * > (allocateIfcIrregularTimeSeriesValue(this, Step::Id_UNSET));
    }
}

IfcIrregularTimeSeriesValue *ExpressDataSet::cloneIfcIrregularTimeSeriesValue(ExpressDataSet *expressDataSet, const IfcIrregularTimeSeriesValue &obj, const CopyOp &copyop) {
    IfcIrregularTimeSeriesValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcIrregularTimeSeriesValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcIrregularTimeSeriesValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcIrregularTimeSeriesValue *ExpressDataSet::cloneIfcIrregularTimeSeriesValue(const IfcIrregularTimeSeriesValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcIrregularTimeSeriesValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcIrregularTimeSeriesValue(this, obj, copyop);
    }
}

IfcJunctionBoxType *ExpressDataSet::getIfcJunctionBoxType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcJunctionBoxType * > (current->second.get());
    }
    else {
        IfcJunctionBoxType *ret = static_cast< IfcJunctionBoxType * > (allocateIfcJunctionBoxType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcJunctionBoxType(IfcJunctionBoxType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcJunctionBoxType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcJunctionBoxType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcJunctionBoxType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcJunctionBoxType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcJunctionBoxType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcJunctionBoxType > ExpressDataSet::createIfcJunctionBoxType(bool isVolatile) {
    if (isVolatile) {
        return new IfcJunctionBoxType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcJunctionBoxType * > (allocateIfcJunctionBoxType(this, Step::Id_UNSET));
    }
}

IfcJunctionBoxType *ExpressDataSet::cloneIfcJunctionBoxType(ExpressDataSet *expressDataSet, const IfcJunctionBoxType &obj, const CopyOp &copyop) {
    IfcJunctionBoxType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcJunctionBoxType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcJunctionBoxType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcJunctionBoxType *ExpressDataSet::cloneIfcJunctionBoxType(const IfcJunctionBoxType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcJunctionBoxType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcJunctionBoxType(this, obj, copyop);
    }
}

IfcLShapeProfileDef *ExpressDataSet::getIfcLShapeProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLShapeProfileDef * > (current->second.get());
    }
    else {
        IfcLShapeProfileDef *ret = static_cast< IfcLShapeProfileDef * > (allocateIfcLShapeProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLShapeProfileDef(IfcLShapeProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcLShapeProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLShapeProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLShapeProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLShapeProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLShapeProfileDef > ExpressDataSet::createIfcLShapeProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcLShapeProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLShapeProfileDef * > (allocateIfcLShapeProfileDef(this, Step::Id_UNSET));
    }
}

IfcLShapeProfileDef *ExpressDataSet::cloneIfcLShapeProfileDef(ExpressDataSet *expressDataSet, const IfcLShapeProfileDef &obj, const CopyOp &copyop) {
    IfcLShapeProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLShapeProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLShapeProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLShapeProfileDef *ExpressDataSet::cloneIfcLShapeProfileDef(const IfcLShapeProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLShapeProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLShapeProfileDef(this, obj, copyop);
    }
}

IfcLaborResource *ExpressDataSet::getIfcLaborResource(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLaborResource * > (current->second.get());
    }
    else {
        IfcLaborResource *ret = static_cast< IfcLaborResource * > (allocateIfcLaborResource(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLaborResource(IfcLaborResource *arg) {
    getAll().erase(arg->getKey());
    return m_IfcLaborResource_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLaborResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLaborResource *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLaborResource(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLaborResource_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLaborResource > ExpressDataSet::createIfcLaborResource(bool isVolatile) {
    if (isVolatile) {
        return new IfcLaborResource(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLaborResource * > (allocateIfcLaborResource(this, Step::Id_UNSET));
    }
}

IfcLaborResource *ExpressDataSet::cloneIfcLaborResource(ExpressDataSet *expressDataSet, const IfcLaborResource &obj, const CopyOp &copyop) {
    IfcLaborResource *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLaborResource(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLaborResource_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLaborResource *ExpressDataSet::cloneIfcLaborResource(const IfcLaborResource &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLaborResource(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLaborResource(this, obj, copyop);
    }
}

IfcLampType *ExpressDataSet::getIfcLampType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLampType * > (current->second.get());
    }
    else {
        IfcLampType *ret = static_cast< IfcLampType * > (allocateIfcLampType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLampType(IfcLampType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcLampType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLampType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLampType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLampType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLampType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLampType > ExpressDataSet::createIfcLampType(bool isVolatile) {
    if (isVolatile) {
        return new IfcLampType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLampType * > (allocateIfcLampType(this, Step::Id_UNSET));
    }
}

IfcLampType *ExpressDataSet::cloneIfcLampType(ExpressDataSet *expressDataSet, const IfcLampType &obj, const CopyOp &copyop) {
    IfcLampType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLampType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLampType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLampType *ExpressDataSet::cloneIfcLampType(const IfcLampType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLampType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLampType(this, obj, copyop);
    }
}

IfcLibraryInformation *ExpressDataSet::getIfcLibraryInformation(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLibraryInformation * > (current->second.get());
    }
    else {
        IfcLibraryInformation *ret = static_cast< IfcLibraryInformation * > (allocateIfcLibraryInformation(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLibraryInformation(IfcLibraryInformation *arg) {
    getAll().erase(arg->getKey());
    return m_IfcLibraryInformation_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLibraryInformation(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLibraryInformation *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLibraryInformation(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLibraryInformation_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLibraryInformation > ExpressDataSet::createIfcLibraryInformation(bool isVolatile) {
    if (isVolatile) {
        return new IfcLibraryInformation(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLibraryInformation * > (allocateIfcLibraryInformation(this, Step::Id_UNSET));
    }
}

IfcLibraryInformation *ExpressDataSet::cloneIfcLibraryInformation(ExpressDataSet *expressDataSet, const IfcLibraryInformation &obj, const CopyOp &copyop) {
    IfcLibraryInformation *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLibraryInformation(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLibraryInformation_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLibraryInformation *ExpressDataSet::cloneIfcLibraryInformation(const IfcLibraryInformation &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLibraryInformation(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLibraryInformation(this, obj, copyop);
    }
}

IfcLibraryReference *ExpressDataSet::getIfcLibraryReference(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLibraryReference * > (current->second.get());
    }
    else {
        IfcLibraryReference *ret = static_cast< IfcLibraryReference * > (allocateIfcLibraryReference(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLibraryReference(IfcLibraryReference *arg) {
    getAll().erase(arg->getKey());
    return m_IfcLibraryReference_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLibraryReference(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLibraryReference *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLibraryReference(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLibraryReference_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLibraryReference > ExpressDataSet::createIfcLibraryReference(bool isVolatile) {
    if (isVolatile) {
        return new IfcLibraryReference(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLibraryReference * > (allocateIfcLibraryReference(this, Step::Id_UNSET));
    }
}

IfcLibraryReference *ExpressDataSet::cloneIfcLibraryReference(ExpressDataSet *expressDataSet, const IfcLibraryReference &obj, const CopyOp &copyop) {
    IfcLibraryReference *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLibraryReference(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLibraryReference_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLibraryReference *ExpressDataSet::cloneIfcLibraryReference(const IfcLibraryReference &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLibraryReference(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLibraryReference(this, obj, copyop);
    }
}

IfcLightDistributionData *ExpressDataSet::getIfcLightDistributionData(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLightDistributionData * > (current->second.get());
    }
    else {
        IfcLightDistributionData *ret = static_cast< IfcLightDistributionData * > (allocateIfcLightDistributionData(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLightDistributionData(IfcLightDistributionData *arg) {
    getAll().erase(arg->getKey());
    return m_IfcLightDistributionData_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLightDistributionData(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLightDistributionData *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLightDistributionData(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLightDistributionData_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLightDistributionData > ExpressDataSet::createIfcLightDistributionData(bool isVolatile) {
    if (isVolatile) {
        return new IfcLightDistributionData(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLightDistributionData * > (allocateIfcLightDistributionData(this, Step::Id_UNSET));
    }
}

IfcLightDistributionData *ExpressDataSet::cloneIfcLightDistributionData(ExpressDataSet *expressDataSet, const IfcLightDistributionData &obj, const CopyOp &copyop) {
    IfcLightDistributionData *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLightDistributionData(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLightDistributionData_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLightDistributionData *ExpressDataSet::cloneIfcLightDistributionData(const IfcLightDistributionData &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLightDistributionData(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLightDistributionData(this, obj, copyop);
    }
}

IfcLightFixtureType *ExpressDataSet::getIfcLightFixtureType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcLightFixtureType * > (current->second.get());
    }
    else {
        IfcLightFixtureType *ret = static_cast< IfcLightFixtureType * > (allocateIfcLightFixtureType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcLightFixtureType(IfcLightFixtureType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcLightFixtureType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcLightFixtureType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcLightFixtureType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcLightFixtureType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcLightFixtureType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcLightFixtureType > ExpressDataSet::createIfcLightFixtureType(bool isVolatile) {
    if (isVolatile) {
        return new IfcLightFixtureType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcLightFixtureType * > (allocateIfcLightFixtureType(this, Step::Id_UNSET));
    }
}

IfcLightFixtureType *ExpressDataSet::cloneIfcLightFixtureType(ExpressDataSet *expressDataSet, const IfcLightFixtureType &obj, const CopyOp &copyop) {
    IfcLightFixtureType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcLightFixtureType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcLightFixtureType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcLightFixtureType *ExpressDataSet::cloneIfcLightFixtureType(const IfcLightFixtureType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcLightFixtureType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcLightFixtureType(this, obj, copyop);
    }
}

IfcLightIntensityDistribution *ExpressDataSet::getIfcLightIntensityDistribution(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
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
    getAll().erase(arg->getKey());
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
