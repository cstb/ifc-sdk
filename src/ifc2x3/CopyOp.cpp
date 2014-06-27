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



#include <ifc2x3/CopyOp.h>
#include <ifc2x3/ExpressDataSet.h>
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
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

CopyOp::CopyOp() {
}

CopyOp::~CopyOp() {
}

void CopyOp::associate(const Step::BaseObject * /*original*/, Step::BaseObject * /*clone*/) const {
}

Step::BaseObject *CopyOp::find(const Step::BaseObject * /*original*/) const {
    return 0;
}

ExpressDataSet *CopyOp::getExpressDataSet() const {
    return 0;
}

Step::BaseObject *CopyOp::operator()(const Step::BaseObject *obj) const {
    if (obj != NULL && const_cast< Step::BaseObject * > (obj)->acceptVisitor(const_cast< CopyOp * > (this))) {
        return _bo.get();
    }
    else {
        return NULL;
    }
}













































































































































































































































































































































































































































































































































































DeepCopyOp::DeepCopyOp() {
}

DeepCopyOp::~DeepCopyOp() {
}

void DeepCopyOp::associate(const Step::BaseObject *original, Step::BaseObject *clone) const {
    _mapOriginalToClone[original] = clone;
}

Step::BaseObject *DeepCopyOp::find(const Step::BaseObject *original) const {
    std::map<const Step::BaseObject*,Step::BaseObject*>::iterator it = _mapOriginalToClone.find(original);
    if (it != _mapOriginalToClone.end()) {
        return (*it).second;
    }
    else {
        return 0;
    }
}

bool DeepCopyOp::visitIfc2DCompositeCurve(Ifc2DCompositeCurve *obj) {
    if (obj) {
        Ifc2DCompositeCurve *clone = static_cast< Ifc2DCompositeCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfc2DCompositeCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcActionRequest(IfcActionRequest *obj) {
    if (obj) {
        IfcActionRequest *clone = static_cast< IfcActionRequest * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcActionRequest(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcActor(IfcActor *obj) {
    if (obj) {
        IfcActor *clone = static_cast< IfcActor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcActor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcActorRole(IfcActorRole *obj) {
    if (obj) {
        IfcActorRole *clone = static_cast< IfcActorRole * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcActorRole(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcActuatorType(IfcActuatorType *obj) {
    if (obj) {
        IfcActuatorType *clone = static_cast< IfcActuatorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcActuatorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *obj) {
    if (obj) {
        IfcAirTerminalBoxType *clone = static_cast< IfcAirTerminalBoxType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAirTerminalBoxType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAirTerminalType(IfcAirTerminalType *obj) {
    if (obj) {
        IfcAirTerminalType *clone = static_cast< IfcAirTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAirTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *obj) {
    if (obj) {
        IfcAirToAirHeatRecoveryType *clone = static_cast< IfcAirToAirHeatRecoveryType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAirToAirHeatRecoveryType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAlarmType(IfcAlarmType *obj) {
    if (obj) {
        IfcAlarmType *clone = static_cast< IfcAlarmType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAlarmType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAngularDimension(IfcAngularDimension *obj) {
    if (obj) {
        IfcAngularDimension *clone = static_cast< IfcAngularDimension * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAngularDimension(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAnnotation(IfcAnnotation *obj) {
    if (obj) {
        IfcAnnotation *clone = static_cast< IfcAnnotation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAnnotation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *obj) {
    if (obj) {
        IfcAnnotationCurveOccurrence *clone = static_cast< IfcAnnotationCurveOccurrence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAnnotationCurveOccurrence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAnnotationFillArea(IfcAnnotationFillArea *obj) {
    if (obj) {
        IfcAnnotationFillArea *clone = static_cast< IfcAnnotationFillArea * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAnnotationFillArea(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *obj) {
    if (obj) {
        IfcAnnotationFillAreaOccurrence *clone = static_cast< IfcAnnotationFillAreaOccurrence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAnnotationFillAreaOccurrence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAnnotationSurface(IfcAnnotationSurface *obj) {
    if (obj) {
        IfcAnnotationSurface *clone = static_cast< IfcAnnotationSurface * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAnnotationSurface(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *obj) {
    if (obj) {
        IfcAnnotationSurfaceOccurrence *clone = static_cast< IfcAnnotationSurfaceOccurrence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAnnotationSurfaceOccurrence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *obj) {
    if (obj) {
        IfcAnnotationSymbolOccurrence *clone = static_cast< IfcAnnotationSymbolOccurrence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAnnotationSymbolOccurrence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *obj) {
    if (obj) {
        IfcAnnotationTextOccurrence *clone = static_cast< IfcAnnotationTextOccurrence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAnnotationTextOccurrence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcApplication(IfcApplication *obj) {
    if (obj) {
        IfcApplication *clone = static_cast< IfcApplication * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcApplication(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *obj) {
    if (obj) {
        IfcAppliedValueRelationship *clone = static_cast< IfcAppliedValueRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAppliedValueRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcApproval(IfcApproval *obj) {
    if (obj) {
        IfcApproval *clone = static_cast< IfcApproval * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcApproval(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *obj) {
    if (obj) {
        IfcApprovalActorRelationship *clone = static_cast< IfcApprovalActorRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcApprovalActorRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *obj) {
    if (obj) {
        IfcApprovalPropertyRelationship *clone = static_cast< IfcApprovalPropertyRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcApprovalPropertyRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcApprovalRelationship(IfcApprovalRelationship *obj) {
    if (obj) {
        IfcApprovalRelationship *clone = static_cast< IfcApprovalRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcApprovalRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *obj) {
    if (obj) {
        IfcArbitraryClosedProfileDef *clone = static_cast< IfcArbitraryClosedProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcArbitraryClosedProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *obj) {
    if (obj) {
        IfcArbitraryOpenProfileDef *clone = static_cast< IfcArbitraryOpenProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcArbitraryOpenProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *obj) {
    if (obj) {
        IfcArbitraryProfileDefWithVoids *clone = static_cast< IfcArbitraryProfileDefWithVoids * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcArbitraryProfileDefWithVoids(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAsset(IfcAsset *obj) {
    if (obj) {
        IfcAsset *clone = static_cast< IfcAsset * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAsset(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *obj) {
    if (obj) {
        IfcAsymmetricIShapeProfileDef *clone = static_cast< IfcAsymmetricIShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAsymmetricIShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAxis1Placement(IfcAxis1Placement *obj) {
    if (obj) {
        IfcAxis1Placement *clone = static_cast< IfcAxis1Placement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAxis1Placement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAxis2Placement2D(IfcAxis2Placement2D *obj) {
    if (obj) {
        IfcAxis2Placement2D *clone = static_cast< IfcAxis2Placement2D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAxis2Placement2D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcAxis2Placement3D(IfcAxis2Placement3D *obj) {
    if (obj) {
        IfcAxis2Placement3D *clone = static_cast< IfcAxis2Placement3D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcAxis2Placement3D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBeam(IfcBeam *obj) {
    if (obj) {
        IfcBeam *clone = static_cast< IfcBeam * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBeam(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBeamType(IfcBeamType *obj) {
    if (obj) {
        IfcBeamType *clone = static_cast< IfcBeamType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBeamType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBezierCurve(IfcBezierCurve *obj) {
    if (obj) {
        IfcBezierCurve *clone = static_cast< IfcBezierCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBezierCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBlobTexture(IfcBlobTexture *obj) {
    if (obj) {
        IfcBlobTexture *clone = static_cast< IfcBlobTexture * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBlobTexture(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBlock(IfcBlock *obj) {
    if (obj) {
        IfcBlock *clone = static_cast< IfcBlock * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBlock(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBoilerType(IfcBoilerType *obj) {
    if (obj) {
        IfcBoilerType *clone = static_cast< IfcBoilerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBoilerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBooleanClippingResult(IfcBooleanClippingResult *obj) {
    if (obj) {
        IfcBooleanClippingResult *clone = static_cast< IfcBooleanClippingResult * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBooleanClippingResult(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBooleanResult(IfcBooleanResult *obj) {
    if (obj) {
        IfcBooleanResult *clone = static_cast< IfcBooleanResult * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBooleanResult(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *obj) {
    if (obj) {
        IfcBoundaryEdgeCondition *clone = static_cast< IfcBoundaryEdgeCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBoundaryEdgeCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *obj) {
    if (obj) {
        IfcBoundaryFaceCondition *clone = static_cast< IfcBoundaryFaceCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBoundaryFaceCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *obj) {
    if (obj) {
        IfcBoundaryNodeCondition *clone = static_cast< IfcBoundaryNodeCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBoundaryNodeCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *obj) {
    if (obj) {
        IfcBoundaryNodeConditionWarping *clone = static_cast< IfcBoundaryNodeConditionWarping * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBoundaryNodeConditionWarping(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBoundedSurface(IfcBoundedSurface *obj) {
    if (obj) {
        IfcBoundedSurface *clone = static_cast< IfcBoundedSurface * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBoundedSurface(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBoundingBox(IfcBoundingBox *obj) {
    if (obj) {
        IfcBoundingBox *clone = static_cast< IfcBoundingBox * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBoundingBox(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *obj) {
    if (obj) {
        IfcBoxedHalfSpace *clone = static_cast< IfcBoxedHalfSpace * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBoxedHalfSpace(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBuilding(IfcBuilding *obj) {
    if (obj) {
        IfcBuilding *clone = static_cast< IfcBuilding * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBuilding(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBuildingElementPart(IfcBuildingElementPart *obj) {
    if (obj) {
        IfcBuildingElementPart *clone = static_cast< IfcBuildingElementPart * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBuildingElementPart(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBuildingElementProxy(IfcBuildingElementProxy *obj) {
    if (obj) {
        IfcBuildingElementProxy *clone = static_cast< IfcBuildingElementProxy * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBuildingElementProxy(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *obj) {
    if (obj) {
        IfcBuildingElementProxyType *clone = static_cast< IfcBuildingElementProxyType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBuildingElementProxyType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcBuildingStorey(IfcBuildingStorey *obj) {
    if (obj) {
        IfcBuildingStorey *clone = static_cast< IfcBuildingStorey * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcBuildingStorey(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCShapeProfileDef(IfcCShapeProfileDef *obj) {
    if (obj) {
        IfcCShapeProfileDef *clone = static_cast< IfcCShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *obj) {
    if (obj) {
        IfcCableCarrierFittingType *clone = static_cast< IfcCableCarrierFittingType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCableCarrierFittingType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *obj) {
    if (obj) {
        IfcCableCarrierSegmentType *clone = static_cast< IfcCableCarrierSegmentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCableCarrierSegmentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCableSegmentType(IfcCableSegmentType *obj) {
    if (obj) {
        IfcCableSegmentType *clone = static_cast< IfcCableSegmentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCableSegmentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCalendarDate(IfcCalendarDate *obj) {
    if (obj) {
        IfcCalendarDate *clone = static_cast< IfcCalendarDate * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCalendarDate(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCartesianPoint(IfcCartesianPoint *obj) {
    if (obj) {
        IfcCartesianPoint *clone = static_cast< IfcCartesianPoint * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCartesianPoint(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *obj) {
    if (obj) {
        IfcCartesianTransformationOperator2D *clone = static_cast< IfcCartesianTransformationOperator2D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCartesianTransformationOperator2D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *obj) {
    if (obj) {
        IfcCartesianTransformationOperator2DnonUniform *clone = static_cast< IfcCartesianTransformationOperator2DnonUniform * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCartesianTransformationOperator2DnonUniform(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *obj) {
    if (obj) {
        IfcCartesianTransformationOperator3D *clone = static_cast< IfcCartesianTransformationOperator3D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCartesianTransformationOperator3D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *obj) {
    if (obj) {
        IfcCartesianTransformationOperator3DnonUniform *clone = static_cast< IfcCartesianTransformationOperator3DnonUniform * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCartesianTransformationOperator3DnonUniform(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *obj) {
    if (obj) {
        IfcCenterLineProfileDef *clone = static_cast< IfcCenterLineProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCenterLineProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *obj) {
    if (obj) {
        IfcChamferEdgeFeature *clone = static_cast< IfcChamferEdgeFeature * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcChamferEdgeFeature(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcChillerType(IfcChillerType *obj) {
    if (obj) {
        IfcChillerType *clone = static_cast< IfcChillerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcChillerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCircle(IfcCircle *obj) {
    if (obj) {
        IfcCircle *clone = static_cast< IfcCircle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCircle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *obj) {
    if (obj) {
        IfcCircleHollowProfileDef *clone = static_cast< IfcCircleHollowProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCircleHollowProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCircleProfileDef(IfcCircleProfileDef *obj) {
    if (obj) {
        IfcCircleProfileDef *clone = static_cast< IfcCircleProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCircleProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcClassification(IfcClassification *obj) {
    if (obj) {
        IfcClassification *clone = static_cast< IfcClassification * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcClassification(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcClassificationItem(IfcClassificationItem *obj) {
    if (obj) {
        IfcClassificationItem *clone = static_cast< IfcClassificationItem * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcClassificationItem(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *obj) {
    if (obj) {
        IfcClassificationItemRelationship *clone = static_cast< IfcClassificationItemRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcClassificationItemRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcClassificationNotation(IfcClassificationNotation *obj) {
    if (obj) {
        IfcClassificationNotation *clone = static_cast< IfcClassificationNotation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcClassificationNotation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *obj) {
    if (obj) {
        IfcClassificationNotationFacet *clone = static_cast< IfcClassificationNotationFacet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcClassificationNotationFacet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcClassificationReference(IfcClassificationReference *obj) {
    if (obj) {
        IfcClassificationReference *clone = static_cast< IfcClassificationReference * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcClassificationReference(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcClosedShell(IfcClosedShell *obj) {
    if (obj) {
        IfcClosedShell *clone = static_cast< IfcClosedShell * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcClosedShell(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCoilType(IfcCoilType *obj) {
    if (obj) {
        IfcCoilType *clone = static_cast< IfcCoilType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCoilType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcColourRgb(IfcColourRgb *obj) {
    if (obj) {
        IfcColourRgb *clone = static_cast< IfcColourRgb * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcColourRgb(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcColumn(IfcColumn *obj) {
    if (obj) {
        IfcColumn *clone = static_cast< IfcColumn * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcColumn(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcColumnType(IfcColumnType *obj) {
    if (obj) {
        IfcColumnType *clone = static_cast< IfcColumnType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcColumnType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcComplexProperty(IfcComplexProperty *obj) {
    if (obj) {
        IfcComplexProperty *clone = static_cast< IfcComplexProperty * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcComplexProperty(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCompositeCurve(IfcCompositeCurve *obj) {
    if (obj) {
        IfcCompositeCurve *clone = static_cast< IfcCompositeCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCompositeCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *obj) {
    if (obj) {
        IfcCompositeCurveSegment *clone = static_cast< IfcCompositeCurveSegment * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCompositeCurveSegment(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCompositeProfileDef(IfcCompositeProfileDef *obj) {
    if (obj) {
        IfcCompositeProfileDef *clone = static_cast< IfcCompositeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCompositeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCompressorType(IfcCompressorType *obj) {
    if (obj) {
        IfcCompressorType *clone = static_cast< IfcCompressorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCompressorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCondenserType(IfcCondenserType *obj) {
    if (obj) {
        IfcCondenserType *clone = static_cast< IfcCondenserType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCondenserType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCondition(IfcCondition *obj) {
    if (obj) {
        IfcCondition *clone = static_cast< IfcCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConditionCriterion(IfcConditionCriterion *obj) {
    if (obj) {
        IfcConditionCriterion *clone = static_cast< IfcConditionCriterion * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConditionCriterion(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConnectedFaceSet(IfcConnectedFaceSet *obj) {
    if (obj) {
        IfcConnectedFaceSet *clone = static_cast< IfcConnectedFaceSet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConnectedFaceSet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *obj) {
    if (obj) {
        IfcConnectionCurveGeometry *clone = static_cast< IfcConnectionCurveGeometry * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConnectionCurveGeometry(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *obj) {
    if (obj) {
        IfcConnectionPointEccentricity *clone = static_cast< IfcConnectionPointEccentricity * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConnectionPointEccentricity(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *obj) {
    if (obj) {
        IfcConnectionPointGeometry *clone = static_cast< IfcConnectionPointGeometry * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConnectionPointGeometry(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *obj) {
    if (obj) {
        IfcConnectionPortGeometry *clone = static_cast< IfcConnectionPortGeometry * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConnectionPortGeometry(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *obj) {
    if (obj) {
        IfcConnectionSurfaceGeometry *clone = static_cast< IfcConnectionSurfaceGeometry * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConnectionSurfaceGeometry(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *obj) {
    if (obj) {
        IfcConstraintAggregationRelationship *clone = static_cast< IfcConstraintAggregationRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConstraintAggregationRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *obj) {
    if (obj) {
        IfcConstraintClassificationRelationship *clone = static_cast< IfcConstraintClassificationRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConstraintClassificationRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConstraintRelationship(IfcConstraintRelationship *obj) {
    if (obj) {
        IfcConstraintRelationship *clone = static_cast< IfcConstraintRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConstraintRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *obj) {
    if (obj) {
        IfcConstructionEquipmentResource *clone = static_cast< IfcConstructionEquipmentResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConstructionEquipmentResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *obj) {
    if (obj) {
        IfcConstructionMaterialResource *clone = static_cast< IfcConstructionMaterialResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConstructionMaterialResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConstructionProductResource(IfcConstructionProductResource *obj) {
    if (obj) {
        IfcConstructionProductResource *clone = static_cast< IfcConstructionProductResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConstructionProductResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcContextDependentUnit(IfcContextDependentUnit *obj) {
    if (obj) {
        IfcContextDependentUnit *clone = static_cast< IfcContextDependentUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcContextDependentUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcControllerType(IfcControllerType *obj) {
    if (obj) {
        IfcControllerType *clone = static_cast< IfcControllerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcControllerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcConversionBasedUnit(IfcConversionBasedUnit *obj) {
    if (obj) {
        IfcConversionBasedUnit *clone = static_cast< IfcConversionBasedUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcConversionBasedUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCooledBeamType(IfcCooledBeamType *obj) {
    if (obj) {
        IfcCooledBeamType *clone = static_cast< IfcCooledBeamType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCooledBeamType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCoolingTowerType(IfcCoolingTowerType *obj) {
    if (obj) {
        IfcCoolingTowerType *clone = static_cast< IfcCoolingTowerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCoolingTowerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *obj) {
    if (obj) {
        IfcCoordinatedUniversalTimeOffset *clone = static_cast< IfcCoordinatedUniversalTimeOffset * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCoordinatedUniversalTimeOffset(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCostItem(IfcCostItem *obj) {
    if (obj) {
        IfcCostItem *clone = static_cast< IfcCostItem * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCostItem(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCostSchedule(IfcCostSchedule *obj) {
    if (obj) {
        IfcCostSchedule *clone = static_cast< IfcCostSchedule * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCostSchedule(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCostValue(IfcCostValue *obj) {
    if (obj) {
        IfcCostValue *clone = static_cast< IfcCostValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCostValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCovering(IfcCovering *obj) {
    if (obj) {
        IfcCovering *clone = static_cast< IfcCovering * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCovering(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCoveringType(IfcCoveringType *obj) {
    if (obj) {
        IfcCoveringType *clone = static_cast< IfcCoveringType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCoveringType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *obj) {
    if (obj) {
        IfcCraneRailAShapeProfileDef *clone = static_cast< IfcCraneRailAShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCraneRailAShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *obj) {
    if (obj) {
        IfcCraneRailFShapeProfileDef *clone = static_cast< IfcCraneRailFShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCraneRailFShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCrewResource(IfcCrewResource *obj) {
    if (obj) {
        IfcCrewResource *clone = static_cast< IfcCrewResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCrewResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCsgSolid(IfcCsgSolid *obj) {
    if (obj) {
        IfcCsgSolid *clone = static_cast< IfcCsgSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCsgSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCurrencyRelationship(IfcCurrencyRelationship *obj) {
    if (obj) {
        IfcCurrencyRelationship *clone = static_cast< IfcCurrencyRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCurrencyRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCurtainWall(IfcCurtainWall *obj) {
    if (obj) {
        IfcCurtainWall *clone = static_cast< IfcCurtainWall * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCurtainWall(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCurtainWallType(IfcCurtainWallType *obj) {
    if (obj) {
        IfcCurtainWallType *clone = static_cast< IfcCurtainWallType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCurtainWallType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *obj) {
    if (obj) {
        IfcCurveBoundedPlane *clone = static_cast< IfcCurveBoundedPlane * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCurveBoundedPlane(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCurveStyle(IfcCurveStyle *obj) {
    if (obj) {
        IfcCurveStyle *clone = static_cast< IfcCurveStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCurveStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCurveStyleFont(IfcCurveStyleFont *obj) {
    if (obj) {
        IfcCurveStyleFont *clone = static_cast< IfcCurveStyleFont * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCurveStyleFont(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *obj) {
    if (obj) {
        IfcCurveStyleFontAndScaling *clone = static_cast< IfcCurveStyleFontAndScaling * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCurveStyleFontAndScaling(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *obj) {
    if (obj) {
        IfcCurveStyleFontPattern *clone = static_cast< IfcCurveStyleFontPattern * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcCurveStyleFontPattern(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDamperType(IfcDamperType *obj) {
    if (obj) {
        IfcDamperType *clone = static_cast< IfcDamperType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDamperType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDateAndTime(IfcDateAndTime *obj) {
    if (obj) {
        IfcDateAndTime *clone = static_cast< IfcDateAndTime * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDateAndTime(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDefinedSymbol(IfcDefinedSymbol *obj) {
    if (obj) {
        IfcDefinedSymbol *clone = static_cast< IfcDefinedSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDefinedSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDerivedProfileDef(IfcDerivedProfileDef *obj) {
    if (obj) {
        IfcDerivedProfileDef *clone = static_cast< IfcDerivedProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDerivedProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDerivedUnit(IfcDerivedUnit *obj) {
    if (obj) {
        IfcDerivedUnit *clone = static_cast< IfcDerivedUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDerivedUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDerivedUnitElement(IfcDerivedUnitElement *obj) {
    if (obj) {
        IfcDerivedUnitElement *clone = static_cast< IfcDerivedUnitElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDerivedUnitElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDiameterDimension(IfcDiameterDimension *obj) {
    if (obj) {
        IfcDiameterDimension *clone = static_cast< IfcDiameterDimension * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDiameterDimension(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *obj) {
    if (obj) {
        IfcDimensionCalloutRelationship *clone = static_cast< IfcDimensionCalloutRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDimensionCalloutRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDimensionCurve(IfcDimensionCurve *obj) {
    if (obj) {
        IfcDimensionCurve *clone = static_cast< IfcDimensionCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDimensionCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *obj) {
    if (obj) {
        IfcDimensionCurveDirectedCallout *clone = static_cast< IfcDimensionCurveDirectedCallout * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDimensionCurveDirectedCallout(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *obj) {
    if (obj) {
        IfcDimensionCurveTerminator *clone = static_cast< IfcDimensionCurveTerminator * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDimensionCurveTerminator(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDimensionPair(IfcDimensionPair *obj) {
    if (obj) {
        IfcDimensionPair *clone = static_cast< IfcDimensionPair * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDimensionPair(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDimensionalExponents(IfcDimensionalExponents *obj) {
    if (obj) {
        IfcDimensionalExponents *clone = static_cast< IfcDimensionalExponents * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDimensionalExponents(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDirection(IfcDirection *obj) {
    if (obj) {
        IfcDirection *clone = static_cast< IfcDirection * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDirection(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDiscreteAccessory(IfcDiscreteAccessory *obj) {
    if (obj) {
        IfcDiscreteAccessory *clone = static_cast< IfcDiscreteAccessory * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDiscreteAccessory(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *obj) {
    if (obj) {
        IfcDiscreteAccessoryType *clone = static_cast< IfcDiscreteAccessoryType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDiscreteAccessoryType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDistributionChamberElement(IfcDistributionChamberElement *obj) {
    if (obj) {
        IfcDistributionChamberElement *clone = static_cast< IfcDistributionChamberElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDistributionChamberElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *obj) {
    if (obj) {
        IfcDistributionChamberElementType *clone = static_cast< IfcDistributionChamberElementType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDistributionChamberElementType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDistributionControlElement(IfcDistributionControlElement *obj) {
    if (obj) {
        IfcDistributionControlElement *clone = static_cast< IfcDistributionControlElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDistributionControlElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDistributionElement(IfcDistributionElement *obj) {
    if (obj) {
        IfcDistributionElement *clone = static_cast< IfcDistributionElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDistributionElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDistributionElementType(IfcDistributionElementType *obj) {
    if (obj) {
        IfcDistributionElementType *clone = static_cast< IfcDistributionElementType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDistributionElementType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDistributionFlowElement(IfcDistributionFlowElement *obj) {
    if (obj) {
        IfcDistributionFlowElement *clone = static_cast< IfcDistributionFlowElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDistributionFlowElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDistributionPort(IfcDistributionPort *obj) {
    if (obj) {
        IfcDistributionPort *clone = static_cast< IfcDistributionPort * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDistributionPort(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *obj) {
    if (obj) {
        IfcDocumentElectronicFormat *clone = static_cast< IfcDocumentElectronicFormat * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDocumentElectronicFormat(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDocumentInformation(IfcDocumentInformation *obj) {
    if (obj) {
        IfcDocumentInformation *clone = static_cast< IfcDocumentInformation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDocumentInformation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *obj) {
    if (obj) {
        IfcDocumentInformationRelationship *clone = static_cast< IfcDocumentInformationRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDocumentInformationRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDocumentReference(IfcDocumentReference *obj) {
    if (obj) {
        IfcDocumentReference *clone = static_cast< IfcDocumentReference * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDocumentReference(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDoor(IfcDoor *obj) {
    if (obj) {
        IfcDoor *clone = static_cast< IfcDoor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDoor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDoorLiningProperties(IfcDoorLiningProperties *obj) {
    if (obj) {
        IfcDoorLiningProperties *clone = static_cast< IfcDoorLiningProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDoorLiningProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDoorPanelProperties(IfcDoorPanelProperties *obj) {
    if (obj) {
        IfcDoorPanelProperties *clone = static_cast< IfcDoorPanelProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDoorPanelProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDoorStyle(IfcDoorStyle *obj) {
    if (obj) {
        IfcDoorStyle *clone = static_cast< IfcDoorStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDoorStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDraughtingCallout(IfcDraughtingCallout *obj) {
    if (obj) {
        IfcDraughtingCallout *clone = static_cast< IfcDraughtingCallout * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDraughtingCallout(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *obj) {
    if (obj) {
        IfcDraughtingCalloutRelationship *clone = static_cast< IfcDraughtingCalloutRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDraughtingCalloutRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *obj) {
    if (obj) {
        IfcDraughtingPreDefinedColour *clone = static_cast< IfcDraughtingPreDefinedColour * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDraughtingPreDefinedColour(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *obj) {
    if (obj) {
        IfcDraughtingPreDefinedCurveFont *clone = static_cast< IfcDraughtingPreDefinedCurveFont * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDraughtingPreDefinedCurveFont(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *obj) {
    if (obj) {
        IfcDraughtingPreDefinedTextFont *clone = static_cast< IfcDraughtingPreDefinedTextFont * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDraughtingPreDefinedTextFont(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDuctFittingType(IfcDuctFittingType *obj) {
    if (obj) {
        IfcDuctFittingType *clone = static_cast< IfcDuctFittingType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDuctFittingType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDuctSegmentType(IfcDuctSegmentType *obj) {
    if (obj) {
        IfcDuctSegmentType *clone = static_cast< IfcDuctSegmentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDuctSegmentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcDuctSilencerType(IfcDuctSilencerType *obj) {
    if (obj) {
        IfcDuctSilencerType *clone = static_cast< IfcDuctSilencerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcDuctSilencerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEdge(IfcEdge *obj) {
    if (obj) {
        IfcEdge *clone = static_cast< IfcEdge * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEdge(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEdgeCurve(IfcEdgeCurve *obj) {
    if (obj) {
        IfcEdgeCurve *clone = static_cast< IfcEdgeCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEdgeCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEdgeLoop(IfcEdgeLoop *obj) {
    if (obj) {
        IfcEdgeLoop *clone = static_cast< IfcEdgeLoop * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEdgeLoop(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElectricApplianceType(IfcElectricApplianceType *obj) {
    if (obj) {
        IfcElectricApplianceType *clone = static_cast< IfcElectricApplianceType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElectricApplianceType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *obj) {
    if (obj) {
        IfcElectricDistributionPoint *clone = static_cast< IfcElectricDistributionPoint * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElectricDistributionPoint(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *obj) {
    if (obj) {
        IfcElectricFlowStorageDeviceType *clone = static_cast< IfcElectricFlowStorageDeviceType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElectricFlowStorageDeviceType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElectricGeneratorType(IfcElectricGeneratorType *obj) {
    if (obj) {
        IfcElectricGeneratorType *clone = static_cast< IfcElectricGeneratorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElectricGeneratorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElectricHeaterType(IfcElectricHeaterType *obj) {
    if (obj) {
        IfcElectricHeaterType *clone = static_cast< IfcElectricHeaterType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElectricHeaterType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElectricMotorType(IfcElectricMotorType *obj) {
    if (obj) {
        IfcElectricMotorType *clone = static_cast< IfcElectricMotorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElectricMotorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElectricTimeControlType(IfcElectricTimeControlType *obj) {
    if (obj) {
        IfcElectricTimeControlType *clone = static_cast< IfcElectricTimeControlType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElectricTimeControlType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *obj) {
    if (obj) {
        IfcElectricalBaseProperties *clone = static_cast< IfcElectricalBaseProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElectricalBaseProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElectricalCircuit(IfcElectricalCircuit *obj) {
    if (obj) {
        IfcElectricalCircuit *clone = static_cast< IfcElectricalCircuit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElectricalCircuit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElectricalElement(IfcElectricalElement *obj) {
    if (obj) {
        IfcElectricalElement *clone = static_cast< IfcElectricalElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElectricalElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElementAssembly(IfcElementAssembly *obj) {
    if (obj) {
        IfcElementAssembly *clone = static_cast< IfcElementAssembly * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElementAssembly(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcElementQuantity(IfcElementQuantity *obj) {
    if (obj) {
        IfcElementQuantity *clone = static_cast< IfcElementQuantity * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcElementQuantity(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEllipse(IfcEllipse *obj) {
    if (obj) {
        IfcEllipse *clone = static_cast< IfcEllipse * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEllipse(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEllipseProfileDef(IfcEllipseProfileDef *obj) {
    if (obj) {
        IfcEllipseProfileDef *clone = static_cast< IfcEllipseProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEllipseProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *obj) {
    if (obj) {
        IfcEnergyConversionDevice *clone = static_cast< IfcEnergyConversionDevice * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEnergyConversionDevice(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEnergyProperties(IfcEnergyProperties *obj) {
    if (obj) {
        IfcEnergyProperties *clone = static_cast< IfcEnergyProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEnergyProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *obj) {
    if (obj) {
        IfcEnvironmentalImpactValue *clone = static_cast< IfcEnvironmentalImpactValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEnvironmentalImpactValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEquipmentElement(IfcEquipmentElement *obj) {
    if (obj) {
        IfcEquipmentElement *clone = static_cast< IfcEquipmentElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEquipmentElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEquipmentStandard(IfcEquipmentStandard *obj) {
    if (obj) {
        IfcEquipmentStandard *clone = static_cast< IfcEquipmentStandard * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEquipmentStandard(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *obj) {
    if (obj) {
        IfcEvaporativeCoolerType *clone = static_cast< IfcEvaporativeCoolerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEvaporativeCoolerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcEvaporatorType(IfcEvaporatorType *obj) {
    if (obj) {
        IfcEvaporatorType *clone = static_cast< IfcEvaporatorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcEvaporatorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *obj) {
    if (obj) {
        IfcExtendedMaterialProperties *clone = static_cast< IfcExtendedMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcExtendedMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *obj) {
    if (obj) {
        IfcExternallyDefinedHatchStyle *clone = static_cast< IfcExternallyDefinedHatchStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcExternallyDefinedHatchStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *obj) {
    if (obj) {
        IfcExternallyDefinedSurfaceStyle *clone = static_cast< IfcExternallyDefinedSurfaceStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcExternallyDefinedSurfaceStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *obj) {
    if (obj) {
        IfcExternallyDefinedSymbol *clone = static_cast< IfcExternallyDefinedSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcExternallyDefinedSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *obj) {
    if (obj) {
        IfcExternallyDefinedTextFont *clone = static_cast< IfcExternallyDefinedTextFont * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcExternallyDefinedTextFont(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *obj) {
    if (obj) {
        IfcExtrudedAreaSolid *clone = static_cast< IfcExtrudedAreaSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcExtrudedAreaSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFace(IfcFace *obj) {
    if (obj) {
        IfcFace *clone = static_cast< IfcFace * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFace(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *obj) {
    if (obj) {
        IfcFaceBasedSurfaceModel *clone = static_cast< IfcFaceBasedSurfaceModel * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFaceBasedSurfaceModel(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFaceBound(IfcFaceBound *obj) {
    if (obj) {
        IfcFaceBound *clone = static_cast< IfcFaceBound * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFaceBound(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFaceOuterBound(IfcFaceOuterBound *obj) {
    if (obj) {
        IfcFaceOuterBound *clone = static_cast< IfcFaceOuterBound * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFaceOuterBound(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFaceSurface(IfcFaceSurface *obj) {
    if (obj) {
        IfcFaceSurface *clone = static_cast< IfcFaceSurface * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFaceSurface(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFacetedBrep(IfcFacetedBrep *obj) {
    if (obj) {
        IfcFacetedBrep *clone = static_cast< IfcFacetedBrep * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFacetedBrep(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *obj) {
    if (obj) {
        IfcFacetedBrepWithVoids *clone = static_cast< IfcFacetedBrepWithVoids * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFacetedBrepWithVoids(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *obj) {
    if (obj) {
        IfcFailureConnectionCondition *clone = static_cast< IfcFailureConnectionCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFailureConnectionCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFanType(IfcFanType *obj) {
    if (obj) {
        IfcFanType *clone = static_cast< IfcFanType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFanType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFastener(IfcFastener *obj) {
    if (obj) {
        IfcFastener *clone = static_cast< IfcFastener * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFastener(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFastenerType(IfcFastenerType *obj) {
    if (obj) {
        IfcFastenerType *clone = static_cast< IfcFastenerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFastenerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFillAreaStyle(IfcFillAreaStyle *obj) {
    if (obj) {
        IfcFillAreaStyle *clone = static_cast< IfcFillAreaStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFillAreaStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *obj) {
    if (obj) {
        IfcFillAreaStyleHatching *clone = static_cast< IfcFillAreaStyleHatching * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFillAreaStyleHatching(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *obj) {
    if (obj) {
        IfcFillAreaStyleTileSymbolWithStyle *clone = static_cast< IfcFillAreaStyleTileSymbolWithStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFillAreaStyleTileSymbolWithStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *obj) {
    if (obj) {
        IfcFillAreaStyleTiles *clone = static_cast< IfcFillAreaStyleTiles * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFillAreaStyleTiles(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFilterType(IfcFilterType *obj) {
    if (obj) {
        IfcFilterType *clone = static_cast< IfcFilterType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFilterType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *obj) {
    if (obj) {
        IfcFireSuppressionTerminalType *clone = static_cast< IfcFireSuppressionTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFireSuppressionTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFlowController(IfcFlowController *obj) {
    if (obj) {
        IfcFlowController *clone = static_cast< IfcFlowController * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFlowController(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFlowFitting(IfcFlowFitting *obj) {
    if (obj) {
        IfcFlowFitting *clone = static_cast< IfcFlowFitting * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFlowFitting(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFlowInstrumentType(IfcFlowInstrumentType *obj) {
    if (obj) {
        IfcFlowInstrumentType *clone = static_cast< IfcFlowInstrumentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFlowInstrumentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFlowMeterType(IfcFlowMeterType *obj) {
    if (obj) {
        IfcFlowMeterType *clone = static_cast< IfcFlowMeterType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFlowMeterType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFlowMovingDevice(IfcFlowMovingDevice *obj) {
    if (obj) {
        IfcFlowMovingDevice *clone = static_cast< IfcFlowMovingDevice * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFlowMovingDevice(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFlowSegment(IfcFlowSegment *obj) {
    if (obj) {
        IfcFlowSegment *clone = static_cast< IfcFlowSegment * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFlowSegment(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFlowStorageDevice(IfcFlowStorageDevice *obj) {
    if (obj) {
        IfcFlowStorageDevice *clone = static_cast< IfcFlowStorageDevice * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFlowStorageDevice(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFlowTerminal(IfcFlowTerminal *obj) {
    if (obj) {
        IfcFlowTerminal *clone = static_cast< IfcFlowTerminal * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFlowTerminal(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *obj) {
    if (obj) {
        IfcFlowTreatmentDevice *clone = static_cast< IfcFlowTreatmentDevice * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFlowTreatmentDevice(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFluidFlowProperties(IfcFluidFlowProperties *obj) {
    if (obj) {
        IfcFluidFlowProperties *clone = static_cast< IfcFluidFlowProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFluidFlowProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFooting(IfcFooting *obj) {
    if (obj) {
        IfcFooting *clone = static_cast< IfcFooting * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFooting(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFuelProperties(IfcFuelProperties *obj) {
    if (obj) {
        IfcFuelProperties *clone = static_cast< IfcFuelProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFuelProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFurnishingElement(IfcFurnishingElement *obj) {
    if (obj) {
        IfcFurnishingElement *clone = static_cast< IfcFurnishingElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFurnishingElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFurnishingElementType(IfcFurnishingElementType *obj) {
    if (obj) {
        IfcFurnishingElementType *clone = static_cast< IfcFurnishingElementType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFurnishingElementType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFurnitureStandard(IfcFurnitureStandard *obj) {
    if (obj) {
        IfcFurnitureStandard *clone = static_cast< IfcFurnitureStandard * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFurnitureStandard(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcFurnitureType(IfcFurnitureType *obj) {
    if (obj) {
        IfcFurnitureType *clone = static_cast< IfcFurnitureType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcFurnitureType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcGasTerminalType(IfcGasTerminalType *obj) {
    if (obj) {
        IfcGasTerminalType *clone = static_cast< IfcGasTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcGasTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *obj) {
    if (obj) {
        IfcGeneralMaterialProperties *clone = static_cast< IfcGeneralMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcGeneralMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *obj) {
    if (obj) {
        IfcGeneralProfileProperties *clone = static_cast< IfcGeneralProfileProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcGeneralProfileProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcGeometricCurveSet(IfcGeometricCurveSet *obj) {
    if (obj) {
        IfcGeometricCurveSet *clone = static_cast< IfcGeometricCurveSet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcGeometricCurveSet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *obj) {
    if (obj) {
        IfcGeometricRepresentationContext *clone = static_cast< IfcGeometricRepresentationContext * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcGeometricRepresentationContext(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *obj) {
    if (obj) {
        IfcGeometricRepresentationSubContext *clone = static_cast< IfcGeometricRepresentationSubContext * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcGeometricRepresentationSubContext(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcGeometricSet(IfcGeometricSet *obj) {
    if (obj) {
        IfcGeometricSet *clone = static_cast< IfcGeometricSet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcGeometricSet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcGrid(IfcGrid *obj) {
    if (obj) {
        IfcGrid *clone = static_cast< IfcGrid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcGrid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcGridAxis(IfcGridAxis *obj) {
    if (obj) {
        IfcGridAxis *clone = static_cast< IfcGridAxis * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcGridAxis(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcGridPlacement(IfcGridPlacement *obj) {
    if (obj) {
        IfcGridPlacement *clone = static_cast< IfcGridPlacement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcGridPlacement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcGroup(IfcGroup *obj) {
    if (obj) {
        IfcGroup *clone = static_cast< IfcGroup * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcGroup(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *obj) {
    if (obj) {
        IfcHalfSpaceSolid *clone = static_cast< IfcHalfSpaceSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcHalfSpaceSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcHeatExchangerType(IfcHeatExchangerType *obj) {
    if (obj) {
        IfcHeatExchangerType *clone = static_cast< IfcHeatExchangerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcHeatExchangerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcHumidifierType(IfcHumidifierType *obj) {
    if (obj) {
        IfcHumidifierType *clone = static_cast< IfcHumidifierType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcHumidifierType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *obj) {
    if (obj) {
        IfcHygroscopicMaterialProperties *clone = static_cast< IfcHygroscopicMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcHygroscopicMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcIShapeProfileDef(IfcIShapeProfileDef *obj) {
    if (obj) {
        IfcIShapeProfileDef *clone = static_cast< IfcIShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcIShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcImageTexture(IfcImageTexture *obj) {
    if (obj) {
        IfcImageTexture *clone = static_cast< IfcImageTexture * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcImageTexture(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcInventory(IfcInventory *obj) {
    if (obj) {
        IfcInventory *clone = static_cast< IfcInventory * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcInventory(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *obj) {
    if (obj) {
        IfcIrregularTimeSeries *clone = static_cast< IfcIrregularTimeSeries * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcIrregularTimeSeries(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *obj) {
    if (obj) {
        IfcIrregularTimeSeriesValue *clone = static_cast< IfcIrregularTimeSeriesValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcIrregularTimeSeriesValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcJunctionBoxType(IfcJunctionBoxType *obj) {
    if (obj) {
        IfcJunctionBoxType *clone = static_cast< IfcJunctionBoxType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcJunctionBoxType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLShapeProfileDef(IfcLShapeProfileDef *obj) {
    if (obj) {
        IfcLShapeProfileDef *clone = static_cast< IfcLShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLaborResource(IfcLaborResource *obj) {
    if (obj) {
        IfcLaborResource *clone = static_cast< IfcLaborResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLaborResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLampType(IfcLampType *obj) {
    if (obj) {
        IfcLampType *clone = static_cast< IfcLampType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLampType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLibraryInformation(IfcLibraryInformation *obj) {
    if (obj) {
        IfcLibraryInformation *clone = static_cast< IfcLibraryInformation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLibraryInformation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLibraryReference(IfcLibraryReference *obj) {
    if (obj) {
        IfcLibraryReference *clone = static_cast< IfcLibraryReference * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLibraryReference(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLightDistributionData(IfcLightDistributionData *obj) {
    if (obj) {
        IfcLightDistributionData *clone = static_cast< IfcLightDistributionData * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLightDistributionData(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLightFixtureType(IfcLightFixtureType *obj) {
    if (obj) {
        IfcLightFixtureType *clone = static_cast< IfcLightFixtureType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLightFixtureType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *obj) {
    if (obj) {
        IfcLightIntensityDistribution *clone = static_cast< IfcLightIntensityDistribution * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLightIntensityDistribution(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLightSourceAmbient(IfcLightSourceAmbient *obj) {
    if (obj) {
        IfcLightSourceAmbient *clone = static_cast< IfcLightSourceAmbient * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLightSourceAmbient(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLightSourceDirectional(IfcLightSourceDirectional *obj) {
    if (obj) {
        IfcLightSourceDirectional *clone = static_cast< IfcLightSourceDirectional * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLightSourceDirectional(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *obj) {
    if (obj) {
        IfcLightSourceGoniometric *clone = static_cast< IfcLightSourceGoniometric * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLightSourceGoniometric(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLightSourcePositional(IfcLightSourcePositional *obj) {
    if (obj) {
        IfcLightSourcePositional *clone = static_cast< IfcLightSourcePositional * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLightSourcePositional(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLightSourceSpot(IfcLightSourceSpot *obj) {
    if (obj) {
        IfcLightSourceSpot *clone = static_cast< IfcLightSourceSpot * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLightSourceSpot(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLine(IfcLine *obj) {
    if (obj) {
        IfcLine *clone = static_cast< IfcLine * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLine(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLinearDimension(IfcLinearDimension *obj) {
    if (obj) {
        IfcLinearDimension *clone = static_cast< IfcLinearDimension * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLinearDimension(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLocalPlacement(IfcLocalPlacement *obj) {
    if (obj) {
        IfcLocalPlacement *clone = static_cast< IfcLocalPlacement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLocalPlacement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLocalTime(IfcLocalTime *obj) {
    if (obj) {
        IfcLocalTime *clone = static_cast< IfcLocalTime * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLocalTime(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcLoop(IfcLoop *obj) {
    if (obj) {
        IfcLoop *clone = static_cast< IfcLoop * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcLoop(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMappedItem(IfcMappedItem *obj) {
    if (obj) {
        IfcMappedItem *clone = static_cast< IfcMappedItem * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMappedItem(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMaterial(IfcMaterial *obj) {
    if (obj) {
        IfcMaterial *clone = static_cast< IfcMaterial * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMaterial(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *obj) {
    if (obj) {
        IfcMaterialClassificationRelationship *clone = static_cast< IfcMaterialClassificationRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMaterialClassificationRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *obj) {
    if (obj) {
        IfcMaterialDefinitionRepresentation *clone = static_cast< IfcMaterialDefinitionRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMaterialDefinitionRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMaterialLayer(IfcMaterialLayer *obj) {
    if (obj) {
        IfcMaterialLayer *clone = static_cast< IfcMaterialLayer * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMaterialLayer(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMaterialLayerSet(IfcMaterialLayerSet *obj) {
    if (obj) {
        IfcMaterialLayerSet *clone = static_cast< IfcMaterialLayerSet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMaterialLayerSet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *obj) {
    if (obj) {
        IfcMaterialLayerSetUsage *clone = static_cast< IfcMaterialLayerSetUsage * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMaterialLayerSetUsage(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMaterialList(IfcMaterialList *obj) {
    if (obj) {
        IfcMaterialList *clone = static_cast< IfcMaterialList * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMaterialList(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMeasureWithUnit(IfcMeasureWithUnit *obj) {
    if (obj) {
        IfcMeasureWithUnit *clone = static_cast< IfcMeasureWithUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMeasureWithUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *obj) {
    if (obj) {
        IfcMechanicalConcreteMaterialProperties *clone = static_cast< IfcMechanicalConcreteMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMechanicalConcreteMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMechanicalFastener(IfcMechanicalFastener *obj) {
    if (obj) {
        IfcMechanicalFastener *clone = static_cast< IfcMechanicalFastener * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMechanicalFastener(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *obj) {
    if (obj) {
        IfcMechanicalFastenerType *clone = static_cast< IfcMechanicalFastenerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMechanicalFastenerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *obj) {
    if (obj) {
        IfcMechanicalMaterialProperties *clone = static_cast< IfcMechanicalMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMechanicalMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *obj) {
    if (obj) {
        IfcMechanicalSteelMaterialProperties *clone = static_cast< IfcMechanicalSteelMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMechanicalSteelMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMember(IfcMember *obj) {
    if (obj) {
        IfcMember *clone = static_cast< IfcMember * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMember(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMemberType(IfcMemberType *obj) {
    if (obj) {
        IfcMemberType *clone = static_cast< IfcMemberType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMemberType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMetric(IfcMetric *obj) {
    if (obj) {
        IfcMetric *clone = static_cast< IfcMetric * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMetric(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMonetaryUnit(IfcMonetaryUnit *obj) {
    if (obj) {
        IfcMonetaryUnit *clone = static_cast< IfcMonetaryUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMonetaryUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMotorConnectionType(IfcMotorConnectionType *obj) {
    if (obj) {
        IfcMotorConnectionType *clone = static_cast< IfcMotorConnectionType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMotorConnectionType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcMove(IfcMove *obj) {
    if (obj) {
        IfcMove *clone = static_cast< IfcMove * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcMove(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcObjective(IfcObjective *obj) {
    if (obj) {
        IfcObjective *clone = static_cast< IfcObjective * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcObjective(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOccupant(IfcOccupant *obj) {
    if (obj) {
        IfcOccupant *clone = static_cast< IfcOccupant * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOccupant(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOffsetCurve2D(IfcOffsetCurve2D *obj) {
    if (obj) {
        IfcOffsetCurve2D *clone = static_cast< IfcOffsetCurve2D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOffsetCurve2D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOffsetCurve3D(IfcOffsetCurve3D *obj) {
    if (obj) {
        IfcOffsetCurve3D *clone = static_cast< IfcOffsetCurve3D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOffsetCurve3D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *obj) {
    if (obj) {
        IfcOneDirectionRepeatFactor *clone = static_cast< IfcOneDirectionRepeatFactor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOneDirectionRepeatFactor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOpenShell(IfcOpenShell *obj) {
    if (obj) {
        IfcOpenShell *clone = static_cast< IfcOpenShell * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOpenShell(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOpeningElement(IfcOpeningElement *obj) {
    if (obj) {
        IfcOpeningElement *clone = static_cast< IfcOpeningElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOpeningElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *obj) {
    if (obj) {
        IfcOpticalMaterialProperties *clone = static_cast< IfcOpticalMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOpticalMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOrderAction(IfcOrderAction *obj) {
    if (obj) {
        IfcOrderAction *clone = static_cast< IfcOrderAction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOrderAction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOrganization(IfcOrganization *obj) {
    if (obj) {
        IfcOrganization *clone = static_cast< IfcOrganization * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOrganization(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOrganizationRelationship(IfcOrganizationRelationship *obj) {
    if (obj) {
        IfcOrganizationRelationship *clone = static_cast< IfcOrganizationRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOrganizationRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOrientedEdge(IfcOrientedEdge *obj) {
    if (obj) {
        IfcOrientedEdge *clone = static_cast< IfcOrientedEdge * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOrientedEdge(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOutletType(IfcOutletType *obj) {
    if (obj) {
        IfcOutletType *clone = static_cast< IfcOutletType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOutletType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcOwnerHistory(IfcOwnerHistory *obj) {
    if (obj) {
        IfcOwnerHistory *clone = static_cast< IfcOwnerHistory * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcOwnerHistory(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPath(IfcPath *obj) {
    if (obj) {
        IfcPath *clone = static_cast< IfcPath * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPath(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPerformanceHistory(IfcPerformanceHistory *obj) {
    if (obj) {
        IfcPerformanceHistory *clone = static_cast< IfcPerformanceHistory * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPerformanceHistory(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *obj) {
    if (obj) {
        IfcPermeableCoveringProperties *clone = static_cast< IfcPermeableCoveringProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPermeableCoveringProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPermit(IfcPermit *obj) {
    if (obj) {
        IfcPermit *clone = static_cast< IfcPermit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPermit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPerson(IfcPerson *obj) {
    if (obj) {
        IfcPerson *clone = static_cast< IfcPerson * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPerson(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPersonAndOrganization(IfcPersonAndOrganization *obj) {
    if (obj) {
        IfcPersonAndOrganization *clone = static_cast< IfcPersonAndOrganization * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPersonAndOrganization(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *obj) {
    if (obj) {
        IfcPhysicalComplexQuantity *clone = static_cast< IfcPhysicalComplexQuantity * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPhysicalComplexQuantity(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPile(IfcPile *obj) {
    if (obj) {
        IfcPile *clone = static_cast< IfcPile * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPile(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPipeFittingType(IfcPipeFittingType *obj) {
    if (obj) {
        IfcPipeFittingType *clone = static_cast< IfcPipeFittingType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPipeFittingType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPipeSegmentType(IfcPipeSegmentType *obj) {
    if (obj) {
        IfcPipeSegmentType *clone = static_cast< IfcPipeSegmentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPipeSegmentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPixelTexture(IfcPixelTexture *obj) {
    if (obj) {
        IfcPixelTexture *clone = static_cast< IfcPixelTexture * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPixelTexture(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPlanarBox(IfcPlanarBox *obj) {
    if (obj) {
        IfcPlanarBox *clone = static_cast< IfcPlanarBox * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPlanarBox(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPlanarExtent(IfcPlanarExtent *obj) {
    if (obj) {
        IfcPlanarExtent *clone = static_cast< IfcPlanarExtent * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPlanarExtent(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPlane(IfcPlane *obj) {
    if (obj) {
        IfcPlane *clone = static_cast< IfcPlane * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPlane(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPlate(IfcPlate *obj) {
    if (obj) {
        IfcPlate *clone = static_cast< IfcPlate * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPlate(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPlateType(IfcPlateType *obj) {
    if (obj) {
        IfcPlateType *clone = static_cast< IfcPlateType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPlateType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPointOnCurve(IfcPointOnCurve *obj) {
    if (obj) {
        IfcPointOnCurve *clone = static_cast< IfcPointOnCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPointOnCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPointOnSurface(IfcPointOnSurface *obj) {
    if (obj) {
        IfcPointOnSurface *clone = static_cast< IfcPointOnSurface * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPointOnSurface(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPolyLoop(IfcPolyLoop *obj) {
    if (obj) {
        IfcPolyLoop *clone = static_cast< IfcPolyLoop * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPolyLoop(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *obj) {
    if (obj) {
        IfcPolygonalBoundedHalfSpace *clone = static_cast< IfcPolygonalBoundedHalfSpace * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPolygonalBoundedHalfSpace(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPolyline(IfcPolyline *obj) {
    if (obj) {
        IfcPolyline *clone = static_cast< IfcPolyline * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPolyline(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPostalAddress(IfcPostalAddress *obj) {
    if (obj) {
        IfcPostalAddress *clone = static_cast< IfcPostalAddress * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPostalAddress(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *obj) {
    if (obj) {
        IfcPreDefinedDimensionSymbol *clone = static_cast< IfcPreDefinedDimensionSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPreDefinedDimensionSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *obj) {
    if (obj) {
        IfcPreDefinedPointMarkerSymbol *clone = static_cast< IfcPreDefinedPointMarkerSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPreDefinedPointMarkerSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *obj) {
    if (obj) {
        IfcPreDefinedTerminatorSymbol *clone = static_cast< IfcPreDefinedTerminatorSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPreDefinedTerminatorSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *obj) {
    if (obj) {
        IfcPresentationLayerAssignment *clone = static_cast< IfcPresentationLayerAssignment * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPresentationLayerAssignment(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *obj) {
    if (obj) {
        IfcPresentationLayerWithStyle *clone = static_cast< IfcPresentationLayerWithStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPresentationLayerWithStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *obj) {
    if (obj) {
        IfcPresentationStyleAssignment *clone = static_cast< IfcPresentationStyleAssignment * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPresentationStyleAssignment(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcProcedure(IfcProcedure *obj) {
    if (obj) {
        IfcProcedure *clone = static_cast< IfcProcedure * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcProcedure(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcProductDefinitionShape(IfcProductDefinitionShape *obj) {
    if (obj) {
        IfcProductDefinitionShape *clone = static_cast< IfcProductDefinitionShape * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcProductDefinitionShape(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcProductRepresentation(IfcProductRepresentation *obj) {
    if (obj) {
        IfcProductRepresentation *clone = static_cast< IfcProductRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcProductRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *obj) {
    if (obj) {
        IfcProductsOfCombustionProperties *clone = static_cast< IfcProductsOfCombustionProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcProductsOfCombustionProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcProject(IfcProject *obj) {
    if (obj) {
        IfcProject *clone = static_cast< IfcProject * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcProject(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcProjectOrder(IfcProjectOrder *obj) {
    if (obj) {
        IfcProjectOrder *clone = static_cast< IfcProjectOrder * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcProjectOrder(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcProjectOrderRecord(IfcProjectOrderRecord *obj) {
    if (obj) {
        IfcProjectOrderRecord *clone = static_cast< IfcProjectOrderRecord * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcProjectOrderRecord(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcProjectionCurve(IfcProjectionCurve *obj) {
    if (obj) {
        IfcProjectionCurve *clone = static_cast< IfcProjectionCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcProjectionCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcProjectionElement(IfcProjectionElement *obj) {
    if (obj) {
        IfcProjectionElement *clone = static_cast< IfcProjectionElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcProjectionElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *obj) {
    if (obj) {
        IfcPropertyBoundedValue *clone = static_cast< IfcPropertyBoundedValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPropertyBoundedValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *obj) {
    if (obj) {
        IfcPropertyConstraintRelationship *clone = static_cast< IfcPropertyConstraintRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPropertyConstraintRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *obj) {
    if (obj) {
        IfcPropertyDependencyRelationship *clone = static_cast< IfcPropertyDependencyRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPropertyDependencyRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *obj) {
    if (obj) {
        IfcPropertyEnumeratedValue *clone = static_cast< IfcPropertyEnumeratedValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPropertyEnumeratedValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPropertyEnumeration(IfcPropertyEnumeration *obj) {
    if (obj) {
        IfcPropertyEnumeration *clone = static_cast< IfcPropertyEnumeration * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPropertyEnumeration(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPropertyListValue(IfcPropertyListValue *obj) {
    if (obj) {
        IfcPropertyListValue *clone = static_cast< IfcPropertyListValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPropertyListValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *obj) {
    if (obj) {
        IfcPropertyReferenceValue *clone = static_cast< IfcPropertyReferenceValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPropertyReferenceValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPropertySet(IfcPropertySet *obj) {
    if (obj) {
        IfcPropertySet *clone = static_cast< IfcPropertySet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPropertySet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPropertySingleValue(IfcPropertySingleValue *obj) {
    if (obj) {
        IfcPropertySingleValue *clone = static_cast< IfcPropertySingleValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPropertySingleValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPropertyTableValue(IfcPropertyTableValue *obj) {
    if (obj) {
        IfcPropertyTableValue *clone = static_cast< IfcPropertyTableValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPropertyTableValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *obj) {
    if (obj) {
        IfcProtectiveDeviceType *clone = static_cast< IfcProtectiveDeviceType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcProtectiveDeviceType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcProxy(IfcProxy *obj) {
    if (obj) {
        IfcProxy *clone = static_cast< IfcProxy * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcProxy(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcPumpType(IfcPumpType *obj) {
    if (obj) {
        IfcPumpType *clone = static_cast< IfcPumpType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcPumpType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcQuantityArea(IfcQuantityArea *obj) {
    if (obj) {
        IfcQuantityArea *clone = static_cast< IfcQuantityArea * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcQuantityArea(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcQuantityCount(IfcQuantityCount *obj) {
    if (obj) {
        IfcQuantityCount *clone = static_cast< IfcQuantityCount * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcQuantityCount(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcQuantityLength(IfcQuantityLength *obj) {
    if (obj) {
        IfcQuantityLength *clone = static_cast< IfcQuantityLength * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcQuantityLength(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcQuantityTime(IfcQuantityTime *obj) {
    if (obj) {
        IfcQuantityTime *clone = static_cast< IfcQuantityTime * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcQuantityTime(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcQuantityVolume(IfcQuantityVolume *obj) {
    if (obj) {
        IfcQuantityVolume *clone = static_cast< IfcQuantityVolume * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcQuantityVolume(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcQuantityWeight(IfcQuantityWeight *obj) {
    if (obj) {
        IfcQuantityWeight *clone = static_cast< IfcQuantityWeight * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcQuantityWeight(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRadiusDimension(IfcRadiusDimension *obj) {
    if (obj) {
        IfcRadiusDimension *clone = static_cast< IfcRadiusDimension * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRadiusDimension(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRailing(IfcRailing *obj) {
    if (obj) {
        IfcRailing *clone = static_cast< IfcRailing * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRailing(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRailingType(IfcRailingType *obj) {
    if (obj) {
        IfcRailingType *clone = static_cast< IfcRailingType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRailingType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRamp(IfcRamp *obj) {
    if (obj) {
        IfcRamp *clone = static_cast< IfcRamp * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRamp(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRampFlight(IfcRampFlight *obj) {
    if (obj) {
        IfcRampFlight *clone = static_cast< IfcRampFlight * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRampFlight(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRampFlightType(IfcRampFlightType *obj) {
    if (obj) {
        IfcRampFlightType *clone = static_cast< IfcRampFlightType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRampFlightType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRationalBezierCurve(IfcRationalBezierCurve *obj) {
    if (obj) {
        IfcRationalBezierCurve *clone = static_cast< IfcRationalBezierCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRationalBezierCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *obj) {
    if (obj) {
        IfcRectangleHollowProfileDef *clone = static_cast< IfcRectangleHollowProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRectangleHollowProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRectangleProfileDef(IfcRectangleProfileDef *obj) {
    if (obj) {
        IfcRectangleProfileDef *clone = static_cast< IfcRectangleProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRectangleProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRectangularPyramid(IfcRectangularPyramid *obj) {
    if (obj) {
        IfcRectangularPyramid *clone = static_cast< IfcRectangularPyramid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRectangularPyramid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *obj) {
    if (obj) {
        IfcRectangularTrimmedSurface *clone = static_cast< IfcRectangularTrimmedSurface * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRectangularTrimmedSurface(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcReferencesValueDocument(IfcReferencesValueDocument *obj) {
    if (obj) {
        IfcReferencesValueDocument *clone = static_cast< IfcReferencesValueDocument * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcReferencesValueDocument(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRegularTimeSeries(IfcRegularTimeSeries *obj) {
    if (obj) {
        IfcRegularTimeSeries *clone = static_cast< IfcRegularTimeSeries * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRegularTimeSeries(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *obj) {
    if (obj) {
        IfcReinforcementBarProperties *clone = static_cast< IfcReinforcementBarProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcReinforcementBarProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *obj) {
    if (obj) {
        IfcReinforcementDefinitionProperties *clone = static_cast< IfcReinforcementDefinitionProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcReinforcementDefinitionProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcReinforcingBar(IfcReinforcingBar *obj) {
    if (obj) {
        IfcReinforcingBar *clone = static_cast< IfcReinforcingBar * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcReinforcingBar(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcReinforcingMesh(IfcReinforcingMesh *obj) {
    if (obj) {
        IfcReinforcingMesh *clone = static_cast< IfcReinforcingMesh * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcReinforcingMesh(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAggregates(IfcRelAggregates *obj) {
    if (obj) {
        IfcRelAggregates *clone = static_cast< IfcRelAggregates * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAggregates(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssignsTasks(IfcRelAssignsTasks *obj) {
    if (obj) {
        IfcRelAssignsTasks *clone = static_cast< IfcRelAssignsTasks * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssignsTasks(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssignsToActor(IfcRelAssignsToActor *obj) {
    if (obj) {
        IfcRelAssignsToActor *clone = static_cast< IfcRelAssignsToActor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssignsToActor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssignsToControl(IfcRelAssignsToControl *obj) {
    if (obj) {
        IfcRelAssignsToControl *clone = static_cast< IfcRelAssignsToControl * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssignsToControl(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *obj) {
    if (obj) {
        IfcRelAssignsToGroup *clone = static_cast< IfcRelAssignsToGroup * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssignsToGroup(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *obj) {
    if (obj) {
        IfcRelAssignsToProcess *clone = static_cast< IfcRelAssignsToProcess * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssignsToProcess(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *obj) {
    if (obj) {
        IfcRelAssignsToProduct *clone = static_cast< IfcRelAssignsToProduct * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssignsToProduct(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *obj) {
    if (obj) {
        IfcRelAssignsToProjectOrder *clone = static_cast< IfcRelAssignsToProjectOrder * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssignsToProjectOrder(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssignsToResource(IfcRelAssignsToResource *obj) {
    if (obj) {
        IfcRelAssignsToResource *clone = static_cast< IfcRelAssignsToResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssignsToResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssociates(IfcRelAssociates *obj) {
    if (obj) {
        IfcRelAssociates *clone = static_cast< IfcRelAssociates * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssociates(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *obj) {
    if (obj) {
        IfcRelAssociatesAppliedValue *clone = static_cast< IfcRelAssociatesAppliedValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssociatesAppliedValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *obj) {
    if (obj) {
        IfcRelAssociatesApproval *clone = static_cast< IfcRelAssociatesApproval * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssociatesApproval(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *obj) {
    if (obj) {
        IfcRelAssociatesClassification *clone = static_cast< IfcRelAssociatesClassification * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssociatesClassification(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *obj) {
    if (obj) {
        IfcRelAssociatesConstraint *clone = static_cast< IfcRelAssociatesConstraint * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssociatesConstraint(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *obj) {
    if (obj) {
        IfcRelAssociatesDocument *clone = static_cast< IfcRelAssociatesDocument * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssociatesDocument(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *obj) {
    if (obj) {
        IfcRelAssociatesLibrary *clone = static_cast< IfcRelAssociatesLibrary * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssociatesLibrary(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *obj) {
    if (obj) {
        IfcRelAssociatesMaterial *clone = static_cast< IfcRelAssociatesMaterial * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssociatesMaterial(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *obj) {
    if (obj) {
        IfcRelAssociatesProfileProperties *clone = static_cast< IfcRelAssociatesProfileProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelAssociatesProfileProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelConnectsElements(IfcRelConnectsElements *obj) {
    if (obj) {
        IfcRelConnectsElements *clone = static_cast< IfcRelConnectsElements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelConnectsElements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *obj) {
    if (obj) {
        IfcRelConnectsPathElements *clone = static_cast< IfcRelConnectsPathElements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelConnectsPathElements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *obj) {
    if (obj) {
        IfcRelConnectsPortToElement *clone = static_cast< IfcRelConnectsPortToElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelConnectsPortToElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelConnectsPorts(IfcRelConnectsPorts *obj) {
    if (obj) {
        IfcRelConnectsPorts *clone = static_cast< IfcRelConnectsPorts * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelConnectsPorts(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *obj) {
    if (obj) {
        IfcRelConnectsStructuralActivity *clone = static_cast< IfcRelConnectsStructuralActivity * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelConnectsStructuralActivity(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *obj) {
    if (obj) {
        IfcRelConnectsStructuralElement *clone = static_cast< IfcRelConnectsStructuralElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelConnectsStructuralElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *obj) {
    if (obj) {
        IfcRelConnectsStructuralMember *clone = static_cast< IfcRelConnectsStructuralMember * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelConnectsStructuralMember(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *obj) {
    if (obj) {
        IfcRelConnectsWithEccentricity *clone = static_cast< IfcRelConnectsWithEccentricity * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelConnectsWithEccentricity(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *obj) {
    if (obj) {
        IfcRelConnectsWithRealizingElements *clone = static_cast< IfcRelConnectsWithRealizingElements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelConnectsWithRealizingElements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *obj) {
    if (obj) {
        IfcRelContainedInSpatialStructure *clone = static_cast< IfcRelContainedInSpatialStructure * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelContainedInSpatialStructure(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *obj) {
    if (obj) {
        IfcRelCoversBldgElements *clone = static_cast< IfcRelCoversBldgElements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelCoversBldgElements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelCoversSpaces(IfcRelCoversSpaces *obj) {
    if (obj) {
        IfcRelCoversSpaces *clone = static_cast< IfcRelCoversSpaces * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelCoversSpaces(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *obj) {
    if (obj) {
        IfcRelDefinesByProperties *clone = static_cast< IfcRelDefinesByProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelDefinesByProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelDefinesByType(IfcRelDefinesByType *obj) {
    if (obj) {
        IfcRelDefinesByType *clone = static_cast< IfcRelDefinesByType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelDefinesByType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelFillsElement(IfcRelFillsElement *obj) {
    if (obj) {
        IfcRelFillsElement *clone = static_cast< IfcRelFillsElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelFillsElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelFlowControlElements(IfcRelFlowControlElements *obj) {
    if (obj) {
        IfcRelFlowControlElements *clone = static_cast< IfcRelFlowControlElements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelFlowControlElements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *obj) {
    if (obj) {
        IfcRelInteractionRequirements *clone = static_cast< IfcRelInteractionRequirements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelInteractionRequirements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelNests(IfcRelNests *obj) {
    if (obj) {
        IfcRelNests *clone = static_cast< IfcRelNests * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelNests(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *obj) {
    if (obj) {
        IfcRelOccupiesSpaces *clone = static_cast< IfcRelOccupiesSpaces * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelOccupiesSpaces(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelOverridesProperties(IfcRelOverridesProperties *obj) {
    if (obj) {
        IfcRelOverridesProperties *clone = static_cast< IfcRelOverridesProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelOverridesProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelProjectsElement(IfcRelProjectsElement *obj) {
    if (obj) {
        IfcRelProjectsElement *clone = static_cast< IfcRelProjectsElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelProjectsElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *obj) {
    if (obj) {
        IfcRelReferencedInSpatialStructure *clone = static_cast< IfcRelReferencedInSpatialStructure * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelReferencedInSpatialStructure(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *obj) {
    if (obj) {
        IfcRelSchedulesCostItems *clone = static_cast< IfcRelSchedulesCostItems * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelSchedulesCostItems(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelSequence(IfcRelSequence *obj) {
    if (obj) {
        IfcRelSequence *clone = static_cast< IfcRelSequence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelSequence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelServicesBuildings(IfcRelServicesBuildings *obj) {
    if (obj) {
        IfcRelServicesBuildings *clone = static_cast< IfcRelServicesBuildings * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelServicesBuildings(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *obj) {
    if (obj) {
        IfcRelSpaceBoundary *clone = static_cast< IfcRelSpaceBoundary * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelSpaceBoundary(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelVoidsElement(IfcRelVoidsElement *obj) {
    if (obj) {
        IfcRelVoidsElement *clone = static_cast< IfcRelVoidsElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelVoidsElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRelaxation(IfcRelaxation *obj) {
    if (obj) {
        IfcRelaxation *clone = static_cast< IfcRelaxation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRelaxation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRepresentation(IfcRepresentation *obj) {
    if (obj) {
        IfcRepresentation *clone = static_cast< IfcRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRepresentationContext(IfcRepresentationContext *obj) {
    if (obj) {
        IfcRepresentationContext *clone = static_cast< IfcRepresentationContext * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRepresentationContext(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRepresentationMap(IfcRepresentationMap *obj) {
    if (obj) {
        IfcRepresentationMap *clone = static_cast< IfcRepresentationMap * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRepresentationMap(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *obj) {
    if (obj) {
        IfcRevolvedAreaSolid *clone = static_cast< IfcRevolvedAreaSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRevolvedAreaSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *obj) {
    if (obj) {
        IfcRibPlateProfileProperties *clone = static_cast< IfcRibPlateProfileProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRibPlateProfileProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRightCircularCone(IfcRightCircularCone *obj) {
    if (obj) {
        IfcRightCircularCone *clone = static_cast< IfcRightCircularCone * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRightCircularCone(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRightCircularCylinder(IfcRightCircularCylinder *obj) {
    if (obj) {
        IfcRightCircularCylinder *clone = static_cast< IfcRightCircularCylinder * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRightCircularCylinder(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRoof(IfcRoof *obj) {
    if (obj) {
        IfcRoof *clone = static_cast< IfcRoof * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRoof(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *obj) {
    if (obj) {
        IfcRoundedEdgeFeature *clone = static_cast< IfcRoundedEdgeFeature * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRoundedEdgeFeature(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *obj) {
    if (obj) {
        IfcRoundedRectangleProfileDef *clone = static_cast< IfcRoundedRectangleProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcRoundedRectangleProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSIUnit(IfcSIUnit *obj) {
    if (obj) {
        IfcSIUnit *clone = static_cast< IfcSIUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSIUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *obj) {
    if (obj) {
        IfcSanitaryTerminalType *clone = static_cast< IfcSanitaryTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSanitaryTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcScheduleTimeControl(IfcScheduleTimeControl *obj) {
    if (obj) {
        IfcScheduleTimeControl *clone = static_cast< IfcScheduleTimeControl * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcScheduleTimeControl(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSectionProperties(IfcSectionProperties *obj) {
    if (obj) {
        IfcSectionProperties *clone = static_cast< IfcSectionProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSectionProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *obj) {
    if (obj) {
        IfcSectionReinforcementProperties *clone = static_cast< IfcSectionReinforcementProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSectionReinforcementProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSectionedSpine(IfcSectionedSpine *obj) {
    if (obj) {
        IfcSectionedSpine *clone = static_cast< IfcSectionedSpine * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSectionedSpine(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSensorType(IfcSensorType *obj) {
    if (obj) {
        IfcSensorType *clone = static_cast< IfcSensorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSensorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcServiceLife(IfcServiceLife *obj) {
    if (obj) {
        IfcServiceLife *clone = static_cast< IfcServiceLife * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcServiceLife(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcServiceLifeFactor(IfcServiceLifeFactor *obj) {
    if (obj) {
        IfcServiceLifeFactor *clone = static_cast< IfcServiceLifeFactor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcServiceLifeFactor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcShapeAspect(IfcShapeAspect *obj) {
    if (obj) {
        IfcShapeAspect *clone = static_cast< IfcShapeAspect * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcShapeAspect(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcShapeRepresentation(IfcShapeRepresentation *obj) {
    if (obj) {
        IfcShapeRepresentation *clone = static_cast< IfcShapeRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcShapeRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *obj) {
    if (obj) {
        IfcShellBasedSurfaceModel *clone = static_cast< IfcShellBasedSurfaceModel * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcShellBasedSurfaceModel(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSite(IfcSite *obj) {
    if (obj) {
        IfcSite *clone = static_cast< IfcSite * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSite(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSlab(IfcSlab *obj) {
    if (obj) {
        IfcSlab *clone = static_cast< IfcSlab * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSlab(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSlabType(IfcSlabType *obj) {
    if (obj) {
        IfcSlabType *clone = static_cast< IfcSlabType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSlabType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *obj) {
    if (obj) {
        IfcSlippageConnectionCondition *clone = static_cast< IfcSlippageConnectionCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSlippageConnectionCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSoundProperties(IfcSoundProperties *obj) {
    if (obj) {
        IfcSoundProperties *clone = static_cast< IfcSoundProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSoundProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSoundValue(IfcSoundValue *obj) {
    if (obj) {
        IfcSoundValue *clone = static_cast< IfcSoundValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSoundValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSpace(IfcSpace *obj) {
    if (obj) {
        IfcSpace *clone = static_cast< IfcSpace * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSpace(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSpaceHeaterType(IfcSpaceHeaterType *obj) {
    if (obj) {
        IfcSpaceHeaterType *clone = static_cast< IfcSpaceHeaterType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSpaceHeaterType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSpaceProgram(IfcSpaceProgram *obj) {
    if (obj) {
        IfcSpaceProgram *clone = static_cast< IfcSpaceProgram * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSpaceProgram(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *obj) {
    if (obj) {
        IfcSpaceThermalLoadProperties *clone = static_cast< IfcSpaceThermalLoadProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSpaceThermalLoadProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSpaceType(IfcSpaceType *obj) {
    if (obj) {
        IfcSpaceType *clone = static_cast< IfcSpaceType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSpaceType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSphere(IfcSphere *obj) {
    if (obj) {
        IfcSphere *clone = static_cast< IfcSphere * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSphere(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStackTerminalType(IfcStackTerminalType *obj) {
    if (obj) {
        IfcStackTerminalType *clone = static_cast< IfcStackTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStackTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStair(IfcStair *obj) {
    if (obj) {
        IfcStair *clone = static_cast< IfcStair * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStair(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStairFlight(IfcStairFlight *obj) {
    if (obj) {
        IfcStairFlight *clone = static_cast< IfcStairFlight * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStairFlight(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStairFlightType(IfcStairFlightType *obj) {
    if (obj) {
        IfcStairFlightType *clone = static_cast< IfcStairFlightType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStairFlightType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *obj) {
    if (obj) {
        IfcStructuralAnalysisModel *clone = static_cast< IfcStructuralAnalysisModel * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralAnalysisModel(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *obj) {
    if (obj) {
        IfcStructuralCurveConnection *clone = static_cast< IfcStructuralCurveConnection * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralCurveConnection(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralCurveMember(IfcStructuralCurveMember *obj) {
    if (obj) {
        IfcStructuralCurveMember *clone = static_cast< IfcStructuralCurveMember * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralCurveMember(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *obj) {
    if (obj) {
        IfcStructuralCurveMemberVarying *clone = static_cast< IfcStructuralCurveMemberVarying * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralCurveMemberVarying(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralLinearAction(IfcStructuralLinearAction *obj) {
    if (obj) {
        IfcStructuralLinearAction *clone = static_cast< IfcStructuralLinearAction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralLinearAction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *obj) {
    if (obj) {
        IfcStructuralLinearActionVarying *clone = static_cast< IfcStructuralLinearActionVarying * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralLinearActionVarying(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *obj) {
    if (obj) {
        IfcStructuralLoadGroup *clone = static_cast< IfcStructuralLoadGroup * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralLoadGroup(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *obj) {
    if (obj) {
        IfcStructuralLoadLinearForce *clone = static_cast< IfcStructuralLoadLinearForce * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralLoadLinearForce(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *obj) {
    if (obj) {
        IfcStructuralLoadPlanarForce *clone = static_cast< IfcStructuralLoadPlanarForce * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralLoadPlanarForce(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *obj) {
    if (obj) {
        IfcStructuralLoadSingleDisplacement *clone = static_cast< IfcStructuralLoadSingleDisplacement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralLoadSingleDisplacement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *obj) {
    if (obj) {
        IfcStructuralLoadSingleDisplacementDistortion *clone = static_cast< IfcStructuralLoadSingleDisplacementDistortion * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralLoadSingleDisplacementDistortion(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *obj) {
    if (obj) {
        IfcStructuralLoadSingleForce *clone = static_cast< IfcStructuralLoadSingleForce * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralLoadSingleForce(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *obj) {
    if (obj) {
        IfcStructuralLoadSingleForceWarping *clone = static_cast< IfcStructuralLoadSingleForceWarping * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralLoadSingleForceWarping(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *obj) {
    if (obj) {
        IfcStructuralLoadTemperature *clone = static_cast< IfcStructuralLoadTemperature * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralLoadTemperature(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *obj) {
    if (obj) {
        IfcStructuralPlanarAction *clone = static_cast< IfcStructuralPlanarAction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralPlanarAction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *obj) {
    if (obj) {
        IfcStructuralPlanarActionVarying *clone = static_cast< IfcStructuralPlanarActionVarying * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralPlanarActionVarying(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralPointAction(IfcStructuralPointAction *obj) {
    if (obj) {
        IfcStructuralPointAction *clone = static_cast< IfcStructuralPointAction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralPointAction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralPointConnection(IfcStructuralPointConnection *obj) {
    if (obj) {
        IfcStructuralPointConnection *clone = static_cast< IfcStructuralPointConnection * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralPointConnection(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralPointReaction(IfcStructuralPointReaction *obj) {
    if (obj) {
        IfcStructuralPointReaction *clone = static_cast< IfcStructuralPointReaction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralPointReaction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *obj) {
    if (obj) {
        IfcStructuralProfileProperties *clone = static_cast< IfcStructuralProfileProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralProfileProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralResultGroup(IfcStructuralResultGroup *obj) {
    if (obj) {
        IfcStructuralResultGroup *clone = static_cast< IfcStructuralResultGroup * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralResultGroup(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *obj) {
    if (obj) {
        IfcStructuralSteelProfileProperties *clone = static_cast< IfcStructuralSteelProfileProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralSteelProfileProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *obj) {
    if (obj) {
        IfcStructuralSurfaceConnection *clone = static_cast< IfcStructuralSurfaceConnection * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralSurfaceConnection(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *obj) {
    if (obj) {
        IfcStructuralSurfaceMember *clone = static_cast< IfcStructuralSurfaceMember * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralSurfaceMember(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *obj) {
    if (obj) {
        IfcStructuralSurfaceMemberVarying *clone = static_cast< IfcStructuralSurfaceMemberVarying * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuralSurfaceMemberVarying(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *obj) {
    if (obj) {
        IfcStructuredDimensionCallout *clone = static_cast< IfcStructuredDimensionCallout * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStructuredDimensionCallout(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStyledItem(IfcStyledItem *obj) {
    if (obj) {
        IfcStyledItem *clone = static_cast< IfcStyledItem * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStyledItem(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcStyledRepresentation(IfcStyledRepresentation *obj) {
    if (obj) {
        IfcStyledRepresentation *clone = static_cast< IfcStyledRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcStyledRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSubContractResource(IfcSubContractResource *obj) {
    if (obj) {
        IfcSubContractResource *clone = static_cast< IfcSubContractResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSubContractResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSubedge(IfcSubedge *obj) {
    if (obj) {
        IfcSubedge *clone = static_cast< IfcSubedge * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSubedge(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *obj) {
    if (obj) {
        IfcSurfaceCurveSweptAreaSolid *clone = static_cast< IfcSurfaceCurveSweptAreaSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSurfaceCurveSweptAreaSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *obj) {
    if (obj) {
        IfcSurfaceOfLinearExtrusion *clone = static_cast< IfcSurfaceOfLinearExtrusion * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSurfaceOfLinearExtrusion(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *obj) {
    if (obj) {
        IfcSurfaceOfRevolution *clone = static_cast< IfcSurfaceOfRevolution * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSurfaceOfRevolution(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSurfaceStyle(IfcSurfaceStyle *obj) {
    if (obj) {
        IfcSurfaceStyle *clone = static_cast< IfcSurfaceStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSurfaceStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *obj) {
    if (obj) {
        IfcSurfaceStyleLighting *clone = static_cast< IfcSurfaceStyleLighting * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSurfaceStyleLighting(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *obj) {
    if (obj) {
        IfcSurfaceStyleRefraction *clone = static_cast< IfcSurfaceStyleRefraction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSurfaceStyleRefraction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *obj) {
    if (obj) {
        IfcSurfaceStyleRendering *clone = static_cast< IfcSurfaceStyleRendering * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSurfaceStyleRendering(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *obj) {
    if (obj) {
        IfcSurfaceStyleShading *clone = static_cast< IfcSurfaceStyleShading * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSurfaceStyleShading(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *obj) {
    if (obj) {
        IfcSurfaceStyleWithTextures *clone = static_cast< IfcSurfaceStyleWithTextures * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSurfaceStyleWithTextures(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSweptDiskSolid(IfcSweptDiskSolid *obj) {
    if (obj) {
        IfcSweptDiskSolid *clone = static_cast< IfcSweptDiskSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSweptDiskSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *obj) {
    if (obj) {
        IfcSwitchingDeviceType *clone = static_cast< IfcSwitchingDeviceType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSwitchingDeviceType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSymbolStyle(IfcSymbolStyle *obj) {
    if (obj) {
        IfcSymbolStyle *clone = static_cast< IfcSymbolStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSymbolStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSystem(IfcSystem *obj) {
    if (obj) {
        IfcSystem *clone = static_cast< IfcSystem * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSystem(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *obj) {
    if (obj) {
        IfcSystemFurnitureElementType *clone = static_cast< IfcSystemFurnitureElementType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcSystemFurnitureElementType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTShapeProfileDef(IfcTShapeProfileDef *obj) {
    if (obj) {
        IfcTShapeProfileDef *clone = static_cast< IfcTShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTable(IfcTable *obj) {
    if (obj) {
        IfcTable *clone = static_cast< IfcTable * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTable(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTableRow(IfcTableRow *obj) {
    if (obj) {
        IfcTableRow *clone = static_cast< IfcTableRow * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTableRow(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTankType(IfcTankType *obj) {
    if (obj) {
        IfcTankType *clone = static_cast< IfcTankType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTankType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTask(IfcTask *obj) {
    if (obj) {
        IfcTask *clone = static_cast< IfcTask * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTask(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTelecomAddress(IfcTelecomAddress *obj) {
    if (obj) {
        IfcTelecomAddress *clone = static_cast< IfcTelecomAddress * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTelecomAddress(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTendon(IfcTendon *obj) {
    if (obj) {
        IfcTendon *clone = static_cast< IfcTendon * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTendon(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTendonAnchor(IfcTendonAnchor *obj) {
    if (obj) {
        IfcTendonAnchor *clone = static_cast< IfcTendonAnchor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTendonAnchor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTerminatorSymbol(IfcTerminatorSymbol *obj) {
    if (obj) {
        IfcTerminatorSymbol *clone = static_cast< IfcTerminatorSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTerminatorSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTextLiteral(IfcTextLiteral *obj) {
    if (obj) {
        IfcTextLiteral *clone = static_cast< IfcTextLiteral * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTextLiteral(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *obj) {
    if (obj) {
        IfcTextLiteralWithExtent *clone = static_cast< IfcTextLiteralWithExtent * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTextLiteralWithExtent(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTextStyle(IfcTextStyle *obj) {
    if (obj) {
        IfcTextStyle *clone = static_cast< IfcTextStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTextStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTextStyleFontModel(IfcTextStyleFontModel *obj) {
    if (obj) {
        IfcTextStyleFontModel *clone = static_cast< IfcTextStyleFontModel * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTextStyleFontModel(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *obj) {
    if (obj) {
        IfcTextStyleForDefinedFont *clone = static_cast< IfcTextStyleForDefinedFont * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTextStyleForDefinedFont(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTextStyleTextModel(IfcTextStyleTextModel *obj) {
    if (obj) {
        IfcTextStyleTextModel *clone = static_cast< IfcTextStyleTextModel * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTextStyleTextModel(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *obj) {
    if (obj) {
        IfcTextStyleWithBoxCharacteristics *clone = static_cast< IfcTextStyleWithBoxCharacteristics * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTextStyleWithBoxCharacteristics(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *obj) {
    if (obj) {
        IfcTextureCoordinateGenerator *clone = static_cast< IfcTextureCoordinateGenerator * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTextureCoordinateGenerator(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTextureMap(IfcTextureMap *obj) {
    if (obj) {
        IfcTextureMap *clone = static_cast< IfcTextureMap * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTextureMap(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTextureVertex(IfcTextureVertex *obj) {
    if (obj) {
        IfcTextureVertex *clone = static_cast< IfcTextureVertex * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTextureVertex(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *obj) {
    if (obj) {
        IfcThermalMaterialProperties *clone = static_cast< IfcThermalMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcThermalMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *obj) {
    if (obj) {
        IfcTimeSeriesReferenceRelationship *clone = static_cast< IfcTimeSeriesReferenceRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTimeSeriesReferenceRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *obj) {
    if (obj) {
        IfcTimeSeriesSchedule *clone = static_cast< IfcTimeSeriesSchedule * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTimeSeriesSchedule(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTimeSeriesValue(IfcTimeSeriesValue *obj) {
    if (obj) {
        IfcTimeSeriesValue *clone = static_cast< IfcTimeSeriesValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTimeSeriesValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTopologyRepresentation(IfcTopologyRepresentation *obj) {
    if (obj) {
        IfcTopologyRepresentation *clone = static_cast< IfcTopologyRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTopologyRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTransformerType(IfcTransformerType *obj) {
    if (obj) {
        IfcTransformerType *clone = static_cast< IfcTransformerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTransformerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTransportElement(IfcTransportElement *obj) {
    if (obj) {
        IfcTransportElement *clone = static_cast< IfcTransportElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTransportElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTransportElementType(IfcTransportElementType *obj) {
    if (obj) {
        IfcTransportElementType *clone = static_cast< IfcTransportElementType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTransportElementType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *obj) {
    if (obj) {
        IfcTrapeziumProfileDef *clone = static_cast< IfcTrapeziumProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTrapeziumProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTrimmedCurve(IfcTrimmedCurve *obj) {
    if (obj) {
        IfcTrimmedCurve *clone = static_cast< IfcTrimmedCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTrimmedCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTubeBundleType(IfcTubeBundleType *obj) {
    if (obj) {
        IfcTubeBundleType *clone = static_cast< IfcTubeBundleType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTubeBundleType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *obj) {
    if (obj) {
        IfcTwoDirectionRepeatFactor *clone = static_cast< IfcTwoDirectionRepeatFactor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTwoDirectionRepeatFactor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTypeObject(IfcTypeObject *obj) {
    if (obj) {
        IfcTypeObject *clone = static_cast< IfcTypeObject * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTypeObject(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcTypeProduct(IfcTypeProduct *obj) {
    if (obj) {
        IfcTypeProduct *clone = static_cast< IfcTypeProduct * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcTypeProduct(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcUShapeProfileDef(IfcUShapeProfileDef *obj) {
    if (obj) {
        IfcUShapeProfileDef *clone = static_cast< IfcUShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcUShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcUnitAssignment(IfcUnitAssignment *obj) {
    if (obj) {
        IfcUnitAssignment *clone = static_cast< IfcUnitAssignment * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcUnitAssignment(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *obj) {
    if (obj) {
        IfcUnitaryEquipmentType *clone = static_cast< IfcUnitaryEquipmentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcUnitaryEquipmentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcValveType(IfcValveType *obj) {
    if (obj) {
        IfcValveType *clone = static_cast< IfcValveType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcValveType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcVector(IfcVector *obj) {
    if (obj) {
        IfcVector *clone = static_cast< IfcVector * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcVector(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcVertex(IfcVertex *obj) {
    if (obj) {
        IfcVertex *clone = static_cast< IfcVertex * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcVertex(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *obj) {
    if (obj) {
        IfcVertexBasedTextureMap *clone = static_cast< IfcVertexBasedTextureMap * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcVertexBasedTextureMap(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcVertexLoop(IfcVertexLoop *obj) {
    if (obj) {
        IfcVertexLoop *clone = static_cast< IfcVertexLoop * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcVertexLoop(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcVertexPoint(IfcVertexPoint *obj) {
    if (obj) {
        IfcVertexPoint *clone = static_cast< IfcVertexPoint * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcVertexPoint(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *obj) {
    if (obj) {
        IfcVibrationIsolatorType *clone = static_cast< IfcVibrationIsolatorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcVibrationIsolatorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcVirtualElement(IfcVirtualElement *obj) {
    if (obj) {
        IfcVirtualElement *clone = static_cast< IfcVirtualElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcVirtualElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *obj) {
    if (obj) {
        IfcVirtualGridIntersection *clone = static_cast< IfcVirtualGridIntersection * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcVirtualGridIntersection(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcWall(IfcWall *obj) {
    if (obj) {
        IfcWall *clone = static_cast< IfcWall * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcWall(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcWallStandardCase(IfcWallStandardCase *obj) {
    if (obj) {
        IfcWallStandardCase *clone = static_cast< IfcWallStandardCase * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcWallStandardCase(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcWallType(IfcWallType *obj) {
    if (obj) {
        IfcWallType *clone = static_cast< IfcWallType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcWallType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcWasteTerminalType(IfcWasteTerminalType *obj) {
    if (obj) {
        IfcWasteTerminalType *clone = static_cast< IfcWasteTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcWasteTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcWaterProperties(IfcWaterProperties *obj) {
    if (obj) {
        IfcWaterProperties *clone = static_cast< IfcWaterProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcWaterProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcWindow(IfcWindow *obj) {
    if (obj) {
        IfcWindow *clone = static_cast< IfcWindow * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcWindow(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcWindowLiningProperties(IfcWindowLiningProperties *obj) {
    if (obj) {
        IfcWindowLiningProperties *clone = static_cast< IfcWindowLiningProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcWindowLiningProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcWindowPanelProperties(IfcWindowPanelProperties *obj) {
    if (obj) {
        IfcWindowPanelProperties *clone = static_cast< IfcWindowPanelProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcWindowPanelProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcWindowStyle(IfcWindowStyle *obj) {
    if (obj) {
        IfcWindowStyle *clone = static_cast< IfcWindowStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcWindowStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcWorkPlan(IfcWorkPlan *obj) {
    if (obj) {
        IfcWorkPlan *clone = static_cast< IfcWorkPlan * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcWorkPlan(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcWorkSchedule(IfcWorkSchedule *obj) {
    if (obj) {
        IfcWorkSchedule *clone = static_cast< IfcWorkSchedule * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcWorkSchedule(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcZShapeProfileDef(IfcZShapeProfileDef *obj) {
    if (obj) {
        IfcZShapeProfileDef *clone = static_cast< IfcZShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcZShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool DeepCopyOp::visitIfcZone(IfcZone *obj) {
    if (obj) {
        IfcZone *clone = static_cast< IfcZone * > (find(obj));
        if (!clone) {
            CopyOp::_bo = static_cast< ExpressDataSet * > (obj->getExpressDataSet())->cloneIfcZone(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

ShallowCopyOp::ShallowCopyOp() {
}

ShallowCopyOp::~ShallowCopyOp() {
}

bool ShallowCopyOp::visitIfc2DCompositeCurve(Ifc2DCompositeCurve *obj) {
    CopyOp::_bo = const_cast< Ifc2DCompositeCurve * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcActionRequest(IfcActionRequest *obj) {
    CopyOp::_bo = const_cast< IfcActionRequest * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcActor(IfcActor *obj) {
    CopyOp::_bo = const_cast< IfcActor * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcActorRole(IfcActorRole *obj) {
    CopyOp::_bo = const_cast< IfcActorRole * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcActuatorType(IfcActuatorType *obj) {
    CopyOp::_bo = const_cast< IfcActuatorType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *obj) {
    CopyOp::_bo = const_cast< IfcAirTerminalBoxType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAirTerminalType(IfcAirTerminalType *obj) {
    CopyOp::_bo = const_cast< IfcAirTerminalType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *obj) {
    CopyOp::_bo = const_cast< IfcAirToAirHeatRecoveryType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAlarmType(IfcAlarmType *obj) {
    CopyOp::_bo = const_cast< IfcAlarmType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAngularDimension(IfcAngularDimension *obj) {
    CopyOp::_bo = const_cast< IfcAngularDimension * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAnnotation(IfcAnnotation *obj) {
    CopyOp::_bo = const_cast< IfcAnnotation * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *obj) {
    CopyOp::_bo = const_cast< IfcAnnotationCurveOccurrence * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAnnotationFillArea(IfcAnnotationFillArea *obj) {
    CopyOp::_bo = const_cast< IfcAnnotationFillArea * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *obj) {
    CopyOp::_bo = const_cast< IfcAnnotationFillAreaOccurrence * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAnnotationSurface(IfcAnnotationSurface *obj) {
    CopyOp::_bo = const_cast< IfcAnnotationSurface * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *obj) {
    CopyOp::_bo = const_cast< IfcAnnotationSurfaceOccurrence * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *obj) {
    CopyOp::_bo = const_cast< IfcAnnotationSymbolOccurrence * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *obj) {
    CopyOp::_bo = const_cast< IfcAnnotationTextOccurrence * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcApplication(IfcApplication *obj) {
    CopyOp::_bo = const_cast< IfcApplication * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *obj) {
    CopyOp::_bo = const_cast< IfcAppliedValueRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcApproval(IfcApproval *obj) {
    CopyOp::_bo = const_cast< IfcApproval * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *obj) {
    CopyOp::_bo = const_cast< IfcApprovalActorRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *obj) {
    CopyOp::_bo = const_cast< IfcApprovalPropertyRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcApprovalRelationship(IfcApprovalRelationship *obj) {
    CopyOp::_bo = const_cast< IfcApprovalRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcArbitraryClosedProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcArbitraryOpenProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *obj) {
    CopyOp::_bo = const_cast< IfcArbitraryProfileDefWithVoids * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAsset(IfcAsset *obj) {
    CopyOp::_bo = const_cast< IfcAsset * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcAsymmetricIShapeProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAxis1Placement(IfcAxis1Placement *obj) {
    CopyOp::_bo = const_cast< IfcAxis1Placement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAxis2Placement2D(IfcAxis2Placement2D *obj) {
    CopyOp::_bo = const_cast< IfcAxis2Placement2D * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcAxis2Placement3D(IfcAxis2Placement3D *obj) {
    CopyOp::_bo = const_cast< IfcAxis2Placement3D * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBeam(IfcBeam *obj) {
    CopyOp::_bo = const_cast< IfcBeam * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBeamType(IfcBeamType *obj) {
    CopyOp::_bo = const_cast< IfcBeamType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBezierCurve(IfcBezierCurve *obj) {
    CopyOp::_bo = const_cast< IfcBezierCurve * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBlobTexture(IfcBlobTexture *obj) {
    CopyOp::_bo = const_cast< IfcBlobTexture * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBlock(IfcBlock *obj) {
    CopyOp::_bo = const_cast< IfcBlock * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBoilerType(IfcBoilerType *obj) {
    CopyOp::_bo = const_cast< IfcBoilerType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBooleanClippingResult(IfcBooleanClippingResult *obj) {
    CopyOp::_bo = const_cast< IfcBooleanClippingResult * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBooleanResult(IfcBooleanResult *obj) {
    CopyOp::_bo = const_cast< IfcBooleanResult * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *obj) {
    CopyOp::_bo = const_cast< IfcBoundaryEdgeCondition * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *obj) {
    CopyOp::_bo = const_cast< IfcBoundaryFaceCondition * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *obj) {
    CopyOp::_bo = const_cast< IfcBoundaryNodeCondition * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *obj) {
    CopyOp::_bo = const_cast< IfcBoundaryNodeConditionWarping * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBoundedSurface(IfcBoundedSurface *obj) {
    CopyOp::_bo = const_cast< IfcBoundedSurface * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBoundingBox(IfcBoundingBox *obj) {
    CopyOp::_bo = const_cast< IfcBoundingBox * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *obj) {
    CopyOp::_bo = const_cast< IfcBoxedHalfSpace * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBuilding(IfcBuilding *obj) {
    CopyOp::_bo = const_cast< IfcBuilding * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBuildingElementPart(IfcBuildingElementPart *obj) {
    CopyOp::_bo = const_cast< IfcBuildingElementPart * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBuildingElementProxy(IfcBuildingElementProxy *obj) {
    CopyOp::_bo = const_cast< IfcBuildingElementProxy * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *obj) {
    CopyOp::_bo = const_cast< IfcBuildingElementProxyType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcBuildingStorey(IfcBuildingStorey *obj) {
    CopyOp::_bo = const_cast< IfcBuildingStorey * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCShapeProfileDef(IfcCShapeProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcCShapeProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *obj) {
    CopyOp::_bo = const_cast< IfcCableCarrierFittingType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *obj) {
    CopyOp::_bo = const_cast< IfcCableCarrierSegmentType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCableSegmentType(IfcCableSegmentType *obj) {
    CopyOp::_bo = const_cast< IfcCableSegmentType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCalendarDate(IfcCalendarDate *obj) {
    CopyOp::_bo = const_cast< IfcCalendarDate * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCartesianPoint(IfcCartesianPoint *obj) {
    CopyOp::_bo = const_cast< IfcCartesianPoint * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *obj) {
    CopyOp::_bo = const_cast< IfcCartesianTransformationOperator2D * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *obj) {
    CopyOp::_bo = const_cast< IfcCartesianTransformationOperator2DnonUniform * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *obj) {
    CopyOp::_bo = const_cast< IfcCartesianTransformationOperator3D * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *obj) {
    CopyOp::_bo = const_cast< IfcCartesianTransformationOperator3DnonUniform * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcCenterLineProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *obj) {
    CopyOp::_bo = const_cast< IfcChamferEdgeFeature * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcChillerType(IfcChillerType *obj) {
    CopyOp::_bo = const_cast< IfcChillerType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCircle(IfcCircle *obj) {
    CopyOp::_bo = const_cast< IfcCircle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcCircleHollowProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCircleProfileDef(IfcCircleProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcCircleProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcClassification(IfcClassification *obj) {
    CopyOp::_bo = const_cast< IfcClassification * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcClassificationItem(IfcClassificationItem *obj) {
    CopyOp::_bo = const_cast< IfcClassificationItem * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *obj) {
    CopyOp::_bo = const_cast< IfcClassificationItemRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcClassificationNotation(IfcClassificationNotation *obj) {
    CopyOp::_bo = const_cast< IfcClassificationNotation * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *obj) {
    CopyOp::_bo = const_cast< IfcClassificationNotationFacet * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcClassificationReference(IfcClassificationReference *obj) {
    CopyOp::_bo = const_cast< IfcClassificationReference * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcClosedShell(IfcClosedShell *obj) {
    CopyOp::_bo = const_cast< IfcClosedShell * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCoilType(IfcCoilType *obj) {
    CopyOp::_bo = const_cast< IfcCoilType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcColourRgb(IfcColourRgb *obj) {
    CopyOp::_bo = const_cast< IfcColourRgb * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcColumn(IfcColumn *obj) {
    CopyOp::_bo = const_cast< IfcColumn * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcColumnType(IfcColumnType *obj) {
    CopyOp::_bo = const_cast< IfcColumnType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcComplexProperty(IfcComplexProperty *obj) {
    CopyOp::_bo = const_cast< IfcComplexProperty * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCompositeCurve(IfcCompositeCurve *obj) {
    CopyOp::_bo = const_cast< IfcCompositeCurve * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *obj) {
    CopyOp::_bo = const_cast< IfcCompositeCurveSegment * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCompositeProfileDef(IfcCompositeProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcCompositeProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCompressorType(IfcCompressorType *obj) {
    CopyOp::_bo = const_cast< IfcCompressorType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCondenserType(IfcCondenserType *obj) {
    CopyOp::_bo = const_cast< IfcCondenserType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCondition(IfcCondition *obj) {
    CopyOp::_bo = const_cast< IfcCondition * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConditionCriterion(IfcConditionCriterion *obj) {
    CopyOp::_bo = const_cast< IfcConditionCriterion * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConnectedFaceSet(IfcConnectedFaceSet *obj) {
    CopyOp::_bo = const_cast< IfcConnectedFaceSet * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *obj) {
    CopyOp::_bo = const_cast< IfcConnectionCurveGeometry * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *obj) {
    CopyOp::_bo = const_cast< IfcConnectionPointEccentricity * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *obj) {
    CopyOp::_bo = const_cast< IfcConnectionPointGeometry * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *obj) {
    CopyOp::_bo = const_cast< IfcConnectionPortGeometry * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *obj) {
    CopyOp::_bo = const_cast< IfcConnectionSurfaceGeometry * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *obj) {
    CopyOp::_bo = const_cast< IfcConstraintAggregationRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *obj) {
    CopyOp::_bo = const_cast< IfcConstraintClassificationRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConstraintRelationship(IfcConstraintRelationship *obj) {
    CopyOp::_bo = const_cast< IfcConstraintRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *obj) {
    CopyOp::_bo = const_cast< IfcConstructionEquipmentResource * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *obj) {
    CopyOp::_bo = const_cast< IfcConstructionMaterialResource * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConstructionProductResource(IfcConstructionProductResource *obj) {
    CopyOp::_bo = const_cast< IfcConstructionProductResource * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcContextDependentUnit(IfcContextDependentUnit *obj) {
    CopyOp::_bo = const_cast< IfcContextDependentUnit * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcControllerType(IfcControllerType *obj) {
    CopyOp::_bo = const_cast< IfcControllerType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcConversionBasedUnit(IfcConversionBasedUnit *obj) {
    CopyOp::_bo = const_cast< IfcConversionBasedUnit * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCooledBeamType(IfcCooledBeamType *obj) {
    CopyOp::_bo = const_cast< IfcCooledBeamType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCoolingTowerType(IfcCoolingTowerType *obj) {
    CopyOp::_bo = const_cast< IfcCoolingTowerType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *obj) {
    CopyOp::_bo = const_cast< IfcCoordinatedUniversalTimeOffset * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCostItem(IfcCostItem *obj) {
    CopyOp::_bo = const_cast< IfcCostItem * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCostSchedule(IfcCostSchedule *obj) {
    CopyOp::_bo = const_cast< IfcCostSchedule * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCostValue(IfcCostValue *obj) {
    CopyOp::_bo = const_cast< IfcCostValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCovering(IfcCovering *obj) {
    CopyOp::_bo = const_cast< IfcCovering * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCoveringType(IfcCoveringType *obj) {
    CopyOp::_bo = const_cast< IfcCoveringType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcCraneRailAShapeProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcCraneRailFShapeProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCrewResource(IfcCrewResource *obj) {
    CopyOp::_bo = const_cast< IfcCrewResource * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCsgSolid(IfcCsgSolid *obj) {
    CopyOp::_bo = const_cast< IfcCsgSolid * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCurrencyRelationship(IfcCurrencyRelationship *obj) {
    CopyOp::_bo = const_cast< IfcCurrencyRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCurtainWall(IfcCurtainWall *obj) {
    CopyOp::_bo = const_cast< IfcCurtainWall * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCurtainWallType(IfcCurtainWallType *obj) {
    CopyOp::_bo = const_cast< IfcCurtainWallType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *obj) {
    CopyOp::_bo = const_cast< IfcCurveBoundedPlane * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCurveStyle(IfcCurveStyle *obj) {
    CopyOp::_bo = const_cast< IfcCurveStyle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCurveStyleFont(IfcCurveStyleFont *obj) {
    CopyOp::_bo = const_cast< IfcCurveStyleFont * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *obj) {
    CopyOp::_bo = const_cast< IfcCurveStyleFontAndScaling * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *obj) {
    CopyOp::_bo = const_cast< IfcCurveStyleFontPattern * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDamperType(IfcDamperType *obj) {
    CopyOp::_bo = const_cast< IfcDamperType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDateAndTime(IfcDateAndTime *obj) {
    CopyOp::_bo = const_cast< IfcDateAndTime * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDefinedSymbol(IfcDefinedSymbol *obj) {
    CopyOp::_bo = const_cast< IfcDefinedSymbol * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDerivedProfileDef(IfcDerivedProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcDerivedProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDerivedUnit(IfcDerivedUnit *obj) {
    CopyOp::_bo = const_cast< IfcDerivedUnit * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDerivedUnitElement(IfcDerivedUnitElement *obj) {
    CopyOp::_bo = const_cast< IfcDerivedUnitElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDiameterDimension(IfcDiameterDimension *obj) {
    CopyOp::_bo = const_cast< IfcDiameterDimension * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *obj) {
    CopyOp::_bo = const_cast< IfcDimensionCalloutRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDimensionCurve(IfcDimensionCurve *obj) {
    CopyOp::_bo = const_cast< IfcDimensionCurve * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *obj) {
    CopyOp::_bo = const_cast< IfcDimensionCurveDirectedCallout * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *obj) {
    CopyOp::_bo = const_cast< IfcDimensionCurveTerminator * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDimensionPair(IfcDimensionPair *obj) {
    CopyOp::_bo = const_cast< IfcDimensionPair * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDimensionalExponents(IfcDimensionalExponents *obj) {
    CopyOp::_bo = const_cast< IfcDimensionalExponents * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDirection(IfcDirection *obj) {
    CopyOp::_bo = const_cast< IfcDirection * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDiscreteAccessory(IfcDiscreteAccessory *obj) {
    CopyOp::_bo = const_cast< IfcDiscreteAccessory * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *obj) {
    CopyOp::_bo = const_cast< IfcDiscreteAccessoryType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDistributionChamberElement(IfcDistributionChamberElement *obj) {
    CopyOp::_bo = const_cast< IfcDistributionChamberElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *obj) {
    CopyOp::_bo = const_cast< IfcDistributionChamberElementType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDistributionControlElement(IfcDistributionControlElement *obj) {
    CopyOp::_bo = const_cast< IfcDistributionControlElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDistributionElement(IfcDistributionElement *obj) {
    CopyOp::_bo = const_cast< IfcDistributionElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDistributionElementType(IfcDistributionElementType *obj) {
    CopyOp::_bo = const_cast< IfcDistributionElementType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDistributionFlowElement(IfcDistributionFlowElement *obj) {
    CopyOp::_bo = const_cast< IfcDistributionFlowElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDistributionPort(IfcDistributionPort *obj) {
    CopyOp::_bo = const_cast< IfcDistributionPort * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *obj) {
    CopyOp::_bo = const_cast< IfcDocumentElectronicFormat * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDocumentInformation(IfcDocumentInformation *obj) {
    CopyOp::_bo = const_cast< IfcDocumentInformation * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *obj) {
    CopyOp::_bo = const_cast< IfcDocumentInformationRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDocumentReference(IfcDocumentReference *obj) {
    CopyOp::_bo = const_cast< IfcDocumentReference * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDoor(IfcDoor *obj) {
    CopyOp::_bo = const_cast< IfcDoor * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDoorLiningProperties(IfcDoorLiningProperties *obj) {
    CopyOp::_bo = const_cast< IfcDoorLiningProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDoorPanelProperties(IfcDoorPanelProperties *obj) {
    CopyOp::_bo = const_cast< IfcDoorPanelProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDoorStyle(IfcDoorStyle *obj) {
    CopyOp::_bo = const_cast< IfcDoorStyle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDraughtingCallout(IfcDraughtingCallout *obj) {
    CopyOp::_bo = const_cast< IfcDraughtingCallout * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *obj) {
    CopyOp::_bo = const_cast< IfcDraughtingCalloutRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *obj) {
    CopyOp::_bo = const_cast< IfcDraughtingPreDefinedColour * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *obj) {
    CopyOp::_bo = const_cast< IfcDraughtingPreDefinedCurveFont * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *obj) {
    CopyOp::_bo = const_cast< IfcDraughtingPreDefinedTextFont * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDuctFittingType(IfcDuctFittingType *obj) {
    CopyOp::_bo = const_cast< IfcDuctFittingType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDuctSegmentType(IfcDuctSegmentType *obj) {
    CopyOp::_bo = const_cast< IfcDuctSegmentType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcDuctSilencerType(IfcDuctSilencerType *obj) {
    CopyOp::_bo = const_cast< IfcDuctSilencerType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEdge(IfcEdge *obj) {
    CopyOp::_bo = const_cast< IfcEdge * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEdgeCurve(IfcEdgeCurve *obj) {
    CopyOp::_bo = const_cast< IfcEdgeCurve * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEdgeLoop(IfcEdgeLoop *obj) {
    CopyOp::_bo = const_cast< IfcEdgeLoop * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElectricApplianceType(IfcElectricApplianceType *obj) {
    CopyOp::_bo = const_cast< IfcElectricApplianceType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *obj) {
    CopyOp::_bo = const_cast< IfcElectricDistributionPoint * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *obj) {
    CopyOp::_bo = const_cast< IfcElectricFlowStorageDeviceType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElectricGeneratorType(IfcElectricGeneratorType *obj) {
    CopyOp::_bo = const_cast< IfcElectricGeneratorType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElectricHeaterType(IfcElectricHeaterType *obj) {
    CopyOp::_bo = const_cast< IfcElectricHeaterType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElectricMotorType(IfcElectricMotorType *obj) {
    CopyOp::_bo = const_cast< IfcElectricMotorType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElectricTimeControlType(IfcElectricTimeControlType *obj) {
    CopyOp::_bo = const_cast< IfcElectricTimeControlType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *obj) {
    CopyOp::_bo = const_cast< IfcElectricalBaseProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElectricalCircuit(IfcElectricalCircuit *obj) {
    CopyOp::_bo = const_cast< IfcElectricalCircuit * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElectricalElement(IfcElectricalElement *obj) {
    CopyOp::_bo = const_cast< IfcElectricalElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElementAssembly(IfcElementAssembly *obj) {
    CopyOp::_bo = const_cast< IfcElementAssembly * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcElementQuantity(IfcElementQuantity *obj) {
    CopyOp::_bo = const_cast< IfcElementQuantity * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEllipse(IfcEllipse *obj) {
    CopyOp::_bo = const_cast< IfcEllipse * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEllipseProfileDef(IfcEllipseProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcEllipseProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *obj) {
    CopyOp::_bo = const_cast< IfcEnergyConversionDevice * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEnergyProperties(IfcEnergyProperties *obj) {
    CopyOp::_bo = const_cast< IfcEnergyProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *obj) {
    CopyOp::_bo = const_cast< IfcEnvironmentalImpactValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEquipmentElement(IfcEquipmentElement *obj) {
    CopyOp::_bo = const_cast< IfcEquipmentElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEquipmentStandard(IfcEquipmentStandard *obj) {
    CopyOp::_bo = const_cast< IfcEquipmentStandard * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *obj) {
    CopyOp::_bo = const_cast< IfcEvaporativeCoolerType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcEvaporatorType(IfcEvaporatorType *obj) {
    CopyOp::_bo = const_cast< IfcEvaporatorType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *obj) {
    CopyOp::_bo = const_cast< IfcExtendedMaterialProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *obj) {
    CopyOp::_bo = const_cast< IfcExternallyDefinedHatchStyle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *obj) {
    CopyOp::_bo = const_cast< IfcExternallyDefinedSurfaceStyle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *obj) {
    CopyOp::_bo = const_cast< IfcExternallyDefinedSymbol * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *obj) {
    CopyOp::_bo = const_cast< IfcExternallyDefinedTextFont * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *obj) {
    CopyOp::_bo = const_cast< IfcExtrudedAreaSolid * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFace(IfcFace *obj) {
    CopyOp::_bo = const_cast< IfcFace * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *obj) {
    CopyOp::_bo = const_cast< IfcFaceBasedSurfaceModel * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFaceBound(IfcFaceBound *obj) {
    CopyOp::_bo = const_cast< IfcFaceBound * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFaceOuterBound(IfcFaceOuterBound *obj) {
    CopyOp::_bo = const_cast< IfcFaceOuterBound * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFaceSurface(IfcFaceSurface *obj) {
    CopyOp::_bo = const_cast< IfcFaceSurface * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFacetedBrep(IfcFacetedBrep *obj) {
    CopyOp::_bo = const_cast< IfcFacetedBrep * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *obj) {
    CopyOp::_bo = const_cast< IfcFacetedBrepWithVoids * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *obj) {
    CopyOp::_bo = const_cast< IfcFailureConnectionCondition * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFanType(IfcFanType *obj) {
    CopyOp::_bo = const_cast< IfcFanType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFastener(IfcFastener *obj) {
    CopyOp::_bo = const_cast< IfcFastener * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFastenerType(IfcFastenerType *obj) {
    CopyOp::_bo = const_cast< IfcFastenerType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFillAreaStyle(IfcFillAreaStyle *obj) {
    CopyOp::_bo = const_cast< IfcFillAreaStyle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *obj) {
    CopyOp::_bo = const_cast< IfcFillAreaStyleHatching * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *obj) {
    CopyOp::_bo = const_cast< IfcFillAreaStyleTileSymbolWithStyle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *obj) {
    CopyOp::_bo = const_cast< IfcFillAreaStyleTiles * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFilterType(IfcFilterType *obj) {
    CopyOp::_bo = const_cast< IfcFilterType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *obj) {
    CopyOp::_bo = const_cast< IfcFireSuppressionTerminalType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFlowController(IfcFlowController *obj) {
    CopyOp::_bo = const_cast< IfcFlowController * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFlowFitting(IfcFlowFitting *obj) {
    CopyOp::_bo = const_cast< IfcFlowFitting * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFlowInstrumentType(IfcFlowInstrumentType *obj) {
    CopyOp::_bo = const_cast< IfcFlowInstrumentType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFlowMeterType(IfcFlowMeterType *obj) {
    CopyOp::_bo = const_cast< IfcFlowMeterType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFlowMovingDevice(IfcFlowMovingDevice *obj) {
    CopyOp::_bo = const_cast< IfcFlowMovingDevice * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFlowSegment(IfcFlowSegment *obj) {
    CopyOp::_bo = const_cast< IfcFlowSegment * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFlowStorageDevice(IfcFlowStorageDevice *obj) {
    CopyOp::_bo = const_cast< IfcFlowStorageDevice * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFlowTerminal(IfcFlowTerminal *obj) {
    CopyOp::_bo = const_cast< IfcFlowTerminal * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *obj) {
    CopyOp::_bo = const_cast< IfcFlowTreatmentDevice * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFluidFlowProperties(IfcFluidFlowProperties *obj) {
    CopyOp::_bo = const_cast< IfcFluidFlowProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFooting(IfcFooting *obj) {
    CopyOp::_bo = const_cast< IfcFooting * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFuelProperties(IfcFuelProperties *obj) {
    CopyOp::_bo = const_cast< IfcFuelProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFurnishingElement(IfcFurnishingElement *obj) {
    CopyOp::_bo = const_cast< IfcFurnishingElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFurnishingElementType(IfcFurnishingElementType *obj) {
    CopyOp::_bo = const_cast< IfcFurnishingElementType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFurnitureStandard(IfcFurnitureStandard *obj) {
    CopyOp::_bo = const_cast< IfcFurnitureStandard * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcFurnitureType(IfcFurnitureType *obj) {
    CopyOp::_bo = const_cast< IfcFurnitureType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcGasTerminalType(IfcGasTerminalType *obj) {
    CopyOp::_bo = const_cast< IfcGasTerminalType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *obj) {
    CopyOp::_bo = const_cast< IfcGeneralMaterialProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *obj) {
    CopyOp::_bo = const_cast< IfcGeneralProfileProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcGeometricCurveSet(IfcGeometricCurveSet *obj) {
    CopyOp::_bo = const_cast< IfcGeometricCurveSet * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *obj) {
    CopyOp::_bo = const_cast< IfcGeometricRepresentationContext * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *obj) {
    CopyOp::_bo = const_cast< IfcGeometricRepresentationSubContext * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcGeometricSet(IfcGeometricSet *obj) {
    CopyOp::_bo = const_cast< IfcGeometricSet * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcGrid(IfcGrid *obj) {
    CopyOp::_bo = const_cast< IfcGrid * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcGridAxis(IfcGridAxis *obj) {
    CopyOp::_bo = const_cast< IfcGridAxis * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcGridPlacement(IfcGridPlacement *obj) {
    CopyOp::_bo = const_cast< IfcGridPlacement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcGroup(IfcGroup *obj) {
    CopyOp::_bo = const_cast< IfcGroup * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *obj) {
    CopyOp::_bo = const_cast< IfcHalfSpaceSolid * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcHeatExchangerType(IfcHeatExchangerType *obj) {
    CopyOp::_bo = const_cast< IfcHeatExchangerType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcHumidifierType(IfcHumidifierType *obj) {
    CopyOp::_bo = const_cast< IfcHumidifierType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *obj) {
    CopyOp::_bo = const_cast< IfcHygroscopicMaterialProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcIShapeProfileDef(IfcIShapeProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcIShapeProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcImageTexture(IfcImageTexture *obj) {
    CopyOp::_bo = const_cast< IfcImageTexture * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcInventory(IfcInventory *obj) {
    CopyOp::_bo = const_cast< IfcInventory * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *obj) {
    CopyOp::_bo = const_cast< IfcIrregularTimeSeries * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *obj) {
    CopyOp::_bo = const_cast< IfcIrregularTimeSeriesValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcJunctionBoxType(IfcJunctionBoxType *obj) {
    CopyOp::_bo = const_cast< IfcJunctionBoxType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLShapeProfileDef(IfcLShapeProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcLShapeProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLaborResource(IfcLaborResource *obj) {
    CopyOp::_bo = const_cast< IfcLaborResource * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLampType(IfcLampType *obj) {
    CopyOp::_bo = const_cast< IfcLampType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLibraryInformation(IfcLibraryInformation *obj) {
    CopyOp::_bo = const_cast< IfcLibraryInformation * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLibraryReference(IfcLibraryReference *obj) {
    CopyOp::_bo = const_cast< IfcLibraryReference * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLightDistributionData(IfcLightDistributionData *obj) {
    CopyOp::_bo = const_cast< IfcLightDistributionData * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLightFixtureType(IfcLightFixtureType *obj) {
    CopyOp::_bo = const_cast< IfcLightFixtureType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *obj) {
    CopyOp::_bo = const_cast< IfcLightIntensityDistribution * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLightSourceAmbient(IfcLightSourceAmbient *obj) {
    CopyOp::_bo = const_cast< IfcLightSourceAmbient * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLightSourceDirectional(IfcLightSourceDirectional *obj) {
    CopyOp::_bo = const_cast< IfcLightSourceDirectional * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *obj) {
    CopyOp::_bo = const_cast< IfcLightSourceGoniometric * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLightSourcePositional(IfcLightSourcePositional *obj) {
    CopyOp::_bo = const_cast< IfcLightSourcePositional * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLightSourceSpot(IfcLightSourceSpot *obj) {
    CopyOp::_bo = const_cast< IfcLightSourceSpot * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLine(IfcLine *obj) {
    CopyOp::_bo = const_cast< IfcLine * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLinearDimension(IfcLinearDimension *obj) {
    CopyOp::_bo = const_cast< IfcLinearDimension * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLocalPlacement(IfcLocalPlacement *obj) {
    CopyOp::_bo = const_cast< IfcLocalPlacement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLocalTime(IfcLocalTime *obj) {
    CopyOp::_bo = const_cast< IfcLocalTime * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcLoop(IfcLoop *obj) {
    CopyOp::_bo = const_cast< IfcLoop * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMappedItem(IfcMappedItem *obj) {
    CopyOp::_bo = const_cast< IfcMappedItem * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMaterial(IfcMaterial *obj) {
    CopyOp::_bo = const_cast< IfcMaterial * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *obj) {
    CopyOp::_bo = const_cast< IfcMaterialClassificationRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *obj) {
    CopyOp::_bo = const_cast< IfcMaterialDefinitionRepresentation * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMaterialLayer(IfcMaterialLayer *obj) {
    CopyOp::_bo = const_cast< IfcMaterialLayer * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMaterialLayerSet(IfcMaterialLayerSet *obj) {
    CopyOp::_bo = const_cast< IfcMaterialLayerSet * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *obj) {
    CopyOp::_bo = const_cast< IfcMaterialLayerSetUsage * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMaterialList(IfcMaterialList *obj) {
    CopyOp::_bo = const_cast< IfcMaterialList * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMeasureWithUnit(IfcMeasureWithUnit *obj) {
    CopyOp::_bo = const_cast< IfcMeasureWithUnit * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *obj) {
    CopyOp::_bo = const_cast< IfcMechanicalConcreteMaterialProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMechanicalFastener(IfcMechanicalFastener *obj) {
    CopyOp::_bo = const_cast< IfcMechanicalFastener * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *obj) {
    CopyOp::_bo = const_cast< IfcMechanicalFastenerType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *obj) {
    CopyOp::_bo = const_cast< IfcMechanicalMaterialProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *obj) {
    CopyOp::_bo = const_cast< IfcMechanicalSteelMaterialProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMember(IfcMember *obj) {
    CopyOp::_bo = const_cast< IfcMember * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMemberType(IfcMemberType *obj) {
    CopyOp::_bo = const_cast< IfcMemberType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMetric(IfcMetric *obj) {
    CopyOp::_bo = const_cast< IfcMetric * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMonetaryUnit(IfcMonetaryUnit *obj) {
    CopyOp::_bo = const_cast< IfcMonetaryUnit * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMotorConnectionType(IfcMotorConnectionType *obj) {
    CopyOp::_bo = const_cast< IfcMotorConnectionType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcMove(IfcMove *obj) {
    CopyOp::_bo = const_cast< IfcMove * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcObjective(IfcObjective *obj) {
    CopyOp::_bo = const_cast< IfcObjective * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOccupant(IfcOccupant *obj) {
    CopyOp::_bo = const_cast< IfcOccupant * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOffsetCurve2D(IfcOffsetCurve2D *obj) {
    CopyOp::_bo = const_cast< IfcOffsetCurve2D * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOffsetCurve3D(IfcOffsetCurve3D *obj) {
    CopyOp::_bo = const_cast< IfcOffsetCurve3D * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *obj) {
    CopyOp::_bo = const_cast< IfcOneDirectionRepeatFactor * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOpenShell(IfcOpenShell *obj) {
    CopyOp::_bo = const_cast< IfcOpenShell * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOpeningElement(IfcOpeningElement *obj) {
    CopyOp::_bo = const_cast< IfcOpeningElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *obj) {
    CopyOp::_bo = const_cast< IfcOpticalMaterialProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOrderAction(IfcOrderAction *obj) {
    CopyOp::_bo = const_cast< IfcOrderAction * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOrganization(IfcOrganization *obj) {
    CopyOp::_bo = const_cast< IfcOrganization * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOrganizationRelationship(IfcOrganizationRelationship *obj) {
    CopyOp::_bo = const_cast< IfcOrganizationRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOrientedEdge(IfcOrientedEdge *obj) {
    CopyOp::_bo = const_cast< IfcOrientedEdge * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOutletType(IfcOutletType *obj) {
    CopyOp::_bo = const_cast< IfcOutletType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcOwnerHistory(IfcOwnerHistory *obj) {
    CopyOp::_bo = const_cast< IfcOwnerHistory * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPath(IfcPath *obj) {
    CopyOp::_bo = const_cast< IfcPath * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPerformanceHistory(IfcPerformanceHistory *obj) {
    CopyOp::_bo = const_cast< IfcPerformanceHistory * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *obj) {
    CopyOp::_bo = const_cast< IfcPermeableCoveringProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPermit(IfcPermit *obj) {
    CopyOp::_bo = const_cast< IfcPermit * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPerson(IfcPerson *obj) {
    CopyOp::_bo = const_cast< IfcPerson * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPersonAndOrganization(IfcPersonAndOrganization *obj) {
    CopyOp::_bo = const_cast< IfcPersonAndOrganization * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *obj) {
    CopyOp::_bo = const_cast< IfcPhysicalComplexQuantity * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPile(IfcPile *obj) {
    CopyOp::_bo = const_cast< IfcPile * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPipeFittingType(IfcPipeFittingType *obj) {
    CopyOp::_bo = const_cast< IfcPipeFittingType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPipeSegmentType(IfcPipeSegmentType *obj) {
    CopyOp::_bo = const_cast< IfcPipeSegmentType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPixelTexture(IfcPixelTexture *obj) {
    CopyOp::_bo = const_cast< IfcPixelTexture * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPlanarBox(IfcPlanarBox *obj) {
    CopyOp::_bo = const_cast< IfcPlanarBox * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPlanarExtent(IfcPlanarExtent *obj) {
    CopyOp::_bo = const_cast< IfcPlanarExtent * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPlane(IfcPlane *obj) {
    CopyOp::_bo = const_cast< IfcPlane * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPlate(IfcPlate *obj) {
    CopyOp::_bo = const_cast< IfcPlate * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPlateType(IfcPlateType *obj) {
    CopyOp::_bo = const_cast< IfcPlateType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPointOnCurve(IfcPointOnCurve *obj) {
    CopyOp::_bo = const_cast< IfcPointOnCurve * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPointOnSurface(IfcPointOnSurface *obj) {
    CopyOp::_bo = const_cast< IfcPointOnSurface * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPolyLoop(IfcPolyLoop *obj) {
    CopyOp::_bo = const_cast< IfcPolyLoop * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *obj) {
    CopyOp::_bo = const_cast< IfcPolygonalBoundedHalfSpace * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPolyline(IfcPolyline *obj) {
    CopyOp::_bo = const_cast< IfcPolyline * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPostalAddress(IfcPostalAddress *obj) {
    CopyOp::_bo = const_cast< IfcPostalAddress * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *obj) {
    CopyOp::_bo = const_cast< IfcPreDefinedDimensionSymbol * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *obj) {
    CopyOp::_bo = const_cast< IfcPreDefinedPointMarkerSymbol * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *obj) {
    CopyOp::_bo = const_cast< IfcPreDefinedTerminatorSymbol * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *obj) {
    CopyOp::_bo = const_cast< IfcPresentationLayerAssignment * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *obj) {
    CopyOp::_bo = const_cast< IfcPresentationLayerWithStyle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *obj) {
    CopyOp::_bo = const_cast< IfcPresentationStyleAssignment * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcProcedure(IfcProcedure *obj) {
    CopyOp::_bo = const_cast< IfcProcedure * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcProductDefinitionShape(IfcProductDefinitionShape *obj) {
    CopyOp::_bo = const_cast< IfcProductDefinitionShape * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcProductRepresentation(IfcProductRepresentation *obj) {
    CopyOp::_bo = const_cast< IfcProductRepresentation * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *obj) {
    CopyOp::_bo = const_cast< IfcProductsOfCombustionProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcProject(IfcProject *obj) {
    CopyOp::_bo = const_cast< IfcProject * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcProjectOrder(IfcProjectOrder *obj) {
    CopyOp::_bo = const_cast< IfcProjectOrder * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcProjectOrderRecord(IfcProjectOrderRecord *obj) {
    CopyOp::_bo = const_cast< IfcProjectOrderRecord * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcProjectionCurve(IfcProjectionCurve *obj) {
    CopyOp::_bo = const_cast< IfcProjectionCurve * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcProjectionElement(IfcProjectionElement *obj) {
    CopyOp::_bo = const_cast< IfcProjectionElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *obj) {
    CopyOp::_bo = const_cast< IfcPropertyBoundedValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *obj) {
    CopyOp::_bo = const_cast< IfcPropertyConstraintRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *obj) {
    CopyOp::_bo = const_cast< IfcPropertyDependencyRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *obj) {
    CopyOp::_bo = const_cast< IfcPropertyEnumeratedValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPropertyEnumeration(IfcPropertyEnumeration *obj) {
    CopyOp::_bo = const_cast< IfcPropertyEnumeration * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPropertyListValue(IfcPropertyListValue *obj) {
    CopyOp::_bo = const_cast< IfcPropertyListValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *obj) {
    CopyOp::_bo = const_cast< IfcPropertyReferenceValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPropertySet(IfcPropertySet *obj) {
    CopyOp::_bo = const_cast< IfcPropertySet * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPropertySingleValue(IfcPropertySingleValue *obj) {
    CopyOp::_bo = const_cast< IfcPropertySingleValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPropertyTableValue(IfcPropertyTableValue *obj) {
    CopyOp::_bo = const_cast< IfcPropertyTableValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *obj) {
    CopyOp::_bo = const_cast< IfcProtectiveDeviceType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcProxy(IfcProxy *obj) {
    CopyOp::_bo = const_cast< IfcProxy * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcPumpType(IfcPumpType *obj) {
    CopyOp::_bo = const_cast< IfcPumpType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcQuantityArea(IfcQuantityArea *obj) {
    CopyOp::_bo = const_cast< IfcQuantityArea * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcQuantityCount(IfcQuantityCount *obj) {
    CopyOp::_bo = const_cast< IfcQuantityCount * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcQuantityLength(IfcQuantityLength *obj) {
    CopyOp::_bo = const_cast< IfcQuantityLength * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcQuantityTime(IfcQuantityTime *obj) {
    CopyOp::_bo = const_cast< IfcQuantityTime * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcQuantityVolume(IfcQuantityVolume *obj) {
    CopyOp::_bo = const_cast< IfcQuantityVolume * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcQuantityWeight(IfcQuantityWeight *obj) {
    CopyOp::_bo = const_cast< IfcQuantityWeight * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRadiusDimension(IfcRadiusDimension *obj) {
    CopyOp::_bo = const_cast< IfcRadiusDimension * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRailing(IfcRailing *obj) {
    CopyOp::_bo = const_cast< IfcRailing * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRailingType(IfcRailingType *obj) {
    CopyOp::_bo = const_cast< IfcRailingType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRamp(IfcRamp *obj) {
    CopyOp::_bo = const_cast< IfcRamp * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRampFlight(IfcRampFlight *obj) {
    CopyOp::_bo = const_cast< IfcRampFlight * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRampFlightType(IfcRampFlightType *obj) {
    CopyOp::_bo = const_cast< IfcRampFlightType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRationalBezierCurve(IfcRationalBezierCurve *obj) {
    CopyOp::_bo = const_cast< IfcRationalBezierCurve * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcRectangleHollowProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRectangleProfileDef(IfcRectangleProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcRectangleProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRectangularPyramid(IfcRectangularPyramid *obj) {
    CopyOp::_bo = const_cast< IfcRectangularPyramid * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *obj) {
    CopyOp::_bo = const_cast< IfcRectangularTrimmedSurface * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcReferencesValueDocument(IfcReferencesValueDocument *obj) {
    CopyOp::_bo = const_cast< IfcReferencesValueDocument * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRegularTimeSeries(IfcRegularTimeSeries *obj) {
    CopyOp::_bo = const_cast< IfcRegularTimeSeries * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *obj) {
    CopyOp::_bo = const_cast< IfcReinforcementBarProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *obj) {
    CopyOp::_bo = const_cast< IfcReinforcementDefinitionProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcReinforcingBar(IfcReinforcingBar *obj) {
    CopyOp::_bo = const_cast< IfcReinforcingBar * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcReinforcingMesh(IfcReinforcingMesh *obj) {
    CopyOp::_bo = const_cast< IfcReinforcingMesh * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAggregates(IfcRelAggregates *obj) {
    CopyOp::_bo = const_cast< IfcRelAggregates * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssignsTasks(IfcRelAssignsTasks *obj) {
    CopyOp::_bo = const_cast< IfcRelAssignsTasks * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssignsToActor(IfcRelAssignsToActor *obj) {
    CopyOp::_bo = const_cast< IfcRelAssignsToActor * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssignsToControl(IfcRelAssignsToControl *obj) {
    CopyOp::_bo = const_cast< IfcRelAssignsToControl * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *obj) {
    CopyOp::_bo = const_cast< IfcRelAssignsToGroup * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *obj) {
    CopyOp::_bo = const_cast< IfcRelAssignsToProcess * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *obj) {
    CopyOp::_bo = const_cast< IfcRelAssignsToProduct * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *obj) {
    CopyOp::_bo = const_cast< IfcRelAssignsToProjectOrder * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssignsToResource(IfcRelAssignsToResource *obj) {
    CopyOp::_bo = const_cast< IfcRelAssignsToResource * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssociates(IfcRelAssociates *obj) {
    CopyOp::_bo = const_cast< IfcRelAssociates * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *obj) {
    CopyOp::_bo = const_cast< IfcRelAssociatesAppliedValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *obj) {
    CopyOp::_bo = const_cast< IfcRelAssociatesApproval * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *obj) {
    CopyOp::_bo = const_cast< IfcRelAssociatesClassification * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *obj) {
    CopyOp::_bo = const_cast< IfcRelAssociatesConstraint * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *obj) {
    CopyOp::_bo = const_cast< IfcRelAssociatesDocument * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *obj) {
    CopyOp::_bo = const_cast< IfcRelAssociatesLibrary * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *obj) {
    CopyOp::_bo = const_cast< IfcRelAssociatesMaterial * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *obj) {
    CopyOp::_bo = const_cast< IfcRelAssociatesProfileProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelConnectsElements(IfcRelConnectsElements *obj) {
    CopyOp::_bo = const_cast< IfcRelConnectsElements * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *obj) {
    CopyOp::_bo = const_cast< IfcRelConnectsPathElements * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *obj) {
    CopyOp::_bo = const_cast< IfcRelConnectsPortToElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelConnectsPorts(IfcRelConnectsPorts *obj) {
    CopyOp::_bo = const_cast< IfcRelConnectsPorts * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *obj) {
    CopyOp::_bo = const_cast< IfcRelConnectsStructuralActivity * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *obj) {
    CopyOp::_bo = const_cast< IfcRelConnectsStructuralElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *obj) {
    CopyOp::_bo = const_cast< IfcRelConnectsStructuralMember * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *obj) {
    CopyOp::_bo = const_cast< IfcRelConnectsWithEccentricity * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *obj) {
    CopyOp::_bo = const_cast< IfcRelConnectsWithRealizingElements * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *obj) {
    CopyOp::_bo = const_cast< IfcRelContainedInSpatialStructure * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *obj) {
    CopyOp::_bo = const_cast< IfcRelCoversBldgElements * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelCoversSpaces(IfcRelCoversSpaces *obj) {
    CopyOp::_bo = const_cast< IfcRelCoversSpaces * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *obj) {
    CopyOp::_bo = const_cast< IfcRelDefinesByProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelDefinesByType(IfcRelDefinesByType *obj) {
    CopyOp::_bo = const_cast< IfcRelDefinesByType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelFillsElement(IfcRelFillsElement *obj) {
    CopyOp::_bo = const_cast< IfcRelFillsElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelFlowControlElements(IfcRelFlowControlElements *obj) {
    CopyOp::_bo = const_cast< IfcRelFlowControlElements * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *obj) {
    CopyOp::_bo = const_cast< IfcRelInteractionRequirements * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelNests(IfcRelNests *obj) {
    CopyOp::_bo = const_cast< IfcRelNests * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *obj) {
    CopyOp::_bo = const_cast< IfcRelOccupiesSpaces * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelOverridesProperties(IfcRelOverridesProperties *obj) {
    CopyOp::_bo = const_cast< IfcRelOverridesProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelProjectsElement(IfcRelProjectsElement *obj) {
    CopyOp::_bo = const_cast< IfcRelProjectsElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *obj) {
    CopyOp::_bo = const_cast< IfcRelReferencedInSpatialStructure * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *obj) {
    CopyOp::_bo = const_cast< IfcRelSchedulesCostItems * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelSequence(IfcRelSequence *obj) {
    CopyOp::_bo = const_cast< IfcRelSequence * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelServicesBuildings(IfcRelServicesBuildings *obj) {
    CopyOp::_bo = const_cast< IfcRelServicesBuildings * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *obj) {
    CopyOp::_bo = const_cast< IfcRelSpaceBoundary * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelVoidsElement(IfcRelVoidsElement *obj) {
    CopyOp::_bo = const_cast< IfcRelVoidsElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRelaxation(IfcRelaxation *obj) {
    CopyOp::_bo = const_cast< IfcRelaxation * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRepresentation(IfcRepresentation *obj) {
    CopyOp::_bo = const_cast< IfcRepresentation * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRepresentationContext(IfcRepresentationContext *obj) {
    CopyOp::_bo = const_cast< IfcRepresentationContext * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRepresentationMap(IfcRepresentationMap *obj) {
    CopyOp::_bo = const_cast< IfcRepresentationMap * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *obj) {
    CopyOp::_bo = const_cast< IfcRevolvedAreaSolid * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *obj) {
    CopyOp::_bo = const_cast< IfcRibPlateProfileProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRightCircularCone(IfcRightCircularCone *obj) {
    CopyOp::_bo = const_cast< IfcRightCircularCone * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRightCircularCylinder(IfcRightCircularCylinder *obj) {
    CopyOp::_bo = const_cast< IfcRightCircularCylinder * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRoof(IfcRoof *obj) {
    CopyOp::_bo = const_cast< IfcRoof * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *obj) {
    CopyOp::_bo = const_cast< IfcRoundedEdgeFeature * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcRoundedRectangleProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSIUnit(IfcSIUnit *obj) {
    CopyOp::_bo = const_cast< IfcSIUnit * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *obj) {
    CopyOp::_bo = const_cast< IfcSanitaryTerminalType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcScheduleTimeControl(IfcScheduleTimeControl *obj) {
    CopyOp::_bo = const_cast< IfcScheduleTimeControl * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSectionProperties(IfcSectionProperties *obj) {
    CopyOp::_bo = const_cast< IfcSectionProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *obj) {
    CopyOp::_bo = const_cast< IfcSectionReinforcementProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSectionedSpine(IfcSectionedSpine *obj) {
    CopyOp::_bo = const_cast< IfcSectionedSpine * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSensorType(IfcSensorType *obj) {
    CopyOp::_bo = const_cast< IfcSensorType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcServiceLife(IfcServiceLife *obj) {
    CopyOp::_bo = const_cast< IfcServiceLife * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcServiceLifeFactor(IfcServiceLifeFactor *obj) {
    CopyOp::_bo = const_cast< IfcServiceLifeFactor * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcShapeAspect(IfcShapeAspect *obj) {
    CopyOp::_bo = const_cast< IfcShapeAspect * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcShapeRepresentation(IfcShapeRepresentation *obj) {
    CopyOp::_bo = const_cast< IfcShapeRepresentation * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *obj) {
    CopyOp::_bo = const_cast< IfcShellBasedSurfaceModel * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSite(IfcSite *obj) {
    CopyOp::_bo = const_cast< IfcSite * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSlab(IfcSlab *obj) {
    CopyOp::_bo = const_cast< IfcSlab * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSlabType(IfcSlabType *obj) {
    CopyOp::_bo = const_cast< IfcSlabType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *obj) {
    CopyOp::_bo = const_cast< IfcSlippageConnectionCondition * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSoundProperties(IfcSoundProperties *obj) {
    CopyOp::_bo = const_cast< IfcSoundProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSoundValue(IfcSoundValue *obj) {
    CopyOp::_bo = const_cast< IfcSoundValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSpace(IfcSpace *obj) {
    CopyOp::_bo = const_cast< IfcSpace * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSpaceHeaterType(IfcSpaceHeaterType *obj) {
    CopyOp::_bo = const_cast< IfcSpaceHeaterType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSpaceProgram(IfcSpaceProgram *obj) {
    CopyOp::_bo = const_cast< IfcSpaceProgram * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *obj) {
    CopyOp::_bo = const_cast< IfcSpaceThermalLoadProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSpaceType(IfcSpaceType *obj) {
    CopyOp::_bo = const_cast< IfcSpaceType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSphere(IfcSphere *obj) {
    CopyOp::_bo = const_cast< IfcSphere * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStackTerminalType(IfcStackTerminalType *obj) {
    CopyOp::_bo = const_cast< IfcStackTerminalType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStair(IfcStair *obj) {
    CopyOp::_bo = const_cast< IfcStair * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStairFlight(IfcStairFlight *obj) {
    CopyOp::_bo = const_cast< IfcStairFlight * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStairFlightType(IfcStairFlightType *obj) {
    CopyOp::_bo = const_cast< IfcStairFlightType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *obj) {
    CopyOp::_bo = const_cast< IfcStructuralAnalysisModel * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *obj) {
    CopyOp::_bo = const_cast< IfcStructuralCurveConnection * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralCurveMember(IfcStructuralCurveMember *obj) {
    CopyOp::_bo = const_cast< IfcStructuralCurveMember * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *obj) {
    CopyOp::_bo = const_cast< IfcStructuralCurveMemberVarying * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralLinearAction(IfcStructuralLinearAction *obj) {
    CopyOp::_bo = const_cast< IfcStructuralLinearAction * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *obj) {
    CopyOp::_bo = const_cast< IfcStructuralLinearActionVarying * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *obj) {
    CopyOp::_bo = const_cast< IfcStructuralLoadGroup * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *obj) {
    CopyOp::_bo = const_cast< IfcStructuralLoadLinearForce * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *obj) {
    CopyOp::_bo = const_cast< IfcStructuralLoadPlanarForce * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *obj) {
    CopyOp::_bo = const_cast< IfcStructuralLoadSingleDisplacement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *obj) {
    CopyOp::_bo = const_cast< IfcStructuralLoadSingleDisplacementDistortion * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *obj) {
    CopyOp::_bo = const_cast< IfcStructuralLoadSingleForce * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *obj) {
    CopyOp::_bo = const_cast< IfcStructuralLoadSingleForceWarping * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *obj) {
    CopyOp::_bo = const_cast< IfcStructuralLoadTemperature * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *obj) {
    CopyOp::_bo = const_cast< IfcStructuralPlanarAction * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *obj) {
    CopyOp::_bo = const_cast< IfcStructuralPlanarActionVarying * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralPointAction(IfcStructuralPointAction *obj) {
    CopyOp::_bo = const_cast< IfcStructuralPointAction * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralPointConnection(IfcStructuralPointConnection *obj) {
    CopyOp::_bo = const_cast< IfcStructuralPointConnection * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralPointReaction(IfcStructuralPointReaction *obj) {
    CopyOp::_bo = const_cast< IfcStructuralPointReaction * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *obj) {
    CopyOp::_bo = const_cast< IfcStructuralProfileProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralResultGroup(IfcStructuralResultGroup *obj) {
    CopyOp::_bo = const_cast< IfcStructuralResultGroup * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *obj) {
    CopyOp::_bo = const_cast< IfcStructuralSteelProfileProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *obj) {
    CopyOp::_bo = const_cast< IfcStructuralSurfaceConnection * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *obj) {
    CopyOp::_bo = const_cast< IfcStructuralSurfaceMember * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *obj) {
    CopyOp::_bo = const_cast< IfcStructuralSurfaceMemberVarying * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *obj) {
    CopyOp::_bo = const_cast< IfcStructuredDimensionCallout * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStyledItem(IfcStyledItem *obj) {
    CopyOp::_bo = const_cast< IfcStyledItem * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcStyledRepresentation(IfcStyledRepresentation *obj) {
    CopyOp::_bo = const_cast< IfcStyledRepresentation * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSubContractResource(IfcSubContractResource *obj) {
    CopyOp::_bo = const_cast< IfcSubContractResource * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSubedge(IfcSubedge *obj) {
    CopyOp::_bo = const_cast< IfcSubedge * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *obj) {
    CopyOp::_bo = const_cast< IfcSurfaceCurveSweptAreaSolid * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *obj) {
    CopyOp::_bo = const_cast< IfcSurfaceOfLinearExtrusion * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *obj) {
    CopyOp::_bo = const_cast< IfcSurfaceOfRevolution * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSurfaceStyle(IfcSurfaceStyle *obj) {
    CopyOp::_bo = const_cast< IfcSurfaceStyle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *obj) {
    CopyOp::_bo = const_cast< IfcSurfaceStyleLighting * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *obj) {
    CopyOp::_bo = const_cast< IfcSurfaceStyleRefraction * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *obj) {
    CopyOp::_bo = const_cast< IfcSurfaceStyleRendering * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *obj) {
    CopyOp::_bo = const_cast< IfcSurfaceStyleShading * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *obj) {
    CopyOp::_bo = const_cast< IfcSurfaceStyleWithTextures * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSweptDiskSolid(IfcSweptDiskSolid *obj) {
    CopyOp::_bo = const_cast< IfcSweptDiskSolid * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *obj) {
    CopyOp::_bo = const_cast< IfcSwitchingDeviceType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSymbolStyle(IfcSymbolStyle *obj) {
    CopyOp::_bo = const_cast< IfcSymbolStyle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSystem(IfcSystem *obj) {
    CopyOp::_bo = const_cast< IfcSystem * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *obj) {
    CopyOp::_bo = const_cast< IfcSystemFurnitureElementType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTShapeProfileDef(IfcTShapeProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcTShapeProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTable(IfcTable *obj) {
    CopyOp::_bo = const_cast< IfcTable * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTableRow(IfcTableRow *obj) {
    CopyOp::_bo = const_cast< IfcTableRow * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTankType(IfcTankType *obj) {
    CopyOp::_bo = const_cast< IfcTankType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTask(IfcTask *obj) {
    CopyOp::_bo = const_cast< IfcTask * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTelecomAddress(IfcTelecomAddress *obj) {
    CopyOp::_bo = const_cast< IfcTelecomAddress * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTendon(IfcTendon *obj) {
    CopyOp::_bo = const_cast< IfcTendon * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTendonAnchor(IfcTendonAnchor *obj) {
    CopyOp::_bo = const_cast< IfcTendonAnchor * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTerminatorSymbol(IfcTerminatorSymbol *obj) {
    CopyOp::_bo = const_cast< IfcTerminatorSymbol * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTextLiteral(IfcTextLiteral *obj) {
    CopyOp::_bo = const_cast< IfcTextLiteral * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *obj) {
    CopyOp::_bo = const_cast< IfcTextLiteralWithExtent * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTextStyle(IfcTextStyle *obj) {
    CopyOp::_bo = const_cast< IfcTextStyle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTextStyleFontModel(IfcTextStyleFontModel *obj) {
    CopyOp::_bo = const_cast< IfcTextStyleFontModel * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *obj) {
    CopyOp::_bo = const_cast< IfcTextStyleForDefinedFont * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTextStyleTextModel(IfcTextStyleTextModel *obj) {
    CopyOp::_bo = const_cast< IfcTextStyleTextModel * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *obj) {
    CopyOp::_bo = const_cast< IfcTextStyleWithBoxCharacteristics * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *obj) {
    CopyOp::_bo = const_cast< IfcTextureCoordinateGenerator * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTextureMap(IfcTextureMap *obj) {
    CopyOp::_bo = const_cast< IfcTextureMap * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTextureVertex(IfcTextureVertex *obj) {
    CopyOp::_bo = const_cast< IfcTextureVertex * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *obj) {
    CopyOp::_bo = const_cast< IfcThermalMaterialProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *obj) {
    CopyOp::_bo = const_cast< IfcTimeSeriesReferenceRelationship * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *obj) {
    CopyOp::_bo = const_cast< IfcTimeSeriesSchedule * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTimeSeriesValue(IfcTimeSeriesValue *obj) {
    CopyOp::_bo = const_cast< IfcTimeSeriesValue * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTopologyRepresentation(IfcTopologyRepresentation *obj) {
    CopyOp::_bo = const_cast< IfcTopologyRepresentation * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTransformerType(IfcTransformerType *obj) {
    CopyOp::_bo = const_cast< IfcTransformerType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTransportElement(IfcTransportElement *obj) {
    CopyOp::_bo = const_cast< IfcTransportElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTransportElementType(IfcTransportElementType *obj) {
    CopyOp::_bo = const_cast< IfcTransportElementType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcTrapeziumProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTrimmedCurve(IfcTrimmedCurve *obj) {
    CopyOp::_bo = const_cast< IfcTrimmedCurve * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTubeBundleType(IfcTubeBundleType *obj) {
    CopyOp::_bo = const_cast< IfcTubeBundleType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *obj) {
    CopyOp::_bo = const_cast< IfcTwoDirectionRepeatFactor * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTypeObject(IfcTypeObject *obj) {
    CopyOp::_bo = const_cast< IfcTypeObject * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcTypeProduct(IfcTypeProduct *obj) {
    CopyOp::_bo = const_cast< IfcTypeProduct * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcUShapeProfileDef(IfcUShapeProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcUShapeProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcUnitAssignment(IfcUnitAssignment *obj) {
    CopyOp::_bo = const_cast< IfcUnitAssignment * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *obj) {
    CopyOp::_bo = const_cast< IfcUnitaryEquipmentType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcValveType(IfcValveType *obj) {
    CopyOp::_bo = const_cast< IfcValveType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcVector(IfcVector *obj) {
    CopyOp::_bo = const_cast< IfcVector * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcVertex(IfcVertex *obj) {
    CopyOp::_bo = const_cast< IfcVertex * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *obj) {
    CopyOp::_bo = const_cast< IfcVertexBasedTextureMap * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcVertexLoop(IfcVertexLoop *obj) {
    CopyOp::_bo = const_cast< IfcVertexLoop * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcVertexPoint(IfcVertexPoint *obj) {
    CopyOp::_bo = const_cast< IfcVertexPoint * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *obj) {
    CopyOp::_bo = const_cast< IfcVibrationIsolatorType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcVirtualElement(IfcVirtualElement *obj) {
    CopyOp::_bo = const_cast< IfcVirtualElement * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *obj) {
    CopyOp::_bo = const_cast< IfcVirtualGridIntersection * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcWall(IfcWall *obj) {
    CopyOp::_bo = const_cast< IfcWall * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcWallStandardCase(IfcWallStandardCase *obj) {
    CopyOp::_bo = const_cast< IfcWallStandardCase * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcWallType(IfcWallType *obj) {
    CopyOp::_bo = const_cast< IfcWallType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcWasteTerminalType(IfcWasteTerminalType *obj) {
    CopyOp::_bo = const_cast< IfcWasteTerminalType * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcWaterProperties(IfcWaterProperties *obj) {
    CopyOp::_bo = const_cast< IfcWaterProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcWindow(IfcWindow *obj) {
    CopyOp::_bo = const_cast< IfcWindow * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcWindowLiningProperties(IfcWindowLiningProperties *obj) {
    CopyOp::_bo = const_cast< IfcWindowLiningProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcWindowPanelProperties(IfcWindowPanelProperties *obj) {
    CopyOp::_bo = const_cast< IfcWindowPanelProperties * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcWindowStyle(IfcWindowStyle *obj) {
    CopyOp::_bo = const_cast< IfcWindowStyle * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcWorkPlan(IfcWorkPlan *obj) {
    CopyOp::_bo = const_cast< IfcWorkPlan * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcWorkSchedule(IfcWorkSchedule *obj) {
    CopyOp::_bo = const_cast< IfcWorkSchedule * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcZShapeProfileDef(IfcZShapeProfileDef *obj) {
    CopyOp::_bo = const_cast< IfcZShapeProfileDef * > (obj);
    return true;
}

bool ShallowCopyOp::visitIfcZone(IfcZone *obj) {
    CopyOp::_bo = const_cast< IfcZone * > (obj);
    return true;
}

ReparentCopyOp::ReparentCopyOp(ExpressDataSet *dataset) {
    _dataset = dataset;
}

ReparentCopyOp::~ReparentCopyOp() {
}

ExpressDataSet *ReparentCopyOp::getExpressDataSet() const {
    return _dataset;
}

bool ReparentCopyOp::visitIfc2DCompositeCurve(Ifc2DCompositeCurve *obj) {
    if (obj) {
        Ifc2DCompositeCurve *clone = static_cast< Ifc2DCompositeCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfc2DCompositeCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcActionRequest(IfcActionRequest *obj) {
    if (obj) {
        IfcActionRequest *clone = static_cast< IfcActionRequest * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcActionRequest(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcActor(IfcActor *obj) {
    if (obj) {
        IfcActor *clone = static_cast< IfcActor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcActor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcActorRole(IfcActorRole *obj) {
    if (obj) {
        IfcActorRole *clone = static_cast< IfcActorRole * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcActorRole(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcActuatorType(IfcActuatorType *obj) {
    if (obj) {
        IfcActuatorType *clone = static_cast< IfcActuatorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcActuatorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *obj) {
    if (obj) {
        IfcAirTerminalBoxType *clone = static_cast< IfcAirTerminalBoxType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAirTerminalBoxType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAirTerminalType(IfcAirTerminalType *obj) {
    if (obj) {
        IfcAirTerminalType *clone = static_cast< IfcAirTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAirTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *obj) {
    if (obj) {
        IfcAirToAirHeatRecoveryType *clone = static_cast< IfcAirToAirHeatRecoveryType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAirToAirHeatRecoveryType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAlarmType(IfcAlarmType *obj) {
    if (obj) {
        IfcAlarmType *clone = static_cast< IfcAlarmType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAlarmType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAngularDimension(IfcAngularDimension *obj) {
    if (obj) {
        IfcAngularDimension *clone = static_cast< IfcAngularDimension * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAngularDimension(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAnnotation(IfcAnnotation *obj) {
    if (obj) {
        IfcAnnotation *clone = static_cast< IfcAnnotation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAnnotation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *obj) {
    if (obj) {
        IfcAnnotationCurveOccurrence *clone = static_cast< IfcAnnotationCurveOccurrence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAnnotationCurveOccurrence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAnnotationFillArea(IfcAnnotationFillArea *obj) {
    if (obj) {
        IfcAnnotationFillArea *clone = static_cast< IfcAnnotationFillArea * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAnnotationFillArea(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *obj) {
    if (obj) {
        IfcAnnotationFillAreaOccurrence *clone = static_cast< IfcAnnotationFillAreaOccurrence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAnnotationFillAreaOccurrence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAnnotationSurface(IfcAnnotationSurface *obj) {
    if (obj) {
        IfcAnnotationSurface *clone = static_cast< IfcAnnotationSurface * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAnnotationSurface(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *obj) {
    if (obj) {
        IfcAnnotationSurfaceOccurrence *clone = static_cast< IfcAnnotationSurfaceOccurrence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAnnotationSurfaceOccurrence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *obj) {
    if (obj) {
        IfcAnnotationSymbolOccurrence *clone = static_cast< IfcAnnotationSymbolOccurrence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAnnotationSymbolOccurrence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *obj) {
    if (obj) {
        IfcAnnotationTextOccurrence *clone = static_cast< IfcAnnotationTextOccurrence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAnnotationTextOccurrence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcApplication(IfcApplication *obj) {
    if (obj) {
        IfcApplication *clone = static_cast< IfcApplication * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcApplication(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *obj) {
    if (obj) {
        IfcAppliedValueRelationship *clone = static_cast< IfcAppliedValueRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAppliedValueRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcApproval(IfcApproval *obj) {
    if (obj) {
        IfcApproval *clone = static_cast< IfcApproval * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcApproval(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *obj) {
    if (obj) {
        IfcApprovalActorRelationship *clone = static_cast< IfcApprovalActorRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcApprovalActorRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *obj) {
    if (obj) {
        IfcApprovalPropertyRelationship *clone = static_cast< IfcApprovalPropertyRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcApprovalPropertyRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcApprovalRelationship(IfcApprovalRelationship *obj) {
    if (obj) {
        IfcApprovalRelationship *clone = static_cast< IfcApprovalRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcApprovalRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *obj) {
    if (obj) {
        IfcArbitraryClosedProfileDef *clone = static_cast< IfcArbitraryClosedProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcArbitraryClosedProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *obj) {
    if (obj) {
        IfcArbitraryOpenProfileDef *clone = static_cast< IfcArbitraryOpenProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcArbitraryOpenProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *obj) {
    if (obj) {
        IfcArbitraryProfileDefWithVoids *clone = static_cast< IfcArbitraryProfileDefWithVoids * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcArbitraryProfileDefWithVoids(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAsset(IfcAsset *obj) {
    if (obj) {
        IfcAsset *clone = static_cast< IfcAsset * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAsset(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *obj) {
    if (obj) {
        IfcAsymmetricIShapeProfileDef *clone = static_cast< IfcAsymmetricIShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAsymmetricIShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAxis1Placement(IfcAxis1Placement *obj) {
    if (obj) {
        IfcAxis1Placement *clone = static_cast< IfcAxis1Placement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAxis1Placement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAxis2Placement2D(IfcAxis2Placement2D *obj) {
    if (obj) {
        IfcAxis2Placement2D *clone = static_cast< IfcAxis2Placement2D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAxis2Placement2D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcAxis2Placement3D(IfcAxis2Placement3D *obj) {
    if (obj) {
        IfcAxis2Placement3D *clone = static_cast< IfcAxis2Placement3D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcAxis2Placement3D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBeam(IfcBeam *obj) {
    if (obj) {
        IfcBeam *clone = static_cast< IfcBeam * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBeam(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBeamType(IfcBeamType *obj) {
    if (obj) {
        IfcBeamType *clone = static_cast< IfcBeamType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBeamType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBezierCurve(IfcBezierCurve *obj) {
    if (obj) {
        IfcBezierCurve *clone = static_cast< IfcBezierCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBezierCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBlobTexture(IfcBlobTexture *obj) {
    if (obj) {
        IfcBlobTexture *clone = static_cast< IfcBlobTexture * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBlobTexture(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBlock(IfcBlock *obj) {
    if (obj) {
        IfcBlock *clone = static_cast< IfcBlock * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBlock(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBoilerType(IfcBoilerType *obj) {
    if (obj) {
        IfcBoilerType *clone = static_cast< IfcBoilerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBoilerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBooleanClippingResult(IfcBooleanClippingResult *obj) {
    if (obj) {
        IfcBooleanClippingResult *clone = static_cast< IfcBooleanClippingResult * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBooleanClippingResult(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBooleanResult(IfcBooleanResult *obj) {
    if (obj) {
        IfcBooleanResult *clone = static_cast< IfcBooleanResult * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBooleanResult(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *obj) {
    if (obj) {
        IfcBoundaryEdgeCondition *clone = static_cast< IfcBoundaryEdgeCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBoundaryEdgeCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *obj) {
    if (obj) {
        IfcBoundaryFaceCondition *clone = static_cast< IfcBoundaryFaceCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBoundaryFaceCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *obj) {
    if (obj) {
        IfcBoundaryNodeCondition *clone = static_cast< IfcBoundaryNodeCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBoundaryNodeCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *obj) {
    if (obj) {
        IfcBoundaryNodeConditionWarping *clone = static_cast< IfcBoundaryNodeConditionWarping * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBoundaryNodeConditionWarping(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBoundedSurface(IfcBoundedSurface *obj) {
    if (obj) {
        IfcBoundedSurface *clone = static_cast< IfcBoundedSurface * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBoundedSurface(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBoundingBox(IfcBoundingBox *obj) {
    if (obj) {
        IfcBoundingBox *clone = static_cast< IfcBoundingBox * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBoundingBox(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *obj) {
    if (obj) {
        IfcBoxedHalfSpace *clone = static_cast< IfcBoxedHalfSpace * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBoxedHalfSpace(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBuilding(IfcBuilding *obj) {
    if (obj) {
        IfcBuilding *clone = static_cast< IfcBuilding * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBuilding(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBuildingElementPart(IfcBuildingElementPart *obj) {
    if (obj) {
        IfcBuildingElementPart *clone = static_cast< IfcBuildingElementPart * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBuildingElementPart(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBuildingElementProxy(IfcBuildingElementProxy *obj) {
    if (obj) {
        IfcBuildingElementProxy *clone = static_cast< IfcBuildingElementProxy * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBuildingElementProxy(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *obj) {
    if (obj) {
        IfcBuildingElementProxyType *clone = static_cast< IfcBuildingElementProxyType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBuildingElementProxyType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcBuildingStorey(IfcBuildingStorey *obj) {
    if (obj) {
        IfcBuildingStorey *clone = static_cast< IfcBuildingStorey * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcBuildingStorey(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCShapeProfileDef(IfcCShapeProfileDef *obj) {
    if (obj) {
        IfcCShapeProfileDef *clone = static_cast< IfcCShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *obj) {
    if (obj) {
        IfcCableCarrierFittingType *clone = static_cast< IfcCableCarrierFittingType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCableCarrierFittingType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *obj) {
    if (obj) {
        IfcCableCarrierSegmentType *clone = static_cast< IfcCableCarrierSegmentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCableCarrierSegmentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCableSegmentType(IfcCableSegmentType *obj) {
    if (obj) {
        IfcCableSegmentType *clone = static_cast< IfcCableSegmentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCableSegmentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCalendarDate(IfcCalendarDate *obj) {
    if (obj) {
        IfcCalendarDate *clone = static_cast< IfcCalendarDate * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCalendarDate(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCartesianPoint(IfcCartesianPoint *obj) {
    if (obj) {
        IfcCartesianPoint *clone = static_cast< IfcCartesianPoint * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCartesianPoint(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *obj) {
    if (obj) {
        IfcCartesianTransformationOperator2D *clone = static_cast< IfcCartesianTransformationOperator2D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCartesianTransformationOperator2D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *obj) {
    if (obj) {
        IfcCartesianTransformationOperator2DnonUniform *clone = static_cast< IfcCartesianTransformationOperator2DnonUniform * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCartesianTransformationOperator2DnonUniform(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *obj) {
    if (obj) {
        IfcCartesianTransformationOperator3D *clone = static_cast< IfcCartesianTransformationOperator3D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCartesianTransformationOperator3D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *obj) {
    if (obj) {
        IfcCartesianTransformationOperator3DnonUniform *clone = static_cast< IfcCartesianTransformationOperator3DnonUniform * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCartesianTransformationOperator3DnonUniform(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *obj) {
    if (obj) {
        IfcCenterLineProfileDef *clone = static_cast< IfcCenterLineProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCenterLineProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *obj) {
    if (obj) {
        IfcChamferEdgeFeature *clone = static_cast< IfcChamferEdgeFeature * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcChamferEdgeFeature(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcChillerType(IfcChillerType *obj) {
    if (obj) {
        IfcChillerType *clone = static_cast< IfcChillerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcChillerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCircle(IfcCircle *obj) {
    if (obj) {
        IfcCircle *clone = static_cast< IfcCircle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCircle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *obj) {
    if (obj) {
        IfcCircleHollowProfileDef *clone = static_cast< IfcCircleHollowProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCircleHollowProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCircleProfileDef(IfcCircleProfileDef *obj) {
    if (obj) {
        IfcCircleProfileDef *clone = static_cast< IfcCircleProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCircleProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcClassification(IfcClassification *obj) {
    if (obj) {
        IfcClassification *clone = static_cast< IfcClassification * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcClassification(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcClassificationItem(IfcClassificationItem *obj) {
    if (obj) {
        IfcClassificationItem *clone = static_cast< IfcClassificationItem * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcClassificationItem(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *obj) {
    if (obj) {
        IfcClassificationItemRelationship *clone = static_cast< IfcClassificationItemRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcClassificationItemRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcClassificationNotation(IfcClassificationNotation *obj) {
    if (obj) {
        IfcClassificationNotation *clone = static_cast< IfcClassificationNotation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcClassificationNotation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *obj) {
    if (obj) {
        IfcClassificationNotationFacet *clone = static_cast< IfcClassificationNotationFacet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcClassificationNotationFacet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcClassificationReference(IfcClassificationReference *obj) {
    if (obj) {
        IfcClassificationReference *clone = static_cast< IfcClassificationReference * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcClassificationReference(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcClosedShell(IfcClosedShell *obj) {
    if (obj) {
        IfcClosedShell *clone = static_cast< IfcClosedShell * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcClosedShell(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCoilType(IfcCoilType *obj) {
    if (obj) {
        IfcCoilType *clone = static_cast< IfcCoilType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCoilType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcColourRgb(IfcColourRgb *obj) {
    if (obj) {
        IfcColourRgb *clone = static_cast< IfcColourRgb * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcColourRgb(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcColumn(IfcColumn *obj) {
    if (obj) {
        IfcColumn *clone = static_cast< IfcColumn * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcColumn(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcColumnType(IfcColumnType *obj) {
    if (obj) {
        IfcColumnType *clone = static_cast< IfcColumnType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcColumnType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcComplexProperty(IfcComplexProperty *obj) {
    if (obj) {
        IfcComplexProperty *clone = static_cast< IfcComplexProperty * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcComplexProperty(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCompositeCurve(IfcCompositeCurve *obj) {
    if (obj) {
        IfcCompositeCurve *clone = static_cast< IfcCompositeCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCompositeCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *obj) {
    if (obj) {
        IfcCompositeCurveSegment *clone = static_cast< IfcCompositeCurveSegment * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCompositeCurveSegment(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCompositeProfileDef(IfcCompositeProfileDef *obj) {
    if (obj) {
        IfcCompositeProfileDef *clone = static_cast< IfcCompositeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCompositeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCompressorType(IfcCompressorType *obj) {
    if (obj) {
        IfcCompressorType *clone = static_cast< IfcCompressorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCompressorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCondenserType(IfcCondenserType *obj) {
    if (obj) {
        IfcCondenserType *clone = static_cast< IfcCondenserType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCondenserType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCondition(IfcCondition *obj) {
    if (obj) {
        IfcCondition *clone = static_cast< IfcCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConditionCriterion(IfcConditionCriterion *obj) {
    if (obj) {
        IfcConditionCriterion *clone = static_cast< IfcConditionCriterion * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConditionCriterion(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConnectedFaceSet(IfcConnectedFaceSet *obj) {
    if (obj) {
        IfcConnectedFaceSet *clone = static_cast< IfcConnectedFaceSet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConnectedFaceSet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *obj) {
    if (obj) {
        IfcConnectionCurveGeometry *clone = static_cast< IfcConnectionCurveGeometry * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConnectionCurveGeometry(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *obj) {
    if (obj) {
        IfcConnectionPointEccentricity *clone = static_cast< IfcConnectionPointEccentricity * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConnectionPointEccentricity(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *obj) {
    if (obj) {
        IfcConnectionPointGeometry *clone = static_cast< IfcConnectionPointGeometry * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConnectionPointGeometry(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *obj) {
    if (obj) {
        IfcConnectionPortGeometry *clone = static_cast< IfcConnectionPortGeometry * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConnectionPortGeometry(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *obj) {
    if (obj) {
        IfcConnectionSurfaceGeometry *clone = static_cast< IfcConnectionSurfaceGeometry * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConnectionSurfaceGeometry(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *obj) {
    if (obj) {
        IfcConstraintAggregationRelationship *clone = static_cast< IfcConstraintAggregationRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConstraintAggregationRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *obj) {
    if (obj) {
        IfcConstraintClassificationRelationship *clone = static_cast< IfcConstraintClassificationRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConstraintClassificationRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConstraintRelationship(IfcConstraintRelationship *obj) {
    if (obj) {
        IfcConstraintRelationship *clone = static_cast< IfcConstraintRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConstraintRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *obj) {
    if (obj) {
        IfcConstructionEquipmentResource *clone = static_cast< IfcConstructionEquipmentResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConstructionEquipmentResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *obj) {
    if (obj) {
        IfcConstructionMaterialResource *clone = static_cast< IfcConstructionMaterialResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConstructionMaterialResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConstructionProductResource(IfcConstructionProductResource *obj) {
    if (obj) {
        IfcConstructionProductResource *clone = static_cast< IfcConstructionProductResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConstructionProductResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcContextDependentUnit(IfcContextDependentUnit *obj) {
    if (obj) {
        IfcContextDependentUnit *clone = static_cast< IfcContextDependentUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcContextDependentUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcControllerType(IfcControllerType *obj) {
    if (obj) {
        IfcControllerType *clone = static_cast< IfcControllerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcControllerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcConversionBasedUnit(IfcConversionBasedUnit *obj) {
    if (obj) {
        IfcConversionBasedUnit *clone = static_cast< IfcConversionBasedUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcConversionBasedUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCooledBeamType(IfcCooledBeamType *obj) {
    if (obj) {
        IfcCooledBeamType *clone = static_cast< IfcCooledBeamType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCooledBeamType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCoolingTowerType(IfcCoolingTowerType *obj) {
    if (obj) {
        IfcCoolingTowerType *clone = static_cast< IfcCoolingTowerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCoolingTowerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *obj) {
    if (obj) {
        IfcCoordinatedUniversalTimeOffset *clone = static_cast< IfcCoordinatedUniversalTimeOffset * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCoordinatedUniversalTimeOffset(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCostItem(IfcCostItem *obj) {
    if (obj) {
        IfcCostItem *clone = static_cast< IfcCostItem * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCostItem(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCostSchedule(IfcCostSchedule *obj) {
    if (obj) {
        IfcCostSchedule *clone = static_cast< IfcCostSchedule * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCostSchedule(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCostValue(IfcCostValue *obj) {
    if (obj) {
        IfcCostValue *clone = static_cast< IfcCostValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCostValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCovering(IfcCovering *obj) {
    if (obj) {
        IfcCovering *clone = static_cast< IfcCovering * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCovering(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCoveringType(IfcCoveringType *obj) {
    if (obj) {
        IfcCoveringType *clone = static_cast< IfcCoveringType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCoveringType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *obj) {
    if (obj) {
        IfcCraneRailAShapeProfileDef *clone = static_cast< IfcCraneRailAShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCraneRailAShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *obj) {
    if (obj) {
        IfcCraneRailFShapeProfileDef *clone = static_cast< IfcCraneRailFShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCraneRailFShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCrewResource(IfcCrewResource *obj) {
    if (obj) {
        IfcCrewResource *clone = static_cast< IfcCrewResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCrewResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCsgSolid(IfcCsgSolid *obj) {
    if (obj) {
        IfcCsgSolid *clone = static_cast< IfcCsgSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCsgSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCurrencyRelationship(IfcCurrencyRelationship *obj) {
    if (obj) {
        IfcCurrencyRelationship *clone = static_cast< IfcCurrencyRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCurrencyRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCurtainWall(IfcCurtainWall *obj) {
    if (obj) {
        IfcCurtainWall *clone = static_cast< IfcCurtainWall * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCurtainWall(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCurtainWallType(IfcCurtainWallType *obj) {
    if (obj) {
        IfcCurtainWallType *clone = static_cast< IfcCurtainWallType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCurtainWallType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *obj) {
    if (obj) {
        IfcCurveBoundedPlane *clone = static_cast< IfcCurveBoundedPlane * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCurveBoundedPlane(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCurveStyle(IfcCurveStyle *obj) {
    if (obj) {
        IfcCurveStyle *clone = static_cast< IfcCurveStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCurveStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCurveStyleFont(IfcCurveStyleFont *obj) {
    if (obj) {
        IfcCurveStyleFont *clone = static_cast< IfcCurveStyleFont * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCurveStyleFont(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *obj) {
    if (obj) {
        IfcCurveStyleFontAndScaling *clone = static_cast< IfcCurveStyleFontAndScaling * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCurveStyleFontAndScaling(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *obj) {
    if (obj) {
        IfcCurveStyleFontPattern *clone = static_cast< IfcCurveStyleFontPattern * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcCurveStyleFontPattern(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDamperType(IfcDamperType *obj) {
    if (obj) {
        IfcDamperType *clone = static_cast< IfcDamperType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDamperType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDateAndTime(IfcDateAndTime *obj) {
    if (obj) {
        IfcDateAndTime *clone = static_cast< IfcDateAndTime * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDateAndTime(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDefinedSymbol(IfcDefinedSymbol *obj) {
    if (obj) {
        IfcDefinedSymbol *clone = static_cast< IfcDefinedSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDefinedSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDerivedProfileDef(IfcDerivedProfileDef *obj) {
    if (obj) {
        IfcDerivedProfileDef *clone = static_cast< IfcDerivedProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDerivedProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDerivedUnit(IfcDerivedUnit *obj) {
    if (obj) {
        IfcDerivedUnit *clone = static_cast< IfcDerivedUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDerivedUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDerivedUnitElement(IfcDerivedUnitElement *obj) {
    if (obj) {
        IfcDerivedUnitElement *clone = static_cast< IfcDerivedUnitElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDerivedUnitElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDiameterDimension(IfcDiameterDimension *obj) {
    if (obj) {
        IfcDiameterDimension *clone = static_cast< IfcDiameterDimension * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDiameterDimension(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *obj) {
    if (obj) {
        IfcDimensionCalloutRelationship *clone = static_cast< IfcDimensionCalloutRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDimensionCalloutRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDimensionCurve(IfcDimensionCurve *obj) {
    if (obj) {
        IfcDimensionCurve *clone = static_cast< IfcDimensionCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDimensionCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *obj) {
    if (obj) {
        IfcDimensionCurveDirectedCallout *clone = static_cast< IfcDimensionCurveDirectedCallout * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDimensionCurveDirectedCallout(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *obj) {
    if (obj) {
        IfcDimensionCurveTerminator *clone = static_cast< IfcDimensionCurveTerminator * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDimensionCurveTerminator(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDimensionPair(IfcDimensionPair *obj) {
    if (obj) {
        IfcDimensionPair *clone = static_cast< IfcDimensionPair * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDimensionPair(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDimensionalExponents(IfcDimensionalExponents *obj) {
    if (obj) {
        IfcDimensionalExponents *clone = static_cast< IfcDimensionalExponents * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDimensionalExponents(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDirection(IfcDirection *obj) {
    if (obj) {
        IfcDirection *clone = static_cast< IfcDirection * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDirection(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDiscreteAccessory(IfcDiscreteAccessory *obj) {
    if (obj) {
        IfcDiscreteAccessory *clone = static_cast< IfcDiscreteAccessory * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDiscreteAccessory(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *obj) {
    if (obj) {
        IfcDiscreteAccessoryType *clone = static_cast< IfcDiscreteAccessoryType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDiscreteAccessoryType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDistributionChamberElement(IfcDistributionChamberElement *obj) {
    if (obj) {
        IfcDistributionChamberElement *clone = static_cast< IfcDistributionChamberElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDistributionChamberElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *obj) {
    if (obj) {
        IfcDistributionChamberElementType *clone = static_cast< IfcDistributionChamberElementType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDistributionChamberElementType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDistributionControlElement(IfcDistributionControlElement *obj) {
    if (obj) {
        IfcDistributionControlElement *clone = static_cast< IfcDistributionControlElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDistributionControlElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDistributionElement(IfcDistributionElement *obj) {
    if (obj) {
        IfcDistributionElement *clone = static_cast< IfcDistributionElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDistributionElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDistributionElementType(IfcDistributionElementType *obj) {
    if (obj) {
        IfcDistributionElementType *clone = static_cast< IfcDistributionElementType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDistributionElementType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDistributionFlowElement(IfcDistributionFlowElement *obj) {
    if (obj) {
        IfcDistributionFlowElement *clone = static_cast< IfcDistributionFlowElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDistributionFlowElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDistributionPort(IfcDistributionPort *obj) {
    if (obj) {
        IfcDistributionPort *clone = static_cast< IfcDistributionPort * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDistributionPort(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *obj) {
    if (obj) {
        IfcDocumentElectronicFormat *clone = static_cast< IfcDocumentElectronicFormat * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDocumentElectronicFormat(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDocumentInformation(IfcDocumentInformation *obj) {
    if (obj) {
        IfcDocumentInformation *clone = static_cast< IfcDocumentInformation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDocumentInformation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *obj) {
    if (obj) {
        IfcDocumentInformationRelationship *clone = static_cast< IfcDocumentInformationRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDocumentInformationRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDocumentReference(IfcDocumentReference *obj) {
    if (obj) {
        IfcDocumentReference *clone = static_cast< IfcDocumentReference * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDocumentReference(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDoor(IfcDoor *obj) {
    if (obj) {
        IfcDoor *clone = static_cast< IfcDoor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDoor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDoorLiningProperties(IfcDoorLiningProperties *obj) {
    if (obj) {
        IfcDoorLiningProperties *clone = static_cast< IfcDoorLiningProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDoorLiningProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDoorPanelProperties(IfcDoorPanelProperties *obj) {
    if (obj) {
        IfcDoorPanelProperties *clone = static_cast< IfcDoorPanelProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDoorPanelProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDoorStyle(IfcDoorStyle *obj) {
    if (obj) {
        IfcDoorStyle *clone = static_cast< IfcDoorStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDoorStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDraughtingCallout(IfcDraughtingCallout *obj) {
    if (obj) {
        IfcDraughtingCallout *clone = static_cast< IfcDraughtingCallout * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDraughtingCallout(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *obj) {
    if (obj) {
        IfcDraughtingCalloutRelationship *clone = static_cast< IfcDraughtingCalloutRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDraughtingCalloutRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *obj) {
    if (obj) {
        IfcDraughtingPreDefinedColour *clone = static_cast< IfcDraughtingPreDefinedColour * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDraughtingPreDefinedColour(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *obj) {
    if (obj) {
        IfcDraughtingPreDefinedCurveFont *clone = static_cast< IfcDraughtingPreDefinedCurveFont * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDraughtingPreDefinedCurveFont(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *obj) {
    if (obj) {
        IfcDraughtingPreDefinedTextFont *clone = static_cast< IfcDraughtingPreDefinedTextFont * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDraughtingPreDefinedTextFont(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDuctFittingType(IfcDuctFittingType *obj) {
    if (obj) {
        IfcDuctFittingType *clone = static_cast< IfcDuctFittingType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDuctFittingType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDuctSegmentType(IfcDuctSegmentType *obj) {
    if (obj) {
        IfcDuctSegmentType *clone = static_cast< IfcDuctSegmentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDuctSegmentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcDuctSilencerType(IfcDuctSilencerType *obj) {
    if (obj) {
        IfcDuctSilencerType *clone = static_cast< IfcDuctSilencerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcDuctSilencerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEdge(IfcEdge *obj) {
    if (obj) {
        IfcEdge *clone = static_cast< IfcEdge * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEdge(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEdgeCurve(IfcEdgeCurve *obj) {
    if (obj) {
        IfcEdgeCurve *clone = static_cast< IfcEdgeCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEdgeCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEdgeLoop(IfcEdgeLoop *obj) {
    if (obj) {
        IfcEdgeLoop *clone = static_cast< IfcEdgeLoop * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEdgeLoop(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElectricApplianceType(IfcElectricApplianceType *obj) {
    if (obj) {
        IfcElectricApplianceType *clone = static_cast< IfcElectricApplianceType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElectricApplianceType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *obj) {
    if (obj) {
        IfcElectricDistributionPoint *clone = static_cast< IfcElectricDistributionPoint * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElectricDistributionPoint(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *obj) {
    if (obj) {
        IfcElectricFlowStorageDeviceType *clone = static_cast< IfcElectricFlowStorageDeviceType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElectricFlowStorageDeviceType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElectricGeneratorType(IfcElectricGeneratorType *obj) {
    if (obj) {
        IfcElectricGeneratorType *clone = static_cast< IfcElectricGeneratorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElectricGeneratorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElectricHeaterType(IfcElectricHeaterType *obj) {
    if (obj) {
        IfcElectricHeaterType *clone = static_cast< IfcElectricHeaterType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElectricHeaterType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElectricMotorType(IfcElectricMotorType *obj) {
    if (obj) {
        IfcElectricMotorType *clone = static_cast< IfcElectricMotorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElectricMotorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElectricTimeControlType(IfcElectricTimeControlType *obj) {
    if (obj) {
        IfcElectricTimeControlType *clone = static_cast< IfcElectricTimeControlType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElectricTimeControlType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *obj) {
    if (obj) {
        IfcElectricalBaseProperties *clone = static_cast< IfcElectricalBaseProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElectricalBaseProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElectricalCircuit(IfcElectricalCircuit *obj) {
    if (obj) {
        IfcElectricalCircuit *clone = static_cast< IfcElectricalCircuit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElectricalCircuit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElectricalElement(IfcElectricalElement *obj) {
    if (obj) {
        IfcElectricalElement *clone = static_cast< IfcElectricalElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElectricalElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElementAssembly(IfcElementAssembly *obj) {
    if (obj) {
        IfcElementAssembly *clone = static_cast< IfcElementAssembly * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElementAssembly(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcElementQuantity(IfcElementQuantity *obj) {
    if (obj) {
        IfcElementQuantity *clone = static_cast< IfcElementQuantity * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcElementQuantity(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEllipse(IfcEllipse *obj) {
    if (obj) {
        IfcEllipse *clone = static_cast< IfcEllipse * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEllipse(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEllipseProfileDef(IfcEllipseProfileDef *obj) {
    if (obj) {
        IfcEllipseProfileDef *clone = static_cast< IfcEllipseProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEllipseProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *obj) {
    if (obj) {
        IfcEnergyConversionDevice *clone = static_cast< IfcEnergyConversionDevice * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEnergyConversionDevice(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEnergyProperties(IfcEnergyProperties *obj) {
    if (obj) {
        IfcEnergyProperties *clone = static_cast< IfcEnergyProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEnergyProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *obj) {
    if (obj) {
        IfcEnvironmentalImpactValue *clone = static_cast< IfcEnvironmentalImpactValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEnvironmentalImpactValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEquipmentElement(IfcEquipmentElement *obj) {
    if (obj) {
        IfcEquipmentElement *clone = static_cast< IfcEquipmentElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEquipmentElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEquipmentStandard(IfcEquipmentStandard *obj) {
    if (obj) {
        IfcEquipmentStandard *clone = static_cast< IfcEquipmentStandard * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEquipmentStandard(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *obj) {
    if (obj) {
        IfcEvaporativeCoolerType *clone = static_cast< IfcEvaporativeCoolerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEvaporativeCoolerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcEvaporatorType(IfcEvaporatorType *obj) {
    if (obj) {
        IfcEvaporatorType *clone = static_cast< IfcEvaporatorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcEvaporatorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *obj) {
    if (obj) {
        IfcExtendedMaterialProperties *clone = static_cast< IfcExtendedMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcExtendedMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *obj) {
    if (obj) {
        IfcExternallyDefinedHatchStyle *clone = static_cast< IfcExternallyDefinedHatchStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcExternallyDefinedHatchStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *obj) {
    if (obj) {
        IfcExternallyDefinedSurfaceStyle *clone = static_cast< IfcExternallyDefinedSurfaceStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcExternallyDefinedSurfaceStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *obj) {
    if (obj) {
        IfcExternallyDefinedSymbol *clone = static_cast< IfcExternallyDefinedSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcExternallyDefinedSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *obj) {
    if (obj) {
        IfcExternallyDefinedTextFont *clone = static_cast< IfcExternallyDefinedTextFont * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcExternallyDefinedTextFont(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *obj) {
    if (obj) {
        IfcExtrudedAreaSolid *clone = static_cast< IfcExtrudedAreaSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcExtrudedAreaSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFace(IfcFace *obj) {
    if (obj) {
        IfcFace *clone = static_cast< IfcFace * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFace(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *obj) {
    if (obj) {
        IfcFaceBasedSurfaceModel *clone = static_cast< IfcFaceBasedSurfaceModel * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFaceBasedSurfaceModel(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFaceBound(IfcFaceBound *obj) {
    if (obj) {
        IfcFaceBound *clone = static_cast< IfcFaceBound * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFaceBound(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFaceOuterBound(IfcFaceOuterBound *obj) {
    if (obj) {
        IfcFaceOuterBound *clone = static_cast< IfcFaceOuterBound * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFaceOuterBound(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFaceSurface(IfcFaceSurface *obj) {
    if (obj) {
        IfcFaceSurface *clone = static_cast< IfcFaceSurface * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFaceSurface(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFacetedBrep(IfcFacetedBrep *obj) {
    if (obj) {
        IfcFacetedBrep *clone = static_cast< IfcFacetedBrep * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFacetedBrep(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *obj) {
    if (obj) {
        IfcFacetedBrepWithVoids *clone = static_cast< IfcFacetedBrepWithVoids * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFacetedBrepWithVoids(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *obj) {
    if (obj) {
        IfcFailureConnectionCondition *clone = static_cast< IfcFailureConnectionCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFailureConnectionCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFanType(IfcFanType *obj) {
    if (obj) {
        IfcFanType *clone = static_cast< IfcFanType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFanType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFastener(IfcFastener *obj) {
    if (obj) {
        IfcFastener *clone = static_cast< IfcFastener * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFastener(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFastenerType(IfcFastenerType *obj) {
    if (obj) {
        IfcFastenerType *clone = static_cast< IfcFastenerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFastenerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFillAreaStyle(IfcFillAreaStyle *obj) {
    if (obj) {
        IfcFillAreaStyle *clone = static_cast< IfcFillAreaStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFillAreaStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *obj) {
    if (obj) {
        IfcFillAreaStyleHatching *clone = static_cast< IfcFillAreaStyleHatching * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFillAreaStyleHatching(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *obj) {
    if (obj) {
        IfcFillAreaStyleTileSymbolWithStyle *clone = static_cast< IfcFillAreaStyleTileSymbolWithStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFillAreaStyleTileSymbolWithStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *obj) {
    if (obj) {
        IfcFillAreaStyleTiles *clone = static_cast< IfcFillAreaStyleTiles * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFillAreaStyleTiles(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFilterType(IfcFilterType *obj) {
    if (obj) {
        IfcFilterType *clone = static_cast< IfcFilterType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFilterType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *obj) {
    if (obj) {
        IfcFireSuppressionTerminalType *clone = static_cast< IfcFireSuppressionTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFireSuppressionTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFlowController(IfcFlowController *obj) {
    if (obj) {
        IfcFlowController *clone = static_cast< IfcFlowController * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFlowController(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFlowFitting(IfcFlowFitting *obj) {
    if (obj) {
        IfcFlowFitting *clone = static_cast< IfcFlowFitting * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFlowFitting(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFlowInstrumentType(IfcFlowInstrumentType *obj) {
    if (obj) {
        IfcFlowInstrumentType *clone = static_cast< IfcFlowInstrumentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFlowInstrumentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFlowMeterType(IfcFlowMeterType *obj) {
    if (obj) {
        IfcFlowMeterType *clone = static_cast< IfcFlowMeterType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFlowMeterType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFlowMovingDevice(IfcFlowMovingDevice *obj) {
    if (obj) {
        IfcFlowMovingDevice *clone = static_cast< IfcFlowMovingDevice * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFlowMovingDevice(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFlowSegment(IfcFlowSegment *obj) {
    if (obj) {
        IfcFlowSegment *clone = static_cast< IfcFlowSegment * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFlowSegment(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFlowStorageDevice(IfcFlowStorageDevice *obj) {
    if (obj) {
        IfcFlowStorageDevice *clone = static_cast< IfcFlowStorageDevice * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFlowStorageDevice(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFlowTerminal(IfcFlowTerminal *obj) {
    if (obj) {
        IfcFlowTerminal *clone = static_cast< IfcFlowTerminal * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFlowTerminal(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *obj) {
    if (obj) {
        IfcFlowTreatmentDevice *clone = static_cast< IfcFlowTreatmentDevice * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFlowTreatmentDevice(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFluidFlowProperties(IfcFluidFlowProperties *obj) {
    if (obj) {
        IfcFluidFlowProperties *clone = static_cast< IfcFluidFlowProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFluidFlowProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFooting(IfcFooting *obj) {
    if (obj) {
        IfcFooting *clone = static_cast< IfcFooting * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFooting(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFuelProperties(IfcFuelProperties *obj) {
    if (obj) {
        IfcFuelProperties *clone = static_cast< IfcFuelProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFuelProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFurnishingElement(IfcFurnishingElement *obj) {
    if (obj) {
        IfcFurnishingElement *clone = static_cast< IfcFurnishingElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFurnishingElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFurnishingElementType(IfcFurnishingElementType *obj) {
    if (obj) {
        IfcFurnishingElementType *clone = static_cast< IfcFurnishingElementType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFurnishingElementType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFurnitureStandard(IfcFurnitureStandard *obj) {
    if (obj) {
        IfcFurnitureStandard *clone = static_cast< IfcFurnitureStandard * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFurnitureStandard(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcFurnitureType(IfcFurnitureType *obj) {
    if (obj) {
        IfcFurnitureType *clone = static_cast< IfcFurnitureType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcFurnitureType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcGasTerminalType(IfcGasTerminalType *obj) {
    if (obj) {
        IfcGasTerminalType *clone = static_cast< IfcGasTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcGasTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *obj) {
    if (obj) {
        IfcGeneralMaterialProperties *clone = static_cast< IfcGeneralMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcGeneralMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *obj) {
    if (obj) {
        IfcGeneralProfileProperties *clone = static_cast< IfcGeneralProfileProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcGeneralProfileProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcGeometricCurveSet(IfcGeometricCurveSet *obj) {
    if (obj) {
        IfcGeometricCurveSet *clone = static_cast< IfcGeometricCurveSet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcGeometricCurveSet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *obj) {
    if (obj) {
        IfcGeometricRepresentationContext *clone = static_cast< IfcGeometricRepresentationContext * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcGeometricRepresentationContext(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *obj) {
    if (obj) {
        IfcGeometricRepresentationSubContext *clone = static_cast< IfcGeometricRepresentationSubContext * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcGeometricRepresentationSubContext(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcGeometricSet(IfcGeometricSet *obj) {
    if (obj) {
        IfcGeometricSet *clone = static_cast< IfcGeometricSet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcGeometricSet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcGrid(IfcGrid *obj) {
    if (obj) {
        IfcGrid *clone = static_cast< IfcGrid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcGrid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcGridAxis(IfcGridAxis *obj) {
    if (obj) {
        IfcGridAxis *clone = static_cast< IfcGridAxis * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcGridAxis(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcGridPlacement(IfcGridPlacement *obj) {
    if (obj) {
        IfcGridPlacement *clone = static_cast< IfcGridPlacement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcGridPlacement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcGroup(IfcGroup *obj) {
    if (obj) {
        IfcGroup *clone = static_cast< IfcGroup * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcGroup(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *obj) {
    if (obj) {
        IfcHalfSpaceSolid *clone = static_cast< IfcHalfSpaceSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcHalfSpaceSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcHeatExchangerType(IfcHeatExchangerType *obj) {
    if (obj) {
        IfcHeatExchangerType *clone = static_cast< IfcHeatExchangerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcHeatExchangerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcHumidifierType(IfcHumidifierType *obj) {
    if (obj) {
        IfcHumidifierType *clone = static_cast< IfcHumidifierType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcHumidifierType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *obj) {
    if (obj) {
        IfcHygroscopicMaterialProperties *clone = static_cast< IfcHygroscopicMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcHygroscopicMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcIShapeProfileDef(IfcIShapeProfileDef *obj) {
    if (obj) {
        IfcIShapeProfileDef *clone = static_cast< IfcIShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcIShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcImageTexture(IfcImageTexture *obj) {
    if (obj) {
        IfcImageTexture *clone = static_cast< IfcImageTexture * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcImageTexture(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcInventory(IfcInventory *obj) {
    if (obj) {
        IfcInventory *clone = static_cast< IfcInventory * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcInventory(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *obj) {
    if (obj) {
        IfcIrregularTimeSeries *clone = static_cast< IfcIrregularTimeSeries * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcIrregularTimeSeries(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *obj) {
    if (obj) {
        IfcIrregularTimeSeriesValue *clone = static_cast< IfcIrregularTimeSeriesValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcIrregularTimeSeriesValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcJunctionBoxType(IfcJunctionBoxType *obj) {
    if (obj) {
        IfcJunctionBoxType *clone = static_cast< IfcJunctionBoxType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcJunctionBoxType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLShapeProfileDef(IfcLShapeProfileDef *obj) {
    if (obj) {
        IfcLShapeProfileDef *clone = static_cast< IfcLShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLaborResource(IfcLaborResource *obj) {
    if (obj) {
        IfcLaborResource *clone = static_cast< IfcLaborResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLaborResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLampType(IfcLampType *obj) {
    if (obj) {
        IfcLampType *clone = static_cast< IfcLampType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLampType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLibraryInformation(IfcLibraryInformation *obj) {
    if (obj) {
        IfcLibraryInformation *clone = static_cast< IfcLibraryInformation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLibraryInformation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLibraryReference(IfcLibraryReference *obj) {
    if (obj) {
        IfcLibraryReference *clone = static_cast< IfcLibraryReference * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLibraryReference(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLightDistributionData(IfcLightDistributionData *obj) {
    if (obj) {
        IfcLightDistributionData *clone = static_cast< IfcLightDistributionData * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLightDistributionData(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLightFixtureType(IfcLightFixtureType *obj) {
    if (obj) {
        IfcLightFixtureType *clone = static_cast< IfcLightFixtureType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLightFixtureType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *obj) {
    if (obj) {
        IfcLightIntensityDistribution *clone = static_cast< IfcLightIntensityDistribution * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLightIntensityDistribution(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLightSourceAmbient(IfcLightSourceAmbient *obj) {
    if (obj) {
        IfcLightSourceAmbient *clone = static_cast< IfcLightSourceAmbient * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLightSourceAmbient(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLightSourceDirectional(IfcLightSourceDirectional *obj) {
    if (obj) {
        IfcLightSourceDirectional *clone = static_cast< IfcLightSourceDirectional * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLightSourceDirectional(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *obj) {
    if (obj) {
        IfcLightSourceGoniometric *clone = static_cast< IfcLightSourceGoniometric * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLightSourceGoniometric(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLightSourcePositional(IfcLightSourcePositional *obj) {
    if (obj) {
        IfcLightSourcePositional *clone = static_cast< IfcLightSourcePositional * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLightSourcePositional(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLightSourceSpot(IfcLightSourceSpot *obj) {
    if (obj) {
        IfcLightSourceSpot *clone = static_cast< IfcLightSourceSpot * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLightSourceSpot(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLine(IfcLine *obj) {
    if (obj) {
        IfcLine *clone = static_cast< IfcLine * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLine(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLinearDimension(IfcLinearDimension *obj) {
    if (obj) {
        IfcLinearDimension *clone = static_cast< IfcLinearDimension * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLinearDimension(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLocalPlacement(IfcLocalPlacement *obj) {
    if (obj) {
        IfcLocalPlacement *clone = static_cast< IfcLocalPlacement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLocalPlacement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLocalTime(IfcLocalTime *obj) {
    if (obj) {
        IfcLocalTime *clone = static_cast< IfcLocalTime * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLocalTime(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcLoop(IfcLoop *obj) {
    if (obj) {
        IfcLoop *clone = static_cast< IfcLoop * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcLoop(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMappedItem(IfcMappedItem *obj) {
    if (obj) {
        IfcMappedItem *clone = static_cast< IfcMappedItem * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMappedItem(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMaterial(IfcMaterial *obj) {
    if (obj) {
        IfcMaterial *clone = static_cast< IfcMaterial * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMaterial(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *obj) {
    if (obj) {
        IfcMaterialClassificationRelationship *clone = static_cast< IfcMaterialClassificationRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMaterialClassificationRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *obj) {
    if (obj) {
        IfcMaterialDefinitionRepresentation *clone = static_cast< IfcMaterialDefinitionRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMaterialDefinitionRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMaterialLayer(IfcMaterialLayer *obj) {
    if (obj) {
        IfcMaterialLayer *clone = static_cast< IfcMaterialLayer * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMaterialLayer(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMaterialLayerSet(IfcMaterialLayerSet *obj) {
    if (obj) {
        IfcMaterialLayerSet *clone = static_cast< IfcMaterialLayerSet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMaterialLayerSet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *obj) {
    if (obj) {
        IfcMaterialLayerSetUsage *clone = static_cast< IfcMaterialLayerSetUsage * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMaterialLayerSetUsage(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMaterialList(IfcMaterialList *obj) {
    if (obj) {
        IfcMaterialList *clone = static_cast< IfcMaterialList * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMaterialList(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMeasureWithUnit(IfcMeasureWithUnit *obj) {
    if (obj) {
        IfcMeasureWithUnit *clone = static_cast< IfcMeasureWithUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMeasureWithUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *obj) {
    if (obj) {
        IfcMechanicalConcreteMaterialProperties *clone = static_cast< IfcMechanicalConcreteMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMechanicalConcreteMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMechanicalFastener(IfcMechanicalFastener *obj) {
    if (obj) {
        IfcMechanicalFastener *clone = static_cast< IfcMechanicalFastener * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMechanicalFastener(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *obj) {
    if (obj) {
        IfcMechanicalFastenerType *clone = static_cast< IfcMechanicalFastenerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMechanicalFastenerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *obj) {
    if (obj) {
        IfcMechanicalMaterialProperties *clone = static_cast< IfcMechanicalMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMechanicalMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *obj) {
    if (obj) {
        IfcMechanicalSteelMaterialProperties *clone = static_cast< IfcMechanicalSteelMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMechanicalSteelMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMember(IfcMember *obj) {
    if (obj) {
        IfcMember *clone = static_cast< IfcMember * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMember(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMemberType(IfcMemberType *obj) {
    if (obj) {
        IfcMemberType *clone = static_cast< IfcMemberType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMemberType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMetric(IfcMetric *obj) {
    if (obj) {
        IfcMetric *clone = static_cast< IfcMetric * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMetric(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMonetaryUnit(IfcMonetaryUnit *obj) {
    if (obj) {
        IfcMonetaryUnit *clone = static_cast< IfcMonetaryUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMonetaryUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMotorConnectionType(IfcMotorConnectionType *obj) {
    if (obj) {
        IfcMotorConnectionType *clone = static_cast< IfcMotorConnectionType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMotorConnectionType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcMove(IfcMove *obj) {
    if (obj) {
        IfcMove *clone = static_cast< IfcMove * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcMove(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcObjective(IfcObjective *obj) {
    if (obj) {
        IfcObjective *clone = static_cast< IfcObjective * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcObjective(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOccupant(IfcOccupant *obj) {
    if (obj) {
        IfcOccupant *clone = static_cast< IfcOccupant * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOccupant(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOffsetCurve2D(IfcOffsetCurve2D *obj) {
    if (obj) {
        IfcOffsetCurve2D *clone = static_cast< IfcOffsetCurve2D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOffsetCurve2D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOffsetCurve3D(IfcOffsetCurve3D *obj) {
    if (obj) {
        IfcOffsetCurve3D *clone = static_cast< IfcOffsetCurve3D * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOffsetCurve3D(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *obj) {
    if (obj) {
        IfcOneDirectionRepeatFactor *clone = static_cast< IfcOneDirectionRepeatFactor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOneDirectionRepeatFactor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOpenShell(IfcOpenShell *obj) {
    if (obj) {
        IfcOpenShell *clone = static_cast< IfcOpenShell * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOpenShell(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOpeningElement(IfcOpeningElement *obj) {
    if (obj) {
        IfcOpeningElement *clone = static_cast< IfcOpeningElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOpeningElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *obj) {
    if (obj) {
        IfcOpticalMaterialProperties *clone = static_cast< IfcOpticalMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOpticalMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOrderAction(IfcOrderAction *obj) {
    if (obj) {
        IfcOrderAction *clone = static_cast< IfcOrderAction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOrderAction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOrganization(IfcOrganization *obj) {
    if (obj) {
        IfcOrganization *clone = static_cast< IfcOrganization * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOrganization(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOrganizationRelationship(IfcOrganizationRelationship *obj) {
    if (obj) {
        IfcOrganizationRelationship *clone = static_cast< IfcOrganizationRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOrganizationRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOrientedEdge(IfcOrientedEdge *obj) {
    if (obj) {
        IfcOrientedEdge *clone = static_cast< IfcOrientedEdge * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOrientedEdge(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOutletType(IfcOutletType *obj) {
    if (obj) {
        IfcOutletType *clone = static_cast< IfcOutletType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOutletType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcOwnerHistory(IfcOwnerHistory *obj) {
    if (obj) {
        IfcOwnerHistory *clone = static_cast< IfcOwnerHistory * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcOwnerHistory(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPath(IfcPath *obj) {
    if (obj) {
        IfcPath *clone = static_cast< IfcPath * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPath(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPerformanceHistory(IfcPerformanceHistory *obj) {
    if (obj) {
        IfcPerformanceHistory *clone = static_cast< IfcPerformanceHistory * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPerformanceHistory(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *obj) {
    if (obj) {
        IfcPermeableCoveringProperties *clone = static_cast< IfcPermeableCoveringProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPermeableCoveringProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPermit(IfcPermit *obj) {
    if (obj) {
        IfcPermit *clone = static_cast< IfcPermit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPermit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPerson(IfcPerson *obj) {
    if (obj) {
        IfcPerson *clone = static_cast< IfcPerson * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPerson(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPersonAndOrganization(IfcPersonAndOrganization *obj) {
    if (obj) {
        IfcPersonAndOrganization *clone = static_cast< IfcPersonAndOrganization * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPersonAndOrganization(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *obj) {
    if (obj) {
        IfcPhysicalComplexQuantity *clone = static_cast< IfcPhysicalComplexQuantity * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPhysicalComplexQuantity(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPile(IfcPile *obj) {
    if (obj) {
        IfcPile *clone = static_cast< IfcPile * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPile(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPipeFittingType(IfcPipeFittingType *obj) {
    if (obj) {
        IfcPipeFittingType *clone = static_cast< IfcPipeFittingType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPipeFittingType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPipeSegmentType(IfcPipeSegmentType *obj) {
    if (obj) {
        IfcPipeSegmentType *clone = static_cast< IfcPipeSegmentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPipeSegmentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPixelTexture(IfcPixelTexture *obj) {
    if (obj) {
        IfcPixelTexture *clone = static_cast< IfcPixelTexture * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPixelTexture(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPlanarBox(IfcPlanarBox *obj) {
    if (obj) {
        IfcPlanarBox *clone = static_cast< IfcPlanarBox * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPlanarBox(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPlanarExtent(IfcPlanarExtent *obj) {
    if (obj) {
        IfcPlanarExtent *clone = static_cast< IfcPlanarExtent * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPlanarExtent(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPlane(IfcPlane *obj) {
    if (obj) {
        IfcPlane *clone = static_cast< IfcPlane * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPlane(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPlate(IfcPlate *obj) {
    if (obj) {
        IfcPlate *clone = static_cast< IfcPlate * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPlate(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPlateType(IfcPlateType *obj) {
    if (obj) {
        IfcPlateType *clone = static_cast< IfcPlateType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPlateType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPointOnCurve(IfcPointOnCurve *obj) {
    if (obj) {
        IfcPointOnCurve *clone = static_cast< IfcPointOnCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPointOnCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPointOnSurface(IfcPointOnSurface *obj) {
    if (obj) {
        IfcPointOnSurface *clone = static_cast< IfcPointOnSurface * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPointOnSurface(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPolyLoop(IfcPolyLoop *obj) {
    if (obj) {
        IfcPolyLoop *clone = static_cast< IfcPolyLoop * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPolyLoop(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *obj) {
    if (obj) {
        IfcPolygonalBoundedHalfSpace *clone = static_cast< IfcPolygonalBoundedHalfSpace * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPolygonalBoundedHalfSpace(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPolyline(IfcPolyline *obj) {
    if (obj) {
        IfcPolyline *clone = static_cast< IfcPolyline * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPolyline(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPostalAddress(IfcPostalAddress *obj) {
    if (obj) {
        IfcPostalAddress *clone = static_cast< IfcPostalAddress * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPostalAddress(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *obj) {
    if (obj) {
        IfcPreDefinedDimensionSymbol *clone = static_cast< IfcPreDefinedDimensionSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPreDefinedDimensionSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *obj) {
    if (obj) {
        IfcPreDefinedPointMarkerSymbol *clone = static_cast< IfcPreDefinedPointMarkerSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPreDefinedPointMarkerSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *obj) {
    if (obj) {
        IfcPreDefinedTerminatorSymbol *clone = static_cast< IfcPreDefinedTerminatorSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPreDefinedTerminatorSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *obj) {
    if (obj) {
        IfcPresentationLayerAssignment *clone = static_cast< IfcPresentationLayerAssignment * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPresentationLayerAssignment(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *obj) {
    if (obj) {
        IfcPresentationLayerWithStyle *clone = static_cast< IfcPresentationLayerWithStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPresentationLayerWithStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *obj) {
    if (obj) {
        IfcPresentationStyleAssignment *clone = static_cast< IfcPresentationStyleAssignment * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPresentationStyleAssignment(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcProcedure(IfcProcedure *obj) {
    if (obj) {
        IfcProcedure *clone = static_cast< IfcProcedure * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcProcedure(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcProductDefinitionShape(IfcProductDefinitionShape *obj) {
    if (obj) {
        IfcProductDefinitionShape *clone = static_cast< IfcProductDefinitionShape * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcProductDefinitionShape(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcProductRepresentation(IfcProductRepresentation *obj) {
    if (obj) {
        IfcProductRepresentation *clone = static_cast< IfcProductRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcProductRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *obj) {
    if (obj) {
        IfcProductsOfCombustionProperties *clone = static_cast< IfcProductsOfCombustionProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcProductsOfCombustionProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcProject(IfcProject *obj) {
    if (obj) {
        IfcProject *clone = static_cast< IfcProject * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcProject(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcProjectOrder(IfcProjectOrder *obj) {
    if (obj) {
        IfcProjectOrder *clone = static_cast< IfcProjectOrder * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcProjectOrder(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcProjectOrderRecord(IfcProjectOrderRecord *obj) {
    if (obj) {
        IfcProjectOrderRecord *clone = static_cast< IfcProjectOrderRecord * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcProjectOrderRecord(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcProjectionCurve(IfcProjectionCurve *obj) {
    if (obj) {
        IfcProjectionCurve *clone = static_cast< IfcProjectionCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcProjectionCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcProjectionElement(IfcProjectionElement *obj) {
    if (obj) {
        IfcProjectionElement *clone = static_cast< IfcProjectionElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcProjectionElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *obj) {
    if (obj) {
        IfcPropertyBoundedValue *clone = static_cast< IfcPropertyBoundedValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPropertyBoundedValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *obj) {
    if (obj) {
        IfcPropertyConstraintRelationship *clone = static_cast< IfcPropertyConstraintRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPropertyConstraintRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *obj) {
    if (obj) {
        IfcPropertyDependencyRelationship *clone = static_cast< IfcPropertyDependencyRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPropertyDependencyRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *obj) {
    if (obj) {
        IfcPropertyEnumeratedValue *clone = static_cast< IfcPropertyEnumeratedValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPropertyEnumeratedValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPropertyEnumeration(IfcPropertyEnumeration *obj) {
    if (obj) {
        IfcPropertyEnumeration *clone = static_cast< IfcPropertyEnumeration * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPropertyEnumeration(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPropertyListValue(IfcPropertyListValue *obj) {
    if (obj) {
        IfcPropertyListValue *clone = static_cast< IfcPropertyListValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPropertyListValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *obj) {
    if (obj) {
        IfcPropertyReferenceValue *clone = static_cast< IfcPropertyReferenceValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPropertyReferenceValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPropertySet(IfcPropertySet *obj) {
    if (obj) {
        IfcPropertySet *clone = static_cast< IfcPropertySet * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPropertySet(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPropertySingleValue(IfcPropertySingleValue *obj) {
    if (obj) {
        IfcPropertySingleValue *clone = static_cast< IfcPropertySingleValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPropertySingleValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPropertyTableValue(IfcPropertyTableValue *obj) {
    if (obj) {
        IfcPropertyTableValue *clone = static_cast< IfcPropertyTableValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPropertyTableValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *obj) {
    if (obj) {
        IfcProtectiveDeviceType *clone = static_cast< IfcProtectiveDeviceType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcProtectiveDeviceType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcProxy(IfcProxy *obj) {
    if (obj) {
        IfcProxy *clone = static_cast< IfcProxy * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcProxy(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcPumpType(IfcPumpType *obj) {
    if (obj) {
        IfcPumpType *clone = static_cast< IfcPumpType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcPumpType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcQuantityArea(IfcQuantityArea *obj) {
    if (obj) {
        IfcQuantityArea *clone = static_cast< IfcQuantityArea * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcQuantityArea(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcQuantityCount(IfcQuantityCount *obj) {
    if (obj) {
        IfcQuantityCount *clone = static_cast< IfcQuantityCount * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcQuantityCount(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcQuantityLength(IfcQuantityLength *obj) {
    if (obj) {
        IfcQuantityLength *clone = static_cast< IfcQuantityLength * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcQuantityLength(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcQuantityTime(IfcQuantityTime *obj) {
    if (obj) {
        IfcQuantityTime *clone = static_cast< IfcQuantityTime * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcQuantityTime(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcQuantityVolume(IfcQuantityVolume *obj) {
    if (obj) {
        IfcQuantityVolume *clone = static_cast< IfcQuantityVolume * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcQuantityVolume(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcQuantityWeight(IfcQuantityWeight *obj) {
    if (obj) {
        IfcQuantityWeight *clone = static_cast< IfcQuantityWeight * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcQuantityWeight(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRadiusDimension(IfcRadiusDimension *obj) {
    if (obj) {
        IfcRadiusDimension *clone = static_cast< IfcRadiusDimension * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRadiusDimension(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRailing(IfcRailing *obj) {
    if (obj) {
        IfcRailing *clone = static_cast< IfcRailing * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRailing(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRailingType(IfcRailingType *obj) {
    if (obj) {
        IfcRailingType *clone = static_cast< IfcRailingType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRailingType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRamp(IfcRamp *obj) {
    if (obj) {
        IfcRamp *clone = static_cast< IfcRamp * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRamp(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRampFlight(IfcRampFlight *obj) {
    if (obj) {
        IfcRampFlight *clone = static_cast< IfcRampFlight * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRampFlight(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRampFlightType(IfcRampFlightType *obj) {
    if (obj) {
        IfcRampFlightType *clone = static_cast< IfcRampFlightType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRampFlightType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRationalBezierCurve(IfcRationalBezierCurve *obj) {
    if (obj) {
        IfcRationalBezierCurve *clone = static_cast< IfcRationalBezierCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRationalBezierCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *obj) {
    if (obj) {
        IfcRectangleHollowProfileDef *clone = static_cast< IfcRectangleHollowProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRectangleHollowProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRectangleProfileDef(IfcRectangleProfileDef *obj) {
    if (obj) {
        IfcRectangleProfileDef *clone = static_cast< IfcRectangleProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRectangleProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRectangularPyramid(IfcRectangularPyramid *obj) {
    if (obj) {
        IfcRectangularPyramid *clone = static_cast< IfcRectangularPyramid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRectangularPyramid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *obj) {
    if (obj) {
        IfcRectangularTrimmedSurface *clone = static_cast< IfcRectangularTrimmedSurface * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRectangularTrimmedSurface(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcReferencesValueDocument(IfcReferencesValueDocument *obj) {
    if (obj) {
        IfcReferencesValueDocument *clone = static_cast< IfcReferencesValueDocument * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcReferencesValueDocument(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRegularTimeSeries(IfcRegularTimeSeries *obj) {
    if (obj) {
        IfcRegularTimeSeries *clone = static_cast< IfcRegularTimeSeries * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRegularTimeSeries(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *obj) {
    if (obj) {
        IfcReinforcementBarProperties *clone = static_cast< IfcReinforcementBarProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcReinforcementBarProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *obj) {
    if (obj) {
        IfcReinforcementDefinitionProperties *clone = static_cast< IfcReinforcementDefinitionProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcReinforcementDefinitionProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcReinforcingBar(IfcReinforcingBar *obj) {
    if (obj) {
        IfcReinforcingBar *clone = static_cast< IfcReinforcingBar * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcReinforcingBar(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcReinforcingMesh(IfcReinforcingMesh *obj) {
    if (obj) {
        IfcReinforcingMesh *clone = static_cast< IfcReinforcingMesh * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcReinforcingMesh(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAggregates(IfcRelAggregates *obj) {
    if (obj) {
        IfcRelAggregates *clone = static_cast< IfcRelAggregates * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAggregates(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssignsTasks(IfcRelAssignsTasks *obj) {
    if (obj) {
        IfcRelAssignsTasks *clone = static_cast< IfcRelAssignsTasks * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssignsTasks(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssignsToActor(IfcRelAssignsToActor *obj) {
    if (obj) {
        IfcRelAssignsToActor *clone = static_cast< IfcRelAssignsToActor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssignsToActor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssignsToControl(IfcRelAssignsToControl *obj) {
    if (obj) {
        IfcRelAssignsToControl *clone = static_cast< IfcRelAssignsToControl * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssignsToControl(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *obj) {
    if (obj) {
        IfcRelAssignsToGroup *clone = static_cast< IfcRelAssignsToGroup * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssignsToGroup(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *obj) {
    if (obj) {
        IfcRelAssignsToProcess *clone = static_cast< IfcRelAssignsToProcess * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssignsToProcess(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *obj) {
    if (obj) {
        IfcRelAssignsToProduct *clone = static_cast< IfcRelAssignsToProduct * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssignsToProduct(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *obj) {
    if (obj) {
        IfcRelAssignsToProjectOrder *clone = static_cast< IfcRelAssignsToProjectOrder * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssignsToProjectOrder(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssignsToResource(IfcRelAssignsToResource *obj) {
    if (obj) {
        IfcRelAssignsToResource *clone = static_cast< IfcRelAssignsToResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssignsToResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssociates(IfcRelAssociates *obj) {
    if (obj) {
        IfcRelAssociates *clone = static_cast< IfcRelAssociates * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssociates(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *obj) {
    if (obj) {
        IfcRelAssociatesAppliedValue *clone = static_cast< IfcRelAssociatesAppliedValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssociatesAppliedValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *obj) {
    if (obj) {
        IfcRelAssociatesApproval *clone = static_cast< IfcRelAssociatesApproval * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssociatesApproval(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *obj) {
    if (obj) {
        IfcRelAssociatesClassification *clone = static_cast< IfcRelAssociatesClassification * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssociatesClassification(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *obj) {
    if (obj) {
        IfcRelAssociatesConstraint *clone = static_cast< IfcRelAssociatesConstraint * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssociatesConstraint(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *obj) {
    if (obj) {
        IfcRelAssociatesDocument *clone = static_cast< IfcRelAssociatesDocument * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssociatesDocument(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *obj) {
    if (obj) {
        IfcRelAssociatesLibrary *clone = static_cast< IfcRelAssociatesLibrary * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssociatesLibrary(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *obj) {
    if (obj) {
        IfcRelAssociatesMaterial *clone = static_cast< IfcRelAssociatesMaterial * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssociatesMaterial(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *obj) {
    if (obj) {
        IfcRelAssociatesProfileProperties *clone = static_cast< IfcRelAssociatesProfileProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelAssociatesProfileProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelConnectsElements(IfcRelConnectsElements *obj) {
    if (obj) {
        IfcRelConnectsElements *clone = static_cast< IfcRelConnectsElements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelConnectsElements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *obj) {
    if (obj) {
        IfcRelConnectsPathElements *clone = static_cast< IfcRelConnectsPathElements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelConnectsPathElements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *obj) {
    if (obj) {
        IfcRelConnectsPortToElement *clone = static_cast< IfcRelConnectsPortToElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelConnectsPortToElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelConnectsPorts(IfcRelConnectsPorts *obj) {
    if (obj) {
        IfcRelConnectsPorts *clone = static_cast< IfcRelConnectsPorts * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelConnectsPorts(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *obj) {
    if (obj) {
        IfcRelConnectsStructuralActivity *clone = static_cast< IfcRelConnectsStructuralActivity * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelConnectsStructuralActivity(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *obj) {
    if (obj) {
        IfcRelConnectsStructuralElement *clone = static_cast< IfcRelConnectsStructuralElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelConnectsStructuralElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *obj) {
    if (obj) {
        IfcRelConnectsStructuralMember *clone = static_cast< IfcRelConnectsStructuralMember * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelConnectsStructuralMember(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *obj) {
    if (obj) {
        IfcRelConnectsWithEccentricity *clone = static_cast< IfcRelConnectsWithEccentricity * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelConnectsWithEccentricity(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *obj) {
    if (obj) {
        IfcRelConnectsWithRealizingElements *clone = static_cast< IfcRelConnectsWithRealizingElements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelConnectsWithRealizingElements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *obj) {
    if (obj) {
        IfcRelContainedInSpatialStructure *clone = static_cast< IfcRelContainedInSpatialStructure * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelContainedInSpatialStructure(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *obj) {
    if (obj) {
        IfcRelCoversBldgElements *clone = static_cast< IfcRelCoversBldgElements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelCoversBldgElements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelCoversSpaces(IfcRelCoversSpaces *obj) {
    if (obj) {
        IfcRelCoversSpaces *clone = static_cast< IfcRelCoversSpaces * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelCoversSpaces(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *obj) {
    if (obj) {
        IfcRelDefinesByProperties *clone = static_cast< IfcRelDefinesByProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelDefinesByProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelDefinesByType(IfcRelDefinesByType *obj) {
    if (obj) {
        IfcRelDefinesByType *clone = static_cast< IfcRelDefinesByType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelDefinesByType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelFillsElement(IfcRelFillsElement *obj) {
    if (obj) {
        IfcRelFillsElement *clone = static_cast< IfcRelFillsElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelFillsElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelFlowControlElements(IfcRelFlowControlElements *obj) {
    if (obj) {
        IfcRelFlowControlElements *clone = static_cast< IfcRelFlowControlElements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelFlowControlElements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *obj) {
    if (obj) {
        IfcRelInteractionRequirements *clone = static_cast< IfcRelInteractionRequirements * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelInteractionRequirements(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelNests(IfcRelNests *obj) {
    if (obj) {
        IfcRelNests *clone = static_cast< IfcRelNests * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelNests(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *obj) {
    if (obj) {
        IfcRelOccupiesSpaces *clone = static_cast< IfcRelOccupiesSpaces * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelOccupiesSpaces(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelOverridesProperties(IfcRelOverridesProperties *obj) {
    if (obj) {
        IfcRelOverridesProperties *clone = static_cast< IfcRelOverridesProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelOverridesProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelProjectsElement(IfcRelProjectsElement *obj) {
    if (obj) {
        IfcRelProjectsElement *clone = static_cast< IfcRelProjectsElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelProjectsElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *obj) {
    if (obj) {
        IfcRelReferencedInSpatialStructure *clone = static_cast< IfcRelReferencedInSpatialStructure * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelReferencedInSpatialStructure(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *obj) {
    if (obj) {
        IfcRelSchedulesCostItems *clone = static_cast< IfcRelSchedulesCostItems * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelSchedulesCostItems(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelSequence(IfcRelSequence *obj) {
    if (obj) {
        IfcRelSequence *clone = static_cast< IfcRelSequence * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelSequence(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelServicesBuildings(IfcRelServicesBuildings *obj) {
    if (obj) {
        IfcRelServicesBuildings *clone = static_cast< IfcRelServicesBuildings * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelServicesBuildings(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *obj) {
    if (obj) {
        IfcRelSpaceBoundary *clone = static_cast< IfcRelSpaceBoundary * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelSpaceBoundary(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelVoidsElement(IfcRelVoidsElement *obj) {
    if (obj) {
        IfcRelVoidsElement *clone = static_cast< IfcRelVoidsElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelVoidsElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRelaxation(IfcRelaxation *obj) {
    if (obj) {
        IfcRelaxation *clone = static_cast< IfcRelaxation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRelaxation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRepresentation(IfcRepresentation *obj) {
    if (obj) {
        IfcRepresentation *clone = static_cast< IfcRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRepresentationContext(IfcRepresentationContext *obj) {
    if (obj) {
        IfcRepresentationContext *clone = static_cast< IfcRepresentationContext * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRepresentationContext(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRepresentationMap(IfcRepresentationMap *obj) {
    if (obj) {
        IfcRepresentationMap *clone = static_cast< IfcRepresentationMap * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRepresentationMap(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *obj) {
    if (obj) {
        IfcRevolvedAreaSolid *clone = static_cast< IfcRevolvedAreaSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRevolvedAreaSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *obj) {
    if (obj) {
        IfcRibPlateProfileProperties *clone = static_cast< IfcRibPlateProfileProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRibPlateProfileProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRightCircularCone(IfcRightCircularCone *obj) {
    if (obj) {
        IfcRightCircularCone *clone = static_cast< IfcRightCircularCone * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRightCircularCone(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRightCircularCylinder(IfcRightCircularCylinder *obj) {
    if (obj) {
        IfcRightCircularCylinder *clone = static_cast< IfcRightCircularCylinder * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRightCircularCylinder(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRoof(IfcRoof *obj) {
    if (obj) {
        IfcRoof *clone = static_cast< IfcRoof * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRoof(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *obj) {
    if (obj) {
        IfcRoundedEdgeFeature *clone = static_cast< IfcRoundedEdgeFeature * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRoundedEdgeFeature(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *obj) {
    if (obj) {
        IfcRoundedRectangleProfileDef *clone = static_cast< IfcRoundedRectangleProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcRoundedRectangleProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSIUnit(IfcSIUnit *obj) {
    if (obj) {
        IfcSIUnit *clone = static_cast< IfcSIUnit * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSIUnit(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *obj) {
    if (obj) {
        IfcSanitaryTerminalType *clone = static_cast< IfcSanitaryTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSanitaryTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcScheduleTimeControl(IfcScheduleTimeControl *obj) {
    if (obj) {
        IfcScheduleTimeControl *clone = static_cast< IfcScheduleTimeControl * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcScheduleTimeControl(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSectionProperties(IfcSectionProperties *obj) {
    if (obj) {
        IfcSectionProperties *clone = static_cast< IfcSectionProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSectionProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *obj) {
    if (obj) {
        IfcSectionReinforcementProperties *clone = static_cast< IfcSectionReinforcementProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSectionReinforcementProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSectionedSpine(IfcSectionedSpine *obj) {
    if (obj) {
        IfcSectionedSpine *clone = static_cast< IfcSectionedSpine * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSectionedSpine(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSensorType(IfcSensorType *obj) {
    if (obj) {
        IfcSensorType *clone = static_cast< IfcSensorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSensorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcServiceLife(IfcServiceLife *obj) {
    if (obj) {
        IfcServiceLife *clone = static_cast< IfcServiceLife * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcServiceLife(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcServiceLifeFactor(IfcServiceLifeFactor *obj) {
    if (obj) {
        IfcServiceLifeFactor *clone = static_cast< IfcServiceLifeFactor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcServiceLifeFactor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcShapeAspect(IfcShapeAspect *obj) {
    if (obj) {
        IfcShapeAspect *clone = static_cast< IfcShapeAspect * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcShapeAspect(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcShapeRepresentation(IfcShapeRepresentation *obj) {
    if (obj) {
        IfcShapeRepresentation *clone = static_cast< IfcShapeRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcShapeRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *obj) {
    if (obj) {
        IfcShellBasedSurfaceModel *clone = static_cast< IfcShellBasedSurfaceModel * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcShellBasedSurfaceModel(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSite(IfcSite *obj) {
    if (obj) {
        IfcSite *clone = static_cast< IfcSite * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSite(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSlab(IfcSlab *obj) {
    if (obj) {
        IfcSlab *clone = static_cast< IfcSlab * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSlab(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSlabType(IfcSlabType *obj) {
    if (obj) {
        IfcSlabType *clone = static_cast< IfcSlabType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSlabType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *obj) {
    if (obj) {
        IfcSlippageConnectionCondition *clone = static_cast< IfcSlippageConnectionCondition * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSlippageConnectionCondition(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSoundProperties(IfcSoundProperties *obj) {
    if (obj) {
        IfcSoundProperties *clone = static_cast< IfcSoundProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSoundProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSoundValue(IfcSoundValue *obj) {
    if (obj) {
        IfcSoundValue *clone = static_cast< IfcSoundValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSoundValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSpace(IfcSpace *obj) {
    if (obj) {
        IfcSpace *clone = static_cast< IfcSpace * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSpace(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSpaceHeaterType(IfcSpaceHeaterType *obj) {
    if (obj) {
        IfcSpaceHeaterType *clone = static_cast< IfcSpaceHeaterType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSpaceHeaterType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSpaceProgram(IfcSpaceProgram *obj) {
    if (obj) {
        IfcSpaceProgram *clone = static_cast< IfcSpaceProgram * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSpaceProgram(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *obj) {
    if (obj) {
        IfcSpaceThermalLoadProperties *clone = static_cast< IfcSpaceThermalLoadProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSpaceThermalLoadProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSpaceType(IfcSpaceType *obj) {
    if (obj) {
        IfcSpaceType *clone = static_cast< IfcSpaceType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSpaceType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSphere(IfcSphere *obj) {
    if (obj) {
        IfcSphere *clone = static_cast< IfcSphere * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSphere(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStackTerminalType(IfcStackTerminalType *obj) {
    if (obj) {
        IfcStackTerminalType *clone = static_cast< IfcStackTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStackTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStair(IfcStair *obj) {
    if (obj) {
        IfcStair *clone = static_cast< IfcStair * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStair(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStairFlight(IfcStairFlight *obj) {
    if (obj) {
        IfcStairFlight *clone = static_cast< IfcStairFlight * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStairFlight(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStairFlightType(IfcStairFlightType *obj) {
    if (obj) {
        IfcStairFlightType *clone = static_cast< IfcStairFlightType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStairFlightType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *obj) {
    if (obj) {
        IfcStructuralAnalysisModel *clone = static_cast< IfcStructuralAnalysisModel * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralAnalysisModel(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *obj) {
    if (obj) {
        IfcStructuralCurveConnection *clone = static_cast< IfcStructuralCurveConnection * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralCurveConnection(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralCurveMember(IfcStructuralCurveMember *obj) {
    if (obj) {
        IfcStructuralCurveMember *clone = static_cast< IfcStructuralCurveMember * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralCurveMember(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *obj) {
    if (obj) {
        IfcStructuralCurveMemberVarying *clone = static_cast< IfcStructuralCurveMemberVarying * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralCurveMemberVarying(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralLinearAction(IfcStructuralLinearAction *obj) {
    if (obj) {
        IfcStructuralLinearAction *clone = static_cast< IfcStructuralLinearAction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralLinearAction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *obj) {
    if (obj) {
        IfcStructuralLinearActionVarying *clone = static_cast< IfcStructuralLinearActionVarying * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralLinearActionVarying(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *obj) {
    if (obj) {
        IfcStructuralLoadGroup *clone = static_cast< IfcStructuralLoadGroup * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralLoadGroup(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *obj) {
    if (obj) {
        IfcStructuralLoadLinearForce *clone = static_cast< IfcStructuralLoadLinearForce * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralLoadLinearForce(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *obj) {
    if (obj) {
        IfcStructuralLoadPlanarForce *clone = static_cast< IfcStructuralLoadPlanarForce * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralLoadPlanarForce(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *obj) {
    if (obj) {
        IfcStructuralLoadSingleDisplacement *clone = static_cast< IfcStructuralLoadSingleDisplacement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralLoadSingleDisplacement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *obj) {
    if (obj) {
        IfcStructuralLoadSingleDisplacementDistortion *clone = static_cast< IfcStructuralLoadSingleDisplacementDistortion * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralLoadSingleDisplacementDistortion(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *obj) {
    if (obj) {
        IfcStructuralLoadSingleForce *clone = static_cast< IfcStructuralLoadSingleForce * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralLoadSingleForce(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *obj) {
    if (obj) {
        IfcStructuralLoadSingleForceWarping *clone = static_cast< IfcStructuralLoadSingleForceWarping * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralLoadSingleForceWarping(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *obj) {
    if (obj) {
        IfcStructuralLoadTemperature *clone = static_cast< IfcStructuralLoadTemperature * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralLoadTemperature(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *obj) {
    if (obj) {
        IfcStructuralPlanarAction *clone = static_cast< IfcStructuralPlanarAction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralPlanarAction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *obj) {
    if (obj) {
        IfcStructuralPlanarActionVarying *clone = static_cast< IfcStructuralPlanarActionVarying * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralPlanarActionVarying(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralPointAction(IfcStructuralPointAction *obj) {
    if (obj) {
        IfcStructuralPointAction *clone = static_cast< IfcStructuralPointAction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralPointAction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralPointConnection(IfcStructuralPointConnection *obj) {
    if (obj) {
        IfcStructuralPointConnection *clone = static_cast< IfcStructuralPointConnection * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralPointConnection(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralPointReaction(IfcStructuralPointReaction *obj) {
    if (obj) {
        IfcStructuralPointReaction *clone = static_cast< IfcStructuralPointReaction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralPointReaction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *obj) {
    if (obj) {
        IfcStructuralProfileProperties *clone = static_cast< IfcStructuralProfileProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralProfileProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralResultGroup(IfcStructuralResultGroup *obj) {
    if (obj) {
        IfcStructuralResultGroup *clone = static_cast< IfcStructuralResultGroup * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralResultGroup(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *obj) {
    if (obj) {
        IfcStructuralSteelProfileProperties *clone = static_cast< IfcStructuralSteelProfileProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralSteelProfileProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *obj) {
    if (obj) {
        IfcStructuralSurfaceConnection *clone = static_cast< IfcStructuralSurfaceConnection * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralSurfaceConnection(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *obj) {
    if (obj) {
        IfcStructuralSurfaceMember *clone = static_cast< IfcStructuralSurfaceMember * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralSurfaceMember(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *obj) {
    if (obj) {
        IfcStructuralSurfaceMemberVarying *clone = static_cast< IfcStructuralSurfaceMemberVarying * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuralSurfaceMemberVarying(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *obj) {
    if (obj) {
        IfcStructuredDimensionCallout *clone = static_cast< IfcStructuredDimensionCallout * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStructuredDimensionCallout(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStyledItem(IfcStyledItem *obj) {
    if (obj) {
        IfcStyledItem *clone = static_cast< IfcStyledItem * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStyledItem(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcStyledRepresentation(IfcStyledRepresentation *obj) {
    if (obj) {
        IfcStyledRepresentation *clone = static_cast< IfcStyledRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcStyledRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSubContractResource(IfcSubContractResource *obj) {
    if (obj) {
        IfcSubContractResource *clone = static_cast< IfcSubContractResource * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSubContractResource(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSubedge(IfcSubedge *obj) {
    if (obj) {
        IfcSubedge *clone = static_cast< IfcSubedge * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSubedge(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *obj) {
    if (obj) {
        IfcSurfaceCurveSweptAreaSolid *clone = static_cast< IfcSurfaceCurveSweptAreaSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSurfaceCurveSweptAreaSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *obj) {
    if (obj) {
        IfcSurfaceOfLinearExtrusion *clone = static_cast< IfcSurfaceOfLinearExtrusion * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSurfaceOfLinearExtrusion(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *obj) {
    if (obj) {
        IfcSurfaceOfRevolution *clone = static_cast< IfcSurfaceOfRevolution * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSurfaceOfRevolution(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSurfaceStyle(IfcSurfaceStyle *obj) {
    if (obj) {
        IfcSurfaceStyle *clone = static_cast< IfcSurfaceStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSurfaceStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *obj) {
    if (obj) {
        IfcSurfaceStyleLighting *clone = static_cast< IfcSurfaceStyleLighting * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSurfaceStyleLighting(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *obj) {
    if (obj) {
        IfcSurfaceStyleRefraction *clone = static_cast< IfcSurfaceStyleRefraction * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSurfaceStyleRefraction(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *obj) {
    if (obj) {
        IfcSurfaceStyleRendering *clone = static_cast< IfcSurfaceStyleRendering * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSurfaceStyleRendering(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *obj) {
    if (obj) {
        IfcSurfaceStyleShading *clone = static_cast< IfcSurfaceStyleShading * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSurfaceStyleShading(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *obj) {
    if (obj) {
        IfcSurfaceStyleWithTextures *clone = static_cast< IfcSurfaceStyleWithTextures * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSurfaceStyleWithTextures(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSweptDiskSolid(IfcSweptDiskSolid *obj) {
    if (obj) {
        IfcSweptDiskSolid *clone = static_cast< IfcSweptDiskSolid * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSweptDiskSolid(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *obj) {
    if (obj) {
        IfcSwitchingDeviceType *clone = static_cast< IfcSwitchingDeviceType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSwitchingDeviceType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSymbolStyle(IfcSymbolStyle *obj) {
    if (obj) {
        IfcSymbolStyle *clone = static_cast< IfcSymbolStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSymbolStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSystem(IfcSystem *obj) {
    if (obj) {
        IfcSystem *clone = static_cast< IfcSystem * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSystem(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *obj) {
    if (obj) {
        IfcSystemFurnitureElementType *clone = static_cast< IfcSystemFurnitureElementType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcSystemFurnitureElementType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTShapeProfileDef(IfcTShapeProfileDef *obj) {
    if (obj) {
        IfcTShapeProfileDef *clone = static_cast< IfcTShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTable(IfcTable *obj) {
    if (obj) {
        IfcTable *clone = static_cast< IfcTable * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTable(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTableRow(IfcTableRow *obj) {
    if (obj) {
        IfcTableRow *clone = static_cast< IfcTableRow * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTableRow(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTankType(IfcTankType *obj) {
    if (obj) {
        IfcTankType *clone = static_cast< IfcTankType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTankType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTask(IfcTask *obj) {
    if (obj) {
        IfcTask *clone = static_cast< IfcTask * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTask(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTelecomAddress(IfcTelecomAddress *obj) {
    if (obj) {
        IfcTelecomAddress *clone = static_cast< IfcTelecomAddress * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTelecomAddress(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTendon(IfcTendon *obj) {
    if (obj) {
        IfcTendon *clone = static_cast< IfcTendon * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTendon(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTendonAnchor(IfcTendonAnchor *obj) {
    if (obj) {
        IfcTendonAnchor *clone = static_cast< IfcTendonAnchor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTendonAnchor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTerminatorSymbol(IfcTerminatorSymbol *obj) {
    if (obj) {
        IfcTerminatorSymbol *clone = static_cast< IfcTerminatorSymbol * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTerminatorSymbol(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTextLiteral(IfcTextLiteral *obj) {
    if (obj) {
        IfcTextLiteral *clone = static_cast< IfcTextLiteral * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTextLiteral(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *obj) {
    if (obj) {
        IfcTextLiteralWithExtent *clone = static_cast< IfcTextLiteralWithExtent * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTextLiteralWithExtent(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTextStyle(IfcTextStyle *obj) {
    if (obj) {
        IfcTextStyle *clone = static_cast< IfcTextStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTextStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTextStyleFontModel(IfcTextStyleFontModel *obj) {
    if (obj) {
        IfcTextStyleFontModel *clone = static_cast< IfcTextStyleFontModel * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTextStyleFontModel(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *obj) {
    if (obj) {
        IfcTextStyleForDefinedFont *clone = static_cast< IfcTextStyleForDefinedFont * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTextStyleForDefinedFont(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTextStyleTextModel(IfcTextStyleTextModel *obj) {
    if (obj) {
        IfcTextStyleTextModel *clone = static_cast< IfcTextStyleTextModel * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTextStyleTextModel(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *obj) {
    if (obj) {
        IfcTextStyleWithBoxCharacteristics *clone = static_cast< IfcTextStyleWithBoxCharacteristics * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTextStyleWithBoxCharacteristics(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *obj) {
    if (obj) {
        IfcTextureCoordinateGenerator *clone = static_cast< IfcTextureCoordinateGenerator * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTextureCoordinateGenerator(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTextureMap(IfcTextureMap *obj) {
    if (obj) {
        IfcTextureMap *clone = static_cast< IfcTextureMap * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTextureMap(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTextureVertex(IfcTextureVertex *obj) {
    if (obj) {
        IfcTextureVertex *clone = static_cast< IfcTextureVertex * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTextureVertex(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *obj) {
    if (obj) {
        IfcThermalMaterialProperties *clone = static_cast< IfcThermalMaterialProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcThermalMaterialProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *obj) {
    if (obj) {
        IfcTimeSeriesReferenceRelationship *clone = static_cast< IfcTimeSeriesReferenceRelationship * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTimeSeriesReferenceRelationship(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *obj) {
    if (obj) {
        IfcTimeSeriesSchedule *clone = static_cast< IfcTimeSeriesSchedule * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTimeSeriesSchedule(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTimeSeriesValue(IfcTimeSeriesValue *obj) {
    if (obj) {
        IfcTimeSeriesValue *clone = static_cast< IfcTimeSeriesValue * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTimeSeriesValue(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTopologyRepresentation(IfcTopologyRepresentation *obj) {
    if (obj) {
        IfcTopologyRepresentation *clone = static_cast< IfcTopologyRepresentation * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTopologyRepresentation(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTransformerType(IfcTransformerType *obj) {
    if (obj) {
        IfcTransformerType *clone = static_cast< IfcTransformerType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTransformerType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTransportElement(IfcTransportElement *obj) {
    if (obj) {
        IfcTransportElement *clone = static_cast< IfcTransportElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTransportElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTransportElementType(IfcTransportElementType *obj) {
    if (obj) {
        IfcTransportElementType *clone = static_cast< IfcTransportElementType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTransportElementType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *obj) {
    if (obj) {
        IfcTrapeziumProfileDef *clone = static_cast< IfcTrapeziumProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTrapeziumProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTrimmedCurve(IfcTrimmedCurve *obj) {
    if (obj) {
        IfcTrimmedCurve *clone = static_cast< IfcTrimmedCurve * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTrimmedCurve(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTubeBundleType(IfcTubeBundleType *obj) {
    if (obj) {
        IfcTubeBundleType *clone = static_cast< IfcTubeBundleType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTubeBundleType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *obj) {
    if (obj) {
        IfcTwoDirectionRepeatFactor *clone = static_cast< IfcTwoDirectionRepeatFactor * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTwoDirectionRepeatFactor(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTypeObject(IfcTypeObject *obj) {
    if (obj) {
        IfcTypeObject *clone = static_cast< IfcTypeObject * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTypeObject(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcTypeProduct(IfcTypeProduct *obj) {
    if (obj) {
        IfcTypeProduct *clone = static_cast< IfcTypeProduct * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcTypeProduct(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcUShapeProfileDef(IfcUShapeProfileDef *obj) {
    if (obj) {
        IfcUShapeProfileDef *clone = static_cast< IfcUShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcUShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcUnitAssignment(IfcUnitAssignment *obj) {
    if (obj) {
        IfcUnitAssignment *clone = static_cast< IfcUnitAssignment * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcUnitAssignment(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *obj) {
    if (obj) {
        IfcUnitaryEquipmentType *clone = static_cast< IfcUnitaryEquipmentType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcUnitaryEquipmentType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcValveType(IfcValveType *obj) {
    if (obj) {
        IfcValveType *clone = static_cast< IfcValveType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcValveType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcVector(IfcVector *obj) {
    if (obj) {
        IfcVector *clone = static_cast< IfcVector * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcVector(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcVertex(IfcVertex *obj) {
    if (obj) {
        IfcVertex *clone = static_cast< IfcVertex * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcVertex(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *obj) {
    if (obj) {
        IfcVertexBasedTextureMap *clone = static_cast< IfcVertexBasedTextureMap * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcVertexBasedTextureMap(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcVertexLoop(IfcVertexLoop *obj) {
    if (obj) {
        IfcVertexLoop *clone = static_cast< IfcVertexLoop * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcVertexLoop(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcVertexPoint(IfcVertexPoint *obj) {
    if (obj) {
        IfcVertexPoint *clone = static_cast< IfcVertexPoint * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcVertexPoint(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *obj) {
    if (obj) {
        IfcVibrationIsolatorType *clone = static_cast< IfcVibrationIsolatorType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcVibrationIsolatorType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcVirtualElement(IfcVirtualElement *obj) {
    if (obj) {
        IfcVirtualElement *clone = static_cast< IfcVirtualElement * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcVirtualElement(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *obj) {
    if (obj) {
        IfcVirtualGridIntersection *clone = static_cast< IfcVirtualGridIntersection * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcVirtualGridIntersection(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcWall(IfcWall *obj) {
    if (obj) {
        IfcWall *clone = static_cast< IfcWall * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcWall(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcWallStandardCase(IfcWallStandardCase *obj) {
    if (obj) {
        IfcWallStandardCase *clone = static_cast< IfcWallStandardCase * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcWallStandardCase(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcWallType(IfcWallType *obj) {
    if (obj) {
        IfcWallType *clone = static_cast< IfcWallType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcWallType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcWasteTerminalType(IfcWasteTerminalType *obj) {
    if (obj) {
        IfcWasteTerminalType *clone = static_cast< IfcWasteTerminalType * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcWasteTerminalType(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcWaterProperties(IfcWaterProperties *obj) {
    if (obj) {
        IfcWaterProperties *clone = static_cast< IfcWaterProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcWaterProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcWindow(IfcWindow *obj) {
    if (obj) {
        IfcWindow *clone = static_cast< IfcWindow * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcWindow(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcWindowLiningProperties(IfcWindowLiningProperties *obj) {
    if (obj) {
        IfcWindowLiningProperties *clone = static_cast< IfcWindowLiningProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcWindowLiningProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcWindowPanelProperties(IfcWindowPanelProperties *obj) {
    if (obj) {
        IfcWindowPanelProperties *clone = static_cast< IfcWindowPanelProperties * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcWindowPanelProperties(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcWindowStyle(IfcWindowStyle *obj) {
    if (obj) {
        IfcWindowStyle *clone = static_cast< IfcWindowStyle * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcWindowStyle(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcWorkPlan(IfcWorkPlan *obj) {
    if (obj) {
        IfcWorkPlan *clone = static_cast< IfcWorkPlan * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcWorkPlan(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcWorkSchedule(IfcWorkSchedule *obj) {
    if (obj) {
        IfcWorkSchedule *clone = static_cast< IfcWorkSchedule * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcWorkSchedule(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcZShapeProfileDef(IfcZShapeProfileDef *obj) {
    if (obj) {
        IfcZShapeProfileDef *clone = static_cast< IfcZShapeProfileDef * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcZShapeProfileDef(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

bool ReparentCopyOp::visitIfcZone(IfcZone *obj) {
    if (obj) {
        IfcZone *clone = static_cast< IfcZone * > (find(obj));
        if (!clone) {
            CopyOp::_bo = _dataset->cloneIfcZone(*obj, *this);
        }
        else {
            CopyOp::_bo = clone;
        }
        return true;
    }
    else {
        return false;
    }
}

