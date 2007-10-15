/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/CopyOp.h"




#include "ifc2x3/ExpressDataSet.h"
#include "ifc2x3/Ifc2DCompositeCurve.h"
#include "ifc2x3/IfcActionRequest.h"
#include "ifc2x3/IfcActor.h"
#include "ifc2x3/IfcActorRole.h"
#include "ifc2x3/IfcActuatorType.h"
#include "ifc2x3/IfcAddress.h"
#include "ifc2x3/IfcAirTerminalBoxType.h"
#include "ifc2x3/IfcAirTerminalType.h"
#include "ifc2x3/IfcAirToAirHeatRecoveryType.h"
#include "ifc2x3/IfcAlarmType.h"
#include "ifc2x3/IfcAlignmentElement.h"
#include "ifc2x3/IfcAngularDimension.h"
#include "ifc2x3/IfcAnnotation.h"
#include "ifc2x3/IfcAnnotationCurveOccurrence.h"
#include "ifc2x3/IfcAnnotationFillArea.h"
#include "ifc2x3/IfcAnnotationFillAreaOccurrence.h"
#include "ifc2x3/IfcAnnotationOccurrence.h"
#include "ifc2x3/IfcAnnotationSurface.h"
#include "ifc2x3/IfcAnnotationSurfaceOccurrence.h"
#include "ifc2x3/IfcAnnotationSymbolOccurrence.h"
#include "ifc2x3/IfcAnnotationTextOccurrence.h"
#include "ifc2x3/IfcApplication.h"
#include "ifc2x3/IfcAppliedValue.h"
#include "ifc2x3/IfcAppliedValueRelationship.h"
#include "ifc2x3/IfcApproval.h"
#include "ifc2x3/IfcApprovalActorRelationship.h"
#include "ifc2x3/IfcApprovalPropertyRelationship.h"
#include "ifc2x3/IfcApprovalRelationship.h"
#include "ifc2x3/IfcArbitraryClosedProfileDef.h"
#include "ifc2x3/IfcArbitraryOpenProfileDef.h"
#include "ifc2x3/IfcArbitraryProfileDefWithVoids.h"
#include "ifc2x3/IfcAsset.h"
#include "ifc2x3/IfcAsymmetricIShapeProfileDef.h"
#include "ifc2x3/IfcAxis1Placement.h"
#include "ifc2x3/IfcAxis2Placement2D.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcBSplineCurve.h"
#include "ifc2x3/IfcBeam.h"
#include "ifc2x3/IfcBeamType.h"
#include "ifc2x3/IfcBezierCurve.h"
#include "ifc2x3/IfcBlobTexture.h"
#include "ifc2x3/IfcBlock.h"
#include "ifc2x3/IfcBoilerType.h"
#include "ifc2x3/IfcBooleanClippingResult.h"
#include "ifc2x3/IfcBooleanResult.h"
#include "ifc2x3/IfcBoundaryCondition.h"
#include "ifc2x3/IfcBoundaryEdgeCondition.h"
#include "ifc2x3/IfcBoundaryFaceCondition.h"
#include "ifc2x3/IfcBoundaryNodeCondition.h"
#include "ifc2x3/IfcBoundaryNodeConditionWarping.h"
#include "ifc2x3/IfcBoundedCurve.h"
#include "ifc2x3/IfcBoundedSurface.h"
#include "ifc2x3/IfcBoundingBox.h"
#include "ifc2x3/IfcBoxedHalfSpace.h"
#include "ifc2x3/IfcBridge.h"
#include "ifc2x3/IfcBridgeContactElement.h"
#include "ifc2x3/IfcBridgeElement.h"
#include "ifc2x3/IfcBridgePart.h"
#include "ifc2x3/IfcBridgePrismaticElement.h"
#include "ifc2x3/IfcBridgeSegment.h"
#include "ifc2x3/IfcBridgeSegmentPart.h"
#include "ifc2x3/IfcBridgeStructureElement.h"
#include "ifc2x3/IfcBuilding.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/IfcBuildingElementPart.h"
#include "ifc2x3/IfcBuildingElementProxy.h"
#include "ifc2x3/IfcBuildingElementProxyType.h"
#include "ifc2x3/IfcBuildingElementType.h"
#include "ifc2x3/IfcBuildingStorey.h"
#include "ifc2x3/IfcCShapeProfileDef.h"
#include "ifc2x3/IfcCableCarrierFittingType.h"
#include "ifc2x3/IfcCableCarrierSegmentType.h"
#include "ifc2x3/IfcCableSegmentType.h"
#include "ifc2x3/IfcCalendarDate.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcCartesianTransformationOperator.h"
#include "ifc2x3/IfcCartesianTransformationOperator2D.h"
#include "ifc2x3/IfcCartesianTransformationOperator2DnonUniform.h"
#include "ifc2x3/IfcCartesianTransformationOperator3D.h"
#include "ifc2x3/IfcCartesianTransformationOperator3DnonUniform.h"
#include "ifc2x3/IfcCenterLineProfileDef.h"
#include "ifc2x3/IfcChamferEdgeFeature.h"
#include "ifc2x3/IfcChillerType.h"
#include "ifc2x3/IfcCircle.h"
#include "ifc2x3/IfcCircleHollowProfileDef.h"
#include "ifc2x3/IfcCircleProfileDef.h"
#include "ifc2x3/IfcCivilElement.h"
#include "ifc2x3/IfcCivilElementPart.h"
#include "ifc2x3/IfcCivilSheath.h"
#include "ifc2x3/IfcCivilStructureElement.h"
#include "ifc2x3/IfcCivilVoid.h"
#include "ifc2x3/IfcClassification.h"
#include "ifc2x3/IfcClassificationItem.h"
#include "ifc2x3/IfcClassificationItemRelationship.h"
#include "ifc2x3/IfcClassificationNotation.h"
#include "ifc2x3/IfcClassificationNotationFacet.h"
#include "ifc2x3/IfcClassificationReference.h"
#include "ifc2x3/IfcClosedShell.h"
#include "ifc2x3/IfcClothoid.h"
#include "ifc2x3/IfcCoilType.h"
#include "ifc2x3/IfcColourRgb.h"
#include "ifc2x3/IfcColourSpecification.h"
#include "ifc2x3/IfcColumn.h"
#include "ifc2x3/IfcColumnType.h"
#include "ifc2x3/IfcComplexProperty.h"
#include "ifc2x3/IfcCompositeCurve.h"
#include "ifc2x3/IfcCompositeCurveSegment.h"
#include "ifc2x3/IfcCompositeProfileDef.h"
#include "ifc2x3/IfcCompressorType.h"
#include "ifc2x3/IfcCondenserType.h"
#include "ifc2x3/IfcCondition.h"
#include "ifc2x3/IfcConditionCriterion.h"
#include "ifc2x3/IfcConic.h"
#include "ifc2x3/IfcConnectedFaceSet.h"
#include "ifc2x3/IfcConnectionCurveGeometry.h"
#include "ifc2x3/IfcConnectionGeometry.h"
#include "ifc2x3/IfcConnectionPointEccentricity.h"
#include "ifc2x3/IfcConnectionPointGeometry.h"
#include "ifc2x3/IfcConnectionPortGeometry.h"
#include "ifc2x3/IfcConnectionSurfaceGeometry.h"
#include "ifc2x3/IfcConstraint.h"
#include "ifc2x3/IfcConstraintAggregationRelationship.h"
#include "ifc2x3/IfcConstraintClassificationRelationship.h"
#include "ifc2x3/IfcConstraintRelationship.h"
#include "ifc2x3/IfcConstructionEquipmentResource.h"
#include "ifc2x3/IfcConstructionMaterialResource.h"
#include "ifc2x3/IfcConstructionProductResource.h"
#include "ifc2x3/IfcConstructionResource.h"
#include "ifc2x3/IfcContextDependentUnit.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/IfcControllerType.h"
#include "ifc2x3/IfcConversionBasedUnit.h"
#include "ifc2x3/IfcCooledBeamType.h"
#include "ifc2x3/IfcCoolingTowerType.h"
#include "ifc2x3/IfcCoordinatedUniversalTimeOffset.h"
#include "ifc2x3/IfcCostItem.h"
#include "ifc2x3/IfcCostSchedule.h"
#include "ifc2x3/IfcCostValue.h"
#include "ifc2x3/IfcCovering.h"
#include "ifc2x3/IfcCoveringType.h"
#include "ifc2x3/IfcCraneRailAShapeProfileDef.h"
#include "ifc2x3/IfcCraneRailFShapeProfileDef.h"
#include "ifc2x3/IfcCrewResource.h"
#include "ifc2x3/IfcCsgPrimitive3D.h"
#include "ifc2x3/IfcCsgSolid.h"
#include "ifc2x3/IfcCurrencyRelationship.h"
#include "ifc2x3/IfcCurtainWall.h"
#include "ifc2x3/IfcCurtainWallType.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcCurveBoundedPlane.h"
#include "ifc2x3/IfcCurveStyle.h"
#include "ifc2x3/IfcCurveStyleFont.h"
#include "ifc2x3/IfcCurveStyleFontAndScaling.h"
#include "ifc2x3/IfcCurveStyleFontPattern.h"
#include "ifc2x3/IfcDamperType.h"
#include "ifc2x3/IfcDateAndTime.h"
#include "ifc2x3/IfcDefinedSymbol.h"
#include "ifc2x3/IfcDerivedProfileDef.h"
#include "ifc2x3/IfcDerivedUnit.h"
#include "ifc2x3/IfcDerivedUnitElement.h"
#include "ifc2x3/IfcDiameterDimension.h"
#include "ifc2x3/IfcDimensionCalloutRelationship.h"
#include "ifc2x3/IfcDimensionCurve.h"
#include "ifc2x3/IfcDimensionCurveDirectedCallout.h"
#include "ifc2x3/IfcDimensionCurveTerminator.h"
#include "ifc2x3/IfcDimensionPair.h"
#include "ifc2x3/IfcDimensionalExponents.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcDiscreteAccessory.h"
#include "ifc2x3/IfcDiscreteAccessoryType.h"
#include "ifc2x3/IfcDistributionChamberElement.h"
#include "ifc2x3/IfcDistributionChamberElementType.h"
#include "ifc2x3/IfcDistributionControlElement.h"
#include "ifc2x3/IfcDistributionControlElementType.h"
#include "ifc2x3/IfcDistributionElement.h"
#include "ifc2x3/IfcDistributionElementType.h"
#include "ifc2x3/IfcDistributionFlowElement.h"
#include "ifc2x3/IfcDistributionFlowElementType.h"
#include "ifc2x3/IfcDistributionPort.h"
#include "ifc2x3/IfcDocumentElectronicFormat.h"
#include "ifc2x3/IfcDocumentInformation.h"
#include "ifc2x3/IfcDocumentInformationRelationship.h"
#include "ifc2x3/IfcDocumentReference.h"
#include "ifc2x3/IfcDoor.h"
#include "ifc2x3/IfcDoorLiningProperties.h"
#include "ifc2x3/IfcDoorPanelProperties.h"
#include "ifc2x3/IfcDoorStyle.h"
#include "ifc2x3/IfcDraughtingCallout.h"
#include "ifc2x3/IfcDraughtingCalloutRelationship.h"
#include "ifc2x3/IfcDraughtingPreDefinedColour.h"
#include "ifc2x3/IfcDraughtingPreDefinedCurveFont.h"
#include "ifc2x3/IfcDraughtingPreDefinedTextFont.h"
#include "ifc2x3/IfcDuctFittingType.h"
#include "ifc2x3/IfcDuctSegmentType.h"
#include "ifc2x3/IfcDuctSilencerType.h"
#include "ifc2x3/IfcEdge.h"
#include "ifc2x3/IfcEdgeCurve.h"
#include "ifc2x3/IfcEdgeFeature.h"
#include "ifc2x3/IfcEdgeLoop.h"
#include "ifc2x3/IfcElectricApplianceType.h"
#include "ifc2x3/IfcElectricDistributionPoint.h"
#include "ifc2x3/IfcElectricFlowStorageDeviceType.h"
#include "ifc2x3/IfcElectricGeneratorType.h"
#include "ifc2x3/IfcElectricHeaterType.h"
#include "ifc2x3/IfcElectricMotorType.h"
#include "ifc2x3/IfcElectricTimeControlType.h"
#include "ifc2x3/IfcElectricalBaseProperties.h"
#include "ifc2x3/IfcElectricalCircuit.h"
#include "ifc2x3/IfcElectricalElement.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcElementAssembly.h"
#include "ifc2x3/IfcElementComponent.h"
#include "ifc2x3/IfcElementComponentType.h"
#include "ifc2x3/IfcElementPart.h"
#include "ifc2x3/IfcElementQuantity.h"
#include "ifc2x3/IfcElementType.h"
#include "ifc2x3/IfcElementarySurface.h"
#include "ifc2x3/IfcEllipse.h"
#include "ifc2x3/IfcEllipseProfileDef.h"
#include "ifc2x3/IfcEnergyConversionDevice.h"
#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include "ifc2x3/IfcEnergyProperties.h"
#include "ifc2x3/IfcEnvironmentalImpactValue.h"
#include "ifc2x3/IfcEquipmentElement.h"
#include "ifc2x3/IfcEquipmentStandard.h"
#include "ifc2x3/IfcEvaporativeCoolerType.h"
#include "ifc2x3/IfcEvaporatorType.h"
#include "ifc2x3/IfcExtendedMaterialProperties.h"
#include "ifc2x3/IfcExternalReference.h"
#include "ifc2x3/IfcExternallyDefinedHatchStyle.h"
#include "ifc2x3/IfcExternallyDefinedSurfaceStyle.h"
#include "ifc2x3/IfcExternallyDefinedSymbol.h"
#include "ifc2x3/IfcExternallyDefinedTextFont.h"
#include "ifc2x3/IfcExtrudedAreaSolid.h"
#include "ifc2x3/IfcFace.h"
#include "ifc2x3/IfcFaceBasedSurfaceModel.h"
#include "ifc2x3/IfcFaceBound.h"
#include "ifc2x3/IfcFaceOuterBound.h"
#include "ifc2x3/IfcFaceSurface.h"
#include "ifc2x3/IfcFacetedBrep.h"
#include "ifc2x3/IfcFacetedBrepWithVoids.h"
#include "ifc2x3/IfcFailureConnectionCondition.h"
#include "ifc2x3/IfcFanType.h"
#include "ifc2x3/IfcFastener.h"
#include "ifc2x3/IfcFastenerType.h"
#include "ifc2x3/IfcFeatureElement.h"
#include "ifc2x3/IfcFeatureElementAddition.h"
#include "ifc2x3/IfcFeatureElementSubtraction.h"
#include "ifc2x3/IfcFillAreaStyle.h"
#include "ifc2x3/IfcFillAreaStyleHatching.h"
#include "ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h"
#include "ifc2x3/IfcFillAreaStyleTiles.h"
#include "ifc2x3/IfcFilterType.h"
#include "ifc2x3/IfcFireSuppressionTerminalType.h"
#include "ifc2x3/IfcFlowController.h"
#include "ifc2x3/IfcFlowControllerType.h"
#include "ifc2x3/IfcFlowFitting.h"
#include "ifc2x3/IfcFlowFittingType.h"
#include "ifc2x3/IfcFlowInstrumentType.h"
#include "ifc2x3/IfcFlowMeterType.h"
#include "ifc2x3/IfcFlowMovingDevice.h"
#include "ifc2x3/IfcFlowMovingDeviceType.h"
#include "ifc2x3/IfcFlowSegment.h"
#include "ifc2x3/IfcFlowSegmentType.h"
#include "ifc2x3/IfcFlowStorageDevice.h"
#include "ifc2x3/IfcFlowStorageDeviceType.h"
#include "ifc2x3/IfcFlowTerminal.h"
#include "ifc2x3/IfcFlowTerminalType.h"
#include "ifc2x3/IfcFlowTreatmentDevice.h"
#include "ifc2x3/IfcFlowTreatmentDeviceType.h"
#include "ifc2x3/IfcFluidFlowProperties.h"
#include "ifc2x3/IfcFooting.h"
#include "ifc2x3/IfcFuelProperties.h"
#include "ifc2x3/IfcFurnishingElement.h"
#include "ifc2x3/IfcFurnishingElementType.h"
#include "ifc2x3/IfcFurnitureStandard.h"
#include "ifc2x3/IfcFurnitureType.h"
#include "ifc2x3/IfcGasTerminalType.h"
#include "ifc2x3/IfcGeneralMaterialProperties.h"
#include "ifc2x3/IfcGeneralProfileProperties.h"
#include "ifc2x3/IfcGeometricCurveSet.h"
#include "ifc2x3/IfcGeometricRepresentationContext.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/IfcGeometricRepresentationSubContext.h"
#include "ifc2x3/IfcGeometricSet.h"
#include "ifc2x3/IfcGrid.h"
#include "ifc2x3/IfcGridAxis.h"
#include "ifc2x3/IfcGridPlacement.h"
#include "ifc2x3/IfcGroup.h"
#include "ifc2x3/IfcHalfSpaceSolid.h"
#include "ifc2x3/IfcHeatExchangerType.h"
#include "ifc2x3/IfcHumidifierType.h"
#include "ifc2x3/IfcHygroscopicMaterialProperties.h"
#include "ifc2x3/IfcIShapeProfileDef.h"
#include "ifc2x3/IfcImageTexture.h"
#include "ifc2x3/IfcInventory.h"
#include "ifc2x3/IfcIrregularTimeSeries.h"
#include "ifc2x3/IfcIrregularTimeSeriesValue.h"
#include "ifc2x3/IfcJunctionBoxType.h"
#include "ifc2x3/IfcLShapeProfileDef.h"
#include "ifc2x3/IfcLaborResource.h"
#include "ifc2x3/IfcLampType.h"
#include "ifc2x3/IfcLibraryInformation.h"
#include "ifc2x3/IfcLibraryReference.h"
#include "ifc2x3/IfcLightDistributionData.h"
#include "ifc2x3/IfcLightFixtureType.h"
#include "ifc2x3/IfcLightIntensityDistribution.h"
#include "ifc2x3/IfcLightSource.h"
#include "ifc2x3/IfcLightSourceAmbient.h"
#include "ifc2x3/IfcLightSourceDirectional.h"
#include "ifc2x3/IfcLightSourceGoniometric.h"
#include "ifc2x3/IfcLightSourcePositional.h"
#include "ifc2x3/IfcLightSourceSpot.h"
#include "ifc2x3/IfcLine.h"
#include "ifc2x3/IfcLinearDimension.h"
#include "ifc2x3/IfcLocalPlacement.h"
#include "ifc2x3/IfcLocalTime.h"
#include "ifc2x3/IfcLoop.h"
#include "ifc2x3/IfcManifoldSolidBrep.h"
#include "ifc2x3/IfcMappedItem.h"
#include "ifc2x3/IfcMaterial.h"
#include "ifc2x3/IfcMaterialClassificationRelationship.h"
#include "ifc2x3/IfcMaterialDefinitionRepresentation.h"
#include "ifc2x3/IfcMaterialLayer.h"
#include "ifc2x3/IfcMaterialLayerSet.h"
#include "ifc2x3/IfcMaterialLayerSetUsage.h"
#include "ifc2x3/IfcMaterialList.h"
#include "ifc2x3/IfcMaterialProperties.h"
#include "ifc2x3/IfcMeasureWithUnit.h"
#include "ifc2x3/IfcMechanicalConcreteMaterialProperties.h"
#include "ifc2x3/IfcMechanicalFastener.h"
#include "ifc2x3/IfcMechanicalFastenerType.h"
#include "ifc2x3/IfcMechanicalMaterialProperties.h"
#include "ifc2x3/IfcMechanicalSteelMaterialProperties.h"
#include "ifc2x3/IfcMember.h"
#include "ifc2x3/IfcMemberType.h"
#include "ifc2x3/IfcMetric.h"
#include "ifc2x3/IfcMonetaryUnit.h"
#include "ifc2x3/IfcMotorConnectionType.h"
#include "ifc2x3/IfcMove.h"
#include "ifc2x3/IfcNamedUnit.h"
#include "ifc2x3/IfcObject.h"
#include "ifc2x3/IfcObjectDefinition.h"
#include "ifc2x3/IfcObjectPlacement.h"
#include "ifc2x3/IfcObjective.h"
#include "ifc2x3/IfcOccupant.h"
#include "ifc2x3/IfcOffsetCurve2D.h"
#include "ifc2x3/IfcOffsetCurve3D.h"
#include "ifc2x3/IfcOneDirectionRepeatFactor.h"
#include "ifc2x3/IfcOpenShell.h"
#include "ifc2x3/IfcOpeningElement.h"
#include "ifc2x3/IfcOpticalMaterialProperties.h"
#include "ifc2x3/IfcOrderAction.h"
#include "ifc2x3/IfcOrganization.h"
#include "ifc2x3/IfcOrganizationRelationship.h"
#include "ifc2x3/IfcOrientedEdge.h"
#include "ifc2x3/IfcOutletType.h"
#include "ifc2x3/IfcOwnerHistory.h"
#include "ifc2x3/IfcParameterizedProfileDef.h"
#include "ifc2x3/IfcPath.h"
#include "ifc2x3/IfcPerformanceHistory.h"
#include "ifc2x3/IfcPermeableCoveringProperties.h"
#include "ifc2x3/IfcPermit.h"
#include "ifc2x3/IfcPerson.h"
#include "ifc2x3/IfcPersonAndOrganization.h"
#include "ifc2x3/IfcPhysicalComplexQuantity.h"
#include "ifc2x3/IfcPhysicalQuantity.h"
#include "ifc2x3/IfcPhysicalSimpleQuantity.h"
#include "ifc2x3/IfcPile.h"
#include "ifc2x3/IfcPipeFittingType.h"
#include "ifc2x3/IfcPipeSegmentType.h"
#include "ifc2x3/IfcPixelTexture.h"
#include "ifc2x3/IfcPlacement.h"
#include "ifc2x3/IfcPlanarBox.h"
#include "ifc2x3/IfcPlanarExtent.h"
#include "ifc2x3/IfcPlane.h"
#include "ifc2x3/IfcPlate.h"
#include "ifc2x3/IfcPlateType.h"
#include "ifc2x3/IfcPoint.h"
#include "ifc2x3/IfcPointOnCurve.h"
#include "ifc2x3/IfcPointOnSurface.h"
#include "ifc2x3/IfcPolyLoop.h"
#include "ifc2x3/IfcPolygonalBoundedHalfSpace.h"
#include "ifc2x3/IfcPolyline.h"
#include "ifc2x3/IfcPort.h"
#include "ifc2x3/IfcPostalAddress.h"
#include "ifc2x3/IfcPreDefinedColour.h"
#include "ifc2x3/IfcPreDefinedCurveFont.h"
#include "ifc2x3/IfcPreDefinedDimensionSymbol.h"
#include "ifc2x3/IfcPreDefinedItem.h"
#include "ifc2x3/IfcPreDefinedPointMarkerSymbol.h"
#include "ifc2x3/IfcPreDefinedSymbol.h"
#include "ifc2x3/IfcPreDefinedTerminatorSymbol.h"
#include "ifc2x3/IfcPreDefinedTextFont.h"
#include "ifc2x3/IfcPresentationLayerAssignment.h"
#include "ifc2x3/IfcPresentationLayerWithStyle.h"
#include "ifc2x3/IfcPresentationStyle.h"
#include "ifc2x3/IfcPresentationStyleAssignment.h"
#include "ifc2x3/IfcProcedure.h"
#include "ifc2x3/IfcProcess.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcProductDefinitionShape.h"
#include "ifc2x3/IfcProductRepresentation.h"
#include "ifc2x3/IfcProductsOfCombustionProperties.h"
#include "ifc2x3/IfcProfileDef.h"
#include "ifc2x3/IfcProfileProperties.h"
#include "ifc2x3/IfcProject.h"
#include "ifc2x3/IfcProjectOrder.h"
#include "ifc2x3/IfcProjectOrderRecord.h"
#include "ifc2x3/IfcProjectionCurve.h"
#include "ifc2x3/IfcProjectionElement.h"
#include "ifc2x3/IfcProperty.h"
#include "ifc2x3/IfcPropertyBoundedValue.h"
#include "ifc2x3/IfcPropertyConstraintRelationship.h"
#include "ifc2x3/IfcPropertyDefinition.h"
#include "ifc2x3/IfcPropertyDependencyRelationship.h"
#include "ifc2x3/IfcPropertyEnumeratedValue.h"
#include "ifc2x3/IfcPropertyEnumeration.h"
#include "ifc2x3/IfcPropertyListValue.h"
#include "ifc2x3/IfcPropertyReferenceValue.h"
#include "ifc2x3/IfcPropertySet.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcPropertySingleValue.h"
#include "ifc2x3/IfcPropertyTableValue.h"
#include "ifc2x3/IfcProtectiveDeviceType.h"
#include "ifc2x3/IfcProxy.h"
#include "ifc2x3/IfcPumpType.h"
#include "ifc2x3/IfcQuantityArea.h"
#include "ifc2x3/IfcQuantityCount.h"
#include "ifc2x3/IfcQuantityLength.h"
#include "ifc2x3/IfcQuantityTime.h"
#include "ifc2x3/IfcQuantityVolume.h"
#include "ifc2x3/IfcQuantityWeight.h"
#include "ifc2x3/IfcRadiusDimension.h"
#include "ifc2x3/IfcRailing.h"
#include "ifc2x3/IfcRailingType.h"
#include "ifc2x3/IfcRamp.h"
#include "ifc2x3/IfcRampFlight.h"
#include "ifc2x3/IfcRampFlightType.h"
#include "ifc2x3/IfcRationalBezierCurve.h"
#include "ifc2x3/IfcRectangleHollowProfileDef.h"
#include "ifc2x3/IfcRectangleProfileDef.h"
#include "ifc2x3/IfcRectangularPyramid.h"
#include "ifc2x3/IfcRectangularTrimmedSurface.h"
#include "ifc2x3/IfcReferenceCurve.h"
#include "ifc2x3/IfcReferenceCurve3D.h"
#include "ifc2x3/IfcReferenceCurveAlignment2D.h"
#include "ifc2x3/IfcReferenceCurvePlacement.h"
#include "ifc2x3/IfcReferenceCurvePlacementSystem.h"
#include "ifc2x3/IfcReferenceElement.h"
#include "ifc2x3/IfcReferencePlacement.h"
#include "ifc2x3/IfcReferencedSectionedSpine.h"
#include "ifc2x3/IfcReferencesValueDocument.h"
#include "ifc2x3/IfcRegularTimeSeries.h"
#include "ifc2x3/IfcReinforcementBarProperties.h"
#include "ifc2x3/IfcReinforcementDefinitionProperties.h"
#include "ifc2x3/IfcReinforcingBar.h"
#include "ifc2x3/IfcReinforcingElement.h"
#include "ifc2x3/IfcReinforcingMesh.h"
#include "ifc2x3/IfcRelAggregates.h"
#include "ifc2x3/IfcRelAssigns.h"
#include "ifc2x3/IfcRelAssignsTasks.h"
#include "ifc2x3/IfcRelAssignsToActor.h"
#include "ifc2x3/IfcRelAssignsToControl.h"
#include "ifc2x3/IfcRelAssignsToGroup.h"
#include "ifc2x3/IfcRelAssignsToProcess.h"
#include "ifc2x3/IfcRelAssignsToProduct.h"
#include "ifc2x3/IfcRelAssignsToProjectOrder.h"
#include "ifc2x3/IfcRelAssignsToResource.h"
#include "ifc2x3/IfcRelAssociates.h"
#include "ifc2x3/IfcRelAssociatesAppliedValue.h"
#include "ifc2x3/IfcRelAssociatesApproval.h"
#include "ifc2x3/IfcRelAssociatesClassification.h"
#include "ifc2x3/IfcRelAssociatesConstraint.h"
#include "ifc2x3/IfcRelAssociatesDocument.h"
#include "ifc2x3/IfcRelAssociatesLibrary.h"
#include "ifc2x3/IfcRelAssociatesMaterial.h"
#include "ifc2x3/IfcRelAssociatesProfileProperties.h"
#include "ifc2x3/IfcRelConnects.h"
#include "ifc2x3/IfcRelConnectsElements.h"
#include "ifc2x3/IfcRelConnectsPathElements.h"
#include "ifc2x3/IfcRelConnectsPortToElement.h"
#include "ifc2x3/IfcRelConnectsPorts.h"
#include "ifc2x3/IfcRelConnectsStructuralActivity.h"
#include "ifc2x3/IfcRelConnectsStructuralElement.h"
#include "ifc2x3/IfcRelConnectsStructuralMember.h"
#include "ifc2x3/IfcRelConnectsWithEccentricity.h"
#include "ifc2x3/IfcRelConnectsWithRealizingElements.h"
#include "ifc2x3/IfcRelContainedInSpatialStructure.h"
#include "ifc2x3/IfcRelCoversBldgElements.h"
#include "ifc2x3/IfcRelCoversSpaces.h"
#include "ifc2x3/IfcRelDecomposes.h"
#include "ifc2x3/IfcRelDefines.h"
#include "ifc2x3/IfcRelDefinesByProperties.h"
#include "ifc2x3/IfcRelDefinesByType.h"
#include "ifc2x3/IfcRelFillsElement.h"
#include "ifc2x3/IfcRelFlowControlElements.h"
#include "ifc2x3/IfcRelInteractionRequirements.h"
#include "ifc2x3/IfcRelNests.h"
#include "ifc2x3/IfcRelOccupiesSpaces.h"
#include "ifc2x3/IfcRelOverridesProperties.h"
#include "ifc2x3/IfcRelProjectsElement.h"
#include "ifc2x3/IfcRelReferencedInSpatialStructure.h"
#include "ifc2x3/IfcRelSchedulesCostItems.h"
#include "ifc2x3/IfcRelSequence.h"
#include "ifc2x3/IfcRelServicesBuildings.h"
#include "ifc2x3/IfcRelSpaceBoundary.h"
#include "ifc2x3/IfcRelVoidsElement.h"
#include "ifc2x3/IfcRelationship.h"
#include "ifc2x3/IfcRelaxation.h"
#include "ifc2x3/IfcRepresentation.h"
#include "ifc2x3/IfcRepresentationContext.h"
#include "ifc2x3/IfcRepresentationItem.h"
#include "ifc2x3/IfcRepresentationMap.h"
#include "ifc2x3/IfcResource.h"
#include "ifc2x3/IfcRevolvedAreaSolid.h"
#include "ifc2x3/IfcRibPlateProfileProperties.h"
#include "ifc2x3/IfcRightCircularCone.h"
#include "ifc2x3/IfcRightCircularCylinder.h"
#include "ifc2x3/IfcRoof.h"
#include "ifc2x3/IfcRoot.h"
#include "ifc2x3/IfcRoundedEdgeFeature.h"
#include "ifc2x3/IfcRoundedRectangleProfileDef.h"
#include "ifc2x3/IfcSIUnit.h"
#include "ifc2x3/IfcSanitaryTerminalType.h"
#include "ifc2x3/IfcScheduleTimeControl.h"
#include "ifc2x3/IfcSectionProperties.h"
#include "ifc2x3/IfcSectionReinforcementProperties.h"
#include "ifc2x3/IfcSectionedSpine.h"
#include "ifc2x3/IfcSensorType.h"
#include "ifc2x3/IfcServiceLife.h"
#include "ifc2x3/IfcServiceLifeFactor.h"
#include "ifc2x3/IfcShapeAspect.h"
#include "ifc2x3/IfcShapeModel.h"
#include "ifc2x3/IfcShapeRepresentation.h"
#include "ifc2x3/IfcShellBasedSurfaceModel.h"
#include "ifc2x3/IfcSimpleProperty.h"
#include "ifc2x3/IfcSite.h"
#include "ifc2x3/IfcSlab.h"
#include "ifc2x3/IfcSlabType.h"
#include "ifc2x3/IfcSlippageConnectionCondition.h"
#include "ifc2x3/IfcSolidModel.h"
#include "ifc2x3/IfcSoundProperties.h"
#include "ifc2x3/IfcSoundValue.h"
#include "ifc2x3/IfcSpace.h"
#include "ifc2x3/IfcSpaceHeaterType.h"
#include "ifc2x3/IfcSpaceProgram.h"
#include "ifc2x3/IfcSpaceThermalLoadProperties.h"
#include "ifc2x3/IfcSpaceType.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/IfcSpatialStructureElementType.h"
#include "ifc2x3/IfcSphere.h"
#include "ifc2x3/IfcStackTerminalType.h"
#include "ifc2x3/IfcStair.h"
#include "ifc2x3/IfcStairFlight.h"
#include "ifc2x3/IfcStairFlightType.h"
#include "ifc2x3/IfcStructuralAction.h"
#include "ifc2x3/IfcStructuralActivity.h"
#include "ifc2x3/IfcStructuralAnalysisModel.h"
#include "ifc2x3/IfcStructuralConnection.h"
#include "ifc2x3/IfcStructuralConnectionCondition.h"
#include "ifc2x3/IfcStructuralCurveConnection.h"
#include "ifc2x3/IfcStructuralCurveMember.h"
#include "ifc2x3/IfcStructuralCurveMemberVarying.h"
#include "ifc2x3/IfcStructuralItem.h"
#include "ifc2x3/IfcStructuralLinearAction.h"
#include "ifc2x3/IfcStructuralLinearActionVarying.h"
#include "ifc2x3/IfcStructuralLoad.h"
#include "ifc2x3/IfcStructuralLoadGroup.h"
#include "ifc2x3/IfcStructuralLoadLinearForce.h"
#include "ifc2x3/IfcStructuralLoadPlanarForce.h"
#include "ifc2x3/IfcStructuralLoadSingleDisplacement.h"
#include "ifc2x3/IfcStructuralLoadSingleDisplacementDistortion.h"
#include "ifc2x3/IfcStructuralLoadSingleForce.h"
#include "ifc2x3/IfcStructuralLoadSingleForceWarping.h"
#include "ifc2x3/IfcStructuralLoadStatic.h"
#include "ifc2x3/IfcStructuralLoadTemperature.h"
#include "ifc2x3/IfcStructuralMember.h"
#include "ifc2x3/IfcStructuralPlanarAction.h"
#include "ifc2x3/IfcStructuralPlanarActionVarying.h"
#include "ifc2x3/IfcStructuralPointAction.h"
#include "ifc2x3/IfcStructuralPointConnection.h"
#include "ifc2x3/IfcStructuralPointReaction.h"
#include "ifc2x3/IfcStructuralProfileProperties.h"
#include "ifc2x3/IfcStructuralReaction.h"
#include "ifc2x3/IfcStructuralResultGroup.h"
#include "ifc2x3/IfcStructuralSteelProfileProperties.h"
#include "ifc2x3/IfcStructuralSurfaceConnection.h"
#include "ifc2x3/IfcStructuralSurfaceMember.h"
#include "ifc2x3/IfcStructuralSurfaceMemberVarying.h"
#include "ifc2x3/IfcStructuredDimensionCallout.h"
#include "ifc2x3/IfcStyleModel.h"
#include "ifc2x3/IfcStyledItem.h"
#include "ifc2x3/IfcStyledRepresentation.h"
#include "ifc2x3/IfcSubContractResource.h"
#include "ifc2x3/IfcSubedge.h"
#include "ifc2x3/IfcSurface.h"
#include "ifc2x3/IfcSurfaceCurveSweptAreaSolid.h"
#include "ifc2x3/IfcSurfaceOfLinearExtrusion.h"
#include "ifc2x3/IfcSurfaceOfRevolution.h"
#include "ifc2x3/IfcSurfaceStyle.h"
#include "ifc2x3/IfcSurfaceStyleLighting.h"
#include "ifc2x3/IfcSurfaceStyleRefraction.h"
#include "ifc2x3/IfcSurfaceStyleRendering.h"
#include "ifc2x3/IfcSurfaceStyleShading.h"
#include "ifc2x3/IfcSurfaceStyleWithTextures.h"
#include "ifc2x3/IfcSurfaceTexture.h"
#include "ifc2x3/IfcSweptAreaSolid.h"
#include "ifc2x3/IfcSweptDiskSolid.h"
#include "ifc2x3/IfcSweptSurface.h"
#include "ifc2x3/IfcSwitchingDeviceType.h"
#include "ifc2x3/IfcSymbolStyle.h"
#include "ifc2x3/IfcSystem.h"
#include "ifc2x3/IfcSystemFurnitureElementType.h"
#include "ifc2x3/IfcTShapeProfileDef.h"
#include "ifc2x3/IfcTable.h"
#include "ifc2x3/IfcTableRow.h"
#include "ifc2x3/IfcTankType.h"
#include "ifc2x3/IfcTask.h"
#include "ifc2x3/IfcTelecomAddress.h"
#include "ifc2x3/IfcTendon.h"
#include "ifc2x3/IfcTendonAnchor.h"
#include "ifc2x3/IfcTerminatorSymbol.h"
#include "ifc2x3/IfcTextLiteral.h"
#include "ifc2x3/IfcTextLiteralWithExtent.h"
#include "ifc2x3/IfcTextStyle.h"
#include "ifc2x3/IfcTextStyleFontModel.h"
#include "ifc2x3/IfcTextStyleForDefinedFont.h"
#include "ifc2x3/IfcTextStyleTextModel.h"
#include "ifc2x3/IfcTextStyleWithBoxCharacteristics.h"
#include "ifc2x3/IfcTextureCoordinate.h"
#include "ifc2x3/IfcTextureCoordinateGenerator.h"
#include "ifc2x3/IfcTextureMap.h"
#include "ifc2x3/IfcTextureVertex.h"
#include "ifc2x3/IfcThermalMaterialProperties.h"
#include "ifc2x3/IfcTimeSeries.h"
#include "ifc2x3/IfcTimeSeriesReferenceRelationship.h"
#include "ifc2x3/IfcTimeSeriesSchedule.h"
#include "ifc2x3/IfcTimeSeriesValue.h"
#include "ifc2x3/IfcTopologicalRepresentationItem.h"
#include "ifc2x3/IfcTopologyRepresentation.h"
#include "ifc2x3/IfcTransformerType.h"
#include "ifc2x3/IfcTransportElement.h"
#include "ifc2x3/IfcTransportElementType.h"
#include "ifc2x3/IfcTrapeziumProfileDef.h"
#include "ifc2x3/IfcTrimmedCurve.h"
#include "ifc2x3/IfcTubeBundleType.h"
#include "ifc2x3/IfcTwoDirectionRepeatFactor.h"
#include "ifc2x3/IfcTypeObject.h"
#include "ifc2x3/IfcTypeProduct.h"
#include "ifc2x3/IfcUShapeProfileDef.h"
#include "ifc2x3/IfcUnitAssignment.h"
#include "ifc2x3/IfcUnitaryEquipmentType.h"
#include "ifc2x3/IfcValveType.h"
#include "ifc2x3/IfcVector.h"
#include "ifc2x3/IfcVertex.h"
#include "ifc2x3/IfcVertexBasedTextureMap.h"
#include "ifc2x3/IfcVertexLoop.h"
#include "ifc2x3/IfcVertexPoint.h"
#include "ifc2x3/IfcVibrationIsolatorType.h"
#include "ifc2x3/IfcVirtualElement.h"
#include "ifc2x3/IfcVirtualGridIntersection.h"
#include "ifc2x3/IfcWall.h"
#include "ifc2x3/IfcWallStandardCase.h"
#include "ifc2x3/IfcWallType.h"
#include "ifc2x3/IfcWasteTerminalType.h"
#include "ifc2x3/IfcWaterProperties.h"
#include "ifc2x3/IfcWindow.h"
#include "ifc2x3/IfcWindowLiningProperties.h"
#include "ifc2x3/IfcWindowPanelProperties.h"
#include "ifc2x3/IfcWindowStyle.h"
#include "ifc2x3/IfcWorkControl.h"
#include "ifc2x3/IfcWorkPlan.h"
#include "ifc2x3/IfcWorkSchedule.h"
#include "ifc2x3/IfcZShapeProfileDef.h"
#include "ifc2x3/IfcZone.h"

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

CopyOp::CopyOp() {
}

CopyOp::~CopyOp() {
}

void CopyOp::associate(const Step::BaseObject *original, Step::BaseObject *clone) const {
}

Step::BaseObject *CopyOp::find(const Step::BaseObject *original) const {
    return 0;
}

ExpressDataSet *CopyOp::getExpressDataSet() const {
    return 0;
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

Ifc2DCompositeCurve *DeepCopyOp::operator()(const Ifc2DCompositeCurve *obj) const {
    if (obj) {
        Ifc2DCompositeCurve *clone = static_cast< Ifc2DCompositeCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfc2DCompositeCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcActionRequest *DeepCopyOp::operator()(const IfcActionRequest *obj) const {
    if (obj) {
        IfcActionRequest *clone = static_cast< IfcActionRequest * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcActionRequest(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcActor *DeepCopyOp::operator()(const IfcActor *obj) const {
    if (obj) {
        IfcActor *clone = static_cast< IfcActor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcActor(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcActorRole *DeepCopyOp::operator()(const IfcActorRole *obj) const {
    if (obj) {
        IfcActorRole *clone = static_cast< IfcActorRole * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcActorRole(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcActuatorType *DeepCopyOp::operator()(const IfcActuatorType *obj) const {
    if (obj) {
        IfcActuatorType *clone = static_cast< IfcActuatorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcActuatorType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAddress *DeepCopyOp::operator()(const IfcAddress *obj) const {
    if (obj) {
        IfcAddress *clone = static_cast< IfcAddress * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAddress(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAirTerminalBoxType *DeepCopyOp::operator()(const IfcAirTerminalBoxType *obj) const {
    if (obj) {
        IfcAirTerminalBoxType *clone = static_cast< IfcAirTerminalBoxType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAirTerminalBoxType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAirTerminalType *DeepCopyOp::operator()(const IfcAirTerminalType *obj) const {
    if (obj) {
        IfcAirTerminalType *clone = static_cast< IfcAirTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAirTerminalType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAirToAirHeatRecoveryType *DeepCopyOp::operator()(const IfcAirToAirHeatRecoveryType *obj) const {
    if (obj) {
        IfcAirToAirHeatRecoveryType *clone = static_cast< IfcAirToAirHeatRecoveryType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAirToAirHeatRecoveryType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAlarmType *DeepCopyOp::operator()(const IfcAlarmType *obj) const {
    if (obj) {
        IfcAlarmType *clone = static_cast< IfcAlarmType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAlarmType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAngularDimension *DeepCopyOp::operator()(const IfcAngularDimension *obj) const {
    if (obj) {
        IfcAngularDimension *clone = static_cast< IfcAngularDimension * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAngularDimension(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotation *DeepCopyOp::operator()(const IfcAnnotation *obj) const {
    if (obj) {
        IfcAnnotation *clone = static_cast< IfcAnnotation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotation(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationCurveOccurrence *DeepCopyOp::operator()(const IfcAnnotationCurveOccurrence *obj) const {
    if (obj) {
        IfcAnnotationCurveOccurrence *clone = static_cast< IfcAnnotationCurveOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationCurveOccurrence(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationFillArea *DeepCopyOp::operator()(const IfcAnnotationFillArea *obj) const {
    if (obj) {
        IfcAnnotationFillArea *clone = static_cast< IfcAnnotationFillArea * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationFillArea(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationFillAreaOccurrence *DeepCopyOp::operator()(const IfcAnnotationFillAreaOccurrence *obj) const {
    if (obj) {
        IfcAnnotationFillAreaOccurrence *clone = static_cast< IfcAnnotationFillAreaOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationFillAreaOccurrence(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationOccurrence *DeepCopyOp::operator()(const IfcAnnotationOccurrence *obj) const {
    if (obj) {
        IfcAnnotationOccurrence *clone = static_cast< IfcAnnotationOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationOccurrence(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationSurface *DeepCopyOp::operator()(const IfcAnnotationSurface *obj) const {
    if (obj) {
        IfcAnnotationSurface *clone = static_cast< IfcAnnotationSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationSurface(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationSurfaceOccurrence *DeepCopyOp::operator()(const IfcAnnotationSurfaceOccurrence *obj) const {
    if (obj) {
        IfcAnnotationSurfaceOccurrence *clone = static_cast< IfcAnnotationSurfaceOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationSurfaceOccurrence(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationSymbolOccurrence *DeepCopyOp::operator()(const IfcAnnotationSymbolOccurrence *obj) const {
    if (obj) {
        IfcAnnotationSymbolOccurrence *clone = static_cast< IfcAnnotationSymbolOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationSymbolOccurrence(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationTextOccurrence *DeepCopyOp::operator()(const IfcAnnotationTextOccurrence *obj) const {
    if (obj) {
        IfcAnnotationTextOccurrence *clone = static_cast< IfcAnnotationTextOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationTextOccurrence(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcApplication *DeepCopyOp::operator()(const IfcApplication *obj) const {
    if (obj) {
        IfcApplication *clone = static_cast< IfcApplication * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcApplication(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAppliedValue *DeepCopyOp::operator()(const IfcAppliedValue *obj) const {
    if (obj) {
        IfcAppliedValue *clone = static_cast< IfcAppliedValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAppliedValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAppliedValueRelationship *DeepCopyOp::operator()(const IfcAppliedValueRelationship *obj) const {
    if (obj) {
        IfcAppliedValueRelationship *clone = static_cast< IfcAppliedValueRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAppliedValueRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcApproval *DeepCopyOp::operator()(const IfcApproval *obj) const {
    if (obj) {
        IfcApproval *clone = static_cast< IfcApproval * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcApproval(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcApprovalActorRelationship *DeepCopyOp::operator()(const IfcApprovalActorRelationship *obj) const {
    if (obj) {
        IfcApprovalActorRelationship *clone = static_cast< IfcApprovalActorRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcApprovalActorRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcApprovalPropertyRelationship *DeepCopyOp::operator()(const IfcApprovalPropertyRelationship *obj) const {
    if (obj) {
        IfcApprovalPropertyRelationship *clone = static_cast< IfcApprovalPropertyRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcApprovalPropertyRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcApprovalRelationship *DeepCopyOp::operator()(const IfcApprovalRelationship *obj) const {
    if (obj) {
        IfcApprovalRelationship *clone = static_cast< IfcApprovalRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcApprovalRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcArbitraryClosedProfileDef *DeepCopyOp::operator()(const IfcArbitraryClosedProfileDef *obj) const {
    if (obj) {
        IfcArbitraryClosedProfileDef *clone = static_cast< IfcArbitraryClosedProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcArbitraryClosedProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcArbitraryOpenProfileDef *DeepCopyOp::operator()(const IfcArbitraryOpenProfileDef *obj) const {
    if (obj) {
        IfcArbitraryOpenProfileDef *clone = static_cast< IfcArbitraryOpenProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcArbitraryOpenProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcArbitraryProfileDefWithVoids *DeepCopyOp::operator()(const IfcArbitraryProfileDefWithVoids *obj) const {
    if (obj) {
        IfcArbitraryProfileDefWithVoids *clone = static_cast< IfcArbitraryProfileDefWithVoids * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcArbitraryProfileDefWithVoids(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAsset *DeepCopyOp::operator()(const IfcAsset *obj) const {
    if (obj) {
        IfcAsset *clone = static_cast< IfcAsset * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAsset(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAsymmetricIShapeProfileDef *DeepCopyOp::operator()(const IfcAsymmetricIShapeProfileDef *obj) const {
    if (obj) {
        IfcAsymmetricIShapeProfileDef *clone = static_cast< IfcAsymmetricIShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAsymmetricIShapeProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAxis1Placement *DeepCopyOp::operator()(const IfcAxis1Placement *obj) const {
    if (obj) {
        IfcAxis1Placement *clone = static_cast< IfcAxis1Placement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAxis1Placement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAxis2Placement2D *DeepCopyOp::operator()(const IfcAxis2Placement2D *obj) const {
    if (obj) {
        IfcAxis2Placement2D *clone = static_cast< IfcAxis2Placement2D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAxis2Placement2D(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAxis2Placement3D *DeepCopyOp::operator()(const IfcAxis2Placement3D *obj) const {
    if (obj) {
        IfcAxis2Placement3D *clone = static_cast< IfcAxis2Placement3D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAxis2Placement3D(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBSplineCurve *DeepCopyOp::operator()(const IfcBSplineCurve *obj) const {
    if (obj) {
        IfcBSplineCurve *clone = static_cast< IfcBSplineCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBSplineCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBeam *DeepCopyOp::operator()(const IfcBeam *obj) const {
    if (obj) {
        IfcBeam *clone = static_cast< IfcBeam * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBeam(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBeamType *DeepCopyOp::operator()(const IfcBeamType *obj) const {
    if (obj) {
        IfcBeamType *clone = static_cast< IfcBeamType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBeamType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBezierCurve *DeepCopyOp::operator()(const IfcBezierCurve *obj) const {
    if (obj) {
        IfcBezierCurve *clone = static_cast< IfcBezierCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBezierCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBlobTexture *DeepCopyOp::operator()(const IfcBlobTexture *obj) const {
    if (obj) {
        IfcBlobTexture *clone = static_cast< IfcBlobTexture * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBlobTexture(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBlock *DeepCopyOp::operator()(const IfcBlock *obj) const {
    if (obj) {
        IfcBlock *clone = static_cast< IfcBlock * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBlock(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoilerType *DeepCopyOp::operator()(const IfcBoilerType *obj) const {
    if (obj) {
        IfcBoilerType *clone = static_cast< IfcBoilerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoilerType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBooleanClippingResult *DeepCopyOp::operator()(const IfcBooleanClippingResult *obj) const {
    if (obj) {
        IfcBooleanClippingResult *clone = static_cast< IfcBooleanClippingResult * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBooleanClippingResult(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBooleanResult *DeepCopyOp::operator()(const IfcBooleanResult *obj) const {
    if (obj) {
        IfcBooleanResult *clone = static_cast< IfcBooleanResult * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBooleanResult(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundaryCondition *DeepCopyOp::operator()(const IfcBoundaryCondition *obj) const {
    if (obj) {
        IfcBoundaryCondition *clone = static_cast< IfcBoundaryCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundaryCondition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundaryEdgeCondition *DeepCopyOp::operator()(const IfcBoundaryEdgeCondition *obj) const {
    if (obj) {
        IfcBoundaryEdgeCondition *clone = static_cast< IfcBoundaryEdgeCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundaryEdgeCondition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundaryFaceCondition *DeepCopyOp::operator()(const IfcBoundaryFaceCondition *obj) const {
    if (obj) {
        IfcBoundaryFaceCondition *clone = static_cast< IfcBoundaryFaceCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundaryFaceCondition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundaryNodeCondition *DeepCopyOp::operator()(const IfcBoundaryNodeCondition *obj) const {
    if (obj) {
        IfcBoundaryNodeCondition *clone = static_cast< IfcBoundaryNodeCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundaryNodeCondition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundaryNodeConditionWarping *DeepCopyOp::operator()(const IfcBoundaryNodeConditionWarping *obj) const {
    if (obj) {
        IfcBoundaryNodeConditionWarping *clone = static_cast< IfcBoundaryNodeConditionWarping * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundaryNodeConditionWarping(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundedCurve *DeepCopyOp::operator()(const IfcBoundedCurve *obj) const {
    if (obj) {
        IfcBoundedCurve *clone = static_cast< IfcBoundedCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundedCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundedSurface *DeepCopyOp::operator()(const IfcBoundedSurface *obj) const {
    if (obj) {
        IfcBoundedSurface *clone = static_cast< IfcBoundedSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundedSurface(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundingBox *DeepCopyOp::operator()(const IfcBoundingBox *obj) const {
    if (obj) {
        IfcBoundingBox *clone = static_cast< IfcBoundingBox * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundingBox(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoxedHalfSpace *DeepCopyOp::operator()(const IfcBoxedHalfSpace *obj) const {
    if (obj) {
        IfcBoxedHalfSpace *clone = static_cast< IfcBoxedHalfSpace * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoxedHalfSpace(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuilding *DeepCopyOp::operator()(const IfcBuilding *obj) const {
    if (obj) {
        IfcBuilding *clone = static_cast< IfcBuilding * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuilding(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingElement *DeepCopyOp::operator()(const IfcBuildingElement *obj) const {
    if (obj) {
        IfcBuildingElement *clone = static_cast< IfcBuildingElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingElementPart *DeepCopyOp::operator()(const IfcBuildingElementPart *obj) const {
    if (obj) {
        IfcBuildingElementPart *clone = static_cast< IfcBuildingElementPart * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingElementPart(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingElementProxy *DeepCopyOp::operator()(const IfcBuildingElementProxy *obj) const {
    if (obj) {
        IfcBuildingElementProxy *clone = static_cast< IfcBuildingElementProxy * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingElementProxy(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingElementProxyType *DeepCopyOp::operator()(const IfcBuildingElementProxyType *obj) const {
    if (obj) {
        IfcBuildingElementProxyType *clone = static_cast< IfcBuildingElementProxyType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingElementProxyType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingElementType *DeepCopyOp::operator()(const IfcBuildingElementType *obj) const {
    if (obj) {
        IfcBuildingElementType *clone = static_cast< IfcBuildingElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingElementType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingStorey *DeepCopyOp::operator()(const IfcBuildingStorey *obj) const {
    if (obj) {
        IfcBuildingStorey *clone = static_cast< IfcBuildingStorey * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingStorey(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCShapeProfileDef *DeepCopyOp::operator()(const IfcCShapeProfileDef *obj) const {
    if (obj) {
        IfcCShapeProfileDef *clone = static_cast< IfcCShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCShapeProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCableCarrierFittingType *DeepCopyOp::operator()(const IfcCableCarrierFittingType *obj) const {
    if (obj) {
        IfcCableCarrierFittingType *clone = static_cast< IfcCableCarrierFittingType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCableCarrierFittingType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCableCarrierSegmentType *DeepCopyOp::operator()(const IfcCableCarrierSegmentType *obj) const {
    if (obj) {
        IfcCableCarrierSegmentType *clone = static_cast< IfcCableCarrierSegmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCableCarrierSegmentType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCableSegmentType *DeepCopyOp::operator()(const IfcCableSegmentType *obj) const {
    if (obj) {
        IfcCableSegmentType *clone = static_cast< IfcCableSegmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCableSegmentType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCalendarDate *DeepCopyOp::operator()(const IfcCalendarDate *obj) const {
    if (obj) {
        IfcCalendarDate *clone = static_cast< IfcCalendarDate * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCalendarDate(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianPoint *DeepCopyOp::operator()(const IfcCartesianPoint *obj) const {
    if (obj) {
        IfcCartesianPoint *clone = static_cast< IfcCartesianPoint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianPoint(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianTransformationOperator *DeepCopyOp::operator()(const IfcCartesianTransformationOperator *obj) const {
    if (obj) {
        IfcCartesianTransformationOperator *clone = static_cast< IfcCartesianTransformationOperator * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianTransformationOperator(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianTransformationOperator2D *DeepCopyOp::operator()(const IfcCartesianTransformationOperator2D *obj) const {
    if (obj) {
        IfcCartesianTransformationOperator2D *clone = static_cast< IfcCartesianTransformationOperator2D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianTransformationOperator2D(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianTransformationOperator2DnonUniform *DeepCopyOp::operator()(const IfcCartesianTransformationOperator2DnonUniform *obj) const {
    if (obj) {
        IfcCartesianTransformationOperator2DnonUniform *clone = static_cast< IfcCartesianTransformationOperator2DnonUniform * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianTransformationOperator2DnonUniform(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianTransformationOperator3D *DeepCopyOp::operator()(const IfcCartesianTransformationOperator3D *obj) const {
    if (obj) {
        IfcCartesianTransformationOperator3D *clone = static_cast< IfcCartesianTransformationOperator3D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianTransformationOperator3D(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianTransformationOperator3DnonUniform *DeepCopyOp::operator()(const IfcCartesianTransformationOperator3DnonUniform *obj) const {
    if (obj) {
        IfcCartesianTransformationOperator3DnonUniform *clone = static_cast< IfcCartesianTransformationOperator3DnonUniform * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianTransformationOperator3DnonUniform(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCenterLineProfileDef *DeepCopyOp::operator()(const IfcCenterLineProfileDef *obj) const {
    if (obj) {
        IfcCenterLineProfileDef *clone = static_cast< IfcCenterLineProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCenterLineProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcChamferEdgeFeature *DeepCopyOp::operator()(const IfcChamferEdgeFeature *obj) const {
    if (obj) {
        IfcChamferEdgeFeature *clone = static_cast< IfcChamferEdgeFeature * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcChamferEdgeFeature(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcChillerType *DeepCopyOp::operator()(const IfcChillerType *obj) const {
    if (obj) {
        IfcChillerType *clone = static_cast< IfcChillerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcChillerType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCircle *DeepCopyOp::operator()(const IfcCircle *obj) const {
    if (obj) {
        IfcCircle *clone = static_cast< IfcCircle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCircle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCircleHollowProfileDef *DeepCopyOp::operator()(const IfcCircleHollowProfileDef *obj) const {
    if (obj) {
        IfcCircleHollowProfileDef *clone = static_cast< IfcCircleHollowProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCircleHollowProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCircleProfileDef *DeepCopyOp::operator()(const IfcCircleProfileDef *obj) const {
    if (obj) {
        IfcCircleProfileDef *clone = static_cast< IfcCircleProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCircleProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassification *DeepCopyOp::operator()(const IfcClassification *obj) const {
    if (obj) {
        IfcClassification *clone = static_cast< IfcClassification * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassification(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassificationItem *DeepCopyOp::operator()(const IfcClassificationItem *obj) const {
    if (obj) {
        IfcClassificationItem *clone = static_cast< IfcClassificationItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassificationItem(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassificationItemRelationship *DeepCopyOp::operator()(const IfcClassificationItemRelationship *obj) const {
    if (obj) {
        IfcClassificationItemRelationship *clone = static_cast< IfcClassificationItemRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassificationItemRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassificationNotation *DeepCopyOp::operator()(const IfcClassificationNotation *obj) const {
    if (obj) {
        IfcClassificationNotation *clone = static_cast< IfcClassificationNotation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassificationNotation(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassificationNotationFacet *DeepCopyOp::operator()(const IfcClassificationNotationFacet *obj) const {
    if (obj) {
        IfcClassificationNotationFacet *clone = static_cast< IfcClassificationNotationFacet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassificationNotationFacet(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassificationReference *DeepCopyOp::operator()(const IfcClassificationReference *obj) const {
    if (obj) {
        IfcClassificationReference *clone = static_cast< IfcClassificationReference * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassificationReference(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClosedShell *DeepCopyOp::operator()(const IfcClosedShell *obj) const {
    if (obj) {
        IfcClosedShell *clone = static_cast< IfcClosedShell * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClosedShell(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCoilType *DeepCopyOp::operator()(const IfcCoilType *obj) const {
    if (obj) {
        IfcCoilType *clone = static_cast< IfcCoilType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCoilType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcColourRgb *DeepCopyOp::operator()(const IfcColourRgb *obj) const {
    if (obj) {
        IfcColourRgb *clone = static_cast< IfcColourRgb * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcColourRgb(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcColourSpecification *DeepCopyOp::operator()(const IfcColourSpecification *obj) const {
    if (obj) {
        IfcColourSpecification *clone = static_cast< IfcColourSpecification * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcColourSpecification(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcColumn *DeepCopyOp::operator()(const IfcColumn *obj) const {
    if (obj) {
        IfcColumn *clone = static_cast< IfcColumn * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcColumn(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcColumnType *DeepCopyOp::operator()(const IfcColumnType *obj) const {
    if (obj) {
        IfcColumnType *clone = static_cast< IfcColumnType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcColumnType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcComplexProperty *DeepCopyOp::operator()(const IfcComplexProperty *obj) const {
    if (obj) {
        IfcComplexProperty *clone = static_cast< IfcComplexProperty * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcComplexProperty(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCompositeCurve *DeepCopyOp::operator()(const IfcCompositeCurve *obj) const {
    if (obj) {
        IfcCompositeCurve *clone = static_cast< IfcCompositeCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCompositeCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCompositeCurveSegment *DeepCopyOp::operator()(const IfcCompositeCurveSegment *obj) const {
    if (obj) {
        IfcCompositeCurveSegment *clone = static_cast< IfcCompositeCurveSegment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCompositeCurveSegment(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCompositeProfileDef *DeepCopyOp::operator()(const IfcCompositeProfileDef *obj) const {
    if (obj) {
        IfcCompositeProfileDef *clone = static_cast< IfcCompositeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCompositeProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCompressorType *DeepCopyOp::operator()(const IfcCompressorType *obj) const {
    if (obj) {
        IfcCompressorType *clone = static_cast< IfcCompressorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCompressorType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCondenserType *DeepCopyOp::operator()(const IfcCondenserType *obj) const {
    if (obj) {
        IfcCondenserType *clone = static_cast< IfcCondenserType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCondenserType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCondition *DeepCopyOp::operator()(const IfcCondition *obj) const {
    if (obj) {
        IfcCondition *clone = static_cast< IfcCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCondition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConditionCriterion *DeepCopyOp::operator()(const IfcConditionCriterion *obj) const {
    if (obj) {
        IfcConditionCriterion *clone = static_cast< IfcConditionCriterion * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConditionCriterion(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConic *DeepCopyOp::operator()(const IfcConic *obj) const {
    if (obj) {
        IfcConic *clone = static_cast< IfcConic * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConic(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectedFaceSet *DeepCopyOp::operator()(const IfcConnectedFaceSet *obj) const {
    if (obj) {
        IfcConnectedFaceSet *clone = static_cast< IfcConnectedFaceSet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectedFaceSet(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionCurveGeometry *DeepCopyOp::operator()(const IfcConnectionCurveGeometry *obj) const {
    if (obj) {
        IfcConnectionCurveGeometry *clone = static_cast< IfcConnectionCurveGeometry * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionCurveGeometry(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionGeometry *DeepCopyOp::operator()(const IfcConnectionGeometry *obj) const {
    if (obj) {
        IfcConnectionGeometry *clone = static_cast< IfcConnectionGeometry * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionGeometry(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionPointEccentricity *DeepCopyOp::operator()(const IfcConnectionPointEccentricity *obj) const {
    if (obj) {
        IfcConnectionPointEccentricity *clone = static_cast< IfcConnectionPointEccentricity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionPointEccentricity(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionPointGeometry *DeepCopyOp::operator()(const IfcConnectionPointGeometry *obj) const {
    if (obj) {
        IfcConnectionPointGeometry *clone = static_cast< IfcConnectionPointGeometry * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionPointGeometry(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionPortGeometry *DeepCopyOp::operator()(const IfcConnectionPortGeometry *obj) const {
    if (obj) {
        IfcConnectionPortGeometry *clone = static_cast< IfcConnectionPortGeometry * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionPortGeometry(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionSurfaceGeometry *DeepCopyOp::operator()(const IfcConnectionSurfaceGeometry *obj) const {
    if (obj) {
        IfcConnectionSurfaceGeometry *clone = static_cast< IfcConnectionSurfaceGeometry * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionSurfaceGeometry(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstraint *DeepCopyOp::operator()(const IfcConstraint *obj) const {
    if (obj) {
        IfcConstraint *clone = static_cast< IfcConstraint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstraint(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstraintAggregationRelationship *DeepCopyOp::operator()(const IfcConstraintAggregationRelationship *obj) const {
    if (obj) {
        IfcConstraintAggregationRelationship *clone = static_cast< IfcConstraintAggregationRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstraintAggregationRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstraintClassificationRelationship *DeepCopyOp::operator()(const IfcConstraintClassificationRelationship *obj) const {
    if (obj) {
        IfcConstraintClassificationRelationship *clone = static_cast< IfcConstraintClassificationRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstraintClassificationRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstraintRelationship *DeepCopyOp::operator()(const IfcConstraintRelationship *obj) const {
    if (obj) {
        IfcConstraintRelationship *clone = static_cast< IfcConstraintRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstraintRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstructionEquipmentResource *DeepCopyOp::operator()(const IfcConstructionEquipmentResource *obj) const {
    if (obj) {
        IfcConstructionEquipmentResource *clone = static_cast< IfcConstructionEquipmentResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstructionEquipmentResource(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstructionMaterialResource *DeepCopyOp::operator()(const IfcConstructionMaterialResource *obj) const {
    if (obj) {
        IfcConstructionMaterialResource *clone = static_cast< IfcConstructionMaterialResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstructionMaterialResource(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstructionProductResource *DeepCopyOp::operator()(const IfcConstructionProductResource *obj) const {
    if (obj) {
        IfcConstructionProductResource *clone = static_cast< IfcConstructionProductResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstructionProductResource(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstructionResource *DeepCopyOp::operator()(const IfcConstructionResource *obj) const {
    if (obj) {
        IfcConstructionResource *clone = static_cast< IfcConstructionResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstructionResource(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcContextDependentUnit *DeepCopyOp::operator()(const IfcContextDependentUnit *obj) const {
    if (obj) {
        IfcContextDependentUnit *clone = static_cast< IfcContextDependentUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcContextDependentUnit(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcControl *DeepCopyOp::operator()(const IfcControl *obj) const {
    if (obj) {
        IfcControl *clone = static_cast< IfcControl * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcControl(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcControllerType *DeepCopyOp::operator()(const IfcControllerType *obj) const {
    if (obj) {
        IfcControllerType *clone = static_cast< IfcControllerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcControllerType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConversionBasedUnit *DeepCopyOp::operator()(const IfcConversionBasedUnit *obj) const {
    if (obj) {
        IfcConversionBasedUnit *clone = static_cast< IfcConversionBasedUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConversionBasedUnit(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCooledBeamType *DeepCopyOp::operator()(const IfcCooledBeamType *obj) const {
    if (obj) {
        IfcCooledBeamType *clone = static_cast< IfcCooledBeamType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCooledBeamType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCoolingTowerType *DeepCopyOp::operator()(const IfcCoolingTowerType *obj) const {
    if (obj) {
        IfcCoolingTowerType *clone = static_cast< IfcCoolingTowerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCoolingTowerType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCoordinatedUniversalTimeOffset *DeepCopyOp::operator()(const IfcCoordinatedUniversalTimeOffset *obj) const {
    if (obj) {
        IfcCoordinatedUniversalTimeOffset *clone = static_cast< IfcCoordinatedUniversalTimeOffset * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCoordinatedUniversalTimeOffset(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCostItem *DeepCopyOp::operator()(const IfcCostItem *obj) const {
    if (obj) {
        IfcCostItem *clone = static_cast< IfcCostItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCostItem(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCostSchedule *DeepCopyOp::operator()(const IfcCostSchedule *obj) const {
    if (obj) {
        IfcCostSchedule *clone = static_cast< IfcCostSchedule * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCostSchedule(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCostValue *DeepCopyOp::operator()(const IfcCostValue *obj) const {
    if (obj) {
        IfcCostValue *clone = static_cast< IfcCostValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCostValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCovering *DeepCopyOp::operator()(const IfcCovering *obj) const {
    if (obj) {
        IfcCovering *clone = static_cast< IfcCovering * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCovering(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCoveringType *DeepCopyOp::operator()(const IfcCoveringType *obj) const {
    if (obj) {
        IfcCoveringType *clone = static_cast< IfcCoveringType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCoveringType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCraneRailAShapeProfileDef *DeepCopyOp::operator()(const IfcCraneRailAShapeProfileDef *obj) const {
    if (obj) {
        IfcCraneRailAShapeProfileDef *clone = static_cast< IfcCraneRailAShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCraneRailAShapeProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCraneRailFShapeProfileDef *DeepCopyOp::operator()(const IfcCraneRailFShapeProfileDef *obj) const {
    if (obj) {
        IfcCraneRailFShapeProfileDef *clone = static_cast< IfcCraneRailFShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCraneRailFShapeProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCrewResource *DeepCopyOp::operator()(const IfcCrewResource *obj) const {
    if (obj) {
        IfcCrewResource *clone = static_cast< IfcCrewResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCrewResource(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCsgPrimitive3D *DeepCopyOp::operator()(const IfcCsgPrimitive3D *obj) const {
    if (obj) {
        IfcCsgPrimitive3D *clone = static_cast< IfcCsgPrimitive3D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCsgPrimitive3D(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCsgSolid *DeepCopyOp::operator()(const IfcCsgSolid *obj) const {
    if (obj) {
        IfcCsgSolid *clone = static_cast< IfcCsgSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCsgSolid(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurrencyRelationship *DeepCopyOp::operator()(const IfcCurrencyRelationship *obj) const {
    if (obj) {
        IfcCurrencyRelationship *clone = static_cast< IfcCurrencyRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurrencyRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurtainWall *DeepCopyOp::operator()(const IfcCurtainWall *obj) const {
    if (obj) {
        IfcCurtainWall *clone = static_cast< IfcCurtainWall * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurtainWall(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurtainWallType *DeepCopyOp::operator()(const IfcCurtainWallType *obj) const {
    if (obj) {
        IfcCurtainWallType *clone = static_cast< IfcCurtainWallType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurtainWallType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurve *DeepCopyOp::operator()(const IfcCurve *obj) const {
    if (obj) {
        IfcCurve *clone = static_cast< IfcCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurveBoundedPlane *DeepCopyOp::operator()(const IfcCurveBoundedPlane *obj) const {
    if (obj) {
        IfcCurveBoundedPlane *clone = static_cast< IfcCurveBoundedPlane * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurveBoundedPlane(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurveStyle *DeepCopyOp::operator()(const IfcCurveStyle *obj) const {
    if (obj) {
        IfcCurveStyle *clone = static_cast< IfcCurveStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurveStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurveStyleFont *DeepCopyOp::operator()(const IfcCurveStyleFont *obj) const {
    if (obj) {
        IfcCurveStyleFont *clone = static_cast< IfcCurveStyleFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurveStyleFont(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurveStyleFontAndScaling *DeepCopyOp::operator()(const IfcCurveStyleFontAndScaling *obj) const {
    if (obj) {
        IfcCurveStyleFontAndScaling *clone = static_cast< IfcCurveStyleFontAndScaling * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurveStyleFontAndScaling(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurveStyleFontPattern *DeepCopyOp::operator()(const IfcCurveStyleFontPattern *obj) const {
    if (obj) {
        IfcCurveStyleFontPattern *clone = static_cast< IfcCurveStyleFontPattern * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurveStyleFontPattern(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDamperType *DeepCopyOp::operator()(const IfcDamperType *obj) const {
    if (obj) {
        IfcDamperType *clone = static_cast< IfcDamperType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDamperType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDateAndTime *DeepCopyOp::operator()(const IfcDateAndTime *obj) const {
    if (obj) {
        IfcDateAndTime *clone = static_cast< IfcDateAndTime * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDateAndTime(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDefinedSymbol *DeepCopyOp::operator()(const IfcDefinedSymbol *obj) const {
    if (obj) {
        IfcDefinedSymbol *clone = static_cast< IfcDefinedSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDefinedSymbol(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDerivedProfileDef *DeepCopyOp::operator()(const IfcDerivedProfileDef *obj) const {
    if (obj) {
        IfcDerivedProfileDef *clone = static_cast< IfcDerivedProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDerivedProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDerivedUnit *DeepCopyOp::operator()(const IfcDerivedUnit *obj) const {
    if (obj) {
        IfcDerivedUnit *clone = static_cast< IfcDerivedUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDerivedUnit(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDerivedUnitElement *DeepCopyOp::operator()(const IfcDerivedUnitElement *obj) const {
    if (obj) {
        IfcDerivedUnitElement *clone = static_cast< IfcDerivedUnitElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDerivedUnitElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDiameterDimension *DeepCopyOp::operator()(const IfcDiameterDimension *obj) const {
    if (obj) {
        IfcDiameterDimension *clone = static_cast< IfcDiameterDimension * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDiameterDimension(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionCalloutRelationship *DeepCopyOp::operator()(const IfcDimensionCalloutRelationship *obj) const {
    if (obj) {
        IfcDimensionCalloutRelationship *clone = static_cast< IfcDimensionCalloutRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionCalloutRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionCurve *DeepCopyOp::operator()(const IfcDimensionCurve *obj) const {
    if (obj) {
        IfcDimensionCurve *clone = static_cast< IfcDimensionCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionCurveDirectedCallout *DeepCopyOp::operator()(const IfcDimensionCurveDirectedCallout *obj) const {
    if (obj) {
        IfcDimensionCurveDirectedCallout *clone = static_cast< IfcDimensionCurveDirectedCallout * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionCurveDirectedCallout(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionCurveTerminator *DeepCopyOp::operator()(const IfcDimensionCurveTerminator *obj) const {
    if (obj) {
        IfcDimensionCurveTerminator *clone = static_cast< IfcDimensionCurveTerminator * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionCurveTerminator(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionPair *DeepCopyOp::operator()(const IfcDimensionPair *obj) const {
    if (obj) {
        IfcDimensionPair *clone = static_cast< IfcDimensionPair * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionPair(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionalExponents *DeepCopyOp::operator()(const IfcDimensionalExponents *obj) const {
    if (obj) {
        IfcDimensionalExponents *clone = static_cast< IfcDimensionalExponents * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionalExponents(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDirection *DeepCopyOp::operator()(const IfcDirection *obj) const {
    if (obj) {
        IfcDirection *clone = static_cast< IfcDirection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDirection(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDiscreteAccessory *DeepCopyOp::operator()(const IfcDiscreteAccessory *obj) const {
    if (obj) {
        IfcDiscreteAccessory *clone = static_cast< IfcDiscreteAccessory * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDiscreteAccessory(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDiscreteAccessoryType *DeepCopyOp::operator()(const IfcDiscreteAccessoryType *obj) const {
    if (obj) {
        IfcDiscreteAccessoryType *clone = static_cast< IfcDiscreteAccessoryType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDiscreteAccessoryType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionChamberElement *DeepCopyOp::operator()(const IfcDistributionChamberElement *obj) const {
    if (obj) {
        IfcDistributionChamberElement *clone = static_cast< IfcDistributionChamberElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionChamberElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionChamberElementType *DeepCopyOp::operator()(const IfcDistributionChamberElementType *obj) const {
    if (obj) {
        IfcDistributionChamberElementType *clone = static_cast< IfcDistributionChamberElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionChamberElementType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionControlElement *DeepCopyOp::operator()(const IfcDistributionControlElement *obj) const {
    if (obj) {
        IfcDistributionControlElement *clone = static_cast< IfcDistributionControlElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionControlElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionControlElementType *DeepCopyOp::operator()(const IfcDistributionControlElementType *obj) const {
    if (obj) {
        IfcDistributionControlElementType *clone = static_cast< IfcDistributionControlElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionControlElementType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionElement *DeepCopyOp::operator()(const IfcDistributionElement *obj) const {
    if (obj) {
        IfcDistributionElement *clone = static_cast< IfcDistributionElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionElementType *DeepCopyOp::operator()(const IfcDistributionElementType *obj) const {
    if (obj) {
        IfcDistributionElementType *clone = static_cast< IfcDistributionElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionElementType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionFlowElement *DeepCopyOp::operator()(const IfcDistributionFlowElement *obj) const {
    if (obj) {
        IfcDistributionFlowElement *clone = static_cast< IfcDistributionFlowElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionFlowElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionFlowElementType *DeepCopyOp::operator()(const IfcDistributionFlowElementType *obj) const {
    if (obj) {
        IfcDistributionFlowElementType *clone = static_cast< IfcDistributionFlowElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionFlowElementType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionPort *DeepCopyOp::operator()(const IfcDistributionPort *obj) const {
    if (obj) {
        IfcDistributionPort *clone = static_cast< IfcDistributionPort * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionPort(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDocumentElectronicFormat *DeepCopyOp::operator()(const IfcDocumentElectronicFormat *obj) const {
    if (obj) {
        IfcDocumentElectronicFormat *clone = static_cast< IfcDocumentElectronicFormat * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDocumentElectronicFormat(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDocumentInformation *DeepCopyOp::operator()(const IfcDocumentInformation *obj) const {
    if (obj) {
        IfcDocumentInformation *clone = static_cast< IfcDocumentInformation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDocumentInformation(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDocumentInformationRelationship *DeepCopyOp::operator()(const IfcDocumentInformationRelationship *obj) const {
    if (obj) {
        IfcDocumentInformationRelationship *clone = static_cast< IfcDocumentInformationRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDocumentInformationRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDocumentReference *DeepCopyOp::operator()(const IfcDocumentReference *obj) const {
    if (obj) {
        IfcDocumentReference *clone = static_cast< IfcDocumentReference * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDocumentReference(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDoor *DeepCopyOp::operator()(const IfcDoor *obj) const {
    if (obj) {
        IfcDoor *clone = static_cast< IfcDoor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDoor(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDoorLiningProperties *DeepCopyOp::operator()(const IfcDoorLiningProperties *obj) const {
    if (obj) {
        IfcDoorLiningProperties *clone = static_cast< IfcDoorLiningProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDoorLiningProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDoorPanelProperties *DeepCopyOp::operator()(const IfcDoorPanelProperties *obj) const {
    if (obj) {
        IfcDoorPanelProperties *clone = static_cast< IfcDoorPanelProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDoorPanelProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDoorStyle *DeepCopyOp::operator()(const IfcDoorStyle *obj) const {
    if (obj) {
        IfcDoorStyle *clone = static_cast< IfcDoorStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDoorStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDraughtingCallout *DeepCopyOp::operator()(const IfcDraughtingCallout *obj) const {
    if (obj) {
        IfcDraughtingCallout *clone = static_cast< IfcDraughtingCallout * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDraughtingCallout(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDraughtingCalloutRelationship *DeepCopyOp::operator()(const IfcDraughtingCalloutRelationship *obj) const {
    if (obj) {
        IfcDraughtingCalloutRelationship *clone = static_cast< IfcDraughtingCalloutRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDraughtingCalloutRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDraughtingPreDefinedColour *DeepCopyOp::operator()(const IfcDraughtingPreDefinedColour *obj) const {
    if (obj) {
        IfcDraughtingPreDefinedColour *clone = static_cast< IfcDraughtingPreDefinedColour * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDraughtingPreDefinedColour(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDraughtingPreDefinedCurveFont *DeepCopyOp::operator()(const IfcDraughtingPreDefinedCurveFont *obj) const {
    if (obj) {
        IfcDraughtingPreDefinedCurveFont *clone = static_cast< IfcDraughtingPreDefinedCurveFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDraughtingPreDefinedCurveFont(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDraughtingPreDefinedTextFont *DeepCopyOp::operator()(const IfcDraughtingPreDefinedTextFont *obj) const {
    if (obj) {
        IfcDraughtingPreDefinedTextFont *clone = static_cast< IfcDraughtingPreDefinedTextFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDraughtingPreDefinedTextFont(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDuctFittingType *DeepCopyOp::operator()(const IfcDuctFittingType *obj) const {
    if (obj) {
        IfcDuctFittingType *clone = static_cast< IfcDuctFittingType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDuctFittingType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDuctSegmentType *DeepCopyOp::operator()(const IfcDuctSegmentType *obj) const {
    if (obj) {
        IfcDuctSegmentType *clone = static_cast< IfcDuctSegmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDuctSegmentType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDuctSilencerType *DeepCopyOp::operator()(const IfcDuctSilencerType *obj) const {
    if (obj) {
        IfcDuctSilencerType *clone = static_cast< IfcDuctSilencerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDuctSilencerType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEdge *DeepCopyOp::operator()(const IfcEdge *obj) const {
    if (obj) {
        IfcEdge *clone = static_cast< IfcEdge * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEdge(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEdgeCurve *DeepCopyOp::operator()(const IfcEdgeCurve *obj) const {
    if (obj) {
        IfcEdgeCurve *clone = static_cast< IfcEdgeCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEdgeCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEdgeFeature *DeepCopyOp::operator()(const IfcEdgeFeature *obj) const {
    if (obj) {
        IfcEdgeFeature *clone = static_cast< IfcEdgeFeature * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEdgeFeature(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEdgeLoop *DeepCopyOp::operator()(const IfcEdgeLoop *obj) const {
    if (obj) {
        IfcEdgeLoop *clone = static_cast< IfcEdgeLoop * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEdgeLoop(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricApplianceType *DeepCopyOp::operator()(const IfcElectricApplianceType *obj) const {
    if (obj) {
        IfcElectricApplianceType *clone = static_cast< IfcElectricApplianceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricApplianceType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricDistributionPoint *DeepCopyOp::operator()(const IfcElectricDistributionPoint *obj) const {
    if (obj) {
        IfcElectricDistributionPoint *clone = static_cast< IfcElectricDistributionPoint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricDistributionPoint(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricFlowStorageDeviceType *DeepCopyOp::operator()(const IfcElectricFlowStorageDeviceType *obj) const {
    if (obj) {
        IfcElectricFlowStorageDeviceType *clone = static_cast< IfcElectricFlowStorageDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricFlowStorageDeviceType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricGeneratorType *DeepCopyOp::operator()(const IfcElectricGeneratorType *obj) const {
    if (obj) {
        IfcElectricGeneratorType *clone = static_cast< IfcElectricGeneratorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricGeneratorType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricHeaterType *DeepCopyOp::operator()(const IfcElectricHeaterType *obj) const {
    if (obj) {
        IfcElectricHeaterType *clone = static_cast< IfcElectricHeaterType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricHeaterType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricMotorType *DeepCopyOp::operator()(const IfcElectricMotorType *obj) const {
    if (obj) {
        IfcElectricMotorType *clone = static_cast< IfcElectricMotorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricMotorType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricTimeControlType *DeepCopyOp::operator()(const IfcElectricTimeControlType *obj) const {
    if (obj) {
        IfcElectricTimeControlType *clone = static_cast< IfcElectricTimeControlType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricTimeControlType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricalBaseProperties *DeepCopyOp::operator()(const IfcElectricalBaseProperties *obj) const {
    if (obj) {
        IfcElectricalBaseProperties *clone = static_cast< IfcElectricalBaseProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricalBaseProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricalCircuit *DeepCopyOp::operator()(const IfcElectricalCircuit *obj) const {
    if (obj) {
        IfcElectricalCircuit *clone = static_cast< IfcElectricalCircuit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricalCircuit(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricalElement *DeepCopyOp::operator()(const IfcElectricalElement *obj) const {
    if (obj) {
        IfcElectricalElement *clone = static_cast< IfcElectricalElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricalElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElement *DeepCopyOp::operator()(const IfcElement *obj) const {
    if (obj) {
        IfcElement *clone = static_cast< IfcElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementAssembly *DeepCopyOp::operator()(const IfcElementAssembly *obj) const {
    if (obj) {
        IfcElementAssembly *clone = static_cast< IfcElementAssembly * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementAssembly(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementComponent *DeepCopyOp::operator()(const IfcElementComponent *obj) const {
    if (obj) {
        IfcElementComponent *clone = static_cast< IfcElementComponent * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementComponent(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementComponentType *DeepCopyOp::operator()(const IfcElementComponentType *obj) const {
    if (obj) {
        IfcElementComponentType *clone = static_cast< IfcElementComponentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementComponentType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementQuantity *DeepCopyOp::operator()(const IfcElementQuantity *obj) const {
    if (obj) {
        IfcElementQuantity *clone = static_cast< IfcElementQuantity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementQuantity(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementType *DeepCopyOp::operator()(const IfcElementType *obj) const {
    if (obj) {
        IfcElementType *clone = static_cast< IfcElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementarySurface *DeepCopyOp::operator()(const IfcElementarySurface *obj) const {
    if (obj) {
        IfcElementarySurface *clone = static_cast< IfcElementarySurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementarySurface(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEllipse *DeepCopyOp::operator()(const IfcEllipse *obj) const {
    if (obj) {
        IfcEllipse *clone = static_cast< IfcEllipse * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEllipse(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEllipseProfileDef *DeepCopyOp::operator()(const IfcEllipseProfileDef *obj) const {
    if (obj) {
        IfcEllipseProfileDef *clone = static_cast< IfcEllipseProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEllipseProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEnergyConversionDevice *DeepCopyOp::operator()(const IfcEnergyConversionDevice *obj) const {
    if (obj) {
        IfcEnergyConversionDevice *clone = static_cast< IfcEnergyConversionDevice * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEnergyConversionDevice(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEnergyConversionDeviceType *DeepCopyOp::operator()(const IfcEnergyConversionDeviceType *obj) const {
    if (obj) {
        IfcEnergyConversionDeviceType *clone = static_cast< IfcEnergyConversionDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEnergyConversionDeviceType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEnergyProperties *DeepCopyOp::operator()(const IfcEnergyProperties *obj) const {
    if (obj) {
        IfcEnergyProperties *clone = static_cast< IfcEnergyProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEnergyProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEnvironmentalImpactValue *DeepCopyOp::operator()(const IfcEnvironmentalImpactValue *obj) const {
    if (obj) {
        IfcEnvironmentalImpactValue *clone = static_cast< IfcEnvironmentalImpactValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEnvironmentalImpactValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEquipmentElement *DeepCopyOp::operator()(const IfcEquipmentElement *obj) const {
    if (obj) {
        IfcEquipmentElement *clone = static_cast< IfcEquipmentElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEquipmentElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEquipmentStandard *DeepCopyOp::operator()(const IfcEquipmentStandard *obj) const {
    if (obj) {
        IfcEquipmentStandard *clone = static_cast< IfcEquipmentStandard * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEquipmentStandard(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEvaporativeCoolerType *DeepCopyOp::operator()(const IfcEvaporativeCoolerType *obj) const {
    if (obj) {
        IfcEvaporativeCoolerType *clone = static_cast< IfcEvaporativeCoolerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEvaporativeCoolerType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEvaporatorType *DeepCopyOp::operator()(const IfcEvaporatorType *obj) const {
    if (obj) {
        IfcEvaporatorType *clone = static_cast< IfcEvaporatorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEvaporatorType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExtendedMaterialProperties *DeepCopyOp::operator()(const IfcExtendedMaterialProperties *obj) const {
    if (obj) {
        IfcExtendedMaterialProperties *clone = static_cast< IfcExtendedMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExtendedMaterialProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExternalReference *DeepCopyOp::operator()(const IfcExternalReference *obj) const {
    if (obj) {
        IfcExternalReference *clone = static_cast< IfcExternalReference * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExternalReference(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExternallyDefinedHatchStyle *DeepCopyOp::operator()(const IfcExternallyDefinedHatchStyle *obj) const {
    if (obj) {
        IfcExternallyDefinedHatchStyle *clone = static_cast< IfcExternallyDefinedHatchStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExternallyDefinedHatchStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExternallyDefinedSurfaceStyle *DeepCopyOp::operator()(const IfcExternallyDefinedSurfaceStyle *obj) const {
    if (obj) {
        IfcExternallyDefinedSurfaceStyle *clone = static_cast< IfcExternallyDefinedSurfaceStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExternallyDefinedSurfaceStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExternallyDefinedSymbol *DeepCopyOp::operator()(const IfcExternallyDefinedSymbol *obj) const {
    if (obj) {
        IfcExternallyDefinedSymbol *clone = static_cast< IfcExternallyDefinedSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExternallyDefinedSymbol(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExternallyDefinedTextFont *DeepCopyOp::operator()(const IfcExternallyDefinedTextFont *obj) const {
    if (obj) {
        IfcExternallyDefinedTextFont *clone = static_cast< IfcExternallyDefinedTextFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExternallyDefinedTextFont(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExtrudedAreaSolid *DeepCopyOp::operator()(const IfcExtrudedAreaSolid *obj) const {
    if (obj) {
        IfcExtrudedAreaSolid *clone = static_cast< IfcExtrudedAreaSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExtrudedAreaSolid(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFace *DeepCopyOp::operator()(const IfcFace *obj) const {
    if (obj) {
        IfcFace *clone = static_cast< IfcFace * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFace(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFaceBasedSurfaceModel *DeepCopyOp::operator()(const IfcFaceBasedSurfaceModel *obj) const {
    if (obj) {
        IfcFaceBasedSurfaceModel *clone = static_cast< IfcFaceBasedSurfaceModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFaceBasedSurfaceModel(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFaceBound *DeepCopyOp::operator()(const IfcFaceBound *obj) const {
    if (obj) {
        IfcFaceBound *clone = static_cast< IfcFaceBound * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFaceBound(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFaceOuterBound *DeepCopyOp::operator()(const IfcFaceOuterBound *obj) const {
    if (obj) {
        IfcFaceOuterBound *clone = static_cast< IfcFaceOuterBound * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFaceOuterBound(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFaceSurface *DeepCopyOp::operator()(const IfcFaceSurface *obj) const {
    if (obj) {
        IfcFaceSurface *clone = static_cast< IfcFaceSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFaceSurface(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFacetedBrep *DeepCopyOp::operator()(const IfcFacetedBrep *obj) const {
    if (obj) {
        IfcFacetedBrep *clone = static_cast< IfcFacetedBrep * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFacetedBrep(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFacetedBrepWithVoids *DeepCopyOp::operator()(const IfcFacetedBrepWithVoids *obj) const {
    if (obj) {
        IfcFacetedBrepWithVoids *clone = static_cast< IfcFacetedBrepWithVoids * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFacetedBrepWithVoids(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFailureConnectionCondition *DeepCopyOp::operator()(const IfcFailureConnectionCondition *obj) const {
    if (obj) {
        IfcFailureConnectionCondition *clone = static_cast< IfcFailureConnectionCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFailureConnectionCondition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFanType *DeepCopyOp::operator()(const IfcFanType *obj) const {
    if (obj) {
        IfcFanType *clone = static_cast< IfcFanType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFanType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFastener *DeepCopyOp::operator()(const IfcFastener *obj) const {
    if (obj) {
        IfcFastener *clone = static_cast< IfcFastener * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFastener(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFastenerType *DeepCopyOp::operator()(const IfcFastenerType *obj) const {
    if (obj) {
        IfcFastenerType *clone = static_cast< IfcFastenerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFastenerType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFeatureElement *DeepCopyOp::operator()(const IfcFeatureElement *obj) const {
    if (obj) {
        IfcFeatureElement *clone = static_cast< IfcFeatureElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFeatureElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFeatureElementAddition *DeepCopyOp::operator()(const IfcFeatureElementAddition *obj) const {
    if (obj) {
        IfcFeatureElementAddition *clone = static_cast< IfcFeatureElementAddition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFeatureElementAddition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFeatureElementSubtraction *DeepCopyOp::operator()(const IfcFeatureElementSubtraction *obj) const {
    if (obj) {
        IfcFeatureElementSubtraction *clone = static_cast< IfcFeatureElementSubtraction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFeatureElementSubtraction(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFillAreaStyle *DeepCopyOp::operator()(const IfcFillAreaStyle *obj) const {
    if (obj) {
        IfcFillAreaStyle *clone = static_cast< IfcFillAreaStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFillAreaStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFillAreaStyleHatching *DeepCopyOp::operator()(const IfcFillAreaStyleHatching *obj) const {
    if (obj) {
        IfcFillAreaStyleHatching *clone = static_cast< IfcFillAreaStyleHatching * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFillAreaStyleHatching(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFillAreaStyleTileSymbolWithStyle *DeepCopyOp::operator()(const IfcFillAreaStyleTileSymbolWithStyle *obj) const {
    if (obj) {
        IfcFillAreaStyleTileSymbolWithStyle *clone = static_cast< IfcFillAreaStyleTileSymbolWithStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFillAreaStyleTileSymbolWithStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFillAreaStyleTiles *DeepCopyOp::operator()(const IfcFillAreaStyleTiles *obj) const {
    if (obj) {
        IfcFillAreaStyleTiles *clone = static_cast< IfcFillAreaStyleTiles * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFillAreaStyleTiles(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFilterType *DeepCopyOp::operator()(const IfcFilterType *obj) const {
    if (obj) {
        IfcFilterType *clone = static_cast< IfcFilterType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFilterType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFireSuppressionTerminalType *DeepCopyOp::operator()(const IfcFireSuppressionTerminalType *obj) const {
    if (obj) {
        IfcFireSuppressionTerminalType *clone = static_cast< IfcFireSuppressionTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFireSuppressionTerminalType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowController *DeepCopyOp::operator()(const IfcFlowController *obj) const {
    if (obj) {
        IfcFlowController *clone = static_cast< IfcFlowController * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowController(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowControllerType *DeepCopyOp::operator()(const IfcFlowControllerType *obj) const {
    if (obj) {
        IfcFlowControllerType *clone = static_cast< IfcFlowControllerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowControllerType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowFitting *DeepCopyOp::operator()(const IfcFlowFitting *obj) const {
    if (obj) {
        IfcFlowFitting *clone = static_cast< IfcFlowFitting * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowFitting(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowFittingType *DeepCopyOp::operator()(const IfcFlowFittingType *obj) const {
    if (obj) {
        IfcFlowFittingType *clone = static_cast< IfcFlowFittingType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowFittingType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowInstrumentType *DeepCopyOp::operator()(const IfcFlowInstrumentType *obj) const {
    if (obj) {
        IfcFlowInstrumentType *clone = static_cast< IfcFlowInstrumentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowInstrumentType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowMeterType *DeepCopyOp::operator()(const IfcFlowMeterType *obj) const {
    if (obj) {
        IfcFlowMeterType *clone = static_cast< IfcFlowMeterType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowMeterType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowMovingDevice *DeepCopyOp::operator()(const IfcFlowMovingDevice *obj) const {
    if (obj) {
        IfcFlowMovingDevice *clone = static_cast< IfcFlowMovingDevice * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowMovingDevice(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowMovingDeviceType *DeepCopyOp::operator()(const IfcFlowMovingDeviceType *obj) const {
    if (obj) {
        IfcFlowMovingDeviceType *clone = static_cast< IfcFlowMovingDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowMovingDeviceType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowSegment *DeepCopyOp::operator()(const IfcFlowSegment *obj) const {
    if (obj) {
        IfcFlowSegment *clone = static_cast< IfcFlowSegment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowSegment(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowSegmentType *DeepCopyOp::operator()(const IfcFlowSegmentType *obj) const {
    if (obj) {
        IfcFlowSegmentType *clone = static_cast< IfcFlowSegmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowSegmentType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowStorageDevice *DeepCopyOp::operator()(const IfcFlowStorageDevice *obj) const {
    if (obj) {
        IfcFlowStorageDevice *clone = static_cast< IfcFlowStorageDevice * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowStorageDevice(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowStorageDeviceType *DeepCopyOp::operator()(const IfcFlowStorageDeviceType *obj) const {
    if (obj) {
        IfcFlowStorageDeviceType *clone = static_cast< IfcFlowStorageDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowStorageDeviceType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowTerminal *DeepCopyOp::operator()(const IfcFlowTerminal *obj) const {
    if (obj) {
        IfcFlowTerminal *clone = static_cast< IfcFlowTerminal * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowTerminal(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowTerminalType *DeepCopyOp::operator()(const IfcFlowTerminalType *obj) const {
    if (obj) {
        IfcFlowTerminalType *clone = static_cast< IfcFlowTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowTerminalType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowTreatmentDevice *DeepCopyOp::operator()(const IfcFlowTreatmentDevice *obj) const {
    if (obj) {
        IfcFlowTreatmentDevice *clone = static_cast< IfcFlowTreatmentDevice * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowTreatmentDevice(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowTreatmentDeviceType *DeepCopyOp::operator()(const IfcFlowTreatmentDeviceType *obj) const {
    if (obj) {
        IfcFlowTreatmentDeviceType *clone = static_cast< IfcFlowTreatmentDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowTreatmentDeviceType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFluidFlowProperties *DeepCopyOp::operator()(const IfcFluidFlowProperties *obj) const {
    if (obj) {
        IfcFluidFlowProperties *clone = static_cast< IfcFluidFlowProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFluidFlowProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFooting *DeepCopyOp::operator()(const IfcFooting *obj) const {
    if (obj) {
        IfcFooting *clone = static_cast< IfcFooting * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFooting(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFuelProperties *DeepCopyOp::operator()(const IfcFuelProperties *obj) const {
    if (obj) {
        IfcFuelProperties *clone = static_cast< IfcFuelProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFuelProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFurnishingElement *DeepCopyOp::operator()(const IfcFurnishingElement *obj) const {
    if (obj) {
        IfcFurnishingElement *clone = static_cast< IfcFurnishingElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFurnishingElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFurnishingElementType *DeepCopyOp::operator()(const IfcFurnishingElementType *obj) const {
    if (obj) {
        IfcFurnishingElementType *clone = static_cast< IfcFurnishingElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFurnishingElementType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFurnitureStandard *DeepCopyOp::operator()(const IfcFurnitureStandard *obj) const {
    if (obj) {
        IfcFurnitureStandard *clone = static_cast< IfcFurnitureStandard * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFurnitureStandard(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFurnitureType *DeepCopyOp::operator()(const IfcFurnitureType *obj) const {
    if (obj) {
        IfcFurnitureType *clone = static_cast< IfcFurnitureType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFurnitureType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGasTerminalType *DeepCopyOp::operator()(const IfcGasTerminalType *obj) const {
    if (obj) {
        IfcGasTerminalType *clone = static_cast< IfcGasTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGasTerminalType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeneralMaterialProperties *DeepCopyOp::operator()(const IfcGeneralMaterialProperties *obj) const {
    if (obj) {
        IfcGeneralMaterialProperties *clone = static_cast< IfcGeneralMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeneralMaterialProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeneralProfileProperties *DeepCopyOp::operator()(const IfcGeneralProfileProperties *obj) const {
    if (obj) {
        IfcGeneralProfileProperties *clone = static_cast< IfcGeneralProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeneralProfileProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeometricCurveSet *DeepCopyOp::operator()(const IfcGeometricCurveSet *obj) const {
    if (obj) {
        IfcGeometricCurveSet *clone = static_cast< IfcGeometricCurveSet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeometricCurveSet(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeometricRepresentationContext *DeepCopyOp::operator()(const IfcGeometricRepresentationContext *obj) const {
    if (obj) {
        IfcGeometricRepresentationContext *clone = static_cast< IfcGeometricRepresentationContext * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeometricRepresentationContext(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeometricRepresentationItem *DeepCopyOp::operator()(const IfcGeometricRepresentationItem *obj) const {
    if (obj) {
        IfcGeometricRepresentationItem *clone = static_cast< IfcGeometricRepresentationItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeometricRepresentationItem(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeometricRepresentationSubContext *DeepCopyOp::operator()(const IfcGeometricRepresentationSubContext *obj) const {
    if (obj) {
        IfcGeometricRepresentationSubContext *clone = static_cast< IfcGeometricRepresentationSubContext * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeometricRepresentationSubContext(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeometricSet *DeepCopyOp::operator()(const IfcGeometricSet *obj) const {
    if (obj) {
        IfcGeometricSet *clone = static_cast< IfcGeometricSet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeometricSet(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGrid *DeepCopyOp::operator()(const IfcGrid *obj) const {
    if (obj) {
        IfcGrid *clone = static_cast< IfcGrid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGrid(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGridAxis *DeepCopyOp::operator()(const IfcGridAxis *obj) const {
    if (obj) {
        IfcGridAxis *clone = static_cast< IfcGridAxis * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGridAxis(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGridPlacement *DeepCopyOp::operator()(const IfcGridPlacement *obj) const {
    if (obj) {
        IfcGridPlacement *clone = static_cast< IfcGridPlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGridPlacement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGroup *DeepCopyOp::operator()(const IfcGroup *obj) const {
    if (obj) {
        IfcGroup *clone = static_cast< IfcGroup * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGroup(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcHalfSpaceSolid *DeepCopyOp::operator()(const IfcHalfSpaceSolid *obj) const {
    if (obj) {
        IfcHalfSpaceSolid *clone = static_cast< IfcHalfSpaceSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcHalfSpaceSolid(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcHeatExchangerType *DeepCopyOp::operator()(const IfcHeatExchangerType *obj) const {
    if (obj) {
        IfcHeatExchangerType *clone = static_cast< IfcHeatExchangerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcHeatExchangerType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcHumidifierType *DeepCopyOp::operator()(const IfcHumidifierType *obj) const {
    if (obj) {
        IfcHumidifierType *clone = static_cast< IfcHumidifierType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcHumidifierType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcHygroscopicMaterialProperties *DeepCopyOp::operator()(const IfcHygroscopicMaterialProperties *obj) const {
    if (obj) {
        IfcHygroscopicMaterialProperties *clone = static_cast< IfcHygroscopicMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcHygroscopicMaterialProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcIShapeProfileDef *DeepCopyOp::operator()(const IfcIShapeProfileDef *obj) const {
    if (obj) {
        IfcIShapeProfileDef *clone = static_cast< IfcIShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcIShapeProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcImageTexture *DeepCopyOp::operator()(const IfcImageTexture *obj) const {
    if (obj) {
        IfcImageTexture *clone = static_cast< IfcImageTexture * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcImageTexture(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcInventory *DeepCopyOp::operator()(const IfcInventory *obj) const {
    if (obj) {
        IfcInventory *clone = static_cast< IfcInventory * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcInventory(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcIrregularTimeSeries *DeepCopyOp::operator()(const IfcIrregularTimeSeries *obj) const {
    if (obj) {
        IfcIrregularTimeSeries *clone = static_cast< IfcIrregularTimeSeries * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcIrregularTimeSeries(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcIrregularTimeSeriesValue *DeepCopyOp::operator()(const IfcIrregularTimeSeriesValue *obj) const {
    if (obj) {
        IfcIrregularTimeSeriesValue *clone = static_cast< IfcIrregularTimeSeriesValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcIrregularTimeSeriesValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcJunctionBoxType *DeepCopyOp::operator()(const IfcJunctionBoxType *obj) const {
    if (obj) {
        IfcJunctionBoxType *clone = static_cast< IfcJunctionBoxType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcJunctionBoxType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLShapeProfileDef *DeepCopyOp::operator()(const IfcLShapeProfileDef *obj) const {
    if (obj) {
        IfcLShapeProfileDef *clone = static_cast< IfcLShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLShapeProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLaborResource *DeepCopyOp::operator()(const IfcLaborResource *obj) const {
    if (obj) {
        IfcLaborResource *clone = static_cast< IfcLaborResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLaborResource(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLampType *DeepCopyOp::operator()(const IfcLampType *obj) const {
    if (obj) {
        IfcLampType *clone = static_cast< IfcLampType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLampType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLibraryInformation *DeepCopyOp::operator()(const IfcLibraryInformation *obj) const {
    if (obj) {
        IfcLibraryInformation *clone = static_cast< IfcLibraryInformation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLibraryInformation(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLibraryReference *DeepCopyOp::operator()(const IfcLibraryReference *obj) const {
    if (obj) {
        IfcLibraryReference *clone = static_cast< IfcLibraryReference * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLibraryReference(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightDistributionData *DeepCopyOp::operator()(const IfcLightDistributionData *obj) const {
    if (obj) {
        IfcLightDistributionData *clone = static_cast< IfcLightDistributionData * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightDistributionData(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightFixtureType *DeepCopyOp::operator()(const IfcLightFixtureType *obj) const {
    if (obj) {
        IfcLightFixtureType *clone = static_cast< IfcLightFixtureType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightFixtureType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightIntensityDistribution *DeepCopyOp::operator()(const IfcLightIntensityDistribution *obj) const {
    if (obj) {
        IfcLightIntensityDistribution *clone = static_cast< IfcLightIntensityDistribution * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightIntensityDistribution(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSource *DeepCopyOp::operator()(const IfcLightSource *obj) const {
    if (obj) {
        IfcLightSource *clone = static_cast< IfcLightSource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSource(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSourceAmbient *DeepCopyOp::operator()(const IfcLightSourceAmbient *obj) const {
    if (obj) {
        IfcLightSourceAmbient *clone = static_cast< IfcLightSourceAmbient * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSourceAmbient(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSourceDirectional *DeepCopyOp::operator()(const IfcLightSourceDirectional *obj) const {
    if (obj) {
        IfcLightSourceDirectional *clone = static_cast< IfcLightSourceDirectional * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSourceDirectional(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSourceGoniometric *DeepCopyOp::operator()(const IfcLightSourceGoniometric *obj) const {
    if (obj) {
        IfcLightSourceGoniometric *clone = static_cast< IfcLightSourceGoniometric * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSourceGoniometric(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSourcePositional *DeepCopyOp::operator()(const IfcLightSourcePositional *obj) const {
    if (obj) {
        IfcLightSourcePositional *clone = static_cast< IfcLightSourcePositional * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSourcePositional(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSourceSpot *DeepCopyOp::operator()(const IfcLightSourceSpot *obj) const {
    if (obj) {
        IfcLightSourceSpot *clone = static_cast< IfcLightSourceSpot * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSourceSpot(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLine *DeepCopyOp::operator()(const IfcLine *obj) const {
    if (obj) {
        IfcLine *clone = static_cast< IfcLine * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLine(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLinearDimension *DeepCopyOp::operator()(const IfcLinearDimension *obj) const {
    if (obj) {
        IfcLinearDimension *clone = static_cast< IfcLinearDimension * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLinearDimension(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLocalPlacement *DeepCopyOp::operator()(const IfcLocalPlacement *obj) const {
    if (obj) {
        IfcLocalPlacement *clone = static_cast< IfcLocalPlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLocalPlacement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLocalTime *DeepCopyOp::operator()(const IfcLocalTime *obj) const {
    if (obj) {
        IfcLocalTime *clone = static_cast< IfcLocalTime * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLocalTime(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLoop *DeepCopyOp::operator()(const IfcLoop *obj) const {
    if (obj) {
        IfcLoop *clone = static_cast< IfcLoop * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLoop(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcManifoldSolidBrep *DeepCopyOp::operator()(const IfcManifoldSolidBrep *obj) const {
    if (obj) {
        IfcManifoldSolidBrep *clone = static_cast< IfcManifoldSolidBrep * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcManifoldSolidBrep(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMappedItem *DeepCopyOp::operator()(const IfcMappedItem *obj) const {
    if (obj) {
        IfcMappedItem *clone = static_cast< IfcMappedItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMappedItem(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterial *DeepCopyOp::operator()(const IfcMaterial *obj) const {
    if (obj) {
        IfcMaterial *clone = static_cast< IfcMaterial * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterial(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialClassificationRelationship *DeepCopyOp::operator()(const IfcMaterialClassificationRelationship *obj) const {
    if (obj) {
        IfcMaterialClassificationRelationship *clone = static_cast< IfcMaterialClassificationRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialClassificationRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialDefinitionRepresentation *DeepCopyOp::operator()(const IfcMaterialDefinitionRepresentation *obj) const {
    if (obj) {
        IfcMaterialDefinitionRepresentation *clone = static_cast< IfcMaterialDefinitionRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialDefinitionRepresentation(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialLayer *DeepCopyOp::operator()(const IfcMaterialLayer *obj) const {
    if (obj) {
        IfcMaterialLayer *clone = static_cast< IfcMaterialLayer * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialLayer(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialLayerSet *DeepCopyOp::operator()(const IfcMaterialLayerSet *obj) const {
    if (obj) {
        IfcMaterialLayerSet *clone = static_cast< IfcMaterialLayerSet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialLayerSet(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialLayerSetUsage *DeepCopyOp::operator()(const IfcMaterialLayerSetUsage *obj) const {
    if (obj) {
        IfcMaterialLayerSetUsage *clone = static_cast< IfcMaterialLayerSetUsage * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialLayerSetUsage(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialList *DeepCopyOp::operator()(const IfcMaterialList *obj) const {
    if (obj) {
        IfcMaterialList *clone = static_cast< IfcMaterialList * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialList(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialProperties *DeepCopyOp::operator()(const IfcMaterialProperties *obj) const {
    if (obj) {
        IfcMaterialProperties *clone = static_cast< IfcMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMeasureWithUnit *DeepCopyOp::operator()(const IfcMeasureWithUnit *obj) const {
    if (obj) {
        IfcMeasureWithUnit *clone = static_cast< IfcMeasureWithUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMeasureWithUnit(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMechanicalConcreteMaterialProperties *DeepCopyOp::operator()(const IfcMechanicalConcreteMaterialProperties *obj) const {
    if (obj) {
        IfcMechanicalConcreteMaterialProperties *clone = static_cast< IfcMechanicalConcreteMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMechanicalConcreteMaterialProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMechanicalFastener *DeepCopyOp::operator()(const IfcMechanicalFastener *obj) const {
    if (obj) {
        IfcMechanicalFastener *clone = static_cast< IfcMechanicalFastener * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMechanicalFastener(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMechanicalFastenerType *DeepCopyOp::operator()(const IfcMechanicalFastenerType *obj) const {
    if (obj) {
        IfcMechanicalFastenerType *clone = static_cast< IfcMechanicalFastenerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMechanicalFastenerType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMechanicalMaterialProperties *DeepCopyOp::operator()(const IfcMechanicalMaterialProperties *obj) const {
    if (obj) {
        IfcMechanicalMaterialProperties *clone = static_cast< IfcMechanicalMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMechanicalMaterialProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMechanicalSteelMaterialProperties *DeepCopyOp::operator()(const IfcMechanicalSteelMaterialProperties *obj) const {
    if (obj) {
        IfcMechanicalSteelMaterialProperties *clone = static_cast< IfcMechanicalSteelMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMechanicalSteelMaterialProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMember *DeepCopyOp::operator()(const IfcMember *obj) const {
    if (obj) {
        IfcMember *clone = static_cast< IfcMember * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMember(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMemberType *DeepCopyOp::operator()(const IfcMemberType *obj) const {
    if (obj) {
        IfcMemberType *clone = static_cast< IfcMemberType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMemberType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMetric *DeepCopyOp::operator()(const IfcMetric *obj) const {
    if (obj) {
        IfcMetric *clone = static_cast< IfcMetric * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMetric(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMonetaryUnit *DeepCopyOp::operator()(const IfcMonetaryUnit *obj) const {
    if (obj) {
        IfcMonetaryUnit *clone = static_cast< IfcMonetaryUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMonetaryUnit(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMotorConnectionType *DeepCopyOp::operator()(const IfcMotorConnectionType *obj) const {
    if (obj) {
        IfcMotorConnectionType *clone = static_cast< IfcMotorConnectionType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMotorConnectionType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMove *DeepCopyOp::operator()(const IfcMove *obj) const {
    if (obj) {
        IfcMove *clone = static_cast< IfcMove * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMove(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcNamedUnit *DeepCopyOp::operator()(const IfcNamedUnit *obj) const {
    if (obj) {
        IfcNamedUnit *clone = static_cast< IfcNamedUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcNamedUnit(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcObject *DeepCopyOp::operator()(const IfcObject *obj) const {
    if (obj) {
        IfcObject *clone = static_cast< IfcObject * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcObject(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcObjectDefinition *DeepCopyOp::operator()(const IfcObjectDefinition *obj) const {
    if (obj) {
        IfcObjectDefinition *clone = static_cast< IfcObjectDefinition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcObjectDefinition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcObjectPlacement *DeepCopyOp::operator()(const IfcObjectPlacement *obj) const {
    if (obj) {
        IfcObjectPlacement *clone = static_cast< IfcObjectPlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcObjectPlacement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcObjective *DeepCopyOp::operator()(const IfcObjective *obj) const {
    if (obj) {
        IfcObjective *clone = static_cast< IfcObjective * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcObjective(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOccupant *DeepCopyOp::operator()(const IfcOccupant *obj) const {
    if (obj) {
        IfcOccupant *clone = static_cast< IfcOccupant * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOccupant(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOffsetCurve2D *DeepCopyOp::operator()(const IfcOffsetCurve2D *obj) const {
    if (obj) {
        IfcOffsetCurve2D *clone = static_cast< IfcOffsetCurve2D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOffsetCurve2D(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOffsetCurve3D *DeepCopyOp::operator()(const IfcOffsetCurve3D *obj) const {
    if (obj) {
        IfcOffsetCurve3D *clone = static_cast< IfcOffsetCurve3D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOffsetCurve3D(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOneDirectionRepeatFactor *DeepCopyOp::operator()(const IfcOneDirectionRepeatFactor *obj) const {
    if (obj) {
        IfcOneDirectionRepeatFactor *clone = static_cast< IfcOneDirectionRepeatFactor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOneDirectionRepeatFactor(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOpenShell *DeepCopyOp::operator()(const IfcOpenShell *obj) const {
    if (obj) {
        IfcOpenShell *clone = static_cast< IfcOpenShell * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOpenShell(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOpeningElement *DeepCopyOp::operator()(const IfcOpeningElement *obj) const {
    if (obj) {
        IfcOpeningElement *clone = static_cast< IfcOpeningElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOpeningElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOpticalMaterialProperties *DeepCopyOp::operator()(const IfcOpticalMaterialProperties *obj) const {
    if (obj) {
        IfcOpticalMaterialProperties *clone = static_cast< IfcOpticalMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOpticalMaterialProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOrderAction *DeepCopyOp::operator()(const IfcOrderAction *obj) const {
    if (obj) {
        IfcOrderAction *clone = static_cast< IfcOrderAction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOrderAction(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOrganization *DeepCopyOp::operator()(const IfcOrganization *obj) const {
    if (obj) {
        IfcOrganization *clone = static_cast< IfcOrganization * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOrganization(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOrganizationRelationship *DeepCopyOp::operator()(const IfcOrganizationRelationship *obj) const {
    if (obj) {
        IfcOrganizationRelationship *clone = static_cast< IfcOrganizationRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOrganizationRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOrientedEdge *DeepCopyOp::operator()(const IfcOrientedEdge *obj) const {
    if (obj) {
        IfcOrientedEdge *clone = static_cast< IfcOrientedEdge * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOrientedEdge(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOutletType *DeepCopyOp::operator()(const IfcOutletType *obj) const {
    if (obj) {
        IfcOutletType *clone = static_cast< IfcOutletType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOutletType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOwnerHistory *DeepCopyOp::operator()(const IfcOwnerHistory *obj) const {
    if (obj) {
        IfcOwnerHistory *clone = static_cast< IfcOwnerHistory * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOwnerHistory(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcParameterizedProfileDef *DeepCopyOp::operator()(const IfcParameterizedProfileDef *obj) const {
    if (obj) {
        IfcParameterizedProfileDef *clone = static_cast< IfcParameterizedProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcParameterizedProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPath *DeepCopyOp::operator()(const IfcPath *obj) const {
    if (obj) {
        IfcPath *clone = static_cast< IfcPath * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPath(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPerformanceHistory *DeepCopyOp::operator()(const IfcPerformanceHistory *obj) const {
    if (obj) {
        IfcPerformanceHistory *clone = static_cast< IfcPerformanceHistory * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPerformanceHistory(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPermeableCoveringProperties *DeepCopyOp::operator()(const IfcPermeableCoveringProperties *obj) const {
    if (obj) {
        IfcPermeableCoveringProperties *clone = static_cast< IfcPermeableCoveringProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPermeableCoveringProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPermit *DeepCopyOp::operator()(const IfcPermit *obj) const {
    if (obj) {
        IfcPermit *clone = static_cast< IfcPermit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPermit(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPerson *DeepCopyOp::operator()(const IfcPerson *obj) const {
    if (obj) {
        IfcPerson *clone = static_cast< IfcPerson * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPerson(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPersonAndOrganization *DeepCopyOp::operator()(const IfcPersonAndOrganization *obj) const {
    if (obj) {
        IfcPersonAndOrganization *clone = static_cast< IfcPersonAndOrganization * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPersonAndOrganization(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPhysicalComplexQuantity *DeepCopyOp::operator()(const IfcPhysicalComplexQuantity *obj) const {
    if (obj) {
        IfcPhysicalComplexQuantity *clone = static_cast< IfcPhysicalComplexQuantity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPhysicalComplexQuantity(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPhysicalQuantity *DeepCopyOp::operator()(const IfcPhysicalQuantity *obj) const {
    if (obj) {
        IfcPhysicalQuantity *clone = static_cast< IfcPhysicalQuantity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPhysicalQuantity(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPhysicalSimpleQuantity *DeepCopyOp::operator()(const IfcPhysicalSimpleQuantity *obj) const {
    if (obj) {
        IfcPhysicalSimpleQuantity *clone = static_cast< IfcPhysicalSimpleQuantity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPhysicalSimpleQuantity(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPile *DeepCopyOp::operator()(const IfcPile *obj) const {
    if (obj) {
        IfcPile *clone = static_cast< IfcPile * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPile(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPipeFittingType *DeepCopyOp::operator()(const IfcPipeFittingType *obj) const {
    if (obj) {
        IfcPipeFittingType *clone = static_cast< IfcPipeFittingType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPipeFittingType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPipeSegmentType *DeepCopyOp::operator()(const IfcPipeSegmentType *obj) const {
    if (obj) {
        IfcPipeSegmentType *clone = static_cast< IfcPipeSegmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPipeSegmentType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPixelTexture *DeepCopyOp::operator()(const IfcPixelTexture *obj) const {
    if (obj) {
        IfcPixelTexture *clone = static_cast< IfcPixelTexture * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPixelTexture(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlacement *DeepCopyOp::operator()(const IfcPlacement *obj) const {
    if (obj) {
        IfcPlacement *clone = static_cast< IfcPlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlacement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlanarBox *DeepCopyOp::operator()(const IfcPlanarBox *obj) const {
    if (obj) {
        IfcPlanarBox *clone = static_cast< IfcPlanarBox * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlanarBox(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlanarExtent *DeepCopyOp::operator()(const IfcPlanarExtent *obj) const {
    if (obj) {
        IfcPlanarExtent *clone = static_cast< IfcPlanarExtent * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlanarExtent(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlane *DeepCopyOp::operator()(const IfcPlane *obj) const {
    if (obj) {
        IfcPlane *clone = static_cast< IfcPlane * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlane(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlate *DeepCopyOp::operator()(const IfcPlate *obj) const {
    if (obj) {
        IfcPlate *clone = static_cast< IfcPlate * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlate(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlateType *DeepCopyOp::operator()(const IfcPlateType *obj) const {
    if (obj) {
        IfcPlateType *clone = static_cast< IfcPlateType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlateType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPoint *DeepCopyOp::operator()(const IfcPoint *obj) const {
    if (obj) {
        IfcPoint *clone = static_cast< IfcPoint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPoint(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPointOnCurve *DeepCopyOp::operator()(const IfcPointOnCurve *obj) const {
    if (obj) {
        IfcPointOnCurve *clone = static_cast< IfcPointOnCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPointOnCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPointOnSurface *DeepCopyOp::operator()(const IfcPointOnSurface *obj) const {
    if (obj) {
        IfcPointOnSurface *clone = static_cast< IfcPointOnSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPointOnSurface(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPolyLoop *DeepCopyOp::operator()(const IfcPolyLoop *obj) const {
    if (obj) {
        IfcPolyLoop *clone = static_cast< IfcPolyLoop * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPolyLoop(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPolygonalBoundedHalfSpace *DeepCopyOp::operator()(const IfcPolygonalBoundedHalfSpace *obj) const {
    if (obj) {
        IfcPolygonalBoundedHalfSpace *clone = static_cast< IfcPolygonalBoundedHalfSpace * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPolygonalBoundedHalfSpace(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPolyline *DeepCopyOp::operator()(const IfcPolyline *obj) const {
    if (obj) {
        IfcPolyline *clone = static_cast< IfcPolyline * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPolyline(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPort *DeepCopyOp::operator()(const IfcPort *obj) const {
    if (obj) {
        IfcPort *clone = static_cast< IfcPort * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPort(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPostalAddress *DeepCopyOp::operator()(const IfcPostalAddress *obj) const {
    if (obj) {
        IfcPostalAddress *clone = static_cast< IfcPostalAddress * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPostalAddress(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedColour *DeepCopyOp::operator()(const IfcPreDefinedColour *obj) const {
    if (obj) {
        IfcPreDefinedColour *clone = static_cast< IfcPreDefinedColour * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedColour(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedCurveFont *DeepCopyOp::operator()(const IfcPreDefinedCurveFont *obj) const {
    if (obj) {
        IfcPreDefinedCurveFont *clone = static_cast< IfcPreDefinedCurveFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedCurveFont(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedDimensionSymbol *DeepCopyOp::operator()(const IfcPreDefinedDimensionSymbol *obj) const {
    if (obj) {
        IfcPreDefinedDimensionSymbol *clone = static_cast< IfcPreDefinedDimensionSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedDimensionSymbol(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedItem *DeepCopyOp::operator()(const IfcPreDefinedItem *obj) const {
    if (obj) {
        IfcPreDefinedItem *clone = static_cast< IfcPreDefinedItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedItem(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedPointMarkerSymbol *DeepCopyOp::operator()(const IfcPreDefinedPointMarkerSymbol *obj) const {
    if (obj) {
        IfcPreDefinedPointMarkerSymbol *clone = static_cast< IfcPreDefinedPointMarkerSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedPointMarkerSymbol(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedSymbol *DeepCopyOp::operator()(const IfcPreDefinedSymbol *obj) const {
    if (obj) {
        IfcPreDefinedSymbol *clone = static_cast< IfcPreDefinedSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedSymbol(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedTerminatorSymbol *DeepCopyOp::operator()(const IfcPreDefinedTerminatorSymbol *obj) const {
    if (obj) {
        IfcPreDefinedTerminatorSymbol *clone = static_cast< IfcPreDefinedTerminatorSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedTerminatorSymbol(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedTextFont *DeepCopyOp::operator()(const IfcPreDefinedTextFont *obj) const {
    if (obj) {
        IfcPreDefinedTextFont *clone = static_cast< IfcPreDefinedTextFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedTextFont(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPresentationLayerAssignment *DeepCopyOp::operator()(const IfcPresentationLayerAssignment *obj) const {
    if (obj) {
        IfcPresentationLayerAssignment *clone = static_cast< IfcPresentationLayerAssignment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPresentationLayerAssignment(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPresentationLayerWithStyle *DeepCopyOp::operator()(const IfcPresentationLayerWithStyle *obj) const {
    if (obj) {
        IfcPresentationLayerWithStyle *clone = static_cast< IfcPresentationLayerWithStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPresentationLayerWithStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPresentationStyle *DeepCopyOp::operator()(const IfcPresentationStyle *obj) const {
    if (obj) {
        IfcPresentationStyle *clone = static_cast< IfcPresentationStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPresentationStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPresentationStyleAssignment *DeepCopyOp::operator()(const IfcPresentationStyleAssignment *obj) const {
    if (obj) {
        IfcPresentationStyleAssignment *clone = static_cast< IfcPresentationStyleAssignment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPresentationStyleAssignment(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProcedure *DeepCopyOp::operator()(const IfcProcedure *obj) const {
    if (obj) {
        IfcProcedure *clone = static_cast< IfcProcedure * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProcedure(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProcess *DeepCopyOp::operator()(const IfcProcess *obj) const {
    if (obj) {
        IfcProcess *clone = static_cast< IfcProcess * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProcess(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProduct *DeepCopyOp::operator()(const IfcProduct *obj) const {
    if (obj) {
        IfcProduct *clone = static_cast< IfcProduct * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProduct(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProductDefinitionShape *DeepCopyOp::operator()(const IfcProductDefinitionShape *obj) const {
    if (obj) {
        IfcProductDefinitionShape *clone = static_cast< IfcProductDefinitionShape * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProductDefinitionShape(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProductRepresentation *DeepCopyOp::operator()(const IfcProductRepresentation *obj) const {
    if (obj) {
        IfcProductRepresentation *clone = static_cast< IfcProductRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProductRepresentation(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProductsOfCombustionProperties *DeepCopyOp::operator()(const IfcProductsOfCombustionProperties *obj) const {
    if (obj) {
        IfcProductsOfCombustionProperties *clone = static_cast< IfcProductsOfCombustionProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProductsOfCombustionProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProfileDef *DeepCopyOp::operator()(const IfcProfileDef *obj) const {
    if (obj) {
        IfcProfileDef *clone = static_cast< IfcProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProfileProperties *DeepCopyOp::operator()(const IfcProfileProperties *obj) const {
    if (obj) {
        IfcProfileProperties *clone = static_cast< IfcProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProfileProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProject *DeepCopyOp::operator()(const IfcProject *obj) const {
    if (obj) {
        IfcProject *clone = static_cast< IfcProject * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProject(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProjectOrder *DeepCopyOp::operator()(const IfcProjectOrder *obj) const {
    if (obj) {
        IfcProjectOrder *clone = static_cast< IfcProjectOrder * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProjectOrder(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProjectOrderRecord *DeepCopyOp::operator()(const IfcProjectOrderRecord *obj) const {
    if (obj) {
        IfcProjectOrderRecord *clone = static_cast< IfcProjectOrderRecord * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProjectOrderRecord(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProjectionCurve *DeepCopyOp::operator()(const IfcProjectionCurve *obj) const {
    if (obj) {
        IfcProjectionCurve *clone = static_cast< IfcProjectionCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProjectionCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProjectionElement *DeepCopyOp::operator()(const IfcProjectionElement *obj) const {
    if (obj) {
        IfcProjectionElement *clone = static_cast< IfcProjectionElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProjectionElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProperty *DeepCopyOp::operator()(const IfcProperty *obj) const {
    if (obj) {
        IfcProperty *clone = static_cast< IfcProperty * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProperty(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyBoundedValue *DeepCopyOp::operator()(const IfcPropertyBoundedValue *obj) const {
    if (obj) {
        IfcPropertyBoundedValue *clone = static_cast< IfcPropertyBoundedValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyBoundedValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyConstraintRelationship *DeepCopyOp::operator()(const IfcPropertyConstraintRelationship *obj) const {
    if (obj) {
        IfcPropertyConstraintRelationship *clone = static_cast< IfcPropertyConstraintRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyConstraintRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyDefinition *DeepCopyOp::operator()(const IfcPropertyDefinition *obj) const {
    if (obj) {
        IfcPropertyDefinition *clone = static_cast< IfcPropertyDefinition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyDefinition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyDependencyRelationship *DeepCopyOp::operator()(const IfcPropertyDependencyRelationship *obj) const {
    if (obj) {
        IfcPropertyDependencyRelationship *clone = static_cast< IfcPropertyDependencyRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyDependencyRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyEnumeratedValue *DeepCopyOp::operator()(const IfcPropertyEnumeratedValue *obj) const {
    if (obj) {
        IfcPropertyEnumeratedValue *clone = static_cast< IfcPropertyEnumeratedValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyEnumeratedValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyEnumeration *DeepCopyOp::operator()(const IfcPropertyEnumeration *obj) const {
    if (obj) {
        IfcPropertyEnumeration *clone = static_cast< IfcPropertyEnumeration * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyEnumeration(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyListValue *DeepCopyOp::operator()(const IfcPropertyListValue *obj) const {
    if (obj) {
        IfcPropertyListValue *clone = static_cast< IfcPropertyListValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyListValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyReferenceValue *DeepCopyOp::operator()(const IfcPropertyReferenceValue *obj) const {
    if (obj) {
        IfcPropertyReferenceValue *clone = static_cast< IfcPropertyReferenceValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyReferenceValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertySet *DeepCopyOp::operator()(const IfcPropertySet *obj) const {
    if (obj) {
        IfcPropertySet *clone = static_cast< IfcPropertySet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertySet(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertySetDefinition *DeepCopyOp::operator()(const IfcPropertySetDefinition *obj) const {
    if (obj) {
        IfcPropertySetDefinition *clone = static_cast< IfcPropertySetDefinition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertySetDefinition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertySingleValue *DeepCopyOp::operator()(const IfcPropertySingleValue *obj) const {
    if (obj) {
        IfcPropertySingleValue *clone = static_cast< IfcPropertySingleValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertySingleValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyTableValue *DeepCopyOp::operator()(const IfcPropertyTableValue *obj) const {
    if (obj) {
        IfcPropertyTableValue *clone = static_cast< IfcPropertyTableValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyTableValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProtectiveDeviceType *DeepCopyOp::operator()(const IfcProtectiveDeviceType *obj) const {
    if (obj) {
        IfcProtectiveDeviceType *clone = static_cast< IfcProtectiveDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProtectiveDeviceType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProxy *DeepCopyOp::operator()(const IfcProxy *obj) const {
    if (obj) {
        IfcProxy *clone = static_cast< IfcProxy * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProxy(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPumpType *DeepCopyOp::operator()(const IfcPumpType *obj) const {
    if (obj) {
        IfcPumpType *clone = static_cast< IfcPumpType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPumpType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityArea *DeepCopyOp::operator()(const IfcQuantityArea *obj) const {
    if (obj) {
        IfcQuantityArea *clone = static_cast< IfcQuantityArea * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityArea(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityCount *DeepCopyOp::operator()(const IfcQuantityCount *obj) const {
    if (obj) {
        IfcQuantityCount *clone = static_cast< IfcQuantityCount * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityCount(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityLength *DeepCopyOp::operator()(const IfcQuantityLength *obj) const {
    if (obj) {
        IfcQuantityLength *clone = static_cast< IfcQuantityLength * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityLength(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityTime *DeepCopyOp::operator()(const IfcQuantityTime *obj) const {
    if (obj) {
        IfcQuantityTime *clone = static_cast< IfcQuantityTime * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityTime(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityVolume *DeepCopyOp::operator()(const IfcQuantityVolume *obj) const {
    if (obj) {
        IfcQuantityVolume *clone = static_cast< IfcQuantityVolume * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityVolume(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityWeight *DeepCopyOp::operator()(const IfcQuantityWeight *obj) const {
    if (obj) {
        IfcQuantityWeight *clone = static_cast< IfcQuantityWeight * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityWeight(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRadiusDimension *DeepCopyOp::operator()(const IfcRadiusDimension *obj) const {
    if (obj) {
        IfcRadiusDimension *clone = static_cast< IfcRadiusDimension * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRadiusDimension(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRailing *DeepCopyOp::operator()(const IfcRailing *obj) const {
    if (obj) {
        IfcRailing *clone = static_cast< IfcRailing * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRailing(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRailingType *DeepCopyOp::operator()(const IfcRailingType *obj) const {
    if (obj) {
        IfcRailingType *clone = static_cast< IfcRailingType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRailingType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRamp *DeepCopyOp::operator()(const IfcRamp *obj) const {
    if (obj) {
        IfcRamp *clone = static_cast< IfcRamp * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRamp(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRampFlight *DeepCopyOp::operator()(const IfcRampFlight *obj) const {
    if (obj) {
        IfcRampFlight *clone = static_cast< IfcRampFlight * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRampFlight(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRampFlightType *DeepCopyOp::operator()(const IfcRampFlightType *obj) const {
    if (obj) {
        IfcRampFlightType *clone = static_cast< IfcRampFlightType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRampFlightType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRationalBezierCurve *DeepCopyOp::operator()(const IfcRationalBezierCurve *obj) const {
    if (obj) {
        IfcRationalBezierCurve *clone = static_cast< IfcRationalBezierCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRationalBezierCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRectangleHollowProfileDef *DeepCopyOp::operator()(const IfcRectangleHollowProfileDef *obj) const {
    if (obj) {
        IfcRectangleHollowProfileDef *clone = static_cast< IfcRectangleHollowProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRectangleHollowProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRectangleProfileDef *DeepCopyOp::operator()(const IfcRectangleProfileDef *obj) const {
    if (obj) {
        IfcRectangleProfileDef *clone = static_cast< IfcRectangleProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRectangleProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRectangularPyramid *DeepCopyOp::operator()(const IfcRectangularPyramid *obj) const {
    if (obj) {
        IfcRectangularPyramid *clone = static_cast< IfcRectangularPyramid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRectangularPyramid(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRectangularTrimmedSurface *DeepCopyOp::operator()(const IfcRectangularTrimmedSurface *obj) const {
    if (obj) {
        IfcRectangularTrimmedSurface *clone = static_cast< IfcRectangularTrimmedSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRectangularTrimmedSurface(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferencesValueDocument *DeepCopyOp::operator()(const IfcReferencesValueDocument *obj) const {
    if (obj) {
        IfcReferencesValueDocument *clone = static_cast< IfcReferencesValueDocument * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferencesValueDocument(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRegularTimeSeries *DeepCopyOp::operator()(const IfcRegularTimeSeries *obj) const {
    if (obj) {
        IfcRegularTimeSeries *clone = static_cast< IfcRegularTimeSeries * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRegularTimeSeries(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReinforcementBarProperties *DeepCopyOp::operator()(const IfcReinforcementBarProperties *obj) const {
    if (obj) {
        IfcReinforcementBarProperties *clone = static_cast< IfcReinforcementBarProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReinforcementBarProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReinforcementDefinitionProperties *DeepCopyOp::operator()(const IfcReinforcementDefinitionProperties *obj) const {
    if (obj) {
        IfcReinforcementDefinitionProperties *clone = static_cast< IfcReinforcementDefinitionProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReinforcementDefinitionProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReinforcingBar *DeepCopyOp::operator()(const IfcReinforcingBar *obj) const {
    if (obj) {
        IfcReinforcingBar *clone = static_cast< IfcReinforcingBar * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReinforcingBar(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReinforcingElement *DeepCopyOp::operator()(const IfcReinforcingElement *obj) const {
    if (obj) {
        IfcReinforcingElement *clone = static_cast< IfcReinforcingElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReinforcingElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReinforcingMesh *DeepCopyOp::operator()(const IfcReinforcingMesh *obj) const {
    if (obj) {
        IfcReinforcingMesh *clone = static_cast< IfcReinforcingMesh * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReinforcingMesh(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAggregates *DeepCopyOp::operator()(const IfcRelAggregates *obj) const {
    if (obj) {
        IfcRelAggregates *clone = static_cast< IfcRelAggregates * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAggregates(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssigns *DeepCopyOp::operator()(const IfcRelAssigns *obj) const {
    if (obj) {
        IfcRelAssigns *clone = static_cast< IfcRelAssigns * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssigns(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsTasks *DeepCopyOp::operator()(const IfcRelAssignsTasks *obj) const {
    if (obj) {
        IfcRelAssignsTasks *clone = static_cast< IfcRelAssignsTasks * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsTasks(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToActor *DeepCopyOp::operator()(const IfcRelAssignsToActor *obj) const {
    if (obj) {
        IfcRelAssignsToActor *clone = static_cast< IfcRelAssignsToActor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToActor(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToControl *DeepCopyOp::operator()(const IfcRelAssignsToControl *obj) const {
    if (obj) {
        IfcRelAssignsToControl *clone = static_cast< IfcRelAssignsToControl * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToControl(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToGroup *DeepCopyOp::operator()(const IfcRelAssignsToGroup *obj) const {
    if (obj) {
        IfcRelAssignsToGroup *clone = static_cast< IfcRelAssignsToGroup * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToGroup(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToProcess *DeepCopyOp::operator()(const IfcRelAssignsToProcess *obj) const {
    if (obj) {
        IfcRelAssignsToProcess *clone = static_cast< IfcRelAssignsToProcess * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToProcess(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToProduct *DeepCopyOp::operator()(const IfcRelAssignsToProduct *obj) const {
    if (obj) {
        IfcRelAssignsToProduct *clone = static_cast< IfcRelAssignsToProduct * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToProduct(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToProjectOrder *DeepCopyOp::operator()(const IfcRelAssignsToProjectOrder *obj) const {
    if (obj) {
        IfcRelAssignsToProjectOrder *clone = static_cast< IfcRelAssignsToProjectOrder * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToProjectOrder(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToResource *DeepCopyOp::operator()(const IfcRelAssignsToResource *obj) const {
    if (obj) {
        IfcRelAssignsToResource *clone = static_cast< IfcRelAssignsToResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToResource(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociates *DeepCopyOp::operator()(const IfcRelAssociates *obj) const {
    if (obj) {
        IfcRelAssociates *clone = static_cast< IfcRelAssociates * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociates(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesAppliedValue *DeepCopyOp::operator()(const IfcRelAssociatesAppliedValue *obj) const {
    if (obj) {
        IfcRelAssociatesAppliedValue *clone = static_cast< IfcRelAssociatesAppliedValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesAppliedValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesApproval *DeepCopyOp::operator()(const IfcRelAssociatesApproval *obj) const {
    if (obj) {
        IfcRelAssociatesApproval *clone = static_cast< IfcRelAssociatesApproval * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesApproval(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesClassification *DeepCopyOp::operator()(const IfcRelAssociatesClassification *obj) const {
    if (obj) {
        IfcRelAssociatesClassification *clone = static_cast< IfcRelAssociatesClassification * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesClassification(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesConstraint *DeepCopyOp::operator()(const IfcRelAssociatesConstraint *obj) const {
    if (obj) {
        IfcRelAssociatesConstraint *clone = static_cast< IfcRelAssociatesConstraint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesConstraint(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesDocument *DeepCopyOp::operator()(const IfcRelAssociatesDocument *obj) const {
    if (obj) {
        IfcRelAssociatesDocument *clone = static_cast< IfcRelAssociatesDocument * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesDocument(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesLibrary *DeepCopyOp::operator()(const IfcRelAssociatesLibrary *obj) const {
    if (obj) {
        IfcRelAssociatesLibrary *clone = static_cast< IfcRelAssociatesLibrary * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesLibrary(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesMaterial *DeepCopyOp::operator()(const IfcRelAssociatesMaterial *obj) const {
    if (obj) {
        IfcRelAssociatesMaterial *clone = static_cast< IfcRelAssociatesMaterial * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesMaterial(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesProfileProperties *DeepCopyOp::operator()(const IfcRelAssociatesProfileProperties *obj) const {
    if (obj) {
        IfcRelAssociatesProfileProperties *clone = static_cast< IfcRelAssociatesProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesProfileProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnects *DeepCopyOp::operator()(const IfcRelConnects *obj) const {
    if (obj) {
        IfcRelConnects *clone = static_cast< IfcRelConnects * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnects(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsElements *DeepCopyOp::operator()(const IfcRelConnectsElements *obj) const {
    if (obj) {
        IfcRelConnectsElements *clone = static_cast< IfcRelConnectsElements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsElements(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsPathElements *DeepCopyOp::operator()(const IfcRelConnectsPathElements *obj) const {
    if (obj) {
        IfcRelConnectsPathElements *clone = static_cast< IfcRelConnectsPathElements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsPathElements(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsPortToElement *DeepCopyOp::operator()(const IfcRelConnectsPortToElement *obj) const {
    if (obj) {
        IfcRelConnectsPortToElement *clone = static_cast< IfcRelConnectsPortToElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsPortToElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsPorts *DeepCopyOp::operator()(const IfcRelConnectsPorts *obj) const {
    if (obj) {
        IfcRelConnectsPorts *clone = static_cast< IfcRelConnectsPorts * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsPorts(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsStructuralActivity *DeepCopyOp::operator()(const IfcRelConnectsStructuralActivity *obj) const {
    if (obj) {
        IfcRelConnectsStructuralActivity *clone = static_cast< IfcRelConnectsStructuralActivity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsStructuralActivity(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsStructuralElement *DeepCopyOp::operator()(const IfcRelConnectsStructuralElement *obj) const {
    if (obj) {
        IfcRelConnectsStructuralElement *clone = static_cast< IfcRelConnectsStructuralElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsStructuralElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsStructuralMember *DeepCopyOp::operator()(const IfcRelConnectsStructuralMember *obj) const {
    if (obj) {
        IfcRelConnectsStructuralMember *clone = static_cast< IfcRelConnectsStructuralMember * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsStructuralMember(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsWithEccentricity *DeepCopyOp::operator()(const IfcRelConnectsWithEccentricity *obj) const {
    if (obj) {
        IfcRelConnectsWithEccentricity *clone = static_cast< IfcRelConnectsWithEccentricity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsWithEccentricity(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsWithRealizingElements *DeepCopyOp::operator()(const IfcRelConnectsWithRealizingElements *obj) const {
    if (obj) {
        IfcRelConnectsWithRealizingElements *clone = static_cast< IfcRelConnectsWithRealizingElements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsWithRealizingElements(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelContainedInSpatialStructure *DeepCopyOp::operator()(const IfcRelContainedInSpatialStructure *obj) const {
    if (obj) {
        IfcRelContainedInSpatialStructure *clone = static_cast< IfcRelContainedInSpatialStructure * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelContainedInSpatialStructure(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelCoversBldgElements *DeepCopyOp::operator()(const IfcRelCoversBldgElements *obj) const {
    if (obj) {
        IfcRelCoversBldgElements *clone = static_cast< IfcRelCoversBldgElements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelCoversBldgElements(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelCoversSpaces *DeepCopyOp::operator()(const IfcRelCoversSpaces *obj) const {
    if (obj) {
        IfcRelCoversSpaces *clone = static_cast< IfcRelCoversSpaces * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelCoversSpaces(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelDecomposes *DeepCopyOp::operator()(const IfcRelDecomposes *obj) const {
    if (obj) {
        IfcRelDecomposes *clone = static_cast< IfcRelDecomposes * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelDecomposes(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelDefines *DeepCopyOp::operator()(const IfcRelDefines *obj) const {
    if (obj) {
        IfcRelDefines *clone = static_cast< IfcRelDefines * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelDefines(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelDefinesByProperties *DeepCopyOp::operator()(const IfcRelDefinesByProperties *obj) const {
    if (obj) {
        IfcRelDefinesByProperties *clone = static_cast< IfcRelDefinesByProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelDefinesByProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelDefinesByType *DeepCopyOp::operator()(const IfcRelDefinesByType *obj) const {
    if (obj) {
        IfcRelDefinesByType *clone = static_cast< IfcRelDefinesByType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelDefinesByType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelFillsElement *DeepCopyOp::operator()(const IfcRelFillsElement *obj) const {
    if (obj) {
        IfcRelFillsElement *clone = static_cast< IfcRelFillsElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelFillsElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelFlowControlElements *DeepCopyOp::operator()(const IfcRelFlowControlElements *obj) const {
    if (obj) {
        IfcRelFlowControlElements *clone = static_cast< IfcRelFlowControlElements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelFlowControlElements(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelInteractionRequirements *DeepCopyOp::operator()(const IfcRelInteractionRequirements *obj) const {
    if (obj) {
        IfcRelInteractionRequirements *clone = static_cast< IfcRelInteractionRequirements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelInteractionRequirements(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelNests *DeepCopyOp::operator()(const IfcRelNests *obj) const {
    if (obj) {
        IfcRelNests *clone = static_cast< IfcRelNests * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelNests(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelOccupiesSpaces *DeepCopyOp::operator()(const IfcRelOccupiesSpaces *obj) const {
    if (obj) {
        IfcRelOccupiesSpaces *clone = static_cast< IfcRelOccupiesSpaces * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelOccupiesSpaces(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelOverridesProperties *DeepCopyOp::operator()(const IfcRelOverridesProperties *obj) const {
    if (obj) {
        IfcRelOverridesProperties *clone = static_cast< IfcRelOverridesProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelOverridesProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelProjectsElement *DeepCopyOp::operator()(const IfcRelProjectsElement *obj) const {
    if (obj) {
        IfcRelProjectsElement *clone = static_cast< IfcRelProjectsElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelProjectsElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelReferencedInSpatialStructure *DeepCopyOp::operator()(const IfcRelReferencedInSpatialStructure *obj) const {
    if (obj) {
        IfcRelReferencedInSpatialStructure *clone = static_cast< IfcRelReferencedInSpatialStructure * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelReferencedInSpatialStructure(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelSchedulesCostItems *DeepCopyOp::operator()(const IfcRelSchedulesCostItems *obj) const {
    if (obj) {
        IfcRelSchedulesCostItems *clone = static_cast< IfcRelSchedulesCostItems * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelSchedulesCostItems(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelSequence *DeepCopyOp::operator()(const IfcRelSequence *obj) const {
    if (obj) {
        IfcRelSequence *clone = static_cast< IfcRelSequence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelSequence(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelServicesBuildings *DeepCopyOp::operator()(const IfcRelServicesBuildings *obj) const {
    if (obj) {
        IfcRelServicesBuildings *clone = static_cast< IfcRelServicesBuildings * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelServicesBuildings(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelSpaceBoundary *DeepCopyOp::operator()(const IfcRelSpaceBoundary *obj) const {
    if (obj) {
        IfcRelSpaceBoundary *clone = static_cast< IfcRelSpaceBoundary * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelSpaceBoundary(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelVoidsElement *DeepCopyOp::operator()(const IfcRelVoidsElement *obj) const {
    if (obj) {
        IfcRelVoidsElement *clone = static_cast< IfcRelVoidsElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelVoidsElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelationship *DeepCopyOp::operator()(const IfcRelationship *obj) const {
    if (obj) {
        IfcRelationship *clone = static_cast< IfcRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelaxation *DeepCopyOp::operator()(const IfcRelaxation *obj) const {
    if (obj) {
        IfcRelaxation *clone = static_cast< IfcRelaxation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelaxation(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRepresentation *DeepCopyOp::operator()(const IfcRepresentation *obj) const {
    if (obj) {
        IfcRepresentation *clone = static_cast< IfcRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRepresentation(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRepresentationContext *DeepCopyOp::operator()(const IfcRepresentationContext *obj) const {
    if (obj) {
        IfcRepresentationContext *clone = static_cast< IfcRepresentationContext * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRepresentationContext(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRepresentationItem *DeepCopyOp::operator()(const IfcRepresentationItem *obj) const {
    if (obj) {
        IfcRepresentationItem *clone = static_cast< IfcRepresentationItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRepresentationItem(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRepresentationMap *DeepCopyOp::operator()(const IfcRepresentationMap *obj) const {
    if (obj) {
        IfcRepresentationMap *clone = static_cast< IfcRepresentationMap * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRepresentationMap(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcResource *DeepCopyOp::operator()(const IfcResource *obj) const {
    if (obj) {
        IfcResource *clone = static_cast< IfcResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcResource(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRevolvedAreaSolid *DeepCopyOp::operator()(const IfcRevolvedAreaSolid *obj) const {
    if (obj) {
        IfcRevolvedAreaSolid *clone = static_cast< IfcRevolvedAreaSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRevolvedAreaSolid(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRibPlateProfileProperties *DeepCopyOp::operator()(const IfcRibPlateProfileProperties *obj) const {
    if (obj) {
        IfcRibPlateProfileProperties *clone = static_cast< IfcRibPlateProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRibPlateProfileProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRightCircularCone *DeepCopyOp::operator()(const IfcRightCircularCone *obj) const {
    if (obj) {
        IfcRightCircularCone *clone = static_cast< IfcRightCircularCone * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRightCircularCone(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRightCircularCylinder *DeepCopyOp::operator()(const IfcRightCircularCylinder *obj) const {
    if (obj) {
        IfcRightCircularCylinder *clone = static_cast< IfcRightCircularCylinder * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRightCircularCylinder(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRoof *DeepCopyOp::operator()(const IfcRoof *obj) const {
    if (obj) {
        IfcRoof *clone = static_cast< IfcRoof * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRoof(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRoot *DeepCopyOp::operator()(const IfcRoot *obj) const {
    if (obj) {
        IfcRoot *clone = static_cast< IfcRoot * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRoot(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRoundedEdgeFeature *DeepCopyOp::operator()(const IfcRoundedEdgeFeature *obj) const {
    if (obj) {
        IfcRoundedEdgeFeature *clone = static_cast< IfcRoundedEdgeFeature * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRoundedEdgeFeature(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRoundedRectangleProfileDef *DeepCopyOp::operator()(const IfcRoundedRectangleProfileDef *obj) const {
    if (obj) {
        IfcRoundedRectangleProfileDef *clone = static_cast< IfcRoundedRectangleProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRoundedRectangleProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSIUnit *DeepCopyOp::operator()(const IfcSIUnit *obj) const {
    if (obj) {
        IfcSIUnit *clone = static_cast< IfcSIUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSIUnit(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSanitaryTerminalType *DeepCopyOp::operator()(const IfcSanitaryTerminalType *obj) const {
    if (obj) {
        IfcSanitaryTerminalType *clone = static_cast< IfcSanitaryTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSanitaryTerminalType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcScheduleTimeControl *DeepCopyOp::operator()(const IfcScheduleTimeControl *obj) const {
    if (obj) {
        IfcScheduleTimeControl *clone = static_cast< IfcScheduleTimeControl * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcScheduleTimeControl(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSectionProperties *DeepCopyOp::operator()(const IfcSectionProperties *obj) const {
    if (obj) {
        IfcSectionProperties *clone = static_cast< IfcSectionProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSectionProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSectionReinforcementProperties *DeepCopyOp::operator()(const IfcSectionReinforcementProperties *obj) const {
    if (obj) {
        IfcSectionReinforcementProperties *clone = static_cast< IfcSectionReinforcementProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSectionReinforcementProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSectionedSpine *DeepCopyOp::operator()(const IfcSectionedSpine *obj) const {
    if (obj) {
        IfcSectionedSpine *clone = static_cast< IfcSectionedSpine * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSectionedSpine(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSensorType *DeepCopyOp::operator()(const IfcSensorType *obj) const {
    if (obj) {
        IfcSensorType *clone = static_cast< IfcSensorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSensorType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcServiceLife *DeepCopyOp::operator()(const IfcServiceLife *obj) const {
    if (obj) {
        IfcServiceLife *clone = static_cast< IfcServiceLife * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcServiceLife(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcServiceLifeFactor *DeepCopyOp::operator()(const IfcServiceLifeFactor *obj) const {
    if (obj) {
        IfcServiceLifeFactor *clone = static_cast< IfcServiceLifeFactor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcServiceLifeFactor(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcShapeAspect *DeepCopyOp::operator()(const IfcShapeAspect *obj) const {
    if (obj) {
        IfcShapeAspect *clone = static_cast< IfcShapeAspect * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcShapeAspect(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcShapeModel *DeepCopyOp::operator()(const IfcShapeModel *obj) const {
    if (obj) {
        IfcShapeModel *clone = static_cast< IfcShapeModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcShapeModel(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcShapeRepresentation *DeepCopyOp::operator()(const IfcShapeRepresentation *obj) const {
    if (obj) {
        IfcShapeRepresentation *clone = static_cast< IfcShapeRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcShapeRepresentation(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcShellBasedSurfaceModel *DeepCopyOp::operator()(const IfcShellBasedSurfaceModel *obj) const {
    if (obj) {
        IfcShellBasedSurfaceModel *clone = static_cast< IfcShellBasedSurfaceModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcShellBasedSurfaceModel(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSimpleProperty *DeepCopyOp::operator()(const IfcSimpleProperty *obj) const {
    if (obj) {
        IfcSimpleProperty *clone = static_cast< IfcSimpleProperty * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSimpleProperty(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSite *DeepCopyOp::operator()(const IfcSite *obj) const {
    if (obj) {
        IfcSite *clone = static_cast< IfcSite * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSite(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSlab *DeepCopyOp::operator()(const IfcSlab *obj) const {
    if (obj) {
        IfcSlab *clone = static_cast< IfcSlab * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSlab(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSlabType *DeepCopyOp::operator()(const IfcSlabType *obj) const {
    if (obj) {
        IfcSlabType *clone = static_cast< IfcSlabType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSlabType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSlippageConnectionCondition *DeepCopyOp::operator()(const IfcSlippageConnectionCondition *obj) const {
    if (obj) {
        IfcSlippageConnectionCondition *clone = static_cast< IfcSlippageConnectionCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSlippageConnectionCondition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSolidModel *DeepCopyOp::operator()(const IfcSolidModel *obj) const {
    if (obj) {
        IfcSolidModel *clone = static_cast< IfcSolidModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSolidModel(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSoundProperties *DeepCopyOp::operator()(const IfcSoundProperties *obj) const {
    if (obj) {
        IfcSoundProperties *clone = static_cast< IfcSoundProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSoundProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSoundValue *DeepCopyOp::operator()(const IfcSoundValue *obj) const {
    if (obj) {
        IfcSoundValue *clone = static_cast< IfcSoundValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSoundValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpace *DeepCopyOp::operator()(const IfcSpace *obj) const {
    if (obj) {
        IfcSpace *clone = static_cast< IfcSpace * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpace(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpaceHeaterType *DeepCopyOp::operator()(const IfcSpaceHeaterType *obj) const {
    if (obj) {
        IfcSpaceHeaterType *clone = static_cast< IfcSpaceHeaterType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpaceHeaterType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpaceProgram *DeepCopyOp::operator()(const IfcSpaceProgram *obj) const {
    if (obj) {
        IfcSpaceProgram *clone = static_cast< IfcSpaceProgram * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpaceProgram(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpaceThermalLoadProperties *DeepCopyOp::operator()(const IfcSpaceThermalLoadProperties *obj) const {
    if (obj) {
        IfcSpaceThermalLoadProperties *clone = static_cast< IfcSpaceThermalLoadProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpaceThermalLoadProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpaceType *DeepCopyOp::operator()(const IfcSpaceType *obj) const {
    if (obj) {
        IfcSpaceType *clone = static_cast< IfcSpaceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpaceType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpatialStructureElement *DeepCopyOp::operator()(const IfcSpatialStructureElement *obj) const {
    if (obj) {
        IfcSpatialStructureElement *clone = static_cast< IfcSpatialStructureElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpatialStructureElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpatialStructureElementType *DeepCopyOp::operator()(const IfcSpatialStructureElementType *obj) const {
    if (obj) {
        IfcSpatialStructureElementType *clone = static_cast< IfcSpatialStructureElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpatialStructureElementType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSphere *DeepCopyOp::operator()(const IfcSphere *obj) const {
    if (obj) {
        IfcSphere *clone = static_cast< IfcSphere * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSphere(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStackTerminalType *DeepCopyOp::operator()(const IfcStackTerminalType *obj) const {
    if (obj) {
        IfcStackTerminalType *clone = static_cast< IfcStackTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStackTerminalType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStair *DeepCopyOp::operator()(const IfcStair *obj) const {
    if (obj) {
        IfcStair *clone = static_cast< IfcStair * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStair(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStairFlight *DeepCopyOp::operator()(const IfcStairFlight *obj) const {
    if (obj) {
        IfcStairFlight *clone = static_cast< IfcStairFlight * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStairFlight(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStairFlightType *DeepCopyOp::operator()(const IfcStairFlightType *obj) const {
    if (obj) {
        IfcStairFlightType *clone = static_cast< IfcStairFlightType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStairFlightType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralAction *DeepCopyOp::operator()(const IfcStructuralAction *obj) const {
    if (obj) {
        IfcStructuralAction *clone = static_cast< IfcStructuralAction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralAction(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralActivity *DeepCopyOp::operator()(const IfcStructuralActivity *obj) const {
    if (obj) {
        IfcStructuralActivity *clone = static_cast< IfcStructuralActivity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralActivity(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralAnalysisModel *DeepCopyOp::operator()(const IfcStructuralAnalysisModel *obj) const {
    if (obj) {
        IfcStructuralAnalysisModel *clone = static_cast< IfcStructuralAnalysisModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralAnalysisModel(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralConnection *DeepCopyOp::operator()(const IfcStructuralConnection *obj) const {
    if (obj) {
        IfcStructuralConnection *clone = static_cast< IfcStructuralConnection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralConnection(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralConnectionCondition *DeepCopyOp::operator()(const IfcStructuralConnectionCondition *obj) const {
    if (obj) {
        IfcStructuralConnectionCondition *clone = static_cast< IfcStructuralConnectionCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralConnectionCondition(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralCurveConnection *DeepCopyOp::operator()(const IfcStructuralCurveConnection *obj) const {
    if (obj) {
        IfcStructuralCurveConnection *clone = static_cast< IfcStructuralCurveConnection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralCurveConnection(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralCurveMember *DeepCopyOp::operator()(const IfcStructuralCurveMember *obj) const {
    if (obj) {
        IfcStructuralCurveMember *clone = static_cast< IfcStructuralCurveMember * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralCurveMember(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralCurveMemberVarying *DeepCopyOp::operator()(const IfcStructuralCurveMemberVarying *obj) const {
    if (obj) {
        IfcStructuralCurveMemberVarying *clone = static_cast< IfcStructuralCurveMemberVarying * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralCurveMemberVarying(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralItem *DeepCopyOp::operator()(const IfcStructuralItem *obj) const {
    if (obj) {
        IfcStructuralItem *clone = static_cast< IfcStructuralItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralItem(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLinearAction *DeepCopyOp::operator()(const IfcStructuralLinearAction *obj) const {
    if (obj) {
        IfcStructuralLinearAction *clone = static_cast< IfcStructuralLinearAction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLinearAction(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLinearActionVarying *DeepCopyOp::operator()(const IfcStructuralLinearActionVarying *obj) const {
    if (obj) {
        IfcStructuralLinearActionVarying *clone = static_cast< IfcStructuralLinearActionVarying * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLinearActionVarying(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoad *DeepCopyOp::operator()(const IfcStructuralLoad *obj) const {
    if (obj) {
        IfcStructuralLoad *clone = static_cast< IfcStructuralLoad * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoad(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadGroup *DeepCopyOp::operator()(const IfcStructuralLoadGroup *obj) const {
    if (obj) {
        IfcStructuralLoadGroup *clone = static_cast< IfcStructuralLoadGroup * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadGroup(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadLinearForce *DeepCopyOp::operator()(const IfcStructuralLoadLinearForce *obj) const {
    if (obj) {
        IfcStructuralLoadLinearForce *clone = static_cast< IfcStructuralLoadLinearForce * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadLinearForce(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadPlanarForce *DeepCopyOp::operator()(const IfcStructuralLoadPlanarForce *obj) const {
    if (obj) {
        IfcStructuralLoadPlanarForce *clone = static_cast< IfcStructuralLoadPlanarForce * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadPlanarForce(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadSingleDisplacement *DeepCopyOp::operator()(const IfcStructuralLoadSingleDisplacement *obj) const {
    if (obj) {
        IfcStructuralLoadSingleDisplacement *clone = static_cast< IfcStructuralLoadSingleDisplacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadSingleDisplacement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadSingleDisplacementDistortion *DeepCopyOp::operator()(const IfcStructuralLoadSingleDisplacementDistortion *obj) const {
    if (obj) {
        IfcStructuralLoadSingleDisplacementDistortion *clone = static_cast< IfcStructuralLoadSingleDisplacementDistortion * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadSingleDisplacementDistortion(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadSingleForce *DeepCopyOp::operator()(const IfcStructuralLoadSingleForce *obj) const {
    if (obj) {
        IfcStructuralLoadSingleForce *clone = static_cast< IfcStructuralLoadSingleForce * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadSingleForce(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadSingleForceWarping *DeepCopyOp::operator()(const IfcStructuralLoadSingleForceWarping *obj) const {
    if (obj) {
        IfcStructuralLoadSingleForceWarping *clone = static_cast< IfcStructuralLoadSingleForceWarping * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadSingleForceWarping(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadStatic *DeepCopyOp::operator()(const IfcStructuralLoadStatic *obj) const {
    if (obj) {
        IfcStructuralLoadStatic *clone = static_cast< IfcStructuralLoadStatic * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadStatic(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadTemperature *DeepCopyOp::operator()(const IfcStructuralLoadTemperature *obj) const {
    if (obj) {
        IfcStructuralLoadTemperature *clone = static_cast< IfcStructuralLoadTemperature * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadTemperature(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralMember *DeepCopyOp::operator()(const IfcStructuralMember *obj) const {
    if (obj) {
        IfcStructuralMember *clone = static_cast< IfcStructuralMember * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralMember(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralPlanarAction *DeepCopyOp::operator()(const IfcStructuralPlanarAction *obj) const {
    if (obj) {
        IfcStructuralPlanarAction *clone = static_cast< IfcStructuralPlanarAction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralPlanarAction(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralPlanarActionVarying *DeepCopyOp::operator()(const IfcStructuralPlanarActionVarying *obj) const {
    if (obj) {
        IfcStructuralPlanarActionVarying *clone = static_cast< IfcStructuralPlanarActionVarying * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralPlanarActionVarying(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralPointAction *DeepCopyOp::operator()(const IfcStructuralPointAction *obj) const {
    if (obj) {
        IfcStructuralPointAction *clone = static_cast< IfcStructuralPointAction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralPointAction(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralPointConnection *DeepCopyOp::operator()(const IfcStructuralPointConnection *obj) const {
    if (obj) {
        IfcStructuralPointConnection *clone = static_cast< IfcStructuralPointConnection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralPointConnection(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralPointReaction *DeepCopyOp::operator()(const IfcStructuralPointReaction *obj) const {
    if (obj) {
        IfcStructuralPointReaction *clone = static_cast< IfcStructuralPointReaction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralPointReaction(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralProfileProperties *DeepCopyOp::operator()(const IfcStructuralProfileProperties *obj) const {
    if (obj) {
        IfcStructuralProfileProperties *clone = static_cast< IfcStructuralProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralProfileProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralReaction *DeepCopyOp::operator()(const IfcStructuralReaction *obj) const {
    if (obj) {
        IfcStructuralReaction *clone = static_cast< IfcStructuralReaction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralReaction(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralResultGroup *DeepCopyOp::operator()(const IfcStructuralResultGroup *obj) const {
    if (obj) {
        IfcStructuralResultGroup *clone = static_cast< IfcStructuralResultGroup * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralResultGroup(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralSteelProfileProperties *DeepCopyOp::operator()(const IfcStructuralSteelProfileProperties *obj) const {
    if (obj) {
        IfcStructuralSteelProfileProperties *clone = static_cast< IfcStructuralSteelProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralSteelProfileProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralSurfaceConnection *DeepCopyOp::operator()(const IfcStructuralSurfaceConnection *obj) const {
    if (obj) {
        IfcStructuralSurfaceConnection *clone = static_cast< IfcStructuralSurfaceConnection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralSurfaceConnection(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralSurfaceMember *DeepCopyOp::operator()(const IfcStructuralSurfaceMember *obj) const {
    if (obj) {
        IfcStructuralSurfaceMember *clone = static_cast< IfcStructuralSurfaceMember * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralSurfaceMember(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralSurfaceMemberVarying *DeepCopyOp::operator()(const IfcStructuralSurfaceMemberVarying *obj) const {
    if (obj) {
        IfcStructuralSurfaceMemberVarying *clone = static_cast< IfcStructuralSurfaceMemberVarying * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralSurfaceMemberVarying(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuredDimensionCallout *DeepCopyOp::operator()(const IfcStructuredDimensionCallout *obj) const {
    if (obj) {
        IfcStructuredDimensionCallout *clone = static_cast< IfcStructuredDimensionCallout * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuredDimensionCallout(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStyleModel *DeepCopyOp::operator()(const IfcStyleModel *obj) const {
    if (obj) {
        IfcStyleModel *clone = static_cast< IfcStyleModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStyleModel(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStyledItem *DeepCopyOp::operator()(const IfcStyledItem *obj) const {
    if (obj) {
        IfcStyledItem *clone = static_cast< IfcStyledItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStyledItem(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStyledRepresentation *DeepCopyOp::operator()(const IfcStyledRepresentation *obj) const {
    if (obj) {
        IfcStyledRepresentation *clone = static_cast< IfcStyledRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStyledRepresentation(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSubContractResource *DeepCopyOp::operator()(const IfcSubContractResource *obj) const {
    if (obj) {
        IfcSubContractResource *clone = static_cast< IfcSubContractResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSubContractResource(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSubedge *DeepCopyOp::operator()(const IfcSubedge *obj) const {
    if (obj) {
        IfcSubedge *clone = static_cast< IfcSubedge * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSubedge(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurface *DeepCopyOp::operator()(const IfcSurface *obj) const {
    if (obj) {
        IfcSurface *clone = static_cast< IfcSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurface(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceCurveSweptAreaSolid *DeepCopyOp::operator()(const IfcSurfaceCurveSweptAreaSolid *obj) const {
    if (obj) {
        IfcSurfaceCurveSweptAreaSolid *clone = static_cast< IfcSurfaceCurveSweptAreaSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceCurveSweptAreaSolid(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceOfLinearExtrusion *DeepCopyOp::operator()(const IfcSurfaceOfLinearExtrusion *obj) const {
    if (obj) {
        IfcSurfaceOfLinearExtrusion *clone = static_cast< IfcSurfaceOfLinearExtrusion * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceOfLinearExtrusion(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceOfRevolution *DeepCopyOp::operator()(const IfcSurfaceOfRevolution *obj) const {
    if (obj) {
        IfcSurfaceOfRevolution *clone = static_cast< IfcSurfaceOfRevolution * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceOfRevolution(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyle *DeepCopyOp::operator()(const IfcSurfaceStyle *obj) const {
    if (obj) {
        IfcSurfaceStyle *clone = static_cast< IfcSurfaceStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyleLighting *DeepCopyOp::operator()(const IfcSurfaceStyleLighting *obj) const {
    if (obj) {
        IfcSurfaceStyleLighting *clone = static_cast< IfcSurfaceStyleLighting * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyleLighting(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyleRefraction *DeepCopyOp::operator()(const IfcSurfaceStyleRefraction *obj) const {
    if (obj) {
        IfcSurfaceStyleRefraction *clone = static_cast< IfcSurfaceStyleRefraction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyleRefraction(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyleRendering *DeepCopyOp::operator()(const IfcSurfaceStyleRendering *obj) const {
    if (obj) {
        IfcSurfaceStyleRendering *clone = static_cast< IfcSurfaceStyleRendering * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyleRendering(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyleShading *DeepCopyOp::operator()(const IfcSurfaceStyleShading *obj) const {
    if (obj) {
        IfcSurfaceStyleShading *clone = static_cast< IfcSurfaceStyleShading * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyleShading(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyleWithTextures *DeepCopyOp::operator()(const IfcSurfaceStyleWithTextures *obj) const {
    if (obj) {
        IfcSurfaceStyleWithTextures *clone = static_cast< IfcSurfaceStyleWithTextures * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyleWithTextures(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceTexture *DeepCopyOp::operator()(const IfcSurfaceTexture *obj) const {
    if (obj) {
        IfcSurfaceTexture *clone = static_cast< IfcSurfaceTexture * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceTexture(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSweptAreaSolid *DeepCopyOp::operator()(const IfcSweptAreaSolid *obj) const {
    if (obj) {
        IfcSweptAreaSolid *clone = static_cast< IfcSweptAreaSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSweptAreaSolid(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSweptDiskSolid *DeepCopyOp::operator()(const IfcSweptDiskSolid *obj) const {
    if (obj) {
        IfcSweptDiskSolid *clone = static_cast< IfcSweptDiskSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSweptDiskSolid(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSweptSurface *DeepCopyOp::operator()(const IfcSweptSurface *obj) const {
    if (obj) {
        IfcSweptSurface *clone = static_cast< IfcSweptSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSweptSurface(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSwitchingDeviceType *DeepCopyOp::operator()(const IfcSwitchingDeviceType *obj) const {
    if (obj) {
        IfcSwitchingDeviceType *clone = static_cast< IfcSwitchingDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSwitchingDeviceType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSymbolStyle *DeepCopyOp::operator()(const IfcSymbolStyle *obj) const {
    if (obj) {
        IfcSymbolStyle *clone = static_cast< IfcSymbolStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSymbolStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSystem *DeepCopyOp::operator()(const IfcSystem *obj) const {
    if (obj) {
        IfcSystem *clone = static_cast< IfcSystem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSystem(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSystemFurnitureElementType *DeepCopyOp::operator()(const IfcSystemFurnitureElementType *obj) const {
    if (obj) {
        IfcSystemFurnitureElementType *clone = static_cast< IfcSystemFurnitureElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSystemFurnitureElementType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTShapeProfileDef *DeepCopyOp::operator()(const IfcTShapeProfileDef *obj) const {
    if (obj) {
        IfcTShapeProfileDef *clone = static_cast< IfcTShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTShapeProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTable *DeepCopyOp::operator()(const IfcTable *obj) const {
    if (obj) {
        IfcTable *clone = static_cast< IfcTable * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTable(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTableRow *DeepCopyOp::operator()(const IfcTableRow *obj) const {
    if (obj) {
        IfcTableRow *clone = static_cast< IfcTableRow * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTableRow(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTankType *DeepCopyOp::operator()(const IfcTankType *obj) const {
    if (obj) {
        IfcTankType *clone = static_cast< IfcTankType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTankType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTask *DeepCopyOp::operator()(const IfcTask *obj) const {
    if (obj) {
        IfcTask *clone = static_cast< IfcTask * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTask(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTelecomAddress *DeepCopyOp::operator()(const IfcTelecomAddress *obj) const {
    if (obj) {
        IfcTelecomAddress *clone = static_cast< IfcTelecomAddress * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTelecomAddress(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTendon *DeepCopyOp::operator()(const IfcTendon *obj) const {
    if (obj) {
        IfcTendon *clone = static_cast< IfcTendon * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTendon(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTendonAnchor *DeepCopyOp::operator()(const IfcTendonAnchor *obj) const {
    if (obj) {
        IfcTendonAnchor *clone = static_cast< IfcTendonAnchor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTendonAnchor(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTerminatorSymbol *DeepCopyOp::operator()(const IfcTerminatorSymbol *obj) const {
    if (obj) {
        IfcTerminatorSymbol *clone = static_cast< IfcTerminatorSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTerminatorSymbol(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextLiteral *DeepCopyOp::operator()(const IfcTextLiteral *obj) const {
    if (obj) {
        IfcTextLiteral *clone = static_cast< IfcTextLiteral * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextLiteral(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextLiteralWithExtent *DeepCopyOp::operator()(const IfcTextLiteralWithExtent *obj) const {
    if (obj) {
        IfcTextLiteralWithExtent *clone = static_cast< IfcTextLiteralWithExtent * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextLiteralWithExtent(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextStyle *DeepCopyOp::operator()(const IfcTextStyle *obj) const {
    if (obj) {
        IfcTextStyle *clone = static_cast< IfcTextStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextStyleFontModel *DeepCopyOp::operator()(const IfcTextStyleFontModel *obj) const {
    if (obj) {
        IfcTextStyleFontModel *clone = static_cast< IfcTextStyleFontModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextStyleFontModel(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextStyleForDefinedFont *DeepCopyOp::operator()(const IfcTextStyleForDefinedFont *obj) const {
    if (obj) {
        IfcTextStyleForDefinedFont *clone = static_cast< IfcTextStyleForDefinedFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextStyleForDefinedFont(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextStyleTextModel *DeepCopyOp::operator()(const IfcTextStyleTextModel *obj) const {
    if (obj) {
        IfcTextStyleTextModel *clone = static_cast< IfcTextStyleTextModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextStyleTextModel(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextStyleWithBoxCharacteristics *DeepCopyOp::operator()(const IfcTextStyleWithBoxCharacteristics *obj) const {
    if (obj) {
        IfcTextStyleWithBoxCharacteristics *clone = static_cast< IfcTextStyleWithBoxCharacteristics * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextStyleWithBoxCharacteristics(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextureCoordinate *DeepCopyOp::operator()(const IfcTextureCoordinate *obj) const {
    if (obj) {
        IfcTextureCoordinate *clone = static_cast< IfcTextureCoordinate * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextureCoordinate(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextureCoordinateGenerator *DeepCopyOp::operator()(const IfcTextureCoordinateGenerator *obj) const {
    if (obj) {
        IfcTextureCoordinateGenerator *clone = static_cast< IfcTextureCoordinateGenerator * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextureCoordinateGenerator(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextureMap *DeepCopyOp::operator()(const IfcTextureMap *obj) const {
    if (obj) {
        IfcTextureMap *clone = static_cast< IfcTextureMap * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextureMap(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextureVertex *DeepCopyOp::operator()(const IfcTextureVertex *obj) const {
    if (obj) {
        IfcTextureVertex *clone = static_cast< IfcTextureVertex * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextureVertex(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcThermalMaterialProperties *DeepCopyOp::operator()(const IfcThermalMaterialProperties *obj) const {
    if (obj) {
        IfcThermalMaterialProperties *clone = static_cast< IfcThermalMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcThermalMaterialProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTimeSeries *DeepCopyOp::operator()(const IfcTimeSeries *obj) const {
    if (obj) {
        IfcTimeSeries *clone = static_cast< IfcTimeSeries * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTimeSeries(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTimeSeriesReferenceRelationship *DeepCopyOp::operator()(const IfcTimeSeriesReferenceRelationship *obj) const {
    if (obj) {
        IfcTimeSeriesReferenceRelationship *clone = static_cast< IfcTimeSeriesReferenceRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTimeSeriesReferenceRelationship(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTimeSeriesSchedule *DeepCopyOp::operator()(const IfcTimeSeriesSchedule *obj) const {
    if (obj) {
        IfcTimeSeriesSchedule *clone = static_cast< IfcTimeSeriesSchedule * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTimeSeriesSchedule(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTimeSeriesValue *DeepCopyOp::operator()(const IfcTimeSeriesValue *obj) const {
    if (obj) {
        IfcTimeSeriesValue *clone = static_cast< IfcTimeSeriesValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTimeSeriesValue(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTopologicalRepresentationItem *DeepCopyOp::operator()(const IfcTopologicalRepresentationItem *obj) const {
    if (obj) {
        IfcTopologicalRepresentationItem *clone = static_cast< IfcTopologicalRepresentationItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTopologicalRepresentationItem(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTopologyRepresentation *DeepCopyOp::operator()(const IfcTopologyRepresentation *obj) const {
    if (obj) {
        IfcTopologyRepresentation *clone = static_cast< IfcTopologyRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTopologyRepresentation(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTransformerType *DeepCopyOp::operator()(const IfcTransformerType *obj) const {
    if (obj) {
        IfcTransformerType *clone = static_cast< IfcTransformerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTransformerType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTransportElement *DeepCopyOp::operator()(const IfcTransportElement *obj) const {
    if (obj) {
        IfcTransportElement *clone = static_cast< IfcTransportElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTransportElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTransportElementType *DeepCopyOp::operator()(const IfcTransportElementType *obj) const {
    if (obj) {
        IfcTransportElementType *clone = static_cast< IfcTransportElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTransportElementType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTrapeziumProfileDef *DeepCopyOp::operator()(const IfcTrapeziumProfileDef *obj) const {
    if (obj) {
        IfcTrapeziumProfileDef *clone = static_cast< IfcTrapeziumProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTrapeziumProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTrimmedCurve *DeepCopyOp::operator()(const IfcTrimmedCurve *obj) const {
    if (obj) {
        IfcTrimmedCurve *clone = static_cast< IfcTrimmedCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTrimmedCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTubeBundleType *DeepCopyOp::operator()(const IfcTubeBundleType *obj) const {
    if (obj) {
        IfcTubeBundleType *clone = static_cast< IfcTubeBundleType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTubeBundleType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTwoDirectionRepeatFactor *DeepCopyOp::operator()(const IfcTwoDirectionRepeatFactor *obj) const {
    if (obj) {
        IfcTwoDirectionRepeatFactor *clone = static_cast< IfcTwoDirectionRepeatFactor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTwoDirectionRepeatFactor(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTypeObject *DeepCopyOp::operator()(const IfcTypeObject *obj) const {
    if (obj) {
        IfcTypeObject *clone = static_cast< IfcTypeObject * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTypeObject(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTypeProduct *DeepCopyOp::operator()(const IfcTypeProduct *obj) const {
    if (obj) {
        IfcTypeProduct *clone = static_cast< IfcTypeProduct * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTypeProduct(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcUShapeProfileDef *DeepCopyOp::operator()(const IfcUShapeProfileDef *obj) const {
    if (obj) {
        IfcUShapeProfileDef *clone = static_cast< IfcUShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcUShapeProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcUnitAssignment *DeepCopyOp::operator()(const IfcUnitAssignment *obj) const {
    if (obj) {
        IfcUnitAssignment *clone = static_cast< IfcUnitAssignment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcUnitAssignment(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcUnitaryEquipmentType *DeepCopyOp::operator()(const IfcUnitaryEquipmentType *obj) const {
    if (obj) {
        IfcUnitaryEquipmentType *clone = static_cast< IfcUnitaryEquipmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcUnitaryEquipmentType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcValveType *DeepCopyOp::operator()(const IfcValveType *obj) const {
    if (obj) {
        IfcValveType *clone = static_cast< IfcValveType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcValveType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVector *DeepCopyOp::operator()(const IfcVector *obj) const {
    if (obj) {
        IfcVector *clone = static_cast< IfcVector * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVector(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVertex *DeepCopyOp::operator()(const IfcVertex *obj) const {
    if (obj) {
        IfcVertex *clone = static_cast< IfcVertex * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVertex(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVertexBasedTextureMap *DeepCopyOp::operator()(const IfcVertexBasedTextureMap *obj) const {
    if (obj) {
        IfcVertexBasedTextureMap *clone = static_cast< IfcVertexBasedTextureMap * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVertexBasedTextureMap(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVertexLoop *DeepCopyOp::operator()(const IfcVertexLoop *obj) const {
    if (obj) {
        IfcVertexLoop *clone = static_cast< IfcVertexLoop * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVertexLoop(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVertexPoint *DeepCopyOp::operator()(const IfcVertexPoint *obj) const {
    if (obj) {
        IfcVertexPoint *clone = static_cast< IfcVertexPoint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVertexPoint(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVibrationIsolatorType *DeepCopyOp::operator()(const IfcVibrationIsolatorType *obj) const {
    if (obj) {
        IfcVibrationIsolatorType *clone = static_cast< IfcVibrationIsolatorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVibrationIsolatorType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVirtualElement *DeepCopyOp::operator()(const IfcVirtualElement *obj) const {
    if (obj) {
        IfcVirtualElement *clone = static_cast< IfcVirtualElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVirtualElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVirtualGridIntersection *DeepCopyOp::operator()(const IfcVirtualGridIntersection *obj) const {
    if (obj) {
        IfcVirtualGridIntersection *clone = static_cast< IfcVirtualGridIntersection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVirtualGridIntersection(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWall *DeepCopyOp::operator()(const IfcWall *obj) const {
    if (obj) {
        IfcWall *clone = static_cast< IfcWall * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWall(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWallStandardCase *DeepCopyOp::operator()(const IfcWallStandardCase *obj) const {
    if (obj) {
        IfcWallStandardCase *clone = static_cast< IfcWallStandardCase * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWallStandardCase(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWallType *DeepCopyOp::operator()(const IfcWallType *obj) const {
    if (obj) {
        IfcWallType *clone = static_cast< IfcWallType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWallType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWasteTerminalType *DeepCopyOp::operator()(const IfcWasteTerminalType *obj) const {
    if (obj) {
        IfcWasteTerminalType *clone = static_cast< IfcWasteTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWasteTerminalType(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWaterProperties *DeepCopyOp::operator()(const IfcWaterProperties *obj) const {
    if (obj) {
        IfcWaterProperties *clone = static_cast< IfcWaterProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWaterProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWindow *DeepCopyOp::operator()(const IfcWindow *obj) const {
    if (obj) {
        IfcWindow *clone = static_cast< IfcWindow * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWindow(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWindowLiningProperties *DeepCopyOp::operator()(const IfcWindowLiningProperties *obj) const {
    if (obj) {
        IfcWindowLiningProperties *clone = static_cast< IfcWindowLiningProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWindowLiningProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWindowPanelProperties *DeepCopyOp::operator()(const IfcWindowPanelProperties *obj) const {
    if (obj) {
        IfcWindowPanelProperties *clone = static_cast< IfcWindowPanelProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWindowPanelProperties(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWindowStyle *DeepCopyOp::operator()(const IfcWindowStyle *obj) const {
    if (obj) {
        IfcWindowStyle *clone = static_cast< IfcWindowStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWindowStyle(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWorkControl *DeepCopyOp::operator()(const IfcWorkControl *obj) const {
    if (obj) {
        IfcWorkControl *clone = static_cast< IfcWorkControl * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWorkControl(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWorkPlan *DeepCopyOp::operator()(const IfcWorkPlan *obj) const {
    if (obj) {
        IfcWorkPlan *clone = static_cast< IfcWorkPlan * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWorkPlan(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWorkSchedule *DeepCopyOp::operator()(const IfcWorkSchedule *obj) const {
    if (obj) {
        IfcWorkSchedule *clone = static_cast< IfcWorkSchedule * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWorkSchedule(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcZShapeProfileDef *DeepCopyOp::operator()(const IfcZShapeProfileDef *obj) const {
    if (obj) {
        IfcZShapeProfileDef *clone = static_cast< IfcZShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcZShapeProfileDef(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcZone *DeepCopyOp::operator()(const IfcZone *obj) const {
    if (obj) {
        IfcZone *clone = static_cast< IfcZone * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcZone(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCivilStructureElement *DeepCopyOp::operator()(const IfcCivilStructureElement *obj) const {
    if (obj) {
        IfcCivilStructureElement *clone = static_cast< IfcCivilStructureElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCivilStructureElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgeStructureElement *DeepCopyOp::operator()(const IfcBridgeStructureElement *obj) const {
    if (obj) {
        IfcBridgeStructureElement *clone = static_cast< IfcBridgeStructureElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgeStructureElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridge *DeepCopyOp::operator()(const IfcBridge *obj) const {
    if (obj) {
        IfcBridge *clone = static_cast< IfcBridge * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridge(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgePart *DeepCopyOp::operator()(const IfcBridgePart *obj) const {
    if (obj) {
        IfcBridgePart *clone = static_cast< IfcBridgePart * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgePart(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCivilElement *DeepCopyOp::operator()(const IfcCivilElement *obj) const {
    if (obj) {
        IfcCivilElement *clone = static_cast< IfcCivilElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCivilElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgeElement *DeepCopyOp::operator()(const IfcBridgeElement *obj) const {
    if (obj) {
        IfcBridgeElement *clone = static_cast< IfcBridgeElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgeElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgeSegment *DeepCopyOp::operator()(const IfcBridgeSegment *obj) const {
    if (obj) {
        IfcBridgeSegment *clone = static_cast< IfcBridgeSegment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgeSegment(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgeSegmentPart *DeepCopyOp::operator()(const IfcBridgeSegmentPart *obj) const {
    if (obj) {
        IfcBridgeSegmentPart *clone = static_cast< IfcBridgeSegmentPart * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgeSegmentPart(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgeContactElement *DeepCopyOp::operator()(const IfcBridgeContactElement *obj) const {
    if (obj) {
        IfcBridgeContactElement *clone = static_cast< IfcBridgeContactElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgeContactElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgePrismaticElement *DeepCopyOp::operator()(const IfcBridgePrismaticElement *obj) const {
    if (obj) {
        IfcBridgePrismaticElement *clone = static_cast< IfcBridgePrismaticElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgePrismaticElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAlignmentElement *DeepCopyOp::operator()(const IfcAlignmentElement *obj) const {
    if (obj) {
        IfcAlignmentElement *clone = static_cast< IfcAlignmentElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAlignmentElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceElement *DeepCopyOp::operator()(const IfcReferenceElement *obj) const {
    if (obj) {
        IfcReferenceElement *clone = static_cast< IfcReferenceElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceElement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceCurve *DeepCopyOp::operator()(const IfcReferenceCurve *obj) const {
    if (obj) {
        IfcReferenceCurve *clone = static_cast< IfcReferenceCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceCurve(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceCurve3D *DeepCopyOp::operator()(const IfcReferenceCurve3D *obj) const {
    if (obj) {
        IfcReferenceCurve3D *clone = static_cast< IfcReferenceCurve3D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceCurve3D(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceCurveAlignment2D *DeepCopyOp::operator()(const IfcReferenceCurveAlignment2D *obj) const {
    if (obj) {
        IfcReferenceCurveAlignment2D *clone = static_cast< IfcReferenceCurveAlignment2D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceCurveAlignment2D(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferencePlacement *DeepCopyOp::operator()(const IfcReferencePlacement *obj) const {
    if (obj) {
        IfcReferencePlacement *clone = static_cast< IfcReferencePlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferencePlacement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceCurvePlacement *DeepCopyOp::operator()(const IfcReferenceCurvePlacement *obj) const {
    if (obj) {
        IfcReferenceCurvePlacement *clone = static_cast< IfcReferenceCurvePlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceCurvePlacement(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceCurvePlacementSystem *DeepCopyOp::operator()(const IfcReferenceCurvePlacementSystem *obj) const {
    if (obj) {
        IfcReferenceCurvePlacementSystem *clone = static_cast< IfcReferenceCurvePlacementSystem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceCurvePlacementSystem(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementPart *DeepCopyOp::operator()(const IfcElementPart *obj) const {
    if (obj) {
        IfcElementPart *clone = static_cast< IfcElementPart * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementPart(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCivilElementPart *DeepCopyOp::operator()(const IfcCivilElementPart *obj) const {
    if (obj) {
        IfcCivilElementPart *clone = static_cast< IfcCivilElementPart * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCivilElementPart(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCivilSheath *DeepCopyOp::operator()(const IfcCivilSheath *obj) const {
    if (obj) {
        IfcCivilSheath *clone = static_cast< IfcCivilSheath * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCivilSheath(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCivilVoid *DeepCopyOp::operator()(const IfcCivilVoid *obj) const {
    if (obj) {
        IfcCivilVoid *clone = static_cast< IfcCivilVoid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCivilVoid(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClothoid *DeepCopyOp::operator()(const IfcClothoid *obj) const {
    if (obj) {
        IfcClothoid *clone = static_cast< IfcClothoid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClothoid(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferencedSectionedSpine *DeepCopyOp::operator()(const IfcReferencedSectionedSpine *obj) const {
    if (obj) {
        IfcReferencedSectionedSpine *clone = static_cast< IfcReferencedSectionedSpine * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferencedSectionedSpine(static_cast< ExpressDataSet * > (obj->getExpressDataSet()), *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

ShallowCopyOp::ShallowCopyOp() {
}

ShallowCopyOp::~ShallowCopyOp() {
}

Ifc2DCompositeCurve *ShallowCopyOp::operator()(const Ifc2DCompositeCurve *obj) const {
    return const_cast< Ifc2DCompositeCurve * > (obj);
}

IfcActionRequest *ShallowCopyOp::operator()(const IfcActionRequest *obj) const {
    return const_cast< IfcActionRequest * > (obj);
}

IfcActor *ShallowCopyOp::operator()(const IfcActor *obj) const {
    return const_cast< IfcActor * > (obj);
}

IfcActorRole *ShallowCopyOp::operator()(const IfcActorRole *obj) const {
    return const_cast< IfcActorRole * > (obj);
}

IfcActuatorType *ShallowCopyOp::operator()(const IfcActuatorType *obj) const {
    return const_cast< IfcActuatorType * > (obj);
}

IfcAddress *ShallowCopyOp::operator()(const IfcAddress *obj) const {
    return const_cast< IfcAddress * > (obj);
}

IfcAirTerminalBoxType *ShallowCopyOp::operator()(const IfcAirTerminalBoxType *obj) const {
    return const_cast< IfcAirTerminalBoxType * > (obj);
}

IfcAirTerminalType *ShallowCopyOp::operator()(const IfcAirTerminalType *obj) const {
    return const_cast< IfcAirTerminalType * > (obj);
}

IfcAirToAirHeatRecoveryType *ShallowCopyOp::operator()(const IfcAirToAirHeatRecoveryType *obj) const {
    return const_cast< IfcAirToAirHeatRecoveryType * > (obj);
}

IfcAlarmType *ShallowCopyOp::operator()(const IfcAlarmType *obj) const {
    return const_cast< IfcAlarmType * > (obj);
}

IfcAngularDimension *ShallowCopyOp::operator()(const IfcAngularDimension *obj) const {
    return const_cast< IfcAngularDimension * > (obj);
}

IfcAnnotation *ShallowCopyOp::operator()(const IfcAnnotation *obj) const {
    return const_cast< IfcAnnotation * > (obj);
}

IfcAnnotationCurveOccurrence *ShallowCopyOp::operator()(const IfcAnnotationCurveOccurrence *obj) const {
    return const_cast< IfcAnnotationCurveOccurrence * > (obj);
}

IfcAnnotationFillArea *ShallowCopyOp::operator()(const IfcAnnotationFillArea *obj) const {
    return const_cast< IfcAnnotationFillArea * > (obj);
}

IfcAnnotationFillAreaOccurrence *ShallowCopyOp::operator()(const IfcAnnotationFillAreaOccurrence *obj) const {
    return const_cast< IfcAnnotationFillAreaOccurrence * > (obj);
}

IfcAnnotationOccurrence *ShallowCopyOp::operator()(const IfcAnnotationOccurrence *obj) const {
    return const_cast< IfcAnnotationOccurrence * > (obj);
}

IfcAnnotationSurface *ShallowCopyOp::operator()(const IfcAnnotationSurface *obj) const {
    return const_cast< IfcAnnotationSurface * > (obj);
}

IfcAnnotationSurfaceOccurrence *ShallowCopyOp::operator()(const IfcAnnotationSurfaceOccurrence *obj) const {
    return const_cast< IfcAnnotationSurfaceOccurrence * > (obj);
}

IfcAnnotationSymbolOccurrence *ShallowCopyOp::operator()(const IfcAnnotationSymbolOccurrence *obj) const {
    return const_cast< IfcAnnotationSymbolOccurrence * > (obj);
}

IfcAnnotationTextOccurrence *ShallowCopyOp::operator()(const IfcAnnotationTextOccurrence *obj) const {
    return const_cast< IfcAnnotationTextOccurrence * > (obj);
}

IfcApplication *ShallowCopyOp::operator()(const IfcApplication *obj) const {
    return const_cast< IfcApplication * > (obj);
}

IfcAppliedValue *ShallowCopyOp::operator()(const IfcAppliedValue *obj) const {
    return const_cast< IfcAppliedValue * > (obj);
}

IfcAppliedValueRelationship *ShallowCopyOp::operator()(const IfcAppliedValueRelationship *obj) const {
    return const_cast< IfcAppliedValueRelationship * > (obj);
}

IfcApproval *ShallowCopyOp::operator()(const IfcApproval *obj) const {
    return const_cast< IfcApproval * > (obj);
}

IfcApprovalActorRelationship *ShallowCopyOp::operator()(const IfcApprovalActorRelationship *obj) const {
    return const_cast< IfcApprovalActorRelationship * > (obj);
}

IfcApprovalPropertyRelationship *ShallowCopyOp::operator()(const IfcApprovalPropertyRelationship *obj) const {
    return const_cast< IfcApprovalPropertyRelationship * > (obj);
}

IfcApprovalRelationship *ShallowCopyOp::operator()(const IfcApprovalRelationship *obj) const {
    return const_cast< IfcApprovalRelationship * > (obj);
}

IfcArbitraryClosedProfileDef *ShallowCopyOp::operator()(const IfcArbitraryClosedProfileDef *obj) const {
    return const_cast< IfcArbitraryClosedProfileDef * > (obj);
}

IfcArbitraryOpenProfileDef *ShallowCopyOp::operator()(const IfcArbitraryOpenProfileDef *obj) const {
    return const_cast< IfcArbitraryOpenProfileDef * > (obj);
}

IfcArbitraryProfileDefWithVoids *ShallowCopyOp::operator()(const IfcArbitraryProfileDefWithVoids *obj) const {
    return const_cast< IfcArbitraryProfileDefWithVoids * > (obj);
}

IfcAsset *ShallowCopyOp::operator()(const IfcAsset *obj) const {
    return const_cast< IfcAsset * > (obj);
}

IfcAsymmetricIShapeProfileDef *ShallowCopyOp::operator()(const IfcAsymmetricIShapeProfileDef *obj) const {
    return const_cast< IfcAsymmetricIShapeProfileDef * > (obj);
}

IfcAxis1Placement *ShallowCopyOp::operator()(const IfcAxis1Placement *obj) const {
    return const_cast< IfcAxis1Placement * > (obj);
}

IfcAxis2Placement2D *ShallowCopyOp::operator()(const IfcAxis2Placement2D *obj) const {
    return const_cast< IfcAxis2Placement2D * > (obj);
}

IfcAxis2Placement3D *ShallowCopyOp::operator()(const IfcAxis2Placement3D *obj) const {
    return const_cast< IfcAxis2Placement3D * > (obj);
}

IfcBSplineCurve *ShallowCopyOp::operator()(const IfcBSplineCurve *obj) const {
    return const_cast< IfcBSplineCurve * > (obj);
}

IfcBeam *ShallowCopyOp::operator()(const IfcBeam *obj) const {
    return const_cast< IfcBeam * > (obj);
}

IfcBeamType *ShallowCopyOp::operator()(const IfcBeamType *obj) const {
    return const_cast< IfcBeamType * > (obj);
}

IfcBezierCurve *ShallowCopyOp::operator()(const IfcBezierCurve *obj) const {
    return const_cast< IfcBezierCurve * > (obj);
}

IfcBlobTexture *ShallowCopyOp::operator()(const IfcBlobTexture *obj) const {
    return const_cast< IfcBlobTexture * > (obj);
}

IfcBlock *ShallowCopyOp::operator()(const IfcBlock *obj) const {
    return const_cast< IfcBlock * > (obj);
}

IfcBoilerType *ShallowCopyOp::operator()(const IfcBoilerType *obj) const {
    return const_cast< IfcBoilerType * > (obj);
}

IfcBooleanClippingResult *ShallowCopyOp::operator()(const IfcBooleanClippingResult *obj) const {
    return const_cast< IfcBooleanClippingResult * > (obj);
}

IfcBooleanResult *ShallowCopyOp::operator()(const IfcBooleanResult *obj) const {
    return const_cast< IfcBooleanResult * > (obj);
}

IfcBoundaryCondition *ShallowCopyOp::operator()(const IfcBoundaryCondition *obj) const {
    return const_cast< IfcBoundaryCondition * > (obj);
}

IfcBoundaryEdgeCondition *ShallowCopyOp::operator()(const IfcBoundaryEdgeCondition *obj) const {
    return const_cast< IfcBoundaryEdgeCondition * > (obj);
}

IfcBoundaryFaceCondition *ShallowCopyOp::operator()(const IfcBoundaryFaceCondition *obj) const {
    return const_cast< IfcBoundaryFaceCondition * > (obj);
}

IfcBoundaryNodeCondition *ShallowCopyOp::operator()(const IfcBoundaryNodeCondition *obj) const {
    return const_cast< IfcBoundaryNodeCondition * > (obj);
}

IfcBoundaryNodeConditionWarping *ShallowCopyOp::operator()(const IfcBoundaryNodeConditionWarping *obj) const {
    return const_cast< IfcBoundaryNodeConditionWarping * > (obj);
}

IfcBoundedCurve *ShallowCopyOp::operator()(const IfcBoundedCurve *obj) const {
    return const_cast< IfcBoundedCurve * > (obj);
}

IfcBoundedSurface *ShallowCopyOp::operator()(const IfcBoundedSurface *obj) const {
    return const_cast< IfcBoundedSurface * > (obj);
}

IfcBoundingBox *ShallowCopyOp::operator()(const IfcBoundingBox *obj) const {
    return const_cast< IfcBoundingBox * > (obj);
}

IfcBoxedHalfSpace *ShallowCopyOp::operator()(const IfcBoxedHalfSpace *obj) const {
    return const_cast< IfcBoxedHalfSpace * > (obj);
}

IfcBuilding *ShallowCopyOp::operator()(const IfcBuilding *obj) const {
    return const_cast< IfcBuilding * > (obj);
}

IfcBuildingElement *ShallowCopyOp::operator()(const IfcBuildingElement *obj) const {
    return const_cast< IfcBuildingElement * > (obj);
}

IfcBuildingElementPart *ShallowCopyOp::operator()(const IfcBuildingElementPart *obj) const {
    return const_cast< IfcBuildingElementPart * > (obj);
}

IfcBuildingElementProxy *ShallowCopyOp::operator()(const IfcBuildingElementProxy *obj) const {
    return const_cast< IfcBuildingElementProxy * > (obj);
}

IfcBuildingElementProxyType *ShallowCopyOp::operator()(const IfcBuildingElementProxyType *obj) const {
    return const_cast< IfcBuildingElementProxyType * > (obj);
}

IfcBuildingElementType *ShallowCopyOp::operator()(const IfcBuildingElementType *obj) const {
    return const_cast< IfcBuildingElementType * > (obj);
}

IfcBuildingStorey *ShallowCopyOp::operator()(const IfcBuildingStorey *obj) const {
    return const_cast< IfcBuildingStorey * > (obj);
}

IfcCShapeProfileDef *ShallowCopyOp::operator()(const IfcCShapeProfileDef *obj) const {
    return const_cast< IfcCShapeProfileDef * > (obj);
}

IfcCableCarrierFittingType *ShallowCopyOp::operator()(const IfcCableCarrierFittingType *obj) const {
    return const_cast< IfcCableCarrierFittingType * > (obj);
}

IfcCableCarrierSegmentType *ShallowCopyOp::operator()(const IfcCableCarrierSegmentType *obj) const {
    return const_cast< IfcCableCarrierSegmentType * > (obj);
}

IfcCableSegmentType *ShallowCopyOp::operator()(const IfcCableSegmentType *obj) const {
    return const_cast< IfcCableSegmentType * > (obj);
}

IfcCalendarDate *ShallowCopyOp::operator()(const IfcCalendarDate *obj) const {
    return const_cast< IfcCalendarDate * > (obj);
}

IfcCartesianPoint *ShallowCopyOp::operator()(const IfcCartesianPoint *obj) const {
    return const_cast< IfcCartesianPoint * > (obj);
}

IfcCartesianTransformationOperator *ShallowCopyOp::operator()(const IfcCartesianTransformationOperator *obj) const {
    return const_cast< IfcCartesianTransformationOperator * > (obj);
}

IfcCartesianTransformationOperator2D *ShallowCopyOp::operator()(const IfcCartesianTransformationOperator2D *obj) const {
    return const_cast< IfcCartesianTransformationOperator2D * > (obj);
}

IfcCartesianTransformationOperator2DnonUniform *ShallowCopyOp::operator()(const IfcCartesianTransformationOperator2DnonUniform *obj) const {
    return const_cast< IfcCartesianTransformationOperator2DnonUniform * > (obj);
}

IfcCartesianTransformationOperator3D *ShallowCopyOp::operator()(const IfcCartesianTransformationOperator3D *obj) const {
    return const_cast< IfcCartesianTransformationOperator3D * > (obj);
}

IfcCartesianTransformationOperator3DnonUniform *ShallowCopyOp::operator()(const IfcCartesianTransformationOperator3DnonUniform *obj) const {
    return const_cast< IfcCartesianTransformationOperator3DnonUniform * > (obj);
}

IfcCenterLineProfileDef *ShallowCopyOp::operator()(const IfcCenterLineProfileDef *obj) const {
    return const_cast< IfcCenterLineProfileDef * > (obj);
}

IfcChamferEdgeFeature *ShallowCopyOp::operator()(const IfcChamferEdgeFeature *obj) const {
    return const_cast< IfcChamferEdgeFeature * > (obj);
}

IfcChillerType *ShallowCopyOp::operator()(const IfcChillerType *obj) const {
    return const_cast< IfcChillerType * > (obj);
}

IfcCircle *ShallowCopyOp::operator()(const IfcCircle *obj) const {
    return const_cast< IfcCircle * > (obj);
}

IfcCircleHollowProfileDef *ShallowCopyOp::operator()(const IfcCircleHollowProfileDef *obj) const {
    return const_cast< IfcCircleHollowProfileDef * > (obj);
}

IfcCircleProfileDef *ShallowCopyOp::operator()(const IfcCircleProfileDef *obj) const {
    return const_cast< IfcCircleProfileDef * > (obj);
}

IfcClassification *ShallowCopyOp::operator()(const IfcClassification *obj) const {
    return const_cast< IfcClassification * > (obj);
}

IfcClassificationItem *ShallowCopyOp::operator()(const IfcClassificationItem *obj) const {
    return const_cast< IfcClassificationItem * > (obj);
}

IfcClassificationItemRelationship *ShallowCopyOp::operator()(const IfcClassificationItemRelationship *obj) const {
    return const_cast< IfcClassificationItemRelationship * > (obj);
}

IfcClassificationNotation *ShallowCopyOp::operator()(const IfcClassificationNotation *obj) const {
    return const_cast< IfcClassificationNotation * > (obj);
}

IfcClassificationNotationFacet *ShallowCopyOp::operator()(const IfcClassificationNotationFacet *obj) const {
    return const_cast< IfcClassificationNotationFacet * > (obj);
}

IfcClassificationReference *ShallowCopyOp::operator()(const IfcClassificationReference *obj) const {
    return const_cast< IfcClassificationReference * > (obj);
}

IfcClosedShell *ShallowCopyOp::operator()(const IfcClosedShell *obj) const {
    return const_cast< IfcClosedShell * > (obj);
}

IfcCoilType *ShallowCopyOp::operator()(const IfcCoilType *obj) const {
    return const_cast< IfcCoilType * > (obj);
}

IfcColourRgb *ShallowCopyOp::operator()(const IfcColourRgb *obj) const {
    return const_cast< IfcColourRgb * > (obj);
}

IfcColourSpecification *ShallowCopyOp::operator()(const IfcColourSpecification *obj) const {
    return const_cast< IfcColourSpecification * > (obj);
}

IfcColumn *ShallowCopyOp::operator()(const IfcColumn *obj) const {
    return const_cast< IfcColumn * > (obj);
}

IfcColumnType *ShallowCopyOp::operator()(const IfcColumnType *obj) const {
    return const_cast< IfcColumnType * > (obj);
}

IfcComplexProperty *ShallowCopyOp::operator()(const IfcComplexProperty *obj) const {
    return const_cast< IfcComplexProperty * > (obj);
}

IfcCompositeCurve *ShallowCopyOp::operator()(const IfcCompositeCurve *obj) const {
    return const_cast< IfcCompositeCurve * > (obj);
}

IfcCompositeCurveSegment *ShallowCopyOp::operator()(const IfcCompositeCurveSegment *obj) const {
    return const_cast< IfcCompositeCurveSegment * > (obj);
}

IfcCompositeProfileDef *ShallowCopyOp::operator()(const IfcCompositeProfileDef *obj) const {
    return const_cast< IfcCompositeProfileDef * > (obj);
}

IfcCompressorType *ShallowCopyOp::operator()(const IfcCompressorType *obj) const {
    return const_cast< IfcCompressorType * > (obj);
}

IfcCondenserType *ShallowCopyOp::operator()(const IfcCondenserType *obj) const {
    return const_cast< IfcCondenserType * > (obj);
}

IfcCondition *ShallowCopyOp::operator()(const IfcCondition *obj) const {
    return const_cast< IfcCondition * > (obj);
}

IfcConditionCriterion *ShallowCopyOp::operator()(const IfcConditionCriterion *obj) const {
    return const_cast< IfcConditionCriterion * > (obj);
}

IfcConic *ShallowCopyOp::operator()(const IfcConic *obj) const {
    return const_cast< IfcConic * > (obj);
}

IfcConnectedFaceSet *ShallowCopyOp::operator()(const IfcConnectedFaceSet *obj) const {
    return const_cast< IfcConnectedFaceSet * > (obj);
}

IfcConnectionCurveGeometry *ShallowCopyOp::operator()(const IfcConnectionCurveGeometry *obj) const {
    return const_cast< IfcConnectionCurveGeometry * > (obj);
}

IfcConnectionGeometry *ShallowCopyOp::operator()(const IfcConnectionGeometry *obj) const {
    return const_cast< IfcConnectionGeometry * > (obj);
}

IfcConnectionPointEccentricity *ShallowCopyOp::operator()(const IfcConnectionPointEccentricity *obj) const {
    return const_cast< IfcConnectionPointEccentricity * > (obj);
}

IfcConnectionPointGeometry *ShallowCopyOp::operator()(const IfcConnectionPointGeometry *obj) const {
    return const_cast< IfcConnectionPointGeometry * > (obj);
}

IfcConnectionPortGeometry *ShallowCopyOp::operator()(const IfcConnectionPortGeometry *obj) const {
    return const_cast< IfcConnectionPortGeometry * > (obj);
}

IfcConnectionSurfaceGeometry *ShallowCopyOp::operator()(const IfcConnectionSurfaceGeometry *obj) const {
    return const_cast< IfcConnectionSurfaceGeometry * > (obj);
}

IfcConstraint *ShallowCopyOp::operator()(const IfcConstraint *obj) const {
    return const_cast< IfcConstraint * > (obj);
}

IfcConstraintAggregationRelationship *ShallowCopyOp::operator()(const IfcConstraintAggregationRelationship *obj) const {
    return const_cast< IfcConstraintAggregationRelationship * > (obj);
}

IfcConstraintClassificationRelationship *ShallowCopyOp::operator()(const IfcConstraintClassificationRelationship *obj) const {
    return const_cast< IfcConstraintClassificationRelationship * > (obj);
}

IfcConstraintRelationship *ShallowCopyOp::operator()(const IfcConstraintRelationship *obj) const {
    return const_cast< IfcConstraintRelationship * > (obj);
}

IfcConstructionEquipmentResource *ShallowCopyOp::operator()(const IfcConstructionEquipmentResource *obj) const {
    return const_cast< IfcConstructionEquipmentResource * > (obj);
}

IfcConstructionMaterialResource *ShallowCopyOp::operator()(const IfcConstructionMaterialResource *obj) const {
    return const_cast< IfcConstructionMaterialResource * > (obj);
}

IfcConstructionProductResource *ShallowCopyOp::operator()(const IfcConstructionProductResource *obj) const {
    return const_cast< IfcConstructionProductResource * > (obj);
}

IfcConstructionResource *ShallowCopyOp::operator()(const IfcConstructionResource *obj) const {
    return const_cast< IfcConstructionResource * > (obj);
}

IfcContextDependentUnit *ShallowCopyOp::operator()(const IfcContextDependentUnit *obj) const {
    return const_cast< IfcContextDependentUnit * > (obj);
}

IfcControl *ShallowCopyOp::operator()(const IfcControl *obj) const {
    return const_cast< IfcControl * > (obj);
}

IfcControllerType *ShallowCopyOp::operator()(const IfcControllerType *obj) const {
    return const_cast< IfcControllerType * > (obj);
}

IfcConversionBasedUnit *ShallowCopyOp::operator()(const IfcConversionBasedUnit *obj) const {
    return const_cast< IfcConversionBasedUnit * > (obj);
}

IfcCooledBeamType *ShallowCopyOp::operator()(const IfcCooledBeamType *obj) const {
    return const_cast< IfcCooledBeamType * > (obj);
}

IfcCoolingTowerType *ShallowCopyOp::operator()(const IfcCoolingTowerType *obj) const {
    return const_cast< IfcCoolingTowerType * > (obj);
}

IfcCoordinatedUniversalTimeOffset *ShallowCopyOp::operator()(const IfcCoordinatedUniversalTimeOffset *obj) const {
    return const_cast< IfcCoordinatedUniversalTimeOffset * > (obj);
}

IfcCostItem *ShallowCopyOp::operator()(const IfcCostItem *obj) const {
    return const_cast< IfcCostItem * > (obj);
}

IfcCostSchedule *ShallowCopyOp::operator()(const IfcCostSchedule *obj) const {
    return const_cast< IfcCostSchedule * > (obj);
}

IfcCostValue *ShallowCopyOp::operator()(const IfcCostValue *obj) const {
    return const_cast< IfcCostValue * > (obj);
}

IfcCovering *ShallowCopyOp::operator()(const IfcCovering *obj) const {
    return const_cast< IfcCovering * > (obj);
}

IfcCoveringType *ShallowCopyOp::operator()(const IfcCoveringType *obj) const {
    return const_cast< IfcCoveringType * > (obj);
}

IfcCraneRailAShapeProfileDef *ShallowCopyOp::operator()(const IfcCraneRailAShapeProfileDef *obj) const {
    return const_cast< IfcCraneRailAShapeProfileDef * > (obj);
}

IfcCraneRailFShapeProfileDef *ShallowCopyOp::operator()(const IfcCraneRailFShapeProfileDef *obj) const {
    return const_cast< IfcCraneRailFShapeProfileDef * > (obj);
}

IfcCrewResource *ShallowCopyOp::operator()(const IfcCrewResource *obj) const {
    return const_cast< IfcCrewResource * > (obj);
}

IfcCsgPrimitive3D *ShallowCopyOp::operator()(const IfcCsgPrimitive3D *obj) const {
    return const_cast< IfcCsgPrimitive3D * > (obj);
}

IfcCsgSolid *ShallowCopyOp::operator()(const IfcCsgSolid *obj) const {
    return const_cast< IfcCsgSolid * > (obj);
}

IfcCurrencyRelationship *ShallowCopyOp::operator()(const IfcCurrencyRelationship *obj) const {
    return const_cast< IfcCurrencyRelationship * > (obj);
}

IfcCurtainWall *ShallowCopyOp::operator()(const IfcCurtainWall *obj) const {
    return const_cast< IfcCurtainWall * > (obj);
}

IfcCurtainWallType *ShallowCopyOp::operator()(const IfcCurtainWallType *obj) const {
    return const_cast< IfcCurtainWallType * > (obj);
}

IfcCurve *ShallowCopyOp::operator()(const IfcCurve *obj) const {
    return const_cast< IfcCurve * > (obj);
}

IfcCurveBoundedPlane *ShallowCopyOp::operator()(const IfcCurveBoundedPlane *obj) const {
    return const_cast< IfcCurveBoundedPlane * > (obj);
}

IfcCurveStyle *ShallowCopyOp::operator()(const IfcCurveStyle *obj) const {
    return const_cast< IfcCurveStyle * > (obj);
}

IfcCurveStyleFont *ShallowCopyOp::operator()(const IfcCurveStyleFont *obj) const {
    return const_cast< IfcCurveStyleFont * > (obj);
}

IfcCurveStyleFontAndScaling *ShallowCopyOp::operator()(const IfcCurveStyleFontAndScaling *obj) const {
    return const_cast< IfcCurveStyleFontAndScaling * > (obj);
}

IfcCurveStyleFontPattern *ShallowCopyOp::operator()(const IfcCurveStyleFontPattern *obj) const {
    return const_cast< IfcCurveStyleFontPattern * > (obj);
}

IfcDamperType *ShallowCopyOp::operator()(const IfcDamperType *obj) const {
    return const_cast< IfcDamperType * > (obj);
}

IfcDateAndTime *ShallowCopyOp::operator()(const IfcDateAndTime *obj) const {
    return const_cast< IfcDateAndTime * > (obj);
}

IfcDefinedSymbol *ShallowCopyOp::operator()(const IfcDefinedSymbol *obj) const {
    return const_cast< IfcDefinedSymbol * > (obj);
}

IfcDerivedProfileDef *ShallowCopyOp::operator()(const IfcDerivedProfileDef *obj) const {
    return const_cast< IfcDerivedProfileDef * > (obj);
}

IfcDerivedUnit *ShallowCopyOp::operator()(const IfcDerivedUnit *obj) const {
    return const_cast< IfcDerivedUnit * > (obj);
}

IfcDerivedUnitElement *ShallowCopyOp::operator()(const IfcDerivedUnitElement *obj) const {
    return const_cast< IfcDerivedUnitElement * > (obj);
}

IfcDiameterDimension *ShallowCopyOp::operator()(const IfcDiameterDimension *obj) const {
    return const_cast< IfcDiameterDimension * > (obj);
}

IfcDimensionCalloutRelationship *ShallowCopyOp::operator()(const IfcDimensionCalloutRelationship *obj) const {
    return const_cast< IfcDimensionCalloutRelationship * > (obj);
}

IfcDimensionCurve *ShallowCopyOp::operator()(const IfcDimensionCurve *obj) const {
    return const_cast< IfcDimensionCurve * > (obj);
}

IfcDimensionCurveDirectedCallout *ShallowCopyOp::operator()(const IfcDimensionCurveDirectedCallout *obj) const {
    return const_cast< IfcDimensionCurveDirectedCallout * > (obj);
}

IfcDimensionCurveTerminator *ShallowCopyOp::operator()(const IfcDimensionCurveTerminator *obj) const {
    return const_cast< IfcDimensionCurveTerminator * > (obj);
}

IfcDimensionPair *ShallowCopyOp::operator()(const IfcDimensionPair *obj) const {
    return const_cast< IfcDimensionPair * > (obj);
}

IfcDimensionalExponents *ShallowCopyOp::operator()(const IfcDimensionalExponents *obj) const {
    return const_cast< IfcDimensionalExponents * > (obj);
}

IfcDirection *ShallowCopyOp::operator()(const IfcDirection *obj) const {
    return const_cast< IfcDirection * > (obj);
}

IfcDiscreteAccessory *ShallowCopyOp::operator()(const IfcDiscreteAccessory *obj) const {
    return const_cast< IfcDiscreteAccessory * > (obj);
}

IfcDiscreteAccessoryType *ShallowCopyOp::operator()(const IfcDiscreteAccessoryType *obj) const {
    return const_cast< IfcDiscreteAccessoryType * > (obj);
}

IfcDistributionChamberElement *ShallowCopyOp::operator()(const IfcDistributionChamberElement *obj) const {
    return const_cast< IfcDistributionChamberElement * > (obj);
}

IfcDistributionChamberElementType *ShallowCopyOp::operator()(const IfcDistributionChamberElementType *obj) const {
    return const_cast< IfcDistributionChamberElementType * > (obj);
}

IfcDistributionControlElement *ShallowCopyOp::operator()(const IfcDistributionControlElement *obj) const {
    return const_cast< IfcDistributionControlElement * > (obj);
}

IfcDistributionControlElementType *ShallowCopyOp::operator()(const IfcDistributionControlElementType *obj) const {
    return const_cast< IfcDistributionControlElementType * > (obj);
}

IfcDistributionElement *ShallowCopyOp::operator()(const IfcDistributionElement *obj) const {
    return const_cast< IfcDistributionElement * > (obj);
}

IfcDistributionElementType *ShallowCopyOp::operator()(const IfcDistributionElementType *obj) const {
    return const_cast< IfcDistributionElementType * > (obj);
}

IfcDistributionFlowElement *ShallowCopyOp::operator()(const IfcDistributionFlowElement *obj) const {
    return const_cast< IfcDistributionFlowElement * > (obj);
}

IfcDistributionFlowElementType *ShallowCopyOp::operator()(const IfcDistributionFlowElementType *obj) const {
    return const_cast< IfcDistributionFlowElementType * > (obj);
}

IfcDistributionPort *ShallowCopyOp::operator()(const IfcDistributionPort *obj) const {
    return const_cast< IfcDistributionPort * > (obj);
}

IfcDocumentElectronicFormat *ShallowCopyOp::operator()(const IfcDocumentElectronicFormat *obj) const {
    return const_cast< IfcDocumentElectronicFormat * > (obj);
}

IfcDocumentInformation *ShallowCopyOp::operator()(const IfcDocumentInformation *obj) const {
    return const_cast< IfcDocumentInformation * > (obj);
}

IfcDocumentInformationRelationship *ShallowCopyOp::operator()(const IfcDocumentInformationRelationship *obj) const {
    return const_cast< IfcDocumentInformationRelationship * > (obj);
}

IfcDocumentReference *ShallowCopyOp::operator()(const IfcDocumentReference *obj) const {
    return const_cast< IfcDocumentReference * > (obj);
}

IfcDoor *ShallowCopyOp::operator()(const IfcDoor *obj) const {
    return const_cast< IfcDoor * > (obj);
}

IfcDoorLiningProperties *ShallowCopyOp::operator()(const IfcDoorLiningProperties *obj) const {
    return const_cast< IfcDoorLiningProperties * > (obj);
}

IfcDoorPanelProperties *ShallowCopyOp::operator()(const IfcDoorPanelProperties *obj) const {
    return const_cast< IfcDoorPanelProperties * > (obj);
}

IfcDoorStyle *ShallowCopyOp::operator()(const IfcDoorStyle *obj) const {
    return const_cast< IfcDoorStyle * > (obj);
}

IfcDraughtingCallout *ShallowCopyOp::operator()(const IfcDraughtingCallout *obj) const {
    return const_cast< IfcDraughtingCallout * > (obj);
}

IfcDraughtingCalloutRelationship *ShallowCopyOp::operator()(const IfcDraughtingCalloutRelationship *obj) const {
    return const_cast< IfcDraughtingCalloutRelationship * > (obj);
}

IfcDraughtingPreDefinedColour *ShallowCopyOp::operator()(const IfcDraughtingPreDefinedColour *obj) const {
    return const_cast< IfcDraughtingPreDefinedColour * > (obj);
}

IfcDraughtingPreDefinedCurveFont *ShallowCopyOp::operator()(const IfcDraughtingPreDefinedCurveFont *obj) const {
    return const_cast< IfcDraughtingPreDefinedCurveFont * > (obj);
}

IfcDraughtingPreDefinedTextFont *ShallowCopyOp::operator()(const IfcDraughtingPreDefinedTextFont *obj) const {
    return const_cast< IfcDraughtingPreDefinedTextFont * > (obj);
}

IfcDuctFittingType *ShallowCopyOp::operator()(const IfcDuctFittingType *obj) const {
    return const_cast< IfcDuctFittingType * > (obj);
}

IfcDuctSegmentType *ShallowCopyOp::operator()(const IfcDuctSegmentType *obj) const {
    return const_cast< IfcDuctSegmentType * > (obj);
}

IfcDuctSilencerType *ShallowCopyOp::operator()(const IfcDuctSilencerType *obj) const {
    return const_cast< IfcDuctSilencerType * > (obj);
}

IfcEdge *ShallowCopyOp::operator()(const IfcEdge *obj) const {
    return const_cast< IfcEdge * > (obj);
}

IfcEdgeCurve *ShallowCopyOp::operator()(const IfcEdgeCurve *obj) const {
    return const_cast< IfcEdgeCurve * > (obj);
}

IfcEdgeFeature *ShallowCopyOp::operator()(const IfcEdgeFeature *obj) const {
    return const_cast< IfcEdgeFeature * > (obj);
}

IfcEdgeLoop *ShallowCopyOp::operator()(const IfcEdgeLoop *obj) const {
    return const_cast< IfcEdgeLoop * > (obj);
}

IfcElectricApplianceType *ShallowCopyOp::operator()(const IfcElectricApplianceType *obj) const {
    return const_cast< IfcElectricApplianceType * > (obj);
}

IfcElectricDistributionPoint *ShallowCopyOp::operator()(const IfcElectricDistributionPoint *obj) const {
    return const_cast< IfcElectricDistributionPoint * > (obj);
}

IfcElectricFlowStorageDeviceType *ShallowCopyOp::operator()(const IfcElectricFlowStorageDeviceType *obj) const {
    return const_cast< IfcElectricFlowStorageDeviceType * > (obj);
}

IfcElectricGeneratorType *ShallowCopyOp::operator()(const IfcElectricGeneratorType *obj) const {
    return const_cast< IfcElectricGeneratorType * > (obj);
}

IfcElectricHeaterType *ShallowCopyOp::operator()(const IfcElectricHeaterType *obj) const {
    return const_cast< IfcElectricHeaterType * > (obj);
}

IfcElectricMotorType *ShallowCopyOp::operator()(const IfcElectricMotorType *obj) const {
    return const_cast< IfcElectricMotorType * > (obj);
}

IfcElectricTimeControlType *ShallowCopyOp::operator()(const IfcElectricTimeControlType *obj) const {
    return const_cast< IfcElectricTimeControlType * > (obj);
}

IfcElectricalBaseProperties *ShallowCopyOp::operator()(const IfcElectricalBaseProperties *obj) const {
    return const_cast< IfcElectricalBaseProperties * > (obj);
}

IfcElectricalCircuit *ShallowCopyOp::operator()(const IfcElectricalCircuit *obj) const {
    return const_cast< IfcElectricalCircuit * > (obj);
}

IfcElectricalElement *ShallowCopyOp::operator()(const IfcElectricalElement *obj) const {
    return const_cast< IfcElectricalElement * > (obj);
}

IfcElement *ShallowCopyOp::operator()(const IfcElement *obj) const {
    return const_cast< IfcElement * > (obj);
}

IfcElementAssembly *ShallowCopyOp::operator()(const IfcElementAssembly *obj) const {
    return const_cast< IfcElementAssembly * > (obj);
}

IfcElementComponent *ShallowCopyOp::operator()(const IfcElementComponent *obj) const {
    return const_cast< IfcElementComponent * > (obj);
}

IfcElementComponentType *ShallowCopyOp::operator()(const IfcElementComponentType *obj) const {
    return const_cast< IfcElementComponentType * > (obj);
}

IfcElementQuantity *ShallowCopyOp::operator()(const IfcElementQuantity *obj) const {
    return const_cast< IfcElementQuantity * > (obj);
}

IfcElementType *ShallowCopyOp::operator()(const IfcElementType *obj) const {
    return const_cast< IfcElementType * > (obj);
}

IfcElementarySurface *ShallowCopyOp::operator()(const IfcElementarySurface *obj) const {
    return const_cast< IfcElementarySurface * > (obj);
}

IfcEllipse *ShallowCopyOp::operator()(const IfcEllipse *obj) const {
    return const_cast< IfcEllipse * > (obj);
}

IfcEllipseProfileDef *ShallowCopyOp::operator()(const IfcEllipseProfileDef *obj) const {
    return const_cast< IfcEllipseProfileDef * > (obj);
}

IfcEnergyConversionDevice *ShallowCopyOp::operator()(const IfcEnergyConversionDevice *obj) const {
    return const_cast< IfcEnergyConversionDevice * > (obj);
}

IfcEnergyConversionDeviceType *ShallowCopyOp::operator()(const IfcEnergyConversionDeviceType *obj) const {
    return const_cast< IfcEnergyConversionDeviceType * > (obj);
}

IfcEnergyProperties *ShallowCopyOp::operator()(const IfcEnergyProperties *obj) const {
    return const_cast< IfcEnergyProperties * > (obj);
}

IfcEnvironmentalImpactValue *ShallowCopyOp::operator()(const IfcEnvironmentalImpactValue *obj) const {
    return const_cast< IfcEnvironmentalImpactValue * > (obj);
}

IfcEquipmentElement *ShallowCopyOp::operator()(const IfcEquipmentElement *obj) const {
    return const_cast< IfcEquipmentElement * > (obj);
}

IfcEquipmentStandard *ShallowCopyOp::operator()(const IfcEquipmentStandard *obj) const {
    return const_cast< IfcEquipmentStandard * > (obj);
}

IfcEvaporativeCoolerType *ShallowCopyOp::operator()(const IfcEvaporativeCoolerType *obj) const {
    return const_cast< IfcEvaporativeCoolerType * > (obj);
}

IfcEvaporatorType *ShallowCopyOp::operator()(const IfcEvaporatorType *obj) const {
    return const_cast< IfcEvaporatorType * > (obj);
}

IfcExtendedMaterialProperties *ShallowCopyOp::operator()(const IfcExtendedMaterialProperties *obj) const {
    return const_cast< IfcExtendedMaterialProperties * > (obj);
}

IfcExternalReference *ShallowCopyOp::operator()(const IfcExternalReference *obj) const {
    return const_cast< IfcExternalReference * > (obj);
}

IfcExternallyDefinedHatchStyle *ShallowCopyOp::operator()(const IfcExternallyDefinedHatchStyle *obj) const {
    return const_cast< IfcExternallyDefinedHatchStyle * > (obj);
}

IfcExternallyDefinedSurfaceStyle *ShallowCopyOp::operator()(const IfcExternallyDefinedSurfaceStyle *obj) const {
    return const_cast< IfcExternallyDefinedSurfaceStyle * > (obj);
}

IfcExternallyDefinedSymbol *ShallowCopyOp::operator()(const IfcExternallyDefinedSymbol *obj) const {
    return const_cast< IfcExternallyDefinedSymbol * > (obj);
}

IfcExternallyDefinedTextFont *ShallowCopyOp::operator()(const IfcExternallyDefinedTextFont *obj) const {
    return const_cast< IfcExternallyDefinedTextFont * > (obj);
}

IfcExtrudedAreaSolid *ShallowCopyOp::operator()(const IfcExtrudedAreaSolid *obj) const {
    return const_cast< IfcExtrudedAreaSolid * > (obj);
}

IfcFace *ShallowCopyOp::operator()(const IfcFace *obj) const {
    return const_cast< IfcFace * > (obj);
}

IfcFaceBasedSurfaceModel *ShallowCopyOp::operator()(const IfcFaceBasedSurfaceModel *obj) const {
    return const_cast< IfcFaceBasedSurfaceModel * > (obj);
}

IfcFaceBound *ShallowCopyOp::operator()(const IfcFaceBound *obj) const {
    return const_cast< IfcFaceBound * > (obj);
}

IfcFaceOuterBound *ShallowCopyOp::operator()(const IfcFaceOuterBound *obj) const {
    return const_cast< IfcFaceOuterBound * > (obj);
}

IfcFaceSurface *ShallowCopyOp::operator()(const IfcFaceSurface *obj) const {
    return const_cast< IfcFaceSurface * > (obj);
}

IfcFacetedBrep *ShallowCopyOp::operator()(const IfcFacetedBrep *obj) const {
    return const_cast< IfcFacetedBrep * > (obj);
}

IfcFacetedBrepWithVoids *ShallowCopyOp::operator()(const IfcFacetedBrepWithVoids *obj) const {
    return const_cast< IfcFacetedBrepWithVoids * > (obj);
}

IfcFailureConnectionCondition *ShallowCopyOp::operator()(const IfcFailureConnectionCondition *obj) const {
    return const_cast< IfcFailureConnectionCondition * > (obj);
}

IfcFanType *ShallowCopyOp::operator()(const IfcFanType *obj) const {
    return const_cast< IfcFanType * > (obj);
}

IfcFastener *ShallowCopyOp::operator()(const IfcFastener *obj) const {
    return const_cast< IfcFastener * > (obj);
}

IfcFastenerType *ShallowCopyOp::operator()(const IfcFastenerType *obj) const {
    return const_cast< IfcFastenerType * > (obj);
}

IfcFeatureElement *ShallowCopyOp::operator()(const IfcFeatureElement *obj) const {
    return const_cast< IfcFeatureElement * > (obj);
}

IfcFeatureElementAddition *ShallowCopyOp::operator()(const IfcFeatureElementAddition *obj) const {
    return const_cast< IfcFeatureElementAddition * > (obj);
}

IfcFeatureElementSubtraction *ShallowCopyOp::operator()(const IfcFeatureElementSubtraction *obj) const {
    return const_cast< IfcFeatureElementSubtraction * > (obj);
}

IfcFillAreaStyle *ShallowCopyOp::operator()(const IfcFillAreaStyle *obj) const {
    return const_cast< IfcFillAreaStyle * > (obj);
}

IfcFillAreaStyleHatching *ShallowCopyOp::operator()(const IfcFillAreaStyleHatching *obj) const {
    return const_cast< IfcFillAreaStyleHatching * > (obj);
}

IfcFillAreaStyleTileSymbolWithStyle *ShallowCopyOp::operator()(const IfcFillAreaStyleTileSymbolWithStyle *obj) const {
    return const_cast< IfcFillAreaStyleTileSymbolWithStyle * > (obj);
}

IfcFillAreaStyleTiles *ShallowCopyOp::operator()(const IfcFillAreaStyleTiles *obj) const {
    return const_cast< IfcFillAreaStyleTiles * > (obj);
}

IfcFilterType *ShallowCopyOp::operator()(const IfcFilterType *obj) const {
    return const_cast< IfcFilterType * > (obj);
}

IfcFireSuppressionTerminalType *ShallowCopyOp::operator()(const IfcFireSuppressionTerminalType *obj) const {
    return const_cast< IfcFireSuppressionTerminalType * > (obj);
}

IfcFlowController *ShallowCopyOp::operator()(const IfcFlowController *obj) const {
    return const_cast< IfcFlowController * > (obj);
}

IfcFlowControllerType *ShallowCopyOp::operator()(const IfcFlowControllerType *obj) const {
    return const_cast< IfcFlowControllerType * > (obj);
}

IfcFlowFitting *ShallowCopyOp::operator()(const IfcFlowFitting *obj) const {
    return const_cast< IfcFlowFitting * > (obj);
}

IfcFlowFittingType *ShallowCopyOp::operator()(const IfcFlowFittingType *obj) const {
    return const_cast< IfcFlowFittingType * > (obj);
}

IfcFlowInstrumentType *ShallowCopyOp::operator()(const IfcFlowInstrumentType *obj) const {
    return const_cast< IfcFlowInstrumentType * > (obj);
}

IfcFlowMeterType *ShallowCopyOp::operator()(const IfcFlowMeterType *obj) const {
    return const_cast< IfcFlowMeterType * > (obj);
}

IfcFlowMovingDevice *ShallowCopyOp::operator()(const IfcFlowMovingDevice *obj) const {
    return const_cast< IfcFlowMovingDevice * > (obj);
}

IfcFlowMovingDeviceType *ShallowCopyOp::operator()(const IfcFlowMovingDeviceType *obj) const {
    return const_cast< IfcFlowMovingDeviceType * > (obj);
}

IfcFlowSegment *ShallowCopyOp::operator()(const IfcFlowSegment *obj) const {
    return const_cast< IfcFlowSegment * > (obj);
}

IfcFlowSegmentType *ShallowCopyOp::operator()(const IfcFlowSegmentType *obj) const {
    return const_cast< IfcFlowSegmentType * > (obj);
}

IfcFlowStorageDevice *ShallowCopyOp::operator()(const IfcFlowStorageDevice *obj) const {
    return const_cast< IfcFlowStorageDevice * > (obj);
}

IfcFlowStorageDeviceType *ShallowCopyOp::operator()(const IfcFlowStorageDeviceType *obj) const {
    return const_cast< IfcFlowStorageDeviceType * > (obj);
}

IfcFlowTerminal *ShallowCopyOp::operator()(const IfcFlowTerminal *obj) const {
    return const_cast< IfcFlowTerminal * > (obj);
}

IfcFlowTerminalType *ShallowCopyOp::operator()(const IfcFlowTerminalType *obj) const {
    return const_cast< IfcFlowTerminalType * > (obj);
}

IfcFlowTreatmentDevice *ShallowCopyOp::operator()(const IfcFlowTreatmentDevice *obj) const {
    return const_cast< IfcFlowTreatmentDevice * > (obj);
}

IfcFlowTreatmentDeviceType *ShallowCopyOp::operator()(const IfcFlowTreatmentDeviceType *obj) const {
    return const_cast< IfcFlowTreatmentDeviceType * > (obj);
}

IfcFluidFlowProperties *ShallowCopyOp::operator()(const IfcFluidFlowProperties *obj) const {
    return const_cast< IfcFluidFlowProperties * > (obj);
}

IfcFooting *ShallowCopyOp::operator()(const IfcFooting *obj) const {
    return const_cast< IfcFooting * > (obj);
}

IfcFuelProperties *ShallowCopyOp::operator()(const IfcFuelProperties *obj) const {
    return const_cast< IfcFuelProperties * > (obj);
}

IfcFurnishingElement *ShallowCopyOp::operator()(const IfcFurnishingElement *obj) const {
    return const_cast< IfcFurnishingElement * > (obj);
}

IfcFurnishingElementType *ShallowCopyOp::operator()(const IfcFurnishingElementType *obj) const {
    return const_cast< IfcFurnishingElementType * > (obj);
}

IfcFurnitureStandard *ShallowCopyOp::operator()(const IfcFurnitureStandard *obj) const {
    return const_cast< IfcFurnitureStandard * > (obj);
}

IfcFurnitureType *ShallowCopyOp::operator()(const IfcFurnitureType *obj) const {
    return const_cast< IfcFurnitureType * > (obj);
}

IfcGasTerminalType *ShallowCopyOp::operator()(const IfcGasTerminalType *obj) const {
    return const_cast< IfcGasTerminalType * > (obj);
}

IfcGeneralMaterialProperties *ShallowCopyOp::operator()(const IfcGeneralMaterialProperties *obj) const {
    return const_cast< IfcGeneralMaterialProperties * > (obj);
}

IfcGeneralProfileProperties *ShallowCopyOp::operator()(const IfcGeneralProfileProperties *obj) const {
    return const_cast< IfcGeneralProfileProperties * > (obj);
}

IfcGeometricCurveSet *ShallowCopyOp::operator()(const IfcGeometricCurveSet *obj) const {
    return const_cast< IfcGeometricCurveSet * > (obj);
}

IfcGeometricRepresentationContext *ShallowCopyOp::operator()(const IfcGeometricRepresentationContext *obj) const {
    return const_cast< IfcGeometricRepresentationContext * > (obj);
}

IfcGeometricRepresentationItem *ShallowCopyOp::operator()(const IfcGeometricRepresentationItem *obj) const {
    return const_cast< IfcGeometricRepresentationItem * > (obj);
}

IfcGeometricRepresentationSubContext *ShallowCopyOp::operator()(const IfcGeometricRepresentationSubContext *obj) const {
    return const_cast< IfcGeometricRepresentationSubContext * > (obj);
}

IfcGeometricSet *ShallowCopyOp::operator()(const IfcGeometricSet *obj) const {
    return const_cast< IfcGeometricSet * > (obj);
}

IfcGrid *ShallowCopyOp::operator()(const IfcGrid *obj) const {
    return const_cast< IfcGrid * > (obj);
}

IfcGridAxis *ShallowCopyOp::operator()(const IfcGridAxis *obj) const {
    return const_cast< IfcGridAxis * > (obj);
}

IfcGridPlacement *ShallowCopyOp::operator()(const IfcGridPlacement *obj) const {
    return const_cast< IfcGridPlacement * > (obj);
}

IfcGroup *ShallowCopyOp::operator()(const IfcGroup *obj) const {
    return const_cast< IfcGroup * > (obj);
}

IfcHalfSpaceSolid *ShallowCopyOp::operator()(const IfcHalfSpaceSolid *obj) const {
    return const_cast< IfcHalfSpaceSolid * > (obj);
}

IfcHeatExchangerType *ShallowCopyOp::operator()(const IfcHeatExchangerType *obj) const {
    return const_cast< IfcHeatExchangerType * > (obj);
}

IfcHumidifierType *ShallowCopyOp::operator()(const IfcHumidifierType *obj) const {
    return const_cast< IfcHumidifierType * > (obj);
}

IfcHygroscopicMaterialProperties *ShallowCopyOp::operator()(const IfcHygroscopicMaterialProperties *obj) const {
    return const_cast< IfcHygroscopicMaterialProperties * > (obj);
}

IfcIShapeProfileDef *ShallowCopyOp::operator()(const IfcIShapeProfileDef *obj) const {
    return const_cast< IfcIShapeProfileDef * > (obj);
}

IfcImageTexture *ShallowCopyOp::operator()(const IfcImageTexture *obj) const {
    return const_cast< IfcImageTexture * > (obj);
}

IfcInventory *ShallowCopyOp::operator()(const IfcInventory *obj) const {
    return const_cast< IfcInventory * > (obj);
}

IfcIrregularTimeSeries *ShallowCopyOp::operator()(const IfcIrregularTimeSeries *obj) const {
    return const_cast< IfcIrregularTimeSeries * > (obj);
}

IfcIrregularTimeSeriesValue *ShallowCopyOp::operator()(const IfcIrregularTimeSeriesValue *obj) const {
    return const_cast< IfcIrregularTimeSeriesValue * > (obj);
}

IfcJunctionBoxType *ShallowCopyOp::operator()(const IfcJunctionBoxType *obj) const {
    return const_cast< IfcJunctionBoxType * > (obj);
}

IfcLShapeProfileDef *ShallowCopyOp::operator()(const IfcLShapeProfileDef *obj) const {
    return const_cast< IfcLShapeProfileDef * > (obj);
}

IfcLaborResource *ShallowCopyOp::operator()(const IfcLaborResource *obj) const {
    return const_cast< IfcLaborResource * > (obj);
}

IfcLampType *ShallowCopyOp::operator()(const IfcLampType *obj) const {
    return const_cast< IfcLampType * > (obj);
}

IfcLibraryInformation *ShallowCopyOp::operator()(const IfcLibraryInformation *obj) const {
    return const_cast< IfcLibraryInformation * > (obj);
}

IfcLibraryReference *ShallowCopyOp::operator()(const IfcLibraryReference *obj) const {
    return const_cast< IfcLibraryReference * > (obj);
}

IfcLightDistributionData *ShallowCopyOp::operator()(const IfcLightDistributionData *obj) const {
    return const_cast< IfcLightDistributionData * > (obj);
}

IfcLightFixtureType *ShallowCopyOp::operator()(const IfcLightFixtureType *obj) const {
    return const_cast< IfcLightFixtureType * > (obj);
}

IfcLightIntensityDistribution *ShallowCopyOp::operator()(const IfcLightIntensityDistribution *obj) const {
    return const_cast< IfcLightIntensityDistribution * > (obj);
}

IfcLightSource *ShallowCopyOp::operator()(const IfcLightSource *obj) const {
    return const_cast< IfcLightSource * > (obj);
}

IfcLightSourceAmbient *ShallowCopyOp::operator()(const IfcLightSourceAmbient *obj) const {
    return const_cast< IfcLightSourceAmbient * > (obj);
}

IfcLightSourceDirectional *ShallowCopyOp::operator()(const IfcLightSourceDirectional *obj) const {
    return const_cast< IfcLightSourceDirectional * > (obj);
}

IfcLightSourceGoniometric *ShallowCopyOp::operator()(const IfcLightSourceGoniometric *obj) const {
    return const_cast< IfcLightSourceGoniometric * > (obj);
}

IfcLightSourcePositional *ShallowCopyOp::operator()(const IfcLightSourcePositional *obj) const {
    return const_cast< IfcLightSourcePositional * > (obj);
}

IfcLightSourceSpot *ShallowCopyOp::operator()(const IfcLightSourceSpot *obj) const {
    return const_cast< IfcLightSourceSpot * > (obj);
}

IfcLine *ShallowCopyOp::operator()(const IfcLine *obj) const {
    return const_cast< IfcLine * > (obj);
}

IfcLinearDimension *ShallowCopyOp::operator()(const IfcLinearDimension *obj) const {
    return const_cast< IfcLinearDimension * > (obj);
}

IfcLocalPlacement *ShallowCopyOp::operator()(const IfcLocalPlacement *obj) const {
    return const_cast< IfcLocalPlacement * > (obj);
}

IfcLocalTime *ShallowCopyOp::operator()(const IfcLocalTime *obj) const {
    return const_cast< IfcLocalTime * > (obj);
}

IfcLoop *ShallowCopyOp::operator()(const IfcLoop *obj) const {
    return const_cast< IfcLoop * > (obj);
}

IfcManifoldSolidBrep *ShallowCopyOp::operator()(const IfcManifoldSolidBrep *obj) const {
    return const_cast< IfcManifoldSolidBrep * > (obj);
}

IfcMappedItem *ShallowCopyOp::operator()(const IfcMappedItem *obj) const {
    return const_cast< IfcMappedItem * > (obj);
}

IfcMaterial *ShallowCopyOp::operator()(const IfcMaterial *obj) const {
    return const_cast< IfcMaterial * > (obj);
}

IfcMaterialClassificationRelationship *ShallowCopyOp::operator()(const IfcMaterialClassificationRelationship *obj) const {
    return const_cast< IfcMaterialClassificationRelationship * > (obj);
}

IfcMaterialDefinitionRepresentation *ShallowCopyOp::operator()(const IfcMaterialDefinitionRepresentation *obj) const {
    return const_cast< IfcMaterialDefinitionRepresentation * > (obj);
}

IfcMaterialLayer *ShallowCopyOp::operator()(const IfcMaterialLayer *obj) const {
    return const_cast< IfcMaterialLayer * > (obj);
}

IfcMaterialLayerSet *ShallowCopyOp::operator()(const IfcMaterialLayerSet *obj) const {
    return const_cast< IfcMaterialLayerSet * > (obj);
}

IfcMaterialLayerSetUsage *ShallowCopyOp::operator()(const IfcMaterialLayerSetUsage *obj) const {
    return const_cast< IfcMaterialLayerSetUsage * > (obj);
}

IfcMaterialList *ShallowCopyOp::operator()(const IfcMaterialList *obj) const {
    return const_cast< IfcMaterialList * > (obj);
}

IfcMaterialProperties *ShallowCopyOp::operator()(const IfcMaterialProperties *obj) const {
    return const_cast< IfcMaterialProperties * > (obj);
}

IfcMeasureWithUnit *ShallowCopyOp::operator()(const IfcMeasureWithUnit *obj) const {
    return const_cast< IfcMeasureWithUnit * > (obj);
}

IfcMechanicalConcreteMaterialProperties *ShallowCopyOp::operator()(const IfcMechanicalConcreteMaterialProperties *obj) const {
    return const_cast< IfcMechanicalConcreteMaterialProperties * > (obj);
}

IfcMechanicalFastener *ShallowCopyOp::operator()(const IfcMechanicalFastener *obj) const {
    return const_cast< IfcMechanicalFastener * > (obj);
}

IfcMechanicalFastenerType *ShallowCopyOp::operator()(const IfcMechanicalFastenerType *obj) const {
    return const_cast< IfcMechanicalFastenerType * > (obj);
}

IfcMechanicalMaterialProperties *ShallowCopyOp::operator()(const IfcMechanicalMaterialProperties *obj) const {
    return const_cast< IfcMechanicalMaterialProperties * > (obj);
}

IfcMechanicalSteelMaterialProperties *ShallowCopyOp::operator()(const IfcMechanicalSteelMaterialProperties *obj) const {
    return const_cast< IfcMechanicalSteelMaterialProperties * > (obj);
}

IfcMember *ShallowCopyOp::operator()(const IfcMember *obj) const {
    return const_cast< IfcMember * > (obj);
}

IfcMemberType *ShallowCopyOp::operator()(const IfcMemberType *obj) const {
    return const_cast< IfcMemberType * > (obj);
}

IfcMetric *ShallowCopyOp::operator()(const IfcMetric *obj) const {
    return const_cast< IfcMetric * > (obj);
}

IfcMonetaryUnit *ShallowCopyOp::operator()(const IfcMonetaryUnit *obj) const {
    return const_cast< IfcMonetaryUnit * > (obj);
}

IfcMotorConnectionType *ShallowCopyOp::operator()(const IfcMotorConnectionType *obj) const {
    return const_cast< IfcMotorConnectionType * > (obj);
}

IfcMove *ShallowCopyOp::operator()(const IfcMove *obj) const {
    return const_cast< IfcMove * > (obj);
}

IfcNamedUnit *ShallowCopyOp::operator()(const IfcNamedUnit *obj) const {
    return const_cast< IfcNamedUnit * > (obj);
}

IfcObject *ShallowCopyOp::operator()(const IfcObject *obj) const {
    return const_cast< IfcObject * > (obj);
}

IfcObjectDefinition *ShallowCopyOp::operator()(const IfcObjectDefinition *obj) const {
    return const_cast< IfcObjectDefinition * > (obj);
}

IfcObjectPlacement *ShallowCopyOp::operator()(const IfcObjectPlacement *obj) const {
    return const_cast< IfcObjectPlacement * > (obj);
}

IfcObjective *ShallowCopyOp::operator()(const IfcObjective *obj) const {
    return const_cast< IfcObjective * > (obj);
}

IfcOccupant *ShallowCopyOp::operator()(const IfcOccupant *obj) const {
    return const_cast< IfcOccupant * > (obj);
}

IfcOffsetCurve2D *ShallowCopyOp::operator()(const IfcOffsetCurve2D *obj) const {
    return const_cast< IfcOffsetCurve2D * > (obj);
}

IfcOffsetCurve3D *ShallowCopyOp::operator()(const IfcOffsetCurve3D *obj) const {
    return const_cast< IfcOffsetCurve3D * > (obj);
}

IfcOneDirectionRepeatFactor *ShallowCopyOp::operator()(const IfcOneDirectionRepeatFactor *obj) const {
    return const_cast< IfcOneDirectionRepeatFactor * > (obj);
}

IfcOpenShell *ShallowCopyOp::operator()(const IfcOpenShell *obj) const {
    return const_cast< IfcOpenShell * > (obj);
}

IfcOpeningElement *ShallowCopyOp::operator()(const IfcOpeningElement *obj) const {
    return const_cast< IfcOpeningElement * > (obj);
}

IfcOpticalMaterialProperties *ShallowCopyOp::operator()(const IfcOpticalMaterialProperties *obj) const {
    return const_cast< IfcOpticalMaterialProperties * > (obj);
}

IfcOrderAction *ShallowCopyOp::operator()(const IfcOrderAction *obj) const {
    return const_cast< IfcOrderAction * > (obj);
}

IfcOrganization *ShallowCopyOp::operator()(const IfcOrganization *obj) const {
    return const_cast< IfcOrganization * > (obj);
}

IfcOrganizationRelationship *ShallowCopyOp::operator()(const IfcOrganizationRelationship *obj) const {
    return const_cast< IfcOrganizationRelationship * > (obj);
}

IfcOrientedEdge *ShallowCopyOp::operator()(const IfcOrientedEdge *obj) const {
    return const_cast< IfcOrientedEdge * > (obj);
}

IfcOutletType *ShallowCopyOp::operator()(const IfcOutletType *obj) const {
    return const_cast< IfcOutletType * > (obj);
}

IfcOwnerHistory *ShallowCopyOp::operator()(const IfcOwnerHistory *obj) const {
    return const_cast< IfcOwnerHistory * > (obj);
}

IfcParameterizedProfileDef *ShallowCopyOp::operator()(const IfcParameterizedProfileDef *obj) const {
    return const_cast< IfcParameterizedProfileDef * > (obj);
}

IfcPath *ShallowCopyOp::operator()(const IfcPath *obj) const {
    return const_cast< IfcPath * > (obj);
}

IfcPerformanceHistory *ShallowCopyOp::operator()(const IfcPerformanceHistory *obj) const {
    return const_cast< IfcPerformanceHistory * > (obj);
}

IfcPermeableCoveringProperties *ShallowCopyOp::operator()(const IfcPermeableCoveringProperties *obj) const {
    return const_cast< IfcPermeableCoveringProperties * > (obj);
}

IfcPermit *ShallowCopyOp::operator()(const IfcPermit *obj) const {
    return const_cast< IfcPermit * > (obj);
}

IfcPerson *ShallowCopyOp::operator()(const IfcPerson *obj) const {
    return const_cast< IfcPerson * > (obj);
}

IfcPersonAndOrganization *ShallowCopyOp::operator()(const IfcPersonAndOrganization *obj) const {
    return const_cast< IfcPersonAndOrganization * > (obj);
}

IfcPhysicalComplexQuantity *ShallowCopyOp::operator()(const IfcPhysicalComplexQuantity *obj) const {
    return const_cast< IfcPhysicalComplexQuantity * > (obj);
}

IfcPhysicalQuantity *ShallowCopyOp::operator()(const IfcPhysicalQuantity *obj) const {
    return const_cast< IfcPhysicalQuantity * > (obj);
}

IfcPhysicalSimpleQuantity *ShallowCopyOp::operator()(const IfcPhysicalSimpleQuantity *obj) const {
    return const_cast< IfcPhysicalSimpleQuantity * > (obj);
}

IfcPile *ShallowCopyOp::operator()(const IfcPile *obj) const {
    return const_cast< IfcPile * > (obj);
}

IfcPipeFittingType *ShallowCopyOp::operator()(const IfcPipeFittingType *obj) const {
    return const_cast< IfcPipeFittingType * > (obj);
}

IfcPipeSegmentType *ShallowCopyOp::operator()(const IfcPipeSegmentType *obj) const {
    return const_cast< IfcPipeSegmentType * > (obj);
}

IfcPixelTexture *ShallowCopyOp::operator()(const IfcPixelTexture *obj) const {
    return const_cast< IfcPixelTexture * > (obj);
}

IfcPlacement *ShallowCopyOp::operator()(const IfcPlacement *obj) const {
    return const_cast< IfcPlacement * > (obj);
}

IfcPlanarBox *ShallowCopyOp::operator()(const IfcPlanarBox *obj) const {
    return const_cast< IfcPlanarBox * > (obj);
}

IfcPlanarExtent *ShallowCopyOp::operator()(const IfcPlanarExtent *obj) const {
    return const_cast< IfcPlanarExtent * > (obj);
}

IfcPlane *ShallowCopyOp::operator()(const IfcPlane *obj) const {
    return const_cast< IfcPlane * > (obj);
}

IfcPlate *ShallowCopyOp::operator()(const IfcPlate *obj) const {
    return const_cast< IfcPlate * > (obj);
}

IfcPlateType *ShallowCopyOp::operator()(const IfcPlateType *obj) const {
    return const_cast< IfcPlateType * > (obj);
}

IfcPoint *ShallowCopyOp::operator()(const IfcPoint *obj) const {
    return const_cast< IfcPoint * > (obj);
}

IfcPointOnCurve *ShallowCopyOp::operator()(const IfcPointOnCurve *obj) const {
    return const_cast< IfcPointOnCurve * > (obj);
}

IfcPointOnSurface *ShallowCopyOp::operator()(const IfcPointOnSurface *obj) const {
    return const_cast< IfcPointOnSurface * > (obj);
}

IfcPolyLoop *ShallowCopyOp::operator()(const IfcPolyLoop *obj) const {
    return const_cast< IfcPolyLoop * > (obj);
}

IfcPolygonalBoundedHalfSpace *ShallowCopyOp::operator()(const IfcPolygonalBoundedHalfSpace *obj) const {
    return const_cast< IfcPolygonalBoundedHalfSpace * > (obj);
}

IfcPolyline *ShallowCopyOp::operator()(const IfcPolyline *obj) const {
    return const_cast< IfcPolyline * > (obj);
}

IfcPort *ShallowCopyOp::operator()(const IfcPort *obj) const {
    return const_cast< IfcPort * > (obj);
}

IfcPostalAddress *ShallowCopyOp::operator()(const IfcPostalAddress *obj) const {
    return const_cast< IfcPostalAddress * > (obj);
}

IfcPreDefinedColour *ShallowCopyOp::operator()(const IfcPreDefinedColour *obj) const {
    return const_cast< IfcPreDefinedColour * > (obj);
}

IfcPreDefinedCurveFont *ShallowCopyOp::operator()(const IfcPreDefinedCurveFont *obj) const {
    return const_cast< IfcPreDefinedCurveFont * > (obj);
}

IfcPreDefinedDimensionSymbol *ShallowCopyOp::operator()(const IfcPreDefinedDimensionSymbol *obj) const {
    return const_cast< IfcPreDefinedDimensionSymbol * > (obj);
}

IfcPreDefinedItem *ShallowCopyOp::operator()(const IfcPreDefinedItem *obj) const {
    return const_cast< IfcPreDefinedItem * > (obj);
}

IfcPreDefinedPointMarkerSymbol *ShallowCopyOp::operator()(const IfcPreDefinedPointMarkerSymbol *obj) const {
    return const_cast< IfcPreDefinedPointMarkerSymbol * > (obj);
}

IfcPreDefinedSymbol *ShallowCopyOp::operator()(const IfcPreDefinedSymbol *obj) const {
    return const_cast< IfcPreDefinedSymbol * > (obj);
}

IfcPreDefinedTerminatorSymbol *ShallowCopyOp::operator()(const IfcPreDefinedTerminatorSymbol *obj) const {
    return const_cast< IfcPreDefinedTerminatorSymbol * > (obj);
}

IfcPreDefinedTextFont *ShallowCopyOp::operator()(const IfcPreDefinedTextFont *obj) const {
    return const_cast< IfcPreDefinedTextFont * > (obj);
}

IfcPresentationLayerAssignment *ShallowCopyOp::operator()(const IfcPresentationLayerAssignment *obj) const {
    return const_cast< IfcPresentationLayerAssignment * > (obj);
}

IfcPresentationLayerWithStyle *ShallowCopyOp::operator()(const IfcPresentationLayerWithStyle *obj) const {
    return const_cast< IfcPresentationLayerWithStyle * > (obj);
}

IfcPresentationStyle *ShallowCopyOp::operator()(const IfcPresentationStyle *obj) const {
    return const_cast< IfcPresentationStyle * > (obj);
}

IfcPresentationStyleAssignment *ShallowCopyOp::operator()(const IfcPresentationStyleAssignment *obj) const {
    return const_cast< IfcPresentationStyleAssignment * > (obj);
}

IfcProcedure *ShallowCopyOp::operator()(const IfcProcedure *obj) const {
    return const_cast< IfcProcedure * > (obj);
}

IfcProcess *ShallowCopyOp::operator()(const IfcProcess *obj) const {
    return const_cast< IfcProcess * > (obj);
}

IfcProduct *ShallowCopyOp::operator()(const IfcProduct *obj) const {
    return const_cast< IfcProduct * > (obj);
}

IfcProductDefinitionShape *ShallowCopyOp::operator()(const IfcProductDefinitionShape *obj) const {
    return const_cast< IfcProductDefinitionShape * > (obj);
}

IfcProductRepresentation *ShallowCopyOp::operator()(const IfcProductRepresentation *obj) const {
    return const_cast< IfcProductRepresentation * > (obj);
}

IfcProductsOfCombustionProperties *ShallowCopyOp::operator()(const IfcProductsOfCombustionProperties *obj) const {
    return const_cast< IfcProductsOfCombustionProperties * > (obj);
}

IfcProfileDef *ShallowCopyOp::operator()(const IfcProfileDef *obj) const {
    return const_cast< IfcProfileDef * > (obj);
}

IfcProfileProperties *ShallowCopyOp::operator()(const IfcProfileProperties *obj) const {
    return const_cast< IfcProfileProperties * > (obj);
}

IfcProject *ShallowCopyOp::operator()(const IfcProject *obj) const {
    return const_cast< IfcProject * > (obj);
}

IfcProjectOrder *ShallowCopyOp::operator()(const IfcProjectOrder *obj) const {
    return const_cast< IfcProjectOrder * > (obj);
}

IfcProjectOrderRecord *ShallowCopyOp::operator()(const IfcProjectOrderRecord *obj) const {
    return const_cast< IfcProjectOrderRecord * > (obj);
}

IfcProjectionCurve *ShallowCopyOp::operator()(const IfcProjectionCurve *obj) const {
    return const_cast< IfcProjectionCurve * > (obj);
}

IfcProjectionElement *ShallowCopyOp::operator()(const IfcProjectionElement *obj) const {
    return const_cast< IfcProjectionElement * > (obj);
}

IfcProperty *ShallowCopyOp::operator()(const IfcProperty *obj) const {
    return const_cast< IfcProperty * > (obj);
}

IfcPropertyBoundedValue *ShallowCopyOp::operator()(const IfcPropertyBoundedValue *obj) const {
    return const_cast< IfcPropertyBoundedValue * > (obj);
}

IfcPropertyConstraintRelationship *ShallowCopyOp::operator()(const IfcPropertyConstraintRelationship *obj) const {
    return const_cast< IfcPropertyConstraintRelationship * > (obj);
}

IfcPropertyDefinition *ShallowCopyOp::operator()(const IfcPropertyDefinition *obj) const {
    return const_cast< IfcPropertyDefinition * > (obj);
}

IfcPropertyDependencyRelationship *ShallowCopyOp::operator()(const IfcPropertyDependencyRelationship *obj) const {
    return const_cast< IfcPropertyDependencyRelationship * > (obj);
}

IfcPropertyEnumeratedValue *ShallowCopyOp::operator()(const IfcPropertyEnumeratedValue *obj) const {
    return const_cast< IfcPropertyEnumeratedValue * > (obj);
}

IfcPropertyEnumeration *ShallowCopyOp::operator()(const IfcPropertyEnumeration *obj) const {
    return const_cast< IfcPropertyEnumeration * > (obj);
}

IfcPropertyListValue *ShallowCopyOp::operator()(const IfcPropertyListValue *obj) const {
    return const_cast< IfcPropertyListValue * > (obj);
}

IfcPropertyReferenceValue *ShallowCopyOp::operator()(const IfcPropertyReferenceValue *obj) const {
    return const_cast< IfcPropertyReferenceValue * > (obj);
}

IfcPropertySet *ShallowCopyOp::operator()(const IfcPropertySet *obj) const {
    return const_cast< IfcPropertySet * > (obj);
}

IfcPropertySetDefinition *ShallowCopyOp::operator()(const IfcPropertySetDefinition *obj) const {
    return const_cast< IfcPropertySetDefinition * > (obj);
}

IfcPropertySingleValue *ShallowCopyOp::operator()(const IfcPropertySingleValue *obj) const {
    return const_cast< IfcPropertySingleValue * > (obj);
}

IfcPropertyTableValue *ShallowCopyOp::operator()(const IfcPropertyTableValue *obj) const {
    return const_cast< IfcPropertyTableValue * > (obj);
}

IfcProtectiveDeviceType *ShallowCopyOp::operator()(const IfcProtectiveDeviceType *obj) const {
    return const_cast< IfcProtectiveDeviceType * > (obj);
}

IfcProxy *ShallowCopyOp::operator()(const IfcProxy *obj) const {
    return const_cast< IfcProxy * > (obj);
}

IfcPumpType *ShallowCopyOp::operator()(const IfcPumpType *obj) const {
    return const_cast< IfcPumpType * > (obj);
}

IfcQuantityArea *ShallowCopyOp::operator()(const IfcQuantityArea *obj) const {
    return const_cast< IfcQuantityArea * > (obj);
}

IfcQuantityCount *ShallowCopyOp::operator()(const IfcQuantityCount *obj) const {
    return const_cast< IfcQuantityCount * > (obj);
}

IfcQuantityLength *ShallowCopyOp::operator()(const IfcQuantityLength *obj) const {
    return const_cast< IfcQuantityLength * > (obj);
}

IfcQuantityTime *ShallowCopyOp::operator()(const IfcQuantityTime *obj) const {
    return const_cast< IfcQuantityTime * > (obj);
}

IfcQuantityVolume *ShallowCopyOp::operator()(const IfcQuantityVolume *obj) const {
    return const_cast< IfcQuantityVolume * > (obj);
}

IfcQuantityWeight *ShallowCopyOp::operator()(const IfcQuantityWeight *obj) const {
    return const_cast< IfcQuantityWeight * > (obj);
}

IfcRadiusDimension *ShallowCopyOp::operator()(const IfcRadiusDimension *obj) const {
    return const_cast< IfcRadiusDimension * > (obj);
}

IfcRailing *ShallowCopyOp::operator()(const IfcRailing *obj) const {
    return const_cast< IfcRailing * > (obj);
}

IfcRailingType *ShallowCopyOp::operator()(const IfcRailingType *obj) const {
    return const_cast< IfcRailingType * > (obj);
}

IfcRamp *ShallowCopyOp::operator()(const IfcRamp *obj) const {
    return const_cast< IfcRamp * > (obj);
}

IfcRampFlight *ShallowCopyOp::operator()(const IfcRampFlight *obj) const {
    return const_cast< IfcRampFlight * > (obj);
}

IfcRampFlightType *ShallowCopyOp::operator()(const IfcRampFlightType *obj) const {
    return const_cast< IfcRampFlightType * > (obj);
}

IfcRationalBezierCurve *ShallowCopyOp::operator()(const IfcRationalBezierCurve *obj) const {
    return const_cast< IfcRationalBezierCurve * > (obj);
}

IfcRectangleHollowProfileDef *ShallowCopyOp::operator()(const IfcRectangleHollowProfileDef *obj) const {
    return const_cast< IfcRectangleHollowProfileDef * > (obj);
}

IfcRectangleProfileDef *ShallowCopyOp::operator()(const IfcRectangleProfileDef *obj) const {
    return const_cast< IfcRectangleProfileDef * > (obj);
}

IfcRectangularPyramid *ShallowCopyOp::operator()(const IfcRectangularPyramid *obj) const {
    return const_cast< IfcRectangularPyramid * > (obj);
}

IfcRectangularTrimmedSurface *ShallowCopyOp::operator()(const IfcRectangularTrimmedSurface *obj) const {
    return const_cast< IfcRectangularTrimmedSurface * > (obj);
}

IfcReferencesValueDocument *ShallowCopyOp::operator()(const IfcReferencesValueDocument *obj) const {
    return const_cast< IfcReferencesValueDocument * > (obj);
}

IfcRegularTimeSeries *ShallowCopyOp::operator()(const IfcRegularTimeSeries *obj) const {
    return const_cast< IfcRegularTimeSeries * > (obj);
}

IfcReinforcementBarProperties *ShallowCopyOp::operator()(const IfcReinforcementBarProperties *obj) const {
    return const_cast< IfcReinforcementBarProperties * > (obj);
}

IfcReinforcementDefinitionProperties *ShallowCopyOp::operator()(const IfcReinforcementDefinitionProperties *obj) const {
    return const_cast< IfcReinforcementDefinitionProperties * > (obj);
}

IfcReinforcingBar *ShallowCopyOp::operator()(const IfcReinforcingBar *obj) const {
    return const_cast< IfcReinforcingBar * > (obj);
}

IfcReinforcingElement *ShallowCopyOp::operator()(const IfcReinforcingElement *obj) const {
    return const_cast< IfcReinforcingElement * > (obj);
}

IfcReinforcingMesh *ShallowCopyOp::operator()(const IfcReinforcingMesh *obj) const {
    return const_cast< IfcReinforcingMesh * > (obj);
}

IfcRelAggregates *ShallowCopyOp::operator()(const IfcRelAggregates *obj) const {
    return const_cast< IfcRelAggregates * > (obj);
}

IfcRelAssigns *ShallowCopyOp::operator()(const IfcRelAssigns *obj) const {
    return const_cast< IfcRelAssigns * > (obj);
}

IfcRelAssignsTasks *ShallowCopyOp::operator()(const IfcRelAssignsTasks *obj) const {
    return const_cast< IfcRelAssignsTasks * > (obj);
}

IfcRelAssignsToActor *ShallowCopyOp::operator()(const IfcRelAssignsToActor *obj) const {
    return const_cast< IfcRelAssignsToActor * > (obj);
}

IfcRelAssignsToControl *ShallowCopyOp::operator()(const IfcRelAssignsToControl *obj) const {
    return const_cast< IfcRelAssignsToControl * > (obj);
}

IfcRelAssignsToGroup *ShallowCopyOp::operator()(const IfcRelAssignsToGroup *obj) const {
    return const_cast< IfcRelAssignsToGroup * > (obj);
}

IfcRelAssignsToProcess *ShallowCopyOp::operator()(const IfcRelAssignsToProcess *obj) const {
    return const_cast< IfcRelAssignsToProcess * > (obj);
}

IfcRelAssignsToProduct *ShallowCopyOp::operator()(const IfcRelAssignsToProduct *obj) const {
    return const_cast< IfcRelAssignsToProduct * > (obj);
}

IfcRelAssignsToProjectOrder *ShallowCopyOp::operator()(const IfcRelAssignsToProjectOrder *obj) const {
    return const_cast< IfcRelAssignsToProjectOrder * > (obj);
}

IfcRelAssignsToResource *ShallowCopyOp::operator()(const IfcRelAssignsToResource *obj) const {
    return const_cast< IfcRelAssignsToResource * > (obj);
}

IfcRelAssociates *ShallowCopyOp::operator()(const IfcRelAssociates *obj) const {
    return const_cast< IfcRelAssociates * > (obj);
}

IfcRelAssociatesAppliedValue *ShallowCopyOp::operator()(const IfcRelAssociatesAppliedValue *obj) const {
    return const_cast< IfcRelAssociatesAppliedValue * > (obj);
}

IfcRelAssociatesApproval *ShallowCopyOp::operator()(const IfcRelAssociatesApproval *obj) const {
    return const_cast< IfcRelAssociatesApproval * > (obj);
}

IfcRelAssociatesClassification *ShallowCopyOp::operator()(const IfcRelAssociatesClassification *obj) const {
    return const_cast< IfcRelAssociatesClassification * > (obj);
}

IfcRelAssociatesConstraint *ShallowCopyOp::operator()(const IfcRelAssociatesConstraint *obj) const {
    return const_cast< IfcRelAssociatesConstraint * > (obj);
}

IfcRelAssociatesDocument *ShallowCopyOp::operator()(const IfcRelAssociatesDocument *obj) const {
    return const_cast< IfcRelAssociatesDocument * > (obj);
}

IfcRelAssociatesLibrary *ShallowCopyOp::operator()(const IfcRelAssociatesLibrary *obj) const {
    return const_cast< IfcRelAssociatesLibrary * > (obj);
}

IfcRelAssociatesMaterial *ShallowCopyOp::operator()(const IfcRelAssociatesMaterial *obj) const {
    return const_cast< IfcRelAssociatesMaterial * > (obj);
}

IfcRelAssociatesProfileProperties *ShallowCopyOp::operator()(const IfcRelAssociatesProfileProperties *obj) const {
    return const_cast< IfcRelAssociatesProfileProperties * > (obj);
}

IfcRelConnects *ShallowCopyOp::operator()(const IfcRelConnects *obj) const {
    return const_cast< IfcRelConnects * > (obj);
}

IfcRelConnectsElements *ShallowCopyOp::operator()(const IfcRelConnectsElements *obj) const {
    return const_cast< IfcRelConnectsElements * > (obj);
}

IfcRelConnectsPathElements *ShallowCopyOp::operator()(const IfcRelConnectsPathElements *obj) const {
    return const_cast< IfcRelConnectsPathElements * > (obj);
}

IfcRelConnectsPortToElement *ShallowCopyOp::operator()(const IfcRelConnectsPortToElement *obj) const {
    return const_cast< IfcRelConnectsPortToElement * > (obj);
}

IfcRelConnectsPorts *ShallowCopyOp::operator()(const IfcRelConnectsPorts *obj) const {
    return const_cast< IfcRelConnectsPorts * > (obj);
}

IfcRelConnectsStructuralActivity *ShallowCopyOp::operator()(const IfcRelConnectsStructuralActivity *obj) const {
    return const_cast< IfcRelConnectsStructuralActivity * > (obj);
}

IfcRelConnectsStructuralElement *ShallowCopyOp::operator()(const IfcRelConnectsStructuralElement *obj) const {
    return const_cast< IfcRelConnectsStructuralElement * > (obj);
}

IfcRelConnectsStructuralMember *ShallowCopyOp::operator()(const IfcRelConnectsStructuralMember *obj) const {
    return const_cast< IfcRelConnectsStructuralMember * > (obj);
}

IfcRelConnectsWithEccentricity *ShallowCopyOp::operator()(const IfcRelConnectsWithEccentricity *obj) const {
    return const_cast< IfcRelConnectsWithEccentricity * > (obj);
}

IfcRelConnectsWithRealizingElements *ShallowCopyOp::operator()(const IfcRelConnectsWithRealizingElements *obj) const {
    return const_cast< IfcRelConnectsWithRealizingElements * > (obj);
}

IfcRelContainedInSpatialStructure *ShallowCopyOp::operator()(const IfcRelContainedInSpatialStructure *obj) const {
    return const_cast< IfcRelContainedInSpatialStructure * > (obj);
}

IfcRelCoversBldgElements *ShallowCopyOp::operator()(const IfcRelCoversBldgElements *obj) const {
    return const_cast< IfcRelCoversBldgElements * > (obj);
}

IfcRelCoversSpaces *ShallowCopyOp::operator()(const IfcRelCoversSpaces *obj) const {
    return const_cast< IfcRelCoversSpaces * > (obj);
}

IfcRelDecomposes *ShallowCopyOp::operator()(const IfcRelDecomposes *obj) const {
    return const_cast< IfcRelDecomposes * > (obj);
}

IfcRelDefines *ShallowCopyOp::operator()(const IfcRelDefines *obj) const {
    return const_cast< IfcRelDefines * > (obj);
}

IfcRelDefinesByProperties *ShallowCopyOp::operator()(const IfcRelDefinesByProperties *obj) const {
    return const_cast< IfcRelDefinesByProperties * > (obj);
}

IfcRelDefinesByType *ShallowCopyOp::operator()(const IfcRelDefinesByType *obj) const {
    return const_cast< IfcRelDefinesByType * > (obj);
}

IfcRelFillsElement *ShallowCopyOp::operator()(const IfcRelFillsElement *obj) const {
    return const_cast< IfcRelFillsElement * > (obj);
}

IfcRelFlowControlElements *ShallowCopyOp::operator()(const IfcRelFlowControlElements *obj) const {
    return const_cast< IfcRelFlowControlElements * > (obj);
}

IfcRelInteractionRequirements *ShallowCopyOp::operator()(const IfcRelInteractionRequirements *obj) const {
    return const_cast< IfcRelInteractionRequirements * > (obj);
}

IfcRelNests *ShallowCopyOp::operator()(const IfcRelNests *obj) const {
    return const_cast< IfcRelNests * > (obj);
}

IfcRelOccupiesSpaces *ShallowCopyOp::operator()(const IfcRelOccupiesSpaces *obj) const {
    return const_cast< IfcRelOccupiesSpaces * > (obj);
}

IfcRelOverridesProperties *ShallowCopyOp::operator()(const IfcRelOverridesProperties *obj) const {
    return const_cast< IfcRelOverridesProperties * > (obj);
}

IfcRelProjectsElement *ShallowCopyOp::operator()(const IfcRelProjectsElement *obj) const {
    return const_cast< IfcRelProjectsElement * > (obj);
}

IfcRelReferencedInSpatialStructure *ShallowCopyOp::operator()(const IfcRelReferencedInSpatialStructure *obj) const {
    return const_cast< IfcRelReferencedInSpatialStructure * > (obj);
}

IfcRelSchedulesCostItems *ShallowCopyOp::operator()(const IfcRelSchedulesCostItems *obj) const {
    return const_cast< IfcRelSchedulesCostItems * > (obj);
}

IfcRelSequence *ShallowCopyOp::operator()(const IfcRelSequence *obj) const {
    return const_cast< IfcRelSequence * > (obj);
}

IfcRelServicesBuildings *ShallowCopyOp::operator()(const IfcRelServicesBuildings *obj) const {
    return const_cast< IfcRelServicesBuildings * > (obj);
}

IfcRelSpaceBoundary *ShallowCopyOp::operator()(const IfcRelSpaceBoundary *obj) const {
    return const_cast< IfcRelSpaceBoundary * > (obj);
}

IfcRelVoidsElement *ShallowCopyOp::operator()(const IfcRelVoidsElement *obj) const {
    return const_cast< IfcRelVoidsElement * > (obj);
}

IfcRelationship *ShallowCopyOp::operator()(const IfcRelationship *obj) const {
    return const_cast< IfcRelationship * > (obj);
}

IfcRelaxation *ShallowCopyOp::operator()(const IfcRelaxation *obj) const {
    return const_cast< IfcRelaxation * > (obj);
}

IfcRepresentation *ShallowCopyOp::operator()(const IfcRepresentation *obj) const {
    return const_cast< IfcRepresentation * > (obj);
}

IfcRepresentationContext *ShallowCopyOp::operator()(const IfcRepresentationContext *obj) const {
    return const_cast< IfcRepresentationContext * > (obj);
}

IfcRepresentationItem *ShallowCopyOp::operator()(const IfcRepresentationItem *obj) const {
    return const_cast< IfcRepresentationItem * > (obj);
}

IfcRepresentationMap *ShallowCopyOp::operator()(const IfcRepresentationMap *obj) const {
    return const_cast< IfcRepresentationMap * > (obj);
}

IfcResource *ShallowCopyOp::operator()(const IfcResource *obj) const {
    return const_cast< IfcResource * > (obj);
}

IfcRevolvedAreaSolid *ShallowCopyOp::operator()(const IfcRevolvedAreaSolid *obj) const {
    return const_cast< IfcRevolvedAreaSolid * > (obj);
}

IfcRibPlateProfileProperties *ShallowCopyOp::operator()(const IfcRibPlateProfileProperties *obj) const {
    return const_cast< IfcRibPlateProfileProperties * > (obj);
}

IfcRightCircularCone *ShallowCopyOp::operator()(const IfcRightCircularCone *obj) const {
    return const_cast< IfcRightCircularCone * > (obj);
}

IfcRightCircularCylinder *ShallowCopyOp::operator()(const IfcRightCircularCylinder *obj) const {
    return const_cast< IfcRightCircularCylinder * > (obj);
}

IfcRoof *ShallowCopyOp::operator()(const IfcRoof *obj) const {
    return const_cast< IfcRoof * > (obj);
}

IfcRoot *ShallowCopyOp::operator()(const IfcRoot *obj) const {
    return const_cast< IfcRoot * > (obj);
}

IfcRoundedEdgeFeature *ShallowCopyOp::operator()(const IfcRoundedEdgeFeature *obj) const {
    return const_cast< IfcRoundedEdgeFeature * > (obj);
}

IfcRoundedRectangleProfileDef *ShallowCopyOp::operator()(const IfcRoundedRectangleProfileDef *obj) const {
    return const_cast< IfcRoundedRectangleProfileDef * > (obj);
}

IfcSIUnit *ShallowCopyOp::operator()(const IfcSIUnit *obj) const {
    return const_cast< IfcSIUnit * > (obj);
}

IfcSanitaryTerminalType *ShallowCopyOp::operator()(const IfcSanitaryTerminalType *obj) const {
    return const_cast< IfcSanitaryTerminalType * > (obj);
}

IfcScheduleTimeControl *ShallowCopyOp::operator()(const IfcScheduleTimeControl *obj) const {
    return const_cast< IfcScheduleTimeControl * > (obj);
}

IfcSectionProperties *ShallowCopyOp::operator()(const IfcSectionProperties *obj) const {
    return const_cast< IfcSectionProperties * > (obj);
}

IfcSectionReinforcementProperties *ShallowCopyOp::operator()(const IfcSectionReinforcementProperties *obj) const {
    return const_cast< IfcSectionReinforcementProperties * > (obj);
}

IfcSectionedSpine *ShallowCopyOp::operator()(const IfcSectionedSpine *obj) const {
    return const_cast< IfcSectionedSpine * > (obj);
}

IfcSensorType *ShallowCopyOp::operator()(const IfcSensorType *obj) const {
    return const_cast< IfcSensorType * > (obj);
}

IfcServiceLife *ShallowCopyOp::operator()(const IfcServiceLife *obj) const {
    return const_cast< IfcServiceLife * > (obj);
}

IfcServiceLifeFactor *ShallowCopyOp::operator()(const IfcServiceLifeFactor *obj) const {
    return const_cast< IfcServiceLifeFactor * > (obj);
}

IfcShapeAspect *ShallowCopyOp::operator()(const IfcShapeAspect *obj) const {
    return const_cast< IfcShapeAspect * > (obj);
}

IfcShapeModel *ShallowCopyOp::operator()(const IfcShapeModel *obj) const {
    return const_cast< IfcShapeModel * > (obj);
}

IfcShapeRepresentation *ShallowCopyOp::operator()(const IfcShapeRepresentation *obj) const {
    return const_cast< IfcShapeRepresentation * > (obj);
}

IfcShellBasedSurfaceModel *ShallowCopyOp::operator()(const IfcShellBasedSurfaceModel *obj) const {
    return const_cast< IfcShellBasedSurfaceModel * > (obj);
}

IfcSimpleProperty *ShallowCopyOp::operator()(const IfcSimpleProperty *obj) const {
    return const_cast< IfcSimpleProperty * > (obj);
}

IfcSite *ShallowCopyOp::operator()(const IfcSite *obj) const {
    return const_cast< IfcSite * > (obj);
}

IfcSlab *ShallowCopyOp::operator()(const IfcSlab *obj) const {
    return const_cast< IfcSlab * > (obj);
}

IfcSlabType *ShallowCopyOp::operator()(const IfcSlabType *obj) const {
    return const_cast< IfcSlabType * > (obj);
}

IfcSlippageConnectionCondition *ShallowCopyOp::operator()(const IfcSlippageConnectionCondition *obj) const {
    return const_cast< IfcSlippageConnectionCondition * > (obj);
}

IfcSolidModel *ShallowCopyOp::operator()(const IfcSolidModel *obj) const {
    return const_cast< IfcSolidModel * > (obj);
}

IfcSoundProperties *ShallowCopyOp::operator()(const IfcSoundProperties *obj) const {
    return const_cast< IfcSoundProperties * > (obj);
}

IfcSoundValue *ShallowCopyOp::operator()(const IfcSoundValue *obj) const {
    return const_cast< IfcSoundValue * > (obj);
}

IfcSpace *ShallowCopyOp::operator()(const IfcSpace *obj) const {
    return const_cast< IfcSpace * > (obj);
}

IfcSpaceHeaterType *ShallowCopyOp::operator()(const IfcSpaceHeaterType *obj) const {
    return const_cast< IfcSpaceHeaterType * > (obj);
}

IfcSpaceProgram *ShallowCopyOp::operator()(const IfcSpaceProgram *obj) const {
    return const_cast< IfcSpaceProgram * > (obj);
}

IfcSpaceThermalLoadProperties *ShallowCopyOp::operator()(const IfcSpaceThermalLoadProperties *obj) const {
    return const_cast< IfcSpaceThermalLoadProperties * > (obj);
}

IfcSpaceType *ShallowCopyOp::operator()(const IfcSpaceType *obj) const {
    return const_cast< IfcSpaceType * > (obj);
}

IfcSpatialStructureElement *ShallowCopyOp::operator()(const IfcSpatialStructureElement *obj) const {
    return const_cast< IfcSpatialStructureElement * > (obj);
}

IfcSpatialStructureElementType *ShallowCopyOp::operator()(const IfcSpatialStructureElementType *obj) const {
    return const_cast< IfcSpatialStructureElementType * > (obj);
}

IfcSphere *ShallowCopyOp::operator()(const IfcSphere *obj) const {
    return const_cast< IfcSphere * > (obj);
}

IfcStackTerminalType *ShallowCopyOp::operator()(const IfcStackTerminalType *obj) const {
    return const_cast< IfcStackTerminalType * > (obj);
}

IfcStair *ShallowCopyOp::operator()(const IfcStair *obj) const {
    return const_cast< IfcStair * > (obj);
}

IfcStairFlight *ShallowCopyOp::operator()(const IfcStairFlight *obj) const {
    return const_cast< IfcStairFlight * > (obj);
}

IfcStairFlightType *ShallowCopyOp::operator()(const IfcStairFlightType *obj) const {
    return const_cast< IfcStairFlightType * > (obj);
}

IfcStructuralAction *ShallowCopyOp::operator()(const IfcStructuralAction *obj) const {
    return const_cast< IfcStructuralAction * > (obj);
}

IfcStructuralActivity *ShallowCopyOp::operator()(const IfcStructuralActivity *obj) const {
    return const_cast< IfcStructuralActivity * > (obj);
}

IfcStructuralAnalysisModel *ShallowCopyOp::operator()(const IfcStructuralAnalysisModel *obj) const {
    return const_cast< IfcStructuralAnalysisModel * > (obj);
}

IfcStructuralConnection *ShallowCopyOp::operator()(const IfcStructuralConnection *obj) const {
    return const_cast< IfcStructuralConnection * > (obj);
}

IfcStructuralConnectionCondition *ShallowCopyOp::operator()(const IfcStructuralConnectionCondition *obj) const {
    return const_cast< IfcStructuralConnectionCondition * > (obj);
}

IfcStructuralCurveConnection *ShallowCopyOp::operator()(const IfcStructuralCurveConnection *obj) const {
    return const_cast< IfcStructuralCurveConnection * > (obj);
}

IfcStructuralCurveMember *ShallowCopyOp::operator()(const IfcStructuralCurveMember *obj) const {
    return const_cast< IfcStructuralCurveMember * > (obj);
}

IfcStructuralCurveMemberVarying *ShallowCopyOp::operator()(const IfcStructuralCurveMemberVarying *obj) const {
    return const_cast< IfcStructuralCurveMemberVarying * > (obj);
}

IfcStructuralItem *ShallowCopyOp::operator()(const IfcStructuralItem *obj) const {
    return const_cast< IfcStructuralItem * > (obj);
}

IfcStructuralLinearAction *ShallowCopyOp::operator()(const IfcStructuralLinearAction *obj) const {
    return const_cast< IfcStructuralLinearAction * > (obj);
}

IfcStructuralLinearActionVarying *ShallowCopyOp::operator()(const IfcStructuralLinearActionVarying *obj) const {
    return const_cast< IfcStructuralLinearActionVarying * > (obj);
}

IfcStructuralLoad *ShallowCopyOp::operator()(const IfcStructuralLoad *obj) const {
    return const_cast< IfcStructuralLoad * > (obj);
}

IfcStructuralLoadGroup *ShallowCopyOp::operator()(const IfcStructuralLoadGroup *obj) const {
    return const_cast< IfcStructuralLoadGroup * > (obj);
}

IfcStructuralLoadLinearForce *ShallowCopyOp::operator()(const IfcStructuralLoadLinearForce *obj) const {
    return const_cast< IfcStructuralLoadLinearForce * > (obj);
}

IfcStructuralLoadPlanarForce *ShallowCopyOp::operator()(const IfcStructuralLoadPlanarForce *obj) const {
    return const_cast< IfcStructuralLoadPlanarForce * > (obj);
}

IfcStructuralLoadSingleDisplacement *ShallowCopyOp::operator()(const IfcStructuralLoadSingleDisplacement *obj) const {
    return const_cast< IfcStructuralLoadSingleDisplacement * > (obj);
}

IfcStructuralLoadSingleDisplacementDistortion *ShallowCopyOp::operator()(const IfcStructuralLoadSingleDisplacementDistortion *obj) const {
    return const_cast< IfcStructuralLoadSingleDisplacementDistortion * > (obj);
}

IfcStructuralLoadSingleForce *ShallowCopyOp::operator()(const IfcStructuralLoadSingleForce *obj) const {
    return const_cast< IfcStructuralLoadSingleForce * > (obj);
}

IfcStructuralLoadSingleForceWarping *ShallowCopyOp::operator()(const IfcStructuralLoadSingleForceWarping *obj) const {
    return const_cast< IfcStructuralLoadSingleForceWarping * > (obj);
}

IfcStructuralLoadStatic *ShallowCopyOp::operator()(const IfcStructuralLoadStatic *obj) const {
    return const_cast< IfcStructuralLoadStatic * > (obj);
}

IfcStructuralLoadTemperature *ShallowCopyOp::operator()(const IfcStructuralLoadTemperature *obj) const {
    return const_cast< IfcStructuralLoadTemperature * > (obj);
}

IfcStructuralMember *ShallowCopyOp::operator()(const IfcStructuralMember *obj) const {
    return const_cast< IfcStructuralMember * > (obj);
}

IfcStructuralPlanarAction *ShallowCopyOp::operator()(const IfcStructuralPlanarAction *obj) const {
    return const_cast< IfcStructuralPlanarAction * > (obj);
}

IfcStructuralPlanarActionVarying *ShallowCopyOp::operator()(const IfcStructuralPlanarActionVarying *obj) const {
    return const_cast< IfcStructuralPlanarActionVarying * > (obj);
}

IfcStructuralPointAction *ShallowCopyOp::operator()(const IfcStructuralPointAction *obj) const {
    return const_cast< IfcStructuralPointAction * > (obj);
}

IfcStructuralPointConnection *ShallowCopyOp::operator()(const IfcStructuralPointConnection *obj) const {
    return const_cast< IfcStructuralPointConnection * > (obj);
}

IfcStructuralPointReaction *ShallowCopyOp::operator()(const IfcStructuralPointReaction *obj) const {
    return const_cast< IfcStructuralPointReaction * > (obj);
}

IfcStructuralProfileProperties *ShallowCopyOp::operator()(const IfcStructuralProfileProperties *obj) const {
    return const_cast< IfcStructuralProfileProperties * > (obj);
}

IfcStructuralReaction *ShallowCopyOp::operator()(const IfcStructuralReaction *obj) const {
    return const_cast< IfcStructuralReaction * > (obj);
}

IfcStructuralResultGroup *ShallowCopyOp::operator()(const IfcStructuralResultGroup *obj) const {
    return const_cast< IfcStructuralResultGroup * > (obj);
}

IfcStructuralSteelProfileProperties *ShallowCopyOp::operator()(const IfcStructuralSteelProfileProperties *obj) const {
    return const_cast< IfcStructuralSteelProfileProperties * > (obj);
}

IfcStructuralSurfaceConnection *ShallowCopyOp::operator()(const IfcStructuralSurfaceConnection *obj) const {
    return const_cast< IfcStructuralSurfaceConnection * > (obj);
}

IfcStructuralSurfaceMember *ShallowCopyOp::operator()(const IfcStructuralSurfaceMember *obj) const {
    return const_cast< IfcStructuralSurfaceMember * > (obj);
}

IfcStructuralSurfaceMemberVarying *ShallowCopyOp::operator()(const IfcStructuralSurfaceMemberVarying *obj) const {
    return const_cast< IfcStructuralSurfaceMemberVarying * > (obj);
}

IfcStructuredDimensionCallout *ShallowCopyOp::operator()(const IfcStructuredDimensionCallout *obj) const {
    return const_cast< IfcStructuredDimensionCallout * > (obj);
}

IfcStyleModel *ShallowCopyOp::operator()(const IfcStyleModel *obj) const {
    return const_cast< IfcStyleModel * > (obj);
}

IfcStyledItem *ShallowCopyOp::operator()(const IfcStyledItem *obj) const {
    return const_cast< IfcStyledItem * > (obj);
}

IfcStyledRepresentation *ShallowCopyOp::operator()(const IfcStyledRepresentation *obj) const {
    return const_cast< IfcStyledRepresentation * > (obj);
}

IfcSubContractResource *ShallowCopyOp::operator()(const IfcSubContractResource *obj) const {
    return const_cast< IfcSubContractResource * > (obj);
}

IfcSubedge *ShallowCopyOp::operator()(const IfcSubedge *obj) const {
    return const_cast< IfcSubedge * > (obj);
}

IfcSurface *ShallowCopyOp::operator()(const IfcSurface *obj) const {
    return const_cast< IfcSurface * > (obj);
}

IfcSurfaceCurveSweptAreaSolid *ShallowCopyOp::operator()(const IfcSurfaceCurveSweptAreaSolid *obj) const {
    return const_cast< IfcSurfaceCurveSweptAreaSolid * > (obj);
}

IfcSurfaceOfLinearExtrusion *ShallowCopyOp::operator()(const IfcSurfaceOfLinearExtrusion *obj) const {
    return const_cast< IfcSurfaceOfLinearExtrusion * > (obj);
}

IfcSurfaceOfRevolution *ShallowCopyOp::operator()(const IfcSurfaceOfRevolution *obj) const {
    return const_cast< IfcSurfaceOfRevolution * > (obj);
}

IfcSurfaceStyle *ShallowCopyOp::operator()(const IfcSurfaceStyle *obj) const {
    return const_cast< IfcSurfaceStyle * > (obj);
}

IfcSurfaceStyleLighting *ShallowCopyOp::operator()(const IfcSurfaceStyleLighting *obj) const {
    return const_cast< IfcSurfaceStyleLighting * > (obj);
}

IfcSurfaceStyleRefraction *ShallowCopyOp::operator()(const IfcSurfaceStyleRefraction *obj) const {
    return const_cast< IfcSurfaceStyleRefraction * > (obj);
}

IfcSurfaceStyleRendering *ShallowCopyOp::operator()(const IfcSurfaceStyleRendering *obj) const {
    return const_cast< IfcSurfaceStyleRendering * > (obj);
}

IfcSurfaceStyleShading *ShallowCopyOp::operator()(const IfcSurfaceStyleShading *obj) const {
    return const_cast< IfcSurfaceStyleShading * > (obj);
}

IfcSurfaceStyleWithTextures *ShallowCopyOp::operator()(const IfcSurfaceStyleWithTextures *obj) const {
    return const_cast< IfcSurfaceStyleWithTextures * > (obj);
}

IfcSurfaceTexture *ShallowCopyOp::operator()(const IfcSurfaceTexture *obj) const {
    return const_cast< IfcSurfaceTexture * > (obj);
}

IfcSweptAreaSolid *ShallowCopyOp::operator()(const IfcSweptAreaSolid *obj) const {
    return const_cast< IfcSweptAreaSolid * > (obj);
}

IfcSweptDiskSolid *ShallowCopyOp::operator()(const IfcSweptDiskSolid *obj) const {
    return const_cast< IfcSweptDiskSolid * > (obj);
}

IfcSweptSurface *ShallowCopyOp::operator()(const IfcSweptSurface *obj) const {
    return const_cast< IfcSweptSurface * > (obj);
}

IfcSwitchingDeviceType *ShallowCopyOp::operator()(const IfcSwitchingDeviceType *obj) const {
    return const_cast< IfcSwitchingDeviceType * > (obj);
}

IfcSymbolStyle *ShallowCopyOp::operator()(const IfcSymbolStyle *obj) const {
    return const_cast< IfcSymbolStyle * > (obj);
}

IfcSystem *ShallowCopyOp::operator()(const IfcSystem *obj) const {
    return const_cast< IfcSystem * > (obj);
}

IfcSystemFurnitureElementType *ShallowCopyOp::operator()(const IfcSystemFurnitureElementType *obj) const {
    return const_cast< IfcSystemFurnitureElementType * > (obj);
}

IfcTShapeProfileDef *ShallowCopyOp::operator()(const IfcTShapeProfileDef *obj) const {
    return const_cast< IfcTShapeProfileDef * > (obj);
}

IfcTable *ShallowCopyOp::operator()(const IfcTable *obj) const {
    return const_cast< IfcTable * > (obj);
}

IfcTableRow *ShallowCopyOp::operator()(const IfcTableRow *obj) const {
    return const_cast< IfcTableRow * > (obj);
}

IfcTankType *ShallowCopyOp::operator()(const IfcTankType *obj) const {
    return const_cast< IfcTankType * > (obj);
}

IfcTask *ShallowCopyOp::operator()(const IfcTask *obj) const {
    return const_cast< IfcTask * > (obj);
}

IfcTelecomAddress *ShallowCopyOp::operator()(const IfcTelecomAddress *obj) const {
    return const_cast< IfcTelecomAddress * > (obj);
}

IfcTendon *ShallowCopyOp::operator()(const IfcTendon *obj) const {
    return const_cast< IfcTendon * > (obj);
}

IfcTendonAnchor *ShallowCopyOp::operator()(const IfcTendonAnchor *obj) const {
    return const_cast< IfcTendonAnchor * > (obj);
}

IfcTerminatorSymbol *ShallowCopyOp::operator()(const IfcTerminatorSymbol *obj) const {
    return const_cast< IfcTerminatorSymbol * > (obj);
}

IfcTextLiteral *ShallowCopyOp::operator()(const IfcTextLiteral *obj) const {
    return const_cast< IfcTextLiteral * > (obj);
}

IfcTextLiteralWithExtent *ShallowCopyOp::operator()(const IfcTextLiteralWithExtent *obj) const {
    return const_cast< IfcTextLiteralWithExtent * > (obj);
}

IfcTextStyle *ShallowCopyOp::operator()(const IfcTextStyle *obj) const {
    return const_cast< IfcTextStyle * > (obj);
}

IfcTextStyleFontModel *ShallowCopyOp::operator()(const IfcTextStyleFontModel *obj) const {
    return const_cast< IfcTextStyleFontModel * > (obj);
}

IfcTextStyleForDefinedFont *ShallowCopyOp::operator()(const IfcTextStyleForDefinedFont *obj) const {
    return const_cast< IfcTextStyleForDefinedFont * > (obj);
}

IfcTextStyleTextModel *ShallowCopyOp::operator()(const IfcTextStyleTextModel *obj) const {
    return const_cast< IfcTextStyleTextModel * > (obj);
}

IfcTextStyleWithBoxCharacteristics *ShallowCopyOp::operator()(const IfcTextStyleWithBoxCharacteristics *obj) const {
    return const_cast< IfcTextStyleWithBoxCharacteristics * > (obj);
}

IfcTextureCoordinate *ShallowCopyOp::operator()(const IfcTextureCoordinate *obj) const {
    return const_cast< IfcTextureCoordinate * > (obj);
}

IfcTextureCoordinateGenerator *ShallowCopyOp::operator()(const IfcTextureCoordinateGenerator *obj) const {
    return const_cast< IfcTextureCoordinateGenerator * > (obj);
}

IfcTextureMap *ShallowCopyOp::operator()(const IfcTextureMap *obj) const {
    return const_cast< IfcTextureMap * > (obj);
}

IfcTextureVertex *ShallowCopyOp::operator()(const IfcTextureVertex *obj) const {
    return const_cast< IfcTextureVertex * > (obj);
}

IfcThermalMaterialProperties *ShallowCopyOp::operator()(const IfcThermalMaterialProperties *obj) const {
    return const_cast< IfcThermalMaterialProperties * > (obj);
}

IfcTimeSeries *ShallowCopyOp::operator()(const IfcTimeSeries *obj) const {
    return const_cast< IfcTimeSeries * > (obj);
}

IfcTimeSeriesReferenceRelationship *ShallowCopyOp::operator()(const IfcTimeSeriesReferenceRelationship *obj) const {
    return const_cast< IfcTimeSeriesReferenceRelationship * > (obj);
}

IfcTimeSeriesSchedule *ShallowCopyOp::operator()(const IfcTimeSeriesSchedule *obj) const {
    return const_cast< IfcTimeSeriesSchedule * > (obj);
}

IfcTimeSeriesValue *ShallowCopyOp::operator()(const IfcTimeSeriesValue *obj) const {
    return const_cast< IfcTimeSeriesValue * > (obj);
}

IfcTopologicalRepresentationItem *ShallowCopyOp::operator()(const IfcTopologicalRepresentationItem *obj) const {
    return const_cast< IfcTopologicalRepresentationItem * > (obj);
}

IfcTopologyRepresentation *ShallowCopyOp::operator()(const IfcTopologyRepresentation *obj) const {
    return const_cast< IfcTopologyRepresentation * > (obj);
}

IfcTransformerType *ShallowCopyOp::operator()(const IfcTransformerType *obj) const {
    return const_cast< IfcTransformerType * > (obj);
}

IfcTransportElement *ShallowCopyOp::operator()(const IfcTransportElement *obj) const {
    return const_cast< IfcTransportElement * > (obj);
}

IfcTransportElementType *ShallowCopyOp::operator()(const IfcTransportElementType *obj) const {
    return const_cast< IfcTransportElementType * > (obj);
}

IfcTrapeziumProfileDef *ShallowCopyOp::operator()(const IfcTrapeziumProfileDef *obj) const {
    return const_cast< IfcTrapeziumProfileDef * > (obj);
}

IfcTrimmedCurve *ShallowCopyOp::operator()(const IfcTrimmedCurve *obj) const {
    return const_cast< IfcTrimmedCurve * > (obj);
}

IfcTubeBundleType *ShallowCopyOp::operator()(const IfcTubeBundleType *obj) const {
    return const_cast< IfcTubeBundleType * > (obj);
}

IfcTwoDirectionRepeatFactor *ShallowCopyOp::operator()(const IfcTwoDirectionRepeatFactor *obj) const {
    return const_cast< IfcTwoDirectionRepeatFactor * > (obj);
}

IfcTypeObject *ShallowCopyOp::operator()(const IfcTypeObject *obj) const {
    return const_cast< IfcTypeObject * > (obj);
}

IfcTypeProduct *ShallowCopyOp::operator()(const IfcTypeProduct *obj) const {
    return const_cast< IfcTypeProduct * > (obj);
}

IfcUShapeProfileDef *ShallowCopyOp::operator()(const IfcUShapeProfileDef *obj) const {
    return const_cast< IfcUShapeProfileDef * > (obj);
}

IfcUnitAssignment *ShallowCopyOp::operator()(const IfcUnitAssignment *obj) const {
    return const_cast< IfcUnitAssignment * > (obj);
}

IfcUnitaryEquipmentType *ShallowCopyOp::operator()(const IfcUnitaryEquipmentType *obj) const {
    return const_cast< IfcUnitaryEquipmentType * > (obj);
}

IfcValveType *ShallowCopyOp::operator()(const IfcValveType *obj) const {
    return const_cast< IfcValveType * > (obj);
}

IfcVector *ShallowCopyOp::operator()(const IfcVector *obj) const {
    return const_cast< IfcVector * > (obj);
}

IfcVertex *ShallowCopyOp::operator()(const IfcVertex *obj) const {
    return const_cast< IfcVertex * > (obj);
}

IfcVertexBasedTextureMap *ShallowCopyOp::operator()(const IfcVertexBasedTextureMap *obj) const {
    return const_cast< IfcVertexBasedTextureMap * > (obj);
}

IfcVertexLoop *ShallowCopyOp::operator()(const IfcVertexLoop *obj) const {
    return const_cast< IfcVertexLoop * > (obj);
}

IfcVertexPoint *ShallowCopyOp::operator()(const IfcVertexPoint *obj) const {
    return const_cast< IfcVertexPoint * > (obj);
}

IfcVibrationIsolatorType *ShallowCopyOp::operator()(const IfcVibrationIsolatorType *obj) const {
    return const_cast< IfcVibrationIsolatorType * > (obj);
}

IfcVirtualElement *ShallowCopyOp::operator()(const IfcVirtualElement *obj) const {
    return const_cast< IfcVirtualElement * > (obj);
}

IfcVirtualGridIntersection *ShallowCopyOp::operator()(const IfcVirtualGridIntersection *obj) const {
    return const_cast< IfcVirtualGridIntersection * > (obj);
}

IfcWall *ShallowCopyOp::operator()(const IfcWall *obj) const {
    return const_cast< IfcWall * > (obj);
}

IfcWallStandardCase *ShallowCopyOp::operator()(const IfcWallStandardCase *obj) const {
    return const_cast< IfcWallStandardCase * > (obj);
}

IfcWallType *ShallowCopyOp::operator()(const IfcWallType *obj) const {
    return const_cast< IfcWallType * > (obj);
}

IfcWasteTerminalType *ShallowCopyOp::operator()(const IfcWasteTerminalType *obj) const {
    return const_cast< IfcWasteTerminalType * > (obj);
}

IfcWaterProperties *ShallowCopyOp::operator()(const IfcWaterProperties *obj) const {
    return const_cast< IfcWaterProperties * > (obj);
}

IfcWindow *ShallowCopyOp::operator()(const IfcWindow *obj) const {
    return const_cast< IfcWindow * > (obj);
}

IfcWindowLiningProperties *ShallowCopyOp::operator()(const IfcWindowLiningProperties *obj) const {
    return const_cast< IfcWindowLiningProperties * > (obj);
}

IfcWindowPanelProperties *ShallowCopyOp::operator()(const IfcWindowPanelProperties *obj) const {
    return const_cast< IfcWindowPanelProperties * > (obj);
}

IfcWindowStyle *ShallowCopyOp::operator()(const IfcWindowStyle *obj) const {
    return const_cast< IfcWindowStyle * > (obj);
}

IfcWorkControl *ShallowCopyOp::operator()(const IfcWorkControl *obj) const {
    return const_cast< IfcWorkControl * > (obj);
}

IfcWorkPlan *ShallowCopyOp::operator()(const IfcWorkPlan *obj) const {
    return const_cast< IfcWorkPlan * > (obj);
}

IfcWorkSchedule *ShallowCopyOp::operator()(const IfcWorkSchedule *obj) const {
    return const_cast< IfcWorkSchedule * > (obj);
}

IfcZShapeProfileDef *ShallowCopyOp::operator()(const IfcZShapeProfileDef *obj) const {
    return const_cast< IfcZShapeProfileDef * > (obj);
}

IfcZone *ShallowCopyOp::operator()(const IfcZone *obj) const {
    return const_cast< IfcZone * > (obj);
}

IfcCivilStructureElement *ShallowCopyOp::operator()(const IfcCivilStructureElement *obj) const {
    return const_cast< IfcCivilStructureElement * > (obj);
}

IfcBridgeStructureElement *ShallowCopyOp::operator()(const IfcBridgeStructureElement *obj) const {
    return const_cast< IfcBridgeStructureElement * > (obj);
}

IfcBridge *ShallowCopyOp::operator()(const IfcBridge *obj) const {
    return const_cast< IfcBridge * > (obj);
}

IfcBridgePart *ShallowCopyOp::operator()(const IfcBridgePart *obj) const {
    return const_cast< IfcBridgePart * > (obj);
}

IfcCivilElement *ShallowCopyOp::operator()(const IfcCivilElement *obj) const {
    return const_cast< IfcCivilElement * > (obj);
}

IfcBridgeElement *ShallowCopyOp::operator()(const IfcBridgeElement *obj) const {
    return const_cast< IfcBridgeElement * > (obj);
}

IfcBridgeSegment *ShallowCopyOp::operator()(const IfcBridgeSegment *obj) const {
    return const_cast< IfcBridgeSegment * > (obj);
}

IfcBridgeSegmentPart *ShallowCopyOp::operator()(const IfcBridgeSegmentPart *obj) const {
    return const_cast< IfcBridgeSegmentPart * > (obj);
}

IfcBridgeContactElement *ShallowCopyOp::operator()(const IfcBridgeContactElement *obj) const {
    return const_cast< IfcBridgeContactElement * > (obj);
}

IfcBridgePrismaticElement *ShallowCopyOp::operator()(const IfcBridgePrismaticElement *obj) const {
    return const_cast< IfcBridgePrismaticElement * > (obj);
}

IfcAlignmentElement *ShallowCopyOp::operator()(const IfcAlignmentElement *obj) const {
    return const_cast< IfcAlignmentElement * > (obj);
}

IfcReferenceElement *ShallowCopyOp::operator()(const IfcReferenceElement *obj) const {
    return const_cast< IfcReferenceElement * > (obj);
}

IfcReferenceCurve *ShallowCopyOp::operator()(const IfcReferenceCurve *obj) const {
    return const_cast< IfcReferenceCurve * > (obj);
}

IfcReferenceCurve3D *ShallowCopyOp::operator()(const IfcReferenceCurve3D *obj) const {
    return const_cast< IfcReferenceCurve3D * > (obj);
}

IfcReferenceCurveAlignment2D *ShallowCopyOp::operator()(const IfcReferenceCurveAlignment2D *obj) const {
    return const_cast< IfcReferenceCurveAlignment2D * > (obj);
}

IfcReferencePlacement *ShallowCopyOp::operator()(const IfcReferencePlacement *obj) const {
    return const_cast< IfcReferencePlacement * > (obj);
}

IfcReferenceCurvePlacement *ShallowCopyOp::operator()(const IfcReferenceCurvePlacement *obj) const {
    return const_cast< IfcReferenceCurvePlacement * > (obj);
}

IfcReferenceCurvePlacementSystem *ShallowCopyOp::operator()(const IfcReferenceCurvePlacementSystem *obj) const {
    return const_cast< IfcReferenceCurvePlacementSystem * > (obj);
}

IfcElementPart *ShallowCopyOp::operator()(const IfcElementPart *obj) const {
    return const_cast< IfcElementPart * > (obj);
}

IfcCivilElementPart *ShallowCopyOp::operator()(const IfcCivilElementPart *obj) const {
    return const_cast< IfcCivilElementPart * > (obj);
}

IfcCivilSheath *ShallowCopyOp::operator()(const IfcCivilSheath *obj) const {
    return const_cast< IfcCivilSheath * > (obj);
}

IfcCivilVoid *ShallowCopyOp::operator()(const IfcCivilVoid *obj) const {
    return const_cast< IfcCivilVoid * > (obj);
}

IfcClothoid *ShallowCopyOp::operator()(const IfcClothoid *obj) const {
    return const_cast< IfcClothoid * > (obj);
}

IfcReferencedSectionedSpine *ShallowCopyOp::operator()(const IfcReferencedSectionedSpine *obj) const {
    return const_cast< IfcReferencedSectionedSpine * > (obj);
}

ReparentCopyOp::ReparentCopyOp(ExpressDataSet *dataset) {
    _dataset = dataset;
}

ReparentCopyOp::~ReparentCopyOp() {
}

ExpressDataSet *ReparentCopyOp::getExpressDataSet() const {
    return _dataset;
}

Ifc2DCompositeCurve *ReparentCopyOp::operator()(const Ifc2DCompositeCurve *obj) const {
    if (obj) {
        Ifc2DCompositeCurve *clone = static_cast< Ifc2DCompositeCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfc2DCompositeCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcActionRequest *ReparentCopyOp::operator()(const IfcActionRequest *obj) const {
    if (obj) {
        IfcActionRequest *clone = static_cast< IfcActionRequest * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcActionRequest(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcActor *ReparentCopyOp::operator()(const IfcActor *obj) const {
    if (obj) {
        IfcActor *clone = static_cast< IfcActor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcActor(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcActorRole *ReparentCopyOp::operator()(const IfcActorRole *obj) const {
    if (obj) {
        IfcActorRole *clone = static_cast< IfcActorRole * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcActorRole(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcActuatorType *ReparentCopyOp::operator()(const IfcActuatorType *obj) const {
    if (obj) {
        IfcActuatorType *clone = static_cast< IfcActuatorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcActuatorType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAddress *ReparentCopyOp::operator()(const IfcAddress *obj) const {
    if (obj) {
        IfcAddress *clone = static_cast< IfcAddress * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAddress(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAirTerminalBoxType *ReparentCopyOp::operator()(const IfcAirTerminalBoxType *obj) const {
    if (obj) {
        IfcAirTerminalBoxType *clone = static_cast< IfcAirTerminalBoxType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAirTerminalBoxType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAirTerminalType *ReparentCopyOp::operator()(const IfcAirTerminalType *obj) const {
    if (obj) {
        IfcAirTerminalType *clone = static_cast< IfcAirTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAirTerminalType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAirToAirHeatRecoveryType *ReparentCopyOp::operator()(const IfcAirToAirHeatRecoveryType *obj) const {
    if (obj) {
        IfcAirToAirHeatRecoveryType *clone = static_cast< IfcAirToAirHeatRecoveryType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAirToAirHeatRecoveryType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAlarmType *ReparentCopyOp::operator()(const IfcAlarmType *obj) const {
    if (obj) {
        IfcAlarmType *clone = static_cast< IfcAlarmType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAlarmType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAngularDimension *ReparentCopyOp::operator()(const IfcAngularDimension *obj) const {
    if (obj) {
        IfcAngularDimension *clone = static_cast< IfcAngularDimension * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAngularDimension(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotation *ReparentCopyOp::operator()(const IfcAnnotation *obj) const {
    if (obj) {
        IfcAnnotation *clone = static_cast< IfcAnnotation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotation(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationCurveOccurrence *ReparentCopyOp::operator()(const IfcAnnotationCurveOccurrence *obj) const {
    if (obj) {
        IfcAnnotationCurveOccurrence *clone = static_cast< IfcAnnotationCurveOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationCurveOccurrence(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationFillArea *ReparentCopyOp::operator()(const IfcAnnotationFillArea *obj) const {
    if (obj) {
        IfcAnnotationFillArea *clone = static_cast< IfcAnnotationFillArea * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationFillArea(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationFillAreaOccurrence *ReparentCopyOp::operator()(const IfcAnnotationFillAreaOccurrence *obj) const {
    if (obj) {
        IfcAnnotationFillAreaOccurrence *clone = static_cast< IfcAnnotationFillAreaOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationFillAreaOccurrence(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationOccurrence *ReparentCopyOp::operator()(const IfcAnnotationOccurrence *obj) const {
    if (obj) {
        IfcAnnotationOccurrence *clone = static_cast< IfcAnnotationOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationOccurrence(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationSurface *ReparentCopyOp::operator()(const IfcAnnotationSurface *obj) const {
    if (obj) {
        IfcAnnotationSurface *clone = static_cast< IfcAnnotationSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationSurface(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationSurfaceOccurrence *ReparentCopyOp::operator()(const IfcAnnotationSurfaceOccurrence *obj) const {
    if (obj) {
        IfcAnnotationSurfaceOccurrence *clone = static_cast< IfcAnnotationSurfaceOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationSurfaceOccurrence(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationSymbolOccurrence *ReparentCopyOp::operator()(const IfcAnnotationSymbolOccurrence *obj) const {
    if (obj) {
        IfcAnnotationSymbolOccurrence *clone = static_cast< IfcAnnotationSymbolOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationSymbolOccurrence(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAnnotationTextOccurrence *ReparentCopyOp::operator()(const IfcAnnotationTextOccurrence *obj) const {
    if (obj) {
        IfcAnnotationTextOccurrence *clone = static_cast< IfcAnnotationTextOccurrence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAnnotationTextOccurrence(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcApplication *ReparentCopyOp::operator()(const IfcApplication *obj) const {
    if (obj) {
        IfcApplication *clone = static_cast< IfcApplication * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcApplication(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAppliedValue *ReparentCopyOp::operator()(const IfcAppliedValue *obj) const {
    if (obj) {
        IfcAppliedValue *clone = static_cast< IfcAppliedValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAppliedValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAppliedValueRelationship *ReparentCopyOp::operator()(const IfcAppliedValueRelationship *obj) const {
    if (obj) {
        IfcAppliedValueRelationship *clone = static_cast< IfcAppliedValueRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAppliedValueRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcApproval *ReparentCopyOp::operator()(const IfcApproval *obj) const {
    if (obj) {
        IfcApproval *clone = static_cast< IfcApproval * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcApproval(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcApprovalActorRelationship *ReparentCopyOp::operator()(const IfcApprovalActorRelationship *obj) const {
    if (obj) {
        IfcApprovalActorRelationship *clone = static_cast< IfcApprovalActorRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcApprovalActorRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcApprovalPropertyRelationship *ReparentCopyOp::operator()(const IfcApprovalPropertyRelationship *obj) const {
    if (obj) {
        IfcApprovalPropertyRelationship *clone = static_cast< IfcApprovalPropertyRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcApprovalPropertyRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcApprovalRelationship *ReparentCopyOp::operator()(const IfcApprovalRelationship *obj) const {
    if (obj) {
        IfcApprovalRelationship *clone = static_cast< IfcApprovalRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcApprovalRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcArbitraryClosedProfileDef *ReparentCopyOp::operator()(const IfcArbitraryClosedProfileDef *obj) const {
    if (obj) {
        IfcArbitraryClosedProfileDef *clone = static_cast< IfcArbitraryClosedProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcArbitraryClosedProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcArbitraryOpenProfileDef *ReparentCopyOp::operator()(const IfcArbitraryOpenProfileDef *obj) const {
    if (obj) {
        IfcArbitraryOpenProfileDef *clone = static_cast< IfcArbitraryOpenProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcArbitraryOpenProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcArbitraryProfileDefWithVoids *ReparentCopyOp::operator()(const IfcArbitraryProfileDefWithVoids *obj) const {
    if (obj) {
        IfcArbitraryProfileDefWithVoids *clone = static_cast< IfcArbitraryProfileDefWithVoids * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcArbitraryProfileDefWithVoids(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAsset *ReparentCopyOp::operator()(const IfcAsset *obj) const {
    if (obj) {
        IfcAsset *clone = static_cast< IfcAsset * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAsset(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAsymmetricIShapeProfileDef *ReparentCopyOp::operator()(const IfcAsymmetricIShapeProfileDef *obj) const {
    if (obj) {
        IfcAsymmetricIShapeProfileDef *clone = static_cast< IfcAsymmetricIShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAsymmetricIShapeProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAxis1Placement *ReparentCopyOp::operator()(const IfcAxis1Placement *obj) const {
    if (obj) {
        IfcAxis1Placement *clone = static_cast< IfcAxis1Placement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAxis1Placement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAxis2Placement2D *ReparentCopyOp::operator()(const IfcAxis2Placement2D *obj) const {
    if (obj) {
        IfcAxis2Placement2D *clone = static_cast< IfcAxis2Placement2D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAxis2Placement2D(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAxis2Placement3D *ReparentCopyOp::operator()(const IfcAxis2Placement3D *obj) const {
    if (obj) {
        IfcAxis2Placement3D *clone = static_cast< IfcAxis2Placement3D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAxis2Placement3D(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBSplineCurve *ReparentCopyOp::operator()(const IfcBSplineCurve *obj) const {
    if (obj) {
        IfcBSplineCurve *clone = static_cast< IfcBSplineCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBSplineCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBeam *ReparentCopyOp::operator()(const IfcBeam *obj) const {
    if (obj) {
        IfcBeam *clone = static_cast< IfcBeam * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBeam(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBeamType *ReparentCopyOp::operator()(const IfcBeamType *obj) const {
    if (obj) {
        IfcBeamType *clone = static_cast< IfcBeamType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBeamType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBezierCurve *ReparentCopyOp::operator()(const IfcBezierCurve *obj) const {
    if (obj) {
        IfcBezierCurve *clone = static_cast< IfcBezierCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBezierCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBlobTexture *ReparentCopyOp::operator()(const IfcBlobTexture *obj) const {
    if (obj) {
        IfcBlobTexture *clone = static_cast< IfcBlobTexture * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBlobTexture(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBlock *ReparentCopyOp::operator()(const IfcBlock *obj) const {
    if (obj) {
        IfcBlock *clone = static_cast< IfcBlock * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBlock(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoilerType *ReparentCopyOp::operator()(const IfcBoilerType *obj) const {
    if (obj) {
        IfcBoilerType *clone = static_cast< IfcBoilerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoilerType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBooleanClippingResult *ReparentCopyOp::operator()(const IfcBooleanClippingResult *obj) const {
    if (obj) {
        IfcBooleanClippingResult *clone = static_cast< IfcBooleanClippingResult * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBooleanClippingResult(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBooleanResult *ReparentCopyOp::operator()(const IfcBooleanResult *obj) const {
    if (obj) {
        IfcBooleanResult *clone = static_cast< IfcBooleanResult * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBooleanResult(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundaryCondition *ReparentCopyOp::operator()(const IfcBoundaryCondition *obj) const {
    if (obj) {
        IfcBoundaryCondition *clone = static_cast< IfcBoundaryCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundaryCondition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundaryEdgeCondition *ReparentCopyOp::operator()(const IfcBoundaryEdgeCondition *obj) const {
    if (obj) {
        IfcBoundaryEdgeCondition *clone = static_cast< IfcBoundaryEdgeCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundaryEdgeCondition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundaryFaceCondition *ReparentCopyOp::operator()(const IfcBoundaryFaceCondition *obj) const {
    if (obj) {
        IfcBoundaryFaceCondition *clone = static_cast< IfcBoundaryFaceCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundaryFaceCondition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundaryNodeCondition *ReparentCopyOp::operator()(const IfcBoundaryNodeCondition *obj) const {
    if (obj) {
        IfcBoundaryNodeCondition *clone = static_cast< IfcBoundaryNodeCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundaryNodeCondition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundaryNodeConditionWarping *ReparentCopyOp::operator()(const IfcBoundaryNodeConditionWarping *obj) const {
    if (obj) {
        IfcBoundaryNodeConditionWarping *clone = static_cast< IfcBoundaryNodeConditionWarping * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundaryNodeConditionWarping(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundedCurve *ReparentCopyOp::operator()(const IfcBoundedCurve *obj) const {
    if (obj) {
        IfcBoundedCurve *clone = static_cast< IfcBoundedCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundedCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundedSurface *ReparentCopyOp::operator()(const IfcBoundedSurface *obj) const {
    if (obj) {
        IfcBoundedSurface *clone = static_cast< IfcBoundedSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundedSurface(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoundingBox *ReparentCopyOp::operator()(const IfcBoundingBox *obj) const {
    if (obj) {
        IfcBoundingBox *clone = static_cast< IfcBoundingBox * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoundingBox(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBoxedHalfSpace *ReparentCopyOp::operator()(const IfcBoxedHalfSpace *obj) const {
    if (obj) {
        IfcBoxedHalfSpace *clone = static_cast< IfcBoxedHalfSpace * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBoxedHalfSpace(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuilding *ReparentCopyOp::operator()(const IfcBuilding *obj) const {
    if (obj) {
        IfcBuilding *clone = static_cast< IfcBuilding * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuilding(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingElement *ReparentCopyOp::operator()(const IfcBuildingElement *obj) const {
    if (obj) {
        IfcBuildingElement *clone = static_cast< IfcBuildingElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingElementPart *ReparentCopyOp::operator()(const IfcBuildingElementPart *obj) const {
    if (obj) {
        IfcBuildingElementPart *clone = static_cast< IfcBuildingElementPart * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingElementPart(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingElementProxy *ReparentCopyOp::operator()(const IfcBuildingElementProxy *obj) const {
    if (obj) {
        IfcBuildingElementProxy *clone = static_cast< IfcBuildingElementProxy * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingElementProxy(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingElementProxyType *ReparentCopyOp::operator()(const IfcBuildingElementProxyType *obj) const {
    if (obj) {
        IfcBuildingElementProxyType *clone = static_cast< IfcBuildingElementProxyType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingElementProxyType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingElementType *ReparentCopyOp::operator()(const IfcBuildingElementType *obj) const {
    if (obj) {
        IfcBuildingElementType *clone = static_cast< IfcBuildingElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingElementType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBuildingStorey *ReparentCopyOp::operator()(const IfcBuildingStorey *obj) const {
    if (obj) {
        IfcBuildingStorey *clone = static_cast< IfcBuildingStorey * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBuildingStorey(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCShapeProfileDef *ReparentCopyOp::operator()(const IfcCShapeProfileDef *obj) const {
    if (obj) {
        IfcCShapeProfileDef *clone = static_cast< IfcCShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCShapeProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCableCarrierFittingType *ReparentCopyOp::operator()(const IfcCableCarrierFittingType *obj) const {
    if (obj) {
        IfcCableCarrierFittingType *clone = static_cast< IfcCableCarrierFittingType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCableCarrierFittingType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCableCarrierSegmentType *ReparentCopyOp::operator()(const IfcCableCarrierSegmentType *obj) const {
    if (obj) {
        IfcCableCarrierSegmentType *clone = static_cast< IfcCableCarrierSegmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCableCarrierSegmentType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCableSegmentType *ReparentCopyOp::operator()(const IfcCableSegmentType *obj) const {
    if (obj) {
        IfcCableSegmentType *clone = static_cast< IfcCableSegmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCableSegmentType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCalendarDate *ReparentCopyOp::operator()(const IfcCalendarDate *obj) const {
    if (obj) {
        IfcCalendarDate *clone = static_cast< IfcCalendarDate * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCalendarDate(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianPoint *ReparentCopyOp::operator()(const IfcCartesianPoint *obj) const {
    if (obj) {
        IfcCartesianPoint *clone = static_cast< IfcCartesianPoint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianPoint(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianTransformationOperator *ReparentCopyOp::operator()(const IfcCartesianTransformationOperator *obj) const {
    if (obj) {
        IfcCartesianTransformationOperator *clone = static_cast< IfcCartesianTransformationOperator * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianTransformationOperator(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianTransformationOperator2D *ReparentCopyOp::operator()(const IfcCartesianTransformationOperator2D *obj) const {
    if (obj) {
        IfcCartesianTransformationOperator2D *clone = static_cast< IfcCartesianTransformationOperator2D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianTransformationOperator2D(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianTransformationOperator2DnonUniform *ReparentCopyOp::operator()(const IfcCartesianTransformationOperator2DnonUniform *obj) const {
    if (obj) {
        IfcCartesianTransformationOperator2DnonUniform *clone = static_cast< IfcCartesianTransformationOperator2DnonUniform * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianTransformationOperator2DnonUniform(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianTransformationOperator3D *ReparentCopyOp::operator()(const IfcCartesianTransformationOperator3D *obj) const {
    if (obj) {
        IfcCartesianTransformationOperator3D *clone = static_cast< IfcCartesianTransformationOperator3D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianTransformationOperator3D(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCartesianTransformationOperator3DnonUniform *ReparentCopyOp::operator()(const IfcCartesianTransformationOperator3DnonUniform *obj) const {
    if (obj) {
        IfcCartesianTransformationOperator3DnonUniform *clone = static_cast< IfcCartesianTransformationOperator3DnonUniform * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCartesianTransformationOperator3DnonUniform(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCenterLineProfileDef *ReparentCopyOp::operator()(const IfcCenterLineProfileDef *obj) const {
    if (obj) {
        IfcCenterLineProfileDef *clone = static_cast< IfcCenterLineProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCenterLineProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcChamferEdgeFeature *ReparentCopyOp::operator()(const IfcChamferEdgeFeature *obj) const {
    if (obj) {
        IfcChamferEdgeFeature *clone = static_cast< IfcChamferEdgeFeature * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcChamferEdgeFeature(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcChillerType *ReparentCopyOp::operator()(const IfcChillerType *obj) const {
    if (obj) {
        IfcChillerType *clone = static_cast< IfcChillerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcChillerType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCircle *ReparentCopyOp::operator()(const IfcCircle *obj) const {
    if (obj) {
        IfcCircle *clone = static_cast< IfcCircle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCircle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCircleHollowProfileDef *ReparentCopyOp::operator()(const IfcCircleHollowProfileDef *obj) const {
    if (obj) {
        IfcCircleHollowProfileDef *clone = static_cast< IfcCircleHollowProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCircleHollowProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCircleProfileDef *ReparentCopyOp::operator()(const IfcCircleProfileDef *obj) const {
    if (obj) {
        IfcCircleProfileDef *clone = static_cast< IfcCircleProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCircleProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassification *ReparentCopyOp::operator()(const IfcClassification *obj) const {
    if (obj) {
        IfcClassification *clone = static_cast< IfcClassification * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassification(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassificationItem *ReparentCopyOp::operator()(const IfcClassificationItem *obj) const {
    if (obj) {
        IfcClassificationItem *clone = static_cast< IfcClassificationItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassificationItem(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassificationItemRelationship *ReparentCopyOp::operator()(const IfcClassificationItemRelationship *obj) const {
    if (obj) {
        IfcClassificationItemRelationship *clone = static_cast< IfcClassificationItemRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassificationItemRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassificationNotation *ReparentCopyOp::operator()(const IfcClassificationNotation *obj) const {
    if (obj) {
        IfcClassificationNotation *clone = static_cast< IfcClassificationNotation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassificationNotation(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassificationNotationFacet *ReparentCopyOp::operator()(const IfcClassificationNotationFacet *obj) const {
    if (obj) {
        IfcClassificationNotationFacet *clone = static_cast< IfcClassificationNotationFacet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassificationNotationFacet(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClassificationReference *ReparentCopyOp::operator()(const IfcClassificationReference *obj) const {
    if (obj) {
        IfcClassificationReference *clone = static_cast< IfcClassificationReference * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClassificationReference(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClosedShell *ReparentCopyOp::operator()(const IfcClosedShell *obj) const {
    if (obj) {
        IfcClosedShell *clone = static_cast< IfcClosedShell * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClosedShell(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCoilType *ReparentCopyOp::operator()(const IfcCoilType *obj) const {
    if (obj) {
        IfcCoilType *clone = static_cast< IfcCoilType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCoilType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcColourRgb *ReparentCopyOp::operator()(const IfcColourRgb *obj) const {
    if (obj) {
        IfcColourRgb *clone = static_cast< IfcColourRgb * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcColourRgb(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcColourSpecification *ReparentCopyOp::operator()(const IfcColourSpecification *obj) const {
    if (obj) {
        IfcColourSpecification *clone = static_cast< IfcColourSpecification * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcColourSpecification(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcColumn *ReparentCopyOp::operator()(const IfcColumn *obj) const {
    if (obj) {
        IfcColumn *clone = static_cast< IfcColumn * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcColumn(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcColumnType *ReparentCopyOp::operator()(const IfcColumnType *obj) const {
    if (obj) {
        IfcColumnType *clone = static_cast< IfcColumnType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcColumnType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcComplexProperty *ReparentCopyOp::operator()(const IfcComplexProperty *obj) const {
    if (obj) {
        IfcComplexProperty *clone = static_cast< IfcComplexProperty * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcComplexProperty(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCompositeCurve *ReparentCopyOp::operator()(const IfcCompositeCurve *obj) const {
    if (obj) {
        IfcCompositeCurve *clone = static_cast< IfcCompositeCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCompositeCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCompositeCurveSegment *ReparentCopyOp::operator()(const IfcCompositeCurveSegment *obj) const {
    if (obj) {
        IfcCompositeCurveSegment *clone = static_cast< IfcCompositeCurveSegment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCompositeCurveSegment(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCompositeProfileDef *ReparentCopyOp::operator()(const IfcCompositeProfileDef *obj) const {
    if (obj) {
        IfcCompositeProfileDef *clone = static_cast< IfcCompositeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCompositeProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCompressorType *ReparentCopyOp::operator()(const IfcCompressorType *obj) const {
    if (obj) {
        IfcCompressorType *clone = static_cast< IfcCompressorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCompressorType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCondenserType *ReparentCopyOp::operator()(const IfcCondenserType *obj) const {
    if (obj) {
        IfcCondenserType *clone = static_cast< IfcCondenserType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCondenserType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCondition *ReparentCopyOp::operator()(const IfcCondition *obj) const {
    if (obj) {
        IfcCondition *clone = static_cast< IfcCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCondition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConditionCriterion *ReparentCopyOp::operator()(const IfcConditionCriterion *obj) const {
    if (obj) {
        IfcConditionCriterion *clone = static_cast< IfcConditionCriterion * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConditionCriterion(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConic *ReparentCopyOp::operator()(const IfcConic *obj) const {
    if (obj) {
        IfcConic *clone = static_cast< IfcConic * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConic(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectedFaceSet *ReparentCopyOp::operator()(const IfcConnectedFaceSet *obj) const {
    if (obj) {
        IfcConnectedFaceSet *clone = static_cast< IfcConnectedFaceSet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectedFaceSet(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionCurveGeometry *ReparentCopyOp::operator()(const IfcConnectionCurveGeometry *obj) const {
    if (obj) {
        IfcConnectionCurveGeometry *clone = static_cast< IfcConnectionCurveGeometry * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionCurveGeometry(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionGeometry *ReparentCopyOp::operator()(const IfcConnectionGeometry *obj) const {
    if (obj) {
        IfcConnectionGeometry *clone = static_cast< IfcConnectionGeometry * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionGeometry(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionPointEccentricity *ReparentCopyOp::operator()(const IfcConnectionPointEccentricity *obj) const {
    if (obj) {
        IfcConnectionPointEccentricity *clone = static_cast< IfcConnectionPointEccentricity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionPointEccentricity(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionPointGeometry *ReparentCopyOp::operator()(const IfcConnectionPointGeometry *obj) const {
    if (obj) {
        IfcConnectionPointGeometry *clone = static_cast< IfcConnectionPointGeometry * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionPointGeometry(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionPortGeometry *ReparentCopyOp::operator()(const IfcConnectionPortGeometry *obj) const {
    if (obj) {
        IfcConnectionPortGeometry *clone = static_cast< IfcConnectionPortGeometry * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionPortGeometry(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConnectionSurfaceGeometry *ReparentCopyOp::operator()(const IfcConnectionSurfaceGeometry *obj) const {
    if (obj) {
        IfcConnectionSurfaceGeometry *clone = static_cast< IfcConnectionSurfaceGeometry * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConnectionSurfaceGeometry(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstraint *ReparentCopyOp::operator()(const IfcConstraint *obj) const {
    if (obj) {
        IfcConstraint *clone = static_cast< IfcConstraint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstraint(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstraintAggregationRelationship *ReparentCopyOp::operator()(const IfcConstraintAggregationRelationship *obj) const {
    if (obj) {
        IfcConstraintAggregationRelationship *clone = static_cast< IfcConstraintAggregationRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstraintAggregationRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstraintClassificationRelationship *ReparentCopyOp::operator()(const IfcConstraintClassificationRelationship *obj) const {
    if (obj) {
        IfcConstraintClassificationRelationship *clone = static_cast< IfcConstraintClassificationRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstraintClassificationRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstraintRelationship *ReparentCopyOp::operator()(const IfcConstraintRelationship *obj) const {
    if (obj) {
        IfcConstraintRelationship *clone = static_cast< IfcConstraintRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstraintRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstructionEquipmentResource *ReparentCopyOp::operator()(const IfcConstructionEquipmentResource *obj) const {
    if (obj) {
        IfcConstructionEquipmentResource *clone = static_cast< IfcConstructionEquipmentResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstructionEquipmentResource(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstructionMaterialResource *ReparentCopyOp::operator()(const IfcConstructionMaterialResource *obj) const {
    if (obj) {
        IfcConstructionMaterialResource *clone = static_cast< IfcConstructionMaterialResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstructionMaterialResource(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstructionProductResource *ReparentCopyOp::operator()(const IfcConstructionProductResource *obj) const {
    if (obj) {
        IfcConstructionProductResource *clone = static_cast< IfcConstructionProductResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstructionProductResource(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConstructionResource *ReparentCopyOp::operator()(const IfcConstructionResource *obj) const {
    if (obj) {
        IfcConstructionResource *clone = static_cast< IfcConstructionResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConstructionResource(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcContextDependentUnit *ReparentCopyOp::operator()(const IfcContextDependentUnit *obj) const {
    if (obj) {
        IfcContextDependentUnit *clone = static_cast< IfcContextDependentUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcContextDependentUnit(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcControl *ReparentCopyOp::operator()(const IfcControl *obj) const {
    if (obj) {
        IfcControl *clone = static_cast< IfcControl * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcControl(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcControllerType *ReparentCopyOp::operator()(const IfcControllerType *obj) const {
    if (obj) {
        IfcControllerType *clone = static_cast< IfcControllerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcControllerType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcConversionBasedUnit *ReparentCopyOp::operator()(const IfcConversionBasedUnit *obj) const {
    if (obj) {
        IfcConversionBasedUnit *clone = static_cast< IfcConversionBasedUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcConversionBasedUnit(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCooledBeamType *ReparentCopyOp::operator()(const IfcCooledBeamType *obj) const {
    if (obj) {
        IfcCooledBeamType *clone = static_cast< IfcCooledBeamType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCooledBeamType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCoolingTowerType *ReparentCopyOp::operator()(const IfcCoolingTowerType *obj) const {
    if (obj) {
        IfcCoolingTowerType *clone = static_cast< IfcCoolingTowerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCoolingTowerType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCoordinatedUniversalTimeOffset *ReparentCopyOp::operator()(const IfcCoordinatedUniversalTimeOffset *obj) const {
    if (obj) {
        IfcCoordinatedUniversalTimeOffset *clone = static_cast< IfcCoordinatedUniversalTimeOffset * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCoordinatedUniversalTimeOffset(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCostItem *ReparentCopyOp::operator()(const IfcCostItem *obj) const {
    if (obj) {
        IfcCostItem *clone = static_cast< IfcCostItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCostItem(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCostSchedule *ReparentCopyOp::operator()(const IfcCostSchedule *obj) const {
    if (obj) {
        IfcCostSchedule *clone = static_cast< IfcCostSchedule * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCostSchedule(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCostValue *ReparentCopyOp::operator()(const IfcCostValue *obj) const {
    if (obj) {
        IfcCostValue *clone = static_cast< IfcCostValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCostValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCovering *ReparentCopyOp::operator()(const IfcCovering *obj) const {
    if (obj) {
        IfcCovering *clone = static_cast< IfcCovering * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCovering(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCoveringType *ReparentCopyOp::operator()(const IfcCoveringType *obj) const {
    if (obj) {
        IfcCoveringType *clone = static_cast< IfcCoveringType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCoveringType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCraneRailAShapeProfileDef *ReparentCopyOp::operator()(const IfcCraneRailAShapeProfileDef *obj) const {
    if (obj) {
        IfcCraneRailAShapeProfileDef *clone = static_cast< IfcCraneRailAShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCraneRailAShapeProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCraneRailFShapeProfileDef *ReparentCopyOp::operator()(const IfcCraneRailFShapeProfileDef *obj) const {
    if (obj) {
        IfcCraneRailFShapeProfileDef *clone = static_cast< IfcCraneRailFShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCraneRailFShapeProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCrewResource *ReparentCopyOp::operator()(const IfcCrewResource *obj) const {
    if (obj) {
        IfcCrewResource *clone = static_cast< IfcCrewResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCrewResource(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCsgPrimitive3D *ReparentCopyOp::operator()(const IfcCsgPrimitive3D *obj) const {
    if (obj) {
        IfcCsgPrimitive3D *clone = static_cast< IfcCsgPrimitive3D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCsgPrimitive3D(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCsgSolid *ReparentCopyOp::operator()(const IfcCsgSolid *obj) const {
    if (obj) {
        IfcCsgSolid *clone = static_cast< IfcCsgSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCsgSolid(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurrencyRelationship *ReparentCopyOp::operator()(const IfcCurrencyRelationship *obj) const {
    if (obj) {
        IfcCurrencyRelationship *clone = static_cast< IfcCurrencyRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurrencyRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurtainWall *ReparentCopyOp::operator()(const IfcCurtainWall *obj) const {
    if (obj) {
        IfcCurtainWall *clone = static_cast< IfcCurtainWall * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurtainWall(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurtainWallType *ReparentCopyOp::operator()(const IfcCurtainWallType *obj) const {
    if (obj) {
        IfcCurtainWallType *clone = static_cast< IfcCurtainWallType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurtainWallType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurve *ReparentCopyOp::operator()(const IfcCurve *obj) const {
    if (obj) {
        IfcCurve *clone = static_cast< IfcCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurveBoundedPlane *ReparentCopyOp::operator()(const IfcCurveBoundedPlane *obj) const {
    if (obj) {
        IfcCurveBoundedPlane *clone = static_cast< IfcCurveBoundedPlane * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurveBoundedPlane(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurveStyle *ReparentCopyOp::operator()(const IfcCurveStyle *obj) const {
    if (obj) {
        IfcCurveStyle *clone = static_cast< IfcCurveStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurveStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurveStyleFont *ReparentCopyOp::operator()(const IfcCurveStyleFont *obj) const {
    if (obj) {
        IfcCurveStyleFont *clone = static_cast< IfcCurveStyleFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurveStyleFont(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurveStyleFontAndScaling *ReparentCopyOp::operator()(const IfcCurveStyleFontAndScaling *obj) const {
    if (obj) {
        IfcCurveStyleFontAndScaling *clone = static_cast< IfcCurveStyleFontAndScaling * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurveStyleFontAndScaling(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCurveStyleFontPattern *ReparentCopyOp::operator()(const IfcCurveStyleFontPattern *obj) const {
    if (obj) {
        IfcCurveStyleFontPattern *clone = static_cast< IfcCurveStyleFontPattern * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCurveStyleFontPattern(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDamperType *ReparentCopyOp::operator()(const IfcDamperType *obj) const {
    if (obj) {
        IfcDamperType *clone = static_cast< IfcDamperType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDamperType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDateAndTime *ReparentCopyOp::operator()(const IfcDateAndTime *obj) const {
    if (obj) {
        IfcDateAndTime *clone = static_cast< IfcDateAndTime * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDateAndTime(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDefinedSymbol *ReparentCopyOp::operator()(const IfcDefinedSymbol *obj) const {
    if (obj) {
        IfcDefinedSymbol *clone = static_cast< IfcDefinedSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDefinedSymbol(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDerivedProfileDef *ReparentCopyOp::operator()(const IfcDerivedProfileDef *obj) const {
    if (obj) {
        IfcDerivedProfileDef *clone = static_cast< IfcDerivedProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDerivedProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDerivedUnit *ReparentCopyOp::operator()(const IfcDerivedUnit *obj) const {
    if (obj) {
        IfcDerivedUnit *clone = static_cast< IfcDerivedUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDerivedUnit(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDerivedUnitElement *ReparentCopyOp::operator()(const IfcDerivedUnitElement *obj) const {
    if (obj) {
        IfcDerivedUnitElement *clone = static_cast< IfcDerivedUnitElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDerivedUnitElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDiameterDimension *ReparentCopyOp::operator()(const IfcDiameterDimension *obj) const {
    if (obj) {
        IfcDiameterDimension *clone = static_cast< IfcDiameterDimension * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDiameterDimension(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionCalloutRelationship *ReparentCopyOp::operator()(const IfcDimensionCalloutRelationship *obj) const {
    if (obj) {
        IfcDimensionCalloutRelationship *clone = static_cast< IfcDimensionCalloutRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionCalloutRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionCurve *ReparentCopyOp::operator()(const IfcDimensionCurve *obj) const {
    if (obj) {
        IfcDimensionCurve *clone = static_cast< IfcDimensionCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionCurveDirectedCallout *ReparentCopyOp::operator()(const IfcDimensionCurveDirectedCallout *obj) const {
    if (obj) {
        IfcDimensionCurveDirectedCallout *clone = static_cast< IfcDimensionCurveDirectedCallout * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionCurveDirectedCallout(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionCurveTerminator *ReparentCopyOp::operator()(const IfcDimensionCurveTerminator *obj) const {
    if (obj) {
        IfcDimensionCurveTerminator *clone = static_cast< IfcDimensionCurveTerminator * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionCurveTerminator(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionPair *ReparentCopyOp::operator()(const IfcDimensionPair *obj) const {
    if (obj) {
        IfcDimensionPair *clone = static_cast< IfcDimensionPair * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionPair(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDimensionalExponents *ReparentCopyOp::operator()(const IfcDimensionalExponents *obj) const {
    if (obj) {
        IfcDimensionalExponents *clone = static_cast< IfcDimensionalExponents * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDimensionalExponents(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDirection *ReparentCopyOp::operator()(const IfcDirection *obj) const {
    if (obj) {
        IfcDirection *clone = static_cast< IfcDirection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDirection(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDiscreteAccessory *ReparentCopyOp::operator()(const IfcDiscreteAccessory *obj) const {
    if (obj) {
        IfcDiscreteAccessory *clone = static_cast< IfcDiscreteAccessory * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDiscreteAccessory(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDiscreteAccessoryType *ReparentCopyOp::operator()(const IfcDiscreteAccessoryType *obj) const {
    if (obj) {
        IfcDiscreteAccessoryType *clone = static_cast< IfcDiscreteAccessoryType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDiscreteAccessoryType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionChamberElement *ReparentCopyOp::operator()(const IfcDistributionChamberElement *obj) const {
    if (obj) {
        IfcDistributionChamberElement *clone = static_cast< IfcDistributionChamberElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionChamberElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionChamberElementType *ReparentCopyOp::operator()(const IfcDistributionChamberElementType *obj) const {
    if (obj) {
        IfcDistributionChamberElementType *clone = static_cast< IfcDistributionChamberElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionChamberElementType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionControlElement *ReparentCopyOp::operator()(const IfcDistributionControlElement *obj) const {
    if (obj) {
        IfcDistributionControlElement *clone = static_cast< IfcDistributionControlElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionControlElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionControlElementType *ReparentCopyOp::operator()(const IfcDistributionControlElementType *obj) const {
    if (obj) {
        IfcDistributionControlElementType *clone = static_cast< IfcDistributionControlElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionControlElementType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionElement *ReparentCopyOp::operator()(const IfcDistributionElement *obj) const {
    if (obj) {
        IfcDistributionElement *clone = static_cast< IfcDistributionElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionElementType *ReparentCopyOp::operator()(const IfcDistributionElementType *obj) const {
    if (obj) {
        IfcDistributionElementType *clone = static_cast< IfcDistributionElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionElementType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionFlowElement *ReparentCopyOp::operator()(const IfcDistributionFlowElement *obj) const {
    if (obj) {
        IfcDistributionFlowElement *clone = static_cast< IfcDistributionFlowElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionFlowElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionFlowElementType *ReparentCopyOp::operator()(const IfcDistributionFlowElementType *obj) const {
    if (obj) {
        IfcDistributionFlowElementType *clone = static_cast< IfcDistributionFlowElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionFlowElementType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDistributionPort *ReparentCopyOp::operator()(const IfcDistributionPort *obj) const {
    if (obj) {
        IfcDistributionPort *clone = static_cast< IfcDistributionPort * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDistributionPort(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDocumentElectronicFormat *ReparentCopyOp::operator()(const IfcDocumentElectronicFormat *obj) const {
    if (obj) {
        IfcDocumentElectronicFormat *clone = static_cast< IfcDocumentElectronicFormat * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDocumentElectronicFormat(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDocumentInformation *ReparentCopyOp::operator()(const IfcDocumentInformation *obj) const {
    if (obj) {
        IfcDocumentInformation *clone = static_cast< IfcDocumentInformation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDocumentInformation(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDocumentInformationRelationship *ReparentCopyOp::operator()(const IfcDocumentInformationRelationship *obj) const {
    if (obj) {
        IfcDocumentInformationRelationship *clone = static_cast< IfcDocumentInformationRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDocumentInformationRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDocumentReference *ReparentCopyOp::operator()(const IfcDocumentReference *obj) const {
    if (obj) {
        IfcDocumentReference *clone = static_cast< IfcDocumentReference * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDocumentReference(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDoor *ReparentCopyOp::operator()(const IfcDoor *obj) const {
    if (obj) {
        IfcDoor *clone = static_cast< IfcDoor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDoor(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDoorLiningProperties *ReparentCopyOp::operator()(const IfcDoorLiningProperties *obj) const {
    if (obj) {
        IfcDoorLiningProperties *clone = static_cast< IfcDoorLiningProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDoorLiningProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDoorPanelProperties *ReparentCopyOp::operator()(const IfcDoorPanelProperties *obj) const {
    if (obj) {
        IfcDoorPanelProperties *clone = static_cast< IfcDoorPanelProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDoorPanelProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDoorStyle *ReparentCopyOp::operator()(const IfcDoorStyle *obj) const {
    if (obj) {
        IfcDoorStyle *clone = static_cast< IfcDoorStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDoorStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDraughtingCallout *ReparentCopyOp::operator()(const IfcDraughtingCallout *obj) const {
    if (obj) {
        IfcDraughtingCallout *clone = static_cast< IfcDraughtingCallout * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDraughtingCallout(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDraughtingCalloutRelationship *ReparentCopyOp::operator()(const IfcDraughtingCalloutRelationship *obj) const {
    if (obj) {
        IfcDraughtingCalloutRelationship *clone = static_cast< IfcDraughtingCalloutRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDraughtingCalloutRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDraughtingPreDefinedColour *ReparentCopyOp::operator()(const IfcDraughtingPreDefinedColour *obj) const {
    if (obj) {
        IfcDraughtingPreDefinedColour *clone = static_cast< IfcDraughtingPreDefinedColour * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDraughtingPreDefinedColour(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDraughtingPreDefinedCurveFont *ReparentCopyOp::operator()(const IfcDraughtingPreDefinedCurveFont *obj) const {
    if (obj) {
        IfcDraughtingPreDefinedCurveFont *clone = static_cast< IfcDraughtingPreDefinedCurveFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDraughtingPreDefinedCurveFont(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDraughtingPreDefinedTextFont *ReparentCopyOp::operator()(const IfcDraughtingPreDefinedTextFont *obj) const {
    if (obj) {
        IfcDraughtingPreDefinedTextFont *clone = static_cast< IfcDraughtingPreDefinedTextFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDraughtingPreDefinedTextFont(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDuctFittingType *ReparentCopyOp::operator()(const IfcDuctFittingType *obj) const {
    if (obj) {
        IfcDuctFittingType *clone = static_cast< IfcDuctFittingType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDuctFittingType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDuctSegmentType *ReparentCopyOp::operator()(const IfcDuctSegmentType *obj) const {
    if (obj) {
        IfcDuctSegmentType *clone = static_cast< IfcDuctSegmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDuctSegmentType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcDuctSilencerType *ReparentCopyOp::operator()(const IfcDuctSilencerType *obj) const {
    if (obj) {
        IfcDuctSilencerType *clone = static_cast< IfcDuctSilencerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcDuctSilencerType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEdge *ReparentCopyOp::operator()(const IfcEdge *obj) const {
    if (obj) {
        IfcEdge *clone = static_cast< IfcEdge * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEdge(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEdgeCurve *ReparentCopyOp::operator()(const IfcEdgeCurve *obj) const {
    if (obj) {
        IfcEdgeCurve *clone = static_cast< IfcEdgeCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEdgeCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEdgeFeature *ReparentCopyOp::operator()(const IfcEdgeFeature *obj) const {
    if (obj) {
        IfcEdgeFeature *clone = static_cast< IfcEdgeFeature * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEdgeFeature(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEdgeLoop *ReparentCopyOp::operator()(const IfcEdgeLoop *obj) const {
    if (obj) {
        IfcEdgeLoop *clone = static_cast< IfcEdgeLoop * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEdgeLoop(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricApplianceType *ReparentCopyOp::operator()(const IfcElectricApplianceType *obj) const {
    if (obj) {
        IfcElectricApplianceType *clone = static_cast< IfcElectricApplianceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricApplianceType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricDistributionPoint *ReparentCopyOp::operator()(const IfcElectricDistributionPoint *obj) const {
    if (obj) {
        IfcElectricDistributionPoint *clone = static_cast< IfcElectricDistributionPoint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricDistributionPoint(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricFlowStorageDeviceType *ReparentCopyOp::operator()(const IfcElectricFlowStorageDeviceType *obj) const {
    if (obj) {
        IfcElectricFlowStorageDeviceType *clone = static_cast< IfcElectricFlowStorageDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricFlowStorageDeviceType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricGeneratorType *ReparentCopyOp::operator()(const IfcElectricGeneratorType *obj) const {
    if (obj) {
        IfcElectricGeneratorType *clone = static_cast< IfcElectricGeneratorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricGeneratorType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricHeaterType *ReparentCopyOp::operator()(const IfcElectricHeaterType *obj) const {
    if (obj) {
        IfcElectricHeaterType *clone = static_cast< IfcElectricHeaterType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricHeaterType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricMotorType *ReparentCopyOp::operator()(const IfcElectricMotorType *obj) const {
    if (obj) {
        IfcElectricMotorType *clone = static_cast< IfcElectricMotorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricMotorType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricTimeControlType *ReparentCopyOp::operator()(const IfcElectricTimeControlType *obj) const {
    if (obj) {
        IfcElectricTimeControlType *clone = static_cast< IfcElectricTimeControlType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricTimeControlType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricalBaseProperties *ReparentCopyOp::operator()(const IfcElectricalBaseProperties *obj) const {
    if (obj) {
        IfcElectricalBaseProperties *clone = static_cast< IfcElectricalBaseProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricalBaseProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricalCircuit *ReparentCopyOp::operator()(const IfcElectricalCircuit *obj) const {
    if (obj) {
        IfcElectricalCircuit *clone = static_cast< IfcElectricalCircuit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricalCircuit(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElectricalElement *ReparentCopyOp::operator()(const IfcElectricalElement *obj) const {
    if (obj) {
        IfcElectricalElement *clone = static_cast< IfcElectricalElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElectricalElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElement *ReparentCopyOp::operator()(const IfcElement *obj) const {
    if (obj) {
        IfcElement *clone = static_cast< IfcElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementAssembly *ReparentCopyOp::operator()(const IfcElementAssembly *obj) const {
    if (obj) {
        IfcElementAssembly *clone = static_cast< IfcElementAssembly * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementAssembly(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementComponent *ReparentCopyOp::operator()(const IfcElementComponent *obj) const {
    if (obj) {
        IfcElementComponent *clone = static_cast< IfcElementComponent * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementComponent(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementComponentType *ReparentCopyOp::operator()(const IfcElementComponentType *obj) const {
    if (obj) {
        IfcElementComponentType *clone = static_cast< IfcElementComponentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementComponentType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementQuantity *ReparentCopyOp::operator()(const IfcElementQuantity *obj) const {
    if (obj) {
        IfcElementQuantity *clone = static_cast< IfcElementQuantity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementQuantity(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementType *ReparentCopyOp::operator()(const IfcElementType *obj) const {
    if (obj) {
        IfcElementType *clone = static_cast< IfcElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementarySurface *ReparentCopyOp::operator()(const IfcElementarySurface *obj) const {
    if (obj) {
        IfcElementarySurface *clone = static_cast< IfcElementarySurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementarySurface(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEllipse *ReparentCopyOp::operator()(const IfcEllipse *obj) const {
    if (obj) {
        IfcEllipse *clone = static_cast< IfcEllipse * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEllipse(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEllipseProfileDef *ReparentCopyOp::operator()(const IfcEllipseProfileDef *obj) const {
    if (obj) {
        IfcEllipseProfileDef *clone = static_cast< IfcEllipseProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEllipseProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEnergyConversionDevice *ReparentCopyOp::operator()(const IfcEnergyConversionDevice *obj) const {
    if (obj) {
        IfcEnergyConversionDevice *clone = static_cast< IfcEnergyConversionDevice * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEnergyConversionDevice(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEnergyConversionDeviceType *ReparentCopyOp::operator()(const IfcEnergyConversionDeviceType *obj) const {
    if (obj) {
        IfcEnergyConversionDeviceType *clone = static_cast< IfcEnergyConversionDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEnergyConversionDeviceType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEnergyProperties *ReparentCopyOp::operator()(const IfcEnergyProperties *obj) const {
    if (obj) {
        IfcEnergyProperties *clone = static_cast< IfcEnergyProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEnergyProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEnvironmentalImpactValue *ReparentCopyOp::operator()(const IfcEnvironmentalImpactValue *obj) const {
    if (obj) {
        IfcEnvironmentalImpactValue *clone = static_cast< IfcEnvironmentalImpactValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEnvironmentalImpactValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEquipmentElement *ReparentCopyOp::operator()(const IfcEquipmentElement *obj) const {
    if (obj) {
        IfcEquipmentElement *clone = static_cast< IfcEquipmentElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEquipmentElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEquipmentStandard *ReparentCopyOp::operator()(const IfcEquipmentStandard *obj) const {
    if (obj) {
        IfcEquipmentStandard *clone = static_cast< IfcEquipmentStandard * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEquipmentStandard(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEvaporativeCoolerType *ReparentCopyOp::operator()(const IfcEvaporativeCoolerType *obj) const {
    if (obj) {
        IfcEvaporativeCoolerType *clone = static_cast< IfcEvaporativeCoolerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEvaporativeCoolerType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcEvaporatorType *ReparentCopyOp::operator()(const IfcEvaporatorType *obj) const {
    if (obj) {
        IfcEvaporatorType *clone = static_cast< IfcEvaporatorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcEvaporatorType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExtendedMaterialProperties *ReparentCopyOp::operator()(const IfcExtendedMaterialProperties *obj) const {
    if (obj) {
        IfcExtendedMaterialProperties *clone = static_cast< IfcExtendedMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExtendedMaterialProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExternalReference *ReparentCopyOp::operator()(const IfcExternalReference *obj) const {
    if (obj) {
        IfcExternalReference *clone = static_cast< IfcExternalReference * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExternalReference(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExternallyDefinedHatchStyle *ReparentCopyOp::operator()(const IfcExternallyDefinedHatchStyle *obj) const {
    if (obj) {
        IfcExternallyDefinedHatchStyle *clone = static_cast< IfcExternallyDefinedHatchStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExternallyDefinedHatchStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExternallyDefinedSurfaceStyle *ReparentCopyOp::operator()(const IfcExternallyDefinedSurfaceStyle *obj) const {
    if (obj) {
        IfcExternallyDefinedSurfaceStyle *clone = static_cast< IfcExternallyDefinedSurfaceStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExternallyDefinedSurfaceStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExternallyDefinedSymbol *ReparentCopyOp::operator()(const IfcExternallyDefinedSymbol *obj) const {
    if (obj) {
        IfcExternallyDefinedSymbol *clone = static_cast< IfcExternallyDefinedSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExternallyDefinedSymbol(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExternallyDefinedTextFont *ReparentCopyOp::operator()(const IfcExternallyDefinedTextFont *obj) const {
    if (obj) {
        IfcExternallyDefinedTextFont *clone = static_cast< IfcExternallyDefinedTextFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExternallyDefinedTextFont(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcExtrudedAreaSolid *ReparentCopyOp::operator()(const IfcExtrudedAreaSolid *obj) const {
    if (obj) {
        IfcExtrudedAreaSolid *clone = static_cast< IfcExtrudedAreaSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcExtrudedAreaSolid(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFace *ReparentCopyOp::operator()(const IfcFace *obj) const {
    if (obj) {
        IfcFace *clone = static_cast< IfcFace * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFace(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFaceBasedSurfaceModel *ReparentCopyOp::operator()(const IfcFaceBasedSurfaceModel *obj) const {
    if (obj) {
        IfcFaceBasedSurfaceModel *clone = static_cast< IfcFaceBasedSurfaceModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFaceBasedSurfaceModel(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFaceBound *ReparentCopyOp::operator()(const IfcFaceBound *obj) const {
    if (obj) {
        IfcFaceBound *clone = static_cast< IfcFaceBound * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFaceBound(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFaceOuterBound *ReparentCopyOp::operator()(const IfcFaceOuterBound *obj) const {
    if (obj) {
        IfcFaceOuterBound *clone = static_cast< IfcFaceOuterBound * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFaceOuterBound(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFaceSurface *ReparentCopyOp::operator()(const IfcFaceSurface *obj) const {
    if (obj) {
        IfcFaceSurface *clone = static_cast< IfcFaceSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFaceSurface(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFacetedBrep *ReparentCopyOp::operator()(const IfcFacetedBrep *obj) const {
    if (obj) {
        IfcFacetedBrep *clone = static_cast< IfcFacetedBrep * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFacetedBrep(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFacetedBrepWithVoids *ReparentCopyOp::operator()(const IfcFacetedBrepWithVoids *obj) const {
    if (obj) {
        IfcFacetedBrepWithVoids *clone = static_cast< IfcFacetedBrepWithVoids * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFacetedBrepWithVoids(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFailureConnectionCondition *ReparentCopyOp::operator()(const IfcFailureConnectionCondition *obj) const {
    if (obj) {
        IfcFailureConnectionCondition *clone = static_cast< IfcFailureConnectionCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFailureConnectionCondition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFanType *ReparentCopyOp::operator()(const IfcFanType *obj) const {
    if (obj) {
        IfcFanType *clone = static_cast< IfcFanType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFanType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFastener *ReparentCopyOp::operator()(const IfcFastener *obj) const {
    if (obj) {
        IfcFastener *clone = static_cast< IfcFastener * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFastener(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFastenerType *ReparentCopyOp::operator()(const IfcFastenerType *obj) const {
    if (obj) {
        IfcFastenerType *clone = static_cast< IfcFastenerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFastenerType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFeatureElement *ReparentCopyOp::operator()(const IfcFeatureElement *obj) const {
    if (obj) {
        IfcFeatureElement *clone = static_cast< IfcFeatureElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFeatureElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFeatureElementAddition *ReparentCopyOp::operator()(const IfcFeatureElementAddition *obj) const {
    if (obj) {
        IfcFeatureElementAddition *clone = static_cast< IfcFeatureElementAddition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFeatureElementAddition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFeatureElementSubtraction *ReparentCopyOp::operator()(const IfcFeatureElementSubtraction *obj) const {
    if (obj) {
        IfcFeatureElementSubtraction *clone = static_cast< IfcFeatureElementSubtraction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFeatureElementSubtraction(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFillAreaStyle *ReparentCopyOp::operator()(const IfcFillAreaStyle *obj) const {
    if (obj) {
        IfcFillAreaStyle *clone = static_cast< IfcFillAreaStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFillAreaStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFillAreaStyleHatching *ReparentCopyOp::operator()(const IfcFillAreaStyleHatching *obj) const {
    if (obj) {
        IfcFillAreaStyleHatching *clone = static_cast< IfcFillAreaStyleHatching * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFillAreaStyleHatching(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFillAreaStyleTileSymbolWithStyle *ReparentCopyOp::operator()(const IfcFillAreaStyleTileSymbolWithStyle *obj) const {
    if (obj) {
        IfcFillAreaStyleTileSymbolWithStyle *clone = static_cast< IfcFillAreaStyleTileSymbolWithStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFillAreaStyleTileSymbolWithStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFillAreaStyleTiles *ReparentCopyOp::operator()(const IfcFillAreaStyleTiles *obj) const {
    if (obj) {
        IfcFillAreaStyleTiles *clone = static_cast< IfcFillAreaStyleTiles * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFillAreaStyleTiles(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFilterType *ReparentCopyOp::operator()(const IfcFilterType *obj) const {
    if (obj) {
        IfcFilterType *clone = static_cast< IfcFilterType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFilterType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFireSuppressionTerminalType *ReparentCopyOp::operator()(const IfcFireSuppressionTerminalType *obj) const {
    if (obj) {
        IfcFireSuppressionTerminalType *clone = static_cast< IfcFireSuppressionTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFireSuppressionTerminalType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowController *ReparentCopyOp::operator()(const IfcFlowController *obj) const {
    if (obj) {
        IfcFlowController *clone = static_cast< IfcFlowController * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowController(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowControllerType *ReparentCopyOp::operator()(const IfcFlowControllerType *obj) const {
    if (obj) {
        IfcFlowControllerType *clone = static_cast< IfcFlowControllerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowControllerType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowFitting *ReparentCopyOp::operator()(const IfcFlowFitting *obj) const {
    if (obj) {
        IfcFlowFitting *clone = static_cast< IfcFlowFitting * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowFitting(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowFittingType *ReparentCopyOp::operator()(const IfcFlowFittingType *obj) const {
    if (obj) {
        IfcFlowFittingType *clone = static_cast< IfcFlowFittingType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowFittingType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowInstrumentType *ReparentCopyOp::operator()(const IfcFlowInstrumentType *obj) const {
    if (obj) {
        IfcFlowInstrumentType *clone = static_cast< IfcFlowInstrumentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowInstrumentType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowMeterType *ReparentCopyOp::operator()(const IfcFlowMeterType *obj) const {
    if (obj) {
        IfcFlowMeterType *clone = static_cast< IfcFlowMeterType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowMeterType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowMovingDevice *ReparentCopyOp::operator()(const IfcFlowMovingDevice *obj) const {
    if (obj) {
        IfcFlowMovingDevice *clone = static_cast< IfcFlowMovingDevice * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowMovingDevice(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowMovingDeviceType *ReparentCopyOp::operator()(const IfcFlowMovingDeviceType *obj) const {
    if (obj) {
        IfcFlowMovingDeviceType *clone = static_cast< IfcFlowMovingDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowMovingDeviceType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowSegment *ReparentCopyOp::operator()(const IfcFlowSegment *obj) const {
    if (obj) {
        IfcFlowSegment *clone = static_cast< IfcFlowSegment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowSegment(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowSegmentType *ReparentCopyOp::operator()(const IfcFlowSegmentType *obj) const {
    if (obj) {
        IfcFlowSegmentType *clone = static_cast< IfcFlowSegmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowSegmentType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowStorageDevice *ReparentCopyOp::operator()(const IfcFlowStorageDevice *obj) const {
    if (obj) {
        IfcFlowStorageDevice *clone = static_cast< IfcFlowStorageDevice * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowStorageDevice(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowStorageDeviceType *ReparentCopyOp::operator()(const IfcFlowStorageDeviceType *obj) const {
    if (obj) {
        IfcFlowStorageDeviceType *clone = static_cast< IfcFlowStorageDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowStorageDeviceType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowTerminal *ReparentCopyOp::operator()(const IfcFlowTerminal *obj) const {
    if (obj) {
        IfcFlowTerminal *clone = static_cast< IfcFlowTerminal * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowTerminal(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowTerminalType *ReparentCopyOp::operator()(const IfcFlowTerminalType *obj) const {
    if (obj) {
        IfcFlowTerminalType *clone = static_cast< IfcFlowTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowTerminalType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowTreatmentDevice *ReparentCopyOp::operator()(const IfcFlowTreatmentDevice *obj) const {
    if (obj) {
        IfcFlowTreatmentDevice *clone = static_cast< IfcFlowTreatmentDevice * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowTreatmentDevice(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFlowTreatmentDeviceType *ReparentCopyOp::operator()(const IfcFlowTreatmentDeviceType *obj) const {
    if (obj) {
        IfcFlowTreatmentDeviceType *clone = static_cast< IfcFlowTreatmentDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFlowTreatmentDeviceType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFluidFlowProperties *ReparentCopyOp::operator()(const IfcFluidFlowProperties *obj) const {
    if (obj) {
        IfcFluidFlowProperties *clone = static_cast< IfcFluidFlowProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFluidFlowProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFooting *ReparentCopyOp::operator()(const IfcFooting *obj) const {
    if (obj) {
        IfcFooting *clone = static_cast< IfcFooting * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFooting(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFuelProperties *ReparentCopyOp::operator()(const IfcFuelProperties *obj) const {
    if (obj) {
        IfcFuelProperties *clone = static_cast< IfcFuelProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFuelProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFurnishingElement *ReparentCopyOp::operator()(const IfcFurnishingElement *obj) const {
    if (obj) {
        IfcFurnishingElement *clone = static_cast< IfcFurnishingElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFurnishingElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFurnishingElementType *ReparentCopyOp::operator()(const IfcFurnishingElementType *obj) const {
    if (obj) {
        IfcFurnishingElementType *clone = static_cast< IfcFurnishingElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFurnishingElementType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFurnitureStandard *ReparentCopyOp::operator()(const IfcFurnitureStandard *obj) const {
    if (obj) {
        IfcFurnitureStandard *clone = static_cast< IfcFurnitureStandard * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFurnitureStandard(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcFurnitureType *ReparentCopyOp::operator()(const IfcFurnitureType *obj) const {
    if (obj) {
        IfcFurnitureType *clone = static_cast< IfcFurnitureType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcFurnitureType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGasTerminalType *ReparentCopyOp::operator()(const IfcGasTerminalType *obj) const {
    if (obj) {
        IfcGasTerminalType *clone = static_cast< IfcGasTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGasTerminalType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeneralMaterialProperties *ReparentCopyOp::operator()(const IfcGeneralMaterialProperties *obj) const {
    if (obj) {
        IfcGeneralMaterialProperties *clone = static_cast< IfcGeneralMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeneralMaterialProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeneralProfileProperties *ReparentCopyOp::operator()(const IfcGeneralProfileProperties *obj) const {
    if (obj) {
        IfcGeneralProfileProperties *clone = static_cast< IfcGeneralProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeneralProfileProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeometricCurveSet *ReparentCopyOp::operator()(const IfcGeometricCurveSet *obj) const {
    if (obj) {
        IfcGeometricCurveSet *clone = static_cast< IfcGeometricCurveSet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeometricCurveSet(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeometricRepresentationContext *ReparentCopyOp::operator()(const IfcGeometricRepresentationContext *obj) const {
    if (obj) {
        IfcGeometricRepresentationContext *clone = static_cast< IfcGeometricRepresentationContext * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeometricRepresentationContext(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeometricRepresentationItem *ReparentCopyOp::operator()(const IfcGeometricRepresentationItem *obj) const {
    if (obj) {
        IfcGeometricRepresentationItem *clone = static_cast< IfcGeometricRepresentationItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeometricRepresentationItem(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeometricRepresentationSubContext *ReparentCopyOp::operator()(const IfcGeometricRepresentationSubContext *obj) const {
    if (obj) {
        IfcGeometricRepresentationSubContext *clone = static_cast< IfcGeometricRepresentationSubContext * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeometricRepresentationSubContext(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGeometricSet *ReparentCopyOp::operator()(const IfcGeometricSet *obj) const {
    if (obj) {
        IfcGeometricSet *clone = static_cast< IfcGeometricSet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGeometricSet(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGrid *ReparentCopyOp::operator()(const IfcGrid *obj) const {
    if (obj) {
        IfcGrid *clone = static_cast< IfcGrid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGrid(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGridAxis *ReparentCopyOp::operator()(const IfcGridAxis *obj) const {
    if (obj) {
        IfcGridAxis *clone = static_cast< IfcGridAxis * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGridAxis(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGridPlacement *ReparentCopyOp::operator()(const IfcGridPlacement *obj) const {
    if (obj) {
        IfcGridPlacement *clone = static_cast< IfcGridPlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGridPlacement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcGroup *ReparentCopyOp::operator()(const IfcGroup *obj) const {
    if (obj) {
        IfcGroup *clone = static_cast< IfcGroup * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcGroup(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcHalfSpaceSolid *ReparentCopyOp::operator()(const IfcHalfSpaceSolid *obj) const {
    if (obj) {
        IfcHalfSpaceSolid *clone = static_cast< IfcHalfSpaceSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcHalfSpaceSolid(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcHeatExchangerType *ReparentCopyOp::operator()(const IfcHeatExchangerType *obj) const {
    if (obj) {
        IfcHeatExchangerType *clone = static_cast< IfcHeatExchangerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcHeatExchangerType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcHumidifierType *ReparentCopyOp::operator()(const IfcHumidifierType *obj) const {
    if (obj) {
        IfcHumidifierType *clone = static_cast< IfcHumidifierType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcHumidifierType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcHygroscopicMaterialProperties *ReparentCopyOp::operator()(const IfcHygroscopicMaterialProperties *obj) const {
    if (obj) {
        IfcHygroscopicMaterialProperties *clone = static_cast< IfcHygroscopicMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcHygroscopicMaterialProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcIShapeProfileDef *ReparentCopyOp::operator()(const IfcIShapeProfileDef *obj) const {
    if (obj) {
        IfcIShapeProfileDef *clone = static_cast< IfcIShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcIShapeProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcImageTexture *ReparentCopyOp::operator()(const IfcImageTexture *obj) const {
    if (obj) {
        IfcImageTexture *clone = static_cast< IfcImageTexture * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcImageTexture(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcInventory *ReparentCopyOp::operator()(const IfcInventory *obj) const {
    if (obj) {
        IfcInventory *clone = static_cast< IfcInventory * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcInventory(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcIrregularTimeSeries *ReparentCopyOp::operator()(const IfcIrregularTimeSeries *obj) const {
    if (obj) {
        IfcIrregularTimeSeries *clone = static_cast< IfcIrregularTimeSeries * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcIrregularTimeSeries(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcIrregularTimeSeriesValue *ReparentCopyOp::operator()(const IfcIrregularTimeSeriesValue *obj) const {
    if (obj) {
        IfcIrregularTimeSeriesValue *clone = static_cast< IfcIrregularTimeSeriesValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcIrregularTimeSeriesValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcJunctionBoxType *ReparentCopyOp::operator()(const IfcJunctionBoxType *obj) const {
    if (obj) {
        IfcJunctionBoxType *clone = static_cast< IfcJunctionBoxType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcJunctionBoxType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLShapeProfileDef *ReparentCopyOp::operator()(const IfcLShapeProfileDef *obj) const {
    if (obj) {
        IfcLShapeProfileDef *clone = static_cast< IfcLShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLShapeProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLaborResource *ReparentCopyOp::operator()(const IfcLaborResource *obj) const {
    if (obj) {
        IfcLaborResource *clone = static_cast< IfcLaborResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLaborResource(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLampType *ReparentCopyOp::operator()(const IfcLampType *obj) const {
    if (obj) {
        IfcLampType *clone = static_cast< IfcLampType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLampType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLibraryInformation *ReparentCopyOp::operator()(const IfcLibraryInformation *obj) const {
    if (obj) {
        IfcLibraryInformation *clone = static_cast< IfcLibraryInformation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLibraryInformation(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLibraryReference *ReparentCopyOp::operator()(const IfcLibraryReference *obj) const {
    if (obj) {
        IfcLibraryReference *clone = static_cast< IfcLibraryReference * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLibraryReference(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightDistributionData *ReparentCopyOp::operator()(const IfcLightDistributionData *obj) const {
    if (obj) {
        IfcLightDistributionData *clone = static_cast< IfcLightDistributionData * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightDistributionData(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightFixtureType *ReparentCopyOp::operator()(const IfcLightFixtureType *obj) const {
    if (obj) {
        IfcLightFixtureType *clone = static_cast< IfcLightFixtureType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightFixtureType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightIntensityDistribution *ReparentCopyOp::operator()(const IfcLightIntensityDistribution *obj) const {
    if (obj) {
        IfcLightIntensityDistribution *clone = static_cast< IfcLightIntensityDistribution * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightIntensityDistribution(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSource *ReparentCopyOp::operator()(const IfcLightSource *obj) const {
    if (obj) {
        IfcLightSource *clone = static_cast< IfcLightSource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSource(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSourceAmbient *ReparentCopyOp::operator()(const IfcLightSourceAmbient *obj) const {
    if (obj) {
        IfcLightSourceAmbient *clone = static_cast< IfcLightSourceAmbient * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSourceAmbient(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSourceDirectional *ReparentCopyOp::operator()(const IfcLightSourceDirectional *obj) const {
    if (obj) {
        IfcLightSourceDirectional *clone = static_cast< IfcLightSourceDirectional * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSourceDirectional(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSourceGoniometric *ReparentCopyOp::operator()(const IfcLightSourceGoniometric *obj) const {
    if (obj) {
        IfcLightSourceGoniometric *clone = static_cast< IfcLightSourceGoniometric * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSourceGoniometric(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSourcePositional *ReparentCopyOp::operator()(const IfcLightSourcePositional *obj) const {
    if (obj) {
        IfcLightSourcePositional *clone = static_cast< IfcLightSourcePositional * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSourcePositional(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLightSourceSpot *ReparentCopyOp::operator()(const IfcLightSourceSpot *obj) const {
    if (obj) {
        IfcLightSourceSpot *clone = static_cast< IfcLightSourceSpot * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLightSourceSpot(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLine *ReparentCopyOp::operator()(const IfcLine *obj) const {
    if (obj) {
        IfcLine *clone = static_cast< IfcLine * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLine(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLinearDimension *ReparentCopyOp::operator()(const IfcLinearDimension *obj) const {
    if (obj) {
        IfcLinearDimension *clone = static_cast< IfcLinearDimension * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLinearDimension(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLocalPlacement *ReparentCopyOp::operator()(const IfcLocalPlacement *obj) const {
    if (obj) {
        IfcLocalPlacement *clone = static_cast< IfcLocalPlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLocalPlacement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLocalTime *ReparentCopyOp::operator()(const IfcLocalTime *obj) const {
    if (obj) {
        IfcLocalTime *clone = static_cast< IfcLocalTime * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLocalTime(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcLoop *ReparentCopyOp::operator()(const IfcLoop *obj) const {
    if (obj) {
        IfcLoop *clone = static_cast< IfcLoop * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcLoop(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcManifoldSolidBrep *ReparentCopyOp::operator()(const IfcManifoldSolidBrep *obj) const {
    if (obj) {
        IfcManifoldSolidBrep *clone = static_cast< IfcManifoldSolidBrep * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcManifoldSolidBrep(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMappedItem *ReparentCopyOp::operator()(const IfcMappedItem *obj) const {
    if (obj) {
        IfcMappedItem *clone = static_cast< IfcMappedItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMappedItem(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterial *ReparentCopyOp::operator()(const IfcMaterial *obj) const {
    if (obj) {
        IfcMaterial *clone = static_cast< IfcMaterial * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterial(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialClassificationRelationship *ReparentCopyOp::operator()(const IfcMaterialClassificationRelationship *obj) const {
    if (obj) {
        IfcMaterialClassificationRelationship *clone = static_cast< IfcMaterialClassificationRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialClassificationRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialDefinitionRepresentation *ReparentCopyOp::operator()(const IfcMaterialDefinitionRepresentation *obj) const {
    if (obj) {
        IfcMaterialDefinitionRepresentation *clone = static_cast< IfcMaterialDefinitionRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialDefinitionRepresentation(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialLayer *ReparentCopyOp::operator()(const IfcMaterialLayer *obj) const {
    if (obj) {
        IfcMaterialLayer *clone = static_cast< IfcMaterialLayer * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialLayer(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialLayerSet *ReparentCopyOp::operator()(const IfcMaterialLayerSet *obj) const {
    if (obj) {
        IfcMaterialLayerSet *clone = static_cast< IfcMaterialLayerSet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialLayerSet(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialLayerSetUsage *ReparentCopyOp::operator()(const IfcMaterialLayerSetUsage *obj) const {
    if (obj) {
        IfcMaterialLayerSetUsage *clone = static_cast< IfcMaterialLayerSetUsage * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialLayerSetUsage(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialList *ReparentCopyOp::operator()(const IfcMaterialList *obj) const {
    if (obj) {
        IfcMaterialList *clone = static_cast< IfcMaterialList * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialList(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMaterialProperties *ReparentCopyOp::operator()(const IfcMaterialProperties *obj) const {
    if (obj) {
        IfcMaterialProperties *clone = static_cast< IfcMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMaterialProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMeasureWithUnit *ReparentCopyOp::operator()(const IfcMeasureWithUnit *obj) const {
    if (obj) {
        IfcMeasureWithUnit *clone = static_cast< IfcMeasureWithUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMeasureWithUnit(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMechanicalConcreteMaterialProperties *ReparentCopyOp::operator()(const IfcMechanicalConcreteMaterialProperties *obj) const {
    if (obj) {
        IfcMechanicalConcreteMaterialProperties *clone = static_cast< IfcMechanicalConcreteMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMechanicalConcreteMaterialProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMechanicalFastener *ReparentCopyOp::operator()(const IfcMechanicalFastener *obj) const {
    if (obj) {
        IfcMechanicalFastener *clone = static_cast< IfcMechanicalFastener * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMechanicalFastener(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMechanicalFastenerType *ReparentCopyOp::operator()(const IfcMechanicalFastenerType *obj) const {
    if (obj) {
        IfcMechanicalFastenerType *clone = static_cast< IfcMechanicalFastenerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMechanicalFastenerType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMechanicalMaterialProperties *ReparentCopyOp::operator()(const IfcMechanicalMaterialProperties *obj) const {
    if (obj) {
        IfcMechanicalMaterialProperties *clone = static_cast< IfcMechanicalMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMechanicalMaterialProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMechanicalSteelMaterialProperties *ReparentCopyOp::operator()(const IfcMechanicalSteelMaterialProperties *obj) const {
    if (obj) {
        IfcMechanicalSteelMaterialProperties *clone = static_cast< IfcMechanicalSteelMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMechanicalSteelMaterialProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMember *ReparentCopyOp::operator()(const IfcMember *obj) const {
    if (obj) {
        IfcMember *clone = static_cast< IfcMember * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMember(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMemberType *ReparentCopyOp::operator()(const IfcMemberType *obj) const {
    if (obj) {
        IfcMemberType *clone = static_cast< IfcMemberType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMemberType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMetric *ReparentCopyOp::operator()(const IfcMetric *obj) const {
    if (obj) {
        IfcMetric *clone = static_cast< IfcMetric * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMetric(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMonetaryUnit *ReparentCopyOp::operator()(const IfcMonetaryUnit *obj) const {
    if (obj) {
        IfcMonetaryUnit *clone = static_cast< IfcMonetaryUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMonetaryUnit(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMotorConnectionType *ReparentCopyOp::operator()(const IfcMotorConnectionType *obj) const {
    if (obj) {
        IfcMotorConnectionType *clone = static_cast< IfcMotorConnectionType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMotorConnectionType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcMove *ReparentCopyOp::operator()(const IfcMove *obj) const {
    if (obj) {
        IfcMove *clone = static_cast< IfcMove * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcMove(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcNamedUnit *ReparentCopyOp::operator()(const IfcNamedUnit *obj) const {
    if (obj) {
        IfcNamedUnit *clone = static_cast< IfcNamedUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcNamedUnit(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcObject *ReparentCopyOp::operator()(const IfcObject *obj) const {
    if (obj) {
        IfcObject *clone = static_cast< IfcObject * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcObject(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcObjectDefinition *ReparentCopyOp::operator()(const IfcObjectDefinition *obj) const {
    if (obj) {
        IfcObjectDefinition *clone = static_cast< IfcObjectDefinition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcObjectDefinition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcObjectPlacement *ReparentCopyOp::operator()(const IfcObjectPlacement *obj) const {
    if (obj) {
        IfcObjectPlacement *clone = static_cast< IfcObjectPlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcObjectPlacement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcObjective *ReparentCopyOp::operator()(const IfcObjective *obj) const {
    if (obj) {
        IfcObjective *clone = static_cast< IfcObjective * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcObjective(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOccupant *ReparentCopyOp::operator()(const IfcOccupant *obj) const {
    if (obj) {
        IfcOccupant *clone = static_cast< IfcOccupant * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOccupant(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOffsetCurve2D *ReparentCopyOp::operator()(const IfcOffsetCurve2D *obj) const {
    if (obj) {
        IfcOffsetCurve2D *clone = static_cast< IfcOffsetCurve2D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOffsetCurve2D(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOffsetCurve3D *ReparentCopyOp::operator()(const IfcOffsetCurve3D *obj) const {
    if (obj) {
        IfcOffsetCurve3D *clone = static_cast< IfcOffsetCurve3D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOffsetCurve3D(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOneDirectionRepeatFactor *ReparentCopyOp::operator()(const IfcOneDirectionRepeatFactor *obj) const {
    if (obj) {
        IfcOneDirectionRepeatFactor *clone = static_cast< IfcOneDirectionRepeatFactor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOneDirectionRepeatFactor(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOpenShell *ReparentCopyOp::operator()(const IfcOpenShell *obj) const {
    if (obj) {
        IfcOpenShell *clone = static_cast< IfcOpenShell * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOpenShell(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOpeningElement *ReparentCopyOp::operator()(const IfcOpeningElement *obj) const {
    if (obj) {
        IfcOpeningElement *clone = static_cast< IfcOpeningElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOpeningElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOpticalMaterialProperties *ReparentCopyOp::operator()(const IfcOpticalMaterialProperties *obj) const {
    if (obj) {
        IfcOpticalMaterialProperties *clone = static_cast< IfcOpticalMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOpticalMaterialProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOrderAction *ReparentCopyOp::operator()(const IfcOrderAction *obj) const {
    if (obj) {
        IfcOrderAction *clone = static_cast< IfcOrderAction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOrderAction(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOrganization *ReparentCopyOp::operator()(const IfcOrganization *obj) const {
    if (obj) {
        IfcOrganization *clone = static_cast< IfcOrganization * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOrganization(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOrganizationRelationship *ReparentCopyOp::operator()(const IfcOrganizationRelationship *obj) const {
    if (obj) {
        IfcOrganizationRelationship *clone = static_cast< IfcOrganizationRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOrganizationRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOrientedEdge *ReparentCopyOp::operator()(const IfcOrientedEdge *obj) const {
    if (obj) {
        IfcOrientedEdge *clone = static_cast< IfcOrientedEdge * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOrientedEdge(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOutletType *ReparentCopyOp::operator()(const IfcOutletType *obj) const {
    if (obj) {
        IfcOutletType *clone = static_cast< IfcOutletType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOutletType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcOwnerHistory *ReparentCopyOp::operator()(const IfcOwnerHistory *obj) const {
    if (obj) {
        IfcOwnerHistory *clone = static_cast< IfcOwnerHistory * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcOwnerHistory(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcParameterizedProfileDef *ReparentCopyOp::operator()(const IfcParameterizedProfileDef *obj) const {
    if (obj) {
        IfcParameterizedProfileDef *clone = static_cast< IfcParameterizedProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcParameterizedProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPath *ReparentCopyOp::operator()(const IfcPath *obj) const {
    if (obj) {
        IfcPath *clone = static_cast< IfcPath * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPath(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPerformanceHistory *ReparentCopyOp::operator()(const IfcPerformanceHistory *obj) const {
    if (obj) {
        IfcPerformanceHistory *clone = static_cast< IfcPerformanceHistory * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPerformanceHistory(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPermeableCoveringProperties *ReparentCopyOp::operator()(const IfcPermeableCoveringProperties *obj) const {
    if (obj) {
        IfcPermeableCoveringProperties *clone = static_cast< IfcPermeableCoveringProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPermeableCoveringProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPermit *ReparentCopyOp::operator()(const IfcPermit *obj) const {
    if (obj) {
        IfcPermit *clone = static_cast< IfcPermit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPermit(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPerson *ReparentCopyOp::operator()(const IfcPerson *obj) const {
    if (obj) {
        IfcPerson *clone = static_cast< IfcPerson * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPerson(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPersonAndOrganization *ReparentCopyOp::operator()(const IfcPersonAndOrganization *obj) const {
    if (obj) {
        IfcPersonAndOrganization *clone = static_cast< IfcPersonAndOrganization * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPersonAndOrganization(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPhysicalComplexQuantity *ReparentCopyOp::operator()(const IfcPhysicalComplexQuantity *obj) const {
    if (obj) {
        IfcPhysicalComplexQuantity *clone = static_cast< IfcPhysicalComplexQuantity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPhysicalComplexQuantity(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPhysicalQuantity *ReparentCopyOp::operator()(const IfcPhysicalQuantity *obj) const {
    if (obj) {
        IfcPhysicalQuantity *clone = static_cast< IfcPhysicalQuantity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPhysicalQuantity(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPhysicalSimpleQuantity *ReparentCopyOp::operator()(const IfcPhysicalSimpleQuantity *obj) const {
    if (obj) {
        IfcPhysicalSimpleQuantity *clone = static_cast< IfcPhysicalSimpleQuantity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPhysicalSimpleQuantity(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPile *ReparentCopyOp::operator()(const IfcPile *obj) const {
    if (obj) {
        IfcPile *clone = static_cast< IfcPile * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPile(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPipeFittingType *ReparentCopyOp::operator()(const IfcPipeFittingType *obj) const {
    if (obj) {
        IfcPipeFittingType *clone = static_cast< IfcPipeFittingType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPipeFittingType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPipeSegmentType *ReparentCopyOp::operator()(const IfcPipeSegmentType *obj) const {
    if (obj) {
        IfcPipeSegmentType *clone = static_cast< IfcPipeSegmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPipeSegmentType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPixelTexture *ReparentCopyOp::operator()(const IfcPixelTexture *obj) const {
    if (obj) {
        IfcPixelTexture *clone = static_cast< IfcPixelTexture * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPixelTexture(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlacement *ReparentCopyOp::operator()(const IfcPlacement *obj) const {
    if (obj) {
        IfcPlacement *clone = static_cast< IfcPlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlacement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlanarBox *ReparentCopyOp::operator()(const IfcPlanarBox *obj) const {
    if (obj) {
        IfcPlanarBox *clone = static_cast< IfcPlanarBox * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlanarBox(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlanarExtent *ReparentCopyOp::operator()(const IfcPlanarExtent *obj) const {
    if (obj) {
        IfcPlanarExtent *clone = static_cast< IfcPlanarExtent * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlanarExtent(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlane *ReparentCopyOp::operator()(const IfcPlane *obj) const {
    if (obj) {
        IfcPlane *clone = static_cast< IfcPlane * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlane(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlate *ReparentCopyOp::operator()(const IfcPlate *obj) const {
    if (obj) {
        IfcPlate *clone = static_cast< IfcPlate * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlate(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPlateType *ReparentCopyOp::operator()(const IfcPlateType *obj) const {
    if (obj) {
        IfcPlateType *clone = static_cast< IfcPlateType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPlateType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPoint *ReparentCopyOp::operator()(const IfcPoint *obj) const {
    if (obj) {
        IfcPoint *clone = static_cast< IfcPoint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPoint(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPointOnCurve *ReparentCopyOp::operator()(const IfcPointOnCurve *obj) const {
    if (obj) {
        IfcPointOnCurve *clone = static_cast< IfcPointOnCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPointOnCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPointOnSurface *ReparentCopyOp::operator()(const IfcPointOnSurface *obj) const {
    if (obj) {
        IfcPointOnSurface *clone = static_cast< IfcPointOnSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPointOnSurface(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPolyLoop *ReparentCopyOp::operator()(const IfcPolyLoop *obj) const {
    if (obj) {
        IfcPolyLoop *clone = static_cast< IfcPolyLoop * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPolyLoop(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPolygonalBoundedHalfSpace *ReparentCopyOp::operator()(const IfcPolygonalBoundedHalfSpace *obj) const {
    if (obj) {
        IfcPolygonalBoundedHalfSpace *clone = static_cast< IfcPolygonalBoundedHalfSpace * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPolygonalBoundedHalfSpace(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPolyline *ReparentCopyOp::operator()(const IfcPolyline *obj) const {
    if (obj) {
        IfcPolyline *clone = static_cast< IfcPolyline * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPolyline(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPort *ReparentCopyOp::operator()(const IfcPort *obj) const {
    if (obj) {
        IfcPort *clone = static_cast< IfcPort * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPort(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPostalAddress *ReparentCopyOp::operator()(const IfcPostalAddress *obj) const {
    if (obj) {
        IfcPostalAddress *clone = static_cast< IfcPostalAddress * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPostalAddress(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedColour *ReparentCopyOp::operator()(const IfcPreDefinedColour *obj) const {
    if (obj) {
        IfcPreDefinedColour *clone = static_cast< IfcPreDefinedColour * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedColour(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedCurveFont *ReparentCopyOp::operator()(const IfcPreDefinedCurveFont *obj) const {
    if (obj) {
        IfcPreDefinedCurveFont *clone = static_cast< IfcPreDefinedCurveFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedCurveFont(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedDimensionSymbol *ReparentCopyOp::operator()(const IfcPreDefinedDimensionSymbol *obj) const {
    if (obj) {
        IfcPreDefinedDimensionSymbol *clone = static_cast< IfcPreDefinedDimensionSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedDimensionSymbol(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedItem *ReparentCopyOp::operator()(const IfcPreDefinedItem *obj) const {
    if (obj) {
        IfcPreDefinedItem *clone = static_cast< IfcPreDefinedItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedItem(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedPointMarkerSymbol *ReparentCopyOp::operator()(const IfcPreDefinedPointMarkerSymbol *obj) const {
    if (obj) {
        IfcPreDefinedPointMarkerSymbol *clone = static_cast< IfcPreDefinedPointMarkerSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedPointMarkerSymbol(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedSymbol *ReparentCopyOp::operator()(const IfcPreDefinedSymbol *obj) const {
    if (obj) {
        IfcPreDefinedSymbol *clone = static_cast< IfcPreDefinedSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedSymbol(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedTerminatorSymbol *ReparentCopyOp::operator()(const IfcPreDefinedTerminatorSymbol *obj) const {
    if (obj) {
        IfcPreDefinedTerminatorSymbol *clone = static_cast< IfcPreDefinedTerminatorSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedTerminatorSymbol(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPreDefinedTextFont *ReparentCopyOp::operator()(const IfcPreDefinedTextFont *obj) const {
    if (obj) {
        IfcPreDefinedTextFont *clone = static_cast< IfcPreDefinedTextFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPreDefinedTextFont(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPresentationLayerAssignment *ReparentCopyOp::operator()(const IfcPresentationLayerAssignment *obj) const {
    if (obj) {
        IfcPresentationLayerAssignment *clone = static_cast< IfcPresentationLayerAssignment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPresentationLayerAssignment(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPresentationLayerWithStyle *ReparentCopyOp::operator()(const IfcPresentationLayerWithStyle *obj) const {
    if (obj) {
        IfcPresentationLayerWithStyle *clone = static_cast< IfcPresentationLayerWithStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPresentationLayerWithStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPresentationStyle *ReparentCopyOp::operator()(const IfcPresentationStyle *obj) const {
    if (obj) {
        IfcPresentationStyle *clone = static_cast< IfcPresentationStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPresentationStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPresentationStyleAssignment *ReparentCopyOp::operator()(const IfcPresentationStyleAssignment *obj) const {
    if (obj) {
        IfcPresentationStyleAssignment *clone = static_cast< IfcPresentationStyleAssignment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPresentationStyleAssignment(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProcedure *ReparentCopyOp::operator()(const IfcProcedure *obj) const {
    if (obj) {
        IfcProcedure *clone = static_cast< IfcProcedure * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProcedure(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProcess *ReparentCopyOp::operator()(const IfcProcess *obj) const {
    if (obj) {
        IfcProcess *clone = static_cast< IfcProcess * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProcess(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProduct *ReparentCopyOp::operator()(const IfcProduct *obj) const {
    if (obj) {
        IfcProduct *clone = static_cast< IfcProduct * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProduct(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProductDefinitionShape *ReparentCopyOp::operator()(const IfcProductDefinitionShape *obj) const {
    if (obj) {
        IfcProductDefinitionShape *clone = static_cast< IfcProductDefinitionShape * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProductDefinitionShape(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProductRepresentation *ReparentCopyOp::operator()(const IfcProductRepresentation *obj) const {
    if (obj) {
        IfcProductRepresentation *clone = static_cast< IfcProductRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProductRepresentation(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProductsOfCombustionProperties *ReparentCopyOp::operator()(const IfcProductsOfCombustionProperties *obj) const {
    if (obj) {
        IfcProductsOfCombustionProperties *clone = static_cast< IfcProductsOfCombustionProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProductsOfCombustionProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProfileDef *ReparentCopyOp::operator()(const IfcProfileDef *obj) const {
    if (obj) {
        IfcProfileDef *clone = static_cast< IfcProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProfileProperties *ReparentCopyOp::operator()(const IfcProfileProperties *obj) const {
    if (obj) {
        IfcProfileProperties *clone = static_cast< IfcProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProfileProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProject *ReparentCopyOp::operator()(const IfcProject *obj) const {
    if (obj) {
        IfcProject *clone = static_cast< IfcProject * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProject(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProjectOrder *ReparentCopyOp::operator()(const IfcProjectOrder *obj) const {
    if (obj) {
        IfcProjectOrder *clone = static_cast< IfcProjectOrder * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProjectOrder(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProjectOrderRecord *ReparentCopyOp::operator()(const IfcProjectOrderRecord *obj) const {
    if (obj) {
        IfcProjectOrderRecord *clone = static_cast< IfcProjectOrderRecord * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProjectOrderRecord(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProjectionCurve *ReparentCopyOp::operator()(const IfcProjectionCurve *obj) const {
    if (obj) {
        IfcProjectionCurve *clone = static_cast< IfcProjectionCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProjectionCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProjectionElement *ReparentCopyOp::operator()(const IfcProjectionElement *obj) const {
    if (obj) {
        IfcProjectionElement *clone = static_cast< IfcProjectionElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProjectionElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProperty *ReparentCopyOp::operator()(const IfcProperty *obj) const {
    if (obj) {
        IfcProperty *clone = static_cast< IfcProperty * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProperty(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyBoundedValue *ReparentCopyOp::operator()(const IfcPropertyBoundedValue *obj) const {
    if (obj) {
        IfcPropertyBoundedValue *clone = static_cast< IfcPropertyBoundedValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyBoundedValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyConstraintRelationship *ReparentCopyOp::operator()(const IfcPropertyConstraintRelationship *obj) const {
    if (obj) {
        IfcPropertyConstraintRelationship *clone = static_cast< IfcPropertyConstraintRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyConstraintRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyDefinition *ReparentCopyOp::operator()(const IfcPropertyDefinition *obj) const {
    if (obj) {
        IfcPropertyDefinition *clone = static_cast< IfcPropertyDefinition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyDefinition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyDependencyRelationship *ReparentCopyOp::operator()(const IfcPropertyDependencyRelationship *obj) const {
    if (obj) {
        IfcPropertyDependencyRelationship *clone = static_cast< IfcPropertyDependencyRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyDependencyRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyEnumeratedValue *ReparentCopyOp::operator()(const IfcPropertyEnumeratedValue *obj) const {
    if (obj) {
        IfcPropertyEnumeratedValue *clone = static_cast< IfcPropertyEnumeratedValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyEnumeratedValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyEnumeration *ReparentCopyOp::operator()(const IfcPropertyEnumeration *obj) const {
    if (obj) {
        IfcPropertyEnumeration *clone = static_cast< IfcPropertyEnumeration * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyEnumeration(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyListValue *ReparentCopyOp::operator()(const IfcPropertyListValue *obj) const {
    if (obj) {
        IfcPropertyListValue *clone = static_cast< IfcPropertyListValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyListValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyReferenceValue *ReparentCopyOp::operator()(const IfcPropertyReferenceValue *obj) const {
    if (obj) {
        IfcPropertyReferenceValue *clone = static_cast< IfcPropertyReferenceValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyReferenceValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertySet *ReparentCopyOp::operator()(const IfcPropertySet *obj) const {
    if (obj) {
        IfcPropertySet *clone = static_cast< IfcPropertySet * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertySet(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertySetDefinition *ReparentCopyOp::operator()(const IfcPropertySetDefinition *obj) const {
    if (obj) {
        IfcPropertySetDefinition *clone = static_cast< IfcPropertySetDefinition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertySetDefinition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertySingleValue *ReparentCopyOp::operator()(const IfcPropertySingleValue *obj) const {
    if (obj) {
        IfcPropertySingleValue *clone = static_cast< IfcPropertySingleValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertySingleValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPropertyTableValue *ReparentCopyOp::operator()(const IfcPropertyTableValue *obj) const {
    if (obj) {
        IfcPropertyTableValue *clone = static_cast< IfcPropertyTableValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPropertyTableValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProtectiveDeviceType *ReparentCopyOp::operator()(const IfcProtectiveDeviceType *obj) const {
    if (obj) {
        IfcProtectiveDeviceType *clone = static_cast< IfcProtectiveDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProtectiveDeviceType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcProxy *ReparentCopyOp::operator()(const IfcProxy *obj) const {
    if (obj) {
        IfcProxy *clone = static_cast< IfcProxy * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcProxy(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcPumpType *ReparentCopyOp::operator()(const IfcPumpType *obj) const {
    if (obj) {
        IfcPumpType *clone = static_cast< IfcPumpType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcPumpType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityArea *ReparentCopyOp::operator()(const IfcQuantityArea *obj) const {
    if (obj) {
        IfcQuantityArea *clone = static_cast< IfcQuantityArea * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityArea(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityCount *ReparentCopyOp::operator()(const IfcQuantityCount *obj) const {
    if (obj) {
        IfcQuantityCount *clone = static_cast< IfcQuantityCount * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityCount(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityLength *ReparentCopyOp::operator()(const IfcQuantityLength *obj) const {
    if (obj) {
        IfcQuantityLength *clone = static_cast< IfcQuantityLength * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityLength(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityTime *ReparentCopyOp::operator()(const IfcQuantityTime *obj) const {
    if (obj) {
        IfcQuantityTime *clone = static_cast< IfcQuantityTime * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityTime(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityVolume *ReparentCopyOp::operator()(const IfcQuantityVolume *obj) const {
    if (obj) {
        IfcQuantityVolume *clone = static_cast< IfcQuantityVolume * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityVolume(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcQuantityWeight *ReparentCopyOp::operator()(const IfcQuantityWeight *obj) const {
    if (obj) {
        IfcQuantityWeight *clone = static_cast< IfcQuantityWeight * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcQuantityWeight(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRadiusDimension *ReparentCopyOp::operator()(const IfcRadiusDimension *obj) const {
    if (obj) {
        IfcRadiusDimension *clone = static_cast< IfcRadiusDimension * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRadiusDimension(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRailing *ReparentCopyOp::operator()(const IfcRailing *obj) const {
    if (obj) {
        IfcRailing *clone = static_cast< IfcRailing * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRailing(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRailingType *ReparentCopyOp::operator()(const IfcRailingType *obj) const {
    if (obj) {
        IfcRailingType *clone = static_cast< IfcRailingType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRailingType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRamp *ReparentCopyOp::operator()(const IfcRamp *obj) const {
    if (obj) {
        IfcRamp *clone = static_cast< IfcRamp * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRamp(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRampFlight *ReparentCopyOp::operator()(const IfcRampFlight *obj) const {
    if (obj) {
        IfcRampFlight *clone = static_cast< IfcRampFlight * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRampFlight(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRampFlightType *ReparentCopyOp::operator()(const IfcRampFlightType *obj) const {
    if (obj) {
        IfcRampFlightType *clone = static_cast< IfcRampFlightType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRampFlightType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRationalBezierCurve *ReparentCopyOp::operator()(const IfcRationalBezierCurve *obj) const {
    if (obj) {
        IfcRationalBezierCurve *clone = static_cast< IfcRationalBezierCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRationalBezierCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRectangleHollowProfileDef *ReparentCopyOp::operator()(const IfcRectangleHollowProfileDef *obj) const {
    if (obj) {
        IfcRectangleHollowProfileDef *clone = static_cast< IfcRectangleHollowProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRectangleHollowProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRectangleProfileDef *ReparentCopyOp::operator()(const IfcRectangleProfileDef *obj) const {
    if (obj) {
        IfcRectangleProfileDef *clone = static_cast< IfcRectangleProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRectangleProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRectangularPyramid *ReparentCopyOp::operator()(const IfcRectangularPyramid *obj) const {
    if (obj) {
        IfcRectangularPyramid *clone = static_cast< IfcRectangularPyramid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRectangularPyramid(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRectangularTrimmedSurface *ReparentCopyOp::operator()(const IfcRectangularTrimmedSurface *obj) const {
    if (obj) {
        IfcRectangularTrimmedSurface *clone = static_cast< IfcRectangularTrimmedSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRectangularTrimmedSurface(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferencesValueDocument *ReparentCopyOp::operator()(const IfcReferencesValueDocument *obj) const {
    if (obj) {
        IfcReferencesValueDocument *clone = static_cast< IfcReferencesValueDocument * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferencesValueDocument(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRegularTimeSeries *ReparentCopyOp::operator()(const IfcRegularTimeSeries *obj) const {
    if (obj) {
        IfcRegularTimeSeries *clone = static_cast< IfcRegularTimeSeries * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRegularTimeSeries(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReinforcementBarProperties *ReparentCopyOp::operator()(const IfcReinforcementBarProperties *obj) const {
    if (obj) {
        IfcReinforcementBarProperties *clone = static_cast< IfcReinforcementBarProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReinforcementBarProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReinforcementDefinitionProperties *ReparentCopyOp::operator()(const IfcReinforcementDefinitionProperties *obj) const {
    if (obj) {
        IfcReinforcementDefinitionProperties *clone = static_cast< IfcReinforcementDefinitionProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReinforcementDefinitionProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReinforcingBar *ReparentCopyOp::operator()(const IfcReinforcingBar *obj) const {
    if (obj) {
        IfcReinforcingBar *clone = static_cast< IfcReinforcingBar * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReinforcingBar(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReinforcingElement *ReparentCopyOp::operator()(const IfcReinforcingElement *obj) const {
    if (obj) {
        IfcReinforcingElement *clone = static_cast< IfcReinforcingElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReinforcingElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReinforcingMesh *ReparentCopyOp::operator()(const IfcReinforcingMesh *obj) const {
    if (obj) {
        IfcReinforcingMesh *clone = static_cast< IfcReinforcingMesh * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReinforcingMesh(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAggregates *ReparentCopyOp::operator()(const IfcRelAggregates *obj) const {
    if (obj) {
        IfcRelAggregates *clone = static_cast< IfcRelAggregates * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAggregates(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssigns *ReparentCopyOp::operator()(const IfcRelAssigns *obj) const {
    if (obj) {
        IfcRelAssigns *clone = static_cast< IfcRelAssigns * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssigns(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsTasks *ReparentCopyOp::operator()(const IfcRelAssignsTasks *obj) const {
    if (obj) {
        IfcRelAssignsTasks *clone = static_cast< IfcRelAssignsTasks * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsTasks(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToActor *ReparentCopyOp::operator()(const IfcRelAssignsToActor *obj) const {
    if (obj) {
        IfcRelAssignsToActor *clone = static_cast< IfcRelAssignsToActor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToActor(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToControl *ReparentCopyOp::operator()(const IfcRelAssignsToControl *obj) const {
    if (obj) {
        IfcRelAssignsToControl *clone = static_cast< IfcRelAssignsToControl * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToControl(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToGroup *ReparentCopyOp::operator()(const IfcRelAssignsToGroup *obj) const {
    if (obj) {
        IfcRelAssignsToGroup *clone = static_cast< IfcRelAssignsToGroup * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToGroup(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToProcess *ReparentCopyOp::operator()(const IfcRelAssignsToProcess *obj) const {
    if (obj) {
        IfcRelAssignsToProcess *clone = static_cast< IfcRelAssignsToProcess * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToProcess(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToProduct *ReparentCopyOp::operator()(const IfcRelAssignsToProduct *obj) const {
    if (obj) {
        IfcRelAssignsToProduct *clone = static_cast< IfcRelAssignsToProduct * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToProduct(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToProjectOrder *ReparentCopyOp::operator()(const IfcRelAssignsToProjectOrder *obj) const {
    if (obj) {
        IfcRelAssignsToProjectOrder *clone = static_cast< IfcRelAssignsToProjectOrder * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToProjectOrder(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssignsToResource *ReparentCopyOp::operator()(const IfcRelAssignsToResource *obj) const {
    if (obj) {
        IfcRelAssignsToResource *clone = static_cast< IfcRelAssignsToResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssignsToResource(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociates *ReparentCopyOp::operator()(const IfcRelAssociates *obj) const {
    if (obj) {
        IfcRelAssociates *clone = static_cast< IfcRelAssociates * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociates(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesAppliedValue *ReparentCopyOp::operator()(const IfcRelAssociatesAppliedValue *obj) const {
    if (obj) {
        IfcRelAssociatesAppliedValue *clone = static_cast< IfcRelAssociatesAppliedValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesAppliedValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesApproval *ReparentCopyOp::operator()(const IfcRelAssociatesApproval *obj) const {
    if (obj) {
        IfcRelAssociatesApproval *clone = static_cast< IfcRelAssociatesApproval * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesApproval(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesClassification *ReparentCopyOp::operator()(const IfcRelAssociatesClassification *obj) const {
    if (obj) {
        IfcRelAssociatesClassification *clone = static_cast< IfcRelAssociatesClassification * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesClassification(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesConstraint *ReparentCopyOp::operator()(const IfcRelAssociatesConstraint *obj) const {
    if (obj) {
        IfcRelAssociatesConstraint *clone = static_cast< IfcRelAssociatesConstraint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesConstraint(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesDocument *ReparentCopyOp::operator()(const IfcRelAssociatesDocument *obj) const {
    if (obj) {
        IfcRelAssociatesDocument *clone = static_cast< IfcRelAssociatesDocument * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesDocument(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesLibrary *ReparentCopyOp::operator()(const IfcRelAssociatesLibrary *obj) const {
    if (obj) {
        IfcRelAssociatesLibrary *clone = static_cast< IfcRelAssociatesLibrary * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesLibrary(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesMaterial *ReparentCopyOp::operator()(const IfcRelAssociatesMaterial *obj) const {
    if (obj) {
        IfcRelAssociatesMaterial *clone = static_cast< IfcRelAssociatesMaterial * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesMaterial(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelAssociatesProfileProperties *ReparentCopyOp::operator()(const IfcRelAssociatesProfileProperties *obj) const {
    if (obj) {
        IfcRelAssociatesProfileProperties *clone = static_cast< IfcRelAssociatesProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelAssociatesProfileProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnects *ReparentCopyOp::operator()(const IfcRelConnects *obj) const {
    if (obj) {
        IfcRelConnects *clone = static_cast< IfcRelConnects * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnects(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsElements *ReparentCopyOp::operator()(const IfcRelConnectsElements *obj) const {
    if (obj) {
        IfcRelConnectsElements *clone = static_cast< IfcRelConnectsElements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsElements(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsPathElements *ReparentCopyOp::operator()(const IfcRelConnectsPathElements *obj) const {
    if (obj) {
        IfcRelConnectsPathElements *clone = static_cast< IfcRelConnectsPathElements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsPathElements(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsPortToElement *ReparentCopyOp::operator()(const IfcRelConnectsPortToElement *obj) const {
    if (obj) {
        IfcRelConnectsPortToElement *clone = static_cast< IfcRelConnectsPortToElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsPortToElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsPorts *ReparentCopyOp::operator()(const IfcRelConnectsPorts *obj) const {
    if (obj) {
        IfcRelConnectsPorts *clone = static_cast< IfcRelConnectsPorts * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsPorts(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsStructuralActivity *ReparentCopyOp::operator()(const IfcRelConnectsStructuralActivity *obj) const {
    if (obj) {
        IfcRelConnectsStructuralActivity *clone = static_cast< IfcRelConnectsStructuralActivity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsStructuralActivity(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsStructuralElement *ReparentCopyOp::operator()(const IfcRelConnectsStructuralElement *obj) const {
    if (obj) {
        IfcRelConnectsStructuralElement *clone = static_cast< IfcRelConnectsStructuralElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsStructuralElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsStructuralMember *ReparentCopyOp::operator()(const IfcRelConnectsStructuralMember *obj) const {
    if (obj) {
        IfcRelConnectsStructuralMember *clone = static_cast< IfcRelConnectsStructuralMember * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsStructuralMember(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsWithEccentricity *ReparentCopyOp::operator()(const IfcRelConnectsWithEccentricity *obj) const {
    if (obj) {
        IfcRelConnectsWithEccentricity *clone = static_cast< IfcRelConnectsWithEccentricity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsWithEccentricity(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelConnectsWithRealizingElements *ReparentCopyOp::operator()(const IfcRelConnectsWithRealizingElements *obj) const {
    if (obj) {
        IfcRelConnectsWithRealizingElements *clone = static_cast< IfcRelConnectsWithRealizingElements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelConnectsWithRealizingElements(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelContainedInSpatialStructure *ReparentCopyOp::operator()(const IfcRelContainedInSpatialStructure *obj) const {
    if (obj) {
        IfcRelContainedInSpatialStructure *clone = static_cast< IfcRelContainedInSpatialStructure * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelContainedInSpatialStructure(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelCoversBldgElements *ReparentCopyOp::operator()(const IfcRelCoversBldgElements *obj) const {
    if (obj) {
        IfcRelCoversBldgElements *clone = static_cast< IfcRelCoversBldgElements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelCoversBldgElements(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelCoversSpaces *ReparentCopyOp::operator()(const IfcRelCoversSpaces *obj) const {
    if (obj) {
        IfcRelCoversSpaces *clone = static_cast< IfcRelCoversSpaces * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelCoversSpaces(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelDecomposes *ReparentCopyOp::operator()(const IfcRelDecomposes *obj) const {
    if (obj) {
        IfcRelDecomposes *clone = static_cast< IfcRelDecomposes * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelDecomposes(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelDefines *ReparentCopyOp::operator()(const IfcRelDefines *obj) const {
    if (obj) {
        IfcRelDefines *clone = static_cast< IfcRelDefines * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelDefines(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelDefinesByProperties *ReparentCopyOp::operator()(const IfcRelDefinesByProperties *obj) const {
    if (obj) {
        IfcRelDefinesByProperties *clone = static_cast< IfcRelDefinesByProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelDefinesByProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelDefinesByType *ReparentCopyOp::operator()(const IfcRelDefinesByType *obj) const {
    if (obj) {
        IfcRelDefinesByType *clone = static_cast< IfcRelDefinesByType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelDefinesByType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelFillsElement *ReparentCopyOp::operator()(const IfcRelFillsElement *obj) const {
    if (obj) {
        IfcRelFillsElement *clone = static_cast< IfcRelFillsElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelFillsElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelFlowControlElements *ReparentCopyOp::operator()(const IfcRelFlowControlElements *obj) const {
    if (obj) {
        IfcRelFlowControlElements *clone = static_cast< IfcRelFlowControlElements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelFlowControlElements(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelInteractionRequirements *ReparentCopyOp::operator()(const IfcRelInteractionRequirements *obj) const {
    if (obj) {
        IfcRelInteractionRequirements *clone = static_cast< IfcRelInteractionRequirements * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelInteractionRequirements(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelNests *ReparentCopyOp::operator()(const IfcRelNests *obj) const {
    if (obj) {
        IfcRelNests *clone = static_cast< IfcRelNests * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelNests(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelOccupiesSpaces *ReparentCopyOp::operator()(const IfcRelOccupiesSpaces *obj) const {
    if (obj) {
        IfcRelOccupiesSpaces *clone = static_cast< IfcRelOccupiesSpaces * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelOccupiesSpaces(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelOverridesProperties *ReparentCopyOp::operator()(const IfcRelOverridesProperties *obj) const {
    if (obj) {
        IfcRelOverridesProperties *clone = static_cast< IfcRelOverridesProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelOverridesProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelProjectsElement *ReparentCopyOp::operator()(const IfcRelProjectsElement *obj) const {
    if (obj) {
        IfcRelProjectsElement *clone = static_cast< IfcRelProjectsElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelProjectsElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelReferencedInSpatialStructure *ReparentCopyOp::operator()(const IfcRelReferencedInSpatialStructure *obj) const {
    if (obj) {
        IfcRelReferencedInSpatialStructure *clone = static_cast< IfcRelReferencedInSpatialStructure * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelReferencedInSpatialStructure(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelSchedulesCostItems *ReparentCopyOp::operator()(const IfcRelSchedulesCostItems *obj) const {
    if (obj) {
        IfcRelSchedulesCostItems *clone = static_cast< IfcRelSchedulesCostItems * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelSchedulesCostItems(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelSequence *ReparentCopyOp::operator()(const IfcRelSequence *obj) const {
    if (obj) {
        IfcRelSequence *clone = static_cast< IfcRelSequence * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelSequence(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelServicesBuildings *ReparentCopyOp::operator()(const IfcRelServicesBuildings *obj) const {
    if (obj) {
        IfcRelServicesBuildings *clone = static_cast< IfcRelServicesBuildings * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelServicesBuildings(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelSpaceBoundary *ReparentCopyOp::operator()(const IfcRelSpaceBoundary *obj) const {
    if (obj) {
        IfcRelSpaceBoundary *clone = static_cast< IfcRelSpaceBoundary * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelSpaceBoundary(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelVoidsElement *ReparentCopyOp::operator()(const IfcRelVoidsElement *obj) const {
    if (obj) {
        IfcRelVoidsElement *clone = static_cast< IfcRelVoidsElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelVoidsElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelationship *ReparentCopyOp::operator()(const IfcRelationship *obj) const {
    if (obj) {
        IfcRelationship *clone = static_cast< IfcRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRelaxation *ReparentCopyOp::operator()(const IfcRelaxation *obj) const {
    if (obj) {
        IfcRelaxation *clone = static_cast< IfcRelaxation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRelaxation(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRepresentation *ReparentCopyOp::operator()(const IfcRepresentation *obj) const {
    if (obj) {
        IfcRepresentation *clone = static_cast< IfcRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRepresentation(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRepresentationContext *ReparentCopyOp::operator()(const IfcRepresentationContext *obj) const {
    if (obj) {
        IfcRepresentationContext *clone = static_cast< IfcRepresentationContext * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRepresentationContext(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRepresentationItem *ReparentCopyOp::operator()(const IfcRepresentationItem *obj) const {
    if (obj) {
        IfcRepresentationItem *clone = static_cast< IfcRepresentationItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRepresentationItem(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRepresentationMap *ReparentCopyOp::operator()(const IfcRepresentationMap *obj) const {
    if (obj) {
        IfcRepresentationMap *clone = static_cast< IfcRepresentationMap * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRepresentationMap(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcResource *ReparentCopyOp::operator()(const IfcResource *obj) const {
    if (obj) {
        IfcResource *clone = static_cast< IfcResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcResource(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRevolvedAreaSolid *ReparentCopyOp::operator()(const IfcRevolvedAreaSolid *obj) const {
    if (obj) {
        IfcRevolvedAreaSolid *clone = static_cast< IfcRevolvedAreaSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRevolvedAreaSolid(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRibPlateProfileProperties *ReparentCopyOp::operator()(const IfcRibPlateProfileProperties *obj) const {
    if (obj) {
        IfcRibPlateProfileProperties *clone = static_cast< IfcRibPlateProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRibPlateProfileProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRightCircularCone *ReparentCopyOp::operator()(const IfcRightCircularCone *obj) const {
    if (obj) {
        IfcRightCircularCone *clone = static_cast< IfcRightCircularCone * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRightCircularCone(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRightCircularCylinder *ReparentCopyOp::operator()(const IfcRightCircularCylinder *obj) const {
    if (obj) {
        IfcRightCircularCylinder *clone = static_cast< IfcRightCircularCylinder * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRightCircularCylinder(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRoof *ReparentCopyOp::operator()(const IfcRoof *obj) const {
    if (obj) {
        IfcRoof *clone = static_cast< IfcRoof * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRoof(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRoot *ReparentCopyOp::operator()(const IfcRoot *obj) const {
    if (obj) {
        IfcRoot *clone = static_cast< IfcRoot * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRoot(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRoundedEdgeFeature *ReparentCopyOp::operator()(const IfcRoundedEdgeFeature *obj) const {
    if (obj) {
        IfcRoundedEdgeFeature *clone = static_cast< IfcRoundedEdgeFeature * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRoundedEdgeFeature(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcRoundedRectangleProfileDef *ReparentCopyOp::operator()(const IfcRoundedRectangleProfileDef *obj) const {
    if (obj) {
        IfcRoundedRectangleProfileDef *clone = static_cast< IfcRoundedRectangleProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcRoundedRectangleProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSIUnit *ReparentCopyOp::operator()(const IfcSIUnit *obj) const {
    if (obj) {
        IfcSIUnit *clone = static_cast< IfcSIUnit * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSIUnit(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSanitaryTerminalType *ReparentCopyOp::operator()(const IfcSanitaryTerminalType *obj) const {
    if (obj) {
        IfcSanitaryTerminalType *clone = static_cast< IfcSanitaryTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSanitaryTerminalType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcScheduleTimeControl *ReparentCopyOp::operator()(const IfcScheduleTimeControl *obj) const {
    if (obj) {
        IfcScheduleTimeControl *clone = static_cast< IfcScheduleTimeControl * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcScheduleTimeControl(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSectionProperties *ReparentCopyOp::operator()(const IfcSectionProperties *obj) const {
    if (obj) {
        IfcSectionProperties *clone = static_cast< IfcSectionProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSectionProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSectionReinforcementProperties *ReparentCopyOp::operator()(const IfcSectionReinforcementProperties *obj) const {
    if (obj) {
        IfcSectionReinforcementProperties *clone = static_cast< IfcSectionReinforcementProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSectionReinforcementProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSectionedSpine *ReparentCopyOp::operator()(const IfcSectionedSpine *obj) const {
    if (obj) {
        IfcSectionedSpine *clone = static_cast< IfcSectionedSpine * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSectionedSpine(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSensorType *ReparentCopyOp::operator()(const IfcSensorType *obj) const {
    if (obj) {
        IfcSensorType *clone = static_cast< IfcSensorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSensorType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcServiceLife *ReparentCopyOp::operator()(const IfcServiceLife *obj) const {
    if (obj) {
        IfcServiceLife *clone = static_cast< IfcServiceLife * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcServiceLife(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcServiceLifeFactor *ReparentCopyOp::operator()(const IfcServiceLifeFactor *obj) const {
    if (obj) {
        IfcServiceLifeFactor *clone = static_cast< IfcServiceLifeFactor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcServiceLifeFactor(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcShapeAspect *ReparentCopyOp::operator()(const IfcShapeAspect *obj) const {
    if (obj) {
        IfcShapeAspect *clone = static_cast< IfcShapeAspect * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcShapeAspect(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcShapeModel *ReparentCopyOp::operator()(const IfcShapeModel *obj) const {
    if (obj) {
        IfcShapeModel *clone = static_cast< IfcShapeModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcShapeModel(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcShapeRepresentation *ReparentCopyOp::operator()(const IfcShapeRepresentation *obj) const {
    if (obj) {
        IfcShapeRepresentation *clone = static_cast< IfcShapeRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcShapeRepresentation(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcShellBasedSurfaceModel *ReparentCopyOp::operator()(const IfcShellBasedSurfaceModel *obj) const {
    if (obj) {
        IfcShellBasedSurfaceModel *clone = static_cast< IfcShellBasedSurfaceModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcShellBasedSurfaceModel(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSimpleProperty *ReparentCopyOp::operator()(const IfcSimpleProperty *obj) const {
    if (obj) {
        IfcSimpleProperty *clone = static_cast< IfcSimpleProperty * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSimpleProperty(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSite *ReparentCopyOp::operator()(const IfcSite *obj) const {
    if (obj) {
        IfcSite *clone = static_cast< IfcSite * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSite(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSlab *ReparentCopyOp::operator()(const IfcSlab *obj) const {
    if (obj) {
        IfcSlab *clone = static_cast< IfcSlab * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSlab(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSlabType *ReparentCopyOp::operator()(const IfcSlabType *obj) const {
    if (obj) {
        IfcSlabType *clone = static_cast< IfcSlabType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSlabType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSlippageConnectionCondition *ReparentCopyOp::operator()(const IfcSlippageConnectionCondition *obj) const {
    if (obj) {
        IfcSlippageConnectionCondition *clone = static_cast< IfcSlippageConnectionCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSlippageConnectionCondition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSolidModel *ReparentCopyOp::operator()(const IfcSolidModel *obj) const {
    if (obj) {
        IfcSolidModel *clone = static_cast< IfcSolidModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSolidModel(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSoundProperties *ReparentCopyOp::operator()(const IfcSoundProperties *obj) const {
    if (obj) {
        IfcSoundProperties *clone = static_cast< IfcSoundProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSoundProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSoundValue *ReparentCopyOp::operator()(const IfcSoundValue *obj) const {
    if (obj) {
        IfcSoundValue *clone = static_cast< IfcSoundValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSoundValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpace *ReparentCopyOp::operator()(const IfcSpace *obj) const {
    if (obj) {
        IfcSpace *clone = static_cast< IfcSpace * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpace(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpaceHeaterType *ReparentCopyOp::operator()(const IfcSpaceHeaterType *obj) const {
    if (obj) {
        IfcSpaceHeaterType *clone = static_cast< IfcSpaceHeaterType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpaceHeaterType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpaceProgram *ReparentCopyOp::operator()(const IfcSpaceProgram *obj) const {
    if (obj) {
        IfcSpaceProgram *clone = static_cast< IfcSpaceProgram * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpaceProgram(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpaceThermalLoadProperties *ReparentCopyOp::operator()(const IfcSpaceThermalLoadProperties *obj) const {
    if (obj) {
        IfcSpaceThermalLoadProperties *clone = static_cast< IfcSpaceThermalLoadProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpaceThermalLoadProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpaceType *ReparentCopyOp::operator()(const IfcSpaceType *obj) const {
    if (obj) {
        IfcSpaceType *clone = static_cast< IfcSpaceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpaceType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpatialStructureElement *ReparentCopyOp::operator()(const IfcSpatialStructureElement *obj) const {
    if (obj) {
        IfcSpatialStructureElement *clone = static_cast< IfcSpatialStructureElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpatialStructureElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSpatialStructureElementType *ReparentCopyOp::operator()(const IfcSpatialStructureElementType *obj) const {
    if (obj) {
        IfcSpatialStructureElementType *clone = static_cast< IfcSpatialStructureElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSpatialStructureElementType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSphere *ReparentCopyOp::operator()(const IfcSphere *obj) const {
    if (obj) {
        IfcSphere *clone = static_cast< IfcSphere * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSphere(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStackTerminalType *ReparentCopyOp::operator()(const IfcStackTerminalType *obj) const {
    if (obj) {
        IfcStackTerminalType *clone = static_cast< IfcStackTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStackTerminalType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStair *ReparentCopyOp::operator()(const IfcStair *obj) const {
    if (obj) {
        IfcStair *clone = static_cast< IfcStair * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStair(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStairFlight *ReparentCopyOp::operator()(const IfcStairFlight *obj) const {
    if (obj) {
        IfcStairFlight *clone = static_cast< IfcStairFlight * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStairFlight(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStairFlightType *ReparentCopyOp::operator()(const IfcStairFlightType *obj) const {
    if (obj) {
        IfcStairFlightType *clone = static_cast< IfcStairFlightType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStairFlightType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralAction *ReparentCopyOp::operator()(const IfcStructuralAction *obj) const {
    if (obj) {
        IfcStructuralAction *clone = static_cast< IfcStructuralAction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralAction(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralActivity *ReparentCopyOp::operator()(const IfcStructuralActivity *obj) const {
    if (obj) {
        IfcStructuralActivity *clone = static_cast< IfcStructuralActivity * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralActivity(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralAnalysisModel *ReparentCopyOp::operator()(const IfcStructuralAnalysisModel *obj) const {
    if (obj) {
        IfcStructuralAnalysisModel *clone = static_cast< IfcStructuralAnalysisModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralAnalysisModel(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralConnection *ReparentCopyOp::operator()(const IfcStructuralConnection *obj) const {
    if (obj) {
        IfcStructuralConnection *clone = static_cast< IfcStructuralConnection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralConnection(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralConnectionCondition *ReparentCopyOp::operator()(const IfcStructuralConnectionCondition *obj) const {
    if (obj) {
        IfcStructuralConnectionCondition *clone = static_cast< IfcStructuralConnectionCondition * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralConnectionCondition(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralCurveConnection *ReparentCopyOp::operator()(const IfcStructuralCurveConnection *obj) const {
    if (obj) {
        IfcStructuralCurveConnection *clone = static_cast< IfcStructuralCurveConnection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralCurveConnection(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralCurveMember *ReparentCopyOp::operator()(const IfcStructuralCurveMember *obj) const {
    if (obj) {
        IfcStructuralCurveMember *clone = static_cast< IfcStructuralCurveMember * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralCurveMember(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralCurveMemberVarying *ReparentCopyOp::operator()(const IfcStructuralCurveMemberVarying *obj) const {
    if (obj) {
        IfcStructuralCurveMemberVarying *clone = static_cast< IfcStructuralCurveMemberVarying * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralCurveMemberVarying(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralItem *ReparentCopyOp::operator()(const IfcStructuralItem *obj) const {
    if (obj) {
        IfcStructuralItem *clone = static_cast< IfcStructuralItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralItem(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLinearAction *ReparentCopyOp::operator()(const IfcStructuralLinearAction *obj) const {
    if (obj) {
        IfcStructuralLinearAction *clone = static_cast< IfcStructuralLinearAction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLinearAction(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLinearActionVarying *ReparentCopyOp::operator()(const IfcStructuralLinearActionVarying *obj) const {
    if (obj) {
        IfcStructuralLinearActionVarying *clone = static_cast< IfcStructuralLinearActionVarying * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLinearActionVarying(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoad *ReparentCopyOp::operator()(const IfcStructuralLoad *obj) const {
    if (obj) {
        IfcStructuralLoad *clone = static_cast< IfcStructuralLoad * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoad(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadGroup *ReparentCopyOp::operator()(const IfcStructuralLoadGroup *obj) const {
    if (obj) {
        IfcStructuralLoadGroup *clone = static_cast< IfcStructuralLoadGroup * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadGroup(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadLinearForce *ReparentCopyOp::operator()(const IfcStructuralLoadLinearForce *obj) const {
    if (obj) {
        IfcStructuralLoadLinearForce *clone = static_cast< IfcStructuralLoadLinearForce * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadLinearForce(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadPlanarForce *ReparentCopyOp::operator()(const IfcStructuralLoadPlanarForce *obj) const {
    if (obj) {
        IfcStructuralLoadPlanarForce *clone = static_cast< IfcStructuralLoadPlanarForce * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadPlanarForce(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadSingleDisplacement *ReparentCopyOp::operator()(const IfcStructuralLoadSingleDisplacement *obj) const {
    if (obj) {
        IfcStructuralLoadSingleDisplacement *clone = static_cast< IfcStructuralLoadSingleDisplacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadSingleDisplacement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadSingleDisplacementDistortion *ReparentCopyOp::operator()(const IfcStructuralLoadSingleDisplacementDistortion *obj) const {
    if (obj) {
        IfcStructuralLoadSingleDisplacementDistortion *clone = static_cast< IfcStructuralLoadSingleDisplacementDistortion * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadSingleDisplacementDistortion(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadSingleForce *ReparentCopyOp::operator()(const IfcStructuralLoadSingleForce *obj) const {
    if (obj) {
        IfcStructuralLoadSingleForce *clone = static_cast< IfcStructuralLoadSingleForce * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadSingleForce(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadSingleForceWarping *ReparentCopyOp::operator()(const IfcStructuralLoadSingleForceWarping *obj) const {
    if (obj) {
        IfcStructuralLoadSingleForceWarping *clone = static_cast< IfcStructuralLoadSingleForceWarping * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadSingleForceWarping(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadStatic *ReparentCopyOp::operator()(const IfcStructuralLoadStatic *obj) const {
    if (obj) {
        IfcStructuralLoadStatic *clone = static_cast< IfcStructuralLoadStatic * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadStatic(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralLoadTemperature *ReparentCopyOp::operator()(const IfcStructuralLoadTemperature *obj) const {
    if (obj) {
        IfcStructuralLoadTemperature *clone = static_cast< IfcStructuralLoadTemperature * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralLoadTemperature(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralMember *ReparentCopyOp::operator()(const IfcStructuralMember *obj) const {
    if (obj) {
        IfcStructuralMember *clone = static_cast< IfcStructuralMember * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralMember(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralPlanarAction *ReparentCopyOp::operator()(const IfcStructuralPlanarAction *obj) const {
    if (obj) {
        IfcStructuralPlanarAction *clone = static_cast< IfcStructuralPlanarAction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralPlanarAction(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralPlanarActionVarying *ReparentCopyOp::operator()(const IfcStructuralPlanarActionVarying *obj) const {
    if (obj) {
        IfcStructuralPlanarActionVarying *clone = static_cast< IfcStructuralPlanarActionVarying * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralPlanarActionVarying(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralPointAction *ReparentCopyOp::operator()(const IfcStructuralPointAction *obj) const {
    if (obj) {
        IfcStructuralPointAction *clone = static_cast< IfcStructuralPointAction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralPointAction(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralPointConnection *ReparentCopyOp::operator()(const IfcStructuralPointConnection *obj) const {
    if (obj) {
        IfcStructuralPointConnection *clone = static_cast< IfcStructuralPointConnection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralPointConnection(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralPointReaction *ReparentCopyOp::operator()(const IfcStructuralPointReaction *obj) const {
    if (obj) {
        IfcStructuralPointReaction *clone = static_cast< IfcStructuralPointReaction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralPointReaction(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralProfileProperties *ReparentCopyOp::operator()(const IfcStructuralProfileProperties *obj) const {
    if (obj) {
        IfcStructuralProfileProperties *clone = static_cast< IfcStructuralProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralProfileProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralReaction *ReparentCopyOp::operator()(const IfcStructuralReaction *obj) const {
    if (obj) {
        IfcStructuralReaction *clone = static_cast< IfcStructuralReaction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralReaction(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralResultGroup *ReparentCopyOp::operator()(const IfcStructuralResultGroup *obj) const {
    if (obj) {
        IfcStructuralResultGroup *clone = static_cast< IfcStructuralResultGroup * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralResultGroup(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralSteelProfileProperties *ReparentCopyOp::operator()(const IfcStructuralSteelProfileProperties *obj) const {
    if (obj) {
        IfcStructuralSteelProfileProperties *clone = static_cast< IfcStructuralSteelProfileProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralSteelProfileProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralSurfaceConnection *ReparentCopyOp::operator()(const IfcStructuralSurfaceConnection *obj) const {
    if (obj) {
        IfcStructuralSurfaceConnection *clone = static_cast< IfcStructuralSurfaceConnection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralSurfaceConnection(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralSurfaceMember *ReparentCopyOp::operator()(const IfcStructuralSurfaceMember *obj) const {
    if (obj) {
        IfcStructuralSurfaceMember *clone = static_cast< IfcStructuralSurfaceMember * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralSurfaceMember(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuralSurfaceMemberVarying *ReparentCopyOp::operator()(const IfcStructuralSurfaceMemberVarying *obj) const {
    if (obj) {
        IfcStructuralSurfaceMemberVarying *clone = static_cast< IfcStructuralSurfaceMemberVarying * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuralSurfaceMemberVarying(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStructuredDimensionCallout *ReparentCopyOp::operator()(const IfcStructuredDimensionCallout *obj) const {
    if (obj) {
        IfcStructuredDimensionCallout *clone = static_cast< IfcStructuredDimensionCallout * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStructuredDimensionCallout(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStyleModel *ReparentCopyOp::operator()(const IfcStyleModel *obj) const {
    if (obj) {
        IfcStyleModel *clone = static_cast< IfcStyleModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStyleModel(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStyledItem *ReparentCopyOp::operator()(const IfcStyledItem *obj) const {
    if (obj) {
        IfcStyledItem *clone = static_cast< IfcStyledItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStyledItem(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcStyledRepresentation *ReparentCopyOp::operator()(const IfcStyledRepresentation *obj) const {
    if (obj) {
        IfcStyledRepresentation *clone = static_cast< IfcStyledRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcStyledRepresentation(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSubContractResource *ReparentCopyOp::operator()(const IfcSubContractResource *obj) const {
    if (obj) {
        IfcSubContractResource *clone = static_cast< IfcSubContractResource * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSubContractResource(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSubedge *ReparentCopyOp::operator()(const IfcSubedge *obj) const {
    if (obj) {
        IfcSubedge *clone = static_cast< IfcSubedge * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSubedge(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurface *ReparentCopyOp::operator()(const IfcSurface *obj) const {
    if (obj) {
        IfcSurface *clone = static_cast< IfcSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurface(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceCurveSweptAreaSolid *ReparentCopyOp::operator()(const IfcSurfaceCurveSweptAreaSolid *obj) const {
    if (obj) {
        IfcSurfaceCurveSweptAreaSolid *clone = static_cast< IfcSurfaceCurveSweptAreaSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceCurveSweptAreaSolid(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceOfLinearExtrusion *ReparentCopyOp::operator()(const IfcSurfaceOfLinearExtrusion *obj) const {
    if (obj) {
        IfcSurfaceOfLinearExtrusion *clone = static_cast< IfcSurfaceOfLinearExtrusion * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceOfLinearExtrusion(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceOfRevolution *ReparentCopyOp::operator()(const IfcSurfaceOfRevolution *obj) const {
    if (obj) {
        IfcSurfaceOfRevolution *clone = static_cast< IfcSurfaceOfRevolution * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceOfRevolution(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyle *ReparentCopyOp::operator()(const IfcSurfaceStyle *obj) const {
    if (obj) {
        IfcSurfaceStyle *clone = static_cast< IfcSurfaceStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyleLighting *ReparentCopyOp::operator()(const IfcSurfaceStyleLighting *obj) const {
    if (obj) {
        IfcSurfaceStyleLighting *clone = static_cast< IfcSurfaceStyleLighting * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyleLighting(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyleRefraction *ReparentCopyOp::operator()(const IfcSurfaceStyleRefraction *obj) const {
    if (obj) {
        IfcSurfaceStyleRefraction *clone = static_cast< IfcSurfaceStyleRefraction * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyleRefraction(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyleRendering *ReparentCopyOp::operator()(const IfcSurfaceStyleRendering *obj) const {
    if (obj) {
        IfcSurfaceStyleRendering *clone = static_cast< IfcSurfaceStyleRendering * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyleRendering(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyleShading *ReparentCopyOp::operator()(const IfcSurfaceStyleShading *obj) const {
    if (obj) {
        IfcSurfaceStyleShading *clone = static_cast< IfcSurfaceStyleShading * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyleShading(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceStyleWithTextures *ReparentCopyOp::operator()(const IfcSurfaceStyleWithTextures *obj) const {
    if (obj) {
        IfcSurfaceStyleWithTextures *clone = static_cast< IfcSurfaceStyleWithTextures * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceStyleWithTextures(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSurfaceTexture *ReparentCopyOp::operator()(const IfcSurfaceTexture *obj) const {
    if (obj) {
        IfcSurfaceTexture *clone = static_cast< IfcSurfaceTexture * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSurfaceTexture(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSweptAreaSolid *ReparentCopyOp::operator()(const IfcSweptAreaSolid *obj) const {
    if (obj) {
        IfcSweptAreaSolid *clone = static_cast< IfcSweptAreaSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSweptAreaSolid(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSweptDiskSolid *ReparentCopyOp::operator()(const IfcSweptDiskSolid *obj) const {
    if (obj) {
        IfcSweptDiskSolid *clone = static_cast< IfcSweptDiskSolid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSweptDiskSolid(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSweptSurface *ReparentCopyOp::operator()(const IfcSweptSurface *obj) const {
    if (obj) {
        IfcSweptSurface *clone = static_cast< IfcSweptSurface * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSweptSurface(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSwitchingDeviceType *ReparentCopyOp::operator()(const IfcSwitchingDeviceType *obj) const {
    if (obj) {
        IfcSwitchingDeviceType *clone = static_cast< IfcSwitchingDeviceType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSwitchingDeviceType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSymbolStyle *ReparentCopyOp::operator()(const IfcSymbolStyle *obj) const {
    if (obj) {
        IfcSymbolStyle *clone = static_cast< IfcSymbolStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSymbolStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSystem *ReparentCopyOp::operator()(const IfcSystem *obj) const {
    if (obj) {
        IfcSystem *clone = static_cast< IfcSystem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSystem(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcSystemFurnitureElementType *ReparentCopyOp::operator()(const IfcSystemFurnitureElementType *obj) const {
    if (obj) {
        IfcSystemFurnitureElementType *clone = static_cast< IfcSystemFurnitureElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcSystemFurnitureElementType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTShapeProfileDef *ReparentCopyOp::operator()(const IfcTShapeProfileDef *obj) const {
    if (obj) {
        IfcTShapeProfileDef *clone = static_cast< IfcTShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTShapeProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTable *ReparentCopyOp::operator()(const IfcTable *obj) const {
    if (obj) {
        IfcTable *clone = static_cast< IfcTable * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTable(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTableRow *ReparentCopyOp::operator()(const IfcTableRow *obj) const {
    if (obj) {
        IfcTableRow *clone = static_cast< IfcTableRow * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTableRow(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTankType *ReparentCopyOp::operator()(const IfcTankType *obj) const {
    if (obj) {
        IfcTankType *clone = static_cast< IfcTankType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTankType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTask *ReparentCopyOp::operator()(const IfcTask *obj) const {
    if (obj) {
        IfcTask *clone = static_cast< IfcTask * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTask(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTelecomAddress *ReparentCopyOp::operator()(const IfcTelecomAddress *obj) const {
    if (obj) {
        IfcTelecomAddress *clone = static_cast< IfcTelecomAddress * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTelecomAddress(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTendon *ReparentCopyOp::operator()(const IfcTendon *obj) const {
    if (obj) {
        IfcTendon *clone = static_cast< IfcTendon * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTendon(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTendonAnchor *ReparentCopyOp::operator()(const IfcTendonAnchor *obj) const {
    if (obj) {
        IfcTendonAnchor *clone = static_cast< IfcTendonAnchor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTendonAnchor(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTerminatorSymbol *ReparentCopyOp::operator()(const IfcTerminatorSymbol *obj) const {
    if (obj) {
        IfcTerminatorSymbol *clone = static_cast< IfcTerminatorSymbol * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTerminatorSymbol(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextLiteral *ReparentCopyOp::operator()(const IfcTextLiteral *obj) const {
    if (obj) {
        IfcTextLiteral *clone = static_cast< IfcTextLiteral * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextLiteral(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextLiteralWithExtent *ReparentCopyOp::operator()(const IfcTextLiteralWithExtent *obj) const {
    if (obj) {
        IfcTextLiteralWithExtent *clone = static_cast< IfcTextLiteralWithExtent * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextLiteralWithExtent(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextStyle *ReparentCopyOp::operator()(const IfcTextStyle *obj) const {
    if (obj) {
        IfcTextStyle *clone = static_cast< IfcTextStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextStyleFontModel *ReparentCopyOp::operator()(const IfcTextStyleFontModel *obj) const {
    if (obj) {
        IfcTextStyleFontModel *clone = static_cast< IfcTextStyleFontModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextStyleFontModel(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextStyleForDefinedFont *ReparentCopyOp::operator()(const IfcTextStyleForDefinedFont *obj) const {
    if (obj) {
        IfcTextStyleForDefinedFont *clone = static_cast< IfcTextStyleForDefinedFont * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextStyleForDefinedFont(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextStyleTextModel *ReparentCopyOp::operator()(const IfcTextStyleTextModel *obj) const {
    if (obj) {
        IfcTextStyleTextModel *clone = static_cast< IfcTextStyleTextModel * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextStyleTextModel(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextStyleWithBoxCharacteristics *ReparentCopyOp::operator()(const IfcTextStyleWithBoxCharacteristics *obj) const {
    if (obj) {
        IfcTextStyleWithBoxCharacteristics *clone = static_cast< IfcTextStyleWithBoxCharacteristics * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextStyleWithBoxCharacteristics(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextureCoordinate *ReparentCopyOp::operator()(const IfcTextureCoordinate *obj) const {
    if (obj) {
        IfcTextureCoordinate *clone = static_cast< IfcTextureCoordinate * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextureCoordinate(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextureCoordinateGenerator *ReparentCopyOp::operator()(const IfcTextureCoordinateGenerator *obj) const {
    if (obj) {
        IfcTextureCoordinateGenerator *clone = static_cast< IfcTextureCoordinateGenerator * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextureCoordinateGenerator(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextureMap *ReparentCopyOp::operator()(const IfcTextureMap *obj) const {
    if (obj) {
        IfcTextureMap *clone = static_cast< IfcTextureMap * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextureMap(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTextureVertex *ReparentCopyOp::operator()(const IfcTextureVertex *obj) const {
    if (obj) {
        IfcTextureVertex *clone = static_cast< IfcTextureVertex * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTextureVertex(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcThermalMaterialProperties *ReparentCopyOp::operator()(const IfcThermalMaterialProperties *obj) const {
    if (obj) {
        IfcThermalMaterialProperties *clone = static_cast< IfcThermalMaterialProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcThermalMaterialProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTimeSeries *ReparentCopyOp::operator()(const IfcTimeSeries *obj) const {
    if (obj) {
        IfcTimeSeries *clone = static_cast< IfcTimeSeries * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTimeSeries(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTimeSeriesReferenceRelationship *ReparentCopyOp::operator()(const IfcTimeSeriesReferenceRelationship *obj) const {
    if (obj) {
        IfcTimeSeriesReferenceRelationship *clone = static_cast< IfcTimeSeriesReferenceRelationship * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTimeSeriesReferenceRelationship(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTimeSeriesSchedule *ReparentCopyOp::operator()(const IfcTimeSeriesSchedule *obj) const {
    if (obj) {
        IfcTimeSeriesSchedule *clone = static_cast< IfcTimeSeriesSchedule * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTimeSeriesSchedule(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTimeSeriesValue *ReparentCopyOp::operator()(const IfcTimeSeriesValue *obj) const {
    if (obj) {
        IfcTimeSeriesValue *clone = static_cast< IfcTimeSeriesValue * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTimeSeriesValue(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTopologicalRepresentationItem *ReparentCopyOp::operator()(const IfcTopologicalRepresentationItem *obj) const {
    if (obj) {
        IfcTopologicalRepresentationItem *clone = static_cast< IfcTopologicalRepresentationItem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTopologicalRepresentationItem(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTopologyRepresentation *ReparentCopyOp::operator()(const IfcTopologyRepresentation *obj) const {
    if (obj) {
        IfcTopologyRepresentation *clone = static_cast< IfcTopologyRepresentation * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTopologyRepresentation(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTransformerType *ReparentCopyOp::operator()(const IfcTransformerType *obj) const {
    if (obj) {
        IfcTransformerType *clone = static_cast< IfcTransformerType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTransformerType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTransportElement *ReparentCopyOp::operator()(const IfcTransportElement *obj) const {
    if (obj) {
        IfcTransportElement *clone = static_cast< IfcTransportElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTransportElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTransportElementType *ReparentCopyOp::operator()(const IfcTransportElementType *obj) const {
    if (obj) {
        IfcTransportElementType *clone = static_cast< IfcTransportElementType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTransportElementType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTrapeziumProfileDef *ReparentCopyOp::operator()(const IfcTrapeziumProfileDef *obj) const {
    if (obj) {
        IfcTrapeziumProfileDef *clone = static_cast< IfcTrapeziumProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTrapeziumProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTrimmedCurve *ReparentCopyOp::operator()(const IfcTrimmedCurve *obj) const {
    if (obj) {
        IfcTrimmedCurve *clone = static_cast< IfcTrimmedCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTrimmedCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTubeBundleType *ReparentCopyOp::operator()(const IfcTubeBundleType *obj) const {
    if (obj) {
        IfcTubeBundleType *clone = static_cast< IfcTubeBundleType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTubeBundleType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTwoDirectionRepeatFactor *ReparentCopyOp::operator()(const IfcTwoDirectionRepeatFactor *obj) const {
    if (obj) {
        IfcTwoDirectionRepeatFactor *clone = static_cast< IfcTwoDirectionRepeatFactor * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTwoDirectionRepeatFactor(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTypeObject *ReparentCopyOp::operator()(const IfcTypeObject *obj) const {
    if (obj) {
        IfcTypeObject *clone = static_cast< IfcTypeObject * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTypeObject(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcTypeProduct *ReparentCopyOp::operator()(const IfcTypeProduct *obj) const {
    if (obj) {
        IfcTypeProduct *clone = static_cast< IfcTypeProduct * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcTypeProduct(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcUShapeProfileDef *ReparentCopyOp::operator()(const IfcUShapeProfileDef *obj) const {
    if (obj) {
        IfcUShapeProfileDef *clone = static_cast< IfcUShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcUShapeProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcUnitAssignment *ReparentCopyOp::operator()(const IfcUnitAssignment *obj) const {
    if (obj) {
        IfcUnitAssignment *clone = static_cast< IfcUnitAssignment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcUnitAssignment(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcUnitaryEquipmentType *ReparentCopyOp::operator()(const IfcUnitaryEquipmentType *obj) const {
    if (obj) {
        IfcUnitaryEquipmentType *clone = static_cast< IfcUnitaryEquipmentType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcUnitaryEquipmentType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcValveType *ReparentCopyOp::operator()(const IfcValveType *obj) const {
    if (obj) {
        IfcValveType *clone = static_cast< IfcValveType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcValveType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVector *ReparentCopyOp::operator()(const IfcVector *obj) const {
    if (obj) {
        IfcVector *clone = static_cast< IfcVector * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVector(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVertex *ReparentCopyOp::operator()(const IfcVertex *obj) const {
    if (obj) {
        IfcVertex *clone = static_cast< IfcVertex * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVertex(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVertexBasedTextureMap *ReparentCopyOp::operator()(const IfcVertexBasedTextureMap *obj) const {
    if (obj) {
        IfcVertexBasedTextureMap *clone = static_cast< IfcVertexBasedTextureMap * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVertexBasedTextureMap(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVertexLoop *ReparentCopyOp::operator()(const IfcVertexLoop *obj) const {
    if (obj) {
        IfcVertexLoop *clone = static_cast< IfcVertexLoop * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVertexLoop(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVertexPoint *ReparentCopyOp::operator()(const IfcVertexPoint *obj) const {
    if (obj) {
        IfcVertexPoint *clone = static_cast< IfcVertexPoint * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVertexPoint(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVibrationIsolatorType *ReparentCopyOp::operator()(const IfcVibrationIsolatorType *obj) const {
    if (obj) {
        IfcVibrationIsolatorType *clone = static_cast< IfcVibrationIsolatorType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVibrationIsolatorType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVirtualElement *ReparentCopyOp::operator()(const IfcVirtualElement *obj) const {
    if (obj) {
        IfcVirtualElement *clone = static_cast< IfcVirtualElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVirtualElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcVirtualGridIntersection *ReparentCopyOp::operator()(const IfcVirtualGridIntersection *obj) const {
    if (obj) {
        IfcVirtualGridIntersection *clone = static_cast< IfcVirtualGridIntersection * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcVirtualGridIntersection(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWall *ReparentCopyOp::operator()(const IfcWall *obj) const {
    if (obj) {
        IfcWall *clone = static_cast< IfcWall * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWall(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWallStandardCase *ReparentCopyOp::operator()(const IfcWallStandardCase *obj) const {
    if (obj) {
        IfcWallStandardCase *clone = static_cast< IfcWallStandardCase * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWallStandardCase(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWallType *ReparentCopyOp::operator()(const IfcWallType *obj) const {
    if (obj) {
        IfcWallType *clone = static_cast< IfcWallType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWallType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWasteTerminalType *ReparentCopyOp::operator()(const IfcWasteTerminalType *obj) const {
    if (obj) {
        IfcWasteTerminalType *clone = static_cast< IfcWasteTerminalType * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWasteTerminalType(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWaterProperties *ReparentCopyOp::operator()(const IfcWaterProperties *obj) const {
    if (obj) {
        IfcWaterProperties *clone = static_cast< IfcWaterProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWaterProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWindow *ReparentCopyOp::operator()(const IfcWindow *obj) const {
    if (obj) {
        IfcWindow *clone = static_cast< IfcWindow * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWindow(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWindowLiningProperties *ReparentCopyOp::operator()(const IfcWindowLiningProperties *obj) const {
    if (obj) {
        IfcWindowLiningProperties *clone = static_cast< IfcWindowLiningProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWindowLiningProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWindowPanelProperties *ReparentCopyOp::operator()(const IfcWindowPanelProperties *obj) const {
    if (obj) {
        IfcWindowPanelProperties *clone = static_cast< IfcWindowPanelProperties * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWindowPanelProperties(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWindowStyle *ReparentCopyOp::operator()(const IfcWindowStyle *obj) const {
    if (obj) {
        IfcWindowStyle *clone = static_cast< IfcWindowStyle * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWindowStyle(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWorkControl *ReparentCopyOp::operator()(const IfcWorkControl *obj) const {
    if (obj) {
        IfcWorkControl *clone = static_cast< IfcWorkControl * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWorkControl(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWorkPlan *ReparentCopyOp::operator()(const IfcWorkPlan *obj) const {
    if (obj) {
        IfcWorkPlan *clone = static_cast< IfcWorkPlan * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWorkPlan(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcWorkSchedule *ReparentCopyOp::operator()(const IfcWorkSchedule *obj) const {
    if (obj) {
        IfcWorkSchedule *clone = static_cast< IfcWorkSchedule * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcWorkSchedule(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcZShapeProfileDef *ReparentCopyOp::operator()(const IfcZShapeProfileDef *obj) const {
    if (obj) {
        IfcZShapeProfileDef *clone = static_cast< IfcZShapeProfileDef * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcZShapeProfileDef(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcZone *ReparentCopyOp::operator()(const IfcZone *obj) const {
    if (obj) {
        IfcZone *clone = static_cast< IfcZone * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcZone(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCivilStructureElement *ReparentCopyOp::operator()(const IfcCivilStructureElement *obj) const {
    if (obj) {
        IfcCivilStructureElement *clone = static_cast< IfcCivilStructureElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCivilStructureElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgeStructureElement *ReparentCopyOp::operator()(const IfcBridgeStructureElement *obj) const {
    if (obj) {
        IfcBridgeStructureElement *clone = static_cast< IfcBridgeStructureElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgeStructureElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridge *ReparentCopyOp::operator()(const IfcBridge *obj) const {
    if (obj) {
        IfcBridge *clone = static_cast< IfcBridge * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridge(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgePart *ReparentCopyOp::operator()(const IfcBridgePart *obj) const {
    if (obj) {
        IfcBridgePart *clone = static_cast< IfcBridgePart * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgePart(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCivilElement *ReparentCopyOp::operator()(const IfcCivilElement *obj) const {
    if (obj) {
        IfcCivilElement *clone = static_cast< IfcCivilElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCivilElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgeElement *ReparentCopyOp::operator()(const IfcBridgeElement *obj) const {
    if (obj) {
        IfcBridgeElement *clone = static_cast< IfcBridgeElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgeElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgeSegment *ReparentCopyOp::operator()(const IfcBridgeSegment *obj) const {
    if (obj) {
        IfcBridgeSegment *clone = static_cast< IfcBridgeSegment * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgeSegment(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgeSegmentPart *ReparentCopyOp::operator()(const IfcBridgeSegmentPart *obj) const {
    if (obj) {
        IfcBridgeSegmentPart *clone = static_cast< IfcBridgeSegmentPart * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgeSegmentPart(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgeContactElement *ReparentCopyOp::operator()(const IfcBridgeContactElement *obj) const {
    if (obj) {
        IfcBridgeContactElement *clone = static_cast< IfcBridgeContactElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgeContactElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcBridgePrismaticElement *ReparentCopyOp::operator()(const IfcBridgePrismaticElement *obj) const {
    if (obj) {
        IfcBridgePrismaticElement *clone = static_cast< IfcBridgePrismaticElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcBridgePrismaticElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcAlignmentElement *ReparentCopyOp::operator()(const IfcAlignmentElement *obj) const {
    if (obj) {
        IfcAlignmentElement *clone = static_cast< IfcAlignmentElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcAlignmentElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceElement *ReparentCopyOp::operator()(const IfcReferenceElement *obj) const {
    if (obj) {
        IfcReferenceElement *clone = static_cast< IfcReferenceElement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceElement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceCurve *ReparentCopyOp::operator()(const IfcReferenceCurve *obj) const {
    if (obj) {
        IfcReferenceCurve *clone = static_cast< IfcReferenceCurve * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceCurve(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceCurve3D *ReparentCopyOp::operator()(const IfcReferenceCurve3D *obj) const {
    if (obj) {
        IfcReferenceCurve3D *clone = static_cast< IfcReferenceCurve3D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceCurve3D(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceCurveAlignment2D *ReparentCopyOp::operator()(const IfcReferenceCurveAlignment2D *obj) const {
    if (obj) {
        IfcReferenceCurveAlignment2D *clone = static_cast< IfcReferenceCurveAlignment2D * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceCurveAlignment2D(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferencePlacement *ReparentCopyOp::operator()(const IfcReferencePlacement *obj) const {
    if (obj) {
        IfcReferencePlacement *clone = static_cast< IfcReferencePlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferencePlacement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceCurvePlacement *ReparentCopyOp::operator()(const IfcReferenceCurvePlacement *obj) const {
    if (obj) {
        IfcReferenceCurvePlacement *clone = static_cast< IfcReferenceCurvePlacement * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceCurvePlacement(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferenceCurvePlacementSystem *ReparentCopyOp::operator()(const IfcReferenceCurvePlacementSystem *obj) const {
    if (obj) {
        IfcReferenceCurvePlacementSystem *clone = static_cast< IfcReferenceCurvePlacementSystem * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferenceCurvePlacementSystem(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcElementPart *ReparentCopyOp::operator()(const IfcElementPart *obj) const {
    if (obj) {
        IfcElementPart *clone = static_cast< IfcElementPart * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcElementPart(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCivilElementPart *ReparentCopyOp::operator()(const IfcCivilElementPart *obj) const {
    if (obj) {
        IfcCivilElementPart *clone = static_cast< IfcCivilElementPart * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCivilElementPart(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCivilSheath *ReparentCopyOp::operator()(const IfcCivilSheath *obj) const {
    if (obj) {
        IfcCivilSheath *clone = static_cast< IfcCivilSheath * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCivilSheath(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcCivilVoid *ReparentCopyOp::operator()(const IfcCivilVoid *obj) const {
    if (obj) {
        IfcCivilVoid *clone = static_cast< IfcCivilVoid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcCivilVoid(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcClothoid *ReparentCopyOp::operator()(const IfcClothoid *obj) const {
    if (obj) {
        IfcClothoid *clone = static_cast< IfcClothoid * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcClothoid(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

IfcReferencedSectionedSpine *ReparentCopyOp::operator()(const IfcReferencedSectionedSpine *obj) const {
    if (obj) {
        IfcReferencedSectionedSpine *clone = static_cast< IfcReferencedSectionedSpine * > (find(obj));
        if (!clone) {
            return ExpressDataSet::cloneIfcReferencedSectionedSpine(_dataset, *obj, *this);
        }
        else {
            return clone;
        }
    }
    else {
        return 0;
    }
}

