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


#include <ifc2x3/FalseVisitor.h>

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
#include <ifc2x3/IfcPropertySet.h>
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



using namespace ifc2x3;

FalseVisitor::FalseVisitor()
{}

FalseVisitor::~FalseVisitor()
{}

bool FalseVisitor::visitIfc2DCompositeCurve(Ifc2DCompositeCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcActionRequest(IfcActionRequest * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcActor(IfcActor * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcActorRole(IfcActorRole * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcActuatorType(IfcActuatorType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAddress(IfcAddress * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAirTerminalBoxType(IfcAirTerminalBoxType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAirTerminalType(IfcAirTerminalType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAlarmType(IfcAlarmType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAngularDimension(IfcAngularDimension * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAnnotation(IfcAnnotation * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAnnotationFillArea(IfcAnnotationFillArea * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAnnotationOccurrence(IfcAnnotationOccurrence * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAnnotationSurface(IfcAnnotationSurface * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcApplication(IfcApplication * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAppliedValue(IfcAppliedValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAppliedValueRelationship(IfcAppliedValueRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcApproval(IfcApproval * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcApprovalActorRelationship(IfcApprovalActorRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcApprovalRelationship(IfcApprovalRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAsset(IfcAsset * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAxis1Placement(IfcAxis1Placement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAxis2Placement2D(IfcAxis2Placement2D * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAxis2Placement3D(IfcAxis2Placement3D * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBeam(IfcBeam * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBeamType(IfcBeamType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBezierCurve(IfcBezierCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBlobTexture(IfcBlobTexture * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBlock(IfcBlock * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBoilerType(IfcBoilerType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBooleanClippingResult(IfcBooleanClippingResult * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBooleanResult(IfcBooleanResult * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBoundaryCondition(IfcBoundaryCondition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBoundedCurve(IfcBoundedCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBoundedSurface(IfcBoundedSurface * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBoundingBox(IfcBoundingBox * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBoxedHalfSpace(IfcBoxedHalfSpace * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBSplineCurve(IfcBSplineCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBuilding(IfcBuilding * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBuildingElement(IfcBuildingElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBuildingElementComponent(IfcBuildingElementComponent * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBuildingElementPart(IfcBuildingElementPart * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBuildingElementProxy(IfcBuildingElementProxy * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBuildingElementProxyType(IfcBuildingElementProxyType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBuildingElementType(IfcBuildingElementType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBuildingStorey(IfcBuildingStorey * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCableCarrierFittingType(IfcCableCarrierFittingType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCableSegmentType(IfcCableSegmentType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCalendarDate(IfcCalendarDate * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCartesianPoint(IfcCartesianPoint * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator(IfcCartesianTransformationOperator * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCenterLineProfileDef(IfcCenterLineProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcChamferEdgeFeature(IfcChamferEdgeFeature * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcChillerType(IfcChillerType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCircle(IfcCircle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCircleProfileDef(IfcCircleProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcClassification(IfcClassification * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcClassificationItem(IfcClassificationItem * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcClassificationItemRelationship(IfcClassificationItemRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcClassificationNotation(IfcClassificationNotation * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcClassificationNotationFacet(IfcClassificationNotationFacet * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcClassificationReference(IfcClassificationReference * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcClosedShell(IfcClosedShell * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCoilType(IfcCoilType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcColourRgb(IfcColourRgb * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcColourSpecification(IfcColourSpecification * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcColumn(IfcColumn * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcColumnType(IfcColumnType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcComplexProperty(IfcComplexProperty * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCompositeCurve(IfcCompositeCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCompositeCurveSegment(IfcCompositeCurveSegment * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCompositeProfileDef(IfcCompositeProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCompressorType(IfcCompressorType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCondenserType(IfcCondenserType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCondition(IfcCondition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConditionCriterion(IfcConditionCriterion * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConic(IfcConic * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConnectedFaceSet(IfcConnectedFaceSet * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConnectionGeometry(IfcConnectionGeometry * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConnectionPointGeometry(IfcConnectionPointGeometry * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConnectionPortGeometry(IfcConnectionPortGeometry * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConstraint(IfcConstraint * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConstraintRelationship(IfcConstraintRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConstructionMaterialResource(IfcConstructionMaterialResource * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConstructionProductResource(IfcConstructionProductResource * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConstructionResource(IfcConstructionResource * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcContextDependentUnit(IfcContextDependentUnit * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcControl(IfcControl * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcControllerType(IfcControllerType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConversionBasedUnit(IfcConversionBasedUnit * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCooledBeamType(IfcCooledBeamType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCoolingTowerType(IfcCoolingTowerType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCostItem(IfcCostItem * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCostSchedule(IfcCostSchedule * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCostValue(IfcCostValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCovering(IfcCovering * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCoveringType(IfcCoveringType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCrewResource(IfcCrewResource * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCsgPrimitive3D(IfcCsgPrimitive3D * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCsgSolid(IfcCsgSolid * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCShapeProfileDef(IfcCShapeProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurrencyRelationship(IfcCurrencyRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurtainWall(IfcCurtainWall * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurtainWallType(IfcCurtainWallType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurve(IfcCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurveBoundedPlane(IfcCurveBoundedPlane * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurveStyle(IfcCurveStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFont(IfcCurveStyleFont * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDamperType(IfcDamperType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDateAndTime(IfcDateAndTime * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDefinedSymbol(IfcDefinedSymbol * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDerivedProfileDef(IfcDerivedProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDerivedUnit(IfcDerivedUnit * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDerivedUnitElement(IfcDerivedUnitElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDiameterDimension(IfcDiameterDimension * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDimensionalExponents(IfcDimensionalExponents * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDimensionCurve(IfcDimensionCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDimensionPair(IfcDimensionPair * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDirection(IfcDirection * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDiscreteAccessory(IfcDiscreteAccessory * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDistributionChamberElement(IfcDistributionChamberElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDistributionChamberElementType(IfcDistributionChamberElementType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDistributionControlElement(IfcDistributionControlElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDistributionControlElementType(IfcDistributionControlElementType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDistributionElement(IfcDistributionElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDistributionElementType(IfcDistributionElementType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDistributionFlowElement(IfcDistributionFlowElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDistributionFlowElementType(IfcDistributionFlowElementType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDistributionPort(IfcDistributionPort * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDocumentInformation(IfcDocumentInformation * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDocumentReference(IfcDocumentReference * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDoor(IfcDoor * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDoorLiningProperties(IfcDoorLiningProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDoorPanelProperties(IfcDoorPanelProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDoorStyle(IfcDoorStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDraughtingCallout(IfcDraughtingCallout * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDuctFittingType(IfcDuctFittingType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDuctSegmentType(IfcDuctSegmentType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDuctSilencerType(IfcDuctSilencerType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEdge(IfcEdge * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEdgeCurve(IfcEdgeCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEdgeFeature(IfcEdgeFeature * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEdgeLoop(IfcEdgeLoop * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElectricalBaseProperties(IfcElectricalBaseProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElectricalCircuit(IfcElectricalCircuit * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElectricalElement(IfcElectricalElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElectricApplianceType(IfcElectricApplianceType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElectricDistributionPoint(IfcElectricDistributionPoint * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElectricGeneratorType(IfcElectricGeneratorType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElectricHeaterType(IfcElectricHeaterType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElectricMotorType(IfcElectricMotorType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElectricTimeControlType(IfcElectricTimeControlType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElement(IfcElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElementarySurface(IfcElementarySurface * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElementAssembly(IfcElementAssembly * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElementComponent(IfcElementComponent * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElementComponentType(IfcElementComponentType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElementQuantity(IfcElementQuantity * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcElementType(IfcElementType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEllipse(IfcEllipse * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEllipseProfileDef(IfcEllipseProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEnergyConversionDevice(IfcEnergyConversionDevice * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEnergyConversionDeviceType(IfcEnergyConversionDeviceType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEnergyProperties(IfcEnergyProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEquipmentElement(IfcEquipmentElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEquipmentStandard(IfcEquipmentStandard * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcEvaporatorType(IfcEvaporatorType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcExternalReference(IfcExternalReference * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFace(IfcFace * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFaceBound(IfcFaceBound * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFaceOuterBound(IfcFaceOuterBound * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFaceSurface(IfcFaceSurface * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFacetedBrep(IfcFacetedBrep * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFailureConnectionCondition(IfcFailureConnectionCondition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFanType(IfcFanType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFastener(IfcFastener * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFastenerType(IfcFastenerType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFeatureElement(IfcFeatureElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFeatureElementAddition(IfcFeatureElementAddition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFeatureElementSubtraction(IfcFeatureElementSubtraction * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyle(IfcFillAreaStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFilterType(IfcFilterType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowController(IfcFlowController * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowControllerType(IfcFlowControllerType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowFitting(IfcFlowFitting * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowFittingType(IfcFlowFittingType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowInstrumentType(IfcFlowInstrumentType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowMeterType(IfcFlowMeterType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowMovingDevice(IfcFlowMovingDevice * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowMovingDeviceType(IfcFlowMovingDeviceType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowSegment(IfcFlowSegment * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowSegmentType(IfcFlowSegmentType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowStorageDevice(IfcFlowStorageDevice * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowStorageDeviceType(IfcFlowStorageDeviceType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowTerminal(IfcFlowTerminal * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowTerminalType(IfcFlowTerminalType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFlowTreatmentDeviceType(IfcFlowTreatmentDeviceType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFluidFlowProperties(IfcFluidFlowProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFooting(IfcFooting * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFuelProperties(IfcFuelProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFurnishingElement(IfcFurnishingElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFurnishingElementType(IfcFurnishingElementType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFurnitureStandard(IfcFurnitureStandard * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFurnitureType(IfcFurnitureType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGasTerminalType(IfcGasTerminalType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGeneralProfileProperties(IfcGeneralProfileProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGeometricCurveSet(IfcGeometricCurveSet * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGeometricRepresentationItem(IfcGeometricRepresentationItem * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGeometricSet(IfcGeometricSet * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGrid(IfcGrid * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGridAxis(IfcGridAxis * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGridPlacement(IfcGridPlacement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGroup(IfcGroup * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcHalfSpaceSolid(IfcHalfSpaceSolid * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcHeatExchangerType(IfcHeatExchangerType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcHumidifierType(IfcHumidifierType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcImageTexture(IfcImageTexture * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcInventory(IfcInventory * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcIrregularTimeSeries(IfcIrregularTimeSeries * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcIShapeProfileDef(IfcIShapeProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcJunctionBoxType(IfcJunctionBoxType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLaborResource(IfcLaborResource * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLampType(IfcLampType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLibraryInformation(IfcLibraryInformation * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLibraryReference(IfcLibraryReference * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLightDistributionData(IfcLightDistributionData * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLightFixtureType(IfcLightFixtureType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLightIntensityDistribution(IfcLightIntensityDistribution * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLightSource(IfcLightSource * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLightSourceAmbient(IfcLightSourceAmbient * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLightSourceDirectional(IfcLightSourceDirectional * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLightSourceGoniometric(IfcLightSourceGoniometric * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLightSourcePositional(IfcLightSourcePositional * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLightSourceSpot(IfcLightSourceSpot * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLine(IfcLine * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLinearDimension(IfcLinearDimension * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLocalPlacement(IfcLocalPlacement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLocalTime(IfcLocalTime * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLoop(IfcLoop * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLShapeProfileDef(IfcLShapeProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcManifoldSolidBrep(IfcManifoldSolidBrep * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMappedItem(IfcMappedItem * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMaterial(IfcMaterial * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMaterialLayer(IfcMaterialLayer * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMaterialLayerSet(IfcMaterialLayerSet * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMaterialList(IfcMaterialList * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMaterialProperties(IfcMaterialProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMeasureWithUnit(IfcMeasureWithUnit * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMechanicalFastener(IfcMechanicalFastener * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMechanicalFastenerType(IfcMechanicalFastenerType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMember(IfcMember * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMemberType(IfcMemberType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMetric(IfcMetric * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMonetaryUnit(IfcMonetaryUnit * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMotorConnectionType(IfcMotorConnectionType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMove(IfcMove * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcNamedUnit(IfcNamedUnit * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcObject(IfcObject * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcObjectDefinition(IfcObjectDefinition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcObjective(IfcObjective * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcObjectPlacement(IfcObjectPlacement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOccupant(IfcOccupant * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOffsetCurve2D(IfcOffsetCurve2D * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOffsetCurve3D(IfcOffsetCurve3D * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOpeningElement(IfcOpeningElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOpenShell(IfcOpenShell * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOrderAction(IfcOrderAction * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOrganization(IfcOrganization * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOrganizationRelationship(IfcOrganizationRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOrientedEdge(IfcOrientedEdge * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOutletType(IfcOutletType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOwnerHistory(IfcOwnerHistory * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcParameterizedProfileDef(IfcParameterizedProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPath(IfcPath * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPerformanceHistory(IfcPerformanceHistory * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPermit(IfcPermit * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPerson(IfcPerson * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPersonAndOrganization(IfcPersonAndOrganization * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPhysicalQuantity(IfcPhysicalQuantity * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPhysicalSimpleQuantity(IfcPhysicalSimpleQuantity * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPile(IfcPile * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPipeFittingType(IfcPipeFittingType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPipeSegmentType(IfcPipeSegmentType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPixelTexture(IfcPixelTexture * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPlacement(IfcPlacement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPlanarBox(IfcPlanarBox * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPlanarExtent(IfcPlanarExtent * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPlane(IfcPlane * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPlate(IfcPlate * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPlateType(IfcPlateType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPoint(IfcPoint * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPointOnCurve(IfcPointOnCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPointOnSurface(IfcPointOnSurface * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPolyline(IfcPolyline * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPolyLoop(IfcPolyLoop * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPort(IfcPort * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPostalAddress(IfcPostalAddress * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPreDefinedColour(IfcPreDefinedColour * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPreDefinedCurveFont(IfcPreDefinedCurveFont * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPreDefinedItem(IfcPreDefinedItem * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPreDefinedSymbol(IfcPreDefinedSymbol * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPreDefinedTextFont(IfcPreDefinedTextFont * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPresentationStyle(IfcPresentationStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProcedure(IfcProcedure * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProcess(IfcProcess * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProduct(IfcProduct * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProductDefinitionShape(IfcProductDefinitionShape * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProductRepresentation(IfcProductRepresentation * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProfileDef(IfcProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProfileProperties(IfcProfileProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProject(IfcProject * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProjectionCurve(IfcProjectionCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProjectionElement(IfcProjectionElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProjectOrder(IfcProjectOrder * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProjectOrderRecord(IfcProjectOrderRecord * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProperty(IfcProperty * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertyBoundedValue(IfcPropertyBoundedValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertyDefinition(IfcPropertyDefinition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertyEnumeration(IfcPropertyEnumeration * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertyListValue(IfcPropertyListValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertyReferenceValue(IfcPropertyReferenceValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertySet(IfcPropertySet * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertySetDefinition(IfcPropertySetDefinition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertySingleValue(IfcPropertySingleValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPropertyTableValue(IfcPropertyTableValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProtectiveDeviceType(IfcProtectiveDeviceType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcProxy(IfcProxy * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPumpType(IfcPumpType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcQuantityArea(IfcQuantityArea * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcQuantityCount(IfcQuantityCount * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcQuantityLength(IfcQuantityLength * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcQuantityTime(IfcQuantityTime * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcQuantityVolume(IfcQuantityVolume * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcQuantityWeight(IfcQuantityWeight * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRadiusDimension(IfcRadiusDimension * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRailing(IfcRailing * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRailingType(IfcRailingType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRamp(IfcRamp * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRampFlight(IfcRampFlight * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRampFlightType(IfcRampFlightType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRationalBezierCurve(IfcRationalBezierCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRectangleProfileDef(IfcRectangleProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRectangularPyramid(IfcRectangularPyramid * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcReferencesValueDocument(IfcReferencesValueDocument * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRegularTimeSeries(IfcRegularTimeSeries * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcReinforcementBarProperties(IfcReinforcementBarProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcReinforcingBar(IfcReinforcingBar * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcReinforcingElement(IfcReinforcingElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcReinforcingMesh(IfcReinforcingMesh * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAggregates(IfcRelAggregates * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssigns(IfcRelAssigns * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssignsTasks(IfcRelAssignsTasks * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToActor(IfcRelAssignsToActor * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToControl(IfcRelAssignsToControl * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToGroup(IfcRelAssignsToGroup * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToProcess(IfcRelAssignsToProcess * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToProduct(IfcRelAssignsToProduct * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssignsToResource(IfcRelAssignsToResource * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssociates(IfcRelAssociates * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesApproval(IfcRelAssociatesApproval * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesClassification(IfcRelAssociatesClassification * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesDocument(IfcRelAssociatesDocument * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelationship(IfcRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelaxation(IfcRelaxation * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelConnects(IfcRelConnects * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelConnectsElements(IfcRelConnectsElements * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelConnectsPathElements(IfcRelConnectsPathElements * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelConnectsPorts(IfcRelConnectsPorts * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelCoversBldgElements(IfcRelCoversBldgElements * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelCoversSpaces(IfcRelCoversSpaces * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelDecomposes(IfcRelDecomposes * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelDefines(IfcRelDefines * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelDefinesByProperties(IfcRelDefinesByProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelDefinesByType(IfcRelDefinesByType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelFillsElement(IfcRelFillsElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelFlowControlElements(IfcRelFlowControlElements * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelInteractionRequirements(IfcRelInteractionRequirements * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelNests(IfcRelNests * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelOverridesProperties(IfcRelOverridesProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelProjectsElement(IfcRelProjectsElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelSequence(IfcRelSequence * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelServicesBuildings(IfcRelServicesBuildings * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelSpaceBoundary(IfcRelSpaceBoundary * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRelVoidsElement(IfcRelVoidsElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRepresentation(IfcRepresentation * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRepresentationContext(IfcRepresentationContext * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRepresentationItem(IfcRepresentationItem * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRepresentationMap(IfcRepresentationMap * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcResource(IfcResource * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRightCircularCone(IfcRightCircularCone * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRightCircularCylinder(IfcRightCircularCylinder * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRoof(IfcRoof * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRoot(IfcRoot * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSanitaryTerminalType(IfcSanitaryTerminalType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcScheduleTimeControl(IfcScheduleTimeControl * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSectionedSpine(IfcSectionedSpine * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSectionProperties(IfcSectionProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSensorType(IfcSensorType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcServiceLife(IfcServiceLife * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcServiceLifeFactor(IfcServiceLifeFactor * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcShapeAspect(IfcShapeAspect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcShapeModel(IfcShapeModel * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcShapeRepresentation(IfcShapeRepresentation * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSimpleProperty(IfcSimpleProperty * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSite(IfcSite * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSIUnit(IfcSIUnit * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSlab(IfcSlab * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSlabType(IfcSlabType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSolidModel(IfcSolidModel * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSoundProperties(IfcSoundProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSoundValue(IfcSoundValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSpace(IfcSpace * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSpaceHeaterType(IfcSpaceHeaterType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSpaceProgram(IfcSpaceProgram * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSpaceType(IfcSpaceType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSpatialStructureElement(IfcSpatialStructureElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSpatialStructureElementType(IfcSpatialStructureElementType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSphere(IfcSphere * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStackTerminalType(IfcStackTerminalType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStair(IfcStair * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStairFlight(IfcStairFlight * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStairFlightType(IfcStairFlightType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralAction(IfcStructuralAction * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralActivity(IfcStructuralActivity * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralConnection(IfcStructuralConnection * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralConnectionCondition(IfcStructuralConnectionCondition * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralCurveConnection(IfcStructuralCurveConnection * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralCurveMember(IfcStructuralCurveMember * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralItem(IfcStructuralItem * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLinearAction(IfcStructuralLinearAction * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLoad(IfcStructuralLoad * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadGroup(IfcStructuralLoadGroup * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadStatic(IfcStructuralLoadStatic * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralMember(IfcStructuralMember * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralPlanarAction(IfcStructuralPlanarAction * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralPointAction(IfcStructuralPointAction * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralPointConnection(IfcStructuralPointConnection * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralPointReaction(IfcStructuralPointReaction * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralProfileProperties(IfcStructuralProfileProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralReaction(IfcStructuralReaction * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralResultGroup(IfcStructuralResultGroup * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStyledItem(IfcStyledItem * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStyledRepresentation(IfcStyledRepresentation * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStyleModel(IfcStyleModel * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSubContractResource(IfcSubContractResource * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSubedge(IfcSubedge * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurface(IfcSurface * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyle(IfcSurfaceStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleShading(IfcSurfaceStyleShading * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceTexture(IfcSurfaceTexture * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSweptAreaSolid(IfcSweptAreaSolid * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSweptDiskSolid(IfcSweptDiskSolid * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSweptSurface(IfcSweptSurface * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSwitchingDeviceType(IfcSwitchingDeviceType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSymbolStyle(IfcSymbolStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSystem(IfcSystem * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTable(IfcTable * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTableRow(IfcTableRow * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTankType(IfcTankType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTask(IfcTask * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTelecomAddress(IfcTelecomAddress * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTendon(IfcTendon * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTendonAnchor(IfcTendonAnchor * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTerminatorSymbol(IfcTerminatorSymbol * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextLiteral(IfcTextLiteral * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextStyle(IfcTextStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextStyleFontModel(IfcTextStyleFontModel * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextStyleTextModel(IfcTextStyleTextModel * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextureCoordinate(IfcTextureCoordinate * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextureMap(IfcTextureMap * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextureVertex(IfcTextureVertex * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcThermalMaterialProperties(IfcThermalMaterialProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTimeSeries(IfcTimeSeries * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTimeSeriesValue(IfcTimeSeriesValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTopologicalRepresentationItem(IfcTopologicalRepresentationItem * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTopologyRepresentation(IfcTopologyRepresentation * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTransformerType(IfcTransformerType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTransportElement(IfcTransportElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTransportElementType(IfcTransportElementType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTrimmedCurve(IfcTrimmedCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTShapeProfileDef(IfcTShapeProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTubeBundleType(IfcTubeBundleType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTypeObject(IfcTypeObject * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTypeProduct(IfcTypeProduct * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcUnitAssignment(IfcUnitAssignment * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcUShapeProfileDef(IfcUShapeProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcValveType(IfcValveType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcVector(IfcVector * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcVertex(IfcVertex * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcVertexLoop(IfcVertexLoop * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcVertexPoint(IfcVertexPoint * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcVibrationIsolatorType(IfcVibrationIsolatorType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcVirtualElement(IfcVirtualElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcVirtualGridIntersection(IfcVirtualGridIntersection * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWall(IfcWall * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWallStandardCase(IfcWallStandardCase * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWallType(IfcWallType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWasteTerminalType(IfcWasteTerminalType * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWaterProperties(IfcWaterProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWindow(IfcWindow * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWindowLiningProperties(IfcWindowLiningProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWindowPanelProperties(IfcWindowPanelProperties * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWindowStyle(IfcWindowStyle * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWorkControl(IfcWorkControl * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWorkPlan(IfcWorkPlan * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcWorkSchedule(IfcWorkSchedule * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcZone(IfcZone * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcZShapeProfileDef(IfcZShapeProfileDef * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcActorSelect(IfcActorSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAppliedValueSelect(IfcAppliedValueSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcAxis2Placement(IfcAxis2Placement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcBooleanOperand(IfcBooleanOperand * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCharacterStyleSelect(IfcCharacterStyleSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcClassificationNotationSelect(IfcClassificationNotationSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcColour(IfcColour * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcColourOrFactor(IfcColourOrFactor * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcConditionCriterionSelect(IfcConditionCriterionSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCsgSelect(IfcCsgSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurveFontOrScaledCurveFontSelect(IfcCurveFontOrScaledCurveFontSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurveOrEdgeCurve(IfcCurveOrEdgeCurve * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcCurveStyleFontSelect(IfcCurveStyleFontSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDateTimeSelect(IfcDateTimeSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDefinedSymbolSelect(IfcDefinedSymbolSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDerivedMeasureValue(IfcDerivedMeasureValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDocumentSelect(IfcDocumentSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcDraughtingCalloutElement(IfcDraughtingCalloutElement * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFillAreaStyleTileShapeSelect(IfcFillAreaStyleTileShapeSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcFillStyleSelect(IfcFillStyleSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcGeometricSetSelect(IfcGeometricSetSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcHatchLineDistanceSelect(IfcHatchLineDistanceSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLayeredItem(IfcLayeredItem * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLibrarySelect(IfcLibrarySelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcLightDistributionDataSourceSelect(IfcLightDistributionDataSourceSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMaterialSelect(IfcMaterialSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMeasureValue(IfcMeasureValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcMetricValueSelect(IfcMetricValueSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcObjectReferenceSelect(IfcObjectReferenceSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcOrientationSelect(IfcOrientationSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPointOrVertexPoint(IfcPointOrVertexPoint * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcPresentationStyleSelect(IfcPresentationStyleSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcShell(IfcShell * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSimpleValue(IfcSimpleValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSizeSelect(IfcSizeSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSpecularHighlightSelect(IfcSpecularHighlightSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcStructuralActivityAssignmentSelect(IfcStructuralActivityAssignmentSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceOrFaceSurface(IfcSurfaceOrFaceSurface * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSurfaceStyleElementSelect(IfcSurfaceStyleElementSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcSymbolStyleSelect(IfcSymbolStyleSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextFontSelect(IfcTextFontSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTextStyleSelect(IfcTextStyleSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcTrimmingSelect(IfcTrimmingSelect * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcUnit(IfcUnit * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcValue(IfcValue * /*value*/)
{
    return false;
}

bool FalseVisitor::visitIfcVectorOrDirection(IfcVectorOrDirection * /*value*/)
{
    return false;
}

