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
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcActorSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAppliedValueSelect(IfcAppliedValueSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAppliedValueSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAxis2Placement(IfcAxis2Placement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAxis2Placement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBooleanOperand(IfcBooleanOperand *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBooleanOperand(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCharacterStyleSelect(IfcCharacterStyleSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCharacterStyleSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationNotationSelect(IfcClassificationNotationSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcClassificationNotationSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColour(IfcColour *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcColour(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColourOrFactor(IfcColourOrFactor *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcColourOrFactor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConditionCriterionSelect(IfcConditionCriterionSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConditionCriterionSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCsgSelect(IfcCsgSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCsgSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveFontOrScaledCurveFontSelect(IfcCurveFontOrScaledCurveFontSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurveFontOrScaledCurveFontSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveOrEdgeCurve(IfcCurveOrEdgeCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurveOrEdgeCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFontSelect(IfcCurveStyleFontSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurveStyleFontSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDateTimeSelect(IfcDateTimeSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDateTimeSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDefinedSymbolSelect(IfcDefinedSymbolSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDefinedSymbolSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDerivedMeasureValue(IfcDerivedMeasureValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDerivedMeasureValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDocumentSelect(IfcDocumentSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDocumentSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingCalloutElement(IfcDraughtingCalloutElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDraughtingCalloutElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleTileShapeSelect(IfcFillAreaStyleTileShapeSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFillAreaStyleTileShapeSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillStyleSelect(IfcFillStyleSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFillStyleSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricSetSelect(IfcGeometricSetSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGeometricSetSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcHatchLineDistanceSelect(IfcHatchLineDistanceSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcHatchLineDistanceSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLayeredItem(IfcLayeredItem *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLayeredItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLibrarySelect(IfcLibrarySelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLibrarySelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightDistributionDataSourceSelect(IfcLightDistributionDataSourceSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLightDistributionDataSourceSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialSelect(IfcMaterialSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMaterialSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMeasureValue(IfcMeasureValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMeasureValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMetricValueSelect(IfcMetricValueSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMetricValueSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcObjectReferenceSelect(IfcObjectReferenceSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcObjectReferenceSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOrientationSelect(IfcOrientationSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOrientationSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPointOrVertexPoint(IfcPointOrVertexPoint *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPointOrVertexPoint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPresentationStyleSelect(IfcPresentationStyleSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPresentationStyleSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcShell(IfcShell *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcShell(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSimpleValue(IfcSimpleValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSimpleValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSizeSelect(IfcSizeSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSizeSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpecularHighlightSelect(IfcSpecularHighlightSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSpecularHighlightSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralActivityAssignmentSelect(IfcStructuralActivityAssignmentSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralActivityAssignmentSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceOrFaceSurface(IfcSurfaceOrFaceSurface *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceOrFaceSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleElementSelect(IfcSurfaceStyleElementSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceStyleElementSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSymbolStyleSelect(IfcSymbolStyleSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSymbolStyleSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextFontSelect(IfcTextFontSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextFontSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyleSelect(IfcTextStyleSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextStyleSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTrimmingSelect(IfcTrimmingSelect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTrimmingSelect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcUnit(IfcUnit *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcValue(IfcValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVectorOrDirection(IfcVectorOrDirection *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcVectorOrDirection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfc2DCompositeCurve(Ifc2DCompositeCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit Ifc2DCompositeCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcActionRequest(IfcActionRequest *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcActionRequest(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcActor(IfcActor *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcActor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcActorRole(IfcActorRole *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcActorRole(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcActuatorType(IfcActuatorType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcActuatorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAddress(IfcAddress *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAddress(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAirTerminalBoxType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAirTerminalType(IfcAirTerminalType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAirTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAirToAirHeatRecoveryType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAlarmType(IfcAlarmType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAlarmType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAngularDimension(IfcAngularDimension *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAngularDimension(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotation(IfcAnnotation *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAnnotation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAnnotationCurveOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationFillArea(IfcAnnotationFillArea *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAnnotationFillArea(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAnnotationFillAreaOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationOccurrence(IfcAnnotationOccurrence *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAnnotationOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationSurface(IfcAnnotationSurface *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAnnotationSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAnnotationSurfaceOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAnnotationSymbolOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAnnotationTextOccurrence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcApplication(IfcApplication *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcApplication(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAppliedValue(IfcAppliedValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAppliedValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAppliedValueRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcApproval(IfcApproval *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcApproval(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcApprovalActorRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcApprovalPropertyRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcApprovalRelationship(IfcApprovalRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcApprovalRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcArbitraryClosedProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcArbitraryOpenProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcArbitraryProfileDefWithVoids(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAsset(IfcAsset *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAsset(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAsymmetricIShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAxis1Placement(IfcAxis1Placement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAxis1Placement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAxis2Placement2D(IfcAxis2Placement2D *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAxis2Placement2D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcAxis2Placement3D(IfcAxis2Placement3D *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcAxis2Placement3D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBSplineCurve(IfcBSplineCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBSplineCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBeam(IfcBeam *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBeam(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBeamType(IfcBeamType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBeamType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBezierCurve(IfcBezierCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBezierCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBlobTexture(IfcBlobTexture *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBlobTexture(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBlock(IfcBlock *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBlock(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoilerType(IfcBoilerType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBoilerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBooleanClippingResult(IfcBooleanClippingResult *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBooleanClippingResult(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBooleanResult(IfcBooleanResult *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBooleanResult(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundaryCondition(IfcBoundaryCondition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBoundaryCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBoundaryEdgeCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBoundaryFaceCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBoundaryNodeCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBoundaryNodeConditionWarping(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundedCurve(IfcBoundedCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBoundedCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundedSurface(IfcBoundedSurface *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBoundedSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoundingBox(IfcBoundingBox *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBoundingBox(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBoxedHalfSpace(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuilding(IfcBuilding *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBuilding(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElement(IfcBuildingElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBuildingElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElementComponent(IfcBuildingElementComponent *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBuildingElementComponent(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElementPart(IfcBuildingElementPart *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBuildingElementPart(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElementProxy(IfcBuildingElementProxy *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBuildingElementProxy(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBuildingElementProxyType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingElementType(IfcBuildingElementType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBuildingElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcBuildingStorey(IfcBuildingStorey *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcBuildingStorey(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCShapeProfileDef(IfcCShapeProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCableCarrierFittingType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCableCarrierSegmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCableSegmentType(IfcCableSegmentType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCableSegmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCalendarDate(IfcCalendarDate *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCalendarDate(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianPoint(IfcCartesianPoint *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCartesianPoint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator(IfcCartesianTransformationOperator *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCartesianTransformationOperator(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCartesianTransformationOperator2D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCartesianTransformationOperator2DnonUniform(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCartesianTransformationOperator3D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCartesianTransformationOperator3DnonUniform(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCenterLineProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcChamferEdgeFeature(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcChillerType(IfcChillerType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcChillerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCircle(IfcCircle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCircle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCircleHollowProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCircleProfileDef(IfcCircleProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCircleProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassification(IfcClassification *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcClassification(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationItem(IfcClassificationItem *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcClassificationItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcClassificationItemRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationNotation(IfcClassificationNotation *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcClassificationNotation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcClassificationNotationFacet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClassificationReference(IfcClassificationReference *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcClassificationReference(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcClosedShell(IfcClosedShell *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcClosedShell(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCoilType(IfcCoilType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCoilType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColourRgb(IfcColourRgb *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcColourRgb(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColourSpecification(IfcColourSpecification *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcColourSpecification(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColumn(IfcColumn *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcColumn(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcColumnType(IfcColumnType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcColumnType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcComplexProperty(IfcComplexProperty *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcComplexProperty(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCompositeCurve(IfcCompositeCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCompositeCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCompositeCurveSegment(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCompositeProfileDef(IfcCompositeProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCompositeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCompressorType(IfcCompressorType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCompressorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCondenserType(IfcCondenserType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCondenserType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCondition(IfcCondition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConditionCriterion(IfcConditionCriterion *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConditionCriterion(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConic(IfcConic *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConic(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectedFaceSet(IfcConnectedFaceSet *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConnectedFaceSet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConnectionCurveGeometry(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionGeometry(IfcConnectionGeometry *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConnectionGeometry(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConnectionPointEccentricity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConnectionPointGeometry(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConnectionPortGeometry(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConnectionSurfaceGeometry(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstraint(IfcConstraint *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConstraint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConstraintAggregationRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConstraintClassificationRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstraintRelationship(IfcConstraintRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConstraintRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConstructionEquipmentResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConstructionMaterialResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstructionProductResource(IfcConstructionProductResource *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConstructionProductResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConstructionResource(IfcConstructionResource *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConstructionResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcContextDependentUnit(IfcContextDependentUnit *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcContextDependentUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcControl(IfcControl *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcControl(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcControllerType(IfcControllerType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcControllerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcConversionBasedUnit(IfcConversionBasedUnit *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcConversionBasedUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCooledBeamType(IfcCooledBeamType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCooledBeamType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCoolingTowerType(IfcCoolingTowerType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCoolingTowerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCoordinatedUniversalTimeOffset(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCostItem(IfcCostItem *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCostItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCostSchedule(IfcCostSchedule *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCostSchedule(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCostValue(IfcCostValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCostValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCovering(IfcCovering *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCovering(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCoveringType(IfcCoveringType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCoveringType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCraneRailAShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCraneRailFShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCrewResource(IfcCrewResource *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCrewResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCsgPrimitive3D(IfcCsgPrimitive3D *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCsgPrimitive3D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCsgSolid(IfcCsgSolid *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCsgSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurrencyRelationship(IfcCurrencyRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurrencyRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurtainWall(IfcCurtainWall *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurtainWall(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurtainWallType(IfcCurtainWallType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurtainWallType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurve(IfcCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurveBoundedPlane(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveStyle(IfcCurveStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurveStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFont(IfcCurveStyleFont *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurveStyleFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurveStyleFontAndScaling(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcCurveStyleFontPattern(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDamperType(IfcDamperType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDamperType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDateAndTime(IfcDateAndTime *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDateAndTime(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDefinedSymbol(IfcDefinedSymbol *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDefinedSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDerivedProfileDef(IfcDerivedProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDerivedProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDerivedUnit(IfcDerivedUnit *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDerivedUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDerivedUnitElement(IfcDerivedUnitElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDerivedUnitElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDiameterDimension(IfcDiameterDimension *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDiameterDimension(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDimensionCalloutRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionCurve(IfcDimensionCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDimensionCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDimensionCurveDirectedCallout(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDimensionCurveTerminator(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionPair(IfcDimensionPair *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDimensionPair(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDimensionalExponents(IfcDimensionalExponents *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDimensionalExponents(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDirection(IfcDirection *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDirection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDiscreteAccessory(IfcDiscreteAccessory *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDiscreteAccessory(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDiscreteAccessoryType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionChamberElement(IfcDistributionChamberElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDistributionChamberElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDistributionChamberElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionControlElement(IfcDistributionControlElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDistributionControlElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionControlElementType(IfcDistributionControlElementType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDistributionControlElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionElement(IfcDistributionElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDistributionElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionElementType(IfcDistributionElementType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDistributionElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionFlowElement(IfcDistributionFlowElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDistributionFlowElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionFlowElementType(IfcDistributionFlowElementType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDistributionFlowElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDistributionPort(IfcDistributionPort *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDistributionPort(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDocumentElectronicFormat(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDocumentInformation(IfcDocumentInformation *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDocumentInformation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDocumentInformationRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDocumentReference(IfcDocumentReference *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDocumentReference(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDoor(IfcDoor *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDoor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDoorLiningProperties(IfcDoorLiningProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDoorLiningProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDoorPanelProperties(IfcDoorPanelProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDoorPanelProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDoorStyle(IfcDoorStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDoorStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingCallout(IfcDraughtingCallout *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDraughtingCallout(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDraughtingCalloutRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDraughtingPreDefinedColour(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDraughtingPreDefinedCurveFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDraughtingPreDefinedTextFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDuctFittingType(IfcDuctFittingType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDuctFittingType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDuctSegmentType(IfcDuctSegmentType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDuctSegmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcDuctSilencerType(IfcDuctSilencerType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcDuctSilencerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEdge(IfcEdge *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEdge(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEdgeCurve(IfcEdgeCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEdgeCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEdgeFeature(IfcEdgeFeature *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEdgeFeature(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEdgeLoop(IfcEdgeLoop *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEdgeLoop(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricApplianceType(IfcElectricApplianceType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElectricApplianceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElectricDistributionPoint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElectricFlowStorageDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricGeneratorType(IfcElectricGeneratorType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElectricGeneratorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricHeaterType(IfcElectricHeaterType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElectricHeaterType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricMotorType(IfcElectricMotorType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElectricMotorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricTimeControlType(IfcElectricTimeControlType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElectricTimeControlType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElectricalBaseProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricalCircuit(IfcElectricalCircuit *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElectricalCircuit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElectricalElement(IfcElectricalElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElectricalElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElement(IfcElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementAssembly(IfcElementAssembly *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElementAssembly(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementComponent(IfcElementComponent *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElementComponent(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementComponentType(IfcElementComponentType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElementComponentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementQuantity(IfcElementQuantity *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElementQuantity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementType(IfcElementType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcElementarySurface(IfcElementarySurface *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcElementarySurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEllipse(IfcEllipse *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEllipse(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEllipseProfileDef(IfcEllipseProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEllipseProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEnergyConversionDevice(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEnergyConversionDeviceType(IfcEnergyConversionDeviceType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEnergyConversionDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEnergyProperties(IfcEnergyProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEnergyProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEnvironmentalImpactValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEquipmentElement(IfcEquipmentElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEquipmentElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEquipmentStandard(IfcEquipmentStandard *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEquipmentStandard(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEvaporativeCoolerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcEvaporatorType(IfcEvaporatorType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcEvaporatorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcExtendedMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExternalReference(IfcExternalReference *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcExternalReference(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcExternallyDefinedHatchStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcExternallyDefinedSurfaceStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcExternallyDefinedSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcExternallyDefinedTextFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcExtrudedAreaSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFace(IfcFace *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFace(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFaceBasedSurfaceModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFaceBound(IfcFaceBound *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFaceBound(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFaceOuterBound(IfcFaceOuterBound *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFaceOuterBound(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFaceSurface(IfcFaceSurface *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFaceSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFacetedBrep(IfcFacetedBrep *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFacetedBrep(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFacetedBrepWithVoids(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFailureConnectionCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFanType(IfcFanType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFanType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFastener(IfcFastener *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFastener(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFastenerType(IfcFastenerType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFastenerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFeatureElement(IfcFeatureElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFeatureElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFeatureElementAddition(IfcFeatureElementAddition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFeatureElementAddition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFeatureElementSubtraction(IfcFeatureElementSubtraction *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFeatureElementSubtraction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyle(IfcFillAreaStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFillAreaStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFillAreaStyleHatching(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFillAreaStyleTileSymbolWithStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFillAreaStyleTiles(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFilterType(IfcFilterType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFilterType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFireSuppressionTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowController(IfcFlowController *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowController(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowControllerType(IfcFlowControllerType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowControllerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowFitting(IfcFlowFitting *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowFitting(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowFittingType(IfcFlowFittingType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowFittingType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowInstrumentType(IfcFlowInstrumentType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowInstrumentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowMeterType(IfcFlowMeterType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowMeterType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowMovingDevice(IfcFlowMovingDevice *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowMovingDevice(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowMovingDeviceType(IfcFlowMovingDeviceType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowMovingDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowSegment(IfcFlowSegment *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowSegment(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowSegmentType(IfcFlowSegmentType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowSegmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowStorageDevice(IfcFlowStorageDevice *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowStorageDevice(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowStorageDeviceType(IfcFlowStorageDeviceType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowStorageDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowTerminal(IfcFlowTerminal *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowTerminal(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowTerminalType(IfcFlowTerminalType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowTreatmentDevice(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFlowTreatmentDeviceType(IfcFlowTreatmentDeviceType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFlowTreatmentDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFluidFlowProperties(IfcFluidFlowProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFluidFlowProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFooting(IfcFooting *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFooting(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFuelProperties(IfcFuelProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFuelProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFurnishingElement(IfcFurnishingElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFurnishingElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFurnishingElementType(IfcFurnishingElementType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFurnishingElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFurnitureStandard(IfcFurnitureStandard *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFurnitureStandard(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcFurnitureType(IfcFurnitureType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcFurnitureType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGasTerminalType(IfcGasTerminalType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGasTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGeneralMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGeneralProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricCurveSet(IfcGeometricCurveSet *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGeometricCurveSet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGeometricRepresentationContext(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricRepresentationItem(IfcGeometricRepresentationItem *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGeometricRepresentationItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGeometricRepresentationSubContext(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGeometricSet(IfcGeometricSet *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGeometricSet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGrid(IfcGrid *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGrid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGridAxis(IfcGridAxis *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGridAxis(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGridPlacement(IfcGridPlacement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGridPlacement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcGroup(IfcGroup *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcGroup(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcHalfSpaceSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcHeatExchangerType(IfcHeatExchangerType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcHeatExchangerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcHumidifierType(IfcHumidifierType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcHumidifierType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcHygroscopicMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcIShapeProfileDef(IfcIShapeProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcIShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcImageTexture(IfcImageTexture *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcImageTexture(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcInventory(IfcInventory *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcInventory(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcIrregularTimeSeries(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcIrregularTimeSeriesValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcJunctionBoxType(IfcJunctionBoxType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcJunctionBoxType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLShapeProfileDef(IfcLShapeProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLaborResource(IfcLaborResource *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLaborResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLampType(IfcLampType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLampType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLibraryInformation(IfcLibraryInformation *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLibraryInformation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLibraryReference(IfcLibraryReference *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLibraryReference(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightDistributionData(IfcLightDistributionData *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLightDistributionData(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightFixtureType(IfcLightFixtureType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLightFixtureType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLightIntensityDistribution(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSource(IfcLightSource *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLightSource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSourceAmbient(IfcLightSourceAmbient *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLightSourceAmbient(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSourceDirectional(IfcLightSourceDirectional *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLightSourceDirectional(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLightSourceGoniometric(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSourcePositional(IfcLightSourcePositional *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLightSourcePositional(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLightSourceSpot(IfcLightSourceSpot *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLightSourceSpot(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLine(IfcLine *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLine(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLinearDimension(IfcLinearDimension *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLinearDimension(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLocalPlacement(IfcLocalPlacement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLocalPlacement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLocalTime(IfcLocalTime *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLocalTime(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcLoop(IfcLoop *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcLoop(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcManifoldSolidBrep(IfcManifoldSolidBrep *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcManifoldSolidBrep(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMappedItem(IfcMappedItem *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMappedItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterial(IfcMaterial *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMaterial(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMaterialClassificationRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMaterialDefinitionRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialLayer(IfcMaterialLayer *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMaterialLayer(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialLayerSet(IfcMaterialLayerSet *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMaterialLayerSet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMaterialLayerSetUsage(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialList(IfcMaterialList *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMaterialList(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMaterialProperties(IfcMaterialProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMeasureWithUnit(IfcMeasureWithUnit *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMeasureWithUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMechanicalConcreteMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMechanicalFastener(IfcMechanicalFastener *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMechanicalFastener(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMechanicalFastenerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMechanicalMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMechanicalSteelMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMember(IfcMember *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMember(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMemberType(IfcMemberType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMemberType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMetric(IfcMetric *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMetric(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMonetaryUnit(IfcMonetaryUnit *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMonetaryUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMotorConnectionType(IfcMotorConnectionType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMotorConnectionType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcMove(IfcMove *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcMove(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcNamedUnit(IfcNamedUnit *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcNamedUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcObject(IfcObject *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcObject(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcObjectDefinition(IfcObjectDefinition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcObjectDefinition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcObjectPlacement(IfcObjectPlacement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcObjectPlacement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcObjective(IfcObjective *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcObjective(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOccupant(IfcOccupant *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOccupant(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOffsetCurve2D(IfcOffsetCurve2D *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOffsetCurve2D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOffsetCurve3D(IfcOffsetCurve3D *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOffsetCurve3D(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOneDirectionRepeatFactor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOpenShell(IfcOpenShell *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOpenShell(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOpeningElement(IfcOpeningElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOpeningElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOpticalMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOrderAction(IfcOrderAction *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOrderAction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOrganization(IfcOrganization *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOrganization(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOrganizationRelationship(IfcOrganizationRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOrganizationRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOrientedEdge(IfcOrientedEdge *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOrientedEdge(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOutletType(IfcOutletType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOutletType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcOwnerHistory(IfcOwnerHistory *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcOwnerHistory(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcParameterizedProfileDef(IfcParameterizedProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcParameterizedProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPath(IfcPath *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPath(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPerformanceHistory(IfcPerformanceHistory *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPerformanceHistory(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPermeableCoveringProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPermit(IfcPermit *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPermit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPerson(IfcPerson *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPerson(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPersonAndOrganization(IfcPersonAndOrganization *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPersonAndOrganization(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPhysicalComplexQuantity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPhysicalQuantity(IfcPhysicalQuantity *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPhysicalQuantity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPhysicalSimpleQuantity(IfcPhysicalSimpleQuantity *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPhysicalSimpleQuantity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPile(IfcPile *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPile(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPipeFittingType(IfcPipeFittingType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPipeFittingType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPipeSegmentType(IfcPipeSegmentType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPipeSegmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPixelTexture(IfcPixelTexture *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPixelTexture(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlacement(IfcPlacement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPlacement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlanarBox(IfcPlanarBox *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPlanarBox(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlanarExtent(IfcPlanarExtent *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPlanarExtent(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlane(IfcPlane *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPlane(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlate(IfcPlate *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPlate(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPlateType(IfcPlateType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPlateType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPoint(IfcPoint *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPoint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPointOnCurve(IfcPointOnCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPointOnCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPointOnSurface(IfcPointOnSurface *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPointOnSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPolyLoop(IfcPolyLoop *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPolyLoop(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPolygonalBoundedHalfSpace(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPolyline(IfcPolyline *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPolyline(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPort(IfcPort *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPort(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPostalAddress(IfcPostalAddress *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPostalAddress(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedColour(IfcPreDefinedColour *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPreDefinedColour(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPreDefinedCurveFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPreDefinedDimensionSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedItem(IfcPreDefinedItem *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPreDefinedItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPreDefinedPointMarkerSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedSymbol(IfcPreDefinedSymbol *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPreDefinedSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPreDefinedTerminatorSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPreDefinedTextFont(IfcPreDefinedTextFont *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPreDefinedTextFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPresentationLayerAssignment(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPresentationLayerWithStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPresentationStyle(IfcPresentationStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPresentationStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPresentationStyleAssignment(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProcedure(IfcProcedure *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProcedure(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProcess(IfcProcess *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProcess(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProduct(IfcProduct *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProduct(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProductDefinitionShape(IfcProductDefinitionShape *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProductDefinitionShape(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProductRepresentation(IfcProductRepresentation *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProductRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProductsOfCombustionProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProfileDef(IfcProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProfileProperties(IfcProfileProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProject(IfcProject *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProject(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProjectOrder(IfcProjectOrder *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProjectOrder(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProjectOrderRecord(IfcProjectOrderRecord *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProjectOrderRecord(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProjectionCurve(IfcProjectionCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProjectionCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProjectionElement(IfcProjectionElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProjectionElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProperty(IfcProperty *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProperty(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertyBoundedValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertyConstraintRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyDefinition(IfcPropertyDefinition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertyDefinition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertyDependencyRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertyEnumeratedValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyEnumeration(IfcPropertyEnumeration *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertyEnumeration(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyListValue(IfcPropertyListValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertyListValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertyReferenceValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertySet(IfcPropertySet *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertySet(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertySetDefinition(IfcPropertySetDefinition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertySetDefinition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertySingleValue(IfcPropertySingleValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertySingleValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPropertyTableValue(IfcPropertyTableValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPropertyTableValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProtectiveDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcProxy(IfcProxy *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcProxy(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcPumpType(IfcPumpType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcPumpType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityArea(IfcQuantityArea *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcQuantityArea(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityCount(IfcQuantityCount *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcQuantityCount(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityLength(IfcQuantityLength *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcQuantityLength(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityTime(IfcQuantityTime *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcQuantityTime(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityVolume(IfcQuantityVolume *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcQuantityVolume(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcQuantityWeight(IfcQuantityWeight *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcQuantityWeight(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRadiusDimension(IfcRadiusDimension *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRadiusDimension(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRailing(IfcRailing *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRailing(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRailingType(IfcRailingType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRailingType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRamp(IfcRamp *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRamp(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRampFlight(IfcRampFlight *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRampFlight(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRampFlightType(IfcRampFlightType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRampFlightType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRationalBezierCurve(IfcRationalBezierCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRationalBezierCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRectangleHollowProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRectangleProfileDef(IfcRectangleProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRectangleProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRectangularPyramid(IfcRectangularPyramid *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRectangularPyramid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRectangularTrimmedSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReferencesValueDocument(IfcReferencesValueDocument *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcReferencesValueDocument(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRegularTimeSeries(IfcRegularTimeSeries *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRegularTimeSeries(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcReinforcementBarProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcReinforcementDefinitionProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReinforcingBar(IfcReinforcingBar *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcReinforcingBar(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReinforcingElement(IfcReinforcingElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcReinforcingElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcReinforcingMesh(IfcReinforcingMesh *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcReinforcingMesh(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAggregates(IfcRelAggregates *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAggregates(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssigns(IfcRelAssigns *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssigns(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsTasks(IfcRelAssignsTasks *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssignsTasks(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToActor(IfcRelAssignsToActor *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssignsToActor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToControl(IfcRelAssignsToControl *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssignsToControl(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssignsToGroup(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssignsToProcess(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssignsToProduct(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssignsToProjectOrder(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToResource(IfcRelAssignsToResource *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssignsToResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociates(IfcRelAssociates *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssociates(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssociatesAppliedValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssociatesApproval(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssociatesClassification(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssociatesConstraint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssociatesDocument(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssociatesLibrary(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssociatesMaterial(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelAssociatesProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnects(IfcRelConnects *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelConnects(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsElements(IfcRelConnectsElements *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelConnectsElements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelConnectsPathElements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelConnectsPortToElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsPorts(IfcRelConnectsPorts *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelConnectsPorts(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelConnectsStructuralActivity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelConnectsStructuralElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelConnectsStructuralMember(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelConnectsWithEccentricity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelConnectsWithRealizingElements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelContainedInSpatialStructure(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelCoversBldgElements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelCoversSpaces(IfcRelCoversSpaces *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelCoversSpaces(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelDecomposes(IfcRelDecomposes *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelDecomposes(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelDefines(IfcRelDefines *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelDefines(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelDefinesByProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelDefinesByType(IfcRelDefinesByType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelDefinesByType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelFillsElement(IfcRelFillsElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelFillsElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelFlowControlElements(IfcRelFlowControlElements *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelFlowControlElements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelInteractionRequirements(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelNests(IfcRelNests *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelNests(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelOccupiesSpaces(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelOverridesProperties(IfcRelOverridesProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelOverridesProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelProjectsElement(IfcRelProjectsElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelProjectsElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelReferencedInSpatialStructure(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelSchedulesCostItems(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelSequence(IfcRelSequence *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelSequence(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelServicesBuildings(IfcRelServicesBuildings *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelServicesBuildings(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelSpaceBoundary(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelVoidsElement(IfcRelVoidsElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelVoidsElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelationship(IfcRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRelaxation(IfcRelaxation *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRelaxation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRepresentation(IfcRepresentation *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRepresentationContext(IfcRepresentationContext *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRepresentationContext(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRepresentationItem(IfcRepresentationItem *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRepresentationItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRepresentationMap(IfcRepresentationMap *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRepresentationMap(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcResource(IfcResource *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRevolvedAreaSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRibPlateProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRightCircularCone(IfcRightCircularCone *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRightCircularCone(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRightCircularCylinder(IfcRightCircularCylinder *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRightCircularCylinder(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRoof(IfcRoof *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRoof(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRoot(IfcRoot *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRoot(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRoundedEdgeFeature(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcRoundedRectangleProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSIUnit(IfcSIUnit *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSIUnit(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSanitaryTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcScheduleTimeControl(IfcScheduleTimeControl *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcScheduleTimeControl(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSectionProperties(IfcSectionProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSectionProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSectionReinforcementProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSectionedSpine(IfcSectionedSpine *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSectionedSpine(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSensorType(IfcSensorType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSensorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcServiceLife(IfcServiceLife *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcServiceLife(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcServiceLifeFactor(IfcServiceLifeFactor *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcServiceLifeFactor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcShapeAspect(IfcShapeAspect *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcShapeAspect(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcShapeModel(IfcShapeModel *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcShapeModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcShapeRepresentation(IfcShapeRepresentation *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcShapeRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcShellBasedSurfaceModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSimpleProperty(IfcSimpleProperty *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSimpleProperty(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSite(IfcSite *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSite(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSlab(IfcSlab *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSlab(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSlabType(IfcSlabType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSlabType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSlippageConnectionCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSolidModel(IfcSolidModel *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSolidModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSoundProperties(IfcSoundProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSoundProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSoundValue(IfcSoundValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSoundValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpace(IfcSpace *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSpace(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpaceHeaterType(IfcSpaceHeaterType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSpaceHeaterType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpaceProgram(IfcSpaceProgram *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSpaceProgram(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSpaceThermalLoadProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpaceType(IfcSpaceType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSpaceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpatialStructureElement(IfcSpatialStructureElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSpatialStructureElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSpatialStructureElementType(IfcSpatialStructureElementType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSpatialStructureElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSphere(IfcSphere *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSphere(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStackTerminalType(IfcStackTerminalType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStackTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStair(IfcStair *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStair(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStairFlight(IfcStairFlight *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStairFlight(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStairFlightType(IfcStairFlightType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStairFlightType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralAction(IfcStructuralAction *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralAction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralActivity(IfcStructuralActivity *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralActivity(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralAnalysisModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralConnection(IfcStructuralConnection *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralConnection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralConnectionCondition(IfcStructuralConnectionCondition *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralConnectionCondition(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralCurveConnection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralCurveMember(IfcStructuralCurveMember *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralCurveMember(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralCurveMemberVarying(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralItem(IfcStructuralItem *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLinearAction(IfcStructuralLinearAction *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLinearAction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLinearActionVarying(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoad(IfcStructuralLoad *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLoad(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLoadGroup(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLoadLinearForce(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLoadPlanarForce(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLoadSingleDisplacement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLoadSingleDisplacementDistortion(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLoadSingleForce(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLoadSingleForceWarping(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadStatic(IfcStructuralLoadStatic *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLoadStatic(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralLoadTemperature(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralMember(IfcStructuralMember *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralMember(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralPlanarAction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralPlanarActionVarying(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralPointAction(IfcStructuralPointAction *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralPointAction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralPointConnection(IfcStructuralPointConnection *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralPointConnection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralPointReaction(IfcStructuralPointReaction *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralPointReaction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralReaction(IfcStructuralReaction *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralReaction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralResultGroup(IfcStructuralResultGroup *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralResultGroup(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralSteelProfileProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralSurfaceConnection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralSurfaceMember(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuralSurfaceMemberVarying(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStructuredDimensionCallout(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStyleModel(IfcStyleModel *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStyleModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStyledItem(IfcStyledItem *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStyledItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcStyledRepresentation(IfcStyledRepresentation *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcStyledRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSubContractResource(IfcSubContractResource *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSubContractResource(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSubedge(IfcSubedge *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSubedge(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurface(IfcSurface *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceCurveSweptAreaSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceOfLinearExtrusion(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceOfRevolution(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyle(IfcSurfaceStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceStyleLighting(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceStyleRefraction(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceStyleRendering(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceStyleShading(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceStyleWithTextures(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSurfaceTexture(IfcSurfaceTexture *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSurfaceTexture(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSweptAreaSolid(IfcSweptAreaSolid *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSweptAreaSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSweptDiskSolid(IfcSweptDiskSolid *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSweptDiskSolid(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSweptSurface(IfcSweptSurface *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSweptSurface(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSwitchingDeviceType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSymbolStyle(IfcSymbolStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSymbolStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSystem(IfcSystem *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSystem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcSystemFurnitureElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTShapeProfileDef(IfcTShapeProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTable(IfcTable *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTable(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTableRow(IfcTableRow *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTableRow(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTankType(IfcTankType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTankType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTask(IfcTask *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTask(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTelecomAddress(IfcTelecomAddress *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTelecomAddress(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTendon(IfcTendon *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTendon(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTendonAnchor(IfcTendonAnchor *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTendonAnchor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTerminatorSymbol(IfcTerminatorSymbol *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTerminatorSymbol(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextLiteral(IfcTextLiteral *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextLiteral(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextLiteralWithExtent(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyle(IfcTextStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyleFontModel(IfcTextStyleFontModel *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextStyleFontModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextStyleForDefinedFont(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyleTextModel(IfcTextStyleTextModel *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextStyleTextModel(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextStyleWithBoxCharacteristics(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextureCoordinate(IfcTextureCoordinate *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextureCoordinate(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextureCoordinateGenerator(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextureMap(IfcTextureMap *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextureMap(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTextureVertex(IfcTextureVertex *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTextureVertex(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcThermalMaterialProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTimeSeries(IfcTimeSeries *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTimeSeries(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTimeSeriesReferenceRelationship(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTimeSeriesSchedule(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTimeSeriesValue(IfcTimeSeriesValue *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTimeSeriesValue(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTopologicalRepresentationItem(IfcTopologicalRepresentationItem *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTopologicalRepresentationItem(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTopologyRepresentation(IfcTopologyRepresentation *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTopologyRepresentation(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTransformerType(IfcTransformerType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTransformerType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTransportElement(IfcTransportElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTransportElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTransportElementType(IfcTransportElementType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTransportElementType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTrapeziumProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTrimmedCurve(IfcTrimmedCurve *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTrimmedCurve(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTubeBundleType(IfcTubeBundleType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTubeBundleType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTwoDirectionRepeatFactor(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTypeObject(IfcTypeObject *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTypeObject(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcTypeProduct(IfcTypeProduct *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcTypeProduct(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcUShapeProfileDef(IfcUShapeProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcUShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcUnitAssignment(IfcUnitAssignment *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcUnitAssignment(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcUnitaryEquipmentType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcValveType(IfcValveType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcValveType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVector(IfcVector *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcVector(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVertex(IfcVertex *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcVertex(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcVertexBasedTextureMap(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVertexLoop(IfcVertexLoop *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcVertexLoop(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVertexPoint(IfcVertexPoint *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcVertexPoint(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcVibrationIsolatorType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVirtualElement(IfcVirtualElement *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcVirtualElement(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcVirtualGridIntersection(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWall(IfcWall *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWall(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWallStandardCase(IfcWallStandardCase *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWallStandardCase(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWallType(IfcWallType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWallType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWasteTerminalType(IfcWasteTerminalType *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWasteTerminalType(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWaterProperties(IfcWaterProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWaterProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWindow(IfcWindow *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWindow(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWindowLiningProperties(IfcWindowLiningProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWindowLiningProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWindowPanelProperties(IfcWindowPanelProperties *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWindowPanelProperties(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWindowStyle(IfcWindowStyle *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWindowStyle(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWorkControl(IfcWorkControl *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWorkControl(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWorkPlan(IfcWorkPlan *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWorkPlan(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcWorkSchedule(IfcWorkSchedule *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcWorkSchedule(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcZShapeProfileDef(IfcZShapeProfileDef *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcZShapeProfileDef(" << value->type());
    return false;
}

bool FalseVisitor::visitIfcZone(IfcZone *value) {
    STEP_LOG_ERROR(m_logger, "Failed to visit IfcZone(" << value->type());
    return false;
}

