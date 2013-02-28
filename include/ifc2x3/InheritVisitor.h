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

#ifndef IFC2X3_INHERITVISITOR_H
#define IFC2X3_INHERITVISITOR_H

#include <ifc2x3/Export.h>

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
#include <ifc2x3/Visitor.h>

namespace ifc2x3 {

    /**
     * Visitor that implements all of the methods by calling their parent visiting method.
     * 
     */
    class IFC2X3_EXPORT InheritVisitor : public Visitor {
    public:
        /**
         */
        InheritVisitor();
        virtual ~InheritVisitor();
        /**
         * @param value the IfcActorSelect datatype to visit
         */
        virtual bool visitIfcActorSelect(IfcActorSelect *value);
        /**
         * @param value the IfcAppliedValueSelect datatype to visit
         */
        virtual bool visitIfcAppliedValueSelect(IfcAppliedValueSelect *value);
        /**
         * @param value the IfcAxis2Placement datatype to visit
         */
        virtual bool visitIfcAxis2Placement(IfcAxis2Placement *value);
        /**
         * @param value the IfcBooleanOperand datatype to visit
         */
        virtual bool visitIfcBooleanOperand(IfcBooleanOperand *value);
        /**
         * @param value the IfcCharacterStyleSelect datatype to visit
         */
        virtual bool visitIfcCharacterStyleSelect(IfcCharacterStyleSelect *value);
        /**
         * @param value the IfcClassificationNotationSelect datatype to visit
         */
        virtual bool visitIfcClassificationNotationSelect(IfcClassificationNotationSelect *value);
        /**
         * @param value the IfcColour datatype to visit
         */
        virtual bool visitIfcColour(IfcColour *value);
        /**
         * @param value the IfcColourOrFactor datatype to visit
         */
        virtual bool visitIfcColourOrFactor(IfcColourOrFactor *value);
        /**
         * @param value the IfcConditionCriterionSelect datatype to visit
         */
        virtual bool visitIfcConditionCriterionSelect(IfcConditionCriterionSelect *value);
        /**
         * @param value the IfcCsgSelect datatype to visit
         */
        virtual bool visitIfcCsgSelect(IfcCsgSelect *value);
        /**
         * @param value the IfcCurveFontOrScaledCurveFontSelect datatype to visit
         */
        virtual bool visitIfcCurveFontOrScaledCurveFontSelect(IfcCurveFontOrScaledCurveFontSelect *value);
        /**
         * @param value the IfcCurveOrEdgeCurve datatype to visit
         */
        virtual bool visitIfcCurveOrEdgeCurve(IfcCurveOrEdgeCurve *value);
        /**
         * @param value the IfcCurveStyleFontSelect datatype to visit
         */
        virtual bool visitIfcCurveStyleFontSelect(IfcCurveStyleFontSelect *value);
        /**
         * @param value the IfcDateTimeSelect datatype to visit
         */
        virtual bool visitIfcDateTimeSelect(IfcDateTimeSelect *value);
        /**
         * @param value the IfcDefinedSymbolSelect datatype to visit
         */
        virtual bool visitIfcDefinedSymbolSelect(IfcDefinedSymbolSelect *value);
        /**
         * @param value the IfcDerivedMeasureValue datatype to visit
         */
        virtual bool visitIfcDerivedMeasureValue(IfcDerivedMeasureValue *value);
        /**
         * @param value the IfcDocumentSelect datatype to visit
         */
        virtual bool visitIfcDocumentSelect(IfcDocumentSelect *value);
        /**
         * @param value the IfcDraughtingCalloutElement datatype to visit
         */
        virtual bool visitIfcDraughtingCalloutElement(IfcDraughtingCalloutElement *value);
        /**
         * @param value the IfcFillAreaStyleTileShapeSelect datatype to visit
         */
        virtual bool visitIfcFillAreaStyleTileShapeSelect(IfcFillAreaStyleTileShapeSelect *value);
        /**
         * @param value the IfcFillStyleSelect datatype to visit
         */
        virtual bool visitIfcFillStyleSelect(IfcFillStyleSelect *value);
        /**
         * @param value the IfcGeometricSetSelect datatype to visit
         */
        virtual bool visitIfcGeometricSetSelect(IfcGeometricSetSelect *value);
        /**
         * @param value the IfcHatchLineDistanceSelect datatype to visit
         */
        virtual bool visitIfcHatchLineDistanceSelect(IfcHatchLineDistanceSelect *value);
        /**
         * @param value the IfcLayeredItem datatype to visit
         */
        virtual bool visitIfcLayeredItem(IfcLayeredItem *value);
        /**
         * @param value the IfcLibrarySelect datatype to visit
         */
        virtual bool visitIfcLibrarySelect(IfcLibrarySelect *value);
        /**
         * @param value the IfcLightDistributionDataSourceSelect datatype to visit
         */
        virtual bool visitIfcLightDistributionDataSourceSelect(IfcLightDistributionDataSourceSelect *value);
        /**
         * @param value the IfcMaterialSelect datatype to visit
         */
        virtual bool visitIfcMaterialSelect(IfcMaterialSelect *value);
        /**
         * @param value the IfcMeasureValue datatype to visit
         */
        virtual bool visitIfcMeasureValue(IfcMeasureValue *value);
        /**
         * @param value the IfcMetricValueSelect datatype to visit
         */
        virtual bool visitIfcMetricValueSelect(IfcMetricValueSelect *value);
        /**
         * @param value the IfcObjectReferenceSelect datatype to visit
         */
        virtual bool visitIfcObjectReferenceSelect(IfcObjectReferenceSelect *value);
        /**
         * @param value the IfcOrientationSelect datatype to visit
         */
        virtual bool visitIfcOrientationSelect(IfcOrientationSelect *value);
        /**
         * @param value the IfcPointOrVertexPoint datatype to visit
         */
        virtual bool visitIfcPointOrVertexPoint(IfcPointOrVertexPoint *value);
        /**
         * @param value the IfcPresentationStyleSelect datatype to visit
         */
        virtual bool visitIfcPresentationStyleSelect(IfcPresentationStyleSelect *value);
        /**
         * @param value the IfcShell datatype to visit
         */
        virtual bool visitIfcShell(IfcShell *value);
        /**
         * @param value the IfcSimpleValue datatype to visit
         */
        virtual bool visitIfcSimpleValue(IfcSimpleValue *value);
        /**
         * @param value the IfcSizeSelect datatype to visit
         */
        virtual bool visitIfcSizeSelect(IfcSizeSelect *value);
        /**
         * @param value the IfcSpecularHighlightSelect datatype to visit
         */
        virtual bool visitIfcSpecularHighlightSelect(IfcSpecularHighlightSelect *value);
        /**
         * @param value the IfcStructuralActivityAssignmentSelect datatype to visit
         */
        virtual bool visitIfcStructuralActivityAssignmentSelect(IfcStructuralActivityAssignmentSelect *value);
        /**
         * @param value the IfcSurfaceOrFaceSurface datatype to visit
         */
        virtual bool visitIfcSurfaceOrFaceSurface(IfcSurfaceOrFaceSurface *value);
        /**
         * @param value the IfcSurfaceStyleElementSelect datatype to visit
         */
        virtual bool visitIfcSurfaceStyleElementSelect(IfcSurfaceStyleElementSelect *value);
        /**
         * @param value the IfcSymbolStyleSelect datatype to visit
         */
        virtual bool visitIfcSymbolStyleSelect(IfcSymbolStyleSelect *value);
        /**
         * @param value the IfcTextFontSelect datatype to visit
         */
        virtual bool visitIfcTextFontSelect(IfcTextFontSelect *value);
        /**
         * @param value the IfcTextStyleSelect datatype to visit
         */
        virtual bool visitIfcTextStyleSelect(IfcTextStyleSelect *value);
        /**
         * @param value the IfcTrimmingSelect datatype to visit
         */
        virtual bool visitIfcTrimmingSelect(IfcTrimmingSelect *value);
        /**
         * @param value the IfcUnit datatype to visit
         */
        virtual bool visitIfcUnit(IfcUnit *value);
        /**
         * @param value the IfcValue datatype to visit
         */
        virtual bool visitIfcValue(IfcValue *value);
        /**
         * @param value the IfcVectorOrDirection datatype to visit
         */
        virtual bool visitIfcVectorOrDirection(IfcVectorOrDirection *value);
        /**
         * @param value the Ifc2DCompositeCurve datatype to visit
         */
        virtual bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *value);
        /**
         * @param value the IfcActionRequest datatype to visit
         */
        virtual bool visitIfcActionRequest(IfcActionRequest *value);
        /**
         * @param value the IfcActor datatype to visit
         */
        virtual bool visitIfcActor(IfcActor *value);
        /**
         * @param value the IfcActorRole datatype to visit
         */
        virtual bool visitIfcActorRole(IfcActorRole *value);
        /**
         * @param value the IfcActuatorType datatype to visit
         */
        virtual bool visitIfcActuatorType(IfcActuatorType *value);
        /**
         * @param value the IfcAddress datatype to visit
         */
        virtual bool visitIfcAddress(IfcAddress *value);
        /**
         * @param value the IfcAirTerminalBoxType datatype to visit
         */
        virtual bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *value);
        /**
         * @param value the IfcAirTerminalType datatype to visit
         */
        virtual bool visitIfcAirTerminalType(IfcAirTerminalType *value);
        /**
         * @param value the IfcAirToAirHeatRecoveryType datatype to visit
         */
        virtual bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *value);
        /**
         * @param value the IfcAlarmType datatype to visit
         */
        virtual bool visitIfcAlarmType(IfcAlarmType *value);
        /**
         * @param value the IfcAngularDimension datatype to visit
         */
        virtual bool visitIfcAngularDimension(IfcAngularDimension *value);
        /**
         * @param value the IfcAnnotation datatype to visit
         */
        virtual bool visitIfcAnnotation(IfcAnnotation *value);
        /**
         * @param value the IfcAnnotationCurveOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value);
        /**
         * @param value the IfcAnnotationFillArea datatype to visit
         */
        virtual bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *value);
        /**
         * @param value the IfcAnnotationFillAreaOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *value);
        /**
         * @param value the IfcAnnotationOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationOccurrence(IfcAnnotationOccurrence *value);
        /**
         * @param value the IfcAnnotationSurface datatype to visit
         */
        virtual bool visitIfcAnnotationSurface(IfcAnnotationSurface *value);
        /**
         * @param value the IfcAnnotationSurfaceOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *value);
        /**
         * @param value the IfcAnnotationSymbolOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value);
        /**
         * @param value the IfcAnnotationTextOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value);
        /**
         * @param value the IfcApplication datatype to visit
         */
        virtual bool visitIfcApplication(IfcApplication *value);
        /**
         * @param value the IfcAppliedValue datatype to visit
         */
        virtual bool visitIfcAppliedValue(IfcAppliedValue *value);
        /**
         * @param value the IfcAppliedValueRelationship datatype to visit
         */
        virtual bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *value);
        /**
         * @param value the IfcApproval datatype to visit
         */
        virtual bool visitIfcApproval(IfcApproval *value);
        /**
         * @param value the IfcApprovalActorRelationship datatype to visit
         */
        virtual bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *value);
        /**
         * @param value the IfcApprovalPropertyRelationship datatype to visit
         */
        virtual bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *value);
        /**
         * @param value the IfcApprovalRelationship datatype to visit
         */
        virtual bool visitIfcApprovalRelationship(IfcApprovalRelationship *value);
        /**
         * @param value the IfcArbitraryClosedProfileDef datatype to visit
         */
        virtual bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *value);
        /**
         * @param value the IfcArbitraryOpenProfileDef datatype to visit
         */
        virtual bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *value);
        /**
         * @param value the IfcArbitraryProfileDefWithVoids datatype to visit
         */
        virtual bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *value);
        /**
         * @param value the IfcAsset datatype to visit
         */
        virtual bool visitIfcAsset(IfcAsset *value);
        /**
         * @param value the IfcAsymmetricIShapeProfileDef datatype to visit
         */
        virtual bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *value);
        /**
         * @param value the IfcAxis1Placement datatype to visit
         */
        virtual bool visitIfcAxis1Placement(IfcAxis1Placement *value);
        /**
         * @param value the IfcAxis2Placement2D datatype to visit
         */
        virtual bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *value);
        /**
         * @param value the IfcAxis2Placement3D datatype to visit
         */
        virtual bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *value);
        /**
         * @param value the IfcBSplineCurve datatype to visit
         */
        virtual bool visitIfcBSplineCurve(IfcBSplineCurve *value);
        /**
         * @param value the IfcBeam datatype to visit
         */
        virtual bool visitIfcBeam(IfcBeam *value);
        /**
         * @param value the IfcBeamType datatype to visit
         */
        virtual bool visitIfcBeamType(IfcBeamType *value);
        /**
         * @param value the IfcBezierCurve datatype to visit
         */
        virtual bool visitIfcBezierCurve(IfcBezierCurve *value);
        /**
         * @param value the IfcBlobTexture datatype to visit
         */
        virtual bool visitIfcBlobTexture(IfcBlobTexture *value);
        /**
         * @param value the IfcBlock datatype to visit
         */
        virtual bool visitIfcBlock(IfcBlock *value);
        /**
         * @param value the IfcBoilerType datatype to visit
         */
        virtual bool visitIfcBoilerType(IfcBoilerType *value);
        /**
         * @param value the IfcBooleanClippingResult datatype to visit
         */
        virtual bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *value);
        /**
         * @param value the IfcBooleanResult datatype to visit
         */
        virtual bool visitIfcBooleanResult(IfcBooleanResult *value);
        /**
         * @param value the IfcBoundaryCondition datatype to visit
         */
        virtual bool visitIfcBoundaryCondition(IfcBoundaryCondition *value);
        /**
         * @param value the IfcBoundaryEdgeCondition datatype to visit
         */
        virtual bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *value);
        /**
         * @param value the IfcBoundaryFaceCondition datatype to visit
         */
        virtual bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *value);
        /**
         * @param value the IfcBoundaryNodeCondition datatype to visit
         */
        virtual bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *value);
        /**
         * @param value the IfcBoundaryNodeConditionWarping datatype to visit
         */
        virtual bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *value);
        /**
         * @param value the IfcBoundedCurve datatype to visit
         */
        virtual bool visitIfcBoundedCurve(IfcBoundedCurve *value);
        /**
         * @param value the IfcBoundedSurface datatype to visit
         */
        virtual bool visitIfcBoundedSurface(IfcBoundedSurface *value);
        /**
         * @param value the IfcBoundingBox datatype to visit
         */
        virtual bool visitIfcBoundingBox(IfcBoundingBox *value);
        /**
         * @param value the IfcBoxedHalfSpace datatype to visit
         */
        virtual bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *value);
        /**
         * @param value the IfcBuilding datatype to visit
         */
        virtual bool visitIfcBuilding(IfcBuilding *value);
        /**
         * @param value the IfcBuildingElement datatype to visit
         */
        virtual bool visitIfcBuildingElement(IfcBuildingElement *value);
        /**
         * @param value the IfcBuildingElementComponent datatype to visit
         */
        virtual bool visitIfcBuildingElementComponent(IfcBuildingElementComponent *value);
        /**
         * @param value the IfcBuildingElementPart datatype to visit
         */
        virtual bool visitIfcBuildingElementPart(IfcBuildingElementPart *value);
        /**
         * @param value the IfcBuildingElementProxy datatype to visit
         */
        virtual bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *value);
        /**
         * @param value the IfcBuildingElementProxyType datatype to visit
         */
        virtual bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *value);
        /**
         * @param value the IfcBuildingElementType datatype to visit
         */
        virtual bool visitIfcBuildingElementType(IfcBuildingElementType *value);
        /**
         * @param value the IfcBuildingStorey datatype to visit
         */
        virtual bool visitIfcBuildingStorey(IfcBuildingStorey *value);
        /**
         * @param value the IfcCShapeProfileDef datatype to visit
         */
        virtual bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *value);
        /**
         * @param value the IfcCableCarrierFittingType datatype to visit
         */
        virtual bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *value);
        /**
         * @param value the IfcCableCarrierSegmentType datatype to visit
         */
        virtual bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *value);
        /**
         * @param value the IfcCableSegmentType datatype to visit
         */
        virtual bool visitIfcCableSegmentType(IfcCableSegmentType *value);
        /**
         * @param value the IfcCalendarDate datatype to visit
         */
        virtual bool visitIfcCalendarDate(IfcCalendarDate *value);
        /**
         * @param value the IfcCartesianPoint datatype to visit
         */
        virtual bool visitIfcCartesianPoint(IfcCartesianPoint *value);
        /**
         * @param value the IfcCartesianTransformationOperator datatype to visit
         */
        virtual bool visitIfcCartesianTransformationOperator(IfcCartesianTransformationOperator *value);
        /**
         * @param value the IfcCartesianTransformationOperator2D datatype to visit
         */
        virtual bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *value);
        /**
         * @param value the IfcCartesianTransformationOperator2DnonUniform datatype to visit
         */
        virtual bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *value);
        /**
         * @param value the IfcCartesianTransformationOperator3D datatype to visit
         */
        virtual bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *value);
        /**
         * @param value the IfcCartesianTransformationOperator3DnonUniform datatype to visit
         */
        virtual bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *value);
        /**
         * @param value the IfcCenterLineProfileDef datatype to visit
         */
        virtual bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *value);
        /**
         * @param value the IfcChamferEdgeFeature datatype to visit
         */
        virtual bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *value);
        /**
         * @param value the IfcChillerType datatype to visit
         */
        virtual bool visitIfcChillerType(IfcChillerType *value);
        /**
         * @param value the IfcCircle datatype to visit
         */
        virtual bool visitIfcCircle(IfcCircle *value);
        /**
         * @param value the IfcCircleHollowProfileDef datatype to visit
         */
        virtual bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *value);
        /**
         * @param value the IfcCircleProfileDef datatype to visit
         */
        virtual bool visitIfcCircleProfileDef(IfcCircleProfileDef *value);
        /**
         * @param value the IfcClassification datatype to visit
         */
        virtual bool visitIfcClassification(IfcClassification *value);
        /**
         * @param value the IfcClassificationItem datatype to visit
         */
        virtual bool visitIfcClassificationItem(IfcClassificationItem *value);
        /**
         * @param value the IfcClassificationItemRelationship datatype to visit
         */
        virtual bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *value);
        /**
         * @param value the IfcClassificationNotation datatype to visit
         */
        virtual bool visitIfcClassificationNotation(IfcClassificationNotation *value);
        /**
         * @param value the IfcClassificationNotationFacet datatype to visit
         */
        virtual bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *value);
        /**
         * @param value the IfcClassificationReference datatype to visit
         */
        virtual bool visitIfcClassificationReference(IfcClassificationReference *value);
        /**
         * @param value the IfcClosedShell datatype to visit
         */
        virtual bool visitIfcClosedShell(IfcClosedShell *value);
        /**
         * @param value the IfcCoilType datatype to visit
         */
        virtual bool visitIfcCoilType(IfcCoilType *value);
        /**
         * @param value the IfcColourRgb datatype to visit
         */
        virtual bool visitIfcColourRgb(IfcColourRgb *value);
        /**
         * @param value the IfcColourSpecification datatype to visit
         */
        virtual bool visitIfcColourSpecification(IfcColourSpecification *value);
        /**
         * @param value the IfcColumn datatype to visit
         */
        virtual bool visitIfcColumn(IfcColumn *value);
        /**
         * @param value the IfcColumnType datatype to visit
         */
        virtual bool visitIfcColumnType(IfcColumnType *value);
        /**
         * @param value the IfcComplexProperty datatype to visit
         */
        virtual bool visitIfcComplexProperty(IfcComplexProperty *value);
        /**
         * @param value the IfcCompositeCurve datatype to visit
         */
        virtual bool visitIfcCompositeCurve(IfcCompositeCurve *value);
        /**
         * @param value the IfcCompositeCurveSegment datatype to visit
         */
        virtual bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *value);
        /**
         * @param value the IfcCompositeProfileDef datatype to visit
         */
        virtual bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *value);
        /**
         * @param value the IfcCompressorType datatype to visit
         */
        virtual bool visitIfcCompressorType(IfcCompressorType *value);
        /**
         * @param value the IfcCondenserType datatype to visit
         */
        virtual bool visitIfcCondenserType(IfcCondenserType *value);
        /**
         * @param value the IfcCondition datatype to visit
         */
        virtual bool visitIfcCondition(IfcCondition *value);
        /**
         * @param value the IfcConditionCriterion datatype to visit
         */
        virtual bool visitIfcConditionCriterion(IfcConditionCriterion *value);
        /**
         * @param value the IfcConic datatype to visit
         */
        virtual bool visitIfcConic(IfcConic *value);
        /**
         * @param value the IfcConnectedFaceSet datatype to visit
         */
        virtual bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *value);
        /**
         * @param value the IfcConnectionCurveGeometry datatype to visit
         */
        virtual bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *value);
        /**
         * @param value the IfcConnectionGeometry datatype to visit
         */
        virtual bool visitIfcConnectionGeometry(IfcConnectionGeometry *value);
        /**
         * @param value the IfcConnectionPointEccentricity datatype to visit
         */
        virtual bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *value);
        /**
         * @param value the IfcConnectionPointGeometry datatype to visit
         */
        virtual bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *value);
        /**
         * @param value the IfcConnectionPortGeometry datatype to visit
         */
        virtual bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *value);
        /**
         * @param value the IfcConnectionSurfaceGeometry datatype to visit
         */
        virtual bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *value);
        /**
         * @param value the IfcConstraint datatype to visit
         */
        virtual bool visitIfcConstraint(IfcConstraint *value);
        /**
         * @param value the IfcConstraintAggregationRelationship datatype to visit
         */
        virtual bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *value);
        /**
         * @param value the IfcConstraintClassificationRelationship datatype to visit
         */
        virtual bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *value);
        /**
         * @param value the IfcConstraintRelationship datatype to visit
         */
        virtual bool visitIfcConstraintRelationship(IfcConstraintRelationship *value);
        /**
         * @param value the IfcConstructionEquipmentResource datatype to visit
         */
        virtual bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *value);
        /**
         * @param value the IfcConstructionMaterialResource datatype to visit
         */
        virtual bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *value);
        /**
         * @param value the IfcConstructionProductResource datatype to visit
         */
        virtual bool visitIfcConstructionProductResource(IfcConstructionProductResource *value);
        /**
         * @param value the IfcConstructionResource datatype to visit
         */
        virtual bool visitIfcConstructionResource(IfcConstructionResource *value);
        /**
         * @param value the IfcContextDependentUnit datatype to visit
         */
        virtual bool visitIfcContextDependentUnit(IfcContextDependentUnit *value);
        /**
         * @param value the IfcControl datatype to visit
         */
        virtual bool visitIfcControl(IfcControl *value);
        /**
         * @param value the IfcControllerType datatype to visit
         */
        virtual bool visitIfcControllerType(IfcControllerType *value);
        /**
         * @param value the IfcConversionBasedUnit datatype to visit
         */
        virtual bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *value);
        /**
         * @param value the IfcCooledBeamType datatype to visit
         */
        virtual bool visitIfcCooledBeamType(IfcCooledBeamType *value);
        /**
         * @param value the IfcCoolingTowerType datatype to visit
         */
        virtual bool visitIfcCoolingTowerType(IfcCoolingTowerType *value);
        /**
         * @param value the IfcCoordinatedUniversalTimeOffset datatype to visit
         */
        virtual bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *value);
        /**
         * @param value the IfcCostItem datatype to visit
         */
        virtual bool visitIfcCostItem(IfcCostItem *value);
        /**
         * @param value the IfcCostSchedule datatype to visit
         */
        virtual bool visitIfcCostSchedule(IfcCostSchedule *value);
        /**
         * @param value the IfcCostValue datatype to visit
         */
        virtual bool visitIfcCostValue(IfcCostValue *value);
        /**
         * @param value the IfcCovering datatype to visit
         */
        virtual bool visitIfcCovering(IfcCovering *value);
        /**
         * @param value the IfcCoveringType datatype to visit
         */
        virtual bool visitIfcCoveringType(IfcCoveringType *value);
        /**
         * @param value the IfcCraneRailAShapeProfileDef datatype to visit
         */
        virtual bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *value);
        /**
         * @param value the IfcCraneRailFShapeProfileDef datatype to visit
         */
        virtual bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *value);
        /**
         * @param value the IfcCrewResource datatype to visit
         */
        virtual bool visitIfcCrewResource(IfcCrewResource *value);
        /**
         * @param value the IfcCsgPrimitive3D datatype to visit
         */
        virtual bool visitIfcCsgPrimitive3D(IfcCsgPrimitive3D *value);
        /**
         * @param value the IfcCsgSolid datatype to visit
         */
        virtual bool visitIfcCsgSolid(IfcCsgSolid *value);
        /**
         * @param value the IfcCurrencyRelationship datatype to visit
         */
        virtual bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *value);
        /**
         * @param value the IfcCurtainWall datatype to visit
         */
        virtual bool visitIfcCurtainWall(IfcCurtainWall *value);
        /**
         * @param value the IfcCurtainWallType datatype to visit
         */
        virtual bool visitIfcCurtainWallType(IfcCurtainWallType *value);
        /**
         * @param value the IfcCurve datatype to visit
         */
        virtual bool visitIfcCurve(IfcCurve *value);
        /**
         * @param value the IfcCurveBoundedPlane datatype to visit
         */
        virtual bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *value);
        /**
         * @param value the IfcCurveStyle datatype to visit
         */
        virtual bool visitIfcCurveStyle(IfcCurveStyle *value);
        /**
         * @param value the IfcCurveStyleFont datatype to visit
         */
        virtual bool visitIfcCurveStyleFont(IfcCurveStyleFont *value);
        /**
         * @param value the IfcCurveStyleFontAndScaling datatype to visit
         */
        virtual bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *value);
        /**
         * @param value the IfcCurveStyleFontPattern datatype to visit
         */
        virtual bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *value);
        /**
         * @param value the IfcDamperType datatype to visit
         */
        virtual bool visitIfcDamperType(IfcDamperType *value);
        /**
         * @param value the IfcDateAndTime datatype to visit
         */
        virtual bool visitIfcDateAndTime(IfcDateAndTime *value);
        /**
         * @param value the IfcDefinedSymbol datatype to visit
         */
        virtual bool visitIfcDefinedSymbol(IfcDefinedSymbol *value);
        /**
         * @param value the IfcDerivedProfileDef datatype to visit
         */
        virtual bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *value);
        /**
         * @param value the IfcDerivedUnit datatype to visit
         */
        virtual bool visitIfcDerivedUnit(IfcDerivedUnit *value);
        /**
         * @param value the IfcDerivedUnitElement datatype to visit
         */
        virtual bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *value);
        /**
         * @param value the IfcDiameterDimension datatype to visit
         */
        virtual bool visitIfcDiameterDimension(IfcDiameterDimension *value);
        /**
         * @param value the IfcDimensionCalloutRelationship datatype to visit
         */
        virtual bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *value);
        /**
         * @param value the IfcDimensionCurve datatype to visit
         */
        virtual bool visitIfcDimensionCurve(IfcDimensionCurve *value);
        /**
         * @param value the IfcDimensionCurveDirectedCallout datatype to visit
         */
        virtual bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *value);
        /**
         * @param value the IfcDimensionCurveTerminator datatype to visit
         */
        virtual bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *value);
        /**
         * @param value the IfcDimensionPair datatype to visit
         */
        virtual bool visitIfcDimensionPair(IfcDimensionPair *value);
        /**
         * @param value the IfcDimensionalExponents datatype to visit
         */
        virtual bool visitIfcDimensionalExponents(IfcDimensionalExponents *value);
        /**
         * @param value the IfcDirection datatype to visit
         */
        virtual bool visitIfcDirection(IfcDirection *value);
        /**
         * @param value the IfcDiscreteAccessory datatype to visit
         */
        virtual bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *value);
        /**
         * @param value the IfcDiscreteAccessoryType datatype to visit
         */
        virtual bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *value);
        /**
         * @param value the IfcDistributionChamberElement datatype to visit
         */
        virtual bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *value);
        /**
         * @param value the IfcDistributionChamberElementType datatype to visit
         */
        virtual bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *value);
        /**
         * @param value the IfcDistributionControlElement datatype to visit
         */
        virtual bool visitIfcDistributionControlElement(IfcDistributionControlElement *value);
        /**
         * @param value the IfcDistributionControlElementType datatype to visit
         */
        virtual bool visitIfcDistributionControlElementType(IfcDistributionControlElementType *value);
        /**
         * @param value the IfcDistributionElement datatype to visit
         */
        virtual bool visitIfcDistributionElement(IfcDistributionElement *value);
        /**
         * @param value the IfcDistributionElementType datatype to visit
         */
        virtual bool visitIfcDistributionElementType(IfcDistributionElementType *value);
        /**
         * @param value the IfcDistributionFlowElement datatype to visit
         */
        virtual bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *value);
        /**
         * @param value the IfcDistributionFlowElementType datatype to visit
         */
        virtual bool visitIfcDistributionFlowElementType(IfcDistributionFlowElementType *value);
        /**
         * @param value the IfcDistributionPort datatype to visit
         */
        virtual bool visitIfcDistributionPort(IfcDistributionPort *value);
        /**
         * @param value the IfcDocumentElectronicFormat datatype to visit
         */
        virtual bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *value);
        /**
         * @param value the IfcDocumentInformation datatype to visit
         */
        virtual bool visitIfcDocumentInformation(IfcDocumentInformation *value);
        /**
         * @param value the IfcDocumentInformationRelationship datatype to visit
         */
        virtual bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *value);
        /**
         * @param value the IfcDocumentReference datatype to visit
         */
        virtual bool visitIfcDocumentReference(IfcDocumentReference *value);
        /**
         * @param value the IfcDoor datatype to visit
         */
        virtual bool visitIfcDoor(IfcDoor *value);
        /**
         * @param value the IfcDoorLiningProperties datatype to visit
         */
        virtual bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *value);
        /**
         * @param value the IfcDoorPanelProperties datatype to visit
         */
        virtual bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *value);
        /**
         * @param value the IfcDoorStyle datatype to visit
         */
        virtual bool visitIfcDoorStyle(IfcDoorStyle *value);
        /**
         * @param value the IfcDraughtingCallout datatype to visit
         */
        virtual bool visitIfcDraughtingCallout(IfcDraughtingCallout *value);
        /**
         * @param value the IfcDraughtingCalloutRelationship datatype to visit
         */
        virtual bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *value);
        /**
         * @param value the IfcDraughtingPreDefinedColour datatype to visit
         */
        virtual bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *value);
        /**
         * @param value the IfcDraughtingPreDefinedCurveFont datatype to visit
         */
        virtual bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *value);
        /**
         * @param value the IfcDraughtingPreDefinedTextFont datatype to visit
         */
        virtual bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *value);
        /**
         * @param value the IfcDuctFittingType datatype to visit
         */
        virtual bool visitIfcDuctFittingType(IfcDuctFittingType *value);
        /**
         * @param value the IfcDuctSegmentType datatype to visit
         */
        virtual bool visitIfcDuctSegmentType(IfcDuctSegmentType *value);
        /**
         * @param value the IfcDuctSilencerType datatype to visit
         */
        virtual bool visitIfcDuctSilencerType(IfcDuctSilencerType *value);
        /**
         * @param value the IfcEdge datatype to visit
         */
        virtual bool visitIfcEdge(IfcEdge *value);
        /**
         * @param value the IfcEdgeCurve datatype to visit
         */
        virtual bool visitIfcEdgeCurve(IfcEdgeCurve *value);
        /**
         * @param value the IfcEdgeFeature datatype to visit
         */
        virtual bool visitIfcEdgeFeature(IfcEdgeFeature *value);
        /**
         * @param value the IfcEdgeLoop datatype to visit
         */
        virtual bool visitIfcEdgeLoop(IfcEdgeLoop *value);
        /**
         * @param value the IfcElectricApplianceType datatype to visit
         */
        virtual bool visitIfcElectricApplianceType(IfcElectricApplianceType *value);
        /**
         * @param value the IfcElectricDistributionPoint datatype to visit
         */
        virtual bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *value);
        /**
         * @param value the IfcElectricFlowStorageDeviceType datatype to visit
         */
        virtual bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *value);
        /**
         * @param value the IfcElectricGeneratorType datatype to visit
         */
        virtual bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *value);
        /**
         * @param value the IfcElectricHeaterType datatype to visit
         */
        virtual bool visitIfcElectricHeaterType(IfcElectricHeaterType *value);
        /**
         * @param value the IfcElectricMotorType datatype to visit
         */
        virtual bool visitIfcElectricMotorType(IfcElectricMotorType *value);
        /**
         * @param value the IfcElectricTimeControlType datatype to visit
         */
        virtual bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *value);
        /**
         * @param value the IfcElectricalBaseProperties datatype to visit
         */
        virtual bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *value);
        /**
         * @param value the IfcElectricalCircuit datatype to visit
         */
        virtual bool visitIfcElectricalCircuit(IfcElectricalCircuit *value);
        /**
         * @param value the IfcElectricalElement datatype to visit
         */
        virtual bool visitIfcElectricalElement(IfcElectricalElement *value);
        /**
         * @param value the IfcElement datatype to visit
         */
        virtual bool visitIfcElement(IfcElement *value);
        /**
         * @param value the IfcElementAssembly datatype to visit
         */
        virtual bool visitIfcElementAssembly(IfcElementAssembly *value);
        /**
         * @param value the IfcElementComponent datatype to visit
         */
        virtual bool visitIfcElementComponent(IfcElementComponent *value);
        /**
         * @param value the IfcElementComponentType datatype to visit
         */
        virtual bool visitIfcElementComponentType(IfcElementComponentType *value);
        /**
         * @param value the IfcElementQuantity datatype to visit
         */
        virtual bool visitIfcElementQuantity(IfcElementQuantity *value);
        /**
         * @param value the IfcElementType datatype to visit
         */
        virtual bool visitIfcElementType(IfcElementType *value);
        /**
         * @param value the IfcElementarySurface datatype to visit
         */
        virtual bool visitIfcElementarySurface(IfcElementarySurface *value);
        /**
         * @param value the IfcEllipse datatype to visit
         */
        virtual bool visitIfcEllipse(IfcEllipse *value);
        /**
         * @param value the IfcEllipseProfileDef datatype to visit
         */
        virtual bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *value);
        /**
         * @param value the IfcEnergyConversionDevice datatype to visit
         */
        virtual bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *value);
        /**
         * @param value the IfcEnergyConversionDeviceType datatype to visit
         */
        virtual bool visitIfcEnergyConversionDeviceType(IfcEnergyConversionDeviceType *value);
        /**
         * @param value the IfcEnergyProperties datatype to visit
         */
        virtual bool visitIfcEnergyProperties(IfcEnergyProperties *value);
        /**
         * @param value the IfcEnvironmentalImpactValue datatype to visit
         */
        virtual bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *value);
        /**
         * @param value the IfcEquipmentElement datatype to visit
         */
        virtual bool visitIfcEquipmentElement(IfcEquipmentElement *value);
        /**
         * @param value the IfcEquipmentStandard datatype to visit
         */
        virtual bool visitIfcEquipmentStandard(IfcEquipmentStandard *value);
        /**
         * @param value the IfcEvaporativeCoolerType datatype to visit
         */
        virtual bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *value);
        /**
         * @param value the IfcEvaporatorType datatype to visit
         */
        virtual bool visitIfcEvaporatorType(IfcEvaporatorType *value);
        /**
         * @param value the IfcExtendedMaterialProperties datatype to visit
         */
        virtual bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *value);
        /**
         * @param value the IfcExternalReference datatype to visit
         */
        virtual bool visitIfcExternalReference(IfcExternalReference *value);
        /**
         * @param value the IfcExternallyDefinedHatchStyle datatype to visit
         */
        virtual bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *value);
        /**
         * @param value the IfcExternallyDefinedSurfaceStyle datatype to visit
         */
        virtual bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value);
        /**
         * @param value the IfcExternallyDefinedSymbol datatype to visit
         */
        virtual bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value);
        /**
         * @param value the IfcExternallyDefinedTextFont datatype to visit
         */
        virtual bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value);
        /**
         * @param value the IfcExtrudedAreaSolid datatype to visit
         */
        virtual bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *value);
        /**
         * @param value the IfcFace datatype to visit
         */
        virtual bool visitIfcFace(IfcFace *value);
        /**
         * @param value the IfcFaceBasedSurfaceModel datatype to visit
         */
        virtual bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value);
        /**
         * @param value the IfcFaceBound datatype to visit
         */
        virtual bool visitIfcFaceBound(IfcFaceBound *value);
        /**
         * @param value the IfcFaceOuterBound datatype to visit
         */
        virtual bool visitIfcFaceOuterBound(IfcFaceOuterBound *value);
        /**
         * @param value the IfcFaceSurface datatype to visit
         */
        virtual bool visitIfcFaceSurface(IfcFaceSurface *value);
        /**
         * @param value the IfcFacetedBrep datatype to visit
         */
        virtual bool visitIfcFacetedBrep(IfcFacetedBrep *value);
        /**
         * @param value the IfcFacetedBrepWithVoids datatype to visit
         */
        virtual bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *value);
        /**
         * @param value the IfcFailureConnectionCondition datatype to visit
         */
        virtual bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *value);
        /**
         * @param value the IfcFanType datatype to visit
         */
        virtual bool visitIfcFanType(IfcFanType *value);
        /**
         * @param value the IfcFastener datatype to visit
         */
        virtual bool visitIfcFastener(IfcFastener *value);
        /**
         * @param value the IfcFastenerType datatype to visit
         */
        virtual bool visitIfcFastenerType(IfcFastenerType *value);
        /**
         * @param value the IfcFeatureElement datatype to visit
         */
        virtual bool visitIfcFeatureElement(IfcFeatureElement *value);
        /**
         * @param value the IfcFeatureElementAddition datatype to visit
         */
        virtual bool visitIfcFeatureElementAddition(IfcFeatureElementAddition *value);
        /**
         * @param value the IfcFeatureElementSubtraction datatype to visit
         */
        virtual bool visitIfcFeatureElementSubtraction(IfcFeatureElementSubtraction *value);
        /**
         * @param value the IfcFillAreaStyle datatype to visit
         */
        virtual bool visitIfcFillAreaStyle(IfcFillAreaStyle *value);
        /**
         * @param value the IfcFillAreaStyleHatching datatype to visit
         */
        virtual bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value);
        /**
         * @param value the IfcFillAreaStyleTileSymbolWithStyle datatype to visit
         */
        virtual bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value);
        /**
         * @param value the IfcFillAreaStyleTiles datatype to visit
         */
        virtual bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value);
        /**
         * @param value the IfcFilterType datatype to visit
         */
        virtual bool visitIfcFilterType(IfcFilterType *value);
        /**
         * @param value the IfcFireSuppressionTerminalType datatype to visit
         */
        virtual bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *value);
        /**
         * @param value the IfcFlowController datatype to visit
         */
        virtual bool visitIfcFlowController(IfcFlowController *value);
        /**
         * @param value the IfcFlowControllerType datatype to visit
         */
        virtual bool visitIfcFlowControllerType(IfcFlowControllerType *value);
        /**
         * @param value the IfcFlowFitting datatype to visit
         */
        virtual bool visitIfcFlowFitting(IfcFlowFitting *value);
        /**
         * @param value the IfcFlowFittingType datatype to visit
         */
        virtual bool visitIfcFlowFittingType(IfcFlowFittingType *value);
        /**
         * @param value the IfcFlowInstrumentType datatype to visit
         */
        virtual bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *value);
        /**
         * @param value the IfcFlowMeterType datatype to visit
         */
        virtual bool visitIfcFlowMeterType(IfcFlowMeterType *value);
        /**
         * @param value the IfcFlowMovingDevice datatype to visit
         */
        virtual bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *value);
        /**
         * @param value the IfcFlowMovingDeviceType datatype to visit
         */
        virtual bool visitIfcFlowMovingDeviceType(IfcFlowMovingDeviceType *value);
        /**
         * @param value the IfcFlowSegment datatype to visit
         */
        virtual bool visitIfcFlowSegment(IfcFlowSegment *value);
        /**
         * @param value the IfcFlowSegmentType datatype to visit
         */
        virtual bool visitIfcFlowSegmentType(IfcFlowSegmentType *value);
        /**
         * @param value the IfcFlowStorageDevice datatype to visit
         */
        virtual bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *value);
        /**
         * @param value the IfcFlowStorageDeviceType datatype to visit
         */
        virtual bool visitIfcFlowStorageDeviceType(IfcFlowStorageDeviceType *value);
        /**
         * @param value the IfcFlowTerminal datatype to visit
         */
        virtual bool visitIfcFlowTerminal(IfcFlowTerminal *value);
        /**
         * @param value the IfcFlowTerminalType datatype to visit
         */
        virtual bool visitIfcFlowTerminalType(IfcFlowTerminalType *value);
        /**
         * @param value the IfcFlowTreatmentDevice datatype to visit
         */
        virtual bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *value);
        /**
         * @param value the IfcFlowTreatmentDeviceType datatype to visit
         */
        virtual bool visitIfcFlowTreatmentDeviceType(IfcFlowTreatmentDeviceType *value);
        /**
         * @param value the IfcFluidFlowProperties datatype to visit
         */
        virtual bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *value);
        /**
         * @param value the IfcFooting datatype to visit
         */
        virtual bool visitIfcFooting(IfcFooting *value);
        /**
         * @param value the IfcFuelProperties datatype to visit
         */
        virtual bool visitIfcFuelProperties(IfcFuelProperties *value);
        /**
         * @param value the IfcFurnishingElement datatype to visit
         */
        virtual bool visitIfcFurnishingElement(IfcFurnishingElement *value);
        /**
         * @param value the IfcFurnishingElementType datatype to visit
         */
        virtual bool visitIfcFurnishingElementType(IfcFurnishingElementType *value);
        /**
         * @param value the IfcFurnitureStandard datatype to visit
         */
        virtual bool visitIfcFurnitureStandard(IfcFurnitureStandard *value);
        /**
         * @param value the IfcFurnitureType datatype to visit
         */
        virtual bool visitIfcFurnitureType(IfcFurnitureType *value);
        /**
         * @param value the IfcGasTerminalType datatype to visit
         */
        virtual bool visitIfcGasTerminalType(IfcGasTerminalType *value);
        /**
         * @param value the IfcGeneralMaterialProperties datatype to visit
         */
        virtual bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *value);
        /**
         * @param value the IfcGeneralProfileProperties datatype to visit
         */
        virtual bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *value);
        /**
         * @param value the IfcGeometricCurveSet datatype to visit
         */
        virtual bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *value);
        /**
         * @param value the IfcGeometricRepresentationContext datatype to visit
         */
        virtual bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *value);
        /**
         * @param value the IfcGeometricRepresentationItem datatype to visit
         */
        virtual bool visitIfcGeometricRepresentationItem(IfcGeometricRepresentationItem *value);
        /**
         * @param value the IfcGeometricRepresentationSubContext datatype to visit
         */
        virtual bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *value);
        /**
         * @param value the IfcGeometricSet datatype to visit
         */
        virtual bool visitIfcGeometricSet(IfcGeometricSet *value);
        /**
         * @param value the IfcGrid datatype to visit
         */
        virtual bool visitIfcGrid(IfcGrid *value);
        /**
         * @param value the IfcGridAxis datatype to visit
         */
        virtual bool visitIfcGridAxis(IfcGridAxis *value);
        /**
         * @param value the IfcGridPlacement datatype to visit
         */
        virtual bool visitIfcGridPlacement(IfcGridPlacement *value);
        /**
         * @param value the IfcGroup datatype to visit
         */
        virtual bool visitIfcGroup(IfcGroup *value);
        /**
         * @param value the IfcHalfSpaceSolid datatype to visit
         */
        virtual bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *value);
        /**
         * @param value the IfcHeatExchangerType datatype to visit
         */
        virtual bool visitIfcHeatExchangerType(IfcHeatExchangerType *value);
        /**
         * @param value the IfcHumidifierType datatype to visit
         */
        virtual bool visitIfcHumidifierType(IfcHumidifierType *value);
        /**
         * @param value the IfcHygroscopicMaterialProperties datatype to visit
         */
        virtual bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *value);
        /**
         * @param value the IfcIShapeProfileDef datatype to visit
         */
        virtual bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *value);
        /**
         * @param value the IfcImageTexture datatype to visit
         */
        virtual bool visitIfcImageTexture(IfcImageTexture *value);
        /**
         * @param value the IfcInventory datatype to visit
         */
        virtual bool visitIfcInventory(IfcInventory *value);
        /**
         * @param value the IfcIrregularTimeSeries datatype to visit
         */
        virtual bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *value);
        /**
         * @param value the IfcIrregularTimeSeriesValue datatype to visit
         */
        virtual bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *value);
        /**
         * @param value the IfcJunctionBoxType datatype to visit
         */
        virtual bool visitIfcJunctionBoxType(IfcJunctionBoxType *value);
        /**
         * @param value the IfcLShapeProfileDef datatype to visit
         */
        virtual bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *value);
        /**
         * @param value the IfcLaborResource datatype to visit
         */
        virtual bool visitIfcLaborResource(IfcLaborResource *value);
        /**
         * @param value the IfcLampType datatype to visit
         */
        virtual bool visitIfcLampType(IfcLampType *value);
        /**
         * @param value the IfcLibraryInformation datatype to visit
         */
        virtual bool visitIfcLibraryInformation(IfcLibraryInformation *value);
        /**
         * @param value the IfcLibraryReference datatype to visit
         */
        virtual bool visitIfcLibraryReference(IfcLibraryReference *value);
        /**
         * @param value the IfcLightDistributionData datatype to visit
         */
        virtual bool visitIfcLightDistributionData(IfcLightDistributionData *value);
        /**
         * @param value the IfcLightFixtureType datatype to visit
         */
        virtual bool visitIfcLightFixtureType(IfcLightFixtureType *value);
        /**
         * @param value the IfcLightIntensityDistribution datatype to visit
         */
        virtual bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *value);
        /**
         * @param value the IfcLightSource datatype to visit
         */
        virtual bool visitIfcLightSource(IfcLightSource *value);
        /**
         * @param value the IfcLightSourceAmbient datatype to visit
         */
        virtual bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *value);
        /**
         * @param value the IfcLightSourceDirectional datatype to visit
         */
        virtual bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *value);
        /**
         * @param value the IfcLightSourceGoniometric datatype to visit
         */
        virtual bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *value);
        /**
         * @param value the IfcLightSourcePositional datatype to visit
         */
        virtual bool visitIfcLightSourcePositional(IfcLightSourcePositional *value);
        /**
         * @param value the IfcLightSourceSpot datatype to visit
         */
        virtual bool visitIfcLightSourceSpot(IfcLightSourceSpot *value);
        /**
         * @param value the IfcLine datatype to visit
         */
        virtual bool visitIfcLine(IfcLine *value);
        /**
         * @param value the IfcLinearDimension datatype to visit
         */
        virtual bool visitIfcLinearDimension(IfcLinearDimension *value);
        /**
         * @param value the IfcLocalPlacement datatype to visit
         */
        virtual bool visitIfcLocalPlacement(IfcLocalPlacement *value);
        /**
         * @param value the IfcLocalTime datatype to visit
         */
        virtual bool visitIfcLocalTime(IfcLocalTime *value);
        /**
         * @param value the IfcLoop datatype to visit
         */
        virtual bool visitIfcLoop(IfcLoop *value);
        /**
         * @param value the IfcManifoldSolidBrep datatype to visit
         */
        virtual bool visitIfcManifoldSolidBrep(IfcManifoldSolidBrep *value);
        /**
         * @param value the IfcMappedItem datatype to visit
         */
        virtual bool visitIfcMappedItem(IfcMappedItem *value);
        /**
         * @param value the IfcMaterial datatype to visit
         */
        virtual bool visitIfcMaterial(IfcMaterial *value);
        /**
         * @param value the IfcMaterialClassificationRelationship datatype to visit
         */
        virtual bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *value);
        /**
         * @param value the IfcMaterialDefinitionRepresentation datatype to visit
         */
        virtual bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *value);
        /**
         * @param value the IfcMaterialLayer datatype to visit
         */
        virtual bool visitIfcMaterialLayer(IfcMaterialLayer *value);
        /**
         * @param value the IfcMaterialLayerSet datatype to visit
         */
        virtual bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *value);
        /**
         * @param value the IfcMaterialLayerSetUsage datatype to visit
         */
        virtual bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value);
        /**
         * @param value the IfcMaterialList datatype to visit
         */
        virtual bool visitIfcMaterialList(IfcMaterialList *value);
        /**
         * @param value the IfcMaterialProperties datatype to visit
         */
        virtual bool visitIfcMaterialProperties(IfcMaterialProperties *value);
        /**
         * @param value the IfcMeasureWithUnit datatype to visit
         */
        virtual bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *value);
        /**
         * @param value the IfcMechanicalConcreteMaterialProperties datatype to visit
         */
        virtual bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *value);
        /**
         * @param value the IfcMechanicalFastener datatype to visit
         */
        virtual bool visitIfcMechanicalFastener(IfcMechanicalFastener *value);
        /**
         * @param value the IfcMechanicalFastenerType datatype to visit
         */
        virtual bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *value);
        /**
         * @param value the IfcMechanicalMaterialProperties datatype to visit
         */
        virtual bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *value);
        /**
         * @param value the IfcMechanicalSteelMaterialProperties datatype to visit
         */
        virtual bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *value);
        /**
         * @param value the IfcMember datatype to visit
         */
        virtual bool visitIfcMember(IfcMember *value);
        /**
         * @param value the IfcMemberType datatype to visit
         */
        virtual bool visitIfcMemberType(IfcMemberType *value);
        /**
         * @param value the IfcMetric datatype to visit
         */
        virtual bool visitIfcMetric(IfcMetric *value);
        /**
         * @param value the IfcMonetaryUnit datatype to visit
         */
        virtual bool visitIfcMonetaryUnit(IfcMonetaryUnit *value);
        /**
         * @param value the IfcMotorConnectionType datatype to visit
         */
        virtual bool visitIfcMotorConnectionType(IfcMotorConnectionType *value);
        /**
         * @param value the IfcMove datatype to visit
         */
        virtual bool visitIfcMove(IfcMove *value);
        /**
         * @param value the IfcNamedUnit datatype to visit
         */
        virtual bool visitIfcNamedUnit(IfcNamedUnit *value);
        /**
         * @param value the IfcObject datatype to visit
         */
        virtual bool visitIfcObject(IfcObject *value);
        /**
         * @param value the IfcObjectDefinition datatype to visit
         */
        virtual bool visitIfcObjectDefinition(IfcObjectDefinition *value);
        /**
         * @param value the IfcObjectPlacement datatype to visit
         */
        virtual bool visitIfcObjectPlacement(IfcObjectPlacement *value);
        /**
         * @param value the IfcObjective datatype to visit
         */
        virtual bool visitIfcObjective(IfcObjective *value);
        /**
         * @param value the IfcOccupant datatype to visit
         */
        virtual bool visitIfcOccupant(IfcOccupant *value);
        /**
         * @param value the IfcOffsetCurve2D datatype to visit
         */
        virtual bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *value);
        /**
         * @param value the IfcOffsetCurve3D datatype to visit
         */
        virtual bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *value);
        /**
         * @param value the IfcOneDirectionRepeatFactor datatype to visit
         */
        virtual bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value);
        /**
         * @param value the IfcOpenShell datatype to visit
         */
        virtual bool visitIfcOpenShell(IfcOpenShell *value);
        /**
         * @param value the IfcOpeningElement datatype to visit
         */
        virtual bool visitIfcOpeningElement(IfcOpeningElement *value);
        /**
         * @param value the IfcOpticalMaterialProperties datatype to visit
         */
        virtual bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *value);
        /**
         * @param value the IfcOrderAction datatype to visit
         */
        virtual bool visitIfcOrderAction(IfcOrderAction *value);
        /**
         * @param value the IfcOrganization datatype to visit
         */
        virtual bool visitIfcOrganization(IfcOrganization *value);
        /**
         * @param value the IfcOrganizationRelationship datatype to visit
         */
        virtual bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *value);
        /**
         * @param value the IfcOrientedEdge datatype to visit
         */
        virtual bool visitIfcOrientedEdge(IfcOrientedEdge *value);
        /**
         * @param value the IfcOutletType datatype to visit
         */
        virtual bool visitIfcOutletType(IfcOutletType *value);
        /**
         * @param value the IfcOwnerHistory datatype to visit
         */
        virtual bool visitIfcOwnerHistory(IfcOwnerHistory *value);
        /**
         * @param value the IfcParameterizedProfileDef datatype to visit
         */
        virtual bool visitIfcParameterizedProfileDef(IfcParameterizedProfileDef *value);
        /**
         * @param value the IfcPath datatype to visit
         */
        virtual bool visitIfcPath(IfcPath *value);
        /**
         * @param value the IfcPerformanceHistory datatype to visit
         */
        virtual bool visitIfcPerformanceHistory(IfcPerformanceHistory *value);
        /**
         * @param value the IfcPermeableCoveringProperties datatype to visit
         */
        virtual bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *value);
        /**
         * @param value the IfcPermit datatype to visit
         */
        virtual bool visitIfcPermit(IfcPermit *value);
        /**
         * @param value the IfcPerson datatype to visit
         */
        virtual bool visitIfcPerson(IfcPerson *value);
        /**
         * @param value the IfcPersonAndOrganization datatype to visit
         */
        virtual bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *value);
        /**
         * @param value the IfcPhysicalComplexQuantity datatype to visit
         */
        virtual bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *value);
        /**
         * @param value the IfcPhysicalQuantity datatype to visit
         */
        virtual bool visitIfcPhysicalQuantity(IfcPhysicalQuantity *value);
        /**
         * @param value the IfcPhysicalSimpleQuantity datatype to visit
         */
        virtual bool visitIfcPhysicalSimpleQuantity(IfcPhysicalSimpleQuantity *value);
        /**
         * @param value the IfcPile datatype to visit
         */
        virtual bool visitIfcPile(IfcPile *value);
        /**
         * @param value the IfcPipeFittingType datatype to visit
         */
        virtual bool visitIfcPipeFittingType(IfcPipeFittingType *value);
        /**
         * @param value the IfcPipeSegmentType datatype to visit
         */
        virtual bool visitIfcPipeSegmentType(IfcPipeSegmentType *value);
        /**
         * @param value the IfcPixelTexture datatype to visit
         */
        virtual bool visitIfcPixelTexture(IfcPixelTexture *value);
        /**
         * @param value the IfcPlacement datatype to visit
         */
        virtual bool visitIfcPlacement(IfcPlacement *value);
        /**
         * @param value the IfcPlanarBox datatype to visit
         */
        virtual bool visitIfcPlanarBox(IfcPlanarBox *value);
        /**
         * @param value the IfcPlanarExtent datatype to visit
         */
        virtual bool visitIfcPlanarExtent(IfcPlanarExtent *value);
        /**
         * @param value the IfcPlane datatype to visit
         */
        virtual bool visitIfcPlane(IfcPlane *value);
        /**
         * @param value the IfcPlate datatype to visit
         */
        virtual bool visitIfcPlate(IfcPlate *value);
        /**
         * @param value the IfcPlateType datatype to visit
         */
        virtual bool visitIfcPlateType(IfcPlateType *value);
        /**
         * @param value the IfcPoint datatype to visit
         */
        virtual bool visitIfcPoint(IfcPoint *value);
        /**
         * @param value the IfcPointOnCurve datatype to visit
         */
        virtual bool visitIfcPointOnCurve(IfcPointOnCurve *value);
        /**
         * @param value the IfcPointOnSurface datatype to visit
         */
        virtual bool visitIfcPointOnSurface(IfcPointOnSurface *value);
        /**
         * @param value the IfcPolyLoop datatype to visit
         */
        virtual bool visitIfcPolyLoop(IfcPolyLoop *value);
        /**
         * @param value the IfcPolygonalBoundedHalfSpace datatype to visit
         */
        virtual bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *value);
        /**
         * @param value the IfcPolyline datatype to visit
         */
        virtual bool visitIfcPolyline(IfcPolyline *value);
        /**
         * @param value the IfcPort datatype to visit
         */
        virtual bool visitIfcPort(IfcPort *value);
        /**
         * @param value the IfcPostalAddress datatype to visit
         */
        virtual bool visitIfcPostalAddress(IfcPostalAddress *value);
        /**
         * @param value the IfcPreDefinedColour datatype to visit
         */
        virtual bool visitIfcPreDefinedColour(IfcPreDefinedColour *value);
        /**
         * @param value the IfcPreDefinedCurveFont datatype to visit
         */
        virtual bool visitIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value);
        /**
         * @param value the IfcPreDefinedDimensionSymbol datatype to visit
         */
        virtual bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *value);
        /**
         * @param value the IfcPreDefinedItem datatype to visit
         */
        virtual bool visitIfcPreDefinedItem(IfcPreDefinedItem *value);
        /**
         * @param value the IfcPreDefinedPointMarkerSymbol datatype to visit
         */
        virtual bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *value);
        /**
         * @param value the IfcPreDefinedSymbol datatype to visit
         */
        virtual bool visitIfcPreDefinedSymbol(IfcPreDefinedSymbol *value);
        /**
         * @param value the IfcPreDefinedTerminatorSymbol datatype to visit
         */
        virtual bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *value);
        /**
         * @param value the IfcPreDefinedTextFont datatype to visit
         */
        virtual bool visitIfcPreDefinedTextFont(IfcPreDefinedTextFont *value);
        /**
         * @param value the IfcPresentationLayerAssignment datatype to visit
         */
        virtual bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *value);
        /**
         * @param value the IfcPresentationLayerWithStyle datatype to visit
         */
        virtual bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *value);
        /**
         * @param value the IfcPresentationStyle datatype to visit
         */
        virtual bool visitIfcPresentationStyle(IfcPresentationStyle *value);
        /**
         * @param value the IfcPresentationStyleAssignment datatype to visit
         */
        virtual bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *value);
        /**
         * @param value the IfcProcedure datatype to visit
         */
        virtual bool visitIfcProcedure(IfcProcedure *value);
        /**
         * @param value the IfcProcess datatype to visit
         */
        virtual bool visitIfcProcess(IfcProcess *value);
        /**
         * @param value the IfcProduct datatype to visit
         */
        virtual bool visitIfcProduct(IfcProduct *value);
        /**
         * @param value the IfcProductDefinitionShape datatype to visit
         */
        virtual bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *value);
        /**
         * @param value the IfcProductRepresentation datatype to visit
         */
        virtual bool visitIfcProductRepresentation(IfcProductRepresentation *value);
        /**
         * @param value the IfcProductsOfCombustionProperties datatype to visit
         */
        virtual bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *value);
        /**
         * @param value the IfcProfileDef datatype to visit
         */
        virtual bool visitIfcProfileDef(IfcProfileDef *value);
        /**
         * @param value the IfcProfileProperties datatype to visit
         */
        virtual bool visitIfcProfileProperties(IfcProfileProperties *value);
        /**
         * @param value the IfcProject datatype to visit
         */
        virtual bool visitIfcProject(IfcProject *value);
        /**
         * @param value the IfcProjectOrder datatype to visit
         */
        virtual bool visitIfcProjectOrder(IfcProjectOrder *value);
        /**
         * @param value the IfcProjectOrderRecord datatype to visit
         */
        virtual bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *value);
        /**
         * @param value the IfcProjectionCurve datatype to visit
         */
        virtual bool visitIfcProjectionCurve(IfcProjectionCurve *value);
        /**
         * @param value the IfcProjectionElement datatype to visit
         */
        virtual bool visitIfcProjectionElement(IfcProjectionElement *value);
        /**
         * @param value the IfcProperty datatype to visit
         */
        virtual bool visitIfcProperty(IfcProperty *value);
        /**
         * @param value the IfcPropertyBoundedValue datatype to visit
         */
        virtual bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *value);
        /**
         * @param value the IfcPropertyConstraintRelationship datatype to visit
         */
        virtual bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *value);
        /**
         * @param value the IfcPropertyDefinition datatype to visit
         */
        virtual bool visitIfcPropertyDefinition(IfcPropertyDefinition *value);
        /**
         * @param value the IfcPropertyDependencyRelationship datatype to visit
         */
        virtual bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *value);
        /**
         * @param value the IfcPropertyEnumeratedValue datatype to visit
         */
        virtual bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *value);
        /**
         * @param value the IfcPropertyEnumeration datatype to visit
         */
        virtual bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *value);
        /**
         * @param value the IfcPropertyListValue datatype to visit
         */
        virtual bool visitIfcPropertyListValue(IfcPropertyListValue *value);
        /**
         * @param value the IfcPropertyReferenceValue datatype to visit
         */
        virtual bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *value);
        /**
         * @param value the IfcPropertySet datatype to visit
         */
        virtual bool visitIfcPropertySet(IfcPropertySet *value);
        /**
         * @param value the IfcPropertySetDefinition datatype to visit
         */
        virtual bool visitIfcPropertySetDefinition(IfcPropertySetDefinition *value);
        /**
         * @param value the IfcPropertySingleValue datatype to visit
         */
        virtual bool visitIfcPropertySingleValue(IfcPropertySingleValue *value);
        /**
         * @param value the IfcPropertyTableValue datatype to visit
         */
        virtual bool visitIfcPropertyTableValue(IfcPropertyTableValue *value);
        /**
         * @param value the IfcProtectiveDeviceType datatype to visit
         */
        virtual bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *value);
        /**
         * @param value the IfcProxy datatype to visit
         */
        virtual bool visitIfcProxy(IfcProxy *value);
        /**
         * @param value the IfcPumpType datatype to visit
         */
        virtual bool visitIfcPumpType(IfcPumpType *value);
        /**
         * @param value the IfcQuantityArea datatype to visit
         */
        virtual bool visitIfcQuantityArea(IfcQuantityArea *value);
        /**
         * @param value the IfcQuantityCount datatype to visit
         */
        virtual bool visitIfcQuantityCount(IfcQuantityCount *value);
        /**
         * @param value the IfcQuantityLength datatype to visit
         */
        virtual bool visitIfcQuantityLength(IfcQuantityLength *value);
        /**
         * @param value the IfcQuantityTime datatype to visit
         */
        virtual bool visitIfcQuantityTime(IfcQuantityTime *value);
        /**
         * @param value the IfcQuantityVolume datatype to visit
         */
        virtual bool visitIfcQuantityVolume(IfcQuantityVolume *value);
        /**
         * @param value the IfcQuantityWeight datatype to visit
         */
        virtual bool visitIfcQuantityWeight(IfcQuantityWeight *value);
        /**
         * @param value the IfcRadiusDimension datatype to visit
         */
        virtual bool visitIfcRadiusDimension(IfcRadiusDimension *value);
        /**
         * @param value the IfcRailing datatype to visit
         */
        virtual bool visitIfcRailing(IfcRailing *value);
        /**
         * @param value the IfcRailingType datatype to visit
         */
        virtual bool visitIfcRailingType(IfcRailingType *value);
        /**
         * @param value the IfcRamp datatype to visit
         */
        virtual bool visitIfcRamp(IfcRamp *value);
        /**
         * @param value the IfcRampFlight datatype to visit
         */
        virtual bool visitIfcRampFlight(IfcRampFlight *value);
        /**
         * @param value the IfcRampFlightType datatype to visit
         */
        virtual bool visitIfcRampFlightType(IfcRampFlightType *value);
        /**
         * @param value the IfcRationalBezierCurve datatype to visit
         */
        virtual bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *value);
        /**
         * @param value the IfcRectangleHollowProfileDef datatype to visit
         */
        virtual bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *value);
        /**
         * @param value the IfcRectangleProfileDef datatype to visit
         */
        virtual bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *value);
        /**
         * @param value the IfcRectangularPyramid datatype to visit
         */
        virtual bool visitIfcRectangularPyramid(IfcRectangularPyramid *value);
        /**
         * @param value the IfcRectangularTrimmedSurface datatype to visit
         */
        virtual bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *value);
        /**
         * @param value the IfcReferencesValueDocument datatype to visit
         */
        virtual bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *value);
        /**
         * @param value the IfcRegularTimeSeries datatype to visit
         */
        virtual bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *value);
        /**
         * @param value the IfcReinforcementBarProperties datatype to visit
         */
        virtual bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *value);
        /**
         * @param value the IfcReinforcementDefinitionProperties datatype to visit
         */
        virtual bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *value);
        /**
         * @param value the IfcReinforcingBar datatype to visit
         */
        virtual bool visitIfcReinforcingBar(IfcReinforcingBar *value);
        /**
         * @param value the IfcReinforcingElement datatype to visit
         */
        virtual bool visitIfcReinforcingElement(IfcReinforcingElement *value);
        /**
         * @param value the IfcReinforcingMesh datatype to visit
         */
        virtual bool visitIfcReinforcingMesh(IfcReinforcingMesh *value);
        /**
         * @param value the IfcRelAggregates datatype to visit
         */
        virtual bool visitIfcRelAggregates(IfcRelAggregates *value);
        /**
         * @param value the IfcRelAssigns datatype to visit
         */
        virtual bool visitIfcRelAssigns(IfcRelAssigns *value);
        /**
         * @param value the IfcRelAssignsTasks datatype to visit
         */
        virtual bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *value);
        /**
         * @param value the IfcRelAssignsToActor datatype to visit
         */
        virtual bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *value);
        /**
         * @param value the IfcRelAssignsToControl datatype to visit
         */
        virtual bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *value);
        /**
         * @param value the IfcRelAssignsToGroup datatype to visit
         */
        virtual bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *value);
        /**
         * @param value the IfcRelAssignsToProcess datatype to visit
         */
        virtual bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *value);
        /**
         * @param value the IfcRelAssignsToProduct datatype to visit
         */
        virtual bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *value);
        /**
         * @param value the IfcRelAssignsToProjectOrder datatype to visit
         */
        virtual bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *value);
        /**
         * @param value the IfcRelAssignsToResource datatype to visit
         */
        virtual bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *value);
        /**
         * @param value the IfcRelAssociates datatype to visit
         */
        virtual bool visitIfcRelAssociates(IfcRelAssociates *value);
        /**
         * @param value the IfcRelAssociatesAppliedValue datatype to visit
         */
        virtual bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *value);
        /**
         * @param value the IfcRelAssociatesApproval datatype to visit
         */
        virtual bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *value);
        /**
         * @param value the IfcRelAssociatesClassification datatype to visit
         */
        virtual bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *value);
        /**
         * @param value the IfcRelAssociatesConstraint datatype to visit
         */
        virtual bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *value);
        /**
         * @param value the IfcRelAssociatesDocument datatype to visit
         */
        virtual bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *value);
        /**
         * @param value the IfcRelAssociatesLibrary datatype to visit
         */
        virtual bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *value);
        /**
         * @param value the IfcRelAssociatesMaterial datatype to visit
         */
        virtual bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *value);
        /**
         * @param value the IfcRelAssociatesProfileProperties datatype to visit
         */
        virtual bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *value);
        /**
         * @param value the IfcRelConnects datatype to visit
         */
        virtual bool visitIfcRelConnects(IfcRelConnects *value);
        /**
         * @param value the IfcRelConnectsElements datatype to visit
         */
        virtual bool visitIfcRelConnectsElements(IfcRelConnectsElements *value);
        /**
         * @param value the IfcRelConnectsPathElements datatype to visit
         */
        virtual bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *value);
        /**
         * @param value the IfcRelConnectsPortToElement datatype to visit
         */
        virtual bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *value);
        /**
         * @param value the IfcRelConnectsPorts datatype to visit
         */
        virtual bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *value);
        /**
         * @param value the IfcRelConnectsStructuralActivity datatype to visit
         */
        virtual bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *value);
        /**
         * @param value the IfcRelConnectsStructuralElement datatype to visit
         */
        virtual bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *value);
        /**
         * @param value the IfcRelConnectsStructuralMember datatype to visit
         */
        virtual bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *value);
        /**
         * @param value the IfcRelConnectsWithEccentricity datatype to visit
         */
        virtual bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *value);
        /**
         * @param value the IfcRelConnectsWithRealizingElements datatype to visit
         */
        virtual bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *value);
        /**
         * @param value the IfcRelContainedInSpatialStructure datatype to visit
         */
        virtual bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *value);
        /**
         * @param value the IfcRelCoversBldgElements datatype to visit
         */
        virtual bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *value);
        /**
         * @param value the IfcRelCoversSpaces datatype to visit
         */
        virtual bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *value);
        /**
         * @param value the IfcRelDecomposes datatype to visit
         */
        virtual bool visitIfcRelDecomposes(IfcRelDecomposes *value);
        /**
         * @param value the IfcRelDefines datatype to visit
         */
        virtual bool visitIfcRelDefines(IfcRelDefines *value);
        /**
         * @param value the IfcRelDefinesByProperties datatype to visit
         */
        virtual bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *value);
        /**
         * @param value the IfcRelDefinesByType datatype to visit
         */
        virtual bool visitIfcRelDefinesByType(IfcRelDefinesByType *value);
        /**
         * @param value the IfcRelFillsElement datatype to visit
         */
        virtual bool visitIfcRelFillsElement(IfcRelFillsElement *value);
        /**
         * @param value the IfcRelFlowControlElements datatype to visit
         */
        virtual bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *value);
        /**
         * @param value the IfcRelInteractionRequirements datatype to visit
         */
        virtual bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *value);
        /**
         * @param value the IfcRelNests datatype to visit
         */
        virtual bool visitIfcRelNests(IfcRelNests *value);
        /**
         * @param value the IfcRelOccupiesSpaces datatype to visit
         */
        virtual bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *value);
        /**
         * @param value the IfcRelOverridesProperties datatype to visit
         */
        virtual bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *value);
        /**
         * @param value the IfcRelProjectsElement datatype to visit
         */
        virtual bool visitIfcRelProjectsElement(IfcRelProjectsElement *value);
        /**
         * @param value the IfcRelReferencedInSpatialStructure datatype to visit
         */
        virtual bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *value);
        /**
         * @param value the IfcRelSchedulesCostItems datatype to visit
         */
        virtual bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *value);
        /**
         * @param value the IfcRelSequence datatype to visit
         */
        virtual bool visitIfcRelSequence(IfcRelSequence *value);
        /**
         * @param value the IfcRelServicesBuildings datatype to visit
         */
        virtual bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *value);
        /**
         * @param value the IfcRelSpaceBoundary datatype to visit
         */
        virtual bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *value);
        /**
         * @param value the IfcRelVoidsElement datatype to visit
         */
        virtual bool visitIfcRelVoidsElement(IfcRelVoidsElement *value);
        /**
         * @param value the IfcRelationship datatype to visit
         */
        virtual bool visitIfcRelationship(IfcRelationship *value);
        /**
         * @param value the IfcRelaxation datatype to visit
         */
        virtual bool visitIfcRelaxation(IfcRelaxation *value);
        /**
         * @param value the IfcRepresentation datatype to visit
         */
        virtual bool visitIfcRepresentation(IfcRepresentation *value);
        /**
         * @param value the IfcRepresentationContext datatype to visit
         */
        virtual bool visitIfcRepresentationContext(IfcRepresentationContext *value);
        /**
         * @param value the IfcRepresentationItem datatype to visit
         */
        virtual bool visitIfcRepresentationItem(IfcRepresentationItem *value);
        /**
         * @param value the IfcRepresentationMap datatype to visit
         */
        virtual bool visitIfcRepresentationMap(IfcRepresentationMap *value);
        /**
         * @param value the IfcResource datatype to visit
         */
        virtual bool visitIfcResource(IfcResource *value);
        /**
         * @param value the IfcRevolvedAreaSolid datatype to visit
         */
        virtual bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *value);
        /**
         * @param value the IfcRibPlateProfileProperties datatype to visit
         */
        virtual bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *value);
        /**
         * @param value the IfcRightCircularCone datatype to visit
         */
        virtual bool visitIfcRightCircularCone(IfcRightCircularCone *value);
        /**
         * @param value the IfcRightCircularCylinder datatype to visit
         */
        virtual bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *value);
        /**
         * @param value the IfcRoof datatype to visit
         */
        virtual bool visitIfcRoof(IfcRoof *value);
        /**
         * @param value the IfcRoot datatype to visit
         */
        virtual bool visitIfcRoot(IfcRoot *value);
        /**
         * @param value the IfcRoundedEdgeFeature datatype to visit
         */
        virtual bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *value);
        /**
         * @param value the IfcRoundedRectangleProfileDef datatype to visit
         */
        virtual bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *value);
        /**
         * @param value the IfcSIUnit datatype to visit
         */
        virtual bool visitIfcSIUnit(IfcSIUnit *value);
        /**
         * @param value the IfcSanitaryTerminalType datatype to visit
         */
        virtual bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *value);
        /**
         * @param value the IfcScheduleTimeControl datatype to visit
         */
        virtual bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *value);
        /**
         * @param value the IfcSectionProperties datatype to visit
         */
        virtual bool visitIfcSectionProperties(IfcSectionProperties *value);
        /**
         * @param value the IfcSectionReinforcementProperties datatype to visit
         */
        virtual bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *value);
        /**
         * @param value the IfcSectionedSpine datatype to visit
         */
        virtual bool visitIfcSectionedSpine(IfcSectionedSpine *value);
        /**
         * @param value the IfcSensorType datatype to visit
         */
        virtual bool visitIfcSensorType(IfcSensorType *value);
        /**
         * @param value the IfcServiceLife datatype to visit
         */
        virtual bool visitIfcServiceLife(IfcServiceLife *value);
        /**
         * @param value the IfcServiceLifeFactor datatype to visit
         */
        virtual bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *value);
        /**
         * @param value the IfcShapeAspect datatype to visit
         */
        virtual bool visitIfcShapeAspect(IfcShapeAspect *value);
        /**
         * @param value the IfcShapeModel datatype to visit
         */
        virtual bool visitIfcShapeModel(IfcShapeModel *value);
        /**
         * @param value the IfcShapeRepresentation datatype to visit
         */
        virtual bool visitIfcShapeRepresentation(IfcShapeRepresentation *value);
        /**
         * @param value the IfcShellBasedSurfaceModel datatype to visit
         */
        virtual bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *value);
        /**
         * @param value the IfcSimpleProperty datatype to visit
         */
        virtual bool visitIfcSimpleProperty(IfcSimpleProperty *value);
        /**
         * @param value the IfcSite datatype to visit
         */
        virtual bool visitIfcSite(IfcSite *value);
        /**
         * @param value the IfcSlab datatype to visit
         */
        virtual bool visitIfcSlab(IfcSlab *value);
        /**
         * @param value the IfcSlabType datatype to visit
         */
        virtual bool visitIfcSlabType(IfcSlabType *value);
        /**
         * @param value the IfcSlippageConnectionCondition datatype to visit
         */
        virtual bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *value);
        /**
         * @param value the IfcSolidModel datatype to visit
         */
        virtual bool visitIfcSolidModel(IfcSolidModel *value);
        /**
         * @param value the IfcSoundProperties datatype to visit
         */
        virtual bool visitIfcSoundProperties(IfcSoundProperties *value);
        /**
         * @param value the IfcSoundValue datatype to visit
         */
        virtual bool visitIfcSoundValue(IfcSoundValue *value);
        /**
         * @param value the IfcSpace datatype to visit
         */
        virtual bool visitIfcSpace(IfcSpace *value);
        /**
         * @param value the IfcSpaceHeaterType datatype to visit
         */
        virtual bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *value);
        /**
         * @param value the IfcSpaceProgram datatype to visit
         */
        virtual bool visitIfcSpaceProgram(IfcSpaceProgram *value);
        /**
         * @param value the IfcSpaceThermalLoadProperties datatype to visit
         */
        virtual bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *value);
        /**
         * @param value the IfcSpaceType datatype to visit
         */
        virtual bool visitIfcSpaceType(IfcSpaceType *value);
        /**
         * @param value the IfcSpatialStructureElement datatype to visit
         */
        virtual bool visitIfcSpatialStructureElement(IfcSpatialStructureElement *value);
        /**
         * @param value the IfcSpatialStructureElementType datatype to visit
         */
        virtual bool visitIfcSpatialStructureElementType(IfcSpatialStructureElementType *value);
        /**
         * @param value the IfcSphere datatype to visit
         */
        virtual bool visitIfcSphere(IfcSphere *value);
        /**
         * @param value the IfcStackTerminalType datatype to visit
         */
        virtual bool visitIfcStackTerminalType(IfcStackTerminalType *value);
        /**
         * @param value the IfcStair datatype to visit
         */
        virtual bool visitIfcStair(IfcStair *value);
        /**
         * @param value the IfcStairFlight datatype to visit
         */
        virtual bool visitIfcStairFlight(IfcStairFlight *value);
        /**
         * @param value the IfcStairFlightType datatype to visit
         */
        virtual bool visitIfcStairFlightType(IfcStairFlightType *value);
        /**
         * @param value the IfcStructuralAction datatype to visit
         */
        virtual bool visitIfcStructuralAction(IfcStructuralAction *value);
        /**
         * @param value the IfcStructuralActivity datatype to visit
         */
        virtual bool visitIfcStructuralActivity(IfcStructuralActivity *value);
        /**
         * @param value the IfcStructuralAnalysisModel datatype to visit
         */
        virtual bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *value);
        /**
         * @param value the IfcStructuralConnection datatype to visit
         */
        virtual bool visitIfcStructuralConnection(IfcStructuralConnection *value);
        /**
         * @param value the IfcStructuralConnectionCondition datatype to visit
         */
        virtual bool visitIfcStructuralConnectionCondition(IfcStructuralConnectionCondition *value);
        /**
         * @param value the IfcStructuralCurveConnection datatype to visit
         */
        virtual bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *value);
        /**
         * @param value the IfcStructuralCurveMember datatype to visit
         */
        virtual bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *value);
        /**
         * @param value the IfcStructuralCurveMemberVarying datatype to visit
         */
        virtual bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *value);
        /**
         * @param value the IfcStructuralItem datatype to visit
         */
        virtual bool visitIfcStructuralItem(IfcStructuralItem *value);
        /**
         * @param value the IfcStructuralLinearAction datatype to visit
         */
        virtual bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *value);
        /**
         * @param value the IfcStructuralLinearActionVarying datatype to visit
         */
        virtual bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *value);
        /**
         * @param value the IfcStructuralLoad datatype to visit
         */
        virtual bool visitIfcStructuralLoad(IfcStructuralLoad *value);
        /**
         * @param value the IfcStructuralLoadGroup datatype to visit
         */
        virtual bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *value);
        /**
         * @param value the IfcStructuralLoadLinearForce datatype to visit
         */
        virtual bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *value);
        /**
         * @param value the IfcStructuralLoadPlanarForce datatype to visit
         */
        virtual bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *value);
        /**
         * @param value the IfcStructuralLoadSingleDisplacement datatype to visit
         */
        virtual bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *value);
        /**
         * @param value the IfcStructuralLoadSingleDisplacementDistortion datatype to visit
         */
        virtual bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *value);
        /**
         * @param value the IfcStructuralLoadSingleForce datatype to visit
         */
        virtual bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *value);
        /**
         * @param value the IfcStructuralLoadSingleForceWarping datatype to visit
         */
        virtual bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *value);
        /**
         * @param value the IfcStructuralLoadStatic datatype to visit
         */
        virtual bool visitIfcStructuralLoadStatic(IfcStructuralLoadStatic *value);
        /**
         * @param value the IfcStructuralLoadTemperature datatype to visit
         */
        virtual bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *value);
        /**
         * @param value the IfcStructuralMember datatype to visit
         */
        virtual bool visitIfcStructuralMember(IfcStructuralMember *value);
        /**
         * @param value the IfcStructuralPlanarAction datatype to visit
         */
        virtual bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *value);
        /**
         * @param value the IfcStructuralPlanarActionVarying datatype to visit
         */
        virtual bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *value);
        /**
         * @param value the IfcStructuralPointAction datatype to visit
         */
        virtual bool visitIfcStructuralPointAction(IfcStructuralPointAction *value);
        /**
         * @param value the IfcStructuralPointConnection datatype to visit
         */
        virtual bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *value);
        /**
         * @param value the IfcStructuralPointReaction datatype to visit
         */
        virtual bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *value);
        /**
         * @param value the IfcStructuralProfileProperties datatype to visit
         */
        virtual bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *value);
        /**
         * @param value the IfcStructuralReaction datatype to visit
         */
        virtual bool visitIfcStructuralReaction(IfcStructuralReaction *value);
        /**
         * @param value the IfcStructuralResultGroup datatype to visit
         */
        virtual bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *value);
        /**
         * @param value the IfcStructuralSteelProfileProperties datatype to visit
         */
        virtual bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *value);
        /**
         * @param value the IfcStructuralSurfaceConnection datatype to visit
         */
        virtual bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *value);
        /**
         * @param value the IfcStructuralSurfaceMember datatype to visit
         */
        virtual bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *value);
        /**
         * @param value the IfcStructuralSurfaceMemberVarying datatype to visit
         */
        virtual bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *value);
        /**
         * @param value the IfcStructuredDimensionCallout datatype to visit
         */
        virtual bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *value);
        /**
         * @param value the IfcStyleModel datatype to visit
         */
        virtual bool visitIfcStyleModel(IfcStyleModel *value);
        /**
         * @param value the IfcStyledItem datatype to visit
         */
        virtual bool visitIfcStyledItem(IfcStyledItem *value);
        /**
         * @param value the IfcStyledRepresentation datatype to visit
         */
        virtual bool visitIfcStyledRepresentation(IfcStyledRepresentation *value);
        /**
         * @param value the IfcSubContractResource datatype to visit
         */
        virtual bool visitIfcSubContractResource(IfcSubContractResource *value);
        /**
         * @param value the IfcSubedge datatype to visit
         */
        virtual bool visitIfcSubedge(IfcSubedge *value);
        /**
         * @param value the IfcSurface datatype to visit
         */
        virtual bool visitIfcSurface(IfcSurface *value);
        /**
         * @param value the IfcSurfaceCurveSweptAreaSolid datatype to visit
         */
        virtual bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *value);
        /**
         * @param value the IfcSurfaceOfLinearExtrusion datatype to visit
         */
        virtual bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *value);
        /**
         * @param value the IfcSurfaceOfRevolution datatype to visit
         */
        virtual bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *value);
        /**
         * @param value the IfcSurfaceStyle datatype to visit
         */
        virtual bool visitIfcSurfaceStyle(IfcSurfaceStyle *value);
        /**
         * @param value the IfcSurfaceStyleLighting datatype to visit
         */
        virtual bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value);
        /**
         * @param value the IfcSurfaceStyleRefraction datatype to visit
         */
        virtual bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value);
        /**
         * @param value the IfcSurfaceStyleRendering datatype to visit
         */
        virtual bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *value);
        /**
         * @param value the IfcSurfaceStyleShading datatype to visit
         */
        virtual bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *value);
        /**
         * @param value the IfcSurfaceStyleWithTextures datatype to visit
         */
        virtual bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value);
        /**
         * @param value the IfcSurfaceTexture datatype to visit
         */
        virtual bool visitIfcSurfaceTexture(IfcSurfaceTexture *value);
        /**
         * @param value the IfcSweptAreaSolid datatype to visit
         */
        virtual bool visitIfcSweptAreaSolid(IfcSweptAreaSolid *value);
        /**
         * @param value the IfcSweptDiskSolid datatype to visit
         */
        virtual bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *value);
        /**
         * @param value the IfcSweptSurface datatype to visit
         */
        virtual bool visitIfcSweptSurface(IfcSweptSurface *value);
        /**
         * @param value the IfcSwitchingDeviceType datatype to visit
         */
        virtual bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *value);
        /**
         * @param value the IfcSymbolStyle datatype to visit
         */
        virtual bool visitIfcSymbolStyle(IfcSymbolStyle *value);
        /**
         * @param value the IfcSystem datatype to visit
         */
        virtual bool visitIfcSystem(IfcSystem *value);
        /**
         * @param value the IfcSystemFurnitureElementType datatype to visit
         */
        virtual bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *value);
        /**
         * @param value the IfcTShapeProfileDef datatype to visit
         */
        virtual bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *value);
        /**
         * @param value the IfcTable datatype to visit
         */
        virtual bool visitIfcTable(IfcTable *value);
        /**
         * @param value the IfcTableRow datatype to visit
         */
        virtual bool visitIfcTableRow(IfcTableRow *value);
        /**
         * @param value the IfcTankType datatype to visit
         */
        virtual bool visitIfcTankType(IfcTankType *value);
        /**
         * @param value the IfcTask datatype to visit
         */
        virtual bool visitIfcTask(IfcTask *value);
        /**
         * @param value the IfcTelecomAddress datatype to visit
         */
        virtual bool visitIfcTelecomAddress(IfcTelecomAddress *value);
        /**
         * @param value the IfcTendon datatype to visit
         */
        virtual bool visitIfcTendon(IfcTendon *value);
        /**
         * @param value the IfcTendonAnchor datatype to visit
         */
        virtual bool visitIfcTendonAnchor(IfcTendonAnchor *value);
        /**
         * @param value the IfcTerminatorSymbol datatype to visit
         */
        virtual bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *value);
        /**
         * @param value the IfcTextLiteral datatype to visit
         */
        virtual bool visitIfcTextLiteral(IfcTextLiteral *value);
        /**
         * @param value the IfcTextLiteralWithExtent datatype to visit
         */
        virtual bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *value);
        /**
         * @param value the IfcTextStyle datatype to visit
         */
        virtual bool visitIfcTextStyle(IfcTextStyle *value);
        /**
         * @param value the IfcTextStyleFontModel datatype to visit
         */
        virtual bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *value);
        /**
         * @param value the IfcTextStyleForDefinedFont datatype to visit
         */
        virtual bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *value);
        /**
         * @param value the IfcTextStyleTextModel datatype to visit
         */
        virtual bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *value);
        /**
         * @param value the IfcTextStyleWithBoxCharacteristics datatype to visit
         */
        virtual bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value);
        /**
         * @param value the IfcTextureCoordinate datatype to visit
         */
        virtual bool visitIfcTextureCoordinate(IfcTextureCoordinate *value);
        /**
         * @param value the IfcTextureCoordinateGenerator datatype to visit
         */
        virtual bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *value);
        /**
         * @param value the IfcTextureMap datatype to visit
         */
        virtual bool visitIfcTextureMap(IfcTextureMap *value);
        /**
         * @param value the IfcTextureVertex datatype to visit
         */
        virtual bool visitIfcTextureVertex(IfcTextureVertex *value);
        /**
         * @param value the IfcThermalMaterialProperties datatype to visit
         */
        virtual bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *value);
        /**
         * @param value the IfcTimeSeries datatype to visit
         */
        virtual bool visitIfcTimeSeries(IfcTimeSeries *value);
        /**
         * @param value the IfcTimeSeriesReferenceRelationship datatype to visit
         */
        virtual bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *value);
        /**
         * @param value the IfcTimeSeriesSchedule datatype to visit
         */
        virtual bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *value);
        /**
         * @param value the IfcTimeSeriesValue datatype to visit
         */
        virtual bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *value);
        /**
         * @param value the IfcTopologicalRepresentationItem datatype to visit
         */
        virtual bool visitIfcTopologicalRepresentationItem(IfcTopologicalRepresentationItem *value);
        /**
         * @param value the IfcTopologyRepresentation datatype to visit
         */
        virtual bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *value);
        /**
         * @param value the IfcTransformerType datatype to visit
         */
        virtual bool visitIfcTransformerType(IfcTransformerType *value);
        /**
         * @param value the IfcTransportElement datatype to visit
         */
        virtual bool visitIfcTransportElement(IfcTransportElement *value);
        /**
         * @param value the IfcTransportElementType datatype to visit
         */
        virtual bool visitIfcTransportElementType(IfcTransportElementType *value);
        /**
         * @param value the IfcTrapeziumProfileDef datatype to visit
         */
        virtual bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *value);
        /**
         * @param value the IfcTrimmedCurve datatype to visit
         */
        virtual bool visitIfcTrimmedCurve(IfcTrimmedCurve *value);
        /**
         * @param value the IfcTubeBundleType datatype to visit
         */
        virtual bool visitIfcTubeBundleType(IfcTubeBundleType *value);
        /**
         * @param value the IfcTwoDirectionRepeatFactor datatype to visit
         */
        virtual bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *value);
        /**
         * @param value the IfcTypeObject datatype to visit
         */
        virtual bool visitIfcTypeObject(IfcTypeObject *value);
        /**
         * @param value the IfcTypeProduct datatype to visit
         */
        virtual bool visitIfcTypeProduct(IfcTypeProduct *value);
        /**
         * @param value the IfcUShapeProfileDef datatype to visit
         */
        virtual bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *value);
        /**
         * @param value the IfcUnitAssignment datatype to visit
         */
        virtual bool visitIfcUnitAssignment(IfcUnitAssignment *value);
        /**
         * @param value the IfcUnitaryEquipmentType datatype to visit
         */
        virtual bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *value);
        /**
         * @param value the IfcValveType datatype to visit
         */
        virtual bool visitIfcValveType(IfcValveType *value);
        /**
         * @param value the IfcVector datatype to visit
         */
        virtual bool visitIfcVector(IfcVector *value);
        /**
         * @param value the IfcVertex datatype to visit
         */
        virtual bool visitIfcVertex(IfcVertex *value);
        /**
         * @param value the IfcVertexBasedTextureMap datatype to visit
         */
        virtual bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *value);
        /**
         * @param value the IfcVertexLoop datatype to visit
         */
        virtual bool visitIfcVertexLoop(IfcVertexLoop *value);
        /**
         * @param value the IfcVertexPoint datatype to visit
         */
        virtual bool visitIfcVertexPoint(IfcVertexPoint *value);
        /**
         * @param value the IfcVibrationIsolatorType datatype to visit
         */
        virtual bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *value);
        /**
         * @param value the IfcVirtualElement datatype to visit
         */
        virtual bool visitIfcVirtualElement(IfcVirtualElement *value);
        /**
         * @param value the IfcVirtualGridIntersection datatype to visit
         */
        virtual bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *value);
        /**
         * @param value the IfcWall datatype to visit
         */
        virtual bool visitIfcWall(IfcWall *value);
        /**
         * @param value the IfcWallStandardCase datatype to visit
         */
        virtual bool visitIfcWallStandardCase(IfcWallStandardCase *value);
        /**
         * @param value the IfcWallType datatype to visit
         */
        virtual bool visitIfcWallType(IfcWallType *value);
        /**
         * @param value the IfcWasteTerminalType datatype to visit
         */
        virtual bool visitIfcWasteTerminalType(IfcWasteTerminalType *value);
        /**
         * @param value the IfcWaterProperties datatype to visit
         */
        virtual bool visitIfcWaterProperties(IfcWaterProperties *value);
        /**
         * @param value the IfcWindow datatype to visit
         */
        virtual bool visitIfcWindow(IfcWindow *value);
        /**
         * @param value the IfcWindowLiningProperties datatype to visit
         */
        virtual bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *value);
        /**
         * @param value the IfcWindowPanelProperties datatype to visit
         */
        virtual bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *value);
        /**
         * @param value the IfcWindowStyle datatype to visit
         */
        virtual bool visitIfcWindowStyle(IfcWindowStyle *value);
        /**
         * @param value the IfcWorkControl datatype to visit
         */
        virtual bool visitIfcWorkControl(IfcWorkControl *value);
        /**
         * @param value the IfcWorkPlan datatype to visit
         */
        virtual bool visitIfcWorkPlan(IfcWorkPlan *value);
        /**
         * @param value the IfcWorkSchedule datatype to visit
         */
        virtual bool visitIfcWorkSchedule(IfcWorkSchedule *value);
        /**
         * @param value the IfcZShapeProfileDef datatype to visit
         */
        virtual bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *value);
        /**
         * @param value the IfcZone datatype to visit
         */
        virtual bool visitIfcZone(IfcZone *value);

    };

}

#endif // IFC2X3_INHERITVISITOR_H
