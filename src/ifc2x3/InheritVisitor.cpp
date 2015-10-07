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



#include <ifc2x3/InheritVisitor.h>

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

InheritVisitor::InheritVisitor() {
}

InheritVisitor::~InheritVisitor() {
}

bool InheritVisitor::visitIfcActorSelect(IfcActorSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcActorSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcAppliedValueSelect(IfcAppliedValueSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcAppliedValueSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcAxis2Placement(IfcAxis2Placement *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcAxis2Placement(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcBooleanOperand(IfcBooleanOperand *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcBooleanOperand(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcCharacterStyleSelect(IfcCharacterStyleSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcCharacterStyleSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcClassificationNotationSelect(IfcClassificationNotationSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcClassificationNotationSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcColour(IfcColour *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcColour(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcColourOrFactor(IfcColourOrFactor *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcColourOrFactor(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcConditionCriterionSelect(IfcConditionCriterionSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcConditionCriterionSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcCsgSelect(IfcCsgSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcCsgSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcCurveFontOrScaledCurveFontSelect(IfcCurveFontOrScaledCurveFontSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcCurveFontOrScaledCurveFontSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcCurveOrEdgeCurve(IfcCurveOrEdgeCurve *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcCurveOrEdgeCurve(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcCurveStyleFontSelect(IfcCurveStyleFontSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcCurveStyleFontSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDateTimeSelect(IfcDateTimeSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDateTimeSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDefinedSymbolSelect(IfcDefinedSymbolSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDefinedSymbolSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDerivedMeasureValue(IfcDerivedMeasureValue *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDerivedMeasureValue(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDocumentSelect(IfcDocumentSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDocumentSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDraughtingCalloutElement(IfcDraughtingCalloutElement *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDraughtingCalloutElement(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcFillAreaStyleTileShapeSelect(IfcFillAreaStyleTileShapeSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcFillAreaStyleTileShapeSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcFillStyleSelect(IfcFillStyleSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcFillStyleSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcGeometricSetSelect(IfcGeometricSetSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcGeometricSetSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcHatchLineDistanceSelect(IfcHatchLineDistanceSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcHatchLineDistanceSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcLayeredItem(IfcLayeredItem *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcLayeredItem(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcLibrarySelect(IfcLibrarySelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcLibrarySelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcLightDistributionDataSourceSelect(IfcLightDistributionDataSourceSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcLightDistributionDataSourceSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMaterialSelect(IfcMaterialSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMaterialSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMeasureValue(IfcMeasureValue *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMeasureValue(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMetricValueSelect(IfcMetricValueSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMetricValueSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcObjectReferenceSelect(IfcObjectReferenceSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcObjectReferenceSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcOrientationSelect(IfcOrientationSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcOrientationSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPointOrVertexPoint(IfcPointOrVertexPoint *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPointOrVertexPoint(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPresentationStyleSelect(IfcPresentationStyleSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPresentationStyleSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcShell(IfcShell *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcShell(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSimpleValue(IfcSimpleValue *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSimpleValue(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSizeSelect(IfcSizeSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSizeSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSpecularHighlightSelect(IfcSpecularHighlightSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSpecularHighlightSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcStructuralActivityAssignmentSelect(IfcStructuralActivityAssignmentSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcStructuralActivityAssignmentSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSurfaceOrFaceSurface(IfcSurfaceOrFaceSurface *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSurfaceOrFaceSurface(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSurfaceStyleElementSelect(IfcSurfaceStyleElementSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSurfaceStyleElementSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSymbolStyleSelect(IfcSymbolStyleSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSymbolStyleSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTextFontSelect(IfcTextFontSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTextFontSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTextStyleSelect(IfcTextStyleSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTextStyleSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTrimmingSelect(IfcTrimmingSelect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTrimmingSelect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcUnit(IfcUnit *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcUnit(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcValue(IfcValue *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcValue(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcVectorOrDirection(IfcVectorOrDirection *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcVectorOrDirection(" << value->type());
    return false;
}

bool InheritVisitor::visitIfc2DCompositeCurve(Ifc2DCompositeCurve *value) {
    return visitIfcCompositeCurve(value);
}

bool InheritVisitor::visitIfcActionRequest(IfcActionRequest *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcActor(IfcActor *value) {
    return visitIfcObject(value);
}

bool InheritVisitor::visitIfcActorRole(IfcActorRole *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcActorRole(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcActuatorType(IfcActuatorType *value) {
    return visitIfcDistributionControlElementType(value);
}

bool InheritVisitor::visitIfcAddress(IfcAddress *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcAddress(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *value) {
    return visitIfcFlowControllerType(value);
}

bool InheritVisitor::visitIfcAirTerminalType(IfcAirTerminalType *value) {
    return visitIfcFlowTerminalType(value);
}

bool InheritVisitor::visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcAlarmType(IfcAlarmType *value) {
    return visitIfcDistributionControlElementType(value);
}

bool InheritVisitor::visitIfcAngularDimension(IfcAngularDimension *value) {
    return visitIfcDimensionCurveDirectedCallout(value);
}

bool InheritVisitor::visitIfcAnnotation(IfcAnnotation *value) {
    return visitIfcProduct(value);
}

bool InheritVisitor::visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value) {
    return visitIfcAnnotationOccurrence(value);
}

bool InheritVisitor::visitIfcAnnotationFillArea(IfcAnnotationFillArea *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *value) {
    return visitIfcAnnotationOccurrence(value);
}

bool InheritVisitor::visitIfcAnnotationOccurrence(IfcAnnotationOccurrence *value) {
    return visitIfcStyledItem(value);
}

bool InheritVisitor::visitIfcAnnotationSurface(IfcAnnotationSurface *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *value) {
    return visitIfcAnnotationOccurrence(value);
}

bool InheritVisitor::visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value) {
    return visitIfcAnnotationOccurrence(value);
}

bool InheritVisitor::visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value) {
    return visitIfcAnnotationOccurrence(value);
}

bool InheritVisitor::visitIfcApplication(IfcApplication *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcApplication(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcAppliedValue(IfcAppliedValue *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcAppliedValue(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcAppliedValueRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcApproval(IfcApproval *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcApproval(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcApprovalActorRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcApprovalPropertyRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcApprovalRelationship(IfcApprovalRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcApprovalRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *value) {
    return visitIfcProfileDef(value);
}

bool InheritVisitor::visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *value) {
    return visitIfcProfileDef(value);
}

bool InheritVisitor::visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *value) {
    return visitIfcArbitraryClosedProfileDef(value);
}

bool InheritVisitor::visitIfcAsset(IfcAsset *value) {
    return visitIfcGroup(value);
}

bool InheritVisitor::visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *value) {
    return visitIfcIShapeProfileDef(value);
}

bool InheritVisitor::visitIfcAxis1Placement(IfcAxis1Placement *value) {
    return visitIfcPlacement(value);
}

bool InheritVisitor::visitIfcAxis2Placement2D(IfcAxis2Placement2D *value) {
    return visitIfcPlacement(value);
}

bool InheritVisitor::visitIfcAxis2Placement3D(IfcAxis2Placement3D *value) {
    return visitIfcPlacement(value);
}

bool InheritVisitor::visitIfcBSplineCurve(IfcBSplineCurve *value) {
    return visitIfcBoundedCurve(value);
}

bool InheritVisitor::visitIfcBeam(IfcBeam *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcBeamType(IfcBeamType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcBezierCurve(IfcBezierCurve *value) {
    return visitIfcBSplineCurve(value);
}

bool InheritVisitor::visitIfcBlobTexture(IfcBlobTexture *value) {
    return visitIfcSurfaceTexture(value);
}

bool InheritVisitor::visitIfcBlock(IfcBlock *value) {
    return visitIfcCsgPrimitive3D(value);
}

bool InheritVisitor::visitIfcBoilerType(IfcBoilerType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcBooleanClippingResult(IfcBooleanClippingResult *value) {
    return visitIfcBooleanResult(value);
}

bool InheritVisitor::visitIfcBooleanResult(IfcBooleanResult *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcBoundaryCondition(IfcBoundaryCondition *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcBoundaryCondition(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *value) {
    return visitIfcBoundaryCondition(value);
}

bool InheritVisitor::visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *value) {
    return visitIfcBoundaryCondition(value);
}

bool InheritVisitor::visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *value) {
    return visitIfcBoundaryCondition(value);
}

bool InheritVisitor::visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *value) {
    return visitIfcBoundaryNodeCondition(value);
}

bool InheritVisitor::visitIfcBoundedCurve(IfcBoundedCurve *value) {
    return visitIfcCurve(value);
}

bool InheritVisitor::visitIfcBoundedSurface(IfcBoundedSurface *value) {
    return visitIfcSurface(value);
}

bool InheritVisitor::visitIfcBoundingBox(IfcBoundingBox *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *value) {
    return visitIfcHalfSpaceSolid(value);
}

bool InheritVisitor::visitIfcBuilding(IfcBuilding *value) {
    return visitIfcSpatialStructureElement(value);
}

bool InheritVisitor::visitIfcBuildingElement(IfcBuildingElement *value) {
    return visitIfcElement(value);
}

bool InheritVisitor::visitIfcBuildingElementComponent(IfcBuildingElementComponent *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcBuildingElementPart(IfcBuildingElementPart *value) {
    return visitIfcBuildingElementComponent(value);
}

bool InheritVisitor::visitIfcBuildingElementProxy(IfcBuildingElementProxy *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcBuildingElementType(IfcBuildingElementType *value) {
    return visitIfcElementType(value);
}

bool InheritVisitor::visitIfcBuildingStorey(IfcBuildingStorey *value) {
    return visitIfcSpatialStructureElement(value);
}

bool InheritVisitor::visitIfcCShapeProfileDef(IfcCShapeProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *value) {
    return visitIfcFlowFittingType(value);
}

bool InheritVisitor::visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *value) {
    return visitIfcFlowSegmentType(value);
}

bool InheritVisitor::visitIfcCableSegmentType(IfcCableSegmentType *value) {
    return visitIfcFlowSegmentType(value);
}

bool InheritVisitor::visitIfcCalendarDate(IfcCalendarDate *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcCalendarDate(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcCartesianPoint(IfcCartesianPoint *value) {
    return visitIfcPoint(value);
}

bool InheritVisitor::visitIfcCartesianTransformationOperator(IfcCartesianTransformationOperator *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *value) {
    return visitIfcCartesianTransformationOperator(value);
}

bool InheritVisitor::visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *value) {
    return visitIfcCartesianTransformationOperator2D(value);
}

bool InheritVisitor::visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *value) {
    return visitIfcCartesianTransformationOperator(value);
}

bool InheritVisitor::visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *value) {
    return visitIfcCartesianTransformationOperator3D(value);
}

bool InheritVisitor::visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *value) {
    return visitIfcArbitraryOpenProfileDef(value);
}

bool InheritVisitor::visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *value) {
    return visitIfcEdgeFeature(value);
}

bool InheritVisitor::visitIfcChillerType(IfcChillerType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcCircle(IfcCircle *value) {
    return visitIfcConic(value);
}

bool InheritVisitor::visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *value) {
    return visitIfcCircleProfileDef(value);
}

bool InheritVisitor::visitIfcCircleProfileDef(IfcCircleProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcClassification(IfcClassification *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcClassification(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcClassificationItem(IfcClassificationItem *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcClassificationItem(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcClassificationItemRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcClassificationNotation(IfcClassificationNotation *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcClassificationNotation(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcClassificationNotationFacet(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcClassificationReference(IfcClassificationReference *value) {
    return visitIfcExternalReference(value);
}

bool InheritVisitor::visitIfcClosedShell(IfcClosedShell *value) {
    return visitIfcConnectedFaceSet(value);
}

bool InheritVisitor::visitIfcCoilType(IfcCoilType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcColourRgb(IfcColourRgb *value) {
    return visitIfcColourSpecification(value);
}

bool InheritVisitor::visitIfcColourSpecification(IfcColourSpecification *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcColourSpecification(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcColumn(IfcColumn *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcColumnType(IfcColumnType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcComplexProperty(IfcComplexProperty *value) {
    return visitIfcProperty(value);
}

bool InheritVisitor::visitIfcCompositeCurve(IfcCompositeCurve *value) {
    return visitIfcBoundedCurve(value);
}

bool InheritVisitor::visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcCompositeProfileDef(IfcCompositeProfileDef *value) {
    return visitIfcProfileDef(value);
}

bool InheritVisitor::visitIfcCompressorType(IfcCompressorType *value) {
    return visitIfcFlowMovingDeviceType(value);
}

bool InheritVisitor::visitIfcCondenserType(IfcCondenserType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcCondition(IfcCondition *value) {
    return visitIfcGroup(value);
}

bool InheritVisitor::visitIfcConditionCriterion(IfcConditionCriterion *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcConic(IfcConic *value) {
    return visitIfcCurve(value);
}

bool InheritVisitor::visitIfcConnectedFaceSet(IfcConnectedFaceSet *value) {
    return visitIfcTopologicalRepresentationItem(value);
}

bool InheritVisitor::visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *value) {
    return visitIfcConnectionGeometry(value);
}

bool InheritVisitor::visitIfcConnectionGeometry(IfcConnectionGeometry *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcConnectionGeometry(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *value) {
    return visitIfcConnectionPointGeometry(value);
}

bool InheritVisitor::visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *value) {
    return visitIfcConnectionGeometry(value);
}

bool InheritVisitor::visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *value) {
    return visitIfcConnectionGeometry(value);
}

bool InheritVisitor::visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *value) {
    return visitIfcConnectionGeometry(value);
}

bool InheritVisitor::visitIfcConstraint(IfcConstraint *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcConstraint(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcConstraintAggregationRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcConstraintClassificationRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcConstraintRelationship(IfcConstraintRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcConstraintRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *value) {
    return visitIfcConstructionResource(value);
}

bool InheritVisitor::visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *value) {
    return visitIfcConstructionResource(value);
}

bool InheritVisitor::visitIfcConstructionProductResource(IfcConstructionProductResource *value) {
    return visitIfcConstructionResource(value);
}

bool InheritVisitor::visitIfcConstructionResource(IfcConstructionResource *value) {
    return visitIfcResource(value);
}

bool InheritVisitor::visitIfcContextDependentUnit(IfcContextDependentUnit *value) {
    return visitIfcNamedUnit(value);
}

bool InheritVisitor::visitIfcControl(IfcControl *value) {
    return visitIfcObject(value);
}

bool InheritVisitor::visitIfcControllerType(IfcControllerType *value) {
    return visitIfcDistributionControlElementType(value);
}

bool InheritVisitor::visitIfcConversionBasedUnit(IfcConversionBasedUnit *value) {
    return visitIfcNamedUnit(value);
}

bool InheritVisitor::visitIfcCooledBeamType(IfcCooledBeamType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcCoolingTowerType(IfcCoolingTowerType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcCoordinatedUniversalTimeOffset(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcCostItem(IfcCostItem *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcCostSchedule(IfcCostSchedule *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcCostValue(IfcCostValue *value) {
    return visitIfcAppliedValue(value);
}

bool InheritVisitor::visitIfcCovering(IfcCovering *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcCoveringType(IfcCoveringType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcCrewResource(IfcCrewResource *value) {
    return visitIfcConstructionResource(value);
}

bool InheritVisitor::visitIfcCsgPrimitive3D(IfcCsgPrimitive3D *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcCsgSolid(IfcCsgSolid *value) {
    return visitIfcSolidModel(value);
}

bool InheritVisitor::visitIfcCurrencyRelationship(IfcCurrencyRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcCurrencyRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcCurtainWall(IfcCurtainWall *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcCurtainWallType(IfcCurtainWallType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcCurve(IfcCurve *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *value) {
    return visitIfcBoundedSurface(value);
}

bool InheritVisitor::visitIfcCurveStyle(IfcCurveStyle *value) {
    return visitIfcPresentationStyle(value);
}

bool InheritVisitor::visitIfcCurveStyleFont(IfcCurveStyleFont *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcCurveStyleFont(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcCurveStyleFontAndScaling(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcCurveStyleFontPattern(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDamperType(IfcDamperType *value) {
    return visitIfcFlowControllerType(value);
}

bool InheritVisitor::visitIfcDateAndTime(IfcDateAndTime *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDateAndTime(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDefinedSymbol(IfcDefinedSymbol *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcDerivedProfileDef(IfcDerivedProfileDef *value) {
    return visitIfcProfileDef(value);
}

bool InheritVisitor::visitIfcDerivedUnit(IfcDerivedUnit *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDerivedUnit(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDerivedUnitElement(IfcDerivedUnitElement *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDerivedUnitElement(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDiameterDimension(IfcDiameterDimension *value) {
    return visitIfcDimensionCurveDirectedCallout(value);
}

bool InheritVisitor::visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *value) {
    return visitIfcDraughtingCalloutRelationship(value);
}

bool InheritVisitor::visitIfcDimensionCurve(IfcDimensionCurve *value) {
    return visitIfcAnnotationCurveOccurrence(value);
}

bool InheritVisitor::visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *value) {
    return visitIfcDraughtingCallout(value);
}

bool InheritVisitor::visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *value) {
    return visitIfcTerminatorSymbol(value);
}

bool InheritVisitor::visitIfcDimensionPair(IfcDimensionPair *value) {
    return visitIfcDraughtingCalloutRelationship(value);
}

bool InheritVisitor::visitIfcDimensionalExponents(IfcDimensionalExponents *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDimensionalExponents(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDirection(IfcDirection *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcDiscreteAccessory(IfcDiscreteAccessory *value) {
    return visitIfcElementComponent(value);
}

bool InheritVisitor::visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *value) {
    return visitIfcElementComponentType(value);
}

bool InheritVisitor::visitIfcDistributionChamberElement(IfcDistributionChamberElement *value) {
    return visitIfcDistributionFlowElement(value);
}

bool InheritVisitor::visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *value) {
    return visitIfcDistributionFlowElementType(value);
}

bool InheritVisitor::visitIfcDistributionControlElement(IfcDistributionControlElement *value) {
    return visitIfcDistributionElement(value);
}

bool InheritVisitor::visitIfcDistributionControlElementType(IfcDistributionControlElementType *value) {
    return visitIfcDistributionElementType(value);
}

bool InheritVisitor::visitIfcDistributionElement(IfcDistributionElement *value) {
    return visitIfcElement(value);
}

bool InheritVisitor::visitIfcDistributionElementType(IfcDistributionElementType *value) {
    return visitIfcElementType(value);
}

bool InheritVisitor::visitIfcDistributionFlowElement(IfcDistributionFlowElement *value) {
    return visitIfcDistributionElement(value);
}

bool InheritVisitor::visitIfcDistributionFlowElementType(IfcDistributionFlowElementType *value) {
    return visitIfcDistributionElementType(value);
}

bool InheritVisitor::visitIfcDistributionPort(IfcDistributionPort *value) {
    return visitIfcPort(value);
}

bool InheritVisitor::visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDocumentElectronicFormat(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDocumentInformation(IfcDocumentInformation *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDocumentInformation(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDocumentInformationRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDocumentReference(IfcDocumentReference *value) {
    return visitIfcExternalReference(value);
}

bool InheritVisitor::visitIfcDoor(IfcDoor *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcDoorLiningProperties(IfcDoorLiningProperties *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcDoorPanelProperties(IfcDoorPanelProperties *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcDoorStyle(IfcDoorStyle *value) {
    return visitIfcTypeProduct(value);
}

bool InheritVisitor::visitIfcDraughtingCallout(IfcDraughtingCallout *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcDraughtingCalloutRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *value) {
    return visitIfcPreDefinedColour(value);
}

bool InheritVisitor::visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *value) {
    return visitIfcPreDefinedCurveFont(value);
}

bool InheritVisitor::visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *value) {
    return visitIfcPreDefinedTextFont(value);
}

bool InheritVisitor::visitIfcDuctFittingType(IfcDuctFittingType *value) {
    return visitIfcFlowFittingType(value);
}

bool InheritVisitor::visitIfcDuctSegmentType(IfcDuctSegmentType *value) {
    return visitIfcFlowSegmentType(value);
}

bool InheritVisitor::visitIfcDuctSilencerType(IfcDuctSilencerType *value) {
    return visitIfcFlowTreatmentDeviceType(value);
}

bool InheritVisitor::visitIfcEdge(IfcEdge *value) {
    return visitIfcTopologicalRepresentationItem(value);
}

bool InheritVisitor::visitIfcEdgeCurve(IfcEdgeCurve *value) {
    return visitIfcEdge(value);
}

bool InheritVisitor::visitIfcEdgeFeature(IfcEdgeFeature *value) {
    return visitIfcFeatureElementSubtraction(value);
}

bool InheritVisitor::visitIfcEdgeLoop(IfcEdgeLoop *value) {
    return visitIfcLoop(value);
}

bool InheritVisitor::visitIfcElectricApplianceType(IfcElectricApplianceType *value) {
    return visitIfcFlowTerminalType(value);
}

bool InheritVisitor::visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *value) {
    return visitIfcFlowController(value);
}

bool InheritVisitor::visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *value) {
    return visitIfcFlowStorageDeviceType(value);
}

bool InheritVisitor::visitIfcElectricGeneratorType(IfcElectricGeneratorType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcElectricHeaterType(IfcElectricHeaterType *value) {
    return visitIfcFlowTerminalType(value);
}

bool InheritVisitor::visitIfcElectricMotorType(IfcElectricMotorType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcElectricTimeControlType(IfcElectricTimeControlType *value) {
    return visitIfcFlowControllerType(value);
}

bool InheritVisitor::visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *value) {
    return visitIfcEnergyProperties(value);
}

bool InheritVisitor::visitIfcElectricalCircuit(IfcElectricalCircuit *value) {
    return visitIfcSystem(value);
}

bool InheritVisitor::visitIfcElectricalElement(IfcElectricalElement *value) {
    return visitIfcElement(value);
}

bool InheritVisitor::visitIfcElement(IfcElement *value) {
    return visitIfcProduct(value);
}

bool InheritVisitor::visitIfcElementAssembly(IfcElementAssembly *value) {
    return visitIfcElement(value);
}

bool InheritVisitor::visitIfcElementComponent(IfcElementComponent *value) {
    return visitIfcElement(value);
}

bool InheritVisitor::visitIfcElementComponentType(IfcElementComponentType *value) {
    return visitIfcElementType(value);
}

bool InheritVisitor::visitIfcElementQuantity(IfcElementQuantity *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcElementType(IfcElementType *value) {
    return visitIfcTypeProduct(value);
}

bool InheritVisitor::visitIfcElementarySurface(IfcElementarySurface *value) {
    return visitIfcSurface(value);
}

bool InheritVisitor::visitIfcEllipse(IfcEllipse *value) {
    return visitIfcConic(value);
}

bool InheritVisitor::visitIfcEllipseProfileDef(IfcEllipseProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *value) {
    return visitIfcDistributionFlowElement(value);
}

bool InheritVisitor::visitIfcEnergyConversionDeviceType(IfcEnergyConversionDeviceType *value) {
    return visitIfcDistributionFlowElementType(value);
}

bool InheritVisitor::visitIfcEnergyProperties(IfcEnergyProperties *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *value) {
    return visitIfcAppliedValue(value);
}

bool InheritVisitor::visitIfcEquipmentElement(IfcEquipmentElement *value) {
    return visitIfcElement(value);
}

bool InheritVisitor::visitIfcEquipmentStandard(IfcEquipmentStandard *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcEvaporatorType(IfcEvaporatorType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *value) {
    return visitIfcMaterialProperties(value);
}

bool InheritVisitor::visitIfcExternalReference(IfcExternalReference *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcExternalReference(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *value) {
    return visitIfcExternalReference(value);
}

bool InheritVisitor::visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value) {
    return visitIfcExternalReference(value);
}

bool InheritVisitor::visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value) {
    return visitIfcExternalReference(value);
}

bool InheritVisitor::visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value) {
    return visitIfcExternalReference(value);
}

bool InheritVisitor::visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *value) {
    return visitIfcSweptAreaSolid(value);
}

bool InheritVisitor::visitIfcFace(IfcFace *value) {
    return visitIfcTopologicalRepresentationItem(value);
}

bool InheritVisitor::visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcFaceBound(IfcFaceBound *value) {
    return visitIfcTopologicalRepresentationItem(value);
}

bool InheritVisitor::visitIfcFaceOuterBound(IfcFaceOuterBound *value) {
    return visitIfcFaceBound(value);
}

bool InheritVisitor::visitIfcFaceSurface(IfcFaceSurface *value) {
    return visitIfcFace(value);
}

bool InheritVisitor::visitIfcFacetedBrep(IfcFacetedBrep *value) {
    return visitIfcManifoldSolidBrep(value);
}

bool InheritVisitor::visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *value) {
    return visitIfcManifoldSolidBrep(value);
}

bool InheritVisitor::visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *value) {
    return visitIfcStructuralConnectionCondition(value);
}

bool InheritVisitor::visitIfcFanType(IfcFanType *value) {
    return visitIfcFlowMovingDeviceType(value);
}

bool InheritVisitor::visitIfcFastener(IfcFastener *value) {
    return visitIfcElementComponent(value);
}

bool InheritVisitor::visitIfcFastenerType(IfcFastenerType *value) {
    return visitIfcElementComponentType(value);
}

bool InheritVisitor::visitIfcFeatureElement(IfcFeatureElement *value) {
    return visitIfcElement(value);
}

bool InheritVisitor::visitIfcFeatureElementAddition(IfcFeatureElementAddition *value) {
    return visitIfcFeatureElement(value);
}

bool InheritVisitor::visitIfcFeatureElementSubtraction(IfcFeatureElementSubtraction *value) {
    return visitIfcFeatureElement(value);
}

bool InheritVisitor::visitIfcFillAreaStyle(IfcFillAreaStyle *value) {
    return visitIfcPresentationStyle(value);
}

bool InheritVisitor::visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcFilterType(IfcFilterType *value) {
    return visitIfcFlowTreatmentDeviceType(value);
}

bool InheritVisitor::visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *value) {
    return visitIfcFlowTerminalType(value);
}

bool InheritVisitor::visitIfcFlowController(IfcFlowController *value) {
    return visitIfcDistributionFlowElement(value);
}

bool InheritVisitor::visitIfcFlowControllerType(IfcFlowControllerType *value) {
    return visitIfcDistributionFlowElementType(value);
}

bool InheritVisitor::visitIfcFlowFitting(IfcFlowFitting *value) {
    return visitIfcDistributionFlowElement(value);
}

bool InheritVisitor::visitIfcFlowFittingType(IfcFlowFittingType *value) {
    return visitIfcDistributionFlowElementType(value);
}

bool InheritVisitor::visitIfcFlowInstrumentType(IfcFlowInstrumentType *value) {
    return visitIfcDistributionControlElementType(value);
}

bool InheritVisitor::visitIfcFlowMeterType(IfcFlowMeterType *value) {
    return visitIfcFlowControllerType(value);
}

bool InheritVisitor::visitIfcFlowMovingDevice(IfcFlowMovingDevice *value) {
    return visitIfcDistributionFlowElement(value);
}

bool InheritVisitor::visitIfcFlowMovingDeviceType(IfcFlowMovingDeviceType *value) {
    return visitIfcDistributionFlowElementType(value);
}

bool InheritVisitor::visitIfcFlowSegment(IfcFlowSegment *value) {
    return visitIfcDistributionFlowElement(value);
}

bool InheritVisitor::visitIfcFlowSegmentType(IfcFlowSegmentType *value) {
    return visitIfcDistributionFlowElementType(value);
}

bool InheritVisitor::visitIfcFlowStorageDevice(IfcFlowStorageDevice *value) {
    return visitIfcDistributionFlowElement(value);
}

bool InheritVisitor::visitIfcFlowStorageDeviceType(IfcFlowStorageDeviceType *value) {
    return visitIfcDistributionFlowElementType(value);
}

bool InheritVisitor::visitIfcFlowTerminal(IfcFlowTerminal *value) {
    return visitIfcDistributionFlowElement(value);
}

bool InheritVisitor::visitIfcFlowTerminalType(IfcFlowTerminalType *value) {
    return visitIfcDistributionFlowElementType(value);
}

bool InheritVisitor::visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *value) {
    return visitIfcDistributionFlowElement(value);
}

bool InheritVisitor::visitIfcFlowTreatmentDeviceType(IfcFlowTreatmentDeviceType *value) {
    return visitIfcDistributionFlowElementType(value);
}

bool InheritVisitor::visitIfcFluidFlowProperties(IfcFluidFlowProperties *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcFooting(IfcFooting *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcFuelProperties(IfcFuelProperties *value) {
    return visitIfcMaterialProperties(value);
}

bool InheritVisitor::visitIfcFurnishingElement(IfcFurnishingElement *value) {
    return visitIfcElement(value);
}

bool InheritVisitor::visitIfcFurnishingElementType(IfcFurnishingElementType *value) {
    return visitIfcElementType(value);
}

bool InheritVisitor::visitIfcFurnitureStandard(IfcFurnitureStandard *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcFurnitureType(IfcFurnitureType *value) {
    return visitIfcFurnishingElementType(value);
}

bool InheritVisitor::visitIfcGasTerminalType(IfcGasTerminalType *value) {
    return visitIfcFlowTerminalType(value);
}

bool InheritVisitor::visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *value) {
    return visitIfcMaterialProperties(value);
}

bool InheritVisitor::visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *value) {
    return visitIfcProfileProperties(value);
}

bool InheritVisitor::visitIfcGeometricCurveSet(IfcGeometricCurveSet *value) {
    return visitIfcGeometricSet(value);
}

bool InheritVisitor::visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *value) {
    return visitIfcRepresentationContext(value);
}

bool InheritVisitor::visitIfcGeometricRepresentationItem(IfcGeometricRepresentationItem *value) {
    return visitIfcRepresentationItem(value);
}

bool InheritVisitor::visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *value) {
    return visitIfcGeometricRepresentationContext(value);
}

bool InheritVisitor::visitIfcGeometricSet(IfcGeometricSet *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcGrid(IfcGrid *value) {
    return visitIfcProduct(value);
}

bool InheritVisitor::visitIfcGridAxis(IfcGridAxis *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcGridAxis(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcGridPlacement(IfcGridPlacement *value) {
    return visitIfcObjectPlacement(value);
}

bool InheritVisitor::visitIfcGroup(IfcGroup *value) {
    return visitIfcObject(value);
}

bool InheritVisitor::visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcHeatExchangerType(IfcHeatExchangerType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcHumidifierType(IfcHumidifierType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *value) {
    return visitIfcMaterialProperties(value);
}

bool InheritVisitor::visitIfcIShapeProfileDef(IfcIShapeProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcImageTexture(IfcImageTexture *value) {
    return visitIfcSurfaceTexture(value);
}

bool InheritVisitor::visitIfcInventory(IfcInventory *value) {
    return visitIfcGroup(value);
}

bool InheritVisitor::visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *value) {
    return visitIfcTimeSeries(value);
}

bool InheritVisitor::visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcIrregularTimeSeriesValue(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcJunctionBoxType(IfcJunctionBoxType *value) {
    return visitIfcFlowFittingType(value);
}

bool InheritVisitor::visitIfcLShapeProfileDef(IfcLShapeProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcLaborResource(IfcLaborResource *value) {
    return visitIfcConstructionResource(value);
}

bool InheritVisitor::visitIfcLampType(IfcLampType *value) {
    return visitIfcFlowTerminalType(value);
}

bool InheritVisitor::visitIfcLibraryInformation(IfcLibraryInformation *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcLibraryInformation(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcLibraryReference(IfcLibraryReference *value) {
    return visitIfcExternalReference(value);
}

bool InheritVisitor::visitIfcLightDistributionData(IfcLightDistributionData *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcLightDistributionData(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcLightFixtureType(IfcLightFixtureType *value) {
    return visitIfcFlowTerminalType(value);
}

bool InheritVisitor::visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcLightIntensityDistribution(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcLightSource(IfcLightSource *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcLightSourceAmbient(IfcLightSourceAmbient *value) {
    return visitIfcLightSource(value);
}

bool InheritVisitor::visitIfcLightSourceDirectional(IfcLightSourceDirectional *value) {
    return visitIfcLightSource(value);
}

bool InheritVisitor::visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *value) {
    return visitIfcLightSource(value);
}

bool InheritVisitor::visitIfcLightSourcePositional(IfcLightSourcePositional *value) {
    return visitIfcLightSource(value);
}

bool InheritVisitor::visitIfcLightSourceSpot(IfcLightSourceSpot *value) {
    return visitIfcLightSourcePositional(value);
}

bool InheritVisitor::visitIfcLine(IfcLine *value) {
    return visitIfcCurve(value);
}

bool InheritVisitor::visitIfcLinearDimension(IfcLinearDimension *value) {
    return visitIfcDimensionCurveDirectedCallout(value);
}

bool InheritVisitor::visitIfcLocalPlacement(IfcLocalPlacement *value) {
    return visitIfcObjectPlacement(value);
}

bool InheritVisitor::visitIfcLocalTime(IfcLocalTime *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcLocalTime(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcLoop(IfcLoop *value) {
    return visitIfcTopologicalRepresentationItem(value);
}

bool InheritVisitor::visitIfcManifoldSolidBrep(IfcManifoldSolidBrep *value) {
    return visitIfcSolidModel(value);
}

bool InheritVisitor::visitIfcMappedItem(IfcMappedItem *value) {
    return visitIfcRepresentationItem(value);
}

bool InheritVisitor::visitIfcMaterial(IfcMaterial *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMaterial(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMaterialClassificationRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *value) {
    return visitIfcProductRepresentation(value);
}

bool InheritVisitor::visitIfcMaterialLayer(IfcMaterialLayer *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMaterialLayer(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMaterialLayerSet(IfcMaterialLayerSet *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMaterialLayerSet(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMaterialLayerSetUsage(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMaterialList(IfcMaterialList *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMaterialList(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMaterialProperties(IfcMaterialProperties *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMaterialProperties(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMeasureWithUnit(IfcMeasureWithUnit *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMeasureWithUnit(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *value) {
    return visitIfcMechanicalMaterialProperties(value);
}

bool InheritVisitor::visitIfcMechanicalFastener(IfcMechanicalFastener *value) {
    return visitIfcFastener(value);
}

bool InheritVisitor::visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *value) {
    return visitIfcFastenerType(value);
}

bool InheritVisitor::visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *value) {
    return visitIfcMaterialProperties(value);
}

bool InheritVisitor::visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *value) {
    return visitIfcMechanicalMaterialProperties(value);
}

bool InheritVisitor::visitIfcMember(IfcMember *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcMemberType(IfcMemberType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcMetric(IfcMetric *value) {
    return visitIfcConstraint(value);
}

bool InheritVisitor::visitIfcMonetaryUnit(IfcMonetaryUnit *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcMonetaryUnit(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcMotorConnectionType(IfcMotorConnectionType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcMove(IfcMove *value) {
    return visitIfcTask(value);
}

bool InheritVisitor::visitIfcNamedUnit(IfcNamedUnit *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcNamedUnit(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcObject(IfcObject *value) {
    return visitIfcObjectDefinition(value);
}

bool InheritVisitor::visitIfcObjectDefinition(IfcObjectDefinition *value) {
    return visitIfcRoot(value);
}

bool InheritVisitor::visitIfcObjectPlacement(IfcObjectPlacement *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcObjectPlacement(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcObjective(IfcObjective *value) {
    return visitIfcConstraint(value);
}

bool InheritVisitor::visitIfcOccupant(IfcOccupant *value) {
    return visitIfcActor(value);
}

bool InheritVisitor::visitIfcOffsetCurve2D(IfcOffsetCurve2D *value) {
    return visitIfcCurve(value);
}

bool InheritVisitor::visitIfcOffsetCurve3D(IfcOffsetCurve3D *value) {
    return visitIfcCurve(value);
}

bool InheritVisitor::visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcOpenShell(IfcOpenShell *value) {
    return visitIfcConnectedFaceSet(value);
}

bool InheritVisitor::visitIfcOpeningElement(IfcOpeningElement *value) {
    return visitIfcFeatureElementSubtraction(value);
}

bool InheritVisitor::visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *value) {
    return visitIfcMaterialProperties(value);
}

bool InheritVisitor::visitIfcOrderAction(IfcOrderAction *value) {
    return visitIfcTask(value);
}

bool InheritVisitor::visitIfcOrganization(IfcOrganization *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcOrganization(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcOrganizationRelationship(IfcOrganizationRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcOrganizationRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcOrientedEdge(IfcOrientedEdge *value) {
    return visitIfcEdge(value);
}

bool InheritVisitor::visitIfcOutletType(IfcOutletType *value) {
    return visitIfcFlowTerminalType(value);
}

bool InheritVisitor::visitIfcOwnerHistory(IfcOwnerHistory *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcOwnerHistory(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcParameterizedProfileDef(IfcParameterizedProfileDef *value) {
    return visitIfcProfileDef(value);
}

bool InheritVisitor::visitIfcPath(IfcPath *value) {
    return visitIfcTopologicalRepresentationItem(value);
}

bool InheritVisitor::visitIfcPerformanceHistory(IfcPerformanceHistory *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcPermit(IfcPermit *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcPerson(IfcPerson *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPerson(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPersonAndOrganization(IfcPersonAndOrganization *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPersonAndOrganization(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *value) {
    return visitIfcPhysicalQuantity(value);
}

bool InheritVisitor::visitIfcPhysicalQuantity(IfcPhysicalQuantity *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPhysicalQuantity(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPhysicalSimpleQuantity(IfcPhysicalSimpleQuantity *value) {
    return visitIfcPhysicalQuantity(value);
}

bool InheritVisitor::visitIfcPile(IfcPile *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcPipeFittingType(IfcPipeFittingType *value) {
    return visitIfcFlowFittingType(value);
}

bool InheritVisitor::visitIfcPipeSegmentType(IfcPipeSegmentType *value) {
    return visitIfcFlowSegmentType(value);
}

bool InheritVisitor::visitIfcPixelTexture(IfcPixelTexture *value) {
    return visitIfcSurfaceTexture(value);
}

bool InheritVisitor::visitIfcPlacement(IfcPlacement *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcPlanarBox(IfcPlanarBox *value) {
    return visitIfcPlanarExtent(value);
}

bool InheritVisitor::visitIfcPlanarExtent(IfcPlanarExtent *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcPlane(IfcPlane *value) {
    return visitIfcElementarySurface(value);
}

bool InheritVisitor::visitIfcPlate(IfcPlate *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcPlateType(IfcPlateType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcPoint(IfcPoint *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcPointOnCurve(IfcPointOnCurve *value) {
    return visitIfcPoint(value);
}

bool InheritVisitor::visitIfcPointOnSurface(IfcPointOnSurface *value) {
    return visitIfcPoint(value);
}

bool InheritVisitor::visitIfcPolyLoop(IfcPolyLoop *value) {
    return visitIfcLoop(value);
}

bool InheritVisitor::visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *value) {
    return visitIfcHalfSpaceSolid(value);
}

bool InheritVisitor::visitIfcPolyline(IfcPolyline *value) {
    return visitIfcBoundedCurve(value);
}

bool InheritVisitor::visitIfcPort(IfcPort *value) {
    return visitIfcProduct(value);
}

bool InheritVisitor::visitIfcPostalAddress(IfcPostalAddress *value) {
    return visitIfcAddress(value);
}

bool InheritVisitor::visitIfcPreDefinedColour(IfcPreDefinedColour *value) {
    return visitIfcPreDefinedItem(value);
}

bool InheritVisitor::visitIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value) {
    return visitIfcPreDefinedItem(value);
}

bool InheritVisitor::visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *value) {
    return visitIfcPreDefinedSymbol(value);
}

bool InheritVisitor::visitIfcPreDefinedItem(IfcPreDefinedItem *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPreDefinedItem(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *value) {
    return visitIfcPreDefinedSymbol(value);
}

bool InheritVisitor::visitIfcPreDefinedSymbol(IfcPreDefinedSymbol *value) {
    return visitIfcPreDefinedItem(value);
}

bool InheritVisitor::visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *value) {
    return visitIfcPreDefinedSymbol(value);
}

bool InheritVisitor::visitIfcPreDefinedTextFont(IfcPreDefinedTextFont *value) {
    return visitIfcPreDefinedItem(value);
}

bool InheritVisitor::visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPresentationLayerAssignment(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *value) {
    return visitIfcPresentationLayerAssignment(value);
}

bool InheritVisitor::visitIfcPresentationStyle(IfcPresentationStyle *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPresentationStyle(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPresentationStyleAssignment(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcProcedure(IfcProcedure *value) {
    return visitIfcProcess(value);
}

bool InheritVisitor::visitIfcProcess(IfcProcess *value) {
    return visitIfcObject(value);
}

bool InheritVisitor::visitIfcProduct(IfcProduct *value) {
    return visitIfcObject(value);
}

bool InheritVisitor::visitIfcProductDefinitionShape(IfcProductDefinitionShape *value) {
    return visitIfcProductRepresentation(value);
}

bool InheritVisitor::visitIfcProductRepresentation(IfcProductRepresentation *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcProductRepresentation(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *value) {
    return visitIfcMaterialProperties(value);
}

bool InheritVisitor::visitIfcProfileDef(IfcProfileDef *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcProfileDef(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcProfileProperties(IfcProfileProperties *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcProfileProperties(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcProject(IfcProject *value) {
    return visitIfcObject(value);
}

bool InheritVisitor::visitIfcProjectOrder(IfcProjectOrder *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcProjectOrderRecord(IfcProjectOrderRecord *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcProjectionCurve(IfcProjectionCurve *value) {
    return visitIfcAnnotationCurveOccurrence(value);
}

bool InheritVisitor::visitIfcProjectionElement(IfcProjectionElement *value) {
    return visitIfcFeatureElementAddition(value);
}

bool InheritVisitor::visitIfcProperty(IfcProperty *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcProperty(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *value) {
    return visitIfcSimpleProperty(value);
}

bool InheritVisitor::visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPropertyConstraintRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPropertyDefinition(IfcPropertyDefinition *value) {
    return visitIfcRoot(value);
}

bool InheritVisitor::visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPropertyDependencyRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *value) {
    return visitIfcSimpleProperty(value);
}

bool InheritVisitor::visitIfcPropertyEnumeration(IfcPropertyEnumeration *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcPropertyEnumeration(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcPropertyListValue(IfcPropertyListValue *value) {
    return visitIfcSimpleProperty(value);
}

bool InheritVisitor::visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *value) {
    return visitIfcSimpleProperty(value);
}

bool InheritVisitor::visitIfcPropertySet(IfcPropertySet *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcPropertySetDefinition(IfcPropertySetDefinition *value) {
    return visitIfcPropertyDefinition(value);
}

bool InheritVisitor::visitIfcPropertySingleValue(IfcPropertySingleValue *value) {
    return visitIfcSimpleProperty(value);
}

bool InheritVisitor::visitIfcPropertyTableValue(IfcPropertyTableValue *value) {
    return visitIfcSimpleProperty(value);
}

bool InheritVisitor::visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *value) {
    return visitIfcFlowControllerType(value);
}

bool InheritVisitor::visitIfcProxy(IfcProxy *value) {
    return visitIfcProduct(value);
}

bool InheritVisitor::visitIfcPumpType(IfcPumpType *value) {
    return visitIfcFlowMovingDeviceType(value);
}

bool InheritVisitor::visitIfcQuantityArea(IfcQuantityArea *value) {
    return visitIfcPhysicalSimpleQuantity(value);
}

bool InheritVisitor::visitIfcQuantityCount(IfcQuantityCount *value) {
    return visitIfcPhysicalSimpleQuantity(value);
}

bool InheritVisitor::visitIfcQuantityLength(IfcQuantityLength *value) {
    return visitIfcPhysicalSimpleQuantity(value);
}

bool InheritVisitor::visitIfcQuantityTime(IfcQuantityTime *value) {
    return visitIfcPhysicalSimpleQuantity(value);
}

bool InheritVisitor::visitIfcQuantityVolume(IfcQuantityVolume *value) {
    return visitIfcPhysicalSimpleQuantity(value);
}

bool InheritVisitor::visitIfcQuantityWeight(IfcQuantityWeight *value) {
    return visitIfcPhysicalSimpleQuantity(value);
}

bool InheritVisitor::visitIfcRadiusDimension(IfcRadiusDimension *value) {
    return visitIfcDimensionCurveDirectedCallout(value);
}

bool InheritVisitor::visitIfcRailing(IfcRailing *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcRailingType(IfcRailingType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcRamp(IfcRamp *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcRampFlight(IfcRampFlight *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcRampFlightType(IfcRampFlightType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcRationalBezierCurve(IfcRationalBezierCurve *value) {
    return visitIfcBezierCurve(value);
}

bool InheritVisitor::visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *value) {
    return visitIfcRectangleProfileDef(value);
}

bool InheritVisitor::visitIfcRectangleProfileDef(IfcRectangleProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcRectangularPyramid(IfcRectangularPyramid *value) {
    return visitIfcCsgPrimitive3D(value);
}

bool InheritVisitor::visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *value) {
    return visitIfcBoundedSurface(value);
}

bool InheritVisitor::visitIfcReferencesValueDocument(IfcReferencesValueDocument *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcReferencesValueDocument(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcRegularTimeSeries(IfcRegularTimeSeries *value) {
    return visitIfcTimeSeries(value);
}

bool InheritVisitor::visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcReinforcementBarProperties(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcReinforcingBar(IfcReinforcingBar *value) {
    return visitIfcReinforcingElement(value);
}

bool InheritVisitor::visitIfcReinforcingElement(IfcReinforcingElement *value) {
    return visitIfcBuildingElementComponent(value);
}

bool InheritVisitor::visitIfcReinforcingMesh(IfcReinforcingMesh *value) {
    return visitIfcReinforcingElement(value);
}

bool InheritVisitor::visitIfcRelAggregates(IfcRelAggregates *value) {
    return visitIfcRelDecomposes(value);
}

bool InheritVisitor::visitIfcRelAssigns(IfcRelAssigns *value) {
    return visitIfcRelationship(value);
}

bool InheritVisitor::visitIfcRelAssignsTasks(IfcRelAssignsTasks *value) {
    return visitIfcRelAssignsToControl(value);
}

bool InheritVisitor::visitIfcRelAssignsToActor(IfcRelAssignsToActor *value) {
    return visitIfcRelAssigns(value);
}

bool InheritVisitor::visitIfcRelAssignsToControl(IfcRelAssignsToControl *value) {
    return visitIfcRelAssigns(value);
}

bool InheritVisitor::visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *value) {
    return visitIfcRelAssigns(value);
}

bool InheritVisitor::visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *value) {
    return visitIfcRelAssigns(value);
}

bool InheritVisitor::visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *value) {
    return visitIfcRelAssigns(value);
}

bool InheritVisitor::visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *value) {
    return visitIfcRelAssignsToControl(value);
}

bool InheritVisitor::visitIfcRelAssignsToResource(IfcRelAssignsToResource *value) {
    return visitIfcRelAssigns(value);
}

bool InheritVisitor::visitIfcRelAssociates(IfcRelAssociates *value) {
    return visitIfcRelationship(value);
}

bool InheritVisitor::visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *value) {
    return visitIfcRelAssociates(value);
}

bool InheritVisitor::visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *value) {
    return visitIfcRelAssociates(value);
}

bool InheritVisitor::visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *value) {
    return visitIfcRelAssociates(value);
}

bool InheritVisitor::visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *value) {
    return visitIfcRelAssociates(value);
}

bool InheritVisitor::visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *value) {
    return visitIfcRelAssociates(value);
}

bool InheritVisitor::visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *value) {
    return visitIfcRelAssociates(value);
}

bool InheritVisitor::visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *value) {
    return visitIfcRelAssociates(value);
}

bool InheritVisitor::visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *value) {
    return visitIfcRelAssociates(value);
}

bool InheritVisitor::visitIfcRelConnects(IfcRelConnects *value) {
    return visitIfcRelationship(value);
}

bool InheritVisitor::visitIfcRelConnectsElements(IfcRelConnectsElements *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *value) {
    return visitIfcRelConnectsElements(value);
}

bool InheritVisitor::visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelConnectsPorts(IfcRelConnectsPorts *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *value) {
    return visitIfcRelConnectsStructuralMember(value);
}

bool InheritVisitor::visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *value) {
    return visitIfcRelConnectsElements(value);
}

bool InheritVisitor::visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelCoversSpaces(IfcRelCoversSpaces *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelDecomposes(IfcRelDecomposes *value) {
    return visitIfcRelationship(value);
}

bool InheritVisitor::visitIfcRelDefines(IfcRelDefines *value) {
    return visitIfcRelationship(value);
}

bool InheritVisitor::visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *value) {
    return visitIfcRelDefines(value);
}

bool InheritVisitor::visitIfcRelDefinesByType(IfcRelDefinesByType *value) {
    return visitIfcRelDefines(value);
}

bool InheritVisitor::visitIfcRelFillsElement(IfcRelFillsElement *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelFlowControlElements(IfcRelFlowControlElements *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelNests(IfcRelNests *value) {
    return visitIfcRelDecomposes(value);
}

bool InheritVisitor::visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *value) {
    return visitIfcRelAssignsToActor(value);
}

bool InheritVisitor::visitIfcRelOverridesProperties(IfcRelOverridesProperties *value) {
    return visitIfcRelDefinesByProperties(value);
}

bool InheritVisitor::visitIfcRelProjectsElement(IfcRelProjectsElement *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *value) {
    return visitIfcRelAssignsToControl(value);
}

bool InheritVisitor::visitIfcRelSequence(IfcRelSequence *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelServicesBuildings(IfcRelServicesBuildings *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelVoidsElement(IfcRelVoidsElement *value) {
    return visitIfcRelConnects(value);
}

bool InheritVisitor::visitIfcRelationship(IfcRelationship *value) {
    return visitIfcRoot(value);
}

bool InheritVisitor::visitIfcRelaxation(IfcRelaxation *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcRelaxation(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcRepresentation(IfcRepresentation *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcRepresentation(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcRepresentationContext(IfcRepresentationContext *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcRepresentationContext(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcRepresentationItem(IfcRepresentationItem *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcRepresentationItem(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcRepresentationMap(IfcRepresentationMap *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcRepresentationMap(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcResource(IfcResource *value) {
    return visitIfcObject(value);
}

bool InheritVisitor::visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *value) {
    return visitIfcSweptAreaSolid(value);
}

bool InheritVisitor::visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *value) {
    return visitIfcProfileProperties(value);
}

bool InheritVisitor::visitIfcRightCircularCone(IfcRightCircularCone *value) {
    return visitIfcCsgPrimitive3D(value);
}

bool InheritVisitor::visitIfcRightCircularCylinder(IfcRightCircularCylinder *value) {
    return visitIfcCsgPrimitive3D(value);
}

bool InheritVisitor::visitIfcRoof(IfcRoof *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcRoot(IfcRoot *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcRoot(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *value) {
    return visitIfcEdgeFeature(value);
}

bool InheritVisitor::visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *value) {
    return visitIfcRectangleProfileDef(value);
}

bool InheritVisitor::visitIfcSIUnit(IfcSIUnit *value) {
    return visitIfcNamedUnit(value);
}

bool InheritVisitor::visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *value) {
    return visitIfcFlowTerminalType(value);
}

bool InheritVisitor::visitIfcScheduleTimeControl(IfcScheduleTimeControl *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcSectionProperties(IfcSectionProperties *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSectionProperties(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSectionReinforcementProperties(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSectionedSpine(IfcSectionedSpine *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcSensorType(IfcSensorType *value) {
    return visitIfcDistributionControlElementType(value);
}

bool InheritVisitor::visitIfcServiceLife(IfcServiceLife *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcServiceLifeFactor(IfcServiceLifeFactor *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcShapeAspect(IfcShapeAspect *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcShapeAspect(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcShapeModel(IfcShapeModel *value) {
    return visitIfcRepresentation(value);
}

bool InheritVisitor::visitIfcShapeRepresentation(IfcShapeRepresentation *value) {
    return visitIfcShapeModel(value);
}

bool InheritVisitor::visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcSimpleProperty(IfcSimpleProperty *value) {
    return visitIfcProperty(value);
}

bool InheritVisitor::visitIfcSite(IfcSite *value) {
    return visitIfcSpatialStructureElement(value);
}

bool InheritVisitor::visitIfcSlab(IfcSlab *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcSlabType(IfcSlabType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *value) {
    return visitIfcStructuralConnectionCondition(value);
}

bool InheritVisitor::visitIfcSolidModel(IfcSolidModel *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcSoundProperties(IfcSoundProperties *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcSoundValue(IfcSoundValue *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcSpace(IfcSpace *value) {
    return visitIfcSpatialStructureElement(value);
}

bool InheritVisitor::visitIfcSpaceHeaterType(IfcSpaceHeaterType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcSpaceProgram(IfcSpaceProgram *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcSpaceType(IfcSpaceType *value) {
    return visitIfcSpatialStructureElementType(value);
}

bool InheritVisitor::visitIfcSpatialStructureElement(IfcSpatialStructureElement *value) {
    return visitIfcProduct(value);
}

bool InheritVisitor::visitIfcSpatialStructureElementType(IfcSpatialStructureElementType *value) {
    return visitIfcElementType(value);
}

bool InheritVisitor::visitIfcSphere(IfcSphere *value) {
    return visitIfcCsgPrimitive3D(value);
}

bool InheritVisitor::visitIfcStackTerminalType(IfcStackTerminalType *value) {
    return visitIfcFlowTerminalType(value);
}

bool InheritVisitor::visitIfcStair(IfcStair *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcStairFlight(IfcStairFlight *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcStairFlightType(IfcStairFlightType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcStructuralAction(IfcStructuralAction *value) {
    return visitIfcStructuralActivity(value);
}

bool InheritVisitor::visitIfcStructuralActivity(IfcStructuralActivity *value) {
    return visitIfcProduct(value);
}

bool InheritVisitor::visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *value) {
    return visitIfcSystem(value);
}

bool InheritVisitor::visitIfcStructuralConnection(IfcStructuralConnection *value) {
    return visitIfcStructuralItem(value);
}

bool InheritVisitor::visitIfcStructuralConnectionCondition(IfcStructuralConnectionCondition *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcStructuralConnectionCondition(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *value) {
    return visitIfcStructuralConnection(value);
}

bool InheritVisitor::visitIfcStructuralCurveMember(IfcStructuralCurveMember *value) {
    return visitIfcStructuralMember(value);
}

bool InheritVisitor::visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *value) {
    return visitIfcStructuralCurveMember(value);
}

bool InheritVisitor::visitIfcStructuralItem(IfcStructuralItem *value) {
    return visitIfcProduct(value);
}

bool InheritVisitor::visitIfcStructuralLinearAction(IfcStructuralLinearAction *value) {
    return visitIfcStructuralAction(value);
}

bool InheritVisitor::visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *value) {
    return visitIfcStructuralLinearAction(value);
}

bool InheritVisitor::visitIfcStructuralLoad(IfcStructuralLoad *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcStructuralLoad(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *value) {
    return visitIfcGroup(value);
}

bool InheritVisitor::visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *value) {
    return visitIfcStructuralLoadStatic(value);
}

bool InheritVisitor::visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *value) {
    return visitIfcStructuralLoadStatic(value);
}

bool InheritVisitor::visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *value) {
    return visitIfcStructuralLoadStatic(value);
}

bool InheritVisitor::visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *value) {
    return visitIfcStructuralLoadSingleDisplacement(value);
}

bool InheritVisitor::visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *value) {
    return visitIfcStructuralLoadStatic(value);
}

bool InheritVisitor::visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *value) {
    return visitIfcStructuralLoadSingleForce(value);
}

bool InheritVisitor::visitIfcStructuralLoadStatic(IfcStructuralLoadStatic *value) {
    return visitIfcStructuralLoad(value);
}

bool InheritVisitor::visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *value) {
    return visitIfcStructuralLoadStatic(value);
}

bool InheritVisitor::visitIfcStructuralMember(IfcStructuralMember *value) {
    return visitIfcStructuralItem(value);
}

bool InheritVisitor::visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *value) {
    return visitIfcStructuralAction(value);
}

bool InheritVisitor::visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *value) {
    return visitIfcStructuralPlanarAction(value);
}

bool InheritVisitor::visitIfcStructuralPointAction(IfcStructuralPointAction *value) {
    return visitIfcStructuralAction(value);
}

bool InheritVisitor::visitIfcStructuralPointConnection(IfcStructuralPointConnection *value) {
    return visitIfcStructuralConnection(value);
}

bool InheritVisitor::visitIfcStructuralPointReaction(IfcStructuralPointReaction *value) {
    return visitIfcStructuralReaction(value);
}

bool InheritVisitor::visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *value) {
    return visitIfcGeneralProfileProperties(value);
}

bool InheritVisitor::visitIfcStructuralReaction(IfcStructuralReaction *value) {
    return visitIfcStructuralActivity(value);
}

bool InheritVisitor::visitIfcStructuralResultGroup(IfcStructuralResultGroup *value) {
    return visitIfcGroup(value);
}

bool InheritVisitor::visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *value) {
    return visitIfcStructuralProfileProperties(value);
}

bool InheritVisitor::visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *value) {
    return visitIfcStructuralConnection(value);
}

bool InheritVisitor::visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *value) {
    return visitIfcStructuralMember(value);
}

bool InheritVisitor::visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *value) {
    return visitIfcStructuralSurfaceMember(value);
}

bool InheritVisitor::visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *value) {
    return visitIfcDraughtingCallout(value);
}

bool InheritVisitor::visitIfcStyleModel(IfcStyleModel *value) {
    return visitIfcRepresentation(value);
}

bool InheritVisitor::visitIfcStyledItem(IfcStyledItem *value) {
    return visitIfcRepresentationItem(value);
}

bool InheritVisitor::visitIfcStyledRepresentation(IfcStyledRepresentation *value) {
    return visitIfcStyleModel(value);
}

bool InheritVisitor::visitIfcSubContractResource(IfcSubContractResource *value) {
    return visitIfcConstructionResource(value);
}

bool InheritVisitor::visitIfcSubedge(IfcSubedge *value) {
    return visitIfcEdge(value);
}

bool InheritVisitor::visitIfcSurface(IfcSurface *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *value) {
    return visitIfcSweptAreaSolid(value);
}

bool InheritVisitor::visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *value) {
    return visitIfcSweptSurface(value);
}

bool InheritVisitor::visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *value) {
    return visitIfcSweptSurface(value);
}

bool InheritVisitor::visitIfcSurfaceStyle(IfcSurfaceStyle *value) {
    return visitIfcPresentationStyle(value);
}

bool InheritVisitor::visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSurfaceStyleLighting(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSurfaceStyleRefraction(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *value) {
    return visitIfcSurfaceStyleShading(value);
}

bool InheritVisitor::visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSurfaceStyleShading(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSurfaceStyleWithTextures(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSurfaceTexture(IfcSurfaceTexture *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcSurfaceTexture(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcSweptAreaSolid(IfcSweptAreaSolid *value) {
    return visitIfcSolidModel(value);
}

bool InheritVisitor::visitIfcSweptDiskSolid(IfcSweptDiskSolid *value) {
    return visitIfcSolidModel(value);
}

bool InheritVisitor::visitIfcSweptSurface(IfcSweptSurface *value) {
    return visitIfcSurface(value);
}

bool InheritVisitor::visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *value) {
    return visitIfcFlowControllerType(value);
}

bool InheritVisitor::visitIfcSymbolStyle(IfcSymbolStyle *value) {
    return visitIfcPresentationStyle(value);
}

bool InheritVisitor::visitIfcSystem(IfcSystem *value) {
    return visitIfcGroup(value);
}

bool InheritVisitor::visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *value) {
    return visitIfcFurnishingElementType(value);
}

bool InheritVisitor::visitIfcTShapeProfileDef(IfcTShapeProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcTable(IfcTable *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTable(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTableRow(IfcTableRow *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTableRow(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTankType(IfcTankType *value) {
    return visitIfcFlowStorageDeviceType(value);
}

bool InheritVisitor::visitIfcTask(IfcTask *value) {
    return visitIfcProcess(value);
}

bool InheritVisitor::visitIfcTelecomAddress(IfcTelecomAddress *value) {
    return visitIfcAddress(value);
}

bool InheritVisitor::visitIfcTendon(IfcTendon *value) {
    return visitIfcReinforcingElement(value);
}

bool InheritVisitor::visitIfcTendonAnchor(IfcTendonAnchor *value) {
    return visitIfcReinforcingElement(value);
}

bool InheritVisitor::visitIfcTerminatorSymbol(IfcTerminatorSymbol *value) {
    return visitIfcAnnotationSymbolOccurrence(value);
}

bool InheritVisitor::visitIfcTextLiteral(IfcTextLiteral *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *value) {
    return visitIfcTextLiteral(value);
}

bool InheritVisitor::visitIfcTextStyle(IfcTextStyle *value) {
    return visitIfcPresentationStyle(value);
}

bool InheritVisitor::visitIfcTextStyleFontModel(IfcTextStyleFontModel *value) {
    return visitIfcPreDefinedTextFont(value);
}

bool InheritVisitor::visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTextStyleForDefinedFont(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTextStyleTextModel(IfcTextStyleTextModel *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTextStyleTextModel(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTextStyleWithBoxCharacteristics(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTextureCoordinate(IfcTextureCoordinate *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTextureCoordinate(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *value) {
    return visitIfcTextureCoordinate(value);
}

bool InheritVisitor::visitIfcTextureMap(IfcTextureMap *value) {
    return visitIfcTextureCoordinate(value);
}

bool InheritVisitor::visitIfcTextureVertex(IfcTextureVertex *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTextureVertex(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *value) {
    return visitIfcMaterialProperties(value);
}

bool InheritVisitor::visitIfcTimeSeries(IfcTimeSeries *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTimeSeries(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTimeSeriesReferenceRelationship(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcTimeSeriesValue(IfcTimeSeriesValue *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcTimeSeriesValue(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcTopologicalRepresentationItem(IfcTopologicalRepresentationItem *value) {
    return visitIfcRepresentationItem(value);
}

bool InheritVisitor::visitIfcTopologyRepresentation(IfcTopologyRepresentation *value) {
    return visitIfcShapeModel(value);
}

bool InheritVisitor::visitIfcTransformerType(IfcTransformerType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcTransportElement(IfcTransportElement *value) {
    return visitIfcElement(value);
}

bool InheritVisitor::visitIfcTransportElementType(IfcTransportElementType *value) {
    return visitIfcElementType(value);
}

bool InheritVisitor::visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcTrimmedCurve(IfcTrimmedCurve *value) {
    return visitIfcBoundedCurve(value);
}

bool InheritVisitor::visitIfcTubeBundleType(IfcTubeBundleType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *value) {
    return visitIfcOneDirectionRepeatFactor(value);
}

bool InheritVisitor::visitIfcTypeObject(IfcTypeObject *value) {
    return visitIfcObjectDefinition(value);
}

bool InheritVisitor::visitIfcTypeProduct(IfcTypeProduct *value) {
    return visitIfcTypeObject(value);
}

bool InheritVisitor::visitIfcUShapeProfileDef(IfcUShapeProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcUnitAssignment(IfcUnitAssignment *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcUnitAssignment(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *value) {
    return visitIfcEnergyConversionDeviceType(value);
}

bool InheritVisitor::visitIfcValveType(IfcValveType *value) {
    return visitIfcFlowControllerType(value);
}

bool InheritVisitor::visitIfcVector(IfcVector *value) {
    return visitIfcGeometricRepresentationItem(value);
}

bool InheritVisitor::visitIfcVertex(IfcVertex *value) {
    return visitIfcTopologicalRepresentationItem(value);
}

bool InheritVisitor::visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcVertexBasedTextureMap(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcVertexLoop(IfcVertexLoop *value) {
    return visitIfcLoop(value);
}

bool InheritVisitor::visitIfcVertexPoint(IfcVertexPoint *value) {
    return visitIfcVertex(value);
}

bool InheritVisitor::visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *value) {
    return visitIfcDiscreteAccessoryType(value);
}

bool InheritVisitor::visitIfcVirtualElement(IfcVirtualElement *value) {
    return visitIfcElement(value);
}

bool InheritVisitor::visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *value) {
    STEP_LOG_DEBUG(m_logger, "Failed to visit IfcVirtualGridIntersection(" << value->type());
    return false;
}

bool InheritVisitor::visitIfcWall(IfcWall *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcWallStandardCase(IfcWallStandardCase *value) {
    return visitIfcWall(value);
}

bool InheritVisitor::visitIfcWallType(IfcWallType *value) {
    return visitIfcBuildingElementType(value);
}

bool InheritVisitor::visitIfcWasteTerminalType(IfcWasteTerminalType *value) {
    return visitIfcFlowTerminalType(value);
}

bool InheritVisitor::visitIfcWaterProperties(IfcWaterProperties *value) {
    return visitIfcMaterialProperties(value);
}

bool InheritVisitor::visitIfcWindow(IfcWindow *value) {
    return visitIfcBuildingElement(value);
}

bool InheritVisitor::visitIfcWindowLiningProperties(IfcWindowLiningProperties *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcWindowPanelProperties(IfcWindowPanelProperties *value) {
    return visitIfcPropertySetDefinition(value);
}

bool InheritVisitor::visitIfcWindowStyle(IfcWindowStyle *value) {
    return visitIfcTypeProduct(value);
}

bool InheritVisitor::visitIfcWorkControl(IfcWorkControl *value) {
    return visitIfcControl(value);
}

bool InheritVisitor::visitIfcWorkPlan(IfcWorkPlan *value) {
    return visitIfcWorkControl(value);
}

bool InheritVisitor::visitIfcWorkSchedule(IfcWorkSchedule *value) {
    return visitIfcWorkControl(value);
}

bool InheritVisitor::visitIfcZShapeProfileDef(IfcZShapeProfileDef *value) {
    return visitIfcParameterizedProfileDef(value);
}

bool InheritVisitor::visitIfcZone(IfcZone *value) {
    return visitIfcGroup(value);
}

