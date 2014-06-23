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

IfcRoof *ExpressDataSet::getIfcRoof(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRoof * > (current->second.get());
    }
    else {
        IfcRoof *ret = static_cast< IfcRoof * > (allocateIfcRoof(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRoof(IfcRoof *arg) {
    getAll().erase(arg->getKey());
    return m_IfcRoof_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRoof(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRoof *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRoof(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRoof_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRoof > ExpressDataSet::createIfcRoof(bool isVolatile) {
    if (isVolatile) {
        return new IfcRoof(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRoof * > (allocateIfcRoof(this, Step::Id_UNSET));
    }
}

IfcRoof *ExpressDataSet::cloneIfcRoof(ExpressDataSet *expressDataSet, const IfcRoof &obj, const CopyOp &copyop) {
    IfcRoof *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRoof(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRoof_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRoof *ExpressDataSet::cloneIfcRoof(const IfcRoof &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRoof(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRoof(this, obj, copyop);
    }
}

IfcRoundedEdgeFeature *ExpressDataSet::getIfcRoundedEdgeFeature(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRoundedEdgeFeature * > (current->second.get());
    }
    else {
        IfcRoundedEdgeFeature *ret = static_cast< IfcRoundedEdgeFeature * > (allocateIfcRoundedEdgeFeature(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *arg) {
    getAll().erase(arg->getKey());
    return m_IfcRoundedEdgeFeature_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRoundedEdgeFeature(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRoundedEdgeFeature *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRoundedEdgeFeature(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRoundedEdgeFeature_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRoundedEdgeFeature > ExpressDataSet::createIfcRoundedEdgeFeature(bool isVolatile) {
    if (isVolatile) {
        return new IfcRoundedEdgeFeature(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRoundedEdgeFeature * > (allocateIfcRoundedEdgeFeature(this, Step::Id_UNSET));
    }
}

IfcRoundedEdgeFeature *ExpressDataSet::cloneIfcRoundedEdgeFeature(ExpressDataSet *expressDataSet, const IfcRoundedEdgeFeature &obj, const CopyOp &copyop) {
    IfcRoundedEdgeFeature *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRoundedEdgeFeature(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRoundedEdgeFeature_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRoundedEdgeFeature *ExpressDataSet::cloneIfcRoundedEdgeFeature(const IfcRoundedEdgeFeature &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRoundedEdgeFeature(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRoundedEdgeFeature(this, obj, copyop);
    }
}

IfcRoundedRectangleProfileDef *ExpressDataSet::getIfcRoundedRectangleProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcRoundedRectangleProfileDef * > (current->second.get());
    }
    else {
        IfcRoundedRectangleProfileDef *ret = static_cast< IfcRoundedRectangleProfileDef * > (allocateIfcRoundedRectangleProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcRoundedRectangleProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcRoundedRectangleProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcRoundedRectangleProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcRoundedRectangleProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcRoundedRectangleProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcRoundedRectangleProfileDef > ExpressDataSet::createIfcRoundedRectangleProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcRoundedRectangleProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcRoundedRectangleProfileDef * > (allocateIfcRoundedRectangleProfileDef(this, Step::Id_UNSET));
    }
}

IfcRoundedRectangleProfileDef *ExpressDataSet::cloneIfcRoundedRectangleProfileDef(ExpressDataSet *expressDataSet, const IfcRoundedRectangleProfileDef &obj, const CopyOp &copyop) {
    IfcRoundedRectangleProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcRoundedRectangleProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcRoundedRectangleProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcRoundedRectangleProfileDef *ExpressDataSet::cloneIfcRoundedRectangleProfileDef(const IfcRoundedRectangleProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcRoundedRectangleProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcRoundedRectangleProfileDef(this, obj, copyop);
    }
}

IfcSIUnit *ExpressDataSet::getIfcSIUnit(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSIUnit * > (current->second.get());
    }
    else {
        IfcSIUnit *ret = static_cast< IfcSIUnit * > (allocateIfcSIUnit(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSIUnit(IfcSIUnit *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSIUnit_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSIUnit(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSIUnit *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSIUnit(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSIUnit_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSIUnit > ExpressDataSet::createIfcSIUnit(bool isVolatile) {
    if (isVolatile) {
        return new IfcSIUnit(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSIUnit * > (allocateIfcSIUnit(this, Step::Id_UNSET));
    }
}

IfcSIUnit *ExpressDataSet::cloneIfcSIUnit(ExpressDataSet *expressDataSet, const IfcSIUnit &obj, const CopyOp &copyop) {
    IfcSIUnit *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSIUnit(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSIUnit_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSIUnit *ExpressDataSet::cloneIfcSIUnit(const IfcSIUnit &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSIUnit(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSIUnit(this, obj, copyop);
    }
}

IfcSanitaryTerminalType *ExpressDataSet::getIfcSanitaryTerminalType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSanitaryTerminalType * > (current->second.get());
    }
    else {
        IfcSanitaryTerminalType *ret = static_cast< IfcSanitaryTerminalType * > (allocateIfcSanitaryTerminalType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSanitaryTerminalType(IfcSanitaryTerminalType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSanitaryTerminalType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSanitaryTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSanitaryTerminalType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSanitaryTerminalType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSanitaryTerminalType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSanitaryTerminalType > ExpressDataSet::createIfcSanitaryTerminalType(bool isVolatile) {
    if (isVolatile) {
        return new IfcSanitaryTerminalType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSanitaryTerminalType * > (allocateIfcSanitaryTerminalType(this, Step::Id_UNSET));
    }
}

IfcSanitaryTerminalType *ExpressDataSet::cloneIfcSanitaryTerminalType(ExpressDataSet *expressDataSet, const IfcSanitaryTerminalType &obj, const CopyOp &copyop) {
    IfcSanitaryTerminalType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSanitaryTerminalType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSanitaryTerminalType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSanitaryTerminalType *ExpressDataSet::cloneIfcSanitaryTerminalType(const IfcSanitaryTerminalType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSanitaryTerminalType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSanitaryTerminalType(this, obj, copyop);
    }
}

IfcScheduleTimeControl *ExpressDataSet::getIfcScheduleTimeControl(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcScheduleTimeControl * > (current->second.get());
    }
    else {
        IfcScheduleTimeControl *ret = static_cast< IfcScheduleTimeControl * > (allocateIfcScheduleTimeControl(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcScheduleTimeControl(IfcScheduleTimeControl *arg) {
    getAll().erase(arg->getKey());
    return m_IfcScheduleTimeControl_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcScheduleTimeControl(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcScheduleTimeControl *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcScheduleTimeControl(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcScheduleTimeControl_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcScheduleTimeControl > ExpressDataSet::createIfcScheduleTimeControl(bool isVolatile) {
    if (isVolatile) {
        return new IfcScheduleTimeControl(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcScheduleTimeControl * > (allocateIfcScheduleTimeControl(this, Step::Id_UNSET));
    }
}

IfcScheduleTimeControl *ExpressDataSet::cloneIfcScheduleTimeControl(ExpressDataSet *expressDataSet, const IfcScheduleTimeControl &obj, const CopyOp &copyop) {
    IfcScheduleTimeControl *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcScheduleTimeControl(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcScheduleTimeControl_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcScheduleTimeControl *ExpressDataSet::cloneIfcScheduleTimeControl(const IfcScheduleTimeControl &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcScheduleTimeControl(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcScheduleTimeControl(this, obj, copyop);
    }
}

IfcSectionProperties *ExpressDataSet::getIfcSectionProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSectionProperties * > (current->second.get());
    }
    else {
        IfcSectionProperties *ret = static_cast< IfcSectionProperties * > (allocateIfcSectionProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSectionProperties(IfcSectionProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSectionProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSectionProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSectionProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSectionProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSectionProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSectionProperties > ExpressDataSet::createIfcSectionProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcSectionProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSectionProperties * > (allocateIfcSectionProperties(this, Step::Id_UNSET));
    }
}

IfcSectionProperties *ExpressDataSet::cloneIfcSectionProperties(ExpressDataSet *expressDataSet, const IfcSectionProperties &obj, const CopyOp &copyop) {
    IfcSectionProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSectionProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSectionProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSectionProperties *ExpressDataSet::cloneIfcSectionProperties(const IfcSectionProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSectionProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSectionProperties(this, obj, copyop);
    }
}

IfcSectionReinforcementProperties *ExpressDataSet::getIfcSectionReinforcementProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSectionReinforcementProperties * > (current->second.get());
    }
    else {
        IfcSectionReinforcementProperties *ret = static_cast< IfcSectionReinforcementProperties * > (allocateIfcSectionReinforcementProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSectionReinforcementProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSectionReinforcementProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSectionReinforcementProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSectionReinforcementProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSectionReinforcementProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSectionReinforcementProperties > ExpressDataSet::createIfcSectionReinforcementProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcSectionReinforcementProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSectionReinforcementProperties * > (allocateIfcSectionReinforcementProperties(this, Step::Id_UNSET));
    }
}

IfcSectionReinforcementProperties *ExpressDataSet::cloneIfcSectionReinforcementProperties(ExpressDataSet *expressDataSet, const IfcSectionReinforcementProperties &obj, const CopyOp &copyop) {
    IfcSectionReinforcementProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSectionReinforcementProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSectionReinforcementProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSectionReinforcementProperties *ExpressDataSet::cloneIfcSectionReinforcementProperties(const IfcSectionReinforcementProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSectionReinforcementProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSectionReinforcementProperties(this, obj, copyop);
    }
}

IfcSectionedSpine *ExpressDataSet::getIfcSectionedSpine(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSectionedSpine * > (current->second.get());
    }
    else {
        IfcSectionedSpine *ret = static_cast< IfcSectionedSpine * > (allocateIfcSectionedSpine(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSectionedSpine(IfcSectionedSpine *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSectionedSpine_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSectionedSpine(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSectionedSpine *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSectionedSpine(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSectionedSpine_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSectionedSpine > ExpressDataSet::createIfcSectionedSpine(bool isVolatile) {
    if (isVolatile) {
        return new IfcSectionedSpine(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSectionedSpine * > (allocateIfcSectionedSpine(this, Step::Id_UNSET));
    }
}

IfcSectionedSpine *ExpressDataSet::cloneIfcSectionedSpine(ExpressDataSet *expressDataSet, const IfcSectionedSpine &obj, const CopyOp &copyop) {
    IfcSectionedSpine *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSectionedSpine(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSectionedSpine_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSectionedSpine *ExpressDataSet::cloneIfcSectionedSpine(const IfcSectionedSpine &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSectionedSpine(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSectionedSpine(this, obj, copyop);
    }
}

IfcSensorType *ExpressDataSet::getIfcSensorType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSensorType * > (current->second.get());
    }
    else {
        IfcSensorType *ret = static_cast< IfcSensorType * > (allocateIfcSensorType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSensorType(IfcSensorType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSensorType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSensorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSensorType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSensorType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSensorType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSensorType > ExpressDataSet::createIfcSensorType(bool isVolatile) {
    if (isVolatile) {
        return new IfcSensorType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSensorType * > (allocateIfcSensorType(this, Step::Id_UNSET));
    }
}

IfcSensorType *ExpressDataSet::cloneIfcSensorType(ExpressDataSet *expressDataSet, const IfcSensorType &obj, const CopyOp &copyop) {
    IfcSensorType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSensorType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSensorType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSensorType *ExpressDataSet::cloneIfcSensorType(const IfcSensorType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSensorType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSensorType(this, obj, copyop);
    }
}

IfcServiceLife *ExpressDataSet::getIfcServiceLife(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcServiceLife * > (current->second.get());
    }
    else {
        IfcServiceLife *ret = static_cast< IfcServiceLife * > (allocateIfcServiceLife(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcServiceLife(IfcServiceLife *arg) {
    getAll().erase(arg->getKey());
    return m_IfcServiceLife_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcServiceLife(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcServiceLife *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcServiceLife(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcServiceLife_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcServiceLife > ExpressDataSet::createIfcServiceLife(bool isVolatile) {
    if (isVolatile) {
        return new IfcServiceLife(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcServiceLife * > (allocateIfcServiceLife(this, Step::Id_UNSET));
    }
}

IfcServiceLife *ExpressDataSet::cloneIfcServiceLife(ExpressDataSet *expressDataSet, const IfcServiceLife &obj, const CopyOp &copyop) {
    IfcServiceLife *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcServiceLife(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcServiceLife_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcServiceLife *ExpressDataSet::cloneIfcServiceLife(const IfcServiceLife &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcServiceLife(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcServiceLife(this, obj, copyop);
    }
}

IfcServiceLifeFactor *ExpressDataSet::getIfcServiceLifeFactor(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcServiceLifeFactor * > (current->second.get());
    }
    else {
        IfcServiceLifeFactor *ret = static_cast< IfcServiceLifeFactor * > (allocateIfcServiceLifeFactor(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcServiceLifeFactor(IfcServiceLifeFactor *arg) {
    getAll().erase(arg->getKey());
    return m_IfcServiceLifeFactor_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcServiceLifeFactor(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcServiceLifeFactor *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcServiceLifeFactor(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcServiceLifeFactor_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcServiceLifeFactor > ExpressDataSet::createIfcServiceLifeFactor(bool isVolatile) {
    if (isVolatile) {
        return new IfcServiceLifeFactor(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcServiceLifeFactor * > (allocateIfcServiceLifeFactor(this, Step::Id_UNSET));
    }
}

IfcServiceLifeFactor *ExpressDataSet::cloneIfcServiceLifeFactor(ExpressDataSet *expressDataSet, const IfcServiceLifeFactor &obj, const CopyOp &copyop) {
    IfcServiceLifeFactor *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcServiceLifeFactor(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcServiceLifeFactor_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcServiceLifeFactor *ExpressDataSet::cloneIfcServiceLifeFactor(const IfcServiceLifeFactor &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcServiceLifeFactor(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcServiceLifeFactor(this, obj, copyop);
    }
}

IfcShapeAspect *ExpressDataSet::getIfcShapeAspect(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcShapeAspect * > (current->second.get());
    }
    else {
        IfcShapeAspect *ret = static_cast< IfcShapeAspect * > (allocateIfcShapeAspect(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcShapeAspect(IfcShapeAspect *arg) {
    getAll().erase(arg->getKey());
    return m_IfcShapeAspect_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcShapeAspect(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcShapeAspect *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcShapeAspect(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcShapeAspect_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcShapeAspect > ExpressDataSet::createIfcShapeAspect(bool isVolatile) {
    if (isVolatile) {
        return new IfcShapeAspect(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcShapeAspect * > (allocateIfcShapeAspect(this, Step::Id_UNSET));
    }
}

IfcShapeAspect *ExpressDataSet::cloneIfcShapeAspect(ExpressDataSet *expressDataSet, const IfcShapeAspect &obj, const CopyOp &copyop) {
    IfcShapeAspect *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcShapeAspect(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcShapeAspect_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcShapeAspect *ExpressDataSet::cloneIfcShapeAspect(const IfcShapeAspect &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcShapeAspect(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcShapeAspect(this, obj, copyop);
    }
}

IfcShapeRepresentation *ExpressDataSet::getIfcShapeRepresentation(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcShapeRepresentation * > (current->second.get());
    }
    else {
        IfcShapeRepresentation *ret = static_cast< IfcShapeRepresentation * > (allocateIfcShapeRepresentation(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcShapeRepresentation(IfcShapeRepresentation *arg) {
    getAll().erase(arg->getKey());
    return m_IfcShapeRepresentation_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcShapeRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcShapeRepresentation *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcShapeRepresentation(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcShapeRepresentation_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcShapeRepresentation > ExpressDataSet::createIfcShapeRepresentation(bool isVolatile) {
    if (isVolatile) {
        return new IfcShapeRepresentation(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcShapeRepresentation * > (allocateIfcShapeRepresentation(this, Step::Id_UNSET));
    }
}

IfcShapeRepresentation *ExpressDataSet::cloneIfcShapeRepresentation(ExpressDataSet *expressDataSet, const IfcShapeRepresentation &obj, const CopyOp &copyop) {
    IfcShapeRepresentation *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcShapeRepresentation(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcShapeRepresentation_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcShapeRepresentation *ExpressDataSet::cloneIfcShapeRepresentation(const IfcShapeRepresentation &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcShapeRepresentation(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcShapeRepresentation(this, obj, copyop);
    }
}

IfcShellBasedSurfaceModel *ExpressDataSet::getIfcShellBasedSurfaceModel(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcShellBasedSurfaceModel * > (current->second.get());
    }
    else {
        IfcShellBasedSurfaceModel *ret = static_cast< IfcShellBasedSurfaceModel * > (allocateIfcShellBasedSurfaceModel(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *arg) {
    getAll().erase(arg->getKey());
    return m_IfcShellBasedSurfaceModel_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcShellBasedSurfaceModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcShellBasedSurfaceModel *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcShellBasedSurfaceModel(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcShellBasedSurfaceModel_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcShellBasedSurfaceModel > ExpressDataSet::createIfcShellBasedSurfaceModel(bool isVolatile) {
    if (isVolatile) {
        return new IfcShellBasedSurfaceModel(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcShellBasedSurfaceModel * > (allocateIfcShellBasedSurfaceModel(this, Step::Id_UNSET));
    }
}

IfcShellBasedSurfaceModel *ExpressDataSet::cloneIfcShellBasedSurfaceModel(ExpressDataSet *expressDataSet, const IfcShellBasedSurfaceModel &obj, const CopyOp &copyop) {
    IfcShellBasedSurfaceModel *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcShellBasedSurfaceModel(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcShellBasedSurfaceModel_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcShellBasedSurfaceModel *ExpressDataSet::cloneIfcShellBasedSurfaceModel(const IfcShellBasedSurfaceModel &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcShellBasedSurfaceModel(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcShellBasedSurfaceModel(this, obj, copyop);
    }
}

IfcSite *ExpressDataSet::getIfcSite(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSite * > (current->second.get());
    }
    else {
        IfcSite *ret = static_cast< IfcSite * > (allocateIfcSite(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSite(IfcSite *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSite_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSite(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSite *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSite(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSite_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSite > ExpressDataSet::createIfcSite(bool isVolatile) {
    if (isVolatile) {
        return new IfcSite(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSite * > (allocateIfcSite(this, Step::Id_UNSET));
    }
}

IfcSite *ExpressDataSet::cloneIfcSite(ExpressDataSet *expressDataSet, const IfcSite &obj, const CopyOp &copyop) {
    IfcSite *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSite(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSite_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSite *ExpressDataSet::cloneIfcSite(const IfcSite &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSite(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSite(this, obj, copyop);
    }
}

IfcSlab *ExpressDataSet::getIfcSlab(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSlab * > (current->second.get());
    }
    else {
        IfcSlab *ret = static_cast< IfcSlab * > (allocateIfcSlab(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSlab(IfcSlab *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSlab_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSlab(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSlab *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSlab(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSlab_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSlab > ExpressDataSet::createIfcSlab(bool isVolatile) {
    if (isVolatile) {
        return new IfcSlab(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSlab * > (allocateIfcSlab(this, Step::Id_UNSET));
    }
}

IfcSlab *ExpressDataSet::cloneIfcSlab(ExpressDataSet *expressDataSet, const IfcSlab &obj, const CopyOp &copyop) {
    IfcSlab *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSlab(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSlab_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSlab *ExpressDataSet::cloneIfcSlab(const IfcSlab &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSlab(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSlab(this, obj, copyop);
    }
}

IfcSlabType *ExpressDataSet::getIfcSlabType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSlabType * > (current->second.get());
    }
    else {
        IfcSlabType *ret = static_cast< IfcSlabType * > (allocateIfcSlabType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSlabType(IfcSlabType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSlabType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSlabType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSlabType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSlabType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSlabType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSlabType > ExpressDataSet::createIfcSlabType(bool isVolatile) {
    if (isVolatile) {
        return new IfcSlabType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSlabType * > (allocateIfcSlabType(this, Step::Id_UNSET));
    }
}

IfcSlabType *ExpressDataSet::cloneIfcSlabType(ExpressDataSet *expressDataSet, const IfcSlabType &obj, const CopyOp &copyop) {
    IfcSlabType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSlabType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSlabType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSlabType *ExpressDataSet::cloneIfcSlabType(const IfcSlabType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSlabType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSlabType(this, obj, copyop);
    }
}

IfcSlippageConnectionCondition *ExpressDataSet::getIfcSlippageConnectionCondition(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSlippageConnectionCondition * > (current->second.get());
    }
    else {
        IfcSlippageConnectionCondition *ret = static_cast< IfcSlippageConnectionCondition * > (allocateIfcSlippageConnectionCondition(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSlippageConnectionCondition_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSlippageConnectionCondition(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSlippageConnectionCondition *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSlippageConnectionCondition(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSlippageConnectionCondition_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSlippageConnectionCondition > ExpressDataSet::createIfcSlippageConnectionCondition(bool isVolatile) {
    if (isVolatile) {
        return new IfcSlippageConnectionCondition(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSlippageConnectionCondition * > (allocateIfcSlippageConnectionCondition(this, Step::Id_UNSET));
    }
}

IfcSlippageConnectionCondition *ExpressDataSet::cloneIfcSlippageConnectionCondition(ExpressDataSet *expressDataSet, const IfcSlippageConnectionCondition &obj, const CopyOp &copyop) {
    IfcSlippageConnectionCondition *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSlippageConnectionCondition(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSlippageConnectionCondition_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSlippageConnectionCondition *ExpressDataSet::cloneIfcSlippageConnectionCondition(const IfcSlippageConnectionCondition &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSlippageConnectionCondition(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSlippageConnectionCondition(this, obj, copyop);
    }
}

IfcSoundProperties *ExpressDataSet::getIfcSoundProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSoundProperties * > (current->second.get());
    }
    else {
        IfcSoundProperties *ret = static_cast< IfcSoundProperties * > (allocateIfcSoundProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSoundProperties(IfcSoundProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSoundProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSoundProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSoundProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSoundProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSoundProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSoundProperties > ExpressDataSet::createIfcSoundProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcSoundProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSoundProperties * > (allocateIfcSoundProperties(this, Step::Id_UNSET));
    }
}

IfcSoundProperties *ExpressDataSet::cloneIfcSoundProperties(ExpressDataSet *expressDataSet, const IfcSoundProperties &obj, const CopyOp &copyop) {
    IfcSoundProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSoundProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSoundProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSoundProperties *ExpressDataSet::cloneIfcSoundProperties(const IfcSoundProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSoundProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSoundProperties(this, obj, copyop);
    }
}

IfcSoundValue *ExpressDataSet::getIfcSoundValue(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSoundValue * > (current->second.get());
    }
    else {
        IfcSoundValue *ret = static_cast< IfcSoundValue * > (allocateIfcSoundValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSoundValue(IfcSoundValue *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSoundValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSoundValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSoundValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSoundValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSoundValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSoundValue > ExpressDataSet::createIfcSoundValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcSoundValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSoundValue * > (allocateIfcSoundValue(this, Step::Id_UNSET));
    }
}

IfcSoundValue *ExpressDataSet::cloneIfcSoundValue(ExpressDataSet *expressDataSet, const IfcSoundValue &obj, const CopyOp &copyop) {
    IfcSoundValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSoundValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSoundValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSoundValue *ExpressDataSet::cloneIfcSoundValue(const IfcSoundValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSoundValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSoundValue(this, obj, copyop);
    }
}

IfcSpace *ExpressDataSet::getIfcSpace(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSpace * > (current->second.get());
    }
    else {
        IfcSpace *ret = static_cast< IfcSpace * > (allocateIfcSpace(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSpace(IfcSpace *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSpace_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSpace(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSpace *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSpace(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSpace_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSpace > ExpressDataSet::createIfcSpace(bool isVolatile) {
    if (isVolatile) {
        return new IfcSpace(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSpace * > (allocateIfcSpace(this, Step::Id_UNSET));
    }
}

IfcSpace *ExpressDataSet::cloneIfcSpace(ExpressDataSet *expressDataSet, const IfcSpace &obj, const CopyOp &copyop) {
    IfcSpace *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSpace(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSpace_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSpace *ExpressDataSet::cloneIfcSpace(const IfcSpace &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSpace(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSpace(this, obj, copyop);
    }
}

IfcSpaceHeaterType *ExpressDataSet::getIfcSpaceHeaterType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSpaceHeaterType * > (current->second.get());
    }
    else {
        IfcSpaceHeaterType *ret = static_cast< IfcSpaceHeaterType * > (allocateIfcSpaceHeaterType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSpaceHeaterType(IfcSpaceHeaterType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSpaceHeaterType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSpaceHeaterType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSpaceHeaterType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSpaceHeaterType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSpaceHeaterType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSpaceHeaterType > ExpressDataSet::createIfcSpaceHeaterType(bool isVolatile) {
    if (isVolatile) {
        return new IfcSpaceHeaterType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSpaceHeaterType * > (allocateIfcSpaceHeaterType(this, Step::Id_UNSET));
    }
}

IfcSpaceHeaterType *ExpressDataSet::cloneIfcSpaceHeaterType(ExpressDataSet *expressDataSet, const IfcSpaceHeaterType &obj, const CopyOp &copyop) {
    IfcSpaceHeaterType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSpaceHeaterType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSpaceHeaterType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSpaceHeaterType *ExpressDataSet::cloneIfcSpaceHeaterType(const IfcSpaceHeaterType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSpaceHeaterType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSpaceHeaterType(this, obj, copyop);
    }
}

IfcSpaceProgram *ExpressDataSet::getIfcSpaceProgram(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSpaceProgram * > (current->second.get());
    }
    else {
        IfcSpaceProgram *ret = static_cast< IfcSpaceProgram * > (allocateIfcSpaceProgram(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSpaceProgram(IfcSpaceProgram *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSpaceProgram_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSpaceProgram(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSpaceProgram *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSpaceProgram(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSpaceProgram_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSpaceProgram > ExpressDataSet::createIfcSpaceProgram(bool isVolatile) {
    if (isVolatile) {
        return new IfcSpaceProgram(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSpaceProgram * > (allocateIfcSpaceProgram(this, Step::Id_UNSET));
    }
}

IfcSpaceProgram *ExpressDataSet::cloneIfcSpaceProgram(ExpressDataSet *expressDataSet, const IfcSpaceProgram &obj, const CopyOp &copyop) {
    IfcSpaceProgram *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSpaceProgram(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSpaceProgram_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSpaceProgram *ExpressDataSet::cloneIfcSpaceProgram(const IfcSpaceProgram &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSpaceProgram(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSpaceProgram(this, obj, copyop);
    }
}

IfcSpaceThermalLoadProperties *ExpressDataSet::getIfcSpaceThermalLoadProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSpaceThermalLoadProperties * > (current->second.get());
    }
    else {
        IfcSpaceThermalLoadProperties *ret = static_cast< IfcSpaceThermalLoadProperties * > (allocateIfcSpaceThermalLoadProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSpaceThermalLoadProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSpaceThermalLoadProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSpaceThermalLoadProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSpaceThermalLoadProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSpaceThermalLoadProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSpaceThermalLoadProperties > ExpressDataSet::createIfcSpaceThermalLoadProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcSpaceThermalLoadProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSpaceThermalLoadProperties * > (allocateIfcSpaceThermalLoadProperties(this, Step::Id_UNSET));
    }
}

IfcSpaceThermalLoadProperties *ExpressDataSet::cloneIfcSpaceThermalLoadProperties(ExpressDataSet *expressDataSet, const IfcSpaceThermalLoadProperties &obj, const CopyOp &copyop) {
    IfcSpaceThermalLoadProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSpaceThermalLoadProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSpaceThermalLoadProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSpaceThermalLoadProperties *ExpressDataSet::cloneIfcSpaceThermalLoadProperties(const IfcSpaceThermalLoadProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSpaceThermalLoadProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSpaceThermalLoadProperties(this, obj, copyop);
    }
}

IfcSpaceType *ExpressDataSet::getIfcSpaceType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSpaceType * > (current->second.get());
    }
    else {
        IfcSpaceType *ret = static_cast< IfcSpaceType * > (allocateIfcSpaceType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSpaceType(IfcSpaceType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSpaceType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSpaceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSpaceType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSpaceType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSpaceType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSpaceType > ExpressDataSet::createIfcSpaceType(bool isVolatile) {
    if (isVolatile) {
        return new IfcSpaceType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSpaceType * > (allocateIfcSpaceType(this, Step::Id_UNSET));
    }
}

IfcSpaceType *ExpressDataSet::cloneIfcSpaceType(ExpressDataSet *expressDataSet, const IfcSpaceType &obj, const CopyOp &copyop) {
    IfcSpaceType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSpaceType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSpaceType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSpaceType *ExpressDataSet::cloneIfcSpaceType(const IfcSpaceType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSpaceType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSpaceType(this, obj, copyop);
    }
}

IfcSphere *ExpressDataSet::getIfcSphere(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSphere * > (current->second.get());
    }
    else {
        IfcSphere *ret = static_cast< IfcSphere * > (allocateIfcSphere(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSphere(IfcSphere *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSphere_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSphere(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSphere *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSphere(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSphere_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSphere > ExpressDataSet::createIfcSphere(bool isVolatile) {
    if (isVolatile) {
        return new IfcSphere(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSphere * > (allocateIfcSphere(this, Step::Id_UNSET));
    }
}

IfcSphere *ExpressDataSet::cloneIfcSphere(ExpressDataSet *expressDataSet, const IfcSphere &obj, const CopyOp &copyop) {
    IfcSphere *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSphere(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSphere_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSphere *ExpressDataSet::cloneIfcSphere(const IfcSphere &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSphere(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSphere(this, obj, copyop);
    }
}

IfcStackTerminalType *ExpressDataSet::getIfcStackTerminalType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStackTerminalType * > (current->second.get());
    }
    else {
        IfcStackTerminalType *ret = static_cast< IfcStackTerminalType * > (allocateIfcStackTerminalType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStackTerminalType(IfcStackTerminalType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStackTerminalType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStackTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStackTerminalType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStackTerminalType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStackTerminalType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStackTerminalType > ExpressDataSet::createIfcStackTerminalType(bool isVolatile) {
    if (isVolatile) {
        return new IfcStackTerminalType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStackTerminalType * > (allocateIfcStackTerminalType(this, Step::Id_UNSET));
    }
}

IfcStackTerminalType *ExpressDataSet::cloneIfcStackTerminalType(ExpressDataSet *expressDataSet, const IfcStackTerminalType &obj, const CopyOp &copyop) {
    IfcStackTerminalType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStackTerminalType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStackTerminalType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStackTerminalType *ExpressDataSet::cloneIfcStackTerminalType(const IfcStackTerminalType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStackTerminalType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStackTerminalType(this, obj, copyop);
    }
}

IfcStair *ExpressDataSet::getIfcStair(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStair * > (current->second.get());
    }
    else {
        IfcStair *ret = static_cast< IfcStair * > (allocateIfcStair(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStair(IfcStair *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStair_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStair(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStair *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStair(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStair_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStair > ExpressDataSet::createIfcStair(bool isVolatile) {
    if (isVolatile) {
        return new IfcStair(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStair * > (allocateIfcStair(this, Step::Id_UNSET));
    }
}

IfcStair *ExpressDataSet::cloneIfcStair(ExpressDataSet *expressDataSet, const IfcStair &obj, const CopyOp &copyop) {
    IfcStair *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStair(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStair_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStair *ExpressDataSet::cloneIfcStair(const IfcStair &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStair(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStair(this, obj, copyop);
    }
}

IfcStairFlight *ExpressDataSet::getIfcStairFlight(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStairFlight * > (current->second.get());
    }
    else {
        IfcStairFlight *ret = static_cast< IfcStairFlight * > (allocateIfcStairFlight(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStairFlight(IfcStairFlight *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStairFlight_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStairFlight(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStairFlight *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStairFlight(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStairFlight_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStairFlight > ExpressDataSet::createIfcStairFlight(bool isVolatile) {
    if (isVolatile) {
        return new IfcStairFlight(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStairFlight * > (allocateIfcStairFlight(this, Step::Id_UNSET));
    }
}

IfcStairFlight *ExpressDataSet::cloneIfcStairFlight(ExpressDataSet *expressDataSet, const IfcStairFlight &obj, const CopyOp &copyop) {
    IfcStairFlight *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStairFlight(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStairFlight_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStairFlight *ExpressDataSet::cloneIfcStairFlight(const IfcStairFlight &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStairFlight(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStairFlight(this, obj, copyop);
    }
}

IfcStairFlightType *ExpressDataSet::getIfcStairFlightType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStairFlightType * > (current->second.get());
    }
    else {
        IfcStairFlightType *ret = static_cast< IfcStairFlightType * > (allocateIfcStairFlightType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStairFlightType(IfcStairFlightType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStairFlightType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStairFlightType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStairFlightType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStairFlightType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStairFlightType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStairFlightType > ExpressDataSet::createIfcStairFlightType(bool isVolatile) {
    if (isVolatile) {
        return new IfcStairFlightType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStairFlightType * > (allocateIfcStairFlightType(this, Step::Id_UNSET));
    }
}

IfcStairFlightType *ExpressDataSet::cloneIfcStairFlightType(ExpressDataSet *expressDataSet, const IfcStairFlightType &obj, const CopyOp &copyop) {
    IfcStairFlightType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStairFlightType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStairFlightType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStairFlightType *ExpressDataSet::cloneIfcStairFlightType(const IfcStairFlightType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStairFlightType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStairFlightType(this, obj, copyop);
    }
}

IfcStructuralAnalysisModel *ExpressDataSet::getIfcStructuralAnalysisModel(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralAnalysisModel * > (current->second.get());
    }
    else {
        IfcStructuralAnalysisModel *ret = static_cast< IfcStructuralAnalysisModel * > (allocateIfcStructuralAnalysisModel(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralAnalysisModel_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralAnalysisModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralAnalysisModel *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralAnalysisModel(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralAnalysisModel_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralAnalysisModel > ExpressDataSet::createIfcStructuralAnalysisModel(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralAnalysisModel(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralAnalysisModel * > (allocateIfcStructuralAnalysisModel(this, Step::Id_UNSET));
    }
}

IfcStructuralAnalysisModel *ExpressDataSet::cloneIfcStructuralAnalysisModel(ExpressDataSet *expressDataSet, const IfcStructuralAnalysisModel &obj, const CopyOp &copyop) {
    IfcStructuralAnalysisModel *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralAnalysisModel(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralAnalysisModel_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralAnalysisModel *ExpressDataSet::cloneIfcStructuralAnalysisModel(const IfcStructuralAnalysisModel &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralAnalysisModel(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralAnalysisModel(this, obj, copyop);
    }
}

IfcStructuralCurveConnection *ExpressDataSet::getIfcStructuralCurveConnection(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralCurveConnection * > (current->second.get());
    }
    else {
        IfcStructuralCurveConnection *ret = static_cast< IfcStructuralCurveConnection * > (allocateIfcStructuralCurveConnection(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralCurveConnection(IfcStructuralCurveConnection *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralCurveConnection_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralCurveConnection(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralCurveConnection *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralCurveConnection(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralCurveConnection_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralCurveConnection > ExpressDataSet::createIfcStructuralCurveConnection(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralCurveConnection(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralCurveConnection * > (allocateIfcStructuralCurveConnection(this, Step::Id_UNSET));
    }
}

IfcStructuralCurveConnection *ExpressDataSet::cloneIfcStructuralCurveConnection(ExpressDataSet *expressDataSet, const IfcStructuralCurveConnection &obj, const CopyOp &copyop) {
    IfcStructuralCurveConnection *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralCurveConnection(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralCurveConnection_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralCurveConnection *ExpressDataSet::cloneIfcStructuralCurveConnection(const IfcStructuralCurveConnection &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralCurveConnection(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralCurveConnection(this, obj, copyop);
    }
}

IfcStructuralCurveMember *ExpressDataSet::getIfcStructuralCurveMember(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralCurveMember * > (current->second.get());
    }
    else {
        IfcStructuralCurveMember *ret = static_cast< IfcStructuralCurveMember * > (allocateIfcStructuralCurveMember(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralCurveMember(IfcStructuralCurveMember *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralCurveMember_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralCurveMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralCurveMember *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralCurveMember(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralCurveMember_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralCurveMember > ExpressDataSet::createIfcStructuralCurveMember(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralCurveMember(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralCurveMember * > (allocateIfcStructuralCurveMember(this, Step::Id_UNSET));
    }
}

IfcStructuralCurveMember *ExpressDataSet::cloneIfcStructuralCurveMember(ExpressDataSet *expressDataSet, const IfcStructuralCurveMember &obj, const CopyOp &copyop) {
    IfcStructuralCurveMember *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralCurveMember(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralCurveMember_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralCurveMember *ExpressDataSet::cloneIfcStructuralCurveMember(const IfcStructuralCurveMember &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralCurveMember(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralCurveMember(this, obj, copyop);
    }
}

IfcStructuralCurveMemberVarying *ExpressDataSet::getIfcStructuralCurveMemberVarying(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralCurveMemberVarying * > (current->second.get());
    }
    else {
        IfcStructuralCurveMemberVarying *ret = static_cast< IfcStructuralCurveMemberVarying * > (allocateIfcStructuralCurveMemberVarying(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralCurveMemberVarying_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralCurveMemberVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralCurveMemberVarying *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralCurveMemberVarying(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralCurveMemberVarying_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralCurveMemberVarying > ExpressDataSet::createIfcStructuralCurveMemberVarying(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralCurveMemberVarying(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralCurveMemberVarying * > (allocateIfcStructuralCurveMemberVarying(this, Step::Id_UNSET));
    }
}

IfcStructuralCurveMemberVarying *ExpressDataSet::cloneIfcStructuralCurveMemberVarying(ExpressDataSet *expressDataSet, const IfcStructuralCurveMemberVarying &obj, const CopyOp &copyop) {
    IfcStructuralCurveMemberVarying *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralCurveMemberVarying(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralCurveMemberVarying_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralCurveMemberVarying *ExpressDataSet::cloneIfcStructuralCurveMemberVarying(const IfcStructuralCurveMemberVarying &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralCurveMemberVarying(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralCurveMemberVarying(this, obj, copyop);
    }
}

IfcStructuralLinearAction *ExpressDataSet::getIfcStructuralLinearAction(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralLinearAction * > (current->second.get());
    }
    else {
        IfcStructuralLinearAction *ret = static_cast< IfcStructuralLinearAction * > (allocateIfcStructuralLinearAction(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralLinearAction(IfcStructuralLinearAction *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralLinearAction_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralLinearAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralLinearAction *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralLinearAction(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralLinearAction_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralLinearAction > ExpressDataSet::createIfcStructuralLinearAction(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralLinearAction(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralLinearAction * > (allocateIfcStructuralLinearAction(this, Step::Id_UNSET));
    }
}

IfcStructuralLinearAction *ExpressDataSet::cloneIfcStructuralLinearAction(ExpressDataSet *expressDataSet, const IfcStructuralLinearAction &obj, const CopyOp &copyop) {
    IfcStructuralLinearAction *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralLinearAction(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralLinearAction_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralLinearAction *ExpressDataSet::cloneIfcStructuralLinearAction(const IfcStructuralLinearAction &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralLinearAction(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralLinearAction(this, obj, copyop);
    }
}

IfcStructuralLinearActionVarying *ExpressDataSet::getIfcStructuralLinearActionVarying(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralLinearActionVarying * > (current->second.get());
    }
    else {
        IfcStructuralLinearActionVarying *ret = static_cast< IfcStructuralLinearActionVarying * > (allocateIfcStructuralLinearActionVarying(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralLinearActionVarying_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralLinearActionVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralLinearActionVarying *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralLinearActionVarying(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralLinearActionVarying_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralLinearActionVarying > ExpressDataSet::createIfcStructuralLinearActionVarying(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralLinearActionVarying(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralLinearActionVarying * > (allocateIfcStructuralLinearActionVarying(this, Step::Id_UNSET));
    }
}

IfcStructuralLinearActionVarying *ExpressDataSet::cloneIfcStructuralLinearActionVarying(ExpressDataSet *expressDataSet, const IfcStructuralLinearActionVarying &obj, const CopyOp &copyop) {
    IfcStructuralLinearActionVarying *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralLinearActionVarying(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralLinearActionVarying_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralLinearActionVarying *ExpressDataSet::cloneIfcStructuralLinearActionVarying(const IfcStructuralLinearActionVarying &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralLinearActionVarying(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralLinearActionVarying(this, obj, copyop);
    }
}

IfcStructuralLoadGroup *ExpressDataSet::getIfcStructuralLoadGroup(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralLoadGroup * > (current->second.get());
    }
    else {
        IfcStructuralLoadGroup *ret = static_cast< IfcStructuralLoadGroup * > (allocateIfcStructuralLoadGroup(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralLoadGroup(IfcStructuralLoadGroup *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralLoadGroup_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralLoadGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralLoadGroup *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralLoadGroup(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralLoadGroup_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralLoadGroup > ExpressDataSet::createIfcStructuralLoadGroup(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralLoadGroup(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralLoadGroup * > (allocateIfcStructuralLoadGroup(this, Step::Id_UNSET));
    }
}

IfcStructuralLoadGroup *ExpressDataSet::cloneIfcStructuralLoadGroup(ExpressDataSet *expressDataSet, const IfcStructuralLoadGroup &obj, const CopyOp &copyop) {
    IfcStructuralLoadGroup *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralLoadGroup(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralLoadGroup_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralLoadGroup *ExpressDataSet::cloneIfcStructuralLoadGroup(const IfcStructuralLoadGroup &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralLoadGroup(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralLoadGroup(this, obj, copyop);
    }
}

IfcStructuralLoadLinearForce *ExpressDataSet::getIfcStructuralLoadLinearForce(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralLoadLinearForce * > (current->second.get());
    }
    else {
        IfcStructuralLoadLinearForce *ret = static_cast< IfcStructuralLoadLinearForce * > (allocateIfcStructuralLoadLinearForce(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralLoadLinearForce_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralLoadLinearForce(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralLoadLinearForce *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralLoadLinearForce(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralLoadLinearForce_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralLoadLinearForce > ExpressDataSet::createIfcStructuralLoadLinearForce(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralLoadLinearForce(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralLoadLinearForce * > (allocateIfcStructuralLoadLinearForce(this, Step::Id_UNSET));
    }
}

IfcStructuralLoadLinearForce *ExpressDataSet::cloneIfcStructuralLoadLinearForce(ExpressDataSet *expressDataSet, const IfcStructuralLoadLinearForce &obj, const CopyOp &copyop) {
    IfcStructuralLoadLinearForce *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralLoadLinearForce(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralLoadLinearForce_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralLoadLinearForce *ExpressDataSet::cloneIfcStructuralLoadLinearForce(const IfcStructuralLoadLinearForce &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralLoadLinearForce(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralLoadLinearForce(this, obj, copyop);
    }
}

IfcStructuralLoadPlanarForce *ExpressDataSet::getIfcStructuralLoadPlanarForce(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralLoadPlanarForce * > (current->second.get());
    }
    else {
        IfcStructuralLoadPlanarForce *ret = static_cast< IfcStructuralLoadPlanarForce * > (allocateIfcStructuralLoadPlanarForce(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralLoadPlanarForce_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralLoadPlanarForce(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralLoadPlanarForce *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralLoadPlanarForce(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralLoadPlanarForce_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralLoadPlanarForce > ExpressDataSet::createIfcStructuralLoadPlanarForce(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralLoadPlanarForce(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralLoadPlanarForce * > (allocateIfcStructuralLoadPlanarForce(this, Step::Id_UNSET));
    }
}

IfcStructuralLoadPlanarForce *ExpressDataSet::cloneIfcStructuralLoadPlanarForce(ExpressDataSet *expressDataSet, const IfcStructuralLoadPlanarForce &obj, const CopyOp &copyop) {
    IfcStructuralLoadPlanarForce *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralLoadPlanarForce(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralLoadPlanarForce_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralLoadPlanarForce *ExpressDataSet::cloneIfcStructuralLoadPlanarForce(const IfcStructuralLoadPlanarForce &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralLoadPlanarForce(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralLoadPlanarForce(this, obj, copyop);
    }
}

IfcStructuralLoadSingleDisplacement *ExpressDataSet::getIfcStructuralLoadSingleDisplacement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralLoadSingleDisplacement * > (current->second.get());
    }
    else {
        IfcStructuralLoadSingleDisplacement *ret = static_cast< IfcStructuralLoadSingleDisplacement * > (allocateIfcStructuralLoadSingleDisplacement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralLoadSingleDisplacement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralLoadSingleDisplacement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralLoadSingleDisplacement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralLoadSingleDisplacement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralLoadSingleDisplacement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralLoadSingleDisplacement > ExpressDataSet::createIfcStructuralLoadSingleDisplacement(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralLoadSingleDisplacement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralLoadSingleDisplacement * > (allocateIfcStructuralLoadSingleDisplacement(this, Step::Id_UNSET));
    }
}

IfcStructuralLoadSingleDisplacement *ExpressDataSet::cloneIfcStructuralLoadSingleDisplacement(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleDisplacement &obj, const CopyOp &copyop) {
    IfcStructuralLoadSingleDisplacement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralLoadSingleDisplacement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralLoadSingleDisplacement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralLoadSingleDisplacement *ExpressDataSet::cloneIfcStructuralLoadSingleDisplacement(const IfcStructuralLoadSingleDisplacement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralLoadSingleDisplacement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralLoadSingleDisplacement(this, obj, copyop);
    }
}

IfcStructuralLoadSingleDisplacementDistortion *ExpressDataSet::getIfcStructuralLoadSingleDisplacementDistortion(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralLoadSingleDisplacementDistortion * > (current->second.get());
    }
    else {
        IfcStructuralLoadSingleDisplacementDistortion *ret = static_cast< IfcStructuralLoadSingleDisplacementDistortion * > (allocateIfcStructuralLoadSingleDisplacementDistortion(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralLoadSingleDisplacementDistortion_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralLoadSingleDisplacementDistortion(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralLoadSingleDisplacementDistortion *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralLoadSingleDisplacementDistortion(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralLoadSingleDisplacementDistortion_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralLoadSingleDisplacementDistortion > ExpressDataSet::createIfcStructuralLoadSingleDisplacementDistortion(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralLoadSingleDisplacementDistortion(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralLoadSingleDisplacementDistortion * > (allocateIfcStructuralLoadSingleDisplacementDistortion(this, Step::Id_UNSET));
    }
}

IfcStructuralLoadSingleDisplacementDistortion *ExpressDataSet::cloneIfcStructuralLoadSingleDisplacementDistortion(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleDisplacementDistortion &obj, const CopyOp &copyop) {
    IfcStructuralLoadSingleDisplacementDistortion *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralLoadSingleDisplacementDistortion(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralLoadSingleDisplacementDistortion_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralLoadSingleDisplacementDistortion *ExpressDataSet::cloneIfcStructuralLoadSingleDisplacementDistortion(const IfcStructuralLoadSingleDisplacementDistortion &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralLoadSingleDisplacementDistortion(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralLoadSingleDisplacementDistortion(this, obj, copyop);
    }
}

IfcStructuralLoadSingleForce *ExpressDataSet::getIfcStructuralLoadSingleForce(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralLoadSingleForce * > (current->second.get());
    }
    else {
        IfcStructuralLoadSingleForce *ret = static_cast< IfcStructuralLoadSingleForce * > (allocateIfcStructuralLoadSingleForce(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralLoadSingleForce_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralLoadSingleForce(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralLoadSingleForce *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralLoadSingleForce(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralLoadSingleForce_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralLoadSingleForce > ExpressDataSet::createIfcStructuralLoadSingleForce(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralLoadSingleForce(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralLoadSingleForce * > (allocateIfcStructuralLoadSingleForce(this, Step::Id_UNSET));
    }
}

IfcStructuralLoadSingleForce *ExpressDataSet::cloneIfcStructuralLoadSingleForce(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleForce &obj, const CopyOp &copyop) {
    IfcStructuralLoadSingleForce *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralLoadSingleForce(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralLoadSingleForce_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralLoadSingleForce *ExpressDataSet::cloneIfcStructuralLoadSingleForce(const IfcStructuralLoadSingleForce &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralLoadSingleForce(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralLoadSingleForce(this, obj, copyop);
    }
}

IfcStructuralLoadSingleForceWarping *ExpressDataSet::getIfcStructuralLoadSingleForceWarping(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralLoadSingleForceWarping * > (current->second.get());
    }
    else {
        IfcStructuralLoadSingleForceWarping *ret = static_cast< IfcStructuralLoadSingleForceWarping * > (allocateIfcStructuralLoadSingleForceWarping(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralLoadSingleForceWarping_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralLoadSingleForceWarping(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralLoadSingleForceWarping *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralLoadSingleForceWarping(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralLoadSingleForceWarping_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralLoadSingleForceWarping > ExpressDataSet::createIfcStructuralLoadSingleForceWarping(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralLoadSingleForceWarping(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralLoadSingleForceWarping * > (allocateIfcStructuralLoadSingleForceWarping(this, Step::Id_UNSET));
    }
}

IfcStructuralLoadSingleForceWarping *ExpressDataSet::cloneIfcStructuralLoadSingleForceWarping(ExpressDataSet *expressDataSet, const IfcStructuralLoadSingleForceWarping &obj, const CopyOp &copyop) {
    IfcStructuralLoadSingleForceWarping *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralLoadSingleForceWarping(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralLoadSingleForceWarping_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralLoadSingleForceWarping *ExpressDataSet::cloneIfcStructuralLoadSingleForceWarping(const IfcStructuralLoadSingleForceWarping &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralLoadSingleForceWarping(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralLoadSingleForceWarping(this, obj, copyop);
    }
}

IfcStructuralLoadTemperature *ExpressDataSet::getIfcStructuralLoadTemperature(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralLoadTemperature * > (current->second.get());
    }
    else {
        IfcStructuralLoadTemperature *ret = static_cast< IfcStructuralLoadTemperature * > (allocateIfcStructuralLoadTemperature(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralLoadTemperature_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralLoadTemperature(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralLoadTemperature *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralLoadTemperature(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralLoadTemperature_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralLoadTemperature > ExpressDataSet::createIfcStructuralLoadTemperature(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralLoadTemperature(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralLoadTemperature * > (allocateIfcStructuralLoadTemperature(this, Step::Id_UNSET));
    }
}

IfcStructuralLoadTemperature *ExpressDataSet::cloneIfcStructuralLoadTemperature(ExpressDataSet *expressDataSet, const IfcStructuralLoadTemperature &obj, const CopyOp &copyop) {
    IfcStructuralLoadTemperature *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralLoadTemperature(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralLoadTemperature_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralLoadTemperature *ExpressDataSet::cloneIfcStructuralLoadTemperature(const IfcStructuralLoadTemperature &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralLoadTemperature(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralLoadTemperature(this, obj, copyop);
    }
}

IfcStructuralPlanarAction *ExpressDataSet::getIfcStructuralPlanarAction(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralPlanarAction * > (current->second.get());
    }
    else {
        IfcStructuralPlanarAction *ret = static_cast< IfcStructuralPlanarAction * > (allocateIfcStructuralPlanarAction(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralPlanarAction(IfcStructuralPlanarAction *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralPlanarAction_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralPlanarAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralPlanarAction *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralPlanarAction(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralPlanarAction_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralPlanarAction > ExpressDataSet::createIfcStructuralPlanarAction(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralPlanarAction(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralPlanarAction * > (allocateIfcStructuralPlanarAction(this, Step::Id_UNSET));
    }
}

IfcStructuralPlanarAction *ExpressDataSet::cloneIfcStructuralPlanarAction(ExpressDataSet *expressDataSet, const IfcStructuralPlanarAction &obj, const CopyOp &copyop) {
    IfcStructuralPlanarAction *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralPlanarAction(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralPlanarAction_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralPlanarAction *ExpressDataSet::cloneIfcStructuralPlanarAction(const IfcStructuralPlanarAction &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralPlanarAction(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralPlanarAction(this, obj, copyop);
    }
}

IfcStructuralPlanarActionVarying *ExpressDataSet::getIfcStructuralPlanarActionVarying(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralPlanarActionVarying * > (current->second.get());
    }
    else {
        IfcStructuralPlanarActionVarying *ret = static_cast< IfcStructuralPlanarActionVarying * > (allocateIfcStructuralPlanarActionVarying(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralPlanarActionVarying_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralPlanarActionVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralPlanarActionVarying *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralPlanarActionVarying(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralPlanarActionVarying_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralPlanarActionVarying > ExpressDataSet::createIfcStructuralPlanarActionVarying(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralPlanarActionVarying(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralPlanarActionVarying * > (allocateIfcStructuralPlanarActionVarying(this, Step::Id_UNSET));
    }
}

IfcStructuralPlanarActionVarying *ExpressDataSet::cloneIfcStructuralPlanarActionVarying(ExpressDataSet *expressDataSet, const IfcStructuralPlanarActionVarying &obj, const CopyOp &copyop) {
    IfcStructuralPlanarActionVarying *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralPlanarActionVarying(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralPlanarActionVarying_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralPlanarActionVarying *ExpressDataSet::cloneIfcStructuralPlanarActionVarying(const IfcStructuralPlanarActionVarying &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralPlanarActionVarying(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralPlanarActionVarying(this, obj, copyop);
    }
}

IfcStructuralPointAction *ExpressDataSet::getIfcStructuralPointAction(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralPointAction * > (current->second.get());
    }
    else {
        IfcStructuralPointAction *ret = static_cast< IfcStructuralPointAction * > (allocateIfcStructuralPointAction(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralPointAction(IfcStructuralPointAction *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralPointAction_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralPointAction(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralPointAction *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralPointAction(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralPointAction_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralPointAction > ExpressDataSet::createIfcStructuralPointAction(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralPointAction(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralPointAction * > (allocateIfcStructuralPointAction(this, Step::Id_UNSET));
    }
}

IfcStructuralPointAction *ExpressDataSet::cloneIfcStructuralPointAction(ExpressDataSet *expressDataSet, const IfcStructuralPointAction &obj, const CopyOp &copyop) {
    IfcStructuralPointAction *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralPointAction(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralPointAction_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralPointAction *ExpressDataSet::cloneIfcStructuralPointAction(const IfcStructuralPointAction &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralPointAction(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralPointAction(this, obj, copyop);
    }
}

IfcStructuralPointConnection *ExpressDataSet::getIfcStructuralPointConnection(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralPointConnection * > (current->second.get());
    }
    else {
        IfcStructuralPointConnection *ret = static_cast< IfcStructuralPointConnection * > (allocateIfcStructuralPointConnection(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralPointConnection(IfcStructuralPointConnection *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralPointConnection_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralPointConnection(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralPointConnection *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralPointConnection(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralPointConnection_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralPointConnection > ExpressDataSet::createIfcStructuralPointConnection(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralPointConnection(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralPointConnection * > (allocateIfcStructuralPointConnection(this, Step::Id_UNSET));
    }
}

IfcStructuralPointConnection *ExpressDataSet::cloneIfcStructuralPointConnection(ExpressDataSet *expressDataSet, const IfcStructuralPointConnection &obj, const CopyOp &copyop) {
    IfcStructuralPointConnection *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralPointConnection(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralPointConnection_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralPointConnection *ExpressDataSet::cloneIfcStructuralPointConnection(const IfcStructuralPointConnection &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralPointConnection(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralPointConnection(this, obj, copyop);
    }
}

IfcStructuralPointReaction *ExpressDataSet::getIfcStructuralPointReaction(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralPointReaction * > (current->second.get());
    }
    else {
        IfcStructuralPointReaction *ret = static_cast< IfcStructuralPointReaction * > (allocateIfcStructuralPointReaction(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralPointReaction(IfcStructuralPointReaction *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralPointReaction_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralPointReaction(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralPointReaction *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralPointReaction(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralPointReaction_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralPointReaction > ExpressDataSet::createIfcStructuralPointReaction(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralPointReaction(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralPointReaction * > (allocateIfcStructuralPointReaction(this, Step::Id_UNSET));
    }
}

IfcStructuralPointReaction *ExpressDataSet::cloneIfcStructuralPointReaction(ExpressDataSet *expressDataSet, const IfcStructuralPointReaction &obj, const CopyOp &copyop) {
    IfcStructuralPointReaction *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralPointReaction(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralPointReaction_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralPointReaction *ExpressDataSet::cloneIfcStructuralPointReaction(const IfcStructuralPointReaction &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralPointReaction(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralPointReaction(this, obj, copyop);
    }
}

IfcStructuralProfileProperties *ExpressDataSet::getIfcStructuralProfileProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralProfileProperties * > (current->second.get());
    }
    else {
        IfcStructuralProfileProperties *ret = static_cast< IfcStructuralProfileProperties * > (allocateIfcStructuralProfileProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralProfileProperties(IfcStructuralProfileProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralProfileProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralProfileProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralProfileProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralProfileProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralProfileProperties > ExpressDataSet::createIfcStructuralProfileProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralProfileProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralProfileProperties * > (allocateIfcStructuralProfileProperties(this, Step::Id_UNSET));
    }
}

IfcStructuralProfileProperties *ExpressDataSet::cloneIfcStructuralProfileProperties(ExpressDataSet *expressDataSet, const IfcStructuralProfileProperties &obj, const CopyOp &copyop) {
    IfcStructuralProfileProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralProfileProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralProfileProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralProfileProperties *ExpressDataSet::cloneIfcStructuralProfileProperties(const IfcStructuralProfileProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralProfileProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralProfileProperties(this, obj, copyop);
    }
}

IfcStructuralResultGroup *ExpressDataSet::getIfcStructuralResultGroup(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralResultGroup * > (current->second.get());
    }
    else {
        IfcStructuralResultGroup *ret = static_cast< IfcStructuralResultGroup * > (allocateIfcStructuralResultGroup(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralResultGroup(IfcStructuralResultGroup *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralResultGroup_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralResultGroup(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralResultGroup *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralResultGroup(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralResultGroup_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralResultGroup > ExpressDataSet::createIfcStructuralResultGroup(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralResultGroup(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralResultGroup * > (allocateIfcStructuralResultGroup(this, Step::Id_UNSET));
    }
}

IfcStructuralResultGroup *ExpressDataSet::cloneIfcStructuralResultGroup(ExpressDataSet *expressDataSet, const IfcStructuralResultGroup &obj, const CopyOp &copyop) {
    IfcStructuralResultGroup *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralResultGroup(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralResultGroup_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralResultGroup *ExpressDataSet::cloneIfcStructuralResultGroup(const IfcStructuralResultGroup &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralResultGroup(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralResultGroup(this, obj, copyop);
    }
}

IfcStructuralSteelProfileProperties *ExpressDataSet::getIfcStructuralSteelProfileProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralSteelProfileProperties * > (current->second.get());
    }
    else {
        IfcStructuralSteelProfileProperties *ret = static_cast< IfcStructuralSteelProfileProperties * > (allocateIfcStructuralSteelProfileProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralSteelProfileProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralSteelProfileProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralSteelProfileProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralSteelProfileProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralSteelProfileProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralSteelProfileProperties > ExpressDataSet::createIfcStructuralSteelProfileProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralSteelProfileProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralSteelProfileProperties * > (allocateIfcStructuralSteelProfileProperties(this, Step::Id_UNSET));
    }
}

IfcStructuralSteelProfileProperties *ExpressDataSet::cloneIfcStructuralSteelProfileProperties(ExpressDataSet *expressDataSet, const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop) {
    IfcStructuralSteelProfileProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralSteelProfileProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralSteelProfileProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralSteelProfileProperties *ExpressDataSet::cloneIfcStructuralSteelProfileProperties(const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralSteelProfileProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralSteelProfileProperties(this, obj, copyop);
    }
}

IfcStructuralSurfaceConnection *ExpressDataSet::getIfcStructuralSurfaceConnection(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralSurfaceConnection * > (current->second.get());
    }
    else {
        IfcStructuralSurfaceConnection *ret = static_cast< IfcStructuralSurfaceConnection * > (allocateIfcStructuralSurfaceConnection(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralSurfaceConnection_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralSurfaceConnection(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralSurfaceConnection *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralSurfaceConnection(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralSurfaceConnection_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralSurfaceConnection > ExpressDataSet::createIfcStructuralSurfaceConnection(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralSurfaceConnection(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralSurfaceConnection * > (allocateIfcStructuralSurfaceConnection(this, Step::Id_UNSET));
    }
}

IfcStructuralSurfaceConnection *ExpressDataSet::cloneIfcStructuralSurfaceConnection(ExpressDataSet *expressDataSet, const IfcStructuralSurfaceConnection &obj, const CopyOp &copyop) {
    IfcStructuralSurfaceConnection *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralSurfaceConnection(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralSurfaceConnection_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralSurfaceConnection *ExpressDataSet::cloneIfcStructuralSurfaceConnection(const IfcStructuralSurfaceConnection &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralSurfaceConnection(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralSurfaceConnection(this, obj, copyop);
    }
}

IfcStructuralSurfaceMember *ExpressDataSet::getIfcStructuralSurfaceMember(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralSurfaceMember * > (current->second.get());
    }
    else {
        IfcStructuralSurfaceMember *ret = static_cast< IfcStructuralSurfaceMember * > (allocateIfcStructuralSurfaceMember(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralSurfaceMember_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralSurfaceMember(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralSurfaceMember *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralSurfaceMember(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralSurfaceMember_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralSurfaceMember > ExpressDataSet::createIfcStructuralSurfaceMember(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralSurfaceMember(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralSurfaceMember * > (allocateIfcStructuralSurfaceMember(this, Step::Id_UNSET));
    }
}

IfcStructuralSurfaceMember *ExpressDataSet::cloneIfcStructuralSurfaceMember(ExpressDataSet *expressDataSet, const IfcStructuralSurfaceMember &obj, const CopyOp &copyop) {
    IfcStructuralSurfaceMember *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralSurfaceMember(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralSurfaceMember_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralSurfaceMember *ExpressDataSet::cloneIfcStructuralSurfaceMember(const IfcStructuralSurfaceMember &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralSurfaceMember(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralSurfaceMember(this, obj, copyop);
    }
}

IfcStructuralSurfaceMemberVarying *ExpressDataSet::getIfcStructuralSurfaceMemberVarying(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuralSurfaceMemberVarying * > (current->second.get());
    }
    else {
        IfcStructuralSurfaceMemberVarying *ret = static_cast< IfcStructuralSurfaceMemberVarying * > (allocateIfcStructuralSurfaceMemberVarying(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuralSurfaceMemberVarying_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuralSurfaceMemberVarying(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuralSurfaceMemberVarying *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuralSurfaceMemberVarying(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuralSurfaceMemberVarying_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuralSurfaceMemberVarying > ExpressDataSet::createIfcStructuralSurfaceMemberVarying(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuralSurfaceMemberVarying(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuralSurfaceMemberVarying * > (allocateIfcStructuralSurfaceMemberVarying(this, Step::Id_UNSET));
    }
}

IfcStructuralSurfaceMemberVarying *ExpressDataSet::cloneIfcStructuralSurfaceMemberVarying(ExpressDataSet *expressDataSet, const IfcStructuralSurfaceMemberVarying &obj, const CopyOp &copyop) {
    IfcStructuralSurfaceMemberVarying *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuralSurfaceMemberVarying(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuralSurfaceMemberVarying_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuralSurfaceMemberVarying *ExpressDataSet::cloneIfcStructuralSurfaceMemberVarying(const IfcStructuralSurfaceMemberVarying &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuralSurfaceMemberVarying(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuralSurfaceMemberVarying(this, obj, copyop);
    }
}

IfcStructuredDimensionCallout *ExpressDataSet::getIfcStructuredDimensionCallout(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStructuredDimensionCallout * > (current->second.get());
    }
    else {
        IfcStructuredDimensionCallout *ret = static_cast< IfcStructuredDimensionCallout * > (allocateIfcStructuredDimensionCallout(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStructuredDimensionCallout_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStructuredDimensionCallout(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStructuredDimensionCallout *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStructuredDimensionCallout(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStructuredDimensionCallout_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStructuredDimensionCallout > ExpressDataSet::createIfcStructuredDimensionCallout(bool isVolatile) {
    if (isVolatile) {
        return new IfcStructuredDimensionCallout(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStructuredDimensionCallout * > (allocateIfcStructuredDimensionCallout(this, Step::Id_UNSET));
    }
}

IfcStructuredDimensionCallout *ExpressDataSet::cloneIfcStructuredDimensionCallout(ExpressDataSet *expressDataSet, const IfcStructuredDimensionCallout &obj, const CopyOp &copyop) {
    IfcStructuredDimensionCallout *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStructuredDimensionCallout(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStructuredDimensionCallout_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStructuredDimensionCallout *ExpressDataSet::cloneIfcStructuredDimensionCallout(const IfcStructuredDimensionCallout &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStructuredDimensionCallout(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStructuredDimensionCallout(this, obj, copyop);
    }
}

IfcStyledItem *ExpressDataSet::getIfcStyledItem(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStyledItem * > (current->second.get());
    }
    else {
        IfcStyledItem *ret = static_cast< IfcStyledItem * > (allocateIfcStyledItem(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStyledItem(IfcStyledItem *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStyledItem_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStyledItem(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStyledItem *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStyledItem(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStyledItem_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStyledItem > ExpressDataSet::createIfcStyledItem(bool isVolatile) {
    if (isVolatile) {
        return new IfcStyledItem(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStyledItem * > (allocateIfcStyledItem(this, Step::Id_UNSET));
    }
}

IfcStyledItem *ExpressDataSet::cloneIfcStyledItem(ExpressDataSet *expressDataSet, const IfcStyledItem &obj, const CopyOp &copyop) {
    IfcStyledItem *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStyledItem(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStyledItem_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStyledItem *ExpressDataSet::cloneIfcStyledItem(const IfcStyledItem &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStyledItem(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStyledItem(this, obj, copyop);
    }
}

IfcStyledRepresentation *ExpressDataSet::getIfcStyledRepresentation(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcStyledRepresentation * > (current->second.get());
    }
    else {
        IfcStyledRepresentation *ret = static_cast< IfcStyledRepresentation * > (allocateIfcStyledRepresentation(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcStyledRepresentation(IfcStyledRepresentation *arg) {
    getAll().erase(arg->getKey());
    return m_IfcStyledRepresentation_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcStyledRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcStyledRepresentation *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcStyledRepresentation(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcStyledRepresentation_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcStyledRepresentation > ExpressDataSet::createIfcStyledRepresentation(bool isVolatile) {
    if (isVolatile) {
        return new IfcStyledRepresentation(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcStyledRepresentation * > (allocateIfcStyledRepresentation(this, Step::Id_UNSET));
    }
}

IfcStyledRepresentation *ExpressDataSet::cloneIfcStyledRepresentation(ExpressDataSet *expressDataSet, const IfcStyledRepresentation &obj, const CopyOp &copyop) {
    IfcStyledRepresentation *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcStyledRepresentation(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcStyledRepresentation_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcStyledRepresentation *ExpressDataSet::cloneIfcStyledRepresentation(const IfcStyledRepresentation &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcStyledRepresentation(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcStyledRepresentation(this, obj, copyop);
    }
}

IfcSubContractResource *ExpressDataSet::getIfcSubContractResource(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSubContractResource * > (current->second.get());
    }
    else {
        IfcSubContractResource *ret = static_cast< IfcSubContractResource * > (allocateIfcSubContractResource(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSubContractResource(IfcSubContractResource *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSubContractResource_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSubContractResource(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSubContractResource *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSubContractResource(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSubContractResource_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSubContractResource > ExpressDataSet::createIfcSubContractResource(bool isVolatile) {
    if (isVolatile) {
        return new IfcSubContractResource(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSubContractResource * > (allocateIfcSubContractResource(this, Step::Id_UNSET));
    }
}

IfcSubContractResource *ExpressDataSet::cloneIfcSubContractResource(ExpressDataSet *expressDataSet, const IfcSubContractResource &obj, const CopyOp &copyop) {
    IfcSubContractResource *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSubContractResource(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSubContractResource_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSubContractResource *ExpressDataSet::cloneIfcSubContractResource(const IfcSubContractResource &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSubContractResource(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSubContractResource(this, obj, copyop);
    }
}

IfcSubedge *ExpressDataSet::getIfcSubedge(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSubedge * > (current->second.get());
    }
    else {
        IfcSubedge *ret = static_cast< IfcSubedge * > (allocateIfcSubedge(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSubedge(IfcSubedge *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSubedge_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSubedge(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSubedge *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSubedge(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSubedge_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSubedge > ExpressDataSet::createIfcSubedge(bool isVolatile) {
    if (isVolatile) {
        return new IfcSubedge(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSubedge * > (allocateIfcSubedge(this, Step::Id_UNSET));
    }
}

IfcSubedge *ExpressDataSet::cloneIfcSubedge(ExpressDataSet *expressDataSet, const IfcSubedge &obj, const CopyOp &copyop) {
    IfcSubedge *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSubedge(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSubedge_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSubedge *ExpressDataSet::cloneIfcSubedge(const IfcSubedge &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSubedge(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSubedge(this, obj, copyop);
    }
}

IfcSurfaceCurveSweptAreaSolid *ExpressDataSet::getIfcSurfaceCurveSweptAreaSolid(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSurfaceCurveSweptAreaSolid * > (current->second.get());
    }
    else {
        IfcSurfaceCurveSweptAreaSolid *ret = static_cast< IfcSurfaceCurveSweptAreaSolid * > (allocateIfcSurfaceCurveSweptAreaSolid(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSurfaceCurveSweptAreaSolid_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSurfaceCurveSweptAreaSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSurfaceCurveSweptAreaSolid *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSurfaceCurveSweptAreaSolid(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSurfaceCurveSweptAreaSolid_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSurfaceCurveSweptAreaSolid > ExpressDataSet::createIfcSurfaceCurveSweptAreaSolid(bool isVolatile) {
    if (isVolatile) {
        return new IfcSurfaceCurveSweptAreaSolid(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSurfaceCurveSweptAreaSolid * > (allocateIfcSurfaceCurveSweptAreaSolid(this, Step::Id_UNSET));
    }
}

IfcSurfaceCurveSweptAreaSolid *ExpressDataSet::cloneIfcSurfaceCurveSweptAreaSolid(ExpressDataSet *expressDataSet, const IfcSurfaceCurveSweptAreaSolid &obj, const CopyOp &copyop) {
    IfcSurfaceCurveSweptAreaSolid *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSurfaceCurveSweptAreaSolid(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSurfaceCurveSweptAreaSolid_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSurfaceCurveSweptAreaSolid *ExpressDataSet::cloneIfcSurfaceCurveSweptAreaSolid(const IfcSurfaceCurveSweptAreaSolid &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSurfaceCurveSweptAreaSolid(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSurfaceCurveSweptAreaSolid(this, obj, copyop);
    }
}

IfcSurfaceOfLinearExtrusion *ExpressDataSet::getIfcSurfaceOfLinearExtrusion(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSurfaceOfLinearExtrusion * > (current->second.get());
    }
    else {
        IfcSurfaceOfLinearExtrusion *ret = static_cast< IfcSurfaceOfLinearExtrusion * > (allocateIfcSurfaceOfLinearExtrusion(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSurfaceOfLinearExtrusion_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSurfaceOfLinearExtrusion(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSurfaceOfLinearExtrusion *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSurfaceOfLinearExtrusion(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSurfaceOfLinearExtrusion_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSurfaceOfLinearExtrusion > ExpressDataSet::createIfcSurfaceOfLinearExtrusion(bool isVolatile) {
    if (isVolatile) {
        return new IfcSurfaceOfLinearExtrusion(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSurfaceOfLinearExtrusion * > (allocateIfcSurfaceOfLinearExtrusion(this, Step::Id_UNSET));
    }
}

IfcSurfaceOfLinearExtrusion *ExpressDataSet::cloneIfcSurfaceOfLinearExtrusion(ExpressDataSet *expressDataSet, const IfcSurfaceOfLinearExtrusion &obj, const CopyOp &copyop) {
    IfcSurfaceOfLinearExtrusion *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSurfaceOfLinearExtrusion(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSurfaceOfLinearExtrusion_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSurfaceOfLinearExtrusion *ExpressDataSet::cloneIfcSurfaceOfLinearExtrusion(const IfcSurfaceOfLinearExtrusion &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSurfaceOfLinearExtrusion(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSurfaceOfLinearExtrusion(this, obj, copyop);
    }
}

IfcSurfaceOfRevolution *ExpressDataSet::getIfcSurfaceOfRevolution(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSurfaceOfRevolution * > (current->second.get());
    }
    else {
        IfcSurfaceOfRevolution *ret = static_cast< IfcSurfaceOfRevolution * > (allocateIfcSurfaceOfRevolution(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSurfaceOfRevolution_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSurfaceOfRevolution(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSurfaceOfRevolution *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSurfaceOfRevolution(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSurfaceOfRevolution_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSurfaceOfRevolution > ExpressDataSet::createIfcSurfaceOfRevolution(bool isVolatile) {
    if (isVolatile) {
        return new IfcSurfaceOfRevolution(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSurfaceOfRevolution * > (allocateIfcSurfaceOfRevolution(this, Step::Id_UNSET));
    }
}

IfcSurfaceOfRevolution *ExpressDataSet::cloneIfcSurfaceOfRevolution(ExpressDataSet *expressDataSet, const IfcSurfaceOfRevolution &obj, const CopyOp &copyop) {
    IfcSurfaceOfRevolution *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSurfaceOfRevolution(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSurfaceOfRevolution_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSurfaceOfRevolution *ExpressDataSet::cloneIfcSurfaceOfRevolution(const IfcSurfaceOfRevolution &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSurfaceOfRevolution(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSurfaceOfRevolution(this, obj, copyop);
    }
}

IfcSurfaceStyle *ExpressDataSet::getIfcSurfaceStyle(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSurfaceStyle * > (current->second.get());
    }
    else {
        IfcSurfaceStyle *ret = static_cast< IfcSurfaceStyle * > (allocateIfcSurfaceStyle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSurfaceStyle(IfcSurfaceStyle *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSurfaceStyle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSurfaceStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSurfaceStyle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSurfaceStyle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSurfaceStyle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSurfaceStyle > ExpressDataSet::createIfcSurfaceStyle(bool isVolatile) {
    if (isVolatile) {
        return new IfcSurfaceStyle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSurfaceStyle * > (allocateIfcSurfaceStyle(this, Step::Id_UNSET));
    }
}

IfcSurfaceStyle *ExpressDataSet::cloneIfcSurfaceStyle(ExpressDataSet *expressDataSet, const IfcSurfaceStyle &obj, const CopyOp &copyop) {
    IfcSurfaceStyle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSurfaceStyle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSurfaceStyle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSurfaceStyle *ExpressDataSet::cloneIfcSurfaceStyle(const IfcSurfaceStyle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSurfaceStyle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSurfaceStyle(this, obj, copyop);
    }
}

IfcSurfaceStyleLighting *ExpressDataSet::getIfcSurfaceStyleLighting(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSurfaceStyleLighting * > (current->second.get());
    }
    else {
        IfcSurfaceStyleLighting *ret = static_cast< IfcSurfaceStyleLighting * > (allocateIfcSurfaceStyleLighting(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSurfaceStyleLighting_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSurfaceStyleLighting(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSurfaceStyleLighting *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSurfaceStyleLighting(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSurfaceStyleLighting_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSurfaceStyleLighting > ExpressDataSet::createIfcSurfaceStyleLighting(bool isVolatile) {
    if (isVolatile) {
        return new IfcSurfaceStyleLighting(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSurfaceStyleLighting * > (allocateIfcSurfaceStyleLighting(this, Step::Id_UNSET));
    }
}

IfcSurfaceStyleLighting *ExpressDataSet::cloneIfcSurfaceStyleLighting(ExpressDataSet *expressDataSet, const IfcSurfaceStyleLighting &obj, const CopyOp &copyop) {
    IfcSurfaceStyleLighting *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSurfaceStyleLighting(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSurfaceStyleLighting_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSurfaceStyleLighting *ExpressDataSet::cloneIfcSurfaceStyleLighting(const IfcSurfaceStyleLighting &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSurfaceStyleLighting(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSurfaceStyleLighting(this, obj, copyop);
    }
}

IfcSurfaceStyleRefraction *ExpressDataSet::getIfcSurfaceStyleRefraction(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSurfaceStyleRefraction * > (current->second.get());
    }
    else {
        IfcSurfaceStyleRefraction *ret = static_cast< IfcSurfaceStyleRefraction * > (allocateIfcSurfaceStyleRefraction(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSurfaceStyleRefraction_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSurfaceStyleRefraction(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSurfaceStyleRefraction *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSurfaceStyleRefraction(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSurfaceStyleRefraction_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSurfaceStyleRefraction > ExpressDataSet::createIfcSurfaceStyleRefraction(bool isVolatile) {
    if (isVolatile) {
        return new IfcSurfaceStyleRefraction(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSurfaceStyleRefraction * > (allocateIfcSurfaceStyleRefraction(this, Step::Id_UNSET));
    }
}

IfcSurfaceStyleRefraction *ExpressDataSet::cloneIfcSurfaceStyleRefraction(ExpressDataSet *expressDataSet, const IfcSurfaceStyleRefraction &obj, const CopyOp &copyop) {
    IfcSurfaceStyleRefraction *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSurfaceStyleRefraction(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSurfaceStyleRefraction_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSurfaceStyleRefraction *ExpressDataSet::cloneIfcSurfaceStyleRefraction(const IfcSurfaceStyleRefraction &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSurfaceStyleRefraction(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSurfaceStyleRefraction(this, obj, copyop);
    }
}

IfcSurfaceStyleRendering *ExpressDataSet::getIfcSurfaceStyleRendering(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSurfaceStyleRendering * > (current->second.get());
    }
    else {
        IfcSurfaceStyleRendering *ret = static_cast< IfcSurfaceStyleRendering * > (allocateIfcSurfaceStyleRendering(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSurfaceStyleRendering_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSurfaceStyleRendering(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSurfaceStyleRendering *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSurfaceStyleRendering(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSurfaceStyleRendering_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSurfaceStyleRendering > ExpressDataSet::createIfcSurfaceStyleRendering(bool isVolatile) {
    if (isVolatile) {
        return new IfcSurfaceStyleRendering(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSurfaceStyleRendering * > (allocateIfcSurfaceStyleRendering(this, Step::Id_UNSET));
    }
}

IfcSurfaceStyleRendering *ExpressDataSet::cloneIfcSurfaceStyleRendering(ExpressDataSet *expressDataSet, const IfcSurfaceStyleRendering &obj, const CopyOp &copyop) {
    IfcSurfaceStyleRendering *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSurfaceStyleRendering(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSurfaceStyleRendering_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSurfaceStyleRendering *ExpressDataSet::cloneIfcSurfaceStyleRendering(const IfcSurfaceStyleRendering &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSurfaceStyleRendering(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSurfaceStyleRendering(this, obj, copyop);
    }
}

IfcSurfaceStyleShading *ExpressDataSet::getIfcSurfaceStyleShading(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSurfaceStyleShading * > (current->second.get());
    }
    else {
        IfcSurfaceStyleShading *ret = static_cast< IfcSurfaceStyleShading * > (allocateIfcSurfaceStyleShading(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSurfaceStyleShading(IfcSurfaceStyleShading *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSurfaceStyleShading_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSurfaceStyleShading(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSurfaceStyleShading *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSurfaceStyleShading(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSurfaceStyleShading_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSurfaceStyleShading > ExpressDataSet::createIfcSurfaceStyleShading(bool isVolatile) {
    if (isVolatile) {
        return new IfcSurfaceStyleShading(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSurfaceStyleShading * > (allocateIfcSurfaceStyleShading(this, Step::Id_UNSET));
    }
}

IfcSurfaceStyleShading *ExpressDataSet::cloneIfcSurfaceStyleShading(ExpressDataSet *expressDataSet, const IfcSurfaceStyleShading &obj, const CopyOp &copyop) {
    IfcSurfaceStyleShading *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSurfaceStyleShading(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSurfaceStyleShading_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSurfaceStyleShading *ExpressDataSet::cloneIfcSurfaceStyleShading(const IfcSurfaceStyleShading &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSurfaceStyleShading(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSurfaceStyleShading(this, obj, copyop);
    }
}

IfcSurfaceStyleWithTextures *ExpressDataSet::getIfcSurfaceStyleWithTextures(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSurfaceStyleWithTextures * > (current->second.get());
    }
    else {
        IfcSurfaceStyleWithTextures *ret = static_cast< IfcSurfaceStyleWithTextures * > (allocateIfcSurfaceStyleWithTextures(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSurfaceStyleWithTextures_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSurfaceStyleWithTextures(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSurfaceStyleWithTextures *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSurfaceStyleWithTextures(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSurfaceStyleWithTextures_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSurfaceStyleWithTextures > ExpressDataSet::createIfcSurfaceStyleWithTextures(bool isVolatile) {
    if (isVolatile) {
        return new IfcSurfaceStyleWithTextures(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSurfaceStyleWithTextures * > (allocateIfcSurfaceStyleWithTextures(this, Step::Id_UNSET));
    }
}

IfcSurfaceStyleWithTextures *ExpressDataSet::cloneIfcSurfaceStyleWithTextures(ExpressDataSet *expressDataSet, const IfcSurfaceStyleWithTextures &obj, const CopyOp &copyop) {
    IfcSurfaceStyleWithTextures *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSurfaceStyleWithTextures(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSurfaceStyleWithTextures_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSurfaceStyleWithTextures *ExpressDataSet::cloneIfcSurfaceStyleWithTextures(const IfcSurfaceStyleWithTextures &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSurfaceStyleWithTextures(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSurfaceStyleWithTextures(this, obj, copyop);
    }
}

IfcSweptDiskSolid *ExpressDataSet::getIfcSweptDiskSolid(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSweptDiskSolid * > (current->second.get());
    }
    else {
        IfcSweptDiskSolid *ret = static_cast< IfcSweptDiskSolid * > (allocateIfcSweptDiskSolid(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSweptDiskSolid(IfcSweptDiskSolid *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSweptDiskSolid_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSweptDiskSolid(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSweptDiskSolid *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSweptDiskSolid(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSweptDiskSolid_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSweptDiskSolid > ExpressDataSet::createIfcSweptDiskSolid(bool isVolatile) {
    if (isVolatile) {
        return new IfcSweptDiskSolid(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSweptDiskSolid * > (allocateIfcSweptDiskSolid(this, Step::Id_UNSET));
    }
}

IfcSweptDiskSolid *ExpressDataSet::cloneIfcSweptDiskSolid(ExpressDataSet *expressDataSet, const IfcSweptDiskSolid &obj, const CopyOp &copyop) {
    IfcSweptDiskSolid *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSweptDiskSolid(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSweptDiskSolid_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSweptDiskSolid *ExpressDataSet::cloneIfcSweptDiskSolid(const IfcSweptDiskSolid &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSweptDiskSolid(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSweptDiskSolid(this, obj, copyop);
    }
}

IfcSwitchingDeviceType *ExpressDataSet::getIfcSwitchingDeviceType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSwitchingDeviceType * > (current->second.get());
    }
    else {
        IfcSwitchingDeviceType *ret = static_cast< IfcSwitchingDeviceType * > (allocateIfcSwitchingDeviceType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSwitchingDeviceType(IfcSwitchingDeviceType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSwitchingDeviceType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSwitchingDeviceType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSwitchingDeviceType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSwitchingDeviceType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSwitchingDeviceType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSwitchingDeviceType > ExpressDataSet::createIfcSwitchingDeviceType(bool isVolatile) {
    if (isVolatile) {
        return new IfcSwitchingDeviceType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSwitchingDeviceType * > (allocateIfcSwitchingDeviceType(this, Step::Id_UNSET));
    }
}

IfcSwitchingDeviceType *ExpressDataSet::cloneIfcSwitchingDeviceType(ExpressDataSet *expressDataSet, const IfcSwitchingDeviceType &obj, const CopyOp &copyop) {
    IfcSwitchingDeviceType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSwitchingDeviceType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSwitchingDeviceType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSwitchingDeviceType *ExpressDataSet::cloneIfcSwitchingDeviceType(const IfcSwitchingDeviceType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSwitchingDeviceType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSwitchingDeviceType(this, obj, copyop);
    }
}

IfcSymbolStyle *ExpressDataSet::getIfcSymbolStyle(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSymbolStyle * > (current->second.get());
    }
    else {
        IfcSymbolStyle *ret = static_cast< IfcSymbolStyle * > (allocateIfcSymbolStyle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSymbolStyle(IfcSymbolStyle *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSymbolStyle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSymbolStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSymbolStyle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSymbolStyle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSymbolStyle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSymbolStyle > ExpressDataSet::createIfcSymbolStyle(bool isVolatile) {
    if (isVolatile) {
        return new IfcSymbolStyle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSymbolStyle * > (allocateIfcSymbolStyle(this, Step::Id_UNSET));
    }
}

IfcSymbolStyle *ExpressDataSet::cloneIfcSymbolStyle(ExpressDataSet *expressDataSet, const IfcSymbolStyle &obj, const CopyOp &copyop) {
    IfcSymbolStyle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSymbolStyle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSymbolStyle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSymbolStyle *ExpressDataSet::cloneIfcSymbolStyle(const IfcSymbolStyle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSymbolStyle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSymbolStyle(this, obj, copyop);
    }
}

IfcSystem *ExpressDataSet::getIfcSystem(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSystem * > (current->second.get());
    }
    else {
        IfcSystem *ret = static_cast< IfcSystem * > (allocateIfcSystem(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSystem(IfcSystem *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSystem_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSystem(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSystem *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSystem(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSystem_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSystem > ExpressDataSet::createIfcSystem(bool isVolatile) {
    if (isVolatile) {
        return new IfcSystem(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSystem * > (allocateIfcSystem(this, Step::Id_UNSET));
    }
}

IfcSystem *ExpressDataSet::cloneIfcSystem(ExpressDataSet *expressDataSet, const IfcSystem &obj, const CopyOp &copyop) {
    IfcSystem *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSystem(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSystem_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSystem *ExpressDataSet::cloneIfcSystem(const IfcSystem &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSystem(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSystem(this, obj, copyop);
    }
}

IfcSystemFurnitureElementType *ExpressDataSet::getIfcSystemFurnitureElementType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcSystemFurnitureElementType * > (current->second.get());
    }
    else {
        IfcSystemFurnitureElementType *ret = static_cast< IfcSystemFurnitureElementType * > (allocateIfcSystemFurnitureElementType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcSystemFurnitureElementType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcSystemFurnitureElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcSystemFurnitureElementType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcSystemFurnitureElementType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcSystemFurnitureElementType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcSystemFurnitureElementType > ExpressDataSet::createIfcSystemFurnitureElementType(bool isVolatile) {
    if (isVolatile) {
        return new IfcSystemFurnitureElementType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcSystemFurnitureElementType * > (allocateIfcSystemFurnitureElementType(this, Step::Id_UNSET));
    }
}

IfcSystemFurnitureElementType *ExpressDataSet::cloneIfcSystemFurnitureElementType(ExpressDataSet *expressDataSet, const IfcSystemFurnitureElementType &obj, const CopyOp &copyop) {
    IfcSystemFurnitureElementType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcSystemFurnitureElementType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcSystemFurnitureElementType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcSystemFurnitureElementType *ExpressDataSet::cloneIfcSystemFurnitureElementType(const IfcSystemFurnitureElementType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcSystemFurnitureElementType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcSystemFurnitureElementType(this, obj, copyop);
    }
}

IfcTShapeProfileDef *ExpressDataSet::getIfcTShapeProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTShapeProfileDef * > (current->second.get());
    }
    else {
        IfcTShapeProfileDef *ret = static_cast< IfcTShapeProfileDef * > (allocateIfcTShapeProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTShapeProfileDef(IfcTShapeProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTShapeProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTShapeProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTShapeProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTShapeProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTShapeProfileDef > ExpressDataSet::createIfcTShapeProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcTShapeProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTShapeProfileDef * > (allocateIfcTShapeProfileDef(this, Step::Id_UNSET));
    }
}

IfcTShapeProfileDef *ExpressDataSet::cloneIfcTShapeProfileDef(ExpressDataSet *expressDataSet, const IfcTShapeProfileDef &obj, const CopyOp &copyop) {
    IfcTShapeProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTShapeProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTShapeProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTShapeProfileDef *ExpressDataSet::cloneIfcTShapeProfileDef(const IfcTShapeProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTShapeProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTShapeProfileDef(this, obj, copyop);
    }
}

IfcTable *ExpressDataSet::getIfcTable(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTable * > (current->second.get());
    }
    else {
        IfcTable *ret = static_cast< IfcTable * > (allocateIfcTable(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTable(IfcTable *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTable_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTable(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTable *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTable(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTable_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTable > ExpressDataSet::createIfcTable(bool isVolatile) {
    if (isVolatile) {
        return new IfcTable(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTable * > (allocateIfcTable(this, Step::Id_UNSET));
    }
}

IfcTable *ExpressDataSet::cloneIfcTable(ExpressDataSet *expressDataSet, const IfcTable &obj, const CopyOp &copyop) {
    IfcTable *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTable(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTable_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTable *ExpressDataSet::cloneIfcTable(const IfcTable &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTable(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTable(this, obj, copyop);
    }
}

IfcTableRow *ExpressDataSet::getIfcTableRow(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTableRow * > (current->second.get());
    }
    else {
        IfcTableRow *ret = static_cast< IfcTableRow * > (allocateIfcTableRow(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTableRow(IfcTableRow *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTableRow_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTableRow(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTableRow *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTableRow(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTableRow_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTableRow > ExpressDataSet::createIfcTableRow(bool isVolatile) {
    if (isVolatile) {
        return new IfcTableRow(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTableRow * > (allocateIfcTableRow(this, Step::Id_UNSET));
    }
}

IfcTableRow *ExpressDataSet::cloneIfcTableRow(ExpressDataSet *expressDataSet, const IfcTableRow &obj, const CopyOp &copyop) {
    IfcTableRow *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTableRow(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTableRow_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTableRow *ExpressDataSet::cloneIfcTableRow(const IfcTableRow &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTableRow(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTableRow(this, obj, copyop);
    }
}

IfcTankType *ExpressDataSet::getIfcTankType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTankType * > (current->second.get());
    }
    else {
        IfcTankType *ret = static_cast< IfcTankType * > (allocateIfcTankType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTankType(IfcTankType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTankType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTankType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTankType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTankType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTankType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTankType > ExpressDataSet::createIfcTankType(bool isVolatile) {
    if (isVolatile) {
        return new IfcTankType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTankType * > (allocateIfcTankType(this, Step::Id_UNSET));
    }
}

IfcTankType *ExpressDataSet::cloneIfcTankType(ExpressDataSet *expressDataSet, const IfcTankType &obj, const CopyOp &copyop) {
    IfcTankType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTankType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTankType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTankType *ExpressDataSet::cloneIfcTankType(const IfcTankType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTankType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTankType(this, obj, copyop);
    }
}

IfcTask *ExpressDataSet::getIfcTask(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTask * > (current->second.get());
    }
    else {
        IfcTask *ret = static_cast< IfcTask * > (allocateIfcTask(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTask(IfcTask *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTask_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTask(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTask *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTask(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTask_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTask > ExpressDataSet::createIfcTask(bool isVolatile) {
    if (isVolatile) {
        return new IfcTask(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTask * > (allocateIfcTask(this, Step::Id_UNSET));
    }
}

IfcTask *ExpressDataSet::cloneIfcTask(ExpressDataSet *expressDataSet, const IfcTask &obj, const CopyOp &copyop) {
    IfcTask *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTask(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTask_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTask *ExpressDataSet::cloneIfcTask(const IfcTask &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTask(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTask(this, obj, copyop);
    }
}

IfcTelecomAddress *ExpressDataSet::getIfcTelecomAddress(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTelecomAddress * > (current->second.get());
    }
    else {
        IfcTelecomAddress *ret = static_cast< IfcTelecomAddress * > (allocateIfcTelecomAddress(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTelecomAddress(IfcTelecomAddress *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTelecomAddress_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTelecomAddress(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTelecomAddress *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTelecomAddress(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTelecomAddress_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTelecomAddress > ExpressDataSet::createIfcTelecomAddress(bool isVolatile) {
    if (isVolatile) {
        return new IfcTelecomAddress(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTelecomAddress * > (allocateIfcTelecomAddress(this, Step::Id_UNSET));
    }
}

IfcTelecomAddress *ExpressDataSet::cloneIfcTelecomAddress(ExpressDataSet *expressDataSet, const IfcTelecomAddress &obj, const CopyOp &copyop) {
    IfcTelecomAddress *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTelecomAddress(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTelecomAddress_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTelecomAddress *ExpressDataSet::cloneIfcTelecomAddress(const IfcTelecomAddress &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTelecomAddress(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTelecomAddress(this, obj, copyop);
    }
}

IfcTendon *ExpressDataSet::getIfcTendon(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTendon * > (current->second.get());
    }
    else {
        IfcTendon *ret = static_cast< IfcTendon * > (allocateIfcTendon(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTendon(IfcTendon *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTendon_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTendon(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTendon *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTendon(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTendon_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTendon > ExpressDataSet::createIfcTendon(bool isVolatile) {
    if (isVolatile) {
        return new IfcTendon(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTendon * > (allocateIfcTendon(this, Step::Id_UNSET));
    }
}

IfcTendon *ExpressDataSet::cloneIfcTendon(ExpressDataSet *expressDataSet, const IfcTendon &obj, const CopyOp &copyop) {
    IfcTendon *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTendon(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTendon_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTendon *ExpressDataSet::cloneIfcTendon(const IfcTendon &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTendon(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTendon(this, obj, copyop);
    }
}

IfcTendonAnchor *ExpressDataSet::getIfcTendonAnchor(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTendonAnchor * > (current->second.get());
    }
    else {
        IfcTendonAnchor *ret = static_cast< IfcTendonAnchor * > (allocateIfcTendonAnchor(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTendonAnchor(IfcTendonAnchor *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTendonAnchor_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTendonAnchor(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTendonAnchor *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTendonAnchor(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTendonAnchor_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTendonAnchor > ExpressDataSet::createIfcTendonAnchor(bool isVolatile) {
    if (isVolatile) {
        return new IfcTendonAnchor(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTendonAnchor * > (allocateIfcTendonAnchor(this, Step::Id_UNSET));
    }
}

IfcTendonAnchor *ExpressDataSet::cloneIfcTendonAnchor(ExpressDataSet *expressDataSet, const IfcTendonAnchor &obj, const CopyOp &copyop) {
    IfcTendonAnchor *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTendonAnchor(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTendonAnchor_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTendonAnchor *ExpressDataSet::cloneIfcTendonAnchor(const IfcTendonAnchor &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTendonAnchor(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTendonAnchor(this, obj, copyop);
    }
}

IfcTerminatorSymbol *ExpressDataSet::getIfcTerminatorSymbol(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTerminatorSymbol * > (current->second.get());
    }
    else {
        IfcTerminatorSymbol *ret = static_cast< IfcTerminatorSymbol * > (allocateIfcTerminatorSymbol(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTerminatorSymbol(IfcTerminatorSymbol *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTerminatorSymbol_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTerminatorSymbol(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTerminatorSymbol *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTerminatorSymbol(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTerminatorSymbol_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTerminatorSymbol > ExpressDataSet::createIfcTerminatorSymbol(bool isVolatile) {
    if (isVolatile) {
        return new IfcTerminatorSymbol(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTerminatorSymbol * > (allocateIfcTerminatorSymbol(this, Step::Id_UNSET));
    }
}

IfcTerminatorSymbol *ExpressDataSet::cloneIfcTerminatorSymbol(ExpressDataSet *expressDataSet, const IfcTerminatorSymbol &obj, const CopyOp &copyop) {
    IfcTerminatorSymbol *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTerminatorSymbol(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTerminatorSymbol_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTerminatorSymbol *ExpressDataSet::cloneIfcTerminatorSymbol(const IfcTerminatorSymbol &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTerminatorSymbol(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTerminatorSymbol(this, obj, copyop);
    }
}

IfcTextLiteral *ExpressDataSet::getIfcTextLiteral(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTextLiteral * > (current->second.get());
    }
    else {
        IfcTextLiteral *ret = static_cast< IfcTextLiteral * > (allocateIfcTextLiteral(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTextLiteral(IfcTextLiteral *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTextLiteral_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTextLiteral(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTextLiteral *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTextLiteral(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTextLiteral_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTextLiteral > ExpressDataSet::createIfcTextLiteral(bool isVolatile) {
    if (isVolatile) {
        return new IfcTextLiteral(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTextLiteral * > (allocateIfcTextLiteral(this, Step::Id_UNSET));
    }
}

IfcTextLiteral *ExpressDataSet::cloneIfcTextLiteral(ExpressDataSet *expressDataSet, const IfcTextLiteral &obj, const CopyOp &copyop) {
    IfcTextLiteral *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTextLiteral(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTextLiteral_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTextLiteral *ExpressDataSet::cloneIfcTextLiteral(const IfcTextLiteral &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTextLiteral(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTextLiteral(this, obj, copyop);
    }
}

IfcTextLiteralWithExtent *ExpressDataSet::getIfcTextLiteralWithExtent(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTextLiteralWithExtent * > (current->second.get());
    }
    else {
        IfcTextLiteralWithExtent *ret = static_cast< IfcTextLiteralWithExtent * > (allocateIfcTextLiteralWithExtent(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTextLiteralWithExtent_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTextLiteralWithExtent(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTextLiteralWithExtent *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTextLiteralWithExtent(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTextLiteralWithExtent_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTextLiteralWithExtent > ExpressDataSet::createIfcTextLiteralWithExtent(bool isVolatile) {
    if (isVolatile) {
        return new IfcTextLiteralWithExtent(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTextLiteralWithExtent * > (allocateIfcTextLiteralWithExtent(this, Step::Id_UNSET));
    }
}

IfcTextLiteralWithExtent *ExpressDataSet::cloneIfcTextLiteralWithExtent(ExpressDataSet *expressDataSet, const IfcTextLiteralWithExtent &obj, const CopyOp &copyop) {
    IfcTextLiteralWithExtent *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTextLiteralWithExtent(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTextLiteralWithExtent_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTextLiteralWithExtent *ExpressDataSet::cloneIfcTextLiteralWithExtent(const IfcTextLiteralWithExtent &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTextLiteralWithExtent(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTextLiteralWithExtent(this, obj, copyop);
    }
}

IfcTextStyle *ExpressDataSet::getIfcTextStyle(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTextStyle * > (current->second.get());
    }
    else {
        IfcTextStyle *ret = static_cast< IfcTextStyle * > (allocateIfcTextStyle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTextStyle(IfcTextStyle *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTextStyle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTextStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTextStyle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTextStyle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTextStyle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTextStyle > ExpressDataSet::createIfcTextStyle(bool isVolatile) {
    if (isVolatile) {
        return new IfcTextStyle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTextStyle * > (allocateIfcTextStyle(this, Step::Id_UNSET));
    }
}

IfcTextStyle *ExpressDataSet::cloneIfcTextStyle(ExpressDataSet *expressDataSet, const IfcTextStyle &obj, const CopyOp &copyop) {
    IfcTextStyle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTextStyle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTextStyle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTextStyle *ExpressDataSet::cloneIfcTextStyle(const IfcTextStyle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTextStyle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTextStyle(this, obj, copyop);
    }
}

IfcTextStyleFontModel *ExpressDataSet::getIfcTextStyleFontModel(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTextStyleFontModel * > (current->second.get());
    }
    else {
        IfcTextStyleFontModel *ret = static_cast< IfcTextStyleFontModel * > (allocateIfcTextStyleFontModel(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTextStyleFontModel(IfcTextStyleFontModel *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTextStyleFontModel_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTextStyleFontModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTextStyleFontModel *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTextStyleFontModel(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTextStyleFontModel_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTextStyleFontModel > ExpressDataSet::createIfcTextStyleFontModel(bool isVolatile) {
    if (isVolatile) {
        return new IfcTextStyleFontModel(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTextStyleFontModel * > (allocateIfcTextStyleFontModel(this, Step::Id_UNSET));
    }
}

IfcTextStyleFontModel *ExpressDataSet::cloneIfcTextStyleFontModel(ExpressDataSet *expressDataSet, const IfcTextStyleFontModel &obj, const CopyOp &copyop) {
    IfcTextStyleFontModel *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTextStyleFontModel(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTextStyleFontModel_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTextStyleFontModel *ExpressDataSet::cloneIfcTextStyleFontModel(const IfcTextStyleFontModel &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTextStyleFontModel(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTextStyleFontModel(this, obj, copyop);
    }
}

IfcTextStyleForDefinedFont *ExpressDataSet::getIfcTextStyleForDefinedFont(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTextStyleForDefinedFont * > (current->second.get());
    }
    else {
        IfcTextStyleForDefinedFont *ret = static_cast< IfcTextStyleForDefinedFont * > (allocateIfcTextStyleForDefinedFont(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTextStyleForDefinedFont_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTextStyleForDefinedFont(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTextStyleForDefinedFont *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTextStyleForDefinedFont(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTextStyleForDefinedFont_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTextStyleForDefinedFont > ExpressDataSet::createIfcTextStyleForDefinedFont(bool isVolatile) {
    if (isVolatile) {
        return new IfcTextStyleForDefinedFont(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTextStyleForDefinedFont * > (allocateIfcTextStyleForDefinedFont(this, Step::Id_UNSET));
    }
}

IfcTextStyleForDefinedFont *ExpressDataSet::cloneIfcTextStyleForDefinedFont(ExpressDataSet *expressDataSet, const IfcTextStyleForDefinedFont &obj, const CopyOp &copyop) {
    IfcTextStyleForDefinedFont *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTextStyleForDefinedFont(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTextStyleForDefinedFont_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTextStyleForDefinedFont *ExpressDataSet::cloneIfcTextStyleForDefinedFont(const IfcTextStyleForDefinedFont &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTextStyleForDefinedFont(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTextStyleForDefinedFont(this, obj, copyop);
    }
}

IfcTextStyleTextModel *ExpressDataSet::getIfcTextStyleTextModel(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTextStyleTextModel * > (current->second.get());
    }
    else {
        IfcTextStyleTextModel *ret = static_cast< IfcTextStyleTextModel * > (allocateIfcTextStyleTextModel(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTextStyleTextModel(IfcTextStyleTextModel *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTextStyleTextModel_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTextStyleTextModel(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTextStyleTextModel *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTextStyleTextModel(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTextStyleTextModel_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTextStyleTextModel > ExpressDataSet::createIfcTextStyleTextModel(bool isVolatile) {
    if (isVolatile) {
        return new IfcTextStyleTextModel(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTextStyleTextModel * > (allocateIfcTextStyleTextModel(this, Step::Id_UNSET));
    }
}

IfcTextStyleTextModel *ExpressDataSet::cloneIfcTextStyleTextModel(ExpressDataSet *expressDataSet, const IfcTextStyleTextModel &obj, const CopyOp &copyop) {
    IfcTextStyleTextModel *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTextStyleTextModel(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTextStyleTextModel_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTextStyleTextModel *ExpressDataSet::cloneIfcTextStyleTextModel(const IfcTextStyleTextModel &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTextStyleTextModel(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTextStyleTextModel(this, obj, copyop);
    }
}

IfcTextStyleWithBoxCharacteristics *ExpressDataSet::getIfcTextStyleWithBoxCharacteristics(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTextStyleWithBoxCharacteristics * > (current->second.get());
    }
    else {
        IfcTextStyleWithBoxCharacteristics *ret = static_cast< IfcTextStyleWithBoxCharacteristics * > (allocateIfcTextStyleWithBoxCharacteristics(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTextStyleWithBoxCharacteristics_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTextStyleWithBoxCharacteristics(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTextStyleWithBoxCharacteristics *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTextStyleWithBoxCharacteristics(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTextStyleWithBoxCharacteristics_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTextStyleWithBoxCharacteristics > ExpressDataSet::createIfcTextStyleWithBoxCharacteristics(bool isVolatile) {
    if (isVolatile) {
        return new IfcTextStyleWithBoxCharacteristics(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTextStyleWithBoxCharacteristics * > (allocateIfcTextStyleWithBoxCharacteristics(this, Step::Id_UNSET));
    }
}

IfcTextStyleWithBoxCharacteristics *ExpressDataSet::cloneIfcTextStyleWithBoxCharacteristics(ExpressDataSet *expressDataSet, const IfcTextStyleWithBoxCharacteristics &obj, const CopyOp &copyop) {
    IfcTextStyleWithBoxCharacteristics *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTextStyleWithBoxCharacteristics(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTextStyleWithBoxCharacteristics_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTextStyleWithBoxCharacteristics *ExpressDataSet::cloneIfcTextStyleWithBoxCharacteristics(const IfcTextStyleWithBoxCharacteristics &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTextStyleWithBoxCharacteristics(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTextStyleWithBoxCharacteristics(this, obj, copyop);
    }
}

IfcTextureCoordinateGenerator *ExpressDataSet::getIfcTextureCoordinateGenerator(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTextureCoordinateGenerator * > (current->second.get());
    }
    else {
        IfcTextureCoordinateGenerator *ret = static_cast< IfcTextureCoordinateGenerator * > (allocateIfcTextureCoordinateGenerator(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTextureCoordinateGenerator_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTextureCoordinateGenerator(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTextureCoordinateGenerator *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTextureCoordinateGenerator(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTextureCoordinateGenerator_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTextureCoordinateGenerator > ExpressDataSet::createIfcTextureCoordinateGenerator(bool isVolatile) {
    if (isVolatile) {
        return new IfcTextureCoordinateGenerator(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTextureCoordinateGenerator * > (allocateIfcTextureCoordinateGenerator(this, Step::Id_UNSET));
    }
}

IfcTextureCoordinateGenerator *ExpressDataSet::cloneIfcTextureCoordinateGenerator(ExpressDataSet *expressDataSet, const IfcTextureCoordinateGenerator &obj, const CopyOp &copyop) {
    IfcTextureCoordinateGenerator *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTextureCoordinateGenerator(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTextureCoordinateGenerator_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTextureCoordinateGenerator *ExpressDataSet::cloneIfcTextureCoordinateGenerator(const IfcTextureCoordinateGenerator &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTextureCoordinateGenerator(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTextureCoordinateGenerator(this, obj, copyop);
    }
}

IfcTextureMap *ExpressDataSet::getIfcTextureMap(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTextureMap * > (current->second.get());
    }
    else {
        IfcTextureMap *ret = static_cast< IfcTextureMap * > (allocateIfcTextureMap(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTextureMap(IfcTextureMap *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTextureMap_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTextureMap(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTextureMap *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTextureMap(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTextureMap_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTextureMap > ExpressDataSet::createIfcTextureMap(bool isVolatile) {
    if (isVolatile) {
        return new IfcTextureMap(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTextureMap * > (allocateIfcTextureMap(this, Step::Id_UNSET));
    }
}

IfcTextureMap *ExpressDataSet::cloneIfcTextureMap(ExpressDataSet *expressDataSet, const IfcTextureMap &obj, const CopyOp &copyop) {
    IfcTextureMap *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTextureMap(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTextureMap_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTextureMap *ExpressDataSet::cloneIfcTextureMap(const IfcTextureMap &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTextureMap(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTextureMap(this, obj, copyop);
    }
}

IfcTextureVertex *ExpressDataSet::getIfcTextureVertex(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTextureVertex * > (current->second.get());
    }
    else {
        IfcTextureVertex *ret = static_cast< IfcTextureVertex * > (allocateIfcTextureVertex(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTextureVertex(IfcTextureVertex *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTextureVertex_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTextureVertex(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTextureVertex *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTextureVertex(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTextureVertex_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTextureVertex > ExpressDataSet::createIfcTextureVertex(bool isVolatile) {
    if (isVolatile) {
        return new IfcTextureVertex(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTextureVertex * > (allocateIfcTextureVertex(this, Step::Id_UNSET));
    }
}

IfcTextureVertex *ExpressDataSet::cloneIfcTextureVertex(ExpressDataSet *expressDataSet, const IfcTextureVertex &obj, const CopyOp &copyop) {
    IfcTextureVertex *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTextureVertex(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTextureVertex_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTextureVertex *ExpressDataSet::cloneIfcTextureVertex(const IfcTextureVertex &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTextureVertex(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTextureVertex(this, obj, copyop);
    }
}

IfcThermalMaterialProperties *ExpressDataSet::getIfcThermalMaterialProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcThermalMaterialProperties * > (current->second.get());
    }
    else {
        IfcThermalMaterialProperties *ret = static_cast< IfcThermalMaterialProperties * > (allocateIfcThermalMaterialProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcThermalMaterialProperties(IfcThermalMaterialProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcThermalMaterialProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcThermalMaterialProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcThermalMaterialProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcThermalMaterialProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcThermalMaterialProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcThermalMaterialProperties > ExpressDataSet::createIfcThermalMaterialProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcThermalMaterialProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcThermalMaterialProperties * > (allocateIfcThermalMaterialProperties(this, Step::Id_UNSET));
    }
}

IfcThermalMaterialProperties *ExpressDataSet::cloneIfcThermalMaterialProperties(ExpressDataSet *expressDataSet, const IfcThermalMaterialProperties &obj, const CopyOp &copyop) {
    IfcThermalMaterialProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcThermalMaterialProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcThermalMaterialProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcThermalMaterialProperties *ExpressDataSet::cloneIfcThermalMaterialProperties(const IfcThermalMaterialProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcThermalMaterialProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcThermalMaterialProperties(this, obj, copyop);
    }
}

IfcTimeSeriesReferenceRelationship *ExpressDataSet::getIfcTimeSeriesReferenceRelationship(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTimeSeriesReferenceRelationship * > (current->second.get());
    }
    else {
        IfcTimeSeriesReferenceRelationship *ret = static_cast< IfcTimeSeriesReferenceRelationship * > (allocateIfcTimeSeriesReferenceRelationship(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTimeSeriesReferenceRelationship_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTimeSeriesReferenceRelationship(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTimeSeriesReferenceRelationship *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTimeSeriesReferenceRelationship(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTimeSeriesReferenceRelationship_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTimeSeriesReferenceRelationship > ExpressDataSet::createIfcTimeSeriesReferenceRelationship(bool isVolatile) {
    if (isVolatile) {
        return new IfcTimeSeriesReferenceRelationship(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTimeSeriesReferenceRelationship * > (allocateIfcTimeSeriesReferenceRelationship(this, Step::Id_UNSET));
    }
}

IfcTimeSeriesReferenceRelationship *ExpressDataSet::cloneIfcTimeSeriesReferenceRelationship(ExpressDataSet *expressDataSet, const IfcTimeSeriesReferenceRelationship &obj, const CopyOp &copyop) {
    IfcTimeSeriesReferenceRelationship *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTimeSeriesReferenceRelationship(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTimeSeriesReferenceRelationship_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTimeSeriesReferenceRelationship *ExpressDataSet::cloneIfcTimeSeriesReferenceRelationship(const IfcTimeSeriesReferenceRelationship &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTimeSeriesReferenceRelationship(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTimeSeriesReferenceRelationship(this, obj, copyop);
    }
}

IfcTimeSeriesSchedule *ExpressDataSet::getIfcTimeSeriesSchedule(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTimeSeriesSchedule * > (current->second.get());
    }
    else {
        IfcTimeSeriesSchedule *ret = static_cast< IfcTimeSeriesSchedule * > (allocateIfcTimeSeriesSchedule(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTimeSeriesSchedule_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTimeSeriesSchedule(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTimeSeriesSchedule *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTimeSeriesSchedule(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTimeSeriesSchedule_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTimeSeriesSchedule > ExpressDataSet::createIfcTimeSeriesSchedule(bool isVolatile) {
    if (isVolatile) {
        return new IfcTimeSeriesSchedule(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTimeSeriesSchedule * > (allocateIfcTimeSeriesSchedule(this, Step::Id_UNSET));
    }
}

IfcTimeSeriesSchedule *ExpressDataSet::cloneIfcTimeSeriesSchedule(ExpressDataSet *expressDataSet, const IfcTimeSeriesSchedule &obj, const CopyOp &copyop) {
    IfcTimeSeriesSchedule *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTimeSeriesSchedule(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTimeSeriesSchedule_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTimeSeriesSchedule *ExpressDataSet::cloneIfcTimeSeriesSchedule(const IfcTimeSeriesSchedule &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTimeSeriesSchedule(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTimeSeriesSchedule(this, obj, copyop);
    }
}

IfcTimeSeriesValue *ExpressDataSet::getIfcTimeSeriesValue(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTimeSeriesValue * > (current->second.get());
    }
    else {
        IfcTimeSeriesValue *ret = static_cast< IfcTimeSeriesValue * > (allocateIfcTimeSeriesValue(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTimeSeriesValue(IfcTimeSeriesValue *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTimeSeriesValue_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTimeSeriesValue(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTimeSeriesValue *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTimeSeriesValue(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTimeSeriesValue_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTimeSeriesValue > ExpressDataSet::createIfcTimeSeriesValue(bool isVolatile) {
    if (isVolatile) {
        return new IfcTimeSeriesValue(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTimeSeriesValue * > (allocateIfcTimeSeriesValue(this, Step::Id_UNSET));
    }
}

IfcTimeSeriesValue *ExpressDataSet::cloneIfcTimeSeriesValue(ExpressDataSet *expressDataSet, const IfcTimeSeriesValue &obj, const CopyOp &copyop) {
    IfcTimeSeriesValue *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTimeSeriesValue(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTimeSeriesValue_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTimeSeriesValue *ExpressDataSet::cloneIfcTimeSeriesValue(const IfcTimeSeriesValue &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTimeSeriesValue(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTimeSeriesValue(this, obj, copyop);
    }
}

IfcTopologyRepresentation *ExpressDataSet::getIfcTopologyRepresentation(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTopologyRepresentation * > (current->second.get());
    }
    else {
        IfcTopologyRepresentation *ret = static_cast< IfcTopologyRepresentation * > (allocateIfcTopologyRepresentation(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTopologyRepresentation(IfcTopologyRepresentation *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTopologyRepresentation_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTopologyRepresentation(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTopologyRepresentation *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTopologyRepresentation(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTopologyRepresentation_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTopologyRepresentation > ExpressDataSet::createIfcTopologyRepresentation(bool isVolatile) {
    if (isVolatile) {
        return new IfcTopologyRepresentation(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTopologyRepresentation * > (allocateIfcTopologyRepresentation(this, Step::Id_UNSET));
    }
}

IfcTopologyRepresentation *ExpressDataSet::cloneIfcTopologyRepresentation(ExpressDataSet *expressDataSet, const IfcTopologyRepresentation &obj, const CopyOp &copyop) {
    IfcTopologyRepresentation *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTopologyRepresentation(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTopologyRepresentation_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTopologyRepresentation *ExpressDataSet::cloneIfcTopologyRepresentation(const IfcTopologyRepresentation &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTopologyRepresentation(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTopologyRepresentation(this, obj, copyop);
    }
}

IfcTransformerType *ExpressDataSet::getIfcTransformerType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTransformerType * > (current->second.get());
    }
    else {
        IfcTransformerType *ret = static_cast< IfcTransformerType * > (allocateIfcTransformerType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTransformerType(IfcTransformerType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTransformerType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTransformerType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTransformerType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTransformerType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTransformerType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTransformerType > ExpressDataSet::createIfcTransformerType(bool isVolatile) {
    if (isVolatile) {
        return new IfcTransformerType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTransformerType * > (allocateIfcTransformerType(this, Step::Id_UNSET));
    }
}

IfcTransformerType *ExpressDataSet::cloneIfcTransformerType(ExpressDataSet *expressDataSet, const IfcTransformerType &obj, const CopyOp &copyop) {
    IfcTransformerType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTransformerType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTransformerType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTransformerType *ExpressDataSet::cloneIfcTransformerType(const IfcTransformerType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTransformerType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTransformerType(this, obj, copyop);
    }
}

IfcTransportElement *ExpressDataSet::getIfcTransportElement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTransportElement * > (current->second.get());
    }
    else {
        IfcTransportElement *ret = static_cast< IfcTransportElement * > (allocateIfcTransportElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTransportElement(IfcTransportElement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTransportElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTransportElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTransportElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTransportElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTransportElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTransportElement > ExpressDataSet::createIfcTransportElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcTransportElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTransportElement * > (allocateIfcTransportElement(this, Step::Id_UNSET));
    }
}

IfcTransportElement *ExpressDataSet::cloneIfcTransportElement(ExpressDataSet *expressDataSet, const IfcTransportElement &obj, const CopyOp &copyop) {
    IfcTransportElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTransportElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTransportElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTransportElement *ExpressDataSet::cloneIfcTransportElement(const IfcTransportElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTransportElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTransportElement(this, obj, copyop);
    }
}

IfcTransportElementType *ExpressDataSet::getIfcTransportElementType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTransportElementType * > (current->second.get());
    }
    else {
        IfcTransportElementType *ret = static_cast< IfcTransportElementType * > (allocateIfcTransportElementType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTransportElementType(IfcTransportElementType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTransportElementType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTransportElementType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTransportElementType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTransportElementType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTransportElementType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTransportElementType > ExpressDataSet::createIfcTransportElementType(bool isVolatile) {
    if (isVolatile) {
        return new IfcTransportElementType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTransportElementType * > (allocateIfcTransportElementType(this, Step::Id_UNSET));
    }
}

IfcTransportElementType *ExpressDataSet::cloneIfcTransportElementType(ExpressDataSet *expressDataSet, const IfcTransportElementType &obj, const CopyOp &copyop) {
    IfcTransportElementType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTransportElementType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTransportElementType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTransportElementType *ExpressDataSet::cloneIfcTransportElementType(const IfcTransportElementType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTransportElementType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTransportElementType(this, obj, copyop);
    }
}

IfcTrapeziumProfileDef *ExpressDataSet::getIfcTrapeziumProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTrapeziumProfileDef * > (current->second.get());
    }
    else {
        IfcTrapeziumProfileDef *ret = static_cast< IfcTrapeziumProfileDef * > (allocateIfcTrapeziumProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTrapeziumProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTrapeziumProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTrapeziumProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTrapeziumProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTrapeziumProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTrapeziumProfileDef > ExpressDataSet::createIfcTrapeziumProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcTrapeziumProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTrapeziumProfileDef * > (allocateIfcTrapeziumProfileDef(this, Step::Id_UNSET));
    }
}

IfcTrapeziumProfileDef *ExpressDataSet::cloneIfcTrapeziumProfileDef(ExpressDataSet *expressDataSet, const IfcTrapeziumProfileDef &obj, const CopyOp &copyop) {
    IfcTrapeziumProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTrapeziumProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTrapeziumProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTrapeziumProfileDef *ExpressDataSet::cloneIfcTrapeziumProfileDef(const IfcTrapeziumProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTrapeziumProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTrapeziumProfileDef(this, obj, copyop);
    }
}

IfcTrimmedCurve *ExpressDataSet::getIfcTrimmedCurve(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTrimmedCurve * > (current->second.get());
    }
    else {
        IfcTrimmedCurve *ret = static_cast< IfcTrimmedCurve * > (allocateIfcTrimmedCurve(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTrimmedCurve(IfcTrimmedCurve *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTrimmedCurve_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTrimmedCurve(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTrimmedCurve *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTrimmedCurve(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTrimmedCurve_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTrimmedCurve > ExpressDataSet::createIfcTrimmedCurve(bool isVolatile) {
    if (isVolatile) {
        return new IfcTrimmedCurve(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTrimmedCurve * > (allocateIfcTrimmedCurve(this, Step::Id_UNSET));
    }
}

IfcTrimmedCurve *ExpressDataSet::cloneIfcTrimmedCurve(ExpressDataSet *expressDataSet, const IfcTrimmedCurve &obj, const CopyOp &copyop) {
    IfcTrimmedCurve *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTrimmedCurve(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTrimmedCurve_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTrimmedCurve *ExpressDataSet::cloneIfcTrimmedCurve(const IfcTrimmedCurve &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTrimmedCurve(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTrimmedCurve(this, obj, copyop);
    }
}

IfcTubeBundleType *ExpressDataSet::getIfcTubeBundleType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTubeBundleType * > (current->second.get());
    }
    else {
        IfcTubeBundleType *ret = static_cast< IfcTubeBundleType * > (allocateIfcTubeBundleType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTubeBundleType(IfcTubeBundleType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTubeBundleType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTubeBundleType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTubeBundleType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTubeBundleType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTubeBundleType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTubeBundleType > ExpressDataSet::createIfcTubeBundleType(bool isVolatile) {
    if (isVolatile) {
        return new IfcTubeBundleType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTubeBundleType * > (allocateIfcTubeBundleType(this, Step::Id_UNSET));
    }
}

IfcTubeBundleType *ExpressDataSet::cloneIfcTubeBundleType(ExpressDataSet *expressDataSet, const IfcTubeBundleType &obj, const CopyOp &copyop) {
    IfcTubeBundleType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTubeBundleType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTubeBundleType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTubeBundleType *ExpressDataSet::cloneIfcTubeBundleType(const IfcTubeBundleType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTubeBundleType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTubeBundleType(this, obj, copyop);
    }
}

IfcTwoDirectionRepeatFactor *ExpressDataSet::getIfcTwoDirectionRepeatFactor(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTwoDirectionRepeatFactor * > (current->second.get());
    }
    else {
        IfcTwoDirectionRepeatFactor *ret = static_cast< IfcTwoDirectionRepeatFactor * > (allocateIfcTwoDirectionRepeatFactor(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTwoDirectionRepeatFactor_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTwoDirectionRepeatFactor(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTwoDirectionRepeatFactor *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTwoDirectionRepeatFactor(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTwoDirectionRepeatFactor_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTwoDirectionRepeatFactor > ExpressDataSet::createIfcTwoDirectionRepeatFactor(bool isVolatile) {
    if (isVolatile) {
        return new IfcTwoDirectionRepeatFactor(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTwoDirectionRepeatFactor * > (allocateIfcTwoDirectionRepeatFactor(this, Step::Id_UNSET));
    }
}

IfcTwoDirectionRepeatFactor *ExpressDataSet::cloneIfcTwoDirectionRepeatFactor(ExpressDataSet *expressDataSet, const IfcTwoDirectionRepeatFactor &obj, const CopyOp &copyop) {
    IfcTwoDirectionRepeatFactor *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTwoDirectionRepeatFactor(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTwoDirectionRepeatFactor_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTwoDirectionRepeatFactor *ExpressDataSet::cloneIfcTwoDirectionRepeatFactor(const IfcTwoDirectionRepeatFactor &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTwoDirectionRepeatFactor(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTwoDirectionRepeatFactor(this, obj, copyop);
    }
}

IfcTypeObject *ExpressDataSet::getIfcTypeObject(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTypeObject * > (current->second.get());
    }
    else {
        IfcTypeObject *ret = static_cast< IfcTypeObject * > (allocateIfcTypeObject(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTypeObject(IfcTypeObject *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTypeObject_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTypeObject(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTypeObject *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTypeObject(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTypeObject_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTypeObject > ExpressDataSet::createIfcTypeObject(bool isVolatile) {
    if (isVolatile) {
        return new IfcTypeObject(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTypeObject * > (allocateIfcTypeObject(this, Step::Id_UNSET));
    }
}

IfcTypeObject *ExpressDataSet::cloneIfcTypeObject(ExpressDataSet *expressDataSet, const IfcTypeObject &obj, const CopyOp &copyop) {
    IfcTypeObject *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTypeObject(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTypeObject_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTypeObject *ExpressDataSet::cloneIfcTypeObject(const IfcTypeObject &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTypeObject(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTypeObject(this, obj, copyop);
    }
}

IfcTypeProduct *ExpressDataSet::getIfcTypeProduct(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcTypeProduct * > (current->second.get());
    }
    else {
        IfcTypeProduct *ret = static_cast< IfcTypeProduct * > (allocateIfcTypeProduct(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcTypeProduct(IfcTypeProduct *arg) {
    getAll().erase(arg->getKey());
    return m_IfcTypeProduct_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcTypeProduct(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcTypeProduct *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcTypeProduct(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcTypeProduct_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcTypeProduct > ExpressDataSet::createIfcTypeProduct(bool isVolatile) {
    if (isVolatile) {
        return new IfcTypeProduct(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcTypeProduct * > (allocateIfcTypeProduct(this, Step::Id_UNSET));
    }
}

IfcTypeProduct *ExpressDataSet::cloneIfcTypeProduct(ExpressDataSet *expressDataSet, const IfcTypeProduct &obj, const CopyOp &copyop) {
    IfcTypeProduct *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcTypeProduct(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcTypeProduct_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcTypeProduct *ExpressDataSet::cloneIfcTypeProduct(const IfcTypeProduct &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcTypeProduct(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcTypeProduct(this, obj, copyop);
    }
}

IfcUShapeProfileDef *ExpressDataSet::getIfcUShapeProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcUShapeProfileDef * > (current->second.get());
    }
    else {
        IfcUShapeProfileDef *ret = static_cast< IfcUShapeProfileDef * > (allocateIfcUShapeProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcUShapeProfileDef(IfcUShapeProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcUShapeProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcUShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcUShapeProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcUShapeProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcUShapeProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcUShapeProfileDef > ExpressDataSet::createIfcUShapeProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcUShapeProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcUShapeProfileDef * > (allocateIfcUShapeProfileDef(this, Step::Id_UNSET));
    }
}

IfcUShapeProfileDef *ExpressDataSet::cloneIfcUShapeProfileDef(ExpressDataSet *expressDataSet, const IfcUShapeProfileDef &obj, const CopyOp &copyop) {
    IfcUShapeProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcUShapeProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcUShapeProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcUShapeProfileDef *ExpressDataSet::cloneIfcUShapeProfileDef(const IfcUShapeProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcUShapeProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcUShapeProfileDef(this, obj, copyop);
    }
}

IfcUnitAssignment *ExpressDataSet::getIfcUnitAssignment(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcUnitAssignment * > (current->second.get());
    }
    else {
        IfcUnitAssignment *ret = static_cast< IfcUnitAssignment * > (allocateIfcUnitAssignment(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcUnitAssignment(IfcUnitAssignment *arg) {
    getAll().erase(arg->getKey());
    return m_IfcUnitAssignment_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcUnitAssignment(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcUnitAssignment *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcUnitAssignment(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcUnitAssignment_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcUnitAssignment > ExpressDataSet::createIfcUnitAssignment(bool isVolatile) {
    if (isVolatile) {
        return new IfcUnitAssignment(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcUnitAssignment * > (allocateIfcUnitAssignment(this, Step::Id_UNSET));
    }
}

IfcUnitAssignment *ExpressDataSet::cloneIfcUnitAssignment(ExpressDataSet *expressDataSet, const IfcUnitAssignment &obj, const CopyOp &copyop) {
    IfcUnitAssignment *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcUnitAssignment(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcUnitAssignment_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcUnitAssignment *ExpressDataSet::cloneIfcUnitAssignment(const IfcUnitAssignment &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcUnitAssignment(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcUnitAssignment(this, obj, copyop);
    }
}

IfcUnitaryEquipmentType *ExpressDataSet::getIfcUnitaryEquipmentType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcUnitaryEquipmentType * > (current->second.get());
    }
    else {
        IfcUnitaryEquipmentType *ret = static_cast< IfcUnitaryEquipmentType * > (allocateIfcUnitaryEquipmentType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcUnitaryEquipmentType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcUnitaryEquipmentType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcUnitaryEquipmentType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcUnitaryEquipmentType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcUnitaryEquipmentType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcUnitaryEquipmentType > ExpressDataSet::createIfcUnitaryEquipmentType(bool isVolatile) {
    if (isVolatile) {
        return new IfcUnitaryEquipmentType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcUnitaryEquipmentType * > (allocateIfcUnitaryEquipmentType(this, Step::Id_UNSET));
    }
}

IfcUnitaryEquipmentType *ExpressDataSet::cloneIfcUnitaryEquipmentType(ExpressDataSet *expressDataSet, const IfcUnitaryEquipmentType &obj, const CopyOp &copyop) {
    IfcUnitaryEquipmentType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcUnitaryEquipmentType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcUnitaryEquipmentType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcUnitaryEquipmentType *ExpressDataSet::cloneIfcUnitaryEquipmentType(const IfcUnitaryEquipmentType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcUnitaryEquipmentType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcUnitaryEquipmentType(this, obj, copyop);
    }
}

IfcValveType *ExpressDataSet::getIfcValveType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcValveType * > (current->second.get());
    }
    else {
        IfcValveType *ret = static_cast< IfcValveType * > (allocateIfcValveType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcValveType(IfcValveType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcValveType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcValveType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcValveType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcValveType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcValveType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcValveType > ExpressDataSet::createIfcValveType(bool isVolatile) {
    if (isVolatile) {
        return new IfcValveType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcValveType * > (allocateIfcValveType(this, Step::Id_UNSET));
    }
}

IfcValveType *ExpressDataSet::cloneIfcValveType(ExpressDataSet *expressDataSet, const IfcValveType &obj, const CopyOp &copyop) {
    IfcValveType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcValveType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcValveType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcValveType *ExpressDataSet::cloneIfcValveType(const IfcValveType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcValveType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcValveType(this, obj, copyop);
    }
}

IfcVector *ExpressDataSet::getIfcVector(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcVector * > (current->second.get());
    }
    else {
        IfcVector *ret = static_cast< IfcVector * > (allocateIfcVector(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcVector(IfcVector *arg) {
    getAll().erase(arg->getKey());
    return m_IfcVector_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcVector(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcVector *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcVector(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcVector_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcVector > ExpressDataSet::createIfcVector(bool isVolatile) {
    if (isVolatile) {
        return new IfcVector(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcVector * > (allocateIfcVector(this, Step::Id_UNSET));
    }
}

IfcVector *ExpressDataSet::cloneIfcVector(ExpressDataSet *expressDataSet, const IfcVector &obj, const CopyOp &copyop) {
    IfcVector *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcVector(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcVector_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcVector *ExpressDataSet::cloneIfcVector(const IfcVector &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcVector(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcVector(this, obj, copyop);
    }
}

IfcVertex *ExpressDataSet::getIfcVertex(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcVertex * > (current->second.get());
    }
    else {
        IfcVertex *ret = static_cast< IfcVertex * > (allocateIfcVertex(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcVertex(IfcVertex *arg) {
    getAll().erase(arg->getKey());
    return m_IfcVertex_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcVertex(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcVertex *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcVertex(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcVertex_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcVertex > ExpressDataSet::createIfcVertex(bool isVolatile) {
    if (isVolatile) {
        return new IfcVertex(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcVertex * > (allocateIfcVertex(this, Step::Id_UNSET));
    }
}

IfcVertex *ExpressDataSet::cloneIfcVertex(ExpressDataSet *expressDataSet, const IfcVertex &obj, const CopyOp &copyop) {
    IfcVertex *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcVertex(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcVertex_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcVertex *ExpressDataSet::cloneIfcVertex(const IfcVertex &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcVertex(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcVertex(this, obj, copyop);
    }
}

IfcVertexBasedTextureMap *ExpressDataSet::getIfcVertexBasedTextureMap(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcVertexBasedTextureMap * > (current->second.get());
    }
    else {
        IfcVertexBasedTextureMap *ret = static_cast< IfcVertexBasedTextureMap * > (allocateIfcVertexBasedTextureMap(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *arg) {
    getAll().erase(arg->getKey());
    return m_IfcVertexBasedTextureMap_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcVertexBasedTextureMap(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcVertexBasedTextureMap *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcVertexBasedTextureMap(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcVertexBasedTextureMap_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcVertexBasedTextureMap > ExpressDataSet::createIfcVertexBasedTextureMap(bool isVolatile) {
    if (isVolatile) {
        return new IfcVertexBasedTextureMap(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcVertexBasedTextureMap * > (allocateIfcVertexBasedTextureMap(this, Step::Id_UNSET));
    }
}

IfcVertexBasedTextureMap *ExpressDataSet::cloneIfcVertexBasedTextureMap(ExpressDataSet *expressDataSet, const IfcVertexBasedTextureMap &obj, const CopyOp &copyop) {
    IfcVertexBasedTextureMap *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcVertexBasedTextureMap(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcVertexBasedTextureMap_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcVertexBasedTextureMap *ExpressDataSet::cloneIfcVertexBasedTextureMap(const IfcVertexBasedTextureMap &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcVertexBasedTextureMap(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcVertexBasedTextureMap(this, obj, copyop);
    }
}

IfcVertexLoop *ExpressDataSet::getIfcVertexLoop(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcVertexLoop * > (current->second.get());
    }
    else {
        IfcVertexLoop *ret = static_cast< IfcVertexLoop * > (allocateIfcVertexLoop(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcVertexLoop(IfcVertexLoop *arg) {
    getAll().erase(arg->getKey());
    return m_IfcVertexLoop_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcVertexLoop(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcVertexLoop *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcVertexLoop(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcVertexLoop_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcVertexLoop > ExpressDataSet::createIfcVertexLoop(bool isVolatile) {
    if (isVolatile) {
        return new IfcVertexLoop(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcVertexLoop * > (allocateIfcVertexLoop(this, Step::Id_UNSET));
    }
}

IfcVertexLoop *ExpressDataSet::cloneIfcVertexLoop(ExpressDataSet *expressDataSet, const IfcVertexLoop &obj, const CopyOp &copyop) {
    IfcVertexLoop *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcVertexLoop(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcVertexLoop_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcVertexLoop *ExpressDataSet::cloneIfcVertexLoop(const IfcVertexLoop &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcVertexLoop(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcVertexLoop(this, obj, copyop);
    }
}

IfcVertexPoint *ExpressDataSet::getIfcVertexPoint(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcVertexPoint * > (current->second.get());
    }
    else {
        IfcVertexPoint *ret = static_cast< IfcVertexPoint * > (allocateIfcVertexPoint(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcVertexPoint(IfcVertexPoint *arg) {
    getAll().erase(arg->getKey());
    return m_IfcVertexPoint_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcVertexPoint(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcVertexPoint *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcVertexPoint(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcVertexPoint_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcVertexPoint > ExpressDataSet::createIfcVertexPoint(bool isVolatile) {
    if (isVolatile) {
        return new IfcVertexPoint(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcVertexPoint * > (allocateIfcVertexPoint(this, Step::Id_UNSET));
    }
}

IfcVertexPoint *ExpressDataSet::cloneIfcVertexPoint(ExpressDataSet *expressDataSet, const IfcVertexPoint &obj, const CopyOp &copyop) {
    IfcVertexPoint *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcVertexPoint(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcVertexPoint_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcVertexPoint *ExpressDataSet::cloneIfcVertexPoint(const IfcVertexPoint &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcVertexPoint(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcVertexPoint(this, obj, copyop);
    }
}

IfcVibrationIsolatorType *ExpressDataSet::getIfcVibrationIsolatorType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcVibrationIsolatorType * > (current->second.get());
    }
    else {
        IfcVibrationIsolatorType *ret = static_cast< IfcVibrationIsolatorType * > (allocateIfcVibrationIsolatorType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcVibrationIsolatorType(IfcVibrationIsolatorType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcVibrationIsolatorType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcVibrationIsolatorType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcVibrationIsolatorType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcVibrationIsolatorType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcVibrationIsolatorType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcVibrationIsolatorType > ExpressDataSet::createIfcVibrationIsolatorType(bool isVolatile) {
    if (isVolatile) {
        return new IfcVibrationIsolatorType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcVibrationIsolatorType * > (allocateIfcVibrationIsolatorType(this, Step::Id_UNSET));
    }
}

IfcVibrationIsolatorType *ExpressDataSet::cloneIfcVibrationIsolatorType(ExpressDataSet *expressDataSet, const IfcVibrationIsolatorType &obj, const CopyOp &copyop) {
    IfcVibrationIsolatorType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcVibrationIsolatorType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcVibrationIsolatorType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcVibrationIsolatorType *ExpressDataSet::cloneIfcVibrationIsolatorType(const IfcVibrationIsolatorType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcVibrationIsolatorType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcVibrationIsolatorType(this, obj, copyop);
    }
}

IfcVirtualElement *ExpressDataSet::getIfcVirtualElement(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcVirtualElement * > (current->second.get());
    }
    else {
        IfcVirtualElement *ret = static_cast< IfcVirtualElement * > (allocateIfcVirtualElement(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcVirtualElement(IfcVirtualElement *arg) {
    getAll().erase(arg->getKey());
    return m_IfcVirtualElement_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcVirtualElement(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcVirtualElement *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcVirtualElement(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcVirtualElement_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcVirtualElement > ExpressDataSet::createIfcVirtualElement(bool isVolatile) {
    if (isVolatile) {
        return new IfcVirtualElement(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcVirtualElement * > (allocateIfcVirtualElement(this, Step::Id_UNSET));
    }
}

IfcVirtualElement *ExpressDataSet::cloneIfcVirtualElement(ExpressDataSet *expressDataSet, const IfcVirtualElement &obj, const CopyOp &copyop) {
    IfcVirtualElement *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcVirtualElement(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcVirtualElement_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcVirtualElement *ExpressDataSet::cloneIfcVirtualElement(const IfcVirtualElement &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcVirtualElement(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcVirtualElement(this, obj, copyop);
    }
}

IfcVirtualGridIntersection *ExpressDataSet::getIfcVirtualGridIntersection(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcVirtualGridIntersection * > (current->second.get());
    }
    else {
        IfcVirtualGridIntersection *ret = static_cast< IfcVirtualGridIntersection * > (allocateIfcVirtualGridIntersection(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcVirtualGridIntersection(IfcVirtualGridIntersection *arg) {
    getAll().erase(arg->getKey());
    return m_IfcVirtualGridIntersection_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcVirtualGridIntersection(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcVirtualGridIntersection *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcVirtualGridIntersection(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcVirtualGridIntersection_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcVirtualGridIntersection > ExpressDataSet::createIfcVirtualGridIntersection(bool isVolatile) {
    if (isVolatile) {
        return new IfcVirtualGridIntersection(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcVirtualGridIntersection * > (allocateIfcVirtualGridIntersection(this, Step::Id_UNSET));
    }
}

IfcVirtualGridIntersection *ExpressDataSet::cloneIfcVirtualGridIntersection(ExpressDataSet *expressDataSet, const IfcVirtualGridIntersection &obj, const CopyOp &copyop) {
    IfcVirtualGridIntersection *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcVirtualGridIntersection(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcVirtualGridIntersection_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcVirtualGridIntersection *ExpressDataSet::cloneIfcVirtualGridIntersection(const IfcVirtualGridIntersection &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcVirtualGridIntersection(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcVirtualGridIntersection(this, obj, copyop);
    }
}

IfcWall *ExpressDataSet::getIfcWall(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcWall * > (current->second.get());
    }
    else {
        IfcWall *ret = static_cast< IfcWall * > (allocateIfcWall(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcWall(IfcWall *arg) {
    getAll().erase(arg->getKey());
    return m_IfcWall_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcWall(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcWall *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcWall(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcWall_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcWall > ExpressDataSet::createIfcWall(bool isVolatile) {
    if (isVolatile) {
        return new IfcWall(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcWall * > (allocateIfcWall(this, Step::Id_UNSET));
    }
}

IfcWall *ExpressDataSet::cloneIfcWall(ExpressDataSet *expressDataSet, const IfcWall &obj, const CopyOp &copyop) {
    IfcWall *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcWall(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcWall_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcWall *ExpressDataSet::cloneIfcWall(const IfcWall &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcWall(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcWall(this, obj, copyop);
    }
}

IfcWallStandardCase *ExpressDataSet::getIfcWallStandardCase(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcWallStandardCase * > (current->second.get());
    }
    else {
        IfcWallStandardCase *ret = static_cast< IfcWallStandardCase * > (allocateIfcWallStandardCase(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcWallStandardCase(IfcWallStandardCase *arg) {
    getAll().erase(arg->getKey());
    return m_IfcWallStandardCase_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcWallStandardCase(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcWallStandardCase *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcWallStandardCase(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcWallStandardCase_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcWallStandardCase > ExpressDataSet::createIfcWallStandardCase(bool isVolatile) {
    if (isVolatile) {
        return new IfcWallStandardCase(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcWallStandardCase * > (allocateIfcWallStandardCase(this, Step::Id_UNSET));
    }
}

IfcWallStandardCase *ExpressDataSet::cloneIfcWallStandardCase(ExpressDataSet *expressDataSet, const IfcWallStandardCase &obj, const CopyOp &copyop) {
    IfcWallStandardCase *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcWallStandardCase(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcWallStandardCase_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcWallStandardCase *ExpressDataSet::cloneIfcWallStandardCase(const IfcWallStandardCase &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcWallStandardCase(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcWallStandardCase(this, obj, copyop);
    }
}

IfcWallType *ExpressDataSet::getIfcWallType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcWallType * > (current->second.get());
    }
    else {
        IfcWallType *ret = static_cast< IfcWallType * > (allocateIfcWallType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcWallType(IfcWallType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcWallType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcWallType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcWallType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcWallType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcWallType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcWallType > ExpressDataSet::createIfcWallType(bool isVolatile) {
    if (isVolatile) {
        return new IfcWallType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcWallType * > (allocateIfcWallType(this, Step::Id_UNSET));
    }
}

IfcWallType *ExpressDataSet::cloneIfcWallType(ExpressDataSet *expressDataSet, const IfcWallType &obj, const CopyOp &copyop) {
    IfcWallType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcWallType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcWallType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcWallType *ExpressDataSet::cloneIfcWallType(const IfcWallType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcWallType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcWallType(this, obj, copyop);
    }
}

IfcWasteTerminalType *ExpressDataSet::getIfcWasteTerminalType(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcWasteTerminalType * > (current->second.get());
    }
    else {
        IfcWasteTerminalType *ret = static_cast< IfcWasteTerminalType * > (allocateIfcWasteTerminalType(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcWasteTerminalType(IfcWasteTerminalType *arg) {
    getAll().erase(arg->getKey());
    return m_IfcWasteTerminalType_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcWasteTerminalType(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcWasteTerminalType *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcWasteTerminalType(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcWasteTerminalType_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcWasteTerminalType > ExpressDataSet::createIfcWasteTerminalType(bool isVolatile) {
    if (isVolatile) {
        return new IfcWasteTerminalType(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcWasteTerminalType * > (allocateIfcWasteTerminalType(this, Step::Id_UNSET));
    }
}

IfcWasteTerminalType *ExpressDataSet::cloneIfcWasteTerminalType(ExpressDataSet *expressDataSet, const IfcWasteTerminalType &obj, const CopyOp &copyop) {
    IfcWasteTerminalType *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcWasteTerminalType(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcWasteTerminalType_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcWasteTerminalType *ExpressDataSet::cloneIfcWasteTerminalType(const IfcWasteTerminalType &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcWasteTerminalType(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcWasteTerminalType(this, obj, copyop);
    }
}

IfcWaterProperties *ExpressDataSet::getIfcWaterProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcWaterProperties * > (current->second.get());
    }
    else {
        IfcWaterProperties *ret = static_cast< IfcWaterProperties * > (allocateIfcWaterProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcWaterProperties(IfcWaterProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcWaterProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcWaterProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcWaterProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcWaterProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcWaterProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcWaterProperties > ExpressDataSet::createIfcWaterProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcWaterProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcWaterProperties * > (allocateIfcWaterProperties(this, Step::Id_UNSET));
    }
}

IfcWaterProperties *ExpressDataSet::cloneIfcWaterProperties(ExpressDataSet *expressDataSet, const IfcWaterProperties &obj, const CopyOp &copyop) {
    IfcWaterProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcWaterProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcWaterProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcWaterProperties *ExpressDataSet::cloneIfcWaterProperties(const IfcWaterProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcWaterProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcWaterProperties(this, obj, copyop);
    }
}

IfcWindow *ExpressDataSet::getIfcWindow(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcWindow * > (current->second.get());
    }
    else {
        IfcWindow *ret = static_cast< IfcWindow * > (allocateIfcWindow(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcWindow(IfcWindow *arg) {
    getAll().erase(arg->getKey());
    return m_IfcWindow_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcWindow(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcWindow *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcWindow(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcWindow_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcWindow > ExpressDataSet::createIfcWindow(bool isVolatile) {
    if (isVolatile) {
        return new IfcWindow(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcWindow * > (allocateIfcWindow(this, Step::Id_UNSET));
    }
}

IfcWindow *ExpressDataSet::cloneIfcWindow(ExpressDataSet *expressDataSet, const IfcWindow &obj, const CopyOp &copyop) {
    IfcWindow *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcWindow(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcWindow_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcWindow *ExpressDataSet::cloneIfcWindow(const IfcWindow &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcWindow(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcWindow(this, obj, copyop);
    }
}

IfcWindowLiningProperties *ExpressDataSet::getIfcWindowLiningProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcWindowLiningProperties * > (current->second.get());
    }
    else {
        IfcWindowLiningProperties *ret = static_cast< IfcWindowLiningProperties * > (allocateIfcWindowLiningProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcWindowLiningProperties(IfcWindowLiningProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcWindowLiningProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcWindowLiningProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcWindowLiningProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcWindowLiningProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcWindowLiningProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcWindowLiningProperties > ExpressDataSet::createIfcWindowLiningProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcWindowLiningProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcWindowLiningProperties * > (allocateIfcWindowLiningProperties(this, Step::Id_UNSET));
    }
}

IfcWindowLiningProperties *ExpressDataSet::cloneIfcWindowLiningProperties(ExpressDataSet *expressDataSet, const IfcWindowLiningProperties &obj, const CopyOp &copyop) {
    IfcWindowLiningProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcWindowLiningProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcWindowLiningProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcWindowLiningProperties *ExpressDataSet::cloneIfcWindowLiningProperties(const IfcWindowLiningProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcWindowLiningProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcWindowLiningProperties(this, obj, copyop);
    }
}

IfcWindowPanelProperties *ExpressDataSet::getIfcWindowPanelProperties(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcWindowPanelProperties * > (current->second.get());
    }
    else {
        IfcWindowPanelProperties *ret = static_cast< IfcWindowPanelProperties * > (allocateIfcWindowPanelProperties(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcWindowPanelProperties(IfcWindowPanelProperties *arg) {
    getAll().erase(arg->getKey());
    return m_IfcWindowPanelProperties_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcWindowPanelProperties(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcWindowPanelProperties *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcWindowPanelProperties(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcWindowPanelProperties_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcWindowPanelProperties > ExpressDataSet::createIfcWindowPanelProperties(bool isVolatile) {
    if (isVolatile) {
        return new IfcWindowPanelProperties(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcWindowPanelProperties * > (allocateIfcWindowPanelProperties(this, Step::Id_UNSET));
    }
}

IfcWindowPanelProperties *ExpressDataSet::cloneIfcWindowPanelProperties(ExpressDataSet *expressDataSet, const IfcWindowPanelProperties &obj, const CopyOp &copyop) {
    IfcWindowPanelProperties *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcWindowPanelProperties(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcWindowPanelProperties_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcWindowPanelProperties *ExpressDataSet::cloneIfcWindowPanelProperties(const IfcWindowPanelProperties &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcWindowPanelProperties(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcWindowPanelProperties(this, obj, copyop);
    }
}

IfcWindowStyle *ExpressDataSet::getIfcWindowStyle(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcWindowStyle * > (current->second.get());
    }
    else {
        IfcWindowStyle *ret = static_cast< IfcWindowStyle * > (allocateIfcWindowStyle(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcWindowStyle(IfcWindowStyle *arg) {
    getAll().erase(arg->getKey());
    return m_IfcWindowStyle_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcWindowStyle(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcWindowStyle *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcWindowStyle(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcWindowStyle_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcWindowStyle > ExpressDataSet::createIfcWindowStyle(bool isVolatile) {
    if (isVolatile) {
        return new IfcWindowStyle(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcWindowStyle * > (allocateIfcWindowStyle(this, Step::Id_UNSET));
    }
}

IfcWindowStyle *ExpressDataSet::cloneIfcWindowStyle(ExpressDataSet *expressDataSet, const IfcWindowStyle &obj, const CopyOp &copyop) {
    IfcWindowStyle *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcWindowStyle(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcWindowStyle_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcWindowStyle *ExpressDataSet::cloneIfcWindowStyle(const IfcWindowStyle &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcWindowStyle(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcWindowStyle(this, obj, copyop);
    }
}

IfcWorkPlan *ExpressDataSet::getIfcWorkPlan(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcWorkPlan * > (current->second.get());
    }
    else {
        IfcWorkPlan *ret = static_cast< IfcWorkPlan * > (allocateIfcWorkPlan(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcWorkPlan(IfcWorkPlan *arg) {
    getAll().erase(arg->getKey());
    return m_IfcWorkPlan_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcWorkPlan(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcWorkPlan *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcWorkPlan(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcWorkPlan_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcWorkPlan > ExpressDataSet::createIfcWorkPlan(bool isVolatile) {
    if (isVolatile) {
        return new IfcWorkPlan(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcWorkPlan * > (allocateIfcWorkPlan(this, Step::Id_UNSET));
    }
}

IfcWorkPlan *ExpressDataSet::cloneIfcWorkPlan(ExpressDataSet *expressDataSet, const IfcWorkPlan &obj, const CopyOp &copyop) {
    IfcWorkPlan *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcWorkPlan(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcWorkPlan_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcWorkPlan *ExpressDataSet::cloneIfcWorkPlan(const IfcWorkPlan &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcWorkPlan(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcWorkPlan(this, obj, copyop);
    }
}

IfcWorkSchedule *ExpressDataSet::getIfcWorkSchedule(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcWorkSchedule * > (current->second.get());
    }
    else {
        IfcWorkSchedule *ret = static_cast< IfcWorkSchedule * > (allocateIfcWorkSchedule(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcWorkSchedule(IfcWorkSchedule *arg) {
    getAll().erase(arg->getKey());
    return m_IfcWorkSchedule_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcWorkSchedule(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcWorkSchedule *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcWorkSchedule(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcWorkSchedule_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcWorkSchedule > ExpressDataSet::createIfcWorkSchedule(bool isVolatile) {
    if (isVolatile) {
        return new IfcWorkSchedule(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcWorkSchedule * > (allocateIfcWorkSchedule(this, Step::Id_UNSET));
    }
}

IfcWorkSchedule *ExpressDataSet::cloneIfcWorkSchedule(ExpressDataSet *expressDataSet, const IfcWorkSchedule &obj, const CopyOp &copyop) {
    IfcWorkSchedule *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcWorkSchedule(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcWorkSchedule_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcWorkSchedule *ExpressDataSet::cloneIfcWorkSchedule(const IfcWorkSchedule &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcWorkSchedule(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcWorkSchedule(this, obj, copyop);
    }
}

IfcZShapeProfileDef *ExpressDataSet::getIfcZShapeProfileDef(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcZShapeProfileDef * > (current->second.get());
    }
    else {
        IfcZShapeProfileDef *ret = static_cast< IfcZShapeProfileDef * > (allocateIfcZShapeProfileDef(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcZShapeProfileDef(IfcZShapeProfileDef *arg) {
    getAll().erase(arg->getKey());
    return m_IfcZShapeProfileDef_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcZShapeProfileDef(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcZShapeProfileDef *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcZShapeProfileDef(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcZShapeProfileDef_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcZShapeProfileDef > ExpressDataSet::createIfcZShapeProfileDef(bool isVolatile) {
    if (isVolatile) {
        return new IfcZShapeProfileDef(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcZShapeProfileDef * > (allocateIfcZShapeProfileDef(this, Step::Id_UNSET));
    }
}

IfcZShapeProfileDef *ExpressDataSet::cloneIfcZShapeProfileDef(ExpressDataSet *expressDataSet, const IfcZShapeProfileDef &obj, const CopyOp &copyop) {
    IfcZShapeProfileDef *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcZShapeProfileDef(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcZShapeProfileDef_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcZShapeProfileDef *ExpressDataSet::cloneIfcZShapeProfileDef(const IfcZShapeProfileDef &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcZShapeProfileDef(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcZShapeProfileDef(this, obj, copyop);
    }
}

IfcZone *ExpressDataSet::getIfcZone(Step::Id id) {
    Step::MapOfEntities::iterator current = getAll().find(id);
    if (current == getAll().end()) {
        return NULL;
    }
    if (!current->second->isOfType(Step::BaseSPFObject::getClassType())) {
        return static_cast< IfcZone * > (current->second.get());
    }
    else {
        IfcZone *ret = static_cast< IfcZone * > (allocateIfcZone(this, id));
        return ret;
    }
}

bool ExpressDataSet::removeIfcZone(IfcZone *arg) {
    getAll().erase(arg->getKey());
    return m_IfcZone_Map.erase(arg->getKey()) > 0;
}

Step::BaseEntity *ExpressDataSet::allocateIfcZone(Step::BaseExpressDataSet *expressDataSet, Step::Id id) {
    Step::SPFData *arg;
    IfcZone *ret;
    if (id == Step::Id_UNSET) {
        id = static_cast< ExpressDataSet * > (expressDataSet)->getNewId();
        arg = 0;
    }
    else {
        arg = static_cast< ExpressDataSet * > (expressDataSet)->getArgs(id);
    }
    ret = new IfcZone(id, arg);
    static_cast< ExpressDataSet * > (expressDataSet)->m_IfcZone_Map[id] = ret;
    static_cast< ExpressDataSet * > (expressDataSet)->registerObject(id, ret);
    return ret;
}

Step::RefPtr< IfcZone > ExpressDataSet::createIfcZone(bool isVolatile) {
    if (isVolatile) {
        return new IfcZone(Step::Id_UNSET, 0);
    }
    else {
        return static_cast< IfcZone * > (allocateIfcZone(this, Step::Id_UNSET));
    }
}

IfcZone *ExpressDataSet::cloneIfcZone(ExpressDataSet *expressDataSet, const IfcZone &obj, const CopyOp &copyop) {
    IfcZone *ret;
    Step::Id id = expressDataSet->getNewId();
    ret = new IfcZone(id, 0);
    ret->setKey(id);
    expressDataSet->m_IfcZone_Map[id] = ret;
    expressDataSet->registerObject(id, ret);
    copyop.associate(&obj, ret);
    ret->copy(obj, copyop);
    return ret;
}

IfcZone *ExpressDataSet::cloneIfcZone(const IfcZone &obj, const CopyOp &copyop) {
    if (copyop.getExpressDataSet()) {
        return ExpressDataSet::cloneIfcZone(const_cast< CopyOp & > (copyop).getExpressDataSet(), obj, copyop);
    }
    else {
        return ExpressDataSet::cloneIfcZone(this, obj, copyop);
    }
}

Step::RefLinkedList< Ifc2DCompositeCurve > &ExpressDataSet::getAllIfc2DCompositeCurve() {
    return m_refIfc2DCompositeCurveList;
}

Step::RefLinkedList< IfcActionRequest > &ExpressDataSet::getAllIfcActionRequest() {
    return m_refIfcActionRequestList;
}

Step::RefLinkedList< IfcActor > &ExpressDataSet::getAllIfcActor() {
    return m_refIfcActorList;
}

Step::RefLinkedList< IfcActorRole > &ExpressDataSet::getAllIfcActorRole() {
    return m_refIfcActorRoleList;
}

Step::RefLinkedList< IfcActuatorType > &ExpressDataSet::getAllIfcActuatorType() {
    return m_refIfcActuatorTypeList;
}

Step::RefLinkedList< IfcAddress > &ExpressDataSet::getAllIfcAddress() {
    return m_refIfcAddressList;
}

Step::RefLinkedList< IfcAirTerminalBoxType > &ExpressDataSet::getAllIfcAirTerminalBoxType() {
    return m_refIfcAirTerminalBoxTypeList;
}

Step::RefLinkedList< IfcAirTerminalType > &ExpressDataSet::getAllIfcAirTerminalType() {
    return m_refIfcAirTerminalTypeList;
}

Step::RefLinkedList< IfcAirToAirHeatRecoveryType > &ExpressDataSet::getAllIfcAirToAirHeatRecoveryType() {
    return m_refIfcAirToAirHeatRecoveryTypeList;
}

Step::RefLinkedList< IfcAlarmType > &ExpressDataSet::getAllIfcAlarmType() {
    return m_refIfcAlarmTypeList;
}

Step::RefLinkedList< IfcAngularDimension > &ExpressDataSet::getAllIfcAngularDimension() {
    return m_refIfcAngularDimensionList;
}

Step::RefLinkedList< IfcAnnotation > &ExpressDataSet::getAllIfcAnnotation() {
    return m_refIfcAnnotationList;
}

Step::RefLinkedList< IfcAnnotationCurveOccurrence > &ExpressDataSet::getAllIfcAnnotationCurveOccurrence() {
    return m_refIfcAnnotationCurveOccurrenceList;
}

Step::RefLinkedList< IfcAnnotationFillArea > &ExpressDataSet::getAllIfcAnnotationFillArea() {
    return m_refIfcAnnotationFillAreaList;
}

Step::RefLinkedList< IfcAnnotationFillAreaOccurrence > &ExpressDataSet::getAllIfcAnnotationFillAreaOccurrence() {
    return m_refIfcAnnotationFillAreaOccurrenceList;
}

Step::RefLinkedList< IfcAnnotationOccurrence > &ExpressDataSet::getAllIfcAnnotationOccurrence() {
    return m_refIfcAnnotationOccurrenceList;
}

Step::RefLinkedList< IfcAnnotationSurface > &ExpressDataSet::getAllIfcAnnotationSurface() {
    return m_refIfcAnnotationSurfaceList;
}

Step::RefLinkedList< IfcAnnotationSurfaceOccurrence > &ExpressDataSet::getAllIfcAnnotationSurfaceOccurrence() {
    return m_refIfcAnnotationSurfaceOccurrenceList;
}

Step::RefLinkedList< IfcAnnotationSymbolOccurrence > &ExpressDataSet::getAllIfcAnnotationSymbolOccurrence() {
    return m_refIfcAnnotationSymbolOccurrenceList;
}

Step::RefLinkedList< IfcAnnotationTextOccurrence > &ExpressDataSet::getAllIfcAnnotationTextOccurrence() {
    return m_refIfcAnnotationTextOccurrenceList;
}

Step::RefLinkedList< IfcApplication > &ExpressDataSet::getAllIfcApplication() {
    return m_refIfcApplicationList;
}

Step::RefLinkedList< IfcAppliedValue > &ExpressDataSet::getAllIfcAppliedValue() {
    return m_refIfcAppliedValueList;
}

Step::RefLinkedList< IfcAppliedValueRelationship > &ExpressDataSet::getAllIfcAppliedValueRelationship() {
    return m_refIfcAppliedValueRelationshipList;
}

Step::RefLinkedList< IfcApproval > &ExpressDataSet::getAllIfcApproval() {
    return m_refIfcApprovalList;
}

Step::RefLinkedList< IfcApprovalActorRelationship > &ExpressDataSet::getAllIfcApprovalActorRelationship() {
    return m_refIfcApprovalActorRelationshipList;
}

Step::RefLinkedList< IfcApprovalPropertyRelationship > &ExpressDataSet::getAllIfcApprovalPropertyRelationship() {
    return m_refIfcApprovalPropertyRelationshipList;
}

Step::RefLinkedList< IfcApprovalRelationship > &ExpressDataSet::getAllIfcApprovalRelationship() {
    return m_refIfcApprovalRelationshipList;
}

Step::RefLinkedList< IfcArbitraryClosedProfileDef > &ExpressDataSet::getAllIfcArbitraryClosedProfileDef() {
    return m_refIfcArbitraryClosedProfileDefList;
}

Step::RefLinkedList< IfcArbitraryOpenProfileDef > &ExpressDataSet::getAllIfcArbitraryOpenProfileDef() {
    return m_refIfcArbitraryOpenProfileDefList;
}

Step::RefLinkedList< IfcArbitraryProfileDefWithVoids > &ExpressDataSet::getAllIfcArbitraryProfileDefWithVoids() {
    return m_refIfcArbitraryProfileDefWithVoidsList;
}

Step::RefLinkedList< IfcAsset > &ExpressDataSet::getAllIfcAsset() {
    return m_refIfcAssetList;
}

Step::RefLinkedList< IfcAsymmetricIShapeProfileDef > &ExpressDataSet::getAllIfcAsymmetricIShapeProfileDef() {
    return m_refIfcAsymmetricIShapeProfileDefList;
}

Step::RefLinkedList< IfcAxis1Placement > &ExpressDataSet::getAllIfcAxis1Placement() {
    return m_refIfcAxis1PlacementList;
}

Step::RefLinkedList< IfcAxis2Placement2D > &ExpressDataSet::getAllIfcAxis2Placement2D() {
    return m_refIfcAxis2Placement2DList;
}

Step::RefLinkedList< IfcAxis2Placement3D > &ExpressDataSet::getAllIfcAxis2Placement3D() {
    return m_refIfcAxis2Placement3DList;
}

Step::RefLinkedList< IfcBSplineCurve > &ExpressDataSet::getAllIfcBSplineCurve() {
    return m_refIfcBSplineCurveList;
}

Step::RefLinkedList< IfcBeam > &ExpressDataSet::getAllIfcBeam() {
    return m_refIfcBeamList;
}

Step::RefLinkedList< IfcBeamType > &ExpressDataSet::getAllIfcBeamType() {
    return m_refIfcBeamTypeList;
}

Step::RefLinkedList< IfcBezierCurve > &ExpressDataSet::getAllIfcBezierCurve() {
    return m_refIfcBezierCurveList;
}

Step::RefLinkedList< IfcBlobTexture > &ExpressDataSet::getAllIfcBlobTexture() {
    return m_refIfcBlobTextureList;
}

Step::RefLinkedList< IfcBlock > &ExpressDataSet::getAllIfcBlock() {
    return m_refIfcBlockList;
}

Step::RefLinkedList< IfcBoilerType > &ExpressDataSet::getAllIfcBoilerType() {
    return m_refIfcBoilerTypeList;
}

Step::RefLinkedList< IfcBooleanClippingResult > &ExpressDataSet::getAllIfcBooleanClippingResult() {
    return m_refIfcBooleanClippingResultList;
}

Step::RefLinkedList< IfcBooleanResult > &ExpressDataSet::getAllIfcBooleanResult() {
    return m_refIfcBooleanResultList;
}

Step::RefLinkedList< IfcBoundaryCondition > &ExpressDataSet::getAllIfcBoundaryCondition() {
    return m_refIfcBoundaryConditionList;
}

Step::RefLinkedList< IfcBoundaryEdgeCondition > &ExpressDataSet::getAllIfcBoundaryEdgeCondition() {
    return m_refIfcBoundaryEdgeConditionList;
}

Step::RefLinkedList< IfcBoundaryFaceCondition > &ExpressDataSet::getAllIfcBoundaryFaceCondition() {
    return m_refIfcBoundaryFaceConditionList;
}

Step::RefLinkedList< IfcBoundaryNodeCondition > &ExpressDataSet::getAllIfcBoundaryNodeCondition() {
    return m_refIfcBoundaryNodeConditionList;
}

Step::RefLinkedList< IfcBoundaryNodeConditionWarping > &ExpressDataSet::getAllIfcBoundaryNodeConditionWarping() {
    return m_refIfcBoundaryNodeConditionWarpingList;
}

Step::RefLinkedList< IfcBoundedCurve > &ExpressDataSet::getAllIfcBoundedCurve() {
    return m_refIfcBoundedCurveList;
}

Step::RefLinkedList< IfcBoundedSurface > &ExpressDataSet::getAllIfcBoundedSurface() {
    return m_refIfcBoundedSurfaceList;
}

Step::RefLinkedList< IfcBoundingBox > &ExpressDataSet::getAllIfcBoundingBox() {
    return m_refIfcBoundingBoxList;
}

Step::RefLinkedList< IfcBoxedHalfSpace > &ExpressDataSet::getAllIfcBoxedHalfSpace() {
    return m_refIfcBoxedHalfSpaceList;
}

Step::RefLinkedList< IfcBuilding > &ExpressDataSet::getAllIfcBuilding() {
    return m_refIfcBuildingList;
}

Step::RefLinkedList< IfcBuildingElement > &ExpressDataSet::getAllIfcBuildingElement() {
    return m_refIfcBuildingElementList;
}

Step::RefLinkedList< IfcBuildingElementComponent > &ExpressDataSet::getAllIfcBuildingElementComponent() {
    return m_refIfcBuildingElementComponentList;
}

Step::RefLinkedList< IfcBuildingElementPart > &ExpressDataSet::getAllIfcBuildingElementPart() {
    return m_refIfcBuildingElementPartList;
}

Step::RefLinkedList< IfcBuildingElementProxy > &ExpressDataSet::getAllIfcBuildingElementProxy() {
    return m_refIfcBuildingElementProxyList;
}

Step::RefLinkedList< IfcBuildingElementProxyType > &ExpressDataSet::getAllIfcBuildingElementProxyType() {
    return m_refIfcBuildingElementProxyTypeList;
}

Step::RefLinkedList< IfcBuildingElementType > &ExpressDataSet::getAllIfcBuildingElementType() {
    return m_refIfcBuildingElementTypeList;
}

Step::RefLinkedList< IfcBuildingStorey > &ExpressDataSet::getAllIfcBuildingStorey() {
    return m_refIfcBuildingStoreyList;
}

Step::RefLinkedList< IfcCShapeProfileDef > &ExpressDataSet::getAllIfcCShapeProfileDef() {
    return m_refIfcCShapeProfileDefList;
}

Step::RefLinkedList< IfcCableCarrierFittingType > &ExpressDataSet::getAllIfcCableCarrierFittingType() {
    return m_refIfcCableCarrierFittingTypeList;
}

Step::RefLinkedList< IfcCableCarrierSegmentType > &ExpressDataSet::getAllIfcCableCarrierSegmentType() {
    return m_refIfcCableCarrierSegmentTypeList;
}

Step::RefLinkedList< IfcCableSegmentType > &ExpressDataSet::getAllIfcCableSegmentType() {
    return m_refIfcCableSegmentTypeList;
}

Step::RefLinkedList< IfcCalendarDate > &ExpressDataSet::getAllIfcCalendarDate() {
    return m_refIfcCalendarDateList;
}

Step::RefLinkedList< IfcCartesianPoint > &ExpressDataSet::getAllIfcCartesianPoint() {
    return m_refIfcCartesianPointList;
}

Step::RefLinkedList< IfcCartesianTransformationOperator > &ExpressDataSet::getAllIfcCartesianTransformationOperator() {
    return m_refIfcCartesianTransformationOperatorList;
}

Step::RefLinkedList< IfcCartesianTransformationOperator2D > &ExpressDataSet::getAllIfcCartesianTransformationOperator2D() {
    return m_refIfcCartesianTransformationOperator2DList;
}

Step::RefLinkedList< IfcCartesianTransformationOperator2DnonUniform > &ExpressDataSet::getAllIfcCartesianTransformationOperator2DnonUniform() {
    return m_refIfcCartesianTransformationOperator2DnonUniformList;
}

Step::RefLinkedList< IfcCartesianTransformationOperator3D > &ExpressDataSet::getAllIfcCartesianTransformationOperator3D() {
    return m_refIfcCartesianTransformationOperator3DList;
}

Step::RefLinkedList< IfcCartesianTransformationOperator3DnonUniform > &ExpressDataSet::getAllIfcCartesianTransformationOperator3DnonUniform() {
    return m_refIfcCartesianTransformationOperator3DnonUniformList;
}

Step::RefLinkedList< IfcCenterLineProfileDef > &ExpressDataSet::getAllIfcCenterLineProfileDef() {
    return m_refIfcCenterLineProfileDefList;
}

Step::RefLinkedList< IfcChamferEdgeFeature > &ExpressDataSet::getAllIfcChamferEdgeFeature() {
    return m_refIfcChamferEdgeFeatureList;
}

Step::RefLinkedList< IfcChillerType > &ExpressDataSet::getAllIfcChillerType() {
    return m_refIfcChillerTypeList;
}

Step::RefLinkedList< IfcCircle > &ExpressDataSet::getAllIfcCircle() {
    return m_refIfcCircleList;
}

Step::RefLinkedList< IfcCircleHollowProfileDef > &ExpressDataSet::getAllIfcCircleHollowProfileDef() {
    return m_refIfcCircleHollowProfileDefList;
}

Step::RefLinkedList< IfcCircleProfileDef > &ExpressDataSet::getAllIfcCircleProfileDef() {
    return m_refIfcCircleProfileDefList;
}

Step::RefLinkedList< IfcClassification > &ExpressDataSet::getAllIfcClassification() {
    return m_refIfcClassificationList;
}

Step::RefLinkedList< IfcClassificationItem > &ExpressDataSet::getAllIfcClassificationItem() {
    return m_refIfcClassificationItemList;
}

Step::RefLinkedList< IfcClassificationItemRelationship > &ExpressDataSet::getAllIfcClassificationItemRelationship() {
    return m_refIfcClassificationItemRelationshipList;
}

Step::RefLinkedList< IfcClassificationNotation > &ExpressDataSet::getAllIfcClassificationNotation() {
    return m_refIfcClassificationNotationList;
}

Step::RefLinkedList< IfcClassificationNotationFacet > &ExpressDataSet::getAllIfcClassificationNotationFacet() {
    return m_refIfcClassificationNotationFacetList;
}

Step::RefLinkedList< IfcClassificationReference > &ExpressDataSet::getAllIfcClassificationReference() {
    return m_refIfcClassificationReferenceList;
}

Step::RefLinkedList< IfcClosedShell > &ExpressDataSet::getAllIfcClosedShell() {
    return m_refIfcClosedShellList;
}

Step::RefLinkedList< IfcCoilType > &ExpressDataSet::getAllIfcCoilType() {
    return m_refIfcCoilTypeList;
}

Step::RefLinkedList< IfcColourRgb > &ExpressDataSet::getAllIfcColourRgb() {
    return m_refIfcColourRgbList;
}

Step::RefLinkedList< IfcColourSpecification > &ExpressDataSet::getAllIfcColourSpecification() {
    return m_refIfcColourSpecificationList;
}

Step::RefLinkedList< IfcColumn > &ExpressDataSet::getAllIfcColumn() {
    return m_refIfcColumnList;
}

Step::RefLinkedList< IfcColumnType > &ExpressDataSet::getAllIfcColumnType() {
    return m_refIfcColumnTypeList;
}

Step::RefLinkedList< IfcComplexProperty > &ExpressDataSet::getAllIfcComplexProperty() {
    return m_refIfcComplexPropertyList;
}

Step::RefLinkedList< IfcCompositeCurve > &ExpressDataSet::getAllIfcCompositeCurve() {
    return m_refIfcCompositeCurveList;
}

Step::RefLinkedList< IfcCompositeCurveSegment > &ExpressDataSet::getAllIfcCompositeCurveSegment() {
    return m_refIfcCompositeCurveSegmentList;
}

Step::RefLinkedList< IfcCompositeProfileDef > &ExpressDataSet::getAllIfcCompositeProfileDef() {
    return m_refIfcCompositeProfileDefList;
}

Step::RefLinkedList< IfcCompressorType > &ExpressDataSet::getAllIfcCompressorType() {
    return m_refIfcCompressorTypeList;
}

Step::RefLinkedList< IfcCondenserType > &ExpressDataSet::getAllIfcCondenserType() {
    return m_refIfcCondenserTypeList;
}

Step::RefLinkedList< IfcCondition > &ExpressDataSet::getAllIfcCondition() {
    return m_refIfcConditionList;
}

Step::RefLinkedList< IfcConditionCriterion > &ExpressDataSet::getAllIfcConditionCriterion() {
    return m_refIfcConditionCriterionList;
}

Step::RefLinkedList< IfcConic > &ExpressDataSet::getAllIfcConic() {
    return m_refIfcConicList;
}

Step::RefLinkedList< IfcConnectedFaceSet > &ExpressDataSet::getAllIfcConnectedFaceSet() {
    return m_refIfcConnectedFaceSetList;
}

Step::RefLinkedList< IfcConnectionCurveGeometry > &ExpressDataSet::getAllIfcConnectionCurveGeometry() {
    return m_refIfcConnectionCurveGeometryList;
}

Step::RefLinkedList< IfcConnectionGeometry > &ExpressDataSet::getAllIfcConnectionGeometry() {
    return m_refIfcConnectionGeometryList;
}

Step::RefLinkedList< IfcConnectionPointEccentricity > &ExpressDataSet::getAllIfcConnectionPointEccentricity() {
    return m_refIfcConnectionPointEccentricityList;
}

Step::RefLinkedList< IfcConnectionPointGeometry > &ExpressDataSet::getAllIfcConnectionPointGeometry() {
    return m_refIfcConnectionPointGeometryList;
}

Step::RefLinkedList< IfcConnectionPortGeometry > &ExpressDataSet::getAllIfcConnectionPortGeometry() {
    return m_refIfcConnectionPortGeometryList;
}

Step::RefLinkedList< IfcConnectionSurfaceGeometry > &ExpressDataSet::getAllIfcConnectionSurfaceGeometry() {
    return m_refIfcConnectionSurfaceGeometryList;
}

Step::RefLinkedList< IfcConstraint > &ExpressDataSet::getAllIfcConstraint() {
    return m_refIfcConstraintList;
}

Step::RefLinkedList< IfcConstraintAggregationRelationship > &ExpressDataSet::getAllIfcConstraintAggregationRelationship() {
    return m_refIfcConstraintAggregationRelationshipList;
}

Step::RefLinkedList< IfcConstraintClassificationRelationship > &ExpressDataSet::getAllIfcConstraintClassificationRelationship() {
    return m_refIfcConstraintClassificationRelationshipList;
}

Step::RefLinkedList< IfcConstraintRelationship > &ExpressDataSet::getAllIfcConstraintRelationship() {
    return m_refIfcConstraintRelationshipList;
}

Step::RefLinkedList< IfcConstructionEquipmentResource > &ExpressDataSet::getAllIfcConstructionEquipmentResource() {
    return m_refIfcConstructionEquipmentResourceList;
}

Step::RefLinkedList< IfcConstructionMaterialResource > &ExpressDataSet::getAllIfcConstructionMaterialResource() {
    return m_refIfcConstructionMaterialResourceList;
}

Step::RefLinkedList< IfcConstructionProductResource > &ExpressDataSet::getAllIfcConstructionProductResource() {
    return m_refIfcConstructionProductResourceList;
}

Step::RefLinkedList< IfcConstructionResource > &ExpressDataSet::getAllIfcConstructionResource() {
    return m_refIfcConstructionResourceList;
}

Step::RefLinkedList< IfcContextDependentUnit > &ExpressDataSet::getAllIfcContextDependentUnit() {
    return m_refIfcContextDependentUnitList;
}

Step::RefLinkedList< IfcControl > &ExpressDataSet::getAllIfcControl() {
    return m_refIfcControlList;
}

Step::RefLinkedList< IfcControllerType > &ExpressDataSet::getAllIfcControllerType() {
    return m_refIfcControllerTypeList;
}

Step::RefLinkedList< IfcConversionBasedUnit > &ExpressDataSet::getAllIfcConversionBasedUnit() {
    return m_refIfcConversionBasedUnitList;
}

Step::RefLinkedList< IfcCooledBeamType > &ExpressDataSet::getAllIfcCooledBeamType() {
    return m_refIfcCooledBeamTypeList;
}

Step::RefLinkedList< IfcCoolingTowerType > &ExpressDataSet::getAllIfcCoolingTowerType() {
    return m_refIfcCoolingTowerTypeList;
}

Step::RefLinkedList< IfcCoordinatedUniversalTimeOffset > &ExpressDataSet::getAllIfcCoordinatedUniversalTimeOffset() {
    return m_refIfcCoordinatedUniversalTimeOffsetList;
}

Step::RefLinkedList< IfcCostItem > &ExpressDataSet::getAllIfcCostItem() {
    return m_refIfcCostItemList;
}

Step::RefLinkedList< IfcCostSchedule > &ExpressDataSet::getAllIfcCostSchedule() {
    return m_refIfcCostScheduleList;
}

Step::RefLinkedList< IfcCostValue > &ExpressDataSet::getAllIfcCostValue() {
    return m_refIfcCostValueList;
}

Step::RefLinkedList< IfcCovering > &ExpressDataSet::getAllIfcCovering() {
    return m_refIfcCoveringList;
}

Step::RefLinkedList< IfcCoveringType > &ExpressDataSet::getAllIfcCoveringType() {
    return m_refIfcCoveringTypeList;
}

Step::RefLinkedList< IfcCraneRailAShapeProfileDef > &ExpressDataSet::getAllIfcCraneRailAShapeProfileDef() {
    return m_refIfcCraneRailAShapeProfileDefList;
}

Step::RefLinkedList< IfcCraneRailFShapeProfileDef > &ExpressDataSet::getAllIfcCraneRailFShapeProfileDef() {
    return m_refIfcCraneRailFShapeProfileDefList;
}

Step::RefLinkedList< IfcCrewResource > &ExpressDataSet::getAllIfcCrewResource() {
    return m_refIfcCrewResourceList;
}

Step::RefLinkedList< IfcCsgPrimitive3D > &ExpressDataSet::getAllIfcCsgPrimitive3D() {
    return m_refIfcCsgPrimitive3DList;
}

Step::RefLinkedList< IfcCsgSolid > &ExpressDataSet::getAllIfcCsgSolid() {
    return m_refIfcCsgSolidList;
}

Step::RefLinkedList< IfcCurrencyRelationship > &ExpressDataSet::getAllIfcCurrencyRelationship() {
    return m_refIfcCurrencyRelationshipList;
}

Step::RefLinkedList< IfcCurtainWall > &ExpressDataSet::getAllIfcCurtainWall() {
    return m_refIfcCurtainWallList;
}

Step::RefLinkedList< IfcCurtainWallType > &ExpressDataSet::getAllIfcCurtainWallType() {
    return m_refIfcCurtainWallTypeList;
}

Step::RefLinkedList< IfcCurve > &ExpressDataSet::getAllIfcCurve() {
    return m_refIfcCurveList;
}

Step::RefLinkedList< IfcCurveBoundedPlane > &ExpressDataSet::getAllIfcCurveBoundedPlane() {
    return m_refIfcCurveBoundedPlaneList;
}

Step::RefLinkedList< IfcCurveStyle > &ExpressDataSet::getAllIfcCurveStyle() {
    return m_refIfcCurveStyleList;
}

Step::RefLinkedList< IfcCurveStyleFont > &ExpressDataSet::getAllIfcCurveStyleFont() {
    return m_refIfcCurveStyleFontList;
}

Step::RefLinkedList< IfcCurveStyleFontAndScaling > &ExpressDataSet::getAllIfcCurveStyleFontAndScaling() {
    return m_refIfcCurveStyleFontAndScalingList;
}

Step::RefLinkedList< IfcCurveStyleFontPattern > &ExpressDataSet::getAllIfcCurveStyleFontPattern() {
    return m_refIfcCurveStyleFontPatternList;
}

Step::RefLinkedList< IfcDamperType > &ExpressDataSet::getAllIfcDamperType() {
    return m_refIfcDamperTypeList;
}

Step::RefLinkedList< IfcDateAndTime > &ExpressDataSet::getAllIfcDateAndTime() {
    return m_refIfcDateAndTimeList;
}

Step::RefLinkedList< IfcDefinedSymbol > &ExpressDataSet::getAllIfcDefinedSymbol() {
    return m_refIfcDefinedSymbolList;
}

Step::RefLinkedList< IfcDerivedProfileDef > &ExpressDataSet::getAllIfcDerivedProfileDef() {
    return m_refIfcDerivedProfileDefList;
}

Step::RefLinkedList< IfcDerivedUnit > &ExpressDataSet::getAllIfcDerivedUnit() {
    return m_refIfcDerivedUnitList;
}

Step::RefLinkedList< IfcDerivedUnitElement > &ExpressDataSet::getAllIfcDerivedUnitElement() {
    return m_refIfcDerivedUnitElementList;
}

Step::RefLinkedList< IfcDiameterDimension > &ExpressDataSet::getAllIfcDiameterDimension() {
    return m_refIfcDiameterDimensionList;
}

Step::RefLinkedList< IfcDimensionCalloutRelationship > &ExpressDataSet::getAllIfcDimensionCalloutRelationship() {
    return m_refIfcDimensionCalloutRelationshipList;
}

Step::RefLinkedList< IfcDimensionCurve > &ExpressDataSet::getAllIfcDimensionCurve() {
    return m_refIfcDimensionCurveList;
}

Step::RefLinkedList< IfcDimensionCurveDirectedCallout > &ExpressDataSet::getAllIfcDimensionCurveDirectedCallout() {
    return m_refIfcDimensionCurveDirectedCalloutList;
}

Step::RefLinkedList< IfcDimensionCurveTerminator > &ExpressDataSet::getAllIfcDimensionCurveTerminator() {
    return m_refIfcDimensionCurveTerminatorList;
}

Step::RefLinkedList< IfcDimensionPair > &ExpressDataSet::getAllIfcDimensionPair() {
    return m_refIfcDimensionPairList;
}

Step::RefLinkedList< IfcDimensionalExponents > &ExpressDataSet::getAllIfcDimensionalExponents() {
    return m_refIfcDimensionalExponentsList;
}

Step::RefLinkedList< IfcDirection > &ExpressDataSet::getAllIfcDirection() {
    return m_refIfcDirectionList;
}

Step::RefLinkedList< IfcDiscreteAccessory > &ExpressDataSet::getAllIfcDiscreteAccessory() {
    return m_refIfcDiscreteAccessoryList;
}

Step::RefLinkedList< IfcDiscreteAccessoryType > &ExpressDataSet::getAllIfcDiscreteAccessoryType() {
    return m_refIfcDiscreteAccessoryTypeList;
}

Step::RefLinkedList< IfcDistributionChamberElement > &ExpressDataSet::getAllIfcDistributionChamberElement() {
    return m_refIfcDistributionChamberElementList;
}

Step::RefLinkedList< IfcDistributionChamberElementType > &ExpressDataSet::getAllIfcDistributionChamberElementType() {
    return m_refIfcDistributionChamberElementTypeList;
}

Step::RefLinkedList< IfcDistributionControlElement > &ExpressDataSet::getAllIfcDistributionControlElement() {
    return m_refIfcDistributionControlElementList;
}

Step::RefLinkedList< IfcDistributionControlElementType > &ExpressDataSet::getAllIfcDistributionControlElementType() {
    return m_refIfcDistributionControlElementTypeList;
}

Step::RefLinkedList< IfcDistributionElement > &ExpressDataSet::getAllIfcDistributionElement() {
    return m_refIfcDistributionElementList;
}

Step::RefLinkedList< IfcDistributionElementType > &ExpressDataSet::getAllIfcDistributionElementType() {
    return m_refIfcDistributionElementTypeList;
}

Step::RefLinkedList< IfcDistributionFlowElement > &ExpressDataSet::getAllIfcDistributionFlowElement() {
    return m_refIfcDistributionFlowElementList;
}

Step::RefLinkedList< IfcDistributionFlowElementType > &ExpressDataSet::getAllIfcDistributionFlowElementType() {
    return m_refIfcDistributionFlowElementTypeList;
}

Step::RefLinkedList< IfcDistributionPort > &ExpressDataSet::getAllIfcDistributionPort() {
    return m_refIfcDistributionPortList;
}

Step::RefLinkedList< IfcDocumentElectronicFormat > &ExpressDataSet::getAllIfcDocumentElectronicFormat() {
    return m_refIfcDocumentElectronicFormatList;
}

Step::RefLinkedList< IfcDocumentInformation > &ExpressDataSet::getAllIfcDocumentInformation() {
    return m_refIfcDocumentInformationList;
}

Step::RefLinkedList< IfcDocumentInformationRelationship > &ExpressDataSet::getAllIfcDocumentInformationRelationship() {
    return m_refIfcDocumentInformationRelationshipList;
}

Step::RefLinkedList< IfcDocumentReference > &ExpressDataSet::getAllIfcDocumentReference() {
    return m_refIfcDocumentReferenceList;
}

Step::RefLinkedList< IfcDoor > &ExpressDataSet::getAllIfcDoor() {
    return m_refIfcDoorList;
}

Step::RefLinkedList< IfcDoorLiningProperties > &ExpressDataSet::getAllIfcDoorLiningProperties() {
    return m_refIfcDoorLiningPropertiesList;
}

Step::RefLinkedList< IfcDoorPanelProperties > &ExpressDataSet::getAllIfcDoorPanelProperties() {
    return m_refIfcDoorPanelPropertiesList;
}

Step::RefLinkedList< IfcDoorStyle > &ExpressDataSet::getAllIfcDoorStyle() {
    return m_refIfcDoorStyleList;
}

Step::RefLinkedList< IfcDraughtingCallout > &ExpressDataSet::getAllIfcDraughtingCallout() {
    return m_refIfcDraughtingCalloutList;
}

Step::RefLinkedList< IfcDraughtingCalloutRelationship > &ExpressDataSet::getAllIfcDraughtingCalloutRelationship() {
    return m_refIfcDraughtingCalloutRelationshipList;
}

Step::RefLinkedList< IfcDraughtingPreDefinedColour > &ExpressDataSet::getAllIfcDraughtingPreDefinedColour() {
    return m_refIfcDraughtingPreDefinedColourList;
}

Step::RefLinkedList< IfcDraughtingPreDefinedCurveFont > &ExpressDataSet::getAllIfcDraughtingPreDefinedCurveFont() {
    return m_refIfcDraughtingPreDefinedCurveFontList;
}

Step::RefLinkedList< IfcDraughtingPreDefinedTextFont > &ExpressDataSet::getAllIfcDraughtingPreDefinedTextFont() {
    return m_refIfcDraughtingPreDefinedTextFontList;
}

Step::RefLinkedList< IfcDuctFittingType > &ExpressDataSet::getAllIfcDuctFittingType() {
    return m_refIfcDuctFittingTypeList;
}

Step::RefLinkedList< IfcDuctSegmentType > &ExpressDataSet::getAllIfcDuctSegmentType() {
    return m_refIfcDuctSegmentTypeList;
}

Step::RefLinkedList< IfcDuctSilencerType > &ExpressDataSet::getAllIfcDuctSilencerType() {
    return m_refIfcDuctSilencerTypeList;
}

Step::RefLinkedList< IfcEdge > &ExpressDataSet::getAllIfcEdge() {
    return m_refIfcEdgeList;
}

Step::RefLinkedList< IfcEdgeCurve > &ExpressDataSet::getAllIfcEdgeCurve() {
    return m_refIfcEdgeCurveList;
}

Step::RefLinkedList< IfcEdgeFeature > &ExpressDataSet::getAllIfcEdgeFeature() {
    return m_refIfcEdgeFeatureList;
}

Step::RefLinkedList< IfcEdgeLoop > &ExpressDataSet::getAllIfcEdgeLoop() {
    return m_refIfcEdgeLoopList;
}

Step::RefLinkedList< IfcElectricApplianceType > &ExpressDataSet::getAllIfcElectricApplianceType() {
    return m_refIfcElectricApplianceTypeList;
}

Step::RefLinkedList< IfcElectricDistributionPoint > &ExpressDataSet::getAllIfcElectricDistributionPoint() {
    return m_refIfcElectricDistributionPointList;
}

Step::RefLinkedList< IfcElectricFlowStorageDeviceType > &ExpressDataSet::getAllIfcElectricFlowStorageDeviceType() {
    return m_refIfcElectricFlowStorageDeviceTypeList;
}

Step::RefLinkedList< IfcElectricGeneratorType > &ExpressDataSet::getAllIfcElectricGeneratorType() {
    return m_refIfcElectricGeneratorTypeList;
}

Step::RefLinkedList< IfcElectricHeaterType > &ExpressDataSet::getAllIfcElectricHeaterType() {
    return m_refIfcElectricHeaterTypeList;
}

Step::RefLinkedList< IfcElectricMotorType > &ExpressDataSet::getAllIfcElectricMotorType() {
    return m_refIfcElectricMotorTypeList;
}

Step::RefLinkedList< IfcElectricTimeControlType > &ExpressDataSet::getAllIfcElectricTimeControlType() {
    return m_refIfcElectricTimeControlTypeList;
}

Step::RefLinkedList< IfcElectricalBaseProperties > &ExpressDataSet::getAllIfcElectricalBaseProperties() {
    return m_refIfcElectricalBasePropertiesList;
}

Step::RefLinkedList< IfcElectricalCircuit > &ExpressDataSet::getAllIfcElectricalCircuit() {
    return m_refIfcElectricalCircuitList;
}

Step::RefLinkedList< IfcElectricalElement > &ExpressDataSet::getAllIfcElectricalElement() {
    return m_refIfcElectricalElementList;
}

Step::RefLinkedList< IfcElement > &ExpressDataSet::getAllIfcElement() {
    return m_refIfcElementList;
}

Step::RefLinkedList< IfcElementAssembly > &ExpressDataSet::getAllIfcElementAssembly() {
    return m_refIfcElementAssemblyList;
}

Step::RefLinkedList< IfcElementComponent > &ExpressDataSet::getAllIfcElementComponent() {
    return m_refIfcElementComponentList;
}

Step::RefLinkedList< IfcElementComponentType > &ExpressDataSet::getAllIfcElementComponentType() {
    return m_refIfcElementComponentTypeList;
}

Step::RefLinkedList< IfcElementQuantity > &ExpressDataSet::getAllIfcElementQuantity() {
    return m_refIfcElementQuantityList;
}

Step::RefLinkedList< IfcElementType > &ExpressDataSet::getAllIfcElementType() {
    return m_refIfcElementTypeList;
}

Step::RefLinkedList< IfcElementarySurface > &ExpressDataSet::getAllIfcElementarySurface() {
    return m_refIfcElementarySurfaceList;
}

Step::RefLinkedList< IfcEllipse > &ExpressDataSet::getAllIfcEllipse() {
    return m_refIfcEllipseList;
}

Step::RefLinkedList< IfcEllipseProfileDef > &ExpressDataSet::getAllIfcEllipseProfileDef() {
    return m_refIfcEllipseProfileDefList;
}

Step::RefLinkedList< IfcEnergyConversionDevice > &ExpressDataSet::getAllIfcEnergyConversionDevice() {
    return m_refIfcEnergyConversionDeviceList;
}

Step::RefLinkedList< IfcEnergyConversionDeviceType > &ExpressDataSet::getAllIfcEnergyConversionDeviceType() {
    return m_refIfcEnergyConversionDeviceTypeList;
}

Step::RefLinkedList< IfcEnergyProperties > &ExpressDataSet::getAllIfcEnergyProperties() {
    return m_refIfcEnergyPropertiesList;
}

Step::RefLinkedList< IfcEnvironmentalImpactValue > &ExpressDataSet::getAllIfcEnvironmentalImpactValue() {
    return m_refIfcEnvironmentalImpactValueList;
}

Step::RefLinkedList< IfcEquipmentElement > &ExpressDataSet::getAllIfcEquipmentElement() {
    return m_refIfcEquipmentElementList;
}

Step::RefLinkedList< IfcEquipmentStandard > &ExpressDataSet::getAllIfcEquipmentStandard() {
    return m_refIfcEquipmentStandardList;
}

Step::RefLinkedList< IfcEvaporativeCoolerType > &ExpressDataSet::getAllIfcEvaporativeCoolerType() {
    return m_refIfcEvaporativeCoolerTypeList;
}

Step::RefLinkedList< IfcEvaporatorType > &ExpressDataSet::getAllIfcEvaporatorType() {
    return m_refIfcEvaporatorTypeList;
}

Step::RefLinkedList< IfcExtendedMaterialProperties > &ExpressDataSet::getAllIfcExtendedMaterialProperties() {
    return m_refIfcExtendedMaterialPropertiesList;
}

Step::RefLinkedList< IfcExternalReference > &ExpressDataSet::getAllIfcExternalReference() {
    return m_refIfcExternalReferenceList;
}

Step::RefLinkedList< IfcExternallyDefinedHatchStyle > &ExpressDataSet::getAllIfcExternallyDefinedHatchStyle() {
    return m_refIfcExternallyDefinedHatchStyleList;
}

Step::RefLinkedList< IfcExternallyDefinedSurfaceStyle > &ExpressDataSet::getAllIfcExternallyDefinedSurfaceStyle() {
    return m_refIfcExternallyDefinedSurfaceStyleList;
}

Step::RefLinkedList< IfcExternallyDefinedSymbol > &ExpressDataSet::getAllIfcExternallyDefinedSymbol() {
    return m_refIfcExternallyDefinedSymbolList;
}

Step::RefLinkedList< IfcExternallyDefinedTextFont > &ExpressDataSet::getAllIfcExternallyDefinedTextFont() {
    return m_refIfcExternallyDefinedTextFontList;
}

Step::RefLinkedList< IfcExtrudedAreaSolid > &ExpressDataSet::getAllIfcExtrudedAreaSolid() {
    return m_refIfcExtrudedAreaSolidList;
}

Step::RefLinkedList< IfcFace > &ExpressDataSet::getAllIfcFace() {
    return m_refIfcFaceList;
}

Step::RefLinkedList< IfcFaceBasedSurfaceModel > &ExpressDataSet::getAllIfcFaceBasedSurfaceModel() {
    return m_refIfcFaceBasedSurfaceModelList;
}

Step::RefLinkedList< IfcFaceBound > &ExpressDataSet::getAllIfcFaceBound() {
    return m_refIfcFaceBoundList;
}

Step::RefLinkedList< IfcFaceOuterBound > &ExpressDataSet::getAllIfcFaceOuterBound() {
    return m_refIfcFaceOuterBoundList;
}

Step::RefLinkedList< IfcFaceSurface > &ExpressDataSet::getAllIfcFaceSurface() {
    return m_refIfcFaceSurfaceList;
}

Step::RefLinkedList< IfcFacetedBrep > &ExpressDataSet::getAllIfcFacetedBrep() {
    return m_refIfcFacetedBrepList;
}

Step::RefLinkedList< IfcFacetedBrepWithVoids > &ExpressDataSet::getAllIfcFacetedBrepWithVoids() {
    return m_refIfcFacetedBrepWithVoidsList;
}

Step::RefLinkedList< IfcFailureConnectionCondition > &ExpressDataSet::getAllIfcFailureConnectionCondition() {
    return m_refIfcFailureConnectionConditionList;
}

Step::RefLinkedList< IfcFanType > &ExpressDataSet::getAllIfcFanType() {
    return m_refIfcFanTypeList;
}

Step::RefLinkedList< IfcFastener > &ExpressDataSet::getAllIfcFastener() {
    return m_refIfcFastenerList;
}

Step::RefLinkedList< IfcFastenerType > &ExpressDataSet::getAllIfcFastenerType() {
    return m_refIfcFastenerTypeList;
}

Step::RefLinkedList< IfcFeatureElement > &ExpressDataSet::getAllIfcFeatureElement() {
    return m_refIfcFeatureElementList;
}

Step::RefLinkedList< IfcFeatureElementAddition > &ExpressDataSet::getAllIfcFeatureElementAddition() {
    return m_refIfcFeatureElementAdditionList;
}

Step::RefLinkedList< IfcFeatureElementSubtraction > &ExpressDataSet::getAllIfcFeatureElementSubtraction() {
    return m_refIfcFeatureElementSubtractionList;
}

Step::RefLinkedList< IfcFillAreaStyle > &ExpressDataSet::getAllIfcFillAreaStyle() {
    return m_refIfcFillAreaStyleList;
}

Step::RefLinkedList< IfcFillAreaStyleHatching > &ExpressDataSet::getAllIfcFillAreaStyleHatching() {
    return m_refIfcFillAreaStyleHatchingList;
}

Step::RefLinkedList< IfcFillAreaStyleTileSymbolWithStyle > &ExpressDataSet::getAllIfcFillAreaStyleTileSymbolWithStyle() {
    return m_refIfcFillAreaStyleTileSymbolWithStyleList;
}

Step::RefLinkedList< IfcFillAreaStyleTiles > &ExpressDataSet::getAllIfcFillAreaStyleTiles() {
    return m_refIfcFillAreaStyleTilesList;
}

Step::RefLinkedList< IfcFilterType > &ExpressDataSet::getAllIfcFilterType() {
    return m_refIfcFilterTypeList;
}

Step::RefLinkedList< IfcFireSuppressionTerminalType > &ExpressDataSet::getAllIfcFireSuppressionTerminalType() {
    return m_refIfcFireSuppressionTerminalTypeList;
}

Step::RefLinkedList< IfcFlowController > &ExpressDataSet::getAllIfcFlowController() {
    return m_refIfcFlowControllerList;
}

Step::RefLinkedList< IfcFlowControllerType > &ExpressDataSet::getAllIfcFlowControllerType() {
    return m_refIfcFlowControllerTypeList;
}

Step::RefLinkedList< IfcFlowFitting > &ExpressDataSet::getAllIfcFlowFitting() {
    return m_refIfcFlowFittingList;
}

Step::RefLinkedList< IfcFlowFittingType > &ExpressDataSet::getAllIfcFlowFittingType() {
    return m_refIfcFlowFittingTypeList;
}

Step::RefLinkedList< IfcFlowInstrumentType > &ExpressDataSet::getAllIfcFlowInstrumentType() {
    return m_refIfcFlowInstrumentTypeList;
}

Step::RefLinkedList< IfcFlowMeterType > &ExpressDataSet::getAllIfcFlowMeterType() {
    return m_refIfcFlowMeterTypeList;
}

Step::RefLinkedList< IfcFlowMovingDevice > &ExpressDataSet::getAllIfcFlowMovingDevice() {
    return m_refIfcFlowMovingDeviceList;
}

Step::RefLinkedList< IfcFlowMovingDeviceType > &ExpressDataSet::getAllIfcFlowMovingDeviceType() {
    return m_refIfcFlowMovingDeviceTypeList;
}

Step::RefLinkedList< IfcFlowSegment > &ExpressDataSet::getAllIfcFlowSegment() {
    return m_refIfcFlowSegmentList;
}

Step::RefLinkedList< IfcFlowSegmentType > &ExpressDataSet::getAllIfcFlowSegmentType() {
    return m_refIfcFlowSegmentTypeList;
}

Step::RefLinkedList< IfcFlowStorageDevice > &ExpressDataSet::getAllIfcFlowStorageDevice() {
    return m_refIfcFlowStorageDeviceList;
}

Step::RefLinkedList< IfcFlowStorageDeviceType > &ExpressDataSet::getAllIfcFlowStorageDeviceType() {
    return m_refIfcFlowStorageDeviceTypeList;
}

Step::RefLinkedList< IfcFlowTerminal > &ExpressDataSet::getAllIfcFlowTerminal() {
    return m_refIfcFlowTerminalList;
}

Step::RefLinkedList< IfcFlowTerminalType > &ExpressDataSet::getAllIfcFlowTerminalType() {
    return m_refIfcFlowTerminalTypeList;
}

Step::RefLinkedList< IfcFlowTreatmentDevice > &ExpressDataSet::getAllIfcFlowTreatmentDevice() {
    return m_refIfcFlowTreatmentDeviceList;
}

Step::RefLinkedList< IfcFlowTreatmentDeviceType > &ExpressDataSet::getAllIfcFlowTreatmentDeviceType() {
    return m_refIfcFlowTreatmentDeviceTypeList;
}

Step::RefLinkedList< IfcFluidFlowProperties > &ExpressDataSet::getAllIfcFluidFlowProperties() {
    return m_refIfcFluidFlowPropertiesList;
}

Step::RefLinkedList< IfcFooting > &ExpressDataSet::getAllIfcFooting() {
    return m_refIfcFootingList;
}

Step::RefLinkedList< IfcFuelProperties > &ExpressDataSet::getAllIfcFuelProperties() {
    return m_refIfcFuelPropertiesList;
}

Step::RefLinkedList< IfcFurnishingElement > &ExpressDataSet::getAllIfcFurnishingElement() {
    return m_refIfcFurnishingElementList;
}

Step::RefLinkedList< IfcFurnishingElementType > &ExpressDataSet::getAllIfcFurnishingElementType() {
    return m_refIfcFurnishingElementTypeList;
}

Step::RefLinkedList< IfcFurnitureStandard > &ExpressDataSet::getAllIfcFurnitureStandard() {
    return m_refIfcFurnitureStandardList;
}

Step::RefLinkedList< IfcFurnitureType > &ExpressDataSet::getAllIfcFurnitureType() {
    return m_refIfcFurnitureTypeList;
}

Step::RefLinkedList< IfcGasTerminalType > &ExpressDataSet::getAllIfcGasTerminalType() {
    return m_refIfcGasTerminalTypeList;
}

Step::RefLinkedList< IfcGeneralMaterialProperties > &ExpressDataSet::getAllIfcGeneralMaterialProperties() {
    return m_refIfcGeneralMaterialPropertiesList;
}

Step::RefLinkedList< IfcGeneralProfileProperties > &ExpressDataSet::getAllIfcGeneralProfileProperties() {
    return m_refIfcGeneralProfilePropertiesList;
}

Step::RefLinkedList< IfcGeometricCurveSet > &ExpressDataSet::getAllIfcGeometricCurveSet() {
    return m_refIfcGeometricCurveSetList;
}

Step::RefLinkedList< IfcGeometricRepresentationContext > &ExpressDataSet::getAllIfcGeometricRepresentationContext() {
    return m_refIfcGeometricRepresentationContextList;
}

Step::RefLinkedList< IfcGeometricRepresentationItem > &ExpressDataSet::getAllIfcGeometricRepresentationItem() {
    return m_refIfcGeometricRepresentationItemList;
}

Step::RefLinkedList< IfcGeometricRepresentationSubContext > &ExpressDataSet::getAllIfcGeometricRepresentationSubContext() {
    return m_refIfcGeometricRepresentationSubContextList;
}

Step::RefLinkedList< IfcGeometricSet > &ExpressDataSet::getAllIfcGeometricSet() {
    return m_refIfcGeometricSetList;
}

Step::RefLinkedList< IfcGrid > &ExpressDataSet::getAllIfcGrid() {
    return m_refIfcGridList;
}

Step::RefLinkedList< IfcGridAxis > &ExpressDataSet::getAllIfcGridAxis() {
    return m_refIfcGridAxisList;
}

Step::RefLinkedList< IfcGridPlacement > &ExpressDataSet::getAllIfcGridPlacement() {
    return m_refIfcGridPlacementList;
}

Step::RefLinkedList< IfcGroup > &ExpressDataSet::getAllIfcGroup() {
    return m_refIfcGroupList;
}

Step::RefLinkedList< IfcHalfSpaceSolid > &ExpressDataSet::getAllIfcHalfSpaceSolid() {
    return m_refIfcHalfSpaceSolidList;
}

Step::RefLinkedList< IfcHeatExchangerType > &ExpressDataSet::getAllIfcHeatExchangerType() {
    return m_refIfcHeatExchangerTypeList;
}

Step::RefLinkedList< IfcHumidifierType > &ExpressDataSet::getAllIfcHumidifierType() {
    return m_refIfcHumidifierTypeList;
}

Step::RefLinkedList< IfcHygroscopicMaterialProperties > &ExpressDataSet::getAllIfcHygroscopicMaterialProperties() {
    return m_refIfcHygroscopicMaterialPropertiesList;
}

Step::RefLinkedList< IfcIShapeProfileDef > &ExpressDataSet::getAllIfcIShapeProfileDef() {
    return m_refIfcIShapeProfileDefList;
}

Step::RefLinkedList< IfcImageTexture > &ExpressDataSet::getAllIfcImageTexture() {
    return m_refIfcImageTextureList;
}

Step::RefLinkedList< IfcInventory > &ExpressDataSet::getAllIfcInventory() {
    return m_refIfcInventoryList;
}

Step::RefLinkedList< IfcIrregularTimeSeries > &ExpressDataSet::getAllIfcIrregularTimeSeries() {
    return m_refIfcIrregularTimeSeriesList;
}

Step::RefLinkedList< IfcIrregularTimeSeriesValue > &ExpressDataSet::getAllIfcIrregularTimeSeriesValue() {
    return m_refIfcIrregularTimeSeriesValueList;
}

Step::RefLinkedList< IfcJunctionBoxType > &ExpressDataSet::getAllIfcJunctionBoxType() {
    return m_refIfcJunctionBoxTypeList;
}

Step::RefLinkedList< IfcLShapeProfileDef > &ExpressDataSet::getAllIfcLShapeProfileDef() {
    return m_refIfcLShapeProfileDefList;
}

Step::RefLinkedList< IfcLaborResource > &ExpressDataSet::getAllIfcLaborResource() {
    return m_refIfcLaborResourceList;
}

Step::RefLinkedList< IfcLampType > &ExpressDataSet::getAllIfcLampType() {
    return m_refIfcLampTypeList;
}

Step::RefLinkedList< IfcLibraryInformation > &ExpressDataSet::getAllIfcLibraryInformation() {
    return m_refIfcLibraryInformationList;
}

Step::RefLinkedList< IfcLibraryReference > &ExpressDataSet::getAllIfcLibraryReference() {
    return m_refIfcLibraryReferenceList;
}

Step::RefLinkedList< IfcLightDistributionData > &ExpressDataSet::getAllIfcLightDistributionData() {
    return m_refIfcLightDistributionDataList;
}

Step::RefLinkedList< IfcLightFixtureType > &ExpressDataSet::getAllIfcLightFixtureType() {
    return m_refIfcLightFixtureTypeList;
}

Step::RefLinkedList< IfcLightIntensityDistribution > &ExpressDataSet::getAllIfcLightIntensityDistribution() {
    return m_refIfcLightIntensityDistributionList;
}

Step::RefLinkedList< IfcLightSource > &ExpressDataSet::getAllIfcLightSource() {
    return m_refIfcLightSourceList;
}

Step::RefLinkedList< IfcLightSourceAmbient > &ExpressDataSet::getAllIfcLightSourceAmbient() {
    return m_refIfcLightSourceAmbientList;
}

Step::RefLinkedList< IfcLightSourceDirectional > &ExpressDataSet::getAllIfcLightSourceDirectional() {
    return m_refIfcLightSourceDirectionalList;
}

Step::RefLinkedList< IfcLightSourceGoniometric > &ExpressDataSet::getAllIfcLightSourceGoniometric() {
    return m_refIfcLightSourceGoniometricList;
}

Step::RefLinkedList< IfcLightSourcePositional > &ExpressDataSet::getAllIfcLightSourcePositional() {
    return m_refIfcLightSourcePositionalList;
}

Step::RefLinkedList< IfcLightSourceSpot > &ExpressDataSet::getAllIfcLightSourceSpot() {
    return m_refIfcLightSourceSpotList;
}

Step::RefLinkedList< IfcLine > &ExpressDataSet::getAllIfcLine() {
    return m_refIfcLineList;
}

Step::RefLinkedList< IfcLinearDimension > &ExpressDataSet::getAllIfcLinearDimension() {
    return m_refIfcLinearDimensionList;
}

Step::RefLinkedList< IfcLocalPlacement > &ExpressDataSet::getAllIfcLocalPlacement() {
    return m_refIfcLocalPlacementList;
}

Step::RefLinkedList< IfcLocalTime > &ExpressDataSet::getAllIfcLocalTime() {
    return m_refIfcLocalTimeList;
}

Step::RefLinkedList< IfcLoop > &ExpressDataSet::getAllIfcLoop() {
    return m_refIfcLoopList;
}

Step::RefLinkedList< IfcManifoldSolidBrep > &ExpressDataSet::getAllIfcManifoldSolidBrep() {
    return m_refIfcManifoldSolidBrepList;
}

Step::RefLinkedList< IfcMappedItem > &ExpressDataSet::getAllIfcMappedItem() {
    return m_refIfcMappedItemList;
}

Step::RefLinkedList< IfcMaterial > &ExpressDataSet::getAllIfcMaterial() {
    return m_refIfcMaterialList;
}

Step::RefLinkedList< IfcMaterialClassificationRelationship > &ExpressDataSet::getAllIfcMaterialClassificationRelationship() {
    return m_refIfcMaterialClassificationRelationshipList;
}

Step::RefLinkedList< IfcMaterialDefinitionRepresentation > &ExpressDataSet::getAllIfcMaterialDefinitionRepresentation() {
    return m_refIfcMaterialDefinitionRepresentationList;
}

Step::RefLinkedList< IfcMaterialLayer > &ExpressDataSet::getAllIfcMaterialLayer() {
    return m_refIfcMaterialLayerList;
}

Step::RefLinkedList< IfcMaterialLayerSet > &ExpressDataSet::getAllIfcMaterialLayerSet() {
    return m_refIfcMaterialLayerSetList;
}

Step::RefLinkedList< IfcMaterialLayerSetUsage > &ExpressDataSet::getAllIfcMaterialLayerSetUsage() {
    return m_refIfcMaterialLayerSetUsageList;
}

Step::RefLinkedList< IfcMaterialList > &ExpressDataSet::getAllIfcMaterialList() {
    return m_refIfcMaterialListList;
}

Step::RefLinkedList< IfcMaterialProperties > &ExpressDataSet::getAllIfcMaterialProperties() {
    return m_refIfcMaterialPropertiesList;
}

Step::RefLinkedList< IfcMeasureWithUnit > &ExpressDataSet::getAllIfcMeasureWithUnit() {
    return m_refIfcMeasureWithUnitList;
}

Step::RefLinkedList< IfcMechanicalConcreteMaterialProperties > &ExpressDataSet::getAllIfcMechanicalConcreteMaterialProperties() {
    return m_refIfcMechanicalConcreteMaterialPropertiesList;
}

Step::RefLinkedList< IfcMechanicalFastener > &ExpressDataSet::getAllIfcMechanicalFastener() {
    return m_refIfcMechanicalFastenerList;
}

Step::RefLinkedList< IfcMechanicalFastenerType > &ExpressDataSet::getAllIfcMechanicalFastenerType() {
    return m_refIfcMechanicalFastenerTypeList;
}

Step::RefLinkedList< IfcMechanicalMaterialProperties > &ExpressDataSet::getAllIfcMechanicalMaterialProperties() {
    return m_refIfcMechanicalMaterialPropertiesList;
}

Step::RefLinkedList< IfcMechanicalSteelMaterialProperties > &ExpressDataSet::getAllIfcMechanicalSteelMaterialProperties() {
    return m_refIfcMechanicalSteelMaterialPropertiesList;
}

Step::RefLinkedList< IfcMember > &ExpressDataSet::getAllIfcMember() {
    return m_refIfcMemberList;
}

Step::RefLinkedList< IfcMemberType > &ExpressDataSet::getAllIfcMemberType() {
    return m_refIfcMemberTypeList;
}

Step::RefLinkedList< IfcMetric > &ExpressDataSet::getAllIfcMetric() {
    return m_refIfcMetricList;
}

Step::RefLinkedList< IfcMonetaryUnit > &ExpressDataSet::getAllIfcMonetaryUnit() {
    return m_refIfcMonetaryUnitList;
}

Step::RefLinkedList< IfcMotorConnectionType > &ExpressDataSet::getAllIfcMotorConnectionType() {
    return m_refIfcMotorConnectionTypeList;
}

Step::RefLinkedList< IfcMove > &ExpressDataSet::getAllIfcMove() {
    return m_refIfcMoveList;
}

Step::RefLinkedList< IfcNamedUnit > &ExpressDataSet::getAllIfcNamedUnit() {
    return m_refIfcNamedUnitList;
}

Step::RefLinkedList< IfcObject > &ExpressDataSet::getAllIfcObject() {
    return m_refIfcObjectList;
}

Step::RefLinkedList< IfcObjectDefinition > &ExpressDataSet::getAllIfcObjectDefinition() {
    return m_refIfcObjectDefinitionList;
}

Step::RefLinkedList< IfcObjectPlacement > &ExpressDataSet::getAllIfcObjectPlacement() {
    return m_refIfcObjectPlacementList;
}

Step::RefLinkedList< IfcObjective > &ExpressDataSet::getAllIfcObjective() {
    return m_refIfcObjectiveList;
}

Step::RefLinkedList< IfcOccupant > &ExpressDataSet::getAllIfcOccupant() {
    return m_refIfcOccupantList;
}

Step::RefLinkedList< IfcOffsetCurve2D > &ExpressDataSet::getAllIfcOffsetCurve2D() {
    return m_refIfcOffsetCurve2DList;
}

Step::RefLinkedList< IfcOffsetCurve3D > &ExpressDataSet::getAllIfcOffsetCurve3D() {
    return m_refIfcOffsetCurve3DList;
}

Step::RefLinkedList< IfcOneDirectionRepeatFactor > &ExpressDataSet::getAllIfcOneDirectionRepeatFactor() {
    return m_refIfcOneDirectionRepeatFactorList;
}

Step::RefLinkedList< IfcOpenShell > &ExpressDataSet::getAllIfcOpenShell() {
    return m_refIfcOpenShellList;
}

Step::RefLinkedList< IfcOpeningElement > &ExpressDataSet::getAllIfcOpeningElement() {
    return m_refIfcOpeningElementList;
}

Step::RefLinkedList< IfcOpticalMaterialProperties > &ExpressDataSet::getAllIfcOpticalMaterialProperties() {
    return m_refIfcOpticalMaterialPropertiesList;
}

Step::RefLinkedList< IfcOrderAction > &ExpressDataSet::getAllIfcOrderAction() {
    return m_refIfcOrderActionList;
}

Step::RefLinkedList< IfcOrganization > &ExpressDataSet::getAllIfcOrganization() {
    return m_refIfcOrganizationList;
}

Step::RefLinkedList< IfcOrganizationRelationship > &ExpressDataSet::getAllIfcOrganizationRelationship() {
    return m_refIfcOrganizationRelationshipList;
}

Step::RefLinkedList< IfcOrientedEdge > &ExpressDataSet::getAllIfcOrientedEdge() {
    return m_refIfcOrientedEdgeList;
}

Step::RefLinkedList< IfcOutletType > &ExpressDataSet::getAllIfcOutletType() {
    return m_refIfcOutletTypeList;
}

Step::RefLinkedList< IfcOwnerHistory > &ExpressDataSet::getAllIfcOwnerHistory() {
    return m_refIfcOwnerHistoryList;
}

Step::RefLinkedList< IfcParameterizedProfileDef > &ExpressDataSet::getAllIfcParameterizedProfileDef() {
    return m_refIfcParameterizedProfileDefList;
}

Step::RefLinkedList< IfcPath > &ExpressDataSet::getAllIfcPath() {
    return m_refIfcPathList;
}

Step::RefLinkedList< IfcPerformanceHistory > &ExpressDataSet::getAllIfcPerformanceHistory() {
    return m_refIfcPerformanceHistoryList;
}

Step::RefLinkedList< IfcPermeableCoveringProperties > &ExpressDataSet::getAllIfcPermeableCoveringProperties() {
    return m_refIfcPermeableCoveringPropertiesList;
}

Step::RefLinkedList< IfcPermit > &ExpressDataSet::getAllIfcPermit() {
    return m_refIfcPermitList;
}

Step::RefLinkedList< IfcPerson > &ExpressDataSet::getAllIfcPerson() {
    return m_refIfcPersonList;
}

Step::RefLinkedList< IfcPersonAndOrganization > &ExpressDataSet::getAllIfcPersonAndOrganization() {
    return m_refIfcPersonAndOrganizationList;
}

Step::RefLinkedList< IfcPhysicalComplexQuantity > &ExpressDataSet::getAllIfcPhysicalComplexQuantity() {
    return m_refIfcPhysicalComplexQuantityList;
}

Step::RefLinkedList< IfcPhysicalQuantity > &ExpressDataSet::getAllIfcPhysicalQuantity() {
    return m_refIfcPhysicalQuantityList;
}

Step::RefLinkedList< IfcPhysicalSimpleQuantity > &ExpressDataSet::getAllIfcPhysicalSimpleQuantity() {
    return m_refIfcPhysicalSimpleQuantityList;
}

Step::RefLinkedList< IfcPile > &ExpressDataSet::getAllIfcPile() {
    return m_refIfcPileList;
}

Step::RefLinkedList< IfcPipeFittingType > &ExpressDataSet::getAllIfcPipeFittingType() {
    return m_refIfcPipeFittingTypeList;
}

Step::RefLinkedList< IfcPipeSegmentType > &ExpressDataSet::getAllIfcPipeSegmentType() {
    return m_refIfcPipeSegmentTypeList;
}

Step::RefLinkedList< IfcPixelTexture > &ExpressDataSet::getAllIfcPixelTexture() {
    return m_refIfcPixelTextureList;
}

Step::RefLinkedList< IfcPlacement > &ExpressDataSet::getAllIfcPlacement() {
    return m_refIfcPlacementList;
}

Step::RefLinkedList< IfcPlanarBox > &ExpressDataSet::getAllIfcPlanarBox() {
    return m_refIfcPlanarBoxList;
}

Step::RefLinkedList< IfcPlanarExtent > &ExpressDataSet::getAllIfcPlanarExtent() {
    return m_refIfcPlanarExtentList;
}

Step::RefLinkedList< IfcPlane > &ExpressDataSet::getAllIfcPlane() {
    return m_refIfcPlaneList;
}

Step::RefLinkedList< IfcPlate > &ExpressDataSet::getAllIfcPlate() {
    return m_refIfcPlateList;
}

Step::RefLinkedList< IfcPlateType > &ExpressDataSet::getAllIfcPlateType() {
    return m_refIfcPlateTypeList;
}

Step::RefLinkedList< IfcPoint > &ExpressDataSet::getAllIfcPoint() {
    return m_refIfcPointList;
}

Step::RefLinkedList< IfcPointOnCurve > &ExpressDataSet::getAllIfcPointOnCurve() {
    return m_refIfcPointOnCurveList;
}

Step::RefLinkedList< IfcPointOnSurface > &ExpressDataSet::getAllIfcPointOnSurface() {
    return m_refIfcPointOnSurfaceList;
}

Step::RefLinkedList< IfcPolyLoop > &ExpressDataSet::getAllIfcPolyLoop() {
    return m_refIfcPolyLoopList;
}

Step::RefLinkedList< IfcPolygonalBoundedHalfSpace > &ExpressDataSet::getAllIfcPolygonalBoundedHalfSpace() {
    return m_refIfcPolygonalBoundedHalfSpaceList;
}

Step::RefLinkedList< IfcPolyline > &ExpressDataSet::getAllIfcPolyline() {
    return m_refIfcPolylineList;
}

Step::RefLinkedList< IfcPort > &ExpressDataSet::getAllIfcPort() {
    return m_refIfcPortList;
}

Step::RefLinkedList< IfcPostalAddress > &ExpressDataSet::getAllIfcPostalAddress() {
    return m_refIfcPostalAddressList;
}

Step::RefLinkedList< IfcPreDefinedColour > &ExpressDataSet::getAllIfcPreDefinedColour() {
    return m_refIfcPreDefinedColourList;
}

Step::RefLinkedList< IfcPreDefinedCurveFont > &ExpressDataSet::getAllIfcPreDefinedCurveFont() {
    return m_refIfcPreDefinedCurveFontList;
}

Step::RefLinkedList< IfcPreDefinedDimensionSymbol > &ExpressDataSet::getAllIfcPreDefinedDimensionSymbol() {
    return m_refIfcPreDefinedDimensionSymbolList;
}

Step::RefLinkedList< IfcPreDefinedItem > &ExpressDataSet::getAllIfcPreDefinedItem() {
    return m_refIfcPreDefinedItemList;
}

Step::RefLinkedList< IfcPreDefinedPointMarkerSymbol > &ExpressDataSet::getAllIfcPreDefinedPointMarkerSymbol() {
    return m_refIfcPreDefinedPointMarkerSymbolList;
}

Step::RefLinkedList< IfcPreDefinedSymbol > &ExpressDataSet::getAllIfcPreDefinedSymbol() {
    return m_refIfcPreDefinedSymbolList;
}

Step::RefLinkedList< IfcPreDefinedTerminatorSymbol > &ExpressDataSet::getAllIfcPreDefinedTerminatorSymbol() {
    return m_refIfcPreDefinedTerminatorSymbolList;
}

Step::RefLinkedList< IfcPreDefinedTextFont > &ExpressDataSet::getAllIfcPreDefinedTextFont() {
    return m_refIfcPreDefinedTextFontList;
}

Step::RefLinkedList< IfcPresentationLayerAssignment > &ExpressDataSet::getAllIfcPresentationLayerAssignment() {
    return m_refIfcPresentationLayerAssignmentList;
}

Step::RefLinkedList< IfcPresentationLayerWithStyle > &ExpressDataSet::getAllIfcPresentationLayerWithStyle() {
    return m_refIfcPresentationLayerWithStyleList;
}

Step::RefLinkedList< IfcPresentationStyle > &ExpressDataSet::getAllIfcPresentationStyle() {
    return m_refIfcPresentationStyleList;
}

Step::RefLinkedList< IfcPresentationStyleAssignment > &ExpressDataSet::getAllIfcPresentationStyleAssignment() {
    return m_refIfcPresentationStyleAssignmentList;
}

Step::RefLinkedList< IfcProcedure > &ExpressDataSet::getAllIfcProcedure() {
    return m_refIfcProcedureList;
}

Step::RefLinkedList< IfcProcess > &ExpressDataSet::getAllIfcProcess() {
    return m_refIfcProcessList;
}

Step::RefLinkedList< IfcProduct > &ExpressDataSet::getAllIfcProduct() {
    return m_refIfcProductList;
}

Step::RefLinkedList< IfcProductDefinitionShape > &ExpressDataSet::getAllIfcProductDefinitionShape() {
    return m_refIfcProductDefinitionShapeList;
}

Step::RefLinkedList< IfcProductRepresentation > &ExpressDataSet::getAllIfcProductRepresentation() {
    return m_refIfcProductRepresentationList;
}

Step::RefLinkedList< IfcProductsOfCombustionProperties > &ExpressDataSet::getAllIfcProductsOfCombustionProperties() {
    return m_refIfcProductsOfCombustionPropertiesList;
}

Step::RefLinkedList< IfcProfileDef > &ExpressDataSet::getAllIfcProfileDef() {
    return m_refIfcProfileDefList;
}

Step::RefLinkedList< IfcProfileProperties > &ExpressDataSet::getAllIfcProfileProperties() {
    return m_refIfcProfilePropertiesList;
}

Step::RefLinkedList< IfcProject > &ExpressDataSet::getAllIfcProject() {
    return m_refIfcProjectList;
}

Step::RefLinkedList< IfcProjectOrder > &ExpressDataSet::getAllIfcProjectOrder() {
    return m_refIfcProjectOrderList;
}

Step::RefLinkedList< IfcProjectOrderRecord > &ExpressDataSet::getAllIfcProjectOrderRecord() {
    return m_refIfcProjectOrderRecordList;
}

Step::RefLinkedList< IfcProjectionCurve > &ExpressDataSet::getAllIfcProjectionCurve() {
    return m_refIfcProjectionCurveList;
}

Step::RefLinkedList< IfcProjectionElement > &ExpressDataSet::getAllIfcProjectionElement() {
    return m_refIfcProjectionElementList;
}

Step::RefLinkedList< IfcProperty > &ExpressDataSet::getAllIfcProperty() {
    return m_refIfcPropertyList;
}

Step::RefLinkedList< IfcPropertyBoundedValue > &ExpressDataSet::getAllIfcPropertyBoundedValue() {
    return m_refIfcPropertyBoundedValueList;
}

Step::RefLinkedList< IfcPropertyConstraintRelationship > &ExpressDataSet::getAllIfcPropertyConstraintRelationship() {
    return m_refIfcPropertyConstraintRelationshipList;
}

Step::RefLinkedList< IfcPropertyDefinition > &ExpressDataSet::getAllIfcPropertyDefinition() {
    return m_refIfcPropertyDefinitionList;
}

Step::RefLinkedList< IfcPropertyDependencyRelationship > &ExpressDataSet::getAllIfcPropertyDependencyRelationship() {
    return m_refIfcPropertyDependencyRelationshipList;
}

Step::RefLinkedList< IfcPropertyEnumeratedValue > &ExpressDataSet::getAllIfcPropertyEnumeratedValue() {
    return m_refIfcPropertyEnumeratedValueList;
}

Step::RefLinkedList< IfcPropertyEnumeration > &ExpressDataSet::getAllIfcPropertyEnumeration() {
    return m_refIfcPropertyEnumerationList;
}

Step::RefLinkedList< IfcPropertyListValue > &ExpressDataSet::getAllIfcPropertyListValue() {
    return m_refIfcPropertyListValueList;
}

Step::RefLinkedList< IfcPropertyReferenceValue > &ExpressDataSet::getAllIfcPropertyReferenceValue() {
    return m_refIfcPropertyReferenceValueList;
}

Step::RefLinkedList< IfcPropertySet > &ExpressDataSet::getAllIfcPropertySet() {
    return m_refIfcPropertySetList;
}

Step::RefLinkedList< IfcPropertySetDefinition > &ExpressDataSet::getAllIfcPropertySetDefinition() {
    return m_refIfcPropertySetDefinitionList;
}

Step::RefLinkedList< IfcPropertySingleValue > &ExpressDataSet::getAllIfcPropertySingleValue() {
    return m_refIfcPropertySingleValueList;
}

Step::RefLinkedList< IfcPropertyTableValue > &ExpressDataSet::getAllIfcPropertyTableValue() {
    return m_refIfcPropertyTableValueList;
}

Step::RefLinkedList< IfcProtectiveDeviceType > &ExpressDataSet::getAllIfcProtectiveDeviceType() {
    return m_refIfcProtectiveDeviceTypeList;
}

Step::RefLinkedList< IfcProxy > &ExpressDataSet::getAllIfcProxy() {
    return m_refIfcProxyList;
}

Step::RefLinkedList< IfcPumpType > &ExpressDataSet::getAllIfcPumpType() {
    return m_refIfcPumpTypeList;
}

Step::RefLinkedList< IfcQuantityArea > &ExpressDataSet::getAllIfcQuantityArea() {
    return m_refIfcQuantityAreaList;
}

Step::RefLinkedList< IfcQuantityCount > &ExpressDataSet::getAllIfcQuantityCount() {
    return m_refIfcQuantityCountList;
}

Step::RefLinkedList< IfcQuantityLength > &ExpressDataSet::getAllIfcQuantityLength() {
    return m_refIfcQuantityLengthList;
}

Step::RefLinkedList< IfcQuantityTime > &ExpressDataSet::getAllIfcQuantityTime() {
    return m_refIfcQuantityTimeList;
}

Step::RefLinkedList< IfcQuantityVolume > &ExpressDataSet::getAllIfcQuantityVolume() {
    return m_refIfcQuantityVolumeList;
}

Step::RefLinkedList< IfcQuantityWeight > &ExpressDataSet::getAllIfcQuantityWeight() {
    return m_refIfcQuantityWeightList;
}

Step::RefLinkedList< IfcRadiusDimension > &ExpressDataSet::getAllIfcRadiusDimension() {
    return m_refIfcRadiusDimensionList;
}

Step::RefLinkedList< IfcRailing > &ExpressDataSet::getAllIfcRailing() {
    return m_refIfcRailingList;
}

Step::RefLinkedList< IfcRailingType > &ExpressDataSet::getAllIfcRailingType() {
    return m_refIfcRailingTypeList;
}

Step::RefLinkedList< IfcRamp > &ExpressDataSet::getAllIfcRamp() {
    return m_refIfcRampList;
}

Step::RefLinkedList< IfcRampFlight > &ExpressDataSet::getAllIfcRampFlight() {
    return m_refIfcRampFlightList;
}

Step::RefLinkedList< IfcRampFlightType > &ExpressDataSet::getAllIfcRampFlightType() {
    return m_refIfcRampFlightTypeList;
}

Step::RefLinkedList< IfcRationalBezierCurve > &ExpressDataSet::getAllIfcRationalBezierCurve() {
    return m_refIfcRationalBezierCurveList;
}

Step::RefLinkedList< IfcRectangleHollowProfileDef > &ExpressDataSet::getAllIfcRectangleHollowProfileDef() {
    return m_refIfcRectangleHollowProfileDefList;
}

Step::RefLinkedList< IfcRectangleProfileDef > &ExpressDataSet::getAllIfcRectangleProfileDef() {
    return m_refIfcRectangleProfileDefList;
}

Step::RefLinkedList< IfcRectangularPyramid > &ExpressDataSet::getAllIfcRectangularPyramid() {
    return m_refIfcRectangularPyramidList;
}

Step::RefLinkedList< IfcRectangularTrimmedSurface > &ExpressDataSet::getAllIfcRectangularTrimmedSurface() {
    return m_refIfcRectangularTrimmedSurfaceList;
}

Step::RefLinkedList< IfcReferencesValueDocument > &ExpressDataSet::getAllIfcReferencesValueDocument() {
    return m_refIfcReferencesValueDocumentList;
}

Step::RefLinkedList< IfcRegularTimeSeries > &ExpressDataSet::getAllIfcRegularTimeSeries() {
    return m_refIfcRegularTimeSeriesList;
}

Step::RefLinkedList< IfcReinforcementBarProperties > &ExpressDataSet::getAllIfcReinforcementBarProperties() {
    return m_refIfcReinforcementBarPropertiesList;
}

Step::RefLinkedList< IfcReinforcementDefinitionProperties > &ExpressDataSet::getAllIfcReinforcementDefinitionProperties() {
    return m_refIfcReinforcementDefinitionPropertiesList;
}

Step::RefLinkedList< IfcReinforcingBar > &ExpressDataSet::getAllIfcReinforcingBar() {
    return m_refIfcReinforcingBarList;
}

Step::RefLinkedList< IfcReinforcingElement > &ExpressDataSet::getAllIfcReinforcingElement() {
    return m_refIfcReinforcingElementList;
}

Step::RefLinkedList< IfcReinforcingMesh > &ExpressDataSet::getAllIfcReinforcingMesh() {
    return m_refIfcReinforcingMeshList;
}

Step::RefLinkedList< IfcRelAggregates > &ExpressDataSet::getAllIfcRelAggregates() {
    return m_refIfcRelAggregatesList;
}

Step::RefLinkedList< IfcRelAssigns > &ExpressDataSet::getAllIfcRelAssigns() {
    return m_refIfcRelAssignsList;
}

Step::RefLinkedList< IfcRelAssignsTasks > &ExpressDataSet::getAllIfcRelAssignsTasks() {
    return m_refIfcRelAssignsTasksList;
}

Step::RefLinkedList< IfcRelAssignsToActor > &ExpressDataSet::getAllIfcRelAssignsToActor() {
    return m_refIfcRelAssignsToActorList;
}

Step::RefLinkedList< IfcRelAssignsToControl > &ExpressDataSet::getAllIfcRelAssignsToControl() {
    return m_refIfcRelAssignsToControlList;
}

Step::RefLinkedList< IfcRelAssignsToGroup > &ExpressDataSet::getAllIfcRelAssignsToGroup() {
    return m_refIfcRelAssignsToGroupList;
}

Step::RefLinkedList< IfcRelAssignsToProcess > &ExpressDataSet::getAllIfcRelAssignsToProcess() {
    return m_refIfcRelAssignsToProcessList;
}

Step::RefLinkedList< IfcRelAssignsToProduct > &ExpressDataSet::getAllIfcRelAssignsToProduct() {
    return m_refIfcRelAssignsToProductList;
}

Step::RefLinkedList< IfcRelAssignsToProjectOrder > &ExpressDataSet::getAllIfcRelAssignsToProjectOrder() {
    return m_refIfcRelAssignsToProjectOrderList;
}

Step::RefLinkedList< IfcRelAssignsToResource > &ExpressDataSet::getAllIfcRelAssignsToResource() {
    return m_refIfcRelAssignsToResourceList;
}

Step::RefLinkedList< IfcRelAssociates > &ExpressDataSet::getAllIfcRelAssociates() {
    return m_refIfcRelAssociatesList;
}

Step::RefLinkedList< IfcRelAssociatesAppliedValue > &ExpressDataSet::getAllIfcRelAssociatesAppliedValue() {
    return m_refIfcRelAssociatesAppliedValueList;
}

Step::RefLinkedList< IfcRelAssociatesApproval > &ExpressDataSet::getAllIfcRelAssociatesApproval() {
    return m_refIfcRelAssociatesApprovalList;
}

Step::RefLinkedList< IfcRelAssociatesClassification > &ExpressDataSet::getAllIfcRelAssociatesClassification() {
    return m_refIfcRelAssociatesClassificationList;
}

Step::RefLinkedList< IfcRelAssociatesConstraint > &ExpressDataSet::getAllIfcRelAssociatesConstraint() {
    return m_refIfcRelAssociatesConstraintList;
}

Step::RefLinkedList< IfcRelAssociatesDocument > &ExpressDataSet::getAllIfcRelAssociatesDocument() {
    return m_refIfcRelAssociatesDocumentList;
}

Step::RefLinkedList< IfcRelAssociatesLibrary > &ExpressDataSet::getAllIfcRelAssociatesLibrary() {
    return m_refIfcRelAssociatesLibraryList;
}

Step::RefLinkedList< IfcRelAssociatesMaterial > &ExpressDataSet::getAllIfcRelAssociatesMaterial() {
    return m_refIfcRelAssociatesMaterialList;
}

Step::RefLinkedList< IfcRelAssociatesProfileProperties > &ExpressDataSet::getAllIfcRelAssociatesProfileProperties() {
    return m_refIfcRelAssociatesProfilePropertiesList;
}

Step::RefLinkedList< IfcRelConnects > &ExpressDataSet::getAllIfcRelConnects() {
    return m_refIfcRelConnectsList;
}

Step::RefLinkedList< IfcRelConnectsElements > &ExpressDataSet::getAllIfcRelConnectsElements() {
    return m_refIfcRelConnectsElementsList;
}

Step::RefLinkedList< IfcRelConnectsPathElements > &ExpressDataSet::getAllIfcRelConnectsPathElements() {
    return m_refIfcRelConnectsPathElementsList;
}

Step::RefLinkedList< IfcRelConnectsPortToElement > &ExpressDataSet::getAllIfcRelConnectsPortToElement() {
    return m_refIfcRelConnectsPortToElementList;
}

Step::RefLinkedList< IfcRelConnectsPorts > &ExpressDataSet::getAllIfcRelConnectsPorts() {
    return m_refIfcRelConnectsPortsList;
}

Step::RefLinkedList< IfcRelConnectsStructuralActivity > &ExpressDataSet::getAllIfcRelConnectsStructuralActivity() {
    return m_refIfcRelConnectsStructuralActivityList;
}

Step::RefLinkedList< IfcRelConnectsStructuralElement > &ExpressDataSet::getAllIfcRelConnectsStructuralElement() {
    return m_refIfcRelConnectsStructuralElementList;
}

Step::RefLinkedList< IfcRelConnectsStructuralMember > &ExpressDataSet::getAllIfcRelConnectsStructuralMember() {
    return m_refIfcRelConnectsStructuralMemberList;
}

Step::RefLinkedList< IfcRelConnectsWithEccentricity > &ExpressDataSet::getAllIfcRelConnectsWithEccentricity() {
    return m_refIfcRelConnectsWithEccentricityList;
}

Step::RefLinkedList< IfcRelConnectsWithRealizingElements > &ExpressDataSet::getAllIfcRelConnectsWithRealizingElements() {
    return m_refIfcRelConnectsWithRealizingElementsList;
}

Step::RefLinkedList< IfcRelContainedInSpatialStructure > &ExpressDataSet::getAllIfcRelContainedInSpatialStructure() {
    return m_refIfcRelContainedInSpatialStructureList;
}

Step::RefLinkedList< IfcRelCoversBldgElements > &ExpressDataSet::getAllIfcRelCoversBldgElements() {
    return m_refIfcRelCoversBldgElementsList;
}

Step::RefLinkedList< IfcRelCoversSpaces > &ExpressDataSet::getAllIfcRelCoversSpaces() {
    return m_refIfcRelCoversSpacesList;
}

Step::RefLinkedList< IfcRelDecomposes > &ExpressDataSet::getAllIfcRelDecomposes() {
    return m_refIfcRelDecomposesList;
}

Step::RefLinkedList< IfcRelDefines > &ExpressDataSet::getAllIfcRelDefines() {
    return m_refIfcRelDefinesList;
}

Step::RefLinkedList< IfcRelDefinesByProperties > &ExpressDataSet::getAllIfcRelDefinesByProperties() {
    return m_refIfcRelDefinesByPropertiesList;
}

Step::RefLinkedList< IfcRelDefinesByType > &ExpressDataSet::getAllIfcRelDefinesByType() {
    return m_refIfcRelDefinesByTypeList;
}

Step::RefLinkedList< IfcRelFillsElement > &ExpressDataSet::getAllIfcRelFillsElement() {
    return m_refIfcRelFillsElementList;
}

Step::RefLinkedList< IfcRelFlowControlElements > &ExpressDataSet::getAllIfcRelFlowControlElements() {
    return m_refIfcRelFlowControlElementsList;
}

Step::RefLinkedList< IfcRelInteractionRequirements > &ExpressDataSet::getAllIfcRelInteractionRequirements() {
    return m_refIfcRelInteractionRequirementsList;
}

Step::RefLinkedList< IfcRelNests > &ExpressDataSet::getAllIfcRelNests() {
    return m_refIfcRelNestsList;
}

Step::RefLinkedList< IfcRelOccupiesSpaces > &ExpressDataSet::getAllIfcRelOccupiesSpaces() {
    return m_refIfcRelOccupiesSpacesList;
}

Step::RefLinkedList< IfcRelOverridesProperties > &ExpressDataSet::getAllIfcRelOverridesProperties() {
    return m_refIfcRelOverridesPropertiesList;
}

Step::RefLinkedList< IfcRelProjectsElement > &ExpressDataSet::getAllIfcRelProjectsElement() {
    return m_refIfcRelProjectsElementList;
}

Step::RefLinkedList< IfcRelReferencedInSpatialStructure > &ExpressDataSet::getAllIfcRelReferencedInSpatialStructure() {
    return m_refIfcRelReferencedInSpatialStructureList;
}

Step::RefLinkedList< IfcRelSchedulesCostItems > &ExpressDataSet::getAllIfcRelSchedulesCostItems() {
    return m_refIfcRelSchedulesCostItemsList;
}

Step::RefLinkedList< IfcRelSequence > &ExpressDataSet::getAllIfcRelSequence() {
    return m_refIfcRelSequenceList;
}

Step::RefLinkedList< IfcRelServicesBuildings > &ExpressDataSet::getAllIfcRelServicesBuildings() {
    return m_refIfcRelServicesBuildingsList;
}

Step::RefLinkedList< IfcRelSpaceBoundary > &ExpressDataSet::getAllIfcRelSpaceBoundary() {
    return m_refIfcRelSpaceBoundaryList;
}

Step::RefLinkedList< IfcRelVoidsElement > &ExpressDataSet::getAllIfcRelVoidsElement() {
    return m_refIfcRelVoidsElementList;
}

Step::RefLinkedList< IfcRelationship > &ExpressDataSet::getAllIfcRelationship() {
    return m_refIfcRelationshipList;
}

Step::RefLinkedList< IfcRelaxation > &ExpressDataSet::getAllIfcRelaxation() {
    return m_refIfcRelaxationList;
}

Step::RefLinkedList< IfcRepresentation > &ExpressDataSet::getAllIfcRepresentation() {
    return m_refIfcRepresentationList;
}

Step::RefLinkedList< IfcRepresentationContext > &ExpressDataSet::getAllIfcRepresentationContext() {
    return m_refIfcRepresentationContextList;
}

Step::RefLinkedList< IfcRepresentationItem > &ExpressDataSet::getAllIfcRepresentationItem() {
    return m_refIfcRepresentationItemList;
}

Step::RefLinkedList< IfcRepresentationMap > &ExpressDataSet::getAllIfcRepresentationMap() {
    return m_refIfcRepresentationMapList;
}

Step::RefLinkedList< IfcResource > &ExpressDataSet::getAllIfcResource() {
    return m_refIfcResourceList;
}

Step::RefLinkedList< IfcRevolvedAreaSolid > &ExpressDataSet::getAllIfcRevolvedAreaSolid() {
    return m_refIfcRevolvedAreaSolidList;
}

Step::RefLinkedList< IfcRibPlateProfileProperties > &ExpressDataSet::getAllIfcRibPlateProfileProperties() {
    return m_refIfcRibPlateProfilePropertiesList;
}

Step::RefLinkedList< IfcRightCircularCone > &ExpressDataSet::getAllIfcRightCircularCone() {
    return m_refIfcRightCircularConeList;
}

Step::RefLinkedList< IfcRightCircularCylinder > &ExpressDataSet::getAllIfcRightCircularCylinder() {
    return m_refIfcRightCircularCylinderList;
}

Step::RefLinkedList< IfcRoof > &ExpressDataSet::getAllIfcRoof() {
    return m_refIfcRoofList;
}

Step::RefLinkedList< IfcRoot > &ExpressDataSet::getAllIfcRoot() {
    return m_refIfcRootList;
}

Step::RefLinkedList< IfcRoundedEdgeFeature > &ExpressDataSet::getAllIfcRoundedEdgeFeature() {
    return m_refIfcRoundedEdgeFeatureList;
}

Step::RefLinkedList< IfcRoundedRectangleProfileDef > &ExpressDataSet::getAllIfcRoundedRectangleProfileDef() {
    return m_refIfcRoundedRectangleProfileDefList;
}

Step::RefLinkedList< IfcSIUnit > &ExpressDataSet::getAllIfcSIUnit() {
    return m_refIfcSIUnitList;
}

Step::RefLinkedList< IfcSanitaryTerminalType > &ExpressDataSet::getAllIfcSanitaryTerminalType() {
    return m_refIfcSanitaryTerminalTypeList;
}

Step::RefLinkedList< IfcScheduleTimeControl > &ExpressDataSet::getAllIfcScheduleTimeControl() {
    return m_refIfcScheduleTimeControlList;
}

Step::RefLinkedList< IfcSectionProperties > &ExpressDataSet::getAllIfcSectionProperties() {
    return m_refIfcSectionPropertiesList;
}

Step::RefLinkedList< IfcSectionReinforcementProperties > &ExpressDataSet::getAllIfcSectionReinforcementProperties() {
    return m_refIfcSectionReinforcementPropertiesList;
}

Step::RefLinkedList< IfcSectionedSpine > &ExpressDataSet::getAllIfcSectionedSpine() {
    return m_refIfcSectionedSpineList;
}

Step::RefLinkedList< IfcSensorType > &ExpressDataSet::getAllIfcSensorType() {
    return m_refIfcSensorTypeList;
}

Step::RefLinkedList< IfcServiceLife > &ExpressDataSet::getAllIfcServiceLife() {
    return m_refIfcServiceLifeList;
}

Step::RefLinkedList< IfcServiceLifeFactor > &ExpressDataSet::getAllIfcServiceLifeFactor() {
    return m_refIfcServiceLifeFactorList;
}

Step::RefLinkedList< IfcShapeAspect > &ExpressDataSet::getAllIfcShapeAspect() {
    return m_refIfcShapeAspectList;
}

Step::RefLinkedList< IfcShapeModel > &ExpressDataSet::getAllIfcShapeModel() {
    return m_refIfcShapeModelList;
}

Step::RefLinkedList< IfcShapeRepresentation > &ExpressDataSet::getAllIfcShapeRepresentation() {
    return m_refIfcShapeRepresentationList;
}

Step::RefLinkedList< IfcShellBasedSurfaceModel > &ExpressDataSet::getAllIfcShellBasedSurfaceModel() {
    return m_refIfcShellBasedSurfaceModelList;
}

Step::RefLinkedList< IfcSimpleProperty > &ExpressDataSet::getAllIfcSimpleProperty() {
    return m_refIfcSimplePropertyList;
}

Step::RefLinkedList< IfcSite > &ExpressDataSet::getAllIfcSite() {
    return m_refIfcSiteList;
}

Step::RefLinkedList< IfcSlab > &ExpressDataSet::getAllIfcSlab() {
    return m_refIfcSlabList;
}

Step::RefLinkedList< IfcSlabType > &ExpressDataSet::getAllIfcSlabType() {
    return m_refIfcSlabTypeList;
}

Step::RefLinkedList< IfcSlippageConnectionCondition > &ExpressDataSet::getAllIfcSlippageConnectionCondition() {
    return m_refIfcSlippageConnectionConditionList;
}

Step::RefLinkedList< IfcSolidModel > &ExpressDataSet::getAllIfcSolidModel() {
    return m_refIfcSolidModelList;
}

Step::RefLinkedList< IfcSoundProperties > &ExpressDataSet::getAllIfcSoundProperties() {
    return m_refIfcSoundPropertiesList;
}

Step::RefLinkedList< IfcSoundValue > &ExpressDataSet::getAllIfcSoundValue() {
    return m_refIfcSoundValueList;
}

Step::RefLinkedList< IfcSpace > &ExpressDataSet::getAllIfcSpace() {
    return m_refIfcSpaceList;
}

Step::RefLinkedList< IfcSpaceHeaterType > &ExpressDataSet::getAllIfcSpaceHeaterType() {
    return m_refIfcSpaceHeaterTypeList;
}

Step::RefLinkedList< IfcSpaceProgram > &ExpressDataSet::getAllIfcSpaceProgram() {
    return m_refIfcSpaceProgramList;
}

Step::RefLinkedList< IfcSpaceThermalLoadProperties > &ExpressDataSet::getAllIfcSpaceThermalLoadProperties() {
    return m_refIfcSpaceThermalLoadPropertiesList;
}

Step::RefLinkedList< IfcSpaceType > &ExpressDataSet::getAllIfcSpaceType() {
    return m_refIfcSpaceTypeList;
}

Step::RefLinkedList< IfcSpatialStructureElement > &ExpressDataSet::getAllIfcSpatialStructureElement() {
    return m_refIfcSpatialStructureElementList;
}

Step::RefLinkedList< IfcSpatialStructureElementType > &ExpressDataSet::getAllIfcSpatialStructureElementType() {
    return m_refIfcSpatialStructureElementTypeList;
}

Step::RefLinkedList< IfcSphere > &ExpressDataSet::getAllIfcSphere() {
    return m_refIfcSphereList;
}

Step::RefLinkedList< IfcStackTerminalType > &ExpressDataSet::getAllIfcStackTerminalType() {
    return m_refIfcStackTerminalTypeList;
}

Step::RefLinkedList< IfcStair > &ExpressDataSet::getAllIfcStair() {
    return m_refIfcStairList;
}

Step::RefLinkedList< IfcStairFlight > &ExpressDataSet::getAllIfcStairFlight() {
    return m_refIfcStairFlightList;
}

Step::RefLinkedList< IfcStairFlightType > &ExpressDataSet::getAllIfcStairFlightType() {
    return m_refIfcStairFlightTypeList;
}

Step::RefLinkedList< IfcStructuralAction > &ExpressDataSet::getAllIfcStructuralAction() {
    return m_refIfcStructuralActionList;
}

Step::RefLinkedList< IfcStructuralActivity > &ExpressDataSet::getAllIfcStructuralActivity() {
    return m_refIfcStructuralActivityList;
}

Step::RefLinkedList< IfcStructuralAnalysisModel > &ExpressDataSet::getAllIfcStructuralAnalysisModel() {
    return m_refIfcStructuralAnalysisModelList;
}

Step::RefLinkedList< IfcStructuralConnection > &ExpressDataSet::getAllIfcStructuralConnection() {
    return m_refIfcStructuralConnectionList;
}

Step::RefLinkedList< IfcStructuralConnectionCondition > &ExpressDataSet::getAllIfcStructuralConnectionCondition() {
    return m_refIfcStructuralConnectionConditionList;
}

Step::RefLinkedList< IfcStructuralCurveConnection > &ExpressDataSet::getAllIfcStructuralCurveConnection() {
    return m_refIfcStructuralCurveConnectionList;
}

Step::RefLinkedList< IfcStructuralCurveMember > &ExpressDataSet::getAllIfcStructuralCurveMember() {
    return m_refIfcStructuralCurveMemberList;
}

Step::RefLinkedList< IfcStructuralCurveMemberVarying > &ExpressDataSet::getAllIfcStructuralCurveMemberVarying() {
    return m_refIfcStructuralCurveMemberVaryingList;
}

Step::RefLinkedList< IfcStructuralItem > &ExpressDataSet::getAllIfcStructuralItem() {
    return m_refIfcStructuralItemList;
}

Step::RefLinkedList< IfcStructuralLinearAction > &ExpressDataSet::getAllIfcStructuralLinearAction() {
    return m_refIfcStructuralLinearActionList;
}

Step::RefLinkedList< IfcStructuralLinearActionVarying > &ExpressDataSet::getAllIfcStructuralLinearActionVarying() {
    return m_refIfcStructuralLinearActionVaryingList;
}

Step::RefLinkedList< IfcStructuralLoad > &ExpressDataSet::getAllIfcStructuralLoad() {
    return m_refIfcStructuralLoadList;
}

Step::RefLinkedList< IfcStructuralLoadGroup > &ExpressDataSet::getAllIfcStructuralLoadGroup() {
    return m_refIfcStructuralLoadGroupList;
}

Step::RefLinkedList< IfcStructuralLoadLinearForce > &ExpressDataSet::getAllIfcStructuralLoadLinearForce() {
    return m_refIfcStructuralLoadLinearForceList;
}

Step::RefLinkedList< IfcStructuralLoadPlanarForce > &ExpressDataSet::getAllIfcStructuralLoadPlanarForce() {
    return m_refIfcStructuralLoadPlanarForceList;
}

Step::RefLinkedList< IfcStructuralLoadSingleDisplacement > &ExpressDataSet::getAllIfcStructuralLoadSingleDisplacement() {
    return m_refIfcStructuralLoadSingleDisplacementList;
}

Step::RefLinkedList< IfcStructuralLoadSingleDisplacementDistortion > &ExpressDataSet::getAllIfcStructuralLoadSingleDisplacementDistortion() {
    return m_refIfcStructuralLoadSingleDisplacementDistortionList;
}

Step::RefLinkedList< IfcStructuralLoadSingleForce > &ExpressDataSet::getAllIfcStructuralLoadSingleForce() {
    return m_refIfcStructuralLoadSingleForceList;
}

Step::RefLinkedList< IfcStructuralLoadSingleForceWarping > &ExpressDataSet::getAllIfcStructuralLoadSingleForceWarping() {
    return m_refIfcStructuralLoadSingleForceWarpingList;
}

Step::RefLinkedList< IfcStructuralLoadStatic > &ExpressDataSet::getAllIfcStructuralLoadStatic() {
    return m_refIfcStructuralLoadStaticList;
}

Step::RefLinkedList< IfcStructuralLoadTemperature > &ExpressDataSet::getAllIfcStructuralLoadTemperature() {
    return m_refIfcStructuralLoadTemperatureList;
}

Step::RefLinkedList< IfcStructuralMember > &ExpressDataSet::getAllIfcStructuralMember() {
    return m_refIfcStructuralMemberList;
}

Step::RefLinkedList< IfcStructuralPlanarAction > &ExpressDataSet::getAllIfcStructuralPlanarAction() {
    return m_refIfcStructuralPlanarActionList;
}

Step::RefLinkedList< IfcStructuralPlanarActionVarying > &ExpressDataSet::getAllIfcStructuralPlanarActionVarying() {
    return m_refIfcStructuralPlanarActionVaryingList;
}

Step::RefLinkedList< IfcStructuralPointAction > &ExpressDataSet::getAllIfcStructuralPointAction() {
    return m_refIfcStructuralPointActionList;
}

Step::RefLinkedList< IfcStructuralPointConnection > &ExpressDataSet::getAllIfcStructuralPointConnection() {
    return m_refIfcStructuralPointConnectionList;
}

Step::RefLinkedList< IfcStructuralPointReaction > &ExpressDataSet::getAllIfcStructuralPointReaction() {
    return m_refIfcStructuralPointReactionList;
}

Step::RefLinkedList< IfcStructuralProfileProperties > &ExpressDataSet::getAllIfcStructuralProfileProperties() {
    return m_refIfcStructuralProfilePropertiesList;
}

Step::RefLinkedList< IfcStructuralReaction > &ExpressDataSet::getAllIfcStructuralReaction() {
    return m_refIfcStructuralReactionList;
}

Step::RefLinkedList< IfcStructuralResultGroup > &ExpressDataSet::getAllIfcStructuralResultGroup() {
    return m_refIfcStructuralResultGroupList;
}

Step::RefLinkedList< IfcStructuralSteelProfileProperties > &ExpressDataSet::getAllIfcStructuralSteelProfileProperties() {
    return m_refIfcStructuralSteelProfilePropertiesList;
}

Step::RefLinkedList< IfcStructuralSurfaceConnection > &ExpressDataSet::getAllIfcStructuralSurfaceConnection() {
    return m_refIfcStructuralSurfaceConnectionList;
}

Step::RefLinkedList< IfcStructuralSurfaceMember > &ExpressDataSet::getAllIfcStructuralSurfaceMember() {
    return m_refIfcStructuralSurfaceMemberList;
}

Step::RefLinkedList< IfcStructuralSurfaceMemberVarying > &ExpressDataSet::getAllIfcStructuralSurfaceMemberVarying() {
    return m_refIfcStructuralSurfaceMemberVaryingList;
}

Step::RefLinkedList< IfcStructuredDimensionCallout > &ExpressDataSet::getAllIfcStructuredDimensionCallout() {
    return m_refIfcStructuredDimensionCalloutList;
}

Step::RefLinkedList< IfcStyleModel > &ExpressDataSet::getAllIfcStyleModel() {
    return m_refIfcStyleModelList;
}

Step::RefLinkedList< IfcStyledItem > &ExpressDataSet::getAllIfcStyledItem() {
    return m_refIfcStyledItemList;
}

Step::RefLinkedList< IfcStyledRepresentation > &ExpressDataSet::getAllIfcStyledRepresentation() {
    return m_refIfcStyledRepresentationList;
}

Step::RefLinkedList< IfcSubContractResource > &ExpressDataSet::getAllIfcSubContractResource() {
    return m_refIfcSubContractResourceList;
}

Step::RefLinkedList< IfcSubedge > &ExpressDataSet::getAllIfcSubedge() {
    return m_refIfcSubedgeList;
}

Step::RefLinkedList< IfcSurface > &ExpressDataSet::getAllIfcSurface() {
    return m_refIfcSurfaceList;
}

Step::RefLinkedList< IfcSurfaceCurveSweptAreaSolid > &ExpressDataSet::getAllIfcSurfaceCurveSweptAreaSolid() {
    return m_refIfcSurfaceCurveSweptAreaSolidList;
}

Step::RefLinkedList< IfcSurfaceOfLinearExtrusion > &ExpressDataSet::getAllIfcSurfaceOfLinearExtrusion() {
    return m_refIfcSurfaceOfLinearExtrusionList;
}

Step::RefLinkedList< IfcSurfaceOfRevolution > &ExpressDataSet::getAllIfcSurfaceOfRevolution() {
    return m_refIfcSurfaceOfRevolutionList;
}

Step::RefLinkedList< IfcSurfaceStyle > &ExpressDataSet::getAllIfcSurfaceStyle() {
    return m_refIfcSurfaceStyleList;
}

Step::RefLinkedList< IfcSurfaceStyleLighting > &ExpressDataSet::getAllIfcSurfaceStyleLighting() {
    return m_refIfcSurfaceStyleLightingList;
}

Step::RefLinkedList< IfcSurfaceStyleRefraction > &ExpressDataSet::getAllIfcSurfaceStyleRefraction() {
    return m_refIfcSurfaceStyleRefractionList;
}

Step::RefLinkedList< IfcSurfaceStyleRendering > &ExpressDataSet::getAllIfcSurfaceStyleRendering() {
    return m_refIfcSurfaceStyleRenderingList;
}

Step::RefLinkedList< IfcSurfaceStyleShading > &ExpressDataSet::getAllIfcSurfaceStyleShading() {
    return m_refIfcSurfaceStyleShadingList;
}

Step::RefLinkedList< IfcSurfaceStyleWithTextures > &ExpressDataSet::getAllIfcSurfaceStyleWithTextures() {
    return m_refIfcSurfaceStyleWithTexturesList;
}

Step::RefLinkedList< IfcSurfaceTexture > &ExpressDataSet::getAllIfcSurfaceTexture() {
    return m_refIfcSurfaceTextureList;
}

Step::RefLinkedList< IfcSweptAreaSolid > &ExpressDataSet::getAllIfcSweptAreaSolid() {
    return m_refIfcSweptAreaSolidList;
}

Step::RefLinkedList< IfcSweptDiskSolid > &ExpressDataSet::getAllIfcSweptDiskSolid() {
    return m_refIfcSweptDiskSolidList;
}

Step::RefLinkedList< IfcSweptSurface > &ExpressDataSet::getAllIfcSweptSurface() {
    return m_refIfcSweptSurfaceList;
}

Step::RefLinkedList< IfcSwitchingDeviceType > &ExpressDataSet::getAllIfcSwitchingDeviceType() {
    return m_refIfcSwitchingDeviceTypeList;
}

Step::RefLinkedList< IfcSymbolStyle > &ExpressDataSet::getAllIfcSymbolStyle() {
    return m_refIfcSymbolStyleList;
}

Step::RefLinkedList< IfcSystem > &ExpressDataSet::getAllIfcSystem() {
    return m_refIfcSystemList;
}

Step::RefLinkedList< IfcSystemFurnitureElementType > &ExpressDataSet::getAllIfcSystemFurnitureElementType() {
    return m_refIfcSystemFurnitureElementTypeList;
}

Step::RefLinkedList< IfcTShapeProfileDef > &ExpressDataSet::getAllIfcTShapeProfileDef() {
    return m_refIfcTShapeProfileDefList;
}

Step::RefLinkedList< IfcTable > &ExpressDataSet::getAllIfcTable() {
    return m_refIfcTableList;
}

Step::RefLinkedList< IfcTableRow > &ExpressDataSet::getAllIfcTableRow() {
    return m_refIfcTableRowList;
}

Step::RefLinkedList< IfcTankType > &ExpressDataSet::getAllIfcTankType() {
    return m_refIfcTankTypeList;
}

Step::RefLinkedList< IfcTask > &ExpressDataSet::getAllIfcTask() {
    return m_refIfcTaskList;
}

Step::RefLinkedList< IfcTelecomAddress > &ExpressDataSet::getAllIfcTelecomAddress() {
    return m_refIfcTelecomAddressList;
}

Step::RefLinkedList< IfcTendon > &ExpressDataSet::getAllIfcTendon() {
    return m_refIfcTendonList;
}

Step::RefLinkedList< IfcTendonAnchor > &ExpressDataSet::getAllIfcTendonAnchor() {
    return m_refIfcTendonAnchorList;
}

Step::RefLinkedList< IfcTerminatorSymbol > &ExpressDataSet::getAllIfcTerminatorSymbol() {
    return m_refIfcTerminatorSymbolList;
}

Step::RefLinkedList< IfcTextLiteral > &ExpressDataSet::getAllIfcTextLiteral() {
    return m_refIfcTextLiteralList;
}

Step::RefLinkedList< IfcTextLiteralWithExtent > &ExpressDataSet::getAllIfcTextLiteralWithExtent() {
    return m_refIfcTextLiteralWithExtentList;
}

Step::RefLinkedList< IfcTextStyle > &ExpressDataSet::getAllIfcTextStyle() {
    return m_refIfcTextStyleList;
}

Step::RefLinkedList< IfcTextStyleFontModel > &ExpressDataSet::getAllIfcTextStyleFontModel() {
    return m_refIfcTextStyleFontModelList;
}

Step::RefLinkedList< IfcTextStyleForDefinedFont > &ExpressDataSet::getAllIfcTextStyleForDefinedFont() {
    return m_refIfcTextStyleForDefinedFontList;
}

Step::RefLinkedList< IfcTextStyleTextModel > &ExpressDataSet::getAllIfcTextStyleTextModel() {
    return m_refIfcTextStyleTextModelList;
}

Step::RefLinkedList< IfcTextStyleWithBoxCharacteristics > &ExpressDataSet::getAllIfcTextStyleWithBoxCharacteristics() {
    return m_refIfcTextStyleWithBoxCharacteristicsList;
}

Step::RefLinkedList< IfcTextureCoordinate > &ExpressDataSet::getAllIfcTextureCoordinate() {
    return m_refIfcTextureCoordinateList;
}

Step::RefLinkedList< IfcTextureCoordinateGenerator > &ExpressDataSet::getAllIfcTextureCoordinateGenerator() {
    return m_refIfcTextureCoordinateGeneratorList;
}

Step::RefLinkedList< IfcTextureMap > &ExpressDataSet::getAllIfcTextureMap() {
    return m_refIfcTextureMapList;
}

Step::RefLinkedList< IfcTextureVertex > &ExpressDataSet::getAllIfcTextureVertex() {
    return m_refIfcTextureVertexList;
}

Step::RefLinkedList< IfcThermalMaterialProperties > &ExpressDataSet::getAllIfcThermalMaterialProperties() {
    return m_refIfcThermalMaterialPropertiesList;
}

Step::RefLinkedList< IfcTimeSeries > &ExpressDataSet::getAllIfcTimeSeries() {
    return m_refIfcTimeSeriesList;
}

Step::RefLinkedList< IfcTimeSeriesReferenceRelationship > &ExpressDataSet::getAllIfcTimeSeriesReferenceRelationship() {
    return m_refIfcTimeSeriesReferenceRelationshipList;
}

Step::RefLinkedList< IfcTimeSeriesSchedule > &ExpressDataSet::getAllIfcTimeSeriesSchedule() {
    return m_refIfcTimeSeriesScheduleList;
}

Step::RefLinkedList< IfcTimeSeriesValue > &ExpressDataSet::getAllIfcTimeSeriesValue() {
    return m_refIfcTimeSeriesValueList;
}

Step::RefLinkedList< IfcTopologicalRepresentationItem > &ExpressDataSet::getAllIfcTopologicalRepresentationItem() {
    return m_refIfcTopologicalRepresentationItemList;
}

Step::RefLinkedList< IfcTopologyRepresentation > &ExpressDataSet::getAllIfcTopologyRepresentation() {
    return m_refIfcTopologyRepresentationList;
}

Step::RefLinkedList< IfcTransformerType > &ExpressDataSet::getAllIfcTransformerType() {
    return m_refIfcTransformerTypeList;
}

Step::RefLinkedList< IfcTransportElement > &ExpressDataSet::getAllIfcTransportElement() {
    return m_refIfcTransportElementList;
}

Step::RefLinkedList< IfcTransportElementType > &ExpressDataSet::getAllIfcTransportElementType() {
    return m_refIfcTransportElementTypeList;
}

Step::RefLinkedList< IfcTrapeziumProfileDef > &ExpressDataSet::getAllIfcTrapeziumProfileDef() {
    return m_refIfcTrapeziumProfileDefList;
}

Step::RefLinkedList< IfcTrimmedCurve > &ExpressDataSet::getAllIfcTrimmedCurve() {
    return m_refIfcTrimmedCurveList;
}

Step::RefLinkedList< IfcTubeBundleType > &ExpressDataSet::getAllIfcTubeBundleType() {
    return m_refIfcTubeBundleTypeList;
}

Step::RefLinkedList< IfcTwoDirectionRepeatFactor > &ExpressDataSet::getAllIfcTwoDirectionRepeatFactor() {
    return m_refIfcTwoDirectionRepeatFactorList;
}

Step::RefLinkedList< IfcTypeObject > &ExpressDataSet::getAllIfcTypeObject() {
    return m_refIfcTypeObjectList;
}

Step::RefLinkedList< IfcTypeProduct > &ExpressDataSet::getAllIfcTypeProduct() {
    return m_refIfcTypeProductList;
}

Step::RefLinkedList< IfcUShapeProfileDef > &ExpressDataSet::getAllIfcUShapeProfileDef() {
    return m_refIfcUShapeProfileDefList;
}

Step::RefLinkedList< IfcUnitAssignment > &ExpressDataSet::getAllIfcUnitAssignment() {
    return m_refIfcUnitAssignmentList;
}

Step::RefLinkedList< IfcUnitaryEquipmentType > &ExpressDataSet::getAllIfcUnitaryEquipmentType() {
    return m_refIfcUnitaryEquipmentTypeList;
}

Step::RefLinkedList< IfcValveType > &ExpressDataSet::getAllIfcValveType() {
    return m_refIfcValveTypeList;
}

Step::RefLinkedList< IfcVector > &ExpressDataSet::getAllIfcVector() {
    return m_refIfcVectorList;
}

Step::RefLinkedList< IfcVertex > &ExpressDataSet::getAllIfcVertex() {
    return m_refIfcVertexList;
}

Step::RefLinkedList< IfcVertexBasedTextureMap > &ExpressDataSet::getAllIfcVertexBasedTextureMap() {
    return m_refIfcVertexBasedTextureMapList;
}

Step::RefLinkedList< IfcVertexLoop > &ExpressDataSet::getAllIfcVertexLoop() {
    return m_refIfcVertexLoopList;
}

Step::RefLinkedList< IfcVertexPoint > &ExpressDataSet::getAllIfcVertexPoint() {
    return m_refIfcVertexPointList;
}

Step::RefLinkedList< IfcVibrationIsolatorType > &ExpressDataSet::getAllIfcVibrationIsolatorType() {
    return m_refIfcVibrationIsolatorTypeList;
}

Step::RefLinkedList< IfcVirtualElement > &ExpressDataSet::getAllIfcVirtualElement() {
    return m_refIfcVirtualElementList;
}

Step::RefLinkedList< IfcVirtualGridIntersection > &ExpressDataSet::getAllIfcVirtualGridIntersection() {
    return m_refIfcVirtualGridIntersectionList;
}

Step::RefLinkedList< IfcWall > &ExpressDataSet::getAllIfcWall() {
    return m_refIfcWallList;
}

Step::RefLinkedList< IfcWallStandardCase > &ExpressDataSet::getAllIfcWallStandardCase() {
    return m_refIfcWallStandardCaseList;
}

Step::RefLinkedList< IfcWallType > &ExpressDataSet::getAllIfcWallType() {
    return m_refIfcWallTypeList;
}

Step::RefLinkedList< IfcWasteTerminalType > &ExpressDataSet::getAllIfcWasteTerminalType() {
    return m_refIfcWasteTerminalTypeList;
}

Step::RefLinkedList< IfcWaterProperties > &ExpressDataSet::getAllIfcWaterProperties() {
    return m_refIfcWaterPropertiesList;
}

Step::RefLinkedList< IfcWindow > &ExpressDataSet::getAllIfcWindow() {
    return m_refIfcWindowList;
}

Step::RefLinkedList< IfcWindowLiningProperties > &ExpressDataSet::getAllIfcWindowLiningProperties() {
    return m_refIfcWindowLiningPropertiesList;
}

Step::RefLinkedList< IfcWindowPanelProperties > &ExpressDataSet::getAllIfcWindowPanelProperties() {
    return m_refIfcWindowPanelPropertiesList;
}

Step::RefLinkedList< IfcWindowStyle > &ExpressDataSet::getAllIfcWindowStyle() {
    return m_refIfcWindowStyleList;
}

Step::RefLinkedList< IfcWorkControl > &ExpressDataSet::getAllIfcWorkControl() {
    return m_refIfcWorkControlList;
}

Step::RefLinkedList< IfcWorkPlan > &ExpressDataSet::getAllIfcWorkPlan() {
    return m_refIfcWorkPlanList;
}

Step::RefLinkedList< IfcWorkSchedule > &ExpressDataSet::getAllIfcWorkSchedule() {
    return m_refIfcWorkScheduleList;
}

Step::RefLinkedList< IfcZShapeProfileDef > &ExpressDataSet::getAllIfcZShapeProfileDef() {
    return m_refIfcZShapeProfileDefList;
}

Step::RefLinkedList< IfcZone > &ExpressDataSet::getAllIfcZone() {
    return m_refIfcZoneList;
}

