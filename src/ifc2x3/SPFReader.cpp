// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#define LOG_STRING_VECTOR _errors

#include <ifc2x3/SPFReader.h>

#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/IfcOrganizationRelationship.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcDerivedUnit.h>
#include <ifc2x3/IfcDerivedUnitElement.h>
#include <ifc2x3/IfcNamedUnit.h>
#include <ifc2x3/IfcDimensionalExponents.h>
#include <ifc2x3/IfcMonetaryUnit.h>
#include <ifc2x3/IfcAxis2Placement2D.h>
#include <ifc2x3/IfcPlacement.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/IfcRepresentationItem.h>
#include <ifc2x3/IfcPresentationLayerAssignment.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/IfcRepresentationContext.h>
#include <ifc2x3/IfcRepresentationMap.h>
#include <ifc2x3/IfcMappedItem.h>
#include <ifc2x3/IfcCartesianTransformationOperator.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcPoint.h>
#include <ifc2x3/IfcProductRepresentation.h>
#include <ifc2x3/IfcStyledItem.h>
#include <ifc2x3/IfcPresentationStyleAssignment.h>
#include <ifc2x3/IfcCurveStyle.h>
#include <ifc2x3/IfcPresentationStyle.h>
#include <ifc2x3/IfcPreDefinedCurveFont.h>
#include <ifc2x3/IfcPreDefinedItem.h>
#include <ifc2x3/IfcCurveStyleFont.h>
#include <ifc2x3/IfcCurveStyleFontPattern.h>
#include <ifc2x3/IfcCurveStyleFontAndScaling.h>
#include <ifc2x3/IfcColourSpecification.h>
#include <ifc2x3/IfcPreDefinedColour.h>
#include <ifc2x3/IfcSymbolStyle.h>
#include <ifc2x3/IfcFillAreaStyle.h>
#include <ifc2x3/IfcFillAreaStyleHatching.h>
#include <ifc2x3/IfcOneDirectionRepeatFactor.h>
#include <ifc2x3/IfcVector.h>
#include <ifc2x3/IfcFillAreaStyleTiles.h>
#include <ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h>
#include <ifc2x3/IfcAnnotationSymbolOccurrence.h>
#include <ifc2x3/IfcAnnotationOccurrence.h>
#include <ifc2x3/IfcExternallyDefinedHatchStyle.h>
#include <ifc2x3/IfcExternalReference.h>
#include <ifc2x3/IfcTextStyle.h>
#include <ifc2x3/IfcTextStyleForDefinedFont.h>
#include <ifc2x3/IfcTextStyleWithBoxCharacteristics.h>
#include <ifc2x3/IfcTextStyleTextModel.h>
#include <ifc2x3/IfcPreDefinedTextFont.h>
#include <ifc2x3/IfcExternallyDefinedTextFont.h>
#include <ifc2x3/IfcSurfaceStyle.h>
#include <ifc2x3/IfcSurfaceStyleShading.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/IfcSurfaceStyleLighting.h>
#include <ifc2x3/IfcSurfaceStyleWithTextures.h>
#include <ifc2x3/IfcSurfaceTexture.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include <ifc2x3/IfcExternallyDefinedSurfaceStyle.h>
#include <ifc2x3/IfcSurfaceStyleRefraction.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcSolidModel.h>
#include <ifc2x3/IfcHalfSpaceSolid.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/IfcBooleanResult.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>
#include <ifc2x3/IfcClassificationNotation.h>
#include <ifc2x3/IfcClassificationNotationFacet.h>
#include <ifc2x3/IfcClassificationReference.h>
#include <ifc2x3/IfcClassification.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcClassificationItem.h>
#include <ifc2x3/IfcClassificationItemRelationship.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcEdgeCurve.h>
#include <ifc2x3/IfcEdge.h>
#include <ifc2x3/IfcTopologicalRepresentationItem.h>
#include <ifc2x3/IfcVertex.h>
#include <ifc2x3/IfcLocalTime.h>
#include <ifc2x3/IfcCoordinatedUniversalTimeOffset.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcPreDefinedSymbol.h>
#include <ifc2x3/IfcExternallyDefinedSymbol.h>
#include <ifc2x3/IfcDocumentReference.h>
#include <ifc2x3/IfcDocumentInformation.h>
#include <ifc2x3/IfcDocumentElectronicFormat.h>
#include <ifc2x3/IfcDocumentInformationRelationship.h>
#include <ifc2x3/IfcAnnotationCurveOccurrence.h>
#include <ifc2x3/IfcAnnotationTextOccurrence.h>
#include <ifc2x3/IfcLibraryReference.h>
#include <ifc2x3/IfcLibraryInformation.h>
#include <ifc2x3/IfcLightIntensityDistribution.h>
#include <ifc2x3/IfcLightDistributionData.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcMaterialDefinitionRepresentation.h>
#include <ifc2x3/IfcMaterialClassificationRelationship.h>
#include <ifc2x3/IfcMaterialList.h>
#include <ifc2x3/IfcMaterialLayerSetUsage.h>
#include <ifc2x3/IfcMaterialLayerSet.h>
#include <ifc2x3/IfcMaterialLayer.h>
#include <ifc2x3/IfcTable.h>
#include <ifc2x3/IfcTableRow.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcTimeSeriesReferenceRelationship.h>
#include <ifc2x3/IfcCostValue.h>
#include <ifc2x3/IfcAppliedValue.h>
#include <ifc2x3/IfcReferencesValueDocument.h>
#include <ifc2x3/IfcAppliedValueRelationship.h>
#include <ifc2x3/IfcVertexPoint.h>
#include <ifc2x3/IfcClosedShell.h>
#include <ifc2x3/IfcConnectedFaceSet.h>
#include <ifc2x3/IfcFace.h>
#include <ifc2x3/IfcFaceBound.h>
#include <ifc2x3/IfcLoop.h>
#include <ifc2x3/IfcOpenShell.h>
#include <ifc2x3/IfcStructuralItem.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcObject.h>
#include <ifc2x3/IfcObjectDefinition.h>
#include <ifc2x3/IfcRoot.h>
#include <ifc2x3/IfcOwnerHistory.h>
#include <ifc2x3/IfcApplication.h>
#include <ifc2x3/IfcRelAssigns.h>
#include <ifc2x3/IfcRelationship.h>
#include <ifc2x3/IfcRelDecomposes.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/IfcRelDefines.h>
#include <ifc2x3/IfcObjectPlacement.h>
#include <ifc2x3/IfcLocalPlacement.h>
#include <ifc2x3/IfcRelAssignsToProduct.h>
#include <ifc2x3/IfcRelConnectsStructuralActivity.h>
#include <ifc2x3/IfcRelConnects.h>
#include <ifc2x3/IfcStructuralActivity.h>
#include <ifc2x3/IfcStructuralLoad.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcRelConnectsStructuralElement.h>
#include <ifc2x3/IfcStructuralMember.h>
#include <ifc2x3/IfcRelConnectsStructuralMember.h>
#include <ifc2x3/IfcStructuralConnection.h>
#include <ifc2x3/IfcBoundaryCondition.h>
#include <ifc2x3/IfcStructuralConnectionCondition.h>
#include <ifc2x3/IfcRelFillsElement.h>
#include <ifc2x3/IfcOpeningElement.h>
#include <ifc2x3/IfcFeatureElementSubtraction.h>
#include <ifc2x3/IfcFeatureElement.h>
#include <ifc2x3/IfcRelVoidsElement.h>
#include <ifc2x3/IfcRelConnectsElements.h>
#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/IfcRelCoversBldgElements.h>
#include <ifc2x3/IfcCovering.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/IfcRelCoversSpaces.h>
#include <ifc2x3/IfcSpace.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/IfcRelReferencedInSpatialStructure.h>
#include <ifc2x3/IfcRelServicesBuildings.h>
#include <ifc2x3/IfcSystem.h>
#include <ifc2x3/IfcGroup.h>
#include <ifc2x3/IfcRelAssignsToGroup.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
#include <ifc2x3/IfcRelSpaceBoundary.h>
#include <ifc2x3/IfcRelProjectsElement.h>
#include <ifc2x3/IfcFeatureElementAddition.h>
#include <ifc2x3/IfcRelConnectsPortToElement.h>
#include <ifc2x3/IfcPort.h>
#include <ifc2x3/IfcRelConnectsPorts.h>
#include <ifc2x3/IfcRelConnectsWithRealizingElements.h>
#include <ifc2x3/IfcFaceSurface.h>
#include <ifc2x3/IfcFaceBasedSurfaceModel.h>
#include <ifc2x3/Ifc2DCompositeCurve.h>
#include <ifc2x3/IfcCompositeCurve.h>
#include <ifc2x3/IfcCompositeCurveSegment.h>
#include <ifc2x3/IfcActionRequest.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/IfcRelAssignsToControl.h>
#include <ifc2x3/IfcActor.h>
#include <ifc2x3/IfcRelAssignsToActor.h>
#include <ifc2x3/IfcActuatorType.h>
#include <ifc2x3/IfcDistributionControlElementType.h>
#include <ifc2x3/IfcDistributionElementType.h>
#include <ifc2x3/IfcElementType.h>
#include <ifc2x3/IfcTypeProduct.h>
#include <ifc2x3/IfcTypeObject.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/IfcPropertyDefinition.h>
#include <ifc2x3/IfcRelDefinesByProperties.h>
#include <ifc2x3/IfcRelDefinesByType.h>
#include <ifc2x3/IfcAirTerminalBoxType.h>
#include <ifc2x3/IfcFlowControllerType.h>
#include <ifc2x3/IfcDistributionFlowElementType.h>
#include <ifc2x3/IfcAirTerminalType.h>
#include <ifc2x3/IfcFlowTerminalType.h>
#include <ifc2x3/IfcAirToAirHeatRecoveryType.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/IfcAlarmType.h>
#include <ifc2x3/IfcAngularDimension.h>
#include <ifc2x3/IfcDimensionCurveDirectedCallout.h>
#include <ifc2x3/IfcDraughtingCallout.h>
#include <ifc2x3/IfcDraughtingCalloutRelationship.h>
#include <ifc2x3/IfcAnnotation.h>
#include <ifc2x3/IfcAnnotationFillArea.h>
#include <ifc2x3/IfcAnnotationFillAreaOccurrence.h>
#include <ifc2x3/IfcAnnotationSurface.h>
#include <ifc2x3/IfcTextureCoordinate.h>
#include <ifc2x3/IfcAnnotationSurfaceOccurrence.h>
#include <ifc2x3/IfcApproval.h>
#include <ifc2x3/IfcApprovalActorRelationship.h>
#include <ifc2x3/IfcApprovalRelationship.h>
#include <ifc2x3/IfcApprovalPropertyRelationship.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/IfcPropertyDependencyRelationship.h>
#include <ifc2x3/IfcComplexProperty.h>
#include <ifc2x3/IfcArbitraryClosedProfileDef.h>
#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/IfcArbitraryOpenProfileDef.h>
#include <ifc2x3/IfcArbitraryProfileDefWithVoids.h>
#include <ifc2x3/IfcAsset.h>
#include <ifc2x3/IfcAsymmetricIShapeProfileDef.h>
#include <ifc2x3/IfcIShapeProfileDef.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/IfcAxis1Placement.h>
#include <ifc2x3/IfcBSplineCurve.h>
#include <ifc2x3/IfcBeam.h>
#include <ifc2x3/IfcBeamType.h>
#include <ifc2x3/IfcBuildingElementType.h>
#include <ifc2x3/IfcBezierCurve.h>
#include <ifc2x3/IfcBlobTexture.h>
#include <ifc2x3/IfcBlock.h>
#include <ifc2x3/IfcBoilerType.h>
#include <ifc2x3/IfcBooleanClippingResult.h>
#include <ifc2x3/IfcBoundaryEdgeCondition.h>
#include <ifc2x3/IfcBoundaryFaceCondition.h>
#include <ifc2x3/IfcBoundaryNodeCondition.h>
#include <ifc2x3/IfcBoundaryNodeConditionWarping.h>
#include <ifc2x3/IfcBoundedSurface.h>
#include <ifc2x3/IfcBoundingBox.h>
#include <ifc2x3/IfcBoxedHalfSpace.h>
#include <ifc2x3/IfcBuilding.h>
#include <ifc2x3/IfcPostalAddress.h>
#include <ifc2x3/IfcBuildingElementComponent.h>
#include <ifc2x3/IfcBuildingElementPart.h>
#include <ifc2x3/IfcBuildingElementProxy.h>
#include <ifc2x3/IfcBuildingElementProxyType.h>
#include <ifc2x3/IfcBuildingStorey.h>
#include <ifc2x3/IfcCShapeProfileDef.h>
#include <ifc2x3/IfcCableCarrierFittingType.h>
#include <ifc2x3/IfcFlowFittingType.h>
#include <ifc2x3/IfcCableCarrierSegmentType.h>
#include <ifc2x3/IfcFlowSegmentType.h>
#include <ifc2x3/IfcCableSegmentType.h>
#include <ifc2x3/IfcCartesianTransformationOperator2DnonUniform.h>
#include <ifc2x3/IfcCartesianTransformationOperator3D.h>
#include <ifc2x3/IfcCartesianTransformationOperator3DnonUniform.h>
#include <ifc2x3/IfcCenterLineProfileDef.h>
#include <ifc2x3/IfcChamferEdgeFeature.h>
#include <ifc2x3/IfcEdgeFeature.h>
#include <ifc2x3/IfcChillerType.h>
#include <ifc2x3/IfcCircle.h>
#include <ifc2x3/IfcConic.h>
#include <ifc2x3/IfcCircleHollowProfileDef.h>
#include <ifc2x3/IfcCircleProfileDef.h>
#include <ifc2x3/IfcCoilType.h>
#include <ifc2x3/IfcColumn.h>
#include <ifc2x3/IfcColumnType.h>
#include <ifc2x3/IfcCompositeProfileDef.h>
#include <ifc2x3/IfcCompressorType.h>
#include <ifc2x3/IfcFlowMovingDeviceType.h>
#include <ifc2x3/IfcCondenserType.h>
#include <ifc2x3/IfcCondition.h>
#include <ifc2x3/IfcConditionCriterion.h>
#include <ifc2x3/IfcConnectionCurveGeometry.h>
#include <ifc2x3/IfcConnectionPointEccentricity.h>
#include <ifc2x3/IfcConnectionPointGeometry.h>
#include <ifc2x3/IfcConnectionPortGeometry.h>
#include <ifc2x3/IfcConnectionSurfaceGeometry.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/IfcConstraintClassificationRelationship.h>
#include <ifc2x3/IfcConstraintRelationship.h>
#include <ifc2x3/IfcPropertyConstraintRelationship.h>
#include <ifc2x3/IfcConstraintAggregationRelationship.h>
#include <ifc2x3/IfcConstructionEquipmentResource.h>
#include <ifc2x3/IfcConstructionResource.h>
#include <ifc2x3/IfcResource.h>
#include <ifc2x3/IfcRelAssignsToResource.h>
#include <ifc2x3/IfcConstructionMaterialResource.h>
#include <ifc2x3/IfcConstructionProductResource.h>
#include <ifc2x3/IfcContextDependentUnit.h>
#include <ifc2x3/IfcControllerType.h>
#include <ifc2x3/IfcConversionBasedUnit.h>
#include <ifc2x3/IfcCooledBeamType.h>
#include <ifc2x3/IfcCoolingTowerType.h>
#include <ifc2x3/IfcCostItem.h>
#include <ifc2x3/IfcCostSchedule.h>
#include <ifc2x3/IfcCoveringType.h>
#include <ifc2x3/IfcCraneRailAShapeProfileDef.h>
#include <ifc2x3/IfcCraneRailFShapeProfileDef.h>
#include <ifc2x3/IfcCrewResource.h>
#include <ifc2x3/IfcCsgSolid.h>
#include <ifc2x3/IfcCurrencyRelationship.h>
#include <ifc2x3/IfcCurtainWall.h>
#include <ifc2x3/IfcCurtainWallType.h>
#include <ifc2x3/IfcCurveBoundedPlane.h>
#include <ifc2x3/IfcPlane.h>
#include <ifc2x3/IfcElementarySurface.h>
#include <ifc2x3/IfcDamperType.h>
#include <ifc2x3/IfcDefinedSymbol.h>
#include <ifc2x3/IfcDerivedProfileDef.h>
#include <ifc2x3/IfcDiameterDimension.h>
#include <ifc2x3/IfcDimensionCalloutRelationship.h>
#include <ifc2x3/IfcDimensionCurve.h>
#include <ifc2x3/IfcTerminatorSymbol.h>
#include <ifc2x3/IfcDimensionCurveTerminator.h>
#include <ifc2x3/IfcDimensionPair.h>
#include <ifc2x3/IfcDiscreteAccessory.h>
#include <ifc2x3/IfcElementComponent.h>
#include <ifc2x3/IfcDiscreteAccessoryType.h>
#include <ifc2x3/IfcElementComponentType.h>
#include <ifc2x3/IfcDistributionChamberElement.h>
#include <ifc2x3/IfcDistributionFlowElement.h>
#include <ifc2x3/IfcDistributionElement.h>
#include <ifc2x3/IfcRelFlowControlElements.h>
#include <ifc2x3/IfcDistributionControlElement.h>
#include <ifc2x3/IfcDistributionChamberElementType.h>
#include <ifc2x3/IfcDistributionPort.h>
#include <ifc2x3/IfcDoor.h>
#include <ifc2x3/IfcDoorLiningProperties.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/IfcShapeModel.h>
#include <ifc2x3/IfcProductDefinitionShape.h>
#include <ifc2x3/IfcDoorPanelProperties.h>
#include <ifc2x3/IfcDoorStyle.h>
#include <ifc2x3/IfcDraughtingPreDefinedColour.h>
#include <ifc2x3/IfcDraughtingPreDefinedCurveFont.h>
#include <ifc2x3/IfcDraughtingPreDefinedTextFont.h>
#include <ifc2x3/IfcDuctFittingType.h>
#include <ifc2x3/IfcDuctSegmentType.h>
#include <ifc2x3/IfcDuctSilencerType.h>
#include <ifc2x3/IfcFlowTreatmentDeviceType.h>
#include <ifc2x3/IfcEdgeLoop.h>
#include <ifc2x3/IfcOrientedEdge.h>
#include <ifc2x3/IfcElectricApplianceType.h>
#include <ifc2x3/IfcElectricDistributionPoint.h>
#include <ifc2x3/IfcFlowController.h>
#include <ifc2x3/IfcElectricFlowStorageDeviceType.h>
#include <ifc2x3/IfcFlowStorageDeviceType.h>
#include <ifc2x3/IfcElectricGeneratorType.h>
#include <ifc2x3/IfcElectricHeaterType.h>
#include <ifc2x3/IfcElectricMotorType.h>
#include <ifc2x3/IfcElectricTimeControlType.h>
#include <ifc2x3/IfcElectricalBaseProperties.h>
#include <ifc2x3/IfcEnergyProperties.h>
#include <ifc2x3/IfcElectricalCircuit.h>
#include <ifc2x3/IfcElectricalElement.h>
#include <ifc2x3/IfcElementAssembly.h>
#include <ifc2x3/IfcElementQuantity.h>
#include <ifc2x3/IfcPhysicalQuantity.h>
#include <ifc2x3/IfcPhysicalComplexQuantity.h>
#include <ifc2x3/IfcEllipse.h>
#include <ifc2x3/IfcEllipseProfileDef.h>
#include <ifc2x3/IfcEnergyConversionDevice.h>
#include <ifc2x3/IfcEnvironmentalImpactValue.h>
#include <ifc2x3/IfcEquipmentElement.h>
#include <ifc2x3/IfcEquipmentStandard.h>
#include <ifc2x3/IfcEvaporativeCoolerType.h>
#include <ifc2x3/IfcEvaporatorType.h>
#include <ifc2x3/IfcExtendedMaterialProperties.h>
#include <ifc2x3/IfcMaterialProperties.h>
#include <ifc2x3/IfcExtrudedAreaSolid.h>
#include <ifc2x3/IfcSweptAreaSolid.h>
#include <ifc2x3/IfcFaceOuterBound.h>
#include <ifc2x3/IfcFacetedBrep.h>
#include <ifc2x3/IfcManifoldSolidBrep.h>
#include <ifc2x3/IfcFacetedBrepWithVoids.h>
#include <ifc2x3/IfcFailureConnectionCondition.h>
#include <ifc2x3/IfcFanType.h>
#include <ifc2x3/IfcFastener.h>
#include <ifc2x3/IfcFastenerType.h>
#include <ifc2x3/IfcFilterType.h>
#include <ifc2x3/IfcFireSuppressionTerminalType.h>
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
#include <ifc2x3/IfcProfileProperties.h>
#include <ifc2x3/IfcGeometricCurveSet.h>
#include <ifc2x3/IfcGeometricSet.h>
#include <ifc2x3/IfcGeometricRepresentationContext.h>
#include <ifc2x3/IfcGeometricRepresentationSubContext.h>
#include <ifc2x3/IfcGrid.h>
#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcVirtualGridIntersection.h>
#include <ifc2x3/IfcGridPlacement.h>
#include <ifc2x3/IfcHeatExchangerType.h>
#include <ifc2x3/IfcHumidifierType.h>
#include <ifc2x3/IfcHygroscopicMaterialProperties.h>
#include <ifc2x3/IfcImageTexture.h>
#include <ifc2x3/IfcInventory.h>
#include <ifc2x3/IfcIrregularTimeSeries.h>
#include <ifc2x3/IfcIrregularTimeSeriesValue.h>
#include <ifc2x3/IfcJunctionBoxType.h>
#include <ifc2x3/IfcLShapeProfileDef.h>
#include <ifc2x3/IfcLaborResource.h>
#include <ifc2x3/IfcLampType.h>
#include <ifc2x3/IfcLightFixtureType.h>
#include <ifc2x3/IfcLightSource.h>
#include <ifc2x3/IfcLightSourceAmbient.h>
#include <ifc2x3/IfcLightSourceDirectional.h>
#include <ifc2x3/IfcLightSourceGoniometric.h>
#include <ifc2x3/IfcLightSourcePositional.h>
#include <ifc2x3/IfcLightSourceSpot.h>
#include <ifc2x3/IfcLine.h>
#include <ifc2x3/IfcLinearDimension.h>
#include <ifc2x3/IfcMechanicalConcreteMaterialProperties.h>
#include <ifc2x3/IfcMechanicalMaterialProperties.h>
#include <ifc2x3/IfcMechanicalFastener.h>
#include <ifc2x3/IfcMechanicalFastenerType.h>
#include <ifc2x3/IfcMechanicalSteelMaterialProperties.h>
#include <ifc2x3/IfcRelaxation.h>
#include <ifc2x3/IfcMember.h>
#include <ifc2x3/IfcMemberType.h>
#include <ifc2x3/IfcMetric.h>
#include <ifc2x3/IfcMotorConnectionType.h>
#include <ifc2x3/IfcMove.h>
#include <ifc2x3/IfcTask.h>
#include <ifc2x3/IfcProcess.h>
#include <ifc2x3/IfcRelAssignsToProcess.h>
#include <ifc2x3/IfcRelSequence.h>
#include <ifc2x3/IfcObjective.h>
#include <ifc2x3/IfcOccupant.h>
#include <ifc2x3/IfcOffsetCurve2D.h>
#include <ifc2x3/IfcOffsetCurve3D.h>
#include <ifc2x3/IfcOpticalMaterialProperties.h>
#include <ifc2x3/IfcOrderAction.h>
#include <ifc2x3/IfcOutletType.h>
#include <ifc2x3/IfcPath.h>
#include <ifc2x3/IfcPerformanceHistory.h>
#include <ifc2x3/IfcPermeableCoveringProperties.h>
#include <ifc2x3/IfcPermit.h>
#include <ifc2x3/IfcPhysicalSimpleQuantity.h>
#include <ifc2x3/IfcPile.h>
#include <ifc2x3/IfcPipeFittingType.h>
#include <ifc2x3/IfcPipeSegmentType.h>
#include <ifc2x3/IfcPixelTexture.h>
#include <ifc2x3/IfcPlanarBox.h>
#include <ifc2x3/IfcPlanarExtent.h>
#include <ifc2x3/IfcPlate.h>
#include <ifc2x3/IfcPlateType.h>
#include <ifc2x3/IfcPointOnCurve.h>
#include <ifc2x3/IfcPointOnSurface.h>
#include <ifc2x3/IfcPolyLoop.h>
#include <ifc2x3/IfcPolygonalBoundedHalfSpace.h>
#include <ifc2x3/IfcPolyline.h>
#include <ifc2x3/IfcPreDefinedDimensionSymbol.h>
#include <ifc2x3/IfcPreDefinedPointMarkerSymbol.h>
#include <ifc2x3/IfcPreDefinedTerminatorSymbol.h>
#include <ifc2x3/IfcPresentationLayerWithStyle.h>
#include <ifc2x3/IfcProcedure.h>
#include <ifc2x3/IfcProductsOfCombustionProperties.h>
#include <ifc2x3/IfcProject.h>
#include <ifc2x3/IfcUnitAssignment.h>
#include <ifc2x3/IfcProjectOrder.h>
#include <ifc2x3/IfcProjectOrderRecord.h>
#include <ifc2x3/IfcRelAssignsToProjectOrder.h>
#include <ifc2x3/IfcProjectionCurve.h>
#include <ifc2x3/IfcProjectionElement.h>
#include <ifc2x3/IfcPropertyBoundedValue.h>
#include <ifc2x3/IfcSimpleProperty.h>
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
#include <ifc2x3/IfcRegularTimeSeries.h>
#include <ifc2x3/IfcTimeSeriesValue.h>
#include <ifc2x3/IfcReinforcementBarProperties.h>
#include <ifc2x3/IfcReinforcementDefinitionProperties.h>
#include <ifc2x3/IfcSectionReinforcementProperties.h>
#include <ifc2x3/IfcSectionProperties.h>
#include <ifc2x3/IfcReinforcingBar.h>
#include <ifc2x3/IfcReinforcingElement.h>
#include <ifc2x3/IfcReinforcingMesh.h>
#include <ifc2x3/IfcRelAggregates.h>
#include <ifc2x3/IfcRelAssignsTasks.h>
#include <ifc2x3/IfcScheduleTimeControl.h>
#include <ifc2x3/IfcRelAssociatesAppliedValue.h>
#include <ifc2x3/IfcRelAssociatesApproval.h>
#include <ifc2x3/IfcRelAssociatesClassification.h>
#include <ifc2x3/IfcRelAssociatesConstraint.h>
#include <ifc2x3/IfcRelAssociatesDocument.h>
#include <ifc2x3/IfcRelAssociatesLibrary.h>
#include <ifc2x3/IfcRelAssociatesMaterial.h>
#include <ifc2x3/IfcRelAssociatesProfileProperties.h>
#include <ifc2x3/IfcRelConnectsPathElements.h>
#include <ifc2x3/IfcRelConnectsWithEccentricity.h>
#include <ifc2x3/IfcRelInteractionRequirements.h>
#include <ifc2x3/IfcSpaceProgram.h>
#include <ifc2x3/IfcRelNests.h>
#include <ifc2x3/IfcRelOccupiesSpaces.h>
#include <ifc2x3/IfcRelOverridesProperties.h>
#include <ifc2x3/IfcRelSchedulesCostItems.h>
#include <ifc2x3/IfcRevolvedAreaSolid.h>
#include <ifc2x3/IfcRibPlateProfileProperties.h>
#include <ifc2x3/IfcRightCircularCone.h>
#include <ifc2x3/IfcRightCircularCylinder.h>
#include <ifc2x3/IfcRoof.h>
#include <ifc2x3/IfcRoundedEdgeFeature.h>
#include <ifc2x3/IfcRoundedRectangleProfileDef.h>
#include <ifc2x3/IfcSIUnit.h>
#include <ifc2x3/IfcSanitaryTerminalType.h>
#include <ifc2x3/IfcSectionedSpine.h>
#include <ifc2x3/IfcSensorType.h>
#include <ifc2x3/IfcServiceLife.h>
#include <ifc2x3/IfcServiceLifeFactor.h>
#include <ifc2x3/IfcShapeRepresentation.h>
#include <ifc2x3/IfcShellBasedSurfaceModel.h>
#include <ifc2x3/IfcSite.h>
#include <ifc2x3/IfcSlab.h>
#include <ifc2x3/IfcSlabType.h>
#include <ifc2x3/IfcSlippageConnectionCondition.h>
#include <ifc2x3/IfcSoundProperties.h>
#include <ifc2x3/IfcSoundValue.h>
#include <ifc2x3/IfcSpaceHeaterType.h>
#include <ifc2x3/IfcSpaceThermalLoadProperties.h>
#include <ifc2x3/IfcSpaceType.h>
#include <ifc2x3/IfcSpatialStructureElementType.h>
#include <ifc2x3/IfcSphere.h>
#include <ifc2x3/IfcStackTerminalType.h>
#include <ifc2x3/IfcStair.h>
#include <ifc2x3/IfcStairFlight.h>
#include <ifc2x3/IfcStairFlightType.h>
#include <ifc2x3/IfcStructuralAction.h>
#include <ifc2x3/IfcStructuralReaction.h>
#include <ifc2x3/IfcStructuralAnalysisModel.h>
#include <ifc2x3/IfcStructuralLoadGroup.h>
#include <ifc2x3/IfcStructuralResultGroup.h>
#include <ifc2x3/IfcStructuralCurveConnection.h>
#include <ifc2x3/IfcStructuralCurveMember.h>
#include <ifc2x3/IfcStructuralCurveMemberVarying.h>
#include <ifc2x3/IfcStructuralLinearAction.h>
#include <ifc2x3/IfcStructuralLinearActionVarying.h>
#include <ifc2x3/IfcStructuralLoadLinearForce.h>
#include <ifc2x3/IfcStructuralLoadStatic.h>
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
#include <ifc2x3/IfcStructuralSteelProfileProperties.h>
#include <ifc2x3/IfcStructuralSurfaceConnection.h>
#include <ifc2x3/IfcStructuralSurfaceMember.h>
#include <ifc2x3/IfcStructuralSurfaceMemberVarying.h>
#include <ifc2x3/IfcStructuredDimensionCallout.h>
#include <ifc2x3/IfcStyleModel.h>
#include <ifc2x3/IfcStyledRepresentation.h>
#include <ifc2x3/IfcSubContractResource.h>
#include <ifc2x3/IfcSubedge.h>
#include <ifc2x3/IfcSurfaceCurveSweptAreaSolid.h>
#include <ifc2x3/IfcSurfaceOfLinearExtrusion.h>
#include <ifc2x3/IfcSweptSurface.h>
#include <ifc2x3/IfcSurfaceOfRevolution.h>
#include <ifc2x3/IfcSurfaceStyleRendering.h>
#include <ifc2x3/IfcSweptDiskSolid.h>
#include <ifc2x3/IfcSwitchingDeviceType.h>
#include <ifc2x3/IfcSystemFurnitureElementType.h>
#include <ifc2x3/IfcTShapeProfileDef.h>
#include <ifc2x3/IfcTankType.h>
#include <ifc2x3/IfcTelecomAddress.h>
#include <ifc2x3/IfcTendon.h>
#include <ifc2x3/IfcTendonAnchor.h>
#include <ifc2x3/IfcTextLiteral.h>
#include <ifc2x3/IfcTextLiteralWithExtent.h>
#include <ifc2x3/IfcTextStyleFontModel.h>
#include <ifc2x3/IfcTextureCoordinateGenerator.h>
#include <ifc2x3/IfcTextureMap.h>
#include <ifc2x3/IfcVertexBasedTextureMap.h>
#include <ifc2x3/IfcTextureVertex.h>
#include <ifc2x3/IfcThermalMaterialProperties.h>
#include <ifc2x3/IfcTimeSeriesSchedule.h>
#include <ifc2x3/IfcTopologyRepresentation.h>
#include <ifc2x3/IfcTransformerType.h>
#include <ifc2x3/IfcTransportElement.h>
#include <ifc2x3/IfcTransportElementType.h>
#include <ifc2x3/IfcTrapeziumProfileDef.h>
#include <ifc2x3/IfcTrimmedCurve.h>
#include <ifc2x3/IfcTubeBundleType.h>
#include <ifc2x3/IfcTwoDirectionRepeatFactor.h>
#include <ifc2x3/IfcUShapeProfileDef.h>
#include <ifc2x3/IfcUnitaryEquipmentType.h>
#include <ifc2x3/IfcValveType.h>
#include <ifc2x3/IfcVertexLoop.h>
#include <ifc2x3/IfcVibrationIsolatorType.h>
#include <ifc2x3/IfcVirtualElement.h>
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
#include <Step/BaseSPFObject.h>
#include <Step/BaseSPFReader.h>
#include <Step/SPFFunctions.h>
#include <Step/SPFData.h>

#include <vector>



using namespace ifc2x3;

SPFReader::SPFReader()
{
    m_schemaIdentifiers.clear();
    m_schemaIdentifiers.push_back(Step::String("IFC2X3"));

    m_Str2LoadFn["IFC2DCOMPOSITECURVE"] = &SPFReader::loadIFC2DCOMPOSITECURVE;
    m_Str2LoadFn["IFCACTIONREQUEST"] = &SPFReader::loadIFCACTIONREQUEST;
    m_Str2LoadFn["IFCACTOR"] = &SPFReader::loadIFCACTOR;
    m_Str2LoadFn["IFCACTORROLE"] = &SPFReader::loadIFCACTORROLE;
    m_Str2LoadFn["IFCACTUATORTYPE"] = &SPFReader::loadIFCACTUATORTYPE;
    m_Str2LoadFn["IFCADDRESS"] = &SPFReader::loadIFCADDRESS;
    m_Str2LoadFn["IFCAIRTERMINALBOXTYPE"] = &SPFReader::loadIFCAIRTERMINALBOXTYPE;
    m_Str2LoadFn["IFCAIRTERMINALTYPE"] = &SPFReader::loadIFCAIRTERMINALTYPE;
    m_Str2LoadFn["IFCAIRTOAIRHEATRECOVERYTYPE"] = &SPFReader::loadIFCAIRTOAIRHEATRECOVERYTYPE;
    m_Str2LoadFn["IFCALARMTYPE"] = &SPFReader::loadIFCALARMTYPE;
    m_Str2LoadFn["IFCANGULARDIMENSION"] = &SPFReader::loadIFCANGULARDIMENSION;
    m_Str2LoadFn["IFCANNOTATION"] = &SPFReader::loadIFCANNOTATION;
    m_Str2LoadFn["IFCANNOTATIONCURVEOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONCURVEOCCURRENCE;
    m_Str2LoadFn["IFCANNOTATIONFILLAREA"] = &SPFReader::loadIFCANNOTATIONFILLAREA;
    m_Str2LoadFn["IFCANNOTATIONFILLAREAOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONFILLAREAOCCURRENCE;
    m_Str2LoadFn["IFCANNOTATIONOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONOCCURRENCE;
    m_Str2LoadFn["IFCANNOTATIONSURFACE"] = &SPFReader::loadIFCANNOTATIONSURFACE;
    m_Str2LoadFn["IFCANNOTATIONSURFACEOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONSURFACEOCCURRENCE;
    m_Str2LoadFn["IFCANNOTATIONSYMBOLOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONSYMBOLOCCURRENCE;
    m_Str2LoadFn["IFCANNOTATIONTEXTOCCURRENCE"] = &SPFReader::loadIFCANNOTATIONTEXTOCCURRENCE;
    m_Str2LoadFn["IFCAPPLICATION"] = &SPFReader::loadIFCAPPLICATION;
    m_Str2LoadFn["IFCAPPLIEDVALUE"] = &SPFReader::loadIFCAPPLIEDVALUE;
    m_Str2LoadFn["IFCAPPLIEDVALUERELATIONSHIP"] = &SPFReader::loadIFCAPPLIEDVALUERELATIONSHIP;
    m_Str2LoadFn["IFCAPPROVAL"] = &SPFReader::loadIFCAPPROVAL;
    m_Str2LoadFn["IFCAPPROVALACTORRELATIONSHIP"] = &SPFReader::loadIFCAPPROVALACTORRELATIONSHIP;
    m_Str2LoadFn["IFCAPPROVALPROPERTYRELATIONSHIP"] = &SPFReader::loadIFCAPPROVALPROPERTYRELATIONSHIP;
    m_Str2LoadFn["IFCAPPROVALRELATIONSHIP"] = &SPFReader::loadIFCAPPROVALRELATIONSHIP;
    m_Str2LoadFn["IFCARBITRARYCLOSEDPROFILEDEF"] = &SPFReader::loadIFCARBITRARYCLOSEDPROFILEDEF;
    m_Str2LoadFn["IFCARBITRARYOPENPROFILEDEF"] = &SPFReader::loadIFCARBITRARYOPENPROFILEDEF;
    m_Str2LoadFn["IFCARBITRARYPROFILEDEFWITHVOIDS"] = &SPFReader::loadIFCARBITRARYPROFILEDEFWITHVOIDS;
    m_Str2LoadFn["IFCASSET"] = &SPFReader::loadIFCASSET;
    m_Str2LoadFn["IFCASYMMETRICISHAPEPROFILEDEF"] = &SPFReader::loadIFCASYMMETRICISHAPEPROFILEDEF;
    m_Str2LoadFn["IFCAXIS1PLACEMENT"] = &SPFReader::loadIFCAXIS1PLACEMENT;
    m_Str2LoadFn["IFCAXIS2PLACEMENT2D"] = &SPFReader::loadIFCAXIS2PLACEMENT2D;
    m_Str2LoadFn["IFCAXIS2PLACEMENT3D"] = &SPFReader::loadIFCAXIS2PLACEMENT3D;
    m_Str2LoadFn["IFCBEAM"] = &SPFReader::loadIFCBEAM;
    m_Str2LoadFn["IFCBEAMTYPE"] = &SPFReader::loadIFCBEAMTYPE;
    m_Str2LoadFn["IFCBEZIERCURVE"] = &SPFReader::loadIFCBEZIERCURVE;
    m_Str2LoadFn["IFCBLOBTEXTURE"] = &SPFReader::loadIFCBLOBTEXTURE;
    m_Str2LoadFn["IFCBLOCK"] = &SPFReader::loadIFCBLOCK;
    m_Str2LoadFn["IFCBOILERTYPE"] = &SPFReader::loadIFCBOILERTYPE;
    m_Str2LoadFn["IFCBOOLEANCLIPPINGRESULT"] = &SPFReader::loadIFCBOOLEANCLIPPINGRESULT;
    m_Str2LoadFn["IFCBOOLEANRESULT"] = &SPFReader::loadIFCBOOLEANRESULT;
    m_Str2LoadFn["IFCBOUNDARYCONDITION"] = &SPFReader::loadIFCBOUNDARYCONDITION;
    m_Str2LoadFn["IFCBOUNDARYEDGECONDITION"] = &SPFReader::loadIFCBOUNDARYEDGECONDITION;
    m_Str2LoadFn["IFCBOUNDARYFACECONDITION"] = &SPFReader::loadIFCBOUNDARYFACECONDITION;
    m_Str2LoadFn["IFCBOUNDARYNODECONDITION"] = &SPFReader::loadIFCBOUNDARYNODECONDITION;
    m_Str2LoadFn["IFCBOUNDARYNODECONDITIONWARPING"] = &SPFReader::loadIFCBOUNDARYNODECONDITIONWARPING;
    m_Str2LoadFn["IFCBOUNDEDCURVE"] = &SPFReader::loadIFCBOUNDEDCURVE;
    m_Str2LoadFn["IFCBOUNDEDSURFACE"] = &SPFReader::loadIFCBOUNDEDSURFACE;
    m_Str2LoadFn["IFCBOUNDINGBOX"] = &SPFReader::loadIFCBOUNDINGBOX;
    m_Str2LoadFn["IFCBOXEDHALFSPACE"] = &SPFReader::loadIFCBOXEDHALFSPACE;
    m_Str2LoadFn["IFCBSPLINECURVE"] = &SPFReader::loadIFCBSPLINECURVE;
    m_Str2LoadFn["IFCBUILDING"] = &SPFReader::loadIFCBUILDING;
    m_Str2LoadFn["IFCBUILDINGELEMENT"] = &SPFReader::loadIFCBUILDINGELEMENT;
    m_Str2LoadFn["IFCBUILDINGELEMENTCOMPONENT"] = &SPFReader::loadIFCBUILDINGELEMENTCOMPONENT;
    m_Str2LoadFn["IFCBUILDINGELEMENTPART"] = &SPFReader::loadIFCBUILDINGELEMENTPART;
    m_Str2LoadFn["IFCBUILDINGELEMENTPROXY"] = &SPFReader::loadIFCBUILDINGELEMENTPROXY;
    m_Str2LoadFn["IFCBUILDINGELEMENTPROXYTYPE"] = &SPFReader::loadIFCBUILDINGELEMENTPROXYTYPE;
    m_Str2LoadFn["IFCBUILDINGELEMENTTYPE"] = &SPFReader::loadIFCBUILDINGELEMENTTYPE;
    m_Str2LoadFn["IFCBUILDINGSTOREY"] = &SPFReader::loadIFCBUILDINGSTOREY;
    m_Str2LoadFn["IFCCABLECARRIERFITTINGTYPE"] = &SPFReader::loadIFCCABLECARRIERFITTINGTYPE;
    m_Str2LoadFn["IFCCABLECARRIERSEGMENTTYPE"] = &SPFReader::loadIFCCABLECARRIERSEGMENTTYPE;
    m_Str2LoadFn["IFCCABLESEGMENTTYPE"] = &SPFReader::loadIFCCABLESEGMENTTYPE;
    m_Str2LoadFn["IFCCALENDARDATE"] = &SPFReader::loadIFCCALENDARDATE;
    m_Str2LoadFn["IFCCARTESIANPOINT"] = &SPFReader::loadIFCCARTESIANPOINT;
    m_Str2LoadFn["IFCCARTESIANTRANSFORMATIONOPERATOR"] = &SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR;
    m_Str2LoadFn["IFCCARTESIANTRANSFORMATIONOPERATOR2D"] = &SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR2D;
    m_Str2LoadFn["IFCCARTESIANTRANSFORMATIONOPERATOR2DNONUNIFORM"] = &SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR2DNONUNIFORM;
    m_Str2LoadFn["IFCCARTESIANTRANSFORMATIONOPERATOR3D"] = &SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR3D;
    m_Str2LoadFn["IFCCARTESIANTRANSFORMATIONOPERATOR3DNONUNIFORM"] = &SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR3DNONUNIFORM;
    m_Str2LoadFn["IFCCENTERLINEPROFILEDEF"] = &SPFReader::loadIFCCENTERLINEPROFILEDEF;
    m_Str2LoadFn["IFCCHAMFEREDGEFEATURE"] = &SPFReader::loadIFCCHAMFEREDGEFEATURE;
    m_Str2LoadFn["IFCCHILLERTYPE"] = &SPFReader::loadIFCCHILLERTYPE;
    m_Str2LoadFn["IFCCIRCLE"] = &SPFReader::loadIFCCIRCLE;
    m_Str2LoadFn["IFCCIRCLEHOLLOWPROFILEDEF"] = &SPFReader::loadIFCCIRCLEHOLLOWPROFILEDEF;
    m_Str2LoadFn["IFCCIRCLEPROFILEDEF"] = &SPFReader::loadIFCCIRCLEPROFILEDEF;
    m_Str2LoadFn["IFCCLASSIFICATION"] = &SPFReader::loadIFCCLASSIFICATION;
    m_Str2LoadFn["IFCCLASSIFICATIONITEM"] = &SPFReader::loadIFCCLASSIFICATIONITEM;
    m_Str2LoadFn["IFCCLASSIFICATIONITEMRELATIONSHIP"] = &SPFReader::loadIFCCLASSIFICATIONITEMRELATIONSHIP;
    m_Str2LoadFn["IFCCLASSIFICATIONNOTATION"] = &SPFReader::loadIFCCLASSIFICATIONNOTATION;
    m_Str2LoadFn["IFCCLASSIFICATIONNOTATIONFACET"] = &SPFReader::loadIFCCLASSIFICATIONNOTATIONFACET;
    m_Str2LoadFn["IFCCLASSIFICATIONREFERENCE"] = &SPFReader::loadIFCCLASSIFICATIONREFERENCE;
    m_Str2LoadFn["IFCCLOSEDSHELL"] = &SPFReader::loadIFCCLOSEDSHELL;
    m_Str2LoadFn["IFCCOILTYPE"] = &SPFReader::loadIFCCOILTYPE;
    m_Str2LoadFn["IFCCOLOURRGB"] = &SPFReader::loadIFCCOLOURRGB;
    m_Str2LoadFn["IFCCOLOURSPECIFICATION"] = &SPFReader::loadIFCCOLOURSPECIFICATION;
    m_Str2LoadFn["IFCCOLUMN"] = &SPFReader::loadIFCCOLUMN;
    m_Str2LoadFn["IFCCOLUMNTYPE"] = &SPFReader::loadIFCCOLUMNTYPE;
    m_Str2LoadFn["IFCCOMPLEXPROPERTY"] = &SPFReader::loadIFCCOMPLEXPROPERTY;
    m_Str2LoadFn["IFCCOMPOSITECURVE"] = &SPFReader::loadIFCCOMPOSITECURVE;
    m_Str2LoadFn["IFCCOMPOSITECURVESEGMENT"] = &SPFReader::loadIFCCOMPOSITECURVESEGMENT;
    m_Str2LoadFn["IFCCOMPOSITEPROFILEDEF"] = &SPFReader::loadIFCCOMPOSITEPROFILEDEF;
    m_Str2LoadFn["IFCCOMPRESSORTYPE"] = &SPFReader::loadIFCCOMPRESSORTYPE;
    m_Str2LoadFn["IFCCONDENSERTYPE"] = &SPFReader::loadIFCCONDENSERTYPE;
    m_Str2LoadFn["IFCCONDITION"] = &SPFReader::loadIFCCONDITION;
    m_Str2LoadFn["IFCCONDITIONCRITERION"] = &SPFReader::loadIFCCONDITIONCRITERION;
    m_Str2LoadFn["IFCCONIC"] = &SPFReader::loadIFCCONIC;
    m_Str2LoadFn["IFCCONNECTEDFACESET"] = &SPFReader::loadIFCCONNECTEDFACESET;
    m_Str2LoadFn["IFCCONNECTIONCURVEGEOMETRY"] = &SPFReader::loadIFCCONNECTIONCURVEGEOMETRY;
    m_Str2LoadFn["IFCCONNECTIONGEOMETRY"] = &SPFReader::loadIFCCONNECTIONGEOMETRY;
    m_Str2LoadFn["IFCCONNECTIONPOINTECCENTRICITY"] = &SPFReader::loadIFCCONNECTIONPOINTECCENTRICITY;
    m_Str2LoadFn["IFCCONNECTIONPOINTGEOMETRY"] = &SPFReader::loadIFCCONNECTIONPOINTGEOMETRY;
    m_Str2LoadFn["IFCCONNECTIONPORTGEOMETRY"] = &SPFReader::loadIFCCONNECTIONPORTGEOMETRY;
    m_Str2LoadFn["IFCCONNECTIONSURFACEGEOMETRY"] = &SPFReader::loadIFCCONNECTIONSURFACEGEOMETRY;
    m_Str2LoadFn["IFCCONSTRAINT"] = &SPFReader::loadIFCCONSTRAINT;
    m_Str2LoadFn["IFCCONSTRAINTAGGREGATIONRELATIONSHIP"] = &SPFReader::loadIFCCONSTRAINTAGGREGATIONRELATIONSHIP;
    m_Str2LoadFn["IFCCONSTRAINTCLASSIFICATIONRELATIONSHIP"] = &SPFReader::loadIFCCONSTRAINTCLASSIFICATIONRELATIONSHIP;
    m_Str2LoadFn["IFCCONSTRAINTRELATIONSHIP"] = &SPFReader::loadIFCCONSTRAINTRELATIONSHIP;
    m_Str2LoadFn["IFCCONSTRUCTIONEQUIPMENTRESOURCE"] = &SPFReader::loadIFCCONSTRUCTIONEQUIPMENTRESOURCE;
    m_Str2LoadFn["IFCCONSTRUCTIONMATERIALRESOURCE"] = &SPFReader::loadIFCCONSTRUCTIONMATERIALRESOURCE;
    m_Str2LoadFn["IFCCONSTRUCTIONPRODUCTRESOURCE"] = &SPFReader::loadIFCCONSTRUCTIONPRODUCTRESOURCE;
    m_Str2LoadFn["IFCCONSTRUCTIONRESOURCE"] = &SPFReader::loadIFCCONSTRUCTIONRESOURCE;
    m_Str2LoadFn["IFCCONTEXTDEPENDENTUNIT"] = &SPFReader::loadIFCCONTEXTDEPENDENTUNIT;
    m_Str2LoadFn["IFCCONTROL"] = &SPFReader::loadIFCCONTROL;
    m_Str2LoadFn["IFCCONTROLLERTYPE"] = &SPFReader::loadIFCCONTROLLERTYPE;
    m_Str2LoadFn["IFCCONVERSIONBASEDUNIT"] = &SPFReader::loadIFCCONVERSIONBASEDUNIT;
    m_Str2LoadFn["IFCCOOLEDBEAMTYPE"] = &SPFReader::loadIFCCOOLEDBEAMTYPE;
    m_Str2LoadFn["IFCCOOLINGTOWERTYPE"] = &SPFReader::loadIFCCOOLINGTOWERTYPE;
    m_Str2LoadFn["IFCCOORDINATEDUNIVERSALTIMEOFFSET"] = &SPFReader::loadIFCCOORDINATEDUNIVERSALTIMEOFFSET;
    m_Str2LoadFn["IFCCOSTITEM"] = &SPFReader::loadIFCCOSTITEM;
    m_Str2LoadFn["IFCCOSTSCHEDULE"] = &SPFReader::loadIFCCOSTSCHEDULE;
    m_Str2LoadFn["IFCCOSTVALUE"] = &SPFReader::loadIFCCOSTVALUE;
    m_Str2LoadFn["IFCCOVERING"] = &SPFReader::loadIFCCOVERING;
    m_Str2LoadFn["IFCCOVERINGTYPE"] = &SPFReader::loadIFCCOVERINGTYPE;
    m_Str2LoadFn["IFCCRANERAILASHAPEPROFILEDEF"] = &SPFReader::loadIFCCRANERAILASHAPEPROFILEDEF;
    m_Str2LoadFn["IFCCRANERAILFSHAPEPROFILEDEF"] = &SPFReader::loadIFCCRANERAILFSHAPEPROFILEDEF;
    m_Str2LoadFn["IFCCREWRESOURCE"] = &SPFReader::loadIFCCREWRESOURCE;
    m_Str2LoadFn["IFCCSGPRIMITIVE3D"] = &SPFReader::loadIFCCSGPRIMITIVE3D;
    m_Str2LoadFn["IFCCSGSOLID"] = &SPFReader::loadIFCCSGSOLID;
    m_Str2LoadFn["IFCCSHAPEPROFILEDEF"] = &SPFReader::loadIFCCSHAPEPROFILEDEF;
    m_Str2LoadFn["IFCCURRENCYRELATIONSHIP"] = &SPFReader::loadIFCCURRENCYRELATIONSHIP;
    m_Str2LoadFn["IFCCURTAINWALL"] = &SPFReader::loadIFCCURTAINWALL;
    m_Str2LoadFn["IFCCURTAINWALLTYPE"] = &SPFReader::loadIFCCURTAINWALLTYPE;
    m_Str2LoadFn["IFCCURVE"] = &SPFReader::loadIFCCURVE;
    m_Str2LoadFn["IFCCURVEBOUNDEDPLANE"] = &SPFReader::loadIFCCURVEBOUNDEDPLANE;
    m_Str2LoadFn["IFCCURVESTYLE"] = &SPFReader::loadIFCCURVESTYLE;
    m_Str2LoadFn["IFCCURVESTYLEFONT"] = &SPFReader::loadIFCCURVESTYLEFONT;
    m_Str2LoadFn["IFCCURVESTYLEFONTANDSCALING"] = &SPFReader::loadIFCCURVESTYLEFONTANDSCALING;
    m_Str2LoadFn["IFCCURVESTYLEFONTPATTERN"] = &SPFReader::loadIFCCURVESTYLEFONTPATTERN;
    m_Str2LoadFn["IFCDAMPERTYPE"] = &SPFReader::loadIFCDAMPERTYPE;
    m_Str2LoadFn["IFCDATEANDTIME"] = &SPFReader::loadIFCDATEANDTIME;
    m_Str2LoadFn["IFCDEFINEDSYMBOL"] = &SPFReader::loadIFCDEFINEDSYMBOL;
    m_Str2LoadFn["IFCDERIVEDPROFILEDEF"] = &SPFReader::loadIFCDERIVEDPROFILEDEF;
    m_Str2LoadFn["IFCDERIVEDUNIT"] = &SPFReader::loadIFCDERIVEDUNIT;
    m_Str2LoadFn["IFCDERIVEDUNITELEMENT"] = &SPFReader::loadIFCDERIVEDUNITELEMENT;
    m_Str2LoadFn["IFCDIAMETERDIMENSION"] = &SPFReader::loadIFCDIAMETERDIMENSION;
    m_Str2LoadFn["IFCDIMENSIONALEXPONENTS"] = &SPFReader::loadIFCDIMENSIONALEXPONENTS;
    m_Str2LoadFn["IFCDIMENSIONCALLOUTRELATIONSHIP"] = &SPFReader::loadIFCDIMENSIONCALLOUTRELATIONSHIP;
    m_Str2LoadFn["IFCDIMENSIONCURVE"] = &SPFReader::loadIFCDIMENSIONCURVE;
    m_Str2LoadFn["IFCDIMENSIONCURVEDIRECTEDCALLOUT"] = &SPFReader::loadIFCDIMENSIONCURVEDIRECTEDCALLOUT;
    m_Str2LoadFn["IFCDIMENSIONCURVETERMINATOR"] = &SPFReader::loadIFCDIMENSIONCURVETERMINATOR;
    m_Str2LoadFn["IFCDIMENSIONPAIR"] = &SPFReader::loadIFCDIMENSIONPAIR;
    m_Str2LoadFn["IFCDIRECTION"] = &SPFReader::loadIFCDIRECTION;
    m_Str2LoadFn["IFCDISCRETEACCESSORY"] = &SPFReader::loadIFCDISCRETEACCESSORY;
    m_Str2LoadFn["IFCDISCRETEACCESSORYTYPE"] = &SPFReader::loadIFCDISCRETEACCESSORYTYPE;
    m_Str2LoadFn["IFCDISTRIBUTIONCHAMBERELEMENT"] = &SPFReader::loadIFCDISTRIBUTIONCHAMBERELEMENT;
    m_Str2LoadFn["IFCDISTRIBUTIONCHAMBERELEMENTTYPE"] = &SPFReader::loadIFCDISTRIBUTIONCHAMBERELEMENTTYPE;
    m_Str2LoadFn["IFCDISTRIBUTIONCONTROLELEMENT"] = &SPFReader::loadIFCDISTRIBUTIONCONTROLELEMENT;
    m_Str2LoadFn["IFCDISTRIBUTIONCONTROLELEMENTTYPE"] = &SPFReader::loadIFCDISTRIBUTIONCONTROLELEMENTTYPE;
    m_Str2LoadFn["IFCDISTRIBUTIONELEMENT"] = &SPFReader::loadIFCDISTRIBUTIONELEMENT;
    m_Str2LoadFn["IFCDISTRIBUTIONELEMENTTYPE"] = &SPFReader::loadIFCDISTRIBUTIONELEMENTTYPE;
    m_Str2LoadFn["IFCDISTRIBUTIONFLOWELEMENT"] = &SPFReader::loadIFCDISTRIBUTIONFLOWELEMENT;
    m_Str2LoadFn["IFCDISTRIBUTIONFLOWELEMENTTYPE"] = &SPFReader::loadIFCDISTRIBUTIONFLOWELEMENTTYPE;
    m_Str2LoadFn["IFCDISTRIBUTIONPORT"] = &SPFReader::loadIFCDISTRIBUTIONPORT;
    m_Str2LoadFn["IFCDOCUMENTELECTRONICFORMAT"] = &SPFReader::loadIFCDOCUMENTELECTRONICFORMAT;
    m_Str2LoadFn["IFCDOCUMENTINFORMATION"] = &SPFReader::loadIFCDOCUMENTINFORMATION;
    m_Str2LoadFn["IFCDOCUMENTINFORMATIONRELATIONSHIP"] = &SPFReader::loadIFCDOCUMENTINFORMATIONRELATIONSHIP;
    m_Str2LoadFn["IFCDOCUMENTREFERENCE"] = &SPFReader::loadIFCDOCUMENTREFERENCE;
    m_Str2LoadFn["IFCDOOR"] = &SPFReader::loadIFCDOOR;
    m_Str2LoadFn["IFCDOORLININGPROPERTIES"] = &SPFReader::loadIFCDOORLININGPROPERTIES;
    m_Str2LoadFn["IFCDOORPANELPROPERTIES"] = &SPFReader::loadIFCDOORPANELPROPERTIES;
    m_Str2LoadFn["IFCDOORSTYLE"] = &SPFReader::loadIFCDOORSTYLE;
    m_Str2LoadFn["IFCDRAUGHTINGCALLOUT"] = &SPFReader::loadIFCDRAUGHTINGCALLOUT;
    m_Str2LoadFn["IFCDRAUGHTINGCALLOUTRELATIONSHIP"] = &SPFReader::loadIFCDRAUGHTINGCALLOUTRELATIONSHIP;
    m_Str2LoadFn["IFCDRAUGHTINGPREDEFINEDCOLOUR"] = &SPFReader::loadIFCDRAUGHTINGPREDEFINEDCOLOUR;
    m_Str2LoadFn["IFCDRAUGHTINGPREDEFINEDCURVEFONT"] = &SPFReader::loadIFCDRAUGHTINGPREDEFINEDCURVEFONT;
    m_Str2LoadFn["IFCDRAUGHTINGPREDEFINEDTEXTFONT"] = &SPFReader::loadIFCDRAUGHTINGPREDEFINEDTEXTFONT;
    m_Str2LoadFn["IFCDUCTFITTINGTYPE"] = &SPFReader::loadIFCDUCTFITTINGTYPE;
    m_Str2LoadFn["IFCDUCTSEGMENTTYPE"] = &SPFReader::loadIFCDUCTSEGMENTTYPE;
    m_Str2LoadFn["IFCDUCTSILENCERTYPE"] = &SPFReader::loadIFCDUCTSILENCERTYPE;
    m_Str2LoadFn["IFCEDGE"] = &SPFReader::loadIFCEDGE;
    m_Str2LoadFn["IFCEDGECURVE"] = &SPFReader::loadIFCEDGECURVE;
    m_Str2LoadFn["IFCEDGEFEATURE"] = &SPFReader::loadIFCEDGEFEATURE;
    m_Str2LoadFn["IFCEDGELOOP"] = &SPFReader::loadIFCEDGELOOP;
    m_Str2LoadFn["IFCELECTRICALBASEPROPERTIES"] = &SPFReader::loadIFCELECTRICALBASEPROPERTIES;
    m_Str2LoadFn["IFCELECTRICALCIRCUIT"] = &SPFReader::loadIFCELECTRICALCIRCUIT;
    m_Str2LoadFn["IFCELECTRICALELEMENT"] = &SPFReader::loadIFCELECTRICALELEMENT;
    m_Str2LoadFn["IFCELECTRICAPPLIANCETYPE"] = &SPFReader::loadIFCELECTRICAPPLIANCETYPE;
    m_Str2LoadFn["IFCELECTRICDISTRIBUTIONPOINT"] = &SPFReader::loadIFCELECTRICDISTRIBUTIONPOINT;
    m_Str2LoadFn["IFCELECTRICFLOWSTORAGEDEVICETYPE"] = &SPFReader::loadIFCELECTRICFLOWSTORAGEDEVICETYPE;
    m_Str2LoadFn["IFCELECTRICGENERATORTYPE"] = &SPFReader::loadIFCELECTRICGENERATORTYPE;
    m_Str2LoadFn["IFCELECTRICHEATERTYPE"] = &SPFReader::loadIFCELECTRICHEATERTYPE;
    m_Str2LoadFn["IFCELECTRICMOTORTYPE"] = &SPFReader::loadIFCELECTRICMOTORTYPE;
    m_Str2LoadFn["IFCELECTRICTIMECONTROLTYPE"] = &SPFReader::loadIFCELECTRICTIMECONTROLTYPE;
    m_Str2LoadFn["IFCELEMENT"] = &SPFReader::loadIFCELEMENT;
    m_Str2LoadFn["IFCELEMENTARYSURFACE"] = &SPFReader::loadIFCELEMENTARYSURFACE;
    m_Str2LoadFn["IFCELEMENTASSEMBLY"] = &SPFReader::loadIFCELEMENTASSEMBLY;
    m_Str2LoadFn["IFCELEMENTCOMPONENT"] = &SPFReader::loadIFCELEMENTCOMPONENT;
    m_Str2LoadFn["IFCELEMENTCOMPONENTTYPE"] = &SPFReader::loadIFCELEMENTCOMPONENTTYPE;
    m_Str2LoadFn["IFCELEMENTQUANTITY"] = &SPFReader::loadIFCELEMENTQUANTITY;
    m_Str2LoadFn["IFCELEMENTTYPE"] = &SPFReader::loadIFCELEMENTTYPE;
    m_Str2LoadFn["IFCELLIPSE"] = &SPFReader::loadIFCELLIPSE;
    m_Str2LoadFn["IFCELLIPSEPROFILEDEF"] = &SPFReader::loadIFCELLIPSEPROFILEDEF;
    m_Str2LoadFn["IFCENERGYCONVERSIONDEVICE"] = &SPFReader::loadIFCENERGYCONVERSIONDEVICE;
    m_Str2LoadFn["IFCENERGYCONVERSIONDEVICETYPE"] = &SPFReader::loadIFCENERGYCONVERSIONDEVICETYPE;
    m_Str2LoadFn["IFCENERGYPROPERTIES"] = &SPFReader::loadIFCENERGYPROPERTIES;
    m_Str2LoadFn["IFCENVIRONMENTALIMPACTVALUE"] = &SPFReader::loadIFCENVIRONMENTALIMPACTVALUE;
    m_Str2LoadFn["IFCEQUIPMENTELEMENT"] = &SPFReader::loadIFCEQUIPMENTELEMENT;
    m_Str2LoadFn["IFCEQUIPMENTSTANDARD"] = &SPFReader::loadIFCEQUIPMENTSTANDARD;
    m_Str2LoadFn["IFCEVAPORATIVECOOLERTYPE"] = &SPFReader::loadIFCEVAPORATIVECOOLERTYPE;
    m_Str2LoadFn["IFCEVAPORATORTYPE"] = &SPFReader::loadIFCEVAPORATORTYPE;
    m_Str2LoadFn["IFCEXTENDEDMATERIALPROPERTIES"] = &SPFReader::loadIFCEXTENDEDMATERIALPROPERTIES;
    m_Str2LoadFn["IFCEXTERNALLYDEFINEDHATCHSTYLE"] = &SPFReader::loadIFCEXTERNALLYDEFINEDHATCHSTYLE;
    m_Str2LoadFn["IFCEXTERNALLYDEFINEDSURFACESTYLE"] = &SPFReader::loadIFCEXTERNALLYDEFINEDSURFACESTYLE;
    m_Str2LoadFn["IFCEXTERNALLYDEFINEDSYMBOL"] = &SPFReader::loadIFCEXTERNALLYDEFINEDSYMBOL;
    m_Str2LoadFn["IFCEXTERNALLYDEFINEDTEXTFONT"] = &SPFReader::loadIFCEXTERNALLYDEFINEDTEXTFONT;
    m_Str2LoadFn["IFCEXTERNALREFERENCE"] = &SPFReader::loadIFCEXTERNALREFERENCE;
    m_Str2LoadFn["IFCEXTRUDEDAREASOLID"] = &SPFReader::loadIFCEXTRUDEDAREASOLID;
    m_Str2LoadFn["IFCFACE"] = &SPFReader::loadIFCFACE;
    m_Str2LoadFn["IFCFACEBASEDSURFACEMODEL"] = &SPFReader::loadIFCFACEBASEDSURFACEMODEL;
    m_Str2LoadFn["IFCFACEBOUND"] = &SPFReader::loadIFCFACEBOUND;
    m_Str2LoadFn["IFCFACEOUTERBOUND"] = &SPFReader::loadIFCFACEOUTERBOUND;
    m_Str2LoadFn["IFCFACESURFACE"] = &SPFReader::loadIFCFACESURFACE;
    m_Str2LoadFn["IFCFACETEDBREP"] = &SPFReader::loadIFCFACETEDBREP;
    m_Str2LoadFn["IFCFACETEDBREPWITHVOIDS"] = &SPFReader::loadIFCFACETEDBREPWITHVOIDS;
    m_Str2LoadFn["IFCFAILURECONNECTIONCONDITION"] = &SPFReader::loadIFCFAILURECONNECTIONCONDITION;
    m_Str2LoadFn["IFCFANTYPE"] = &SPFReader::loadIFCFANTYPE;
    m_Str2LoadFn["IFCFASTENER"] = &SPFReader::loadIFCFASTENER;
    m_Str2LoadFn["IFCFASTENERTYPE"] = &SPFReader::loadIFCFASTENERTYPE;
    m_Str2LoadFn["IFCFEATUREELEMENT"] = &SPFReader::loadIFCFEATUREELEMENT;
    m_Str2LoadFn["IFCFEATUREELEMENTADDITION"] = &SPFReader::loadIFCFEATUREELEMENTADDITION;
    m_Str2LoadFn["IFCFEATUREELEMENTSUBTRACTION"] = &SPFReader::loadIFCFEATUREELEMENTSUBTRACTION;
    m_Str2LoadFn["IFCFILLAREASTYLE"] = &SPFReader::loadIFCFILLAREASTYLE;
    m_Str2LoadFn["IFCFILLAREASTYLEHATCHING"] = &SPFReader::loadIFCFILLAREASTYLEHATCHING;
    m_Str2LoadFn["IFCFILLAREASTYLETILES"] = &SPFReader::loadIFCFILLAREASTYLETILES;
    m_Str2LoadFn["IFCFILLAREASTYLETILESYMBOLWITHSTYLE"] = &SPFReader::loadIFCFILLAREASTYLETILESYMBOLWITHSTYLE;
    m_Str2LoadFn["IFCFILTERTYPE"] = &SPFReader::loadIFCFILTERTYPE;
    m_Str2LoadFn["IFCFIRESUPPRESSIONTERMINALTYPE"] = &SPFReader::loadIFCFIRESUPPRESSIONTERMINALTYPE;
    m_Str2LoadFn["IFCFLOWCONTROLLER"] = &SPFReader::loadIFCFLOWCONTROLLER;
    m_Str2LoadFn["IFCFLOWCONTROLLERTYPE"] = &SPFReader::loadIFCFLOWCONTROLLERTYPE;
    m_Str2LoadFn["IFCFLOWFITTING"] = &SPFReader::loadIFCFLOWFITTING;
    m_Str2LoadFn["IFCFLOWFITTINGTYPE"] = &SPFReader::loadIFCFLOWFITTINGTYPE;
    m_Str2LoadFn["IFCFLOWINSTRUMENTTYPE"] = &SPFReader::loadIFCFLOWINSTRUMENTTYPE;
    m_Str2LoadFn["IFCFLOWMETERTYPE"] = &SPFReader::loadIFCFLOWMETERTYPE;
    m_Str2LoadFn["IFCFLOWMOVINGDEVICE"] = &SPFReader::loadIFCFLOWMOVINGDEVICE;
    m_Str2LoadFn["IFCFLOWMOVINGDEVICETYPE"] = &SPFReader::loadIFCFLOWMOVINGDEVICETYPE;
    m_Str2LoadFn["IFCFLOWSEGMENT"] = &SPFReader::loadIFCFLOWSEGMENT;
    m_Str2LoadFn["IFCFLOWSEGMENTTYPE"] = &SPFReader::loadIFCFLOWSEGMENTTYPE;
    m_Str2LoadFn["IFCFLOWSTORAGEDEVICE"] = &SPFReader::loadIFCFLOWSTORAGEDEVICE;
    m_Str2LoadFn["IFCFLOWSTORAGEDEVICETYPE"] = &SPFReader::loadIFCFLOWSTORAGEDEVICETYPE;
    m_Str2LoadFn["IFCFLOWTERMINAL"] = &SPFReader::loadIFCFLOWTERMINAL;
    m_Str2LoadFn["IFCFLOWTERMINALTYPE"] = &SPFReader::loadIFCFLOWTERMINALTYPE;
    m_Str2LoadFn["IFCFLOWTREATMENTDEVICE"] = &SPFReader::loadIFCFLOWTREATMENTDEVICE;
    m_Str2LoadFn["IFCFLOWTREATMENTDEVICETYPE"] = &SPFReader::loadIFCFLOWTREATMENTDEVICETYPE;
    m_Str2LoadFn["IFCFLUIDFLOWPROPERTIES"] = &SPFReader::loadIFCFLUIDFLOWPROPERTIES;
    m_Str2LoadFn["IFCFOOTING"] = &SPFReader::loadIFCFOOTING;
    m_Str2LoadFn["IFCFUELPROPERTIES"] = &SPFReader::loadIFCFUELPROPERTIES;
    m_Str2LoadFn["IFCFURNISHINGELEMENT"] = &SPFReader::loadIFCFURNISHINGELEMENT;
    m_Str2LoadFn["IFCFURNISHINGELEMENTTYPE"] = &SPFReader::loadIFCFURNISHINGELEMENTTYPE;
    m_Str2LoadFn["IFCFURNITURESTANDARD"] = &SPFReader::loadIFCFURNITURESTANDARD;
    m_Str2LoadFn["IFCFURNITURETYPE"] = &SPFReader::loadIFCFURNITURETYPE;
    m_Str2LoadFn["IFCGASTERMINALTYPE"] = &SPFReader::loadIFCGASTERMINALTYPE;
    m_Str2LoadFn["IFCGENERALMATERIALPROPERTIES"] = &SPFReader::loadIFCGENERALMATERIALPROPERTIES;
    m_Str2LoadFn["IFCGENERALPROFILEPROPERTIES"] = &SPFReader::loadIFCGENERALPROFILEPROPERTIES;
    m_Str2LoadFn["IFCGEOMETRICCURVESET"] = &SPFReader::loadIFCGEOMETRICCURVESET;
    m_Str2LoadFn["IFCGEOMETRICREPRESENTATIONCONTEXT"] = &SPFReader::loadIFCGEOMETRICREPRESENTATIONCONTEXT;
    m_Str2LoadFn["IFCGEOMETRICREPRESENTATIONITEM"] = &SPFReader::loadIFCGEOMETRICREPRESENTATIONITEM;
    m_Str2LoadFn["IFCGEOMETRICREPRESENTATIONSUBCONTEXT"] = &SPFReader::loadIFCGEOMETRICREPRESENTATIONSUBCONTEXT;
    m_Str2LoadFn["IFCGEOMETRICSET"] = &SPFReader::loadIFCGEOMETRICSET;
    m_Str2LoadFn["IFCGRID"] = &SPFReader::loadIFCGRID;
    m_Str2LoadFn["IFCGRIDAXIS"] = &SPFReader::loadIFCGRIDAXIS;
    m_Str2LoadFn["IFCGRIDPLACEMENT"] = &SPFReader::loadIFCGRIDPLACEMENT;
    m_Str2LoadFn["IFCGROUP"] = &SPFReader::loadIFCGROUP;
    m_Str2LoadFn["IFCHALFSPACESOLID"] = &SPFReader::loadIFCHALFSPACESOLID;
    m_Str2LoadFn["IFCHEATEXCHANGERTYPE"] = &SPFReader::loadIFCHEATEXCHANGERTYPE;
    m_Str2LoadFn["IFCHUMIDIFIERTYPE"] = &SPFReader::loadIFCHUMIDIFIERTYPE;
    m_Str2LoadFn["IFCHYGROSCOPICMATERIALPROPERTIES"] = &SPFReader::loadIFCHYGROSCOPICMATERIALPROPERTIES;
    m_Str2LoadFn["IFCIMAGETEXTURE"] = &SPFReader::loadIFCIMAGETEXTURE;
    m_Str2LoadFn["IFCINVENTORY"] = &SPFReader::loadIFCINVENTORY;
    m_Str2LoadFn["IFCIRREGULARTIMESERIES"] = &SPFReader::loadIFCIRREGULARTIMESERIES;
    m_Str2LoadFn["IFCIRREGULARTIMESERIESVALUE"] = &SPFReader::loadIFCIRREGULARTIMESERIESVALUE;
    m_Str2LoadFn["IFCISHAPEPROFILEDEF"] = &SPFReader::loadIFCISHAPEPROFILEDEF;
    m_Str2LoadFn["IFCJUNCTIONBOXTYPE"] = &SPFReader::loadIFCJUNCTIONBOXTYPE;
    m_Str2LoadFn["IFCLABORRESOURCE"] = &SPFReader::loadIFCLABORRESOURCE;
    m_Str2LoadFn["IFCLAMPTYPE"] = &SPFReader::loadIFCLAMPTYPE;
    m_Str2LoadFn["IFCLIBRARYINFORMATION"] = &SPFReader::loadIFCLIBRARYINFORMATION;
    m_Str2LoadFn["IFCLIBRARYREFERENCE"] = &SPFReader::loadIFCLIBRARYREFERENCE;
    m_Str2LoadFn["IFCLIGHTDISTRIBUTIONDATA"] = &SPFReader::loadIFCLIGHTDISTRIBUTIONDATA;
    m_Str2LoadFn["IFCLIGHTFIXTURETYPE"] = &SPFReader::loadIFCLIGHTFIXTURETYPE;
    m_Str2LoadFn["IFCLIGHTINTENSITYDISTRIBUTION"] = &SPFReader::loadIFCLIGHTINTENSITYDISTRIBUTION;
    m_Str2LoadFn["IFCLIGHTSOURCE"] = &SPFReader::loadIFCLIGHTSOURCE;
    m_Str2LoadFn["IFCLIGHTSOURCEAMBIENT"] = &SPFReader::loadIFCLIGHTSOURCEAMBIENT;
    m_Str2LoadFn["IFCLIGHTSOURCEDIRECTIONAL"] = &SPFReader::loadIFCLIGHTSOURCEDIRECTIONAL;
    m_Str2LoadFn["IFCLIGHTSOURCEGONIOMETRIC"] = &SPFReader::loadIFCLIGHTSOURCEGONIOMETRIC;
    m_Str2LoadFn["IFCLIGHTSOURCEPOSITIONAL"] = &SPFReader::loadIFCLIGHTSOURCEPOSITIONAL;
    m_Str2LoadFn["IFCLIGHTSOURCESPOT"] = &SPFReader::loadIFCLIGHTSOURCESPOT;
    m_Str2LoadFn["IFCLINE"] = &SPFReader::loadIFCLINE;
    m_Str2LoadFn["IFCLINEARDIMENSION"] = &SPFReader::loadIFCLINEARDIMENSION;
    m_Str2LoadFn["IFCLOCALPLACEMENT"] = &SPFReader::loadIFCLOCALPLACEMENT;
    m_Str2LoadFn["IFCLOCALTIME"] = &SPFReader::loadIFCLOCALTIME;
    m_Str2LoadFn["IFCLOOP"] = &SPFReader::loadIFCLOOP;
    m_Str2LoadFn["IFCLSHAPEPROFILEDEF"] = &SPFReader::loadIFCLSHAPEPROFILEDEF;
    m_Str2LoadFn["IFCMANIFOLDSOLIDBREP"] = &SPFReader::loadIFCMANIFOLDSOLIDBREP;
    m_Str2LoadFn["IFCMAPPEDITEM"] = &SPFReader::loadIFCMAPPEDITEM;
    m_Str2LoadFn["IFCMATERIAL"] = &SPFReader::loadIFCMATERIAL;
    m_Str2LoadFn["IFCMATERIALCLASSIFICATIONRELATIONSHIP"] = &SPFReader::loadIFCMATERIALCLASSIFICATIONRELATIONSHIP;
    m_Str2LoadFn["IFCMATERIALDEFINITIONREPRESENTATION"] = &SPFReader::loadIFCMATERIALDEFINITIONREPRESENTATION;
    m_Str2LoadFn["IFCMATERIALLAYER"] = &SPFReader::loadIFCMATERIALLAYER;
    m_Str2LoadFn["IFCMATERIALLAYERSET"] = &SPFReader::loadIFCMATERIALLAYERSET;
    m_Str2LoadFn["IFCMATERIALLAYERSETUSAGE"] = &SPFReader::loadIFCMATERIALLAYERSETUSAGE;
    m_Str2LoadFn["IFCMATERIALLIST"] = &SPFReader::loadIFCMATERIALLIST;
    m_Str2LoadFn["IFCMATERIALPROPERTIES"] = &SPFReader::loadIFCMATERIALPROPERTIES;
    m_Str2LoadFn["IFCMEASUREWITHUNIT"] = &SPFReader::loadIFCMEASUREWITHUNIT;
    m_Str2LoadFn["IFCMECHANICALCONCRETEMATERIALPROPERTIES"] = &SPFReader::loadIFCMECHANICALCONCRETEMATERIALPROPERTIES;
    m_Str2LoadFn["IFCMECHANICALFASTENER"] = &SPFReader::loadIFCMECHANICALFASTENER;
    m_Str2LoadFn["IFCMECHANICALFASTENERTYPE"] = &SPFReader::loadIFCMECHANICALFASTENERTYPE;
    m_Str2LoadFn["IFCMECHANICALMATERIALPROPERTIES"] = &SPFReader::loadIFCMECHANICALMATERIALPROPERTIES;
    m_Str2LoadFn["IFCMECHANICALSTEELMATERIALPROPERTIES"] = &SPFReader::loadIFCMECHANICALSTEELMATERIALPROPERTIES;
    m_Str2LoadFn["IFCMEMBER"] = &SPFReader::loadIFCMEMBER;
    m_Str2LoadFn["IFCMEMBERTYPE"] = &SPFReader::loadIFCMEMBERTYPE;
    m_Str2LoadFn["IFCMETRIC"] = &SPFReader::loadIFCMETRIC;
    m_Str2LoadFn["IFCMONETARYUNIT"] = &SPFReader::loadIFCMONETARYUNIT;
    m_Str2LoadFn["IFCMOTORCONNECTIONTYPE"] = &SPFReader::loadIFCMOTORCONNECTIONTYPE;
    m_Str2LoadFn["IFCMOVE"] = &SPFReader::loadIFCMOVE;
    m_Str2LoadFn["IFCNAMEDUNIT"] = &SPFReader::loadIFCNAMEDUNIT;
    m_Str2LoadFn["IFCOBJECT"] = &SPFReader::loadIFCOBJECT;
    m_Str2LoadFn["IFCOBJECTDEFINITION"] = &SPFReader::loadIFCOBJECTDEFINITION;
    m_Str2LoadFn["IFCOBJECTIVE"] = &SPFReader::loadIFCOBJECTIVE;
    m_Str2LoadFn["IFCOBJECTPLACEMENT"] = &SPFReader::loadIFCOBJECTPLACEMENT;
    m_Str2LoadFn["IFCOCCUPANT"] = &SPFReader::loadIFCOCCUPANT;
    m_Str2LoadFn["IFCOFFSETCURVE2D"] = &SPFReader::loadIFCOFFSETCURVE2D;
    m_Str2LoadFn["IFCOFFSETCURVE3D"] = &SPFReader::loadIFCOFFSETCURVE3D;
    m_Str2LoadFn["IFCONEDIRECTIONREPEATFACTOR"] = &SPFReader::loadIFCONEDIRECTIONREPEATFACTOR;
    m_Str2LoadFn["IFCOPENINGELEMENT"] = &SPFReader::loadIFCOPENINGELEMENT;
    m_Str2LoadFn["IFCOPENSHELL"] = &SPFReader::loadIFCOPENSHELL;
    m_Str2LoadFn["IFCOPTICALMATERIALPROPERTIES"] = &SPFReader::loadIFCOPTICALMATERIALPROPERTIES;
    m_Str2LoadFn["IFCORDERACTION"] = &SPFReader::loadIFCORDERACTION;
    m_Str2LoadFn["IFCORGANIZATION"] = &SPFReader::loadIFCORGANIZATION;
    m_Str2LoadFn["IFCORGANIZATIONRELATIONSHIP"] = &SPFReader::loadIFCORGANIZATIONRELATIONSHIP;
    m_Str2LoadFn["IFCORIENTEDEDGE"] = &SPFReader::loadIFCORIENTEDEDGE;
    m_Str2LoadFn["IFCOUTLETTYPE"] = &SPFReader::loadIFCOUTLETTYPE;
    m_Str2LoadFn["IFCOWNERHISTORY"] = &SPFReader::loadIFCOWNERHISTORY;
    m_Str2LoadFn["IFCPARAMETERIZEDPROFILEDEF"] = &SPFReader::loadIFCPARAMETERIZEDPROFILEDEF;
    m_Str2LoadFn["IFCPATH"] = &SPFReader::loadIFCPATH;
    m_Str2LoadFn["IFCPERFORMANCEHISTORY"] = &SPFReader::loadIFCPERFORMANCEHISTORY;
    m_Str2LoadFn["IFCPERMEABLECOVERINGPROPERTIES"] = &SPFReader::loadIFCPERMEABLECOVERINGPROPERTIES;
    m_Str2LoadFn["IFCPERMIT"] = &SPFReader::loadIFCPERMIT;
    m_Str2LoadFn["IFCPERSON"] = &SPFReader::loadIFCPERSON;
    m_Str2LoadFn["IFCPERSONANDORGANIZATION"] = &SPFReader::loadIFCPERSONANDORGANIZATION;
    m_Str2LoadFn["IFCPHYSICALCOMPLEXQUANTITY"] = &SPFReader::loadIFCPHYSICALCOMPLEXQUANTITY;
    m_Str2LoadFn["IFCPHYSICALQUANTITY"] = &SPFReader::loadIFCPHYSICALQUANTITY;
    m_Str2LoadFn["IFCPHYSICALSIMPLEQUANTITY"] = &SPFReader::loadIFCPHYSICALSIMPLEQUANTITY;
    m_Str2LoadFn["IFCPILE"] = &SPFReader::loadIFCPILE;
    m_Str2LoadFn["IFCPIPEFITTINGTYPE"] = &SPFReader::loadIFCPIPEFITTINGTYPE;
    m_Str2LoadFn["IFCPIPESEGMENTTYPE"] = &SPFReader::loadIFCPIPESEGMENTTYPE;
    m_Str2LoadFn["IFCPIXELTEXTURE"] = &SPFReader::loadIFCPIXELTEXTURE;
    m_Str2LoadFn["IFCPLACEMENT"] = &SPFReader::loadIFCPLACEMENT;
    m_Str2LoadFn["IFCPLANARBOX"] = &SPFReader::loadIFCPLANARBOX;
    m_Str2LoadFn["IFCPLANAREXTENT"] = &SPFReader::loadIFCPLANAREXTENT;
    m_Str2LoadFn["IFCPLANE"] = &SPFReader::loadIFCPLANE;
    m_Str2LoadFn["IFCPLATE"] = &SPFReader::loadIFCPLATE;
    m_Str2LoadFn["IFCPLATETYPE"] = &SPFReader::loadIFCPLATETYPE;
    m_Str2LoadFn["IFCPOINT"] = &SPFReader::loadIFCPOINT;
    m_Str2LoadFn["IFCPOINTONCURVE"] = &SPFReader::loadIFCPOINTONCURVE;
    m_Str2LoadFn["IFCPOINTONSURFACE"] = &SPFReader::loadIFCPOINTONSURFACE;
    m_Str2LoadFn["IFCPOLYGONALBOUNDEDHALFSPACE"] = &SPFReader::loadIFCPOLYGONALBOUNDEDHALFSPACE;
    m_Str2LoadFn["IFCPOLYLINE"] = &SPFReader::loadIFCPOLYLINE;
    m_Str2LoadFn["IFCPOLYLOOP"] = &SPFReader::loadIFCPOLYLOOP;
    m_Str2LoadFn["IFCPORT"] = &SPFReader::loadIFCPORT;
    m_Str2LoadFn["IFCPOSTALADDRESS"] = &SPFReader::loadIFCPOSTALADDRESS;
    m_Str2LoadFn["IFCPREDEFINEDCOLOUR"] = &SPFReader::loadIFCPREDEFINEDCOLOUR;
    m_Str2LoadFn["IFCPREDEFINEDCURVEFONT"] = &SPFReader::loadIFCPREDEFINEDCURVEFONT;
    m_Str2LoadFn["IFCPREDEFINEDDIMENSIONSYMBOL"] = &SPFReader::loadIFCPREDEFINEDDIMENSIONSYMBOL;
    m_Str2LoadFn["IFCPREDEFINEDITEM"] = &SPFReader::loadIFCPREDEFINEDITEM;
    m_Str2LoadFn["IFCPREDEFINEDPOINTMARKERSYMBOL"] = &SPFReader::loadIFCPREDEFINEDPOINTMARKERSYMBOL;
    m_Str2LoadFn["IFCPREDEFINEDSYMBOL"] = &SPFReader::loadIFCPREDEFINEDSYMBOL;
    m_Str2LoadFn["IFCPREDEFINEDTERMINATORSYMBOL"] = &SPFReader::loadIFCPREDEFINEDTERMINATORSYMBOL;
    m_Str2LoadFn["IFCPREDEFINEDTEXTFONT"] = &SPFReader::loadIFCPREDEFINEDTEXTFONT;
    m_Str2LoadFn["IFCPRESENTATIONLAYERASSIGNMENT"] = &SPFReader::loadIFCPRESENTATIONLAYERASSIGNMENT;
    m_Str2LoadFn["IFCPRESENTATIONLAYERWITHSTYLE"] = &SPFReader::loadIFCPRESENTATIONLAYERWITHSTYLE;
    m_Str2LoadFn["IFCPRESENTATIONSTYLE"] = &SPFReader::loadIFCPRESENTATIONSTYLE;
    m_Str2LoadFn["IFCPRESENTATIONSTYLEASSIGNMENT"] = &SPFReader::loadIFCPRESENTATIONSTYLEASSIGNMENT;
    m_Str2LoadFn["IFCPROCEDURE"] = &SPFReader::loadIFCPROCEDURE;
    m_Str2LoadFn["IFCPROCESS"] = &SPFReader::loadIFCPROCESS;
    m_Str2LoadFn["IFCPRODUCT"] = &SPFReader::loadIFCPRODUCT;
    m_Str2LoadFn["IFCPRODUCTDEFINITIONSHAPE"] = &SPFReader::loadIFCPRODUCTDEFINITIONSHAPE;
    m_Str2LoadFn["IFCPRODUCTREPRESENTATION"] = &SPFReader::loadIFCPRODUCTREPRESENTATION;
    m_Str2LoadFn["IFCPRODUCTSOFCOMBUSTIONPROPERTIES"] = &SPFReader::loadIFCPRODUCTSOFCOMBUSTIONPROPERTIES;
    m_Str2LoadFn["IFCPROFILEDEF"] = &SPFReader::loadIFCPROFILEDEF;
    m_Str2LoadFn["IFCPROFILEPROPERTIES"] = &SPFReader::loadIFCPROFILEPROPERTIES;
    m_Str2LoadFn["IFCPROJECT"] = &SPFReader::loadIFCPROJECT;
    m_Str2LoadFn["IFCPROJECTIONCURVE"] = &SPFReader::loadIFCPROJECTIONCURVE;
    m_Str2LoadFn["IFCPROJECTIONELEMENT"] = &SPFReader::loadIFCPROJECTIONELEMENT;
    m_Str2LoadFn["IFCPROJECTORDER"] = &SPFReader::loadIFCPROJECTORDER;
    m_Str2LoadFn["IFCPROJECTORDERRECORD"] = &SPFReader::loadIFCPROJECTORDERRECORD;
    m_Str2LoadFn["IFCPROPERTY"] = &SPFReader::loadIFCPROPERTY;
    m_Str2LoadFn["IFCPROPERTYBOUNDEDVALUE"] = &SPFReader::loadIFCPROPERTYBOUNDEDVALUE;
    m_Str2LoadFn["IFCPROPERTYCONSTRAINTRELATIONSHIP"] = &SPFReader::loadIFCPROPERTYCONSTRAINTRELATIONSHIP;
    m_Str2LoadFn["IFCPROPERTYDEFINITION"] = &SPFReader::loadIFCPROPERTYDEFINITION;
    m_Str2LoadFn["IFCPROPERTYDEPENDENCYRELATIONSHIP"] = &SPFReader::loadIFCPROPERTYDEPENDENCYRELATIONSHIP;
    m_Str2LoadFn["IFCPROPERTYENUMERATEDVALUE"] = &SPFReader::loadIFCPROPERTYENUMERATEDVALUE;
    m_Str2LoadFn["IFCPROPERTYENUMERATION"] = &SPFReader::loadIFCPROPERTYENUMERATION;
    m_Str2LoadFn["IFCPROPERTYLISTVALUE"] = &SPFReader::loadIFCPROPERTYLISTVALUE;
    m_Str2LoadFn["IFCPROPERTYREFERENCEVALUE"] = &SPFReader::loadIFCPROPERTYREFERENCEVALUE;
    m_Str2LoadFn["IFCPROPERTYSET"] = &SPFReader::loadIFCPROPERTYSET;
    m_Str2LoadFn["IFCPROPERTYSETDEFINITION"] = &SPFReader::loadIFCPROPERTYSETDEFINITION;
    m_Str2LoadFn["IFCPROPERTYSINGLEVALUE"] = &SPFReader::loadIFCPROPERTYSINGLEVALUE;
    m_Str2LoadFn["IFCPROPERTYTABLEVALUE"] = &SPFReader::loadIFCPROPERTYTABLEVALUE;
    m_Str2LoadFn["IFCPROTECTIVEDEVICETYPE"] = &SPFReader::loadIFCPROTECTIVEDEVICETYPE;
    m_Str2LoadFn["IFCPROXY"] = &SPFReader::loadIFCPROXY;
    m_Str2LoadFn["IFCPUMPTYPE"] = &SPFReader::loadIFCPUMPTYPE;
    m_Str2LoadFn["IFCQUANTITYAREA"] = &SPFReader::loadIFCQUANTITYAREA;
    m_Str2LoadFn["IFCQUANTITYCOUNT"] = &SPFReader::loadIFCQUANTITYCOUNT;
    m_Str2LoadFn["IFCQUANTITYLENGTH"] = &SPFReader::loadIFCQUANTITYLENGTH;
    m_Str2LoadFn["IFCQUANTITYTIME"] = &SPFReader::loadIFCQUANTITYTIME;
    m_Str2LoadFn["IFCQUANTITYVOLUME"] = &SPFReader::loadIFCQUANTITYVOLUME;
    m_Str2LoadFn["IFCQUANTITYWEIGHT"] = &SPFReader::loadIFCQUANTITYWEIGHT;
    m_Str2LoadFn["IFCRADIUSDIMENSION"] = &SPFReader::loadIFCRADIUSDIMENSION;
    m_Str2LoadFn["IFCRAILING"] = &SPFReader::loadIFCRAILING;
    m_Str2LoadFn["IFCRAILINGTYPE"] = &SPFReader::loadIFCRAILINGTYPE;
    m_Str2LoadFn["IFCRAMP"] = &SPFReader::loadIFCRAMP;
    m_Str2LoadFn["IFCRAMPFLIGHT"] = &SPFReader::loadIFCRAMPFLIGHT;
    m_Str2LoadFn["IFCRAMPFLIGHTTYPE"] = &SPFReader::loadIFCRAMPFLIGHTTYPE;
    m_Str2LoadFn["IFCRATIONALBEZIERCURVE"] = &SPFReader::loadIFCRATIONALBEZIERCURVE;
    m_Str2LoadFn["IFCRECTANGLEHOLLOWPROFILEDEF"] = &SPFReader::loadIFCRECTANGLEHOLLOWPROFILEDEF;
    m_Str2LoadFn["IFCRECTANGLEPROFILEDEF"] = &SPFReader::loadIFCRECTANGLEPROFILEDEF;
    m_Str2LoadFn["IFCRECTANGULARPYRAMID"] = &SPFReader::loadIFCRECTANGULARPYRAMID;
    m_Str2LoadFn["IFCRECTANGULARTRIMMEDSURFACE"] = &SPFReader::loadIFCRECTANGULARTRIMMEDSURFACE;
    m_Str2LoadFn["IFCREFERENCESVALUEDOCUMENT"] = &SPFReader::loadIFCREFERENCESVALUEDOCUMENT;
    m_Str2LoadFn["IFCREGULARTIMESERIES"] = &SPFReader::loadIFCREGULARTIMESERIES;
    m_Str2LoadFn["IFCREINFORCEMENTBARPROPERTIES"] = &SPFReader::loadIFCREINFORCEMENTBARPROPERTIES;
    m_Str2LoadFn["IFCREINFORCEMENTDEFINITIONPROPERTIES"] = &SPFReader::loadIFCREINFORCEMENTDEFINITIONPROPERTIES;
    m_Str2LoadFn["IFCREINFORCINGBAR"] = &SPFReader::loadIFCREINFORCINGBAR;
    m_Str2LoadFn["IFCREINFORCINGELEMENT"] = &SPFReader::loadIFCREINFORCINGELEMENT;
    m_Str2LoadFn["IFCREINFORCINGMESH"] = &SPFReader::loadIFCREINFORCINGMESH;
    m_Str2LoadFn["IFCRELAGGREGATES"] = &SPFReader::loadIFCRELAGGREGATES;
    m_Str2LoadFn["IFCRELASSIGNS"] = &SPFReader::loadIFCRELASSIGNS;
    m_Str2LoadFn["IFCRELASSIGNSTASKS"] = &SPFReader::loadIFCRELASSIGNSTASKS;
    m_Str2LoadFn["IFCRELASSIGNSTOACTOR"] = &SPFReader::loadIFCRELASSIGNSTOACTOR;
    m_Str2LoadFn["IFCRELASSIGNSTOCONTROL"] = &SPFReader::loadIFCRELASSIGNSTOCONTROL;
    m_Str2LoadFn["IFCRELASSIGNSTOGROUP"] = &SPFReader::loadIFCRELASSIGNSTOGROUP;
    m_Str2LoadFn["IFCRELASSIGNSTOPROCESS"] = &SPFReader::loadIFCRELASSIGNSTOPROCESS;
    m_Str2LoadFn["IFCRELASSIGNSTOPRODUCT"] = &SPFReader::loadIFCRELASSIGNSTOPRODUCT;
    m_Str2LoadFn["IFCRELASSIGNSTOPROJECTORDER"] = &SPFReader::loadIFCRELASSIGNSTOPROJECTORDER;
    m_Str2LoadFn["IFCRELASSIGNSTORESOURCE"] = &SPFReader::loadIFCRELASSIGNSTORESOURCE;
    m_Str2LoadFn["IFCRELASSOCIATES"] = &SPFReader::loadIFCRELASSOCIATES;
    m_Str2LoadFn["IFCRELASSOCIATESAPPLIEDVALUE"] = &SPFReader::loadIFCRELASSOCIATESAPPLIEDVALUE;
    m_Str2LoadFn["IFCRELASSOCIATESAPPROVAL"] = &SPFReader::loadIFCRELASSOCIATESAPPROVAL;
    m_Str2LoadFn["IFCRELASSOCIATESCLASSIFICATION"] = &SPFReader::loadIFCRELASSOCIATESCLASSIFICATION;
    m_Str2LoadFn["IFCRELASSOCIATESCONSTRAINT"] = &SPFReader::loadIFCRELASSOCIATESCONSTRAINT;
    m_Str2LoadFn["IFCRELASSOCIATESDOCUMENT"] = &SPFReader::loadIFCRELASSOCIATESDOCUMENT;
    m_Str2LoadFn["IFCRELASSOCIATESLIBRARY"] = &SPFReader::loadIFCRELASSOCIATESLIBRARY;
    m_Str2LoadFn["IFCRELASSOCIATESMATERIAL"] = &SPFReader::loadIFCRELASSOCIATESMATERIAL;
    m_Str2LoadFn["IFCRELASSOCIATESPROFILEPROPERTIES"] = &SPFReader::loadIFCRELASSOCIATESPROFILEPROPERTIES;
    m_Str2LoadFn["IFCRELATIONSHIP"] = &SPFReader::loadIFCRELATIONSHIP;
    m_Str2LoadFn["IFCRELAXATION"] = &SPFReader::loadIFCRELAXATION;
    m_Str2LoadFn["IFCRELCONNECTS"] = &SPFReader::loadIFCRELCONNECTS;
    m_Str2LoadFn["IFCRELCONNECTSELEMENTS"] = &SPFReader::loadIFCRELCONNECTSELEMENTS;
    m_Str2LoadFn["IFCRELCONNECTSPATHELEMENTS"] = &SPFReader::loadIFCRELCONNECTSPATHELEMENTS;
    m_Str2LoadFn["IFCRELCONNECTSPORTS"] = &SPFReader::loadIFCRELCONNECTSPORTS;
    m_Str2LoadFn["IFCRELCONNECTSPORTTOELEMENT"] = &SPFReader::loadIFCRELCONNECTSPORTTOELEMENT;
    m_Str2LoadFn["IFCRELCONNECTSSTRUCTURALACTIVITY"] = &SPFReader::loadIFCRELCONNECTSSTRUCTURALACTIVITY;
    m_Str2LoadFn["IFCRELCONNECTSSTRUCTURALELEMENT"] = &SPFReader::loadIFCRELCONNECTSSTRUCTURALELEMENT;
    m_Str2LoadFn["IFCRELCONNECTSSTRUCTURALMEMBER"] = &SPFReader::loadIFCRELCONNECTSSTRUCTURALMEMBER;
    m_Str2LoadFn["IFCRELCONNECTSWITHECCENTRICITY"] = &SPFReader::loadIFCRELCONNECTSWITHECCENTRICITY;
    m_Str2LoadFn["IFCRELCONNECTSWITHREALIZINGELEMENTS"] = &SPFReader::loadIFCRELCONNECTSWITHREALIZINGELEMENTS;
    m_Str2LoadFn["IFCRELCONTAINEDINSPATIALSTRUCTURE"] = &SPFReader::loadIFCRELCONTAINEDINSPATIALSTRUCTURE;
    m_Str2LoadFn["IFCRELCOVERSBLDGELEMENTS"] = &SPFReader::loadIFCRELCOVERSBLDGELEMENTS;
    m_Str2LoadFn["IFCRELCOVERSSPACES"] = &SPFReader::loadIFCRELCOVERSSPACES;
    m_Str2LoadFn["IFCRELDECOMPOSES"] = &SPFReader::loadIFCRELDECOMPOSES;
    m_Str2LoadFn["IFCRELDEFINES"] = &SPFReader::loadIFCRELDEFINES;
    m_Str2LoadFn["IFCRELDEFINESBYPROPERTIES"] = &SPFReader::loadIFCRELDEFINESBYPROPERTIES;
    m_Str2LoadFn["IFCRELDEFINESBYTYPE"] = &SPFReader::loadIFCRELDEFINESBYTYPE;
    m_Str2LoadFn["IFCRELFILLSELEMENT"] = &SPFReader::loadIFCRELFILLSELEMENT;
    m_Str2LoadFn["IFCRELFLOWCONTROLELEMENTS"] = &SPFReader::loadIFCRELFLOWCONTROLELEMENTS;
    m_Str2LoadFn["IFCRELINTERACTIONREQUIREMENTS"] = &SPFReader::loadIFCRELINTERACTIONREQUIREMENTS;
    m_Str2LoadFn["IFCRELNESTS"] = &SPFReader::loadIFCRELNESTS;
    m_Str2LoadFn["IFCRELOCCUPIESSPACES"] = &SPFReader::loadIFCRELOCCUPIESSPACES;
    m_Str2LoadFn["IFCRELOVERRIDESPROPERTIES"] = &SPFReader::loadIFCRELOVERRIDESPROPERTIES;
    m_Str2LoadFn["IFCRELPROJECTSELEMENT"] = &SPFReader::loadIFCRELPROJECTSELEMENT;
    m_Str2LoadFn["IFCRELREFERENCEDINSPATIALSTRUCTURE"] = &SPFReader::loadIFCRELREFERENCEDINSPATIALSTRUCTURE;
    m_Str2LoadFn["IFCRELSCHEDULESCOSTITEMS"] = &SPFReader::loadIFCRELSCHEDULESCOSTITEMS;
    m_Str2LoadFn["IFCRELSEQUENCE"] = &SPFReader::loadIFCRELSEQUENCE;
    m_Str2LoadFn["IFCRELSERVICESBUILDINGS"] = &SPFReader::loadIFCRELSERVICESBUILDINGS;
    m_Str2LoadFn["IFCRELSPACEBOUNDARY"] = &SPFReader::loadIFCRELSPACEBOUNDARY;
    m_Str2LoadFn["IFCRELVOIDSELEMENT"] = &SPFReader::loadIFCRELVOIDSELEMENT;
    m_Str2LoadFn["IFCREPRESENTATION"] = &SPFReader::loadIFCREPRESENTATION;
    m_Str2LoadFn["IFCREPRESENTATIONCONTEXT"] = &SPFReader::loadIFCREPRESENTATIONCONTEXT;
    m_Str2LoadFn["IFCREPRESENTATIONITEM"] = &SPFReader::loadIFCREPRESENTATIONITEM;
    m_Str2LoadFn["IFCREPRESENTATIONMAP"] = &SPFReader::loadIFCREPRESENTATIONMAP;
    m_Str2LoadFn["IFCRESOURCE"] = &SPFReader::loadIFCRESOURCE;
    m_Str2LoadFn["IFCREVOLVEDAREASOLID"] = &SPFReader::loadIFCREVOLVEDAREASOLID;
    m_Str2LoadFn["IFCRIBPLATEPROFILEPROPERTIES"] = &SPFReader::loadIFCRIBPLATEPROFILEPROPERTIES;
    m_Str2LoadFn["IFCRIGHTCIRCULARCONE"] = &SPFReader::loadIFCRIGHTCIRCULARCONE;
    m_Str2LoadFn["IFCRIGHTCIRCULARCYLINDER"] = &SPFReader::loadIFCRIGHTCIRCULARCYLINDER;
    m_Str2LoadFn["IFCROOF"] = &SPFReader::loadIFCROOF;
    m_Str2LoadFn["IFCROOT"] = &SPFReader::loadIFCROOT;
    m_Str2LoadFn["IFCROUNDEDEDGEFEATURE"] = &SPFReader::loadIFCROUNDEDEDGEFEATURE;
    m_Str2LoadFn["IFCROUNDEDRECTANGLEPROFILEDEF"] = &SPFReader::loadIFCROUNDEDRECTANGLEPROFILEDEF;
    m_Str2LoadFn["IFCSANITARYTERMINALTYPE"] = &SPFReader::loadIFCSANITARYTERMINALTYPE;
    m_Str2LoadFn["IFCSCHEDULETIMECONTROL"] = &SPFReader::loadIFCSCHEDULETIMECONTROL;
    m_Str2LoadFn["IFCSECTIONEDSPINE"] = &SPFReader::loadIFCSECTIONEDSPINE;
    m_Str2LoadFn["IFCSECTIONPROPERTIES"] = &SPFReader::loadIFCSECTIONPROPERTIES;
    m_Str2LoadFn["IFCSECTIONREINFORCEMENTPROPERTIES"] = &SPFReader::loadIFCSECTIONREINFORCEMENTPROPERTIES;
    m_Str2LoadFn["IFCSENSORTYPE"] = &SPFReader::loadIFCSENSORTYPE;
    m_Str2LoadFn["IFCSERVICELIFE"] = &SPFReader::loadIFCSERVICELIFE;
    m_Str2LoadFn["IFCSERVICELIFEFACTOR"] = &SPFReader::loadIFCSERVICELIFEFACTOR;
    m_Str2LoadFn["IFCSHAPEASPECT"] = &SPFReader::loadIFCSHAPEASPECT;
    m_Str2LoadFn["IFCSHAPEMODEL"] = &SPFReader::loadIFCSHAPEMODEL;
    m_Str2LoadFn["IFCSHAPEREPRESENTATION"] = &SPFReader::loadIFCSHAPEREPRESENTATION;
    m_Str2LoadFn["IFCSHELLBASEDSURFACEMODEL"] = &SPFReader::loadIFCSHELLBASEDSURFACEMODEL;
    m_Str2LoadFn["IFCSIMPLEPROPERTY"] = &SPFReader::loadIFCSIMPLEPROPERTY;
    m_Str2LoadFn["IFCSITE"] = &SPFReader::loadIFCSITE;
    m_Str2LoadFn["IFCSIUNIT"] = &SPFReader::loadIFCSIUNIT;
    m_Str2LoadFn["IFCSLAB"] = &SPFReader::loadIFCSLAB;
    m_Str2LoadFn["IFCSLABTYPE"] = &SPFReader::loadIFCSLABTYPE;
    m_Str2LoadFn["IFCSLIPPAGECONNECTIONCONDITION"] = &SPFReader::loadIFCSLIPPAGECONNECTIONCONDITION;
    m_Str2LoadFn["IFCSOLIDMODEL"] = &SPFReader::loadIFCSOLIDMODEL;
    m_Str2LoadFn["IFCSOUNDPROPERTIES"] = &SPFReader::loadIFCSOUNDPROPERTIES;
    m_Str2LoadFn["IFCSOUNDVALUE"] = &SPFReader::loadIFCSOUNDVALUE;
    m_Str2LoadFn["IFCSPACE"] = &SPFReader::loadIFCSPACE;
    m_Str2LoadFn["IFCSPACEHEATERTYPE"] = &SPFReader::loadIFCSPACEHEATERTYPE;
    m_Str2LoadFn["IFCSPACEPROGRAM"] = &SPFReader::loadIFCSPACEPROGRAM;
    m_Str2LoadFn["IFCSPACETHERMALLOADPROPERTIES"] = &SPFReader::loadIFCSPACETHERMALLOADPROPERTIES;
    m_Str2LoadFn["IFCSPACETYPE"] = &SPFReader::loadIFCSPACETYPE;
    m_Str2LoadFn["IFCSPATIALSTRUCTUREELEMENT"] = &SPFReader::loadIFCSPATIALSTRUCTUREELEMENT;
    m_Str2LoadFn["IFCSPATIALSTRUCTUREELEMENTTYPE"] = &SPFReader::loadIFCSPATIALSTRUCTUREELEMENTTYPE;
    m_Str2LoadFn["IFCSPHERE"] = &SPFReader::loadIFCSPHERE;
    m_Str2LoadFn["IFCSTACKTERMINALTYPE"] = &SPFReader::loadIFCSTACKTERMINALTYPE;
    m_Str2LoadFn["IFCSTAIR"] = &SPFReader::loadIFCSTAIR;
    m_Str2LoadFn["IFCSTAIRFLIGHT"] = &SPFReader::loadIFCSTAIRFLIGHT;
    m_Str2LoadFn["IFCSTAIRFLIGHTTYPE"] = &SPFReader::loadIFCSTAIRFLIGHTTYPE;
    m_Str2LoadFn["IFCSTRUCTURALACTION"] = &SPFReader::loadIFCSTRUCTURALACTION;
    m_Str2LoadFn["IFCSTRUCTURALACTIVITY"] = &SPFReader::loadIFCSTRUCTURALACTIVITY;
    m_Str2LoadFn["IFCSTRUCTURALANALYSISMODEL"] = &SPFReader::loadIFCSTRUCTURALANALYSISMODEL;
    m_Str2LoadFn["IFCSTRUCTURALCONNECTION"] = &SPFReader::loadIFCSTRUCTURALCONNECTION;
    m_Str2LoadFn["IFCSTRUCTURALCONNECTIONCONDITION"] = &SPFReader::loadIFCSTRUCTURALCONNECTIONCONDITION;
    m_Str2LoadFn["IFCSTRUCTURALCURVECONNECTION"] = &SPFReader::loadIFCSTRUCTURALCURVECONNECTION;
    m_Str2LoadFn["IFCSTRUCTURALCURVEMEMBER"] = &SPFReader::loadIFCSTRUCTURALCURVEMEMBER;
    m_Str2LoadFn["IFCSTRUCTURALCURVEMEMBERVARYING"] = &SPFReader::loadIFCSTRUCTURALCURVEMEMBERVARYING;
    m_Str2LoadFn["IFCSTRUCTURALITEM"] = &SPFReader::loadIFCSTRUCTURALITEM;
    m_Str2LoadFn["IFCSTRUCTURALLINEARACTION"] = &SPFReader::loadIFCSTRUCTURALLINEARACTION;
    m_Str2LoadFn["IFCSTRUCTURALLINEARACTIONVARYING"] = &SPFReader::loadIFCSTRUCTURALLINEARACTIONVARYING;
    m_Str2LoadFn["IFCSTRUCTURALLOAD"] = &SPFReader::loadIFCSTRUCTURALLOAD;
    m_Str2LoadFn["IFCSTRUCTURALLOADGROUP"] = &SPFReader::loadIFCSTRUCTURALLOADGROUP;
    m_Str2LoadFn["IFCSTRUCTURALLOADLINEARFORCE"] = &SPFReader::loadIFCSTRUCTURALLOADLINEARFORCE;
    m_Str2LoadFn["IFCSTRUCTURALLOADPLANARFORCE"] = &SPFReader::loadIFCSTRUCTURALLOADPLANARFORCE;
    m_Str2LoadFn["IFCSTRUCTURALLOADSINGLEDISPLACEMENT"] = &SPFReader::loadIFCSTRUCTURALLOADSINGLEDISPLACEMENT;
    m_Str2LoadFn["IFCSTRUCTURALLOADSINGLEDISPLACEMENTDISTORTION"] = &SPFReader::loadIFCSTRUCTURALLOADSINGLEDISPLACEMENTDISTORTION;
    m_Str2LoadFn["IFCSTRUCTURALLOADSINGLEFORCE"] = &SPFReader::loadIFCSTRUCTURALLOADSINGLEFORCE;
    m_Str2LoadFn["IFCSTRUCTURALLOADSINGLEFORCEWARPING"] = &SPFReader::loadIFCSTRUCTURALLOADSINGLEFORCEWARPING;
    m_Str2LoadFn["IFCSTRUCTURALLOADSTATIC"] = &SPFReader::loadIFCSTRUCTURALLOADSTATIC;
    m_Str2LoadFn["IFCSTRUCTURALLOADTEMPERATURE"] = &SPFReader::loadIFCSTRUCTURALLOADTEMPERATURE;
    m_Str2LoadFn["IFCSTRUCTURALMEMBER"] = &SPFReader::loadIFCSTRUCTURALMEMBER;
    m_Str2LoadFn["IFCSTRUCTURALPLANARACTION"] = &SPFReader::loadIFCSTRUCTURALPLANARACTION;
    m_Str2LoadFn["IFCSTRUCTURALPLANARACTIONVARYING"] = &SPFReader::loadIFCSTRUCTURALPLANARACTIONVARYING;
    m_Str2LoadFn["IFCSTRUCTURALPOINTACTION"] = &SPFReader::loadIFCSTRUCTURALPOINTACTION;
    m_Str2LoadFn["IFCSTRUCTURALPOINTCONNECTION"] = &SPFReader::loadIFCSTRUCTURALPOINTCONNECTION;
    m_Str2LoadFn["IFCSTRUCTURALPOINTREACTION"] = &SPFReader::loadIFCSTRUCTURALPOINTREACTION;
    m_Str2LoadFn["IFCSTRUCTURALPROFILEPROPERTIES"] = &SPFReader::loadIFCSTRUCTURALPROFILEPROPERTIES;
    m_Str2LoadFn["IFCSTRUCTURALREACTION"] = &SPFReader::loadIFCSTRUCTURALREACTION;
    m_Str2LoadFn["IFCSTRUCTURALRESULTGROUP"] = &SPFReader::loadIFCSTRUCTURALRESULTGROUP;
    m_Str2LoadFn["IFCSTRUCTURALSTEELPROFILEPROPERTIES"] = &SPFReader::loadIFCSTRUCTURALSTEELPROFILEPROPERTIES;
    m_Str2LoadFn["IFCSTRUCTURALSURFACECONNECTION"] = &SPFReader::loadIFCSTRUCTURALSURFACECONNECTION;
    m_Str2LoadFn["IFCSTRUCTURALSURFACEMEMBER"] = &SPFReader::loadIFCSTRUCTURALSURFACEMEMBER;
    m_Str2LoadFn["IFCSTRUCTURALSURFACEMEMBERVARYING"] = &SPFReader::loadIFCSTRUCTURALSURFACEMEMBERVARYING;
    m_Str2LoadFn["IFCSTRUCTUREDDIMENSIONCALLOUT"] = &SPFReader::loadIFCSTRUCTUREDDIMENSIONCALLOUT;
    m_Str2LoadFn["IFCSTYLEDITEM"] = &SPFReader::loadIFCSTYLEDITEM;
    m_Str2LoadFn["IFCSTYLEDREPRESENTATION"] = &SPFReader::loadIFCSTYLEDREPRESENTATION;
    m_Str2LoadFn["IFCSTYLEMODEL"] = &SPFReader::loadIFCSTYLEMODEL;
    m_Str2LoadFn["IFCSUBCONTRACTRESOURCE"] = &SPFReader::loadIFCSUBCONTRACTRESOURCE;
    m_Str2LoadFn["IFCSUBEDGE"] = &SPFReader::loadIFCSUBEDGE;
    m_Str2LoadFn["IFCSURFACE"] = &SPFReader::loadIFCSURFACE;
    m_Str2LoadFn["IFCSURFACECURVESWEPTAREASOLID"] = &SPFReader::loadIFCSURFACECURVESWEPTAREASOLID;
    m_Str2LoadFn["IFCSURFACEOFLINEAREXTRUSION"] = &SPFReader::loadIFCSURFACEOFLINEAREXTRUSION;
    m_Str2LoadFn["IFCSURFACEOFREVOLUTION"] = &SPFReader::loadIFCSURFACEOFREVOLUTION;
    m_Str2LoadFn["IFCSURFACESTYLE"] = &SPFReader::loadIFCSURFACESTYLE;
    m_Str2LoadFn["IFCSURFACESTYLELIGHTING"] = &SPFReader::loadIFCSURFACESTYLELIGHTING;
    m_Str2LoadFn["IFCSURFACESTYLEREFRACTION"] = &SPFReader::loadIFCSURFACESTYLEREFRACTION;
    m_Str2LoadFn["IFCSURFACESTYLERENDERING"] = &SPFReader::loadIFCSURFACESTYLERENDERING;
    m_Str2LoadFn["IFCSURFACESTYLESHADING"] = &SPFReader::loadIFCSURFACESTYLESHADING;
    m_Str2LoadFn["IFCSURFACESTYLEWITHTEXTURES"] = &SPFReader::loadIFCSURFACESTYLEWITHTEXTURES;
    m_Str2LoadFn["IFCSURFACETEXTURE"] = &SPFReader::loadIFCSURFACETEXTURE;
    m_Str2LoadFn["IFCSWEPTAREASOLID"] = &SPFReader::loadIFCSWEPTAREASOLID;
    m_Str2LoadFn["IFCSWEPTDISKSOLID"] = &SPFReader::loadIFCSWEPTDISKSOLID;
    m_Str2LoadFn["IFCSWEPTSURFACE"] = &SPFReader::loadIFCSWEPTSURFACE;
    m_Str2LoadFn["IFCSWITCHINGDEVICETYPE"] = &SPFReader::loadIFCSWITCHINGDEVICETYPE;
    m_Str2LoadFn["IFCSYMBOLSTYLE"] = &SPFReader::loadIFCSYMBOLSTYLE;
    m_Str2LoadFn["IFCSYSTEM"] = &SPFReader::loadIFCSYSTEM;
    m_Str2LoadFn["IFCSYSTEMFURNITUREELEMENTTYPE"] = &SPFReader::loadIFCSYSTEMFURNITUREELEMENTTYPE;
    m_Str2LoadFn["IFCTABLE"] = &SPFReader::loadIFCTABLE;
    m_Str2LoadFn["IFCTABLEROW"] = &SPFReader::loadIFCTABLEROW;
    m_Str2LoadFn["IFCTANKTYPE"] = &SPFReader::loadIFCTANKTYPE;
    m_Str2LoadFn["IFCTASK"] = &SPFReader::loadIFCTASK;
    m_Str2LoadFn["IFCTELECOMADDRESS"] = &SPFReader::loadIFCTELECOMADDRESS;
    m_Str2LoadFn["IFCTENDON"] = &SPFReader::loadIFCTENDON;
    m_Str2LoadFn["IFCTENDONANCHOR"] = &SPFReader::loadIFCTENDONANCHOR;
    m_Str2LoadFn["IFCTERMINATORSYMBOL"] = &SPFReader::loadIFCTERMINATORSYMBOL;
    m_Str2LoadFn["IFCTEXTLITERAL"] = &SPFReader::loadIFCTEXTLITERAL;
    m_Str2LoadFn["IFCTEXTLITERALWITHEXTENT"] = &SPFReader::loadIFCTEXTLITERALWITHEXTENT;
    m_Str2LoadFn["IFCTEXTSTYLE"] = &SPFReader::loadIFCTEXTSTYLE;
    m_Str2LoadFn["IFCTEXTSTYLEFONTMODEL"] = &SPFReader::loadIFCTEXTSTYLEFONTMODEL;
    m_Str2LoadFn["IFCTEXTSTYLEFORDEFINEDFONT"] = &SPFReader::loadIFCTEXTSTYLEFORDEFINEDFONT;
    m_Str2LoadFn["IFCTEXTSTYLETEXTMODEL"] = &SPFReader::loadIFCTEXTSTYLETEXTMODEL;
    m_Str2LoadFn["IFCTEXTSTYLEWITHBOXCHARACTERISTICS"] = &SPFReader::loadIFCTEXTSTYLEWITHBOXCHARACTERISTICS;
    m_Str2LoadFn["IFCTEXTURECOORDINATE"] = &SPFReader::loadIFCTEXTURECOORDINATE;
    m_Str2LoadFn["IFCTEXTURECOORDINATEGENERATOR"] = &SPFReader::loadIFCTEXTURECOORDINATEGENERATOR;
    m_Str2LoadFn["IFCTEXTUREMAP"] = &SPFReader::loadIFCTEXTUREMAP;
    m_Str2LoadFn["IFCTEXTUREVERTEX"] = &SPFReader::loadIFCTEXTUREVERTEX;
    m_Str2LoadFn["IFCTHERMALMATERIALPROPERTIES"] = &SPFReader::loadIFCTHERMALMATERIALPROPERTIES;
    m_Str2LoadFn["IFCTIMESERIES"] = &SPFReader::loadIFCTIMESERIES;
    m_Str2LoadFn["IFCTIMESERIESREFERENCERELATIONSHIP"] = &SPFReader::loadIFCTIMESERIESREFERENCERELATIONSHIP;
    m_Str2LoadFn["IFCTIMESERIESSCHEDULE"] = &SPFReader::loadIFCTIMESERIESSCHEDULE;
    m_Str2LoadFn["IFCTIMESERIESVALUE"] = &SPFReader::loadIFCTIMESERIESVALUE;
    m_Str2LoadFn["IFCTOPOLOGICALREPRESENTATIONITEM"] = &SPFReader::loadIFCTOPOLOGICALREPRESENTATIONITEM;
    m_Str2LoadFn["IFCTOPOLOGYREPRESENTATION"] = &SPFReader::loadIFCTOPOLOGYREPRESENTATION;
    m_Str2LoadFn["IFCTRANSFORMERTYPE"] = &SPFReader::loadIFCTRANSFORMERTYPE;
    m_Str2LoadFn["IFCTRANSPORTELEMENT"] = &SPFReader::loadIFCTRANSPORTELEMENT;
    m_Str2LoadFn["IFCTRANSPORTELEMENTTYPE"] = &SPFReader::loadIFCTRANSPORTELEMENTTYPE;
    m_Str2LoadFn["IFCTRAPEZIUMPROFILEDEF"] = &SPFReader::loadIFCTRAPEZIUMPROFILEDEF;
    m_Str2LoadFn["IFCTRIMMEDCURVE"] = &SPFReader::loadIFCTRIMMEDCURVE;
    m_Str2LoadFn["IFCTSHAPEPROFILEDEF"] = &SPFReader::loadIFCTSHAPEPROFILEDEF;
    m_Str2LoadFn["IFCTUBEBUNDLETYPE"] = &SPFReader::loadIFCTUBEBUNDLETYPE;
    m_Str2LoadFn["IFCTWODIRECTIONREPEATFACTOR"] = &SPFReader::loadIFCTWODIRECTIONREPEATFACTOR;
    m_Str2LoadFn["IFCTYPEOBJECT"] = &SPFReader::loadIFCTYPEOBJECT;
    m_Str2LoadFn["IFCTYPEPRODUCT"] = &SPFReader::loadIFCTYPEPRODUCT;
    m_Str2LoadFn["IFCUNITARYEQUIPMENTTYPE"] = &SPFReader::loadIFCUNITARYEQUIPMENTTYPE;
    m_Str2LoadFn["IFCUNITASSIGNMENT"] = &SPFReader::loadIFCUNITASSIGNMENT;
    m_Str2LoadFn["IFCUSHAPEPROFILEDEF"] = &SPFReader::loadIFCUSHAPEPROFILEDEF;
    m_Str2LoadFn["IFCVALVETYPE"] = &SPFReader::loadIFCVALVETYPE;
    m_Str2LoadFn["IFCVECTOR"] = &SPFReader::loadIFCVECTOR;
    m_Str2LoadFn["IFCVERTEX"] = &SPFReader::loadIFCVERTEX;
    m_Str2LoadFn["IFCVERTEXBASEDTEXTUREMAP"] = &SPFReader::loadIFCVERTEXBASEDTEXTUREMAP;
    m_Str2LoadFn["IFCVERTEXLOOP"] = &SPFReader::loadIFCVERTEXLOOP;
    m_Str2LoadFn["IFCVERTEXPOINT"] = &SPFReader::loadIFCVERTEXPOINT;
    m_Str2LoadFn["IFCVIBRATIONISOLATORTYPE"] = &SPFReader::loadIFCVIBRATIONISOLATORTYPE;
    m_Str2LoadFn["IFCVIRTUALELEMENT"] = &SPFReader::loadIFCVIRTUALELEMENT;
    m_Str2LoadFn["IFCVIRTUALGRIDINTERSECTION"] = &SPFReader::loadIFCVIRTUALGRIDINTERSECTION;
    m_Str2LoadFn["IFCWALL"] = &SPFReader::loadIFCWALL;
    m_Str2LoadFn["IFCWALLSTANDARDCASE"] = &SPFReader::loadIFCWALLSTANDARDCASE;
    m_Str2LoadFn["IFCWALLTYPE"] = &SPFReader::loadIFCWALLTYPE;
    m_Str2LoadFn["IFCWASTETERMINALTYPE"] = &SPFReader::loadIFCWASTETERMINALTYPE;
    m_Str2LoadFn["IFCWATERPROPERTIES"] = &SPFReader::loadIFCWATERPROPERTIES;
    m_Str2LoadFn["IFCWINDOW"] = &SPFReader::loadIFCWINDOW;
    m_Str2LoadFn["IFCWINDOWLININGPROPERTIES"] = &SPFReader::loadIFCWINDOWLININGPROPERTIES;
    m_Str2LoadFn["IFCWINDOWPANELPROPERTIES"] = &SPFReader::loadIFCWINDOWPANELPROPERTIES;
    m_Str2LoadFn["IFCWINDOWSTYLE"] = &SPFReader::loadIFCWINDOWSTYLE;
    m_Str2LoadFn["IFCWORKCONTROL"] = &SPFReader::loadIFCWORKCONTROL;
    m_Str2LoadFn["IFCWORKPLAN"] = &SPFReader::loadIFCWORKPLAN;
    m_Str2LoadFn["IFCWORKSCHEDULE"] = &SPFReader::loadIFCWORKSCHEDULE;
    m_Str2LoadFn["IFCZONE"] = &SPFReader::loadIFCZONE;
    m_Str2LoadFn["IFCZSHAPEPROFILEDEF"] = &SPFReader::loadIFCZSHAPEPROFILEDEF;
}

bool SPFReader::loadIFC2DCOMPOSITECURVE(bool isFirst)
{
    if (loadIFCCOMPOSITECURVE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfc2DCompositeCurve;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_Ifc2DCompositeCurve_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCACTIONREQUEST(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcActionRequest;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcActionRequest_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCACTOR(bool isFirst)
{
    if (loadIFCOBJECT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcActor;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcActor_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCACTORROLE(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcActorRole;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcActorRole_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCACTUATORTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcActuatorType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcActuatorType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCADDRESS(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCAIRTERMINALBOXTYPE(bool isFirst)
{
    if (loadIFCFLOWCONTROLLERTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAirTerminalBoxType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAirTerminalBoxType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCAIRTERMINALTYPE(bool isFirst)
{
    if (loadIFCFLOWTERMINALTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAirTerminalType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAirTerminalType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCAIRTOAIRHEATRECOVERYTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAirToAirHeatRecoveryType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAirToAirHeatRecoveryType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCALARMTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAlarmType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAlarmType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCANGULARDIMENSION(bool isFirst)
{
    if (loadIFCDIMENSIONCURVEDIRECTEDCALLOUT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAngularDimension;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAngularDimension_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCANNOTATION(bool isFirst)
{
    if (loadIFCPRODUCT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAnnotation;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAnnotation_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCANNOTATIONCURVEOCCURRENCE(bool isFirst)
{
    if (loadIFCANNOTATIONOCCURRENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAnnotationCurveOccurrence;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAnnotationCurveOccurrence_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCANNOTATIONFILLAREA(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAnnotationFillArea;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAnnotationFillArea_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCANNOTATIONFILLAREAOCCURRENCE(bool isFirst)
{
    if (loadIFCANNOTATIONOCCURRENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAnnotationFillAreaOccurrence;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAnnotationFillAreaOccurrence_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCANNOTATIONOCCURRENCE(bool isFirst)
{
    if (loadIFCSTYLEDITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCANNOTATIONSURFACE(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAnnotationSurface;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAnnotationSurface_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcAnnotationSurface, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcAnnotationSurface, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCANNOTATIONSURFACEOCCURRENCE(bool isFirst)
{
    if (loadIFCANNOTATIONOCCURRENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAnnotationSurfaceOccurrence;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAnnotationSurfaceOccurrence_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCANNOTATIONSYMBOLOCCURRENCE(bool isFirst)
{
    if (loadIFCANNOTATIONOCCURRENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAnnotationSymbolOccurrence;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAnnotationSymbolOccurrence_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCANNOTATIONTEXTOCCURRENCE(bool isFirst)
{
    if (loadIFCANNOTATIONOCCURRENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAnnotationTextOccurrence;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAnnotationTextOccurrence_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCAPPLICATION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcApplication;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcApplication_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCAPPLIEDVALUE(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCAPPLIEDVALUERELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAppliedValueRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAppliedValueRelationship_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcAppliedValueRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcAppliedValueRelationship, line " << m_currentLineNb);
        return false;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcAppliedValueRelationship, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcAppliedValueRelationship::getClassType(), 1, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCAPPROVAL(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcApproval;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcApproval_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCAPPROVALACTORRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcApprovalActorRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcApprovalActorRelationship_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcApprovalActorRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcApprovalActorRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCAPPROVALPROPERTYRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcApprovalPropertyRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcApprovalPropertyRelationship_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCAPPROVALRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcApprovalRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcApprovalRelationship_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcApprovalRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcApprovalRelationship, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcApprovalRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcApprovalRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCARBITRARYCLOSEDPROFILEDEF(bool isFirst)
{
    if (loadIFCPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcArbitraryClosedProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcArbitraryClosedProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCARBITRARYOPENPROFILEDEF(bool isFirst)
{
    if (loadIFCPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcArbitraryOpenProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcArbitraryOpenProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCARBITRARYPROFILEDEFWITHVOIDS(bool isFirst)
{
    if (loadIFCARBITRARYCLOSEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcArbitraryProfileDefWithVoids;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcArbitraryProfileDefWithVoids_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCASSET(bool isFirst)
{
    if (loadIFCGROUP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAsset;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAsset_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCASYMMETRICISHAPEPROFILEDEF(bool isFirst)
{
    if (loadIFCISHAPEPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAsymmetricIShapeProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAsymmetricIShapeProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCAXIS1PLACEMENT(bool isFirst)
{
    if (loadIFCPLACEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAxis1Placement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAxis1Placement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCAXIS2PLACEMENT2D(bool isFirst)
{
    if (loadIFCPLACEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAxis2Placement2D;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAxis2Placement2D_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCAXIS2PLACEMENT3D(bool isFirst)
{
    if (loadIFCPLACEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcAxis2Placement3D;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcAxis2Placement3D_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBEAM(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBeam;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBeam_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBEAMTYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBeamType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBeamType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBEZIERCURVE(bool isFirst)
{
    if (loadIFCBSPLINECURVE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBezierCurve;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBezierCurve_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBLOBTEXTURE(bool isFirst)
{
    if (loadIFCSURFACETEXTURE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBlobTexture;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBlobTexture_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBLOCK(bool isFirst)
{
    if (loadIFCCSGPRIMITIVE3D(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBlock;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBlock_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBOILERTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBoilerType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBoilerType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBOOLEANCLIPPINGRESULT(bool isFirst)
{
    if (loadIFCBOOLEANRESULT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBooleanClippingResult;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBooleanClippingResult_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBOOLEANRESULT(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBooleanResult;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBooleanResult_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBOUNDARYCONDITION(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCBOUNDARYEDGECONDITION(bool isFirst)
{
    if (loadIFCBOUNDARYCONDITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBoundaryEdgeCondition;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBoundaryEdgeCondition_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBOUNDARYFACECONDITION(bool isFirst)
{
    if (loadIFCBOUNDARYCONDITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBoundaryFaceCondition;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBoundaryFaceCondition_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBOUNDARYNODECONDITION(bool isFirst)
{
    if (loadIFCBOUNDARYCONDITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBoundaryNodeCondition;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBoundaryNodeCondition_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBOUNDARYNODECONDITIONWARPING(bool isFirst)
{
    if (loadIFCBOUNDARYNODECONDITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBoundaryNodeConditionWarping;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBoundaryNodeConditionWarping_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBOUNDEDCURVE(bool isFirst)
{
    if (loadIFCCURVE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCBOUNDEDSURFACE(bool isFirst)
{
    if (loadIFCSURFACE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBoundedSurface;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBoundedSurface_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBOUNDINGBOX(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBoundingBox;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBoundingBox_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBOXEDHALFSPACE(bool isFirst)
{
    if (loadIFCHALFSPACESOLID(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBoxedHalfSpace;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBoxedHalfSpace_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBSPLINECURVE(bool isFirst)
{
    if (loadIFCBOUNDEDCURVE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCBUILDING(bool isFirst)
{
    if (loadIFCSPATIALSTRUCTUREELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBuilding;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBuilding_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBUILDINGELEMENT(bool isFirst)
{
    if (loadIFCELEMENT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCBUILDINGELEMENTCOMPONENT(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCBUILDINGELEMENTPART(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTCOMPONENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBuildingElementPart;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBuildingElementPart_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBUILDINGELEMENTPROXY(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBuildingElementProxy;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBuildingElementProxy_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBUILDINGELEMENTPROXYTYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBuildingElementProxyType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBuildingElementProxyType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCBUILDINGELEMENTTYPE(bool isFirst)
{
    if (loadIFCELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCBUILDINGSTOREY(bool isFirst)
{
    if (loadIFCSPATIALSTRUCTUREELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcBuildingStorey;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcBuildingStorey_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCABLECARRIERFITTINGTYPE(bool isFirst)
{
    if (loadIFCFLOWFITTINGTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCableCarrierFittingType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCableCarrierFittingType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCABLECARRIERSEGMENTTYPE(bool isFirst)
{
    if (loadIFCFLOWSEGMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCableCarrierSegmentType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCableCarrierSegmentType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCABLESEGMENTTYPE(bool isFirst)
{
    if (loadIFCFLOWSEGMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCableSegmentType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCableSegmentType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCALENDARDATE(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCalendarDate;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCalendarDate_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCARTESIANPOINT(bool isFirst)
{
    if (loadIFCPOINT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCartesianPoint;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCartesianPoint_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR2D(bool isFirst)
{
    if (loadIFCCARTESIANTRANSFORMATIONOPERATOR(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCartesianTransformationOperator2D;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCartesianTransformationOperator2D_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR2DNONUNIFORM(bool isFirst)
{
    if (loadIFCCARTESIANTRANSFORMATIONOPERATOR2D(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCartesianTransformationOperator2DnonUniform;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCartesianTransformationOperator2DnonUniform_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR3D(bool isFirst)
{
    if (loadIFCCARTESIANTRANSFORMATIONOPERATOR(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCartesianTransformationOperator3D;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCartesianTransformationOperator3D_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCARTESIANTRANSFORMATIONOPERATOR3DNONUNIFORM(bool isFirst)
{
    if (loadIFCCARTESIANTRANSFORMATIONOPERATOR3D(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCartesianTransformationOperator3DnonUniform;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCartesianTransformationOperator3DnonUniform_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCENTERLINEPROFILEDEF(bool isFirst)
{
    if (loadIFCARBITRARYOPENPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCenterLineProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCenterLineProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCHAMFEREDGEFEATURE(bool isFirst)
{
    if (loadIFCEDGEFEATURE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcChamferEdgeFeature;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcChamferEdgeFeature_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCHILLERTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcChillerType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcChillerType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCIRCLE(bool isFirst)
{
    if (loadIFCCONIC(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCircle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCircle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCIRCLEHOLLOWPROFILEDEF(bool isFirst)
{
    if (loadIFCCIRCLEPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCircleHollowProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCircleHollowProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCIRCLEPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCircleProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCircleProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCLASSIFICATION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcClassification;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcClassification_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCLASSIFICATIONITEM(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcClassificationItem;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcClassificationItem_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcClassificationItem, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcClassificationItem, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCCLASSIFICATIONITEMRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcClassificationItemRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcClassificationItemRelationship_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcClassificationItemRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcClassificationItemRelationship, line " << m_currentLineNb);
        return false;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcClassificationItemRelationship, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcClassificationItemRelationship::getClassType(), 1, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCCLASSIFICATIONNOTATION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcClassificationNotation;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcClassificationNotation_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCLASSIFICATIONNOTATIONFACET(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcClassificationNotationFacet;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcClassificationNotationFacet_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCLASSIFICATIONREFERENCE(bool isFirst)
{
    if (loadIFCEXTERNALREFERENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcClassificationReference;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcClassificationReference_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCLOSEDSHELL(bool isFirst)
{
    if (loadIFCCONNECTEDFACESET(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcClosedShell;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcClosedShell_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOILTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCoilType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCoilType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOLOURRGB(bool isFirst)
{
    if (loadIFCCOLOURSPECIFICATION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcColourRgb;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcColourRgb_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOLOURSPECIFICATION(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCCOLUMN(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcColumn;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcColumn_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOLUMNTYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcColumnType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcColumnType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOMPLEXPROPERTY(bool isFirst)
{
    if (loadIFCPROPERTY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcComplexProperty;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcComplexProperty_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 3 of IfcComplexProperty, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcComplexProperty::getClassType(), 3, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCCOMPOSITECURVE(bool isFirst)
{
    if (loadIFCBOUNDEDCURVE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCompositeCurve;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCompositeCurve_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcCompositeCurve, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcCompositeCurve::getClassType(), 0, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCCOMPOSITECURVESEGMENT(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCompositeCurveSegment;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCompositeCurveSegment_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOMPOSITEPROFILEDEF(bool isFirst)
{
    if (loadIFCPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCompositeProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCompositeProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOMPRESSORTYPE(bool isFirst)
{
    if (loadIFCFLOWMOVINGDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCompressorType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCompressorType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONDENSERTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCondenserType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCondenserType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONDITION(bool isFirst)
{
    if (loadIFCGROUP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCondition;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCondition_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONDITIONCRITERION(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConditionCriterion;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConditionCriterion_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONIC(bool isFirst)
{
    if (loadIFCCURVE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCCONNECTEDFACESET(bool isFirst)
{
    if (loadIFCTOPOLOGICALREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConnectedFaceSet;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConnectedFaceSet_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONNECTIONCURVEGEOMETRY(bool isFirst)
{
    if (loadIFCCONNECTIONGEOMETRY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConnectionCurveGeometry;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConnectionCurveGeometry_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONNECTIONGEOMETRY(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCCONNECTIONPOINTECCENTRICITY(bool isFirst)
{
    if (loadIFCCONNECTIONPOINTGEOMETRY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConnectionPointEccentricity;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConnectionPointEccentricity_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONNECTIONPOINTGEOMETRY(bool isFirst)
{
    if (loadIFCCONNECTIONGEOMETRY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConnectionPointGeometry;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConnectionPointGeometry_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONNECTIONPORTGEOMETRY(bool isFirst)
{
    if (loadIFCCONNECTIONGEOMETRY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConnectionPortGeometry;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConnectionPortGeometry_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONNECTIONSURFACEGEOMETRY(bool isFirst)
{
    if (loadIFCCONNECTIONGEOMETRY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConnectionSurfaceGeometry;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConnectionSurfaceGeometry_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONSTRAINT(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCCONSTRAINTAGGREGATIONRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConstraintAggregationRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConstraintAggregationRelationship_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 3 of IfcConstraintAggregationRelationship, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcConstraintAggregationRelationship::getClassType(), 3, m_currentId);
        }
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 2)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 2 of IfcConstraintAggregationRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 2 of IfcConstraintAggregationRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCCONSTRAINTCLASSIFICATIONRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConstraintClassificationRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConstraintClassificationRelationship_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcConstraintClassificationRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcConstraintClassificationRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCCONSTRAINTRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConstraintRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConstraintRelationship_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 3 of IfcConstraintRelationship, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcConstraintRelationship::getClassType(), 3, m_currentId);
        }
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 2)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 2 of IfcConstraintRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 2 of IfcConstraintRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCCONSTRUCTIONEQUIPMENTRESOURCE(bool isFirst)
{
    if (loadIFCCONSTRUCTIONRESOURCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConstructionEquipmentResource;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConstructionEquipmentResource_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONSTRUCTIONMATERIALRESOURCE(bool isFirst)
{
    if (loadIFCCONSTRUCTIONRESOURCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConstructionMaterialResource;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConstructionMaterialResource_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONSTRUCTIONPRODUCTRESOURCE(bool isFirst)
{
    if (loadIFCCONSTRUCTIONRESOURCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConstructionProductResource;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConstructionProductResource_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONSTRUCTIONRESOURCE(bool isFirst)
{
    if (loadIFCRESOURCE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCCONTEXTDEPENDENTUNIT(bool isFirst)
{
    if (loadIFCNAMEDUNIT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcContextDependentUnit;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcContextDependentUnit_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONTROL(bool isFirst)
{
    if (loadIFCOBJECT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCCONTROLLERTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcControllerType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcControllerType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCONVERSIONBASEDUNIT(bool isFirst)
{
    if (loadIFCNAMEDUNIT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcConversionBasedUnit;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcConversionBasedUnit_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOOLEDBEAMTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCooledBeamType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCooledBeamType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOOLINGTOWERTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCoolingTowerType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCoolingTowerType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOORDINATEDUNIVERSALTIMEOFFSET(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCoordinatedUniversalTimeOffset;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCoordinatedUniversalTimeOffset_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOSTITEM(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCostItem;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCostItem_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOSTSCHEDULE(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCostSchedule;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCostSchedule_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOSTVALUE(bool isFirst)
{
    if (loadIFCAPPLIEDVALUE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCostValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCostValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOVERING(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCovering;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCovering_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCOVERINGTYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCoveringType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCoveringType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCRANERAILASHAPEPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCraneRailAShapeProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCraneRailAShapeProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCRANERAILFSHAPEPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCraneRailFShapeProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCraneRailFShapeProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCREWRESOURCE(bool isFirst)
{
    if (loadIFCCONSTRUCTIONRESOURCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCrewResource;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCrewResource_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCSGPRIMITIVE3D(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCCSGSOLID(bool isFirst)
{
    if (loadIFCSOLIDMODEL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCsgSolid;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCsgSolid_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCSHAPEPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCShapeProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCShapeProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCURRENCYRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCurrencyRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCurrencyRelationship_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCURTAINWALL(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCurtainWall;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCurtainWall_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCURTAINWALLTYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCurtainWallType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCurtainWallType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCURVE(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCCURVEBOUNDEDPLANE(bool isFirst)
{
    if (loadIFCBOUNDEDSURFACE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCurveBoundedPlane;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCurveBoundedPlane_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCURVESTYLE(bool isFirst)
{
    if (loadIFCPRESENTATIONSTYLE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCurveStyle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCurveStyle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCURVESTYLEFONT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCurveStyleFont;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCurveStyleFont_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCURVESTYLEFONTANDSCALING(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCurveStyleFontAndScaling;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCurveStyleFontAndScaling_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCCURVESTYLEFONTPATTERN(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcCurveStyleFontPattern;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcCurveStyleFontPattern_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDAMPERTYPE(bool isFirst)
{
    if (loadIFCFLOWCONTROLLERTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDamperType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDamperType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDATEANDTIME(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDateAndTime;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDateAndTime_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDEFINEDSYMBOL(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDefinedSymbol;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDefinedSymbol_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDERIVEDPROFILEDEF(bool isFirst)
{
    if (loadIFCPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDerivedProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDerivedProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDERIVEDUNIT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDerivedUnit;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDerivedUnit_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDERIVEDUNITELEMENT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDerivedUnitElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDerivedUnitElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDIAMETERDIMENSION(bool isFirst)
{
    if (loadIFCDIMENSIONCURVEDIRECTEDCALLOUT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDiameterDimension;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDiameterDimension_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDIMENSIONALEXPONENTS(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDimensionalExponents;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDimensionalExponents_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDIMENSIONCALLOUTRELATIONSHIP(bool isFirst)
{
    if (loadIFCDRAUGHTINGCALLOUTRELATIONSHIP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDimensionCalloutRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDimensionCalloutRelationship_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDIMENSIONCURVE(bool isFirst)
{
    if (loadIFCANNOTATIONCURVEOCCURRENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDimensionCurve;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDimensionCurve_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDIMENSIONCURVEDIRECTEDCALLOUT(bool isFirst)
{
    if (loadIFCDRAUGHTINGCALLOUT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDimensionCurveDirectedCallout;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDimensionCurveDirectedCallout_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDIMENSIONCURVETERMINATOR(bool isFirst)
{
    if (loadIFCTERMINATORSYMBOL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDimensionCurveTerminator;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDimensionCurveTerminator_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDIMENSIONPAIR(bool isFirst)
{
    if (loadIFCDRAUGHTINGCALLOUTRELATIONSHIP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDimensionPair;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDimensionPair_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDIRECTION(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDirection;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDirection_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDISCRETEACCESSORY(bool isFirst)
{
    if (loadIFCELEMENTCOMPONENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDiscreteAccessory;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDiscreteAccessory_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDISCRETEACCESSORYTYPE(bool isFirst)
{
    if (loadIFCELEMENTCOMPONENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDiscreteAccessoryType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDiscreteAccessoryType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDISTRIBUTIONCHAMBERELEMENT(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDistributionChamberElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDistributionChamberElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDISTRIBUTIONCHAMBERELEMENTTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDistributionChamberElementType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDistributionChamberElementType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDISTRIBUTIONCONTROLELEMENT(bool isFirst)
{
    if (loadIFCDISTRIBUTIONELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDistributionControlElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDistributionControlElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCDISTRIBUTIONELEMENT(bool isFirst)
{
    if (loadIFCELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDistributionElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDistributionElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDISTRIBUTIONELEMENTTYPE(bool isFirst)
{
    if (loadIFCELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDistributionElementType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDistributionElementType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDISTRIBUTIONFLOWELEMENT(bool isFirst)
{
    if (loadIFCDISTRIBUTIONELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDistributionFlowElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDistributionFlowElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDISTRIBUTIONFLOWELEMENTTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCDISTRIBUTIONPORT(bool isFirst)
{
    if (loadIFCPORT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDistributionPort;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDistributionPort_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDOCUMENTELECTRONICFORMAT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDocumentElectronicFormat;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDocumentElectronicFormat_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDOCUMENTINFORMATION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDocumentInformation;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDocumentInformation_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 3 of IfcDocumentInformation, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcDocumentInformation::getClassType(), 3, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCDOCUMENTINFORMATIONRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDocumentInformationRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDocumentInformationRelationship_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcDocumentInformationRelationship, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcDocumentInformationRelationship::getClassType(), 1, m_currentId);
        }
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcDocumentInformationRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcDocumentInformationRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCDOCUMENTREFERENCE(bool isFirst)
{
    if (loadIFCEXTERNALREFERENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDocumentReference;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDocumentReference_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDOOR(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDoor;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDoor_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDOORLININGPROPERTIES(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDoorLiningProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDoorLiningProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDOORPANELPROPERTIES(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDoorPanelProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDoorPanelProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDOORSTYLE(bool isFirst)
{
    if (loadIFCTYPEPRODUCT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDoorStyle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDoorStyle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDRAUGHTINGCALLOUT(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDraughtingCallout;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDraughtingCallout_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDRAUGHTINGCALLOUTRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDraughtingCalloutRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDraughtingCalloutRelationship_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 2)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 2 of IfcDraughtingCalloutRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 2 of IfcDraughtingCalloutRelationship, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 3)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 3 of IfcDraughtingCalloutRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 3 of IfcDraughtingCalloutRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCDRAUGHTINGPREDEFINEDCOLOUR(bool isFirst)
{
    if (loadIFCPREDEFINEDCOLOUR(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDraughtingPreDefinedColour;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDraughtingPreDefinedColour_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDRAUGHTINGPREDEFINEDCURVEFONT(bool isFirst)
{
    if (loadIFCPREDEFINEDCURVEFONT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDraughtingPreDefinedCurveFont;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDraughtingPreDefinedCurveFont_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDRAUGHTINGPREDEFINEDTEXTFONT(bool isFirst)
{
    if (loadIFCPREDEFINEDTEXTFONT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDraughtingPreDefinedTextFont;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDraughtingPreDefinedTextFont_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDUCTFITTINGTYPE(bool isFirst)
{
    if (loadIFCFLOWFITTINGTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDuctFittingType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDuctFittingType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDUCTSEGMENTTYPE(bool isFirst)
{
    if (loadIFCFLOWSEGMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDuctSegmentType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDuctSegmentType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCDUCTSILENCERTYPE(bool isFirst)
{
    if (loadIFCFLOWTREATMENTDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcDuctSilencerType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcDuctSilencerType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEDGE(bool isFirst)
{
    if (loadIFCTOPOLOGICALREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEdge;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEdge_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEDGECURVE(bool isFirst)
{
    if (loadIFCEDGE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEdgeCurve;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEdgeCurve_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEDGEFEATURE(bool isFirst)
{
    if (loadIFCFEATUREELEMENTSUBTRACTION(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCEDGELOOP(bool isFirst)
{
    if (loadIFCLOOP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEdgeLoop;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEdgeLoop_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELECTRICALBASEPROPERTIES(bool isFirst)
{
    if (loadIFCENERGYPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElectricalBaseProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElectricalBaseProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELECTRICALCIRCUIT(bool isFirst)
{
    if (loadIFCSYSTEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElectricalCircuit;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElectricalCircuit_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELECTRICALELEMENT(bool isFirst)
{
    if (loadIFCELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElectricalElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElectricalElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELECTRICAPPLIANCETYPE(bool isFirst)
{
    if (loadIFCFLOWTERMINALTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElectricApplianceType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElectricApplianceType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELECTRICDISTRIBUTIONPOINT(bool isFirst)
{
    if (loadIFCFLOWCONTROLLER(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElectricDistributionPoint;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElectricDistributionPoint_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELECTRICFLOWSTORAGEDEVICETYPE(bool isFirst)
{
    if (loadIFCFLOWSTORAGEDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElectricFlowStorageDeviceType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElectricFlowStorageDeviceType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELECTRICGENERATORTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElectricGeneratorType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElectricGeneratorType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELECTRICHEATERTYPE(bool isFirst)
{
    if (loadIFCFLOWTERMINALTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElectricHeaterType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElectricHeaterType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELECTRICMOTORTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElectricMotorType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElectricMotorType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELECTRICTIMECONTROLTYPE(bool isFirst)
{
    if (loadIFCFLOWCONTROLLERTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElectricTimeControlType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElectricTimeControlType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELEMENT(bool isFirst)
{
    if (loadIFCPRODUCT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCELEMENTARYSURFACE(bool isFirst)
{
    if (loadIFCSURFACE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCELEMENTASSEMBLY(bool isFirst)
{
    if (loadIFCELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElementAssembly;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElementAssembly_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELEMENTCOMPONENT(bool isFirst)
{
    if (loadIFCELEMENT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCELEMENTCOMPONENTTYPE(bool isFirst)
{
    if (loadIFCELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCELEMENTQUANTITY(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcElementQuantity;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcElementQuantity_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELEMENTTYPE(bool isFirst)
{
    if (loadIFCTYPEPRODUCT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCELLIPSE(bool isFirst)
{
    if (loadIFCCONIC(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEllipse;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEllipse_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCELLIPSEPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEllipseProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEllipseProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCENERGYCONVERSIONDEVICE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEnergyConversionDevice;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEnergyConversionDevice_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCENERGYCONVERSIONDEVICETYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCENERGYPROPERTIES(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEnergyProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEnergyProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCENVIRONMENTALIMPACTVALUE(bool isFirst)
{
    if (loadIFCAPPLIEDVALUE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEnvironmentalImpactValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEnvironmentalImpactValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEQUIPMENTELEMENT(bool isFirst)
{
    if (loadIFCELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEquipmentElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEquipmentElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEQUIPMENTSTANDARD(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEquipmentStandard;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEquipmentStandard_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEVAPORATIVECOOLERTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEvaporativeCoolerType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEvaporativeCoolerType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEVAPORATORTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcEvaporatorType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcEvaporatorType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEXTENDEDMATERIALPROPERTIES(bool isFirst)
{
    if (loadIFCMATERIALPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcExtendedMaterialProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcExtendedMaterialProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEXTERNALLYDEFINEDHATCHSTYLE(bool isFirst)
{
    if (loadIFCEXTERNALREFERENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcExternallyDefinedHatchStyle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcExternallyDefinedHatchStyle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEXTERNALLYDEFINEDSURFACESTYLE(bool isFirst)
{
    if (loadIFCEXTERNALREFERENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcExternallyDefinedSurfaceStyle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcExternallyDefinedSurfaceStyle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEXTERNALLYDEFINEDSYMBOL(bool isFirst)
{
    if (loadIFCEXTERNALREFERENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcExternallyDefinedSymbol;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcExternallyDefinedSymbol_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEXTERNALLYDEFINEDTEXTFONT(bool isFirst)
{
    if (loadIFCEXTERNALREFERENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcExternallyDefinedTextFont;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcExternallyDefinedTextFont_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCEXTERNALREFERENCE(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCEXTRUDEDAREASOLID(bool isFirst)
{
    if (loadIFCSWEPTAREASOLID(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcExtrudedAreaSolid;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcExtrudedAreaSolid_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFACE(bool isFirst)
{
    if (loadIFCTOPOLOGICALREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFace;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFace_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFACEBASEDSURFACEMODEL(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFaceBasedSurfaceModel;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFaceBasedSurfaceModel_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFACEBOUND(bool isFirst)
{
    if (loadIFCTOPOLOGICALREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFaceBound;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFaceBound_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFACEOUTERBOUND(bool isFirst)
{
    if (loadIFCFACEBOUND(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFaceOuterBound;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFaceOuterBound_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFACESURFACE(bool isFirst)
{
    if (loadIFCFACE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFaceSurface;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFaceSurface_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFACETEDBREP(bool isFirst)
{
    if (loadIFCMANIFOLDSOLIDBREP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFacetedBrep;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFacetedBrep_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFACETEDBREPWITHVOIDS(bool isFirst)
{
    if (loadIFCMANIFOLDSOLIDBREP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFacetedBrepWithVoids;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFacetedBrepWithVoids_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFAILURECONNECTIONCONDITION(bool isFirst)
{
    if (loadIFCSTRUCTURALCONNECTIONCONDITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFailureConnectionCondition;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFailureConnectionCondition_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFANTYPE(bool isFirst)
{
    if (loadIFCFLOWMOVINGDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFanType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFanType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFASTENER(bool isFirst)
{
    if (loadIFCELEMENTCOMPONENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFastener;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFastener_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFASTENERTYPE(bool isFirst)
{
    if (loadIFCELEMENTCOMPONENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFastenerType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFastenerType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFEATUREELEMENT(bool isFirst)
{
    if (loadIFCELEMENT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCFEATUREELEMENTADDITION(bool isFirst)
{
    if (loadIFCFEATUREELEMENT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCFEATUREELEMENTSUBTRACTION(bool isFirst)
{
    if (loadIFCFEATUREELEMENT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCFILLAREASTYLE(bool isFirst)
{
    if (loadIFCPRESENTATIONSTYLE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFillAreaStyle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFillAreaStyle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFILLAREASTYLEHATCHING(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFillAreaStyleHatching;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFillAreaStyleHatching_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFILLAREASTYLETILES(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFillAreaStyleTiles;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFillAreaStyleTiles_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFILLAREASTYLETILESYMBOLWITHSTYLE(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFillAreaStyleTileSymbolWithStyle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFillAreaStyleTileSymbolWithStyle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFILTERTYPE(bool isFirst)
{
    if (loadIFCFLOWTREATMENTDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFilterType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFilterType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFIRESUPPRESSIONTERMINALTYPE(bool isFirst)
{
    if (loadIFCFLOWTERMINALTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFireSuppressionTerminalType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFireSuppressionTerminalType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFLOWCONTROLLER(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFlowController;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFlowController_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFLOWCONTROLLERTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCFLOWFITTING(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFlowFitting;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFlowFitting_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFLOWFITTINGTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCFLOWINSTRUMENTTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFlowInstrumentType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFlowInstrumentType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFLOWMETERTYPE(bool isFirst)
{
    if (loadIFCFLOWCONTROLLERTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFlowMeterType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFlowMeterType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFLOWMOVINGDEVICE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFlowMovingDevice;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFlowMovingDevice_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFLOWMOVINGDEVICETYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCFLOWSEGMENT(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFlowSegment;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFlowSegment_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFLOWSEGMENTTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCFLOWSTORAGEDEVICE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFlowStorageDevice;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFlowStorageDevice_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFLOWSTORAGEDEVICETYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCFLOWTERMINAL(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFlowTerminal;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFlowTerminal_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFLOWTERMINALTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCFLOWTREATMENTDEVICE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFlowTreatmentDevice;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFlowTreatmentDevice_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFLOWTREATMENTDEVICETYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONFLOWELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCFLUIDFLOWPROPERTIES(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFluidFlowProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFluidFlowProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFOOTING(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFooting;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFooting_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFUELPROPERTIES(bool isFirst)
{
    if (loadIFCMATERIALPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFuelProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFuelProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFURNISHINGELEMENT(bool isFirst)
{
    if (loadIFCELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFurnishingElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFurnishingElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFURNISHINGELEMENTTYPE(bool isFirst)
{
    if (loadIFCELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFurnishingElementType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFurnishingElementType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFURNITURESTANDARD(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFurnitureStandard;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFurnitureStandard_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCFURNITURETYPE(bool isFirst)
{
    if (loadIFCFURNISHINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcFurnitureType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcFurnitureType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCGASTERMINALTYPE(bool isFirst)
{
    if (loadIFCFLOWTERMINALTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcGasTerminalType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcGasTerminalType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCGENERALMATERIALPROPERTIES(bool isFirst)
{
    if (loadIFCMATERIALPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcGeneralMaterialProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcGeneralMaterialProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCGENERALPROFILEPROPERTIES(bool isFirst)
{
    if (loadIFCPROFILEPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcGeneralProfileProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcGeneralProfileProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCGEOMETRICCURVESET(bool isFirst)
{
    if (loadIFCGEOMETRICSET(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcGeometricCurveSet;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcGeometricCurveSet_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCGEOMETRICREPRESENTATIONCONTEXT(bool isFirst)
{
    if (loadIFCREPRESENTATIONCONTEXT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcGeometricRepresentationContext;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcGeometricRepresentationContext_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCGEOMETRICREPRESENTATIONITEM(bool isFirst)
{
    if (loadIFCREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCGEOMETRICREPRESENTATIONSUBCONTEXT(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONCONTEXT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcGeometricRepresentationSubContext;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcGeometricRepresentationSubContext_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcGeometricRepresentationSubContext, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcGeometricRepresentationSubContext, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCGEOMETRICSET(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcGeometricSet;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcGeometricSet_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCGRID(bool isFirst)
{
    if (loadIFCPRODUCT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcGrid;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcGrid_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(8), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 8 of IfcGrid, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcGrid::getClassType(), 8, m_currentId);
        }
    }
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 7 of IfcGrid, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcGrid::getClassType(), 7, m_currentId);
        }
    }
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(9), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 9 of IfcGrid, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcGrid::getClassType(), 9, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCGRIDAXIS(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcGridAxis;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcGridAxis_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCGRIDPLACEMENT(bool isFirst)
{
    if (loadIFCOBJECTPLACEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcGridPlacement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcGridPlacement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCGROUP(bool isFirst)
{
    if (loadIFCOBJECT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcGroup;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcGroup_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCHALFSPACESOLID(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcHalfSpaceSolid;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcHalfSpaceSolid_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCHEATEXCHANGERTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcHeatExchangerType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcHeatExchangerType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCHUMIDIFIERTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcHumidifierType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcHumidifierType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCHYGROSCOPICMATERIALPROPERTIES(bool isFirst)
{
    if (loadIFCMATERIALPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcHygroscopicMaterialProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcHygroscopicMaterialProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCIMAGETEXTURE(bool isFirst)
{
    if (loadIFCSURFACETEXTURE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcImageTexture;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcImageTexture_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCINVENTORY(bool isFirst)
{
    if (loadIFCGROUP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcInventory;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcInventory_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCIRREGULARTIMESERIES(bool isFirst)
{
    if (loadIFCTIMESERIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcIrregularTimeSeries;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcIrregularTimeSeries_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCIRREGULARTIMESERIESVALUE(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcIrregularTimeSeriesValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcIrregularTimeSeriesValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCISHAPEPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcIShapeProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcIShapeProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCJUNCTIONBOXTYPE(bool isFirst)
{
    if (loadIFCFLOWFITTINGTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcJunctionBoxType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcJunctionBoxType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLABORRESOURCE(bool isFirst)
{
    if (loadIFCCONSTRUCTIONRESOURCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLaborResource;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLaborResource_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLAMPTYPE(bool isFirst)
{
    if (loadIFCFLOWTERMINALTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLampType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLampType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLIBRARYINFORMATION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLibraryInformation;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLibraryInformation_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcLibraryInformation, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcLibraryInformation::getClassType(), 4, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCLIBRARYREFERENCE(bool isFirst)
{
    if (loadIFCEXTERNALREFERENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLibraryReference;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLibraryReference_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLIGHTDISTRIBUTIONDATA(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLightDistributionData;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLightDistributionData_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLIGHTFIXTURETYPE(bool isFirst)
{
    if (loadIFCFLOWTERMINALTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLightFixtureType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLightFixtureType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLIGHTINTENSITYDISTRIBUTION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLightIntensityDistribution;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLightIntensityDistribution_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLIGHTSOURCE(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCLIGHTSOURCEAMBIENT(bool isFirst)
{
    if (loadIFCLIGHTSOURCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLightSourceAmbient;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLightSourceAmbient_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLIGHTSOURCEDIRECTIONAL(bool isFirst)
{
    if (loadIFCLIGHTSOURCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLightSourceDirectional;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLightSourceDirectional_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLIGHTSOURCEGONIOMETRIC(bool isFirst)
{
    if (loadIFCLIGHTSOURCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLightSourceGoniometric;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLightSourceGoniometric_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLIGHTSOURCEPOSITIONAL(bool isFirst)
{
    if (loadIFCLIGHTSOURCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLightSourcePositional;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLightSourcePositional_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLIGHTSOURCESPOT(bool isFirst)
{
    if (loadIFCLIGHTSOURCEPOSITIONAL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLightSourceSpot;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLightSourceSpot_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLINE(bool isFirst)
{
    if (loadIFCCURVE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLine;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLine_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLINEARDIMENSION(bool isFirst)
{
    if (loadIFCDIMENSIONCURVEDIRECTEDCALLOUT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLinearDimension;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLinearDimension_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLOCALPLACEMENT(bool isFirst)
{
    if (loadIFCOBJECTPLACEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLocalPlacement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLocalPlacement_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcLocalPlacement, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcLocalPlacement, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCLOCALTIME(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLocalTime;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLocalTime_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLOOP(bool isFirst)
{
    if (loadIFCTOPOLOGICALREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLoop;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLoop_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCLSHAPEPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcLShapeProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcLShapeProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMANIFOLDSOLIDBREP(bool isFirst)
{
    if (loadIFCSOLIDMODEL(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCMAPPEDITEM(bool isFirst)
{
    if (loadIFCREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMappedItem;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMappedItem_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcMappedItem, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcMappedItem, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCMATERIAL(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMaterial;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMaterial_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMATERIALCLASSIFICATIONRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMaterialClassificationRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMaterialClassificationRelationship_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcMaterialClassificationRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcMaterialClassificationRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCMATERIALDEFINITIONREPRESENTATION(bool isFirst)
{
    if (loadIFCPRODUCTREPRESENTATION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMaterialDefinitionRepresentation;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMaterialDefinitionRepresentation_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 3)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 3 of IfcMaterialDefinitionRepresentation, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 3 of IfcMaterialDefinitionRepresentation, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCMATERIALLAYER(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMaterialLayer;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMaterialLayer_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMATERIALLAYERSET(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMaterialLayerSet;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMaterialLayerSet_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcMaterialLayerSet, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcMaterialLayerSet::getClassType(), 0, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCMATERIALLAYERSETUSAGE(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMaterialLayerSetUsage;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMaterialLayerSetUsage_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMATERIALLIST(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMaterialList;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMaterialList_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMATERIALPROPERTIES(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCMEASUREWITHUNIT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMeasureWithUnit;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMeasureWithUnit_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMECHANICALCONCRETEMATERIALPROPERTIES(bool isFirst)
{
    if (loadIFCMECHANICALMATERIALPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMechanicalConcreteMaterialProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMechanicalConcreteMaterialProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMECHANICALFASTENER(bool isFirst)
{
    if (loadIFCFASTENER(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMechanicalFastener;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMechanicalFastener_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMECHANICALFASTENERTYPE(bool isFirst)
{
    if (loadIFCFASTENERTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMechanicalFastenerType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMechanicalFastenerType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMECHANICALMATERIALPROPERTIES(bool isFirst)
{
    if (loadIFCMATERIALPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMechanicalMaterialProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMechanicalMaterialProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMECHANICALSTEELMATERIALPROPERTIES(bool isFirst)
{
    if (loadIFCMECHANICALMATERIALPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMechanicalSteelMaterialProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMechanicalSteelMaterialProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMEMBER(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMember;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMember_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMEMBERTYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMemberType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMemberType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMETRIC(bool isFirst)
{
    if (loadIFCCONSTRAINT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMetric;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMetric_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMONETARYUNIT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMonetaryUnit;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMonetaryUnit_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMOTORCONNECTIONTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMotorConnectionType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMotorConnectionType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCMOVE(bool isFirst)
{
    if (loadIFCTASK(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcMove;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcMove_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCNAMEDUNIT(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCOBJECT(bool isFirst)
{
    if (loadIFCOBJECTDEFINITION(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCOBJECTDEFINITION(bool isFirst)
{
    if (loadIFCROOT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCOBJECTIVE(bool isFirst)
{
    if (loadIFCCONSTRAINT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcObjective;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcObjective_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCOBJECTPLACEMENT(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCOCCUPANT(bool isFirst)
{
    if (loadIFCACTOR(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOccupant;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOccupant_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCOFFSETCURVE2D(bool isFirst)
{
    if (loadIFCCURVE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOffsetCurve2D;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOffsetCurve2D_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCOFFSETCURVE3D(bool isFirst)
{
    if (loadIFCCURVE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOffsetCurve3D;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOffsetCurve3D_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCONEDIRECTIONREPEATFACTOR(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOneDirectionRepeatFactor;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOneDirectionRepeatFactor_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCOPENINGELEMENT(bool isFirst)
{
    if (loadIFCFEATUREELEMENTSUBTRACTION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOpeningElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOpeningElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCOPENSHELL(bool isFirst)
{
    if (loadIFCCONNECTEDFACESET(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOpenShell;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOpenShell_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCOPTICALMATERIALPROPERTIES(bool isFirst)
{
    if (loadIFCMATERIALPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOpticalMaterialProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOpticalMaterialProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCORDERACTION(bool isFirst)
{
    if (loadIFCTASK(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOrderAction;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOrderAction_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCORGANIZATION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOrganization;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOrganization_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcOrganization, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcOrganization::getClassType(), 4, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCORGANIZATIONRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOrganizationRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOrganizationRelationship_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 3 of IfcOrganizationRelationship, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcOrganizationRelationship::getClassType(), 3, m_currentId);
        }
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 2)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 2 of IfcOrganizationRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 2 of IfcOrganizationRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCORIENTEDEDGE(bool isFirst)
{
    if (loadIFCEDGE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOrientedEdge;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOrientedEdge_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCOUTLETTYPE(bool isFirst)
{
    if (loadIFCFLOWTERMINALTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOutletType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOutletType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCOWNERHISTORY(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcOwnerHistory;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcOwnerHistory_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPARAMETERIZEDPROFILEDEF(bool isFirst)
{
    if (loadIFCPROFILEDEF(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPATH(bool isFirst)
{
    if (loadIFCTOPOLOGICALREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPath;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPath_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPERFORMANCEHISTORY(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPerformanceHistory;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPerformanceHistory_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPERMEABLECOVERINGPROPERTIES(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPermeableCoveringProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPermeableCoveringProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPERMIT(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPermit;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPermit_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPERSON(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPerson;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPerson_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 7 of IfcPerson, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcPerson::getClassType(), 7, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCPERSONANDORGANIZATION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPersonAndOrganization;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPersonAndOrganization_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcPersonAndOrganization, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcPersonAndOrganization, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcPersonAndOrganization, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcPersonAndOrganization, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPHYSICALCOMPLEXQUANTITY(bool isFirst)
{
    if (loadIFCPHYSICALQUANTITY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPhysicalComplexQuantity;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPhysicalComplexQuantity_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 2 of IfcPhysicalComplexQuantity, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcPhysicalComplexQuantity::getClassType(), 2, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCPHYSICALQUANTITY(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCPHYSICALSIMPLEQUANTITY(bool isFirst)
{
    if (loadIFCPHYSICALQUANTITY(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPILE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPile;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPile_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPIPEFITTINGTYPE(bool isFirst)
{
    if (loadIFCFLOWFITTINGTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPipeFittingType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPipeFittingType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPIPESEGMENTTYPE(bool isFirst)
{
    if (loadIFCFLOWSEGMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPipeSegmentType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPipeSegmentType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPIXELTEXTURE(bool isFirst)
{
    if (loadIFCSURFACETEXTURE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPixelTexture;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPixelTexture_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPLACEMENT(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPLANARBOX(bool isFirst)
{
    if (loadIFCPLANAREXTENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPlanarBox;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPlanarBox_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPLANAREXTENT(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPlanarExtent;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPlanarExtent_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPLANE(bool isFirst)
{
    if (loadIFCELEMENTARYSURFACE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPlane;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPlane_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPLATE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPlate;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPlate_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPLATETYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPlateType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPlateType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPOINT(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPOINTONCURVE(bool isFirst)
{
    if (loadIFCPOINT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPointOnCurve;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPointOnCurve_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPOINTONSURFACE(bool isFirst)
{
    if (loadIFCPOINT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPointOnSurface;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPointOnSurface_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPOLYGONALBOUNDEDHALFSPACE(bool isFirst)
{
    if (loadIFCHALFSPACESOLID(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPolygonalBoundedHalfSpace;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPolygonalBoundedHalfSpace_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPOLYLINE(bool isFirst)
{
    if (loadIFCBOUNDEDCURVE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPolyline;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPolyline_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPOLYLOOP(bool isFirst)
{
    if (loadIFCLOOP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPolyLoop;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPolyLoop_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPORT(bool isFirst)
{
    if (loadIFCPRODUCT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPOSTALADDRESS(bool isFirst)
{
    if (loadIFCADDRESS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPostalAddress;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPostalAddress_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPREDEFINEDCOLOUR(bool isFirst)
{
    if (loadIFCPREDEFINEDITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPREDEFINEDCURVEFONT(bool isFirst)
{
    if (loadIFCPREDEFINEDITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPREDEFINEDDIMENSIONSYMBOL(bool isFirst)
{
    if (loadIFCPREDEFINEDSYMBOL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPreDefinedDimensionSymbol;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPreDefinedDimensionSymbol_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPREDEFINEDITEM(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCPREDEFINEDPOINTMARKERSYMBOL(bool isFirst)
{
    if (loadIFCPREDEFINEDSYMBOL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPreDefinedPointMarkerSymbol;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPreDefinedPointMarkerSymbol_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPREDEFINEDSYMBOL(bool isFirst)
{
    if (loadIFCPREDEFINEDITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPREDEFINEDTERMINATORSYMBOL(bool isFirst)
{
    if (loadIFCPREDEFINEDSYMBOL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPreDefinedTerminatorSymbol;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPreDefinedTerminatorSymbol_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPREDEFINEDTEXTFONT(bool isFirst)
{
    if (loadIFCPREDEFINEDITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPRESENTATIONLAYERASSIGNMENT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPresentationLayerAssignment;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPresentationLayerAssignment_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 2 of IfcPresentationLayerAssignment, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcPresentationLayerAssignment::getClassType(), 2, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCPRESENTATIONLAYERWITHSTYLE(bool isFirst)
{
    if (loadIFCPRESENTATIONLAYERASSIGNMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPresentationLayerWithStyle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPresentationLayerWithStyle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPRESENTATIONSTYLE(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCPRESENTATIONSTYLEASSIGNMENT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPresentationStyleAssignment;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPresentationStyleAssignment_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROCEDURE(bool isFirst)
{
    if (loadIFCPROCESS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcProcedure;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcProcedure_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROCESS(bool isFirst)
{
    if (loadIFCOBJECT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPRODUCT(bool isFirst)
{
    if (loadIFCOBJECT(false) == false)
    {
        return false;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcProduct, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcProduct, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcProduct, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcProduct, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPRODUCTDEFINITIONSHAPE(bool isFirst)
{
    if (loadIFCPRODUCTREPRESENTATION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcProductDefinitionShape;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcProductDefinitionShape_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPRODUCTREPRESENTATION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcProductRepresentation;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcProductRepresentation_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(2), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 2 of IfcProductRepresentation, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcProductRepresentation::getClassType(), 2, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCPRODUCTSOFCOMBUSTIONPROPERTIES(bool isFirst)
{
    if (loadIFCMATERIALPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcProductsOfCombustionProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcProductsOfCombustionProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROFILEDEF(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCPROFILEPROPERTIES(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCPROJECT(bool isFirst)
{
    if (loadIFCOBJECT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcProject;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcProject_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROJECTIONCURVE(bool isFirst)
{
    if (loadIFCANNOTATIONCURVEOCCURRENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcProjectionCurve;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcProjectionCurve_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROJECTIONELEMENT(bool isFirst)
{
    if (loadIFCFEATUREELEMENTADDITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcProjectionElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcProjectionElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROJECTORDER(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcProjectOrder;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcProjectOrder_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROJECTORDERRECORD(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcProjectOrderRecord;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcProjectOrderRecord_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTY(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCPROPERTYBOUNDEDVALUE(bool isFirst)
{
    if (loadIFCSIMPLEPROPERTY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPropertyBoundedValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPropertyBoundedValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTYCONSTRAINTRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPropertyConstraintRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPropertyConstraintRelationship_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcPropertyConstraintRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcPropertyConstraintRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTYDEFINITION(bool isFirst)
{
    if (loadIFCROOT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTYDEPENDENCYRELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPropertyDependencyRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPropertyDependencyRelationship_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcPropertyDependencyRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcPropertyDependencyRelationship, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcPropertyDependencyRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcPropertyDependencyRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTYENUMERATEDVALUE(bool isFirst)
{
    if (loadIFCSIMPLEPROPERTY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPropertyEnumeratedValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPropertyEnumeratedValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTYENUMERATION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPropertyEnumeration;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPropertyEnumeration_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTYLISTVALUE(bool isFirst)
{
    if (loadIFCSIMPLEPROPERTY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPropertyListValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPropertyListValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTYREFERENCEVALUE(bool isFirst)
{
    if (loadIFCSIMPLEPROPERTY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPropertyReferenceValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPropertyReferenceValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTYSET(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPropertySet;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPropertySet_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTYSETDEFINITION(bool isFirst)
{
    if (loadIFCPROPERTYDEFINITION(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTYSINGLEVALUE(bool isFirst)
{
    if (loadIFCSIMPLEPROPERTY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPropertySingleValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPropertySingleValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROPERTYTABLEVALUE(bool isFirst)
{
    if (loadIFCSIMPLEPROPERTY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPropertyTableValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPropertyTableValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROTECTIVEDEVICETYPE(bool isFirst)
{
    if (loadIFCFLOWCONTROLLERTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcProtectiveDeviceType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcProtectiveDeviceType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPROXY(bool isFirst)
{
    if (loadIFCPRODUCT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcProxy;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcProxy_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCPUMPTYPE(bool isFirst)
{
    if (loadIFCFLOWMOVINGDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcPumpType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcPumpType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCQUANTITYAREA(bool isFirst)
{
    if (loadIFCPHYSICALSIMPLEQUANTITY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcQuantityArea;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcQuantityArea_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCQUANTITYCOUNT(bool isFirst)
{
    if (loadIFCPHYSICALSIMPLEQUANTITY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcQuantityCount;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcQuantityCount_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCQUANTITYLENGTH(bool isFirst)
{
    if (loadIFCPHYSICALSIMPLEQUANTITY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcQuantityLength;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcQuantityLength_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCQUANTITYTIME(bool isFirst)
{
    if (loadIFCPHYSICALSIMPLEQUANTITY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcQuantityTime;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcQuantityTime_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCQUANTITYVOLUME(bool isFirst)
{
    if (loadIFCPHYSICALSIMPLEQUANTITY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcQuantityVolume;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcQuantityVolume_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCQUANTITYWEIGHT(bool isFirst)
{
    if (loadIFCPHYSICALSIMPLEQUANTITY(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcQuantityWeight;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcQuantityWeight_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRADIUSDIMENSION(bool isFirst)
{
    if (loadIFCDIMENSIONCURVEDIRECTEDCALLOUT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRadiusDimension;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRadiusDimension_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRAILING(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRailing;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRailing_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRAILINGTYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRailingType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRailingType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRAMP(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRamp;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRamp_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRAMPFLIGHT(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRampFlight;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRampFlight_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRAMPFLIGHTTYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRampFlightType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRampFlightType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRATIONALBEZIERCURVE(bool isFirst)
{
    if (loadIFCBEZIERCURVE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRationalBezierCurve;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRationalBezierCurve_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRECTANGLEHOLLOWPROFILEDEF(bool isFirst)
{
    if (loadIFCRECTANGLEPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRectangleHollowProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRectangleHollowProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRECTANGLEPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRectangleProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRectangleProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRECTANGULARPYRAMID(bool isFirst)
{
    if (loadIFCCSGPRIMITIVE3D(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRectangularPyramid;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRectangularPyramid_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRECTANGULARTRIMMEDSURFACE(bool isFirst)
{
    if (loadIFCBOUNDEDSURFACE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRectangularTrimmedSurface;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRectangularTrimmedSurface_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCREFERENCESVALUEDOCUMENT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcReferencesValueDocument;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcReferencesValueDocument_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcReferencesValueDocument, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcReferencesValueDocument::getClassType(), 1, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCREGULARTIMESERIES(bool isFirst)
{
    if (loadIFCTIMESERIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRegularTimeSeries;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRegularTimeSeries_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCREINFORCEMENTBARPROPERTIES(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcReinforcementBarProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcReinforcementBarProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCREINFORCEMENTDEFINITIONPROPERTIES(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcReinforcementDefinitionProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcReinforcementDefinitionProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCREINFORCINGBAR(bool isFirst)
{
    if (loadIFCREINFORCINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcReinforcingBar;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcReinforcingBar_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCREINFORCINGELEMENT(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTCOMPONENT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCREINFORCINGMESH(bool isFirst)
{
    if (loadIFCREINFORCINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcReinforcingMesh;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcReinforcingMesh_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELAGGREGATES(bool isFirst)
{
    if (loadIFCRELDECOMPOSES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAggregates;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAggregates_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELASSIGNS(bool isFirst)
{
    if (loadIFCRELATIONSHIP(false) == false)
    {
        return false;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelAssigns, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcRelAssigns::getClassType(), 4, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCRELASSIGNSTASKS(bool isFirst)
{
    if (loadIFCRELASSIGNSTOCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssignsTasks;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssignsTasks_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 7)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 7 of IfcRelAssignsTasks, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 7 of IfcRelAssignsTasks, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELASSIGNSTOACTOR(bool isFirst)
{
    if (loadIFCRELASSIGNS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssignsToActor;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssignsToActor_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToActor, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToActor, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELASSIGNSTOCONTROL(bool isFirst)
{
    if (loadIFCRELASSIGNS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssignsToControl;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssignsToControl_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToControl, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToControl, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELASSIGNSTOGROUP(bool isFirst)
{
    if (loadIFCRELASSIGNS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssignsToGroup;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssignsToGroup_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToGroup, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToGroup, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELASSIGNSTOPROCESS(bool isFirst)
{
    if (loadIFCRELASSIGNS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssignsToProcess;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssignsToProcess_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToProcess, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToProcess, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELASSIGNSTOPRODUCT(bool isFirst)
{
    if (loadIFCRELASSIGNS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssignsToProduct;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssignsToProduct_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToProduct, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToProduct, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELASSIGNSTOPROJECTORDER(bool isFirst)
{
    if (loadIFCRELASSIGNSTOCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssignsToProjectOrder;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssignsToProjectOrder_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELASSIGNSTORESOURCE(bool isFirst)
{
    if (loadIFCRELASSIGNS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssignsToResource;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssignsToResource_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToResource, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelAssignsToResource, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELASSOCIATES(bool isFirst)
{
    if (loadIFCRELATIONSHIP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssociates;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssociates_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelAssociates, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcRelAssociates::getClassType(), 4, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCRELASSOCIATESAPPLIEDVALUE(bool isFirst)
{
    if (loadIFCRELASSOCIATES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssociatesAppliedValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssociatesAppliedValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELASSOCIATESAPPROVAL(bool isFirst)
{
    if (loadIFCRELASSOCIATES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssociatesApproval;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssociatesApproval_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELASSOCIATESCLASSIFICATION(bool isFirst)
{
    if (loadIFCRELASSOCIATES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssociatesClassification;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssociatesClassification_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELASSOCIATESCONSTRAINT(bool isFirst)
{
    if (loadIFCRELASSOCIATES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssociatesConstraint;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssociatesConstraint_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELASSOCIATESDOCUMENT(bool isFirst)
{
    if (loadIFCRELASSOCIATES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssociatesDocument;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssociatesDocument_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELASSOCIATESLIBRARY(bool isFirst)
{
    if (loadIFCRELASSOCIATES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssociatesLibrary;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssociatesLibrary_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELASSOCIATESMATERIAL(bool isFirst)
{
    if (loadIFCRELASSOCIATES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssociatesMaterial;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssociatesMaterial_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELASSOCIATESPROFILEPROPERTIES(bool isFirst)
{
    if (loadIFCRELASSOCIATES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelAssociatesProfileProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelAssociatesProfileProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELATIONSHIP(bool isFirst)
{
    if (loadIFCROOT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELAXATION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelaxation;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelaxation_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELCONNECTS(bool isFirst)
{
    if (loadIFCRELATIONSHIP(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELCONNECTSELEMENTS(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelConnectsElements;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelConnectsElements_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsElements, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsElements, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelConnectsElements, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcRelConnectsElements, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELCONNECTSPATHELEMENTS(bool isFirst)
{
    if (loadIFCRELCONNECTSELEMENTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelConnectsPathElements;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelConnectsPathElements_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELCONNECTSPORTS(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelConnectsPorts;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelConnectsPorts_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelConnectsPorts, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelConnectsPorts, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsPorts, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsPorts, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELCONNECTSPORTTOELEMENT(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelConnectsPortToElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelConnectsPortToElement_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsPortToElement, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsPortToElement, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelConnectsPortToElement, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelConnectsPortToElement, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELCONNECTSSTRUCTURALACTIVITY(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelConnectsStructuralActivity;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelConnectsStructuralActivity_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralActivity, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralActivity, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELCONNECTSSTRUCTURALELEMENT(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelConnectsStructuralElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelConnectsStructuralElement_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelConnectsStructuralElement, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelConnectsStructuralElement, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralElement, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralElement, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELCONNECTSSTRUCTURALMEMBER(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelConnectsStructuralMember;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelConnectsStructuralMember_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelConnectsStructuralMember, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelConnectsStructuralMember, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralMember, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelConnectsStructuralMember, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELCONNECTSWITHECCENTRICITY(bool isFirst)
{
    if (loadIFCRELCONNECTSSTRUCTURALMEMBER(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelConnectsWithEccentricity;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelConnectsWithEccentricity_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELCONNECTSWITHREALIZINGELEMENTS(bool isFirst)
{
    if (loadIFCRELCONNECTSELEMENTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelConnectsWithRealizingElements;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelConnectsWithRealizingElements_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 7 of IfcRelConnectsWithRealizingElements, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcRelConnectsWithRealizingElements::getClassType(), 7, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCRELCONTAINEDINSPATIALSTRUCTURE(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelContainedInSpatialStructure;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelContainedInSpatialStructure_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelContainedInSpatialStructure, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelContainedInSpatialStructure, line " << m_currentLineNb);
        return false;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelContainedInSpatialStructure, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcRelContainedInSpatialStructure::getClassType(), 4, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCRELCOVERSBLDGELEMENTS(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelCoversBldgElements;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelCoversBldgElements_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelCoversBldgElements, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcRelCoversBldgElements::getClassType(), 5, m_currentId);
        }
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelCoversBldgElements, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelCoversBldgElements, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELCOVERSSPACES(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelCoversSpaces;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelCoversSpaces_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelCoversSpaces, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelCoversSpaces, line " << m_currentLineNb);
        return false;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelCoversSpaces, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcRelCoversSpaces::getClassType(), 5, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCRELDECOMPOSES(bool isFirst)
{
    if (loadIFCRELATIONSHIP(false) == false)
    {
        return false;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelDecomposes, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcRelDecomposes::getClassType(), 5, m_currentId);
        }
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelDecomposes, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelDecomposes, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELDEFINES(bool isFirst)
{
    if (loadIFCRELATIONSHIP(false) == false)
    {
        return false;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelDefines, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcRelDefines::getClassType(), 4, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCRELDEFINESBYPROPERTIES(bool isFirst)
{
    if (loadIFCRELDEFINES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelDefinesByProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelDefinesByProperties_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelDefinesByProperties, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelDefinesByProperties, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELDEFINESBYTYPE(bool isFirst)
{
    if (loadIFCRELDEFINES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelDefinesByType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelDefinesByType_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelDefinesByType, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelDefinesByType, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELFILLSELEMENT(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelFillsElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelFillsElement_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelFillsElement, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelFillsElement, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelFillsElement, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelFillsElement, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELFLOWCONTROLELEMENTS(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelFlowControlElements;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelFlowControlElements_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelFlowControlElements, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelFlowControlElements, line " << m_currentLineNb);
        return false;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelFlowControlElements, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcRelFlowControlElements::getClassType(), 4, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCRELINTERACTIONREQUIREMENTS(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelInteractionRequirements;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelInteractionRequirements_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 7)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 7 of IfcRelInteractionRequirements, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 7 of IfcRelInteractionRequirements, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 8)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 8 of IfcRelInteractionRequirements, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(8));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 8 of IfcRelInteractionRequirements, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELNESTS(bool isFirst)
{
    if (loadIFCRELDECOMPOSES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelNests;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelNests_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELOCCUPIESSPACES(bool isFirst)
{
    if (loadIFCRELASSIGNSTOACTOR(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelOccupiesSpaces;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelOccupiesSpaces_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELOVERRIDESPROPERTIES(bool isFirst)
{
    if (loadIFCRELDEFINESBYPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelOverridesProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelOverridesProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELPROJECTSELEMENT(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelProjectsElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelProjectsElement_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelProjectsElement, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelProjectsElement, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelProjectsElement, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelProjectsElement, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELREFERENCEDINSPATIALSTRUCTURE(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelReferencedInSpatialStructure;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelReferencedInSpatialStructure_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelReferencedInSpatialStructure, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelReferencedInSpatialStructure, line " << m_currentLineNb);
        return false;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelReferencedInSpatialStructure, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcRelReferencedInSpatialStructure::getClassType(), 4, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCRELSCHEDULESCOSTITEMS(bool isFirst)
{
    if (loadIFCRELASSIGNSTOCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelSchedulesCostItems;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelSchedulesCostItems_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRELSEQUENCE(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelSequence;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelSequence_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelSequence, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelSequence, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelSequence, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelSequence, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELSERVICESBUILDINGS(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelServicesBuildings;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelServicesBuildings_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelServicesBuildings, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelServicesBuildings, line " << m_currentLineNb);
        return false;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelServicesBuildings, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcRelServicesBuildings::getClassType(), 5, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCRELSPACEBOUNDARY(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelSpaceBoundary;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelSpaceBoundary_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelSpaceBoundary, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelSpaceBoundary, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelSpaceBoundary, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelSpaceBoundary, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRELVOIDSELEMENT(bool isFirst)
{
    if (loadIFCRELCONNECTS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRelVoidsElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRelVoidsElement_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 5)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelVoidsElement, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcRelVoidsElement, line " << m_currentLineNb);
        return false;
    }
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelVoidsElement, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcRelVoidsElement, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCREPRESENTATION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRepresentation;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRepresentation_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcRepresentation, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcRepresentation, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCREPRESENTATIONCONTEXT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRepresentationContext;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRepresentationContext_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCREPRESENTATIONITEM(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCREPRESENTATIONMAP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRepresentationMap;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRepresentationMap_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 1)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcRepresentationMap, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcRepresentationMap, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCRESOURCE(bool isFirst)
{
    if (loadIFCOBJECT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCREVOLVEDAREASOLID(bool isFirst)
{
    if (loadIFCSWEPTAREASOLID(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRevolvedAreaSolid;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRevolvedAreaSolid_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRIBPLATEPROFILEPROPERTIES(bool isFirst)
{
    if (loadIFCPROFILEPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRibPlateProfileProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRibPlateProfileProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRIGHTCIRCULARCONE(bool isFirst)
{
    if (loadIFCCSGPRIMITIVE3D(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRightCircularCone;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRightCircularCone_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCRIGHTCIRCULARCYLINDER(bool isFirst)
{
    if (loadIFCCSGPRIMITIVE3D(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRightCircularCylinder;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRightCircularCylinder_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCROOF(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRoof;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRoof_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCROOT(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCROUNDEDEDGEFEATURE(bool isFirst)
{
    if (loadIFCEDGEFEATURE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRoundedEdgeFeature;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRoundedEdgeFeature_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCROUNDEDRECTANGLEPROFILEDEF(bool isFirst)
{
    if (loadIFCRECTANGLEPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcRoundedRectangleProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcRoundedRectangleProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSANITARYTERMINALTYPE(bool isFirst)
{
    if (loadIFCFLOWTERMINALTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSanitaryTerminalType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSanitaryTerminalType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSCHEDULETIMECONTROL(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcScheduleTimeControl;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcScheduleTimeControl_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSECTIONEDSPINE(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSectionedSpine;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSectionedSpine_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSECTIONPROPERTIES(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSectionProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSectionProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSECTIONREINFORCEMENTPROPERTIES(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSectionReinforcementProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSectionReinforcementProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSENSORTYPE(bool isFirst)
{
    if (loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSensorType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSensorType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSERVICELIFE(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcServiceLife;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcServiceLife_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSERVICELIFEFACTOR(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcServiceLifeFactor;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcServiceLifeFactor_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSHAPEASPECT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcShapeAspect;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcShapeAspect_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 4)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcShapeAspect, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(4));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 4 of IfcShapeAspect, line " << m_currentLineNb);
        return false;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcShapeAspect, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcShapeAspect::getClassType(), 0, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCSHAPEMODEL(bool isFirst)
{
    if (loadIFCREPRESENTATION(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSHAPEREPRESENTATION(bool isFirst)
{
    if (loadIFCSHAPEMODEL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcShapeRepresentation;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcShapeRepresentation_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSHELLBASEDSURFACEMODEL(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcShellBasedSurfaceModel;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcShellBasedSurfaceModel_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSIMPLEPROPERTY(bool isFirst)
{
    if (loadIFCPROPERTY(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSITE(bool isFirst)
{
    if (loadIFCSPATIALSTRUCTUREELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSite;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSite_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSIUNIT(bool isFirst)
{
    if (loadIFCNAMEDUNIT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSIUnit;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSIUnit_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSLAB(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSlab;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSlab_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSLABTYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSlabType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSlabType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSLIPPAGECONNECTIONCONDITION(bool isFirst)
{
    if (loadIFCSTRUCTURALCONNECTIONCONDITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSlippageConnectionCondition;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSlippageConnectionCondition_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSOLIDMODEL(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSOUNDPROPERTIES(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSoundProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSoundProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSOUNDVALUE(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSoundValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSoundValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSPACE(bool isFirst)
{
    if (loadIFCSPATIALSTRUCTUREELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSpace;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSpace_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSPACEHEATERTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSpaceHeaterType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSpaceHeaterType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSPACEPROGRAM(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSpaceProgram;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSpaceProgram_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSPACETHERMALLOADPROPERTIES(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSpaceThermalLoadProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSpaceThermalLoadProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSPACETYPE(bool isFirst)
{
    if (loadIFCSPATIALSTRUCTUREELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSpaceType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSpaceType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSPATIALSTRUCTUREELEMENT(bool isFirst)
{
    if (loadIFCPRODUCT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSPATIALSTRUCTUREELEMENTTYPE(bool isFirst)
{
    if (loadIFCELEMENTTYPE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSPHERE(bool isFirst)
{
    if (loadIFCCSGPRIMITIVE3D(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSphere;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSphere_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTACKTERMINALTYPE(bool isFirst)
{
    if (loadIFCFLOWTERMINALTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStackTerminalType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStackTerminalType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTAIR(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStair;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStair_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTAIRFLIGHT(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStairFlight;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStairFlight_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTAIRFLIGHTTYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStairFlightType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStairFlightType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALACTION(bool isFirst)
{
    if (loadIFCSTRUCTURALACTIVITY(false) == false)
    {
        return false;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 10)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 10 of IfcStructuralAction, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(10));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 10 of IfcStructuralAction, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALACTIVITY(bool isFirst)
{
    if (loadIFCPRODUCT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALANALYSISMODEL(bool isFirst)
{
    if (loadIFCSYSTEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralAnalysisModel;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralAnalysisModel_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(7), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 7 of IfcStructuralAnalysisModel, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcStructuralAnalysisModel::getClassType(), 7, m_currentId);
        }
    }
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(8), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 8 of IfcStructuralAnalysisModel, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcStructuralAnalysisModel::getClassType(), 8, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALCONNECTION(bool isFirst)
{
    if (loadIFCSTRUCTURALITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALCONNECTIONCONDITION(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCSTRUCTURALCURVECONNECTION(bool isFirst)
{
    if (loadIFCSTRUCTURALCONNECTION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralCurveConnection;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralCurveConnection_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALCURVEMEMBER(bool isFirst)
{
    if (loadIFCSTRUCTURALMEMBER(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralCurveMember;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralCurveMember_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALCURVEMEMBERVARYING(bool isFirst)
{
    if (loadIFCSTRUCTURALCURVEMEMBER(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralCurveMemberVarying;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralCurveMemberVarying_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALITEM(bool isFirst)
{
    if (loadIFCPRODUCT(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLINEARACTION(bool isFirst)
{
    if (loadIFCSTRUCTURALACTION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralLinearAction;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralLinearAction_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLINEARACTIONVARYING(bool isFirst)
{
    if (loadIFCSTRUCTURALLINEARACTION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralLinearActionVarying;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralLinearActionVarying_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLOAD(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADGROUP(bool isFirst)
{
    if (loadIFCGROUP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralLoadGroup;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralLoadGroup_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADLINEARFORCE(bool isFirst)
{
    if (loadIFCSTRUCTURALLOADSTATIC(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralLoadLinearForce;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralLoadLinearForce_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADPLANARFORCE(bool isFirst)
{
    if (loadIFCSTRUCTURALLOADSTATIC(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralLoadPlanarForce;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralLoadPlanarForce_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADSINGLEDISPLACEMENT(bool isFirst)
{
    if (loadIFCSTRUCTURALLOADSTATIC(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralLoadSingleDisplacement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralLoadSingleDisplacement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADSINGLEDISPLACEMENTDISTORTION(bool isFirst)
{
    if (loadIFCSTRUCTURALLOADSINGLEDISPLACEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralLoadSingleDisplacementDistortion;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralLoadSingleDisplacementDistortion_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADSINGLEFORCE(bool isFirst)
{
    if (loadIFCSTRUCTURALLOADSTATIC(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralLoadSingleForce;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralLoadSingleForce_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADSINGLEFORCEWARPING(bool isFirst)
{
    if (loadIFCSTRUCTURALLOADSINGLEFORCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralLoadSingleForceWarping;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralLoadSingleForceWarping_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADSTATIC(bool isFirst)
{
    if (loadIFCSTRUCTURALLOAD(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALLOADTEMPERATURE(bool isFirst)
{
    if (loadIFCSTRUCTURALLOADSTATIC(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralLoadTemperature;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralLoadTemperature_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALMEMBER(bool isFirst)
{
    if (loadIFCSTRUCTURALITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALPLANARACTION(bool isFirst)
{
    if (loadIFCSTRUCTURALACTION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralPlanarAction;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralPlanarAction_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALPLANARACTIONVARYING(bool isFirst)
{
    if (loadIFCSTRUCTURALPLANARACTION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralPlanarActionVarying;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralPlanarActionVarying_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALPOINTACTION(bool isFirst)
{
    if (loadIFCSTRUCTURALACTION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralPointAction;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralPointAction_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALPOINTCONNECTION(bool isFirst)
{
    if (loadIFCSTRUCTURALCONNECTION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralPointConnection;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralPointConnection_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALPOINTREACTION(bool isFirst)
{
    if (loadIFCSTRUCTURALREACTION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralPointReaction;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralPointReaction_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALPROFILEPROPERTIES(bool isFirst)
{
    if (loadIFCGENERALPROFILEPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralProfileProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralProfileProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALREACTION(bool isFirst)
{
    if (loadIFCSTRUCTURALACTIVITY(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALRESULTGROUP(bool isFirst)
{
    if (loadIFCGROUP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralResultGroup;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralResultGroup_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 6)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcStructuralResultGroup, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(6));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 6 of IfcStructuralResultGroup, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALSTEELPROFILEPROPERTIES(bool isFirst)
{
    if (loadIFCSTRUCTURALPROFILEPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralSteelProfileProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralSteelProfileProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALSURFACECONNECTION(bool isFirst)
{
    if (loadIFCSTRUCTURALCONNECTION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralSurfaceConnection;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralSurfaceConnection_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALSURFACEMEMBER(bool isFirst)
{
    if (loadIFCSTRUCTURALMEMBER(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralSurfaceMember;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralSurfaceMember_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTURALSURFACEMEMBERVARYING(bool isFirst)
{
    if (loadIFCSTRUCTURALSURFACEMEMBER(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuralSurfaceMemberVarying;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuralSurfaceMemberVarying_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTRUCTUREDDIMENSIONCALLOUT(bool isFirst)
{
    if (loadIFCDRAUGHTINGCALLOUT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStructuredDimensionCallout;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStructuredDimensionCallout_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTYLEDITEM(bool isFirst)
{
    if (loadIFCREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStyledItem;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStyledItem_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcStyledItem, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcStyledItem, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSTYLEDREPRESENTATION(bool isFirst)
{
    if (loadIFCSTYLEMODEL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcStyledRepresentation;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcStyledRepresentation_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSTYLEMODEL(bool isFirst)
{
    if (loadIFCREPRESENTATION(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSUBCONTRACTRESOURCE(bool isFirst)
{
    if (loadIFCCONSTRUCTIONRESOURCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSubContractResource;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSubContractResource_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSUBEDGE(bool isFirst)
{
    if (loadIFCEDGE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSubedge;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSubedge_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSURFACE(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSURFACECURVESWEPTAREASOLID(bool isFirst)
{
    if (loadIFCSWEPTAREASOLID(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSurfaceCurveSweptAreaSolid;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSurfaceCurveSweptAreaSolid_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSURFACEOFLINEAREXTRUSION(bool isFirst)
{
    if (loadIFCSWEPTSURFACE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSurfaceOfLinearExtrusion;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSurfaceOfLinearExtrusion_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSURFACEOFREVOLUTION(bool isFirst)
{
    if (loadIFCSWEPTSURFACE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSurfaceOfRevolution;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSurfaceOfRevolution_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSURFACESTYLE(bool isFirst)
{
    if (loadIFCPRESENTATIONSTYLE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSurfaceStyle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSurfaceStyle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSURFACESTYLELIGHTING(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSurfaceStyleLighting;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSurfaceStyleLighting_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSURFACESTYLEREFRACTION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSurfaceStyleRefraction;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSurfaceStyleRefraction_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSURFACESTYLERENDERING(bool isFirst)
{
    if (loadIFCSURFACESTYLESHADING(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSurfaceStyleRendering;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSurfaceStyleRendering_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSURFACESTYLESHADING(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSurfaceStyleShading;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSurfaceStyleShading_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSURFACESTYLEWITHTEXTURES(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSurfaceStyleWithTextures;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSurfaceStyleWithTextures_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSURFACETEXTURE(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCSWEPTAREASOLID(bool isFirst)
{
    if (loadIFCSOLIDMODEL(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSWEPTDISKSOLID(bool isFirst)
{
    if (loadIFCSOLIDMODEL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSweptDiskSolid;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSweptDiskSolid_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSWEPTSURFACE(bool isFirst)
{
    if (loadIFCSURFACE(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCSWITCHINGDEVICETYPE(bool isFirst)
{
    if (loadIFCFLOWCONTROLLERTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSwitchingDeviceType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSwitchingDeviceType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSYMBOLSTYLE(bool isFirst)
{
    if (loadIFCPRESENTATIONSTYLE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSymbolStyle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSymbolStyle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSYSTEM(bool isFirst)
{
    if (loadIFCGROUP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSystem;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSystem_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCSYSTEMFURNITUREELEMENTTYPE(bool isFirst)
{
    if (loadIFCFURNISHINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcSystemFurnitureElementType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcSystemFurnitureElementType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTABLE(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTable;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTable_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(1), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 1 of IfcTable, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcTable::getClassType(), 1, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCTABLEROW(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTableRow;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTableRow_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTANKTYPE(bool isFirst)
{
    if (loadIFCFLOWSTORAGEDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTankType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTankType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTASK(bool isFirst)
{
    if (loadIFCPROCESS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTask;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTask_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTELECOMADDRESS(bool isFirst)
{
    if (loadIFCADDRESS(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTelecomAddress;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTelecomAddress_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTENDON(bool isFirst)
{
    if (loadIFCREINFORCINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTendon;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTendon_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTENDONANCHOR(bool isFirst)
{
    if (loadIFCREINFORCINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTendonAnchor;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTendonAnchor_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTERMINATORSYMBOL(bool isFirst)
{
    if (loadIFCANNOTATIONSYMBOLOCCURRENCE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTerminatorSymbol;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTerminatorSymbol_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 3)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 3 of IfcTerminatorSymbol, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(3));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 3 of IfcTerminatorSymbol, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCTEXTLITERAL(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTextLiteral;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTextLiteral_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTEXTLITERALWITHEXTENT(bool isFirst)
{
    if (loadIFCTEXTLITERAL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTextLiteralWithExtent;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTextLiteralWithExtent_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTEXTSTYLE(bool isFirst)
{
    if (loadIFCPRESENTATIONSTYLE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTextStyle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTextStyle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTEXTSTYLEFONTMODEL(bool isFirst)
{
    if (loadIFCPREDEFINEDTEXTFONT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTextStyleFontModel;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTextStyleFontModel_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTEXTSTYLEFORDEFINEDFONT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTextStyleForDefinedFont;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTextStyleForDefinedFont_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTEXTSTYLETEXTMODEL(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTextStyleTextModel;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTextStyleTextModel_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTEXTSTYLEWITHBOXCHARACTERISTICS(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTextStyleWithBoxCharacteristics;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTextStyleWithBoxCharacteristics_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTEXTURECOORDINATE(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCTEXTURECOORDINATEGENERATOR(bool isFirst)
{
    if (loadIFCTEXTURECOORDINATE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTextureCoordinateGenerator;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTextureCoordinateGenerator_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTEXTUREMAP(bool isFirst)
{
    if (loadIFCTEXTURECOORDINATE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTextureMap;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTextureMap_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTEXTUREVERTEX(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTextureVertex;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTextureVertex_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTHERMALMATERIALPROPERTIES(bool isFirst)
{
    if (loadIFCMATERIALPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcThermalMaterialProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcThermalMaterialProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTIMESERIES(bool isFirst)
{
    return true;
}

bool SPFReader::loadIFCTIMESERIESREFERENCERELATIONSHIP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTimeSeriesReferenceRelationship;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTimeSeriesReferenceRelationship_Map[m_currentId] = m_currentObj;
    }
    Step::Id currentRef;
    if (m_currentObj->Step::BaseSPFObject::getArgs()->argc() <= 0)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcTimeSeriesReferenceRelationship, line " << m_currentLineNb);
        return false;
    }
    currentRef = Step::getIdParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0));
    if (currentRef == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcTimeSeriesReferenceRelationship, line " << m_currentLineNb);
        return false;
    }
    return true;
}

bool SPFReader::loadIFCTIMESERIESSCHEDULE(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTimeSeriesSchedule;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTimeSeriesSchedule_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTIMESERIESVALUE(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTimeSeriesValue;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTimeSeriesValue_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTOPOLOGICALREPRESENTATIONITEM(bool isFirst)
{
    if (loadIFCREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCTOPOLOGYREPRESENTATION(bool isFirst)
{
    if (loadIFCSHAPEMODEL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTopologyRepresentation;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTopologyRepresentation_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTRANSFORMERTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTransformerType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTransformerType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTRANSPORTELEMENT(bool isFirst)
{
    if (loadIFCELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTransportElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTransportElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTRANSPORTELEMENTTYPE(bool isFirst)
{
    if (loadIFCELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTransportElementType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTransportElementType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTRAPEZIUMPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTrapeziumProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTrapeziumProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTRIMMEDCURVE(bool isFirst)
{
    if (loadIFCBOUNDEDCURVE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTrimmedCurve;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTrimmedCurve_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTSHAPEPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTShapeProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTShapeProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTUBEBUNDLETYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTubeBundleType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTubeBundleType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTWODIRECTIONREPEATFACTOR(bool isFirst)
{
    if (loadIFCONEDIRECTIONREPEATFACTOR(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTwoDirectionRepeatFactor;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTwoDirectionRepeatFactor_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCTYPEOBJECT(bool isFirst)
{
    if (loadIFCOBJECTDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTypeObject;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTypeObject_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(5), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 5 of IfcTypeObject, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcTypeObject::getClassType(), 5, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCTYPEPRODUCT(bool isFirst)
{
    if (loadIFCTYPEOBJECT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcTypeProduct;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcTypeProduct_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCUNITARYEQUIPMENTTYPE(bool isFirst)
{
    if (loadIFCENERGYCONVERSIONDEVICETYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcUnitaryEquipmentType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcUnitaryEquipmentType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCUNITASSIGNMENT(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcUnitAssignment;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcUnitAssignment_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCUSHAPEPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcUShapeProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcUShapeProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCVALVETYPE(bool isFirst)
{
    if (loadIFCFLOWCONTROLLERTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcValveType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcValveType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCVECTOR(bool isFirst)
{
    if (loadIFCGEOMETRICREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcVector;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcVector_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCVERTEX(bool isFirst)
{
    if (loadIFCTOPOLOGICALREPRESENTATIONITEM(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcVertex;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcVertex_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCVERTEXBASEDTEXTUREMAP(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcVertexBasedTextureMap;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcVertexBasedTextureMap_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCVERTEXLOOP(bool isFirst)
{
    if (loadIFCLOOP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcVertexLoop;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcVertexLoop_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCVERTEXPOINT(bool isFirst)
{
    if (loadIFCVERTEX(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcVertexPoint;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcVertexPoint_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCVIBRATIONISOLATORTYPE(bool isFirst)
{
    if (loadIFCDISCRETEACCESSORYTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcVibrationIsolatorType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcVibrationIsolatorType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCVIRTUALELEMENT(bool isFirst)
{
    if (loadIFCELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcVirtualElement;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcVirtualElement_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCVIRTUALGRIDINTERSECTION(bool isFirst)
{
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcVirtualGridIntersection;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcVirtualGridIntersection_Map[m_currentId] = m_currentObj;
    }
    std::vector< Step::Id > currentRefList;
    Step::getIdListParam(m_currentObj->Step::BaseSPFObject::getArgs()->at(0), currentRefList);
    if (currentRefList[0] == Step::Id_UNDEF)
    {
        STEP_LOG_ERROR(m_logger, "Inverse links : Error during reading parameter 0 of IfcVirtualGridIntersection, line " << m_currentLineNb);
        return false;
    }
    if (currentRefList[0] != Step::Id_UNSET)
    {
        for (unsigned int i = 0; i < currentRefList.size(); i++)
        {
            m_expressDataSet->getArgs(currentRefList[i])->addInverse(IfcVirtualGridIntersection::getClassType(), 0, m_currentId);
        }
    }
    return true;
}

bool SPFReader::loadIFCWALL(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcWall;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcWall_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCWALLSTANDARDCASE(bool isFirst)
{
    if (loadIFCWALL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcWallStandardCase;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcWallStandardCase_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCWALLTYPE(bool isFirst)
{
    if (loadIFCBUILDINGELEMENTTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcWallType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcWallType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCWASTETERMINALTYPE(bool isFirst)
{
    if (loadIFCFLOWTERMINALTYPE(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcWasteTerminalType;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcWasteTerminalType_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCWATERPROPERTIES(bool isFirst)
{
    if (loadIFCMATERIALPROPERTIES(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcWaterProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcWaterProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCWINDOW(bool isFirst)
{
    if (loadIFCBUILDINGELEMENT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcWindow;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcWindow_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCWINDOWLININGPROPERTIES(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcWindowLiningProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcWindowLiningProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCWINDOWPANELPROPERTIES(bool isFirst)
{
    if (loadIFCPROPERTYSETDEFINITION(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcWindowPanelProperties;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcWindowPanelProperties_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCWINDOWSTYLE(bool isFirst)
{
    if (loadIFCTYPEPRODUCT(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcWindowStyle;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcWindowStyle_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCWORKCONTROL(bool isFirst)
{
    if (loadIFCCONTROL(false) == false)
    {
        return false;
    }
    return true;
}

bool SPFReader::loadIFCWORKPLAN(bool isFirst)
{
    if (loadIFCWORKCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcWorkPlan;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcWorkPlan_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCWORKSCHEDULE(bool isFirst)
{
    if (loadIFCWORKCONTROL(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcWorkSchedule;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcWorkSchedule_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCZONE(bool isFirst)
{
    if (loadIFCGROUP(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcZone;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcZone_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::loadIFCZSHAPEPROFILEDEF(bool isFirst)
{
    if (loadIFCPARAMETERIZEDPROFILEDEF(false) == false)
    {
        return false;
    }
    if (isFirst)
    {
        m_currentType = &ExpressDataSet::allocateIfcZShapeProfileDef;
        static_cast< ExpressDataSet * > (m_expressDataSet)->m_IfcZShapeProfileDef_Map[m_currentId] = m_currentObj;
    }
    return true;
}

bool SPFReader::read(std::istream &ifs, size_t inputSize)
{
    m_expressDataSet = new ExpressDataSet;
    if (!Step::BaseSPFReader::read(ifs,inputSize))
    {
        delete m_expressDataSet;
        m_expressDataSet = 0;
        return false;
    }

    Step::SPFHeader::FileSchema & fileschema = m_header.getFileSchema();
    if(std::find(fileschema.schemaIdentifiers.begin(),
                 fileschema.schemaIdentifiers.end(),
                 Step::String("IFC2X3")) == fileschema.schemaIdentifiers.end())
    {
        delete m_expressDataSet;
        m_expressDataSet = 0;
        std::string msg("Schema file must be IFC2X3");
        STEP_LOG_FATAL(m_logger,msg);
        _errors.clear();
        _errors.push_back(msg);
        return false;
    }

    m_expressDataSet->setHeader(m_header);
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
