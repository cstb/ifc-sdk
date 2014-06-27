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

#include <ifc2x3/FalseVisitor.h>

#include <ifc2x3/Ifc2DCompositeCurve.h>
#include <ifc2x3/IfcActionRequest.h>
#include <ifc2x3/IfcActor.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcActuatorType.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/IfcAirTerminalBoxType.h>
#include <ifc2x3/IfcAirTerminalType.h>
#include <ifc2x3/IfcAirToAirHeatRecoveryType.h>
#include <ifc2x3/IfcAlarmType.h>
#include <ifc2x3/IfcAngularDimension.h>
#include <ifc2x3/IfcAnnotation.h>
#include <ifc2x3/IfcAnnotationCurveOccurrence.h>
#include <ifc2x3/IfcAnnotationFillArea.h>
#include <ifc2x3/IfcAnnotationFillAreaOccurrence.h>
#include <ifc2x3/IfcAnnotationOccurrence.h>
#include <ifc2x3/IfcAnnotationSurface.h>
#include <ifc2x3/IfcAnnotationSurfaceOccurrence.h>
#include <ifc2x3/IfcAnnotationSymbolOccurrence.h>
#include <ifc2x3/IfcAnnotationTextOccurrence.h>
#include <ifc2x3/IfcApplication.h>
#include <ifc2x3/IfcAppliedValue.h>
#include <ifc2x3/IfcAppliedValueRelationship.h>
#include <ifc2x3/IfcAppliedValueSelect.h>
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
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcAxis2Placement2D.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcBSplineCurve.h>
#include <ifc2x3/IfcBeam.h>
#include <ifc2x3/IfcBeamType.h>
#include <ifc2x3/IfcBezierCurve.h>
#include <ifc2x3/IfcBlobTexture.h>
#include <ifc2x3/IfcBlock.h>
#include <ifc2x3/IfcBoilerType.h>
#include <ifc2x3/IfcBooleanClippingResult.h>
#include <ifc2x3/IfcBooleanOperand.h>
#include <ifc2x3/IfcBooleanResult.h>
#include <ifc2x3/IfcBoundaryCondition.h>
#include <ifc2x3/IfcBoundaryEdgeCondition.h>
#include <ifc2x3/IfcBoundaryFaceCondition.h>
#include <ifc2x3/IfcBoundaryNodeCondition.h>
#include <ifc2x3/IfcBoundaryNodeConditionWarping.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <ifc2x3/IfcBoundedSurface.h>
#include <ifc2x3/IfcBoundingBox.h>
#include <ifc2x3/IfcBoxedHalfSpace.h>
#include <ifc2x3/IfcBuilding.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/IfcBuildingElementComponent.h>
#include <ifc2x3/IfcBuildingElementPart.h>
#include <ifc2x3/IfcBuildingElementProxy.h>
#include <ifc2x3/IfcBuildingElementProxyType.h>
#include <ifc2x3/IfcBuildingElementType.h>
#include <ifc2x3/IfcBuildingStorey.h>
#include <ifc2x3/IfcCShapeProfileDef.h>
#include <ifc2x3/IfcCableCarrierFittingType.h>
#include <ifc2x3/IfcCableCarrierSegmentType.h>
#include <ifc2x3/IfcCableSegmentType.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcCartesianTransformationOperator.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include <ifc2x3/IfcCartesianTransformationOperator2DnonUniform.h>
#include <ifc2x3/IfcCartesianTransformationOperator3D.h>
#include <ifc2x3/IfcCartesianTransformationOperator3DnonUniform.h>
#include <ifc2x3/IfcCenterLineProfileDef.h>
#include <ifc2x3/IfcChamferEdgeFeature.h>
#include <ifc2x3/IfcCharacterStyleSelect.h>
#include <ifc2x3/IfcChillerType.h>
#include <ifc2x3/IfcCircle.h>
#include <ifc2x3/IfcCircleHollowProfileDef.h>
#include <ifc2x3/IfcCircleProfileDef.h>
#include <ifc2x3/IfcClassification.h>
#include <ifc2x3/IfcClassificationItem.h>
#include <ifc2x3/IfcClassificationItemRelationship.h>
#include <ifc2x3/IfcClassificationNotation.h>
#include <ifc2x3/IfcClassificationNotationFacet.h>
#include <ifc2x3/IfcClassificationNotationSelect.h>
#include <ifc2x3/IfcClassificationReference.h>
#include <ifc2x3/IfcClosedShell.h>
#include <ifc2x3/IfcCoilType.h>
#include <ifc2x3/IfcColour.h>
#include <ifc2x3/IfcColourOrFactor.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/IfcColourSpecification.h>
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
#include <ifc2x3/IfcConditionCriterionSelect.h>
#include <ifc2x3/IfcConic.h>
#include <ifc2x3/IfcConnectedFaceSet.h>
#include <ifc2x3/IfcConnectionCurveGeometry.h>
#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/IfcConnectionPointEccentricity.h>
#include <ifc2x3/IfcConnectionPointGeometry.h>
#include <ifc2x3/IfcConnectionPortGeometry.h>
#include <ifc2x3/IfcConnectionSurfaceGeometry.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/IfcConstraintAggregationRelationship.h>
#include <ifc2x3/IfcConstraintClassificationRelationship.h>
#include <ifc2x3/IfcConstraintRelationship.h>
#include <ifc2x3/IfcConstructionEquipmentResource.h>
#include <ifc2x3/IfcConstructionMaterialResource.h>
#include <ifc2x3/IfcConstructionProductResource.h>
#include <ifc2x3/IfcConstructionResource.h>
#include <ifc2x3/IfcContextDependentUnit.h>
#include <ifc2x3/IfcControl.h>
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
#include <ifc2x3/IfcCsgPrimitive3D.h>
#include <ifc2x3/IfcCsgSelect.h>
#include <ifc2x3/IfcCsgSolid.h>
#include <ifc2x3/IfcCurrencyRelationship.h>
#include <ifc2x3/IfcCurtainWall.h>
#include <ifc2x3/IfcCurtainWallType.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcCurveBoundedPlane.h>
#include <ifc2x3/IfcCurveFontOrScaledCurveFontSelect.h>
#include <ifc2x3/IfcCurveOrEdgeCurve.h>
#include <ifc2x3/IfcCurveStyle.h>
#include <ifc2x3/IfcCurveStyleFont.h>
#include <ifc2x3/IfcCurveStyleFontAndScaling.h>
#include <ifc2x3/IfcCurveStyleFontPattern.h>
#include <ifc2x3/IfcCurveStyleFontSelect.h>
#include <ifc2x3/IfcDamperType.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDefinedSymbol.h>
#include <ifc2x3/IfcDefinedSymbolSelect.h>
#include <ifc2x3/IfcDerivedMeasureValue.h>
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
#include <ifc2x3/IfcDistributionControlElementType.h>
#include <ifc2x3/IfcDistributionElement.h>
#include <ifc2x3/IfcDistributionElementType.h>
#include <ifc2x3/IfcDistributionFlowElement.h>
#include <ifc2x3/IfcDistributionFlowElementType.h>
#include <ifc2x3/IfcDistributionPort.h>
#include <ifc2x3/IfcDocumentElectronicFormat.h>
#include <ifc2x3/IfcDocumentInformation.h>
#include <ifc2x3/IfcDocumentInformationRelationship.h>
#include <ifc2x3/IfcDocumentReference.h>
#include <ifc2x3/IfcDocumentSelect.h>
#include <ifc2x3/IfcDoor.h>
#include <ifc2x3/IfcDoorLiningProperties.h>
#include <ifc2x3/IfcDoorPanelProperties.h>
#include <ifc2x3/IfcDoorStyle.h>
#include <ifc2x3/IfcDraughtingCallout.h>
#include <ifc2x3/IfcDraughtingCalloutElement.h>
#include <ifc2x3/IfcDraughtingCalloutRelationship.h>
#include <ifc2x3/IfcDraughtingPreDefinedColour.h>
#include <ifc2x3/IfcDraughtingPreDefinedCurveFont.h>
#include <ifc2x3/IfcDraughtingPreDefinedTextFont.h>
#include <ifc2x3/IfcDuctFittingType.h>
#include <ifc2x3/IfcDuctSegmentType.h>
#include <ifc2x3/IfcDuctSilencerType.h>
#include <ifc2x3/IfcEdge.h>
#include <ifc2x3/IfcEdgeCurve.h>
#include <ifc2x3/IfcEdgeFeature.h>
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
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcElementAssembly.h>
#include <ifc2x3/IfcElementComponent.h>
#include <ifc2x3/IfcElementComponentType.h>
#include <ifc2x3/IfcElementQuantity.h>
#include <ifc2x3/IfcElementType.h>
#include <ifc2x3/IfcElementarySurface.h>
#include <ifc2x3/IfcEllipse.h>
#include <ifc2x3/IfcEllipseProfileDef.h>
#include <ifc2x3/IfcEnergyConversionDevice.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/IfcEnergyProperties.h>
#include <ifc2x3/IfcEnvironmentalImpactValue.h>
#include <ifc2x3/IfcEquipmentElement.h>
#include <ifc2x3/IfcEquipmentStandard.h>
#include <ifc2x3/IfcEvaporativeCoolerType.h>
#include <ifc2x3/IfcEvaporatorType.h>
#include <ifc2x3/IfcExtendedMaterialProperties.h>
#include <ifc2x3/IfcExternalReference.h>
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
#include <ifc2x3/IfcFeatureElement.h>
#include <ifc2x3/IfcFeatureElementAddition.h>
#include <ifc2x3/IfcFeatureElementSubtraction.h>
#include <ifc2x3/IfcFillAreaStyle.h>
#include <ifc2x3/IfcFillAreaStyleHatching.h>
#include <ifc2x3/IfcFillAreaStyleTileShapeSelect.h>
#include <ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h>
#include <ifc2x3/IfcFillAreaStyleTiles.h>
#include <ifc2x3/IfcFillStyleSelect.h>
#include <ifc2x3/IfcFilterType.h>
#include <ifc2x3/IfcFireSuppressionTerminalType.h>
#include <ifc2x3/IfcFlowController.h>
#include <ifc2x3/IfcFlowControllerType.h>
#include <ifc2x3/IfcFlowFitting.h>
#include <ifc2x3/IfcFlowFittingType.h>
#include <ifc2x3/IfcFlowInstrumentType.h>
#include <ifc2x3/IfcFlowMeterType.h>
#include <ifc2x3/IfcFlowMovingDevice.h>
#include <ifc2x3/IfcFlowMovingDeviceType.h>
#include <ifc2x3/IfcFlowSegment.h>
#include <ifc2x3/IfcFlowSegmentType.h>
#include <ifc2x3/IfcFlowStorageDevice.h>
#include <ifc2x3/IfcFlowStorageDeviceType.h>
#include <ifc2x3/IfcFlowTerminal.h>
#include <ifc2x3/IfcFlowTerminalType.h>
#include <ifc2x3/IfcFlowTreatmentDevice.h>
#include <ifc2x3/IfcFlowTreatmentDeviceType.h>
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
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/IfcGeometricRepresentationSubContext.h>
#include <ifc2x3/IfcGeometricSet.h>
#include <ifc2x3/IfcGeometricSetSelect.h>
#include <ifc2x3/IfcGrid.h>
#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcGridPlacement.h>
#include <ifc2x3/IfcGroup.h>
#include <ifc2x3/IfcHalfSpaceSolid.h>
#include <ifc2x3/IfcHatchLineDistanceSelect.h>
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
#include <ifc2x3/IfcLayeredItem.h>
#include <ifc2x3/IfcLibraryInformation.h>
#include <ifc2x3/IfcLibraryReference.h>
#include <ifc2x3/IfcLibrarySelect.h>
#include <ifc2x3/IfcLightDistributionData.h>
#include <ifc2x3/IfcLightDistributionDataSourceSelect.h>
#include <ifc2x3/IfcLightFixtureType.h>
#include <ifc2x3/IfcLightIntensityDistribution.h>
#include <ifc2x3/IfcLightSource.h>
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
#include <ifc2x3/IfcManifoldSolidBrep.h>
#include <ifc2x3/IfcMappedItem.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcMaterialClassificationRelationship.h>
#include <ifc2x3/IfcMaterialDefinitionRepresentation.h>
#include <ifc2x3/IfcMaterialLayer.h>
#include <ifc2x3/IfcMaterialLayerSet.h>
#include <ifc2x3/IfcMaterialLayerSetUsage.h>
#include <ifc2x3/IfcMaterialList.h>
#include <ifc2x3/IfcMaterialProperties.h>
#include <ifc2x3/IfcMaterialSelect.h>
#include <ifc2x3/IfcMeasureValue.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcMechanicalConcreteMaterialProperties.h>
#include <ifc2x3/IfcMechanicalFastener.h>
#include <ifc2x3/IfcMechanicalFastenerType.h>
#include <ifc2x3/IfcMechanicalMaterialProperties.h>
#include <ifc2x3/IfcMechanicalSteelMaterialProperties.h>
#include <ifc2x3/IfcMember.h>
#include <ifc2x3/IfcMemberType.h>
#include <ifc2x3/IfcMetric.h>
#include <ifc2x3/IfcMetricValueSelect.h>
#include <ifc2x3/IfcMonetaryUnit.h>
#include <ifc2x3/IfcMotorConnectionType.h>
#include <ifc2x3/IfcMove.h>
#include <ifc2x3/IfcNamedUnit.h>
#include <ifc2x3/IfcObject.h>
#include <ifc2x3/IfcObjectDefinition.h>
#include <ifc2x3/IfcObjectPlacement.h>
#include <ifc2x3/IfcObjectReferenceSelect.h>
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
#include <ifc2x3/IfcOrientationSelect.h>
#include <ifc2x3/IfcOrientedEdge.h>
#include <ifc2x3/IfcOutletType.h>
#include <ifc2x3/IfcOwnerHistory.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/IfcPath.h>
#include <ifc2x3/IfcPerformanceHistory.h>
#include <ifc2x3/IfcPermeableCoveringProperties.h>
#include <ifc2x3/IfcPermit.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/IfcPhysicalComplexQuantity.h>
#include <ifc2x3/IfcPhysicalQuantity.h>
#include <ifc2x3/IfcPhysicalSimpleQuantity.h>
#include <ifc2x3/IfcPile.h>
#include <ifc2x3/IfcPipeFittingType.h>
#include <ifc2x3/IfcPipeSegmentType.h>
#include <ifc2x3/IfcPixelTexture.h>
#include <ifc2x3/IfcPlacement.h>
#include <ifc2x3/IfcPlanarBox.h>
#include <ifc2x3/IfcPlanarExtent.h>
#include <ifc2x3/IfcPlane.h>
#include <ifc2x3/IfcPlate.h>
#include <ifc2x3/IfcPlateType.h>
#include <ifc2x3/IfcPoint.h>
#include <ifc2x3/IfcPointOnCurve.h>
#include <ifc2x3/IfcPointOnSurface.h>
#include <ifc2x3/IfcPointOrVertexPoint.h>
#include <ifc2x3/IfcPolyLoop.h>
#include <ifc2x3/IfcPolygonalBoundedHalfSpace.h>
#include <ifc2x3/IfcPolyline.h>
#include <ifc2x3/IfcPort.h>
#include <ifc2x3/IfcPostalAddress.h>
#include <ifc2x3/IfcPreDefinedColour.h>
#include <ifc2x3/IfcPreDefinedCurveFont.h>
#include <ifc2x3/IfcPreDefinedDimensionSymbol.h>
#include <ifc2x3/IfcPreDefinedItem.h>
#include <ifc2x3/IfcPreDefinedPointMarkerSymbol.h>
#include <ifc2x3/IfcPreDefinedSymbol.h>
#include <ifc2x3/IfcPreDefinedTerminatorSymbol.h>
#include <ifc2x3/IfcPreDefinedTextFont.h>
#include <ifc2x3/IfcPresentationLayerAssignment.h>
#include <ifc2x3/IfcPresentationLayerWithStyle.h>
#include <ifc2x3/IfcPresentationStyle.h>
#include <ifc2x3/IfcPresentationStyleAssignment.h>
#include <ifc2x3/IfcPresentationStyleSelect.h>
#include <ifc2x3/IfcProcedure.h>
#include <ifc2x3/IfcProcess.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcProductDefinitionShape.h>
#include <ifc2x3/IfcProductRepresentation.h>
#include <ifc2x3/IfcProductsOfCombustionProperties.h>
#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/IfcProfileProperties.h>
#include <ifc2x3/IfcProject.h>
#include <ifc2x3/IfcProjectOrder.h>
#include <ifc2x3/IfcProjectOrderRecord.h>
#include <ifc2x3/IfcProjectionCurve.h>
#include <ifc2x3/IfcProjectionElement.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/IfcPropertyBoundedValue.h>
#include <ifc2x3/IfcPropertyConstraintRelationship.h>
#include <ifc2x3/IfcPropertyDefinition.h>
#include <ifc2x3/IfcPropertyDependencyRelationship.h>
#include <ifc2x3/IfcPropertyEnumeratedValue.h>
#include <ifc2x3/IfcPropertyEnumeration.h>
#include <ifc2x3/IfcPropertyListValue.h>
#include <ifc2x3/IfcPropertyReferenceValue.h>
#include <ifc2x3/IfcPropertySet.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
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
#include <ifc2x3/IfcReinforcingElement.h>
#include <ifc2x3/IfcReinforcingMesh.h>
#include <ifc2x3/IfcRelAggregates.h>
#include <ifc2x3/IfcRelAssigns.h>
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
#include <ifc2x3/IfcRelConnects.h>
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
#include <ifc2x3/IfcRelDecomposes.h>
#include <ifc2x3/IfcRelDefines.h>
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
#include <ifc2x3/IfcRelationship.h>
#include <ifc2x3/IfcRelaxation.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/IfcRepresentationContext.h>
#include <ifc2x3/IfcRepresentationItem.h>
#include <ifc2x3/IfcRepresentationMap.h>
#include <ifc2x3/IfcResource.h>
#include <ifc2x3/IfcRevolvedAreaSolid.h>
#include <ifc2x3/IfcRibPlateProfileProperties.h>
#include <ifc2x3/IfcRightCircularCone.h>
#include <ifc2x3/IfcRightCircularCylinder.h>
#include <ifc2x3/IfcRoof.h>
#include <ifc2x3/IfcRoot.h>
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
#include <ifc2x3/IfcShapeModel.h>
#include <ifc2x3/IfcShapeRepresentation.h>
#include <ifc2x3/IfcShell.h>
#include <ifc2x3/IfcShellBasedSurfaceModel.h>
#include <ifc2x3/IfcSimpleProperty.h>
#include <ifc2x3/IfcSimpleValue.h>
#include <ifc2x3/IfcSite.h>
#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/IfcSlab.h>
#include <ifc2x3/IfcSlabType.h>
#include <ifc2x3/IfcSlippageConnectionCondition.h>
#include <ifc2x3/IfcSolidModel.h>
#include <ifc2x3/IfcSoundProperties.h>
#include <ifc2x3/IfcSoundValue.h>
#include <ifc2x3/IfcSpace.h>
#include <ifc2x3/IfcSpaceHeaterType.h>
#include <ifc2x3/IfcSpaceProgram.h>
#include <ifc2x3/IfcSpaceThermalLoadProperties.h>
#include <ifc2x3/IfcSpaceType.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/IfcSpatialStructureElementType.h>
#include <ifc2x3/IfcSpecularHighlightSelect.h>
#include <ifc2x3/IfcSphere.h>
#include <ifc2x3/IfcStackTerminalType.h>
#include <ifc2x3/IfcStair.h>
#include <ifc2x3/IfcStairFlight.h>
#include <ifc2x3/IfcStairFlightType.h>
#include <ifc2x3/IfcStructuralAction.h>
#include <ifc2x3/IfcStructuralActivity.h>
#include <ifc2x3/IfcStructuralActivityAssignmentSelect.h>
#include <ifc2x3/IfcStructuralAnalysisModel.h>
#include <ifc2x3/IfcStructuralConnection.h>
#include <ifc2x3/IfcStructuralConnectionCondition.h>
#include <ifc2x3/IfcStructuralCurveConnection.h>
#include <ifc2x3/IfcStructuralCurveMember.h>
#include <ifc2x3/IfcStructuralCurveMemberVarying.h>
#include <ifc2x3/IfcStructuralItem.h>
#include <ifc2x3/IfcStructuralLinearAction.h>
#include <ifc2x3/IfcStructuralLinearActionVarying.h>
#include <ifc2x3/IfcStructuralLoad.h>
#include <ifc2x3/IfcStructuralLoadGroup.h>
#include <ifc2x3/IfcStructuralLoadLinearForce.h>
#include <ifc2x3/IfcStructuralLoadPlanarForce.h>
#include <ifc2x3/IfcStructuralLoadSingleDisplacement.h>
#include <ifc2x3/IfcStructuralLoadSingleDisplacementDistortion.h>
#include <ifc2x3/IfcStructuralLoadSingleForce.h>
#include <ifc2x3/IfcStructuralLoadSingleForceWarping.h>
#include <ifc2x3/IfcStructuralLoadStatic.h>
#include <ifc2x3/IfcStructuralLoadTemperature.h>
#include <ifc2x3/IfcStructuralMember.h>
#include <ifc2x3/IfcStructuralPlanarAction.h>
#include <ifc2x3/IfcStructuralPlanarActionVarying.h>
#include <ifc2x3/IfcStructuralPointAction.h>
#include <ifc2x3/IfcStructuralPointConnection.h>
#include <ifc2x3/IfcStructuralPointReaction.h>
#include <ifc2x3/IfcStructuralProfileProperties.h>
#include <ifc2x3/IfcStructuralReaction.h>
#include <ifc2x3/IfcStructuralResultGroup.h>
#include <ifc2x3/IfcStructuralSteelProfileProperties.h>
#include <ifc2x3/IfcStructuralSurfaceConnection.h>
#include <ifc2x3/IfcStructuralSurfaceMember.h>
#include <ifc2x3/IfcStructuralSurfaceMemberVarying.h>
#include <ifc2x3/IfcStructuredDimensionCallout.h>
#include <ifc2x3/IfcStyleModel.h>
#include <ifc2x3/IfcStyledItem.h>
#include <ifc2x3/IfcStyledRepresentation.h>
#include <ifc2x3/IfcSubContractResource.h>
#include <ifc2x3/IfcSubedge.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/IfcSurfaceCurveSweptAreaSolid.h>
#include <ifc2x3/IfcSurfaceOfLinearExtrusion.h>
#include <ifc2x3/IfcSurfaceOfRevolution.h>
#include <ifc2x3/IfcSurfaceOrFaceSurface.h>
#include <ifc2x3/IfcSurfaceStyle.h>
#include <ifc2x3/IfcSurfaceStyleElementSelect.h>
#include <ifc2x3/IfcSurfaceStyleLighting.h>
#include <ifc2x3/IfcSurfaceStyleRefraction.h>
#include <ifc2x3/IfcSurfaceStyleRendering.h>
#include <ifc2x3/IfcSurfaceStyleShading.h>
#include <ifc2x3/IfcSurfaceStyleWithTextures.h>
#include <ifc2x3/IfcSurfaceTexture.h>
#include <ifc2x3/IfcSweptAreaSolid.h>
#include <ifc2x3/IfcSweptDiskSolid.h>
#include <ifc2x3/IfcSweptSurface.h>
#include <ifc2x3/IfcSwitchingDeviceType.h>
#include <ifc2x3/IfcSymbolStyle.h>
#include <ifc2x3/IfcSymbolStyleSelect.h>
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
#include <ifc2x3/IfcTextFontSelect.h>
#include <ifc2x3/IfcTextLiteral.h>
#include <ifc2x3/IfcTextLiteralWithExtent.h>
#include <ifc2x3/IfcTextStyle.h>
#include <ifc2x3/IfcTextStyleFontModel.h>
#include <ifc2x3/IfcTextStyleForDefinedFont.h>
#include <ifc2x3/IfcTextStyleSelect.h>
#include <ifc2x3/IfcTextStyleTextModel.h>
#include <ifc2x3/IfcTextStyleWithBoxCharacteristics.h>
#include <ifc2x3/IfcTextureCoordinate.h>
#include <ifc2x3/IfcTextureCoordinateGenerator.h>
#include <ifc2x3/IfcTextureMap.h>
#include <ifc2x3/IfcTextureVertex.h>
#include <ifc2x3/IfcThermalMaterialProperties.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcTimeSeriesReferenceRelationship.h>
#include <ifc2x3/IfcTimeSeriesSchedule.h>
#include <ifc2x3/IfcTimeSeriesValue.h>
#include <ifc2x3/IfcTopologicalRepresentationItem.h>
#include <ifc2x3/IfcTopologyRepresentation.h>
#include <ifc2x3/IfcTransformerType.h>
#include <ifc2x3/IfcTransportElement.h>
#include <ifc2x3/IfcTransportElementType.h>
#include <ifc2x3/IfcTrapeziumProfileDef.h>
#include <ifc2x3/IfcTrimmedCurve.h>
#include <ifc2x3/IfcTrimmingSelect.h>
#include <ifc2x3/IfcTubeBundleType.h>
#include <ifc2x3/IfcTwoDirectionRepeatFactor.h>
#include <ifc2x3/IfcTypeObject.h>
#include <ifc2x3/IfcTypeProduct.h>
#include <ifc2x3/IfcUShapeProfileDef.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/IfcUnitAssignment.h>
#include <ifc2x3/IfcUnitaryEquipmentType.h>
#include <ifc2x3/IfcValue.h>
#include <ifc2x3/IfcValveType.h>
#include <ifc2x3/IfcVector.h>
#include <ifc2x3/IfcVectorOrDirection.h>
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
#include <ifc2x3/IfcWorkControl.h>
#include <ifc2x3/IfcWorkPlan.h>
#include <ifc2x3/IfcWorkSchedule.h>
#include <ifc2x3/IfcZShapeProfileDef.h>
#include <ifc2x3/IfcZone.h>



#include "precompiled.h"

using namespace ifc2x3;

FalseVisitor::FalseVisitor() {
}

FalseVisitor::~FalseVisitor() {
}

bool FalseVisitor::visitIfcActorSelect(IfcActorSelect *value) {
    LOG_ERROR("Failed to visit IfcActorSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAppliedValueSelect(IfcAppliedValueSelect *value) {
    LOG_ERROR("Failed to visit IfcAppliedValueSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAxis2Placement(IfcAxis2Placement *value) {
    LOG_ERROR("Failed to visit IfcAxis2Placement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBooleanOperand(IfcBooleanOperand *value) {
    LOG_ERROR("Failed to visit IfcBooleanOperand(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCharacterStyleSelect(IfcCharacterStyleSelect *value) {
    LOG_ERROR("Failed to visit IfcCharacterStyleSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationNotationSelect(IfcClassificationNotationSelect *value) {
    LOG_ERROR("Failed to visit IfcClassificationNotationSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColour(IfcColour *value) {
    LOG_ERROR("Failed to visit IfcColour(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColourOrFactor(IfcColourOrFactor *value) {
    LOG_ERROR("Failed to visit IfcColourOrFactor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConditionCriterionSelect(IfcConditionCriterionSelect *value) {
    LOG_ERROR("Failed to visit IfcConditionCriterionSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCsgSelect(IfcCsgSelect *value) {
    LOG_ERROR("Failed to visit IfcCsgSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveFontOrScaledCurveFontSelect(IfcCurveFontOrScaledCurveFontSelect *value) {
    LOG_ERROR("Failed to visit IfcCurveFontOrScaledCurveFontSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveOrEdgeCurve(IfcCurveOrEdgeCurve *value) {
    LOG_ERROR("Failed to visit IfcCurveOrEdgeCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFontSelect(IfcCurveStyleFontSelect *value) {
    LOG_ERROR("Failed to visit IfcCurveStyleFontSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDateTimeSelect(IfcDateTimeSelect *value) {
    LOG_ERROR("Failed to visit IfcDateTimeSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDefinedSymbolSelect(IfcDefinedSymbolSelect *value) {
    LOG_ERROR("Failed to visit IfcDefinedSymbolSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDerivedMeasureValue(IfcDerivedMeasureValue *value) {
    LOG_ERROR("Failed to visit IfcDerivedMeasureValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDocumentSelect(IfcDocumentSelect *value) {
    LOG_ERROR("Failed to visit IfcDocumentSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingCalloutElement(IfcDraughtingCalloutElement *value) {
    LOG_ERROR("Failed to visit IfcDraughtingCalloutElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleTileShapeSelect(IfcFillAreaStyleTileShapeSelect *value) {
    LOG_ERROR("Failed to visit IfcFillAreaStyleTileShapeSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillStyleSelect(IfcFillStyleSelect *value) {
    LOG_ERROR("Failed to visit IfcFillStyleSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricSetSelect(IfcGeometricSetSelect *value) {
    LOG_ERROR("Failed to visit IfcGeometricSetSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcHatchLineDistanceSelect(IfcHatchLineDistanceSelect *value) {
    LOG_ERROR("Failed to visit IfcHatchLineDistanceSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLayeredItem(IfcLayeredItem *value) {
    LOG_ERROR("Failed to visit IfcLayeredItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLibrarySelect(IfcLibrarySelect *value) {
    LOG_ERROR("Failed to visit IfcLibrarySelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightDistributionDataSourceSelect(IfcLightDistributionDataSourceSelect *value) {
    LOG_ERROR("Failed to visit IfcLightDistributionDataSourceSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialSelect(IfcMaterialSelect *value) {
    LOG_ERROR("Failed to visit IfcMaterialSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMeasureValue(IfcMeasureValue *value) {
    LOG_ERROR("Failed to visit IfcMeasureValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMetricValueSelect(IfcMetricValueSelect *value) {
    LOG_ERROR("Failed to visit IfcMetricValueSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcObjectReferenceSelect(IfcObjectReferenceSelect *value) {
    LOG_ERROR("Failed to visit IfcObjectReferenceSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOrientationSelect(IfcOrientationSelect *value) {
    LOG_ERROR("Failed to visit IfcOrientationSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPointOrVertexPoint(IfcPointOrVertexPoint *value) {
    LOG_ERROR("Failed to visit IfcPointOrVertexPoint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPresentationStyleSelect(IfcPresentationStyleSelect *value) {
    LOG_ERROR("Failed to visit IfcPresentationStyleSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcShell(IfcShell *value) {
    LOG_ERROR("Failed to visit IfcShell(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSimpleValue(IfcSimpleValue *value) {
    LOG_ERROR("Failed to visit IfcSimpleValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSizeSelect(IfcSizeSelect *value) {
    LOG_ERROR("Failed to visit IfcSizeSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpecularHighlightSelect(IfcSpecularHighlightSelect *value) {
    LOG_ERROR("Failed to visit IfcSpecularHighlightSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralActivityAssignmentSelect(IfcStructuralActivityAssignmentSelect *value) {
    LOG_ERROR("Failed to visit IfcStructuralActivityAssignmentSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceOrFaceSurface(IfcSurfaceOrFaceSurface *value) {
    LOG_ERROR("Failed to visit IfcSurfaceOrFaceSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleElementSelect(IfcSurfaceStyleElementSelect *value) {
    LOG_ERROR("Failed to visit IfcSurfaceStyleElementSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSymbolStyleSelect(IfcSymbolStyleSelect *value) {
    LOG_ERROR("Failed to visit IfcSymbolStyleSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextFontSelect(IfcTextFontSelect *value) {
    LOG_ERROR("Failed to visit IfcTextFontSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyleSelect(IfcTextStyleSelect *value) {
    LOG_ERROR("Failed to visit IfcTextStyleSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTrimmingSelect(IfcTrimmingSelect *value) {
    LOG_ERROR("Failed to visit IfcTrimmingSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcUnit(IfcUnit *value) {
    LOG_ERROR("Failed to visit IfcUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcValue(IfcValue *value) {
    LOG_ERROR("Failed to visit IfcValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVectorOrDirection(IfcVectorOrDirection *value) {
    LOG_ERROR("Failed to visit IfcVectorOrDirection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfc2DCompositeCurve(Ifc2DCompositeCurve *value) {
    LOG_ERROR("Failed to visit Ifc2DCompositeCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcActionRequest(IfcActionRequest *value) {
    LOG_ERROR("Failed to visit IfcActionRequest(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcActor(IfcActor *value) {
    LOG_ERROR("Failed to visit IfcActor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcActorRole(IfcActorRole *value) {
    LOG_ERROR("Failed to visit IfcActorRole(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcActuatorType(IfcActuatorType *value) {
    LOG_ERROR("Failed to visit IfcActuatorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAddress(IfcAddress *value) {
    LOG_ERROR("Failed to visit IfcAddress(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *value) {
    LOG_ERROR("Failed to visit IfcAirTerminalBoxType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAirTerminalType(IfcAirTerminalType *value) {
    LOG_ERROR("Failed to visit IfcAirTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *value) {
    LOG_ERROR("Failed to visit IfcAirToAirHeatRecoveryType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAlarmType(IfcAlarmType *value) {
    LOG_ERROR("Failed to visit IfcAlarmType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAngularDimension(IfcAngularDimension *value) {
    LOG_ERROR("Failed to visit IfcAngularDimension(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotation(IfcAnnotation *value) {
    LOG_ERROR("Failed to visit IfcAnnotation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value) {
    LOG_ERROR("Failed to visit IfcAnnotationCurveOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationFillArea(IfcAnnotationFillArea *value) {
    LOG_ERROR("Failed to visit IfcAnnotationFillArea(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *value) {
    LOG_ERROR("Failed to visit IfcAnnotationFillAreaOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationOccurrence(IfcAnnotationOccurrence *value) {
    LOG_ERROR("Failed to visit IfcAnnotationOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationSurface(IfcAnnotationSurface *value) {
    LOG_ERROR("Failed to visit IfcAnnotationSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *value) {
    LOG_ERROR("Failed to visit IfcAnnotationSurfaceOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value) {
    LOG_ERROR("Failed to visit IfcAnnotationSymbolOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value) {
    LOG_ERROR("Failed to visit IfcAnnotationTextOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcApplication(IfcApplication *value) {
    LOG_ERROR("Failed to visit IfcApplication(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAppliedValue(IfcAppliedValue *value) {
    LOG_ERROR("Failed to visit IfcAppliedValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *value) {
    LOG_ERROR("Failed to visit IfcAppliedValueRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcApproval(IfcApproval *value) {
    LOG_ERROR("Failed to visit IfcApproval(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *value) {
    LOG_ERROR("Failed to visit IfcApprovalActorRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *value) {
    LOG_ERROR("Failed to visit IfcApprovalPropertyRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcApprovalRelationship(IfcApprovalRelationship *value) {
    LOG_ERROR("Failed to visit IfcApprovalRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *value) {
    LOG_ERROR("Failed to visit IfcArbitraryClosedProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *value) {
    LOG_ERROR("Failed to visit IfcArbitraryOpenProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *value) {
    LOG_ERROR("Failed to visit IfcArbitraryProfileDefWithVoids(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAsset(IfcAsset *value) {
    LOG_ERROR("Failed to visit IfcAsset(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *value) {
    LOG_ERROR("Failed to visit IfcAsymmetricIShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAxis1Placement(IfcAxis1Placement *value) {
    LOG_ERROR("Failed to visit IfcAxis1Placement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAxis2Placement2D(IfcAxis2Placement2D *value) {
    LOG_ERROR("Failed to visit IfcAxis2Placement2D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAxis2Placement3D(IfcAxis2Placement3D *value) {
    LOG_ERROR("Failed to visit IfcAxis2Placement3D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBSplineCurve(IfcBSplineCurve *value) {
    LOG_ERROR("Failed to visit IfcBSplineCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBeam(IfcBeam *value) {
    LOG_ERROR("Failed to visit IfcBeam(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBeamType(IfcBeamType *value) {
    LOG_ERROR("Failed to visit IfcBeamType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBezierCurve(IfcBezierCurve *value) {
    LOG_ERROR("Failed to visit IfcBezierCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBlobTexture(IfcBlobTexture *value) {
    LOG_ERROR("Failed to visit IfcBlobTexture(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBlock(IfcBlock *value) {
    LOG_ERROR("Failed to visit IfcBlock(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoilerType(IfcBoilerType *value) {
    LOG_ERROR("Failed to visit IfcBoilerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBooleanClippingResult(IfcBooleanClippingResult *value) {
    LOG_ERROR("Failed to visit IfcBooleanClippingResult(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBooleanResult(IfcBooleanResult *value) {
    LOG_ERROR("Failed to visit IfcBooleanResult(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundaryCondition(IfcBoundaryCondition *value) {
    LOG_ERROR("Failed to visit IfcBoundaryCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *value) {
    LOG_ERROR("Failed to visit IfcBoundaryEdgeCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *value) {
    LOG_ERROR("Failed to visit IfcBoundaryFaceCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *value) {
    LOG_ERROR("Failed to visit IfcBoundaryNodeCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *value) {
    LOG_ERROR("Failed to visit IfcBoundaryNodeConditionWarping(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundedCurve(IfcBoundedCurve *value) {
    LOG_ERROR("Failed to visit IfcBoundedCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundedSurface(IfcBoundedSurface *value) {
    LOG_ERROR("Failed to visit IfcBoundedSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundingBox(IfcBoundingBox *value) {
    LOG_ERROR("Failed to visit IfcBoundingBox(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *value) {
    LOG_ERROR("Failed to visit IfcBoxedHalfSpace(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuilding(IfcBuilding *value) {
    LOG_ERROR("Failed to visit IfcBuilding(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElement(IfcBuildingElement *value) {
    LOG_ERROR("Failed to visit IfcBuildingElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElementComponent(IfcBuildingElementComponent *value) {
    LOG_ERROR("Failed to visit IfcBuildingElementComponent(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElementPart(IfcBuildingElementPart *value) {
    LOG_ERROR("Failed to visit IfcBuildingElementPart(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElementProxy(IfcBuildingElementProxy *value) {
    LOG_ERROR("Failed to visit IfcBuildingElementProxy(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *value) {
    LOG_ERROR("Failed to visit IfcBuildingElementProxyType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElementType(IfcBuildingElementType *value) {
    LOG_ERROR("Failed to visit IfcBuildingElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingStorey(IfcBuildingStorey *value) {
    LOG_ERROR("Failed to visit IfcBuildingStorey(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCShapeProfileDef(IfcCShapeProfileDef *value) {
    LOG_ERROR("Failed to visit IfcCShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *value) {
    LOG_ERROR("Failed to visit IfcCableCarrierFittingType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *value) {
    LOG_ERROR("Failed to visit IfcCableCarrierSegmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCableSegmentType(IfcCableSegmentType *value) {
    LOG_ERROR("Failed to visit IfcCableSegmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCalendarDate(IfcCalendarDate *value) {
    LOG_ERROR("Failed to visit IfcCalendarDate(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianPoint(IfcCartesianPoint *value) {
    LOG_ERROR("Failed to visit IfcCartesianPoint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator(IfcCartesianTransformationOperator *value) {
    LOG_ERROR("Failed to visit IfcCartesianTransformationOperator(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *value) {
    LOG_ERROR("Failed to visit IfcCartesianTransformationOperator2D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *value) {
    LOG_ERROR("Failed to visit IfcCartesianTransformationOperator2DnonUniform(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *value) {
    LOG_ERROR("Failed to visit IfcCartesianTransformationOperator3D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *value) {
    LOG_ERROR("Failed to visit IfcCartesianTransformationOperator3DnonUniform(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *value) {
    LOG_ERROR("Failed to visit IfcCenterLineProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *value) {
    LOG_ERROR("Failed to visit IfcChamferEdgeFeature(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcChillerType(IfcChillerType *value) {
    LOG_ERROR("Failed to visit IfcChillerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCircle(IfcCircle *value) {
    LOG_ERROR("Failed to visit IfcCircle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *value) {
    LOG_ERROR("Failed to visit IfcCircleHollowProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCircleProfileDef(IfcCircleProfileDef *value) {
    LOG_ERROR("Failed to visit IfcCircleProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassification(IfcClassification *value) {
    LOG_ERROR("Failed to visit IfcClassification(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationItem(IfcClassificationItem *value) {
    LOG_ERROR("Failed to visit IfcClassificationItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *value) {
    LOG_ERROR("Failed to visit IfcClassificationItemRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationNotation(IfcClassificationNotation *value) {
    LOG_ERROR("Failed to visit IfcClassificationNotation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *value) {
    LOG_ERROR("Failed to visit IfcClassificationNotationFacet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationReference(IfcClassificationReference *value) {
    LOG_ERROR("Failed to visit IfcClassificationReference(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClosedShell(IfcClosedShell *value) {
    LOG_ERROR("Failed to visit IfcClosedShell(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCoilType(IfcCoilType *value) {
    LOG_ERROR("Failed to visit IfcCoilType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColourRgb(IfcColourRgb *value) {
    LOG_ERROR("Failed to visit IfcColourRgb(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColourSpecification(IfcColourSpecification *value) {
    LOG_ERROR("Failed to visit IfcColourSpecification(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColumn(IfcColumn *value) {
    LOG_ERROR("Failed to visit IfcColumn(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColumnType(IfcColumnType *value) {
    LOG_ERROR("Failed to visit IfcColumnType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcComplexProperty(IfcComplexProperty *value) {
    LOG_ERROR("Failed to visit IfcComplexProperty(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCompositeCurve(IfcCompositeCurve *value) {
    LOG_ERROR("Failed to visit IfcCompositeCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *value) {
    LOG_ERROR("Failed to visit IfcCompositeCurveSegment(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCompositeProfileDef(IfcCompositeProfileDef *value) {
    LOG_ERROR("Failed to visit IfcCompositeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCompressorType(IfcCompressorType *value) {
    LOG_ERROR("Failed to visit IfcCompressorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCondenserType(IfcCondenserType *value) {
    LOG_ERROR("Failed to visit IfcCondenserType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCondition(IfcCondition *value) {
    LOG_ERROR("Failed to visit IfcCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConditionCriterion(IfcConditionCriterion *value) {
    LOG_ERROR("Failed to visit IfcConditionCriterion(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConic(IfcConic *value) {
    LOG_ERROR("Failed to visit IfcConic(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectedFaceSet(IfcConnectedFaceSet *value) {
    LOG_ERROR("Failed to visit IfcConnectedFaceSet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *value) {
    LOG_ERROR("Failed to visit IfcConnectionCurveGeometry(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionGeometry(IfcConnectionGeometry *value) {
    LOG_ERROR("Failed to visit IfcConnectionGeometry(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *value) {
    LOG_ERROR("Failed to visit IfcConnectionPointEccentricity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *value) {
    LOG_ERROR("Failed to visit IfcConnectionPointGeometry(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *value) {
    LOG_ERROR("Failed to visit IfcConnectionPortGeometry(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *value) {
    LOG_ERROR("Failed to visit IfcConnectionSurfaceGeometry(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstraint(IfcConstraint *value) {
    LOG_ERROR("Failed to visit IfcConstraint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *value) {
    LOG_ERROR("Failed to visit IfcConstraintAggregationRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *value) {
    LOG_ERROR("Failed to visit IfcConstraintClassificationRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstraintRelationship(IfcConstraintRelationship *value) {
    LOG_ERROR("Failed to visit IfcConstraintRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *value) {
    LOG_ERROR("Failed to visit IfcConstructionEquipmentResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *value) {
    LOG_ERROR("Failed to visit IfcConstructionMaterialResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstructionProductResource(IfcConstructionProductResource *value) {
    LOG_ERROR("Failed to visit IfcConstructionProductResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstructionResource(IfcConstructionResource *value) {
    LOG_ERROR("Failed to visit IfcConstructionResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcContextDependentUnit(IfcContextDependentUnit *value) {
    LOG_ERROR("Failed to visit IfcContextDependentUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcControl(IfcControl *value) {
    LOG_ERROR("Failed to visit IfcControl(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcControllerType(IfcControllerType *value) {
    LOG_ERROR("Failed to visit IfcControllerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConversionBasedUnit(IfcConversionBasedUnit *value) {
    LOG_ERROR("Failed to visit IfcConversionBasedUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCooledBeamType(IfcCooledBeamType *value) {
    LOG_ERROR("Failed to visit IfcCooledBeamType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCoolingTowerType(IfcCoolingTowerType *value) {
    LOG_ERROR("Failed to visit IfcCoolingTowerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *value) {
    LOG_ERROR("Failed to visit IfcCoordinatedUniversalTimeOffset(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCostItem(IfcCostItem *value) {
    LOG_ERROR("Failed to visit IfcCostItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCostSchedule(IfcCostSchedule *value) {
    LOG_ERROR("Failed to visit IfcCostSchedule(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCostValue(IfcCostValue *value) {
    LOG_ERROR("Failed to visit IfcCostValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCovering(IfcCovering *value) {
    LOG_ERROR("Failed to visit IfcCovering(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCoveringType(IfcCoveringType *value) {
    LOG_ERROR("Failed to visit IfcCoveringType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *value) {
    LOG_ERROR("Failed to visit IfcCraneRailAShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *value) {
    LOG_ERROR("Failed to visit IfcCraneRailFShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCrewResource(IfcCrewResource *value) {
    LOG_ERROR("Failed to visit IfcCrewResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCsgPrimitive3D(IfcCsgPrimitive3D *value) {
    LOG_ERROR("Failed to visit IfcCsgPrimitive3D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCsgSolid(IfcCsgSolid *value) {
    LOG_ERROR("Failed to visit IfcCsgSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurrencyRelationship(IfcCurrencyRelationship *value) {
    LOG_ERROR("Failed to visit IfcCurrencyRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurtainWall(IfcCurtainWall *value) {
    LOG_ERROR("Failed to visit IfcCurtainWall(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurtainWallType(IfcCurtainWallType *value) {
    LOG_ERROR("Failed to visit IfcCurtainWallType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurve(IfcCurve *value) {
    LOG_ERROR("Failed to visit IfcCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *value) {
    LOG_ERROR("Failed to visit IfcCurveBoundedPlane(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveStyle(IfcCurveStyle *value) {
    LOG_ERROR("Failed to visit IfcCurveStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFont(IfcCurveStyleFont *value) {
    LOG_ERROR("Failed to visit IfcCurveStyleFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *value) {
    LOG_ERROR("Failed to visit IfcCurveStyleFontAndScaling(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *value) {
    LOG_ERROR("Failed to visit IfcCurveStyleFontPattern(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDamperType(IfcDamperType *value) {
    LOG_ERROR("Failed to visit IfcDamperType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDateAndTime(IfcDateAndTime *value) {
    LOG_ERROR("Failed to visit IfcDateAndTime(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDefinedSymbol(IfcDefinedSymbol *value) {
    LOG_ERROR("Failed to visit IfcDefinedSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDerivedProfileDef(IfcDerivedProfileDef *value) {
    LOG_ERROR("Failed to visit IfcDerivedProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDerivedUnit(IfcDerivedUnit *value) {
    LOG_ERROR("Failed to visit IfcDerivedUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDerivedUnitElement(IfcDerivedUnitElement *value) {
    LOG_ERROR("Failed to visit IfcDerivedUnitElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDiameterDimension(IfcDiameterDimension *value) {
    LOG_ERROR("Failed to visit IfcDiameterDimension(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *value) {
    LOG_ERROR("Failed to visit IfcDimensionCalloutRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionCurve(IfcDimensionCurve *value) {
    LOG_ERROR("Failed to visit IfcDimensionCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *value) {
    LOG_ERROR("Failed to visit IfcDimensionCurveDirectedCallout(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *value) {
    LOG_ERROR("Failed to visit IfcDimensionCurveTerminator(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionPair(IfcDimensionPair *value) {
    LOG_ERROR("Failed to visit IfcDimensionPair(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionalExponents(IfcDimensionalExponents *value) {
    LOG_ERROR("Failed to visit IfcDimensionalExponents(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDirection(IfcDirection *value) {
    LOG_ERROR("Failed to visit IfcDirection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDiscreteAccessory(IfcDiscreteAccessory *value) {
    LOG_ERROR("Failed to visit IfcDiscreteAccessory(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *value) {
    LOG_ERROR("Failed to visit IfcDiscreteAccessoryType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionChamberElement(IfcDistributionChamberElement *value) {
    LOG_ERROR("Failed to visit IfcDistributionChamberElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *value) {
    LOG_ERROR("Failed to visit IfcDistributionChamberElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionControlElement(IfcDistributionControlElement *value) {
    LOG_ERROR("Failed to visit IfcDistributionControlElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionControlElementType(IfcDistributionControlElementType *value) {
    LOG_ERROR("Failed to visit IfcDistributionControlElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionElement(IfcDistributionElement *value) {
    LOG_ERROR("Failed to visit IfcDistributionElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionElementType(IfcDistributionElementType *value) {
    LOG_ERROR("Failed to visit IfcDistributionElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionFlowElement(IfcDistributionFlowElement *value) {
    LOG_ERROR("Failed to visit IfcDistributionFlowElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionFlowElementType(IfcDistributionFlowElementType *value) {
    LOG_ERROR("Failed to visit IfcDistributionFlowElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionPort(IfcDistributionPort *value) {
    LOG_ERROR("Failed to visit IfcDistributionPort(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *value) {
    LOG_ERROR("Failed to visit IfcDocumentElectronicFormat(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDocumentInformation(IfcDocumentInformation *value) {
    LOG_ERROR("Failed to visit IfcDocumentInformation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *value) {
    LOG_ERROR("Failed to visit IfcDocumentInformationRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDocumentReference(IfcDocumentReference *value) {
    LOG_ERROR("Failed to visit IfcDocumentReference(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDoor(IfcDoor *value) {
    LOG_ERROR("Failed to visit IfcDoor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDoorLiningProperties(IfcDoorLiningProperties *value) {
    LOG_ERROR("Failed to visit IfcDoorLiningProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDoorPanelProperties(IfcDoorPanelProperties *value) {
    LOG_ERROR("Failed to visit IfcDoorPanelProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDoorStyle(IfcDoorStyle *value) {
    LOG_ERROR("Failed to visit IfcDoorStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingCallout(IfcDraughtingCallout *value) {
    LOG_ERROR("Failed to visit IfcDraughtingCallout(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *value) {
    LOG_ERROR("Failed to visit IfcDraughtingCalloutRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *value) {
    LOG_ERROR("Failed to visit IfcDraughtingPreDefinedColour(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *value) {
    LOG_ERROR("Failed to visit IfcDraughtingPreDefinedCurveFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *value) {
    LOG_ERROR("Failed to visit IfcDraughtingPreDefinedTextFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDuctFittingType(IfcDuctFittingType *value) {
    LOG_ERROR("Failed to visit IfcDuctFittingType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDuctSegmentType(IfcDuctSegmentType *value) {
    LOG_ERROR("Failed to visit IfcDuctSegmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDuctSilencerType(IfcDuctSilencerType *value) {
    LOG_ERROR("Failed to visit IfcDuctSilencerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEdge(IfcEdge *value) {
    LOG_ERROR("Failed to visit IfcEdge(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEdgeCurve(IfcEdgeCurve *value) {
    LOG_ERROR("Failed to visit IfcEdgeCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEdgeFeature(IfcEdgeFeature *value) {
    LOG_ERROR("Failed to visit IfcEdgeFeature(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEdgeLoop(IfcEdgeLoop *value) {
    LOG_ERROR("Failed to visit IfcEdgeLoop(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricApplianceType(IfcElectricApplianceType *value) {
    LOG_ERROR("Failed to visit IfcElectricApplianceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *value) {
    LOG_ERROR("Failed to visit IfcElectricDistributionPoint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *value) {
    LOG_ERROR("Failed to visit IfcElectricFlowStorageDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricGeneratorType(IfcElectricGeneratorType *value) {
    LOG_ERROR("Failed to visit IfcElectricGeneratorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricHeaterType(IfcElectricHeaterType *value) {
    LOG_ERROR("Failed to visit IfcElectricHeaterType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricMotorType(IfcElectricMotorType *value) {
    LOG_ERROR("Failed to visit IfcElectricMotorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricTimeControlType(IfcElectricTimeControlType *value) {
    LOG_ERROR("Failed to visit IfcElectricTimeControlType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *value) {
    LOG_ERROR("Failed to visit IfcElectricalBaseProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricalCircuit(IfcElectricalCircuit *value) {
    LOG_ERROR("Failed to visit IfcElectricalCircuit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricalElement(IfcElectricalElement *value) {
    LOG_ERROR("Failed to visit IfcElectricalElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElement(IfcElement *value) {
    LOG_ERROR("Failed to visit IfcElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementAssembly(IfcElementAssembly *value) {
    LOG_ERROR("Failed to visit IfcElementAssembly(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementComponent(IfcElementComponent *value) {
    LOG_ERROR("Failed to visit IfcElementComponent(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementComponentType(IfcElementComponentType *value) {
    LOG_ERROR("Failed to visit IfcElementComponentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementQuantity(IfcElementQuantity *value) {
    LOG_ERROR("Failed to visit IfcElementQuantity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementType(IfcElementType *value) {
    LOG_ERROR("Failed to visit IfcElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementarySurface(IfcElementarySurface *value) {
    LOG_ERROR("Failed to visit IfcElementarySurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEllipse(IfcEllipse *value) {
    LOG_ERROR("Failed to visit IfcEllipse(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEllipseProfileDef(IfcEllipseProfileDef *value) {
    LOG_ERROR("Failed to visit IfcEllipseProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *value) {
    LOG_ERROR("Failed to visit IfcEnergyConversionDevice(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEnergyConversionDeviceType(IfcEnergyConversionDeviceType *value) {
    LOG_ERROR("Failed to visit IfcEnergyConversionDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEnergyProperties(IfcEnergyProperties *value) {
    LOG_ERROR("Failed to visit IfcEnergyProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *value) {
    LOG_ERROR("Failed to visit IfcEnvironmentalImpactValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEquipmentElement(IfcEquipmentElement *value) {
    LOG_ERROR("Failed to visit IfcEquipmentElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEquipmentStandard(IfcEquipmentStandard *value) {
    LOG_ERROR("Failed to visit IfcEquipmentStandard(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *value) {
    LOG_ERROR("Failed to visit IfcEvaporativeCoolerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEvaporatorType(IfcEvaporatorType *value) {
    LOG_ERROR("Failed to visit IfcEvaporatorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *value) {
    LOG_ERROR("Failed to visit IfcExtendedMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExternalReference(IfcExternalReference *value) {
    LOG_ERROR("Failed to visit IfcExternalReference(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *value) {
    LOG_ERROR("Failed to visit IfcExternallyDefinedHatchStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value) {
    LOG_ERROR("Failed to visit IfcExternallyDefinedSurfaceStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value) {
    LOG_ERROR("Failed to visit IfcExternallyDefinedSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value) {
    LOG_ERROR("Failed to visit IfcExternallyDefinedTextFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *value) {
    LOG_ERROR("Failed to visit IfcExtrudedAreaSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFace(IfcFace *value) {
    LOG_ERROR("Failed to visit IfcFace(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value) {
    LOG_ERROR("Failed to visit IfcFaceBasedSurfaceModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFaceBound(IfcFaceBound *value) {
    LOG_ERROR("Failed to visit IfcFaceBound(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFaceOuterBound(IfcFaceOuterBound *value) {
    LOG_ERROR("Failed to visit IfcFaceOuterBound(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFaceSurface(IfcFaceSurface *value) {
    LOG_ERROR("Failed to visit IfcFaceSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFacetedBrep(IfcFacetedBrep *value) {
    LOG_ERROR("Failed to visit IfcFacetedBrep(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *value) {
    LOG_ERROR("Failed to visit IfcFacetedBrepWithVoids(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *value) {
    LOG_ERROR("Failed to visit IfcFailureConnectionCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFanType(IfcFanType *value) {
    LOG_ERROR("Failed to visit IfcFanType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFastener(IfcFastener *value) {
    LOG_ERROR("Failed to visit IfcFastener(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFastenerType(IfcFastenerType *value) {
    LOG_ERROR("Failed to visit IfcFastenerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFeatureElement(IfcFeatureElement *value) {
    LOG_ERROR("Failed to visit IfcFeatureElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFeatureElementAddition(IfcFeatureElementAddition *value) {
    LOG_ERROR("Failed to visit IfcFeatureElementAddition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFeatureElementSubtraction(IfcFeatureElementSubtraction *value) {
    LOG_ERROR("Failed to visit IfcFeatureElementSubtraction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyle(IfcFillAreaStyle *value) {
    LOG_ERROR("Failed to visit IfcFillAreaStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value) {
    LOG_ERROR("Failed to visit IfcFillAreaStyleHatching(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value) {
    LOG_ERROR("Failed to visit IfcFillAreaStyleTileSymbolWithStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value) {
    LOG_ERROR("Failed to visit IfcFillAreaStyleTiles(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFilterType(IfcFilterType *value) {
    LOG_ERROR("Failed to visit IfcFilterType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *value) {
    LOG_ERROR("Failed to visit IfcFireSuppressionTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowController(IfcFlowController *value) {
    LOG_ERROR("Failed to visit IfcFlowController(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowControllerType(IfcFlowControllerType *value) {
    LOG_ERROR("Failed to visit IfcFlowControllerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowFitting(IfcFlowFitting *value) {
    LOG_ERROR("Failed to visit IfcFlowFitting(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowFittingType(IfcFlowFittingType *value) {
    LOG_ERROR("Failed to visit IfcFlowFittingType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowInstrumentType(IfcFlowInstrumentType *value) {
    LOG_ERROR("Failed to visit IfcFlowInstrumentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowMeterType(IfcFlowMeterType *value) {
    LOG_ERROR("Failed to visit IfcFlowMeterType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowMovingDevice(IfcFlowMovingDevice *value) {
    LOG_ERROR("Failed to visit IfcFlowMovingDevice(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowMovingDeviceType(IfcFlowMovingDeviceType *value) {
    LOG_ERROR("Failed to visit IfcFlowMovingDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowSegment(IfcFlowSegment *value) {
    LOG_ERROR("Failed to visit IfcFlowSegment(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowSegmentType(IfcFlowSegmentType *value) {
    LOG_ERROR("Failed to visit IfcFlowSegmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowStorageDevice(IfcFlowStorageDevice *value) {
    LOG_ERROR("Failed to visit IfcFlowStorageDevice(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowStorageDeviceType(IfcFlowStorageDeviceType *value) {
    LOG_ERROR("Failed to visit IfcFlowStorageDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowTerminal(IfcFlowTerminal *value) {
    LOG_ERROR("Failed to visit IfcFlowTerminal(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowTerminalType(IfcFlowTerminalType *value) {
    LOG_ERROR("Failed to visit IfcFlowTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *value) {
    LOG_ERROR("Failed to visit IfcFlowTreatmentDevice(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowTreatmentDeviceType(IfcFlowTreatmentDeviceType *value) {
    LOG_ERROR("Failed to visit IfcFlowTreatmentDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFluidFlowProperties(IfcFluidFlowProperties *value) {
    LOG_ERROR("Failed to visit IfcFluidFlowProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFooting(IfcFooting *value) {
    LOG_ERROR("Failed to visit IfcFooting(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFuelProperties(IfcFuelProperties *value) {
    LOG_ERROR("Failed to visit IfcFuelProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFurnishingElement(IfcFurnishingElement *value) {
    LOG_ERROR("Failed to visit IfcFurnishingElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFurnishingElementType(IfcFurnishingElementType *value) {
    LOG_ERROR("Failed to visit IfcFurnishingElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFurnitureStandard(IfcFurnitureStandard *value) {
    LOG_ERROR("Failed to visit IfcFurnitureStandard(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFurnitureType(IfcFurnitureType *value) {
    LOG_ERROR("Failed to visit IfcFurnitureType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGasTerminalType(IfcGasTerminalType *value) {
    LOG_ERROR("Failed to visit IfcGasTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *value) {
    LOG_ERROR("Failed to visit IfcGeneralMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *value) {
    LOG_ERROR("Failed to visit IfcGeneralProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricCurveSet(IfcGeometricCurveSet *value) {
    LOG_ERROR("Failed to visit IfcGeometricCurveSet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *value) {
    LOG_ERROR("Failed to visit IfcGeometricRepresentationContext(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricRepresentationItem(IfcGeometricRepresentationItem *value) {
    LOG_ERROR("Failed to visit IfcGeometricRepresentationItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *value) {
    LOG_ERROR("Failed to visit IfcGeometricRepresentationSubContext(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricSet(IfcGeometricSet *value) {
    LOG_ERROR("Failed to visit IfcGeometricSet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGrid(IfcGrid *value) {
    LOG_ERROR("Failed to visit IfcGrid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGridAxis(IfcGridAxis *value) {
    LOG_ERROR("Failed to visit IfcGridAxis(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGridPlacement(IfcGridPlacement *value) {
    LOG_ERROR("Failed to visit IfcGridPlacement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGroup(IfcGroup *value) {
    LOG_ERROR("Failed to visit IfcGroup(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *value) {
    LOG_ERROR("Failed to visit IfcHalfSpaceSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcHeatExchangerType(IfcHeatExchangerType *value) {
    LOG_ERROR("Failed to visit IfcHeatExchangerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcHumidifierType(IfcHumidifierType *value) {
    LOG_ERROR("Failed to visit IfcHumidifierType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *value) {
    LOG_ERROR("Failed to visit IfcHygroscopicMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcIShapeProfileDef(IfcIShapeProfileDef *value) {
    LOG_ERROR("Failed to visit IfcIShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcImageTexture(IfcImageTexture *value) {
    LOG_ERROR("Failed to visit IfcImageTexture(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcInventory(IfcInventory *value) {
    LOG_ERROR("Failed to visit IfcInventory(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *value) {
    LOG_ERROR("Failed to visit IfcIrregularTimeSeries(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *value) {
    LOG_ERROR("Failed to visit IfcIrregularTimeSeriesValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcJunctionBoxType(IfcJunctionBoxType *value) {
    LOG_ERROR("Failed to visit IfcJunctionBoxType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLShapeProfileDef(IfcLShapeProfileDef *value) {
    LOG_ERROR("Failed to visit IfcLShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLaborResource(IfcLaborResource *value) {
    LOG_ERROR("Failed to visit IfcLaborResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLampType(IfcLampType *value) {
    LOG_ERROR("Failed to visit IfcLampType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLibraryInformation(IfcLibraryInformation *value) {
    LOG_ERROR("Failed to visit IfcLibraryInformation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLibraryReference(IfcLibraryReference *value) {
    LOG_ERROR("Failed to visit IfcLibraryReference(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightDistributionData(IfcLightDistributionData *value) {
    LOG_ERROR("Failed to visit IfcLightDistributionData(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightFixtureType(IfcLightFixtureType *value) {
    LOG_ERROR("Failed to visit IfcLightFixtureType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *value) {
    LOG_ERROR("Failed to visit IfcLightIntensityDistribution(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSource(IfcLightSource *value) {
    LOG_ERROR("Failed to visit IfcLightSource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSourceAmbient(IfcLightSourceAmbient *value) {
    LOG_ERROR("Failed to visit IfcLightSourceAmbient(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSourceDirectional(IfcLightSourceDirectional *value) {
    LOG_ERROR("Failed to visit IfcLightSourceDirectional(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *value) {
    LOG_ERROR("Failed to visit IfcLightSourceGoniometric(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSourcePositional(IfcLightSourcePositional *value) {
    LOG_ERROR("Failed to visit IfcLightSourcePositional(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSourceSpot(IfcLightSourceSpot *value) {
    LOG_ERROR("Failed to visit IfcLightSourceSpot(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLine(IfcLine *value) {
    LOG_ERROR("Failed to visit IfcLine(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLinearDimension(IfcLinearDimension *value) {
    LOG_ERROR("Failed to visit IfcLinearDimension(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLocalPlacement(IfcLocalPlacement *value) {
    LOG_ERROR("Failed to visit IfcLocalPlacement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLocalTime(IfcLocalTime *value) {
    LOG_ERROR("Failed to visit IfcLocalTime(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLoop(IfcLoop *value) {
    LOG_ERROR("Failed to visit IfcLoop(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcManifoldSolidBrep(IfcManifoldSolidBrep *value) {
    LOG_ERROR("Failed to visit IfcManifoldSolidBrep(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMappedItem(IfcMappedItem *value) {
    LOG_ERROR("Failed to visit IfcMappedItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterial(IfcMaterial *value) {
    LOG_ERROR("Failed to visit IfcMaterial(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *value) {
    LOG_ERROR("Failed to visit IfcMaterialClassificationRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *value) {
    LOG_ERROR("Failed to visit IfcMaterialDefinitionRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialLayer(IfcMaterialLayer *value) {
    LOG_ERROR("Failed to visit IfcMaterialLayer(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialLayerSet(IfcMaterialLayerSet *value) {
    LOG_ERROR("Failed to visit IfcMaterialLayerSet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value) {
    LOG_ERROR("Failed to visit IfcMaterialLayerSetUsage(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialList(IfcMaterialList *value) {
    LOG_ERROR("Failed to visit IfcMaterialList(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialProperties(IfcMaterialProperties *value) {
    LOG_ERROR("Failed to visit IfcMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMeasureWithUnit(IfcMeasureWithUnit *value) {
    LOG_ERROR("Failed to visit IfcMeasureWithUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *value) {
    LOG_ERROR("Failed to visit IfcMechanicalConcreteMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMechanicalFastener(IfcMechanicalFastener *value) {
    LOG_ERROR("Failed to visit IfcMechanicalFastener(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *value) {
    LOG_ERROR("Failed to visit IfcMechanicalFastenerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *value) {
    LOG_ERROR("Failed to visit IfcMechanicalMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *value) {
    LOG_ERROR("Failed to visit IfcMechanicalSteelMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMember(IfcMember *value) {
    LOG_ERROR("Failed to visit IfcMember(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMemberType(IfcMemberType *value) {
    LOG_ERROR("Failed to visit IfcMemberType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMetric(IfcMetric *value) {
    LOG_ERROR("Failed to visit IfcMetric(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMonetaryUnit(IfcMonetaryUnit *value) {
    LOG_ERROR("Failed to visit IfcMonetaryUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMotorConnectionType(IfcMotorConnectionType *value) {
    LOG_ERROR("Failed to visit IfcMotorConnectionType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMove(IfcMove *value) {
    LOG_ERROR("Failed to visit IfcMove(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcNamedUnit(IfcNamedUnit *value) {
    LOG_ERROR("Failed to visit IfcNamedUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcObject(IfcObject *value) {
    LOG_ERROR("Failed to visit IfcObject(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcObjectDefinition(IfcObjectDefinition *value) {
    LOG_ERROR("Failed to visit IfcObjectDefinition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcObjectPlacement(IfcObjectPlacement *value) {
    LOG_ERROR("Failed to visit IfcObjectPlacement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcObjective(IfcObjective *value) {
    LOG_ERROR("Failed to visit IfcObjective(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOccupant(IfcOccupant *value) {
    LOG_ERROR("Failed to visit IfcOccupant(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOffsetCurve2D(IfcOffsetCurve2D *value) {
    LOG_ERROR("Failed to visit IfcOffsetCurve2D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOffsetCurve3D(IfcOffsetCurve3D *value) {
    LOG_ERROR("Failed to visit IfcOffsetCurve3D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value) {
    LOG_ERROR("Failed to visit IfcOneDirectionRepeatFactor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOpenShell(IfcOpenShell *value) {
    LOG_ERROR("Failed to visit IfcOpenShell(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOpeningElement(IfcOpeningElement *value) {
    LOG_ERROR("Failed to visit IfcOpeningElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *value) {
    LOG_ERROR("Failed to visit IfcOpticalMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOrderAction(IfcOrderAction *value) {
    LOG_ERROR("Failed to visit IfcOrderAction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOrganization(IfcOrganization *value) {
    LOG_ERROR("Failed to visit IfcOrganization(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOrganizationRelationship(IfcOrganizationRelationship *value) {
    LOG_ERROR("Failed to visit IfcOrganizationRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOrientedEdge(IfcOrientedEdge *value) {
    LOG_ERROR("Failed to visit IfcOrientedEdge(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOutletType(IfcOutletType *value) {
    LOG_ERROR("Failed to visit IfcOutletType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOwnerHistory(IfcOwnerHistory *value) {
    LOG_ERROR("Failed to visit IfcOwnerHistory(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcParameterizedProfileDef(IfcParameterizedProfileDef *value) {
    LOG_ERROR("Failed to visit IfcParameterizedProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPath(IfcPath *value) {
    LOG_ERROR("Failed to visit IfcPath(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPerformanceHistory(IfcPerformanceHistory *value) {
    LOG_ERROR("Failed to visit IfcPerformanceHistory(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *value) {
    LOG_ERROR("Failed to visit IfcPermeableCoveringProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPermit(IfcPermit *value) {
    LOG_ERROR("Failed to visit IfcPermit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPerson(IfcPerson *value) {
    LOG_ERROR("Failed to visit IfcPerson(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPersonAndOrganization(IfcPersonAndOrganization *value) {
    LOG_ERROR("Failed to visit IfcPersonAndOrganization(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *value) {
    LOG_ERROR("Failed to visit IfcPhysicalComplexQuantity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPhysicalQuantity(IfcPhysicalQuantity *value) {
    LOG_ERROR("Failed to visit IfcPhysicalQuantity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPhysicalSimpleQuantity(IfcPhysicalSimpleQuantity *value) {
    LOG_ERROR("Failed to visit IfcPhysicalSimpleQuantity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPile(IfcPile *value) {
    LOG_ERROR("Failed to visit IfcPile(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPipeFittingType(IfcPipeFittingType *value) {
    LOG_ERROR("Failed to visit IfcPipeFittingType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPipeSegmentType(IfcPipeSegmentType *value) {
    LOG_ERROR("Failed to visit IfcPipeSegmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPixelTexture(IfcPixelTexture *value) {
    LOG_ERROR("Failed to visit IfcPixelTexture(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlacement(IfcPlacement *value) {
    LOG_ERROR("Failed to visit IfcPlacement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlanarBox(IfcPlanarBox *value) {
    LOG_ERROR("Failed to visit IfcPlanarBox(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlanarExtent(IfcPlanarExtent *value) {
    LOG_ERROR("Failed to visit IfcPlanarExtent(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlane(IfcPlane *value) {
    LOG_ERROR("Failed to visit IfcPlane(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlate(IfcPlate *value) {
    LOG_ERROR("Failed to visit IfcPlate(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlateType(IfcPlateType *value) {
    LOG_ERROR("Failed to visit IfcPlateType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPoint(IfcPoint *value) {
    LOG_ERROR("Failed to visit IfcPoint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPointOnCurve(IfcPointOnCurve *value) {
    LOG_ERROR("Failed to visit IfcPointOnCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPointOnSurface(IfcPointOnSurface *value) {
    LOG_ERROR("Failed to visit IfcPointOnSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPolyLoop(IfcPolyLoop *value) {
    LOG_ERROR("Failed to visit IfcPolyLoop(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *value) {
    LOG_ERROR("Failed to visit IfcPolygonalBoundedHalfSpace(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPolyline(IfcPolyline *value) {
    LOG_ERROR("Failed to visit IfcPolyline(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPort(IfcPort *value) {
    LOG_ERROR("Failed to visit IfcPort(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPostalAddress(IfcPostalAddress *value) {
    LOG_ERROR("Failed to visit IfcPostalAddress(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedColour(IfcPreDefinedColour *value) {
    LOG_ERROR("Failed to visit IfcPreDefinedColour(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value) {
    LOG_ERROR("Failed to visit IfcPreDefinedCurveFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *value) {
    LOG_ERROR("Failed to visit IfcPreDefinedDimensionSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedItem(IfcPreDefinedItem *value) {
    LOG_ERROR("Failed to visit IfcPreDefinedItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *value) {
    LOG_ERROR("Failed to visit IfcPreDefinedPointMarkerSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedSymbol(IfcPreDefinedSymbol *value) {
    LOG_ERROR("Failed to visit IfcPreDefinedSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *value) {
    LOG_ERROR("Failed to visit IfcPreDefinedTerminatorSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedTextFont(IfcPreDefinedTextFont *value) {
    LOG_ERROR("Failed to visit IfcPreDefinedTextFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *value) {
    LOG_ERROR("Failed to visit IfcPresentationLayerAssignment(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *value) {
    LOG_ERROR("Failed to visit IfcPresentationLayerWithStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPresentationStyle(IfcPresentationStyle *value) {
    LOG_ERROR("Failed to visit IfcPresentationStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *value) {
    LOG_ERROR("Failed to visit IfcPresentationStyleAssignment(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProcedure(IfcProcedure *value) {
    LOG_ERROR("Failed to visit IfcProcedure(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProcess(IfcProcess *value) {
    LOG_ERROR("Failed to visit IfcProcess(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProduct(IfcProduct *value) {
    LOG_ERROR("Failed to visit IfcProduct(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProductDefinitionShape(IfcProductDefinitionShape *value) {
    LOG_ERROR("Failed to visit IfcProductDefinitionShape(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProductRepresentation(IfcProductRepresentation *value) {
    LOG_ERROR("Failed to visit IfcProductRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *value) {
    LOG_ERROR("Failed to visit IfcProductsOfCombustionProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProfileDef(IfcProfileDef *value) {
    LOG_ERROR("Failed to visit IfcProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProfileProperties(IfcProfileProperties *value) {
    LOG_ERROR("Failed to visit IfcProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProject(IfcProject *value) {
    LOG_ERROR("Failed to visit IfcProject(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProjectOrder(IfcProjectOrder *value) {
    LOG_ERROR("Failed to visit IfcProjectOrder(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProjectOrderRecord(IfcProjectOrderRecord *value) {
    LOG_ERROR("Failed to visit IfcProjectOrderRecord(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProjectionCurve(IfcProjectionCurve *value) {
    LOG_ERROR("Failed to visit IfcProjectionCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProjectionElement(IfcProjectionElement *value) {
    LOG_ERROR("Failed to visit IfcProjectionElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProperty(IfcProperty *value) {
    LOG_ERROR("Failed to visit IfcProperty(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *value) {
    LOG_ERROR("Failed to visit IfcPropertyBoundedValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *value) {
    LOG_ERROR("Failed to visit IfcPropertyConstraintRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyDefinition(IfcPropertyDefinition *value) {
    LOG_ERROR("Failed to visit IfcPropertyDefinition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *value) {
    LOG_ERROR("Failed to visit IfcPropertyDependencyRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *value) {
    LOG_ERROR("Failed to visit IfcPropertyEnumeratedValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyEnumeration(IfcPropertyEnumeration *value) {
    LOG_ERROR("Failed to visit IfcPropertyEnumeration(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyListValue(IfcPropertyListValue *value) {
    LOG_ERROR("Failed to visit IfcPropertyListValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *value) {
    LOG_ERROR("Failed to visit IfcPropertyReferenceValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertySet(IfcPropertySet *value) {
    LOG_ERROR("Failed to visit IfcPropertySet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertySetDefinition(IfcPropertySetDefinition *value) {
    LOG_ERROR("Failed to visit IfcPropertySetDefinition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertySingleValue(IfcPropertySingleValue *value) {
    LOG_ERROR("Failed to visit IfcPropertySingleValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyTableValue(IfcPropertyTableValue *value) {
    LOG_ERROR("Failed to visit IfcPropertyTableValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *value) {
    LOG_ERROR("Failed to visit IfcProtectiveDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProxy(IfcProxy *value) {
    LOG_ERROR("Failed to visit IfcProxy(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPumpType(IfcPumpType *value) {
    LOG_ERROR("Failed to visit IfcPumpType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityArea(IfcQuantityArea *value) {
    LOG_ERROR("Failed to visit IfcQuantityArea(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityCount(IfcQuantityCount *value) {
    LOG_ERROR("Failed to visit IfcQuantityCount(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityLength(IfcQuantityLength *value) {
    LOG_ERROR("Failed to visit IfcQuantityLength(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityTime(IfcQuantityTime *value) {
    LOG_ERROR("Failed to visit IfcQuantityTime(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityVolume(IfcQuantityVolume *value) {
    LOG_ERROR("Failed to visit IfcQuantityVolume(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityWeight(IfcQuantityWeight *value) {
    LOG_ERROR("Failed to visit IfcQuantityWeight(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRadiusDimension(IfcRadiusDimension *value) {
    LOG_ERROR("Failed to visit IfcRadiusDimension(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRailing(IfcRailing *value) {
    LOG_ERROR("Failed to visit IfcRailing(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRailingType(IfcRailingType *value) {
    LOG_ERROR("Failed to visit IfcRailingType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRamp(IfcRamp *value) {
    LOG_ERROR("Failed to visit IfcRamp(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRampFlight(IfcRampFlight *value) {
    LOG_ERROR("Failed to visit IfcRampFlight(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRampFlightType(IfcRampFlightType *value) {
    LOG_ERROR("Failed to visit IfcRampFlightType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRationalBezierCurve(IfcRationalBezierCurve *value) {
    LOG_ERROR("Failed to visit IfcRationalBezierCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *value) {
    LOG_ERROR("Failed to visit IfcRectangleHollowProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRectangleProfileDef(IfcRectangleProfileDef *value) {
    LOG_ERROR("Failed to visit IfcRectangleProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRectangularPyramid(IfcRectangularPyramid *value) {
    LOG_ERROR("Failed to visit IfcRectangularPyramid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *value) {
    LOG_ERROR("Failed to visit IfcRectangularTrimmedSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReferencesValueDocument(IfcReferencesValueDocument *value) {
    LOG_ERROR("Failed to visit IfcReferencesValueDocument(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRegularTimeSeries(IfcRegularTimeSeries *value) {
    LOG_ERROR("Failed to visit IfcRegularTimeSeries(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *value) {
    LOG_ERROR("Failed to visit IfcReinforcementBarProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *value) {
    LOG_ERROR("Failed to visit IfcReinforcementDefinitionProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReinforcingBar(IfcReinforcingBar *value) {
    LOG_ERROR("Failed to visit IfcReinforcingBar(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReinforcingElement(IfcReinforcingElement *value) {
    LOG_ERROR("Failed to visit IfcReinforcingElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReinforcingMesh(IfcReinforcingMesh *value) {
    LOG_ERROR("Failed to visit IfcReinforcingMesh(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAggregates(IfcRelAggregates *value) {
    LOG_ERROR("Failed to visit IfcRelAggregates(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssigns(IfcRelAssigns *value) {
    LOG_ERROR("Failed to visit IfcRelAssigns(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsTasks(IfcRelAssignsTasks *value) {
    LOG_ERROR("Failed to visit IfcRelAssignsTasks(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToActor(IfcRelAssignsToActor *value) {
    LOG_ERROR("Failed to visit IfcRelAssignsToActor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToControl(IfcRelAssignsToControl *value) {
    LOG_ERROR("Failed to visit IfcRelAssignsToControl(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *value) {
    LOG_ERROR("Failed to visit IfcRelAssignsToGroup(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *value) {
    LOG_ERROR("Failed to visit IfcRelAssignsToProcess(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *value) {
    LOG_ERROR("Failed to visit IfcRelAssignsToProduct(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *value) {
    LOG_ERROR("Failed to visit IfcRelAssignsToProjectOrder(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToResource(IfcRelAssignsToResource *value) {
    LOG_ERROR("Failed to visit IfcRelAssignsToResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociates(IfcRelAssociates *value) {
    LOG_ERROR("Failed to visit IfcRelAssociates(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *value) {
    LOG_ERROR("Failed to visit IfcRelAssociatesAppliedValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *value) {
    LOG_ERROR("Failed to visit IfcRelAssociatesApproval(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *value) {
    LOG_ERROR("Failed to visit IfcRelAssociatesClassification(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *value) {
    LOG_ERROR("Failed to visit IfcRelAssociatesConstraint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *value) {
    LOG_ERROR("Failed to visit IfcRelAssociatesDocument(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *value) {
    LOG_ERROR("Failed to visit IfcRelAssociatesLibrary(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *value) {
    LOG_ERROR("Failed to visit IfcRelAssociatesMaterial(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *value) {
    LOG_ERROR("Failed to visit IfcRelAssociatesProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnects(IfcRelConnects *value) {
    LOG_ERROR("Failed to visit IfcRelConnects(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsElements(IfcRelConnectsElements *value) {
    LOG_ERROR("Failed to visit IfcRelConnectsElements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *value) {
    LOG_ERROR("Failed to visit IfcRelConnectsPathElements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *value) {
    LOG_ERROR("Failed to visit IfcRelConnectsPortToElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsPorts(IfcRelConnectsPorts *value) {
    LOG_ERROR("Failed to visit IfcRelConnectsPorts(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *value) {
    LOG_ERROR("Failed to visit IfcRelConnectsStructuralActivity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *value) {
    LOG_ERROR("Failed to visit IfcRelConnectsStructuralElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *value) {
    LOG_ERROR("Failed to visit IfcRelConnectsStructuralMember(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *value) {
    LOG_ERROR("Failed to visit IfcRelConnectsWithEccentricity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *value) {
    LOG_ERROR("Failed to visit IfcRelConnectsWithRealizingElements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *value) {
    LOG_ERROR("Failed to visit IfcRelContainedInSpatialStructure(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *value) {
    LOG_ERROR("Failed to visit IfcRelCoversBldgElements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelCoversSpaces(IfcRelCoversSpaces *value) {
    LOG_ERROR("Failed to visit IfcRelCoversSpaces(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelDecomposes(IfcRelDecomposes *value) {
    LOG_ERROR("Failed to visit IfcRelDecomposes(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelDefines(IfcRelDefines *value) {
    LOG_ERROR("Failed to visit IfcRelDefines(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *value) {
    LOG_ERROR("Failed to visit IfcRelDefinesByProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelDefinesByType(IfcRelDefinesByType *value) {
    LOG_ERROR("Failed to visit IfcRelDefinesByType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelFillsElement(IfcRelFillsElement *value) {
    LOG_ERROR("Failed to visit IfcRelFillsElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelFlowControlElements(IfcRelFlowControlElements *value) {
    LOG_ERROR("Failed to visit IfcRelFlowControlElements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *value) {
    LOG_ERROR("Failed to visit IfcRelInteractionRequirements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelNests(IfcRelNests *value) {
    LOG_ERROR("Failed to visit IfcRelNests(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *value) {
    LOG_ERROR("Failed to visit IfcRelOccupiesSpaces(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelOverridesProperties(IfcRelOverridesProperties *value) {
    LOG_ERROR("Failed to visit IfcRelOverridesProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelProjectsElement(IfcRelProjectsElement *value) {
    LOG_ERROR("Failed to visit IfcRelProjectsElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *value) {
    LOG_ERROR("Failed to visit IfcRelReferencedInSpatialStructure(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *value) {
    LOG_ERROR("Failed to visit IfcRelSchedulesCostItems(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelSequence(IfcRelSequence *value) {
    LOG_ERROR("Failed to visit IfcRelSequence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelServicesBuildings(IfcRelServicesBuildings *value) {
    LOG_ERROR("Failed to visit IfcRelServicesBuildings(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *value) {
    LOG_ERROR("Failed to visit IfcRelSpaceBoundary(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelVoidsElement(IfcRelVoidsElement *value) {
    LOG_ERROR("Failed to visit IfcRelVoidsElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelationship(IfcRelationship *value) {
    LOG_ERROR("Failed to visit IfcRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelaxation(IfcRelaxation *value) {
    LOG_ERROR("Failed to visit IfcRelaxation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRepresentation(IfcRepresentation *value) {
    LOG_ERROR("Failed to visit IfcRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRepresentationContext(IfcRepresentationContext *value) {
    LOG_ERROR("Failed to visit IfcRepresentationContext(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRepresentationItem(IfcRepresentationItem *value) {
    LOG_ERROR("Failed to visit IfcRepresentationItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRepresentationMap(IfcRepresentationMap *value) {
    LOG_ERROR("Failed to visit IfcRepresentationMap(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcResource(IfcResource *value) {
    LOG_ERROR("Failed to visit IfcResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *value) {
    LOG_ERROR("Failed to visit IfcRevolvedAreaSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *value) {
    LOG_ERROR("Failed to visit IfcRibPlateProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRightCircularCone(IfcRightCircularCone *value) {
    LOG_ERROR("Failed to visit IfcRightCircularCone(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRightCircularCylinder(IfcRightCircularCylinder *value) {
    LOG_ERROR("Failed to visit IfcRightCircularCylinder(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRoof(IfcRoof *value) {
    LOG_ERROR("Failed to visit IfcRoof(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRoot(IfcRoot *value) {
    LOG_ERROR("Failed to visit IfcRoot(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *value) {
    LOG_ERROR("Failed to visit IfcRoundedEdgeFeature(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *value) {
    LOG_ERROR("Failed to visit IfcRoundedRectangleProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSIUnit(IfcSIUnit *value) {
    LOG_ERROR("Failed to visit IfcSIUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *value) {
    LOG_ERROR("Failed to visit IfcSanitaryTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcScheduleTimeControl(IfcScheduleTimeControl *value) {
    LOG_ERROR("Failed to visit IfcScheduleTimeControl(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSectionProperties(IfcSectionProperties *value) {
    LOG_ERROR("Failed to visit IfcSectionProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *value) {
    LOG_ERROR("Failed to visit IfcSectionReinforcementProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSectionedSpine(IfcSectionedSpine *value) {
    LOG_ERROR("Failed to visit IfcSectionedSpine(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSensorType(IfcSensorType *value) {
    LOG_ERROR("Failed to visit IfcSensorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcServiceLife(IfcServiceLife *value) {
    LOG_ERROR("Failed to visit IfcServiceLife(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcServiceLifeFactor(IfcServiceLifeFactor *value) {
    LOG_ERROR("Failed to visit IfcServiceLifeFactor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcShapeAspect(IfcShapeAspect *value) {
    LOG_ERROR("Failed to visit IfcShapeAspect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcShapeModel(IfcShapeModel *value) {
    LOG_ERROR("Failed to visit IfcShapeModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcShapeRepresentation(IfcShapeRepresentation *value) {
    LOG_ERROR("Failed to visit IfcShapeRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *value) {
    LOG_ERROR("Failed to visit IfcShellBasedSurfaceModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSimpleProperty(IfcSimpleProperty *value) {
    LOG_ERROR("Failed to visit IfcSimpleProperty(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSite(IfcSite *value) {
    LOG_ERROR("Failed to visit IfcSite(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSlab(IfcSlab *value) {
    LOG_ERROR("Failed to visit IfcSlab(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSlabType(IfcSlabType *value) {
    LOG_ERROR("Failed to visit IfcSlabType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *value) {
    LOG_ERROR("Failed to visit IfcSlippageConnectionCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSolidModel(IfcSolidModel *value) {
    LOG_ERROR("Failed to visit IfcSolidModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSoundProperties(IfcSoundProperties *value) {
    LOG_ERROR("Failed to visit IfcSoundProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSoundValue(IfcSoundValue *value) {
    LOG_ERROR("Failed to visit IfcSoundValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpace(IfcSpace *value) {
    LOG_ERROR("Failed to visit IfcSpace(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpaceHeaterType(IfcSpaceHeaterType *value) {
    LOG_ERROR("Failed to visit IfcSpaceHeaterType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpaceProgram(IfcSpaceProgram *value) {
    LOG_ERROR("Failed to visit IfcSpaceProgram(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *value) {
    LOG_ERROR("Failed to visit IfcSpaceThermalLoadProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpaceType(IfcSpaceType *value) {
    LOG_ERROR("Failed to visit IfcSpaceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpatialStructureElement(IfcSpatialStructureElement *value) {
    LOG_ERROR("Failed to visit IfcSpatialStructureElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpatialStructureElementType(IfcSpatialStructureElementType *value) {
    LOG_ERROR("Failed to visit IfcSpatialStructureElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSphere(IfcSphere *value) {
    LOG_ERROR("Failed to visit IfcSphere(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStackTerminalType(IfcStackTerminalType *value) {
    LOG_ERROR("Failed to visit IfcStackTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStair(IfcStair *value) {
    LOG_ERROR("Failed to visit IfcStair(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStairFlight(IfcStairFlight *value) {
    LOG_ERROR("Failed to visit IfcStairFlight(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStairFlightType(IfcStairFlightType *value) {
    LOG_ERROR("Failed to visit IfcStairFlightType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralAction(IfcStructuralAction *value) {
    LOG_ERROR("Failed to visit IfcStructuralAction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralActivity(IfcStructuralActivity *value) {
    LOG_ERROR("Failed to visit IfcStructuralActivity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *value) {
    LOG_ERROR("Failed to visit IfcStructuralAnalysisModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralConnection(IfcStructuralConnection *value) {
    LOG_ERROR("Failed to visit IfcStructuralConnection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralConnectionCondition(IfcStructuralConnectionCondition *value) {
    LOG_ERROR("Failed to visit IfcStructuralConnectionCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *value) {
    LOG_ERROR("Failed to visit IfcStructuralCurveConnection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralCurveMember(IfcStructuralCurveMember *value) {
    LOG_ERROR("Failed to visit IfcStructuralCurveMember(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *value) {
    LOG_ERROR("Failed to visit IfcStructuralCurveMemberVarying(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralItem(IfcStructuralItem *value) {
    LOG_ERROR("Failed to visit IfcStructuralItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLinearAction(IfcStructuralLinearAction *value) {
    LOG_ERROR("Failed to visit IfcStructuralLinearAction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *value) {
    LOG_ERROR("Failed to visit IfcStructuralLinearActionVarying(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoad(IfcStructuralLoad *value) {
    LOG_ERROR("Failed to visit IfcStructuralLoad(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *value) {
    LOG_ERROR("Failed to visit IfcStructuralLoadGroup(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *value) {
    LOG_ERROR("Failed to visit IfcStructuralLoadLinearForce(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *value) {
    LOG_ERROR("Failed to visit IfcStructuralLoadPlanarForce(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *value) {
    LOG_ERROR("Failed to visit IfcStructuralLoadSingleDisplacement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *value) {
    LOG_ERROR("Failed to visit IfcStructuralLoadSingleDisplacementDistortion(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *value) {
    LOG_ERROR("Failed to visit IfcStructuralLoadSingleForce(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *value) {
    LOG_ERROR("Failed to visit IfcStructuralLoadSingleForceWarping(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadStatic(IfcStructuralLoadStatic *value) {
    LOG_ERROR("Failed to visit IfcStructuralLoadStatic(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *value) {
    LOG_ERROR("Failed to visit IfcStructuralLoadTemperature(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralMember(IfcStructuralMember *value) {
    LOG_ERROR("Failed to visit IfcStructuralMember(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *value) {
    LOG_ERROR("Failed to visit IfcStructuralPlanarAction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *value) {
    LOG_ERROR("Failed to visit IfcStructuralPlanarActionVarying(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralPointAction(IfcStructuralPointAction *value) {
    LOG_ERROR("Failed to visit IfcStructuralPointAction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralPointConnection(IfcStructuralPointConnection *value) {
    LOG_ERROR("Failed to visit IfcStructuralPointConnection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralPointReaction(IfcStructuralPointReaction *value) {
    LOG_ERROR("Failed to visit IfcStructuralPointReaction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *value) {
    LOG_ERROR("Failed to visit IfcStructuralProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralReaction(IfcStructuralReaction *value) {
    LOG_ERROR("Failed to visit IfcStructuralReaction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralResultGroup(IfcStructuralResultGroup *value) {
    LOG_ERROR("Failed to visit IfcStructuralResultGroup(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *value) {
    LOG_ERROR("Failed to visit IfcStructuralSteelProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *value) {
    LOG_ERROR("Failed to visit IfcStructuralSurfaceConnection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *value) {
    LOG_ERROR("Failed to visit IfcStructuralSurfaceMember(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *value) {
    LOG_ERROR("Failed to visit IfcStructuralSurfaceMemberVarying(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *value) {
    LOG_ERROR("Failed to visit IfcStructuredDimensionCallout(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStyleModel(IfcStyleModel *value) {
    LOG_ERROR("Failed to visit IfcStyleModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStyledItem(IfcStyledItem *value) {
    LOG_ERROR("Failed to visit IfcStyledItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStyledRepresentation(IfcStyledRepresentation *value) {
    LOG_ERROR("Failed to visit IfcStyledRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSubContractResource(IfcSubContractResource *value) {
    LOG_ERROR("Failed to visit IfcSubContractResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSubedge(IfcSubedge *value) {
    LOG_ERROR("Failed to visit IfcSubedge(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurface(IfcSurface *value) {
    LOG_ERROR("Failed to visit IfcSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *value) {
    LOG_ERROR("Failed to visit IfcSurfaceCurveSweptAreaSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *value) {
    LOG_ERROR("Failed to visit IfcSurfaceOfLinearExtrusion(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *value) {
    LOG_ERROR("Failed to visit IfcSurfaceOfRevolution(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyle(IfcSurfaceStyle *value) {
    LOG_ERROR("Failed to visit IfcSurfaceStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value) {
    LOG_ERROR("Failed to visit IfcSurfaceStyleLighting(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value) {
    LOG_ERROR("Failed to visit IfcSurfaceStyleRefraction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *value) {
    LOG_ERROR("Failed to visit IfcSurfaceStyleRendering(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *value) {
    LOG_ERROR("Failed to visit IfcSurfaceStyleShading(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value) {
    LOG_ERROR("Failed to visit IfcSurfaceStyleWithTextures(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceTexture(IfcSurfaceTexture *value) {
    LOG_ERROR("Failed to visit IfcSurfaceTexture(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSweptAreaSolid(IfcSweptAreaSolid *value) {
    LOG_ERROR("Failed to visit IfcSweptAreaSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSweptDiskSolid(IfcSweptDiskSolid *value) {
    LOG_ERROR("Failed to visit IfcSweptDiskSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSweptSurface(IfcSweptSurface *value) {
    LOG_ERROR("Failed to visit IfcSweptSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *value) {
    LOG_ERROR("Failed to visit IfcSwitchingDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSymbolStyle(IfcSymbolStyle *value) {
    LOG_ERROR("Failed to visit IfcSymbolStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSystem(IfcSystem *value) {
    LOG_ERROR("Failed to visit IfcSystem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *value) {
    LOG_ERROR("Failed to visit IfcSystemFurnitureElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTShapeProfileDef(IfcTShapeProfileDef *value) {
    LOG_ERROR("Failed to visit IfcTShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTable(IfcTable *value) {
    LOG_ERROR("Failed to visit IfcTable(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTableRow(IfcTableRow *value) {
    LOG_ERROR("Failed to visit IfcTableRow(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTankType(IfcTankType *value) {
    LOG_ERROR("Failed to visit IfcTankType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTask(IfcTask *value) {
    LOG_ERROR("Failed to visit IfcTask(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTelecomAddress(IfcTelecomAddress *value) {
    LOG_ERROR("Failed to visit IfcTelecomAddress(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTendon(IfcTendon *value) {
    LOG_ERROR("Failed to visit IfcTendon(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTendonAnchor(IfcTendonAnchor *value) {
    LOG_ERROR("Failed to visit IfcTendonAnchor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTerminatorSymbol(IfcTerminatorSymbol *value) {
    LOG_ERROR("Failed to visit IfcTerminatorSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextLiteral(IfcTextLiteral *value) {
    LOG_ERROR("Failed to visit IfcTextLiteral(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *value) {
    LOG_ERROR("Failed to visit IfcTextLiteralWithExtent(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyle(IfcTextStyle *value) {
    LOG_ERROR("Failed to visit IfcTextStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyleFontModel(IfcTextStyleFontModel *value) {
    LOG_ERROR("Failed to visit IfcTextStyleFontModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *value) {
    LOG_ERROR("Failed to visit IfcTextStyleForDefinedFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyleTextModel(IfcTextStyleTextModel *value) {
    LOG_ERROR("Failed to visit IfcTextStyleTextModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value) {
    LOG_ERROR("Failed to visit IfcTextStyleWithBoxCharacteristics(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextureCoordinate(IfcTextureCoordinate *value) {
    LOG_ERROR("Failed to visit IfcTextureCoordinate(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *value) {
    LOG_ERROR("Failed to visit IfcTextureCoordinateGenerator(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextureMap(IfcTextureMap *value) {
    LOG_ERROR("Failed to visit IfcTextureMap(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextureVertex(IfcTextureVertex *value) {
    LOG_ERROR("Failed to visit IfcTextureVertex(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *value) {
    LOG_ERROR("Failed to visit IfcThermalMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTimeSeries(IfcTimeSeries *value) {
    LOG_ERROR("Failed to visit IfcTimeSeries(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *value) {
    LOG_ERROR("Failed to visit IfcTimeSeriesReferenceRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *value) {
    LOG_ERROR("Failed to visit IfcTimeSeriesSchedule(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTimeSeriesValue(IfcTimeSeriesValue *value) {
    LOG_ERROR("Failed to visit IfcTimeSeriesValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTopologicalRepresentationItem(IfcTopologicalRepresentationItem *value) {
    LOG_ERROR("Failed to visit IfcTopologicalRepresentationItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTopologyRepresentation(IfcTopologyRepresentation *value) {
    LOG_ERROR("Failed to visit IfcTopologyRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTransformerType(IfcTransformerType *value) {
    LOG_ERROR("Failed to visit IfcTransformerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTransportElement(IfcTransportElement *value) {
    LOG_ERROR("Failed to visit IfcTransportElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTransportElementType(IfcTransportElementType *value) {
    LOG_ERROR("Failed to visit IfcTransportElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *value) {
    LOG_ERROR("Failed to visit IfcTrapeziumProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTrimmedCurve(IfcTrimmedCurve *value) {
    LOG_ERROR("Failed to visit IfcTrimmedCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTubeBundleType(IfcTubeBundleType *value) {
    LOG_ERROR("Failed to visit IfcTubeBundleType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *value) {
    LOG_ERROR("Failed to visit IfcTwoDirectionRepeatFactor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTypeObject(IfcTypeObject *value) {
    LOG_ERROR("Failed to visit IfcTypeObject(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTypeProduct(IfcTypeProduct *value) {
    LOG_ERROR("Failed to visit IfcTypeProduct(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcUShapeProfileDef(IfcUShapeProfileDef *value) {
    LOG_ERROR("Failed to visit IfcUShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcUnitAssignment(IfcUnitAssignment *value) {
    LOG_ERROR("Failed to visit IfcUnitAssignment(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *value) {
    LOG_ERROR("Failed to visit IfcUnitaryEquipmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcValveType(IfcValveType *value) {
    LOG_ERROR("Failed to visit IfcValveType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVector(IfcVector *value) {
    LOG_ERROR("Failed to visit IfcVector(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVertex(IfcVertex *value) {
    LOG_ERROR("Failed to visit IfcVertex(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *value) {
    LOG_ERROR("Failed to visit IfcVertexBasedTextureMap(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVertexLoop(IfcVertexLoop *value) {
    LOG_ERROR("Failed to visit IfcVertexLoop(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVertexPoint(IfcVertexPoint *value) {
    LOG_ERROR("Failed to visit IfcVertexPoint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *value) {
    LOG_ERROR("Failed to visit IfcVibrationIsolatorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVirtualElement(IfcVirtualElement *value) {
    LOG_ERROR("Failed to visit IfcVirtualElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *value) {
    LOG_ERROR("Failed to visit IfcVirtualGridIntersection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWall(IfcWall *value) {
    LOG_ERROR("Failed to visit IfcWall(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWallStandardCase(IfcWallStandardCase *value) {
    LOG_ERROR("Failed to visit IfcWallStandardCase(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWallType(IfcWallType *value) {
    LOG_ERROR("Failed to visit IfcWallType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWasteTerminalType(IfcWasteTerminalType *value) {
    LOG_ERROR("Failed to visit IfcWasteTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWaterProperties(IfcWaterProperties *value) {
    LOG_ERROR("Failed to visit IfcWaterProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWindow(IfcWindow *value) {
    LOG_ERROR("Failed to visit IfcWindow(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWindowLiningProperties(IfcWindowLiningProperties *value) {
    LOG_ERROR("Failed to visit IfcWindowLiningProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWindowPanelProperties(IfcWindowPanelProperties *value) {
    LOG_ERROR("Failed to visit IfcWindowPanelProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWindowStyle(IfcWindowStyle *value) {
    LOG_ERROR("Failed to visit IfcWindowStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWorkControl(IfcWorkControl *value) {
    LOG_ERROR("Failed to visit IfcWorkControl(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWorkPlan(IfcWorkPlan *value) {
    LOG_ERROR("Failed to visit IfcWorkPlan(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWorkSchedule(IfcWorkSchedule *value) {
    LOG_ERROR("Failed to visit IfcWorkSchedule(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcZShapeProfileDef(IfcZShapeProfileDef *value) {
    LOG_ERROR("Failed to visit IfcZShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcZone(IfcZone *value) {
    LOG_ERROR("Failed to visit IfcZone(" << value->type());
    return false;
}

