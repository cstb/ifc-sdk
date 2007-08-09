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
#include <ifc2x3/Model.h>

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

using namespace ifc2x3;

Model::Model() : Step::BaseModel() {
  m_Ifc2DCompositeCurve_Factory = 0;
  m_IfcActionRequest_Factory = 0;
  m_IfcActor_Factory = 0;
  m_IfcActorRole_Factory = 0;
  m_IfcActuatorType_Factory = 0;
  m_IfcAirTerminalBoxType_Factory = 0;
  m_IfcAirTerminalType_Factory = 0;
  m_IfcAirToAirHeatRecoveryType_Factory = 0;
  m_IfcAlarmType_Factory = 0;
  m_IfcAngularDimension_Factory = 0;
  m_IfcAnnotation_Factory = 0;
  m_IfcAnnotationCurveOccurrence_Factory = 0;
  m_IfcAnnotationFillArea_Factory = 0;
  m_IfcAnnotationFillAreaOccurrence_Factory = 0;
  m_IfcAnnotationSurface_Factory = 0;
  m_IfcAnnotationSurfaceOccurrence_Factory = 0;
  m_IfcAnnotationSymbolOccurrence_Factory = 0;
  m_IfcAnnotationTextOccurrence_Factory = 0;
  m_IfcApplication_Factory = 0;
  m_IfcAppliedValueRelationship_Factory = 0;
  m_IfcApproval_Factory = 0;
  m_IfcApprovalActorRelationship_Factory = 0;
  m_IfcApprovalPropertyRelationship_Factory = 0;
  m_IfcApprovalRelationship_Factory = 0;
  m_IfcArbitraryClosedProfileDef_Factory = 0;
  m_IfcArbitraryOpenProfileDef_Factory = 0;
  m_IfcArbitraryProfileDefWithVoids_Factory = 0;
  m_IfcAsset_Factory = 0;
  m_IfcAsymmetricIShapeProfileDef_Factory = 0;
  m_IfcAxis1Placement_Factory = 0;
  m_IfcAxis2Placement2D_Factory = 0;
  m_IfcAxis2Placement3D_Factory = 0;
  m_IfcBeam_Factory = 0;
  m_IfcBeamType_Factory = 0;
  m_IfcBezierCurve_Factory = 0;
  m_IfcBlobTexture_Factory = 0;
  m_IfcBlock_Factory = 0;
  m_IfcBoilerType_Factory = 0;
  m_IfcBooleanClippingResult_Factory = 0;
  m_IfcBooleanResult_Factory = 0;
  m_IfcBoundaryEdgeCondition_Factory = 0;
  m_IfcBoundaryFaceCondition_Factory = 0;
  m_IfcBoundaryNodeCondition_Factory = 0;
  m_IfcBoundaryNodeConditionWarping_Factory = 0;
  m_IfcBoundedSurface_Factory = 0;
  m_IfcBoundingBox_Factory = 0;
  m_IfcBoxedHalfSpace_Factory = 0;
  m_IfcBuilding_Factory = 0;
  m_IfcBuildingElementPart_Factory = 0;
  m_IfcBuildingElementProxy_Factory = 0;
  m_IfcBuildingElementProxyType_Factory = 0;
  m_IfcBuildingStorey_Factory = 0;
  m_IfcCShapeProfileDef_Factory = 0;
  m_IfcCableCarrierFittingType_Factory = 0;
  m_IfcCableCarrierSegmentType_Factory = 0;
  m_IfcCableSegmentType_Factory = 0;
  m_IfcCalendarDate_Factory = 0;
  m_IfcCartesianPoint_Factory = 0;
  m_IfcCartesianTransformationOperator2D_Factory = 0;
  m_IfcCartesianTransformationOperator2DnonUniform_Factory = 0;
  m_IfcCartesianTransformationOperator3D_Factory = 0;
  m_IfcCartesianTransformationOperator3DnonUniform_Factory = 0;
  m_IfcCenterLineProfileDef_Factory = 0;
  m_IfcChamferEdgeFeature_Factory = 0;
  m_IfcChillerType_Factory = 0;
  m_IfcCircle_Factory = 0;
  m_IfcCircleHollowProfileDef_Factory = 0;
  m_IfcCircleProfileDef_Factory = 0;
  m_IfcClassification_Factory = 0;
  m_IfcClassificationItem_Factory = 0;
  m_IfcClassificationItemRelationship_Factory = 0;
  m_IfcClassificationNotation_Factory = 0;
  m_IfcClassificationNotationFacet_Factory = 0;
  m_IfcClassificationReference_Factory = 0;
  m_IfcClosedShell_Factory = 0;
  m_IfcCoilType_Factory = 0;
  m_IfcColourRgb_Factory = 0;
  m_IfcColumn_Factory = 0;
  m_IfcColumnType_Factory = 0;
  m_IfcComplexProperty_Factory = 0;
  m_IfcCompositeCurve_Factory = 0;
  m_IfcCompositeCurveSegment_Factory = 0;
  m_IfcCompositeProfileDef_Factory = 0;
  m_IfcCompressorType_Factory = 0;
  m_IfcCondenserType_Factory = 0;
  m_IfcCondition_Factory = 0;
  m_IfcConditionCriterion_Factory = 0;
  m_IfcConnectedFaceSet_Factory = 0;
  m_IfcConnectionCurveGeometry_Factory = 0;
  m_IfcConnectionPointEccentricity_Factory = 0;
  m_IfcConnectionPointGeometry_Factory = 0;
  m_IfcConnectionPortGeometry_Factory = 0;
  m_IfcConnectionSurfaceGeometry_Factory = 0;
  m_IfcConstraintAggregationRelationship_Factory = 0;
  m_IfcConstraintClassificationRelationship_Factory = 0;
  m_IfcConstraintRelationship_Factory = 0;
  m_IfcConstructionEquipmentResource_Factory = 0;
  m_IfcConstructionMaterialResource_Factory = 0;
  m_IfcConstructionProductResource_Factory = 0;
  m_IfcContextDependentUnit_Factory = 0;
  m_IfcControllerType_Factory = 0;
  m_IfcConversionBasedUnit_Factory = 0;
  m_IfcCooledBeamType_Factory = 0;
  m_IfcCoolingTowerType_Factory = 0;
  m_IfcCoordinatedUniversalTimeOffset_Factory = 0;
  m_IfcCostItem_Factory = 0;
  m_IfcCostSchedule_Factory = 0;
  m_IfcCostValue_Factory = 0;
  m_IfcCovering_Factory = 0;
  m_IfcCoveringType_Factory = 0;
  m_IfcCraneRailAShapeProfileDef_Factory = 0;
  m_IfcCraneRailFShapeProfileDef_Factory = 0;
  m_IfcCrewResource_Factory = 0;
  m_IfcCsgSolid_Factory = 0;
  m_IfcCurrencyRelationship_Factory = 0;
  m_IfcCurtainWall_Factory = 0;
  m_IfcCurtainWallType_Factory = 0;
  m_IfcCurveBoundedPlane_Factory = 0;
  m_IfcCurveStyle_Factory = 0;
  m_IfcCurveStyleFont_Factory = 0;
  m_IfcCurveStyleFontAndScaling_Factory = 0;
  m_IfcCurveStyleFontPattern_Factory = 0;
  m_IfcDamperType_Factory = 0;
  m_IfcDateAndTime_Factory = 0;
  m_IfcDefinedSymbol_Factory = 0;
  m_IfcDerivedProfileDef_Factory = 0;
  m_IfcDerivedUnit_Factory = 0;
  m_IfcDerivedUnitElement_Factory = 0;
  m_IfcDiameterDimension_Factory = 0;
  m_IfcDimensionCalloutRelationship_Factory = 0;
  m_IfcDimensionCurve_Factory = 0;
  m_IfcDimensionCurveDirectedCallout_Factory = 0;
  m_IfcDimensionCurveTerminator_Factory = 0;
  m_IfcDimensionPair_Factory = 0;
  m_IfcDimensionalExponents_Factory = 0;
  m_IfcDirection_Factory = 0;
  m_IfcDiscreteAccessory_Factory = 0;
  m_IfcDiscreteAccessoryType_Factory = 0;
  m_IfcDistributionChamberElement_Factory = 0;
  m_IfcDistributionChamberElementType_Factory = 0;
  m_IfcDistributionControlElement_Factory = 0;
  m_IfcDistributionElement_Factory = 0;
  m_IfcDistributionElementType_Factory = 0;
  m_IfcDistributionFlowElement_Factory = 0;
  m_IfcDistributionPort_Factory = 0;
  m_IfcDocumentElectronicFormat_Factory = 0;
  m_IfcDocumentInformation_Factory = 0;
  m_IfcDocumentInformationRelationship_Factory = 0;
  m_IfcDocumentReference_Factory = 0;
  m_IfcDoor_Factory = 0;
  m_IfcDoorLiningProperties_Factory = 0;
  m_IfcDoorPanelProperties_Factory = 0;
  m_IfcDoorStyle_Factory = 0;
  m_IfcDraughtingCallout_Factory = 0;
  m_IfcDraughtingCalloutRelationship_Factory = 0;
  m_IfcDraughtingPreDefinedColour_Factory = 0;
  m_IfcDraughtingPreDefinedCurveFont_Factory = 0;
  m_IfcDraughtingPreDefinedTextFont_Factory = 0;
  m_IfcDuctFittingType_Factory = 0;
  m_IfcDuctSegmentType_Factory = 0;
  m_IfcDuctSilencerType_Factory = 0;
  m_IfcEdge_Factory = 0;
  m_IfcEdgeCurve_Factory = 0;
  m_IfcEdgeLoop_Factory = 0;
  m_IfcElectricApplianceType_Factory = 0;
  m_IfcElectricDistributionPoint_Factory = 0;
  m_IfcElectricFlowStorageDeviceType_Factory = 0;
  m_IfcElectricGeneratorType_Factory = 0;
  m_IfcElectricHeaterType_Factory = 0;
  m_IfcElectricMotorType_Factory = 0;
  m_IfcElectricTimeControlType_Factory = 0;
  m_IfcElectricalBaseProperties_Factory = 0;
  m_IfcElectricalCircuit_Factory = 0;
  m_IfcElectricalElement_Factory = 0;
  m_IfcElementAssembly_Factory = 0;
  m_IfcElementQuantity_Factory = 0;
  m_IfcEllipse_Factory = 0;
  m_IfcEllipseProfileDef_Factory = 0;
  m_IfcEnergyConversionDevice_Factory = 0;
  m_IfcEnergyProperties_Factory = 0;
  m_IfcEnvironmentalImpactValue_Factory = 0;
  m_IfcEquipmentElement_Factory = 0;
  m_IfcEquipmentStandard_Factory = 0;
  m_IfcEvaporativeCoolerType_Factory = 0;
  m_IfcEvaporatorType_Factory = 0;
  m_IfcExtendedMaterialProperties_Factory = 0;
  m_IfcExternallyDefinedHatchStyle_Factory = 0;
  m_IfcExternallyDefinedSurfaceStyle_Factory = 0;
  m_IfcExternallyDefinedSymbol_Factory = 0;
  m_IfcExternallyDefinedTextFont_Factory = 0;
  m_IfcExtrudedAreaSolid_Factory = 0;
  m_IfcFace_Factory = 0;
  m_IfcFaceBasedSurfaceModel_Factory = 0;
  m_IfcFaceBound_Factory = 0;
  m_IfcFaceOuterBound_Factory = 0;
  m_IfcFaceSurface_Factory = 0;
  m_IfcFacetedBrep_Factory = 0;
  m_IfcFacetedBrepWithVoids_Factory = 0;
  m_IfcFailureConnectionCondition_Factory = 0;
  m_IfcFanType_Factory = 0;
  m_IfcFastener_Factory = 0;
  m_IfcFastenerType_Factory = 0;
  m_IfcFillAreaStyle_Factory = 0;
  m_IfcFillAreaStyleHatching_Factory = 0;
  m_IfcFillAreaStyleTileSymbolWithStyle_Factory = 0;
  m_IfcFillAreaStyleTiles_Factory = 0;
  m_IfcFilterType_Factory = 0;
  m_IfcFireSuppressionTerminalType_Factory = 0;
  m_IfcFlowController_Factory = 0;
  m_IfcFlowFitting_Factory = 0;
  m_IfcFlowInstrumentType_Factory = 0;
  m_IfcFlowMeterType_Factory = 0;
  m_IfcFlowMovingDevice_Factory = 0;
  m_IfcFlowSegment_Factory = 0;
  m_IfcFlowStorageDevice_Factory = 0;
  m_IfcFlowTerminal_Factory = 0;
  m_IfcFlowTreatmentDevice_Factory = 0;
  m_IfcFluidFlowProperties_Factory = 0;
  m_IfcFooting_Factory = 0;
  m_IfcFuelProperties_Factory = 0;
  m_IfcFurnishingElement_Factory = 0;
  m_IfcFurnishingElementType_Factory = 0;
  m_IfcFurnitureStandard_Factory = 0;
  m_IfcFurnitureType_Factory = 0;
  m_IfcGasTerminalType_Factory = 0;
  m_IfcGeneralMaterialProperties_Factory = 0;
  m_IfcGeneralProfileProperties_Factory = 0;
  m_IfcGeometricCurveSet_Factory = 0;
  m_IfcGeometricRepresentationContext_Factory = 0;
  m_IfcGeometricRepresentationSubContext_Factory = 0;
  m_IfcGeometricSet_Factory = 0;
  m_IfcGrid_Factory = 0;
  m_IfcGridAxis_Factory = 0;
  m_IfcGridPlacement_Factory = 0;
  m_IfcGroup_Factory = 0;
  m_IfcHalfSpaceSolid_Factory = 0;
  m_IfcHeatExchangerType_Factory = 0;
  m_IfcHumidifierType_Factory = 0;
  m_IfcHygroscopicMaterialProperties_Factory = 0;
  m_IfcIShapeProfileDef_Factory = 0;
  m_IfcImageTexture_Factory = 0;
  m_IfcInventory_Factory = 0;
  m_IfcIrregularTimeSeries_Factory = 0;
  m_IfcIrregularTimeSeriesValue_Factory = 0;
  m_IfcJunctionBoxType_Factory = 0;
  m_IfcLShapeProfileDef_Factory = 0;
  m_IfcLaborResource_Factory = 0;
  m_IfcLampType_Factory = 0;
  m_IfcLibraryInformation_Factory = 0;
  m_IfcLibraryReference_Factory = 0;
  m_IfcLightDistributionData_Factory = 0;
  m_IfcLightFixtureType_Factory = 0;
  m_IfcLightIntensityDistribution_Factory = 0;
  m_IfcLightSourceAmbient_Factory = 0;
  m_IfcLightSourceDirectional_Factory = 0;
  m_IfcLightSourceGoniometric_Factory = 0;
  m_IfcLightSourcePositional_Factory = 0;
  m_IfcLightSourceSpot_Factory = 0;
  m_IfcLine_Factory = 0;
  m_IfcLinearDimension_Factory = 0;
  m_IfcLocalPlacement_Factory = 0;
  m_IfcLocalTime_Factory = 0;
  m_IfcLoop_Factory = 0;
  m_IfcMappedItem_Factory = 0;
  m_IfcMaterial_Factory = 0;
  m_IfcMaterialClassificationRelationship_Factory = 0;
  m_IfcMaterialDefinitionRepresentation_Factory = 0;
  m_IfcMaterialLayer_Factory = 0;
  m_IfcMaterialLayerSet_Factory = 0;
  m_IfcMaterialLayerSetUsage_Factory = 0;
  m_IfcMaterialList_Factory = 0;
  m_IfcMeasureWithUnit_Factory = 0;
  m_IfcMechanicalConcreteMaterialProperties_Factory = 0;
  m_IfcMechanicalFastener_Factory = 0;
  m_IfcMechanicalFastenerType_Factory = 0;
  m_IfcMechanicalMaterialProperties_Factory = 0;
  m_IfcMechanicalSteelMaterialProperties_Factory = 0;
  m_IfcMember_Factory = 0;
  m_IfcMemberType_Factory = 0;
  m_IfcMetric_Factory = 0;
  m_IfcMonetaryUnit_Factory = 0;
  m_IfcMotorConnectionType_Factory = 0;
  m_IfcMove_Factory = 0;
  m_IfcObjective_Factory = 0;
  m_IfcOccupant_Factory = 0;
  m_IfcOffsetCurve2D_Factory = 0;
  m_IfcOffsetCurve3D_Factory = 0;
  m_IfcOneDirectionRepeatFactor_Factory = 0;
  m_IfcOpenShell_Factory = 0;
  m_IfcOpeningElement_Factory = 0;
  m_IfcOpticalMaterialProperties_Factory = 0;
  m_IfcOrderAction_Factory = 0;
  m_IfcOrganization_Factory = 0;
  m_IfcOrganizationRelationship_Factory = 0;
  m_IfcOrientedEdge_Factory = 0;
  m_IfcOutletType_Factory = 0;
  m_IfcOwnerHistory_Factory = 0;
  m_IfcPath_Factory = 0;
  m_IfcPerformanceHistory_Factory = 0;
  m_IfcPermeableCoveringProperties_Factory = 0;
  m_IfcPermit_Factory = 0;
  m_IfcPerson_Factory = 0;
  m_IfcPersonAndOrganization_Factory = 0;
  m_IfcPhysicalComplexQuantity_Factory = 0;
  m_IfcPile_Factory = 0;
  m_IfcPipeFittingType_Factory = 0;
  m_IfcPipeSegmentType_Factory = 0;
  m_IfcPixelTexture_Factory = 0;
  m_IfcPlanarBox_Factory = 0;
  m_IfcPlanarExtent_Factory = 0;
  m_IfcPlane_Factory = 0;
  m_IfcPlate_Factory = 0;
  m_IfcPlateType_Factory = 0;
  m_IfcPointOnCurve_Factory = 0;
  m_IfcPointOnSurface_Factory = 0;
  m_IfcPolyLoop_Factory = 0;
  m_IfcPolygonalBoundedHalfSpace_Factory = 0;
  m_IfcPolyline_Factory = 0;
  m_IfcPostalAddress_Factory = 0;
  m_IfcPreDefinedDimensionSymbol_Factory = 0;
  m_IfcPreDefinedPointMarkerSymbol_Factory = 0;
  m_IfcPreDefinedTerminatorSymbol_Factory = 0;
  m_IfcPresentationLayerAssignment_Factory = 0;
  m_IfcPresentationLayerWithStyle_Factory = 0;
  m_IfcPresentationStyleAssignment_Factory = 0;
  m_IfcProcedure_Factory = 0;
  m_IfcProductDefinitionShape_Factory = 0;
  m_IfcProductRepresentation_Factory = 0;
  m_IfcProductsOfCombustionProperties_Factory = 0;
  m_IfcProject_Factory = 0;
  m_IfcProjectOrder_Factory = 0;
  m_IfcProjectOrderRecord_Factory = 0;
  m_IfcProjectionCurve_Factory = 0;
  m_IfcProjectionElement_Factory = 0;
  m_IfcPropertyBoundedValue_Factory = 0;
  m_IfcPropertyConstraintRelationship_Factory = 0;
  m_IfcPropertyDependencyRelationship_Factory = 0;
  m_IfcPropertyEnumeratedValue_Factory = 0;
  m_IfcPropertyEnumeration_Factory = 0;
  m_IfcPropertyListValue_Factory = 0;
  m_IfcPropertyReferenceValue_Factory = 0;
  m_IfcPropertySet_Factory = 0;
  m_IfcPropertySingleValue_Factory = 0;
  m_IfcPropertyTableValue_Factory = 0;
  m_IfcProtectiveDeviceType_Factory = 0;
  m_IfcProxy_Factory = 0;
  m_IfcPumpType_Factory = 0;
  m_IfcQuantityArea_Factory = 0;
  m_IfcQuantityCount_Factory = 0;
  m_IfcQuantityLength_Factory = 0;
  m_IfcQuantityTime_Factory = 0;
  m_IfcQuantityVolume_Factory = 0;
  m_IfcQuantityWeight_Factory = 0;
  m_IfcRadiusDimension_Factory = 0;
  m_IfcRailing_Factory = 0;
  m_IfcRailingType_Factory = 0;
  m_IfcRamp_Factory = 0;
  m_IfcRampFlight_Factory = 0;
  m_IfcRampFlightType_Factory = 0;
  m_IfcRationalBezierCurve_Factory = 0;
  m_IfcRectangleHollowProfileDef_Factory = 0;
  m_IfcRectangleProfileDef_Factory = 0;
  m_IfcRectangularPyramid_Factory = 0;
  m_IfcRectangularTrimmedSurface_Factory = 0;
  m_IfcReferencesValueDocument_Factory = 0;
  m_IfcRegularTimeSeries_Factory = 0;
  m_IfcReinforcementBarProperties_Factory = 0;
  m_IfcReinforcementDefinitionProperties_Factory = 0;
  m_IfcReinforcingBar_Factory = 0;
  m_IfcReinforcingMesh_Factory = 0;
  m_IfcRelAggregates_Factory = 0;
  m_IfcRelAssignsTasks_Factory = 0;
  m_IfcRelAssignsToActor_Factory = 0;
  m_IfcRelAssignsToControl_Factory = 0;
  m_IfcRelAssignsToGroup_Factory = 0;
  m_IfcRelAssignsToProcess_Factory = 0;
  m_IfcRelAssignsToProduct_Factory = 0;
  m_IfcRelAssignsToProjectOrder_Factory = 0;
  m_IfcRelAssignsToResource_Factory = 0;
  m_IfcRelAssociates_Factory = 0;
  m_IfcRelAssociatesAppliedValue_Factory = 0;
  m_IfcRelAssociatesApproval_Factory = 0;
  m_IfcRelAssociatesClassification_Factory = 0;
  m_IfcRelAssociatesConstraint_Factory = 0;
  m_IfcRelAssociatesDocument_Factory = 0;
  m_IfcRelAssociatesLibrary_Factory = 0;
  m_IfcRelAssociatesMaterial_Factory = 0;
  m_IfcRelAssociatesProfileProperties_Factory = 0;
  m_IfcRelConnectsElements_Factory = 0;
  m_IfcRelConnectsPathElements_Factory = 0;
  m_IfcRelConnectsPortToElement_Factory = 0;
  m_IfcRelConnectsPorts_Factory = 0;
  m_IfcRelConnectsStructuralActivity_Factory = 0;
  m_IfcRelConnectsStructuralElement_Factory = 0;
  m_IfcRelConnectsStructuralMember_Factory = 0;
  m_IfcRelConnectsWithEccentricity_Factory = 0;
  m_IfcRelConnectsWithRealizingElements_Factory = 0;
  m_IfcRelContainedInSpatialStructure_Factory = 0;
  m_IfcRelCoversBldgElements_Factory = 0;
  m_IfcRelCoversSpaces_Factory = 0;
  m_IfcRelDefinesByProperties_Factory = 0;
  m_IfcRelDefinesByType_Factory = 0;
  m_IfcRelFillsElement_Factory = 0;
  m_IfcRelFlowControlElements_Factory = 0;
  m_IfcRelInteractionRequirements_Factory = 0;
  m_IfcRelNests_Factory = 0;
  m_IfcRelOccupiesSpaces_Factory = 0;
  m_IfcRelOverridesProperties_Factory = 0;
  m_IfcRelProjectsElement_Factory = 0;
  m_IfcRelReferencedInSpatialStructure_Factory = 0;
  m_IfcRelSchedulesCostItems_Factory = 0;
  m_IfcRelSequence_Factory = 0;
  m_IfcRelServicesBuildings_Factory = 0;
  m_IfcRelSpaceBoundary_Factory = 0;
  m_IfcRelVoidsElement_Factory = 0;
  m_IfcRelaxation_Factory = 0;
  m_IfcRepresentation_Factory = 0;
  m_IfcRepresentationContext_Factory = 0;
  m_IfcRepresentationMap_Factory = 0;
  m_IfcRevolvedAreaSolid_Factory = 0;
  m_IfcRibPlateProfileProperties_Factory = 0;
  m_IfcRightCircularCone_Factory = 0;
  m_IfcRightCircularCylinder_Factory = 0;
  m_IfcRoof_Factory = 0;
  m_IfcRoundedEdgeFeature_Factory = 0;
  m_IfcRoundedRectangleProfileDef_Factory = 0;
  m_IfcSIUnit_Factory = 0;
  m_IfcSanitaryTerminalType_Factory = 0;
  m_IfcScheduleTimeControl_Factory = 0;
  m_IfcSectionProperties_Factory = 0;
  m_IfcSectionReinforcementProperties_Factory = 0;
  m_IfcSectionedSpine_Factory = 0;
  m_IfcSensorType_Factory = 0;
  m_IfcServiceLife_Factory = 0;
  m_IfcServiceLifeFactor_Factory = 0;
  m_IfcShapeAspect_Factory = 0;
  m_IfcShapeRepresentation_Factory = 0;
  m_IfcShellBasedSurfaceModel_Factory = 0;
  m_IfcSite_Factory = 0;
  m_IfcSlab_Factory = 0;
  m_IfcSlabType_Factory = 0;
  m_IfcSlippageConnectionCondition_Factory = 0;
  m_IfcSoundProperties_Factory = 0;
  m_IfcSoundValue_Factory = 0;
  m_IfcSpace_Factory = 0;
  m_IfcSpaceHeaterType_Factory = 0;
  m_IfcSpaceProgram_Factory = 0;
  m_IfcSpaceThermalLoadProperties_Factory = 0;
  m_IfcSpaceType_Factory = 0;
  m_IfcSphere_Factory = 0;
  m_IfcStackTerminalType_Factory = 0;
  m_IfcStair_Factory = 0;
  m_IfcStairFlight_Factory = 0;
  m_IfcStairFlightType_Factory = 0;
  m_IfcStructuralAnalysisModel_Factory = 0;
  m_IfcStructuralCurveConnection_Factory = 0;
  m_IfcStructuralCurveMember_Factory = 0;
  m_IfcStructuralCurveMemberVarying_Factory = 0;
  m_IfcStructuralLinearAction_Factory = 0;
  m_IfcStructuralLinearActionVarying_Factory = 0;
  m_IfcStructuralLoadGroup_Factory = 0;
  m_IfcStructuralLoadLinearForce_Factory = 0;
  m_IfcStructuralLoadPlanarForce_Factory = 0;
  m_IfcStructuralLoadSingleDisplacement_Factory = 0;
  m_IfcStructuralLoadSingleDisplacementDistortion_Factory = 0;
  m_IfcStructuralLoadSingleForce_Factory = 0;
  m_IfcStructuralLoadSingleForceWarping_Factory = 0;
  m_IfcStructuralLoadTemperature_Factory = 0;
  m_IfcStructuralPlanarAction_Factory = 0;
  m_IfcStructuralPlanarActionVarying_Factory = 0;
  m_IfcStructuralPointAction_Factory = 0;
  m_IfcStructuralPointConnection_Factory = 0;
  m_IfcStructuralPointReaction_Factory = 0;
  m_IfcStructuralProfileProperties_Factory = 0;
  m_IfcStructuralResultGroup_Factory = 0;
  m_IfcStructuralSteelProfileProperties_Factory = 0;
  m_IfcStructuralSurfaceConnection_Factory = 0;
  m_IfcStructuralSurfaceMember_Factory = 0;
  m_IfcStructuralSurfaceMemberVarying_Factory = 0;
  m_IfcStructuredDimensionCallout_Factory = 0;
  m_IfcStyledItem_Factory = 0;
  m_IfcStyledRepresentation_Factory = 0;
  m_IfcSubContractResource_Factory = 0;
  m_IfcSubedge_Factory = 0;
  m_IfcSurfaceCurveSweptAreaSolid_Factory = 0;
  m_IfcSurfaceOfLinearExtrusion_Factory = 0;
  m_IfcSurfaceOfRevolution_Factory = 0;
  m_IfcSurfaceStyle_Factory = 0;
  m_IfcSurfaceStyleLighting_Factory = 0;
  m_IfcSurfaceStyleRefraction_Factory = 0;
  m_IfcSurfaceStyleRendering_Factory = 0;
  m_IfcSurfaceStyleShading_Factory = 0;
  m_IfcSurfaceStyleWithTextures_Factory = 0;
  m_IfcSweptDiskSolid_Factory = 0;
  m_IfcSwitchingDeviceType_Factory = 0;
  m_IfcSymbolStyle_Factory = 0;
  m_IfcSystem_Factory = 0;
  m_IfcSystemFurnitureElementType_Factory = 0;
  m_IfcTShapeProfileDef_Factory = 0;
  m_IfcTable_Factory = 0;
  m_IfcTableRow_Factory = 0;
  m_IfcTankType_Factory = 0;
  m_IfcTask_Factory = 0;
  m_IfcTelecomAddress_Factory = 0;
  m_IfcTendon_Factory = 0;
  m_IfcTendonAnchor_Factory = 0;
  m_IfcTerminatorSymbol_Factory = 0;
  m_IfcTextLiteral_Factory = 0;
  m_IfcTextLiteralWithExtent_Factory = 0;
  m_IfcTextStyle_Factory = 0;
  m_IfcTextStyleFontModel_Factory = 0;
  m_IfcTextStyleForDefinedFont_Factory = 0;
  m_IfcTextStyleTextModel_Factory = 0;
  m_IfcTextStyleWithBoxCharacteristics_Factory = 0;
  m_IfcTextureCoordinateGenerator_Factory = 0;
  m_IfcTextureMap_Factory = 0;
  m_IfcTextureVertex_Factory = 0;
  m_IfcThermalMaterialProperties_Factory = 0;
  m_IfcTimeSeriesReferenceRelationship_Factory = 0;
  m_IfcTimeSeriesSchedule_Factory = 0;
  m_IfcTimeSeriesValue_Factory = 0;
  m_IfcTopologyRepresentation_Factory = 0;
  m_IfcTransformerType_Factory = 0;
  m_IfcTransportElement_Factory = 0;
  m_IfcTransportElementType_Factory = 0;
  m_IfcTrapeziumProfileDef_Factory = 0;
  m_IfcTrimmedCurve_Factory = 0;
  m_IfcTubeBundleType_Factory = 0;
  m_IfcTwoDirectionRepeatFactor_Factory = 0;
  m_IfcTypeObject_Factory = 0;
  m_IfcTypeProduct_Factory = 0;
  m_IfcUShapeProfileDef_Factory = 0;
  m_IfcUnitAssignment_Factory = 0;
  m_IfcUnitaryEquipmentType_Factory = 0;
  m_IfcValveType_Factory = 0;
  m_IfcVector_Factory = 0;
  m_IfcVertex_Factory = 0;
  m_IfcVertexBasedTextureMap_Factory = 0;
  m_IfcVertexLoop_Factory = 0;
  m_IfcVertexPoint_Factory = 0;
  m_IfcVibrationIsolatorType_Factory = 0;
  m_IfcVirtualElement_Factory = 0;
  m_IfcVirtualGridIntersection_Factory = 0;
  m_IfcWall_Factory = 0;
  m_IfcWallStandardCase_Factory = 0;
  m_IfcWallType_Factory = 0;
  m_IfcWasteTerminalType_Factory = 0;
  m_IfcWaterProperties_Factory = 0;
  m_IfcWindow_Factory = 0;
  m_IfcWindowLiningProperties_Factory = 0;
  m_IfcWindowPanelProperties_Factory = 0;
  m_IfcWindowStyle_Factory = 0;
  m_IfcWorkPlan_Factory = 0;
  m_IfcWorkSchedule_Factory = 0;
  m_IfcZShapeProfileDef_Factory = 0;
  m_IfcZone_Factory = 0;
}

Model::~Model() {
}

Ifc2DCompositeCurve_Factory *Model::getIfc2DCompositeCurve_Factory() {
  if (!m_Ifc2DCompositeCurve_Factory) {
    m_Ifc2DCompositeCurve_Factory = new Ifc2DCompositeCurve_Factory;
    m_Ifc2DCompositeCurve_Factory->setModel(this);
    m_Type2Factory[Ifc2DCompositeCurve::getClassType()] = m_Ifc2DCompositeCurve_Factory;
  }
  return m_Ifc2DCompositeCurve_Factory;
}

IfcActionRequest_Factory *Model::getIfcActionRequest_Factory() {
  if (!m_IfcActionRequest_Factory) {
    m_IfcActionRequest_Factory = new IfcActionRequest_Factory;
    m_IfcActionRequest_Factory->setModel(this);
    m_Type2Factory[IfcActionRequest::getClassType()] = m_IfcActionRequest_Factory;
  }
  return m_IfcActionRequest_Factory;
}

IfcActor_Factory *Model::getIfcActor_Factory() {
  if (!m_IfcActor_Factory) {
    m_IfcActor_Factory = new IfcActor_Factory;
    m_IfcActor_Factory->setModel(this);
    m_Type2Factory[IfcActor::getClassType()] = m_IfcActor_Factory;
  }
  return m_IfcActor_Factory;
}

IfcActorRole_Factory *Model::getIfcActorRole_Factory() {
  if (!m_IfcActorRole_Factory) {
    m_IfcActorRole_Factory = new IfcActorRole_Factory;
    m_IfcActorRole_Factory->setModel(this);
    m_Type2Factory[IfcActorRole::getClassType()] = m_IfcActorRole_Factory;
  }
  return m_IfcActorRole_Factory;
}

IfcActuatorType_Factory *Model::getIfcActuatorType_Factory() {
  if (!m_IfcActuatorType_Factory) {
    m_IfcActuatorType_Factory = new IfcActuatorType_Factory;
    m_IfcActuatorType_Factory->setModel(this);
    m_Type2Factory[IfcActuatorType::getClassType()] = m_IfcActuatorType_Factory;
  }
  return m_IfcActuatorType_Factory;
}

IfcAirTerminalBoxType_Factory *Model::getIfcAirTerminalBoxType_Factory() {
  if (!m_IfcAirTerminalBoxType_Factory) {
    m_IfcAirTerminalBoxType_Factory = new IfcAirTerminalBoxType_Factory;
    m_IfcAirTerminalBoxType_Factory->setModel(this);
    m_Type2Factory[IfcAirTerminalBoxType::getClassType()] = m_IfcAirTerminalBoxType_Factory;
  }
  return m_IfcAirTerminalBoxType_Factory;
}

IfcAirTerminalType_Factory *Model::getIfcAirTerminalType_Factory() {
  if (!m_IfcAirTerminalType_Factory) {
    m_IfcAirTerminalType_Factory = new IfcAirTerminalType_Factory;
    m_IfcAirTerminalType_Factory->setModel(this);
    m_Type2Factory[IfcAirTerminalType::getClassType()] = m_IfcAirTerminalType_Factory;
  }
  return m_IfcAirTerminalType_Factory;
}

IfcAirToAirHeatRecoveryType_Factory *Model::getIfcAirToAirHeatRecoveryType_Factory() {
  if (!m_IfcAirToAirHeatRecoveryType_Factory) {
    m_IfcAirToAirHeatRecoveryType_Factory = new IfcAirToAirHeatRecoveryType_Factory;
    m_IfcAirToAirHeatRecoveryType_Factory->setModel(this);
    m_Type2Factory[IfcAirToAirHeatRecoveryType::getClassType()] = m_IfcAirToAirHeatRecoveryType_Factory;
  }
  return m_IfcAirToAirHeatRecoveryType_Factory;
}

IfcAlarmType_Factory *Model::getIfcAlarmType_Factory() {
  if (!m_IfcAlarmType_Factory) {
    m_IfcAlarmType_Factory = new IfcAlarmType_Factory;
    m_IfcAlarmType_Factory->setModel(this);
    m_Type2Factory[IfcAlarmType::getClassType()] = m_IfcAlarmType_Factory;
  }
  return m_IfcAlarmType_Factory;
}

IfcAngularDimension_Factory *Model::getIfcAngularDimension_Factory() {
  if (!m_IfcAngularDimension_Factory) {
    m_IfcAngularDimension_Factory = new IfcAngularDimension_Factory;
    m_IfcAngularDimension_Factory->setModel(this);
    m_Type2Factory[IfcAngularDimension::getClassType()] = m_IfcAngularDimension_Factory;
  }
  return m_IfcAngularDimension_Factory;
}

IfcAnnotation_Factory *Model::getIfcAnnotation_Factory() {
  if (!m_IfcAnnotation_Factory) {
    m_IfcAnnotation_Factory = new IfcAnnotation_Factory;
    m_IfcAnnotation_Factory->setModel(this);
    m_Type2Factory[IfcAnnotation::getClassType()] = m_IfcAnnotation_Factory;
  }
  return m_IfcAnnotation_Factory;
}

IfcAnnotationCurveOccurrence_Factory *Model::getIfcAnnotationCurveOccurrence_Factory() {
  if (!m_IfcAnnotationCurveOccurrence_Factory) {
    m_IfcAnnotationCurveOccurrence_Factory = new IfcAnnotationCurveOccurrence_Factory;
    m_IfcAnnotationCurveOccurrence_Factory->setModel(this);
    m_Type2Factory[IfcAnnotationCurveOccurrence::getClassType()] = m_IfcAnnotationCurveOccurrence_Factory;
  }
  return m_IfcAnnotationCurveOccurrence_Factory;
}

IfcAnnotationFillArea_Factory *Model::getIfcAnnotationFillArea_Factory() {
  if (!m_IfcAnnotationFillArea_Factory) {
    m_IfcAnnotationFillArea_Factory = new IfcAnnotationFillArea_Factory;
    m_IfcAnnotationFillArea_Factory->setModel(this);
    m_Type2Factory[IfcAnnotationFillArea::getClassType()] = m_IfcAnnotationFillArea_Factory;
  }
  return m_IfcAnnotationFillArea_Factory;
}

IfcAnnotationFillAreaOccurrence_Factory *Model::getIfcAnnotationFillAreaOccurrence_Factory() {
  if (!m_IfcAnnotationFillAreaOccurrence_Factory) {
    m_IfcAnnotationFillAreaOccurrence_Factory = new IfcAnnotationFillAreaOccurrence_Factory;
    m_IfcAnnotationFillAreaOccurrence_Factory->setModel(this);
    m_Type2Factory[IfcAnnotationFillAreaOccurrence::getClassType()] = m_IfcAnnotationFillAreaOccurrence_Factory;
  }
  return m_IfcAnnotationFillAreaOccurrence_Factory;
}

IfcAnnotationSurface_Factory *Model::getIfcAnnotationSurface_Factory() {
  if (!m_IfcAnnotationSurface_Factory) {
    m_IfcAnnotationSurface_Factory = new IfcAnnotationSurface_Factory;
    m_IfcAnnotationSurface_Factory->setModel(this);
    m_Type2Factory[IfcAnnotationSurface::getClassType()] = m_IfcAnnotationSurface_Factory;
  }
  return m_IfcAnnotationSurface_Factory;
}

IfcAnnotationSurfaceOccurrence_Factory *Model::getIfcAnnotationSurfaceOccurrence_Factory() {
  if (!m_IfcAnnotationSurfaceOccurrence_Factory) {
    m_IfcAnnotationSurfaceOccurrence_Factory = new IfcAnnotationSurfaceOccurrence_Factory;
    m_IfcAnnotationSurfaceOccurrence_Factory->setModel(this);
    m_Type2Factory[IfcAnnotationSurfaceOccurrence::getClassType()] = m_IfcAnnotationSurfaceOccurrence_Factory;
  }
  return m_IfcAnnotationSurfaceOccurrence_Factory;
}

IfcAnnotationSymbolOccurrence_Factory *Model::getIfcAnnotationSymbolOccurrence_Factory() {
  if (!m_IfcAnnotationSymbolOccurrence_Factory) {
    m_IfcAnnotationSymbolOccurrence_Factory = new IfcAnnotationSymbolOccurrence_Factory;
    m_IfcAnnotationSymbolOccurrence_Factory->setModel(this);
    m_Type2Factory[IfcAnnotationSymbolOccurrence::getClassType()] = m_IfcAnnotationSymbolOccurrence_Factory;
  }
  return m_IfcAnnotationSymbolOccurrence_Factory;
}

IfcAnnotationTextOccurrence_Factory *Model::getIfcAnnotationTextOccurrence_Factory() {
  if (!m_IfcAnnotationTextOccurrence_Factory) {
    m_IfcAnnotationTextOccurrence_Factory = new IfcAnnotationTextOccurrence_Factory;
    m_IfcAnnotationTextOccurrence_Factory->setModel(this);
    m_Type2Factory[IfcAnnotationTextOccurrence::getClassType()] = m_IfcAnnotationTextOccurrence_Factory;
  }
  return m_IfcAnnotationTextOccurrence_Factory;
}

IfcApplication_Factory *Model::getIfcApplication_Factory() {
  if (!m_IfcApplication_Factory) {
    m_IfcApplication_Factory = new IfcApplication_Factory;
    m_IfcApplication_Factory->setModel(this);
    m_Type2Factory[IfcApplication::getClassType()] = m_IfcApplication_Factory;
  }
  return m_IfcApplication_Factory;
}

IfcAppliedValueRelationship_Factory *Model::getIfcAppliedValueRelationship_Factory() {
  if (!m_IfcAppliedValueRelationship_Factory) {
    m_IfcAppliedValueRelationship_Factory = new IfcAppliedValueRelationship_Factory;
    m_IfcAppliedValueRelationship_Factory->setModel(this);
    m_Type2Factory[IfcAppliedValueRelationship::getClassType()] = m_IfcAppliedValueRelationship_Factory;
  }
  return m_IfcAppliedValueRelationship_Factory;
}

IfcApproval_Factory *Model::getIfcApproval_Factory() {
  if (!m_IfcApproval_Factory) {
    m_IfcApproval_Factory = new IfcApproval_Factory;
    m_IfcApproval_Factory->setModel(this);
    m_Type2Factory[IfcApproval::getClassType()] = m_IfcApproval_Factory;
  }
  return m_IfcApproval_Factory;
}

IfcApprovalActorRelationship_Factory *Model::getIfcApprovalActorRelationship_Factory() {
  if (!m_IfcApprovalActorRelationship_Factory) {
    m_IfcApprovalActorRelationship_Factory = new IfcApprovalActorRelationship_Factory;
    m_IfcApprovalActorRelationship_Factory->setModel(this);
    m_Type2Factory[IfcApprovalActorRelationship::getClassType()] = m_IfcApprovalActorRelationship_Factory;
  }
  return m_IfcApprovalActorRelationship_Factory;
}

IfcApprovalPropertyRelationship_Factory *Model::getIfcApprovalPropertyRelationship_Factory() {
  if (!m_IfcApprovalPropertyRelationship_Factory) {
    m_IfcApprovalPropertyRelationship_Factory = new IfcApprovalPropertyRelationship_Factory;
    m_IfcApprovalPropertyRelationship_Factory->setModel(this);
    m_Type2Factory[IfcApprovalPropertyRelationship::getClassType()] = m_IfcApprovalPropertyRelationship_Factory;
  }
  return m_IfcApprovalPropertyRelationship_Factory;
}

IfcApprovalRelationship_Factory *Model::getIfcApprovalRelationship_Factory() {
  if (!m_IfcApprovalRelationship_Factory) {
    m_IfcApprovalRelationship_Factory = new IfcApprovalRelationship_Factory;
    m_IfcApprovalRelationship_Factory->setModel(this);
    m_Type2Factory[IfcApprovalRelationship::getClassType()] = m_IfcApprovalRelationship_Factory;
  }
  return m_IfcApprovalRelationship_Factory;
}

IfcArbitraryClosedProfileDef_Factory *Model::getIfcArbitraryClosedProfileDef_Factory() {
  if (!m_IfcArbitraryClosedProfileDef_Factory) {
    m_IfcArbitraryClosedProfileDef_Factory = new IfcArbitraryClosedProfileDef_Factory;
    m_IfcArbitraryClosedProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcArbitraryClosedProfileDef::getClassType()] = m_IfcArbitraryClosedProfileDef_Factory;
  }
  return m_IfcArbitraryClosedProfileDef_Factory;
}

IfcArbitraryOpenProfileDef_Factory *Model::getIfcArbitraryOpenProfileDef_Factory() {
  if (!m_IfcArbitraryOpenProfileDef_Factory) {
    m_IfcArbitraryOpenProfileDef_Factory = new IfcArbitraryOpenProfileDef_Factory;
    m_IfcArbitraryOpenProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcArbitraryOpenProfileDef::getClassType()] = m_IfcArbitraryOpenProfileDef_Factory;
  }
  return m_IfcArbitraryOpenProfileDef_Factory;
}

IfcArbitraryProfileDefWithVoids_Factory *Model::getIfcArbitraryProfileDefWithVoids_Factory() {
  if (!m_IfcArbitraryProfileDefWithVoids_Factory) {
    m_IfcArbitraryProfileDefWithVoids_Factory = new IfcArbitraryProfileDefWithVoids_Factory;
    m_IfcArbitraryProfileDefWithVoids_Factory->setModel(this);
    m_Type2Factory[IfcArbitraryProfileDefWithVoids::getClassType()] = m_IfcArbitraryProfileDefWithVoids_Factory;
  }
  return m_IfcArbitraryProfileDefWithVoids_Factory;
}

IfcAsset_Factory *Model::getIfcAsset_Factory() {
  if (!m_IfcAsset_Factory) {
    m_IfcAsset_Factory = new IfcAsset_Factory;
    m_IfcAsset_Factory->setModel(this);
    m_Type2Factory[IfcAsset::getClassType()] = m_IfcAsset_Factory;
  }
  return m_IfcAsset_Factory;
}

IfcAsymmetricIShapeProfileDef_Factory *Model::getIfcAsymmetricIShapeProfileDef_Factory() {
  if (!m_IfcAsymmetricIShapeProfileDef_Factory) {
    m_IfcAsymmetricIShapeProfileDef_Factory = new IfcAsymmetricIShapeProfileDef_Factory;
    m_IfcAsymmetricIShapeProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcAsymmetricIShapeProfileDef::getClassType()] = m_IfcAsymmetricIShapeProfileDef_Factory;
  }
  return m_IfcAsymmetricIShapeProfileDef_Factory;
}

IfcAxis1Placement_Factory *Model::getIfcAxis1Placement_Factory() {
  if (!m_IfcAxis1Placement_Factory) {
    m_IfcAxis1Placement_Factory = new IfcAxis1Placement_Factory;
    m_IfcAxis1Placement_Factory->setModel(this);
    m_Type2Factory[IfcAxis1Placement::getClassType()] = m_IfcAxis1Placement_Factory;
  }
  return m_IfcAxis1Placement_Factory;
}

IfcAxis2Placement2D_Factory *Model::getIfcAxis2Placement2D_Factory() {
  if (!m_IfcAxis2Placement2D_Factory) {
    m_IfcAxis2Placement2D_Factory = new IfcAxis2Placement2D_Factory;
    m_IfcAxis2Placement2D_Factory->setModel(this);
    m_Type2Factory[IfcAxis2Placement2D::getClassType()] = m_IfcAxis2Placement2D_Factory;
  }
  return m_IfcAxis2Placement2D_Factory;
}

IfcAxis2Placement3D_Factory *Model::getIfcAxis2Placement3D_Factory() {
  if (!m_IfcAxis2Placement3D_Factory) {
    m_IfcAxis2Placement3D_Factory = new IfcAxis2Placement3D_Factory;
    m_IfcAxis2Placement3D_Factory->setModel(this);
    m_Type2Factory[IfcAxis2Placement3D::getClassType()] = m_IfcAxis2Placement3D_Factory;
  }
  return m_IfcAxis2Placement3D_Factory;
}

IfcBeam_Factory *Model::getIfcBeam_Factory() {
  if (!m_IfcBeam_Factory) {
    m_IfcBeam_Factory = new IfcBeam_Factory;
    m_IfcBeam_Factory->setModel(this);
    m_Type2Factory[IfcBeam::getClassType()] = m_IfcBeam_Factory;
  }
  return m_IfcBeam_Factory;
}

IfcBeamType_Factory *Model::getIfcBeamType_Factory() {
  if (!m_IfcBeamType_Factory) {
    m_IfcBeamType_Factory = new IfcBeamType_Factory;
    m_IfcBeamType_Factory->setModel(this);
    m_Type2Factory[IfcBeamType::getClassType()] = m_IfcBeamType_Factory;
  }
  return m_IfcBeamType_Factory;
}

IfcBezierCurve_Factory *Model::getIfcBezierCurve_Factory() {
  if (!m_IfcBezierCurve_Factory) {
    m_IfcBezierCurve_Factory = new IfcBezierCurve_Factory;
    m_IfcBezierCurve_Factory->setModel(this);
    m_Type2Factory[IfcBezierCurve::getClassType()] = m_IfcBezierCurve_Factory;
  }
  return m_IfcBezierCurve_Factory;
}

IfcBlobTexture_Factory *Model::getIfcBlobTexture_Factory() {
  if (!m_IfcBlobTexture_Factory) {
    m_IfcBlobTexture_Factory = new IfcBlobTexture_Factory;
    m_IfcBlobTexture_Factory->setModel(this);
    m_Type2Factory[IfcBlobTexture::getClassType()] = m_IfcBlobTexture_Factory;
  }
  return m_IfcBlobTexture_Factory;
}

IfcBlock_Factory *Model::getIfcBlock_Factory() {
  if (!m_IfcBlock_Factory) {
    m_IfcBlock_Factory = new IfcBlock_Factory;
    m_IfcBlock_Factory->setModel(this);
    m_Type2Factory[IfcBlock::getClassType()] = m_IfcBlock_Factory;
  }
  return m_IfcBlock_Factory;
}

IfcBoilerType_Factory *Model::getIfcBoilerType_Factory() {
  if (!m_IfcBoilerType_Factory) {
    m_IfcBoilerType_Factory = new IfcBoilerType_Factory;
    m_IfcBoilerType_Factory->setModel(this);
    m_Type2Factory[IfcBoilerType::getClassType()] = m_IfcBoilerType_Factory;
  }
  return m_IfcBoilerType_Factory;
}

IfcBooleanClippingResult_Factory *Model::getIfcBooleanClippingResult_Factory() {
  if (!m_IfcBooleanClippingResult_Factory) {
    m_IfcBooleanClippingResult_Factory = new IfcBooleanClippingResult_Factory;
    m_IfcBooleanClippingResult_Factory->setModel(this);
    m_Type2Factory[IfcBooleanClippingResult::getClassType()] = m_IfcBooleanClippingResult_Factory;
  }
  return m_IfcBooleanClippingResult_Factory;
}

IfcBooleanResult_Factory *Model::getIfcBooleanResult_Factory() {
  if (!m_IfcBooleanResult_Factory) {
    m_IfcBooleanResult_Factory = new IfcBooleanResult_Factory;
    m_IfcBooleanResult_Factory->setModel(this);
    m_Type2Factory[IfcBooleanResult::getClassType()] = m_IfcBooleanResult_Factory;
  }
  return m_IfcBooleanResult_Factory;
}

IfcBoundaryEdgeCondition_Factory *Model::getIfcBoundaryEdgeCondition_Factory() {
  if (!m_IfcBoundaryEdgeCondition_Factory) {
    m_IfcBoundaryEdgeCondition_Factory = new IfcBoundaryEdgeCondition_Factory;
    m_IfcBoundaryEdgeCondition_Factory->setModel(this);
    m_Type2Factory[IfcBoundaryEdgeCondition::getClassType()] = m_IfcBoundaryEdgeCondition_Factory;
  }
  return m_IfcBoundaryEdgeCondition_Factory;
}

IfcBoundaryFaceCondition_Factory *Model::getIfcBoundaryFaceCondition_Factory() {
  if (!m_IfcBoundaryFaceCondition_Factory) {
    m_IfcBoundaryFaceCondition_Factory = new IfcBoundaryFaceCondition_Factory;
    m_IfcBoundaryFaceCondition_Factory->setModel(this);
    m_Type2Factory[IfcBoundaryFaceCondition::getClassType()] = m_IfcBoundaryFaceCondition_Factory;
  }
  return m_IfcBoundaryFaceCondition_Factory;
}

IfcBoundaryNodeCondition_Factory *Model::getIfcBoundaryNodeCondition_Factory() {
  if (!m_IfcBoundaryNodeCondition_Factory) {
    m_IfcBoundaryNodeCondition_Factory = new IfcBoundaryNodeCondition_Factory;
    m_IfcBoundaryNodeCondition_Factory->setModel(this);
    m_Type2Factory[IfcBoundaryNodeCondition::getClassType()] = m_IfcBoundaryNodeCondition_Factory;
  }
  return m_IfcBoundaryNodeCondition_Factory;
}

IfcBoundaryNodeConditionWarping_Factory *Model::getIfcBoundaryNodeConditionWarping_Factory() {
  if (!m_IfcBoundaryNodeConditionWarping_Factory) {
    m_IfcBoundaryNodeConditionWarping_Factory = new IfcBoundaryNodeConditionWarping_Factory;
    m_IfcBoundaryNodeConditionWarping_Factory->setModel(this);
    m_Type2Factory[IfcBoundaryNodeConditionWarping::getClassType()] = m_IfcBoundaryNodeConditionWarping_Factory;
  }
  return m_IfcBoundaryNodeConditionWarping_Factory;
}

IfcBoundedSurface_Factory *Model::getIfcBoundedSurface_Factory() {
  if (!m_IfcBoundedSurface_Factory) {
    m_IfcBoundedSurface_Factory = new IfcBoundedSurface_Factory;
    m_IfcBoundedSurface_Factory->setModel(this);
    m_Type2Factory[IfcBoundedSurface::getClassType()] = m_IfcBoundedSurface_Factory;
  }
  return m_IfcBoundedSurface_Factory;
}

IfcBoundingBox_Factory *Model::getIfcBoundingBox_Factory() {
  if (!m_IfcBoundingBox_Factory) {
    m_IfcBoundingBox_Factory = new IfcBoundingBox_Factory;
    m_IfcBoundingBox_Factory->setModel(this);
    m_Type2Factory[IfcBoundingBox::getClassType()] = m_IfcBoundingBox_Factory;
  }
  return m_IfcBoundingBox_Factory;
}

IfcBoxedHalfSpace_Factory *Model::getIfcBoxedHalfSpace_Factory() {
  if (!m_IfcBoxedHalfSpace_Factory) {
    m_IfcBoxedHalfSpace_Factory = new IfcBoxedHalfSpace_Factory;
    m_IfcBoxedHalfSpace_Factory->setModel(this);
    m_Type2Factory[IfcBoxedHalfSpace::getClassType()] = m_IfcBoxedHalfSpace_Factory;
  }
  return m_IfcBoxedHalfSpace_Factory;
}

IfcBuilding_Factory *Model::getIfcBuilding_Factory() {
  if (!m_IfcBuilding_Factory) {
    m_IfcBuilding_Factory = new IfcBuilding_Factory;
    m_IfcBuilding_Factory->setModel(this);
    m_Type2Factory[IfcBuilding::getClassType()] = m_IfcBuilding_Factory;
  }
  return m_IfcBuilding_Factory;
}

IfcBuildingElementPart_Factory *Model::getIfcBuildingElementPart_Factory() {
  if (!m_IfcBuildingElementPart_Factory) {
    m_IfcBuildingElementPart_Factory = new IfcBuildingElementPart_Factory;
    m_IfcBuildingElementPart_Factory->setModel(this);
    m_Type2Factory[IfcBuildingElementPart::getClassType()] = m_IfcBuildingElementPart_Factory;
  }
  return m_IfcBuildingElementPart_Factory;
}

IfcBuildingElementProxy_Factory *Model::getIfcBuildingElementProxy_Factory() {
  if (!m_IfcBuildingElementProxy_Factory) {
    m_IfcBuildingElementProxy_Factory = new IfcBuildingElementProxy_Factory;
    m_IfcBuildingElementProxy_Factory->setModel(this);
    m_Type2Factory[IfcBuildingElementProxy::getClassType()] = m_IfcBuildingElementProxy_Factory;
  }
  return m_IfcBuildingElementProxy_Factory;
}

IfcBuildingElementProxyType_Factory *Model::getIfcBuildingElementProxyType_Factory() {
  if (!m_IfcBuildingElementProxyType_Factory) {
    m_IfcBuildingElementProxyType_Factory = new IfcBuildingElementProxyType_Factory;
    m_IfcBuildingElementProxyType_Factory->setModel(this);
    m_Type2Factory[IfcBuildingElementProxyType::getClassType()] = m_IfcBuildingElementProxyType_Factory;
  }
  return m_IfcBuildingElementProxyType_Factory;
}

IfcBuildingStorey_Factory *Model::getIfcBuildingStorey_Factory() {
  if (!m_IfcBuildingStorey_Factory) {
    m_IfcBuildingStorey_Factory = new IfcBuildingStorey_Factory;
    m_IfcBuildingStorey_Factory->setModel(this);
    m_Type2Factory[IfcBuildingStorey::getClassType()] = m_IfcBuildingStorey_Factory;
  }
  return m_IfcBuildingStorey_Factory;
}

IfcCShapeProfileDef_Factory *Model::getIfcCShapeProfileDef_Factory() {
  if (!m_IfcCShapeProfileDef_Factory) {
    m_IfcCShapeProfileDef_Factory = new IfcCShapeProfileDef_Factory;
    m_IfcCShapeProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcCShapeProfileDef::getClassType()] = m_IfcCShapeProfileDef_Factory;
  }
  return m_IfcCShapeProfileDef_Factory;
}

IfcCableCarrierFittingType_Factory *Model::getIfcCableCarrierFittingType_Factory() {
  if (!m_IfcCableCarrierFittingType_Factory) {
    m_IfcCableCarrierFittingType_Factory = new IfcCableCarrierFittingType_Factory;
    m_IfcCableCarrierFittingType_Factory->setModel(this);
    m_Type2Factory[IfcCableCarrierFittingType::getClassType()] = m_IfcCableCarrierFittingType_Factory;
  }
  return m_IfcCableCarrierFittingType_Factory;
}

IfcCableCarrierSegmentType_Factory *Model::getIfcCableCarrierSegmentType_Factory() {
  if (!m_IfcCableCarrierSegmentType_Factory) {
    m_IfcCableCarrierSegmentType_Factory = new IfcCableCarrierSegmentType_Factory;
    m_IfcCableCarrierSegmentType_Factory->setModel(this);
    m_Type2Factory[IfcCableCarrierSegmentType::getClassType()] = m_IfcCableCarrierSegmentType_Factory;
  }
  return m_IfcCableCarrierSegmentType_Factory;
}

IfcCableSegmentType_Factory *Model::getIfcCableSegmentType_Factory() {
  if (!m_IfcCableSegmentType_Factory) {
    m_IfcCableSegmentType_Factory = new IfcCableSegmentType_Factory;
    m_IfcCableSegmentType_Factory->setModel(this);
    m_Type2Factory[IfcCableSegmentType::getClassType()] = m_IfcCableSegmentType_Factory;
  }
  return m_IfcCableSegmentType_Factory;
}

IfcCalendarDate_Factory *Model::getIfcCalendarDate_Factory() {
  if (!m_IfcCalendarDate_Factory) {
    m_IfcCalendarDate_Factory = new IfcCalendarDate_Factory;
    m_IfcCalendarDate_Factory->setModel(this);
    m_Type2Factory[IfcCalendarDate::getClassType()] = m_IfcCalendarDate_Factory;
  }
  return m_IfcCalendarDate_Factory;
}

IfcCartesianPoint_Factory *Model::getIfcCartesianPoint_Factory() {
  if (!m_IfcCartesianPoint_Factory) {
    m_IfcCartesianPoint_Factory = new IfcCartesianPoint_Factory;
    m_IfcCartesianPoint_Factory->setModel(this);
    m_Type2Factory[IfcCartesianPoint::getClassType()] = m_IfcCartesianPoint_Factory;
  }
  return m_IfcCartesianPoint_Factory;
}

IfcCartesianTransformationOperator2D_Factory *Model::getIfcCartesianTransformationOperator2D_Factory() {
  if (!m_IfcCartesianTransformationOperator2D_Factory) {
    m_IfcCartesianTransformationOperator2D_Factory = new IfcCartesianTransformationOperator2D_Factory;
    m_IfcCartesianTransformationOperator2D_Factory->setModel(this);
    m_Type2Factory[IfcCartesianTransformationOperator2D::getClassType()] = m_IfcCartesianTransformationOperator2D_Factory;
  }
  return m_IfcCartesianTransformationOperator2D_Factory;
}

IfcCartesianTransformationOperator2DnonUniform_Factory *Model::getIfcCartesianTransformationOperator2DnonUniform_Factory() {
  if (!m_IfcCartesianTransformationOperator2DnonUniform_Factory) {
    m_IfcCartesianTransformationOperator2DnonUniform_Factory = new IfcCartesianTransformationOperator2DnonUniform_Factory;
    m_IfcCartesianTransformationOperator2DnonUniform_Factory->setModel(this);
    m_Type2Factory[IfcCartesianTransformationOperator2DnonUniform::getClassType()] = m_IfcCartesianTransformationOperator2DnonUniform_Factory;
  }
  return m_IfcCartesianTransformationOperator2DnonUniform_Factory;
}

IfcCartesianTransformationOperator3D_Factory *Model::getIfcCartesianTransformationOperator3D_Factory() {
  if (!m_IfcCartesianTransformationOperator3D_Factory) {
    m_IfcCartesianTransformationOperator3D_Factory = new IfcCartesianTransformationOperator3D_Factory;
    m_IfcCartesianTransformationOperator3D_Factory->setModel(this);
    m_Type2Factory[IfcCartesianTransformationOperator3D::getClassType()] = m_IfcCartesianTransformationOperator3D_Factory;
  }
  return m_IfcCartesianTransformationOperator3D_Factory;
}

IfcCartesianTransformationOperator3DnonUniform_Factory *Model::getIfcCartesianTransformationOperator3DnonUniform_Factory() {
  if (!m_IfcCartesianTransformationOperator3DnonUniform_Factory) {
    m_IfcCartesianTransformationOperator3DnonUniform_Factory = new IfcCartesianTransformationOperator3DnonUniform_Factory;
    m_IfcCartesianTransformationOperator3DnonUniform_Factory->setModel(this);
    m_Type2Factory[IfcCartesianTransformationOperator3DnonUniform::getClassType()] = m_IfcCartesianTransformationOperator3DnonUniform_Factory;
  }
  return m_IfcCartesianTransformationOperator3DnonUniform_Factory;
}

IfcCenterLineProfileDef_Factory *Model::getIfcCenterLineProfileDef_Factory() {
  if (!m_IfcCenterLineProfileDef_Factory) {
    m_IfcCenterLineProfileDef_Factory = new IfcCenterLineProfileDef_Factory;
    m_IfcCenterLineProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcCenterLineProfileDef::getClassType()] = m_IfcCenterLineProfileDef_Factory;
  }
  return m_IfcCenterLineProfileDef_Factory;
}

IfcChamferEdgeFeature_Factory *Model::getIfcChamferEdgeFeature_Factory() {
  if (!m_IfcChamferEdgeFeature_Factory) {
    m_IfcChamferEdgeFeature_Factory = new IfcChamferEdgeFeature_Factory;
    m_IfcChamferEdgeFeature_Factory->setModel(this);
    m_Type2Factory[IfcChamferEdgeFeature::getClassType()] = m_IfcChamferEdgeFeature_Factory;
  }
  return m_IfcChamferEdgeFeature_Factory;
}

IfcChillerType_Factory *Model::getIfcChillerType_Factory() {
  if (!m_IfcChillerType_Factory) {
    m_IfcChillerType_Factory = new IfcChillerType_Factory;
    m_IfcChillerType_Factory->setModel(this);
    m_Type2Factory[IfcChillerType::getClassType()] = m_IfcChillerType_Factory;
  }
  return m_IfcChillerType_Factory;
}

IfcCircle_Factory *Model::getIfcCircle_Factory() {
  if (!m_IfcCircle_Factory) {
    m_IfcCircle_Factory = new IfcCircle_Factory;
    m_IfcCircle_Factory->setModel(this);
    m_Type2Factory[IfcCircle::getClassType()] = m_IfcCircle_Factory;
  }
  return m_IfcCircle_Factory;
}

IfcCircleHollowProfileDef_Factory *Model::getIfcCircleHollowProfileDef_Factory() {
  if (!m_IfcCircleHollowProfileDef_Factory) {
    m_IfcCircleHollowProfileDef_Factory = new IfcCircleHollowProfileDef_Factory;
    m_IfcCircleHollowProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcCircleHollowProfileDef::getClassType()] = m_IfcCircleHollowProfileDef_Factory;
  }
  return m_IfcCircleHollowProfileDef_Factory;
}

IfcCircleProfileDef_Factory *Model::getIfcCircleProfileDef_Factory() {
  if (!m_IfcCircleProfileDef_Factory) {
    m_IfcCircleProfileDef_Factory = new IfcCircleProfileDef_Factory;
    m_IfcCircleProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcCircleProfileDef::getClassType()] = m_IfcCircleProfileDef_Factory;
  }
  return m_IfcCircleProfileDef_Factory;
}

IfcClassification_Factory *Model::getIfcClassification_Factory() {
  if (!m_IfcClassification_Factory) {
    m_IfcClassification_Factory = new IfcClassification_Factory;
    m_IfcClassification_Factory->setModel(this);
    m_Type2Factory[IfcClassification::getClassType()] = m_IfcClassification_Factory;
  }
  return m_IfcClassification_Factory;
}

IfcClassificationItem_Factory *Model::getIfcClassificationItem_Factory() {
  if (!m_IfcClassificationItem_Factory) {
    m_IfcClassificationItem_Factory = new IfcClassificationItem_Factory;
    m_IfcClassificationItem_Factory->setModel(this);
    m_Type2Factory[IfcClassificationItem::getClassType()] = m_IfcClassificationItem_Factory;
  }
  return m_IfcClassificationItem_Factory;
}

IfcClassificationItemRelationship_Factory *Model::getIfcClassificationItemRelationship_Factory() {
  if (!m_IfcClassificationItemRelationship_Factory) {
    m_IfcClassificationItemRelationship_Factory = new IfcClassificationItemRelationship_Factory;
    m_IfcClassificationItemRelationship_Factory->setModel(this);
    m_Type2Factory[IfcClassificationItemRelationship::getClassType()] = m_IfcClassificationItemRelationship_Factory;
  }
  return m_IfcClassificationItemRelationship_Factory;
}

IfcClassificationNotation_Factory *Model::getIfcClassificationNotation_Factory() {
  if (!m_IfcClassificationNotation_Factory) {
    m_IfcClassificationNotation_Factory = new IfcClassificationNotation_Factory;
    m_IfcClassificationNotation_Factory->setModel(this);
    m_Type2Factory[IfcClassificationNotation::getClassType()] = m_IfcClassificationNotation_Factory;
  }
  return m_IfcClassificationNotation_Factory;
}

IfcClassificationNotationFacet_Factory *Model::getIfcClassificationNotationFacet_Factory() {
  if (!m_IfcClassificationNotationFacet_Factory) {
    m_IfcClassificationNotationFacet_Factory = new IfcClassificationNotationFacet_Factory;
    m_IfcClassificationNotationFacet_Factory->setModel(this);
    m_Type2Factory[IfcClassificationNotationFacet::getClassType()] = m_IfcClassificationNotationFacet_Factory;
  }
  return m_IfcClassificationNotationFacet_Factory;
}

IfcClassificationReference_Factory *Model::getIfcClassificationReference_Factory() {
  if (!m_IfcClassificationReference_Factory) {
    m_IfcClassificationReference_Factory = new IfcClassificationReference_Factory;
    m_IfcClassificationReference_Factory->setModel(this);
    m_Type2Factory[IfcClassificationReference::getClassType()] = m_IfcClassificationReference_Factory;
  }
  return m_IfcClassificationReference_Factory;
}

IfcClosedShell_Factory *Model::getIfcClosedShell_Factory() {
  if (!m_IfcClosedShell_Factory) {
    m_IfcClosedShell_Factory = new IfcClosedShell_Factory;
    m_IfcClosedShell_Factory->setModel(this);
    m_Type2Factory[IfcClosedShell::getClassType()] = m_IfcClosedShell_Factory;
  }
  return m_IfcClosedShell_Factory;
}

IfcCoilType_Factory *Model::getIfcCoilType_Factory() {
  if (!m_IfcCoilType_Factory) {
    m_IfcCoilType_Factory = new IfcCoilType_Factory;
    m_IfcCoilType_Factory->setModel(this);
    m_Type2Factory[IfcCoilType::getClassType()] = m_IfcCoilType_Factory;
  }
  return m_IfcCoilType_Factory;
}

IfcColourRgb_Factory *Model::getIfcColourRgb_Factory() {
  if (!m_IfcColourRgb_Factory) {
    m_IfcColourRgb_Factory = new IfcColourRgb_Factory;
    m_IfcColourRgb_Factory->setModel(this);
    m_Type2Factory[IfcColourRgb::getClassType()] = m_IfcColourRgb_Factory;
  }
  return m_IfcColourRgb_Factory;
}

IfcColumn_Factory *Model::getIfcColumn_Factory() {
  if (!m_IfcColumn_Factory) {
    m_IfcColumn_Factory = new IfcColumn_Factory;
    m_IfcColumn_Factory->setModel(this);
    m_Type2Factory[IfcColumn::getClassType()] = m_IfcColumn_Factory;
  }
  return m_IfcColumn_Factory;
}

IfcColumnType_Factory *Model::getIfcColumnType_Factory() {
  if (!m_IfcColumnType_Factory) {
    m_IfcColumnType_Factory = new IfcColumnType_Factory;
    m_IfcColumnType_Factory->setModel(this);
    m_Type2Factory[IfcColumnType::getClassType()] = m_IfcColumnType_Factory;
  }
  return m_IfcColumnType_Factory;
}

IfcComplexProperty_Factory *Model::getIfcComplexProperty_Factory() {
  if (!m_IfcComplexProperty_Factory) {
    m_IfcComplexProperty_Factory = new IfcComplexProperty_Factory;
    m_IfcComplexProperty_Factory->setModel(this);
    m_Type2Factory[IfcComplexProperty::getClassType()] = m_IfcComplexProperty_Factory;
  }
  return m_IfcComplexProperty_Factory;
}

IfcCompositeCurve_Factory *Model::getIfcCompositeCurve_Factory() {
  if (!m_IfcCompositeCurve_Factory) {
    m_IfcCompositeCurve_Factory = new IfcCompositeCurve_Factory;
    m_IfcCompositeCurve_Factory->setModel(this);
    m_Type2Factory[IfcCompositeCurve::getClassType()] = m_IfcCompositeCurve_Factory;
  }
  return m_IfcCompositeCurve_Factory;
}

IfcCompositeCurveSegment_Factory *Model::getIfcCompositeCurveSegment_Factory() {
  if (!m_IfcCompositeCurveSegment_Factory) {
    m_IfcCompositeCurveSegment_Factory = new IfcCompositeCurveSegment_Factory;
    m_IfcCompositeCurveSegment_Factory->setModel(this);
    m_Type2Factory[IfcCompositeCurveSegment::getClassType()] = m_IfcCompositeCurveSegment_Factory;
  }
  return m_IfcCompositeCurveSegment_Factory;
}

IfcCompositeProfileDef_Factory *Model::getIfcCompositeProfileDef_Factory() {
  if (!m_IfcCompositeProfileDef_Factory) {
    m_IfcCompositeProfileDef_Factory = new IfcCompositeProfileDef_Factory;
    m_IfcCompositeProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcCompositeProfileDef::getClassType()] = m_IfcCompositeProfileDef_Factory;
  }
  return m_IfcCompositeProfileDef_Factory;
}

IfcCompressorType_Factory *Model::getIfcCompressorType_Factory() {
  if (!m_IfcCompressorType_Factory) {
    m_IfcCompressorType_Factory = new IfcCompressorType_Factory;
    m_IfcCompressorType_Factory->setModel(this);
    m_Type2Factory[IfcCompressorType::getClassType()] = m_IfcCompressorType_Factory;
  }
  return m_IfcCompressorType_Factory;
}

IfcCondenserType_Factory *Model::getIfcCondenserType_Factory() {
  if (!m_IfcCondenserType_Factory) {
    m_IfcCondenserType_Factory = new IfcCondenserType_Factory;
    m_IfcCondenserType_Factory->setModel(this);
    m_Type2Factory[IfcCondenserType::getClassType()] = m_IfcCondenserType_Factory;
  }
  return m_IfcCondenserType_Factory;
}

IfcCondition_Factory *Model::getIfcCondition_Factory() {
  if (!m_IfcCondition_Factory) {
    m_IfcCondition_Factory = new IfcCondition_Factory;
    m_IfcCondition_Factory->setModel(this);
    m_Type2Factory[IfcCondition::getClassType()] = m_IfcCondition_Factory;
  }
  return m_IfcCondition_Factory;
}

IfcConditionCriterion_Factory *Model::getIfcConditionCriterion_Factory() {
  if (!m_IfcConditionCriterion_Factory) {
    m_IfcConditionCriterion_Factory = new IfcConditionCriterion_Factory;
    m_IfcConditionCriterion_Factory->setModel(this);
    m_Type2Factory[IfcConditionCriterion::getClassType()] = m_IfcConditionCriterion_Factory;
  }
  return m_IfcConditionCriterion_Factory;
}

IfcConnectedFaceSet_Factory *Model::getIfcConnectedFaceSet_Factory() {
  if (!m_IfcConnectedFaceSet_Factory) {
    m_IfcConnectedFaceSet_Factory = new IfcConnectedFaceSet_Factory;
    m_IfcConnectedFaceSet_Factory->setModel(this);
    m_Type2Factory[IfcConnectedFaceSet::getClassType()] = m_IfcConnectedFaceSet_Factory;
  }
  return m_IfcConnectedFaceSet_Factory;
}

IfcConnectionCurveGeometry_Factory *Model::getIfcConnectionCurveGeometry_Factory() {
  if (!m_IfcConnectionCurveGeometry_Factory) {
    m_IfcConnectionCurveGeometry_Factory = new IfcConnectionCurveGeometry_Factory;
    m_IfcConnectionCurveGeometry_Factory->setModel(this);
    m_Type2Factory[IfcConnectionCurveGeometry::getClassType()] = m_IfcConnectionCurveGeometry_Factory;
  }
  return m_IfcConnectionCurveGeometry_Factory;
}

IfcConnectionPointEccentricity_Factory *Model::getIfcConnectionPointEccentricity_Factory() {
  if (!m_IfcConnectionPointEccentricity_Factory) {
    m_IfcConnectionPointEccentricity_Factory = new IfcConnectionPointEccentricity_Factory;
    m_IfcConnectionPointEccentricity_Factory->setModel(this);
    m_Type2Factory[IfcConnectionPointEccentricity::getClassType()] = m_IfcConnectionPointEccentricity_Factory;
  }
  return m_IfcConnectionPointEccentricity_Factory;
}

IfcConnectionPointGeometry_Factory *Model::getIfcConnectionPointGeometry_Factory() {
  if (!m_IfcConnectionPointGeometry_Factory) {
    m_IfcConnectionPointGeometry_Factory = new IfcConnectionPointGeometry_Factory;
    m_IfcConnectionPointGeometry_Factory->setModel(this);
    m_Type2Factory[IfcConnectionPointGeometry::getClassType()] = m_IfcConnectionPointGeometry_Factory;
  }
  return m_IfcConnectionPointGeometry_Factory;
}

IfcConnectionPortGeometry_Factory *Model::getIfcConnectionPortGeometry_Factory() {
  if (!m_IfcConnectionPortGeometry_Factory) {
    m_IfcConnectionPortGeometry_Factory = new IfcConnectionPortGeometry_Factory;
    m_IfcConnectionPortGeometry_Factory->setModel(this);
    m_Type2Factory[IfcConnectionPortGeometry::getClassType()] = m_IfcConnectionPortGeometry_Factory;
  }
  return m_IfcConnectionPortGeometry_Factory;
}

IfcConnectionSurfaceGeometry_Factory *Model::getIfcConnectionSurfaceGeometry_Factory() {
  if (!m_IfcConnectionSurfaceGeometry_Factory) {
    m_IfcConnectionSurfaceGeometry_Factory = new IfcConnectionSurfaceGeometry_Factory;
    m_IfcConnectionSurfaceGeometry_Factory->setModel(this);
    m_Type2Factory[IfcConnectionSurfaceGeometry::getClassType()] = m_IfcConnectionSurfaceGeometry_Factory;
  }
  return m_IfcConnectionSurfaceGeometry_Factory;
}

IfcConstraintAggregationRelationship_Factory *Model::getIfcConstraintAggregationRelationship_Factory() {
  if (!m_IfcConstraintAggregationRelationship_Factory) {
    m_IfcConstraintAggregationRelationship_Factory = new IfcConstraintAggregationRelationship_Factory;
    m_IfcConstraintAggregationRelationship_Factory->setModel(this);
    m_Type2Factory[IfcConstraintAggregationRelationship::getClassType()] = m_IfcConstraintAggregationRelationship_Factory;
  }
  return m_IfcConstraintAggregationRelationship_Factory;
}

IfcConstraintClassificationRelationship_Factory *Model::getIfcConstraintClassificationRelationship_Factory() {
  if (!m_IfcConstraintClassificationRelationship_Factory) {
    m_IfcConstraintClassificationRelationship_Factory = new IfcConstraintClassificationRelationship_Factory;
    m_IfcConstraintClassificationRelationship_Factory->setModel(this);
    m_Type2Factory[IfcConstraintClassificationRelationship::getClassType()] = m_IfcConstraintClassificationRelationship_Factory;
  }
  return m_IfcConstraintClassificationRelationship_Factory;
}

IfcConstraintRelationship_Factory *Model::getIfcConstraintRelationship_Factory() {
  if (!m_IfcConstraintRelationship_Factory) {
    m_IfcConstraintRelationship_Factory = new IfcConstraintRelationship_Factory;
    m_IfcConstraintRelationship_Factory->setModel(this);
    m_Type2Factory[IfcConstraintRelationship::getClassType()] = m_IfcConstraintRelationship_Factory;
  }
  return m_IfcConstraintRelationship_Factory;
}

IfcConstructionEquipmentResource_Factory *Model::getIfcConstructionEquipmentResource_Factory() {
  if (!m_IfcConstructionEquipmentResource_Factory) {
    m_IfcConstructionEquipmentResource_Factory = new IfcConstructionEquipmentResource_Factory;
    m_IfcConstructionEquipmentResource_Factory->setModel(this);
    m_Type2Factory[IfcConstructionEquipmentResource::getClassType()] = m_IfcConstructionEquipmentResource_Factory;
  }
  return m_IfcConstructionEquipmentResource_Factory;
}

IfcConstructionMaterialResource_Factory *Model::getIfcConstructionMaterialResource_Factory() {
  if (!m_IfcConstructionMaterialResource_Factory) {
    m_IfcConstructionMaterialResource_Factory = new IfcConstructionMaterialResource_Factory;
    m_IfcConstructionMaterialResource_Factory->setModel(this);
    m_Type2Factory[IfcConstructionMaterialResource::getClassType()] = m_IfcConstructionMaterialResource_Factory;
  }
  return m_IfcConstructionMaterialResource_Factory;
}

IfcConstructionProductResource_Factory *Model::getIfcConstructionProductResource_Factory() {
  if (!m_IfcConstructionProductResource_Factory) {
    m_IfcConstructionProductResource_Factory = new IfcConstructionProductResource_Factory;
    m_IfcConstructionProductResource_Factory->setModel(this);
    m_Type2Factory[IfcConstructionProductResource::getClassType()] = m_IfcConstructionProductResource_Factory;
  }
  return m_IfcConstructionProductResource_Factory;
}

IfcContextDependentUnit_Factory *Model::getIfcContextDependentUnit_Factory() {
  if (!m_IfcContextDependentUnit_Factory) {
    m_IfcContextDependentUnit_Factory = new IfcContextDependentUnit_Factory;
    m_IfcContextDependentUnit_Factory->setModel(this);
    m_Type2Factory[IfcContextDependentUnit::getClassType()] = m_IfcContextDependentUnit_Factory;
  }
  return m_IfcContextDependentUnit_Factory;
}

IfcControllerType_Factory *Model::getIfcControllerType_Factory() {
  if (!m_IfcControllerType_Factory) {
    m_IfcControllerType_Factory = new IfcControllerType_Factory;
    m_IfcControllerType_Factory->setModel(this);
    m_Type2Factory[IfcControllerType::getClassType()] = m_IfcControllerType_Factory;
  }
  return m_IfcControllerType_Factory;
}

IfcConversionBasedUnit_Factory *Model::getIfcConversionBasedUnit_Factory() {
  if (!m_IfcConversionBasedUnit_Factory) {
    m_IfcConversionBasedUnit_Factory = new IfcConversionBasedUnit_Factory;
    m_IfcConversionBasedUnit_Factory->setModel(this);
    m_Type2Factory[IfcConversionBasedUnit::getClassType()] = m_IfcConversionBasedUnit_Factory;
  }
  return m_IfcConversionBasedUnit_Factory;
}

IfcCooledBeamType_Factory *Model::getIfcCooledBeamType_Factory() {
  if (!m_IfcCooledBeamType_Factory) {
    m_IfcCooledBeamType_Factory = new IfcCooledBeamType_Factory;
    m_IfcCooledBeamType_Factory->setModel(this);
    m_Type2Factory[IfcCooledBeamType::getClassType()] = m_IfcCooledBeamType_Factory;
  }
  return m_IfcCooledBeamType_Factory;
}

IfcCoolingTowerType_Factory *Model::getIfcCoolingTowerType_Factory() {
  if (!m_IfcCoolingTowerType_Factory) {
    m_IfcCoolingTowerType_Factory = new IfcCoolingTowerType_Factory;
    m_IfcCoolingTowerType_Factory->setModel(this);
    m_Type2Factory[IfcCoolingTowerType::getClassType()] = m_IfcCoolingTowerType_Factory;
  }
  return m_IfcCoolingTowerType_Factory;
}

IfcCoordinatedUniversalTimeOffset_Factory *Model::getIfcCoordinatedUniversalTimeOffset_Factory() {
  if (!m_IfcCoordinatedUniversalTimeOffset_Factory) {
    m_IfcCoordinatedUniversalTimeOffset_Factory = new IfcCoordinatedUniversalTimeOffset_Factory;
    m_IfcCoordinatedUniversalTimeOffset_Factory->setModel(this);
    m_Type2Factory[IfcCoordinatedUniversalTimeOffset::getClassType()] = m_IfcCoordinatedUniversalTimeOffset_Factory;
  }
  return m_IfcCoordinatedUniversalTimeOffset_Factory;
}

IfcCostItem_Factory *Model::getIfcCostItem_Factory() {
  if (!m_IfcCostItem_Factory) {
    m_IfcCostItem_Factory = new IfcCostItem_Factory;
    m_IfcCostItem_Factory->setModel(this);
    m_Type2Factory[IfcCostItem::getClassType()] = m_IfcCostItem_Factory;
  }
  return m_IfcCostItem_Factory;
}

IfcCostSchedule_Factory *Model::getIfcCostSchedule_Factory() {
  if (!m_IfcCostSchedule_Factory) {
    m_IfcCostSchedule_Factory = new IfcCostSchedule_Factory;
    m_IfcCostSchedule_Factory->setModel(this);
    m_Type2Factory[IfcCostSchedule::getClassType()] = m_IfcCostSchedule_Factory;
  }
  return m_IfcCostSchedule_Factory;
}

IfcCostValue_Factory *Model::getIfcCostValue_Factory() {
  if (!m_IfcCostValue_Factory) {
    m_IfcCostValue_Factory = new IfcCostValue_Factory;
    m_IfcCostValue_Factory->setModel(this);
    m_Type2Factory[IfcCostValue::getClassType()] = m_IfcCostValue_Factory;
  }
  return m_IfcCostValue_Factory;
}

IfcCovering_Factory *Model::getIfcCovering_Factory() {
  if (!m_IfcCovering_Factory) {
    m_IfcCovering_Factory = new IfcCovering_Factory;
    m_IfcCovering_Factory->setModel(this);
    m_Type2Factory[IfcCovering::getClassType()] = m_IfcCovering_Factory;
  }
  return m_IfcCovering_Factory;
}

IfcCoveringType_Factory *Model::getIfcCoveringType_Factory() {
  if (!m_IfcCoveringType_Factory) {
    m_IfcCoveringType_Factory = new IfcCoveringType_Factory;
    m_IfcCoveringType_Factory->setModel(this);
    m_Type2Factory[IfcCoveringType::getClassType()] = m_IfcCoveringType_Factory;
  }
  return m_IfcCoveringType_Factory;
}

IfcCraneRailAShapeProfileDef_Factory *Model::getIfcCraneRailAShapeProfileDef_Factory() {
  if (!m_IfcCraneRailAShapeProfileDef_Factory) {
    m_IfcCraneRailAShapeProfileDef_Factory = new IfcCraneRailAShapeProfileDef_Factory;
    m_IfcCraneRailAShapeProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcCraneRailAShapeProfileDef::getClassType()] = m_IfcCraneRailAShapeProfileDef_Factory;
  }
  return m_IfcCraneRailAShapeProfileDef_Factory;
}

IfcCraneRailFShapeProfileDef_Factory *Model::getIfcCraneRailFShapeProfileDef_Factory() {
  if (!m_IfcCraneRailFShapeProfileDef_Factory) {
    m_IfcCraneRailFShapeProfileDef_Factory = new IfcCraneRailFShapeProfileDef_Factory;
    m_IfcCraneRailFShapeProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcCraneRailFShapeProfileDef::getClassType()] = m_IfcCraneRailFShapeProfileDef_Factory;
  }
  return m_IfcCraneRailFShapeProfileDef_Factory;
}

IfcCrewResource_Factory *Model::getIfcCrewResource_Factory() {
  if (!m_IfcCrewResource_Factory) {
    m_IfcCrewResource_Factory = new IfcCrewResource_Factory;
    m_IfcCrewResource_Factory->setModel(this);
    m_Type2Factory[IfcCrewResource::getClassType()] = m_IfcCrewResource_Factory;
  }
  return m_IfcCrewResource_Factory;
}

IfcCsgSolid_Factory *Model::getIfcCsgSolid_Factory() {
  if (!m_IfcCsgSolid_Factory) {
    m_IfcCsgSolid_Factory = new IfcCsgSolid_Factory;
    m_IfcCsgSolid_Factory->setModel(this);
    m_Type2Factory[IfcCsgSolid::getClassType()] = m_IfcCsgSolid_Factory;
  }
  return m_IfcCsgSolid_Factory;
}

IfcCurrencyRelationship_Factory *Model::getIfcCurrencyRelationship_Factory() {
  if (!m_IfcCurrencyRelationship_Factory) {
    m_IfcCurrencyRelationship_Factory = new IfcCurrencyRelationship_Factory;
    m_IfcCurrencyRelationship_Factory->setModel(this);
    m_Type2Factory[IfcCurrencyRelationship::getClassType()] = m_IfcCurrencyRelationship_Factory;
  }
  return m_IfcCurrencyRelationship_Factory;
}

IfcCurtainWall_Factory *Model::getIfcCurtainWall_Factory() {
  if (!m_IfcCurtainWall_Factory) {
    m_IfcCurtainWall_Factory = new IfcCurtainWall_Factory;
    m_IfcCurtainWall_Factory->setModel(this);
    m_Type2Factory[IfcCurtainWall::getClassType()] = m_IfcCurtainWall_Factory;
  }
  return m_IfcCurtainWall_Factory;
}

IfcCurtainWallType_Factory *Model::getIfcCurtainWallType_Factory() {
  if (!m_IfcCurtainWallType_Factory) {
    m_IfcCurtainWallType_Factory = new IfcCurtainWallType_Factory;
    m_IfcCurtainWallType_Factory->setModel(this);
    m_Type2Factory[IfcCurtainWallType::getClassType()] = m_IfcCurtainWallType_Factory;
  }
  return m_IfcCurtainWallType_Factory;
}

IfcCurveBoundedPlane_Factory *Model::getIfcCurveBoundedPlane_Factory() {
  if (!m_IfcCurveBoundedPlane_Factory) {
    m_IfcCurveBoundedPlane_Factory = new IfcCurveBoundedPlane_Factory;
    m_IfcCurveBoundedPlane_Factory->setModel(this);
    m_Type2Factory[IfcCurveBoundedPlane::getClassType()] = m_IfcCurveBoundedPlane_Factory;
  }
  return m_IfcCurveBoundedPlane_Factory;
}

IfcCurveStyle_Factory *Model::getIfcCurveStyle_Factory() {
  if (!m_IfcCurveStyle_Factory) {
    m_IfcCurveStyle_Factory = new IfcCurveStyle_Factory;
    m_IfcCurveStyle_Factory->setModel(this);
    m_Type2Factory[IfcCurveStyle::getClassType()] = m_IfcCurveStyle_Factory;
  }
  return m_IfcCurveStyle_Factory;
}

IfcCurveStyleFont_Factory *Model::getIfcCurveStyleFont_Factory() {
  if (!m_IfcCurveStyleFont_Factory) {
    m_IfcCurveStyleFont_Factory = new IfcCurveStyleFont_Factory;
    m_IfcCurveStyleFont_Factory->setModel(this);
    m_Type2Factory[IfcCurveStyleFont::getClassType()] = m_IfcCurveStyleFont_Factory;
  }
  return m_IfcCurveStyleFont_Factory;
}

IfcCurveStyleFontAndScaling_Factory *Model::getIfcCurveStyleFontAndScaling_Factory() {
  if (!m_IfcCurveStyleFontAndScaling_Factory) {
    m_IfcCurveStyleFontAndScaling_Factory = new IfcCurveStyleFontAndScaling_Factory;
    m_IfcCurveStyleFontAndScaling_Factory->setModel(this);
    m_Type2Factory[IfcCurveStyleFontAndScaling::getClassType()] = m_IfcCurveStyleFontAndScaling_Factory;
  }
  return m_IfcCurveStyleFontAndScaling_Factory;
}

IfcCurveStyleFontPattern_Factory *Model::getIfcCurveStyleFontPattern_Factory() {
  if (!m_IfcCurveStyleFontPattern_Factory) {
    m_IfcCurveStyleFontPattern_Factory = new IfcCurveStyleFontPattern_Factory;
    m_IfcCurveStyleFontPattern_Factory->setModel(this);
    m_Type2Factory[IfcCurveStyleFontPattern::getClassType()] = m_IfcCurveStyleFontPattern_Factory;
  }
  return m_IfcCurveStyleFontPattern_Factory;
}

IfcDamperType_Factory *Model::getIfcDamperType_Factory() {
  if (!m_IfcDamperType_Factory) {
    m_IfcDamperType_Factory = new IfcDamperType_Factory;
    m_IfcDamperType_Factory->setModel(this);
    m_Type2Factory[IfcDamperType::getClassType()] = m_IfcDamperType_Factory;
  }
  return m_IfcDamperType_Factory;
}

IfcDateAndTime_Factory *Model::getIfcDateAndTime_Factory() {
  if (!m_IfcDateAndTime_Factory) {
    m_IfcDateAndTime_Factory = new IfcDateAndTime_Factory;
    m_IfcDateAndTime_Factory->setModel(this);
    m_Type2Factory[IfcDateAndTime::getClassType()] = m_IfcDateAndTime_Factory;
  }
  return m_IfcDateAndTime_Factory;
}

IfcDefinedSymbol_Factory *Model::getIfcDefinedSymbol_Factory() {
  if (!m_IfcDefinedSymbol_Factory) {
    m_IfcDefinedSymbol_Factory = new IfcDefinedSymbol_Factory;
    m_IfcDefinedSymbol_Factory->setModel(this);
    m_Type2Factory[IfcDefinedSymbol::getClassType()] = m_IfcDefinedSymbol_Factory;
  }
  return m_IfcDefinedSymbol_Factory;
}

IfcDerivedProfileDef_Factory *Model::getIfcDerivedProfileDef_Factory() {
  if (!m_IfcDerivedProfileDef_Factory) {
    m_IfcDerivedProfileDef_Factory = new IfcDerivedProfileDef_Factory;
    m_IfcDerivedProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcDerivedProfileDef::getClassType()] = m_IfcDerivedProfileDef_Factory;
  }
  return m_IfcDerivedProfileDef_Factory;
}

IfcDerivedUnit_Factory *Model::getIfcDerivedUnit_Factory() {
  if (!m_IfcDerivedUnit_Factory) {
    m_IfcDerivedUnit_Factory = new IfcDerivedUnit_Factory;
    m_IfcDerivedUnit_Factory->setModel(this);
    m_Type2Factory[IfcDerivedUnit::getClassType()] = m_IfcDerivedUnit_Factory;
  }
  return m_IfcDerivedUnit_Factory;
}

IfcDerivedUnitElement_Factory *Model::getIfcDerivedUnitElement_Factory() {
  if (!m_IfcDerivedUnitElement_Factory) {
    m_IfcDerivedUnitElement_Factory = new IfcDerivedUnitElement_Factory;
    m_IfcDerivedUnitElement_Factory->setModel(this);
    m_Type2Factory[IfcDerivedUnitElement::getClassType()] = m_IfcDerivedUnitElement_Factory;
  }
  return m_IfcDerivedUnitElement_Factory;
}

IfcDiameterDimension_Factory *Model::getIfcDiameterDimension_Factory() {
  if (!m_IfcDiameterDimension_Factory) {
    m_IfcDiameterDimension_Factory = new IfcDiameterDimension_Factory;
    m_IfcDiameterDimension_Factory->setModel(this);
    m_Type2Factory[IfcDiameterDimension::getClassType()] = m_IfcDiameterDimension_Factory;
  }
  return m_IfcDiameterDimension_Factory;
}

IfcDimensionCalloutRelationship_Factory *Model::getIfcDimensionCalloutRelationship_Factory() {
  if (!m_IfcDimensionCalloutRelationship_Factory) {
    m_IfcDimensionCalloutRelationship_Factory = new IfcDimensionCalloutRelationship_Factory;
    m_IfcDimensionCalloutRelationship_Factory->setModel(this);
    m_Type2Factory[IfcDimensionCalloutRelationship::getClassType()] = m_IfcDimensionCalloutRelationship_Factory;
  }
  return m_IfcDimensionCalloutRelationship_Factory;
}

IfcDimensionCurve_Factory *Model::getIfcDimensionCurve_Factory() {
  if (!m_IfcDimensionCurve_Factory) {
    m_IfcDimensionCurve_Factory = new IfcDimensionCurve_Factory;
    m_IfcDimensionCurve_Factory->setModel(this);
    m_Type2Factory[IfcDimensionCurve::getClassType()] = m_IfcDimensionCurve_Factory;
  }
  return m_IfcDimensionCurve_Factory;
}

IfcDimensionCurveDirectedCallout_Factory *Model::getIfcDimensionCurveDirectedCallout_Factory() {
  if (!m_IfcDimensionCurveDirectedCallout_Factory) {
    m_IfcDimensionCurveDirectedCallout_Factory = new IfcDimensionCurveDirectedCallout_Factory;
    m_IfcDimensionCurveDirectedCallout_Factory->setModel(this);
    m_Type2Factory[IfcDimensionCurveDirectedCallout::getClassType()] = m_IfcDimensionCurveDirectedCallout_Factory;
  }
  return m_IfcDimensionCurveDirectedCallout_Factory;
}

IfcDimensionCurveTerminator_Factory *Model::getIfcDimensionCurveTerminator_Factory() {
  if (!m_IfcDimensionCurveTerminator_Factory) {
    m_IfcDimensionCurveTerminator_Factory = new IfcDimensionCurveTerminator_Factory;
    m_IfcDimensionCurveTerminator_Factory->setModel(this);
    m_Type2Factory[IfcDimensionCurveTerminator::getClassType()] = m_IfcDimensionCurveTerminator_Factory;
  }
  return m_IfcDimensionCurveTerminator_Factory;
}

IfcDimensionPair_Factory *Model::getIfcDimensionPair_Factory() {
  if (!m_IfcDimensionPair_Factory) {
    m_IfcDimensionPair_Factory = new IfcDimensionPair_Factory;
    m_IfcDimensionPair_Factory->setModel(this);
    m_Type2Factory[IfcDimensionPair::getClassType()] = m_IfcDimensionPair_Factory;
  }
  return m_IfcDimensionPair_Factory;
}

IfcDimensionalExponents_Factory *Model::getIfcDimensionalExponents_Factory() {
  if (!m_IfcDimensionalExponents_Factory) {
    m_IfcDimensionalExponents_Factory = new IfcDimensionalExponents_Factory;
    m_IfcDimensionalExponents_Factory->setModel(this);
    m_Type2Factory[IfcDimensionalExponents::getClassType()] = m_IfcDimensionalExponents_Factory;
  }
  return m_IfcDimensionalExponents_Factory;
}

IfcDirection_Factory *Model::getIfcDirection_Factory() {
  if (!m_IfcDirection_Factory) {
    m_IfcDirection_Factory = new IfcDirection_Factory;
    m_IfcDirection_Factory->setModel(this);
    m_Type2Factory[IfcDirection::getClassType()] = m_IfcDirection_Factory;
  }
  return m_IfcDirection_Factory;
}

IfcDiscreteAccessory_Factory *Model::getIfcDiscreteAccessory_Factory() {
  if (!m_IfcDiscreteAccessory_Factory) {
    m_IfcDiscreteAccessory_Factory = new IfcDiscreteAccessory_Factory;
    m_IfcDiscreteAccessory_Factory->setModel(this);
    m_Type2Factory[IfcDiscreteAccessory::getClassType()] = m_IfcDiscreteAccessory_Factory;
  }
  return m_IfcDiscreteAccessory_Factory;
}

IfcDiscreteAccessoryType_Factory *Model::getIfcDiscreteAccessoryType_Factory() {
  if (!m_IfcDiscreteAccessoryType_Factory) {
    m_IfcDiscreteAccessoryType_Factory = new IfcDiscreteAccessoryType_Factory;
    m_IfcDiscreteAccessoryType_Factory->setModel(this);
    m_Type2Factory[IfcDiscreteAccessoryType::getClassType()] = m_IfcDiscreteAccessoryType_Factory;
  }
  return m_IfcDiscreteAccessoryType_Factory;
}

IfcDistributionChamberElement_Factory *Model::getIfcDistributionChamberElement_Factory() {
  if (!m_IfcDistributionChamberElement_Factory) {
    m_IfcDistributionChamberElement_Factory = new IfcDistributionChamberElement_Factory;
    m_IfcDistributionChamberElement_Factory->setModel(this);
    m_Type2Factory[IfcDistributionChamberElement::getClassType()] = m_IfcDistributionChamberElement_Factory;
  }
  return m_IfcDistributionChamberElement_Factory;
}

IfcDistributionChamberElementType_Factory *Model::getIfcDistributionChamberElementType_Factory() {
  if (!m_IfcDistributionChamberElementType_Factory) {
    m_IfcDistributionChamberElementType_Factory = new IfcDistributionChamberElementType_Factory;
    m_IfcDistributionChamberElementType_Factory->setModel(this);
    m_Type2Factory[IfcDistributionChamberElementType::getClassType()] = m_IfcDistributionChamberElementType_Factory;
  }
  return m_IfcDistributionChamberElementType_Factory;
}

IfcDistributionControlElement_Factory *Model::getIfcDistributionControlElement_Factory() {
  if (!m_IfcDistributionControlElement_Factory) {
    m_IfcDistributionControlElement_Factory = new IfcDistributionControlElement_Factory;
    m_IfcDistributionControlElement_Factory->setModel(this);
    m_Type2Factory[IfcDistributionControlElement::getClassType()] = m_IfcDistributionControlElement_Factory;
  }
  return m_IfcDistributionControlElement_Factory;
}

IfcDistributionElement_Factory *Model::getIfcDistributionElement_Factory() {
  if (!m_IfcDistributionElement_Factory) {
    m_IfcDistributionElement_Factory = new IfcDistributionElement_Factory;
    m_IfcDistributionElement_Factory->setModel(this);
    m_Type2Factory[IfcDistributionElement::getClassType()] = m_IfcDistributionElement_Factory;
  }
  return m_IfcDistributionElement_Factory;
}

IfcDistributionElementType_Factory *Model::getIfcDistributionElementType_Factory() {
  if (!m_IfcDistributionElementType_Factory) {
    m_IfcDistributionElementType_Factory = new IfcDistributionElementType_Factory;
    m_IfcDistributionElementType_Factory->setModel(this);
    m_Type2Factory[IfcDistributionElementType::getClassType()] = m_IfcDistributionElementType_Factory;
  }
  return m_IfcDistributionElementType_Factory;
}

IfcDistributionFlowElement_Factory *Model::getIfcDistributionFlowElement_Factory() {
  if (!m_IfcDistributionFlowElement_Factory) {
    m_IfcDistributionFlowElement_Factory = new IfcDistributionFlowElement_Factory;
    m_IfcDistributionFlowElement_Factory->setModel(this);
    m_Type2Factory[IfcDistributionFlowElement::getClassType()] = m_IfcDistributionFlowElement_Factory;
  }
  return m_IfcDistributionFlowElement_Factory;
}

IfcDistributionPort_Factory *Model::getIfcDistributionPort_Factory() {
  if (!m_IfcDistributionPort_Factory) {
    m_IfcDistributionPort_Factory = new IfcDistributionPort_Factory;
    m_IfcDistributionPort_Factory->setModel(this);
    m_Type2Factory[IfcDistributionPort::getClassType()] = m_IfcDistributionPort_Factory;
  }
  return m_IfcDistributionPort_Factory;
}

IfcDocumentElectronicFormat_Factory *Model::getIfcDocumentElectronicFormat_Factory() {
  if (!m_IfcDocumentElectronicFormat_Factory) {
    m_IfcDocumentElectronicFormat_Factory = new IfcDocumentElectronicFormat_Factory;
    m_IfcDocumentElectronicFormat_Factory->setModel(this);
    m_Type2Factory[IfcDocumentElectronicFormat::getClassType()] = m_IfcDocumentElectronicFormat_Factory;
  }
  return m_IfcDocumentElectronicFormat_Factory;
}

IfcDocumentInformation_Factory *Model::getIfcDocumentInformation_Factory() {
  if (!m_IfcDocumentInformation_Factory) {
    m_IfcDocumentInformation_Factory = new IfcDocumentInformation_Factory;
    m_IfcDocumentInformation_Factory->setModel(this);
    m_Type2Factory[IfcDocumentInformation::getClassType()] = m_IfcDocumentInformation_Factory;
  }
  return m_IfcDocumentInformation_Factory;
}

IfcDocumentInformationRelationship_Factory *Model::getIfcDocumentInformationRelationship_Factory() {
  if (!m_IfcDocumentInformationRelationship_Factory) {
    m_IfcDocumentInformationRelationship_Factory = new IfcDocumentInformationRelationship_Factory;
    m_IfcDocumentInformationRelationship_Factory->setModel(this);
    m_Type2Factory[IfcDocumentInformationRelationship::getClassType()] = m_IfcDocumentInformationRelationship_Factory;
  }
  return m_IfcDocumentInformationRelationship_Factory;
}

IfcDocumentReference_Factory *Model::getIfcDocumentReference_Factory() {
  if (!m_IfcDocumentReference_Factory) {
    m_IfcDocumentReference_Factory = new IfcDocumentReference_Factory;
    m_IfcDocumentReference_Factory->setModel(this);
    m_Type2Factory[IfcDocumentReference::getClassType()] = m_IfcDocumentReference_Factory;
  }
  return m_IfcDocumentReference_Factory;
}

IfcDoor_Factory *Model::getIfcDoor_Factory() {
  if (!m_IfcDoor_Factory) {
    m_IfcDoor_Factory = new IfcDoor_Factory;
    m_IfcDoor_Factory->setModel(this);
    m_Type2Factory[IfcDoor::getClassType()] = m_IfcDoor_Factory;
  }
  return m_IfcDoor_Factory;
}

IfcDoorLiningProperties_Factory *Model::getIfcDoorLiningProperties_Factory() {
  if (!m_IfcDoorLiningProperties_Factory) {
    m_IfcDoorLiningProperties_Factory = new IfcDoorLiningProperties_Factory;
    m_IfcDoorLiningProperties_Factory->setModel(this);
    m_Type2Factory[IfcDoorLiningProperties::getClassType()] = m_IfcDoorLiningProperties_Factory;
  }
  return m_IfcDoorLiningProperties_Factory;
}

IfcDoorPanelProperties_Factory *Model::getIfcDoorPanelProperties_Factory() {
  if (!m_IfcDoorPanelProperties_Factory) {
    m_IfcDoorPanelProperties_Factory = new IfcDoorPanelProperties_Factory;
    m_IfcDoorPanelProperties_Factory->setModel(this);
    m_Type2Factory[IfcDoorPanelProperties::getClassType()] = m_IfcDoorPanelProperties_Factory;
  }
  return m_IfcDoorPanelProperties_Factory;
}

IfcDoorStyle_Factory *Model::getIfcDoorStyle_Factory() {
  if (!m_IfcDoorStyle_Factory) {
    m_IfcDoorStyle_Factory = new IfcDoorStyle_Factory;
    m_IfcDoorStyle_Factory->setModel(this);
    m_Type2Factory[IfcDoorStyle::getClassType()] = m_IfcDoorStyle_Factory;
  }
  return m_IfcDoorStyle_Factory;
}

IfcDraughtingCallout_Factory *Model::getIfcDraughtingCallout_Factory() {
  if (!m_IfcDraughtingCallout_Factory) {
    m_IfcDraughtingCallout_Factory = new IfcDraughtingCallout_Factory;
    m_IfcDraughtingCallout_Factory->setModel(this);
    m_Type2Factory[IfcDraughtingCallout::getClassType()] = m_IfcDraughtingCallout_Factory;
  }
  return m_IfcDraughtingCallout_Factory;
}

IfcDraughtingCalloutRelationship_Factory *Model::getIfcDraughtingCalloutRelationship_Factory() {
  if (!m_IfcDraughtingCalloutRelationship_Factory) {
    m_IfcDraughtingCalloutRelationship_Factory = new IfcDraughtingCalloutRelationship_Factory;
    m_IfcDraughtingCalloutRelationship_Factory->setModel(this);
    m_Type2Factory[IfcDraughtingCalloutRelationship::getClassType()] = m_IfcDraughtingCalloutRelationship_Factory;
  }
  return m_IfcDraughtingCalloutRelationship_Factory;
}

IfcDraughtingPreDefinedColour_Factory *Model::getIfcDraughtingPreDefinedColour_Factory() {
  if (!m_IfcDraughtingPreDefinedColour_Factory) {
    m_IfcDraughtingPreDefinedColour_Factory = new IfcDraughtingPreDefinedColour_Factory;
    m_IfcDraughtingPreDefinedColour_Factory->setModel(this);
    m_Type2Factory[IfcDraughtingPreDefinedColour::getClassType()] = m_IfcDraughtingPreDefinedColour_Factory;
  }
  return m_IfcDraughtingPreDefinedColour_Factory;
}

IfcDraughtingPreDefinedCurveFont_Factory *Model::getIfcDraughtingPreDefinedCurveFont_Factory() {
  if (!m_IfcDraughtingPreDefinedCurveFont_Factory) {
    m_IfcDraughtingPreDefinedCurveFont_Factory = new IfcDraughtingPreDefinedCurveFont_Factory;
    m_IfcDraughtingPreDefinedCurveFont_Factory->setModel(this);
    m_Type2Factory[IfcDraughtingPreDefinedCurveFont::getClassType()] = m_IfcDraughtingPreDefinedCurveFont_Factory;
  }
  return m_IfcDraughtingPreDefinedCurveFont_Factory;
}

IfcDraughtingPreDefinedTextFont_Factory *Model::getIfcDraughtingPreDefinedTextFont_Factory() {
  if (!m_IfcDraughtingPreDefinedTextFont_Factory) {
    m_IfcDraughtingPreDefinedTextFont_Factory = new IfcDraughtingPreDefinedTextFont_Factory;
    m_IfcDraughtingPreDefinedTextFont_Factory->setModel(this);
    m_Type2Factory[IfcDraughtingPreDefinedTextFont::getClassType()] = m_IfcDraughtingPreDefinedTextFont_Factory;
  }
  return m_IfcDraughtingPreDefinedTextFont_Factory;
}

IfcDuctFittingType_Factory *Model::getIfcDuctFittingType_Factory() {
  if (!m_IfcDuctFittingType_Factory) {
    m_IfcDuctFittingType_Factory = new IfcDuctFittingType_Factory;
    m_IfcDuctFittingType_Factory->setModel(this);
    m_Type2Factory[IfcDuctFittingType::getClassType()] = m_IfcDuctFittingType_Factory;
  }
  return m_IfcDuctFittingType_Factory;
}

IfcDuctSegmentType_Factory *Model::getIfcDuctSegmentType_Factory() {
  if (!m_IfcDuctSegmentType_Factory) {
    m_IfcDuctSegmentType_Factory = new IfcDuctSegmentType_Factory;
    m_IfcDuctSegmentType_Factory->setModel(this);
    m_Type2Factory[IfcDuctSegmentType::getClassType()] = m_IfcDuctSegmentType_Factory;
  }
  return m_IfcDuctSegmentType_Factory;
}

IfcDuctSilencerType_Factory *Model::getIfcDuctSilencerType_Factory() {
  if (!m_IfcDuctSilencerType_Factory) {
    m_IfcDuctSilencerType_Factory = new IfcDuctSilencerType_Factory;
    m_IfcDuctSilencerType_Factory->setModel(this);
    m_Type2Factory[IfcDuctSilencerType::getClassType()] = m_IfcDuctSilencerType_Factory;
  }
  return m_IfcDuctSilencerType_Factory;
}

IfcEdge_Factory *Model::getIfcEdge_Factory() {
  if (!m_IfcEdge_Factory) {
    m_IfcEdge_Factory = new IfcEdge_Factory;
    m_IfcEdge_Factory->setModel(this);
    m_Type2Factory[IfcEdge::getClassType()] = m_IfcEdge_Factory;
  }
  return m_IfcEdge_Factory;
}

IfcEdgeCurve_Factory *Model::getIfcEdgeCurve_Factory() {
  if (!m_IfcEdgeCurve_Factory) {
    m_IfcEdgeCurve_Factory = new IfcEdgeCurve_Factory;
    m_IfcEdgeCurve_Factory->setModel(this);
    m_Type2Factory[IfcEdgeCurve::getClassType()] = m_IfcEdgeCurve_Factory;
  }
  return m_IfcEdgeCurve_Factory;
}

IfcEdgeLoop_Factory *Model::getIfcEdgeLoop_Factory() {
  if (!m_IfcEdgeLoop_Factory) {
    m_IfcEdgeLoop_Factory = new IfcEdgeLoop_Factory;
    m_IfcEdgeLoop_Factory->setModel(this);
    m_Type2Factory[IfcEdgeLoop::getClassType()] = m_IfcEdgeLoop_Factory;
  }
  return m_IfcEdgeLoop_Factory;
}

IfcElectricApplianceType_Factory *Model::getIfcElectricApplianceType_Factory() {
  if (!m_IfcElectricApplianceType_Factory) {
    m_IfcElectricApplianceType_Factory = new IfcElectricApplianceType_Factory;
    m_IfcElectricApplianceType_Factory->setModel(this);
    m_Type2Factory[IfcElectricApplianceType::getClassType()] = m_IfcElectricApplianceType_Factory;
  }
  return m_IfcElectricApplianceType_Factory;
}

IfcElectricDistributionPoint_Factory *Model::getIfcElectricDistributionPoint_Factory() {
  if (!m_IfcElectricDistributionPoint_Factory) {
    m_IfcElectricDistributionPoint_Factory = new IfcElectricDistributionPoint_Factory;
    m_IfcElectricDistributionPoint_Factory->setModel(this);
    m_Type2Factory[IfcElectricDistributionPoint::getClassType()] = m_IfcElectricDistributionPoint_Factory;
  }
  return m_IfcElectricDistributionPoint_Factory;
}

IfcElectricFlowStorageDeviceType_Factory *Model::getIfcElectricFlowStorageDeviceType_Factory() {
  if (!m_IfcElectricFlowStorageDeviceType_Factory) {
    m_IfcElectricFlowStorageDeviceType_Factory = new IfcElectricFlowStorageDeviceType_Factory;
    m_IfcElectricFlowStorageDeviceType_Factory->setModel(this);
    m_Type2Factory[IfcElectricFlowStorageDeviceType::getClassType()] = m_IfcElectricFlowStorageDeviceType_Factory;
  }
  return m_IfcElectricFlowStorageDeviceType_Factory;
}

IfcElectricGeneratorType_Factory *Model::getIfcElectricGeneratorType_Factory() {
  if (!m_IfcElectricGeneratorType_Factory) {
    m_IfcElectricGeneratorType_Factory = new IfcElectricGeneratorType_Factory;
    m_IfcElectricGeneratorType_Factory->setModel(this);
    m_Type2Factory[IfcElectricGeneratorType::getClassType()] = m_IfcElectricGeneratorType_Factory;
  }
  return m_IfcElectricGeneratorType_Factory;
}

IfcElectricHeaterType_Factory *Model::getIfcElectricHeaterType_Factory() {
  if (!m_IfcElectricHeaterType_Factory) {
    m_IfcElectricHeaterType_Factory = new IfcElectricHeaterType_Factory;
    m_IfcElectricHeaterType_Factory->setModel(this);
    m_Type2Factory[IfcElectricHeaterType::getClassType()] = m_IfcElectricHeaterType_Factory;
  }
  return m_IfcElectricHeaterType_Factory;
}

IfcElectricMotorType_Factory *Model::getIfcElectricMotorType_Factory() {
  if (!m_IfcElectricMotorType_Factory) {
    m_IfcElectricMotorType_Factory = new IfcElectricMotorType_Factory;
    m_IfcElectricMotorType_Factory->setModel(this);
    m_Type2Factory[IfcElectricMotorType::getClassType()] = m_IfcElectricMotorType_Factory;
  }
  return m_IfcElectricMotorType_Factory;
}

IfcElectricTimeControlType_Factory *Model::getIfcElectricTimeControlType_Factory() {
  if (!m_IfcElectricTimeControlType_Factory) {
    m_IfcElectricTimeControlType_Factory = new IfcElectricTimeControlType_Factory;
    m_IfcElectricTimeControlType_Factory->setModel(this);
    m_Type2Factory[IfcElectricTimeControlType::getClassType()] = m_IfcElectricTimeControlType_Factory;
  }
  return m_IfcElectricTimeControlType_Factory;
}

IfcElectricalBaseProperties_Factory *Model::getIfcElectricalBaseProperties_Factory() {
  if (!m_IfcElectricalBaseProperties_Factory) {
    m_IfcElectricalBaseProperties_Factory = new IfcElectricalBaseProperties_Factory;
    m_IfcElectricalBaseProperties_Factory->setModel(this);
    m_Type2Factory[IfcElectricalBaseProperties::getClassType()] = m_IfcElectricalBaseProperties_Factory;
  }
  return m_IfcElectricalBaseProperties_Factory;
}

IfcElectricalCircuit_Factory *Model::getIfcElectricalCircuit_Factory() {
  if (!m_IfcElectricalCircuit_Factory) {
    m_IfcElectricalCircuit_Factory = new IfcElectricalCircuit_Factory;
    m_IfcElectricalCircuit_Factory->setModel(this);
    m_Type2Factory[IfcElectricalCircuit::getClassType()] = m_IfcElectricalCircuit_Factory;
  }
  return m_IfcElectricalCircuit_Factory;
}

IfcElectricalElement_Factory *Model::getIfcElectricalElement_Factory() {
  if (!m_IfcElectricalElement_Factory) {
    m_IfcElectricalElement_Factory = new IfcElectricalElement_Factory;
    m_IfcElectricalElement_Factory->setModel(this);
    m_Type2Factory[IfcElectricalElement::getClassType()] = m_IfcElectricalElement_Factory;
  }
  return m_IfcElectricalElement_Factory;
}

IfcElementAssembly_Factory *Model::getIfcElementAssembly_Factory() {
  if (!m_IfcElementAssembly_Factory) {
    m_IfcElementAssembly_Factory = new IfcElementAssembly_Factory;
    m_IfcElementAssembly_Factory->setModel(this);
    m_Type2Factory[IfcElementAssembly::getClassType()] = m_IfcElementAssembly_Factory;
  }
  return m_IfcElementAssembly_Factory;
}

IfcElementQuantity_Factory *Model::getIfcElementQuantity_Factory() {
  if (!m_IfcElementQuantity_Factory) {
    m_IfcElementQuantity_Factory = new IfcElementQuantity_Factory;
    m_IfcElementQuantity_Factory->setModel(this);
    m_Type2Factory[IfcElementQuantity::getClassType()] = m_IfcElementQuantity_Factory;
  }
  return m_IfcElementQuantity_Factory;
}

IfcEllipse_Factory *Model::getIfcEllipse_Factory() {
  if (!m_IfcEllipse_Factory) {
    m_IfcEllipse_Factory = new IfcEllipse_Factory;
    m_IfcEllipse_Factory->setModel(this);
    m_Type2Factory[IfcEllipse::getClassType()] = m_IfcEllipse_Factory;
  }
  return m_IfcEllipse_Factory;
}

IfcEllipseProfileDef_Factory *Model::getIfcEllipseProfileDef_Factory() {
  if (!m_IfcEllipseProfileDef_Factory) {
    m_IfcEllipseProfileDef_Factory = new IfcEllipseProfileDef_Factory;
    m_IfcEllipseProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcEllipseProfileDef::getClassType()] = m_IfcEllipseProfileDef_Factory;
  }
  return m_IfcEllipseProfileDef_Factory;
}

IfcEnergyConversionDevice_Factory *Model::getIfcEnergyConversionDevice_Factory() {
  if (!m_IfcEnergyConversionDevice_Factory) {
    m_IfcEnergyConversionDevice_Factory = new IfcEnergyConversionDevice_Factory;
    m_IfcEnergyConversionDevice_Factory->setModel(this);
    m_Type2Factory[IfcEnergyConversionDevice::getClassType()] = m_IfcEnergyConversionDevice_Factory;
  }
  return m_IfcEnergyConversionDevice_Factory;
}

IfcEnergyProperties_Factory *Model::getIfcEnergyProperties_Factory() {
  if (!m_IfcEnergyProperties_Factory) {
    m_IfcEnergyProperties_Factory = new IfcEnergyProperties_Factory;
    m_IfcEnergyProperties_Factory->setModel(this);
    m_Type2Factory[IfcEnergyProperties::getClassType()] = m_IfcEnergyProperties_Factory;
  }
  return m_IfcEnergyProperties_Factory;
}

IfcEnvironmentalImpactValue_Factory *Model::getIfcEnvironmentalImpactValue_Factory() {
  if (!m_IfcEnvironmentalImpactValue_Factory) {
    m_IfcEnvironmentalImpactValue_Factory = new IfcEnvironmentalImpactValue_Factory;
    m_IfcEnvironmentalImpactValue_Factory->setModel(this);
    m_Type2Factory[IfcEnvironmentalImpactValue::getClassType()] = m_IfcEnvironmentalImpactValue_Factory;
  }
  return m_IfcEnvironmentalImpactValue_Factory;
}

IfcEquipmentElement_Factory *Model::getIfcEquipmentElement_Factory() {
  if (!m_IfcEquipmentElement_Factory) {
    m_IfcEquipmentElement_Factory = new IfcEquipmentElement_Factory;
    m_IfcEquipmentElement_Factory->setModel(this);
    m_Type2Factory[IfcEquipmentElement::getClassType()] = m_IfcEquipmentElement_Factory;
  }
  return m_IfcEquipmentElement_Factory;
}

IfcEquipmentStandard_Factory *Model::getIfcEquipmentStandard_Factory() {
  if (!m_IfcEquipmentStandard_Factory) {
    m_IfcEquipmentStandard_Factory = new IfcEquipmentStandard_Factory;
    m_IfcEquipmentStandard_Factory->setModel(this);
    m_Type2Factory[IfcEquipmentStandard::getClassType()] = m_IfcEquipmentStandard_Factory;
  }
  return m_IfcEquipmentStandard_Factory;
}

IfcEvaporativeCoolerType_Factory *Model::getIfcEvaporativeCoolerType_Factory() {
  if (!m_IfcEvaporativeCoolerType_Factory) {
    m_IfcEvaporativeCoolerType_Factory = new IfcEvaporativeCoolerType_Factory;
    m_IfcEvaporativeCoolerType_Factory->setModel(this);
    m_Type2Factory[IfcEvaporativeCoolerType::getClassType()] = m_IfcEvaporativeCoolerType_Factory;
  }
  return m_IfcEvaporativeCoolerType_Factory;
}

IfcEvaporatorType_Factory *Model::getIfcEvaporatorType_Factory() {
  if (!m_IfcEvaporatorType_Factory) {
    m_IfcEvaporatorType_Factory = new IfcEvaporatorType_Factory;
    m_IfcEvaporatorType_Factory->setModel(this);
    m_Type2Factory[IfcEvaporatorType::getClassType()] = m_IfcEvaporatorType_Factory;
  }
  return m_IfcEvaporatorType_Factory;
}

IfcExtendedMaterialProperties_Factory *Model::getIfcExtendedMaterialProperties_Factory() {
  if (!m_IfcExtendedMaterialProperties_Factory) {
    m_IfcExtendedMaterialProperties_Factory = new IfcExtendedMaterialProperties_Factory;
    m_IfcExtendedMaterialProperties_Factory->setModel(this);
    m_Type2Factory[IfcExtendedMaterialProperties::getClassType()] = m_IfcExtendedMaterialProperties_Factory;
  }
  return m_IfcExtendedMaterialProperties_Factory;
}

IfcExternallyDefinedHatchStyle_Factory *Model::getIfcExternallyDefinedHatchStyle_Factory() {
  if (!m_IfcExternallyDefinedHatchStyle_Factory) {
    m_IfcExternallyDefinedHatchStyle_Factory = new IfcExternallyDefinedHatchStyle_Factory;
    m_IfcExternallyDefinedHatchStyle_Factory->setModel(this);
    m_Type2Factory[IfcExternallyDefinedHatchStyle::getClassType()] = m_IfcExternallyDefinedHatchStyle_Factory;
  }
  return m_IfcExternallyDefinedHatchStyle_Factory;
}

IfcExternallyDefinedSurfaceStyle_Factory *Model::getIfcExternallyDefinedSurfaceStyle_Factory() {
  if (!m_IfcExternallyDefinedSurfaceStyle_Factory) {
    m_IfcExternallyDefinedSurfaceStyle_Factory = new IfcExternallyDefinedSurfaceStyle_Factory;
    m_IfcExternallyDefinedSurfaceStyle_Factory->setModel(this);
    m_Type2Factory[IfcExternallyDefinedSurfaceStyle::getClassType()] = m_IfcExternallyDefinedSurfaceStyle_Factory;
  }
  return m_IfcExternallyDefinedSurfaceStyle_Factory;
}

IfcExternallyDefinedSymbol_Factory *Model::getIfcExternallyDefinedSymbol_Factory() {
  if (!m_IfcExternallyDefinedSymbol_Factory) {
    m_IfcExternallyDefinedSymbol_Factory = new IfcExternallyDefinedSymbol_Factory;
    m_IfcExternallyDefinedSymbol_Factory->setModel(this);
    m_Type2Factory[IfcExternallyDefinedSymbol::getClassType()] = m_IfcExternallyDefinedSymbol_Factory;
  }
  return m_IfcExternallyDefinedSymbol_Factory;
}

IfcExternallyDefinedTextFont_Factory *Model::getIfcExternallyDefinedTextFont_Factory() {
  if (!m_IfcExternallyDefinedTextFont_Factory) {
    m_IfcExternallyDefinedTextFont_Factory = new IfcExternallyDefinedTextFont_Factory;
    m_IfcExternallyDefinedTextFont_Factory->setModel(this);
    m_Type2Factory[IfcExternallyDefinedTextFont::getClassType()] = m_IfcExternallyDefinedTextFont_Factory;
  }
  return m_IfcExternallyDefinedTextFont_Factory;
}

IfcExtrudedAreaSolid_Factory *Model::getIfcExtrudedAreaSolid_Factory() {
  if (!m_IfcExtrudedAreaSolid_Factory) {
    m_IfcExtrudedAreaSolid_Factory = new IfcExtrudedAreaSolid_Factory;
    m_IfcExtrudedAreaSolid_Factory->setModel(this);
    m_Type2Factory[IfcExtrudedAreaSolid::getClassType()] = m_IfcExtrudedAreaSolid_Factory;
  }
  return m_IfcExtrudedAreaSolid_Factory;
}

IfcFace_Factory *Model::getIfcFace_Factory() {
  if (!m_IfcFace_Factory) {
    m_IfcFace_Factory = new IfcFace_Factory;
    m_IfcFace_Factory->setModel(this);
    m_Type2Factory[IfcFace::getClassType()] = m_IfcFace_Factory;
  }
  return m_IfcFace_Factory;
}

IfcFaceBasedSurfaceModel_Factory *Model::getIfcFaceBasedSurfaceModel_Factory() {
  if (!m_IfcFaceBasedSurfaceModel_Factory) {
    m_IfcFaceBasedSurfaceModel_Factory = new IfcFaceBasedSurfaceModel_Factory;
    m_IfcFaceBasedSurfaceModel_Factory->setModel(this);
    m_Type2Factory[IfcFaceBasedSurfaceModel::getClassType()] = m_IfcFaceBasedSurfaceModel_Factory;
  }
  return m_IfcFaceBasedSurfaceModel_Factory;
}

IfcFaceBound_Factory *Model::getIfcFaceBound_Factory() {
  if (!m_IfcFaceBound_Factory) {
    m_IfcFaceBound_Factory = new IfcFaceBound_Factory;
    m_IfcFaceBound_Factory->setModel(this);
    m_Type2Factory[IfcFaceBound::getClassType()] = m_IfcFaceBound_Factory;
  }
  return m_IfcFaceBound_Factory;
}

IfcFaceOuterBound_Factory *Model::getIfcFaceOuterBound_Factory() {
  if (!m_IfcFaceOuterBound_Factory) {
    m_IfcFaceOuterBound_Factory = new IfcFaceOuterBound_Factory;
    m_IfcFaceOuterBound_Factory->setModel(this);
    m_Type2Factory[IfcFaceOuterBound::getClassType()] = m_IfcFaceOuterBound_Factory;
  }
  return m_IfcFaceOuterBound_Factory;
}

IfcFaceSurface_Factory *Model::getIfcFaceSurface_Factory() {
  if (!m_IfcFaceSurface_Factory) {
    m_IfcFaceSurface_Factory = new IfcFaceSurface_Factory;
    m_IfcFaceSurface_Factory->setModel(this);
    m_Type2Factory[IfcFaceSurface::getClassType()] = m_IfcFaceSurface_Factory;
  }
  return m_IfcFaceSurface_Factory;
}

IfcFacetedBrep_Factory *Model::getIfcFacetedBrep_Factory() {
  if (!m_IfcFacetedBrep_Factory) {
    m_IfcFacetedBrep_Factory = new IfcFacetedBrep_Factory;
    m_IfcFacetedBrep_Factory->setModel(this);
    m_Type2Factory[IfcFacetedBrep::getClassType()] = m_IfcFacetedBrep_Factory;
  }
  return m_IfcFacetedBrep_Factory;
}

IfcFacetedBrepWithVoids_Factory *Model::getIfcFacetedBrepWithVoids_Factory() {
  if (!m_IfcFacetedBrepWithVoids_Factory) {
    m_IfcFacetedBrepWithVoids_Factory = new IfcFacetedBrepWithVoids_Factory;
    m_IfcFacetedBrepWithVoids_Factory->setModel(this);
    m_Type2Factory[IfcFacetedBrepWithVoids::getClassType()] = m_IfcFacetedBrepWithVoids_Factory;
  }
  return m_IfcFacetedBrepWithVoids_Factory;
}

IfcFailureConnectionCondition_Factory *Model::getIfcFailureConnectionCondition_Factory() {
  if (!m_IfcFailureConnectionCondition_Factory) {
    m_IfcFailureConnectionCondition_Factory = new IfcFailureConnectionCondition_Factory;
    m_IfcFailureConnectionCondition_Factory->setModel(this);
    m_Type2Factory[IfcFailureConnectionCondition::getClassType()] = m_IfcFailureConnectionCondition_Factory;
  }
  return m_IfcFailureConnectionCondition_Factory;
}

IfcFanType_Factory *Model::getIfcFanType_Factory() {
  if (!m_IfcFanType_Factory) {
    m_IfcFanType_Factory = new IfcFanType_Factory;
    m_IfcFanType_Factory->setModel(this);
    m_Type2Factory[IfcFanType::getClassType()] = m_IfcFanType_Factory;
  }
  return m_IfcFanType_Factory;
}

IfcFastener_Factory *Model::getIfcFastener_Factory() {
  if (!m_IfcFastener_Factory) {
    m_IfcFastener_Factory = new IfcFastener_Factory;
    m_IfcFastener_Factory->setModel(this);
    m_Type2Factory[IfcFastener::getClassType()] = m_IfcFastener_Factory;
  }
  return m_IfcFastener_Factory;
}

IfcFastenerType_Factory *Model::getIfcFastenerType_Factory() {
  if (!m_IfcFastenerType_Factory) {
    m_IfcFastenerType_Factory = new IfcFastenerType_Factory;
    m_IfcFastenerType_Factory->setModel(this);
    m_Type2Factory[IfcFastenerType::getClassType()] = m_IfcFastenerType_Factory;
  }
  return m_IfcFastenerType_Factory;
}

IfcFillAreaStyle_Factory *Model::getIfcFillAreaStyle_Factory() {
  if (!m_IfcFillAreaStyle_Factory) {
    m_IfcFillAreaStyle_Factory = new IfcFillAreaStyle_Factory;
    m_IfcFillAreaStyle_Factory->setModel(this);
    m_Type2Factory[IfcFillAreaStyle::getClassType()] = m_IfcFillAreaStyle_Factory;
  }
  return m_IfcFillAreaStyle_Factory;
}

IfcFillAreaStyleHatching_Factory *Model::getIfcFillAreaStyleHatching_Factory() {
  if (!m_IfcFillAreaStyleHatching_Factory) {
    m_IfcFillAreaStyleHatching_Factory = new IfcFillAreaStyleHatching_Factory;
    m_IfcFillAreaStyleHatching_Factory->setModel(this);
    m_Type2Factory[IfcFillAreaStyleHatching::getClassType()] = m_IfcFillAreaStyleHatching_Factory;
  }
  return m_IfcFillAreaStyleHatching_Factory;
}

IfcFillAreaStyleTileSymbolWithStyle_Factory *Model::getIfcFillAreaStyleTileSymbolWithStyle_Factory() {
  if (!m_IfcFillAreaStyleTileSymbolWithStyle_Factory) {
    m_IfcFillAreaStyleTileSymbolWithStyle_Factory = new IfcFillAreaStyleTileSymbolWithStyle_Factory;
    m_IfcFillAreaStyleTileSymbolWithStyle_Factory->setModel(this);
    m_Type2Factory[IfcFillAreaStyleTileSymbolWithStyle::getClassType()] = m_IfcFillAreaStyleTileSymbolWithStyle_Factory;
  }
  return m_IfcFillAreaStyleTileSymbolWithStyle_Factory;
}

IfcFillAreaStyleTiles_Factory *Model::getIfcFillAreaStyleTiles_Factory() {
  if (!m_IfcFillAreaStyleTiles_Factory) {
    m_IfcFillAreaStyleTiles_Factory = new IfcFillAreaStyleTiles_Factory;
    m_IfcFillAreaStyleTiles_Factory->setModel(this);
    m_Type2Factory[IfcFillAreaStyleTiles::getClassType()] = m_IfcFillAreaStyleTiles_Factory;
  }
  return m_IfcFillAreaStyleTiles_Factory;
}

IfcFilterType_Factory *Model::getIfcFilterType_Factory() {
  if (!m_IfcFilterType_Factory) {
    m_IfcFilterType_Factory = new IfcFilterType_Factory;
    m_IfcFilterType_Factory->setModel(this);
    m_Type2Factory[IfcFilterType::getClassType()] = m_IfcFilterType_Factory;
  }
  return m_IfcFilterType_Factory;
}

IfcFireSuppressionTerminalType_Factory *Model::getIfcFireSuppressionTerminalType_Factory() {
  if (!m_IfcFireSuppressionTerminalType_Factory) {
    m_IfcFireSuppressionTerminalType_Factory = new IfcFireSuppressionTerminalType_Factory;
    m_IfcFireSuppressionTerminalType_Factory->setModel(this);
    m_Type2Factory[IfcFireSuppressionTerminalType::getClassType()] = m_IfcFireSuppressionTerminalType_Factory;
  }
  return m_IfcFireSuppressionTerminalType_Factory;
}

IfcFlowController_Factory *Model::getIfcFlowController_Factory() {
  if (!m_IfcFlowController_Factory) {
    m_IfcFlowController_Factory = new IfcFlowController_Factory;
    m_IfcFlowController_Factory->setModel(this);
    m_Type2Factory[IfcFlowController::getClassType()] = m_IfcFlowController_Factory;
  }
  return m_IfcFlowController_Factory;
}

IfcFlowFitting_Factory *Model::getIfcFlowFitting_Factory() {
  if (!m_IfcFlowFitting_Factory) {
    m_IfcFlowFitting_Factory = new IfcFlowFitting_Factory;
    m_IfcFlowFitting_Factory->setModel(this);
    m_Type2Factory[IfcFlowFitting::getClassType()] = m_IfcFlowFitting_Factory;
  }
  return m_IfcFlowFitting_Factory;
}

IfcFlowInstrumentType_Factory *Model::getIfcFlowInstrumentType_Factory() {
  if (!m_IfcFlowInstrumentType_Factory) {
    m_IfcFlowInstrumentType_Factory = new IfcFlowInstrumentType_Factory;
    m_IfcFlowInstrumentType_Factory->setModel(this);
    m_Type2Factory[IfcFlowInstrumentType::getClassType()] = m_IfcFlowInstrumentType_Factory;
  }
  return m_IfcFlowInstrumentType_Factory;
}

IfcFlowMeterType_Factory *Model::getIfcFlowMeterType_Factory() {
  if (!m_IfcFlowMeterType_Factory) {
    m_IfcFlowMeterType_Factory = new IfcFlowMeterType_Factory;
    m_IfcFlowMeterType_Factory->setModel(this);
    m_Type2Factory[IfcFlowMeterType::getClassType()] = m_IfcFlowMeterType_Factory;
  }
  return m_IfcFlowMeterType_Factory;
}

IfcFlowMovingDevice_Factory *Model::getIfcFlowMovingDevice_Factory() {
  if (!m_IfcFlowMovingDevice_Factory) {
    m_IfcFlowMovingDevice_Factory = new IfcFlowMovingDevice_Factory;
    m_IfcFlowMovingDevice_Factory->setModel(this);
    m_Type2Factory[IfcFlowMovingDevice::getClassType()] = m_IfcFlowMovingDevice_Factory;
  }
  return m_IfcFlowMovingDevice_Factory;
}

IfcFlowSegment_Factory *Model::getIfcFlowSegment_Factory() {
  if (!m_IfcFlowSegment_Factory) {
    m_IfcFlowSegment_Factory = new IfcFlowSegment_Factory;
    m_IfcFlowSegment_Factory->setModel(this);
    m_Type2Factory[IfcFlowSegment::getClassType()] = m_IfcFlowSegment_Factory;
  }
  return m_IfcFlowSegment_Factory;
}

IfcFlowStorageDevice_Factory *Model::getIfcFlowStorageDevice_Factory() {
  if (!m_IfcFlowStorageDevice_Factory) {
    m_IfcFlowStorageDevice_Factory = new IfcFlowStorageDevice_Factory;
    m_IfcFlowStorageDevice_Factory->setModel(this);
    m_Type2Factory[IfcFlowStorageDevice::getClassType()] = m_IfcFlowStorageDevice_Factory;
  }
  return m_IfcFlowStorageDevice_Factory;
}

IfcFlowTerminal_Factory *Model::getIfcFlowTerminal_Factory() {
  if (!m_IfcFlowTerminal_Factory) {
    m_IfcFlowTerminal_Factory = new IfcFlowTerminal_Factory;
    m_IfcFlowTerminal_Factory->setModel(this);
    m_Type2Factory[IfcFlowTerminal::getClassType()] = m_IfcFlowTerminal_Factory;
  }
  return m_IfcFlowTerminal_Factory;
}

IfcFlowTreatmentDevice_Factory *Model::getIfcFlowTreatmentDevice_Factory() {
  if (!m_IfcFlowTreatmentDevice_Factory) {
    m_IfcFlowTreatmentDevice_Factory = new IfcFlowTreatmentDevice_Factory;
    m_IfcFlowTreatmentDevice_Factory->setModel(this);
    m_Type2Factory[IfcFlowTreatmentDevice::getClassType()] = m_IfcFlowTreatmentDevice_Factory;
  }
  return m_IfcFlowTreatmentDevice_Factory;
}

IfcFluidFlowProperties_Factory *Model::getIfcFluidFlowProperties_Factory() {
  if (!m_IfcFluidFlowProperties_Factory) {
    m_IfcFluidFlowProperties_Factory = new IfcFluidFlowProperties_Factory;
    m_IfcFluidFlowProperties_Factory->setModel(this);
    m_Type2Factory[IfcFluidFlowProperties::getClassType()] = m_IfcFluidFlowProperties_Factory;
  }
  return m_IfcFluidFlowProperties_Factory;
}

IfcFooting_Factory *Model::getIfcFooting_Factory() {
  if (!m_IfcFooting_Factory) {
    m_IfcFooting_Factory = new IfcFooting_Factory;
    m_IfcFooting_Factory->setModel(this);
    m_Type2Factory[IfcFooting::getClassType()] = m_IfcFooting_Factory;
  }
  return m_IfcFooting_Factory;
}

IfcFuelProperties_Factory *Model::getIfcFuelProperties_Factory() {
  if (!m_IfcFuelProperties_Factory) {
    m_IfcFuelProperties_Factory = new IfcFuelProperties_Factory;
    m_IfcFuelProperties_Factory->setModel(this);
    m_Type2Factory[IfcFuelProperties::getClassType()] = m_IfcFuelProperties_Factory;
  }
  return m_IfcFuelProperties_Factory;
}

IfcFurnishingElement_Factory *Model::getIfcFurnishingElement_Factory() {
  if (!m_IfcFurnishingElement_Factory) {
    m_IfcFurnishingElement_Factory = new IfcFurnishingElement_Factory;
    m_IfcFurnishingElement_Factory->setModel(this);
    m_Type2Factory[IfcFurnishingElement::getClassType()] = m_IfcFurnishingElement_Factory;
  }
  return m_IfcFurnishingElement_Factory;
}

IfcFurnishingElementType_Factory *Model::getIfcFurnishingElementType_Factory() {
  if (!m_IfcFurnishingElementType_Factory) {
    m_IfcFurnishingElementType_Factory = new IfcFurnishingElementType_Factory;
    m_IfcFurnishingElementType_Factory->setModel(this);
    m_Type2Factory[IfcFurnishingElementType::getClassType()] = m_IfcFurnishingElementType_Factory;
  }
  return m_IfcFurnishingElementType_Factory;
}

IfcFurnitureStandard_Factory *Model::getIfcFurnitureStandard_Factory() {
  if (!m_IfcFurnitureStandard_Factory) {
    m_IfcFurnitureStandard_Factory = new IfcFurnitureStandard_Factory;
    m_IfcFurnitureStandard_Factory->setModel(this);
    m_Type2Factory[IfcFurnitureStandard::getClassType()] = m_IfcFurnitureStandard_Factory;
  }
  return m_IfcFurnitureStandard_Factory;
}

IfcFurnitureType_Factory *Model::getIfcFurnitureType_Factory() {
  if (!m_IfcFurnitureType_Factory) {
    m_IfcFurnitureType_Factory = new IfcFurnitureType_Factory;
    m_IfcFurnitureType_Factory->setModel(this);
    m_Type2Factory[IfcFurnitureType::getClassType()] = m_IfcFurnitureType_Factory;
  }
  return m_IfcFurnitureType_Factory;
}

IfcGasTerminalType_Factory *Model::getIfcGasTerminalType_Factory() {
  if (!m_IfcGasTerminalType_Factory) {
    m_IfcGasTerminalType_Factory = new IfcGasTerminalType_Factory;
    m_IfcGasTerminalType_Factory->setModel(this);
    m_Type2Factory[IfcGasTerminalType::getClassType()] = m_IfcGasTerminalType_Factory;
  }
  return m_IfcGasTerminalType_Factory;
}

IfcGeneralMaterialProperties_Factory *Model::getIfcGeneralMaterialProperties_Factory() {
  if (!m_IfcGeneralMaterialProperties_Factory) {
    m_IfcGeneralMaterialProperties_Factory = new IfcGeneralMaterialProperties_Factory;
    m_IfcGeneralMaterialProperties_Factory->setModel(this);
    m_Type2Factory[IfcGeneralMaterialProperties::getClassType()] = m_IfcGeneralMaterialProperties_Factory;
  }
  return m_IfcGeneralMaterialProperties_Factory;
}

IfcGeneralProfileProperties_Factory *Model::getIfcGeneralProfileProperties_Factory() {
  if (!m_IfcGeneralProfileProperties_Factory) {
    m_IfcGeneralProfileProperties_Factory = new IfcGeneralProfileProperties_Factory;
    m_IfcGeneralProfileProperties_Factory->setModel(this);
    m_Type2Factory[IfcGeneralProfileProperties::getClassType()] = m_IfcGeneralProfileProperties_Factory;
  }
  return m_IfcGeneralProfileProperties_Factory;
}

IfcGeometricCurveSet_Factory *Model::getIfcGeometricCurveSet_Factory() {
  if (!m_IfcGeometricCurveSet_Factory) {
    m_IfcGeometricCurveSet_Factory = new IfcGeometricCurveSet_Factory;
    m_IfcGeometricCurveSet_Factory->setModel(this);
    m_Type2Factory[IfcGeometricCurveSet::getClassType()] = m_IfcGeometricCurveSet_Factory;
  }
  return m_IfcGeometricCurveSet_Factory;
}

IfcGeometricRepresentationContext_Factory *Model::getIfcGeometricRepresentationContext_Factory() {
  if (!m_IfcGeometricRepresentationContext_Factory) {
    m_IfcGeometricRepresentationContext_Factory = new IfcGeometricRepresentationContext_Factory;
    m_IfcGeometricRepresentationContext_Factory->setModel(this);
    m_Type2Factory[IfcGeometricRepresentationContext::getClassType()] = m_IfcGeometricRepresentationContext_Factory;
  }
  return m_IfcGeometricRepresentationContext_Factory;
}

IfcGeometricRepresentationSubContext_Factory *Model::getIfcGeometricRepresentationSubContext_Factory() {
  if (!m_IfcGeometricRepresentationSubContext_Factory) {
    m_IfcGeometricRepresentationSubContext_Factory = new IfcGeometricRepresentationSubContext_Factory;
    m_IfcGeometricRepresentationSubContext_Factory->setModel(this);
    m_Type2Factory[IfcGeometricRepresentationSubContext::getClassType()] = m_IfcGeometricRepresentationSubContext_Factory;
  }
  return m_IfcGeometricRepresentationSubContext_Factory;
}

IfcGeometricSet_Factory *Model::getIfcGeometricSet_Factory() {
  if (!m_IfcGeometricSet_Factory) {
    m_IfcGeometricSet_Factory = new IfcGeometricSet_Factory;
    m_IfcGeometricSet_Factory->setModel(this);
    m_Type2Factory[IfcGeometricSet::getClassType()] = m_IfcGeometricSet_Factory;
  }
  return m_IfcGeometricSet_Factory;
}

IfcGrid_Factory *Model::getIfcGrid_Factory() {
  if (!m_IfcGrid_Factory) {
    m_IfcGrid_Factory = new IfcGrid_Factory;
    m_IfcGrid_Factory->setModel(this);
    m_Type2Factory[IfcGrid::getClassType()] = m_IfcGrid_Factory;
  }
  return m_IfcGrid_Factory;
}

IfcGridAxis_Factory *Model::getIfcGridAxis_Factory() {
  if (!m_IfcGridAxis_Factory) {
    m_IfcGridAxis_Factory = new IfcGridAxis_Factory;
    m_IfcGridAxis_Factory->setModel(this);
    m_Type2Factory[IfcGridAxis::getClassType()] = m_IfcGridAxis_Factory;
  }
  return m_IfcGridAxis_Factory;
}

IfcGridPlacement_Factory *Model::getIfcGridPlacement_Factory() {
  if (!m_IfcGridPlacement_Factory) {
    m_IfcGridPlacement_Factory = new IfcGridPlacement_Factory;
    m_IfcGridPlacement_Factory->setModel(this);
    m_Type2Factory[IfcGridPlacement::getClassType()] = m_IfcGridPlacement_Factory;
  }
  return m_IfcGridPlacement_Factory;
}

IfcGroup_Factory *Model::getIfcGroup_Factory() {
  if (!m_IfcGroup_Factory) {
    m_IfcGroup_Factory = new IfcGroup_Factory;
    m_IfcGroup_Factory->setModel(this);
    m_Type2Factory[IfcGroup::getClassType()] = m_IfcGroup_Factory;
  }
  return m_IfcGroup_Factory;
}

IfcHalfSpaceSolid_Factory *Model::getIfcHalfSpaceSolid_Factory() {
  if (!m_IfcHalfSpaceSolid_Factory) {
    m_IfcHalfSpaceSolid_Factory = new IfcHalfSpaceSolid_Factory;
    m_IfcHalfSpaceSolid_Factory->setModel(this);
    m_Type2Factory[IfcHalfSpaceSolid::getClassType()] = m_IfcHalfSpaceSolid_Factory;
  }
  return m_IfcHalfSpaceSolid_Factory;
}

IfcHeatExchangerType_Factory *Model::getIfcHeatExchangerType_Factory() {
  if (!m_IfcHeatExchangerType_Factory) {
    m_IfcHeatExchangerType_Factory = new IfcHeatExchangerType_Factory;
    m_IfcHeatExchangerType_Factory->setModel(this);
    m_Type2Factory[IfcHeatExchangerType::getClassType()] = m_IfcHeatExchangerType_Factory;
  }
  return m_IfcHeatExchangerType_Factory;
}

IfcHumidifierType_Factory *Model::getIfcHumidifierType_Factory() {
  if (!m_IfcHumidifierType_Factory) {
    m_IfcHumidifierType_Factory = new IfcHumidifierType_Factory;
    m_IfcHumidifierType_Factory->setModel(this);
    m_Type2Factory[IfcHumidifierType::getClassType()] = m_IfcHumidifierType_Factory;
  }
  return m_IfcHumidifierType_Factory;
}

IfcHygroscopicMaterialProperties_Factory *Model::getIfcHygroscopicMaterialProperties_Factory() {
  if (!m_IfcHygroscopicMaterialProperties_Factory) {
    m_IfcHygroscopicMaterialProperties_Factory = new IfcHygroscopicMaterialProperties_Factory;
    m_IfcHygroscopicMaterialProperties_Factory->setModel(this);
    m_Type2Factory[IfcHygroscopicMaterialProperties::getClassType()] = m_IfcHygroscopicMaterialProperties_Factory;
  }
  return m_IfcHygroscopicMaterialProperties_Factory;
}

IfcIShapeProfileDef_Factory *Model::getIfcIShapeProfileDef_Factory() {
  if (!m_IfcIShapeProfileDef_Factory) {
    m_IfcIShapeProfileDef_Factory = new IfcIShapeProfileDef_Factory;
    m_IfcIShapeProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcIShapeProfileDef::getClassType()] = m_IfcIShapeProfileDef_Factory;
  }
  return m_IfcIShapeProfileDef_Factory;
}

IfcImageTexture_Factory *Model::getIfcImageTexture_Factory() {
  if (!m_IfcImageTexture_Factory) {
    m_IfcImageTexture_Factory = new IfcImageTexture_Factory;
    m_IfcImageTexture_Factory->setModel(this);
    m_Type2Factory[IfcImageTexture::getClassType()] = m_IfcImageTexture_Factory;
  }
  return m_IfcImageTexture_Factory;
}

IfcInventory_Factory *Model::getIfcInventory_Factory() {
  if (!m_IfcInventory_Factory) {
    m_IfcInventory_Factory = new IfcInventory_Factory;
    m_IfcInventory_Factory->setModel(this);
    m_Type2Factory[IfcInventory::getClassType()] = m_IfcInventory_Factory;
  }
  return m_IfcInventory_Factory;
}

IfcIrregularTimeSeries_Factory *Model::getIfcIrregularTimeSeries_Factory() {
  if (!m_IfcIrregularTimeSeries_Factory) {
    m_IfcIrregularTimeSeries_Factory = new IfcIrregularTimeSeries_Factory;
    m_IfcIrregularTimeSeries_Factory->setModel(this);
    m_Type2Factory[IfcIrregularTimeSeries::getClassType()] = m_IfcIrregularTimeSeries_Factory;
  }
  return m_IfcIrregularTimeSeries_Factory;
}

IfcIrregularTimeSeriesValue_Factory *Model::getIfcIrregularTimeSeriesValue_Factory() {
  if (!m_IfcIrregularTimeSeriesValue_Factory) {
    m_IfcIrregularTimeSeriesValue_Factory = new IfcIrregularTimeSeriesValue_Factory;
    m_IfcIrregularTimeSeriesValue_Factory->setModel(this);
    m_Type2Factory[IfcIrregularTimeSeriesValue::getClassType()] = m_IfcIrregularTimeSeriesValue_Factory;
  }
  return m_IfcIrregularTimeSeriesValue_Factory;
}

IfcJunctionBoxType_Factory *Model::getIfcJunctionBoxType_Factory() {
  if (!m_IfcJunctionBoxType_Factory) {
    m_IfcJunctionBoxType_Factory = new IfcJunctionBoxType_Factory;
    m_IfcJunctionBoxType_Factory->setModel(this);
    m_Type2Factory[IfcJunctionBoxType::getClassType()] = m_IfcJunctionBoxType_Factory;
  }
  return m_IfcJunctionBoxType_Factory;
}

IfcLShapeProfileDef_Factory *Model::getIfcLShapeProfileDef_Factory() {
  if (!m_IfcLShapeProfileDef_Factory) {
    m_IfcLShapeProfileDef_Factory = new IfcLShapeProfileDef_Factory;
    m_IfcLShapeProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcLShapeProfileDef::getClassType()] = m_IfcLShapeProfileDef_Factory;
  }
  return m_IfcLShapeProfileDef_Factory;
}

IfcLaborResource_Factory *Model::getIfcLaborResource_Factory() {
  if (!m_IfcLaborResource_Factory) {
    m_IfcLaborResource_Factory = new IfcLaborResource_Factory;
    m_IfcLaborResource_Factory->setModel(this);
    m_Type2Factory[IfcLaborResource::getClassType()] = m_IfcLaborResource_Factory;
  }
  return m_IfcLaborResource_Factory;
}

IfcLampType_Factory *Model::getIfcLampType_Factory() {
  if (!m_IfcLampType_Factory) {
    m_IfcLampType_Factory = new IfcLampType_Factory;
    m_IfcLampType_Factory->setModel(this);
    m_Type2Factory[IfcLampType::getClassType()] = m_IfcLampType_Factory;
  }
  return m_IfcLampType_Factory;
}

IfcLibraryInformation_Factory *Model::getIfcLibraryInformation_Factory() {
  if (!m_IfcLibraryInformation_Factory) {
    m_IfcLibraryInformation_Factory = new IfcLibraryInformation_Factory;
    m_IfcLibraryInformation_Factory->setModel(this);
    m_Type2Factory[IfcLibraryInformation::getClassType()] = m_IfcLibraryInformation_Factory;
  }
  return m_IfcLibraryInformation_Factory;
}

IfcLibraryReference_Factory *Model::getIfcLibraryReference_Factory() {
  if (!m_IfcLibraryReference_Factory) {
    m_IfcLibraryReference_Factory = new IfcLibraryReference_Factory;
    m_IfcLibraryReference_Factory->setModel(this);
    m_Type2Factory[IfcLibraryReference::getClassType()] = m_IfcLibraryReference_Factory;
  }
  return m_IfcLibraryReference_Factory;
}

IfcLightDistributionData_Factory *Model::getIfcLightDistributionData_Factory() {
  if (!m_IfcLightDistributionData_Factory) {
    m_IfcLightDistributionData_Factory = new IfcLightDistributionData_Factory;
    m_IfcLightDistributionData_Factory->setModel(this);
    m_Type2Factory[IfcLightDistributionData::getClassType()] = m_IfcLightDistributionData_Factory;
  }
  return m_IfcLightDistributionData_Factory;
}

IfcLightFixtureType_Factory *Model::getIfcLightFixtureType_Factory() {
  if (!m_IfcLightFixtureType_Factory) {
    m_IfcLightFixtureType_Factory = new IfcLightFixtureType_Factory;
    m_IfcLightFixtureType_Factory->setModel(this);
    m_Type2Factory[IfcLightFixtureType::getClassType()] = m_IfcLightFixtureType_Factory;
  }
  return m_IfcLightFixtureType_Factory;
}

IfcLightIntensityDistribution_Factory *Model::getIfcLightIntensityDistribution_Factory() {
  if (!m_IfcLightIntensityDistribution_Factory) {
    m_IfcLightIntensityDistribution_Factory = new IfcLightIntensityDistribution_Factory;
    m_IfcLightIntensityDistribution_Factory->setModel(this);
    m_Type2Factory[IfcLightIntensityDistribution::getClassType()] = m_IfcLightIntensityDistribution_Factory;
  }
  return m_IfcLightIntensityDistribution_Factory;
}

IfcLightSourceAmbient_Factory *Model::getIfcLightSourceAmbient_Factory() {
  if (!m_IfcLightSourceAmbient_Factory) {
    m_IfcLightSourceAmbient_Factory = new IfcLightSourceAmbient_Factory;
    m_IfcLightSourceAmbient_Factory->setModel(this);
    m_Type2Factory[IfcLightSourceAmbient::getClassType()] = m_IfcLightSourceAmbient_Factory;
  }
  return m_IfcLightSourceAmbient_Factory;
}

IfcLightSourceDirectional_Factory *Model::getIfcLightSourceDirectional_Factory() {
  if (!m_IfcLightSourceDirectional_Factory) {
    m_IfcLightSourceDirectional_Factory = new IfcLightSourceDirectional_Factory;
    m_IfcLightSourceDirectional_Factory->setModel(this);
    m_Type2Factory[IfcLightSourceDirectional::getClassType()] = m_IfcLightSourceDirectional_Factory;
  }
  return m_IfcLightSourceDirectional_Factory;
}

IfcLightSourceGoniometric_Factory *Model::getIfcLightSourceGoniometric_Factory() {
  if (!m_IfcLightSourceGoniometric_Factory) {
    m_IfcLightSourceGoniometric_Factory = new IfcLightSourceGoniometric_Factory;
    m_IfcLightSourceGoniometric_Factory->setModel(this);
    m_Type2Factory[IfcLightSourceGoniometric::getClassType()] = m_IfcLightSourceGoniometric_Factory;
  }
  return m_IfcLightSourceGoniometric_Factory;
}

IfcLightSourcePositional_Factory *Model::getIfcLightSourcePositional_Factory() {
  if (!m_IfcLightSourcePositional_Factory) {
    m_IfcLightSourcePositional_Factory = new IfcLightSourcePositional_Factory;
    m_IfcLightSourcePositional_Factory->setModel(this);
    m_Type2Factory[IfcLightSourcePositional::getClassType()] = m_IfcLightSourcePositional_Factory;
  }
  return m_IfcLightSourcePositional_Factory;
}

IfcLightSourceSpot_Factory *Model::getIfcLightSourceSpot_Factory() {
  if (!m_IfcLightSourceSpot_Factory) {
    m_IfcLightSourceSpot_Factory = new IfcLightSourceSpot_Factory;
    m_IfcLightSourceSpot_Factory->setModel(this);
    m_Type2Factory[IfcLightSourceSpot::getClassType()] = m_IfcLightSourceSpot_Factory;
  }
  return m_IfcLightSourceSpot_Factory;
}

IfcLine_Factory *Model::getIfcLine_Factory() {
  if (!m_IfcLine_Factory) {
    m_IfcLine_Factory = new IfcLine_Factory;
    m_IfcLine_Factory->setModel(this);
    m_Type2Factory[IfcLine::getClassType()] = m_IfcLine_Factory;
  }
  return m_IfcLine_Factory;
}

IfcLinearDimension_Factory *Model::getIfcLinearDimension_Factory() {
  if (!m_IfcLinearDimension_Factory) {
    m_IfcLinearDimension_Factory = new IfcLinearDimension_Factory;
    m_IfcLinearDimension_Factory->setModel(this);
    m_Type2Factory[IfcLinearDimension::getClassType()] = m_IfcLinearDimension_Factory;
  }
  return m_IfcLinearDimension_Factory;
}

IfcLocalPlacement_Factory *Model::getIfcLocalPlacement_Factory() {
  if (!m_IfcLocalPlacement_Factory) {
    m_IfcLocalPlacement_Factory = new IfcLocalPlacement_Factory;
    m_IfcLocalPlacement_Factory->setModel(this);
    m_Type2Factory[IfcLocalPlacement::getClassType()] = m_IfcLocalPlacement_Factory;
  }
  return m_IfcLocalPlacement_Factory;
}

IfcLocalTime_Factory *Model::getIfcLocalTime_Factory() {
  if (!m_IfcLocalTime_Factory) {
    m_IfcLocalTime_Factory = new IfcLocalTime_Factory;
    m_IfcLocalTime_Factory->setModel(this);
    m_Type2Factory[IfcLocalTime::getClassType()] = m_IfcLocalTime_Factory;
  }
  return m_IfcLocalTime_Factory;
}

IfcLoop_Factory *Model::getIfcLoop_Factory() {
  if (!m_IfcLoop_Factory) {
    m_IfcLoop_Factory = new IfcLoop_Factory;
    m_IfcLoop_Factory->setModel(this);
    m_Type2Factory[IfcLoop::getClassType()] = m_IfcLoop_Factory;
  }
  return m_IfcLoop_Factory;
}

IfcMappedItem_Factory *Model::getIfcMappedItem_Factory() {
  if (!m_IfcMappedItem_Factory) {
    m_IfcMappedItem_Factory = new IfcMappedItem_Factory;
    m_IfcMappedItem_Factory->setModel(this);
    m_Type2Factory[IfcMappedItem::getClassType()] = m_IfcMappedItem_Factory;
  }
  return m_IfcMappedItem_Factory;
}

IfcMaterial_Factory *Model::getIfcMaterial_Factory() {
  if (!m_IfcMaterial_Factory) {
    m_IfcMaterial_Factory = new IfcMaterial_Factory;
    m_IfcMaterial_Factory->setModel(this);
    m_Type2Factory[IfcMaterial::getClassType()] = m_IfcMaterial_Factory;
  }
  return m_IfcMaterial_Factory;
}

IfcMaterialClassificationRelationship_Factory *Model::getIfcMaterialClassificationRelationship_Factory() {
  if (!m_IfcMaterialClassificationRelationship_Factory) {
    m_IfcMaterialClassificationRelationship_Factory = new IfcMaterialClassificationRelationship_Factory;
    m_IfcMaterialClassificationRelationship_Factory->setModel(this);
    m_Type2Factory[IfcMaterialClassificationRelationship::getClassType()] = m_IfcMaterialClassificationRelationship_Factory;
  }
  return m_IfcMaterialClassificationRelationship_Factory;
}

IfcMaterialDefinitionRepresentation_Factory *Model::getIfcMaterialDefinitionRepresentation_Factory() {
  if (!m_IfcMaterialDefinitionRepresentation_Factory) {
    m_IfcMaterialDefinitionRepresentation_Factory = new IfcMaterialDefinitionRepresentation_Factory;
    m_IfcMaterialDefinitionRepresentation_Factory->setModel(this);
    m_Type2Factory[IfcMaterialDefinitionRepresentation::getClassType()] = m_IfcMaterialDefinitionRepresentation_Factory;
  }
  return m_IfcMaterialDefinitionRepresentation_Factory;
}

IfcMaterialLayer_Factory *Model::getIfcMaterialLayer_Factory() {
  if (!m_IfcMaterialLayer_Factory) {
    m_IfcMaterialLayer_Factory = new IfcMaterialLayer_Factory;
    m_IfcMaterialLayer_Factory->setModel(this);
    m_Type2Factory[IfcMaterialLayer::getClassType()] = m_IfcMaterialLayer_Factory;
  }
  return m_IfcMaterialLayer_Factory;
}

IfcMaterialLayerSet_Factory *Model::getIfcMaterialLayerSet_Factory() {
  if (!m_IfcMaterialLayerSet_Factory) {
    m_IfcMaterialLayerSet_Factory = new IfcMaterialLayerSet_Factory;
    m_IfcMaterialLayerSet_Factory->setModel(this);
    m_Type2Factory[IfcMaterialLayerSet::getClassType()] = m_IfcMaterialLayerSet_Factory;
  }
  return m_IfcMaterialLayerSet_Factory;
}

IfcMaterialLayerSetUsage_Factory *Model::getIfcMaterialLayerSetUsage_Factory() {
  if (!m_IfcMaterialLayerSetUsage_Factory) {
    m_IfcMaterialLayerSetUsage_Factory = new IfcMaterialLayerSetUsage_Factory;
    m_IfcMaterialLayerSetUsage_Factory->setModel(this);
    m_Type2Factory[IfcMaterialLayerSetUsage::getClassType()] = m_IfcMaterialLayerSetUsage_Factory;
  }
  return m_IfcMaterialLayerSetUsage_Factory;
}

IfcMaterialList_Factory *Model::getIfcMaterialList_Factory() {
  if (!m_IfcMaterialList_Factory) {
    m_IfcMaterialList_Factory = new IfcMaterialList_Factory;
    m_IfcMaterialList_Factory->setModel(this);
    m_Type2Factory[IfcMaterialList::getClassType()] = m_IfcMaterialList_Factory;
  }
  return m_IfcMaterialList_Factory;
}

IfcMeasureWithUnit_Factory *Model::getIfcMeasureWithUnit_Factory() {
  if (!m_IfcMeasureWithUnit_Factory) {
    m_IfcMeasureWithUnit_Factory = new IfcMeasureWithUnit_Factory;
    m_IfcMeasureWithUnit_Factory->setModel(this);
    m_Type2Factory[IfcMeasureWithUnit::getClassType()] = m_IfcMeasureWithUnit_Factory;
  }
  return m_IfcMeasureWithUnit_Factory;
}

IfcMechanicalConcreteMaterialProperties_Factory *Model::getIfcMechanicalConcreteMaterialProperties_Factory() {
  if (!m_IfcMechanicalConcreteMaterialProperties_Factory) {
    m_IfcMechanicalConcreteMaterialProperties_Factory = new IfcMechanicalConcreteMaterialProperties_Factory;
    m_IfcMechanicalConcreteMaterialProperties_Factory->setModel(this);
    m_Type2Factory[IfcMechanicalConcreteMaterialProperties::getClassType()] = m_IfcMechanicalConcreteMaterialProperties_Factory;
  }
  return m_IfcMechanicalConcreteMaterialProperties_Factory;
}

IfcMechanicalFastener_Factory *Model::getIfcMechanicalFastener_Factory() {
  if (!m_IfcMechanicalFastener_Factory) {
    m_IfcMechanicalFastener_Factory = new IfcMechanicalFastener_Factory;
    m_IfcMechanicalFastener_Factory->setModel(this);
    m_Type2Factory[IfcMechanicalFastener::getClassType()] = m_IfcMechanicalFastener_Factory;
  }
  return m_IfcMechanicalFastener_Factory;
}

IfcMechanicalFastenerType_Factory *Model::getIfcMechanicalFastenerType_Factory() {
  if (!m_IfcMechanicalFastenerType_Factory) {
    m_IfcMechanicalFastenerType_Factory = new IfcMechanicalFastenerType_Factory;
    m_IfcMechanicalFastenerType_Factory->setModel(this);
    m_Type2Factory[IfcMechanicalFastenerType::getClassType()] = m_IfcMechanicalFastenerType_Factory;
  }
  return m_IfcMechanicalFastenerType_Factory;
}

IfcMechanicalMaterialProperties_Factory *Model::getIfcMechanicalMaterialProperties_Factory() {
  if (!m_IfcMechanicalMaterialProperties_Factory) {
    m_IfcMechanicalMaterialProperties_Factory = new IfcMechanicalMaterialProperties_Factory;
    m_IfcMechanicalMaterialProperties_Factory->setModel(this);
    m_Type2Factory[IfcMechanicalMaterialProperties::getClassType()] = m_IfcMechanicalMaterialProperties_Factory;
  }
  return m_IfcMechanicalMaterialProperties_Factory;
}

IfcMechanicalSteelMaterialProperties_Factory *Model::getIfcMechanicalSteelMaterialProperties_Factory() {
  if (!m_IfcMechanicalSteelMaterialProperties_Factory) {
    m_IfcMechanicalSteelMaterialProperties_Factory = new IfcMechanicalSteelMaterialProperties_Factory;
    m_IfcMechanicalSteelMaterialProperties_Factory->setModel(this);
    m_Type2Factory[IfcMechanicalSteelMaterialProperties::getClassType()] = m_IfcMechanicalSteelMaterialProperties_Factory;
  }
  return m_IfcMechanicalSteelMaterialProperties_Factory;
}

IfcMember_Factory *Model::getIfcMember_Factory() {
  if (!m_IfcMember_Factory) {
    m_IfcMember_Factory = new IfcMember_Factory;
    m_IfcMember_Factory->setModel(this);
    m_Type2Factory[IfcMember::getClassType()] = m_IfcMember_Factory;
  }
  return m_IfcMember_Factory;
}

IfcMemberType_Factory *Model::getIfcMemberType_Factory() {
  if (!m_IfcMemberType_Factory) {
    m_IfcMemberType_Factory = new IfcMemberType_Factory;
    m_IfcMemberType_Factory->setModel(this);
    m_Type2Factory[IfcMemberType::getClassType()] = m_IfcMemberType_Factory;
  }
  return m_IfcMemberType_Factory;
}

IfcMetric_Factory *Model::getIfcMetric_Factory() {
  if (!m_IfcMetric_Factory) {
    m_IfcMetric_Factory = new IfcMetric_Factory;
    m_IfcMetric_Factory->setModel(this);
    m_Type2Factory[IfcMetric::getClassType()] = m_IfcMetric_Factory;
  }
  return m_IfcMetric_Factory;
}

IfcMonetaryUnit_Factory *Model::getIfcMonetaryUnit_Factory() {
  if (!m_IfcMonetaryUnit_Factory) {
    m_IfcMonetaryUnit_Factory = new IfcMonetaryUnit_Factory;
    m_IfcMonetaryUnit_Factory->setModel(this);
    m_Type2Factory[IfcMonetaryUnit::getClassType()] = m_IfcMonetaryUnit_Factory;
  }
  return m_IfcMonetaryUnit_Factory;
}

IfcMotorConnectionType_Factory *Model::getIfcMotorConnectionType_Factory() {
  if (!m_IfcMotorConnectionType_Factory) {
    m_IfcMotorConnectionType_Factory = new IfcMotorConnectionType_Factory;
    m_IfcMotorConnectionType_Factory->setModel(this);
    m_Type2Factory[IfcMotorConnectionType::getClassType()] = m_IfcMotorConnectionType_Factory;
  }
  return m_IfcMotorConnectionType_Factory;
}

IfcMove_Factory *Model::getIfcMove_Factory() {
  if (!m_IfcMove_Factory) {
    m_IfcMove_Factory = new IfcMove_Factory;
    m_IfcMove_Factory->setModel(this);
    m_Type2Factory[IfcMove::getClassType()] = m_IfcMove_Factory;
  }
  return m_IfcMove_Factory;
}

IfcObjective_Factory *Model::getIfcObjective_Factory() {
  if (!m_IfcObjective_Factory) {
    m_IfcObjective_Factory = new IfcObjective_Factory;
    m_IfcObjective_Factory->setModel(this);
    m_Type2Factory[IfcObjective::getClassType()] = m_IfcObjective_Factory;
  }
  return m_IfcObjective_Factory;
}

IfcOccupant_Factory *Model::getIfcOccupant_Factory() {
  if (!m_IfcOccupant_Factory) {
    m_IfcOccupant_Factory = new IfcOccupant_Factory;
    m_IfcOccupant_Factory->setModel(this);
    m_Type2Factory[IfcOccupant::getClassType()] = m_IfcOccupant_Factory;
  }
  return m_IfcOccupant_Factory;
}

IfcOffsetCurve2D_Factory *Model::getIfcOffsetCurve2D_Factory() {
  if (!m_IfcOffsetCurve2D_Factory) {
    m_IfcOffsetCurve2D_Factory = new IfcOffsetCurve2D_Factory;
    m_IfcOffsetCurve2D_Factory->setModel(this);
    m_Type2Factory[IfcOffsetCurve2D::getClassType()] = m_IfcOffsetCurve2D_Factory;
  }
  return m_IfcOffsetCurve2D_Factory;
}

IfcOffsetCurve3D_Factory *Model::getIfcOffsetCurve3D_Factory() {
  if (!m_IfcOffsetCurve3D_Factory) {
    m_IfcOffsetCurve3D_Factory = new IfcOffsetCurve3D_Factory;
    m_IfcOffsetCurve3D_Factory->setModel(this);
    m_Type2Factory[IfcOffsetCurve3D::getClassType()] = m_IfcOffsetCurve3D_Factory;
  }
  return m_IfcOffsetCurve3D_Factory;
}

IfcOneDirectionRepeatFactor_Factory *Model::getIfcOneDirectionRepeatFactor_Factory() {
  if (!m_IfcOneDirectionRepeatFactor_Factory) {
    m_IfcOneDirectionRepeatFactor_Factory = new IfcOneDirectionRepeatFactor_Factory;
    m_IfcOneDirectionRepeatFactor_Factory->setModel(this);
    m_Type2Factory[IfcOneDirectionRepeatFactor::getClassType()] = m_IfcOneDirectionRepeatFactor_Factory;
  }
  return m_IfcOneDirectionRepeatFactor_Factory;
}

IfcOpenShell_Factory *Model::getIfcOpenShell_Factory() {
  if (!m_IfcOpenShell_Factory) {
    m_IfcOpenShell_Factory = new IfcOpenShell_Factory;
    m_IfcOpenShell_Factory->setModel(this);
    m_Type2Factory[IfcOpenShell::getClassType()] = m_IfcOpenShell_Factory;
  }
  return m_IfcOpenShell_Factory;
}

IfcOpeningElement_Factory *Model::getIfcOpeningElement_Factory() {
  if (!m_IfcOpeningElement_Factory) {
    m_IfcOpeningElement_Factory = new IfcOpeningElement_Factory;
    m_IfcOpeningElement_Factory->setModel(this);
    m_Type2Factory[IfcOpeningElement::getClassType()] = m_IfcOpeningElement_Factory;
  }
  return m_IfcOpeningElement_Factory;
}

IfcOpticalMaterialProperties_Factory *Model::getIfcOpticalMaterialProperties_Factory() {
  if (!m_IfcOpticalMaterialProperties_Factory) {
    m_IfcOpticalMaterialProperties_Factory = new IfcOpticalMaterialProperties_Factory;
    m_IfcOpticalMaterialProperties_Factory->setModel(this);
    m_Type2Factory[IfcOpticalMaterialProperties::getClassType()] = m_IfcOpticalMaterialProperties_Factory;
  }
  return m_IfcOpticalMaterialProperties_Factory;
}

IfcOrderAction_Factory *Model::getIfcOrderAction_Factory() {
  if (!m_IfcOrderAction_Factory) {
    m_IfcOrderAction_Factory = new IfcOrderAction_Factory;
    m_IfcOrderAction_Factory->setModel(this);
    m_Type2Factory[IfcOrderAction::getClassType()] = m_IfcOrderAction_Factory;
  }
  return m_IfcOrderAction_Factory;
}

IfcOrganization_Factory *Model::getIfcOrganization_Factory() {
  if (!m_IfcOrganization_Factory) {
    m_IfcOrganization_Factory = new IfcOrganization_Factory;
    m_IfcOrganization_Factory->setModel(this);
    m_Type2Factory[IfcOrganization::getClassType()] = m_IfcOrganization_Factory;
  }
  return m_IfcOrganization_Factory;
}

IfcOrganizationRelationship_Factory *Model::getIfcOrganizationRelationship_Factory() {
  if (!m_IfcOrganizationRelationship_Factory) {
    m_IfcOrganizationRelationship_Factory = new IfcOrganizationRelationship_Factory;
    m_IfcOrganizationRelationship_Factory->setModel(this);
    m_Type2Factory[IfcOrganizationRelationship::getClassType()] = m_IfcOrganizationRelationship_Factory;
  }
  return m_IfcOrganizationRelationship_Factory;
}

IfcOrientedEdge_Factory *Model::getIfcOrientedEdge_Factory() {
  if (!m_IfcOrientedEdge_Factory) {
    m_IfcOrientedEdge_Factory = new IfcOrientedEdge_Factory;
    m_IfcOrientedEdge_Factory->setModel(this);
    m_Type2Factory[IfcOrientedEdge::getClassType()] = m_IfcOrientedEdge_Factory;
  }
  return m_IfcOrientedEdge_Factory;
}

IfcOutletType_Factory *Model::getIfcOutletType_Factory() {
  if (!m_IfcOutletType_Factory) {
    m_IfcOutletType_Factory = new IfcOutletType_Factory;
    m_IfcOutletType_Factory->setModel(this);
    m_Type2Factory[IfcOutletType::getClassType()] = m_IfcOutletType_Factory;
  }
  return m_IfcOutletType_Factory;
}

IfcOwnerHistory_Factory *Model::getIfcOwnerHistory_Factory() {
  if (!m_IfcOwnerHistory_Factory) {
    m_IfcOwnerHistory_Factory = new IfcOwnerHistory_Factory;
    m_IfcOwnerHistory_Factory->setModel(this);
    m_Type2Factory[IfcOwnerHistory::getClassType()] = m_IfcOwnerHistory_Factory;
  }
  return m_IfcOwnerHistory_Factory;
}

IfcPath_Factory *Model::getIfcPath_Factory() {
  if (!m_IfcPath_Factory) {
    m_IfcPath_Factory = new IfcPath_Factory;
    m_IfcPath_Factory->setModel(this);
    m_Type2Factory[IfcPath::getClassType()] = m_IfcPath_Factory;
  }
  return m_IfcPath_Factory;
}

IfcPerformanceHistory_Factory *Model::getIfcPerformanceHistory_Factory() {
  if (!m_IfcPerformanceHistory_Factory) {
    m_IfcPerformanceHistory_Factory = new IfcPerformanceHistory_Factory;
    m_IfcPerformanceHistory_Factory->setModel(this);
    m_Type2Factory[IfcPerformanceHistory::getClassType()] = m_IfcPerformanceHistory_Factory;
  }
  return m_IfcPerformanceHistory_Factory;
}

IfcPermeableCoveringProperties_Factory *Model::getIfcPermeableCoveringProperties_Factory() {
  if (!m_IfcPermeableCoveringProperties_Factory) {
    m_IfcPermeableCoveringProperties_Factory = new IfcPermeableCoveringProperties_Factory;
    m_IfcPermeableCoveringProperties_Factory->setModel(this);
    m_Type2Factory[IfcPermeableCoveringProperties::getClassType()] = m_IfcPermeableCoveringProperties_Factory;
  }
  return m_IfcPermeableCoveringProperties_Factory;
}

IfcPermit_Factory *Model::getIfcPermit_Factory() {
  if (!m_IfcPermit_Factory) {
    m_IfcPermit_Factory = new IfcPermit_Factory;
    m_IfcPermit_Factory->setModel(this);
    m_Type2Factory[IfcPermit::getClassType()] = m_IfcPermit_Factory;
  }
  return m_IfcPermit_Factory;
}

IfcPerson_Factory *Model::getIfcPerson_Factory() {
  if (!m_IfcPerson_Factory) {
    m_IfcPerson_Factory = new IfcPerson_Factory;
    m_IfcPerson_Factory->setModel(this);
    m_Type2Factory[IfcPerson::getClassType()] = m_IfcPerson_Factory;
  }
  return m_IfcPerson_Factory;
}

IfcPersonAndOrganization_Factory *Model::getIfcPersonAndOrganization_Factory() {
  if (!m_IfcPersonAndOrganization_Factory) {
    m_IfcPersonAndOrganization_Factory = new IfcPersonAndOrganization_Factory;
    m_IfcPersonAndOrganization_Factory->setModel(this);
    m_Type2Factory[IfcPersonAndOrganization::getClassType()] = m_IfcPersonAndOrganization_Factory;
  }
  return m_IfcPersonAndOrganization_Factory;
}

IfcPhysicalComplexQuantity_Factory *Model::getIfcPhysicalComplexQuantity_Factory() {
  if (!m_IfcPhysicalComplexQuantity_Factory) {
    m_IfcPhysicalComplexQuantity_Factory = new IfcPhysicalComplexQuantity_Factory;
    m_IfcPhysicalComplexQuantity_Factory->setModel(this);
    m_Type2Factory[IfcPhysicalComplexQuantity::getClassType()] = m_IfcPhysicalComplexQuantity_Factory;
  }
  return m_IfcPhysicalComplexQuantity_Factory;
}

IfcPile_Factory *Model::getIfcPile_Factory() {
  if (!m_IfcPile_Factory) {
    m_IfcPile_Factory = new IfcPile_Factory;
    m_IfcPile_Factory->setModel(this);
    m_Type2Factory[IfcPile::getClassType()] = m_IfcPile_Factory;
  }
  return m_IfcPile_Factory;
}

IfcPipeFittingType_Factory *Model::getIfcPipeFittingType_Factory() {
  if (!m_IfcPipeFittingType_Factory) {
    m_IfcPipeFittingType_Factory = new IfcPipeFittingType_Factory;
    m_IfcPipeFittingType_Factory->setModel(this);
    m_Type2Factory[IfcPipeFittingType::getClassType()] = m_IfcPipeFittingType_Factory;
  }
  return m_IfcPipeFittingType_Factory;
}

IfcPipeSegmentType_Factory *Model::getIfcPipeSegmentType_Factory() {
  if (!m_IfcPipeSegmentType_Factory) {
    m_IfcPipeSegmentType_Factory = new IfcPipeSegmentType_Factory;
    m_IfcPipeSegmentType_Factory->setModel(this);
    m_Type2Factory[IfcPipeSegmentType::getClassType()] = m_IfcPipeSegmentType_Factory;
  }
  return m_IfcPipeSegmentType_Factory;
}

IfcPixelTexture_Factory *Model::getIfcPixelTexture_Factory() {
  if (!m_IfcPixelTexture_Factory) {
    m_IfcPixelTexture_Factory = new IfcPixelTexture_Factory;
    m_IfcPixelTexture_Factory->setModel(this);
    m_Type2Factory[IfcPixelTexture::getClassType()] = m_IfcPixelTexture_Factory;
  }
  return m_IfcPixelTexture_Factory;
}

IfcPlanarBox_Factory *Model::getIfcPlanarBox_Factory() {
  if (!m_IfcPlanarBox_Factory) {
    m_IfcPlanarBox_Factory = new IfcPlanarBox_Factory;
    m_IfcPlanarBox_Factory->setModel(this);
    m_Type2Factory[IfcPlanarBox::getClassType()] = m_IfcPlanarBox_Factory;
  }
  return m_IfcPlanarBox_Factory;
}

IfcPlanarExtent_Factory *Model::getIfcPlanarExtent_Factory() {
  if (!m_IfcPlanarExtent_Factory) {
    m_IfcPlanarExtent_Factory = new IfcPlanarExtent_Factory;
    m_IfcPlanarExtent_Factory->setModel(this);
    m_Type2Factory[IfcPlanarExtent::getClassType()] = m_IfcPlanarExtent_Factory;
  }
  return m_IfcPlanarExtent_Factory;
}

IfcPlane_Factory *Model::getIfcPlane_Factory() {
  if (!m_IfcPlane_Factory) {
    m_IfcPlane_Factory = new IfcPlane_Factory;
    m_IfcPlane_Factory->setModel(this);
    m_Type2Factory[IfcPlane::getClassType()] = m_IfcPlane_Factory;
  }
  return m_IfcPlane_Factory;
}

IfcPlate_Factory *Model::getIfcPlate_Factory() {
  if (!m_IfcPlate_Factory) {
    m_IfcPlate_Factory = new IfcPlate_Factory;
    m_IfcPlate_Factory->setModel(this);
    m_Type2Factory[IfcPlate::getClassType()] = m_IfcPlate_Factory;
  }
  return m_IfcPlate_Factory;
}

IfcPlateType_Factory *Model::getIfcPlateType_Factory() {
  if (!m_IfcPlateType_Factory) {
    m_IfcPlateType_Factory = new IfcPlateType_Factory;
    m_IfcPlateType_Factory->setModel(this);
    m_Type2Factory[IfcPlateType::getClassType()] = m_IfcPlateType_Factory;
  }
  return m_IfcPlateType_Factory;
}

IfcPointOnCurve_Factory *Model::getIfcPointOnCurve_Factory() {
  if (!m_IfcPointOnCurve_Factory) {
    m_IfcPointOnCurve_Factory = new IfcPointOnCurve_Factory;
    m_IfcPointOnCurve_Factory->setModel(this);
    m_Type2Factory[IfcPointOnCurve::getClassType()] = m_IfcPointOnCurve_Factory;
  }
  return m_IfcPointOnCurve_Factory;
}

IfcPointOnSurface_Factory *Model::getIfcPointOnSurface_Factory() {
  if (!m_IfcPointOnSurface_Factory) {
    m_IfcPointOnSurface_Factory = new IfcPointOnSurface_Factory;
    m_IfcPointOnSurface_Factory->setModel(this);
    m_Type2Factory[IfcPointOnSurface::getClassType()] = m_IfcPointOnSurface_Factory;
  }
  return m_IfcPointOnSurface_Factory;
}

IfcPolyLoop_Factory *Model::getIfcPolyLoop_Factory() {
  if (!m_IfcPolyLoop_Factory) {
    m_IfcPolyLoop_Factory = new IfcPolyLoop_Factory;
    m_IfcPolyLoop_Factory->setModel(this);
    m_Type2Factory[IfcPolyLoop::getClassType()] = m_IfcPolyLoop_Factory;
  }
  return m_IfcPolyLoop_Factory;
}

IfcPolygonalBoundedHalfSpace_Factory *Model::getIfcPolygonalBoundedHalfSpace_Factory() {
  if (!m_IfcPolygonalBoundedHalfSpace_Factory) {
    m_IfcPolygonalBoundedHalfSpace_Factory = new IfcPolygonalBoundedHalfSpace_Factory;
    m_IfcPolygonalBoundedHalfSpace_Factory->setModel(this);
    m_Type2Factory[IfcPolygonalBoundedHalfSpace::getClassType()] = m_IfcPolygonalBoundedHalfSpace_Factory;
  }
  return m_IfcPolygonalBoundedHalfSpace_Factory;
}

IfcPolyline_Factory *Model::getIfcPolyline_Factory() {
  if (!m_IfcPolyline_Factory) {
    m_IfcPolyline_Factory = new IfcPolyline_Factory;
    m_IfcPolyline_Factory->setModel(this);
    m_Type2Factory[IfcPolyline::getClassType()] = m_IfcPolyline_Factory;
  }
  return m_IfcPolyline_Factory;
}

IfcPostalAddress_Factory *Model::getIfcPostalAddress_Factory() {
  if (!m_IfcPostalAddress_Factory) {
    m_IfcPostalAddress_Factory = new IfcPostalAddress_Factory;
    m_IfcPostalAddress_Factory->setModel(this);
    m_Type2Factory[IfcPostalAddress::getClassType()] = m_IfcPostalAddress_Factory;
  }
  return m_IfcPostalAddress_Factory;
}

IfcPreDefinedDimensionSymbol_Factory *Model::getIfcPreDefinedDimensionSymbol_Factory() {
  if (!m_IfcPreDefinedDimensionSymbol_Factory) {
    m_IfcPreDefinedDimensionSymbol_Factory = new IfcPreDefinedDimensionSymbol_Factory;
    m_IfcPreDefinedDimensionSymbol_Factory->setModel(this);
    m_Type2Factory[IfcPreDefinedDimensionSymbol::getClassType()] = m_IfcPreDefinedDimensionSymbol_Factory;
  }
  return m_IfcPreDefinedDimensionSymbol_Factory;
}

IfcPreDefinedPointMarkerSymbol_Factory *Model::getIfcPreDefinedPointMarkerSymbol_Factory() {
  if (!m_IfcPreDefinedPointMarkerSymbol_Factory) {
    m_IfcPreDefinedPointMarkerSymbol_Factory = new IfcPreDefinedPointMarkerSymbol_Factory;
    m_IfcPreDefinedPointMarkerSymbol_Factory->setModel(this);
    m_Type2Factory[IfcPreDefinedPointMarkerSymbol::getClassType()] = m_IfcPreDefinedPointMarkerSymbol_Factory;
  }
  return m_IfcPreDefinedPointMarkerSymbol_Factory;
}

IfcPreDefinedTerminatorSymbol_Factory *Model::getIfcPreDefinedTerminatorSymbol_Factory() {
  if (!m_IfcPreDefinedTerminatorSymbol_Factory) {
    m_IfcPreDefinedTerminatorSymbol_Factory = new IfcPreDefinedTerminatorSymbol_Factory;
    m_IfcPreDefinedTerminatorSymbol_Factory->setModel(this);
    m_Type2Factory[IfcPreDefinedTerminatorSymbol::getClassType()] = m_IfcPreDefinedTerminatorSymbol_Factory;
  }
  return m_IfcPreDefinedTerminatorSymbol_Factory;
}

IfcPresentationLayerAssignment_Factory *Model::getIfcPresentationLayerAssignment_Factory() {
  if (!m_IfcPresentationLayerAssignment_Factory) {
    m_IfcPresentationLayerAssignment_Factory = new IfcPresentationLayerAssignment_Factory;
    m_IfcPresentationLayerAssignment_Factory->setModel(this);
    m_Type2Factory[IfcPresentationLayerAssignment::getClassType()] = m_IfcPresentationLayerAssignment_Factory;
  }
  return m_IfcPresentationLayerAssignment_Factory;
}

IfcPresentationLayerWithStyle_Factory *Model::getIfcPresentationLayerWithStyle_Factory() {
  if (!m_IfcPresentationLayerWithStyle_Factory) {
    m_IfcPresentationLayerWithStyle_Factory = new IfcPresentationLayerWithStyle_Factory;
    m_IfcPresentationLayerWithStyle_Factory->setModel(this);
    m_Type2Factory[IfcPresentationLayerWithStyle::getClassType()] = m_IfcPresentationLayerWithStyle_Factory;
  }
  return m_IfcPresentationLayerWithStyle_Factory;
}

IfcPresentationStyleAssignment_Factory *Model::getIfcPresentationStyleAssignment_Factory() {
  if (!m_IfcPresentationStyleAssignment_Factory) {
    m_IfcPresentationStyleAssignment_Factory = new IfcPresentationStyleAssignment_Factory;
    m_IfcPresentationStyleAssignment_Factory->setModel(this);
    m_Type2Factory[IfcPresentationStyleAssignment::getClassType()] = m_IfcPresentationStyleAssignment_Factory;
  }
  return m_IfcPresentationStyleAssignment_Factory;
}

IfcProcedure_Factory *Model::getIfcProcedure_Factory() {
  if (!m_IfcProcedure_Factory) {
    m_IfcProcedure_Factory = new IfcProcedure_Factory;
    m_IfcProcedure_Factory->setModel(this);
    m_Type2Factory[IfcProcedure::getClassType()] = m_IfcProcedure_Factory;
  }
  return m_IfcProcedure_Factory;
}

IfcProductDefinitionShape_Factory *Model::getIfcProductDefinitionShape_Factory() {
  if (!m_IfcProductDefinitionShape_Factory) {
    m_IfcProductDefinitionShape_Factory = new IfcProductDefinitionShape_Factory;
    m_IfcProductDefinitionShape_Factory->setModel(this);
    m_Type2Factory[IfcProductDefinitionShape::getClassType()] = m_IfcProductDefinitionShape_Factory;
  }
  return m_IfcProductDefinitionShape_Factory;
}

IfcProductRepresentation_Factory *Model::getIfcProductRepresentation_Factory() {
  if (!m_IfcProductRepresentation_Factory) {
    m_IfcProductRepresentation_Factory = new IfcProductRepresentation_Factory;
    m_IfcProductRepresentation_Factory->setModel(this);
    m_Type2Factory[IfcProductRepresentation::getClassType()] = m_IfcProductRepresentation_Factory;
  }
  return m_IfcProductRepresentation_Factory;
}

IfcProductsOfCombustionProperties_Factory *Model::getIfcProductsOfCombustionProperties_Factory() {
  if (!m_IfcProductsOfCombustionProperties_Factory) {
    m_IfcProductsOfCombustionProperties_Factory = new IfcProductsOfCombustionProperties_Factory;
    m_IfcProductsOfCombustionProperties_Factory->setModel(this);
    m_Type2Factory[IfcProductsOfCombustionProperties::getClassType()] = m_IfcProductsOfCombustionProperties_Factory;
  }
  return m_IfcProductsOfCombustionProperties_Factory;
}

IfcProject_Factory *Model::getIfcProject_Factory() {
  if (!m_IfcProject_Factory) {
    m_IfcProject_Factory = new IfcProject_Factory;
    m_IfcProject_Factory->setModel(this);
    m_Type2Factory[IfcProject::getClassType()] = m_IfcProject_Factory;
  }
  return m_IfcProject_Factory;
}

IfcProjectOrder_Factory *Model::getIfcProjectOrder_Factory() {
  if (!m_IfcProjectOrder_Factory) {
    m_IfcProjectOrder_Factory = new IfcProjectOrder_Factory;
    m_IfcProjectOrder_Factory->setModel(this);
    m_Type2Factory[IfcProjectOrder::getClassType()] = m_IfcProjectOrder_Factory;
  }
  return m_IfcProjectOrder_Factory;
}

IfcProjectOrderRecord_Factory *Model::getIfcProjectOrderRecord_Factory() {
  if (!m_IfcProjectOrderRecord_Factory) {
    m_IfcProjectOrderRecord_Factory = new IfcProjectOrderRecord_Factory;
    m_IfcProjectOrderRecord_Factory->setModel(this);
    m_Type2Factory[IfcProjectOrderRecord::getClassType()] = m_IfcProjectOrderRecord_Factory;
  }
  return m_IfcProjectOrderRecord_Factory;
}

IfcProjectionCurve_Factory *Model::getIfcProjectionCurve_Factory() {
  if (!m_IfcProjectionCurve_Factory) {
    m_IfcProjectionCurve_Factory = new IfcProjectionCurve_Factory;
    m_IfcProjectionCurve_Factory->setModel(this);
    m_Type2Factory[IfcProjectionCurve::getClassType()] = m_IfcProjectionCurve_Factory;
  }
  return m_IfcProjectionCurve_Factory;
}

IfcProjectionElement_Factory *Model::getIfcProjectionElement_Factory() {
  if (!m_IfcProjectionElement_Factory) {
    m_IfcProjectionElement_Factory = new IfcProjectionElement_Factory;
    m_IfcProjectionElement_Factory->setModel(this);
    m_Type2Factory[IfcProjectionElement::getClassType()] = m_IfcProjectionElement_Factory;
  }
  return m_IfcProjectionElement_Factory;
}

IfcPropertyBoundedValue_Factory *Model::getIfcPropertyBoundedValue_Factory() {
  if (!m_IfcPropertyBoundedValue_Factory) {
    m_IfcPropertyBoundedValue_Factory = new IfcPropertyBoundedValue_Factory;
    m_IfcPropertyBoundedValue_Factory->setModel(this);
    m_Type2Factory[IfcPropertyBoundedValue::getClassType()] = m_IfcPropertyBoundedValue_Factory;
  }
  return m_IfcPropertyBoundedValue_Factory;
}

IfcPropertyConstraintRelationship_Factory *Model::getIfcPropertyConstraintRelationship_Factory() {
  if (!m_IfcPropertyConstraintRelationship_Factory) {
    m_IfcPropertyConstraintRelationship_Factory = new IfcPropertyConstraintRelationship_Factory;
    m_IfcPropertyConstraintRelationship_Factory->setModel(this);
    m_Type2Factory[IfcPropertyConstraintRelationship::getClassType()] = m_IfcPropertyConstraintRelationship_Factory;
  }
  return m_IfcPropertyConstraintRelationship_Factory;
}

IfcPropertyDependencyRelationship_Factory *Model::getIfcPropertyDependencyRelationship_Factory() {
  if (!m_IfcPropertyDependencyRelationship_Factory) {
    m_IfcPropertyDependencyRelationship_Factory = new IfcPropertyDependencyRelationship_Factory;
    m_IfcPropertyDependencyRelationship_Factory->setModel(this);
    m_Type2Factory[IfcPropertyDependencyRelationship::getClassType()] = m_IfcPropertyDependencyRelationship_Factory;
  }
  return m_IfcPropertyDependencyRelationship_Factory;
}

IfcPropertyEnumeratedValue_Factory *Model::getIfcPropertyEnumeratedValue_Factory() {
  if (!m_IfcPropertyEnumeratedValue_Factory) {
    m_IfcPropertyEnumeratedValue_Factory = new IfcPropertyEnumeratedValue_Factory;
    m_IfcPropertyEnumeratedValue_Factory->setModel(this);
    m_Type2Factory[IfcPropertyEnumeratedValue::getClassType()] = m_IfcPropertyEnumeratedValue_Factory;
  }
  return m_IfcPropertyEnumeratedValue_Factory;
}

IfcPropertyEnumeration_Factory *Model::getIfcPropertyEnumeration_Factory() {
  if (!m_IfcPropertyEnumeration_Factory) {
    m_IfcPropertyEnumeration_Factory = new IfcPropertyEnumeration_Factory;
    m_IfcPropertyEnumeration_Factory->setModel(this);
    m_Type2Factory[IfcPropertyEnumeration::getClassType()] = m_IfcPropertyEnumeration_Factory;
  }
  return m_IfcPropertyEnumeration_Factory;
}

IfcPropertyListValue_Factory *Model::getIfcPropertyListValue_Factory() {
  if (!m_IfcPropertyListValue_Factory) {
    m_IfcPropertyListValue_Factory = new IfcPropertyListValue_Factory;
    m_IfcPropertyListValue_Factory->setModel(this);
    m_Type2Factory[IfcPropertyListValue::getClassType()] = m_IfcPropertyListValue_Factory;
  }
  return m_IfcPropertyListValue_Factory;
}

IfcPropertyReferenceValue_Factory *Model::getIfcPropertyReferenceValue_Factory() {
  if (!m_IfcPropertyReferenceValue_Factory) {
    m_IfcPropertyReferenceValue_Factory = new IfcPropertyReferenceValue_Factory;
    m_IfcPropertyReferenceValue_Factory->setModel(this);
    m_Type2Factory[IfcPropertyReferenceValue::getClassType()] = m_IfcPropertyReferenceValue_Factory;
  }
  return m_IfcPropertyReferenceValue_Factory;
}

IfcPropertySet_Factory *Model::getIfcPropertySet_Factory() {
  if (!m_IfcPropertySet_Factory) {
    m_IfcPropertySet_Factory = new IfcPropertySet_Factory;
    m_IfcPropertySet_Factory->setModel(this);
    m_Type2Factory[IfcPropertySet::getClassType()] = m_IfcPropertySet_Factory;
  }
  return m_IfcPropertySet_Factory;
}

IfcPropertySingleValue_Factory *Model::getIfcPropertySingleValue_Factory() {
  if (!m_IfcPropertySingleValue_Factory) {
    m_IfcPropertySingleValue_Factory = new IfcPropertySingleValue_Factory;
    m_IfcPropertySingleValue_Factory->setModel(this);
    m_Type2Factory[IfcPropertySingleValue::getClassType()] = m_IfcPropertySingleValue_Factory;
  }
  return m_IfcPropertySingleValue_Factory;
}

IfcPropertyTableValue_Factory *Model::getIfcPropertyTableValue_Factory() {
  if (!m_IfcPropertyTableValue_Factory) {
    m_IfcPropertyTableValue_Factory = new IfcPropertyTableValue_Factory;
    m_IfcPropertyTableValue_Factory->setModel(this);
    m_Type2Factory[IfcPropertyTableValue::getClassType()] = m_IfcPropertyTableValue_Factory;
  }
  return m_IfcPropertyTableValue_Factory;
}

IfcProtectiveDeviceType_Factory *Model::getIfcProtectiveDeviceType_Factory() {
  if (!m_IfcProtectiveDeviceType_Factory) {
    m_IfcProtectiveDeviceType_Factory = new IfcProtectiveDeviceType_Factory;
    m_IfcProtectiveDeviceType_Factory->setModel(this);
    m_Type2Factory[IfcProtectiveDeviceType::getClassType()] = m_IfcProtectiveDeviceType_Factory;
  }
  return m_IfcProtectiveDeviceType_Factory;
}

IfcProxy_Factory *Model::getIfcProxy_Factory() {
  if (!m_IfcProxy_Factory) {
    m_IfcProxy_Factory = new IfcProxy_Factory;
    m_IfcProxy_Factory->setModel(this);
    m_Type2Factory[IfcProxy::getClassType()] = m_IfcProxy_Factory;
  }
  return m_IfcProxy_Factory;
}

IfcPumpType_Factory *Model::getIfcPumpType_Factory() {
  if (!m_IfcPumpType_Factory) {
    m_IfcPumpType_Factory = new IfcPumpType_Factory;
    m_IfcPumpType_Factory->setModel(this);
    m_Type2Factory[IfcPumpType::getClassType()] = m_IfcPumpType_Factory;
  }
  return m_IfcPumpType_Factory;
}

IfcQuantityArea_Factory *Model::getIfcQuantityArea_Factory() {
  if (!m_IfcQuantityArea_Factory) {
    m_IfcQuantityArea_Factory = new IfcQuantityArea_Factory;
    m_IfcQuantityArea_Factory->setModel(this);
    m_Type2Factory[IfcQuantityArea::getClassType()] = m_IfcQuantityArea_Factory;
  }
  return m_IfcQuantityArea_Factory;
}

IfcQuantityCount_Factory *Model::getIfcQuantityCount_Factory() {
  if (!m_IfcQuantityCount_Factory) {
    m_IfcQuantityCount_Factory = new IfcQuantityCount_Factory;
    m_IfcQuantityCount_Factory->setModel(this);
    m_Type2Factory[IfcQuantityCount::getClassType()] = m_IfcQuantityCount_Factory;
  }
  return m_IfcQuantityCount_Factory;
}

IfcQuantityLength_Factory *Model::getIfcQuantityLength_Factory() {
  if (!m_IfcQuantityLength_Factory) {
    m_IfcQuantityLength_Factory = new IfcQuantityLength_Factory;
    m_IfcQuantityLength_Factory->setModel(this);
    m_Type2Factory[IfcQuantityLength::getClassType()] = m_IfcQuantityLength_Factory;
  }
  return m_IfcQuantityLength_Factory;
}

IfcQuantityTime_Factory *Model::getIfcQuantityTime_Factory() {
  if (!m_IfcQuantityTime_Factory) {
    m_IfcQuantityTime_Factory = new IfcQuantityTime_Factory;
    m_IfcQuantityTime_Factory->setModel(this);
    m_Type2Factory[IfcQuantityTime::getClassType()] = m_IfcQuantityTime_Factory;
  }
  return m_IfcQuantityTime_Factory;
}

IfcQuantityVolume_Factory *Model::getIfcQuantityVolume_Factory() {
  if (!m_IfcQuantityVolume_Factory) {
    m_IfcQuantityVolume_Factory = new IfcQuantityVolume_Factory;
    m_IfcQuantityVolume_Factory->setModel(this);
    m_Type2Factory[IfcQuantityVolume::getClassType()] = m_IfcQuantityVolume_Factory;
  }
  return m_IfcQuantityVolume_Factory;
}

IfcQuantityWeight_Factory *Model::getIfcQuantityWeight_Factory() {
  if (!m_IfcQuantityWeight_Factory) {
    m_IfcQuantityWeight_Factory = new IfcQuantityWeight_Factory;
    m_IfcQuantityWeight_Factory->setModel(this);
    m_Type2Factory[IfcQuantityWeight::getClassType()] = m_IfcQuantityWeight_Factory;
  }
  return m_IfcQuantityWeight_Factory;
}

IfcRadiusDimension_Factory *Model::getIfcRadiusDimension_Factory() {
  if (!m_IfcRadiusDimension_Factory) {
    m_IfcRadiusDimension_Factory = new IfcRadiusDimension_Factory;
    m_IfcRadiusDimension_Factory->setModel(this);
    m_Type2Factory[IfcRadiusDimension::getClassType()] = m_IfcRadiusDimension_Factory;
  }
  return m_IfcRadiusDimension_Factory;
}

IfcRailing_Factory *Model::getIfcRailing_Factory() {
  if (!m_IfcRailing_Factory) {
    m_IfcRailing_Factory = new IfcRailing_Factory;
    m_IfcRailing_Factory->setModel(this);
    m_Type2Factory[IfcRailing::getClassType()] = m_IfcRailing_Factory;
  }
  return m_IfcRailing_Factory;
}

IfcRailingType_Factory *Model::getIfcRailingType_Factory() {
  if (!m_IfcRailingType_Factory) {
    m_IfcRailingType_Factory = new IfcRailingType_Factory;
    m_IfcRailingType_Factory->setModel(this);
    m_Type2Factory[IfcRailingType::getClassType()] = m_IfcRailingType_Factory;
  }
  return m_IfcRailingType_Factory;
}

IfcRamp_Factory *Model::getIfcRamp_Factory() {
  if (!m_IfcRamp_Factory) {
    m_IfcRamp_Factory = new IfcRamp_Factory;
    m_IfcRamp_Factory->setModel(this);
    m_Type2Factory[IfcRamp::getClassType()] = m_IfcRamp_Factory;
  }
  return m_IfcRamp_Factory;
}

IfcRampFlight_Factory *Model::getIfcRampFlight_Factory() {
  if (!m_IfcRampFlight_Factory) {
    m_IfcRampFlight_Factory = new IfcRampFlight_Factory;
    m_IfcRampFlight_Factory->setModel(this);
    m_Type2Factory[IfcRampFlight::getClassType()] = m_IfcRampFlight_Factory;
  }
  return m_IfcRampFlight_Factory;
}

IfcRampFlightType_Factory *Model::getIfcRampFlightType_Factory() {
  if (!m_IfcRampFlightType_Factory) {
    m_IfcRampFlightType_Factory = new IfcRampFlightType_Factory;
    m_IfcRampFlightType_Factory->setModel(this);
    m_Type2Factory[IfcRampFlightType::getClassType()] = m_IfcRampFlightType_Factory;
  }
  return m_IfcRampFlightType_Factory;
}

IfcRationalBezierCurve_Factory *Model::getIfcRationalBezierCurve_Factory() {
  if (!m_IfcRationalBezierCurve_Factory) {
    m_IfcRationalBezierCurve_Factory = new IfcRationalBezierCurve_Factory;
    m_IfcRationalBezierCurve_Factory->setModel(this);
    m_Type2Factory[IfcRationalBezierCurve::getClassType()] = m_IfcRationalBezierCurve_Factory;
  }
  return m_IfcRationalBezierCurve_Factory;
}

IfcRectangleHollowProfileDef_Factory *Model::getIfcRectangleHollowProfileDef_Factory() {
  if (!m_IfcRectangleHollowProfileDef_Factory) {
    m_IfcRectangleHollowProfileDef_Factory = new IfcRectangleHollowProfileDef_Factory;
    m_IfcRectangleHollowProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcRectangleHollowProfileDef::getClassType()] = m_IfcRectangleHollowProfileDef_Factory;
  }
  return m_IfcRectangleHollowProfileDef_Factory;
}

IfcRectangleProfileDef_Factory *Model::getIfcRectangleProfileDef_Factory() {
  if (!m_IfcRectangleProfileDef_Factory) {
    m_IfcRectangleProfileDef_Factory = new IfcRectangleProfileDef_Factory;
    m_IfcRectangleProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcRectangleProfileDef::getClassType()] = m_IfcRectangleProfileDef_Factory;
  }
  return m_IfcRectangleProfileDef_Factory;
}

IfcRectangularPyramid_Factory *Model::getIfcRectangularPyramid_Factory() {
  if (!m_IfcRectangularPyramid_Factory) {
    m_IfcRectangularPyramid_Factory = new IfcRectangularPyramid_Factory;
    m_IfcRectangularPyramid_Factory->setModel(this);
    m_Type2Factory[IfcRectangularPyramid::getClassType()] = m_IfcRectangularPyramid_Factory;
  }
  return m_IfcRectangularPyramid_Factory;
}

IfcRectangularTrimmedSurface_Factory *Model::getIfcRectangularTrimmedSurface_Factory() {
  if (!m_IfcRectangularTrimmedSurface_Factory) {
    m_IfcRectangularTrimmedSurface_Factory = new IfcRectangularTrimmedSurface_Factory;
    m_IfcRectangularTrimmedSurface_Factory->setModel(this);
    m_Type2Factory[IfcRectangularTrimmedSurface::getClassType()] = m_IfcRectangularTrimmedSurface_Factory;
  }
  return m_IfcRectangularTrimmedSurface_Factory;
}

IfcReferencesValueDocument_Factory *Model::getIfcReferencesValueDocument_Factory() {
  if (!m_IfcReferencesValueDocument_Factory) {
    m_IfcReferencesValueDocument_Factory = new IfcReferencesValueDocument_Factory;
    m_IfcReferencesValueDocument_Factory->setModel(this);
    m_Type2Factory[IfcReferencesValueDocument::getClassType()] = m_IfcReferencesValueDocument_Factory;
  }
  return m_IfcReferencesValueDocument_Factory;
}

IfcRegularTimeSeries_Factory *Model::getIfcRegularTimeSeries_Factory() {
  if (!m_IfcRegularTimeSeries_Factory) {
    m_IfcRegularTimeSeries_Factory = new IfcRegularTimeSeries_Factory;
    m_IfcRegularTimeSeries_Factory->setModel(this);
    m_Type2Factory[IfcRegularTimeSeries::getClassType()] = m_IfcRegularTimeSeries_Factory;
  }
  return m_IfcRegularTimeSeries_Factory;
}

IfcReinforcementBarProperties_Factory *Model::getIfcReinforcementBarProperties_Factory() {
  if (!m_IfcReinforcementBarProperties_Factory) {
    m_IfcReinforcementBarProperties_Factory = new IfcReinforcementBarProperties_Factory;
    m_IfcReinforcementBarProperties_Factory->setModel(this);
    m_Type2Factory[IfcReinforcementBarProperties::getClassType()] = m_IfcReinforcementBarProperties_Factory;
  }
  return m_IfcReinforcementBarProperties_Factory;
}

IfcReinforcementDefinitionProperties_Factory *Model::getIfcReinforcementDefinitionProperties_Factory() {
  if (!m_IfcReinforcementDefinitionProperties_Factory) {
    m_IfcReinforcementDefinitionProperties_Factory = new IfcReinforcementDefinitionProperties_Factory;
    m_IfcReinforcementDefinitionProperties_Factory->setModel(this);
    m_Type2Factory[IfcReinforcementDefinitionProperties::getClassType()] = m_IfcReinforcementDefinitionProperties_Factory;
  }
  return m_IfcReinforcementDefinitionProperties_Factory;
}

IfcReinforcingBar_Factory *Model::getIfcReinforcingBar_Factory() {
  if (!m_IfcReinforcingBar_Factory) {
    m_IfcReinforcingBar_Factory = new IfcReinforcingBar_Factory;
    m_IfcReinforcingBar_Factory->setModel(this);
    m_Type2Factory[IfcReinforcingBar::getClassType()] = m_IfcReinforcingBar_Factory;
  }
  return m_IfcReinforcingBar_Factory;
}

IfcReinforcingMesh_Factory *Model::getIfcReinforcingMesh_Factory() {
  if (!m_IfcReinforcingMesh_Factory) {
    m_IfcReinforcingMesh_Factory = new IfcReinforcingMesh_Factory;
    m_IfcReinforcingMesh_Factory->setModel(this);
    m_Type2Factory[IfcReinforcingMesh::getClassType()] = m_IfcReinforcingMesh_Factory;
  }
  return m_IfcReinforcingMesh_Factory;
}

IfcRelAggregates_Factory *Model::getIfcRelAggregates_Factory() {
  if (!m_IfcRelAggregates_Factory) {
    m_IfcRelAggregates_Factory = new IfcRelAggregates_Factory;
    m_IfcRelAggregates_Factory->setModel(this);
    m_Type2Factory[IfcRelAggregates::getClassType()] = m_IfcRelAggregates_Factory;
  }
  return m_IfcRelAggregates_Factory;
}

IfcRelAssignsTasks_Factory *Model::getIfcRelAssignsTasks_Factory() {
  if (!m_IfcRelAssignsTasks_Factory) {
    m_IfcRelAssignsTasks_Factory = new IfcRelAssignsTasks_Factory;
    m_IfcRelAssignsTasks_Factory->setModel(this);
    m_Type2Factory[IfcRelAssignsTasks::getClassType()] = m_IfcRelAssignsTasks_Factory;
  }
  return m_IfcRelAssignsTasks_Factory;
}

IfcRelAssignsToActor_Factory *Model::getIfcRelAssignsToActor_Factory() {
  if (!m_IfcRelAssignsToActor_Factory) {
    m_IfcRelAssignsToActor_Factory = new IfcRelAssignsToActor_Factory;
    m_IfcRelAssignsToActor_Factory->setModel(this);
    m_Type2Factory[IfcRelAssignsToActor::getClassType()] = m_IfcRelAssignsToActor_Factory;
  }
  return m_IfcRelAssignsToActor_Factory;
}

IfcRelAssignsToControl_Factory *Model::getIfcRelAssignsToControl_Factory() {
  if (!m_IfcRelAssignsToControl_Factory) {
    m_IfcRelAssignsToControl_Factory = new IfcRelAssignsToControl_Factory;
    m_IfcRelAssignsToControl_Factory->setModel(this);
    m_Type2Factory[IfcRelAssignsToControl::getClassType()] = m_IfcRelAssignsToControl_Factory;
  }
  return m_IfcRelAssignsToControl_Factory;
}

IfcRelAssignsToGroup_Factory *Model::getIfcRelAssignsToGroup_Factory() {
  if (!m_IfcRelAssignsToGroup_Factory) {
    m_IfcRelAssignsToGroup_Factory = new IfcRelAssignsToGroup_Factory;
    m_IfcRelAssignsToGroup_Factory->setModel(this);
    m_Type2Factory[IfcRelAssignsToGroup::getClassType()] = m_IfcRelAssignsToGroup_Factory;
  }
  return m_IfcRelAssignsToGroup_Factory;
}

IfcRelAssignsToProcess_Factory *Model::getIfcRelAssignsToProcess_Factory() {
  if (!m_IfcRelAssignsToProcess_Factory) {
    m_IfcRelAssignsToProcess_Factory = new IfcRelAssignsToProcess_Factory;
    m_IfcRelAssignsToProcess_Factory->setModel(this);
    m_Type2Factory[IfcRelAssignsToProcess::getClassType()] = m_IfcRelAssignsToProcess_Factory;
  }
  return m_IfcRelAssignsToProcess_Factory;
}

IfcRelAssignsToProduct_Factory *Model::getIfcRelAssignsToProduct_Factory() {
  if (!m_IfcRelAssignsToProduct_Factory) {
    m_IfcRelAssignsToProduct_Factory = new IfcRelAssignsToProduct_Factory;
    m_IfcRelAssignsToProduct_Factory->setModel(this);
    m_Type2Factory[IfcRelAssignsToProduct::getClassType()] = m_IfcRelAssignsToProduct_Factory;
  }
  return m_IfcRelAssignsToProduct_Factory;
}

IfcRelAssignsToProjectOrder_Factory *Model::getIfcRelAssignsToProjectOrder_Factory() {
  if (!m_IfcRelAssignsToProjectOrder_Factory) {
    m_IfcRelAssignsToProjectOrder_Factory = new IfcRelAssignsToProjectOrder_Factory;
    m_IfcRelAssignsToProjectOrder_Factory->setModel(this);
    m_Type2Factory[IfcRelAssignsToProjectOrder::getClassType()] = m_IfcRelAssignsToProjectOrder_Factory;
  }
  return m_IfcRelAssignsToProjectOrder_Factory;
}

IfcRelAssignsToResource_Factory *Model::getIfcRelAssignsToResource_Factory() {
  if (!m_IfcRelAssignsToResource_Factory) {
    m_IfcRelAssignsToResource_Factory = new IfcRelAssignsToResource_Factory;
    m_IfcRelAssignsToResource_Factory->setModel(this);
    m_Type2Factory[IfcRelAssignsToResource::getClassType()] = m_IfcRelAssignsToResource_Factory;
  }
  return m_IfcRelAssignsToResource_Factory;
}

IfcRelAssociates_Factory *Model::getIfcRelAssociates_Factory() {
  if (!m_IfcRelAssociates_Factory) {
    m_IfcRelAssociates_Factory = new IfcRelAssociates_Factory;
    m_IfcRelAssociates_Factory->setModel(this);
    m_Type2Factory[IfcRelAssociates::getClassType()] = m_IfcRelAssociates_Factory;
  }
  return m_IfcRelAssociates_Factory;
}

IfcRelAssociatesAppliedValue_Factory *Model::getIfcRelAssociatesAppliedValue_Factory() {
  if (!m_IfcRelAssociatesAppliedValue_Factory) {
    m_IfcRelAssociatesAppliedValue_Factory = new IfcRelAssociatesAppliedValue_Factory;
    m_IfcRelAssociatesAppliedValue_Factory->setModel(this);
    m_Type2Factory[IfcRelAssociatesAppliedValue::getClassType()] = m_IfcRelAssociatesAppliedValue_Factory;
  }
  return m_IfcRelAssociatesAppliedValue_Factory;
}

IfcRelAssociatesApproval_Factory *Model::getIfcRelAssociatesApproval_Factory() {
  if (!m_IfcRelAssociatesApproval_Factory) {
    m_IfcRelAssociatesApproval_Factory = new IfcRelAssociatesApproval_Factory;
    m_IfcRelAssociatesApproval_Factory->setModel(this);
    m_Type2Factory[IfcRelAssociatesApproval::getClassType()] = m_IfcRelAssociatesApproval_Factory;
  }
  return m_IfcRelAssociatesApproval_Factory;
}

IfcRelAssociatesClassification_Factory *Model::getIfcRelAssociatesClassification_Factory() {
  if (!m_IfcRelAssociatesClassification_Factory) {
    m_IfcRelAssociatesClassification_Factory = new IfcRelAssociatesClassification_Factory;
    m_IfcRelAssociatesClassification_Factory->setModel(this);
    m_Type2Factory[IfcRelAssociatesClassification::getClassType()] = m_IfcRelAssociatesClassification_Factory;
  }
  return m_IfcRelAssociatesClassification_Factory;
}

IfcRelAssociatesConstraint_Factory *Model::getIfcRelAssociatesConstraint_Factory() {
  if (!m_IfcRelAssociatesConstraint_Factory) {
    m_IfcRelAssociatesConstraint_Factory = new IfcRelAssociatesConstraint_Factory;
    m_IfcRelAssociatesConstraint_Factory->setModel(this);
    m_Type2Factory[IfcRelAssociatesConstraint::getClassType()] = m_IfcRelAssociatesConstraint_Factory;
  }
  return m_IfcRelAssociatesConstraint_Factory;
}

IfcRelAssociatesDocument_Factory *Model::getIfcRelAssociatesDocument_Factory() {
  if (!m_IfcRelAssociatesDocument_Factory) {
    m_IfcRelAssociatesDocument_Factory = new IfcRelAssociatesDocument_Factory;
    m_IfcRelAssociatesDocument_Factory->setModel(this);
    m_Type2Factory[IfcRelAssociatesDocument::getClassType()] = m_IfcRelAssociatesDocument_Factory;
  }
  return m_IfcRelAssociatesDocument_Factory;
}

IfcRelAssociatesLibrary_Factory *Model::getIfcRelAssociatesLibrary_Factory() {
  if (!m_IfcRelAssociatesLibrary_Factory) {
    m_IfcRelAssociatesLibrary_Factory = new IfcRelAssociatesLibrary_Factory;
    m_IfcRelAssociatesLibrary_Factory->setModel(this);
    m_Type2Factory[IfcRelAssociatesLibrary::getClassType()] = m_IfcRelAssociatesLibrary_Factory;
  }
  return m_IfcRelAssociatesLibrary_Factory;
}

IfcRelAssociatesMaterial_Factory *Model::getIfcRelAssociatesMaterial_Factory() {
  if (!m_IfcRelAssociatesMaterial_Factory) {
    m_IfcRelAssociatesMaterial_Factory = new IfcRelAssociatesMaterial_Factory;
    m_IfcRelAssociatesMaterial_Factory->setModel(this);
    m_Type2Factory[IfcRelAssociatesMaterial::getClassType()] = m_IfcRelAssociatesMaterial_Factory;
  }
  return m_IfcRelAssociatesMaterial_Factory;
}

IfcRelAssociatesProfileProperties_Factory *Model::getIfcRelAssociatesProfileProperties_Factory() {
  if (!m_IfcRelAssociatesProfileProperties_Factory) {
    m_IfcRelAssociatesProfileProperties_Factory = new IfcRelAssociatesProfileProperties_Factory;
    m_IfcRelAssociatesProfileProperties_Factory->setModel(this);
    m_Type2Factory[IfcRelAssociatesProfileProperties::getClassType()] = m_IfcRelAssociatesProfileProperties_Factory;
  }
  return m_IfcRelAssociatesProfileProperties_Factory;
}

IfcRelConnectsElements_Factory *Model::getIfcRelConnectsElements_Factory() {
  if (!m_IfcRelConnectsElements_Factory) {
    m_IfcRelConnectsElements_Factory = new IfcRelConnectsElements_Factory;
    m_IfcRelConnectsElements_Factory->setModel(this);
    m_Type2Factory[IfcRelConnectsElements::getClassType()] = m_IfcRelConnectsElements_Factory;
  }
  return m_IfcRelConnectsElements_Factory;
}

IfcRelConnectsPathElements_Factory *Model::getIfcRelConnectsPathElements_Factory() {
  if (!m_IfcRelConnectsPathElements_Factory) {
    m_IfcRelConnectsPathElements_Factory = new IfcRelConnectsPathElements_Factory;
    m_IfcRelConnectsPathElements_Factory->setModel(this);
    m_Type2Factory[IfcRelConnectsPathElements::getClassType()] = m_IfcRelConnectsPathElements_Factory;
  }
  return m_IfcRelConnectsPathElements_Factory;
}

IfcRelConnectsPortToElement_Factory *Model::getIfcRelConnectsPortToElement_Factory() {
  if (!m_IfcRelConnectsPortToElement_Factory) {
    m_IfcRelConnectsPortToElement_Factory = new IfcRelConnectsPortToElement_Factory;
    m_IfcRelConnectsPortToElement_Factory->setModel(this);
    m_Type2Factory[IfcRelConnectsPortToElement::getClassType()] = m_IfcRelConnectsPortToElement_Factory;
  }
  return m_IfcRelConnectsPortToElement_Factory;
}

IfcRelConnectsPorts_Factory *Model::getIfcRelConnectsPorts_Factory() {
  if (!m_IfcRelConnectsPorts_Factory) {
    m_IfcRelConnectsPorts_Factory = new IfcRelConnectsPorts_Factory;
    m_IfcRelConnectsPorts_Factory->setModel(this);
    m_Type2Factory[IfcRelConnectsPorts::getClassType()] = m_IfcRelConnectsPorts_Factory;
  }
  return m_IfcRelConnectsPorts_Factory;
}

IfcRelConnectsStructuralActivity_Factory *Model::getIfcRelConnectsStructuralActivity_Factory() {
  if (!m_IfcRelConnectsStructuralActivity_Factory) {
    m_IfcRelConnectsStructuralActivity_Factory = new IfcRelConnectsStructuralActivity_Factory;
    m_IfcRelConnectsStructuralActivity_Factory->setModel(this);
    m_Type2Factory[IfcRelConnectsStructuralActivity::getClassType()] = m_IfcRelConnectsStructuralActivity_Factory;
  }
  return m_IfcRelConnectsStructuralActivity_Factory;
}

IfcRelConnectsStructuralElement_Factory *Model::getIfcRelConnectsStructuralElement_Factory() {
  if (!m_IfcRelConnectsStructuralElement_Factory) {
    m_IfcRelConnectsStructuralElement_Factory = new IfcRelConnectsStructuralElement_Factory;
    m_IfcRelConnectsStructuralElement_Factory->setModel(this);
    m_Type2Factory[IfcRelConnectsStructuralElement::getClassType()] = m_IfcRelConnectsStructuralElement_Factory;
  }
  return m_IfcRelConnectsStructuralElement_Factory;
}

IfcRelConnectsStructuralMember_Factory *Model::getIfcRelConnectsStructuralMember_Factory() {
  if (!m_IfcRelConnectsStructuralMember_Factory) {
    m_IfcRelConnectsStructuralMember_Factory = new IfcRelConnectsStructuralMember_Factory;
    m_IfcRelConnectsStructuralMember_Factory->setModel(this);
    m_Type2Factory[IfcRelConnectsStructuralMember::getClassType()] = m_IfcRelConnectsStructuralMember_Factory;
  }
  return m_IfcRelConnectsStructuralMember_Factory;
}

IfcRelConnectsWithEccentricity_Factory *Model::getIfcRelConnectsWithEccentricity_Factory() {
  if (!m_IfcRelConnectsWithEccentricity_Factory) {
    m_IfcRelConnectsWithEccentricity_Factory = new IfcRelConnectsWithEccentricity_Factory;
    m_IfcRelConnectsWithEccentricity_Factory->setModel(this);
    m_Type2Factory[IfcRelConnectsWithEccentricity::getClassType()] = m_IfcRelConnectsWithEccentricity_Factory;
  }
  return m_IfcRelConnectsWithEccentricity_Factory;
}

IfcRelConnectsWithRealizingElements_Factory *Model::getIfcRelConnectsWithRealizingElements_Factory() {
  if (!m_IfcRelConnectsWithRealizingElements_Factory) {
    m_IfcRelConnectsWithRealizingElements_Factory = new IfcRelConnectsWithRealizingElements_Factory;
    m_IfcRelConnectsWithRealizingElements_Factory->setModel(this);
    m_Type2Factory[IfcRelConnectsWithRealizingElements::getClassType()] = m_IfcRelConnectsWithRealizingElements_Factory;
  }
  return m_IfcRelConnectsWithRealizingElements_Factory;
}

IfcRelContainedInSpatialStructure_Factory *Model::getIfcRelContainedInSpatialStructure_Factory() {
  if (!m_IfcRelContainedInSpatialStructure_Factory) {
    m_IfcRelContainedInSpatialStructure_Factory = new IfcRelContainedInSpatialStructure_Factory;
    m_IfcRelContainedInSpatialStructure_Factory->setModel(this);
    m_Type2Factory[IfcRelContainedInSpatialStructure::getClassType()] = m_IfcRelContainedInSpatialStructure_Factory;
  }
  return m_IfcRelContainedInSpatialStructure_Factory;
}

IfcRelCoversBldgElements_Factory *Model::getIfcRelCoversBldgElements_Factory() {
  if (!m_IfcRelCoversBldgElements_Factory) {
    m_IfcRelCoversBldgElements_Factory = new IfcRelCoversBldgElements_Factory;
    m_IfcRelCoversBldgElements_Factory->setModel(this);
    m_Type2Factory[IfcRelCoversBldgElements::getClassType()] = m_IfcRelCoversBldgElements_Factory;
  }
  return m_IfcRelCoversBldgElements_Factory;
}

IfcRelCoversSpaces_Factory *Model::getIfcRelCoversSpaces_Factory() {
  if (!m_IfcRelCoversSpaces_Factory) {
    m_IfcRelCoversSpaces_Factory = new IfcRelCoversSpaces_Factory;
    m_IfcRelCoversSpaces_Factory->setModel(this);
    m_Type2Factory[IfcRelCoversSpaces::getClassType()] = m_IfcRelCoversSpaces_Factory;
  }
  return m_IfcRelCoversSpaces_Factory;
}

IfcRelDefinesByProperties_Factory *Model::getIfcRelDefinesByProperties_Factory() {
  if (!m_IfcRelDefinesByProperties_Factory) {
    m_IfcRelDefinesByProperties_Factory = new IfcRelDefinesByProperties_Factory;
    m_IfcRelDefinesByProperties_Factory->setModel(this);
    m_Type2Factory[IfcRelDefinesByProperties::getClassType()] = m_IfcRelDefinesByProperties_Factory;
  }
  return m_IfcRelDefinesByProperties_Factory;
}

IfcRelDefinesByType_Factory *Model::getIfcRelDefinesByType_Factory() {
  if (!m_IfcRelDefinesByType_Factory) {
    m_IfcRelDefinesByType_Factory = new IfcRelDefinesByType_Factory;
    m_IfcRelDefinesByType_Factory->setModel(this);
    m_Type2Factory[IfcRelDefinesByType::getClassType()] = m_IfcRelDefinesByType_Factory;
  }
  return m_IfcRelDefinesByType_Factory;
}

IfcRelFillsElement_Factory *Model::getIfcRelFillsElement_Factory() {
  if (!m_IfcRelFillsElement_Factory) {
    m_IfcRelFillsElement_Factory = new IfcRelFillsElement_Factory;
    m_IfcRelFillsElement_Factory->setModel(this);
    m_Type2Factory[IfcRelFillsElement::getClassType()] = m_IfcRelFillsElement_Factory;
  }
  return m_IfcRelFillsElement_Factory;
}

IfcRelFlowControlElements_Factory *Model::getIfcRelFlowControlElements_Factory() {
  if (!m_IfcRelFlowControlElements_Factory) {
    m_IfcRelFlowControlElements_Factory = new IfcRelFlowControlElements_Factory;
    m_IfcRelFlowControlElements_Factory->setModel(this);
    m_Type2Factory[IfcRelFlowControlElements::getClassType()] = m_IfcRelFlowControlElements_Factory;
  }
  return m_IfcRelFlowControlElements_Factory;
}

IfcRelInteractionRequirements_Factory *Model::getIfcRelInteractionRequirements_Factory() {
  if (!m_IfcRelInteractionRequirements_Factory) {
    m_IfcRelInteractionRequirements_Factory = new IfcRelInteractionRequirements_Factory;
    m_IfcRelInteractionRequirements_Factory->setModel(this);
    m_Type2Factory[IfcRelInteractionRequirements::getClassType()] = m_IfcRelInteractionRequirements_Factory;
  }
  return m_IfcRelInteractionRequirements_Factory;
}

IfcRelNests_Factory *Model::getIfcRelNests_Factory() {
  if (!m_IfcRelNests_Factory) {
    m_IfcRelNests_Factory = new IfcRelNests_Factory;
    m_IfcRelNests_Factory->setModel(this);
    m_Type2Factory[IfcRelNests::getClassType()] = m_IfcRelNests_Factory;
  }
  return m_IfcRelNests_Factory;
}

IfcRelOccupiesSpaces_Factory *Model::getIfcRelOccupiesSpaces_Factory() {
  if (!m_IfcRelOccupiesSpaces_Factory) {
    m_IfcRelOccupiesSpaces_Factory = new IfcRelOccupiesSpaces_Factory;
    m_IfcRelOccupiesSpaces_Factory->setModel(this);
    m_Type2Factory[IfcRelOccupiesSpaces::getClassType()] = m_IfcRelOccupiesSpaces_Factory;
  }
  return m_IfcRelOccupiesSpaces_Factory;
}

IfcRelOverridesProperties_Factory *Model::getIfcRelOverridesProperties_Factory() {
  if (!m_IfcRelOverridesProperties_Factory) {
    m_IfcRelOverridesProperties_Factory = new IfcRelOverridesProperties_Factory;
    m_IfcRelOverridesProperties_Factory->setModel(this);
    m_Type2Factory[IfcRelOverridesProperties::getClassType()] = m_IfcRelOverridesProperties_Factory;
  }
  return m_IfcRelOverridesProperties_Factory;
}

IfcRelProjectsElement_Factory *Model::getIfcRelProjectsElement_Factory() {
  if (!m_IfcRelProjectsElement_Factory) {
    m_IfcRelProjectsElement_Factory = new IfcRelProjectsElement_Factory;
    m_IfcRelProjectsElement_Factory->setModel(this);
    m_Type2Factory[IfcRelProjectsElement::getClassType()] = m_IfcRelProjectsElement_Factory;
  }
  return m_IfcRelProjectsElement_Factory;
}

IfcRelReferencedInSpatialStructure_Factory *Model::getIfcRelReferencedInSpatialStructure_Factory() {
  if (!m_IfcRelReferencedInSpatialStructure_Factory) {
    m_IfcRelReferencedInSpatialStructure_Factory = new IfcRelReferencedInSpatialStructure_Factory;
    m_IfcRelReferencedInSpatialStructure_Factory->setModel(this);
    m_Type2Factory[IfcRelReferencedInSpatialStructure::getClassType()] = m_IfcRelReferencedInSpatialStructure_Factory;
  }
  return m_IfcRelReferencedInSpatialStructure_Factory;
}

IfcRelSchedulesCostItems_Factory *Model::getIfcRelSchedulesCostItems_Factory() {
  if (!m_IfcRelSchedulesCostItems_Factory) {
    m_IfcRelSchedulesCostItems_Factory = new IfcRelSchedulesCostItems_Factory;
    m_IfcRelSchedulesCostItems_Factory->setModel(this);
    m_Type2Factory[IfcRelSchedulesCostItems::getClassType()] = m_IfcRelSchedulesCostItems_Factory;
  }
  return m_IfcRelSchedulesCostItems_Factory;
}

IfcRelSequence_Factory *Model::getIfcRelSequence_Factory() {
  if (!m_IfcRelSequence_Factory) {
    m_IfcRelSequence_Factory = new IfcRelSequence_Factory;
    m_IfcRelSequence_Factory->setModel(this);
    m_Type2Factory[IfcRelSequence::getClassType()] = m_IfcRelSequence_Factory;
  }
  return m_IfcRelSequence_Factory;
}

IfcRelServicesBuildings_Factory *Model::getIfcRelServicesBuildings_Factory() {
  if (!m_IfcRelServicesBuildings_Factory) {
    m_IfcRelServicesBuildings_Factory = new IfcRelServicesBuildings_Factory;
    m_IfcRelServicesBuildings_Factory->setModel(this);
    m_Type2Factory[IfcRelServicesBuildings::getClassType()] = m_IfcRelServicesBuildings_Factory;
  }
  return m_IfcRelServicesBuildings_Factory;
}

IfcRelSpaceBoundary_Factory *Model::getIfcRelSpaceBoundary_Factory() {
  if (!m_IfcRelSpaceBoundary_Factory) {
    m_IfcRelSpaceBoundary_Factory = new IfcRelSpaceBoundary_Factory;
    m_IfcRelSpaceBoundary_Factory->setModel(this);
    m_Type2Factory[IfcRelSpaceBoundary::getClassType()] = m_IfcRelSpaceBoundary_Factory;
  }
  return m_IfcRelSpaceBoundary_Factory;
}

IfcRelVoidsElement_Factory *Model::getIfcRelVoidsElement_Factory() {
  if (!m_IfcRelVoidsElement_Factory) {
    m_IfcRelVoidsElement_Factory = new IfcRelVoidsElement_Factory;
    m_IfcRelVoidsElement_Factory->setModel(this);
    m_Type2Factory[IfcRelVoidsElement::getClassType()] = m_IfcRelVoidsElement_Factory;
  }
  return m_IfcRelVoidsElement_Factory;
}

IfcRelaxation_Factory *Model::getIfcRelaxation_Factory() {
  if (!m_IfcRelaxation_Factory) {
    m_IfcRelaxation_Factory = new IfcRelaxation_Factory;
    m_IfcRelaxation_Factory->setModel(this);
    m_Type2Factory[IfcRelaxation::getClassType()] = m_IfcRelaxation_Factory;
  }
  return m_IfcRelaxation_Factory;
}

IfcRepresentation_Factory *Model::getIfcRepresentation_Factory() {
  if (!m_IfcRepresentation_Factory) {
    m_IfcRepresentation_Factory = new IfcRepresentation_Factory;
    m_IfcRepresentation_Factory->setModel(this);
    m_Type2Factory[IfcRepresentation::getClassType()] = m_IfcRepresentation_Factory;
  }
  return m_IfcRepresentation_Factory;
}

IfcRepresentationContext_Factory *Model::getIfcRepresentationContext_Factory() {
  if (!m_IfcRepresentationContext_Factory) {
    m_IfcRepresentationContext_Factory = new IfcRepresentationContext_Factory;
    m_IfcRepresentationContext_Factory->setModel(this);
    m_Type2Factory[IfcRepresentationContext::getClassType()] = m_IfcRepresentationContext_Factory;
  }
  return m_IfcRepresentationContext_Factory;
}

IfcRepresentationMap_Factory *Model::getIfcRepresentationMap_Factory() {
  if (!m_IfcRepresentationMap_Factory) {
    m_IfcRepresentationMap_Factory = new IfcRepresentationMap_Factory;
    m_IfcRepresentationMap_Factory->setModel(this);
    m_Type2Factory[IfcRepresentationMap::getClassType()] = m_IfcRepresentationMap_Factory;
  }
  return m_IfcRepresentationMap_Factory;
}

IfcRevolvedAreaSolid_Factory *Model::getIfcRevolvedAreaSolid_Factory() {
  if (!m_IfcRevolvedAreaSolid_Factory) {
    m_IfcRevolvedAreaSolid_Factory = new IfcRevolvedAreaSolid_Factory;
    m_IfcRevolvedAreaSolid_Factory->setModel(this);
    m_Type2Factory[IfcRevolvedAreaSolid::getClassType()] = m_IfcRevolvedAreaSolid_Factory;
  }
  return m_IfcRevolvedAreaSolid_Factory;
}

IfcRibPlateProfileProperties_Factory *Model::getIfcRibPlateProfileProperties_Factory() {
  if (!m_IfcRibPlateProfileProperties_Factory) {
    m_IfcRibPlateProfileProperties_Factory = new IfcRibPlateProfileProperties_Factory;
    m_IfcRibPlateProfileProperties_Factory->setModel(this);
    m_Type2Factory[IfcRibPlateProfileProperties::getClassType()] = m_IfcRibPlateProfileProperties_Factory;
  }
  return m_IfcRibPlateProfileProperties_Factory;
}

IfcRightCircularCone_Factory *Model::getIfcRightCircularCone_Factory() {
  if (!m_IfcRightCircularCone_Factory) {
    m_IfcRightCircularCone_Factory = new IfcRightCircularCone_Factory;
    m_IfcRightCircularCone_Factory->setModel(this);
    m_Type2Factory[IfcRightCircularCone::getClassType()] = m_IfcRightCircularCone_Factory;
  }
  return m_IfcRightCircularCone_Factory;
}

IfcRightCircularCylinder_Factory *Model::getIfcRightCircularCylinder_Factory() {
  if (!m_IfcRightCircularCylinder_Factory) {
    m_IfcRightCircularCylinder_Factory = new IfcRightCircularCylinder_Factory;
    m_IfcRightCircularCylinder_Factory->setModel(this);
    m_Type2Factory[IfcRightCircularCylinder::getClassType()] = m_IfcRightCircularCylinder_Factory;
  }
  return m_IfcRightCircularCylinder_Factory;
}

IfcRoof_Factory *Model::getIfcRoof_Factory() {
  if (!m_IfcRoof_Factory) {
    m_IfcRoof_Factory = new IfcRoof_Factory;
    m_IfcRoof_Factory->setModel(this);
    m_Type2Factory[IfcRoof::getClassType()] = m_IfcRoof_Factory;
  }
  return m_IfcRoof_Factory;
}

IfcRoundedEdgeFeature_Factory *Model::getIfcRoundedEdgeFeature_Factory() {
  if (!m_IfcRoundedEdgeFeature_Factory) {
    m_IfcRoundedEdgeFeature_Factory = new IfcRoundedEdgeFeature_Factory;
    m_IfcRoundedEdgeFeature_Factory->setModel(this);
    m_Type2Factory[IfcRoundedEdgeFeature::getClassType()] = m_IfcRoundedEdgeFeature_Factory;
  }
  return m_IfcRoundedEdgeFeature_Factory;
}

IfcRoundedRectangleProfileDef_Factory *Model::getIfcRoundedRectangleProfileDef_Factory() {
  if (!m_IfcRoundedRectangleProfileDef_Factory) {
    m_IfcRoundedRectangleProfileDef_Factory = new IfcRoundedRectangleProfileDef_Factory;
    m_IfcRoundedRectangleProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcRoundedRectangleProfileDef::getClassType()] = m_IfcRoundedRectangleProfileDef_Factory;
  }
  return m_IfcRoundedRectangleProfileDef_Factory;
}

IfcSIUnit_Factory *Model::getIfcSIUnit_Factory() {
  if (!m_IfcSIUnit_Factory) {
    m_IfcSIUnit_Factory = new IfcSIUnit_Factory;
    m_IfcSIUnit_Factory->setModel(this);
    m_Type2Factory[IfcSIUnit::getClassType()] = m_IfcSIUnit_Factory;
  }
  return m_IfcSIUnit_Factory;
}

IfcSanitaryTerminalType_Factory *Model::getIfcSanitaryTerminalType_Factory() {
  if (!m_IfcSanitaryTerminalType_Factory) {
    m_IfcSanitaryTerminalType_Factory = new IfcSanitaryTerminalType_Factory;
    m_IfcSanitaryTerminalType_Factory->setModel(this);
    m_Type2Factory[IfcSanitaryTerminalType::getClassType()] = m_IfcSanitaryTerminalType_Factory;
  }
  return m_IfcSanitaryTerminalType_Factory;
}

IfcScheduleTimeControl_Factory *Model::getIfcScheduleTimeControl_Factory() {
  if (!m_IfcScheduleTimeControl_Factory) {
    m_IfcScheduleTimeControl_Factory = new IfcScheduleTimeControl_Factory;
    m_IfcScheduleTimeControl_Factory->setModel(this);
    m_Type2Factory[IfcScheduleTimeControl::getClassType()] = m_IfcScheduleTimeControl_Factory;
  }
  return m_IfcScheduleTimeControl_Factory;
}

IfcSectionProperties_Factory *Model::getIfcSectionProperties_Factory() {
  if (!m_IfcSectionProperties_Factory) {
    m_IfcSectionProperties_Factory = new IfcSectionProperties_Factory;
    m_IfcSectionProperties_Factory->setModel(this);
    m_Type2Factory[IfcSectionProperties::getClassType()] = m_IfcSectionProperties_Factory;
  }
  return m_IfcSectionProperties_Factory;
}

IfcSectionReinforcementProperties_Factory *Model::getIfcSectionReinforcementProperties_Factory() {
  if (!m_IfcSectionReinforcementProperties_Factory) {
    m_IfcSectionReinforcementProperties_Factory = new IfcSectionReinforcementProperties_Factory;
    m_IfcSectionReinforcementProperties_Factory->setModel(this);
    m_Type2Factory[IfcSectionReinforcementProperties::getClassType()] = m_IfcSectionReinforcementProperties_Factory;
  }
  return m_IfcSectionReinforcementProperties_Factory;
}

IfcSectionedSpine_Factory *Model::getIfcSectionedSpine_Factory() {
  if (!m_IfcSectionedSpine_Factory) {
    m_IfcSectionedSpine_Factory = new IfcSectionedSpine_Factory;
    m_IfcSectionedSpine_Factory->setModel(this);
    m_Type2Factory[IfcSectionedSpine::getClassType()] = m_IfcSectionedSpine_Factory;
  }
  return m_IfcSectionedSpine_Factory;
}

IfcSensorType_Factory *Model::getIfcSensorType_Factory() {
  if (!m_IfcSensorType_Factory) {
    m_IfcSensorType_Factory = new IfcSensorType_Factory;
    m_IfcSensorType_Factory->setModel(this);
    m_Type2Factory[IfcSensorType::getClassType()] = m_IfcSensorType_Factory;
  }
  return m_IfcSensorType_Factory;
}

IfcServiceLife_Factory *Model::getIfcServiceLife_Factory() {
  if (!m_IfcServiceLife_Factory) {
    m_IfcServiceLife_Factory = new IfcServiceLife_Factory;
    m_IfcServiceLife_Factory->setModel(this);
    m_Type2Factory[IfcServiceLife::getClassType()] = m_IfcServiceLife_Factory;
  }
  return m_IfcServiceLife_Factory;
}

IfcServiceLifeFactor_Factory *Model::getIfcServiceLifeFactor_Factory() {
  if (!m_IfcServiceLifeFactor_Factory) {
    m_IfcServiceLifeFactor_Factory = new IfcServiceLifeFactor_Factory;
    m_IfcServiceLifeFactor_Factory->setModel(this);
    m_Type2Factory[IfcServiceLifeFactor::getClassType()] = m_IfcServiceLifeFactor_Factory;
  }
  return m_IfcServiceLifeFactor_Factory;
}

IfcShapeAspect_Factory *Model::getIfcShapeAspect_Factory() {
  if (!m_IfcShapeAspect_Factory) {
    m_IfcShapeAspect_Factory = new IfcShapeAspect_Factory;
    m_IfcShapeAspect_Factory->setModel(this);
    m_Type2Factory[IfcShapeAspect::getClassType()] = m_IfcShapeAspect_Factory;
  }
  return m_IfcShapeAspect_Factory;
}

IfcShapeRepresentation_Factory *Model::getIfcShapeRepresentation_Factory() {
  if (!m_IfcShapeRepresentation_Factory) {
    m_IfcShapeRepresentation_Factory = new IfcShapeRepresentation_Factory;
    m_IfcShapeRepresentation_Factory->setModel(this);
    m_Type2Factory[IfcShapeRepresentation::getClassType()] = m_IfcShapeRepresentation_Factory;
  }
  return m_IfcShapeRepresentation_Factory;
}

IfcShellBasedSurfaceModel_Factory *Model::getIfcShellBasedSurfaceModel_Factory() {
  if (!m_IfcShellBasedSurfaceModel_Factory) {
    m_IfcShellBasedSurfaceModel_Factory = new IfcShellBasedSurfaceModel_Factory;
    m_IfcShellBasedSurfaceModel_Factory->setModel(this);
    m_Type2Factory[IfcShellBasedSurfaceModel::getClassType()] = m_IfcShellBasedSurfaceModel_Factory;
  }
  return m_IfcShellBasedSurfaceModel_Factory;
}

IfcSite_Factory *Model::getIfcSite_Factory() {
  if (!m_IfcSite_Factory) {
    m_IfcSite_Factory = new IfcSite_Factory;
    m_IfcSite_Factory->setModel(this);
    m_Type2Factory[IfcSite::getClassType()] = m_IfcSite_Factory;
  }
  return m_IfcSite_Factory;
}

IfcSlab_Factory *Model::getIfcSlab_Factory() {
  if (!m_IfcSlab_Factory) {
    m_IfcSlab_Factory = new IfcSlab_Factory;
    m_IfcSlab_Factory->setModel(this);
    m_Type2Factory[IfcSlab::getClassType()] = m_IfcSlab_Factory;
  }
  return m_IfcSlab_Factory;
}

IfcSlabType_Factory *Model::getIfcSlabType_Factory() {
  if (!m_IfcSlabType_Factory) {
    m_IfcSlabType_Factory = new IfcSlabType_Factory;
    m_IfcSlabType_Factory->setModel(this);
    m_Type2Factory[IfcSlabType::getClassType()] = m_IfcSlabType_Factory;
  }
  return m_IfcSlabType_Factory;
}

IfcSlippageConnectionCondition_Factory *Model::getIfcSlippageConnectionCondition_Factory() {
  if (!m_IfcSlippageConnectionCondition_Factory) {
    m_IfcSlippageConnectionCondition_Factory = new IfcSlippageConnectionCondition_Factory;
    m_IfcSlippageConnectionCondition_Factory->setModel(this);
    m_Type2Factory[IfcSlippageConnectionCondition::getClassType()] = m_IfcSlippageConnectionCondition_Factory;
  }
  return m_IfcSlippageConnectionCondition_Factory;
}

IfcSoundProperties_Factory *Model::getIfcSoundProperties_Factory() {
  if (!m_IfcSoundProperties_Factory) {
    m_IfcSoundProperties_Factory = new IfcSoundProperties_Factory;
    m_IfcSoundProperties_Factory->setModel(this);
    m_Type2Factory[IfcSoundProperties::getClassType()] = m_IfcSoundProperties_Factory;
  }
  return m_IfcSoundProperties_Factory;
}

IfcSoundValue_Factory *Model::getIfcSoundValue_Factory() {
  if (!m_IfcSoundValue_Factory) {
    m_IfcSoundValue_Factory = new IfcSoundValue_Factory;
    m_IfcSoundValue_Factory->setModel(this);
    m_Type2Factory[IfcSoundValue::getClassType()] = m_IfcSoundValue_Factory;
  }
  return m_IfcSoundValue_Factory;
}

IfcSpace_Factory *Model::getIfcSpace_Factory() {
  if (!m_IfcSpace_Factory) {
    m_IfcSpace_Factory = new IfcSpace_Factory;
    m_IfcSpace_Factory->setModel(this);
    m_Type2Factory[IfcSpace::getClassType()] = m_IfcSpace_Factory;
  }
  return m_IfcSpace_Factory;
}

IfcSpaceHeaterType_Factory *Model::getIfcSpaceHeaterType_Factory() {
  if (!m_IfcSpaceHeaterType_Factory) {
    m_IfcSpaceHeaterType_Factory = new IfcSpaceHeaterType_Factory;
    m_IfcSpaceHeaterType_Factory->setModel(this);
    m_Type2Factory[IfcSpaceHeaterType::getClassType()] = m_IfcSpaceHeaterType_Factory;
  }
  return m_IfcSpaceHeaterType_Factory;
}

IfcSpaceProgram_Factory *Model::getIfcSpaceProgram_Factory() {
  if (!m_IfcSpaceProgram_Factory) {
    m_IfcSpaceProgram_Factory = new IfcSpaceProgram_Factory;
    m_IfcSpaceProgram_Factory->setModel(this);
    m_Type2Factory[IfcSpaceProgram::getClassType()] = m_IfcSpaceProgram_Factory;
  }
  return m_IfcSpaceProgram_Factory;
}

IfcSpaceThermalLoadProperties_Factory *Model::getIfcSpaceThermalLoadProperties_Factory() {
  if (!m_IfcSpaceThermalLoadProperties_Factory) {
    m_IfcSpaceThermalLoadProperties_Factory = new IfcSpaceThermalLoadProperties_Factory;
    m_IfcSpaceThermalLoadProperties_Factory->setModel(this);
    m_Type2Factory[IfcSpaceThermalLoadProperties::getClassType()] = m_IfcSpaceThermalLoadProperties_Factory;
  }
  return m_IfcSpaceThermalLoadProperties_Factory;
}

IfcSpaceType_Factory *Model::getIfcSpaceType_Factory() {
  if (!m_IfcSpaceType_Factory) {
    m_IfcSpaceType_Factory = new IfcSpaceType_Factory;
    m_IfcSpaceType_Factory->setModel(this);
    m_Type2Factory[IfcSpaceType::getClassType()] = m_IfcSpaceType_Factory;
  }
  return m_IfcSpaceType_Factory;
}

IfcSphere_Factory *Model::getIfcSphere_Factory() {
  if (!m_IfcSphere_Factory) {
    m_IfcSphere_Factory = new IfcSphere_Factory;
    m_IfcSphere_Factory->setModel(this);
    m_Type2Factory[IfcSphere::getClassType()] = m_IfcSphere_Factory;
  }
  return m_IfcSphere_Factory;
}

IfcStackTerminalType_Factory *Model::getIfcStackTerminalType_Factory() {
  if (!m_IfcStackTerminalType_Factory) {
    m_IfcStackTerminalType_Factory = new IfcStackTerminalType_Factory;
    m_IfcStackTerminalType_Factory->setModel(this);
    m_Type2Factory[IfcStackTerminalType::getClassType()] = m_IfcStackTerminalType_Factory;
  }
  return m_IfcStackTerminalType_Factory;
}

IfcStair_Factory *Model::getIfcStair_Factory() {
  if (!m_IfcStair_Factory) {
    m_IfcStair_Factory = new IfcStair_Factory;
    m_IfcStair_Factory->setModel(this);
    m_Type2Factory[IfcStair::getClassType()] = m_IfcStair_Factory;
  }
  return m_IfcStair_Factory;
}

IfcStairFlight_Factory *Model::getIfcStairFlight_Factory() {
  if (!m_IfcStairFlight_Factory) {
    m_IfcStairFlight_Factory = new IfcStairFlight_Factory;
    m_IfcStairFlight_Factory->setModel(this);
    m_Type2Factory[IfcStairFlight::getClassType()] = m_IfcStairFlight_Factory;
  }
  return m_IfcStairFlight_Factory;
}

IfcStairFlightType_Factory *Model::getIfcStairFlightType_Factory() {
  if (!m_IfcStairFlightType_Factory) {
    m_IfcStairFlightType_Factory = new IfcStairFlightType_Factory;
    m_IfcStairFlightType_Factory->setModel(this);
    m_Type2Factory[IfcStairFlightType::getClassType()] = m_IfcStairFlightType_Factory;
  }
  return m_IfcStairFlightType_Factory;
}

IfcStructuralAnalysisModel_Factory *Model::getIfcStructuralAnalysisModel_Factory() {
  if (!m_IfcStructuralAnalysisModel_Factory) {
    m_IfcStructuralAnalysisModel_Factory = new IfcStructuralAnalysisModel_Factory;
    m_IfcStructuralAnalysisModel_Factory->setModel(this);
    m_Type2Factory[IfcStructuralAnalysisModel::getClassType()] = m_IfcStructuralAnalysisModel_Factory;
  }
  return m_IfcStructuralAnalysisModel_Factory;
}

IfcStructuralCurveConnection_Factory *Model::getIfcStructuralCurveConnection_Factory() {
  if (!m_IfcStructuralCurveConnection_Factory) {
    m_IfcStructuralCurveConnection_Factory = new IfcStructuralCurveConnection_Factory;
    m_IfcStructuralCurveConnection_Factory->setModel(this);
    m_Type2Factory[IfcStructuralCurveConnection::getClassType()] = m_IfcStructuralCurveConnection_Factory;
  }
  return m_IfcStructuralCurveConnection_Factory;
}

IfcStructuralCurveMember_Factory *Model::getIfcStructuralCurveMember_Factory() {
  if (!m_IfcStructuralCurveMember_Factory) {
    m_IfcStructuralCurveMember_Factory = new IfcStructuralCurveMember_Factory;
    m_IfcStructuralCurveMember_Factory->setModel(this);
    m_Type2Factory[IfcStructuralCurveMember::getClassType()] = m_IfcStructuralCurveMember_Factory;
  }
  return m_IfcStructuralCurveMember_Factory;
}

IfcStructuralCurveMemberVarying_Factory *Model::getIfcStructuralCurveMemberVarying_Factory() {
  if (!m_IfcStructuralCurveMemberVarying_Factory) {
    m_IfcStructuralCurveMemberVarying_Factory = new IfcStructuralCurveMemberVarying_Factory;
    m_IfcStructuralCurveMemberVarying_Factory->setModel(this);
    m_Type2Factory[IfcStructuralCurveMemberVarying::getClassType()] = m_IfcStructuralCurveMemberVarying_Factory;
  }
  return m_IfcStructuralCurveMemberVarying_Factory;
}

IfcStructuralLinearAction_Factory *Model::getIfcStructuralLinearAction_Factory() {
  if (!m_IfcStructuralLinearAction_Factory) {
    m_IfcStructuralLinearAction_Factory = new IfcStructuralLinearAction_Factory;
    m_IfcStructuralLinearAction_Factory->setModel(this);
    m_Type2Factory[IfcStructuralLinearAction::getClassType()] = m_IfcStructuralLinearAction_Factory;
  }
  return m_IfcStructuralLinearAction_Factory;
}

IfcStructuralLinearActionVarying_Factory *Model::getIfcStructuralLinearActionVarying_Factory() {
  if (!m_IfcStructuralLinearActionVarying_Factory) {
    m_IfcStructuralLinearActionVarying_Factory = new IfcStructuralLinearActionVarying_Factory;
    m_IfcStructuralLinearActionVarying_Factory->setModel(this);
    m_Type2Factory[IfcStructuralLinearActionVarying::getClassType()] = m_IfcStructuralLinearActionVarying_Factory;
  }
  return m_IfcStructuralLinearActionVarying_Factory;
}

IfcStructuralLoadGroup_Factory *Model::getIfcStructuralLoadGroup_Factory() {
  if (!m_IfcStructuralLoadGroup_Factory) {
    m_IfcStructuralLoadGroup_Factory = new IfcStructuralLoadGroup_Factory;
    m_IfcStructuralLoadGroup_Factory->setModel(this);
    m_Type2Factory[IfcStructuralLoadGroup::getClassType()] = m_IfcStructuralLoadGroup_Factory;
  }
  return m_IfcStructuralLoadGroup_Factory;
}

IfcStructuralLoadLinearForce_Factory *Model::getIfcStructuralLoadLinearForce_Factory() {
  if (!m_IfcStructuralLoadLinearForce_Factory) {
    m_IfcStructuralLoadLinearForce_Factory = new IfcStructuralLoadLinearForce_Factory;
    m_IfcStructuralLoadLinearForce_Factory->setModel(this);
    m_Type2Factory[IfcStructuralLoadLinearForce::getClassType()] = m_IfcStructuralLoadLinearForce_Factory;
  }
  return m_IfcStructuralLoadLinearForce_Factory;
}

IfcStructuralLoadPlanarForce_Factory *Model::getIfcStructuralLoadPlanarForce_Factory() {
  if (!m_IfcStructuralLoadPlanarForce_Factory) {
    m_IfcStructuralLoadPlanarForce_Factory = new IfcStructuralLoadPlanarForce_Factory;
    m_IfcStructuralLoadPlanarForce_Factory->setModel(this);
    m_Type2Factory[IfcStructuralLoadPlanarForce::getClassType()] = m_IfcStructuralLoadPlanarForce_Factory;
  }
  return m_IfcStructuralLoadPlanarForce_Factory;
}

IfcStructuralLoadSingleDisplacement_Factory *Model::getIfcStructuralLoadSingleDisplacement_Factory() {
  if (!m_IfcStructuralLoadSingleDisplacement_Factory) {
    m_IfcStructuralLoadSingleDisplacement_Factory = new IfcStructuralLoadSingleDisplacement_Factory;
    m_IfcStructuralLoadSingleDisplacement_Factory->setModel(this);
    m_Type2Factory[IfcStructuralLoadSingleDisplacement::getClassType()] = m_IfcStructuralLoadSingleDisplacement_Factory;
  }
  return m_IfcStructuralLoadSingleDisplacement_Factory;
}

IfcStructuralLoadSingleDisplacementDistortion_Factory *Model::getIfcStructuralLoadSingleDisplacementDistortion_Factory() {
  if (!m_IfcStructuralLoadSingleDisplacementDistortion_Factory) {
    m_IfcStructuralLoadSingleDisplacementDistortion_Factory = new IfcStructuralLoadSingleDisplacementDistortion_Factory;
    m_IfcStructuralLoadSingleDisplacementDistortion_Factory->setModel(this);
    m_Type2Factory[IfcStructuralLoadSingleDisplacementDistortion::getClassType()] = m_IfcStructuralLoadSingleDisplacementDistortion_Factory;
  }
  return m_IfcStructuralLoadSingleDisplacementDistortion_Factory;
}

IfcStructuralLoadSingleForce_Factory *Model::getIfcStructuralLoadSingleForce_Factory() {
  if (!m_IfcStructuralLoadSingleForce_Factory) {
    m_IfcStructuralLoadSingleForce_Factory = new IfcStructuralLoadSingleForce_Factory;
    m_IfcStructuralLoadSingleForce_Factory->setModel(this);
    m_Type2Factory[IfcStructuralLoadSingleForce::getClassType()] = m_IfcStructuralLoadSingleForce_Factory;
  }
  return m_IfcStructuralLoadSingleForce_Factory;
}

IfcStructuralLoadSingleForceWarping_Factory *Model::getIfcStructuralLoadSingleForceWarping_Factory() {
  if (!m_IfcStructuralLoadSingleForceWarping_Factory) {
    m_IfcStructuralLoadSingleForceWarping_Factory = new IfcStructuralLoadSingleForceWarping_Factory;
    m_IfcStructuralLoadSingleForceWarping_Factory->setModel(this);
    m_Type2Factory[IfcStructuralLoadSingleForceWarping::getClassType()] = m_IfcStructuralLoadSingleForceWarping_Factory;
  }
  return m_IfcStructuralLoadSingleForceWarping_Factory;
}

IfcStructuralLoadTemperature_Factory *Model::getIfcStructuralLoadTemperature_Factory() {
  if (!m_IfcStructuralLoadTemperature_Factory) {
    m_IfcStructuralLoadTemperature_Factory = new IfcStructuralLoadTemperature_Factory;
    m_IfcStructuralLoadTemperature_Factory->setModel(this);
    m_Type2Factory[IfcStructuralLoadTemperature::getClassType()] = m_IfcStructuralLoadTemperature_Factory;
  }
  return m_IfcStructuralLoadTemperature_Factory;
}

IfcStructuralPlanarAction_Factory *Model::getIfcStructuralPlanarAction_Factory() {
  if (!m_IfcStructuralPlanarAction_Factory) {
    m_IfcStructuralPlanarAction_Factory = new IfcStructuralPlanarAction_Factory;
    m_IfcStructuralPlanarAction_Factory->setModel(this);
    m_Type2Factory[IfcStructuralPlanarAction::getClassType()] = m_IfcStructuralPlanarAction_Factory;
  }
  return m_IfcStructuralPlanarAction_Factory;
}

IfcStructuralPlanarActionVarying_Factory *Model::getIfcStructuralPlanarActionVarying_Factory() {
  if (!m_IfcStructuralPlanarActionVarying_Factory) {
    m_IfcStructuralPlanarActionVarying_Factory = new IfcStructuralPlanarActionVarying_Factory;
    m_IfcStructuralPlanarActionVarying_Factory->setModel(this);
    m_Type2Factory[IfcStructuralPlanarActionVarying::getClassType()] = m_IfcStructuralPlanarActionVarying_Factory;
  }
  return m_IfcStructuralPlanarActionVarying_Factory;
}

IfcStructuralPointAction_Factory *Model::getIfcStructuralPointAction_Factory() {
  if (!m_IfcStructuralPointAction_Factory) {
    m_IfcStructuralPointAction_Factory = new IfcStructuralPointAction_Factory;
    m_IfcStructuralPointAction_Factory->setModel(this);
    m_Type2Factory[IfcStructuralPointAction::getClassType()] = m_IfcStructuralPointAction_Factory;
  }
  return m_IfcStructuralPointAction_Factory;
}

IfcStructuralPointConnection_Factory *Model::getIfcStructuralPointConnection_Factory() {
  if (!m_IfcStructuralPointConnection_Factory) {
    m_IfcStructuralPointConnection_Factory = new IfcStructuralPointConnection_Factory;
    m_IfcStructuralPointConnection_Factory->setModel(this);
    m_Type2Factory[IfcStructuralPointConnection::getClassType()] = m_IfcStructuralPointConnection_Factory;
  }
  return m_IfcStructuralPointConnection_Factory;
}

IfcStructuralPointReaction_Factory *Model::getIfcStructuralPointReaction_Factory() {
  if (!m_IfcStructuralPointReaction_Factory) {
    m_IfcStructuralPointReaction_Factory = new IfcStructuralPointReaction_Factory;
    m_IfcStructuralPointReaction_Factory->setModel(this);
    m_Type2Factory[IfcStructuralPointReaction::getClassType()] = m_IfcStructuralPointReaction_Factory;
  }
  return m_IfcStructuralPointReaction_Factory;
}

IfcStructuralProfileProperties_Factory *Model::getIfcStructuralProfileProperties_Factory() {
  if (!m_IfcStructuralProfileProperties_Factory) {
    m_IfcStructuralProfileProperties_Factory = new IfcStructuralProfileProperties_Factory;
    m_IfcStructuralProfileProperties_Factory->setModel(this);
    m_Type2Factory[IfcStructuralProfileProperties::getClassType()] = m_IfcStructuralProfileProperties_Factory;
  }
  return m_IfcStructuralProfileProperties_Factory;
}

IfcStructuralResultGroup_Factory *Model::getIfcStructuralResultGroup_Factory() {
  if (!m_IfcStructuralResultGroup_Factory) {
    m_IfcStructuralResultGroup_Factory = new IfcStructuralResultGroup_Factory;
    m_IfcStructuralResultGroup_Factory->setModel(this);
    m_Type2Factory[IfcStructuralResultGroup::getClassType()] = m_IfcStructuralResultGroup_Factory;
  }
  return m_IfcStructuralResultGroup_Factory;
}

IfcStructuralSteelProfileProperties_Factory *Model::getIfcStructuralSteelProfileProperties_Factory() {
  if (!m_IfcStructuralSteelProfileProperties_Factory) {
    m_IfcStructuralSteelProfileProperties_Factory = new IfcStructuralSteelProfileProperties_Factory;
    m_IfcStructuralSteelProfileProperties_Factory->setModel(this);
    m_Type2Factory[IfcStructuralSteelProfileProperties::getClassType()] = m_IfcStructuralSteelProfileProperties_Factory;
  }
  return m_IfcStructuralSteelProfileProperties_Factory;
}

IfcStructuralSurfaceConnection_Factory *Model::getIfcStructuralSurfaceConnection_Factory() {
  if (!m_IfcStructuralSurfaceConnection_Factory) {
    m_IfcStructuralSurfaceConnection_Factory = new IfcStructuralSurfaceConnection_Factory;
    m_IfcStructuralSurfaceConnection_Factory->setModel(this);
    m_Type2Factory[IfcStructuralSurfaceConnection::getClassType()] = m_IfcStructuralSurfaceConnection_Factory;
  }
  return m_IfcStructuralSurfaceConnection_Factory;
}

IfcStructuralSurfaceMember_Factory *Model::getIfcStructuralSurfaceMember_Factory() {
  if (!m_IfcStructuralSurfaceMember_Factory) {
    m_IfcStructuralSurfaceMember_Factory = new IfcStructuralSurfaceMember_Factory;
    m_IfcStructuralSurfaceMember_Factory->setModel(this);
    m_Type2Factory[IfcStructuralSurfaceMember::getClassType()] = m_IfcStructuralSurfaceMember_Factory;
  }
  return m_IfcStructuralSurfaceMember_Factory;
}

IfcStructuralSurfaceMemberVarying_Factory *Model::getIfcStructuralSurfaceMemberVarying_Factory() {
  if (!m_IfcStructuralSurfaceMemberVarying_Factory) {
    m_IfcStructuralSurfaceMemberVarying_Factory = new IfcStructuralSurfaceMemberVarying_Factory;
    m_IfcStructuralSurfaceMemberVarying_Factory->setModel(this);
    m_Type2Factory[IfcStructuralSurfaceMemberVarying::getClassType()] = m_IfcStructuralSurfaceMemberVarying_Factory;
  }
  return m_IfcStructuralSurfaceMemberVarying_Factory;
}

IfcStructuredDimensionCallout_Factory *Model::getIfcStructuredDimensionCallout_Factory() {
  if (!m_IfcStructuredDimensionCallout_Factory) {
    m_IfcStructuredDimensionCallout_Factory = new IfcStructuredDimensionCallout_Factory;
    m_IfcStructuredDimensionCallout_Factory->setModel(this);
    m_Type2Factory[IfcStructuredDimensionCallout::getClassType()] = m_IfcStructuredDimensionCallout_Factory;
  }
  return m_IfcStructuredDimensionCallout_Factory;
}

IfcStyledItem_Factory *Model::getIfcStyledItem_Factory() {
  if (!m_IfcStyledItem_Factory) {
    m_IfcStyledItem_Factory = new IfcStyledItem_Factory;
    m_IfcStyledItem_Factory->setModel(this);
    m_Type2Factory[IfcStyledItem::getClassType()] = m_IfcStyledItem_Factory;
  }
  return m_IfcStyledItem_Factory;
}

IfcStyledRepresentation_Factory *Model::getIfcStyledRepresentation_Factory() {
  if (!m_IfcStyledRepresentation_Factory) {
    m_IfcStyledRepresentation_Factory = new IfcStyledRepresentation_Factory;
    m_IfcStyledRepresentation_Factory->setModel(this);
    m_Type2Factory[IfcStyledRepresentation::getClassType()] = m_IfcStyledRepresentation_Factory;
  }
  return m_IfcStyledRepresentation_Factory;
}

IfcSubContractResource_Factory *Model::getIfcSubContractResource_Factory() {
  if (!m_IfcSubContractResource_Factory) {
    m_IfcSubContractResource_Factory = new IfcSubContractResource_Factory;
    m_IfcSubContractResource_Factory->setModel(this);
    m_Type2Factory[IfcSubContractResource::getClassType()] = m_IfcSubContractResource_Factory;
  }
  return m_IfcSubContractResource_Factory;
}

IfcSubedge_Factory *Model::getIfcSubedge_Factory() {
  if (!m_IfcSubedge_Factory) {
    m_IfcSubedge_Factory = new IfcSubedge_Factory;
    m_IfcSubedge_Factory->setModel(this);
    m_Type2Factory[IfcSubedge::getClassType()] = m_IfcSubedge_Factory;
  }
  return m_IfcSubedge_Factory;
}

IfcSurfaceCurveSweptAreaSolid_Factory *Model::getIfcSurfaceCurveSweptAreaSolid_Factory() {
  if (!m_IfcSurfaceCurveSweptAreaSolid_Factory) {
    m_IfcSurfaceCurveSweptAreaSolid_Factory = new IfcSurfaceCurveSweptAreaSolid_Factory;
    m_IfcSurfaceCurveSweptAreaSolid_Factory->setModel(this);
    m_Type2Factory[IfcSurfaceCurveSweptAreaSolid::getClassType()] = m_IfcSurfaceCurveSweptAreaSolid_Factory;
  }
  return m_IfcSurfaceCurveSweptAreaSolid_Factory;
}

IfcSurfaceOfLinearExtrusion_Factory *Model::getIfcSurfaceOfLinearExtrusion_Factory() {
  if (!m_IfcSurfaceOfLinearExtrusion_Factory) {
    m_IfcSurfaceOfLinearExtrusion_Factory = new IfcSurfaceOfLinearExtrusion_Factory;
    m_IfcSurfaceOfLinearExtrusion_Factory->setModel(this);
    m_Type2Factory[IfcSurfaceOfLinearExtrusion::getClassType()] = m_IfcSurfaceOfLinearExtrusion_Factory;
  }
  return m_IfcSurfaceOfLinearExtrusion_Factory;
}

IfcSurfaceOfRevolution_Factory *Model::getIfcSurfaceOfRevolution_Factory() {
  if (!m_IfcSurfaceOfRevolution_Factory) {
    m_IfcSurfaceOfRevolution_Factory = new IfcSurfaceOfRevolution_Factory;
    m_IfcSurfaceOfRevolution_Factory->setModel(this);
    m_Type2Factory[IfcSurfaceOfRevolution::getClassType()] = m_IfcSurfaceOfRevolution_Factory;
  }
  return m_IfcSurfaceOfRevolution_Factory;
}

IfcSurfaceStyle_Factory *Model::getIfcSurfaceStyle_Factory() {
  if (!m_IfcSurfaceStyle_Factory) {
    m_IfcSurfaceStyle_Factory = new IfcSurfaceStyle_Factory;
    m_IfcSurfaceStyle_Factory->setModel(this);
    m_Type2Factory[IfcSurfaceStyle::getClassType()] = m_IfcSurfaceStyle_Factory;
  }
  return m_IfcSurfaceStyle_Factory;
}

IfcSurfaceStyleLighting_Factory *Model::getIfcSurfaceStyleLighting_Factory() {
  if (!m_IfcSurfaceStyleLighting_Factory) {
    m_IfcSurfaceStyleLighting_Factory = new IfcSurfaceStyleLighting_Factory;
    m_IfcSurfaceStyleLighting_Factory->setModel(this);
    m_Type2Factory[IfcSurfaceStyleLighting::getClassType()] = m_IfcSurfaceStyleLighting_Factory;
  }
  return m_IfcSurfaceStyleLighting_Factory;
}

IfcSurfaceStyleRefraction_Factory *Model::getIfcSurfaceStyleRefraction_Factory() {
  if (!m_IfcSurfaceStyleRefraction_Factory) {
    m_IfcSurfaceStyleRefraction_Factory = new IfcSurfaceStyleRefraction_Factory;
    m_IfcSurfaceStyleRefraction_Factory->setModel(this);
    m_Type2Factory[IfcSurfaceStyleRefraction::getClassType()] = m_IfcSurfaceStyleRefraction_Factory;
  }
  return m_IfcSurfaceStyleRefraction_Factory;
}

IfcSurfaceStyleRendering_Factory *Model::getIfcSurfaceStyleRendering_Factory() {
  if (!m_IfcSurfaceStyleRendering_Factory) {
    m_IfcSurfaceStyleRendering_Factory = new IfcSurfaceStyleRendering_Factory;
    m_IfcSurfaceStyleRendering_Factory->setModel(this);
    m_Type2Factory[IfcSurfaceStyleRendering::getClassType()] = m_IfcSurfaceStyleRendering_Factory;
  }
  return m_IfcSurfaceStyleRendering_Factory;
}

IfcSurfaceStyleShading_Factory *Model::getIfcSurfaceStyleShading_Factory() {
  if (!m_IfcSurfaceStyleShading_Factory) {
    m_IfcSurfaceStyleShading_Factory = new IfcSurfaceStyleShading_Factory;
    m_IfcSurfaceStyleShading_Factory->setModel(this);
    m_Type2Factory[IfcSurfaceStyleShading::getClassType()] = m_IfcSurfaceStyleShading_Factory;
  }
  return m_IfcSurfaceStyleShading_Factory;
}

IfcSurfaceStyleWithTextures_Factory *Model::getIfcSurfaceStyleWithTextures_Factory() {
  if (!m_IfcSurfaceStyleWithTextures_Factory) {
    m_IfcSurfaceStyleWithTextures_Factory = new IfcSurfaceStyleWithTextures_Factory;
    m_IfcSurfaceStyleWithTextures_Factory->setModel(this);
    m_Type2Factory[IfcSurfaceStyleWithTextures::getClassType()] = m_IfcSurfaceStyleWithTextures_Factory;
  }
  return m_IfcSurfaceStyleWithTextures_Factory;
}

IfcSweptDiskSolid_Factory *Model::getIfcSweptDiskSolid_Factory() {
  if (!m_IfcSweptDiskSolid_Factory) {
    m_IfcSweptDiskSolid_Factory = new IfcSweptDiskSolid_Factory;
    m_IfcSweptDiskSolid_Factory->setModel(this);
    m_Type2Factory[IfcSweptDiskSolid::getClassType()] = m_IfcSweptDiskSolid_Factory;
  }
  return m_IfcSweptDiskSolid_Factory;
}

IfcSwitchingDeviceType_Factory *Model::getIfcSwitchingDeviceType_Factory() {
  if (!m_IfcSwitchingDeviceType_Factory) {
    m_IfcSwitchingDeviceType_Factory = new IfcSwitchingDeviceType_Factory;
    m_IfcSwitchingDeviceType_Factory->setModel(this);
    m_Type2Factory[IfcSwitchingDeviceType::getClassType()] = m_IfcSwitchingDeviceType_Factory;
  }
  return m_IfcSwitchingDeviceType_Factory;
}

IfcSymbolStyle_Factory *Model::getIfcSymbolStyle_Factory() {
  if (!m_IfcSymbolStyle_Factory) {
    m_IfcSymbolStyle_Factory = new IfcSymbolStyle_Factory;
    m_IfcSymbolStyle_Factory->setModel(this);
    m_Type2Factory[IfcSymbolStyle::getClassType()] = m_IfcSymbolStyle_Factory;
  }
  return m_IfcSymbolStyle_Factory;
}

IfcSystem_Factory *Model::getIfcSystem_Factory() {
  if (!m_IfcSystem_Factory) {
    m_IfcSystem_Factory = new IfcSystem_Factory;
    m_IfcSystem_Factory->setModel(this);
    m_Type2Factory[IfcSystem::getClassType()] = m_IfcSystem_Factory;
  }
  return m_IfcSystem_Factory;
}

IfcSystemFurnitureElementType_Factory *Model::getIfcSystemFurnitureElementType_Factory() {
  if (!m_IfcSystemFurnitureElementType_Factory) {
    m_IfcSystemFurnitureElementType_Factory = new IfcSystemFurnitureElementType_Factory;
    m_IfcSystemFurnitureElementType_Factory->setModel(this);
    m_Type2Factory[IfcSystemFurnitureElementType::getClassType()] = m_IfcSystemFurnitureElementType_Factory;
  }
  return m_IfcSystemFurnitureElementType_Factory;
}

IfcTShapeProfileDef_Factory *Model::getIfcTShapeProfileDef_Factory() {
  if (!m_IfcTShapeProfileDef_Factory) {
    m_IfcTShapeProfileDef_Factory = new IfcTShapeProfileDef_Factory;
    m_IfcTShapeProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcTShapeProfileDef::getClassType()] = m_IfcTShapeProfileDef_Factory;
  }
  return m_IfcTShapeProfileDef_Factory;
}

IfcTable_Factory *Model::getIfcTable_Factory() {
  if (!m_IfcTable_Factory) {
    m_IfcTable_Factory = new IfcTable_Factory;
    m_IfcTable_Factory->setModel(this);
    m_Type2Factory[IfcTable::getClassType()] = m_IfcTable_Factory;
  }
  return m_IfcTable_Factory;
}

IfcTableRow_Factory *Model::getIfcTableRow_Factory() {
  if (!m_IfcTableRow_Factory) {
    m_IfcTableRow_Factory = new IfcTableRow_Factory;
    m_IfcTableRow_Factory->setModel(this);
    m_Type2Factory[IfcTableRow::getClassType()] = m_IfcTableRow_Factory;
  }
  return m_IfcTableRow_Factory;
}

IfcTankType_Factory *Model::getIfcTankType_Factory() {
  if (!m_IfcTankType_Factory) {
    m_IfcTankType_Factory = new IfcTankType_Factory;
    m_IfcTankType_Factory->setModel(this);
    m_Type2Factory[IfcTankType::getClassType()] = m_IfcTankType_Factory;
  }
  return m_IfcTankType_Factory;
}

IfcTask_Factory *Model::getIfcTask_Factory() {
  if (!m_IfcTask_Factory) {
    m_IfcTask_Factory = new IfcTask_Factory;
    m_IfcTask_Factory->setModel(this);
    m_Type2Factory[IfcTask::getClassType()] = m_IfcTask_Factory;
  }
  return m_IfcTask_Factory;
}

IfcTelecomAddress_Factory *Model::getIfcTelecomAddress_Factory() {
  if (!m_IfcTelecomAddress_Factory) {
    m_IfcTelecomAddress_Factory = new IfcTelecomAddress_Factory;
    m_IfcTelecomAddress_Factory->setModel(this);
    m_Type2Factory[IfcTelecomAddress::getClassType()] = m_IfcTelecomAddress_Factory;
  }
  return m_IfcTelecomAddress_Factory;
}

IfcTendon_Factory *Model::getIfcTendon_Factory() {
  if (!m_IfcTendon_Factory) {
    m_IfcTendon_Factory = new IfcTendon_Factory;
    m_IfcTendon_Factory->setModel(this);
    m_Type2Factory[IfcTendon::getClassType()] = m_IfcTendon_Factory;
  }
  return m_IfcTendon_Factory;
}

IfcTendonAnchor_Factory *Model::getIfcTendonAnchor_Factory() {
  if (!m_IfcTendonAnchor_Factory) {
    m_IfcTendonAnchor_Factory = new IfcTendonAnchor_Factory;
    m_IfcTendonAnchor_Factory->setModel(this);
    m_Type2Factory[IfcTendonAnchor::getClassType()] = m_IfcTendonAnchor_Factory;
  }
  return m_IfcTendonAnchor_Factory;
}

IfcTerminatorSymbol_Factory *Model::getIfcTerminatorSymbol_Factory() {
  if (!m_IfcTerminatorSymbol_Factory) {
    m_IfcTerminatorSymbol_Factory = new IfcTerminatorSymbol_Factory;
    m_IfcTerminatorSymbol_Factory->setModel(this);
    m_Type2Factory[IfcTerminatorSymbol::getClassType()] = m_IfcTerminatorSymbol_Factory;
  }
  return m_IfcTerminatorSymbol_Factory;
}

IfcTextLiteral_Factory *Model::getIfcTextLiteral_Factory() {
  if (!m_IfcTextLiteral_Factory) {
    m_IfcTextLiteral_Factory = new IfcTextLiteral_Factory;
    m_IfcTextLiteral_Factory->setModel(this);
    m_Type2Factory[IfcTextLiteral::getClassType()] = m_IfcTextLiteral_Factory;
  }
  return m_IfcTextLiteral_Factory;
}

IfcTextLiteralWithExtent_Factory *Model::getIfcTextLiteralWithExtent_Factory() {
  if (!m_IfcTextLiteralWithExtent_Factory) {
    m_IfcTextLiteralWithExtent_Factory = new IfcTextLiteralWithExtent_Factory;
    m_IfcTextLiteralWithExtent_Factory->setModel(this);
    m_Type2Factory[IfcTextLiteralWithExtent::getClassType()] = m_IfcTextLiteralWithExtent_Factory;
  }
  return m_IfcTextLiteralWithExtent_Factory;
}

IfcTextStyle_Factory *Model::getIfcTextStyle_Factory() {
  if (!m_IfcTextStyle_Factory) {
    m_IfcTextStyle_Factory = new IfcTextStyle_Factory;
    m_IfcTextStyle_Factory->setModel(this);
    m_Type2Factory[IfcTextStyle::getClassType()] = m_IfcTextStyle_Factory;
  }
  return m_IfcTextStyle_Factory;
}

IfcTextStyleFontModel_Factory *Model::getIfcTextStyleFontModel_Factory() {
  if (!m_IfcTextStyleFontModel_Factory) {
    m_IfcTextStyleFontModel_Factory = new IfcTextStyleFontModel_Factory;
    m_IfcTextStyleFontModel_Factory->setModel(this);
    m_Type2Factory[IfcTextStyleFontModel::getClassType()] = m_IfcTextStyleFontModel_Factory;
  }
  return m_IfcTextStyleFontModel_Factory;
}

IfcTextStyleForDefinedFont_Factory *Model::getIfcTextStyleForDefinedFont_Factory() {
  if (!m_IfcTextStyleForDefinedFont_Factory) {
    m_IfcTextStyleForDefinedFont_Factory = new IfcTextStyleForDefinedFont_Factory;
    m_IfcTextStyleForDefinedFont_Factory->setModel(this);
    m_Type2Factory[IfcTextStyleForDefinedFont::getClassType()] = m_IfcTextStyleForDefinedFont_Factory;
  }
  return m_IfcTextStyleForDefinedFont_Factory;
}

IfcTextStyleTextModel_Factory *Model::getIfcTextStyleTextModel_Factory() {
  if (!m_IfcTextStyleTextModel_Factory) {
    m_IfcTextStyleTextModel_Factory = new IfcTextStyleTextModel_Factory;
    m_IfcTextStyleTextModel_Factory->setModel(this);
    m_Type2Factory[IfcTextStyleTextModel::getClassType()] = m_IfcTextStyleTextModel_Factory;
  }
  return m_IfcTextStyleTextModel_Factory;
}

IfcTextStyleWithBoxCharacteristics_Factory *Model::getIfcTextStyleWithBoxCharacteristics_Factory() {
  if (!m_IfcTextStyleWithBoxCharacteristics_Factory) {
    m_IfcTextStyleWithBoxCharacteristics_Factory = new IfcTextStyleWithBoxCharacteristics_Factory;
    m_IfcTextStyleWithBoxCharacteristics_Factory->setModel(this);
    m_Type2Factory[IfcTextStyleWithBoxCharacteristics::getClassType()] = m_IfcTextStyleWithBoxCharacteristics_Factory;
  }
  return m_IfcTextStyleWithBoxCharacteristics_Factory;
}

IfcTextureCoordinateGenerator_Factory *Model::getIfcTextureCoordinateGenerator_Factory() {
  if (!m_IfcTextureCoordinateGenerator_Factory) {
    m_IfcTextureCoordinateGenerator_Factory = new IfcTextureCoordinateGenerator_Factory;
    m_IfcTextureCoordinateGenerator_Factory->setModel(this);
    m_Type2Factory[IfcTextureCoordinateGenerator::getClassType()] = m_IfcTextureCoordinateGenerator_Factory;
  }
  return m_IfcTextureCoordinateGenerator_Factory;
}

IfcTextureMap_Factory *Model::getIfcTextureMap_Factory() {
  if (!m_IfcTextureMap_Factory) {
    m_IfcTextureMap_Factory = new IfcTextureMap_Factory;
    m_IfcTextureMap_Factory->setModel(this);
    m_Type2Factory[IfcTextureMap::getClassType()] = m_IfcTextureMap_Factory;
  }
  return m_IfcTextureMap_Factory;
}

IfcTextureVertex_Factory *Model::getIfcTextureVertex_Factory() {
  if (!m_IfcTextureVertex_Factory) {
    m_IfcTextureVertex_Factory = new IfcTextureVertex_Factory;
    m_IfcTextureVertex_Factory->setModel(this);
    m_Type2Factory[IfcTextureVertex::getClassType()] = m_IfcTextureVertex_Factory;
  }
  return m_IfcTextureVertex_Factory;
}

IfcThermalMaterialProperties_Factory *Model::getIfcThermalMaterialProperties_Factory() {
  if (!m_IfcThermalMaterialProperties_Factory) {
    m_IfcThermalMaterialProperties_Factory = new IfcThermalMaterialProperties_Factory;
    m_IfcThermalMaterialProperties_Factory->setModel(this);
    m_Type2Factory[IfcThermalMaterialProperties::getClassType()] = m_IfcThermalMaterialProperties_Factory;
  }
  return m_IfcThermalMaterialProperties_Factory;
}

IfcTimeSeriesReferenceRelationship_Factory *Model::getIfcTimeSeriesReferenceRelationship_Factory() {
  if (!m_IfcTimeSeriesReferenceRelationship_Factory) {
    m_IfcTimeSeriesReferenceRelationship_Factory = new IfcTimeSeriesReferenceRelationship_Factory;
    m_IfcTimeSeriesReferenceRelationship_Factory->setModel(this);
    m_Type2Factory[IfcTimeSeriesReferenceRelationship::getClassType()] = m_IfcTimeSeriesReferenceRelationship_Factory;
  }
  return m_IfcTimeSeriesReferenceRelationship_Factory;
}

IfcTimeSeriesSchedule_Factory *Model::getIfcTimeSeriesSchedule_Factory() {
  if (!m_IfcTimeSeriesSchedule_Factory) {
    m_IfcTimeSeriesSchedule_Factory = new IfcTimeSeriesSchedule_Factory;
    m_IfcTimeSeriesSchedule_Factory->setModel(this);
    m_Type2Factory[IfcTimeSeriesSchedule::getClassType()] = m_IfcTimeSeriesSchedule_Factory;
  }
  return m_IfcTimeSeriesSchedule_Factory;
}

IfcTimeSeriesValue_Factory *Model::getIfcTimeSeriesValue_Factory() {
  if (!m_IfcTimeSeriesValue_Factory) {
    m_IfcTimeSeriesValue_Factory = new IfcTimeSeriesValue_Factory;
    m_IfcTimeSeriesValue_Factory->setModel(this);
    m_Type2Factory[IfcTimeSeriesValue::getClassType()] = m_IfcTimeSeriesValue_Factory;
  }
  return m_IfcTimeSeriesValue_Factory;
}

IfcTopologyRepresentation_Factory *Model::getIfcTopologyRepresentation_Factory() {
  if (!m_IfcTopologyRepresentation_Factory) {
    m_IfcTopologyRepresentation_Factory = new IfcTopologyRepresentation_Factory;
    m_IfcTopologyRepresentation_Factory->setModel(this);
    m_Type2Factory[IfcTopologyRepresentation::getClassType()] = m_IfcTopologyRepresentation_Factory;
  }
  return m_IfcTopologyRepresentation_Factory;
}

IfcTransformerType_Factory *Model::getIfcTransformerType_Factory() {
  if (!m_IfcTransformerType_Factory) {
    m_IfcTransformerType_Factory = new IfcTransformerType_Factory;
    m_IfcTransformerType_Factory->setModel(this);
    m_Type2Factory[IfcTransformerType::getClassType()] = m_IfcTransformerType_Factory;
  }
  return m_IfcTransformerType_Factory;
}

IfcTransportElement_Factory *Model::getIfcTransportElement_Factory() {
  if (!m_IfcTransportElement_Factory) {
    m_IfcTransportElement_Factory = new IfcTransportElement_Factory;
    m_IfcTransportElement_Factory->setModel(this);
    m_Type2Factory[IfcTransportElement::getClassType()] = m_IfcTransportElement_Factory;
  }
  return m_IfcTransportElement_Factory;
}

IfcTransportElementType_Factory *Model::getIfcTransportElementType_Factory() {
  if (!m_IfcTransportElementType_Factory) {
    m_IfcTransportElementType_Factory = new IfcTransportElementType_Factory;
    m_IfcTransportElementType_Factory->setModel(this);
    m_Type2Factory[IfcTransportElementType::getClassType()] = m_IfcTransportElementType_Factory;
  }
  return m_IfcTransportElementType_Factory;
}

IfcTrapeziumProfileDef_Factory *Model::getIfcTrapeziumProfileDef_Factory() {
  if (!m_IfcTrapeziumProfileDef_Factory) {
    m_IfcTrapeziumProfileDef_Factory = new IfcTrapeziumProfileDef_Factory;
    m_IfcTrapeziumProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcTrapeziumProfileDef::getClassType()] = m_IfcTrapeziumProfileDef_Factory;
  }
  return m_IfcTrapeziumProfileDef_Factory;
}

IfcTrimmedCurve_Factory *Model::getIfcTrimmedCurve_Factory() {
  if (!m_IfcTrimmedCurve_Factory) {
    m_IfcTrimmedCurve_Factory = new IfcTrimmedCurve_Factory;
    m_IfcTrimmedCurve_Factory->setModel(this);
    m_Type2Factory[IfcTrimmedCurve::getClassType()] = m_IfcTrimmedCurve_Factory;
  }
  return m_IfcTrimmedCurve_Factory;
}

IfcTubeBundleType_Factory *Model::getIfcTubeBundleType_Factory() {
  if (!m_IfcTubeBundleType_Factory) {
    m_IfcTubeBundleType_Factory = new IfcTubeBundleType_Factory;
    m_IfcTubeBundleType_Factory->setModel(this);
    m_Type2Factory[IfcTubeBundleType::getClassType()] = m_IfcTubeBundleType_Factory;
  }
  return m_IfcTubeBundleType_Factory;
}

IfcTwoDirectionRepeatFactor_Factory *Model::getIfcTwoDirectionRepeatFactor_Factory() {
  if (!m_IfcTwoDirectionRepeatFactor_Factory) {
    m_IfcTwoDirectionRepeatFactor_Factory = new IfcTwoDirectionRepeatFactor_Factory;
    m_IfcTwoDirectionRepeatFactor_Factory->setModel(this);
    m_Type2Factory[IfcTwoDirectionRepeatFactor::getClassType()] = m_IfcTwoDirectionRepeatFactor_Factory;
  }
  return m_IfcTwoDirectionRepeatFactor_Factory;
}

IfcTypeObject_Factory *Model::getIfcTypeObject_Factory() {
  if (!m_IfcTypeObject_Factory) {
    m_IfcTypeObject_Factory = new IfcTypeObject_Factory;
    m_IfcTypeObject_Factory->setModel(this);
    m_Type2Factory[IfcTypeObject::getClassType()] = m_IfcTypeObject_Factory;
  }
  return m_IfcTypeObject_Factory;
}

IfcTypeProduct_Factory *Model::getIfcTypeProduct_Factory() {
  if (!m_IfcTypeProduct_Factory) {
    m_IfcTypeProduct_Factory = new IfcTypeProduct_Factory;
    m_IfcTypeProduct_Factory->setModel(this);
    m_Type2Factory[IfcTypeProduct::getClassType()] = m_IfcTypeProduct_Factory;
  }
  return m_IfcTypeProduct_Factory;
}

IfcUShapeProfileDef_Factory *Model::getIfcUShapeProfileDef_Factory() {
  if (!m_IfcUShapeProfileDef_Factory) {
    m_IfcUShapeProfileDef_Factory = new IfcUShapeProfileDef_Factory;
    m_IfcUShapeProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcUShapeProfileDef::getClassType()] = m_IfcUShapeProfileDef_Factory;
  }
  return m_IfcUShapeProfileDef_Factory;
}

IfcUnitAssignment_Factory *Model::getIfcUnitAssignment_Factory() {
  if (!m_IfcUnitAssignment_Factory) {
    m_IfcUnitAssignment_Factory = new IfcUnitAssignment_Factory;
    m_IfcUnitAssignment_Factory->setModel(this);
    m_Type2Factory[IfcUnitAssignment::getClassType()] = m_IfcUnitAssignment_Factory;
  }
  return m_IfcUnitAssignment_Factory;
}

IfcUnitaryEquipmentType_Factory *Model::getIfcUnitaryEquipmentType_Factory() {
  if (!m_IfcUnitaryEquipmentType_Factory) {
    m_IfcUnitaryEquipmentType_Factory = new IfcUnitaryEquipmentType_Factory;
    m_IfcUnitaryEquipmentType_Factory->setModel(this);
    m_Type2Factory[IfcUnitaryEquipmentType::getClassType()] = m_IfcUnitaryEquipmentType_Factory;
  }
  return m_IfcUnitaryEquipmentType_Factory;
}

IfcValveType_Factory *Model::getIfcValveType_Factory() {
  if (!m_IfcValveType_Factory) {
    m_IfcValveType_Factory = new IfcValveType_Factory;
    m_IfcValveType_Factory->setModel(this);
    m_Type2Factory[IfcValveType::getClassType()] = m_IfcValveType_Factory;
  }
  return m_IfcValveType_Factory;
}

IfcVector_Factory *Model::getIfcVector_Factory() {
  if (!m_IfcVector_Factory) {
    m_IfcVector_Factory = new IfcVector_Factory;
    m_IfcVector_Factory->setModel(this);
    m_Type2Factory[IfcVector::getClassType()] = m_IfcVector_Factory;
  }
  return m_IfcVector_Factory;
}

IfcVertex_Factory *Model::getIfcVertex_Factory() {
  if (!m_IfcVertex_Factory) {
    m_IfcVertex_Factory = new IfcVertex_Factory;
    m_IfcVertex_Factory->setModel(this);
    m_Type2Factory[IfcVertex::getClassType()] = m_IfcVertex_Factory;
  }
  return m_IfcVertex_Factory;
}

IfcVertexBasedTextureMap_Factory *Model::getIfcVertexBasedTextureMap_Factory() {
  if (!m_IfcVertexBasedTextureMap_Factory) {
    m_IfcVertexBasedTextureMap_Factory = new IfcVertexBasedTextureMap_Factory;
    m_IfcVertexBasedTextureMap_Factory->setModel(this);
    m_Type2Factory[IfcVertexBasedTextureMap::getClassType()] = m_IfcVertexBasedTextureMap_Factory;
  }
  return m_IfcVertexBasedTextureMap_Factory;
}

IfcVertexLoop_Factory *Model::getIfcVertexLoop_Factory() {
  if (!m_IfcVertexLoop_Factory) {
    m_IfcVertexLoop_Factory = new IfcVertexLoop_Factory;
    m_IfcVertexLoop_Factory->setModel(this);
    m_Type2Factory[IfcVertexLoop::getClassType()] = m_IfcVertexLoop_Factory;
  }
  return m_IfcVertexLoop_Factory;
}

IfcVertexPoint_Factory *Model::getIfcVertexPoint_Factory() {
  if (!m_IfcVertexPoint_Factory) {
    m_IfcVertexPoint_Factory = new IfcVertexPoint_Factory;
    m_IfcVertexPoint_Factory->setModel(this);
    m_Type2Factory[IfcVertexPoint::getClassType()] = m_IfcVertexPoint_Factory;
  }
  return m_IfcVertexPoint_Factory;
}

IfcVibrationIsolatorType_Factory *Model::getIfcVibrationIsolatorType_Factory() {
  if (!m_IfcVibrationIsolatorType_Factory) {
    m_IfcVibrationIsolatorType_Factory = new IfcVibrationIsolatorType_Factory;
    m_IfcVibrationIsolatorType_Factory->setModel(this);
    m_Type2Factory[IfcVibrationIsolatorType::getClassType()] = m_IfcVibrationIsolatorType_Factory;
  }
  return m_IfcVibrationIsolatorType_Factory;
}

IfcVirtualElement_Factory *Model::getIfcVirtualElement_Factory() {
  if (!m_IfcVirtualElement_Factory) {
    m_IfcVirtualElement_Factory = new IfcVirtualElement_Factory;
    m_IfcVirtualElement_Factory->setModel(this);
    m_Type2Factory[IfcVirtualElement::getClassType()] = m_IfcVirtualElement_Factory;
  }
  return m_IfcVirtualElement_Factory;
}

IfcVirtualGridIntersection_Factory *Model::getIfcVirtualGridIntersection_Factory() {
  if (!m_IfcVirtualGridIntersection_Factory) {
    m_IfcVirtualGridIntersection_Factory = new IfcVirtualGridIntersection_Factory;
    m_IfcVirtualGridIntersection_Factory->setModel(this);
    m_Type2Factory[IfcVirtualGridIntersection::getClassType()] = m_IfcVirtualGridIntersection_Factory;
  }
  return m_IfcVirtualGridIntersection_Factory;
}

IfcWall_Factory *Model::getIfcWall_Factory() {
  if (!m_IfcWall_Factory) {
    m_IfcWall_Factory = new IfcWall_Factory;
    m_IfcWall_Factory->setModel(this);
    m_Type2Factory[IfcWall::getClassType()] = m_IfcWall_Factory;
  }
  return m_IfcWall_Factory;
}

IfcWallStandardCase_Factory *Model::getIfcWallStandardCase_Factory() {
  if (!m_IfcWallStandardCase_Factory) {
    m_IfcWallStandardCase_Factory = new IfcWallStandardCase_Factory;
    m_IfcWallStandardCase_Factory->setModel(this);
    m_Type2Factory[IfcWallStandardCase::getClassType()] = m_IfcWallStandardCase_Factory;
  }
  return m_IfcWallStandardCase_Factory;
}

IfcWallType_Factory *Model::getIfcWallType_Factory() {
  if (!m_IfcWallType_Factory) {
    m_IfcWallType_Factory = new IfcWallType_Factory;
    m_IfcWallType_Factory->setModel(this);
    m_Type2Factory[IfcWallType::getClassType()] = m_IfcWallType_Factory;
  }
  return m_IfcWallType_Factory;
}

IfcWasteTerminalType_Factory *Model::getIfcWasteTerminalType_Factory() {
  if (!m_IfcWasteTerminalType_Factory) {
    m_IfcWasteTerminalType_Factory = new IfcWasteTerminalType_Factory;
    m_IfcWasteTerminalType_Factory->setModel(this);
    m_Type2Factory[IfcWasteTerminalType::getClassType()] = m_IfcWasteTerminalType_Factory;
  }
  return m_IfcWasteTerminalType_Factory;
}

IfcWaterProperties_Factory *Model::getIfcWaterProperties_Factory() {
  if (!m_IfcWaterProperties_Factory) {
    m_IfcWaterProperties_Factory = new IfcWaterProperties_Factory;
    m_IfcWaterProperties_Factory->setModel(this);
    m_Type2Factory[IfcWaterProperties::getClassType()] = m_IfcWaterProperties_Factory;
  }
  return m_IfcWaterProperties_Factory;
}

IfcWindow_Factory *Model::getIfcWindow_Factory() {
  if (!m_IfcWindow_Factory) {
    m_IfcWindow_Factory = new IfcWindow_Factory;
    m_IfcWindow_Factory->setModel(this);
    m_Type2Factory[IfcWindow::getClassType()] = m_IfcWindow_Factory;
  }
  return m_IfcWindow_Factory;
}

IfcWindowLiningProperties_Factory *Model::getIfcWindowLiningProperties_Factory() {
  if (!m_IfcWindowLiningProperties_Factory) {
    m_IfcWindowLiningProperties_Factory = new IfcWindowLiningProperties_Factory;
    m_IfcWindowLiningProperties_Factory->setModel(this);
    m_Type2Factory[IfcWindowLiningProperties::getClassType()] = m_IfcWindowLiningProperties_Factory;
  }
  return m_IfcWindowLiningProperties_Factory;
}

IfcWindowPanelProperties_Factory *Model::getIfcWindowPanelProperties_Factory() {
  if (!m_IfcWindowPanelProperties_Factory) {
    m_IfcWindowPanelProperties_Factory = new IfcWindowPanelProperties_Factory;
    m_IfcWindowPanelProperties_Factory->setModel(this);
    m_Type2Factory[IfcWindowPanelProperties::getClassType()] = m_IfcWindowPanelProperties_Factory;
  }
  return m_IfcWindowPanelProperties_Factory;
}

IfcWindowStyle_Factory *Model::getIfcWindowStyle_Factory() {
  if (!m_IfcWindowStyle_Factory) {
    m_IfcWindowStyle_Factory = new IfcWindowStyle_Factory;
    m_IfcWindowStyle_Factory->setModel(this);
    m_Type2Factory[IfcWindowStyle::getClassType()] = m_IfcWindowStyle_Factory;
  }
  return m_IfcWindowStyle_Factory;
}

IfcWorkPlan_Factory *Model::getIfcWorkPlan_Factory() {
  if (!m_IfcWorkPlan_Factory) {
    m_IfcWorkPlan_Factory = new IfcWorkPlan_Factory;
    m_IfcWorkPlan_Factory->setModel(this);
    m_Type2Factory[IfcWorkPlan::getClassType()] = m_IfcWorkPlan_Factory;
  }
  return m_IfcWorkPlan_Factory;
}

IfcWorkSchedule_Factory *Model::getIfcWorkSchedule_Factory() {
  if (!m_IfcWorkSchedule_Factory) {
    m_IfcWorkSchedule_Factory = new IfcWorkSchedule_Factory;
    m_IfcWorkSchedule_Factory->setModel(this);
    m_Type2Factory[IfcWorkSchedule::getClassType()] = m_IfcWorkSchedule_Factory;
  }
  return m_IfcWorkSchedule_Factory;
}

IfcZShapeProfileDef_Factory *Model::getIfcZShapeProfileDef_Factory() {
  if (!m_IfcZShapeProfileDef_Factory) {
    m_IfcZShapeProfileDef_Factory = new IfcZShapeProfileDef_Factory;
    m_IfcZShapeProfileDef_Factory->setModel(this);
    m_Type2Factory[IfcZShapeProfileDef::getClassType()] = m_IfcZShapeProfileDef_Factory;
  }
  return m_IfcZShapeProfileDef_Factory;
}

IfcZone_Factory *Model::getIfcZone_Factory() {
  if (!m_IfcZone_Factory) {
    m_IfcZone_Factory = new IfcZone_Factory;
    m_IfcZone_Factory->setModel(this);
    m_Type2Factory[IfcZone::getClassType()] = m_IfcZone_Factory;
  }
  return m_IfcZone_Factory;
}

