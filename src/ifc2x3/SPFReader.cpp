/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include <MemoryLeak.h>
#include <ifc2x3/SPFReader.h>

#include <Step/BaseSPFObject.h>
#include <Step/BaseSPFReader.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
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
#include <ifc2x3/IfcProduct.h>
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
#include <ifc2x3/IfcStructuralAction.h>
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
#include <ifc2x3/Model.h>
#include <vector>

using namespace ifc2x3;

SPFReader::SPFReader() {
  m_Str2LoadFn["IFCIRREGULARTIMESERIESVALUE"] = &SPFReader::loadIFCIRREGULARTIMESERIESVALUE;
  m_Str2LoadFn["IFCSTRUCTURALLOADPLANARFORCE"] = &SPFReader::loadIFCSTRUCTURALLOADPLANARFORCE;
  m_Str2LoadFn["IFCPREDEFINEDTERMINATORSYMBOL"] = &SPFReader::loadIFCPREDEFINEDTERMINATORSYMBOL;
  m_Str2LoadFn["IFCBLOBTEXTURE"] = &SPFReader::loadIFCBLOBTEXTURE;
  m_Str2LoadFn["IFCDERIVEDUNITELEMENT"] = &SPFReader::loadIFCDERIVEDUNITELEMENT;
  m_Str2LoadFn["IFCRELOVERRIDESPROPERTIES"] = &SPFReader::loadIFCRELOVERRIDESPROPERTIES;
  m_Str2LoadFn["IFCDOORSTYLE"] = &SPFReader::loadIFCDOORSTYLE;
  m_Str2LoadFn["IFCRELFILLSELEMENT"] = &SPFReader::loadIFCRELFILLSELEMENT;
  m_Str2LoadFn["IFCVIRTUALGRIDINTERSECTION"] = &SPFReader::loadIFCVIRTUALGRIDINTERSECTION;
  m_Str2LoadFn["IFCCHILLERTYPE"] = &SPFReader::loadIFCCHILLERTYPE;
  m_Str2LoadFn["IFCCLASSIFICATION"] = &SPFReader::loadIFCCLASSIFICATION;
  m_Str2LoadFn["IFCCURVESTYLEFONTPATTERN"] = &SPFReader::loadIFCCURVESTYLEFONTPATTERN;
  m_Str2LoadFn["IFCDISTRIBUTIONCHAMBERELEMENT"] = &SPFReader::loadIFCDISTRIBUTIONCHAMBERELEMENT;
  m_Str2LoadFn["IFCENERGYCONVERSIONDEVICE"] = &SPFReader::loadIFCENERGYCONVERSIONDEVICE;
  m_Str2LoadFn["IFCSTRUCTURALPROFILEPROPERTIES"] = &SPFReader::loadIFCSTRUCTURALPROFILEPROPERTIES;
  m_Str2LoadFn["IFCPRODUCTSOFCOMBUSTIONPROPERTIES"] = &SPFReader::loadIFCPRODUCTSOFCOMBUSTIONPROPERTIES;
  m_Str2LoadFn["IFCPLATETYPE"] = &SPFReader::loadIFCPLATETYPE;
  m_Str2LoadFn["IFCTASK"] = &SPFReader::loadIFCTASK;
  m_Str2LoadFn["IFCTIMESERIESSCHEDULE"] = &SPFReader::loadIFCTIMESERIESSCHEDULE;
  m_Str2LoadFn["IFCPREDEFINEDTEXTFONT"] = &SPFReader::loadIFCPREDEFINEDTEXTFONT;
  m_Str2LoadFn["IFCVERTEX"] = &SPFReader::loadIFCVERTEX;
  m_Str2LoadFn["IFCCHAMFEREDGEFEATURE"] = &SPFReader::loadIFCCHAMFEREDGEFEATURE;
  m_Str2LoadFn["IFCCREWRESOURCE"] = &SPFReader::loadIFCCREWRESOURCE;
  m_Str2LoadFn["IFCDRAUGHTINGPREDEFINEDCOLOUR"] = &SPFReader::loadIFCDRAUGHTINGPREDEFINEDCOLOUR;
  m_Str2LoadFn["IFCDISCRETEACCESSORY"] = &SPFReader::loadIFCDISCRETEACCESSORY;
  m_Str2LoadFn["IFCTRANSPORTELEMENT"] = &SPFReader::loadIFCTRANSPORTELEMENT;
  m_Str2LoadFn["IFCDISTRIBUTIONELEMENT"] = &SPFReader::loadIFCDISTRIBUTIONELEMENT;
  m_Str2LoadFn["IFCFEATUREELEMENT"] = &SPFReader::loadIFCFEATUREELEMENT;
  m_Str2LoadFn["IFCCABLECARRIERFITTINGTYPE"] = &SPFReader::loadIFCCABLECARRIERFITTINGTYPE;
  m_Str2LoadFn["IFCPARAMETERIZEDPROFILEDEF"] = &SPFReader::loadIFCPARAMETERIZEDPROFILEDEF;
  m_Str2LoadFn["IFCRELVOIDSELEMENT"] = &SPFReader::loadIFCRELVOIDSELEMENT;
  m_Str2LoadFn["IFCCLOSEDSHELL"] = &SPFReader::loadIFCCLOSEDSHELL;
  m_Str2LoadFn["IFCRELSCHEDULESCOSTITEMS"] = &SPFReader::loadIFCRELSCHEDULESCOSTITEMS;
  m_Str2LoadFn["IFCRELSERVICESBUILDINGS"] = &SPFReader::loadIFCRELSERVICESBUILDINGS;
  m_Str2LoadFn["IFCRELDECOMPOSES"] = &SPFReader::loadIFCRELDECOMPOSES;
  m_Str2LoadFn["IFCSTRUCTURALPOINTCONNECTION"] = &SPFReader::loadIFCSTRUCTURALPOINTCONNECTION;
  m_Str2LoadFn["IFCPROPERTYSETDEFINITION"] = &SPFReader::loadIFCPROPERTYSETDEFINITION;
  m_Str2LoadFn["IFCDRAUGHTINGPREDEFINEDTEXTFONT"] = &SPFReader::loadIFCDRAUGHTINGPREDEFINEDTEXTFONT;
  m_Str2LoadFn["IFCDUCTSEGMENTTYPE"] = &SPFReader::loadIFCDUCTSEGMENTTYPE;
  m_Str2LoadFn["IFCCLASSIFICATIONNOTATIONFACET"] = &SPFReader::loadIFCCLASSIFICATIONNOTATIONFACET;
  m_Str2LoadFn["IFCFLOWINSTRUMENTTYPE"] = &SPFReader::loadIFCFLOWINSTRUMENTTYPE;
  m_Str2LoadFn["IFCRELASSIGNSTASKS"] = &SPFReader::loadIFCRELASSIGNSTASKS;
  m_Str2LoadFn["IFCSPACE"] = &SPFReader::loadIFCSPACE;
  m_Str2LoadFn["IFCELEMENTQUANTITY"] = &SPFReader::loadIFCELEMENTQUANTITY;
  m_Str2LoadFn["IFCTEXTSTYLETEXTMODEL"] = &SPFReader::loadIFCTEXTSTYLETEXTMODEL;
  m_Str2LoadFn["IFCRELOCCUPIESSPACES"] = &SPFReader::loadIFCRELOCCUPIESSPACES;
  m_Str2LoadFn["IFCTEXTSTYLE"] = &SPFReader::loadIFCTEXTSTYLE;
  m_Str2LoadFn["IFCSLIPPAGECONNECTIONCONDITION"] = &SPFReader::loadIFCSLIPPAGECONNECTIONCONDITION;
  m_Str2LoadFn["IFCSURFACEOFLINEAREXTRUSION"] = &SPFReader::loadIFCSURFACEOFLINEAREXTRUSION;
  m_Str2LoadFn["IFCBOUNDINGBOX"] = &SPFReader::loadIFCBOUNDINGBOX;
  m_Str2LoadFn["IFCROUNDEDEDGEFEATURE"] = &SPFReader::loadIFCROUNDEDEDGEFEATURE;
  m_Str2LoadFn["IFCDUCTSILENCERTYPE"] = &SPFReader::loadIFCDUCTSILENCERTYPE;
  m_Str2LoadFn["IFCDOORPANELPROPERTIES"] = &SPFReader::loadIFCDOORPANELPROPERTIES;
  m_Str2LoadFn["IFCMONETARYUNIT"] = &SPFReader::loadIFCMONETARYUNIT;
  m_Str2LoadFn["IFCWALLTYPE"] = &SPFReader::loadIFCWALLTYPE;
  m_Str2LoadFn["IFCCIRCLEPROFILEDEF"] = &SPFReader::loadIFCCIRCLEPROFILEDEF;
  m_Str2LoadFn["IFCSANITARYTERMINALTYPE"] = &SPFReader::loadIFCSANITARYTERMINALTYPE;
  m_Str2LoadFn["IFCCOMPLEXPROPERTY"] = &SPFReader::loadIFCCOMPLEXPROPERTY;
  m_Str2LoadFn["IFCELECTRICAPPLIANCETYPE"] = &SPFReader::loadIFCELECTRICAPPLIANCETYPE;
  m_Str2LoadFn["IFCOFFSETCURVE2D"] = &SPFReader::loadIFCOFFSETCURVE2D;
  m_Str2LoadFn["IFCFIRESUPPRESSIONTERMINALTYPE"] = &SPFReader::loadIFCFIRESUPPRESSIONTERMINALTYPE;
  m_Str2LoadFn["IFCSTRUCTURALLOADSINGLEFORCE"] = &SPFReader::loadIFCSTRUCTURALLOADSINGLEFORCE;
  m_Str2LoadFn["IFCCOLUMN"] = &SPFReader::loadIFCCOLUMN;
  m_Str2LoadFn["IFCBUILDINGELEMENTTYPE"] = &SPFReader::loadIFCBUILDINGELEMENTTYPE;
  m_Str2LoadFn["IFCTRANSPORTELEMENTTYPE"] = &SPFReader::loadIFCTRANSPORTELEMENTTYPE;
  m_Str2LoadFn["IFCSTRUCTURALLINEARACTION"] = &SPFReader::loadIFCSTRUCTURALLINEARACTION;
  m_Str2LoadFn["IFCBLOCK"] = &SPFReader::loadIFCBLOCK;
  m_Str2LoadFn["IFCPREDEFINEDITEM"] = &SPFReader::loadIFCPREDEFINEDITEM;
  m_Str2LoadFn["IFCMAPPEDITEM"] = &SPFReader::loadIFCMAPPEDITEM;
  m_Str2LoadFn["IFCEQUIPMENTELEMENT"] = &SPFReader::loadIFCEQUIPMENTELEMENT;
  m_Str2LoadFn["IFCFILTERTYPE"] = &SPFReader::loadIFCFILTERTYPE;
  m_Str2LoadFn["IFCRELCONNECTSWITHECCENTRICITY"] = &SPFReader::loadIFCRELCONNECTSWITHECCENTRICITY;
  m_Str2LoadFn["IFCAXIS2PLACEMENT3D"] = &SPFReader::loadIFCAXIS2PLACEMENT3D;
  m_Str2LoadFn["IFCREINFORCINGMESH"] = &SPFReader::loadIFCREINFORCINGMESH;
  m_Str2LoadFn["IFCDIRECTION"] = &SPFReader::loadIFCDIRECTION;
  m_Str2LoadFn["IFCFLOWCONTROLLER"] = &SPFReader::loadIFCFLOWCONTROLLER;
  m_Str2LoadFn["IFCFILLAREASTYLEHATCHING"] = &SPFReader::loadIFCFILLAREASTYLEHATCHING;
  m_Str2LoadFn["IFCLIGHTSOURCEGONIOMETRIC"] = &SPFReader::loadIFCLIGHTSOURCEGONIOMETRIC;
  m_Str2LoadFn["IFCCURTAINWALL"] = &SPFReader::loadIFCCURTAINWALL;
  m_Str2LoadFn["IFCPROPERTYENUMERATEDVALUE"] = &SPFReader::loadIFCPROPERTYENUMERATEDVALUE;
  m_Str2LoadFn["IFCONEDIRECTIONREPEATFACTOR"] = &SPFReader::loadIFCONEDIRECTIONREPEATFACTOR;
  m_Str2LoadFn["IFCANNOTATIONOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONOCCURRENCE;
  m_Str2LoadFn["IFCPREDEFINEDDIMENSIONSYMBOL"] = &SPFReader::loadIFCPREDEFINEDDIMENSIONSYMBOL;
  m_Str2LoadFn["IFCEDGELOOP"] = &SPFReader::loadIFCEDGELOOP;
  m_Str2LoadFn["IFCWATERPROPERTIES"] = &SPFReader::loadIFCWATERPROPERTIES;
  m_Str2LoadFn["IFCCONSTRAINTCLASSIFICATIONRELATIONSHIP"] = &SPFReader::loadIFCCONSTRAINTCLASSIFICATIONRELATIONSHIP;
  m_Str2LoadFn["IFCOWNERHISTORY"] = &SPFReader::loadIFCOWNERHISTORY;
  m_Str2LoadFn["IFCFILLAREASTYLE"] = &SPFReader::loadIFCFILLAREASTYLE;
  m_Str2LoadFn["IFCDERIVEDPROFILEDEF"] = &SPFReader::loadIFCDERIVEDPROFILEDEF;
  m_Str2LoadFn["IFCSLABTYPE"] = &SPFReader::loadIFCSLABTYPE;
  m_Str2LoadFn["IFCGASTERMINALTYPE"] = &SPFReader::loadIFCGASTERMINALTYPE;
  m_Str2LoadFn["IFCSTYLEDREPRESENTATION"] = &SPFReader::loadIFCSTYLEDREPRESENTATION;
  m_Str2LoadFn["IFCRELINTERACTIONREQUIREMENTS"] = &SPFReader::loadIFCRELINTERACTIONREQUIREMENTS;
  m_Str2LoadFn["IFCVALVETYPE"] = &SPFReader::loadIFCVALVETYPE;
  m_Str2LoadFn["IFCPROPERTY"] = &SPFReader::loadIFCPROPERTY;
  m_Str2LoadFn["IFCELEMENT"] = &SPFReader::loadIFCELEMENT;
  m_Str2LoadFn["IFCELEMENTASSEMBLY"] = &SPFReader::loadIFCELEMENTASSEMBLY;
  m_Str2LoadFn["IFCDUCTFITTINGTYPE"] = &SPFReader::loadIFCDUCTFITTINGTYPE;
  m_Str2LoadFn["IFCSTRUCTURALPLANARACTION"] = &SPFReader::loadIFCSTRUCTURALPLANARACTION;
  m_Str2LoadFn["IFCDEFINEDSYMBOL"] = &SPFReader::loadIFCDEFINEDSYMBOL;
  m_Str2LoadFn["IFCRELASSOCIATES"] = &SPFReader::loadIFCRELASSOCIATES;
  m_Str2LoadFn["IFCRELASSIGNSTOCONTROL"] = &SPFReader::loadIFCRELASSIGNSTOCONTROL;
  m_Str2LoadFn["IFCFACESURFACE"] = &SPFReader::loadIFCFACESURFACE;
  m_Str2LoadFn["IFCORDERACTION"] = &SPFReader::loadIFCORDERACTION;
  m_Str2LoadFn["IFCFLOWCONTROLLERTYPE"] = &SPFReader::loadIFCFLOWCONTROLLERTYPE;
  m_Str2LoadFn["IFCRELASSIGNSTOACTOR"] = &SPFReader::loadIFCRELASSIGNSTOACTOR;
  m_Str2LoadFn["IFCANNOTATIONSURFACEOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONSURFACEOCCURRENCE;
  m_Str2LoadFn["IFCENVIRONMENTALIMPACTVALUE"] = &SPFReader::loadIFCENVIRONMENTALIMPACTVALUE;
  m_Str2LoadFn["IFCDOCUMENTREFERENCE"] = &SPFReader::loadIFCDOCUMENTREFERENCE;
  m_Str2LoadFn["IFCBOILERTYPE"] = &SPFReader::loadIFCBOILERTYPE;
  m_Str2LoadFn["IFCMATERIALDEFINITIONREPRESENTATION"] = &SPFReader::loadIFCMATERIALDEFINITIONREPRESENTATION;
  m_Str2LoadFn["IFCELECTRICALBASEPROPERTIES"] = &SPFReader::loadIFCELECTRICALBASEPROPERTIES;
  m_Str2LoadFn["IFCBOUNDEDSURFACE"] = &SPFReader::loadIFCBOUNDEDSURFACE;
  m_Str2LoadFn["IFCAIRTOAIRHEATRECOVERYTYPE"] = &SPFReader::loadIFCAIRTOAIRHEATRECOVERYTYPE;
  m_Str2LoadFn["IFCRELCOVERSSPACES"] = &SPFReader::loadIFCRELCOVERSSPACES;
  m_Str2LoadFn["IFCRELCONNECTSSTRUCTURALMEMBER"] = &SPFReader::loadIFCRELCONNECTSSTRUCTURALMEMBER;
  m_Str2LoadFn["IFCSPATIALSTRUCTUREELEMENT"] = &SPFReader::loadIFCSPATIALSTRUCTUREELEMENT;
  m_Str2LoadFn["IFCCSGSOLID"] = &SPFReader::loadIFCCSGSOLID;
  m_Str2LoadFn["IFCSYMBOLSTYLE"] = &SPFReader::loadIFCSYMBOLSTYLE;
  m_Str2LoadFn["IFCPIPESEGMENTTYPE"] = &SPFReader::loadIFCPIPESEGMENTTYPE;
  m_Str2LoadFn["IFCTIMESERIESREFERENCERELATIONSHIP"] = &SPFReader::loadIFCTIMESERIESREFERENCERELATIONSHIP;
  m_Str2LoadFn["IFCPHYSICALSIMPLEQUANTITY"] = &SPFReader::loadIFCPHYSICALSIMPLEQUANTITY;
  m_Str2LoadFn["IFCSTRUCTURALCURVEMEMBER"] = &SPFReader::loadIFCSTRUCTURALCURVEMEMBER;
  m_Str2LoadFn["IFCDOCUMENTINFORMATIONRELATIONSHIP"] = &SPFReader::loadIFCDOCUMENTINFORMATIONRELATIONSHIP;
  m_Str2LoadFn["IFCSOUNDPROPERTIES"] = &SPFReader::loadIFCSOUNDPROPERTIES;
  m_Str2LoadFn["IFCCOSTVALUE"] = &SPFReader::loadIFCCOSTVALUE;
  m_Str2LoadFn["IFCSURFACE"] = &SPFReader::loadIFCSURFACE;
  m_Str2LoadFn["IFCRELSPACEBOUNDARY"] = &SPFReader::loadIFCRELSPACEBOUNDARY;
  m_Str2LoadFn["IFCAXIS1PLACEMENT"] = &SPFReader::loadIFCAXIS1PLACEMENT;
  m_Str2LoadFn["IFCLAMPTYPE"] = &SPFReader::loadIFCLAMPTYPE;
  m_Str2LoadFn["IFCDISTRIBUTIONCHAMBERELEMENTTYPE"] = &SPFReader::loadIFCDISTRIBUTIONCHAMBERELEMENTTYPE;
  m_Str2LoadFn["IFCDISCRETEACCESSORYTYPE"] = &SPFReader::loadIFCDISCRETEACCESSORYTYPE;
  m_Str2LoadFn["IFCDISTRIBUTIONELEMENTTYPE"] = &SPFReader::loadIFCDISTRIBUTIONELEMENTTYPE;
  m_Str2LoadFn["IFCUNITARYEQUIPMENTTYPE"] = &SPFReader::loadIFCUNITARYEQUIPMENTTYPE;
  m_Str2LoadFn["IFCSTRUCTURALMEMBER"] = &SPFReader::loadIFCSTRUCTURALMEMBER;
  m_Str2LoadFn["IFCPROJECTORDER"] = &SPFReader::loadIFCPROJECTORDER;
  m_Str2LoadFn["IFCPOSTALADDRESS"] = &SPFReader::loadIFCPOSTALADDRESS;
  m_Str2LoadFn["IFCTSHAPEPROFILEDEF"] = &SPFReader::loadIFCTSHAPEPROFILEDEF;
  m_Str2LoadFn["IFCMANIFOLDSOLIDBREP"] = &SPFReader::loadIFCMANIFOLDSOLIDBREP;
  m_Str2LoadFn["IFCCOSTITEM"] = &SPFReader::loadIFCCOSTITEM;
  m_Str2LoadFn["IFCPHYSICALCOMPLEXQUANTITY"] = &SPFReader::loadIFCPHYSICALCOMPLEXQUANTITY;
  m_Str2LoadFn["IFCWINDOWSTYLE"] = &SPFReader::loadIFCWINDOWSTYLE;
  m_Str2LoadFn["IFCLIGHTSOURCEPOSITIONAL"] = &SPFReader::loadIFCLIGHTSOURCEPOSITIONAL;
  m_Str2LoadFn["IFCDOCUMENTINFORMATION"] = &SPFReader::loadIFCDOCUMENTINFORMATION;
  m_Str2LoadFn["IFCLABORRESOURCE"] = &SPFReader::loadIFCLABORRESOURCE;
  m_Str2LoadFn["IFCGRIDAXIS"] = &SPFReader::loadIFCGRIDAXIS;
  m_Str2LoadFn["IFCCOLOURSPECIFICATION"] = &SPFReader::loadIFCCOLOURSPECIFICATION;
  m_Str2LoadFn["IFCEVAPORATORTYPE"] = &SPFReader::loadIFCEVAPORATORTYPE;
  m_Str2LoadFn["IFCCABLECARRIERSEGMENTTYPE"] = &SPFReader::loadIFCCABLECARRIERSEGMENTTYPE;
  m_Str2LoadFn["IFCRELASSOCIATESAPPROVAL"] = &SPFReader::loadIFCRELASSOCIATESAPPROVAL;
  m_Str2LoadFn["IFCSPACEHEATERTYPE"] = &SPFReader::loadIFCSPACEHEATERTYPE;
  m_Str2LoadFn["IFCFACEBASEDSURFACEMODEL"] = &SPFReader::loadIFCFACEBASEDSURFACEMODEL;
  m_Str2LoadFn["IFCCIRCLEHOLLOWPROFILEDEF"] = &SPFReader::loadIFCCIRCLEHOLLOWPROFILEDEF;
  m_Str2LoadFn["IFCCOMPRESSORTYPE"] = &SPFReader::loadIFCCOMPRESSORTYPE;
  m_Str2LoadFn["IFCFACE"] = &SPFReader::loadIFCFACE;
  m_Str2LoadFn["IFCSIMPLEPROPERTY"] = &SPFReader::loadIFCSIMPLEPROPERTY;
  m_Str2LoadFn["IFCADDRESS"] = &SPFReader::loadIFCADDRESS;
  m_Str2LoadFn["IFCFASTENERTYPE"] = &SPFReader::loadIFCFASTENERTYPE;
  m_Str2LoadFn["IFCMOTORCONNECTIONTYPE"] = &SPFReader::loadIFCMOTORCONNECTIONTYPE;
  m_Str2LoadFn["IFCREGULARTIMESERIES"] = &SPFReader::loadIFCREGULARTIMESERIES;
  m_Str2LoadFn["IFCDISTRIBUTIONCONTROLELEMENTTYPE"] = &SPFReader::loadIFCDISTRIBUTIONCONTROLELEMENTTYPE;
  m_Str2LoadFn["IFCDIMENSIONCALLOUTRELATIONSHIP"] = &SPFReader::loadIFCDIMENSIONCALLOUTRELATIONSHIP;
  m_Str2LoadFn["IFCREPRESENTATIONITEM"] = &SPFReader::loadIFCREPRESENTATIONITEM;
  m_Str2LoadFn["IFCRELCONNECTS"] = &SPFReader::loadIFCRELCONNECTS;
  m_Str2LoadFn["IFCRECTANGULARPYRAMID"] = &SPFReader::loadIFCRECTANGULARPYRAMID;
  m_Str2LoadFn["IFCSURFACEOFREVOLUTION"] = &SPFReader::loadIFCSURFACEOFREVOLUTION;
  m_Str2LoadFn["IFCRAILING"] = &SPFReader::loadIFCRAILING;
  m_Str2LoadFn["IFCLIGHTSOURCEDIRECTIONAL"] = &SPFReader::loadIFCLIGHTSOURCEDIRECTIONAL;
  m_Str2LoadFn["IFCSTRUCTURALCURVECONNECTION"] = &SPFReader::loadIFCSTRUCTURALCURVECONNECTION;
  m_Str2LoadFn["IFCTABLE"] = &SPFReader::loadIFCTABLE;
  m_Str2LoadFn["IFCPROPERTYSET"] = &SPFReader::loadIFCPROPERTYSET;
  m_Str2LoadFn["IFCTOPOLOGYREPRESENTATION"] = &SPFReader::loadIFCTOPOLOGYREPRESENTATION;
  m_Str2LoadFn["IFCCIRCLE"] = &SPFReader::loadIFCCIRCLE;
  m_Str2LoadFn["IFCDISTRIBUTIONPORT"] = &SPFReader::loadIFCDISTRIBUTIONPORT;
  m_Str2LoadFn["IFCEQUIPMENTSTANDARD"] = &SPFReader::loadIFCEQUIPMENTSTANDARD;
  m_Str2LoadFn["IFCACTUATORTYPE"] = &SPFReader::loadIFCACTUATORTYPE;
  m_Str2LoadFn["IFCFLOWMOVINGDEVICETYPE"] = &SPFReader::loadIFCFLOWMOVINGDEVICETYPE;
  m_Str2LoadFn["IFCAIRTERMINALBOXTYPE"] = &SPFReader::loadIFCAIRTERMINALBOXTYPE;
  m_Str2LoadFn["IFCSERVICELIFEFACTOR"] = &SPFReader::loadIFCSERVICELIFEFACTOR;
  m_Str2LoadFn["IFCREINFORCINGELEMENT"] = &SPFReader::loadIFCREINFORCINGELEMENT;
  m_Str2LoadFn["IFCCONSTRUCTIONPRODUCTRESOURCE"] = &SPFReader::loadIFCCONSTRUCTIONPRODUCTRESOURCE;
  m_Str2LoadFn["IFCTERMINATORSYMBOL"] = &SPFReader::loadIFCTERMINATORSYMBOL;
  m_Str2LoadFn["IFCFLOWFITTINGTYPE"] = &SPFReader::loadIFCFLOWFITTINGTYPE;
  m_Str2LoadFn["IFC2DCOMPOSITECURVE"] = &SPFReader::loadIFC2DCOMPOSITECURVE;
  m_Str2LoadFn["IFCMEMBER"] = &SPFReader::loadIFCMEMBER;
  m_Str2LoadFn["IFCPOLYLOOP"] = &SPFReader::loadIFCPOLYLOOP;
  m_Str2LoadFn["IFCSITE"] = &SPFReader::loadIFCSITE;
  m_Str2LoadFn["IFCMEMBERTYPE"] = &SPFReader::loadIFCMEMBERTYPE;
  m_Str2LoadFn["IFCSTRUCTURALLOADLINEARFORCE"] = &SPFReader::loadIFCSTRUCTURALLOADLINEARFORCE;
  m_Str2LoadFn["IFCCLASSIFICATIONITEMRELATIONSHIP"] = &SPFReader::loadIFCCLASSIFICATIONITEMRELATIONSHIP;
  m_Str2LoadFn["IFCAPPROVALACTORRELATIONSHIP"] = &SPFReader::loadIFCAPPROVALACTORRELATIONSHIP;
  m_Str2LoadFn["IFCFAILURECONNECTIONCONDITION"] = &SPFReader::loadIFCFAILURECONNECTIONCONDITION;
  m_Str2LoadFn["IFCBOUNDARYNODECONDITION"] = &SPFReader::loadIFCBOUNDARYNODECONDITION;
  m_Str2LoadFn["IFCTEXTSTYLEWITHBOXCHARACTERISTICS"] = &SPFReader::loadIFCTEXTSTYLEWITHBOXCHARACTERISTICS;
  m_Str2LoadFn["IFCAIRTERMINALTYPE"] = &SPFReader::loadIFCAIRTERMINALTYPE;
  m_Str2LoadFn["IFCPIPEFITTINGTYPE"] = &SPFReader::loadIFCPIPEFITTINGTYPE;
  m_Str2LoadFn["IFCVIRTUALELEMENT"] = &SPFReader::loadIFCVIRTUALELEMENT;
  m_Str2LoadFn["IFCANNOTATIONFILLAREA"] = &SPFReader::loadIFCANNOTATIONFILLAREA;
  m_Str2LoadFn["IFCVERTEXLOOP"] = &SPFReader::loadIFCVERTEXLOOP;
  m_Str2LoadFn["IFCSIUNIT"] = &SPFReader::loadIFCSIUNIT;
  m_Str2LoadFn["IFCGEOMETRICCURVESET"] = &SPFReader::loadIFCGEOMETRICCURVESET;
  m_Str2LoadFn["IFCACTORROLE"] = &SPFReader::loadIFCACTORROLE;
  m_Str2LoadFn["IFCRELDEFINESBYPROPERTIES"] = &SPFReader::loadIFCRELDEFINESBYPROPERTIES;
  m_Str2LoadFn["IFCBUILDINGELEMENT"] = &SPFReader::loadIFCBUILDINGELEMENT;
  m_Str2LoadFn["IFCMATERIALLAYERSET"] = &SPFReader::loadIFCMATERIALLAYERSET;
  m_Str2LoadFn["IFCSTRUCTURALCONNECTION"] = &SPFReader::loadIFCSTRUCTURALCONNECTION;
  m_Str2LoadFn["IFCRECTANGLEPROFILEDEF"] = &SPFReader::loadIFCRECTANGLEPROFILEDEF;
  m_Str2LoadFn["IFCTEXTLITERALWITHEXTENT"] = &SPFReader::loadIFCTEXTLITERALWITHEXTENT;
  m_Str2LoadFn["IFCWORKCONTROL"] = &SPFReader::loadIFCWORKCONTROL;
  m_Str2LoadFn["IFCHUMIDIFIERTYPE"] = &SPFReader::loadIFCHUMIDIFIERTYPE;
  m_Str2LoadFn["IFCBOOLEANCLIPPINGRESULT"] = &SPFReader::loadIFCBOOLEANCLIPPINGRESULT;
  m_Str2LoadFn["IFCRELSEQUENCE"] = &SPFReader::loadIFCRELSEQUENCE;
  m_Str2LoadFn["IFCQUANTITYWEIGHT"] = &SPFReader::loadIFCQUANTITYWEIGHT;
  m_Str2LoadFn["IFCBOUNDARYNODECONDITIONWARPING"] = &SPFReader::loadIFCBOUNDARYNODECONDITIONWARPING;
  m_Str2LoadFn["IFCSCHEDULETIMECONTROL"] = &SPFReader::loadIFCSCHEDULETIMECONTROL;
  m_Str2LoadFn["IFCBEAMTYPE"] = &SPFReader::loadIFCBEAMTYPE;
  m_Str2LoadFn["IFCOBJECTPLACEMENT"] = &SPFReader::loadIFCOBJECTPLACEMENT;
  m_Str2LoadFn["IFCPROTECTIVEDEVICETYPE"] = &SPFReader::loadIFCPROTECTIVEDEVICETYPE;
  m_Str2LoadFn["IFCCURRENCYRELATIONSHIP"] = &SPFReader::loadIFCCURRENCYRELATIONSHIP;
  m_Str2LoadFn["IFCSOLIDMODEL"] = &SPFReader::loadIFCSOLIDMODEL;
  m_Str2LoadFn["IFCRELASSIGNSTOPROCESS"] = &SPFReader::loadIFCRELASSIGNSTOPROCESS;
  m_Str2LoadFn["IFCROUNDEDRECTANGLEPROFILEDEF"] = &SPFReader::loadIFCROUNDEDRECTANGLEPROFILEDEF;
  m_Str2LoadFn["IFCQUANTITYTIME"] = &SPFReader::loadIFCQUANTITYTIME;
  m_Str2LoadFn["IFCSTRUCTURALSURFACEMEMBERVARYING"] = &SPFReader::loadIFCSTRUCTURALSURFACEMEMBERVARYING;
  m_Str2LoadFn["IFCPERFORMANCEHISTORY"] = &SPFReader::loadIFCPERFORMANCEHISTORY;
  m_Str2LoadFn["IFCWINDOWLININGPROPERTIES"] = &SPFReader::loadIFCWINDOWLININGPROPERTIES;
  m_Str2LoadFn["IFCRELASSOCIATESLIBRARY"] = &SPFReader::loadIFCRELASSOCIATESLIBRARY;
  m_Str2LoadFn["IFCCOMPOSITEPROFILEDEF"] = &SPFReader::loadIFCCOMPOSITEPROFILEDEF;
  m_Str2LoadFn["IFCEDGEFEATURE"] = &SPFReader::loadIFCEDGEFEATURE;
  m_Str2LoadFn["IFCFLOWTREATMENTDEVICETYPE"] = &SPFReader::loadIFCFLOWTREATMENTDEVICETYPE;
  m_Str2LoadFn["IFCCONNECTIONSURFACEGEOMETRY"] = &SPFReader::loadIFCCONNECTIONSURFACEGEOMETRY;
  m_Str2LoadFn["IFCPROPERTYLISTVALUE"] = &SPFReader::loadIFCPROPERTYLISTVALUE;
  m_Str2LoadFn["IFCPROPERTYCONSTRAINTRELATIONSHIP"] = &SPFReader::loadIFCPROPERTYCONSTRAINTRELATIONSHIP;
  m_Str2LoadFn["IFCLIGHTDISTRIBUTIONDATA"] = &SPFReader::loadIFCLIGHTDISTRIBUTIONDATA;
  m_Str2LoadFn["IFCSHAPEASPECT"] = &SPFReader::loadIFCSHAPEASPECT;
  m_Str2LoadFn["IFCLINE"] = &SPFReader::loadIFCLINE;
  m_Str2LoadFn["IFCTOPOLOGICALREPRESENTATIONITEM"] = &SPFReader::loadIFCTOPOLOGICALREPRESENTATIONITEM;
  m_Str2LoadFn["IFCCOMPOSITECURVESEGMENT"] = &SPFReader::loadIFCCOMPOSITECURVESEGMENT;
  m_Str2LoadFn["IFCRELASSOCIATESDOCUMENT"] = &SPFReader::loadIFCRELASSOCIATESDOCUMENT;
  m_Str2LoadFn["IFCSTRUCTURALITEM"] = &SPFReader::loadIFCSTRUCTURALITEM;
  m_Str2LoadFn["IFCORGANIZATION"] = &SPFReader::loadIFCORGANIZATION;
  m_Str2LoadFn["IFCCURVESTYLEFONT"] = &SPFReader::loadIFCCURVESTYLEFONT;
  m_Str2LoadFn["IFCCONTROLLERTYPE"] = &SPFReader::loadIFCCONTROLLERTYPE;
  m_Str2LoadFn["IFCFANTYPE"] = &SPFReader::loadIFCFANTYPE;
  m_Str2LoadFn["IFCTWODIRECTIONREPEATFACTOR"] = &SPFReader::loadIFCTWODIRECTIONREPEATFACTOR;
  m_Str2LoadFn["IFCSENSORTYPE"] = &SPFReader::loadIFCSENSORTYPE;
  m_Str2LoadFn["IFCBUILDINGELEMENTPROXYTYPE"] = &SPFReader::loadIFCBUILDINGELEMENTPROXYTYPE;
  m_Str2LoadFn["IFCTELECOMADDRESS"] = &SPFReader::loadIFCTELECOMADDRESS;
  m_Str2LoadFn["IFCDOORLININGPROPERTIES"] = &SPFReader::loadIFCDOORLININGPROPERTIES;
  m_Str2LoadFn["IFCOBJECT"] = &SPFReader::loadIFCOBJECT;
  m_Str2LoadFn["IFCRELCONTAINEDINSPATIALSTRUCTURE"] = &SPFReader::loadIFCRELCONTAINEDINSPATIALSTRUCTURE;
  m_Str2LoadFn["IFCFLUIDFLOWPROPERTIES"] = &SPFReader::loadIFCFLUIDFLOWPROPERTIES;
  m_Str2LoadFn["IFCCABLESEGMENTTYPE"] = &SPFReader::loadIFCCABLESEGMENTTYPE;
  m_Str2LoadFn["IFCACTIONREQUEST"] = &SPFReader::loadIFCACTIONREQUEST;
  m_Str2LoadFn["IFCSTRUCTURALSURFACEMEMBER"] = &SPFReader::loadIFCSTRUCTURALSURFACEMEMBER;
  m_Str2LoadFn["IFCRELASSOCIATESMATERIAL"] = &SPFReader::loadIFCRELASSOCIATESMATERIAL;
  m_Str2LoadFn["IFCCSHAPEPROFILEDEF"] = &SPFReader::loadIFCCSHAPEPROFILEDEF;
  m_Str2LoadFn["IFCEDGECURVE"] = &SPFReader::loadIFCEDGECURVE;
  m_Str2LoadFn["IFCCONNECTIONCURVEGEOMETRY"] = &SPFReader::loadIFCCONNECTIONCURVEGEOMETRY;
  m_Str2LoadFn["IFCELECTRICMOTORTYPE"] = &SPFReader::loadIFCELECTRICMOTORTYPE;
  m_Str2LoadFn["IFCTIMESERIESVALUE"] = &SPFReader::loadIFCTIMESERIESVALUE;
  m_Str2LoadFn["IFCDRAUGHTINGCALLOUT"] = &SPFReader::loadIFCDRAUGHTINGCALLOUT;
  m_Str2LoadFn["IFCELECTRICALCIRCUIT"] = &SPFReader::loadIFCELECTRICALCIRCUIT;
  m_Str2LoadFn["IFCSURFACESTYLEWITHTEXTURES"] = &SPFReader::loadIFCSURFACESTYLEWITHTEXTURES;
  m_Str2LoadFn["IFCFLOWTERMINAL"] = &SPFReader::loadIFCFLOWTERMINAL;
  m_Str2LoadFn["IFCSURFACESTYLERENDERING"] = &SPFReader::loadIFCSURFACESTYLERENDERING;
  m_Str2LoadFn["IFCRELCONNECTSPATHELEMENTS"] = &SPFReader::loadIFCRELCONNECTSPATHELEMENTS;
  m_Str2LoadFn["IFCUSHAPEPROFILEDEF"] = &SPFReader::loadIFCUSHAPEPROFILEDEF;
  m_Str2LoadFn["IFCOPENINGELEMENT"] = &SPFReader::loadIFCOPENINGELEMENT;
  m_Str2LoadFn["IFCTEXTURECOORDINATE"] = &SPFReader::loadIFCTEXTURECOORDINATE;
  m_Str2LoadFn["IFCCONNECTIONPORTGEOMETRY"] = &SPFReader::loadIFCCONNECTIONPORTGEOMETRY;
  m_Str2LoadFn["IFCBUILDINGSTOREY"] = &SPFReader::loadIFCBUILDINGSTOREY;
  m_Str2LoadFn["IFCRELCONNECTSSTRUCTURALACTIVITY"] = &SPFReader::loadIFCRELCONNECTSSTRUCTURALACTIVITY;
  m_Str2LoadFn["IFCEXTERNALLYDEFINEDSYMBOL"] = &SPFReader::loadIFCEXTERNALLYDEFINEDSYMBOL;
  m_Str2LoadFn["IFCQUANTITYLENGTH"] = &SPFReader::loadIFCQUANTITYLENGTH;
  m_Str2LoadFn["IFCQUANTITYAREA"] = &SPFReader::loadIFCQUANTITYAREA;
  m_Str2LoadFn["IFCPREDEFINEDPOINTMARKERSYMBOL"] = &SPFReader::loadIFCPREDEFINEDPOINTMARKERSYMBOL;
  m_Str2LoadFn["IFCPHYSICALQUANTITY"] = &SPFReader::loadIFCPHYSICALQUANTITY;
  m_Str2LoadFn["IFCLIGHTSOURCEAMBIENT"] = &SPFReader::loadIFCLIGHTSOURCEAMBIENT;
  m_Str2LoadFn["IFCFLOWMETERTYPE"] = &SPFReader::loadIFCFLOWMETERTYPE;
  m_Str2LoadFn["IFCSECTIONPROPERTIES"] = &SPFReader::loadIFCSECTIONPROPERTIES;
  m_Str2LoadFn["IFCRAMPFLIGHTTYPE"] = &SPFReader::loadIFCRAMPFLIGHTTYPE;
  m_Str2LoadFn["IFCLOCALPLACEMENT"] = &SPFReader::loadIFCLOCALPLACEMENT;
  m_Str2LoadFn["IFCRELDEFINES"] = &SPFReader::loadIFCRELDEFINES;
  m_Str2LoadFn["IFCCURVEBOUNDEDPLANE"] = &SPFReader::loadIFCCURVEBOUNDEDPLANE;
  m_Str2LoadFn["IFCBOUNDARYFACECONDITION"] = &SPFReader::loadIFCBOUNDARYFACECONDITION;
  m_Str2LoadFn["IFCINVENTORY"] = &SPFReader::loadIFCINVENTORY;
  m_Str2LoadFn["IFCWINDOWPANELPROPERTIES"] = &SPFReader::loadIFCWINDOWPANELPROPERTIES;
  m_Str2LoadFn["IFCCONDITION"] = &SPFReader::loadIFCCONDITION;
  m_Str2LoadFn["IFCREPRESENTATIONMAP"] = &SPFReader::loadIFCREPRESENTATIONMAP;
  m_Str2LoadFn["IFCBUILDING"] = &SPFReader::loadIFCBUILDING;
  m_Str2LoadFn["IFCCONVERSIONBASEDUNIT"] = &SPFReader::loadIFCCONVERSIONBASEDUNIT;
  m_Str2LoadFn["IFCJUNCTIONBOXTYPE"] = &SPFReader::loadIFCJUNCTIONBOXTYPE;
  m_Str2LoadFn["IFCSPACETHERMALLOADPROPERTIES"] = &SPFReader::loadIFCSPACETHERMALLOADPROPERTIES;
  m_Str2LoadFn["IFCPREDEFINEDCURVEFONT"] = &SPFReader::loadIFCPREDEFINEDCURVEFONT;
  m_Str2LoadFn["IFCEXTERNALLYDEFINEDTEXTFONT"] = &SPFReader::loadIFCEXTERNALLYDEFINEDTEXTFONT;
  m_Str2LoadFn["IFCPRESENTATIONLAYERWITHSTYLE"] = &SPFReader::loadIFCPRESENTATIONLAYERWITHSTYLE;
  m_Str2LoadFn["IFCCONNECTIONGEOMETRY"] = &SPFReader::loadIFCCONNECTIONGEOMETRY;
  m_Str2LoadFn["IFCVERTEXBASEDTEXTUREMAP"] = &SPFReader::loadIFCVERTEXBASEDTEXTUREMAP;
  m_Str2LoadFn["IFCREINFORCINGBAR"] = &SPFReader::loadIFCREINFORCINGBAR;
  m_Str2LoadFn["IFCELECTRICTIMECONTROLTYPE"] = &SPFReader::loadIFCELECTRICTIMECONTROLTYPE;
  m_Str2LoadFn["IFCFILLAREASTYLETILESYMBOLWITHSTYLE"] = &SPFReader::loadIFCFILLAREASTYLETILESYMBOLWITHSTYLE;
  m_Str2LoadFn["IFCSTRUCTURALACTION"] = &SPFReader::loadIFCSTRUCTURALACTION;
  m_Str2LoadFn["IFCPROPERTYTABLEVALUE"] = &SPFReader::loadIFCPROPERTYTABLEVALUE;
  m_Str2LoadFn["IFCRELCONNECTSELEMENTS"] = &SPFReader::loadIFCRELCONNECTSELEMENTS;
  m_Str2LoadFn["IFCCONTEXTDEPENDENTUNIT"] = &SPFReader::loadIFCCONTEXTDEPENDENTUNIT;
  m_Str2LoadFn["IFCISHAPEPROFILEDEF"] = &SPFReader::loadIFCISHAPEPROFILEDEF;
  m_Str2LoadFn["IFCCURVE"] = &SPFReader::loadIFCCURVE;
  m_Str2LoadFn["IFCTENDONANCHOR"] = &SPFReader::loadIFCTENDONANCHOR;
  m_Str2LoadFn["IFCMECHANICALFASTENER"] = &SPFReader::loadIFCMECHANICALFASTENER;
  m_Str2LoadFn["IFCANNOTATIONCURVEOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONCURVEOCCURRENCE;
  m_Str2LoadFn["IFCSTRUCTURALPOINTREACTION"] = &SPFReader::loadIFCSTRUCTURALPOINTREACTION;
  m_Str2LoadFn["IFCSECTIONREINFORCEMENTPROPERTIES"] = &SPFReader::loadIFCSECTIONREINFORCEMENTPROPERTIES;
  m_Str2LoadFn["IFCBUILDINGELEMENTPROXY"] = &SPFReader::loadIFCBUILDINGELEMENTPROXY;
  m_Str2LoadFn["IFCTEXTLITERAL"] = &SPFReader::loadIFCTEXTLITERAL;
  m_Str2LoadFn["IFCPOINTONCURVE"] = &SPFReader::loadIFCPOINTONCURVE;
  m_Str2LoadFn["IFCAPPROVAL"] = &SPFReader::loadIFCAPPROVAL;
  m_Str2LoadFn["IFCSTRUCTURALLOADSINGLEFORCEWARPING"] = &SPFReader::loadIFCSTRUCTURALLOADSINGLEFORCEWARPING;
  m_Str2LoadFn["IFCLINEARDIMENSION"] = &SPFReader::loadIFCLINEARDIMENSION;
  m_Str2LoadFn["IFCSERVICELIFE"] = &SPFReader::loadIFCSERVICELIFE;
  m_Str2LoadFn["IFCELECTRICGENERATORTYPE"] = &SPFReader::loadIFCELECTRICGENERATORTYPE;
  m_Str2LoadFn["IFCCOOLINGTOWERTYPE"] = &SPFReader::loadIFCCOOLINGTOWERTYPE;
  m_Str2LoadFn["IFCPREDEFINEDSYMBOL"] = &SPFReader::loadIFCPREDEFINEDSYMBOL;
  m_Str2LoadFn["IFCSLAB"] = &SPFReader::loadIFCSLAB;
  m_Str2LoadFn["IFCPROJECTORDERRECORD"] = &SPFReader::loadIFCPROJECTORDERRECORD;
  m_Str2LoadFn["IFCMATERIALLIST"] = &SPFReader::loadIFCMATERIALLIST;
  m_Str2LoadFn["IFCBUILDINGELEMENTCOMPONENT"] = &SPFReader::loadIFCBUILDINGELEMENTCOMPONENT;
  m_Str2LoadFn["IFCCOORDINATEDUNIVERSALTIMEOFFSET"] = &SPFReader::loadIFCCOORDINATEDUNIVERSALTIMEOFFSET;
  m_Str2LoadFn["IFCDIMENSIONCURVEDIRECTEDCALLOUT"] = &SPFReader::loadIFCDIMENSIONCURVEDIRECTEDCALLOUT;
  m_Str2LoadFn["IFCMATERIALLAYERSETUSAGE"] = &SPFReader::loadIFCMATERIALLAYERSETUSAGE;
  m_Str2LoadFn["IFCPERMEABLECOVERINGPROPERTIES"] = &SPFReader::loadIFCPERMEABLECOVERINGPROPERTIES;
  m_Str2LoadFn["IFCWALL"] = &SPFReader::loadIFCWALL;
  m_Str2LoadFn["IFCSTRUCTURALLOADGROUP"] = &SPFReader::loadIFCSTRUCTURALLOADGROUP;
  m_Str2LoadFn["IFCFURNITURETYPE"] = &SPFReader::loadIFCFURNITURETYPE;
  m_Str2LoadFn["IFCPUMPTYPE"] = &SPFReader::loadIFCPUMPTYPE;
  m_Str2LoadFn["IFCPROPERTYREFERENCEVALUE"] = &SPFReader::loadIFCPROPERTYREFERENCEVALUE;
  m_Str2LoadFn["IFCCARTESIANTRANSFORMATIONOPERATOR2DNONUNIFORM"] = &SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR2DNONUNIFORM;
  m_Str2LoadFn["IFCEXTERNALLYDEFINEDSURFACESTYLE"] = &SPFReader::loadIFCEXTERNALLYDEFINEDSURFACESTYLE;
  m_Str2LoadFn["IFCPROJECTIONELEMENT"] = &SPFReader::loadIFCPROJECTIONELEMENT;
  m_Str2LoadFn["IFCRELCONNECTSPORTTOELEMENT"] = &SPFReader::loadIFCRELCONNECTSPORTTOELEMENT;
  m_Str2LoadFn["IFCORGANIZATIONRELATIONSHIP"] = &SPFReader::loadIFCORGANIZATIONRELATIONSHIP;
  m_Str2LoadFn["IFCMOVE"] = &SPFReader::loadIFCMOVE;
  m_Str2LoadFn["IFCRIGHTCIRCULARCYLINDER"] = &SPFReader::loadIFCRIGHTCIRCULARCYLINDER;
  m_Str2LoadFn["IFCPROPERTYDEFINITION"] = &SPFReader::loadIFCPROPERTYDEFINITION;
  m_Str2LoadFn["IFCELECTRICFLOWSTORAGEDEVICETYPE"] = &SPFReader::loadIFCELECTRICFLOWSTORAGEDEVICETYPE;
  m_Str2LoadFn["IFCRELASSIGNSTORESOURCE"] = &SPFReader::loadIFCRELASSIGNSTORESOURCE;
  m_Str2LoadFn["IFCSWEPTAREASOLID"] = &SPFReader::loadIFCSWEPTAREASOLID;
  m_Str2LoadFn["IFCPRODUCTREPRESENTATION"] = &SPFReader::loadIFCPRODUCTREPRESENTATION;
  m_Str2LoadFn["IFCSURFACESTYLEREFRACTION"] = &SPFReader::loadIFCSURFACESTYLEREFRACTION;
  m_Str2LoadFn["IFCREPRESENTATION"] = &SPFReader::loadIFCREPRESENTATION;
  m_Str2LoadFn["IFCOPENSHELL"] = &SPFReader::loadIFCOPENSHELL;
  m_Str2LoadFn["IFCRELCONNECTSPORTS"] = &SPFReader::loadIFCRELCONNECTSPORTS;
  m_Str2LoadFn["IFCPROJECTIONCURVE"] = &SPFReader::loadIFCPROJECTIONCURVE;
  m_Str2LoadFn["IFCCLASSIFICATIONREFERENCE"] = &SPFReader::loadIFCCLASSIFICATIONREFERENCE;
  m_Str2LoadFn["IFCTUBEBUNDLETYPE"] = &SPFReader::loadIFCTUBEBUNDLETYPE;
  m_Str2LoadFn["IFCRELCONNECTSSTRUCTURALELEMENT"] = &SPFReader::loadIFCRELCONNECTSSTRUCTURALELEMENT;
  m_Str2LoadFn["IFCFLOWMOVINGDEVICE"] = &SPFReader::loadIFCFLOWMOVINGDEVICE;
  m_Str2LoadFn["IFCRELNESTS"] = &SPFReader::loadIFCRELNESTS;
  m_Str2LoadFn["IFCRELASSIGNSTOPROJECTORDER"] = &SPFReader::loadIFCRELASSIGNSTOPROJECTORDER;
  m_Str2LoadFn["IFCRELCOVERSBLDGELEMENTS"] = &SPFReader::loadIFCRELCOVERSBLDGELEMENTS;
  m_Str2LoadFn["IFCFASTENER"] = &SPFReader::loadIFCFASTENER;
  m_Str2LoadFn["IFCSTRUCTURALLOADSINGLEDISPLACEMENT"] = &SPFReader::loadIFCSTRUCTURALLOADSINGLEDISPLACEMENT;
  m_Str2LoadFn["IFCMATERIALCLASSIFICATIONRELATIONSHIP"] = &SPFReader::loadIFCMATERIALCLASSIFICATIONRELATIONSHIP;
  m_Str2LoadFn["IFCRIGHTCIRCULARCONE"] = &SPFReader::loadIFCRIGHTCIRCULARCONE;
  m_Str2LoadFn["IFCPROPERTYBOUNDEDVALUE"] = &SPFReader::loadIFCPROPERTYBOUNDEDVALUE;
  m_Str2LoadFn["IFCSTRUCTURALACTIVITY"] = &SPFReader::loadIFCSTRUCTURALACTIVITY;
  m_Str2LoadFn["IFCEXTRUDEDAREASOLID"] = &SPFReader::loadIFCEXTRUDEDAREASOLID;
  m_Str2LoadFn["IFCPLACEMENT"] = &SPFReader::loadIFCPLACEMENT;
  m_Str2LoadFn["IFCCONNECTEDFACESET"] = &SPFReader::loadIFCCONNECTEDFACESET;
  m_Str2LoadFn["IFCPERMIT"] = &SPFReader::loadIFCPERMIT;
  m_Str2LoadFn["IFCARBITRARYPROFILEDEFWITHVOIDS"] = &SPFReader::loadIFCARBITRARYPROFILEDEFWITHVOIDS;
  m_Str2LoadFn["IFCVERTEXPOINT"] = &SPFReader::loadIFCVERTEXPOINT;
  m_Str2LoadFn["IFCCARTESIANTRANSFORMATIONOPERATOR2D"] = &SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR2D;
  m_Str2LoadFn["IFCOBJECTDEFINITION"] = &SPFReader::loadIFCOBJECTDEFINITION;
  m_Str2LoadFn["IFCFLOWSEGMENT"] = &SPFReader::loadIFCFLOWSEGMENT;
  m_Str2LoadFn["IFCOPTICALMATERIALPROPERTIES"] = &SPFReader::loadIFCOPTICALMATERIALPROPERTIES;
  m_Str2LoadFn["IFCCONSTRAINTRELATIONSHIP"] = &SPFReader::loadIFCCONSTRAINTRELATIONSHIP;
  m_Str2LoadFn["IFCCARTESIANTRANSFORMATIONOPERATOR"] = &SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR;
  m_Str2LoadFn["IFCANGULARDIMENSION"] = &SPFReader::loadIFCANGULARDIMENSION;
  m_Str2LoadFn["IFCPATH"] = &SPFReader::loadIFCPATH;
  m_Str2LoadFn["IFCORIENTEDEDGE"] = &SPFReader::loadIFCORIENTEDEDGE;
  m_Str2LoadFn["IFCOFFSETCURVE3D"] = &SPFReader::loadIFCOFFSETCURVE3D;
  m_Str2LoadFn["IFCVIBRATIONISOLATORTYPE"] = &SPFReader::loadIFCVIBRATIONISOLATORTYPE;
  m_Str2LoadFn["IFCSTRUCTURALREACTION"] = &SPFReader::loadIFCSTRUCTURALREACTION;
  m_Str2LoadFn["IFCRELPROJECTSELEMENT"] = &SPFReader::loadIFCRELPROJECTSELEMENT;
  m_Str2LoadFn["IFCANNOTATIONFILLAREAOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONFILLAREAOCCURRENCE;
  m_Str2LoadFn["IFCFACEOUTERBOUND"] = &SPFReader::loadIFCFACEOUTERBOUND;
  m_Str2LoadFn["IFCCALENDARDATE"] = &SPFReader::loadIFCCALENDARDATE;
  m_Str2LoadFn["IFCRELCONNECTSWITHREALIZINGELEMENTS"] = &SPFReader::loadIFCRELCONNECTSWITHREALIZINGELEMENTS;
  m_Str2LoadFn["IFCDRAUGHTINGPREDEFINEDCURVEFONT"] = &SPFReader::loadIFCDRAUGHTINGPREDEFINEDCURVEFONT;
  m_Str2LoadFn["IFCSECTIONEDSPINE"] = &SPFReader::loadIFCSECTIONEDSPINE;
  m_Str2LoadFn["IFCCONTROL"] = &SPFReader::loadIFCCONTROL;
  m_Str2LoadFn["IFCDIMENSIONCURVE"] = &SPFReader::loadIFCDIMENSIONCURVE;
  m_Str2LoadFn["IFCFLOWFITTING"] = &SPFReader::loadIFCFLOWFITTING;
  m_Str2LoadFn["IFCMEASUREWITHUNIT"] = &SPFReader::loadIFCMEASUREWITHUNIT;
  m_Str2LoadFn["IFCSTRUCTURALLOADSTATIC"] = &SPFReader::loadIFCSTRUCTURALLOADSTATIC;
  m_Str2LoadFn["IFCDIAMETERDIMENSION"] = &SPFReader::loadIFCDIAMETERDIMENSION;
  m_Str2LoadFn["IFCAXIS2PLACEMENT2D"] = &SPFReader::loadIFCAXIS2PLACEMENT2D;
  m_Str2LoadFn["IFCPRESENTATIONLAYERASSIGNMENT"] = &SPFReader::loadIFCPRESENTATIONLAYERASSIGNMENT;
  m_Str2LoadFn["IFCBOXEDHALFSPACE"] = &SPFReader::loadIFCBOXEDHALFSPACE;
  m_Str2LoadFn["IFCWINDOW"] = &SPFReader::loadIFCWINDOW;
  m_Str2LoadFn["IFCPERSON"] = &SPFReader::loadIFCPERSON;
  m_Str2LoadFn["IFCSUBCONTRACTRESOURCE"] = &SPFReader::loadIFCSUBCONTRACTRESOURCE;
  m_Str2LoadFn["IFCRELASSOCIATESCONSTRAINT"] = &SPFReader::loadIFCRELASSOCIATESCONSTRAINT;
  m_Str2LoadFn["IFCELLIPSE"] = &SPFReader::loadIFCELLIPSE;
  m_Str2LoadFn["IFCPLANARBOX"] = &SPFReader::loadIFCPLANARBOX;
  m_Str2LoadFn["IFCRELREFERENCEDINSPATIALSTRUCTURE"] = &SPFReader::loadIFCRELREFERENCEDINSPATIALSTRUCTURE;
  m_Str2LoadFn["IFCUNITASSIGNMENT"] = &SPFReader::loadIFCUNITASSIGNMENT;
  m_Str2LoadFn["IFCFLOWTERMINALTYPE"] = &SPFReader::loadIFCFLOWTERMINALTYPE;
  m_Str2LoadFn["IFCREINFORCEMENTBARPROPERTIES"] = &SPFReader::loadIFCREINFORCEMENTBARPROPERTIES;
  m_Str2LoadFn["IFCCOLOURRGB"] = &SPFReader::loadIFCCOLOURRGB;
  m_Str2LoadFn["IFCAPPLIEDVALUE"] = &SPFReader::loadIFCAPPLIEDVALUE;
  m_Str2LoadFn["IFCSTAIRFLIGHTTYPE"] = &SPFReader::loadIFCSTAIRFLIGHTTYPE;
  m_Str2LoadFn["IFCRATIONALBEZIERCURVE"] = &SPFReader::loadIFCRATIONALBEZIERCURVE;
  m_Str2LoadFn["IFCCONNECTIONPOINTGEOMETRY"] = &SPFReader::loadIFCCONNECTIONPOINTGEOMETRY;
  m_Str2LoadFn["IFCPROFILEDEF"] = &SPFReader::loadIFCPROFILEDEF;
  m_Str2LoadFn["IFCFEATUREELEMENTSUBTRACTION"] = &SPFReader::loadIFCFEATUREELEMENTSUBTRACTION;
  m_Str2LoadFn["IFCTEXTUREVERTEX"] = &SPFReader::loadIFCTEXTUREVERTEX;
  m_Str2LoadFn["IFCRELATIONSHIP"] = &SPFReader::loadIFCRELATIONSHIP;
  m_Str2LoadFn["IFCGEOMETRICREPRESENTATIONITEM"] = &SPFReader::loadIFCGEOMETRICREPRESENTATIONITEM;
  m_Str2LoadFn["IFCEXTENDEDMATERIALPROPERTIES"] = &SPFReader::loadIFCEXTENDEDMATERIALPROPERTIES;
  m_Str2LoadFn["IFCFURNISHINGELEMENTTYPE"] = &SPFReader::loadIFCFURNISHINGELEMENTTYPE;
  m_Str2LoadFn["IFCPOINT"] = &SPFReader::loadIFCPOINT;
  m_Str2LoadFn["IFCBOUNDARYCONDITION"] = &SPFReader::loadIFCBOUNDARYCONDITION;
  m_Str2LoadFn["IFCQUANTITYCOUNT"] = &SPFReader::loadIFCQUANTITYCOUNT;
  m_Str2LoadFn["IFCGENERALMATERIALPROPERTIES"] = &SPFReader::loadIFCGENERALMATERIALPROPERTIES;
  m_Str2LoadFn["IFCRELAXATION"] = &SPFReader::loadIFCRELAXATION;
  m_Str2LoadFn["IFCZSHAPEPROFILEDEF"] = &SPFReader::loadIFCZSHAPEPROFILEDEF;
  m_Str2LoadFn["IFCWASTETERMINALTYPE"] = &SPFReader::loadIFCWASTETERMINALTYPE;
  m_Str2LoadFn["IFCANNOTATION"] = &SPFReader::loadIFCANNOTATION;
  m_Str2LoadFn["IFCTEXTSTYLEFONTMODEL"] = &SPFReader::loadIFCTEXTSTYLEFONTMODEL;
  m_Str2LoadFn["IFCEXTERNALREFERENCE"] = &SPFReader::loadIFCEXTERNALREFERENCE;
  m_Str2LoadFn["IFCSTYLEDITEM"] = &SPFReader::loadIFCSTYLEDITEM;
  m_Str2LoadFn["IFCENERGYCONVERSIONDEVICETYPE"] = &SPFReader::loadIFCENERGYCONVERSIONDEVICETYPE;
  m_Str2LoadFn["IFCMETRIC"] = &SPFReader::loadIFCMETRIC;
  m_Str2LoadFn["IFCSTRUCTURALLOADTEMPERATURE"] = &SPFReader::loadIFCSTRUCTURALLOADTEMPERATURE;
  m_Str2LoadFn["IFCDAMPERTYPE"] = &SPFReader::loadIFCDAMPERTYPE;
  m_Str2LoadFn["IFCLSHAPEPROFILEDEF"] = &SPFReader::loadIFCLSHAPEPROFILEDEF;
  m_Str2LoadFn["IFCDRAUGHTINGCALLOUTRELATIONSHIP"] = &SPFReader::loadIFCDRAUGHTINGCALLOUTRELATIONSHIP;
  m_Str2LoadFn["IFCGRID"] = &SPFReader::loadIFCGRID;
  m_Str2LoadFn["IFCRESOURCE"] = &SPFReader::loadIFCRESOURCE;
  m_Str2LoadFn["IFCHALFSPACESOLID"] = &SPFReader::loadIFCHALFSPACESOLID;
  m_Str2LoadFn["IFCSURFACESTYLESHADING"] = &SPFReader::loadIFCSURFACESTYLESHADING;
  m_Str2LoadFn["IFCSTRUCTUREDDIMENSIONCALLOUT"] = &SPFReader::loadIFCSTRUCTUREDDIMENSIONCALLOUT;
  m_Str2LoadFn["IFCSWEPTDISKSOLID"] = &SPFReader::loadIFCSWEPTDISKSOLID;
  m_Str2LoadFn["IFCFILLAREASTYLETILES"] = &SPFReader::loadIFCFILLAREASTYLETILES;
  m_Str2LoadFn["IFCCURVESTYLEFONTANDSCALING"] = &SPFReader::loadIFCCURVESTYLEFONTANDSCALING;
  m_Str2LoadFn["IFCSTRUCTURALRESULTGROUP"] = &SPFReader::loadIFCSTRUCTURALRESULTGROUP;
  m_Str2LoadFn["IFCGRIDPLACEMENT"] = &SPFReader::loadIFCGRIDPLACEMENT;
  m_Str2LoadFn["IFCCOMPOSITECURVE"] = &SPFReader::loadIFCCOMPOSITECURVE;
  m_Str2LoadFn["IFCTYPEOBJECT"] = &SPFReader::loadIFCTYPEOBJECT;
  m_Str2LoadFn["IFCEXTERNALLYDEFINEDHATCHSTYLE"] = &SPFReader::loadIFCEXTERNALLYDEFINEDHATCHSTYLE;
  m_Str2LoadFn["IFCPIXELTEXTURE"] = &SPFReader::loadIFCPIXELTEXTURE;
  m_Str2LoadFn["IFCSYSTEMFURNITUREELEMENTTYPE"] = &SPFReader::loadIFCSYSTEMFURNITUREELEMENTTYPE;
  m_Str2LoadFn["IFCDIMENSIONCURVETERMINATOR"] = &SPFReader::loadIFCDIMENSIONCURVETERMINATOR;
  m_Str2LoadFn["IFCCONIC"] = &SPFReader::loadIFCCONIC;
  m_Str2LoadFn["IFCTRANSFORMERTYPE"] = &SPFReader::loadIFCTRANSFORMERTYPE;
  m_Str2LoadFn["IFCAPPROVALPROPERTYRELATIONSHIP"] = &SPFReader::loadIFCAPPROVALPROPERTYRELATIONSHIP;
  m_Str2LoadFn["IFCDISTRIBUTIONFLOWELEMENTTYPE"] = &SPFReader::loadIFCDISTRIBUTIONFLOWELEMENTTYPE;
  m_Str2LoadFn["IFCRELAGGREGATES"] = &SPFReader::loadIFCRELAGGREGATES;
  m_Str2LoadFn["IFCSURFACESTYLELIGHTING"] = &SPFReader::loadIFCSURFACESTYLELIGHTING;
  m_Str2LoadFn["IFCCONSTRUCTIONRESOURCE"] = &SPFReader::loadIFCCONSTRUCTIONRESOURCE;
  m_Str2LoadFn["IFCCARTESIANTRANSFORMATIONOPERATOR3D"] = &SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR3D;
  m_Str2LoadFn["IFCPLATE"] = &SPFReader::loadIFCPLATE;
  m_Str2LoadFn["IFCFOOTING"] = &SPFReader::loadIFCFOOTING;
  m_Str2LoadFn["IFCPILE"] = &SPFReader::loadIFCPILE;
  m_Str2LoadFn["IFCARBITRARYCLOSEDPROFILEDEF"] = &SPFReader::loadIFCARBITRARYCLOSEDPROFILEDEF;
  m_Str2LoadFn["IFCFLOWTREATMENTDEVICE"] = &SPFReader::loadIFCFLOWTREATMENTDEVICE;
  m_Str2LoadFn["IFCVECTOR"] = &SPFReader::loadIFCVECTOR;
  m_Str2LoadFn["IFCCONSTRAINTAGGREGATIONRELATIONSHIP"] = &SPFReader::loadIFCCONSTRAINTAGGREGATIONRELATIONSHIP;
  m_Str2LoadFn["IFCMECHANICALFASTENERTYPE"] = &SPFReader::loadIFCMECHANICALFASTENERTYPE;
  m_Str2LoadFn["IFCWALLSTANDARDCASE"] = &SPFReader::loadIFCWALLSTANDARDCASE;
  m_Str2LoadFn["IFCMECHANICALSTEELMATERIALPROPERTIES"] = &SPFReader::loadIFCMECHANICALSTEELMATERIALPROPERTIES;
  m_Str2LoadFn["IFCCRANERAILASHAPEPROFILEDEF"] = &SPFReader::loadIFCCRANERAILASHAPEPROFILEDEF;
  m_Str2LoadFn["IFCDATEANDTIME"] = &SPFReader::loadIFCDATEANDTIME;
  m_Str2LoadFn["IFCFACETEDBREP"] = &SPFReader::loadIFCFACETEDBREP;
  m_Str2LoadFn["IFCELEMENTARYSURFACE"] = &SPFReader::loadIFCELEMENTARYSURFACE;
  m_Str2LoadFn["IFCWORKSCHEDULE"] = &SPFReader::loadIFCWORKSCHEDULE;
  m_Str2LoadFn["IFCCOLUMNTYPE"] = &SPFReader::loadIFCCOLUMNTYPE;
  m_Str2LoadFn["IFCTRIMMEDCURVE"] = &SPFReader::loadIFCTRIMMEDCURVE;
  m_Str2LoadFn["IFCOCCUPANT"] = &SPFReader::loadIFCOCCUPANT;
  m_Str2LoadFn["IFCCENTERLINEPROFILEDEF"] = &SPFReader::loadIFCCENTERLINEPROFILEDEF;
  m_Str2LoadFn["IFCASSET"] = &SPFReader::loadIFCASSET;
  m_Str2LoadFn["IFCSPHERE"] = &SPFReader::loadIFCSPHERE;
  m_Str2LoadFn["IFCCRANERAILFSHAPEPROFILEDEF"] = &SPFReader::loadIFCCRANERAILFSHAPEPROFILEDEF;
  m_Str2LoadFn["IFCCURTAINWALLTYPE"] = &SPFReader::loadIFCCURTAINWALLTYPE;
  m_Str2LoadFn["IFCARBITRARYOPENPROFILEDEF"] = &SPFReader::loadIFCARBITRARYOPENPROFILEDEF;
  m_Str2LoadFn["IFCCSGPRIMITIVE3D"] = &SPFReader::loadIFCCSGPRIMITIVE3D;
  m_Str2LoadFn["IFCSTRUCTURALPLANARACTIONVARYING"] = &SPFReader::loadIFCSTRUCTURALPLANARACTIONVARYING;
  m_Str2LoadFn["IFCDISTRIBUTIONFLOWELEMENT"] = &SPFReader::loadIFCDISTRIBUTIONFLOWELEMENT;
  m_Str2LoadFn["IFCSWITCHINGDEVICETYPE"] = &SPFReader::loadIFCSWITCHINGDEVICETYPE;
  m_Str2LoadFn["IFCELEMENTCOMPONENTTYPE"] = &SPFReader::loadIFCELEMENTCOMPONENTTYPE;
  m_Str2LoadFn["IFCPROXY"] = &SPFReader::loadIFCPROXY;
  m_Str2LoadFn["IFCTYPEPRODUCT"] = &SPFReader::loadIFCTYPEPRODUCT;
  m_Str2LoadFn["IFCGEOMETRICREPRESENTATIONSUBCONTEXT"] = &SPFReader::loadIFCGEOMETRICREPRESENTATIONSUBCONTEXT;
  m_Str2LoadFn["IFCZONE"] = &SPFReader::loadIFCZONE;
  m_Str2LoadFn["IFCREINFORCEMENTDEFINITIONPROPERTIES"] = &SPFReader::loadIFCREINFORCEMENTDEFINITIONPROPERTIES;
  m_Str2LoadFn["IFCANNOTATIONSURFACE"] = &SPFReader::loadIFCANNOTATIONSURFACE;
  m_Str2LoadFn["IFCACTOR"] = &SPFReader::loadIFCACTOR;
  m_Str2LoadFn["IFCWORKPLAN"] = &SPFReader::loadIFCWORKPLAN;
  m_Str2LoadFn["IFCFLOWSTORAGEDEVICETYPE"] = &SPFReader::loadIFCFLOWSTORAGEDEVICETYPE;
  m_Str2LoadFn["IFCAPPROVALRELATIONSHIP"] = &SPFReader::loadIFCAPPROVALRELATIONSHIP;
  m_Str2LoadFn["IFCCONSTRUCTIONMATERIALRESOURCE"] = &SPFReader::loadIFCCONSTRUCTIONMATERIALRESOURCE;
  m_Str2LoadFn["IFCPOLYLINE"] = &SPFReader::loadIFCPOLYLINE;
  m_Str2LoadFn["IFCDERIVEDUNIT"] = &SPFReader::loadIFCDERIVEDUNIT;
  m_Str2LoadFn["IFCREVOLVEDAREASOLID"] = &SPFReader::loadIFCREVOLVEDAREASOLID;
  m_Str2LoadFn["IFCANNOTATIONTEXTOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONTEXTOCCURRENCE;
  m_Str2LoadFn["IFCRELDEFINESBYTYPE"] = &SPFReader::loadIFCRELDEFINESBYTYPE;
  m_Str2LoadFn["IFCBUILDINGELEMENTPART"] = &SPFReader::loadIFCBUILDINGELEMENTPART;
  m_Str2LoadFn["IFCCONSTRUCTIONEQUIPMENTRESOURCE"] = &SPFReader::loadIFCCONSTRUCTIONEQUIPMENTRESOURCE;
  m_Str2LoadFn["IFCIMAGETEXTURE"] = &SPFReader::loadIFCIMAGETEXTURE;
  m_Str2LoadFn["IFCCLASSIFICATIONNOTATION"] = &SPFReader::loadIFCCLASSIFICATIONNOTATION;
  m_Str2LoadFn["IFCFURNISHINGELEMENT"] = &SPFReader::loadIFCFURNISHINGELEMENT;
  m_Str2LoadFn["IFCSTYLEMODEL"] = &SPFReader::loadIFCSTYLEMODEL;
  m_Str2LoadFn["IFCPOLYGONALBOUNDEDHALFSPACE"] = &SPFReader::loadIFCPOLYGONALBOUNDEDHALFSPACE;
  m_Str2LoadFn["IFCSOUNDVALUE"] = &SPFReader::loadIFCSOUNDVALUE;
  m_Str2LoadFn["IFCTHERMALMATERIALPROPERTIES"] = &SPFReader::loadIFCTHERMALMATERIALPROPERTIES;
  m_Str2LoadFn["IFCRELASSOCIATESAPPLIEDVALUE"] = &SPFReader::loadIFCRELASSOCIATESAPPLIEDVALUE;
  m_Str2LoadFn["IFCANNOTATIONSYMBOLOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONSYMBOLOCCURRENCE;
  m_Str2LoadFn["IFCASYMMETRICISHAPEPROFILEDEF"] = &SPFReader::loadIFCASYMMETRICISHAPEPROFILEDEF;
  m_Str2LoadFn["IFCMECHANICALCONCRETEMATERIALPROPERTIES"] = &SPFReader::loadIFCMECHANICALCONCRETEMATERIALPROPERTIES;
  m_Str2LoadFn["IFCCOILTYPE"] = &SPFReader::loadIFCCOILTYPE;
  m_Str2LoadFn["IFCCLASSIFICATIONITEM"] = &SPFReader::loadIFCCLASSIFICATIONITEM;
  m_Str2LoadFn["IFCLIGHTSOURCESPOT"] = &SPFReader::loadIFCLIGHTSOURCESPOT;
  m_Str2LoadFn["IFCCONNECTIONPOINTECCENTRICITY"] = &SPFReader::loadIFCCONNECTIONPOINTECCENTRICITY;
  m_Str2LoadFn["IFCFACETEDBREPWITHVOIDS"] = &SPFReader::loadIFCFACETEDBREPWITHVOIDS;
  m_Str2LoadFn["IFCSPACEPROGRAM"] = &SPFReader::loadIFCSPACEPROGRAM;
  m_Str2LoadFn["IFCCOVERINGTYPE"] = &SPFReader::loadIFCCOVERINGTYPE;
  m_Str2LoadFn["IFCBOUNDEDCURVE"] = &SPFReader::loadIFCBOUNDEDCURVE;
  m_Str2LoadFn["IFCELEMENTTYPE"] = &SPFReader::loadIFCELEMENTTYPE;
  m_Str2LoadFn["IFCPROCESS"] = &SPFReader::loadIFCPROCESS;
  m_Str2LoadFn["IFCSUBEDGE"] = &SPFReader::loadIFCSUBEDGE;
  m_Str2LoadFn["IFCDIMENSIONALEXPONENTS"] = &SPFReader::loadIFCDIMENSIONALEXPONENTS;
  m_Str2LoadFn["IFCRECTANGLEHOLLOWPROFILEDEF"] = &SPFReader::loadIFCRECTANGLEHOLLOWPROFILEDEF;
  m_Str2LoadFn["IFCSTRUCTURALSURFACECONNECTION"] = &SPFReader::loadIFCSTRUCTURALSURFACECONNECTION;
  m_Str2LoadFn["IFCSTRUCTURALPOINTACTION"] = &SPFReader::loadIFCSTRUCTURALPOINTACTION;
  m_Str2LoadFn["IFCOUTLETTYPE"] = &SPFReader::loadIFCOUTLETTYPE;
  m_Str2LoadFn["IFCFLOWSEGMENTTYPE"] = &SPFReader::loadIFCFLOWSEGMENTTYPE;
  m_Str2LoadFn["IFCSTACKTERMINALTYPE"] = &SPFReader::loadIFCSTACKTERMINALTYPE;
  m_Str2LoadFn["IFCPLANE"] = &SPFReader::loadIFCPLANE;
  m_Str2LoadFn["IFCRADIUSDIMENSION"] = &SPFReader::loadIFCRADIUSDIMENSION;
  m_Str2LoadFn["IFCSTAIRFLIGHT"] = &SPFReader::loadIFCSTAIRFLIGHT;
  m_Str2LoadFn["IFCELECTRICALELEMENT"] = &SPFReader::loadIFCELECTRICALELEMENT;
  m_Str2LoadFn["IFCAPPLICATION"] = &SPFReader::loadIFCAPPLICATION;
  m_Str2LoadFn["IFCMECHANICALMATERIALPROPERTIES"] = &SPFReader::loadIFCMECHANICALMATERIALPROPERTIES;
  m_Str2LoadFn["IFCMATERIALPROPERTIES"] = &SPFReader::loadIFCMATERIALPROPERTIES;
  m_Str2LoadFn["IFCCARTESIANTRANSFORMATIONOPERATOR3DNONUNIFORM"] = &SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR3DNONUNIFORM;
  m_Str2LoadFn["IFCHYGROSCOPICMATERIALPROPERTIES"] = &SPFReader::loadIFCHYGROSCOPICMATERIALPROPERTIES;
  m_Str2LoadFn["IFCGEOMETRICSET"] = &SPFReader::loadIFCGEOMETRICSET;
  m_Str2LoadFn["IFCPRODUCTDEFINITIONSHAPE"] = &SPFReader::loadIFCPRODUCTDEFINITIONSHAPE;
  m_Str2LoadFn["IFCPROCEDURE"] = &SPFReader::loadIFCPROCEDURE;
  m_Str2LoadFn["IFCSURFACETEXTURE"] = &SPFReader::loadIFCSURFACETEXTURE;
  m_Str2LoadFn["IFCSPATIALSTRUCTUREELEMENTTYPE"] = &SPFReader::loadIFCSPATIALSTRUCTUREELEMENTTYPE;
  m_Str2LoadFn["IFCNAMEDUNIT"] = &SPFReader::loadIFCNAMEDUNIT;
  m_Str2LoadFn["IFCSTRUCTURALCONNECTIONCONDITION"] = &SPFReader::loadIFCSTRUCTURALCONNECTIONCONDITION;
  m_Str2LoadFn["IFCCOSTSCHEDULE"] = &SPFReader::loadIFCCOSTSCHEDULE;
  m_Str2LoadFn["IFCDISTRIBUTIONCONTROLELEMENT"] = &SPFReader::loadIFCDISTRIBUTIONCONTROLELEMENT;
  m_Str2LoadFn["IFCCONDENSERTYPE"] = &SPFReader::loadIFCCONDENSERTYPE;
  m_Str2LoadFn["IFCGEOMETRICREPRESENTATIONCONTEXT"] = &SPFReader::loadIFCGEOMETRICREPRESENTATIONCONTEXT;
  m_Str2LoadFn["IFCFURNITURESTANDARD"] = &SPFReader::loadIFCFURNITURESTANDARD;
  m_Str2LoadFn["IFCBSPLINECURVE"] = &SPFReader::loadIFCBSPLINECURVE;
  m_Str2LoadFn["IFCSTRUCTURALLOAD"] = &SPFReader::loadIFCSTRUCTURALLOAD;
  m_Str2LoadFn["IFCDOOR"] = &SPFReader::loadIFCDOOR;
  m_Str2LoadFn["IFCPREDEFINEDCOLOUR"] = &SPFReader::loadIFCPREDEFINEDCOLOUR;
  m_Str2LoadFn["IFCFEATUREELEMENTADDITION"] = &SPFReader::loadIFCFEATUREELEMENTADDITION;
  m_Str2LoadFn["IFCCOOLEDBEAMTYPE"] = &SPFReader::loadIFCCOOLEDBEAMTYPE;
  m_Str2LoadFn["IFCLIBRARYINFORMATION"] = &SPFReader::loadIFCLIBRARYINFORMATION;
  m_Str2LoadFn["IFCTENDON"] = &SPFReader::loadIFCTENDON;
  m_Str2LoadFn["IFCSURFACESTYLE"] = &SPFReader::loadIFCSURFACESTYLE;
  m_Str2LoadFn["IFCLIGHTINTENSITYDISTRIBUTION"] = &SPFReader::loadIFCLIGHTINTENSITYDISTRIBUTION;
  m_Str2LoadFn["IFCROOF"] = &SPFReader::loadIFCROOF;
  m_Str2LoadFn["IFCSTRUCTURALLOADSINGLEDISPLACEMENTDISTORTION"] = &SPFReader::loadIFCSTRUCTURALLOADSINGLEDISPLACEMENTDISTORTION;
  m_Str2LoadFn["IFCPRESENTATIONSTYLEASSIGNMENT"] = &SPFReader::loadIFCPRESENTATIONSTYLEASSIGNMENT;
  m_Str2LoadFn["IFCTANKTYPE"] = &SPFReader::loadIFCTANKTYPE;
  m_Str2LoadFn["IFCPRODUCT"] = &SPFReader::loadIFCPRODUCT;
  m_Str2LoadFn["IFCFACEBOUND"] = &SPFReader::loadIFCFACEBOUND;
  m_Str2LoadFn["IFCFUELPROPERTIES"] = &SPFReader::loadIFCFUELPROPERTIES;
  m_Str2LoadFn["IFCBEAM"] = &SPFReader::loadIFCBEAM;
  m_Str2LoadFn["IFCSHAPEMODEL"] = &SPFReader::loadIFCSHAPEMODEL;
  m_Str2LoadFn["IFCELECTRICHEATERTYPE"] = &SPFReader::loadIFCELECTRICHEATERTYPE;
  m_Str2LoadFn["IFCRAILINGTYPE"] = &SPFReader::loadIFCRAILINGTYPE;
  m_Str2LoadFn["IFCROOT"] = &SPFReader::loadIFCROOT;
  m_Str2LoadFn["IFCELEMENTCOMPONENT"] = &SPFReader::loadIFCELEMENTCOMPONENT;
  m_Str2LoadFn["IFCPROPERTYDEPENDENCYRELATIONSHIP"] = &SPFReader::loadIFCPROPERTYDEPENDENCYRELATIONSHIP;
  m_Str2LoadFn["IFCRELASSIGNS"] = &SPFReader::loadIFCRELASSIGNS;
  m_Str2LoadFn["IFCFLOWSTORAGEDEVICE"] = &SPFReader::loadIFCFLOWSTORAGEDEVICE;
  m_Str2LoadFn["IFCSTRUCTURALSTEELPROFILEPROPERTIES"] = &SPFReader::loadIFCSTRUCTURALSTEELPROFILEPROPERTIES;
  m_Str2LoadFn["IFCBOUNDARYEDGECONDITION"] = &SPFReader::loadIFCBOUNDARYEDGECONDITION;
  m_Str2LoadFn["IFCPROPERTYSINGLEVALUE"] = &SPFReader::loadIFCPROPERTYSINGLEVALUE;
  m_Str2LoadFn["IFCSWEPTSURFACE"] = &SPFReader::loadIFCSWEPTSURFACE;
  m_Str2LoadFn["IFCSTRUCTURALLINEARACTIONVARYING"] = &SPFReader::loadIFCSTRUCTURALLINEARACTIONVARYING;
  m_Str2LoadFn["IFCALARMTYPE"] = &SPFReader::loadIFCALARMTYPE;
  m_Str2LoadFn["IFCLIGHTFIXTURETYPE"] = &SPFReader::loadIFCLIGHTFIXTURETYPE;
  m_Str2LoadFn["IFCLIGHTSOURCE"] = &SPFReader::loadIFCLIGHTSOURCE;
  m_Str2LoadFn["IFCTIMESERIES"] = &SPFReader::loadIFCTIMESERIES;
  m_Str2LoadFn["IFCSURFACECURVESWEPTAREASOLID"] = &SPFReader::loadIFCSURFACECURVESWEPTAREASOLID;
  m_Str2LoadFn["IFCGENERALPROFILEPROPERTIES"] = &SPFReader::loadIFCGENERALPROFILEPROPERTIES;
  m_Str2LoadFn["IFCTEXTSTYLEFORDEFINEDFONT"] = &SPFReader::loadIFCTEXTSTYLEFORDEFINEDFONT;
  m_Str2LoadFn["IFCSHAPEREPRESENTATION"] = &SPFReader::loadIFCSHAPEREPRESENTATION;
  m_Str2LoadFn["IFCQUANTITYVOLUME"] = &SPFReader::loadIFCQUANTITYVOLUME;
  m_Str2LoadFn["IFCDIMENSIONPAIR"] = &SPFReader::loadIFCDIMENSIONPAIR;
  m_Str2LoadFn["IFCCARTESIANPOINT"] = &SPFReader::loadIFCCARTESIANPOINT;
  m_Str2LoadFn["IFCTEXTUREMAP"] = &SPFReader::loadIFCTEXTUREMAP;
  m_Str2LoadFn["IFCSHELLBASEDSURFACEMODEL"] = &SPFReader::loadIFCSHELLBASEDSURFACEMODEL;
  m_Str2LoadFn["IFCEDGE"] = &SPFReader::loadIFCEDGE;
  m_Str2LoadFn["IFCLOCALTIME"] = &SPFReader::loadIFCLOCALTIME;
  m_Str2LoadFn["IFCPRESENTATIONSTYLE"] = &SPFReader::loadIFCPRESENTATIONSTYLE;
  m_Str2LoadFn["IFCREFERENCESVALUEDOCUMENT"] = &SPFReader::loadIFCREFERENCESVALUEDOCUMENT;
  m_Str2LoadFn["IFCRECTANGULARTRIMMEDSURFACE"] = &SPFReader::loadIFCRECTANGULARTRIMMEDSURFACE;
  m_Str2LoadFn["IFCBEZIERCURVE"] = &SPFReader::loadIFCBEZIERCURVE;
  m_Str2LoadFn["IFCSYSTEM"] = &SPFReader::loadIFCSYSTEM;
  m_Str2LoadFn["IFCMATERIALLAYER"] = &SPFReader::loadIFCMATERIALLAYER;
  m_Str2LoadFn["IFCAPPLIEDVALUERELATIONSHIP"] = &SPFReader::loadIFCAPPLIEDVALUERELATIONSHIP;
  m_Str2LoadFn["IFCENERGYPROPERTIES"] = &SPFReader::loadIFCENERGYPROPERTIES;
  m_Str2LoadFn["IFCCONDITIONCRITERION"] = &SPFReader::loadIFCCONDITIONCRITERION;
  m_Str2LoadFn["IFCBOOLEANRESULT"] = &SPFReader::loadIFCBOOLEANRESULT;
  m_Str2LoadFn["IFCSTAIR"] = &SPFReader::loadIFCSTAIR;
  m_Str2LoadFn["IFCOBJECTIVE"] = &SPFReader::loadIFCOBJECTIVE;
  m_Str2LoadFn["IFCRAMPFLIGHT"] = &SPFReader::loadIFCRAMPFLIGHT;
  m_Str2LoadFn["IFCCOVERING"] = &SPFReader::loadIFCCOVERING;
  m_Str2LoadFn["IFCCURVESTYLE"] = &SPFReader::loadIFCCURVESTYLE;
  m_Str2LoadFn["IFCRAMP"] = &SPFReader::loadIFCRAMP;
  m_Str2LoadFn["IFCPROFILEPROPERTIES"] = &SPFReader::loadIFCPROFILEPROPERTIES;
  m_Str2LoadFn["IFCCONSTRAINT"] = &SPFReader::loadIFCCONSTRAINT;
  m_Str2LoadFn["IFCPORT"] = &SPFReader::loadIFCPORT;
  m_Str2LoadFn["IFCDOCUMENTELECTRONICFORMAT"] = &SPFReader::loadIFCDOCUMENTELECTRONICFORMAT;
  m_Str2LoadFn["IFCPROJECT"] = &SPFReader::loadIFCPROJECT;
  m_Str2LoadFn["IFCELLIPSEPROFILEDEF"] = &SPFReader::loadIFCELLIPSEPROFILEDEF;
  m_Str2LoadFn["IFCEVAPORATIVECOOLERTYPE"] = &SPFReader::loadIFCEVAPORATIVECOOLERTYPE;
  m_Str2LoadFn["IFCMATERIAL"] = &SPFReader::loadIFCMATERIAL;
  m_Str2LoadFn["IFCTABLEROW"] = &SPFReader::loadIFCTABLEROW;
  m_Str2LoadFn["IFCRELASSIGNSTOGROUP"] = &SPFReader::loadIFCRELASSIGNSTOGROUP;
  m_Str2LoadFn["IFCHEATEXCHANGERTYPE"] = &SPFReader::loadIFCHEATEXCHANGERTYPE;
  m_Str2LoadFn["IFCPROPERTYENUMERATION"] = &SPFReader::loadIFCPROPERTYENUMERATION;
  m_Str2LoadFn["IFCRIBPLATEPROFILEPROPERTIES"] = &SPFReader::loadIFCRIBPLATEPROFILEPROPERTIES;
  m_Str2LoadFn["IFCPERSONANDORGANIZATION"] = &SPFReader::loadIFCPERSONANDORGANIZATION;
  m_Str2LoadFn["IFCTEXTURECOORDINATEGENERATOR"] = &SPFReader::loadIFCTEXTURECOORDINATEGENERATOR;
  m_Str2LoadFn["IFCSTRUCTURALANALYSISMODEL"] = &SPFReader::loadIFCSTRUCTURALANALYSISMODEL;
  m_Str2LoadFn["IFCGROUP"] = &SPFReader::loadIFCGROUP;
  m_Str2LoadFn["IFCRELFLOWCONTROLELEMENTS"] = &SPFReader::loadIFCRELFLOWCONTROLELEMENTS;
  m_Str2LoadFn["IFCELECTRICDISTRIBUTIONPOINT"] = &SPFReader::loadIFCELECTRICDISTRIBUTIONPOINT;
  m_Str2LoadFn["IFCTRAPEZIUMPROFILEDEF"] = &SPFReader::loadIFCTRAPEZIUMPROFILEDEF;
  m_Str2LoadFn["IFCSTRUCTURALCURVEMEMBERVARYING"] = &SPFReader::loadIFCSTRUCTURALCURVEMEMBERVARYING;
  m_Str2LoadFn["IFCRELASSOCIATESPROFILEPROPERTIES"] = &SPFReader::loadIFCRELASSOCIATESPROFILEPROPERTIES;
  m_Str2LoadFn["IFCREPRESENTATIONCONTEXT"] = &SPFReader::loadIFCREPRESENTATIONCONTEXT;
  m_Str2LoadFn["IFCSPACETYPE"] = &SPFReader::loadIFCSPACETYPE;
  m_Str2LoadFn["IFCLIBRARYREFERENCE"] = &SPFReader::loadIFCLIBRARYREFERENCE;
  m_Str2LoadFn["IFCPOINTONSURFACE"] = &SPFReader::loadIFCPOINTONSURFACE;
  m_Str2LoadFn["IFCRELASSIGNSTOPRODUCT"] = &SPFReader::loadIFCRELASSIGNSTOPRODUCT;
  m_Str2LoadFn["IFCRELASSOCIATESCLASSIFICATION"] = &SPFReader::loadIFCRELASSOCIATESCLASSIFICATION;
  m_Str2LoadFn["IFCIRREGULARTIMESERIES"] = &SPFReader::loadIFCIRREGULARTIMESERIES;
  m_Str2LoadFn["IFCLOOP"] = &SPFReader::loadIFCLOOP;
  m_Str2LoadFn["IFCPLANAREXTENT"] = &SPFReader::loadIFCPLANAREXTENT;
}

bool SPFReader::loadIFCIRREGULARTIMESERIESVALUE(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcIrregularTimeSeriesValue::getClassType();
    static_cast< Model* > (m_model)->getIfcIrregularTimeSeriesValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADPLANARFORCE(bool isFirst) {
  if (!loadIFCSTRUCTURALLOADSTATIC(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralLoadPlanarForce::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralLoadPlanarForce_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPREDEFINEDTERMINATORSYMBOL(bool isFirst) {
  if (!loadIFCPREDEFINEDSYMBOL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPreDefinedTerminatorSymbol::getClassType();
    static_cast< Model* > (m_model)->getIfcPreDefinedTerminatorSymbol_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBLOBTEXTURE(bool isFirst) {
  if (!loadIFCSURFACETEXTURE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBlobTexture::getClassType();
    static_cast< Model* > (m_model)->getIfcBlobTexture_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDERIVEDUNITELEMENT(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcDerivedUnitElement::getClassType();
    static_cast< Model* > (m_model)->getIfcDerivedUnitElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELOVERRIDESPROPERTIES(bool isFirst) {
  if (!loadIFCRELDEFINESBYPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelOverridesProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcRelOverridesProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDOORSTYLE(bool isFirst) {
  if (!loadIFCTYPEPRODUCT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDoorStyle::getClassType();
    static_cast< Model* > (m_model)->getIfcDoorStyle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELFILLSELEMENT(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelFillsElement::getClassType();
    static_cast< Model* > (m_model)->getIfcRelFillsElement_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelFillsElement, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelFillsElement, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelFillsElement::getClassType(), 5, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelFillsElement, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelFillsElement, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelFillsElement::getClassType(), 4, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCVIRTUALGRIDINTERSECTION(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcVirtualGridIntersection::getClassType();
    static_cast< Model* > (m_model)->getIfcVirtualGridIntersection_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcVirtualGridIntersection, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcVirtualGridIntersection, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcVirtualGridIntersection::getClassType(), 0, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCCHILLERTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcChillerType::getClassType();
    static_cast< Model* > (m_model)->getIfcChillerType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCLASSIFICATION(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcClassification::getClassType();
    static_cast< Model* > (m_model)->getIfcClassification_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCURVESTYLEFONTPATTERN(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcCurveStyleFontPattern::getClassType();
    static_cast< Model* > (m_model)->getIfcCurveStyleFontPattern_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDISTRIBUTIONCHAMBERELEMENT(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDistributionChamberElement::getClassType();
    static_cast< Model* > (m_model)->getIfcDistributionChamberElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCENERGYCONVERSIONDEVICE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEnergyConversionDevice::getClassType();
    static_cast< Model* > (m_model)->getIfcEnergyConversionDevice_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALPROFILEPROPERTIES(bool isFirst) {
  if (!loadIFCGENERALPROFILEPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralProfileProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralProfileProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPRODUCTSOFCOMBUSTIONPROPERTIES(bool isFirst) {
  if (!loadIFCMATERIALPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcProductsOfCombustionProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcProductsOfCombustionProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPLATETYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPlateType::getClassType();
    static_cast< Model* > (m_model)->getIfcPlateType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTASK(bool isFirst) {
  if (!loadIFCPROCESS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTask::getClassType();
    static_cast< Model* > (m_model)->getIfcTask_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTIMESERIESSCHEDULE(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTimeSeriesSchedule::getClassType();
    static_cast< Model* > (m_model)->getIfcTimeSeriesSchedule_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPREDEFINEDTEXTFONT(bool isFirst) {
  if (!loadIFCPREDEFINEDITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCVERTEX(bool isFirst) {
  if (!loadIFCTOPOLOGICALREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcVertex::getClassType();
    static_cast< Model* > (m_model)->getIfcVertex_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCHAMFEREDGEFEATURE(bool isFirst) {
  if (!loadIFCEDGEFEATURE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcChamferEdgeFeature::getClassType();
    static_cast< Model* > (m_model)->getIfcChamferEdgeFeature_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCREWRESOURCE(bool isFirst) {
  if (!loadIFCCONSTRUCTIONRESOURCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCrewResource::getClassType();
    static_cast< Model* > (m_model)->getIfcCrewResource_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDRAUGHTINGPREDEFINEDCOLOUR(bool isFirst) {
  if (!loadIFCPREDEFINEDCOLOUR(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDraughtingPreDefinedColour::getClassType();
    static_cast< Model* > (m_model)->getIfcDraughtingPreDefinedColour_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDISCRETEACCESSORY(bool isFirst) {
  if (!loadIFCELEMENTCOMPONENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDiscreteAccessory::getClassType();
    static_cast< Model* > (m_model)->getIfcDiscreteAccessory_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTRANSPORTELEMENT(bool isFirst) {
  if (!loadIFCELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTransportElement::getClassType();
    static_cast< Model* > (m_model)->getIfcTransportElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDISTRIBUTIONELEMENT(bool isFirst) {
  if (!loadIFCELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDistributionElement::getClassType();
    static_cast< Model* > (m_model)->getIfcDistributionElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFEATUREELEMENT(bool isFirst) {
  if (!loadIFCELEMENT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCCABLECARRIERFITTINGTYPE(bool isFirst) {
  if (!loadIFCFLOWFITTINGTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCableCarrierFittingType::getClassType();
    static_cast< Model* > (m_model)->getIfcCableCarrierFittingType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPARAMETERIZEDPROFILEDEF(bool isFirst) {
  if (!loadIFCPROFILEDEF(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCRELVOIDSELEMENT(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelVoidsElement::getClassType();
    static_cast< Model* > (m_model)->getIfcRelVoidsElement_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelVoidsElement, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelVoidsElement, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelVoidsElement::getClassType(), 4, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelVoidsElement, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelVoidsElement, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelVoidsElement::getClassType(), 5, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCLOSEDSHELL(bool isFirst) {
  if (!loadIFCCONNECTEDFACESET(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcClosedShell::getClassType();
    static_cast< Model* > (m_model)->getIfcClosedShell_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELSCHEDULESCOSTITEMS(bool isFirst) {
  if (!loadIFCRELASSIGNSTOCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelSchedulesCostItems::getClassType();
    static_cast< Model* > (m_model)->getIfcRelSchedulesCostItems_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELSERVICESBUILDINGS(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelServicesBuildings::getClassType();
    static_cast< Model* > (m_model)->getIfcRelServicesBuildings_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelServicesBuildings, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelServicesBuildings, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcRelServicesBuildings::getClassType(), 5, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelServicesBuildings, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelServicesBuildings, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelServicesBuildings::getClassType(), 4, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELDECOMPOSES(bool isFirst) {
  Step::StepId currentRef;
  std::vector< Step::StepId > currentRefList;
  if (!loadIFCRELATIONSHIP(false)) {
    return false;
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelDecomposes, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelDecomposes, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelDecomposes::getClassType(), 4, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelDecomposes, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelDecomposes, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcRelDecomposes::getClassType(), 5, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALPOINTCONNECTION(bool isFirst) {
  if (!loadIFCSTRUCTURALCONNECTION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralPointConnection::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralPointConnection_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYSETDEFINITION(bool isFirst) {
  if (!loadIFCPROPERTYDEFINITION(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCDRAUGHTINGPREDEFINEDTEXTFONT(bool isFirst) {
  if (!loadIFCPREDEFINEDTEXTFONT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDraughtingPreDefinedTextFont::getClassType();
    static_cast< Model* > (m_model)->getIfcDraughtingPreDefinedTextFont_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDUCTSEGMENTTYPE(bool isFirst) {
  if (!loadIFCFLOWSEGMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDuctSegmentType::getClassType();
    static_cast< Model* > (m_model)->getIfcDuctSegmentType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCLASSIFICATIONNOTATIONFACET(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcClassificationNotationFacet::getClassType();
    static_cast< Model* > (m_model)->getIfcClassificationNotationFacet_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWINSTRUMENTTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFlowInstrumentType::getClassType();
    static_cast< Model* > (m_model)->getIfcFlowInstrumentType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSIGNSTASKS(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELASSIGNSTOCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssignsTasks::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssignsTasks_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 7) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcRelAssignsTasks, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcRelAssignsTasks, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelAssignsTasks::getClassType(), 7, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSPACE(bool isFirst) {
  if (!loadIFCSPATIALSTRUCTUREELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSpace::getClassType();
    static_cast< Model* > (m_model)->getIfcSpace_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELEMENTQUANTITY(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElementQuantity::getClassType();
    static_cast< Model* > (m_model)->getIfcElementQuantity_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTEXTSTYLETEXTMODEL(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcTextStyleTextModel::getClassType();
    static_cast< Model* > (m_model)->getIfcTextStyleTextModel_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELOCCUPIESSPACES(bool isFirst) {
  if (!loadIFCRELASSIGNSTOACTOR(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelOccupiesSpaces::getClassType();
    static_cast< Model* > (m_model)->getIfcRelOccupiesSpaces_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTEXTSTYLE(bool isFirst) {
  if (!loadIFCPRESENTATIONSTYLE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTextStyle::getClassType();
    static_cast< Model* > (m_model)->getIfcTextStyle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSLIPPAGECONNECTIONCONDITION(bool isFirst) {
  if (!loadIFCSTRUCTURALCONNECTIONCONDITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSlippageConnectionCondition::getClassType();
    static_cast< Model* > (m_model)->getIfcSlippageConnectionCondition_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSURFACEOFLINEAREXTRUSION(bool isFirst) {
  if (!loadIFCSWEPTSURFACE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSurfaceOfLinearExtrusion::getClassType();
    static_cast< Model* > (m_model)->getIfcSurfaceOfLinearExtrusion_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBOUNDINGBOX(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBoundingBox::getClassType();
    static_cast< Model* > (m_model)->getIfcBoundingBox_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCROUNDEDEDGEFEATURE(bool isFirst) {
  if (!loadIFCEDGEFEATURE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRoundedEdgeFeature::getClassType();
    static_cast< Model* > (m_model)->getIfcRoundedEdgeFeature_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDUCTSILENCERTYPE(bool isFirst) {
  if (!loadIFCFLOWTREATMENTDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDuctSilencerType::getClassType();
    static_cast< Model* > (m_model)->getIfcDuctSilencerType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDOORPANELPROPERTIES(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDoorPanelProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcDoorPanelProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMONETARYUNIT(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcMonetaryUnit::getClassType();
    static_cast< Model* > (m_model)->getIfcMonetaryUnit_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCWALLTYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcWallType::getClassType();
    static_cast< Model* > (m_model)->getIfcWallType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCIRCLEPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCircleProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcCircleProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSANITARYTERMINALTYPE(bool isFirst) {
  if (!loadIFCFLOWTERMINALTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSanitaryTerminalType::getClassType();
    static_cast< Model* > (m_model)->getIfcSanitaryTerminalType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOMPLEXPROPERTY(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (!loadIFCPROPERTY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcComplexProperty::getClassType();
    static_cast< Model* > (m_model)->getIfcComplexProperty_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 3) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcComplexProperty, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcComplexProperty, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcComplexProperty::getClassType(), 3, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCELECTRICAPPLIANCETYPE(bool isFirst) {
  if (!loadIFCFLOWTERMINALTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElectricApplianceType::getClassType();
    static_cast< Model* > (m_model)->getIfcElectricApplianceType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOFFSETCURVE2D(bool isFirst) {
  if (!loadIFCCURVE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcOffsetCurve2D::getClassType();
    static_cast< Model* > (m_model)->getIfcOffsetCurve2D_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFIRESUPPRESSIONTERMINALTYPE(bool isFirst) {
  if (!loadIFCFLOWTERMINALTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFireSuppressionTerminalType::getClassType();
    static_cast< Model* > (m_model)->getIfcFireSuppressionTerminalType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADSINGLEFORCE(bool isFirst) {
  if (!loadIFCSTRUCTURALLOADSTATIC(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralLoadSingleForce::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralLoadSingleForce_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOLUMN(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcColumn::getClassType();
    static_cast< Model* > (m_model)->getIfcColumn_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBUILDINGELEMENTTYPE(bool isFirst) {
  if (!loadIFCELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCTRANSPORTELEMENTTYPE(bool isFirst) {
  if (!loadIFCELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTransportElementType::getClassType();
    static_cast< Model* > (m_model)->getIfcTransportElementType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLINEARACTION(bool isFirst) {
  if (!loadIFCSTRUCTURALACTION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralLinearAction::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralLinearAction_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBLOCK(bool isFirst) {
  if (!loadIFCCSGPRIMITIVE3D(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBlock::getClassType();
    static_cast< Model* > (m_model)->getIfcBlock_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPREDEFINEDITEM(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCMAPPEDITEM(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMappedItem::getClassType();
    static_cast< Model* > (m_model)->getIfcMappedItem_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcMappedItem, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcMappedItem, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcMappedItem::getClassType(), 0, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCEQUIPMENTELEMENT(bool isFirst) {
  if (!loadIFCELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEquipmentElement::getClassType();
    static_cast< Model* > (m_model)->getIfcEquipmentElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFILTERTYPE(bool isFirst) {
  if (!loadIFCFLOWTREATMENTDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFilterType::getClassType();
    static_cast< Model* > (m_model)->getIfcFilterType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELCONNECTSWITHECCENTRICITY(bool isFirst) {
  if (!loadIFCRELCONNECTSSTRUCTURALMEMBER(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelConnectsWithEccentricity::getClassType();
    static_cast< Model* > (m_model)->getIfcRelConnectsWithEccentricity_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCAXIS2PLACEMENT3D(bool isFirst) {
  if (!loadIFCPLACEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAxis2Placement3D::getClassType();
    static_cast< Model* > (m_model)->getIfcAxis2Placement3D_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCREINFORCINGMESH(bool isFirst) {
  if (!loadIFCREINFORCINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcReinforcingMesh::getClassType();
    static_cast< Model* > (m_model)->getIfcReinforcingMesh_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDIRECTION(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDirection::getClassType();
    static_cast< Model* > (m_model)->getIfcDirection_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWCONTROLLER(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFlowController::getClassType();
    static_cast< Model* > (m_model)->getIfcFlowController_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFILLAREASTYLEHATCHING(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFillAreaStyleHatching::getClassType();
    static_cast< Model* > (m_model)->getIfcFillAreaStyleHatching_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLIGHTSOURCEGONIOMETRIC(bool isFirst) {
  if (!loadIFCLIGHTSOURCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLightSourceGoniometric::getClassType();
    static_cast< Model* > (m_model)->getIfcLightSourceGoniometric_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCURTAINWALL(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCurtainWall::getClassType();
    static_cast< Model* > (m_model)->getIfcCurtainWall_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYENUMERATEDVALUE(bool isFirst) {
  if (!loadIFCSIMPLEPROPERTY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPropertyEnumeratedValue::getClassType();
    static_cast< Model* > (m_model)->getIfcPropertyEnumeratedValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCONEDIRECTIONREPEATFACTOR(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcOneDirectionRepeatFactor::getClassType();
    static_cast< Model* > (m_model)->getIfcOneDirectionRepeatFactor_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCANNOTATIONOCCURRENCE(bool isFirst) {
  if (!loadIFCSTYLEDITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCPREDEFINEDDIMENSIONSYMBOL(bool isFirst) {
  if (!loadIFCPREDEFINEDSYMBOL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPreDefinedDimensionSymbol::getClassType();
    static_cast< Model* > (m_model)->getIfcPreDefinedDimensionSymbol_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCEDGELOOP(bool isFirst) {
  if (!loadIFCLOOP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEdgeLoop::getClassType();
    static_cast< Model* > (m_model)->getIfcEdgeLoop_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCWATERPROPERTIES(bool isFirst) {
  if (!loadIFCMATERIALPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcWaterProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcWaterProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONSTRAINTCLASSIFICATIONRELATIONSHIP(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcConstraintClassificationRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcConstraintClassificationRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcConstraintClassificationRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcConstraintClassificationRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcConstraintClassificationRelationship::getClassType(), 0, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOWNERHISTORY(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcOwnerHistory::getClassType();
    static_cast< Model* > (m_model)->getIfcOwnerHistory_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFILLAREASTYLE(bool isFirst) {
  if (!loadIFCPRESENTATIONSTYLE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFillAreaStyle::getClassType();
    static_cast< Model* > (m_model)->getIfcFillAreaStyle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDERIVEDPROFILEDEF(bool isFirst) {
  if (!loadIFCPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDerivedProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcDerivedProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSLABTYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSlabType::getClassType();
    static_cast< Model* > (m_model)->getIfcSlabType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCGASTERMINALTYPE(bool isFirst) {
  if (!loadIFCFLOWTERMINALTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcGasTerminalType::getClassType();
    static_cast< Model* > (m_model)->getIfcGasTerminalType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTYLEDREPRESENTATION(bool isFirst) {
  if (!loadIFCSTYLEMODEL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStyledRepresentation::getClassType();
    static_cast< Model* > (m_model)->getIfcStyledRepresentation_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELINTERACTIONREQUIREMENTS(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelInteractionRequirements::getClassType();
    static_cast< Model* > (m_model)->getIfcRelInteractionRequirements_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 7) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcRelInteractionRequirements, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcRelInteractionRequirements, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelInteractionRequirements::getClassType(), 7, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 8) {
    LOG_ERROR("Inverse links : Error during reading parameter 8 of IfcRelInteractionRequirements, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(8));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 8 of IfcRelInteractionRequirements, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelInteractionRequirements::getClassType(), 8, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCVALVETYPE(bool isFirst) {
  if (!loadIFCFLOWCONTROLLERTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcValveType::getClassType();
    static_cast< Model* > (m_model)->getIfcValveType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROPERTY(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCELEMENT(bool isFirst) {
  if (!loadIFCPRODUCT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCELEMENTASSEMBLY(bool isFirst) {
  if (!loadIFCELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElementAssembly::getClassType();
    static_cast< Model* > (m_model)->getIfcElementAssembly_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDUCTFITTINGTYPE(bool isFirst) {
  if (!loadIFCFLOWFITTINGTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDuctFittingType::getClassType();
    static_cast< Model* > (m_model)->getIfcDuctFittingType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALPLANARACTION(bool isFirst) {
  if (!loadIFCSTRUCTURALACTION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralPlanarAction::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralPlanarAction_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDEFINEDSYMBOL(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDefinedSymbol::getClassType();
    static_cast< Model* > (m_model)->getIfcDefinedSymbol_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSOCIATES(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (!loadIFCRELATIONSHIP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssociates::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssociates_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelAssociates, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelAssociates, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcRelAssociates::getClassType(), 4, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCRELASSIGNSTOCONTROL(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELASSIGNS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssignsToControl::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssignsToControl_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToControl, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToControl, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelAssignsToControl::getClassType(), 6, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFACESURFACE(bool isFirst) {
  if (!loadIFCFACE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFaceSurface::getClassType();
    static_cast< Model* > (m_model)->getIfcFaceSurface_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCORDERACTION(bool isFirst) {
  if (!loadIFCTASK(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcOrderAction::getClassType();
    static_cast< Model* > (m_model)->getIfcOrderAction_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWCONTROLLERTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCRELASSIGNSTOACTOR(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELASSIGNS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssignsToActor::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssignsToActor_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToActor, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToActor, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelAssignsToActor::getClassType(), 6, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCANNOTATIONSURFACEOCCURRENCE(bool isFirst) {
  if (!loadIFCANNOTATIONOCCURRENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAnnotationSurfaceOccurrence::getClassType();
    static_cast< Model* > (m_model)->getIfcAnnotationSurfaceOccurrence_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCENVIRONMENTALIMPACTVALUE(bool isFirst) {
  if (!loadIFCAPPLIEDVALUE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEnvironmentalImpactValue::getClassType();
    static_cast< Model* > (m_model)->getIfcEnvironmentalImpactValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDOCUMENTREFERENCE(bool isFirst) {
  if (!loadIFCEXTERNALREFERENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDocumentReference::getClassType();
    static_cast< Model* > (m_model)->getIfcDocumentReference_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBOILERTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBoilerType::getClassType();
    static_cast< Model* > (m_model)->getIfcBoilerType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMATERIALDEFINITIONREPRESENTATION(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCPRODUCTREPRESENTATION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMaterialDefinitionRepresentation::getClassType();
    static_cast< Model* > (m_model)->getIfcMaterialDefinitionRepresentation_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 3) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcMaterialDefinitionRepresentation, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcMaterialDefinitionRepresentation, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcMaterialDefinitionRepresentation::getClassType(), 3, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELECTRICALBASEPROPERTIES(bool isFirst) {
  if (!loadIFCENERGYPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElectricalBaseProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcElectricalBaseProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBOUNDEDSURFACE(bool isFirst) {
  if (!loadIFCSURFACE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBoundedSurface::getClassType();
    static_cast< Model* > (m_model)->getIfcBoundedSurface_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCAIRTOAIRHEATRECOVERYTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAirToAirHeatRecoveryType::getClassType();
    static_cast< Model* > (m_model)->getIfcAirToAirHeatRecoveryType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELCOVERSSPACES(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelCoversSpaces::getClassType();
    static_cast< Model* > (m_model)->getIfcRelCoversSpaces_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelCoversSpaces, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelCoversSpaces, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcRelCoversSpaces::getClassType(), 5, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelCoversSpaces, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelCoversSpaces, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelCoversSpaces::getClassType(), 4, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELCONNECTSSTRUCTURALMEMBER(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelConnectsStructuralMember::getClassType();
    static_cast< Model* > (m_model)->getIfcRelConnectsStructuralMember_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralMember, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralMember, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsStructuralMember::getClassType(), 5, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelConnectsStructuralMember, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelConnectsStructuralMember, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsStructuralMember::getClassType(), 4, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSPATIALSTRUCTUREELEMENT(bool isFirst) {
  if (!loadIFCPRODUCT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCCSGSOLID(bool isFirst) {
  if (!loadIFCSOLIDMODEL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCsgSolid::getClassType();
    static_cast< Model* > (m_model)->getIfcCsgSolid_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSYMBOLSTYLE(bool isFirst) {
  if (!loadIFCPRESENTATIONSTYLE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSymbolStyle::getClassType();
    static_cast< Model* > (m_model)->getIfcSymbolStyle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPIPESEGMENTTYPE(bool isFirst) {
  if (!loadIFCFLOWSEGMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPipeSegmentType::getClassType();
    static_cast< Model* > (m_model)->getIfcPipeSegmentType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTIMESERIESREFERENCERELATIONSHIP(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcTimeSeriesReferenceRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcTimeSeriesReferenceRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcTimeSeriesReferenceRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcTimeSeriesReferenceRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcTimeSeriesReferenceRelationship::getClassType(), 0, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPHYSICALSIMPLEQUANTITY(bool isFirst) {
  if (!loadIFCPHYSICALQUANTITY(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALCURVEMEMBER(bool isFirst) {
  if (!loadIFCSTRUCTURALMEMBER(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralCurveMember::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralCurveMember_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDOCUMENTINFORMATIONRELATIONSHIP(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcDocumentInformationRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcDocumentInformationRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcDocumentInformationRelationship, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcDocumentInformationRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcDocumentInformationRelationship::getClassType(), 1, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcDocumentInformationRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcDocumentInformationRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcDocumentInformationRelationship::getClassType(), 0, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSOUNDPROPERTIES(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSoundProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcSoundProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOSTVALUE(bool isFirst) {
  if (!loadIFCAPPLIEDVALUE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCostValue::getClassType();
    static_cast< Model* > (m_model)->getIfcCostValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSURFACE(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCRELSPACEBOUNDARY(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelSpaceBoundary::getClassType();
    static_cast< Model* > (m_model)->getIfcRelSpaceBoundary_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelSpaceBoundary, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelSpaceBoundary, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelSpaceBoundary::getClassType(), 5, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelSpaceBoundary, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelSpaceBoundary, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelSpaceBoundary::getClassType(), 4, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCAXIS1PLACEMENT(bool isFirst) {
  if (!loadIFCPLACEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAxis1Placement::getClassType();
    static_cast< Model* > (m_model)->getIfcAxis1Placement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLAMPTYPE(bool isFirst) {
  if (!loadIFCFLOWTERMINALTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLampType::getClassType();
    static_cast< Model* > (m_model)->getIfcLampType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDISTRIBUTIONCHAMBERELEMENTTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDistributionChamberElementType::getClassType();
    static_cast< Model* > (m_model)->getIfcDistributionChamberElementType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDISCRETEACCESSORYTYPE(bool isFirst) {
  if (!loadIFCELEMENTCOMPONENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDiscreteAccessoryType::getClassType();
    static_cast< Model* > (m_model)->getIfcDiscreteAccessoryType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDISTRIBUTIONELEMENTTYPE(bool isFirst) {
  if (!loadIFCELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDistributionElementType::getClassType();
    static_cast< Model* > (m_model)->getIfcDistributionElementType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCUNITARYEQUIPMENTTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcUnitaryEquipmentType::getClassType();
    static_cast< Model* > (m_model)->getIfcUnitaryEquipmentType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALMEMBER(bool isFirst) {
  if (!loadIFCSTRUCTURALITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCPROJECTORDER(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcProjectOrder::getClassType();
    static_cast< Model* > (m_model)->getIfcProjectOrder_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPOSTALADDRESS(bool isFirst) {
  if (!loadIFCADDRESS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPostalAddress::getClassType();
    static_cast< Model* > (m_model)->getIfcPostalAddress_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTSHAPEPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTShapeProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcTShapeProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMANIFOLDSOLIDBREP(bool isFirst) {
  if (!loadIFCSOLIDMODEL(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCCOSTITEM(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCostItem::getClassType();
    static_cast< Model* > (m_model)->getIfcCostItem_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPHYSICALCOMPLEXQUANTITY(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (!loadIFCPHYSICALQUANTITY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPhysicalComplexQuantity::getClassType();
    static_cast< Model* > (m_model)->getIfcPhysicalComplexQuantity_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 2) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcPhysicalComplexQuantity, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcPhysicalComplexQuantity, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcPhysicalComplexQuantity::getClassType(), 2, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCWINDOWSTYLE(bool isFirst) {
  if (!loadIFCTYPEPRODUCT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcWindowStyle::getClassType();
    static_cast< Model* > (m_model)->getIfcWindowStyle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLIGHTSOURCEPOSITIONAL(bool isFirst) {
  if (!loadIFCLIGHTSOURCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLightSourcePositional::getClassType();
    static_cast< Model* > (m_model)->getIfcLightSourcePositional_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDOCUMENTINFORMATION(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcDocumentInformation::getClassType();
    static_cast< Model* > (m_model)->getIfcDocumentInformation_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 3) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcDocumentInformation, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcDocumentInformation, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcDocumentInformation::getClassType(), 3, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCLABORRESOURCE(bool isFirst) {
  if (!loadIFCCONSTRUCTIONRESOURCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLaborResource::getClassType();
    static_cast< Model* > (m_model)->getIfcLaborResource_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCGRIDAXIS(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcGridAxis::getClassType();
    static_cast< Model* > (m_model)->getIfcGridAxis_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOLOURSPECIFICATION(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCEVAPORATORTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEvaporatorType::getClassType();
    static_cast< Model* > (m_model)->getIfcEvaporatorType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCABLECARRIERSEGMENTTYPE(bool isFirst) {
  if (!loadIFCFLOWSEGMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCableCarrierSegmentType::getClassType();
    static_cast< Model* > (m_model)->getIfcCableCarrierSegmentType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSOCIATESAPPROVAL(bool isFirst) {
  if (!loadIFCRELASSOCIATES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssociatesApproval::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssociatesApproval_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSPACEHEATERTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSpaceHeaterType::getClassType();
    static_cast< Model* > (m_model)->getIfcSpaceHeaterType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFACEBASEDSURFACEMODEL(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFaceBasedSurfaceModel::getClassType();
    static_cast< Model* > (m_model)->getIfcFaceBasedSurfaceModel_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCIRCLEHOLLOWPROFILEDEF(bool isFirst) {
  if (!loadIFCCIRCLEPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCircleHollowProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcCircleHollowProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOMPRESSORTYPE(bool isFirst) {
  if (!loadIFCFLOWMOVINGDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCompressorType::getClassType();
    static_cast< Model* > (m_model)->getIfcCompressorType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFACE(bool isFirst) {
  if (!loadIFCTOPOLOGICALREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFace::getClassType();
    static_cast< Model* > (m_model)->getIfcFace_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSIMPLEPROPERTY(bool isFirst) {
  if (!loadIFCPROPERTY(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCADDRESS(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCFASTENERTYPE(bool isFirst) {
  if (!loadIFCELEMENTCOMPONENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFastenerType::getClassType();
    static_cast< Model* > (m_model)->getIfcFastenerType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMOTORCONNECTIONTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMotorConnectionType::getClassType();
    static_cast< Model* > (m_model)->getIfcMotorConnectionType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCREGULARTIMESERIES(bool isFirst) {
  if (!loadIFCTIMESERIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRegularTimeSeries::getClassType();
    static_cast< Model* > (m_model)->getIfcRegularTimeSeries_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCDIMENSIONCALLOUTRELATIONSHIP(bool isFirst) {
  if (!loadIFCDRAUGHTINGCALLOUTRELATIONSHIP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDimensionCalloutRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcDimensionCalloutRelationship_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCREPRESENTATIONITEM(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCRELCONNECTS(bool isFirst) {
  if (!loadIFCRELATIONSHIP(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCRECTANGULARPYRAMID(bool isFirst) {
  if (!loadIFCCSGPRIMITIVE3D(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRectangularPyramid::getClassType();
    static_cast< Model* > (m_model)->getIfcRectangularPyramid_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSURFACEOFREVOLUTION(bool isFirst) {
  if (!loadIFCSWEPTSURFACE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSurfaceOfRevolution::getClassType();
    static_cast< Model* > (m_model)->getIfcSurfaceOfRevolution_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRAILING(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRailing::getClassType();
    static_cast< Model* > (m_model)->getIfcRailing_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLIGHTSOURCEDIRECTIONAL(bool isFirst) {
  if (!loadIFCLIGHTSOURCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLightSourceDirectional::getClassType();
    static_cast< Model* > (m_model)->getIfcLightSourceDirectional_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALCURVECONNECTION(bool isFirst) {
  if (!loadIFCSTRUCTURALCONNECTION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralCurveConnection::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralCurveConnection_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTABLE(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcTable::getClassType();
    static_cast< Model* > (m_model)->getIfcTable_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcTable, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcTable, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcTable::getClassType(), 1, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYSET(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPropertySet::getClassType();
    static_cast< Model* > (m_model)->getIfcPropertySet_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTOPOLOGYREPRESENTATION(bool isFirst) {
  if (!loadIFCSHAPEMODEL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTopologyRepresentation::getClassType();
    static_cast< Model* > (m_model)->getIfcTopologyRepresentation_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCIRCLE(bool isFirst) {
  if (!loadIFCCONIC(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCircle::getClassType();
    static_cast< Model* > (m_model)->getIfcCircle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDISTRIBUTIONPORT(bool isFirst) {
  if (!loadIFCPORT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDistributionPort::getClassType();
    static_cast< Model* > (m_model)->getIfcDistributionPort_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCEQUIPMENTSTANDARD(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEquipmentStandard::getClassType();
    static_cast< Model* > (m_model)->getIfcEquipmentStandard_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCACTUATORTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcActuatorType::getClassType();
    static_cast< Model* > (m_model)->getIfcActuatorType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWMOVINGDEVICETYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCAIRTERMINALBOXTYPE(bool isFirst) {
  if (!loadIFCFLOWCONTROLLERTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAirTerminalBoxType::getClassType();
    static_cast< Model* > (m_model)->getIfcAirTerminalBoxType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSERVICELIFEFACTOR(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcServiceLifeFactor::getClassType();
    static_cast< Model* > (m_model)->getIfcServiceLifeFactor_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCREINFORCINGELEMENT(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTCOMPONENT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCCONSTRUCTIONPRODUCTRESOURCE(bool isFirst) {
  if (!loadIFCCONSTRUCTIONRESOURCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcConstructionProductResource::getClassType();
    static_cast< Model* > (m_model)->getIfcConstructionProductResource_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTERMINATORSYMBOL(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCANNOTATIONSYMBOLOCCURRENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTerminatorSymbol::getClassType();
    static_cast< Model* > (m_model)->getIfcTerminatorSymbol_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 3) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcTerminatorSymbol, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcTerminatorSymbol, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcTerminatorSymbol::getClassType(), 3, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWFITTINGTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFC2DCOMPOSITECURVE(bool isFirst) {
  if (!loadIFCCOMPOSITECURVE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = Ifc2DCompositeCurve::getClassType();
    static_cast< Model* > (m_model)->getIfc2DCompositeCurve_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMEMBER(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMember::getClassType();
    static_cast< Model* > (m_model)->getIfcMember_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPOLYLOOP(bool isFirst) {
  if (!loadIFCLOOP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPolyLoop::getClassType();
    static_cast< Model* > (m_model)->getIfcPolyLoop_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSITE(bool isFirst) {
  if (!loadIFCSPATIALSTRUCTUREELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSite::getClassType();
    static_cast< Model* > (m_model)->getIfcSite_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMEMBERTYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMemberType::getClassType();
    static_cast< Model* > (m_model)->getIfcMemberType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADLINEARFORCE(bool isFirst) {
  if (!loadIFCSTRUCTURALLOADSTATIC(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralLoadLinearForce::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralLoadLinearForce_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCLASSIFICATIONITEMRELATIONSHIP(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcClassificationItemRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcClassificationItemRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcClassificationItemRelationship, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcClassificationItemRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcClassificationItemRelationship::getClassType(), 1, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcClassificationItemRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcClassificationItemRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcClassificationItemRelationship::getClassType(), 0, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCAPPROVALACTORRELATIONSHIP(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcApprovalActorRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcApprovalActorRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcApprovalActorRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcApprovalActorRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcApprovalActorRelationship::getClassType(), 1, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFAILURECONNECTIONCONDITION(bool isFirst) {
  if (!loadIFCSTRUCTURALCONNECTIONCONDITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFailureConnectionCondition::getClassType();
    static_cast< Model* > (m_model)->getIfcFailureConnectionCondition_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBOUNDARYNODECONDITION(bool isFirst) {
  if (!loadIFCBOUNDARYCONDITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBoundaryNodeCondition::getClassType();
    static_cast< Model* > (m_model)->getIfcBoundaryNodeCondition_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTEXTSTYLEWITHBOXCHARACTERISTICS(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcTextStyleWithBoxCharacteristics::getClassType();
    static_cast< Model* > (m_model)->getIfcTextStyleWithBoxCharacteristics_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCAIRTERMINALTYPE(bool isFirst) {
  if (!loadIFCFLOWTERMINALTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAirTerminalType::getClassType();
    static_cast< Model* > (m_model)->getIfcAirTerminalType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPIPEFITTINGTYPE(bool isFirst) {
  if (!loadIFCFLOWFITTINGTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPipeFittingType::getClassType();
    static_cast< Model* > (m_model)->getIfcPipeFittingType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCVIRTUALELEMENT(bool isFirst) {
  if (!loadIFCELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcVirtualElement::getClassType();
    static_cast< Model* > (m_model)->getIfcVirtualElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCANNOTATIONFILLAREA(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAnnotationFillArea::getClassType();
    static_cast< Model* > (m_model)->getIfcAnnotationFillArea_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCVERTEXLOOP(bool isFirst) {
  if (!loadIFCLOOP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcVertexLoop::getClassType();
    static_cast< Model* > (m_model)->getIfcVertexLoop_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSIUNIT(bool isFirst) {
  if (!loadIFCNAMEDUNIT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSIUnit::getClassType();
    static_cast< Model* > (m_model)->getIfcSIUnit_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCGEOMETRICCURVESET(bool isFirst) {
  if (!loadIFCGEOMETRICSET(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcGeometricCurveSet::getClassType();
    static_cast< Model* > (m_model)->getIfcGeometricCurveSet_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCACTORROLE(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcActorRole::getClassType();
    static_cast< Model* > (m_model)->getIfcActorRole_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELDEFINESBYPROPERTIES(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELDEFINES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelDefinesByProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcRelDefinesByProperties_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelDefinesByProperties, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelDefinesByProperties, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelDefinesByProperties::getClassType(), 5, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBUILDINGELEMENT(bool isFirst) {
  if (!loadIFCELEMENT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCMATERIALLAYERSET(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcMaterialLayerSet::getClassType();
    static_cast< Model* > (m_model)->getIfcMaterialLayerSet_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcMaterialLayerSet, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcMaterialLayerSet, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcMaterialLayerSet::getClassType(), 0, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALCONNECTION(bool isFirst) {
  if (!loadIFCSTRUCTURALITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCRECTANGLEPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRectangleProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcRectangleProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTEXTLITERALWITHEXTENT(bool isFirst) {
  if (!loadIFCTEXTLITERAL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTextLiteralWithExtent::getClassType();
    static_cast< Model* > (m_model)->getIfcTextLiteralWithExtent_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCWORKCONTROL(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCHUMIDIFIERTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcHumidifierType::getClassType();
    static_cast< Model* > (m_model)->getIfcHumidifierType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBOOLEANCLIPPINGRESULT(bool isFirst) {
  if (!loadIFCBOOLEANRESULT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBooleanClippingResult::getClassType();
    static_cast< Model* > (m_model)->getIfcBooleanClippingResult_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELSEQUENCE(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelSequence::getClassType();
    static_cast< Model* > (m_model)->getIfcRelSequence_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelSequence, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelSequence, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelSequence::getClassType(), 5, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelSequence, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelSequence, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelSequence::getClassType(), 4, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCQUANTITYWEIGHT(bool isFirst) {
  if (!loadIFCPHYSICALSIMPLEQUANTITY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcQuantityWeight::getClassType();
    static_cast< Model* > (m_model)->getIfcQuantityWeight_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBOUNDARYNODECONDITIONWARPING(bool isFirst) {
  if (!loadIFCBOUNDARYNODECONDITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBoundaryNodeConditionWarping::getClassType();
    static_cast< Model* > (m_model)->getIfcBoundaryNodeConditionWarping_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSCHEDULETIMECONTROL(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcScheduleTimeControl::getClassType();
    static_cast< Model* > (m_model)->getIfcScheduleTimeControl_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBEAMTYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBeamType::getClassType();
    static_cast< Model* > (m_model)->getIfcBeamType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOBJECTPLACEMENT(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCPROTECTIVEDEVICETYPE(bool isFirst) {
  if (!loadIFCFLOWCONTROLLERTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcProtectiveDeviceType::getClassType();
    static_cast< Model* > (m_model)->getIfcProtectiveDeviceType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCURRENCYRELATIONSHIP(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcCurrencyRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcCurrencyRelationship_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSOLIDMODEL(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCRELASSIGNSTOPROCESS(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELASSIGNS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssignsToProcess::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssignsToProcess_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToProcess, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToProcess, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelAssignsToProcess::getClassType(), 6, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCROUNDEDRECTANGLEPROFILEDEF(bool isFirst) {
  if (!loadIFCRECTANGLEPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRoundedRectangleProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcRoundedRectangleProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCQUANTITYTIME(bool isFirst) {
  if (!loadIFCPHYSICALSIMPLEQUANTITY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcQuantityTime::getClassType();
    static_cast< Model* > (m_model)->getIfcQuantityTime_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALSURFACEMEMBERVARYING(bool isFirst) {
  if (!loadIFCSTRUCTURALSURFACEMEMBER(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralSurfaceMemberVarying::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralSurfaceMemberVarying_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPERFORMANCEHISTORY(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPerformanceHistory::getClassType();
    static_cast< Model* > (m_model)->getIfcPerformanceHistory_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCWINDOWLININGPROPERTIES(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcWindowLiningProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcWindowLiningProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSOCIATESLIBRARY(bool isFirst) {
  if (!loadIFCRELASSOCIATES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssociatesLibrary::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssociatesLibrary_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOMPOSITEPROFILEDEF(bool isFirst) {
  if (!loadIFCPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCompositeProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcCompositeProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCEDGEFEATURE(bool isFirst) {
  if (!loadIFCFEATUREELEMENTSUBTRACTION(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCFLOWTREATMENTDEVICETYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCCONNECTIONSURFACEGEOMETRY(bool isFirst) {
  if (!loadIFCCONNECTIONGEOMETRY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcConnectionSurfaceGeometry::getClassType();
    static_cast< Model* > (m_model)->getIfcConnectionSurfaceGeometry_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYLISTVALUE(bool isFirst) {
  if (!loadIFCSIMPLEPROPERTY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPropertyListValue::getClassType();
    static_cast< Model* > (m_model)->getIfcPropertyListValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYCONSTRAINTRELATIONSHIP(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcPropertyConstraintRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcPropertyConstraintRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcPropertyConstraintRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcPropertyConstraintRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcPropertyConstraintRelationship::getClassType(), 0, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLIGHTDISTRIBUTIONDATA(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcLightDistributionData::getClassType();
    static_cast< Model* > (m_model)->getIfcLightDistributionData_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSHAPEASPECT(bool isFirst) {
  Step::StepId currentRef;
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcShapeAspect::getClassType();
    static_cast< Model* > (m_model)->getIfcShapeAspect_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcShapeAspect, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcShapeAspect, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcShapeAspect::getClassType(), 4, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcShapeAspect, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcShapeAspect, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcShapeAspect::getClassType(), 0, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCLINE(bool isFirst) {
  if (!loadIFCCURVE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLine::getClassType();
    static_cast< Model* > (m_model)->getIfcLine_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTOPOLOGICALREPRESENTATIONITEM(bool isFirst) {
  if (!loadIFCREPRESENTATIONITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCCOMPOSITECURVESEGMENT(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCompositeCurveSegment::getClassType();
    static_cast< Model* > (m_model)->getIfcCompositeCurveSegment_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSOCIATESDOCUMENT(bool isFirst) {
  if (!loadIFCRELASSOCIATES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssociatesDocument::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssociatesDocument_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALITEM(bool isFirst) {
  if (!loadIFCPRODUCT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCORGANIZATION(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcOrganization::getClassType();
    static_cast< Model* > (m_model)->getIfcOrganization_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcOrganization, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcOrganization, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcOrganization::getClassType(), 4, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCCURVESTYLEFONT(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcCurveStyleFont::getClassType();
    static_cast< Model* > (m_model)->getIfcCurveStyleFont_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONTROLLERTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcControllerType::getClassType();
    static_cast< Model* > (m_model)->getIfcControllerType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFANTYPE(bool isFirst) {
  if (!loadIFCFLOWMOVINGDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFanType::getClassType();
    static_cast< Model* > (m_model)->getIfcFanType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTWODIRECTIONREPEATFACTOR(bool isFirst) {
  if (!loadIFCONEDIRECTIONREPEATFACTOR(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTwoDirectionRepeatFactor::getClassType();
    static_cast< Model* > (m_model)->getIfcTwoDirectionRepeatFactor_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSENSORTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSensorType::getClassType();
    static_cast< Model* > (m_model)->getIfcSensorType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBUILDINGELEMENTPROXYTYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBuildingElementProxyType::getClassType();
    static_cast< Model* > (m_model)->getIfcBuildingElementProxyType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTELECOMADDRESS(bool isFirst) {
  if (!loadIFCADDRESS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTelecomAddress::getClassType();
    static_cast< Model* > (m_model)->getIfcTelecomAddress_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDOORLININGPROPERTIES(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDoorLiningProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcDoorLiningProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOBJECT(bool isFirst) {
  if (!loadIFCOBJECTDEFINITION(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCRELCONTAINEDINSPATIALSTRUCTURE(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelContainedInSpatialStructure::getClassType();
    static_cast< Model* > (m_model)->getIfcRelContainedInSpatialStructure_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelContainedInSpatialStructure, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelContainedInSpatialStructure, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcRelContainedInSpatialStructure::getClassType(), 4, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelContainedInSpatialStructure, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelContainedInSpatialStructure, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelContainedInSpatialStructure::getClassType(), 5, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLUIDFLOWPROPERTIES(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFluidFlowProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcFluidFlowProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCABLESEGMENTTYPE(bool isFirst) {
  if (!loadIFCFLOWSEGMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCableSegmentType::getClassType();
    static_cast< Model* > (m_model)->getIfcCableSegmentType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCACTIONREQUEST(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcActionRequest::getClassType();
    static_cast< Model* > (m_model)->getIfcActionRequest_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALSURFACEMEMBER(bool isFirst) {
  if (!loadIFCSTRUCTURALMEMBER(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralSurfaceMember::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralSurfaceMember_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSOCIATESMATERIAL(bool isFirst) {
  if (!loadIFCRELASSOCIATES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssociatesMaterial::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssociatesMaterial_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCSHAPEPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCShapeProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcCShapeProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCEDGECURVE(bool isFirst) {
  if (!loadIFCEDGE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEdgeCurve::getClassType();
    static_cast< Model* > (m_model)->getIfcEdgeCurve_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONNECTIONCURVEGEOMETRY(bool isFirst) {
  if (!loadIFCCONNECTIONGEOMETRY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcConnectionCurveGeometry::getClassType();
    static_cast< Model* > (m_model)->getIfcConnectionCurveGeometry_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELECTRICMOTORTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElectricMotorType::getClassType();
    static_cast< Model* > (m_model)->getIfcElectricMotorType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTIMESERIESVALUE(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcTimeSeriesValue::getClassType();
    static_cast< Model* > (m_model)->getIfcTimeSeriesValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDRAUGHTINGCALLOUT(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDraughtingCallout::getClassType();
    static_cast< Model* > (m_model)->getIfcDraughtingCallout_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELECTRICALCIRCUIT(bool isFirst) {
  if (!loadIFCSYSTEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElectricalCircuit::getClassType();
    static_cast< Model* > (m_model)->getIfcElectricalCircuit_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSURFACESTYLEWITHTEXTURES(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcSurfaceStyleWithTextures::getClassType();
    static_cast< Model* > (m_model)->getIfcSurfaceStyleWithTextures_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWTERMINAL(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFlowTerminal::getClassType();
    static_cast< Model* > (m_model)->getIfcFlowTerminal_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSURFACESTYLERENDERING(bool isFirst) {
  if (!loadIFCSURFACESTYLESHADING(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSurfaceStyleRendering::getClassType();
    static_cast< Model* > (m_model)->getIfcSurfaceStyleRendering_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELCONNECTSPATHELEMENTS(bool isFirst) {
  if (!loadIFCRELCONNECTSELEMENTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelConnectsPathElements::getClassType();
    static_cast< Model* > (m_model)->getIfcRelConnectsPathElements_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCUSHAPEPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcUShapeProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcUShapeProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOPENINGELEMENT(bool isFirst) {
  if (!loadIFCFEATUREELEMENTSUBTRACTION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcOpeningElement::getClassType();
    static_cast< Model* > (m_model)->getIfcOpeningElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTEXTURECOORDINATE(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCCONNECTIONPORTGEOMETRY(bool isFirst) {
  if (!loadIFCCONNECTIONGEOMETRY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcConnectionPortGeometry::getClassType();
    static_cast< Model* > (m_model)->getIfcConnectionPortGeometry_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBUILDINGSTOREY(bool isFirst) {
  if (!loadIFCSPATIALSTRUCTUREELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBuildingStorey::getClassType();
    static_cast< Model* > (m_model)->getIfcBuildingStorey_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELCONNECTSSTRUCTURALACTIVITY(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelConnectsStructuralActivity::getClassType();
    static_cast< Model* > (m_model)->getIfcRelConnectsStructuralActivity_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralActivity, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralActivity, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsStructuralActivity::getClassType(), 5, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelConnectsStructuralActivity, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelConnectsStructuralActivity, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsStructuralActivity::getClassType(), 4, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCEXTERNALLYDEFINEDSYMBOL(bool isFirst) {
  if (!loadIFCEXTERNALREFERENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcExternallyDefinedSymbol::getClassType();
    static_cast< Model* > (m_model)->getIfcExternallyDefinedSymbol_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCQUANTITYLENGTH(bool isFirst) {
  if (!loadIFCPHYSICALSIMPLEQUANTITY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcQuantityLength::getClassType();
    static_cast< Model* > (m_model)->getIfcQuantityLength_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCQUANTITYAREA(bool isFirst) {
  if (!loadIFCPHYSICALSIMPLEQUANTITY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcQuantityArea::getClassType();
    static_cast< Model* > (m_model)->getIfcQuantityArea_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPREDEFINEDPOINTMARKERSYMBOL(bool isFirst) {
  if (!loadIFCPREDEFINEDSYMBOL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPreDefinedPointMarkerSymbol::getClassType();
    static_cast< Model* > (m_model)->getIfcPreDefinedPointMarkerSymbol_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPHYSICALQUANTITY(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCLIGHTSOURCEAMBIENT(bool isFirst) {
  if (!loadIFCLIGHTSOURCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLightSourceAmbient::getClassType();
    static_cast< Model* > (m_model)->getIfcLightSourceAmbient_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWMETERTYPE(bool isFirst) {
  if (!loadIFCFLOWCONTROLLERTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFlowMeterType::getClassType();
    static_cast< Model* > (m_model)->getIfcFlowMeterType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSECTIONPROPERTIES(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcSectionProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcSectionProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRAMPFLIGHTTYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRampFlightType::getClassType();
    static_cast< Model* > (m_model)->getIfcRampFlightType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLOCALPLACEMENT(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCOBJECTPLACEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLocalPlacement::getClassType();
    static_cast< Model* > (m_model)->getIfcLocalPlacement_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcLocalPlacement, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcLocalPlacement, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcLocalPlacement::getClassType(), 0, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELDEFINES(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (!loadIFCRELATIONSHIP(false)) {
    return false;
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelDefines, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelDefines, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcRelDefines::getClassType(), 4, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCCURVEBOUNDEDPLANE(bool isFirst) {
  if (!loadIFCBOUNDEDSURFACE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCurveBoundedPlane::getClassType();
    static_cast< Model* > (m_model)->getIfcCurveBoundedPlane_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBOUNDARYFACECONDITION(bool isFirst) {
  if (!loadIFCBOUNDARYCONDITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBoundaryFaceCondition::getClassType();
    static_cast< Model* > (m_model)->getIfcBoundaryFaceCondition_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCINVENTORY(bool isFirst) {
  if (!loadIFCGROUP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcInventory::getClassType();
    static_cast< Model* > (m_model)->getIfcInventory_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCWINDOWPANELPROPERTIES(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcWindowPanelProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcWindowPanelProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONDITION(bool isFirst) {
  if (!loadIFCGROUP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCondition::getClassType();
    static_cast< Model* > (m_model)->getIfcCondition_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCREPRESENTATIONMAP(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcRepresentationMap::getClassType();
    static_cast< Model* > (m_model)->getIfcRepresentationMap_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcRepresentationMap, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcRepresentationMap, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRepresentationMap::getClassType(), 1, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBUILDING(bool isFirst) {
  if (!loadIFCSPATIALSTRUCTUREELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBuilding::getClassType();
    static_cast< Model* > (m_model)->getIfcBuilding_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONVERSIONBASEDUNIT(bool isFirst) {
  if (!loadIFCNAMEDUNIT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcConversionBasedUnit::getClassType();
    static_cast< Model* > (m_model)->getIfcConversionBasedUnit_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCJUNCTIONBOXTYPE(bool isFirst) {
  if (!loadIFCFLOWFITTINGTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcJunctionBoxType::getClassType();
    static_cast< Model* > (m_model)->getIfcJunctionBoxType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSPACETHERMALLOADPROPERTIES(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSpaceThermalLoadProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcSpaceThermalLoadProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPREDEFINEDCURVEFONT(bool isFirst) {
  if (!loadIFCPREDEFINEDITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCEXTERNALLYDEFINEDTEXTFONT(bool isFirst) {
  if (!loadIFCEXTERNALREFERENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcExternallyDefinedTextFont::getClassType();
    static_cast< Model* > (m_model)->getIfcExternallyDefinedTextFont_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPRESENTATIONLAYERWITHSTYLE(bool isFirst) {
  if (!loadIFCPRESENTATIONLAYERASSIGNMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPresentationLayerWithStyle::getClassType();
    static_cast< Model* > (m_model)->getIfcPresentationLayerWithStyle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONNECTIONGEOMETRY(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCVERTEXBASEDTEXTUREMAP(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcVertexBasedTextureMap::getClassType();
    static_cast< Model* > (m_model)->getIfcVertexBasedTextureMap_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCREINFORCINGBAR(bool isFirst) {
  if (!loadIFCREINFORCINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcReinforcingBar::getClassType();
    static_cast< Model* > (m_model)->getIfcReinforcingBar_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELECTRICTIMECONTROLTYPE(bool isFirst) {
  if (!loadIFCFLOWCONTROLLERTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElectricTimeControlType::getClassType();
    static_cast< Model* > (m_model)->getIfcElectricTimeControlType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFILLAREASTYLETILESYMBOLWITHSTYLE(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFillAreaStyleTileSymbolWithStyle::getClassType();
    static_cast< Model* > (m_model)->getIfcFillAreaStyleTileSymbolWithStyle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALACTION(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCSTRUCTURALACTIVITY(false)) {
    return false;
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 10) {
    LOG_ERROR("Inverse links : Error during reading parameter 10 of IfcStructuralAction, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(10));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 10 of IfcStructuralAction, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcStructuralAction::getClassType(), 10, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYTABLEVALUE(bool isFirst) {
  if (!loadIFCSIMPLEPROPERTY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPropertyTableValue::getClassType();
    static_cast< Model* > (m_model)->getIfcPropertyTableValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELCONNECTSELEMENTS(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelConnectsElements::getClassType();
    static_cast< Model* > (m_model)->getIfcRelConnectsElements_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsElements, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsElements, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsElements::getClassType(), 5, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelConnectsElements, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelConnectsElements, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsElements::getClassType(), 6, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONTEXTDEPENDENTUNIT(bool isFirst) {
  if (!loadIFCNAMEDUNIT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcContextDependentUnit::getClassType();
    static_cast< Model* > (m_model)->getIfcContextDependentUnit_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCISHAPEPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcIShapeProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcIShapeProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCURVE(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCTENDONANCHOR(bool isFirst) {
  if (!loadIFCREINFORCINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTendonAnchor::getClassType();
    static_cast< Model* > (m_model)->getIfcTendonAnchor_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMECHANICALFASTENER(bool isFirst) {
  if (!loadIFCFASTENER(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMechanicalFastener::getClassType();
    static_cast< Model* > (m_model)->getIfcMechanicalFastener_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCANNOTATIONCURVEOCCURRENCE(bool isFirst) {
  if (!loadIFCANNOTATIONOCCURRENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAnnotationCurveOccurrence::getClassType();
    static_cast< Model* > (m_model)->getIfcAnnotationCurveOccurrence_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALPOINTREACTION(bool isFirst) {
  if (!loadIFCSTRUCTURALREACTION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralPointReaction::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralPointReaction_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSECTIONREINFORCEMENTPROPERTIES(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcSectionReinforcementProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcSectionReinforcementProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBUILDINGELEMENTPROXY(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBuildingElementProxy::getClassType();
    static_cast< Model* > (m_model)->getIfcBuildingElementProxy_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTEXTLITERAL(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTextLiteral::getClassType();
    static_cast< Model* > (m_model)->getIfcTextLiteral_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPOINTONCURVE(bool isFirst) {
  if (!loadIFCPOINT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPointOnCurve::getClassType();
    static_cast< Model* > (m_model)->getIfcPointOnCurve_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCAPPROVAL(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcApproval::getClassType();
    static_cast< Model* > (m_model)->getIfcApproval_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADSINGLEFORCEWARPING(bool isFirst) {
  if (!loadIFCSTRUCTURALLOADSINGLEFORCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralLoadSingleForceWarping::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralLoadSingleForceWarping_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLINEARDIMENSION(bool isFirst) {
  if (!loadIFCDIMENSIONCURVEDIRECTEDCALLOUT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLinearDimension::getClassType();
    static_cast< Model* > (m_model)->getIfcLinearDimension_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSERVICELIFE(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcServiceLife::getClassType();
    static_cast< Model* > (m_model)->getIfcServiceLife_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELECTRICGENERATORTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElectricGeneratorType::getClassType();
    static_cast< Model* > (m_model)->getIfcElectricGeneratorType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOOLINGTOWERTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCoolingTowerType::getClassType();
    static_cast< Model* > (m_model)->getIfcCoolingTowerType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPREDEFINEDSYMBOL(bool isFirst) {
  if (!loadIFCPREDEFINEDITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCSLAB(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSlab::getClassType();
    static_cast< Model* > (m_model)->getIfcSlab_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROJECTORDERRECORD(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcProjectOrderRecord::getClassType();
    static_cast< Model* > (m_model)->getIfcProjectOrderRecord_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMATERIALLIST(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcMaterialList::getClassType();
    static_cast< Model* > (m_model)->getIfcMaterialList_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBUILDINGELEMENTCOMPONENT(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCCOORDINATEDUNIVERSALTIMEOFFSET(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcCoordinatedUniversalTimeOffset::getClassType();
    static_cast< Model* > (m_model)->getIfcCoordinatedUniversalTimeOffset_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDIMENSIONCURVEDIRECTEDCALLOUT(bool isFirst) {
  if (!loadIFCDRAUGHTINGCALLOUT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDimensionCurveDirectedCallout::getClassType();
    static_cast< Model* > (m_model)->getIfcDimensionCurveDirectedCallout_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMATERIALLAYERSETUSAGE(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcMaterialLayerSetUsage::getClassType();
    static_cast< Model* > (m_model)->getIfcMaterialLayerSetUsage_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPERMEABLECOVERINGPROPERTIES(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPermeableCoveringProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcPermeableCoveringProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCWALL(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcWall::getClassType();
    static_cast< Model* > (m_model)->getIfcWall_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADGROUP(bool isFirst) {
  if (!loadIFCGROUP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralLoadGroup::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralLoadGroup_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFURNITURETYPE(bool isFirst) {
  if (!loadIFCFURNISHINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFurnitureType::getClassType();
    static_cast< Model* > (m_model)->getIfcFurnitureType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPUMPTYPE(bool isFirst) {
  if (!loadIFCFLOWMOVINGDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPumpType::getClassType();
    static_cast< Model* > (m_model)->getIfcPumpType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYREFERENCEVALUE(bool isFirst) {
  if (!loadIFCSIMPLEPROPERTY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPropertyReferenceValue::getClassType();
    static_cast< Model* > (m_model)->getIfcPropertyReferenceValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR2DNONUNIFORM(bool isFirst) {
  if (!loadIFCCARTESIANTRANSFORMATIONOPERATOR2D(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCartesianTransformationOperator2DnonUniform::getClassType();
    static_cast< Model* > (m_model)->getIfcCartesianTransformationOperator2DnonUniform_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCEXTERNALLYDEFINEDSURFACESTYLE(bool isFirst) {
  if (!loadIFCEXTERNALREFERENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcExternallyDefinedSurfaceStyle::getClassType();
    static_cast< Model* > (m_model)->getIfcExternallyDefinedSurfaceStyle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROJECTIONELEMENT(bool isFirst) {
  if (!loadIFCFEATUREELEMENTADDITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcProjectionElement::getClassType();
    static_cast< Model* > (m_model)->getIfcProjectionElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELCONNECTSPORTTOELEMENT(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelConnectsPortToElement::getClassType();
    static_cast< Model* > (m_model)->getIfcRelConnectsPortToElement_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsPortToElement, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsPortToElement, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsPortToElement::getClassType(), 5, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelConnectsPortToElement, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelConnectsPortToElement, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsPortToElement::getClassType(), 4, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCORGANIZATIONRELATIONSHIP(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcOrganizationRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcOrganizationRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 3) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcOrganizationRelationship, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcOrganizationRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcOrganizationRelationship::getClassType(), 3, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 2) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcOrganizationRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcOrganizationRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcOrganizationRelationship::getClassType(), 2, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMOVE(bool isFirst) {
  if (!loadIFCTASK(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMove::getClassType();
    static_cast< Model* > (m_model)->getIfcMove_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRIGHTCIRCULARCYLINDER(bool isFirst) {
  if (!loadIFCCSGPRIMITIVE3D(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRightCircularCylinder::getClassType();
    static_cast< Model* > (m_model)->getIfcRightCircularCylinder_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYDEFINITION(bool isFirst) {
  if (!loadIFCROOT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCELECTRICFLOWSTORAGEDEVICETYPE(bool isFirst) {
  if (!loadIFCFLOWSTORAGEDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElectricFlowStorageDeviceType::getClassType();
    static_cast< Model* > (m_model)->getIfcElectricFlowStorageDeviceType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSIGNSTORESOURCE(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELASSIGNS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssignsToResource::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssignsToResource_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToResource, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToResource, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelAssignsToResource::getClassType(), 6, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSWEPTAREASOLID(bool isFirst) {
  if (!loadIFCSOLIDMODEL(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCPRODUCTREPRESENTATION(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcProductRepresentation::getClassType();
    static_cast< Model* > (m_model)->getIfcProductRepresentation_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 2) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcProductRepresentation, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcProductRepresentation, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcProductRepresentation::getClassType(), 2, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCSURFACESTYLEREFRACTION(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcSurfaceStyleRefraction::getClassType();
    static_cast< Model* > (m_model)->getIfcSurfaceStyleRefraction_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCREPRESENTATION(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcRepresentation::getClassType();
    static_cast< Model* > (m_model)->getIfcRepresentation_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcRepresentation, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcRepresentation, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRepresentation::getClassType(), 0, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOPENSHELL(bool isFirst) {
  if (!loadIFCCONNECTEDFACESET(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcOpenShell::getClassType();
    static_cast< Model* > (m_model)->getIfcOpenShell_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELCONNECTSPORTS(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelConnectsPorts::getClassType();
    static_cast< Model* > (m_model)->getIfcRelConnectsPorts_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsPorts, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsPorts, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsPorts::getClassType(), 5, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelConnectsPorts, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelConnectsPorts, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsPorts::getClassType(), 4, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROJECTIONCURVE(bool isFirst) {
  if (!loadIFCANNOTATIONCURVEOCCURRENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcProjectionCurve::getClassType();
    static_cast< Model* > (m_model)->getIfcProjectionCurve_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCLASSIFICATIONREFERENCE(bool isFirst) {
  if (!loadIFCEXTERNALREFERENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcClassificationReference::getClassType();
    static_cast< Model* > (m_model)->getIfcClassificationReference_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTUBEBUNDLETYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTubeBundleType::getClassType();
    static_cast< Model* > (m_model)->getIfcTubeBundleType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELCONNECTSSTRUCTURALELEMENT(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelConnectsStructuralElement::getClassType();
    static_cast< Model* > (m_model)->getIfcRelConnectsStructuralElement_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelConnectsStructuralElement, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelConnectsStructuralElement, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsStructuralElement::getClassType(), 4, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralElement, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralElement, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelConnectsStructuralElement::getClassType(), 5, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWMOVINGDEVICE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFlowMovingDevice::getClassType();
    static_cast< Model* > (m_model)->getIfcFlowMovingDevice_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELNESTS(bool isFirst) {
  if (!loadIFCRELDECOMPOSES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelNests::getClassType();
    static_cast< Model* > (m_model)->getIfcRelNests_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSIGNSTOPROJECTORDER(bool isFirst) {
  if (!loadIFCRELASSIGNSTOCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssignsToProjectOrder::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssignsToProjectOrder_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELCOVERSBLDGELEMENTS(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelCoversBldgElements::getClassType();
    static_cast< Model* > (m_model)->getIfcRelCoversBldgElements_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelCoversBldgElements, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelCoversBldgElements, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcRelCoversBldgElements::getClassType(), 5, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelCoversBldgElements, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelCoversBldgElements, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelCoversBldgElements::getClassType(), 4, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFASTENER(bool isFirst) {
  if (!loadIFCELEMENTCOMPONENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFastener::getClassType();
    static_cast< Model* > (m_model)->getIfcFastener_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADSINGLEDISPLACEMENT(bool isFirst) {
  if (!loadIFCSTRUCTURALLOADSTATIC(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralLoadSingleDisplacement::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralLoadSingleDisplacement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMATERIALCLASSIFICATIONRELATIONSHIP(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcMaterialClassificationRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcMaterialClassificationRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcMaterialClassificationRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcMaterialClassificationRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcMaterialClassificationRelationship::getClassType(), 1, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRIGHTCIRCULARCONE(bool isFirst) {
  if (!loadIFCCSGPRIMITIVE3D(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRightCircularCone::getClassType();
    static_cast< Model* > (m_model)->getIfcRightCircularCone_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYBOUNDEDVALUE(bool isFirst) {
  if (!loadIFCSIMPLEPROPERTY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPropertyBoundedValue::getClassType();
    static_cast< Model* > (m_model)->getIfcPropertyBoundedValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALACTIVITY(bool isFirst) {
  if (!loadIFCPRODUCT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCEXTRUDEDAREASOLID(bool isFirst) {
  if (!loadIFCSWEPTAREASOLID(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcExtrudedAreaSolid::getClassType();
    static_cast< Model* > (m_model)->getIfcExtrudedAreaSolid_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPLACEMENT(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCCONNECTEDFACESET(bool isFirst) {
  if (!loadIFCTOPOLOGICALREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcConnectedFaceSet::getClassType();
    static_cast< Model* > (m_model)->getIfcConnectedFaceSet_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPERMIT(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPermit::getClassType();
    static_cast< Model* > (m_model)->getIfcPermit_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCARBITRARYPROFILEDEFWITHVOIDS(bool isFirst) {
  if (!loadIFCARBITRARYCLOSEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcArbitraryProfileDefWithVoids::getClassType();
    static_cast< Model* > (m_model)->getIfcArbitraryProfileDefWithVoids_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCVERTEXPOINT(bool isFirst) {
  if (!loadIFCVERTEX(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcVertexPoint::getClassType();
    static_cast< Model* > (m_model)->getIfcVertexPoint_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR2D(bool isFirst) {
  if (!loadIFCCARTESIANTRANSFORMATIONOPERATOR(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCartesianTransformationOperator2D::getClassType();
    static_cast< Model* > (m_model)->getIfcCartesianTransformationOperator2D_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOBJECTDEFINITION(bool isFirst) {
  if (!loadIFCROOT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCFLOWSEGMENT(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFlowSegment::getClassType();
    static_cast< Model* > (m_model)->getIfcFlowSegment_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOPTICALMATERIALPROPERTIES(bool isFirst) {
  if (!loadIFCMATERIALPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcOpticalMaterialProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcOpticalMaterialProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONSTRAINTRELATIONSHIP(bool isFirst) {
  Step::StepId currentRef;
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcConstraintRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcConstraintRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 2) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcConstraintRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcConstraintRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcConstraintRelationship::getClassType(), 2, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 3) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcConstraintRelationship, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcConstraintRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcConstraintRelationship::getClassType(), 3, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCANGULARDIMENSION(bool isFirst) {
  if (!loadIFCDIMENSIONCURVEDIRECTEDCALLOUT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAngularDimension::getClassType();
    static_cast< Model* > (m_model)->getIfcAngularDimension_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPATH(bool isFirst) {
  if (!loadIFCTOPOLOGICALREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPath::getClassType();
    static_cast< Model* > (m_model)->getIfcPath_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCORIENTEDEDGE(bool isFirst) {
  if (!loadIFCEDGE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcOrientedEdge::getClassType();
    static_cast< Model* > (m_model)->getIfcOrientedEdge_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOFFSETCURVE3D(bool isFirst) {
  if (!loadIFCCURVE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcOffsetCurve3D::getClassType();
    static_cast< Model* > (m_model)->getIfcOffsetCurve3D_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCVIBRATIONISOLATORTYPE(bool isFirst) {
  if (!loadIFCDISCRETEACCESSORYTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcVibrationIsolatorType::getClassType();
    static_cast< Model* > (m_model)->getIfcVibrationIsolatorType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALREACTION(bool isFirst) {
  if (!loadIFCSTRUCTURALACTIVITY(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCRELPROJECTSELEMENT(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelProjectsElement::getClassType();
    static_cast< Model* > (m_model)->getIfcRelProjectsElement_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelProjectsElement, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelProjectsElement, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelProjectsElement::getClassType(), 4, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelProjectsElement, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelProjectsElement, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelProjectsElement::getClassType(), 5, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCANNOTATIONFILLAREAOCCURRENCE(bool isFirst) {
  if (!loadIFCANNOTATIONOCCURRENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAnnotationFillAreaOccurrence::getClassType();
    static_cast< Model* > (m_model)->getIfcAnnotationFillAreaOccurrence_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFACEOUTERBOUND(bool isFirst) {
  if (!loadIFCFACEBOUND(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFaceOuterBound::getClassType();
    static_cast< Model* > (m_model)->getIfcFaceOuterBound_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCALENDARDATE(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcCalendarDate::getClassType();
    static_cast< Model* > (m_model)->getIfcCalendarDate_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELCONNECTSWITHREALIZINGELEMENTS(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (!loadIFCRELCONNECTSELEMENTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelConnectsWithRealizingElements::getClassType();
    static_cast< Model* > (m_model)->getIfcRelConnectsWithRealizingElements_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 7) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcRelConnectsWithRealizingElements, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcRelConnectsWithRealizingElements, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcRelConnectsWithRealizingElements::getClassType(), 7, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCDRAUGHTINGPREDEFINEDCURVEFONT(bool isFirst) {
  if (!loadIFCPREDEFINEDCURVEFONT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDraughtingPreDefinedCurveFont::getClassType();
    static_cast< Model* > (m_model)->getIfcDraughtingPreDefinedCurveFont_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSECTIONEDSPINE(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSectionedSpine::getClassType();
    static_cast< Model* > (m_model)->getIfcSectionedSpine_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONTROL(bool isFirst) {
  if (!loadIFCOBJECT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCDIMENSIONCURVE(bool isFirst) {
  if (!loadIFCANNOTATIONCURVEOCCURRENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDimensionCurve::getClassType();
    static_cast< Model* > (m_model)->getIfcDimensionCurve_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWFITTING(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFlowFitting::getClassType();
    static_cast< Model* > (m_model)->getIfcFlowFitting_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMEASUREWITHUNIT(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcMeasureWithUnit::getClassType();
    static_cast< Model* > (m_model)->getIfcMeasureWithUnit_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADSTATIC(bool isFirst) {
  if (!loadIFCSTRUCTURALLOAD(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCDIAMETERDIMENSION(bool isFirst) {
  if (!loadIFCDIMENSIONCURVEDIRECTEDCALLOUT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDiameterDimension::getClassType();
    static_cast< Model* > (m_model)->getIfcDiameterDimension_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCAXIS2PLACEMENT2D(bool isFirst) {
  if (!loadIFCPLACEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAxis2Placement2D::getClassType();
    static_cast< Model* > (m_model)->getIfcAxis2Placement2D_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPRESENTATIONLAYERASSIGNMENT(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcPresentationLayerAssignment::getClassType();
    static_cast< Model* > (m_model)->getIfcPresentationLayerAssignment_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 2) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcPresentationLayerAssignment, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcPresentationLayerAssignment, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcPresentationLayerAssignment::getClassType(), 2, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCBOXEDHALFSPACE(bool isFirst) {
  if (!loadIFCHALFSPACESOLID(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBoxedHalfSpace::getClassType();
    static_cast< Model* > (m_model)->getIfcBoxedHalfSpace_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCWINDOW(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcWindow::getClassType();
    static_cast< Model* > (m_model)->getIfcWindow_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPERSON(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcPerson::getClassType();
    static_cast< Model* > (m_model)->getIfcPerson_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 7) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcPerson, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcPerson, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcPerson::getClassType(), 7, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCSUBCONTRACTRESOURCE(bool isFirst) {
  if (!loadIFCCONSTRUCTIONRESOURCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSubContractResource::getClassType();
    static_cast< Model* > (m_model)->getIfcSubContractResource_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSOCIATESCONSTRAINT(bool isFirst) {
  if (!loadIFCRELASSOCIATES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssociatesConstraint::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssociatesConstraint_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELLIPSE(bool isFirst) {
  if (!loadIFCCONIC(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEllipse::getClassType();
    static_cast< Model* > (m_model)->getIfcEllipse_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPLANARBOX(bool isFirst) {
  if (!loadIFCPLANAREXTENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPlanarBox::getClassType();
    static_cast< Model* > (m_model)->getIfcPlanarBox_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELREFERENCEDINSPATIALSTRUCTURE(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelReferencedInSpatialStructure::getClassType();
    static_cast< Model* > (m_model)->getIfcRelReferencedInSpatialStructure_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelReferencedInSpatialStructure, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelReferencedInSpatialStructure, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcRelReferencedInSpatialStructure::getClassType(), 4, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelReferencedInSpatialStructure, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelReferencedInSpatialStructure, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelReferencedInSpatialStructure::getClassType(), 5, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCUNITASSIGNMENT(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcUnitAssignment::getClassType();
    static_cast< Model* > (m_model)->getIfcUnitAssignment_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWTERMINALTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCREINFORCEMENTBARPROPERTIES(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcReinforcementBarProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcReinforcementBarProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOLOURRGB(bool isFirst) {
  if (!loadIFCCOLOURSPECIFICATION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcColourRgb::getClassType();
    static_cast< Model* > (m_model)->getIfcColourRgb_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCAPPLIEDVALUE(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCSTAIRFLIGHTTYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStairFlightType::getClassType();
    static_cast< Model* > (m_model)->getIfcStairFlightType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRATIONALBEZIERCURVE(bool isFirst) {
  if (!loadIFCBEZIERCURVE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRationalBezierCurve::getClassType();
    static_cast< Model* > (m_model)->getIfcRationalBezierCurve_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONNECTIONPOINTGEOMETRY(bool isFirst) {
  if (!loadIFCCONNECTIONGEOMETRY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcConnectionPointGeometry::getClassType();
    static_cast< Model* > (m_model)->getIfcConnectionPointGeometry_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROFILEDEF(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCFEATUREELEMENTSUBTRACTION(bool isFirst) {
  if (!loadIFCFEATUREELEMENT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCTEXTUREVERTEX(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcTextureVertex::getClassType();
    static_cast< Model* > (m_model)->getIfcTextureVertex_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELATIONSHIP(bool isFirst) {
  if (!loadIFCROOT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCGEOMETRICREPRESENTATIONITEM(bool isFirst) {
  if (!loadIFCREPRESENTATIONITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCEXTENDEDMATERIALPROPERTIES(bool isFirst) {
  if (!loadIFCMATERIALPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcExtendedMaterialProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcExtendedMaterialProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFURNISHINGELEMENTTYPE(bool isFirst) {
  if (!loadIFCELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFurnishingElementType::getClassType();
    static_cast< Model* > (m_model)->getIfcFurnishingElementType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPOINT(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCBOUNDARYCONDITION(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCQUANTITYCOUNT(bool isFirst) {
  if (!loadIFCPHYSICALSIMPLEQUANTITY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcQuantityCount::getClassType();
    static_cast< Model* > (m_model)->getIfcQuantityCount_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCGENERALMATERIALPROPERTIES(bool isFirst) {
  if (!loadIFCMATERIALPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcGeneralMaterialProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcGeneralMaterialProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELAXATION(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcRelaxation::getClassType();
    static_cast< Model* > (m_model)->getIfcRelaxation_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCZSHAPEPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcZShapeProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcZShapeProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCWASTETERMINALTYPE(bool isFirst) {
  if (!loadIFCFLOWTERMINALTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcWasteTerminalType::getClassType();
    static_cast< Model* > (m_model)->getIfcWasteTerminalType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCANNOTATION(bool isFirst) {
  if (!loadIFCPRODUCT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAnnotation::getClassType();
    static_cast< Model* > (m_model)->getIfcAnnotation_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTEXTSTYLEFONTMODEL(bool isFirst) {
  if (!loadIFCPREDEFINEDTEXTFONT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTextStyleFontModel::getClassType();
    static_cast< Model* > (m_model)->getIfcTextStyleFontModel_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCEXTERNALREFERENCE(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCSTYLEDITEM(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStyledItem::getClassType();
    static_cast< Model* > (m_model)->getIfcStyledItem_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcStyledItem, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcStyledItem, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcStyledItem::getClassType(), 0, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCENERGYCONVERSIONDEVICETYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCMETRIC(bool isFirst) {
  if (!loadIFCCONSTRAINT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMetric::getClassType();
    static_cast< Model* > (m_model)->getIfcMetric_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADTEMPERATURE(bool isFirst) {
  if (!loadIFCSTRUCTURALLOADSTATIC(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralLoadTemperature::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralLoadTemperature_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDAMPERTYPE(bool isFirst) {
  if (!loadIFCFLOWCONTROLLERTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDamperType::getClassType();
    static_cast< Model* > (m_model)->getIfcDamperType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLSHAPEPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLShapeProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcLShapeProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDRAUGHTINGCALLOUTRELATIONSHIP(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcDraughtingCalloutRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcDraughtingCalloutRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 3) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcDraughtingCalloutRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcDraughtingCalloutRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcDraughtingCalloutRelationship::getClassType(), 3, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 2) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcDraughtingCalloutRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcDraughtingCalloutRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcDraughtingCalloutRelationship::getClassType(), 2, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCGRID(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (!loadIFCPRODUCT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcGrid::getClassType();
    static_cast< Model* > (m_model)->getIfcGrid_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 9) {
    LOG_ERROR("Inverse links : Error during reading parameter 9 of IfcGrid, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(9), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 9 of IfcGrid, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcGrid::getClassType(), 9, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 8) {
    LOG_ERROR("Inverse links : Error during reading parameter 8 of IfcGrid, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(8), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 8 of IfcGrid, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcGrid::getClassType(), 8, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 7) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcGrid, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcGrid, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcGrid::getClassType(), 7, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCRESOURCE(bool isFirst) {
  if (!loadIFCOBJECT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCHALFSPACESOLID(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcHalfSpaceSolid::getClassType();
    static_cast< Model* > (m_model)->getIfcHalfSpaceSolid_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSURFACESTYLESHADING(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcSurfaceStyleShading::getClassType();
    static_cast< Model* > (m_model)->getIfcSurfaceStyleShading_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTUREDDIMENSIONCALLOUT(bool isFirst) {
  if (!loadIFCDRAUGHTINGCALLOUT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuredDimensionCallout::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuredDimensionCallout_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSWEPTDISKSOLID(bool isFirst) {
  if (!loadIFCSOLIDMODEL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSweptDiskSolid::getClassType();
    static_cast< Model* > (m_model)->getIfcSweptDiskSolid_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFILLAREASTYLETILES(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFillAreaStyleTiles::getClassType();
    static_cast< Model* > (m_model)->getIfcFillAreaStyleTiles_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCURVESTYLEFONTANDSCALING(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcCurveStyleFontAndScaling::getClassType();
    static_cast< Model* > (m_model)->getIfcCurveStyleFontAndScaling_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALRESULTGROUP(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCGROUP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralResultGroup::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralResultGroup_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcStructuralResultGroup, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcStructuralResultGroup, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcStructuralResultGroup::getClassType(), 6, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCGRIDPLACEMENT(bool isFirst) {
  if (!loadIFCOBJECTPLACEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcGridPlacement::getClassType();
    static_cast< Model* > (m_model)->getIfcGridPlacement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOMPOSITECURVE(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (!loadIFCBOUNDEDCURVE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCompositeCurve::getClassType();
    static_cast< Model* > (m_model)->getIfcCompositeCurve_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcCompositeCurve, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcCompositeCurve, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcCompositeCurve::getClassType(), 0, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCTYPEOBJECT(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (!loadIFCOBJECTDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTypeObject::getClassType();
    static_cast< Model* > (m_model)->getIfcTypeObject_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcTypeObject, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcTypeObject, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcTypeObject::getClassType(), 5, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCEXTERNALLYDEFINEDHATCHSTYLE(bool isFirst) {
  if (!loadIFCEXTERNALREFERENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcExternallyDefinedHatchStyle::getClassType();
    static_cast< Model* > (m_model)->getIfcExternallyDefinedHatchStyle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPIXELTEXTURE(bool isFirst) {
  if (!loadIFCSURFACETEXTURE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPixelTexture::getClassType();
    static_cast< Model* > (m_model)->getIfcPixelTexture_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSYSTEMFURNITUREELEMENTTYPE(bool isFirst) {
  if (!loadIFCFURNISHINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSystemFurnitureElementType::getClassType();
    static_cast< Model* > (m_model)->getIfcSystemFurnitureElementType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDIMENSIONCURVETERMINATOR(bool isFirst) {
  if (!loadIFCTERMINATORSYMBOL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDimensionCurveTerminator::getClassType();
    static_cast< Model* > (m_model)->getIfcDimensionCurveTerminator_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONIC(bool isFirst) {
  if (!loadIFCCURVE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCTRANSFORMERTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTransformerType::getClassType();
    static_cast< Model* > (m_model)->getIfcTransformerType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCAPPROVALPROPERTYRELATIONSHIP(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcApprovalPropertyRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcApprovalPropertyRelationship_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDISTRIBUTIONFLOWELEMENTTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCRELAGGREGATES(bool isFirst) {
  if (!loadIFCRELDECOMPOSES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAggregates::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAggregates_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSURFACESTYLELIGHTING(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcSurfaceStyleLighting::getClassType();
    static_cast< Model* > (m_model)->getIfcSurfaceStyleLighting_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONSTRUCTIONRESOURCE(bool isFirst) {
  if (!loadIFCRESOURCE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR3D(bool isFirst) {
  if (!loadIFCCARTESIANTRANSFORMATIONOPERATOR(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCartesianTransformationOperator3D::getClassType();
    static_cast< Model* > (m_model)->getIfcCartesianTransformationOperator3D_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPLATE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPlate::getClassType();
    static_cast< Model* > (m_model)->getIfcPlate_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFOOTING(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFooting::getClassType();
    static_cast< Model* > (m_model)->getIfcFooting_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPILE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPile::getClassType();
    static_cast< Model* > (m_model)->getIfcPile_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCARBITRARYCLOSEDPROFILEDEF(bool isFirst) {
  if (!loadIFCPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcArbitraryClosedProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcArbitraryClosedProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWTREATMENTDEVICE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFlowTreatmentDevice::getClassType();
    static_cast< Model* > (m_model)->getIfcFlowTreatmentDevice_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCVECTOR(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcVector::getClassType();
    static_cast< Model* > (m_model)->getIfcVector_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONSTRAINTAGGREGATIONRELATIONSHIP(bool isFirst) {
  Step::StepId currentRef;
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcConstraintAggregationRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcConstraintAggregationRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 2) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcConstraintAggregationRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 2 of IfcConstraintAggregationRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcConstraintAggregationRelationship::getClassType(), 2, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 3) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcConstraintAggregationRelationship, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 3 of IfcConstraintAggregationRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcConstraintAggregationRelationship::getClassType(), 3, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCMECHANICALFASTENERTYPE(bool isFirst) {
  if (!loadIFCFASTENERTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMechanicalFastenerType::getClassType();
    static_cast< Model* > (m_model)->getIfcMechanicalFastenerType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCWALLSTANDARDCASE(bool isFirst) {
  if (!loadIFCWALL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcWallStandardCase::getClassType();
    static_cast< Model* > (m_model)->getIfcWallStandardCase_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMECHANICALSTEELMATERIALPROPERTIES(bool isFirst) {
  if (!loadIFCMECHANICALMATERIALPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMechanicalSteelMaterialProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcMechanicalSteelMaterialProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCRANERAILASHAPEPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCraneRailAShapeProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcCraneRailAShapeProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDATEANDTIME(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcDateAndTime::getClassType();
    static_cast< Model* > (m_model)->getIfcDateAndTime_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFACETEDBREP(bool isFirst) {
  if (!loadIFCMANIFOLDSOLIDBREP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFacetedBrep::getClassType();
    static_cast< Model* > (m_model)->getIfcFacetedBrep_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELEMENTARYSURFACE(bool isFirst) {
  if (!loadIFCSURFACE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCWORKSCHEDULE(bool isFirst) {
  if (!loadIFCWORKCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcWorkSchedule::getClassType();
    static_cast< Model* > (m_model)->getIfcWorkSchedule_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOLUMNTYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcColumnType::getClassType();
    static_cast< Model* > (m_model)->getIfcColumnType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTRIMMEDCURVE(bool isFirst) {
  if (!loadIFCBOUNDEDCURVE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTrimmedCurve::getClassType();
    static_cast< Model* > (m_model)->getIfcTrimmedCurve_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOCCUPANT(bool isFirst) {
  if (!loadIFCACTOR(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcOccupant::getClassType();
    static_cast< Model* > (m_model)->getIfcOccupant_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCENTERLINEPROFILEDEF(bool isFirst) {
  if (!loadIFCARBITRARYOPENPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCenterLineProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcCenterLineProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCASSET(bool isFirst) {
  if (!loadIFCGROUP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAsset::getClassType();
    static_cast< Model* > (m_model)->getIfcAsset_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSPHERE(bool isFirst) {
  if (!loadIFCCSGPRIMITIVE3D(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSphere::getClassType();
    static_cast< Model* > (m_model)->getIfcSphere_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCRANERAILFSHAPEPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCraneRailFShapeProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcCraneRailFShapeProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCURTAINWALLTYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCurtainWallType::getClassType();
    static_cast< Model* > (m_model)->getIfcCurtainWallType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCARBITRARYOPENPROFILEDEF(bool isFirst) {
  if (!loadIFCPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcArbitraryOpenProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcArbitraryOpenProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCSGPRIMITIVE3D(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALPLANARACTIONVARYING(bool isFirst) {
  if (!loadIFCSTRUCTURALPLANARACTION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralPlanarActionVarying::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralPlanarActionVarying_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDISTRIBUTIONFLOWELEMENT(bool isFirst) {
  if (!loadIFCDISTRIBUTIONELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDistributionFlowElement::getClassType();
    static_cast< Model* > (m_model)->getIfcDistributionFlowElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSWITCHINGDEVICETYPE(bool isFirst) {
  if (!loadIFCFLOWCONTROLLERTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSwitchingDeviceType::getClassType();
    static_cast< Model* > (m_model)->getIfcSwitchingDeviceType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELEMENTCOMPONENTTYPE(bool isFirst) {
  if (!loadIFCELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCPROXY(bool isFirst) {
  if (!loadIFCPRODUCT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcProxy::getClassType();
    static_cast< Model* > (m_model)->getIfcProxy_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTYPEPRODUCT(bool isFirst) {
  if (!loadIFCTYPEOBJECT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTypeProduct::getClassType();
    static_cast< Model* > (m_model)->getIfcTypeProduct_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCGEOMETRICREPRESENTATIONSUBCONTEXT(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCGEOMETRICREPRESENTATIONCONTEXT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcGeometricRepresentationSubContext::getClassType();
    static_cast< Model* > (m_model)->getIfcGeometricRepresentationSubContext_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcGeometricRepresentationSubContext, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcGeometricRepresentationSubContext, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcGeometricRepresentationSubContext::getClassType(), 6, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCZONE(bool isFirst) {
  if (!loadIFCGROUP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcZone::getClassType();
    static_cast< Model* > (m_model)->getIfcZone_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCREINFORCEMENTDEFINITIONPROPERTIES(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcReinforcementDefinitionProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcReinforcementDefinitionProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCANNOTATIONSURFACE(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAnnotationSurface::getClassType();
    static_cast< Model* > (m_model)->getIfcAnnotationSurface_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcAnnotationSurface, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcAnnotationSurface, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcAnnotationSurface::getClassType(), 1, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCACTOR(bool isFirst) {
  if (!loadIFCOBJECT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcActor::getClassType();
    static_cast< Model* > (m_model)->getIfcActor_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCWORKPLAN(bool isFirst) {
  if (!loadIFCWORKCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcWorkPlan::getClassType();
    static_cast< Model* > (m_model)->getIfcWorkPlan_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWSTORAGEDEVICETYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCAPPROVALRELATIONSHIP(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcApprovalRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcApprovalRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcApprovalRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcApprovalRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcApprovalRelationship::getClassType(), 0, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcApprovalRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcApprovalRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcApprovalRelationship::getClassType(), 1, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONSTRUCTIONMATERIALRESOURCE(bool isFirst) {
  if (!loadIFCCONSTRUCTIONRESOURCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcConstructionMaterialResource::getClassType();
    static_cast< Model* > (m_model)->getIfcConstructionMaterialResource_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPOLYLINE(bool isFirst) {
  if (!loadIFCBOUNDEDCURVE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPolyline::getClassType();
    static_cast< Model* > (m_model)->getIfcPolyline_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDERIVEDUNIT(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcDerivedUnit::getClassType();
    static_cast< Model* > (m_model)->getIfcDerivedUnit_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCREVOLVEDAREASOLID(bool isFirst) {
  if (!loadIFCSWEPTAREASOLID(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRevolvedAreaSolid::getClassType();
    static_cast< Model* > (m_model)->getIfcRevolvedAreaSolid_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCANNOTATIONTEXTOCCURRENCE(bool isFirst) {
  if (!loadIFCANNOTATIONOCCURRENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAnnotationTextOccurrence::getClassType();
    static_cast< Model* > (m_model)->getIfcAnnotationTextOccurrence_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELDEFINESBYTYPE(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELDEFINES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelDefinesByType::getClassType();
    static_cast< Model* > (m_model)->getIfcRelDefinesByType_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelDefinesByType, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelDefinesByType, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelDefinesByType::getClassType(), 5, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBUILDINGELEMENTPART(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTCOMPONENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBuildingElementPart::getClassType();
    static_cast< Model* > (m_model)->getIfcBuildingElementPart_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONSTRUCTIONEQUIPMENTRESOURCE(bool isFirst) {
  if (!loadIFCCONSTRUCTIONRESOURCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcConstructionEquipmentResource::getClassType();
    static_cast< Model* > (m_model)->getIfcConstructionEquipmentResource_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCIMAGETEXTURE(bool isFirst) {
  if (!loadIFCSURFACETEXTURE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcImageTexture::getClassType();
    static_cast< Model* > (m_model)->getIfcImageTexture_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCLASSIFICATIONNOTATION(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcClassificationNotation::getClassType();
    static_cast< Model* > (m_model)->getIfcClassificationNotation_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFURNISHINGELEMENT(bool isFirst) {
  if (!loadIFCELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFurnishingElement::getClassType();
    static_cast< Model* > (m_model)->getIfcFurnishingElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTYLEMODEL(bool isFirst) {
  if (!loadIFCREPRESENTATION(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCPOLYGONALBOUNDEDHALFSPACE(bool isFirst) {
  if (!loadIFCHALFSPACESOLID(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPolygonalBoundedHalfSpace::getClassType();
    static_cast< Model* > (m_model)->getIfcPolygonalBoundedHalfSpace_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSOUNDVALUE(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSoundValue::getClassType();
    static_cast< Model* > (m_model)->getIfcSoundValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTHERMALMATERIALPROPERTIES(bool isFirst) {
  if (!loadIFCMATERIALPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcThermalMaterialProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcThermalMaterialProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSOCIATESAPPLIEDVALUE(bool isFirst) {
  if (!loadIFCRELASSOCIATES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssociatesAppliedValue::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssociatesAppliedValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCANNOTATIONSYMBOLOCCURRENCE(bool isFirst) {
  if (!loadIFCANNOTATIONOCCURRENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAnnotationSymbolOccurrence::getClassType();
    static_cast< Model* > (m_model)->getIfcAnnotationSymbolOccurrence_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCASYMMETRICISHAPEPROFILEDEF(bool isFirst) {
  if (!loadIFCISHAPEPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAsymmetricIShapeProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcAsymmetricIShapeProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMECHANICALCONCRETEMATERIALPROPERTIES(bool isFirst) {
  if (!loadIFCMECHANICALMATERIALPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMechanicalConcreteMaterialProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcMechanicalConcreteMaterialProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOILTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCoilType::getClassType();
    static_cast< Model* > (m_model)->getIfcCoilType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCLASSIFICATIONITEM(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcClassificationItem::getClassType();
    static_cast< Model* > (m_model)->getIfcClassificationItem_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcClassificationItem, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcClassificationItem, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcClassificationItem::getClassType(), 1, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLIGHTSOURCESPOT(bool isFirst) {
  if (!loadIFCLIGHTSOURCEPOSITIONAL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLightSourceSpot::getClassType();
    static_cast< Model* > (m_model)->getIfcLightSourceSpot_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONNECTIONPOINTECCENTRICITY(bool isFirst) {
  if (!loadIFCCONNECTIONPOINTGEOMETRY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcConnectionPointEccentricity::getClassType();
    static_cast< Model* > (m_model)->getIfcConnectionPointEccentricity_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFACETEDBREPWITHVOIDS(bool isFirst) {
  if (!loadIFCMANIFOLDSOLIDBREP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFacetedBrepWithVoids::getClassType();
    static_cast< Model* > (m_model)->getIfcFacetedBrepWithVoids_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSPACEPROGRAM(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSpaceProgram::getClassType();
    static_cast< Model* > (m_model)->getIfcSpaceProgram_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOVERINGTYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCoveringType::getClassType();
    static_cast< Model* > (m_model)->getIfcCoveringType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBOUNDEDCURVE(bool isFirst) {
  if (!loadIFCCURVE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCELEMENTTYPE(bool isFirst) {
  if (!loadIFCTYPEPRODUCT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCPROCESS(bool isFirst) {
  if (!loadIFCOBJECT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCSUBEDGE(bool isFirst) {
  if (!loadIFCEDGE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSubedge::getClassType();
    static_cast< Model* > (m_model)->getIfcSubedge_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDIMENSIONALEXPONENTS(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcDimensionalExponents::getClassType();
    static_cast< Model* > (m_model)->getIfcDimensionalExponents_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRECTANGLEHOLLOWPROFILEDEF(bool isFirst) {
  if (!loadIFCRECTANGLEPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRectangleHollowProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcRectangleHollowProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALSURFACECONNECTION(bool isFirst) {
  if (!loadIFCSTRUCTURALCONNECTION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralSurfaceConnection::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralSurfaceConnection_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALPOINTACTION(bool isFirst) {
  if (!loadIFCSTRUCTURALACTION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralPointAction::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralPointAction_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOUTLETTYPE(bool isFirst) {
  if (!loadIFCFLOWTERMINALTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcOutletType::getClassType();
    static_cast< Model* > (m_model)->getIfcOutletType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFLOWSEGMENTTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCSTACKTERMINALTYPE(bool isFirst) {
  if (!loadIFCFLOWTERMINALTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStackTerminalType::getClassType();
    static_cast< Model* > (m_model)->getIfcStackTerminalType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPLANE(bool isFirst) {
  if (!loadIFCELEMENTARYSURFACE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPlane::getClassType();
    static_cast< Model* > (m_model)->getIfcPlane_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRADIUSDIMENSION(bool isFirst) {
  if (!loadIFCDIMENSIONCURVEDIRECTEDCALLOUT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRadiusDimension::getClassType();
    static_cast< Model* > (m_model)->getIfcRadiusDimension_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTAIRFLIGHT(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStairFlight::getClassType();
    static_cast< Model* > (m_model)->getIfcStairFlight_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELECTRICALELEMENT(bool isFirst) {
  if (!loadIFCELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElectricalElement::getClassType();
    static_cast< Model* > (m_model)->getIfcElectricalElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCAPPLICATION(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcApplication::getClassType();
    static_cast< Model* > (m_model)->getIfcApplication_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMECHANICALMATERIALPROPERTIES(bool isFirst) {
  if (!loadIFCMATERIALPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcMechanicalMaterialProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcMechanicalMaterialProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMATERIALPROPERTIES(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR3DNONUNIFORM(bool isFirst) {
  if (!loadIFCCARTESIANTRANSFORMATIONOPERATOR3D(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCartesianTransformationOperator3DnonUniform::getClassType();
    static_cast< Model* > (m_model)->getIfcCartesianTransformationOperator3DnonUniform_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCHYGROSCOPICMATERIALPROPERTIES(bool isFirst) {
  if (!loadIFCMATERIALPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcHygroscopicMaterialProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcHygroscopicMaterialProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCGEOMETRICSET(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcGeometricSet::getClassType();
    static_cast< Model* > (m_model)->getIfcGeometricSet_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPRODUCTDEFINITIONSHAPE(bool isFirst) {
  if (!loadIFCPRODUCTREPRESENTATION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcProductDefinitionShape::getClassType();
    static_cast< Model* > (m_model)->getIfcProductDefinitionShape_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROCEDURE(bool isFirst) {
  if (!loadIFCPROCESS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcProcedure::getClassType();
    static_cast< Model* > (m_model)->getIfcProcedure_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSURFACETEXTURE(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCSPATIALSTRUCTUREELEMENTTYPE(bool isFirst) {
  if (!loadIFCELEMENTTYPE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCNAMEDUNIT(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCSTRUCTURALCONNECTIONCONDITION(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCCOSTSCHEDULE(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCostSchedule::getClassType();
    static_cast< Model* > (m_model)->getIfcCostSchedule_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDISTRIBUTIONCONTROLELEMENT(bool isFirst) {
  if (!loadIFCDISTRIBUTIONELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDistributionControlElement::getClassType();
    static_cast< Model* > (m_model)->getIfcDistributionControlElement_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONDENSERTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCondenserType::getClassType();
    static_cast< Model* > (m_model)->getIfcCondenserType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCGEOMETRICREPRESENTATIONCONTEXT(bool isFirst) {
  if (!loadIFCREPRESENTATIONCONTEXT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcGeometricRepresentationContext::getClassType();
    static_cast< Model* > (m_model)->getIfcGeometricRepresentationContext_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFURNITURESTANDARD(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFurnitureStandard::getClassType();
    static_cast< Model* > (m_model)->getIfcFurnitureStandard_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBSPLINECURVE(bool isFirst) {
  if (!loadIFCBOUNDEDCURVE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLOAD(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCDOOR(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDoor::getClassType();
    static_cast< Model* > (m_model)->getIfcDoor_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPREDEFINEDCOLOUR(bool isFirst) {
  if (!loadIFCPREDEFINEDITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCFEATUREELEMENTADDITION(bool isFirst) {
  if (!loadIFCFEATUREELEMENT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCCOOLEDBEAMTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCooledBeamType::getClassType();
    static_cast< Model* > (m_model)->getIfcCooledBeamType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLIBRARYINFORMATION(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcLibraryInformation::getClassType();
    static_cast< Model* > (m_model)->getIfcLibraryInformation_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcLibraryInformation, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcLibraryInformation, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcLibraryInformation::getClassType(), 4, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCTENDON(bool isFirst) {
  if (!loadIFCREINFORCINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTendon::getClassType();
    static_cast< Model* > (m_model)->getIfcTendon_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSURFACESTYLE(bool isFirst) {
  if (!loadIFCPRESENTATIONSTYLE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSurfaceStyle::getClassType();
    static_cast< Model* > (m_model)->getIfcSurfaceStyle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLIGHTINTENSITYDISTRIBUTION(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcLightIntensityDistribution::getClassType();
    static_cast< Model* > (m_model)->getIfcLightIntensityDistribution_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCROOF(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRoof::getClassType();
    static_cast< Model* > (m_model)->getIfcRoof_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADSINGLEDISPLACEMENTDISTORTION(bool isFirst) {
  if (!loadIFCSTRUCTURALLOADSINGLEDISPLACEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralLoadSingleDisplacementDistortion::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralLoadSingleDisplacementDistortion_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPRESENTATIONSTYLEASSIGNMENT(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcPresentationStyleAssignment::getClassType();
    static_cast< Model* > (m_model)->getIfcPresentationStyleAssignment_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTANKTYPE(bool isFirst) {
  if (!loadIFCFLOWSTORAGEDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTankType::getClassType();
    static_cast< Model* > (m_model)->getIfcTankType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPRODUCT(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCOBJECT(false)) {
    return false;
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcProduct, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcProduct, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcProduct::getClassType(), 5, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcProduct, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcProduct, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcProduct::getClassType(), 6, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFACEBOUND(bool isFirst) {
  if (!loadIFCTOPOLOGICALREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFaceBound::getClassType();
    static_cast< Model* > (m_model)->getIfcFaceBound_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCFUELPROPERTIES(bool isFirst) {
  if (!loadIFCMATERIALPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFuelProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcFuelProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBEAM(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBeam::getClassType();
    static_cast< Model* > (m_model)->getIfcBeam_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSHAPEMODEL(bool isFirst) {
  if (!loadIFCREPRESENTATION(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCELECTRICHEATERTYPE(bool isFirst) {
  if (!loadIFCFLOWTERMINALTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElectricHeaterType::getClassType();
    static_cast< Model* > (m_model)->getIfcElectricHeaterType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRAILINGTYPE(bool isFirst) {
  if (!loadIFCBUILDINGELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRailingType::getClassType();
    static_cast< Model* > (m_model)->getIfcRailingType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCROOT(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCELEMENTCOMPONENT(bool isFirst) {
  if (!loadIFCELEMENT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYDEPENDENCYRELATIONSHIP(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcPropertyDependencyRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcPropertyDependencyRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcPropertyDependencyRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcPropertyDependencyRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcPropertyDependencyRelationship::getClassType(), 0, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcPropertyDependencyRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcPropertyDependencyRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcPropertyDependencyRelationship::getClassType(), 1, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSIGNS(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (!loadIFCRELATIONSHIP(false)) {
    return false;
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelAssigns, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelAssigns, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcRelAssigns::getClassType(), 4, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCFLOWSTORAGEDEVICE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONFLOWELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcFlowStorageDevice::getClassType();
    static_cast< Model* > (m_model)->getIfcFlowStorageDevice_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALSTEELPROFILEPROPERTIES(bool isFirst) {
  if (!loadIFCSTRUCTURALPROFILEPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralSteelProfileProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralSteelProfileProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBOUNDARYEDGECONDITION(bool isFirst) {
  if (!loadIFCBOUNDARYCONDITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBoundaryEdgeCondition::getClassType();
    static_cast< Model* > (m_model)->getIfcBoundaryEdgeCondition_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYSINGLEVALUE(bool isFirst) {
  if (!loadIFCSIMPLEPROPERTY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPropertySingleValue::getClassType();
    static_cast< Model* > (m_model)->getIfcPropertySingleValue_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSWEPTSURFACE(bool isFirst) {
  if (!loadIFCSURFACE(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALLINEARACTIONVARYING(bool isFirst) {
  if (!loadIFCSTRUCTURALLINEARACTION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralLinearActionVarying::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralLinearActionVarying_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCALARMTYPE(bool isFirst) {
  if (!loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcAlarmType::getClassType();
    static_cast< Model* > (m_model)->getIfcAlarmType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLIGHTFIXTURETYPE(bool isFirst) {
  if (!loadIFCFLOWTERMINALTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLightFixtureType::getClassType();
    static_cast< Model* > (m_model)->getIfcLightFixtureType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLIGHTSOURCE(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCTIMESERIES(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCSURFACECURVESWEPTAREASOLID(bool isFirst) {
  if (!loadIFCSWEPTAREASOLID(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSurfaceCurveSweptAreaSolid::getClassType();
    static_cast< Model* > (m_model)->getIfcSurfaceCurveSweptAreaSolid_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCGENERALPROFILEPROPERTIES(bool isFirst) {
  if (!loadIFCPROFILEPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcGeneralProfileProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcGeneralProfileProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTEXTSTYLEFORDEFINEDFONT(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcTextStyleForDefinedFont::getClassType();
    static_cast< Model* > (m_model)->getIfcTextStyleForDefinedFont_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSHAPEREPRESENTATION(bool isFirst) {
  if (!loadIFCSHAPEMODEL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcShapeRepresentation::getClassType();
    static_cast< Model* > (m_model)->getIfcShapeRepresentation_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCQUANTITYVOLUME(bool isFirst) {
  if (!loadIFCPHYSICALSIMPLEQUANTITY(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcQuantityVolume::getClassType();
    static_cast< Model* > (m_model)->getIfcQuantityVolume_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCDIMENSIONPAIR(bool isFirst) {
  if (!loadIFCDRAUGHTINGCALLOUTRELATIONSHIP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcDimensionPair::getClassType();
    static_cast< Model* > (m_model)->getIfcDimensionPair_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCARTESIANPOINT(bool isFirst) {
  if (!loadIFCPOINT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCartesianPoint::getClassType();
    static_cast< Model* > (m_model)->getIfcCartesianPoint_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTEXTUREMAP(bool isFirst) {
  if (!loadIFCTEXTURECOORDINATE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTextureMap::getClassType();
    static_cast< Model* > (m_model)->getIfcTextureMap_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSHELLBASEDSURFACEMODEL(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcShellBasedSurfaceModel::getClassType();
    static_cast< Model* > (m_model)->getIfcShellBasedSurfaceModel_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCEDGE(bool isFirst) {
  if (!loadIFCTOPOLOGICALREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEdge::getClassType();
    static_cast< Model* > (m_model)->getIfcEdge_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLOCALTIME(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcLocalTime::getClassType();
    static_cast< Model* > (m_model)->getIfcLocalTime_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPRESENTATIONSTYLE(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCREFERENCESVALUEDOCUMENT(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcReferencesValueDocument::getClassType();
    static_cast< Model* > (m_model)->getIfcReferencesValueDocument_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcReferencesValueDocument, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcReferencesValueDocument, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcReferencesValueDocument::getClassType(), 1, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCRECTANGULARTRIMMEDSURFACE(bool isFirst) {
  if (!loadIFCBOUNDEDSURFACE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRectangularTrimmedSurface::getClassType();
    static_cast< Model* > (m_model)->getIfcRectangularTrimmedSurface_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBEZIERCURVE(bool isFirst) {
  if (!loadIFCBSPLINECURVE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBezierCurve::getClassType();
    static_cast< Model* > (m_model)->getIfcBezierCurve_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSYSTEM(bool isFirst) {
  if (!loadIFCGROUP(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSystem::getClassType();
    static_cast< Model* > (m_model)->getIfcSystem_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMATERIALLAYER(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcMaterialLayer::getClassType();
    static_cast< Model* > (m_model)->getIfcMaterialLayer_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCAPPLIEDVALUERELATIONSHIP(bool isFirst) {
  Step::StepId currentRef;
  std::vector< Step::StepId > currentRefList;
  if (isFirst) {
    m_currentType = IfcAppliedValueRelationship::getClassType();
    static_cast< Model* > (m_model)->getIfcAppliedValueRelationship_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcAppliedValueRelationship, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcAppliedValueRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcAppliedValueRelationship::getClassType(), 0, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcAppliedValueRelationship, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcAppliedValueRelationship, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcAppliedValueRelationship::getClassType(), 1, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCENERGYPROPERTIES(bool isFirst) {
  if (!loadIFCPROPERTYSETDEFINITION(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEnergyProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcEnergyProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCONDITIONCRITERION(bool isFirst) {
  if (!loadIFCCONTROL(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcConditionCriterion::getClassType();
    static_cast< Model* > (m_model)->getIfcConditionCriterion_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCBOOLEANRESULT(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcBooleanResult::getClassType();
    static_cast< Model* > (m_model)->getIfcBooleanResult_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTAIR(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStair::getClassType();
    static_cast< Model* > (m_model)->getIfcStair_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCOBJECTIVE(bool isFirst) {
  if (!loadIFCCONSTRAINT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcObjective::getClassType();
    static_cast< Model* > (m_model)->getIfcObjective_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRAMPFLIGHT(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRampFlight::getClassType();
    static_cast< Model* > (m_model)->getIfcRampFlight_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCOVERING(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCovering::getClassType();
    static_cast< Model* > (m_model)->getIfcCovering_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCCURVESTYLE(bool isFirst) {
  if (!loadIFCPRESENTATIONSTYLE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcCurveStyle::getClassType();
    static_cast< Model* > (m_model)->getIfcCurveStyle_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRAMP(bool isFirst) {
  if (!loadIFCBUILDINGELEMENT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRamp::getClassType();
    static_cast< Model* > (m_model)->getIfcRamp_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROFILEPROPERTIES(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCCONSTRAINT(bool isFirst) {
  return true;
}

bool SPFReader::loadIFCPORT(bool isFirst) {
  if (!loadIFCPRODUCT(false)) {
    return false;
  }
  return true;
}

bool SPFReader::loadIFCDOCUMENTELECTRONICFORMAT(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcDocumentElectronicFormat::getClassType();
    static_cast< Model* > (m_model)->getIfcDocumentElectronicFormat_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROJECT(bool isFirst) {
  if (!loadIFCOBJECT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcProject::getClassType();
    static_cast< Model* > (m_model)->getIfcProject_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELLIPSEPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEllipseProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcEllipseProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCEVAPORATIVECOOLERTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcEvaporativeCoolerType::getClassType();
    static_cast< Model* > (m_model)->getIfcEvaporativeCoolerType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCMATERIAL(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcMaterial::getClassType();
    static_cast< Model* > (m_model)->getIfcMaterial_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTABLEROW(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcTableRow::getClassType();
    static_cast< Model* > (m_model)->getIfcTableRow_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSIGNSTOGROUP(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELASSIGNS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssignsToGroup::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssignsToGroup_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToGroup, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToGroup, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelAssignsToGroup::getClassType(), 6, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCHEATEXCHANGERTYPE(bool isFirst) {
  if (!loadIFCENERGYCONVERSIONDEVICETYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcHeatExchangerType::getClassType();
    static_cast< Model* > (m_model)->getIfcHeatExchangerType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPROPERTYENUMERATION(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcPropertyEnumeration::getClassType();
    static_cast< Model* > (m_model)->getIfcPropertyEnumeration_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRIBPLATEPROFILEPROPERTIES(bool isFirst) {
  if (!loadIFCPROFILEPROPERTIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRibPlateProfileProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcRibPlateProfileProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPERSONANDORGANIZATION(bool isFirst) {
  Step::StepId currentRef;
  if (isFirst) {
    m_currentType = IfcPersonAndOrganization::getClassType();
    static_cast< Model* > (m_model)->getIfcPersonAndOrganization_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcPersonAndOrganization, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 1 of IfcPersonAndOrganization, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcPersonAndOrganization::getClassType(), 1, m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcPersonAndOrganization, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 0 of IfcPersonAndOrganization, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcPersonAndOrganization::getClassType(), 0, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTEXTURECOORDINATEGENERATOR(bool isFirst) {
  if (!loadIFCTEXTURECOORDINATE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTextureCoordinateGenerator::getClassType();
    static_cast< Model* > (m_model)->getIfcTextureCoordinateGenerator_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALANALYSISMODEL(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  if (!loadIFCSYSTEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralAnalysisModel::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralAnalysisModel_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 7) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcStructuralAnalysisModel, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 7 of IfcStructuralAnalysisModel, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcStructuralAnalysisModel::getClassType(), 7, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 8) {
    LOG_ERROR("Inverse links : Error during reading parameter 8 of IfcStructuralAnalysisModel, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(8), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 8 of IfcStructuralAnalysisModel, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcStructuralAnalysisModel::getClassType(), 8, m_currentId);
    }
  }
  return true;
}

bool SPFReader::loadIFCGROUP(bool isFirst) {
  if (!loadIFCOBJECT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcGroup::getClassType();
    static_cast< Model* > (m_model)->getIfcGroup_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELFLOWCONTROLELEMENTS(bool isFirst) {
  std::vector< Step::StepId > currentRefList;
  Step::StepId currentRef;
  if (!loadIFCRELCONNECTS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelFlowControlElements::getClassType();
    static_cast< Model* > (m_model)->getIfcRelFlowControlElements_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelFlowControlElements, line " << m_currentLineNb);
    return false;
  }
  Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
  if (currentRefList[0] == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 4 of IfcRelFlowControlElements, line " << m_currentLineNb);
    return false;
  }
  if (currentRefList[0] != Step::StepId_UNSET) {
    for (unsigned int i = 0; i < currentRefList.size(); i++) {
      m_model->getArgs(currentRefList[i])->addInverse(IfcRelFlowControlElements::getClassType(), 4, m_currentId);
    }
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelFlowControlElements, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 5 of IfcRelFlowControlElements, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelFlowControlElements::getClassType(), 5, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCELECTRICDISTRIBUTIONPOINT(bool isFirst) {
  if (!loadIFCFLOWCONTROLLER(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcElectricDistributionPoint::getClassType();
    static_cast< Model* > (m_model)->getIfcElectricDistributionPoint_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCTRAPEZIUMPROFILEDEF(bool isFirst) {
  if (!loadIFCPARAMETERIZEDPROFILEDEF(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcTrapeziumProfileDef::getClassType();
    static_cast< Model* > (m_model)->getIfcTrapeziumProfileDef_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSTRUCTURALCURVEMEMBERVARYING(bool isFirst) {
  if (!loadIFCSTRUCTURALCURVEMEMBER(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcStructuralCurveMemberVarying::getClassType();
    static_cast< Model* > (m_model)->getIfcStructuralCurveMemberVarying_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSOCIATESPROFILEPROPERTIES(bool isFirst) {
  if (!loadIFCRELASSOCIATES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssociatesProfileProperties::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssociatesProfileProperties_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCREPRESENTATIONCONTEXT(bool isFirst) {
  if (isFirst) {
    m_currentType = IfcRepresentationContext::getClassType();
    static_cast< Model* > (m_model)->getIfcRepresentationContext_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCSPACETYPE(bool isFirst) {
  if (!loadIFCSPATIALSTRUCTUREELEMENTTYPE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcSpaceType::getClassType();
    static_cast< Model* > (m_model)->getIfcSpaceType_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLIBRARYREFERENCE(bool isFirst) {
  if (!loadIFCEXTERNALREFERENCE(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLibraryReference::getClassType();
    static_cast< Model* > (m_model)->getIfcLibraryReference_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPOINTONSURFACE(bool isFirst) {
  if (!loadIFCPOINT(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPointOnSurface::getClassType();
    static_cast< Model* > (m_model)->getIfcPointOnSurface_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSIGNSTOPRODUCT(bool isFirst) {
  Step::StepId currentRef;
  if (!loadIFCRELASSIGNS(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssignsToProduct::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssignsToProduct_Factory()->addId(m_currentId);
  }
  if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToProduct, line " << m_currentLineNb);
    return false;
  }
  currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
  if (currentRef == Step::StepId_UNDEF) {
    LOG_ERROR("Inverse links : Error during reading parameter 6 of IfcRelAssignsToProduct, line " << m_currentLineNb);
    return false;
  }
  if (currentRef != Step::StepId_UNSET) {
    m_model->getArgs(currentRef)->addInverse(IfcRelAssignsToProduct::getClassType(), 6, m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCRELASSOCIATESCLASSIFICATION(bool isFirst) {
  if (!loadIFCRELASSOCIATES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcRelAssociatesClassification::getClassType();
    static_cast< Model* > (m_model)->getIfcRelAssociatesClassification_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCIRREGULARTIMESERIES(bool isFirst) {
  if (!loadIFCTIMESERIES(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcIrregularTimeSeries::getClassType();
    static_cast< Model* > (m_model)->getIfcIrregularTimeSeries_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCLOOP(bool isFirst) {
  if (!loadIFCTOPOLOGICALREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcLoop::getClassType();
    static_cast< Model* > (m_model)->getIfcLoop_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::loadIFCPLANAREXTENT(bool isFirst) {
  if (!loadIFCGEOMETRICREPRESENTATIONITEM(false)) {
    return false;
  }
  if (isFirst) {
    m_currentType = IfcPlanarExtent::getClassType();
    static_cast< Model* > (m_model)->getIfcPlanarExtent_Factory()->addId(m_currentId);
  }
  return true;
}

bool SPFReader::callLoadFunction(const std::string &s) {
  std::map< std::string, bool (SPFReader::*)(bool) >::iterator it = m_Str2LoadFn.find(s);
  if (it == m_Str2LoadFn.end()) {
    return false;
  }
  else {
    return (this->*it->second)(true);
  }
}

bool SPFReader::read(std::ifstream &ifs) {
  m_model = new Model;
  if (!Step::BaseSPFReader::read(ifs)) {
    delete m_model;
    m_model = 0;
    return false;
  }
  m_model->setHeader(m_header);
  m_header = 0;
  return true;
}

