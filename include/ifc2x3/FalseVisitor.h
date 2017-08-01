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

#ifndef IFC2X3_FALSEVISITOR_H
#define IFC2X3_FALSEVISITOR_H

#include <ifc2x3/Export.h>

#include <ifc2x3/Visitor.h>

namespace ifc2x3 {

    class Ifc2DCompositeCurve;
    class IfcActionRequest;
    class IfcActor;
    class IfcActorRole;
    class IfcActorSelect;
    class IfcActuatorType;
    class IfcAddress;
    class IfcAirTerminalBoxType;
    class IfcAirTerminalType;
    class IfcAirToAirHeatRecoveryType;
    class IfcAlarmType;
    class IfcAngularDimension;
    class IfcAnnotation;
    class IfcAnnotationCurveOccurrence;
    class IfcAnnotationFillArea;
    class IfcAnnotationFillAreaOccurrence;
    class IfcAnnotationOccurrence;
    class IfcAnnotationSurface;
    class IfcAnnotationSurfaceOccurrence;
    class IfcAnnotationSymbolOccurrence;
    class IfcAnnotationTextOccurrence;
    class IfcApplication;
    class IfcAppliedValue;
    class IfcAppliedValueRelationship;
    class IfcAppliedValueSelect;
    class IfcApproval;
    class IfcApprovalActorRelationship;
    class IfcApprovalPropertyRelationship;
    class IfcApprovalRelationship;
    class IfcArbitraryClosedProfileDef;
    class IfcArbitraryOpenProfileDef;
    class IfcArbitraryProfileDefWithVoids;
    class IfcAsset;
    class IfcAsymmetricIShapeProfileDef;
    class IfcAxis1Placement;
    class IfcAxis2Placement;
    class IfcAxis2Placement2D;
    class IfcAxis2Placement3D;
    class IfcBSplineCurve;
    class IfcBeam;
    class IfcBeamType;
    class IfcBezierCurve;
    class IfcBlobTexture;
    class IfcBlock;
    class IfcBoilerType;
    class IfcBooleanClippingResult;
    class IfcBooleanOperand;
    class IfcBooleanResult;
    class IfcBoundaryCondition;
    class IfcBoundaryEdgeCondition;
    class IfcBoundaryFaceCondition;
    class IfcBoundaryNodeCondition;
    class IfcBoundaryNodeConditionWarping;
    class IfcBoundedCurve;
    class IfcBoundedSurface;
    class IfcBoundingBox;
    class IfcBoxedHalfSpace;
    class IfcBuilding;
    class IfcBuildingElement;
    class IfcBuildingElementComponent;
    class IfcBuildingElementPart;
    class IfcBuildingElementProxy;
    class IfcBuildingElementProxyType;
    class IfcBuildingElementType;
    class IfcBuildingStorey;
    class IfcCShapeProfileDef;
    class IfcCableCarrierFittingType;
    class IfcCableCarrierSegmentType;
    class IfcCableSegmentType;
    class IfcCalendarDate;
    class IfcCartesianPoint;
    class IfcCartesianTransformationOperator;
    class IfcCartesianTransformationOperator2D;
    class IfcCartesianTransformationOperator2DnonUniform;
    class IfcCartesianTransformationOperator3D;
    class IfcCartesianTransformationOperator3DnonUniform;
    class IfcCenterLineProfileDef;
    class IfcChamferEdgeFeature;
    class IfcCharacterStyleSelect;
    class IfcChillerType;
    class IfcCircle;
    class IfcCircleHollowProfileDef;
    class IfcCircleProfileDef;
    class IfcClassification;
    class IfcClassificationItem;
    class IfcClassificationItemRelationship;
    class IfcClassificationNotation;
    class IfcClassificationNotationFacet;
    class IfcClassificationNotationSelect;
    class IfcClassificationReference;
    class IfcClosedShell;
    class IfcCoilType;
    class IfcColour;
    class IfcColourOrFactor;
    class IfcColourRgb;
    class IfcColourSpecification;
    class IfcColumn;
    class IfcColumnType;
    class IfcComplexProperty;
    class IfcCompositeCurve;
    class IfcCompositeCurveSegment;
    class IfcCompositeProfileDef;
    class IfcCompressorType;
    class IfcCondenserType;
    class IfcCondition;
    class IfcConditionCriterion;
    class IfcConditionCriterionSelect;
    class IfcConic;
    class IfcConnectedFaceSet;
    class IfcConnectionCurveGeometry;
    class IfcConnectionGeometry;
    class IfcConnectionPointEccentricity;
    class IfcConnectionPointGeometry;
    class IfcConnectionPortGeometry;
    class IfcConnectionSurfaceGeometry;
    class IfcConstraint;
    class IfcConstraintAggregationRelationship;
    class IfcConstraintClassificationRelationship;
    class IfcConstraintRelationship;
    class IfcConstructionEquipmentResource;
    class IfcConstructionMaterialResource;
    class IfcConstructionProductResource;
    class IfcConstructionResource;
    class IfcContextDependentUnit;
    class IfcControl;
    class IfcControllerType;
    class IfcConversionBasedUnit;
    class IfcCooledBeamType;
    class IfcCoolingTowerType;
    class IfcCoordinatedUniversalTimeOffset;
    class IfcCostItem;
    class IfcCostSchedule;
    class IfcCostValue;
    class IfcCovering;
    class IfcCoveringType;
    class IfcCraneRailAShapeProfileDef;
    class IfcCraneRailFShapeProfileDef;
    class IfcCrewResource;
    class IfcCsgPrimitive3D;
    class IfcCsgSelect;
    class IfcCsgSolid;
    class IfcCurrencyRelationship;
    class IfcCurtainWall;
    class IfcCurtainWallType;
    class IfcCurve;
    class IfcCurveBoundedPlane;
    class IfcCurveFontOrScaledCurveFontSelect;
    class IfcCurveOrEdgeCurve;
    class IfcCurveStyle;
    class IfcCurveStyleFont;
    class IfcCurveStyleFontAndScaling;
    class IfcCurveStyleFontPattern;
    class IfcCurveStyleFontSelect;
    class IfcDamperType;
    class IfcDateAndTime;
    class IfcDateTimeSelect;
    class IfcDefinedSymbol;
    class IfcDefinedSymbolSelect;
    class IfcDerivedMeasureValue;
    class IfcDerivedProfileDef;
    class IfcDerivedUnit;
    class IfcDerivedUnitElement;
    class IfcDiameterDimension;
    class IfcDimensionCalloutRelationship;
    class IfcDimensionCurve;
    class IfcDimensionCurveDirectedCallout;
    class IfcDimensionCurveTerminator;
    class IfcDimensionPair;
    class IfcDimensionalExponents;
    class IfcDirection;
    class IfcDiscreteAccessory;
    class IfcDiscreteAccessoryType;
    class IfcDistributionChamberElement;
    class IfcDistributionChamberElementType;
    class IfcDistributionControlElement;
    class IfcDistributionControlElementType;
    class IfcDistributionElement;
    class IfcDistributionElementType;
    class IfcDistributionFlowElement;
    class IfcDistributionFlowElementType;
    class IfcDistributionPort;
    class IfcDocumentElectronicFormat;
    class IfcDocumentInformation;
    class IfcDocumentInformationRelationship;
    class IfcDocumentReference;
    class IfcDocumentSelect;
    class IfcDoor;
    class IfcDoorLiningProperties;
    class IfcDoorPanelProperties;
    class IfcDoorStyle;
    class IfcDraughtingCallout;
    class IfcDraughtingCalloutElement;
    class IfcDraughtingCalloutRelationship;
    class IfcDraughtingPreDefinedColour;
    class IfcDraughtingPreDefinedCurveFont;
    class IfcDraughtingPreDefinedTextFont;
    class IfcDuctFittingType;
    class IfcDuctSegmentType;
    class IfcDuctSilencerType;
    class IfcEdge;
    class IfcEdgeCurve;
    class IfcEdgeFeature;
    class IfcEdgeLoop;
    class IfcElectricApplianceType;
    class IfcElectricDistributionPoint;
    class IfcElectricFlowStorageDeviceType;
    class IfcElectricGeneratorType;
    class IfcElectricHeaterType;
    class IfcElectricMotorType;
    class IfcElectricTimeControlType;
    class IfcElectricalBaseProperties;
    class IfcElectricalCircuit;
    class IfcElectricalElement;
    class IfcElement;
    class IfcElementAssembly;
    class IfcElementComponent;
    class IfcElementComponentType;
    class IfcElementQuantity;
    class IfcElementType;
    class IfcElementarySurface;
    class IfcEllipse;
    class IfcEllipseProfileDef;
    class IfcEnergyConversionDevice;
    class IfcEnergyConversionDeviceType;
    class IfcEnergyProperties;
    class IfcEnvironmentalImpactValue;
    class IfcEquipmentElement;
    class IfcEquipmentStandard;
    class IfcEvaporativeCoolerType;
    class IfcEvaporatorType;
    class IfcExtendedMaterialProperties;
    class IfcExternalReference;
    class IfcExternallyDefinedHatchStyle;
    class IfcExternallyDefinedSurfaceStyle;
    class IfcExternallyDefinedSymbol;
    class IfcExternallyDefinedTextFont;
    class IfcExtrudedAreaSolid;
    class IfcFace;
    class IfcFaceBasedSurfaceModel;
    class IfcFaceBound;
    class IfcFaceOuterBound;
    class IfcFaceSurface;
    class IfcFacetedBrep;
    class IfcFacetedBrepWithVoids;
    class IfcFailureConnectionCondition;
    class IfcFanType;
    class IfcFastener;
    class IfcFastenerType;
    class IfcFeatureElement;
    class IfcFeatureElementAddition;
    class IfcFeatureElementSubtraction;
    class IfcFillAreaStyle;
    class IfcFillAreaStyleHatching;
    class IfcFillAreaStyleTileShapeSelect;
    class IfcFillAreaStyleTileSymbolWithStyle;
    class IfcFillAreaStyleTiles;
    class IfcFillStyleSelect;
    class IfcFilterType;
    class IfcFireSuppressionTerminalType;
    class IfcFlowController;
    class IfcFlowControllerType;
    class IfcFlowFitting;
    class IfcFlowFittingType;
    class IfcFlowInstrumentType;
    class IfcFlowMeterType;
    class IfcFlowMovingDevice;
    class IfcFlowMovingDeviceType;
    class IfcFlowSegment;
    class IfcFlowSegmentType;
    class IfcFlowStorageDevice;
    class IfcFlowStorageDeviceType;
    class IfcFlowTerminal;
    class IfcFlowTerminalType;
    class IfcFlowTreatmentDevice;
    class IfcFlowTreatmentDeviceType;
    class IfcFluidFlowProperties;
    class IfcFooting;
    class IfcFuelProperties;
    class IfcFurnishingElement;
    class IfcFurnishingElementType;
    class IfcFurnitureStandard;
    class IfcFurnitureType;
    class IfcGasTerminalType;
    class IfcGeneralMaterialProperties;
    class IfcGeneralProfileProperties;
    class IfcGeometricCurveSet;
    class IfcGeometricRepresentationContext;
    class IfcGeometricRepresentationItem;
    class IfcGeometricRepresentationSubContext;
    class IfcGeometricSet;
    class IfcGeometricSetSelect;
    class IfcGrid;
    class IfcGridAxis;
    class IfcGridPlacement;
    class IfcGroup;
    class IfcHalfSpaceSolid;
    class IfcHatchLineDistanceSelect;
    class IfcHeatExchangerType;
    class IfcHumidifierType;
    class IfcHygroscopicMaterialProperties;
    class IfcIShapeProfileDef;
    class IfcImageTexture;
    class IfcInventory;
    class IfcIrregularTimeSeries;
    class IfcIrregularTimeSeriesValue;
    class IfcJunctionBoxType;
    class IfcLShapeProfileDef;
    class IfcLaborResource;
    class IfcLampType;
    class IfcLayeredItem;
    class IfcLibraryInformation;
    class IfcLibraryReference;
    class IfcLibrarySelect;
    class IfcLightDistributionData;
    class IfcLightDistributionDataSourceSelect;
    class IfcLightFixtureType;
    class IfcLightIntensityDistribution;
    class IfcLightSource;
    class IfcLightSourceAmbient;
    class IfcLightSourceDirectional;
    class IfcLightSourceGoniometric;
    class IfcLightSourcePositional;
    class IfcLightSourceSpot;
    class IfcLine;
    class IfcLinearDimension;
    class IfcLocalPlacement;
    class IfcLocalTime;
    class IfcLoop;
    class IfcManifoldSolidBrep;
    class IfcMappedItem;
    class IfcMaterial;
    class IfcMaterialClassificationRelationship;
    class IfcMaterialDefinitionRepresentation;
    class IfcMaterialLayer;
    class IfcMaterialLayerSet;
    class IfcMaterialLayerSetUsage;
    class IfcMaterialList;
    class IfcMaterialProperties;
    class IfcMaterialSelect;
    class IfcMeasureValue;
    class IfcMeasureWithUnit;
    class IfcMechanicalConcreteMaterialProperties;
    class IfcMechanicalFastener;
    class IfcMechanicalFastenerType;
    class IfcMechanicalMaterialProperties;
    class IfcMechanicalSteelMaterialProperties;
    class IfcMember;
    class IfcMemberType;
    class IfcMetric;
    class IfcMetricValueSelect;
    class IfcMonetaryUnit;
    class IfcMotorConnectionType;
    class IfcMove;
    class IfcNamedUnit;
    class IfcObject;
    class IfcObjectDefinition;
    class IfcObjectPlacement;
    class IfcObjectReferenceSelect;
    class IfcObjective;
    class IfcOccupant;
    class IfcOffsetCurve2D;
    class IfcOffsetCurve3D;
    class IfcOneDirectionRepeatFactor;
    class IfcOpenShell;
    class IfcOpeningElement;
    class IfcOpticalMaterialProperties;
    class IfcOrderAction;
    class IfcOrganization;
    class IfcOrganizationRelationship;
    class IfcOrientationSelect;
    class IfcOrientedEdge;
    class IfcOutletType;
    class IfcOwnerHistory;
    class IfcParameterizedProfileDef;
    class IfcPath;
    class IfcPerformanceHistory;
    class IfcPermeableCoveringProperties;
    class IfcPermit;
    class IfcPerson;
    class IfcPersonAndOrganization;
    class IfcPhysicalComplexQuantity;
    class IfcPhysicalQuantity;
    class IfcPhysicalSimpleQuantity;
    class IfcPile;
    class IfcPipeFittingType;
    class IfcPipeSegmentType;
    class IfcPixelTexture;
    class IfcPlacement;
    class IfcPlanarBox;
    class IfcPlanarExtent;
    class IfcPlane;
    class IfcPlate;
    class IfcPlateType;
    class IfcPoint;
    class IfcPointOnCurve;
    class IfcPointOnSurface;
    class IfcPointOrVertexPoint;
    class IfcPolyLoop;
    class IfcPolygonalBoundedHalfSpace;
    class IfcPolyline;
    class IfcPort;
    class IfcPostalAddress;
    class IfcPreDefinedColour;
    class IfcPreDefinedCurveFont;
    class IfcPreDefinedDimensionSymbol;
    class IfcPreDefinedItem;
    class IfcPreDefinedPointMarkerSymbol;
    class IfcPreDefinedSymbol;
    class IfcPreDefinedTerminatorSymbol;
    class IfcPreDefinedTextFont;
    class IfcPresentationLayerAssignment;
    class IfcPresentationLayerWithStyle;
    class IfcPresentationStyle;
    class IfcPresentationStyleAssignment;
    class IfcPresentationStyleSelect;
    class IfcProcedure;
    class IfcProcess;
    class IfcProduct;
    class IfcProductDefinitionShape;
    class IfcProductRepresentation;
    class IfcProductsOfCombustionProperties;
    class IfcProfileDef;
    class IfcProfileProperties;
    class IfcProject;
    class IfcProjectOrder;
    class IfcProjectOrderRecord;
    class IfcProjectionCurve;
    class IfcProjectionElement;
    class IfcProperty;
    class IfcPropertyBoundedValue;
    class IfcPropertyConstraintRelationship;
    class IfcPropertyDefinition;
    class IfcPropertyDependencyRelationship;
    class IfcPropertyEnumeratedValue;
    class IfcPropertyEnumeration;
    class IfcPropertyListValue;
    class IfcPropertyReferenceValue;
    class IfcPropertySet;
    class IfcPropertySetDefinition;
    class IfcPropertySingleValue;
    class IfcPropertyTableValue;
    class IfcProtectiveDeviceType;
    class IfcProxy;
    class IfcPumpType;
    class IfcQuantityArea;
    class IfcQuantityCount;
    class IfcQuantityLength;
    class IfcQuantityTime;
    class IfcQuantityVolume;
    class IfcQuantityWeight;
    class IfcRadiusDimension;
    class IfcRailing;
    class IfcRailingType;
    class IfcRamp;
    class IfcRampFlight;
    class IfcRampFlightType;
    class IfcRationalBezierCurve;
    class IfcRectangleHollowProfileDef;
    class IfcRectangleProfileDef;
    class IfcRectangularPyramid;
    class IfcRectangularTrimmedSurface;
    class IfcReferencesValueDocument;
    class IfcRegularTimeSeries;
    class IfcReinforcementBarProperties;
    class IfcReinforcementDefinitionProperties;
    class IfcReinforcingBar;
    class IfcReinforcingElement;
    class IfcReinforcingMesh;
    class IfcRelAggregates;
    class IfcRelAssigns;
    class IfcRelAssignsTasks;
    class IfcRelAssignsToActor;
    class IfcRelAssignsToControl;
    class IfcRelAssignsToGroup;
    class IfcRelAssignsToProcess;
    class IfcRelAssignsToProduct;
    class IfcRelAssignsToProjectOrder;
    class IfcRelAssignsToResource;
    class IfcRelAssociates;
    class IfcRelAssociatesAppliedValue;
    class IfcRelAssociatesApproval;
    class IfcRelAssociatesClassification;
    class IfcRelAssociatesConstraint;
    class IfcRelAssociatesDocument;
    class IfcRelAssociatesLibrary;
    class IfcRelAssociatesMaterial;
    class IfcRelAssociatesProfileProperties;
    class IfcRelConnects;
    class IfcRelConnectsElements;
    class IfcRelConnectsPathElements;
    class IfcRelConnectsPortToElement;
    class IfcRelConnectsPorts;
    class IfcRelConnectsStructuralActivity;
    class IfcRelConnectsStructuralElement;
    class IfcRelConnectsStructuralMember;
    class IfcRelConnectsWithEccentricity;
    class IfcRelConnectsWithRealizingElements;
    class IfcRelContainedInSpatialStructure;
    class IfcRelCoversBldgElements;
    class IfcRelCoversSpaces;
    class IfcRelDecomposes;
    class IfcRelDefines;
    class IfcRelDefinesByProperties;
    class IfcRelDefinesByType;
    class IfcRelFillsElement;
    class IfcRelFlowControlElements;
    class IfcRelInteractionRequirements;
    class IfcRelNests;
    class IfcRelOccupiesSpaces;
    class IfcRelOverridesProperties;
    class IfcRelProjectsElement;
    class IfcRelReferencedInSpatialStructure;
    class IfcRelSchedulesCostItems;
    class IfcRelSequence;
    class IfcRelServicesBuildings;
    class IfcRelSpaceBoundary;
    class IfcRelVoidsElement;
    class IfcRelationship;
    class IfcRelaxation;
    class IfcRepresentation;
    class IfcRepresentationContext;
    class IfcRepresentationItem;
    class IfcRepresentationMap;
    class IfcResource;
    class IfcRevolvedAreaSolid;
    class IfcRibPlateProfileProperties;
    class IfcRightCircularCone;
    class IfcRightCircularCylinder;
    class IfcRoof;
    class IfcRoot;
    class IfcRoundedEdgeFeature;
    class IfcRoundedRectangleProfileDef;
    class IfcSIUnit;
    class IfcSanitaryTerminalType;
    class IfcScheduleTimeControl;
    class IfcSectionProperties;
    class IfcSectionReinforcementProperties;
    class IfcSectionedSpine;
    class IfcSensorType;
    class IfcServiceLife;
    class IfcServiceLifeFactor;
    class IfcShapeAspect;
    class IfcShapeModel;
    class IfcShapeRepresentation;
    class IfcShell;
    class IfcShellBasedSurfaceModel;
    class IfcSimpleProperty;
    class IfcSimpleValue;
    class IfcSite;
    class IfcSizeSelect;
    class IfcSlab;
    class IfcSlabType;
    class IfcSlippageConnectionCondition;
    class IfcSolidModel;
    class IfcSoundProperties;
    class IfcSoundValue;
    class IfcSpace;
    class IfcSpaceHeaterType;
    class IfcSpaceProgram;
    class IfcSpaceThermalLoadProperties;
    class IfcSpaceType;
    class IfcSpatialStructureElement;
    class IfcSpatialStructureElementType;
    class IfcSpecularHighlightSelect;
    class IfcSphere;
    class IfcStackTerminalType;
    class IfcStair;
    class IfcStairFlight;
    class IfcStairFlightType;
    class IfcStructuralAction;
    class IfcStructuralActivity;
    class IfcStructuralActivityAssignmentSelect;
    class IfcStructuralAnalysisModel;
    class IfcStructuralConnection;
    class IfcStructuralConnectionCondition;
    class IfcStructuralCurveConnection;
    class IfcStructuralCurveMember;
    class IfcStructuralCurveMemberVarying;
    class IfcStructuralItem;
    class IfcStructuralLinearAction;
    class IfcStructuralLinearActionVarying;
    class IfcStructuralLoad;
    class IfcStructuralLoadGroup;
    class IfcStructuralLoadLinearForce;
    class IfcStructuralLoadPlanarForce;
    class IfcStructuralLoadSingleDisplacement;
    class IfcStructuralLoadSingleDisplacementDistortion;
    class IfcStructuralLoadSingleForce;
    class IfcStructuralLoadSingleForceWarping;
    class IfcStructuralLoadStatic;
    class IfcStructuralLoadTemperature;
    class IfcStructuralMember;
    class IfcStructuralPlanarAction;
    class IfcStructuralPlanarActionVarying;
    class IfcStructuralPointAction;
    class IfcStructuralPointConnection;
    class IfcStructuralPointReaction;
    class IfcStructuralProfileProperties;
    class IfcStructuralReaction;
    class IfcStructuralResultGroup;
    class IfcStructuralSteelProfileProperties;
    class IfcStructuralSurfaceConnection;
    class IfcStructuralSurfaceMember;
    class IfcStructuralSurfaceMemberVarying;
    class IfcStructuredDimensionCallout;
    class IfcStyleModel;
    class IfcStyledItem;
    class IfcStyledRepresentation;
    class IfcSubContractResource;
    class IfcSubedge;
    class IfcSurface;
    class IfcSurfaceCurveSweptAreaSolid;
    class IfcSurfaceOfLinearExtrusion;
    class IfcSurfaceOfRevolution;
    class IfcSurfaceOrFaceSurface;
    class IfcSurfaceStyle;
    class IfcSurfaceStyleElementSelect;
    class IfcSurfaceStyleLighting;
    class IfcSurfaceStyleRefraction;
    class IfcSurfaceStyleRendering;
    class IfcSurfaceStyleShading;
    class IfcSurfaceStyleWithTextures;
    class IfcSurfaceTexture;
    class IfcSweptAreaSolid;
    class IfcSweptDiskSolid;
    class IfcSweptSurface;
    class IfcSwitchingDeviceType;
    class IfcSymbolStyle;
    class IfcSymbolStyleSelect;
    class IfcSystem;
    class IfcSystemFurnitureElementType;
    class IfcTShapeProfileDef;
    class IfcTable;
    class IfcTableRow;
    class IfcTankType;
    class IfcTask;
    class IfcTelecomAddress;
    class IfcTendon;
    class IfcTendonAnchor;
    class IfcTerminatorSymbol;
    class IfcTextFontSelect;
    class IfcTextLiteral;
    class IfcTextLiteralWithExtent;
    class IfcTextStyle;
    class IfcTextStyleFontModel;
    class IfcTextStyleForDefinedFont;
    class IfcTextStyleSelect;
    class IfcTextStyleTextModel;
    class IfcTextStyleWithBoxCharacteristics;
    class IfcTextureCoordinate;
    class IfcTextureCoordinateGenerator;
    class IfcTextureMap;
    class IfcTextureVertex;
    class IfcThermalMaterialProperties;
    class IfcTimeSeries;
    class IfcTimeSeriesReferenceRelationship;
    class IfcTimeSeriesSchedule;
    class IfcTimeSeriesValue;
    class IfcTopologicalRepresentationItem;
    class IfcTopologyRepresentation;
    class IfcTransformerType;
    class IfcTransportElement;
    class IfcTransportElementType;
    class IfcTrapeziumProfileDef;
    class IfcTrimmedCurve;
    class IfcTrimmingSelect;
    class IfcTubeBundleType;
    class IfcTwoDirectionRepeatFactor;
    class IfcTypeObject;
    class IfcTypeProduct;
    class IfcUShapeProfileDef;
    class IfcUnit;
    class IfcUnitAssignment;
    class IfcUnitaryEquipmentType;
    class IfcValue;
    class IfcValveType;
    class IfcVector;
    class IfcVectorOrDirection;
    class IfcVertex;
    class IfcVertexBasedTextureMap;
    class IfcVertexLoop;
    class IfcVertexPoint;
    class IfcVibrationIsolatorType;
    class IfcVirtualElement;
    class IfcVirtualGridIntersection;
    class IfcWall;
    class IfcWallStandardCase;
    class IfcWallType;
    class IfcWasteTerminalType;
    class IfcWaterProperties;
    class IfcWindow;
    class IfcWindowLiningProperties;
    class IfcWindowPanelProperties;
    class IfcWindowStyle;
    class IfcWorkControl;
    class IfcWorkPlan;
    class IfcWorkSchedule;
    class IfcZShapeProfileDef;
    class IfcZone;

    /**
     * Visitor that implements all of the methods but returning false.
     * 
     */
    class IFC2X3_EXPORT FalseVisitor : public Visitor {
    public:
        /**
         */
        FalseVisitor();
        ~FalseVisitor() override;
        /**
         * @param value the IfcActorSelect datatype to visit
         */
        bool visitIfcActorSelect(IfcActorSelect *value) override;
        /**
         * @param value the IfcAppliedValueSelect datatype to visit
         */
        bool visitIfcAppliedValueSelect(IfcAppliedValueSelect *value) override;
        /**
         * @param value the IfcAxis2Placement datatype to visit
         */
        bool visitIfcAxis2Placement(IfcAxis2Placement *value) override;
        /**
         * @param value the IfcBooleanOperand datatype to visit
         */
        bool visitIfcBooleanOperand(IfcBooleanOperand *value) override;
        /**
         * @param value the IfcCharacterStyleSelect datatype to visit
         */
        bool visitIfcCharacterStyleSelect(IfcCharacterStyleSelect *value) override;
        /**
         * @param value the IfcClassificationNotationSelect datatype to visit
         */
        bool visitIfcClassificationNotationSelect(IfcClassificationNotationSelect *value) override;
        /**
         * @param value the IfcColour datatype to visit
         */
        bool visitIfcColour(IfcColour *value) override;
        /**
         * @param value the IfcColourOrFactor datatype to visit
         */
        bool visitIfcColourOrFactor(IfcColourOrFactor *value) override;
        /**
         * @param value the IfcConditionCriterionSelect datatype to visit
         */
        bool visitIfcConditionCriterionSelect(IfcConditionCriterionSelect *value) override;
        /**
         * @param value the IfcCsgSelect datatype to visit
         */
        bool visitIfcCsgSelect(IfcCsgSelect *value) override;
        /**
         * @param value the IfcCurveFontOrScaledCurveFontSelect datatype to visit
         */
        bool visitIfcCurveFontOrScaledCurveFontSelect(IfcCurveFontOrScaledCurveFontSelect *value) override;
        /**
         * @param value the IfcCurveOrEdgeCurve datatype to visit
         */
        bool visitIfcCurveOrEdgeCurve(IfcCurveOrEdgeCurve *value) override;
        /**
         * @param value the IfcCurveStyleFontSelect datatype to visit
         */
        bool visitIfcCurveStyleFontSelect(IfcCurveStyleFontSelect *value) override;
        /**
         * @param value the IfcDateTimeSelect datatype to visit
         */
        bool visitIfcDateTimeSelect(IfcDateTimeSelect *value) override;
        /**
         * @param value the IfcDefinedSymbolSelect datatype to visit
         */
        bool visitIfcDefinedSymbolSelect(IfcDefinedSymbolSelect *value) override;
        /**
         * @param value the IfcDerivedMeasureValue datatype to visit
         */
        bool visitIfcDerivedMeasureValue(IfcDerivedMeasureValue *value) override;
        /**
         * @param value the IfcDocumentSelect datatype to visit
         */
        bool visitIfcDocumentSelect(IfcDocumentSelect *value) override;
        /**
         * @param value the IfcDraughtingCalloutElement datatype to visit
         */
        bool visitIfcDraughtingCalloutElement(IfcDraughtingCalloutElement *value) override;
        /**
         * @param value the IfcFillAreaStyleTileShapeSelect datatype to visit
         */
        bool visitIfcFillAreaStyleTileShapeSelect(IfcFillAreaStyleTileShapeSelect *value) override;
        /**
         * @param value the IfcFillStyleSelect datatype to visit
         */
        bool visitIfcFillStyleSelect(IfcFillStyleSelect *value) override;
        /**
         * @param value the IfcGeometricSetSelect datatype to visit
         */
        bool visitIfcGeometricSetSelect(IfcGeometricSetSelect *value) override;
        /**
         * @param value the IfcHatchLineDistanceSelect datatype to visit
         */
        bool visitIfcHatchLineDistanceSelect(IfcHatchLineDistanceSelect *value) override;
        /**
         * @param value the IfcLayeredItem datatype to visit
         */
        bool visitIfcLayeredItem(IfcLayeredItem *value) override;
        /**
         * @param value the IfcLibrarySelect datatype to visit
         */
        bool visitIfcLibrarySelect(IfcLibrarySelect *value) override;
        /**
         * @param value the IfcLightDistributionDataSourceSelect datatype to visit
         */
        bool visitIfcLightDistributionDataSourceSelect(IfcLightDistributionDataSourceSelect *value) override;
        /**
         * @param value the IfcMaterialSelect datatype to visit
         */
        bool visitIfcMaterialSelect(IfcMaterialSelect *value) override;
        /**
         * @param value the IfcMeasureValue datatype to visit
         */
        bool visitIfcMeasureValue(IfcMeasureValue *value) override;
        /**
         * @param value the IfcMetricValueSelect datatype to visit
         */
        bool visitIfcMetricValueSelect(IfcMetricValueSelect *value) override;
        /**
         * @param value the IfcObjectReferenceSelect datatype to visit
         */
        bool visitIfcObjectReferenceSelect(IfcObjectReferenceSelect *value) override;
        /**
         * @param value the IfcOrientationSelect datatype to visit
         */
        bool visitIfcOrientationSelect(IfcOrientationSelect *value) override;
        /**
         * @param value the IfcPointOrVertexPoint datatype to visit
         */
        bool visitIfcPointOrVertexPoint(IfcPointOrVertexPoint *value) override;
        /**
         * @param value the IfcPresentationStyleSelect datatype to visit
         */
        bool visitIfcPresentationStyleSelect(IfcPresentationStyleSelect *value) override;
        /**
         * @param value the IfcShell datatype to visit
         */
        bool visitIfcShell(IfcShell *value) override;
        /**
         * @param value the IfcSimpleValue datatype to visit
         */
        bool visitIfcSimpleValue(IfcSimpleValue *value) override;
        /**
         * @param value the IfcSizeSelect datatype to visit
         */
        bool visitIfcSizeSelect(IfcSizeSelect *value) override;
        /**
         * @param value the IfcSpecularHighlightSelect datatype to visit
         */
        bool visitIfcSpecularHighlightSelect(IfcSpecularHighlightSelect *value) override;
        /**
         * @param value the IfcStructuralActivityAssignmentSelect datatype to visit
         */
        bool visitIfcStructuralActivityAssignmentSelect(IfcStructuralActivityAssignmentSelect *value) override;
        /**
         * @param value the IfcSurfaceOrFaceSurface datatype to visit
         */
        bool visitIfcSurfaceOrFaceSurface(IfcSurfaceOrFaceSurface *value) override;
        /**
         * @param value the IfcSurfaceStyleElementSelect datatype to visit
         */
        bool visitIfcSurfaceStyleElementSelect(IfcSurfaceStyleElementSelect *value) override;
        /**
         * @param value the IfcSymbolStyleSelect datatype to visit
         */
        bool visitIfcSymbolStyleSelect(IfcSymbolStyleSelect *value) override;
        /**
         * @param value the IfcTextFontSelect datatype to visit
         */
        bool visitIfcTextFontSelect(IfcTextFontSelect *value) override;
        /**
         * @param value the IfcTextStyleSelect datatype to visit
         */
        bool visitIfcTextStyleSelect(IfcTextStyleSelect *value) override;
        /**
         * @param value the IfcTrimmingSelect datatype to visit
         */
        bool visitIfcTrimmingSelect(IfcTrimmingSelect *value) override;
        /**
         * @param value the IfcUnit datatype to visit
         */
        bool visitIfcUnit(IfcUnit *value) override;
        /**
         * @param value the IfcValue datatype to visit
         */
        bool visitIfcValue(IfcValue *value) override;
        /**
         * @param value the IfcVectorOrDirection datatype to visit
         */
        bool visitIfcVectorOrDirection(IfcVectorOrDirection *value) override;
        /**
         * @param value the Ifc2DCompositeCurve datatype to visit
         */
        bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *value) override;
        /**
         * @param value the IfcActionRequest datatype to visit
         */
        bool visitIfcActionRequest(IfcActionRequest *value) override;
        /**
         * @param value the IfcActor datatype to visit
         */
        bool visitIfcActor(IfcActor *value) override;
        /**
         * @param value the IfcActorRole datatype to visit
         */
        bool visitIfcActorRole(IfcActorRole *value) override;
        /**
         * @param value the IfcActuatorType datatype to visit
         */
        bool visitIfcActuatorType(IfcActuatorType *value) override;
        /**
         * @param value the IfcAddress datatype to visit
         */
        bool visitIfcAddress(IfcAddress *value) override;
        /**
         * @param value the IfcAirTerminalBoxType datatype to visit
         */
        bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *value) override;
        /**
         * @param value the IfcAirTerminalType datatype to visit
         */
        bool visitIfcAirTerminalType(IfcAirTerminalType *value) override;
        /**
         * @param value the IfcAirToAirHeatRecoveryType datatype to visit
         */
        bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *value) override;
        /**
         * @param value the IfcAlarmType datatype to visit
         */
        bool visitIfcAlarmType(IfcAlarmType *value) override;
        /**
         * @param value the IfcAngularDimension datatype to visit
         */
        bool visitIfcAngularDimension(IfcAngularDimension *value) override;
        /**
         * @param value the IfcAnnotation datatype to visit
         */
        bool visitIfcAnnotation(IfcAnnotation *value) override;
        /**
         * @param value the IfcAnnotationCurveOccurrence datatype to visit
         */
        bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value) override;
        /**
         * @param value the IfcAnnotationFillArea datatype to visit
         */
        bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *value) override;
        /**
         * @param value the IfcAnnotationFillAreaOccurrence datatype to visit
         */
        bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *value) override;
        /**
         * @param value the IfcAnnotationOccurrence datatype to visit
         */
        bool visitIfcAnnotationOccurrence(IfcAnnotationOccurrence *value) override;
        /**
         * @param value the IfcAnnotationSurface datatype to visit
         */
        bool visitIfcAnnotationSurface(IfcAnnotationSurface *value) override;
        /**
         * @param value the IfcAnnotationSurfaceOccurrence datatype to visit
         */
        bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *value) override;
        /**
         * @param value the IfcAnnotationSymbolOccurrence datatype to visit
         */
        bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value) override;
        /**
         * @param value the IfcAnnotationTextOccurrence datatype to visit
         */
        bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value) override;
        /**
         * @param value the IfcApplication datatype to visit
         */
        bool visitIfcApplication(IfcApplication *value) override;
        /**
         * @param value the IfcAppliedValue datatype to visit
         */
        bool visitIfcAppliedValue(IfcAppliedValue *value) override;
        /**
         * @param value the IfcAppliedValueRelationship datatype to visit
         */
        bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *value) override;
        /**
         * @param value the IfcApproval datatype to visit
         */
        bool visitIfcApproval(IfcApproval *value) override;
        /**
         * @param value the IfcApprovalActorRelationship datatype to visit
         */
        bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *value) override;
        /**
         * @param value the IfcApprovalPropertyRelationship datatype to visit
         */
        bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *value) override;
        /**
         * @param value the IfcApprovalRelationship datatype to visit
         */
        bool visitIfcApprovalRelationship(IfcApprovalRelationship *value) override;
        /**
         * @param value the IfcArbitraryClosedProfileDef datatype to visit
         */
        bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *value) override;
        /**
         * @param value the IfcArbitraryOpenProfileDef datatype to visit
         */
        bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *value) override;
        /**
         * @param value the IfcArbitraryProfileDefWithVoids datatype to visit
         */
        bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *value) override;
        /**
         * @param value the IfcAsset datatype to visit
         */
        bool visitIfcAsset(IfcAsset *value) override;
        /**
         * @param value the IfcAsymmetricIShapeProfileDef datatype to visit
         */
        bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *value) override;
        /**
         * @param value the IfcAxis1Placement datatype to visit
         */
        bool visitIfcAxis1Placement(IfcAxis1Placement *value) override;
        /**
         * @param value the IfcAxis2Placement2D datatype to visit
         */
        bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *value) override;
        /**
         * @param value the IfcAxis2Placement3D datatype to visit
         */
        bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *value) override;
        /**
         * @param value the IfcBSplineCurve datatype to visit
         */
        bool visitIfcBSplineCurve(IfcBSplineCurve *value) override;
        /**
         * @param value the IfcBeam datatype to visit
         */
        bool visitIfcBeam(IfcBeam *value) override;
        /**
         * @param value the IfcBeamType datatype to visit
         */
        bool visitIfcBeamType(IfcBeamType *value) override;
        /**
         * @param value the IfcBezierCurve datatype to visit
         */
        bool visitIfcBezierCurve(IfcBezierCurve *value) override;
        /**
         * @param value the IfcBlobTexture datatype to visit
         */
        bool visitIfcBlobTexture(IfcBlobTexture *value) override;
        /**
         * @param value the IfcBlock datatype to visit
         */
        bool visitIfcBlock(IfcBlock *value) override;
        /**
         * @param value the IfcBoilerType datatype to visit
         */
        bool visitIfcBoilerType(IfcBoilerType *value) override;
        /**
         * @param value the IfcBooleanClippingResult datatype to visit
         */
        bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *value) override;
        /**
         * @param value the IfcBooleanResult datatype to visit
         */
        bool visitIfcBooleanResult(IfcBooleanResult *value) override;
        /**
         * @param value the IfcBoundaryCondition datatype to visit
         */
        bool visitIfcBoundaryCondition(IfcBoundaryCondition *value) override;
        /**
         * @param value the IfcBoundaryEdgeCondition datatype to visit
         */
        bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *value) override;
        /**
         * @param value the IfcBoundaryFaceCondition datatype to visit
         */
        bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *value) override;
        /**
         * @param value the IfcBoundaryNodeCondition datatype to visit
         */
        bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *value) override;
        /**
         * @param value the IfcBoundaryNodeConditionWarping datatype to visit
         */
        bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *value) override;
        /**
         * @param value the IfcBoundedCurve datatype to visit
         */
        bool visitIfcBoundedCurve(IfcBoundedCurve *value) override;
        /**
         * @param value the IfcBoundedSurface datatype to visit
         */
        bool visitIfcBoundedSurface(IfcBoundedSurface *value) override;
        /**
         * @param value the IfcBoundingBox datatype to visit
         */
        bool visitIfcBoundingBox(IfcBoundingBox *value) override;
        /**
         * @param value the IfcBoxedHalfSpace datatype to visit
         */
        bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *value) override;
        /**
         * @param value the IfcBuilding datatype to visit
         */
        bool visitIfcBuilding(IfcBuilding *value) override;
        /**
         * @param value the IfcBuildingElement datatype to visit
         */
        bool visitIfcBuildingElement(IfcBuildingElement *value) override;
        /**
         * @param value the IfcBuildingElementComponent datatype to visit
         */
        bool visitIfcBuildingElementComponent(IfcBuildingElementComponent *value) override;
        /**
         * @param value the IfcBuildingElementPart datatype to visit
         */
        bool visitIfcBuildingElementPart(IfcBuildingElementPart *value) override;
        /**
         * @param value the IfcBuildingElementProxy datatype to visit
         */
        bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *value) override;
        /**
         * @param value the IfcBuildingElementProxyType datatype to visit
         */
        bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *value) override;
        /**
         * @param value the IfcBuildingElementType datatype to visit
         */
        bool visitIfcBuildingElementType(IfcBuildingElementType *value) override;
        /**
         * @param value the IfcBuildingStorey datatype to visit
         */
        bool visitIfcBuildingStorey(IfcBuildingStorey *value) override;
        /**
         * @param value the IfcCShapeProfileDef datatype to visit
         */
        bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *value) override;
        /**
         * @param value the IfcCableCarrierFittingType datatype to visit
         */
        bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *value) override;
        /**
         * @param value the IfcCableCarrierSegmentType datatype to visit
         */
        bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *value) override;
        /**
         * @param value the IfcCableSegmentType datatype to visit
         */
        bool visitIfcCableSegmentType(IfcCableSegmentType *value) override;
        /**
         * @param value the IfcCalendarDate datatype to visit
         */
        bool visitIfcCalendarDate(IfcCalendarDate *value) override;
        /**
         * @param value the IfcCartesianPoint datatype to visit
         */
        bool visitIfcCartesianPoint(IfcCartesianPoint *value) override;
        /**
         * @param value the IfcCartesianTransformationOperator datatype to visit
         */
        bool visitIfcCartesianTransformationOperator(IfcCartesianTransformationOperator *value) override;
        /**
         * @param value the IfcCartesianTransformationOperator2D datatype to visit
         */
        bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *value) override;
        /**
         * @param value the IfcCartesianTransformationOperator2DnonUniform datatype to visit
         */
        bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *value) override;
        /**
         * @param value the IfcCartesianTransformationOperator3D datatype to visit
         */
        bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *value) override;
        /**
         * @param value the IfcCartesianTransformationOperator3DnonUniform datatype to visit
         */
        bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *value) override;
        /**
         * @param value the IfcCenterLineProfileDef datatype to visit
         */
        bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *value) override;
        /**
         * @param value the IfcChamferEdgeFeature datatype to visit
         */
        bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *value) override;
        /**
         * @param value the IfcChillerType datatype to visit
         */
        bool visitIfcChillerType(IfcChillerType *value) override;
        /**
         * @param value the IfcCircle datatype to visit
         */
        bool visitIfcCircle(IfcCircle *value) override;
        /**
         * @param value the IfcCircleHollowProfileDef datatype to visit
         */
        bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *value) override;
        /**
         * @param value the IfcCircleProfileDef datatype to visit
         */
        bool visitIfcCircleProfileDef(IfcCircleProfileDef *value) override;
        /**
         * @param value the IfcClassification datatype to visit
         */
        bool visitIfcClassification(IfcClassification *value) override;
        /**
         * @param value the IfcClassificationItem datatype to visit
         */
        bool visitIfcClassificationItem(IfcClassificationItem *value) override;
        /**
         * @param value the IfcClassificationItemRelationship datatype to visit
         */
        bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *value) override;
        /**
         * @param value the IfcClassificationNotation datatype to visit
         */
        bool visitIfcClassificationNotation(IfcClassificationNotation *value) override;
        /**
         * @param value the IfcClassificationNotationFacet datatype to visit
         */
        bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *value) override;
        /**
         * @param value the IfcClassificationReference datatype to visit
         */
        bool visitIfcClassificationReference(IfcClassificationReference *value) override;
        /**
         * @param value the IfcClosedShell datatype to visit
         */
        bool visitIfcClosedShell(IfcClosedShell *value) override;
        /**
         * @param value the IfcCoilType datatype to visit
         */
        bool visitIfcCoilType(IfcCoilType *value) override;
        /**
         * @param value the IfcColourRgb datatype to visit
         */
        bool visitIfcColourRgb(IfcColourRgb *value) override;
        /**
         * @param value the IfcColourSpecification datatype to visit
         */
        bool visitIfcColourSpecification(IfcColourSpecification *value) override;
        /**
         * @param value the IfcColumn datatype to visit
         */
        bool visitIfcColumn(IfcColumn *value) override;
        /**
         * @param value the IfcColumnType datatype to visit
         */
        bool visitIfcColumnType(IfcColumnType *value) override;
        /**
         * @param value the IfcComplexProperty datatype to visit
         */
        bool visitIfcComplexProperty(IfcComplexProperty *value) override;
        /**
         * @param value the IfcCompositeCurve datatype to visit
         */
        bool visitIfcCompositeCurve(IfcCompositeCurve *value) override;
        /**
         * @param value the IfcCompositeCurveSegment datatype to visit
         */
        bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *value) override;
        /**
         * @param value the IfcCompositeProfileDef datatype to visit
         */
        bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *value) override;
        /**
         * @param value the IfcCompressorType datatype to visit
         */
        bool visitIfcCompressorType(IfcCompressorType *value) override;
        /**
         * @param value the IfcCondenserType datatype to visit
         */
        bool visitIfcCondenserType(IfcCondenserType *value) override;
        /**
         * @param value the IfcCondition datatype to visit
         */
        bool visitIfcCondition(IfcCondition *value) override;
        /**
         * @param value the IfcConditionCriterion datatype to visit
         */
        bool visitIfcConditionCriterion(IfcConditionCriterion *value) override;
        /**
         * @param value the IfcConic datatype to visit
         */
        bool visitIfcConic(IfcConic *value) override;
        /**
         * @param value the IfcConnectedFaceSet datatype to visit
         */
        bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *value) override;
        /**
         * @param value the IfcConnectionCurveGeometry datatype to visit
         */
        bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *value) override;
        /**
         * @param value the IfcConnectionGeometry datatype to visit
         */
        bool visitIfcConnectionGeometry(IfcConnectionGeometry *value) override;
        /**
         * @param value the IfcConnectionPointEccentricity datatype to visit
         */
        bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *value) override;
        /**
         * @param value the IfcConnectionPointGeometry datatype to visit
         */
        bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *value) override;
        /**
         * @param value the IfcConnectionPortGeometry datatype to visit
         */
        bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *value) override;
        /**
         * @param value the IfcConnectionSurfaceGeometry datatype to visit
         */
        bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *value) override;
        /**
         * @param value the IfcConstraint datatype to visit
         */
        bool visitIfcConstraint(IfcConstraint *value) override;
        /**
         * @param value the IfcConstraintAggregationRelationship datatype to visit
         */
        bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *value) override;
        /**
         * @param value the IfcConstraintClassificationRelationship datatype to visit
         */
        bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *value) override;
        /**
         * @param value the IfcConstraintRelationship datatype to visit
         */
        bool visitIfcConstraintRelationship(IfcConstraintRelationship *value) override;
        /**
         * @param value the IfcConstructionEquipmentResource datatype to visit
         */
        bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *value) override;
        /**
         * @param value the IfcConstructionMaterialResource datatype to visit
         */
        bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *value) override;
        /**
         * @param value the IfcConstructionProductResource datatype to visit
         */
        bool visitIfcConstructionProductResource(IfcConstructionProductResource *value) override;
        /**
         * @param value the IfcConstructionResource datatype to visit
         */
        bool visitIfcConstructionResource(IfcConstructionResource *value) override;
        /**
         * @param value the IfcContextDependentUnit datatype to visit
         */
        bool visitIfcContextDependentUnit(IfcContextDependentUnit *value) override;
        /**
         * @param value the IfcControl datatype to visit
         */
        bool visitIfcControl(IfcControl *value) override;
        /**
         * @param value the IfcControllerType datatype to visit
         */
        bool visitIfcControllerType(IfcControllerType *value) override;
        /**
         * @param value the IfcConversionBasedUnit datatype to visit
         */
        bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *value) override;
        /**
         * @param value the IfcCooledBeamType datatype to visit
         */
        bool visitIfcCooledBeamType(IfcCooledBeamType *value) override;
        /**
         * @param value the IfcCoolingTowerType datatype to visit
         */
        bool visitIfcCoolingTowerType(IfcCoolingTowerType *value) override;
        /**
         * @param value the IfcCoordinatedUniversalTimeOffset datatype to visit
         */
        bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *value) override;
        /**
         * @param value the IfcCostItem datatype to visit
         */
        bool visitIfcCostItem(IfcCostItem *value) override;
        /**
         * @param value the IfcCostSchedule datatype to visit
         */
        bool visitIfcCostSchedule(IfcCostSchedule *value) override;
        /**
         * @param value the IfcCostValue datatype to visit
         */
        bool visitIfcCostValue(IfcCostValue *value) override;
        /**
         * @param value the IfcCovering datatype to visit
         */
        bool visitIfcCovering(IfcCovering *value) override;
        /**
         * @param value the IfcCoveringType datatype to visit
         */
        bool visitIfcCoveringType(IfcCoveringType *value) override;
        /**
         * @param value the IfcCraneRailAShapeProfileDef datatype to visit
         */
        bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *value) override;
        /**
         * @param value the IfcCraneRailFShapeProfileDef datatype to visit
         */
        bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *value) override;
        /**
         * @param value the IfcCrewResource datatype to visit
         */
        bool visitIfcCrewResource(IfcCrewResource *value) override;
        /**
         * @param value the IfcCsgPrimitive3D datatype to visit
         */
        bool visitIfcCsgPrimitive3D(IfcCsgPrimitive3D *value) override;
        /**
         * @param value the IfcCsgSolid datatype to visit
         */
        bool visitIfcCsgSolid(IfcCsgSolid *value) override;
        /**
         * @param value the IfcCurrencyRelationship datatype to visit
         */
        bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *value) override;
        /**
         * @param value the IfcCurtainWall datatype to visit
         */
        bool visitIfcCurtainWall(IfcCurtainWall *value) override;
        /**
         * @param value the IfcCurtainWallType datatype to visit
         */
        bool visitIfcCurtainWallType(IfcCurtainWallType *value) override;
        /**
         * @param value the IfcCurve datatype to visit
         */
        bool visitIfcCurve(IfcCurve *value) override;
        /**
         * @param value the IfcCurveBoundedPlane datatype to visit
         */
        bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *value) override;
        /**
         * @param value the IfcCurveStyle datatype to visit
         */
        bool visitIfcCurveStyle(IfcCurveStyle *value) override;
        /**
         * @param value the IfcCurveStyleFont datatype to visit
         */
        bool visitIfcCurveStyleFont(IfcCurveStyleFont *value) override;
        /**
         * @param value the IfcCurveStyleFontAndScaling datatype to visit
         */
        bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *value) override;
        /**
         * @param value the IfcCurveStyleFontPattern datatype to visit
         */
        bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *value) override;
        /**
         * @param value the IfcDamperType datatype to visit
         */
        bool visitIfcDamperType(IfcDamperType *value) override;
        /**
         * @param value the IfcDateAndTime datatype to visit
         */
        bool visitIfcDateAndTime(IfcDateAndTime *value) override;
        /**
         * @param value the IfcDefinedSymbol datatype to visit
         */
        bool visitIfcDefinedSymbol(IfcDefinedSymbol *value) override;
        /**
         * @param value the IfcDerivedProfileDef datatype to visit
         */
        bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *value) override;
        /**
         * @param value the IfcDerivedUnit datatype to visit
         */
        bool visitIfcDerivedUnit(IfcDerivedUnit *value) override;
        /**
         * @param value the IfcDerivedUnitElement datatype to visit
         */
        bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *value) override;
        /**
         * @param value the IfcDiameterDimension datatype to visit
         */
        bool visitIfcDiameterDimension(IfcDiameterDimension *value) override;
        /**
         * @param value the IfcDimensionCalloutRelationship datatype to visit
         */
        bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *value) override;
        /**
         * @param value the IfcDimensionCurve datatype to visit
         */
        bool visitIfcDimensionCurve(IfcDimensionCurve *value) override;
        /**
         * @param value the IfcDimensionCurveDirectedCallout datatype to visit
         */
        bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *value) override;
        /**
         * @param value the IfcDimensionCurveTerminator datatype to visit
         */
        bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *value) override;
        /**
         * @param value the IfcDimensionPair datatype to visit
         */
        bool visitIfcDimensionPair(IfcDimensionPair *value) override;
        /**
         * @param value the IfcDimensionalExponents datatype to visit
         */
        bool visitIfcDimensionalExponents(IfcDimensionalExponents *value) override;
        /**
         * @param value the IfcDirection datatype to visit
         */
        bool visitIfcDirection(IfcDirection *value) override;
        /**
         * @param value the IfcDiscreteAccessory datatype to visit
         */
        bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *value) override;
        /**
         * @param value the IfcDiscreteAccessoryType datatype to visit
         */
        bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *value) override;
        /**
         * @param value the IfcDistributionChamberElement datatype to visit
         */
        bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *value) override;
        /**
         * @param value the IfcDistributionChamberElementType datatype to visit
         */
        bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *value) override;
        /**
         * @param value the IfcDistributionControlElement datatype to visit
         */
        bool visitIfcDistributionControlElement(IfcDistributionControlElement *value) override;
        /**
         * @param value the IfcDistributionControlElementType datatype to visit
         */
        bool visitIfcDistributionControlElementType(IfcDistributionControlElementType *value) override;
        /**
         * @param value the IfcDistributionElement datatype to visit
         */
        bool visitIfcDistributionElement(IfcDistributionElement *value) override;
        /**
         * @param value the IfcDistributionElementType datatype to visit
         */
        bool visitIfcDistributionElementType(IfcDistributionElementType *value) override;
        /**
         * @param value the IfcDistributionFlowElement datatype to visit
         */
        bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *value) override;
        /**
         * @param value the IfcDistributionFlowElementType datatype to visit
         */
        bool visitIfcDistributionFlowElementType(IfcDistributionFlowElementType *value) override;
        /**
         * @param value the IfcDistributionPort datatype to visit
         */
        bool visitIfcDistributionPort(IfcDistributionPort *value) override;
        /**
         * @param value the IfcDocumentElectronicFormat datatype to visit
         */
        bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *value) override;
        /**
         * @param value the IfcDocumentInformation datatype to visit
         */
        bool visitIfcDocumentInformation(IfcDocumentInformation *value) override;
        /**
         * @param value the IfcDocumentInformationRelationship datatype to visit
         */
        bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *value) override;
        /**
         * @param value the IfcDocumentReference datatype to visit
         */
        bool visitIfcDocumentReference(IfcDocumentReference *value) override;
        /**
         * @param value the IfcDoor datatype to visit
         */
        bool visitIfcDoor(IfcDoor *value) override;
        /**
         * @param value the IfcDoorLiningProperties datatype to visit
         */
        bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *value) override;
        /**
         * @param value the IfcDoorPanelProperties datatype to visit
         */
        bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *value) override;
        /**
         * @param value the IfcDoorStyle datatype to visit
         */
        bool visitIfcDoorStyle(IfcDoorStyle *value) override;
        /**
         * @param value the IfcDraughtingCallout datatype to visit
         */
        bool visitIfcDraughtingCallout(IfcDraughtingCallout *value) override;
        /**
         * @param value the IfcDraughtingCalloutRelationship datatype to visit
         */
        bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *value) override;
        /**
         * @param value the IfcDraughtingPreDefinedColour datatype to visit
         */
        bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *value) override;
        /**
         * @param value the IfcDraughtingPreDefinedCurveFont datatype to visit
         */
        bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *value) override;
        /**
         * @param value the IfcDraughtingPreDefinedTextFont datatype to visit
         */
        bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *value) override;
        /**
         * @param value the IfcDuctFittingType datatype to visit
         */
        bool visitIfcDuctFittingType(IfcDuctFittingType *value) override;
        /**
         * @param value the IfcDuctSegmentType datatype to visit
         */
        bool visitIfcDuctSegmentType(IfcDuctSegmentType *value) override;
        /**
         * @param value the IfcDuctSilencerType datatype to visit
         */
        bool visitIfcDuctSilencerType(IfcDuctSilencerType *value) override;
        /**
         * @param value the IfcEdge datatype to visit
         */
        bool visitIfcEdge(IfcEdge *value) override;
        /**
         * @param value the IfcEdgeCurve datatype to visit
         */
        bool visitIfcEdgeCurve(IfcEdgeCurve *value) override;
        /**
         * @param value the IfcEdgeFeature datatype to visit
         */
        bool visitIfcEdgeFeature(IfcEdgeFeature *value) override;
        /**
         * @param value the IfcEdgeLoop datatype to visit
         */
        bool visitIfcEdgeLoop(IfcEdgeLoop *value) override;
        /**
         * @param value the IfcElectricApplianceType datatype to visit
         */
        bool visitIfcElectricApplianceType(IfcElectricApplianceType *value) override;
        /**
         * @param value the IfcElectricDistributionPoint datatype to visit
         */
        bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *value) override;
        /**
         * @param value the IfcElectricFlowStorageDeviceType datatype to visit
         */
        bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *value) override;
        /**
         * @param value the IfcElectricGeneratorType datatype to visit
         */
        bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *value) override;
        /**
         * @param value the IfcElectricHeaterType datatype to visit
         */
        bool visitIfcElectricHeaterType(IfcElectricHeaterType *value) override;
        /**
         * @param value the IfcElectricMotorType datatype to visit
         */
        bool visitIfcElectricMotorType(IfcElectricMotorType *value) override;
        /**
         * @param value the IfcElectricTimeControlType datatype to visit
         */
        bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *value) override;
        /**
         * @param value the IfcElectricalBaseProperties datatype to visit
         */
        bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *value) override;
        /**
         * @param value the IfcElectricalCircuit datatype to visit
         */
        bool visitIfcElectricalCircuit(IfcElectricalCircuit *value) override;
        /**
         * @param value the IfcElectricalElement datatype to visit
         */
        bool visitIfcElectricalElement(IfcElectricalElement *value) override;
        /**
         * @param value the IfcElement datatype to visit
         */
        bool visitIfcElement(IfcElement *value) override;
        /**
         * @param value the IfcElementAssembly datatype to visit
         */
        bool visitIfcElementAssembly(IfcElementAssembly *value) override;
        /**
         * @param value the IfcElementComponent datatype to visit
         */
        bool visitIfcElementComponent(IfcElementComponent *value) override;
        /**
         * @param value the IfcElementComponentType datatype to visit
         */
        bool visitIfcElementComponentType(IfcElementComponentType *value) override;
        /**
         * @param value the IfcElementQuantity datatype to visit
         */
        bool visitIfcElementQuantity(IfcElementQuantity *value) override;
        /**
         * @param value the IfcElementType datatype to visit
         */
        bool visitIfcElementType(IfcElementType *value) override;
        /**
         * @param value the IfcElementarySurface datatype to visit
         */
        bool visitIfcElementarySurface(IfcElementarySurface *value) override;
        /**
         * @param value the IfcEllipse datatype to visit
         */
        bool visitIfcEllipse(IfcEllipse *value) override;
        /**
         * @param value the IfcEllipseProfileDef datatype to visit
         */
        bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *value) override;
        /**
         * @param value the IfcEnergyConversionDevice datatype to visit
         */
        bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *value) override;
        /**
         * @param value the IfcEnergyConversionDeviceType datatype to visit
         */
        bool visitIfcEnergyConversionDeviceType(IfcEnergyConversionDeviceType *value) override;
        /**
         * @param value the IfcEnergyProperties datatype to visit
         */
        bool visitIfcEnergyProperties(IfcEnergyProperties *value) override;
        /**
         * @param value the IfcEnvironmentalImpactValue datatype to visit
         */
        bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *value) override;
        /**
         * @param value the IfcEquipmentElement datatype to visit
         */
        bool visitIfcEquipmentElement(IfcEquipmentElement *value) override;
        /**
         * @param value the IfcEquipmentStandard datatype to visit
         */
        bool visitIfcEquipmentStandard(IfcEquipmentStandard *value) override;
        /**
         * @param value the IfcEvaporativeCoolerType datatype to visit
         */
        bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *value) override;
        /**
         * @param value the IfcEvaporatorType datatype to visit
         */
        bool visitIfcEvaporatorType(IfcEvaporatorType *value) override;
        /**
         * @param value the IfcExtendedMaterialProperties datatype to visit
         */
        bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *value) override;
        /**
         * @param value the IfcExternalReference datatype to visit
         */
        bool visitIfcExternalReference(IfcExternalReference *value) override;
        /**
         * @param value the IfcExternallyDefinedHatchStyle datatype to visit
         */
        bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *value) override;
        /**
         * @param value the IfcExternallyDefinedSurfaceStyle datatype to visit
         */
        bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value) override;
        /**
         * @param value the IfcExternallyDefinedSymbol datatype to visit
         */
        bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value) override;
        /**
         * @param value the IfcExternallyDefinedTextFont datatype to visit
         */
        bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value) override;
        /**
         * @param value the IfcExtrudedAreaSolid datatype to visit
         */
        bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *value) override;
        /**
         * @param value the IfcFace datatype to visit
         */
        bool visitIfcFace(IfcFace *value) override;
        /**
         * @param value the IfcFaceBasedSurfaceModel datatype to visit
         */
        bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value) override;
        /**
         * @param value the IfcFaceBound datatype to visit
         */
        bool visitIfcFaceBound(IfcFaceBound *value) override;
        /**
         * @param value the IfcFaceOuterBound datatype to visit
         */
        bool visitIfcFaceOuterBound(IfcFaceOuterBound *value) override;
        /**
         * @param value the IfcFaceSurface datatype to visit
         */
        bool visitIfcFaceSurface(IfcFaceSurface *value) override;
        /**
         * @param value the IfcFacetedBrep datatype to visit
         */
        bool visitIfcFacetedBrep(IfcFacetedBrep *value) override;
        /**
         * @param value the IfcFacetedBrepWithVoids datatype to visit
         */
        bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *value) override;
        /**
         * @param value the IfcFailureConnectionCondition datatype to visit
         */
        bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *value) override;
        /**
         * @param value the IfcFanType datatype to visit
         */
        bool visitIfcFanType(IfcFanType *value) override;
        /**
         * @param value the IfcFastener datatype to visit
         */
        bool visitIfcFastener(IfcFastener *value) override;
        /**
         * @param value the IfcFastenerType datatype to visit
         */
        bool visitIfcFastenerType(IfcFastenerType *value) override;
        /**
         * @param value the IfcFeatureElement datatype to visit
         */
        bool visitIfcFeatureElement(IfcFeatureElement *value) override;
        /**
         * @param value the IfcFeatureElementAddition datatype to visit
         */
        bool visitIfcFeatureElementAddition(IfcFeatureElementAddition *value) override;
        /**
         * @param value the IfcFeatureElementSubtraction datatype to visit
         */
        bool visitIfcFeatureElementSubtraction(IfcFeatureElementSubtraction *value) override;
        /**
         * @param value the IfcFillAreaStyle datatype to visit
         */
        bool visitIfcFillAreaStyle(IfcFillAreaStyle *value) override;
        /**
         * @param value the IfcFillAreaStyleHatching datatype to visit
         */
        bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value) override;
        /**
         * @param value the IfcFillAreaStyleTileSymbolWithStyle datatype to visit
         */
        bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value) override;
        /**
         * @param value the IfcFillAreaStyleTiles datatype to visit
         */
        bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value) override;
        /**
         * @param value the IfcFilterType datatype to visit
         */
        bool visitIfcFilterType(IfcFilterType *value) override;
        /**
         * @param value the IfcFireSuppressionTerminalType datatype to visit
         */
        bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *value) override;
        /**
         * @param value the IfcFlowController datatype to visit
         */
        bool visitIfcFlowController(IfcFlowController *value) override;
        /**
         * @param value the IfcFlowControllerType datatype to visit
         */
        bool visitIfcFlowControllerType(IfcFlowControllerType *value) override;
        /**
         * @param value the IfcFlowFitting datatype to visit
         */
        bool visitIfcFlowFitting(IfcFlowFitting *value) override;
        /**
         * @param value the IfcFlowFittingType datatype to visit
         */
        bool visitIfcFlowFittingType(IfcFlowFittingType *value) override;
        /**
         * @param value the IfcFlowInstrumentType datatype to visit
         */
        bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *value) override;
        /**
         * @param value the IfcFlowMeterType datatype to visit
         */
        bool visitIfcFlowMeterType(IfcFlowMeterType *value) override;
        /**
         * @param value the IfcFlowMovingDevice datatype to visit
         */
        bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *value) override;
        /**
         * @param value the IfcFlowMovingDeviceType datatype to visit
         */
        bool visitIfcFlowMovingDeviceType(IfcFlowMovingDeviceType *value) override;
        /**
         * @param value the IfcFlowSegment datatype to visit
         */
        bool visitIfcFlowSegment(IfcFlowSegment *value) override;
        /**
         * @param value the IfcFlowSegmentType datatype to visit
         */
        bool visitIfcFlowSegmentType(IfcFlowSegmentType *value) override;
        /**
         * @param value the IfcFlowStorageDevice datatype to visit
         */
        bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *value) override;
        /**
         * @param value the IfcFlowStorageDeviceType datatype to visit
         */
        bool visitIfcFlowStorageDeviceType(IfcFlowStorageDeviceType *value) override;
        /**
         * @param value the IfcFlowTerminal datatype to visit
         */
        bool visitIfcFlowTerminal(IfcFlowTerminal *value) override;
        /**
         * @param value the IfcFlowTerminalType datatype to visit
         */
        bool visitIfcFlowTerminalType(IfcFlowTerminalType *value) override;
        /**
         * @param value the IfcFlowTreatmentDevice datatype to visit
         */
        bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *value) override;
        /**
         * @param value the IfcFlowTreatmentDeviceType datatype to visit
         */
        bool visitIfcFlowTreatmentDeviceType(IfcFlowTreatmentDeviceType *value) override;
        /**
         * @param value the IfcFluidFlowProperties datatype to visit
         */
        bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *value) override;
        /**
         * @param value the IfcFooting datatype to visit
         */
        bool visitIfcFooting(IfcFooting *value) override;
        /**
         * @param value the IfcFuelProperties datatype to visit
         */
        bool visitIfcFuelProperties(IfcFuelProperties *value) override;
        /**
         * @param value the IfcFurnishingElement datatype to visit
         */
        bool visitIfcFurnishingElement(IfcFurnishingElement *value) override;
        /**
         * @param value the IfcFurnishingElementType datatype to visit
         */
        bool visitIfcFurnishingElementType(IfcFurnishingElementType *value) override;
        /**
         * @param value the IfcFurnitureStandard datatype to visit
         */
        bool visitIfcFurnitureStandard(IfcFurnitureStandard *value) override;
        /**
         * @param value the IfcFurnitureType datatype to visit
         */
        bool visitIfcFurnitureType(IfcFurnitureType *value) override;
        /**
         * @param value the IfcGasTerminalType datatype to visit
         */
        bool visitIfcGasTerminalType(IfcGasTerminalType *value) override;
        /**
         * @param value the IfcGeneralMaterialProperties datatype to visit
         */
        bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *value) override;
        /**
         * @param value the IfcGeneralProfileProperties datatype to visit
         */
        bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *value) override;
        /**
         * @param value the IfcGeometricCurveSet datatype to visit
         */
        bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *value) override;
        /**
         * @param value the IfcGeometricRepresentationContext datatype to visit
         */
        bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *value) override;
        /**
         * @param value the IfcGeometricRepresentationItem datatype to visit
         */
        bool visitIfcGeometricRepresentationItem(IfcGeometricRepresentationItem *value) override;
        /**
         * @param value the IfcGeometricRepresentationSubContext datatype to visit
         */
        bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *value) override;
        /**
         * @param value the IfcGeometricSet datatype to visit
         */
        bool visitIfcGeometricSet(IfcGeometricSet *value) override;
        /**
         * @param value the IfcGrid datatype to visit
         */
        bool visitIfcGrid(IfcGrid *value) override;
        /**
         * @param value the IfcGridAxis datatype to visit
         */
        bool visitIfcGridAxis(IfcGridAxis *value) override;
        /**
         * @param value the IfcGridPlacement datatype to visit
         */
        bool visitIfcGridPlacement(IfcGridPlacement *value) override;
        /**
         * @param value the IfcGroup datatype to visit
         */
        bool visitIfcGroup(IfcGroup *value) override;
        /**
         * @param value the IfcHalfSpaceSolid datatype to visit
         */
        bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *value) override;
        /**
         * @param value the IfcHeatExchangerType datatype to visit
         */
        bool visitIfcHeatExchangerType(IfcHeatExchangerType *value) override;
        /**
         * @param value the IfcHumidifierType datatype to visit
         */
        bool visitIfcHumidifierType(IfcHumidifierType *value) override;
        /**
         * @param value the IfcHygroscopicMaterialProperties datatype to visit
         */
        bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *value) override;
        /**
         * @param value the IfcIShapeProfileDef datatype to visit
         */
        bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *value) override;
        /**
         * @param value the IfcImageTexture datatype to visit
         */
        bool visitIfcImageTexture(IfcImageTexture *value) override;
        /**
         * @param value the IfcInventory datatype to visit
         */
        bool visitIfcInventory(IfcInventory *value) override;
        /**
         * @param value the IfcIrregularTimeSeries datatype to visit
         */
        bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *value) override;
        /**
         * @param value the IfcIrregularTimeSeriesValue datatype to visit
         */
        bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *value) override;
        /**
         * @param value the IfcJunctionBoxType datatype to visit
         */
        bool visitIfcJunctionBoxType(IfcJunctionBoxType *value) override;
        /**
         * @param value the IfcLShapeProfileDef datatype to visit
         */
        bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *value) override;
        /**
         * @param value the IfcLaborResource datatype to visit
         */
        bool visitIfcLaborResource(IfcLaborResource *value) override;
        /**
         * @param value the IfcLampType datatype to visit
         */
        bool visitIfcLampType(IfcLampType *value) override;
        /**
         * @param value the IfcLibraryInformation datatype to visit
         */
        bool visitIfcLibraryInformation(IfcLibraryInformation *value) override;
        /**
         * @param value the IfcLibraryReference datatype to visit
         */
        bool visitIfcLibraryReference(IfcLibraryReference *value) override;
        /**
         * @param value the IfcLightDistributionData datatype to visit
         */
        bool visitIfcLightDistributionData(IfcLightDistributionData *value) override;
        /**
         * @param value the IfcLightFixtureType datatype to visit
         */
        bool visitIfcLightFixtureType(IfcLightFixtureType *value) override;
        /**
         * @param value the IfcLightIntensityDistribution datatype to visit
         */
        bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *value) override;
        /**
         * @param value the IfcLightSource datatype to visit
         */
        bool visitIfcLightSource(IfcLightSource *value) override;
        /**
         * @param value the IfcLightSourceAmbient datatype to visit
         */
        bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *value) override;
        /**
         * @param value the IfcLightSourceDirectional datatype to visit
         */
        bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *value) override;
        /**
         * @param value the IfcLightSourceGoniometric datatype to visit
         */
        bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *value) override;
        /**
         * @param value the IfcLightSourcePositional datatype to visit
         */
        bool visitIfcLightSourcePositional(IfcLightSourcePositional *value) override;
        /**
         * @param value the IfcLightSourceSpot datatype to visit
         */
        bool visitIfcLightSourceSpot(IfcLightSourceSpot *value) override;
        /**
         * @param value the IfcLine datatype to visit
         */
        bool visitIfcLine(IfcLine *value) override;
        /**
         * @param value the IfcLinearDimension datatype to visit
         */
        bool visitIfcLinearDimension(IfcLinearDimension *value) override;
        /**
         * @param value the IfcLocalPlacement datatype to visit
         */
        bool visitIfcLocalPlacement(IfcLocalPlacement *value) override;
        /**
         * @param value the IfcLocalTime datatype to visit
         */
        bool visitIfcLocalTime(IfcLocalTime *value) override;
        /**
         * @param value the IfcLoop datatype to visit
         */
        bool visitIfcLoop(IfcLoop *value) override;
        /**
         * @param value the IfcManifoldSolidBrep datatype to visit
         */
        bool visitIfcManifoldSolidBrep(IfcManifoldSolidBrep *value) override;
        /**
         * @param value the IfcMappedItem datatype to visit
         */
        bool visitIfcMappedItem(IfcMappedItem *value) override;
        /**
         * @param value the IfcMaterial datatype to visit
         */
        bool visitIfcMaterial(IfcMaterial *value) override;
        /**
         * @param value the IfcMaterialClassificationRelationship datatype to visit
         */
        bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *value) override;
        /**
         * @param value the IfcMaterialDefinitionRepresentation datatype to visit
         */
        bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *value) override;
        /**
         * @param value the IfcMaterialLayer datatype to visit
         */
        bool visitIfcMaterialLayer(IfcMaterialLayer *value) override;
        /**
         * @param value the IfcMaterialLayerSet datatype to visit
         */
        bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *value) override;
        /**
         * @param value the IfcMaterialLayerSetUsage datatype to visit
         */
        bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value) override;
        /**
         * @param value the IfcMaterialList datatype to visit
         */
        bool visitIfcMaterialList(IfcMaterialList *value) override;
        /**
         * @param value the IfcMaterialProperties datatype to visit
         */
        bool visitIfcMaterialProperties(IfcMaterialProperties *value) override;
        /**
         * @param value the IfcMeasureWithUnit datatype to visit
         */
        bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *value) override;
        /**
         * @param value the IfcMechanicalConcreteMaterialProperties datatype to visit
         */
        bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *value) override;
        /**
         * @param value the IfcMechanicalFastener datatype to visit
         */
        bool visitIfcMechanicalFastener(IfcMechanicalFastener *value) override;
        /**
         * @param value the IfcMechanicalFastenerType datatype to visit
         */
        bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *value) override;
        /**
         * @param value the IfcMechanicalMaterialProperties datatype to visit
         */
        bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *value) override;
        /**
         * @param value the IfcMechanicalSteelMaterialProperties datatype to visit
         */
        bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *value) override;
        /**
         * @param value the IfcMember datatype to visit
         */
        bool visitIfcMember(IfcMember *value) override;
        /**
         * @param value the IfcMemberType datatype to visit
         */
        bool visitIfcMemberType(IfcMemberType *value) override;
        /**
         * @param value the IfcMetric datatype to visit
         */
        bool visitIfcMetric(IfcMetric *value) override;
        /**
         * @param value the IfcMonetaryUnit datatype to visit
         */
        bool visitIfcMonetaryUnit(IfcMonetaryUnit *value) override;
        /**
         * @param value the IfcMotorConnectionType datatype to visit
         */
        bool visitIfcMotorConnectionType(IfcMotorConnectionType *value) override;
        /**
         * @param value the IfcMove datatype to visit
         */
        bool visitIfcMove(IfcMove *value) override;
        /**
         * @param value the IfcNamedUnit datatype to visit
         */
        bool visitIfcNamedUnit(IfcNamedUnit *value) override;
        /**
         * @param value the IfcObject datatype to visit
         */
        bool visitIfcObject(IfcObject *value) override;
        /**
         * @param value the IfcObjectDefinition datatype to visit
         */
        bool visitIfcObjectDefinition(IfcObjectDefinition *value) override;
        /**
         * @param value the IfcObjectPlacement datatype to visit
         */
        bool visitIfcObjectPlacement(IfcObjectPlacement *value) override;
        /**
         * @param value the IfcObjective datatype to visit
         */
        bool visitIfcObjective(IfcObjective *value) override;
        /**
         * @param value the IfcOccupant datatype to visit
         */
        bool visitIfcOccupant(IfcOccupant *value) override;
        /**
         * @param value the IfcOffsetCurve2D datatype to visit
         */
        bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *value) override;
        /**
         * @param value the IfcOffsetCurve3D datatype to visit
         */
        bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *value) override;
        /**
         * @param value the IfcOneDirectionRepeatFactor datatype to visit
         */
        bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value) override;
        /**
         * @param value the IfcOpenShell datatype to visit
         */
        bool visitIfcOpenShell(IfcOpenShell *value) override;
        /**
         * @param value the IfcOpeningElement datatype to visit
         */
        bool visitIfcOpeningElement(IfcOpeningElement *value) override;
        /**
         * @param value the IfcOpticalMaterialProperties datatype to visit
         */
        bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *value) override;
        /**
         * @param value the IfcOrderAction datatype to visit
         */
        bool visitIfcOrderAction(IfcOrderAction *value) override;
        /**
         * @param value the IfcOrganization datatype to visit
         */
        bool visitIfcOrganization(IfcOrganization *value) override;
        /**
         * @param value the IfcOrganizationRelationship datatype to visit
         */
        bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *value) override;
        /**
         * @param value the IfcOrientedEdge datatype to visit
         */
        bool visitIfcOrientedEdge(IfcOrientedEdge *value) override;
        /**
         * @param value the IfcOutletType datatype to visit
         */
        bool visitIfcOutletType(IfcOutletType *value) override;
        /**
         * @param value the IfcOwnerHistory datatype to visit
         */
        bool visitIfcOwnerHistory(IfcOwnerHistory *value) override;
        /**
         * @param value the IfcParameterizedProfileDef datatype to visit
         */
        bool visitIfcParameterizedProfileDef(IfcParameterizedProfileDef *value) override;
        /**
         * @param value the IfcPath datatype to visit
         */
        bool visitIfcPath(IfcPath *value) override;
        /**
         * @param value the IfcPerformanceHistory datatype to visit
         */
        bool visitIfcPerformanceHistory(IfcPerformanceHistory *value) override;
        /**
         * @param value the IfcPermeableCoveringProperties datatype to visit
         */
        bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *value) override;
        /**
         * @param value the IfcPermit datatype to visit
         */
        bool visitIfcPermit(IfcPermit *value) override;
        /**
         * @param value the IfcPerson datatype to visit
         */
        bool visitIfcPerson(IfcPerson *value) override;
        /**
         * @param value the IfcPersonAndOrganization datatype to visit
         */
        bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *value) override;
        /**
         * @param value the IfcPhysicalComplexQuantity datatype to visit
         */
        bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *value) override;
        /**
         * @param value the IfcPhysicalQuantity datatype to visit
         */
        bool visitIfcPhysicalQuantity(IfcPhysicalQuantity *value) override;
        /**
         * @param value the IfcPhysicalSimpleQuantity datatype to visit
         */
        bool visitIfcPhysicalSimpleQuantity(IfcPhysicalSimpleQuantity *value) override;
        /**
         * @param value the IfcPile datatype to visit
         */
        bool visitIfcPile(IfcPile *value) override;
        /**
         * @param value the IfcPipeFittingType datatype to visit
         */
        bool visitIfcPipeFittingType(IfcPipeFittingType *value) override;
        /**
         * @param value the IfcPipeSegmentType datatype to visit
         */
        bool visitIfcPipeSegmentType(IfcPipeSegmentType *value) override;
        /**
         * @param value the IfcPixelTexture datatype to visit
         */
        bool visitIfcPixelTexture(IfcPixelTexture *value) override;
        /**
         * @param value the IfcPlacement datatype to visit
         */
        bool visitIfcPlacement(IfcPlacement *value) override;
        /**
         * @param value the IfcPlanarBox datatype to visit
         */
        bool visitIfcPlanarBox(IfcPlanarBox *value) override;
        /**
         * @param value the IfcPlanarExtent datatype to visit
         */
        bool visitIfcPlanarExtent(IfcPlanarExtent *value) override;
        /**
         * @param value the IfcPlane datatype to visit
         */
        bool visitIfcPlane(IfcPlane *value) override;
        /**
         * @param value the IfcPlate datatype to visit
         */
        bool visitIfcPlate(IfcPlate *value) override;
        /**
         * @param value the IfcPlateType datatype to visit
         */
        bool visitIfcPlateType(IfcPlateType *value) override;
        /**
         * @param value the IfcPoint datatype to visit
         */
        bool visitIfcPoint(IfcPoint *value) override;
        /**
         * @param value the IfcPointOnCurve datatype to visit
         */
        bool visitIfcPointOnCurve(IfcPointOnCurve *value) override;
        /**
         * @param value the IfcPointOnSurface datatype to visit
         */
        bool visitIfcPointOnSurface(IfcPointOnSurface *value) override;
        /**
         * @param value the IfcPolyLoop datatype to visit
         */
        bool visitIfcPolyLoop(IfcPolyLoop *value) override;
        /**
         * @param value the IfcPolygonalBoundedHalfSpace datatype to visit
         */
        bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *value) override;
        /**
         * @param value the IfcPolyline datatype to visit
         */
        bool visitIfcPolyline(IfcPolyline *value) override;
        /**
         * @param value the IfcPort datatype to visit
         */
        bool visitIfcPort(IfcPort *value) override;
        /**
         * @param value the IfcPostalAddress datatype to visit
         */
        bool visitIfcPostalAddress(IfcPostalAddress *value) override;
        /**
         * @param value the IfcPreDefinedColour datatype to visit
         */
        bool visitIfcPreDefinedColour(IfcPreDefinedColour *value) override;
        /**
         * @param value the IfcPreDefinedCurveFont datatype to visit
         */
        bool visitIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value) override;
        /**
         * @param value the IfcPreDefinedDimensionSymbol datatype to visit
         */
        bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *value) override;
        /**
         * @param value the IfcPreDefinedItem datatype to visit
         */
        bool visitIfcPreDefinedItem(IfcPreDefinedItem *value) override;
        /**
         * @param value the IfcPreDefinedPointMarkerSymbol datatype to visit
         */
        bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *value) override;
        /**
         * @param value the IfcPreDefinedSymbol datatype to visit
         */
        bool visitIfcPreDefinedSymbol(IfcPreDefinedSymbol *value) override;
        /**
         * @param value the IfcPreDefinedTerminatorSymbol datatype to visit
         */
        bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *value) override;
        /**
         * @param value the IfcPreDefinedTextFont datatype to visit
         */
        bool visitIfcPreDefinedTextFont(IfcPreDefinedTextFont *value) override;
        /**
         * @param value the IfcPresentationLayerAssignment datatype to visit
         */
        bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *value) override;
        /**
         * @param value the IfcPresentationLayerWithStyle datatype to visit
         */
        bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *value) override;
        /**
         * @param value the IfcPresentationStyle datatype to visit
         */
        bool visitIfcPresentationStyle(IfcPresentationStyle *value) override;
        /**
         * @param value the IfcPresentationStyleAssignment datatype to visit
         */
        bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *value) override;
        /**
         * @param value the IfcProcedure datatype to visit
         */
        bool visitIfcProcedure(IfcProcedure *value) override;
        /**
         * @param value the IfcProcess datatype to visit
         */
        bool visitIfcProcess(IfcProcess *value) override;
        /**
         * @param value the IfcProduct datatype to visit
         */
        bool visitIfcProduct(IfcProduct *value) override;
        /**
         * @param value the IfcProductDefinitionShape datatype to visit
         */
        bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *value) override;
        /**
         * @param value the IfcProductRepresentation datatype to visit
         */
        bool visitIfcProductRepresentation(IfcProductRepresentation *value) override;
        /**
         * @param value the IfcProductsOfCombustionProperties datatype to visit
         */
        bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *value) override;
        /**
         * @param value the IfcProfileDef datatype to visit
         */
        bool visitIfcProfileDef(IfcProfileDef *value) override;
        /**
         * @param value the IfcProfileProperties datatype to visit
         */
        bool visitIfcProfileProperties(IfcProfileProperties *value) override;
        /**
         * @param value the IfcProject datatype to visit
         */
        bool visitIfcProject(IfcProject *value) override;
        /**
         * @param value the IfcProjectOrder datatype to visit
         */
        bool visitIfcProjectOrder(IfcProjectOrder *value) override;
        /**
         * @param value the IfcProjectOrderRecord datatype to visit
         */
        bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *value) override;
        /**
         * @param value the IfcProjectionCurve datatype to visit
         */
        bool visitIfcProjectionCurve(IfcProjectionCurve *value) override;
        /**
         * @param value the IfcProjectionElement datatype to visit
         */
        bool visitIfcProjectionElement(IfcProjectionElement *value) override;
        /**
         * @param value the IfcProperty datatype to visit
         */
        bool visitIfcProperty(IfcProperty *value) override;
        /**
         * @param value the IfcPropertyBoundedValue datatype to visit
         */
        bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *value) override;
        /**
         * @param value the IfcPropertyConstraintRelationship datatype to visit
         */
        bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *value) override;
        /**
         * @param value the IfcPropertyDefinition datatype to visit
         */
        bool visitIfcPropertyDefinition(IfcPropertyDefinition *value) override;
        /**
         * @param value the IfcPropertyDependencyRelationship datatype to visit
         */
        bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *value) override;
        /**
         * @param value the IfcPropertyEnumeratedValue datatype to visit
         */
        bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *value) override;
        /**
         * @param value the IfcPropertyEnumeration datatype to visit
         */
        bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *value) override;
        /**
         * @param value the IfcPropertyListValue datatype to visit
         */
        bool visitIfcPropertyListValue(IfcPropertyListValue *value) override;
        /**
         * @param value the IfcPropertyReferenceValue datatype to visit
         */
        bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *value) override;
        /**
         * @param value the IfcPropertySet datatype to visit
         */
        bool visitIfcPropertySet(IfcPropertySet *value) override;
        /**
         * @param value the IfcPropertySetDefinition datatype to visit
         */
        bool visitIfcPropertySetDefinition(IfcPropertySetDefinition *value) override;
        /**
         * @param value the IfcPropertySingleValue datatype to visit
         */
        bool visitIfcPropertySingleValue(IfcPropertySingleValue *value) override;
        /**
         * @param value the IfcPropertyTableValue datatype to visit
         */
        bool visitIfcPropertyTableValue(IfcPropertyTableValue *value) override;
        /**
         * @param value the IfcProtectiveDeviceType datatype to visit
         */
        bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *value) override;
        /**
         * @param value the IfcProxy datatype to visit
         */
        bool visitIfcProxy(IfcProxy *value) override;
        /**
         * @param value the IfcPumpType datatype to visit
         */
        bool visitIfcPumpType(IfcPumpType *value) override;
        /**
         * @param value the IfcQuantityArea datatype to visit
         */
        bool visitIfcQuantityArea(IfcQuantityArea *value) override;
        /**
         * @param value the IfcQuantityCount datatype to visit
         */
        bool visitIfcQuantityCount(IfcQuantityCount *value) override;
        /**
         * @param value the IfcQuantityLength datatype to visit
         */
        bool visitIfcQuantityLength(IfcQuantityLength *value) override;
        /**
         * @param value the IfcQuantityTime datatype to visit
         */
        bool visitIfcQuantityTime(IfcQuantityTime *value) override;
        /**
         * @param value the IfcQuantityVolume datatype to visit
         */
        bool visitIfcQuantityVolume(IfcQuantityVolume *value) override;
        /**
         * @param value the IfcQuantityWeight datatype to visit
         */
        bool visitIfcQuantityWeight(IfcQuantityWeight *value) override;
        /**
         * @param value the IfcRadiusDimension datatype to visit
         */
        bool visitIfcRadiusDimension(IfcRadiusDimension *value) override;
        /**
         * @param value the IfcRailing datatype to visit
         */
        bool visitIfcRailing(IfcRailing *value) override;
        /**
         * @param value the IfcRailingType datatype to visit
         */
        bool visitIfcRailingType(IfcRailingType *value) override;
        /**
         * @param value the IfcRamp datatype to visit
         */
        bool visitIfcRamp(IfcRamp *value) override;
        /**
         * @param value the IfcRampFlight datatype to visit
         */
        bool visitIfcRampFlight(IfcRampFlight *value) override;
        /**
         * @param value the IfcRampFlightType datatype to visit
         */
        bool visitIfcRampFlightType(IfcRampFlightType *value) override;
        /**
         * @param value the IfcRationalBezierCurve datatype to visit
         */
        bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *value) override;
        /**
         * @param value the IfcRectangleHollowProfileDef datatype to visit
         */
        bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *value) override;
        /**
         * @param value the IfcRectangleProfileDef datatype to visit
         */
        bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *value) override;
        /**
         * @param value the IfcRectangularPyramid datatype to visit
         */
        bool visitIfcRectangularPyramid(IfcRectangularPyramid *value) override;
        /**
         * @param value the IfcRectangularTrimmedSurface datatype to visit
         */
        bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *value) override;
        /**
         * @param value the IfcReferencesValueDocument datatype to visit
         */
        bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *value) override;
        /**
         * @param value the IfcRegularTimeSeries datatype to visit
         */
        bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *value) override;
        /**
         * @param value the IfcReinforcementBarProperties datatype to visit
         */
        bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *value) override;
        /**
         * @param value the IfcReinforcementDefinitionProperties datatype to visit
         */
        bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *value) override;
        /**
         * @param value the IfcReinforcingBar datatype to visit
         */
        bool visitIfcReinforcingBar(IfcReinforcingBar *value) override;
        /**
         * @param value the IfcReinforcingElement datatype to visit
         */
        bool visitIfcReinforcingElement(IfcReinforcingElement *value) override;
        /**
         * @param value the IfcReinforcingMesh datatype to visit
         */
        bool visitIfcReinforcingMesh(IfcReinforcingMesh *value) override;
        /**
         * @param value the IfcRelAggregates datatype to visit
         */
        bool visitIfcRelAggregates(IfcRelAggregates *value) override;
        /**
         * @param value the IfcRelAssigns datatype to visit
         */
        bool visitIfcRelAssigns(IfcRelAssigns *value) override;
        /**
         * @param value the IfcRelAssignsTasks datatype to visit
         */
        bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *value) override;
        /**
         * @param value the IfcRelAssignsToActor datatype to visit
         */
        bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *value) override;
        /**
         * @param value the IfcRelAssignsToControl datatype to visit
         */
        bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *value) override;
        /**
         * @param value the IfcRelAssignsToGroup datatype to visit
         */
        bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *value) override;
        /**
         * @param value the IfcRelAssignsToProcess datatype to visit
         */
        bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *value) override;
        /**
         * @param value the IfcRelAssignsToProduct datatype to visit
         */
        bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *value) override;
        /**
         * @param value the IfcRelAssignsToProjectOrder datatype to visit
         */
        bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *value) override;
        /**
         * @param value the IfcRelAssignsToResource datatype to visit
         */
        bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *value) override;
        /**
         * @param value the IfcRelAssociates datatype to visit
         */
        bool visitIfcRelAssociates(IfcRelAssociates *value) override;
        /**
         * @param value the IfcRelAssociatesAppliedValue datatype to visit
         */
        bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *value) override;
        /**
         * @param value the IfcRelAssociatesApproval datatype to visit
         */
        bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *value) override;
        /**
         * @param value the IfcRelAssociatesClassification datatype to visit
         */
        bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *value) override;
        /**
         * @param value the IfcRelAssociatesConstraint datatype to visit
         */
        bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *value) override;
        /**
         * @param value the IfcRelAssociatesDocument datatype to visit
         */
        bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *value) override;
        /**
         * @param value the IfcRelAssociatesLibrary datatype to visit
         */
        bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *value) override;
        /**
         * @param value the IfcRelAssociatesMaterial datatype to visit
         */
        bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *value) override;
        /**
         * @param value the IfcRelAssociatesProfileProperties datatype to visit
         */
        bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *value) override;
        /**
         * @param value the IfcRelConnects datatype to visit
         */
        bool visitIfcRelConnects(IfcRelConnects *value) override;
        /**
         * @param value the IfcRelConnectsElements datatype to visit
         */
        bool visitIfcRelConnectsElements(IfcRelConnectsElements *value) override;
        /**
         * @param value the IfcRelConnectsPathElements datatype to visit
         */
        bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *value) override;
        /**
         * @param value the IfcRelConnectsPortToElement datatype to visit
         */
        bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *value) override;
        /**
         * @param value the IfcRelConnectsPorts datatype to visit
         */
        bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *value) override;
        /**
         * @param value the IfcRelConnectsStructuralActivity datatype to visit
         */
        bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *value) override;
        /**
         * @param value the IfcRelConnectsStructuralElement datatype to visit
         */
        bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *value) override;
        /**
         * @param value the IfcRelConnectsStructuralMember datatype to visit
         */
        bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *value) override;
        /**
         * @param value the IfcRelConnectsWithEccentricity datatype to visit
         */
        bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *value) override;
        /**
         * @param value the IfcRelConnectsWithRealizingElements datatype to visit
         */
        bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *value) override;
        /**
         * @param value the IfcRelContainedInSpatialStructure datatype to visit
         */
        bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *value) override;
        /**
         * @param value the IfcRelCoversBldgElements datatype to visit
         */
        bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *value) override;
        /**
         * @param value the IfcRelCoversSpaces datatype to visit
         */
        bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *value) override;
        /**
         * @param value the IfcRelDecomposes datatype to visit
         */
        bool visitIfcRelDecomposes(IfcRelDecomposes *value) override;
        /**
         * @param value the IfcRelDefines datatype to visit
         */
        bool visitIfcRelDefines(IfcRelDefines *value) override;
        /**
         * @param value the IfcRelDefinesByProperties datatype to visit
         */
        bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *value) override;
        /**
         * @param value the IfcRelDefinesByType datatype to visit
         */
        bool visitIfcRelDefinesByType(IfcRelDefinesByType *value) override;
        /**
         * @param value the IfcRelFillsElement datatype to visit
         */
        bool visitIfcRelFillsElement(IfcRelFillsElement *value) override;
        /**
         * @param value the IfcRelFlowControlElements datatype to visit
         */
        bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *value) override;
        /**
         * @param value the IfcRelInteractionRequirements datatype to visit
         */
        bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *value) override;
        /**
         * @param value the IfcRelNests datatype to visit
         */
        bool visitIfcRelNests(IfcRelNests *value) override;
        /**
         * @param value the IfcRelOccupiesSpaces datatype to visit
         */
        bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *value) override;
        /**
         * @param value the IfcRelOverridesProperties datatype to visit
         */
        bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *value) override;
        /**
         * @param value the IfcRelProjectsElement datatype to visit
         */
        bool visitIfcRelProjectsElement(IfcRelProjectsElement *value) override;
        /**
         * @param value the IfcRelReferencedInSpatialStructure datatype to visit
         */
        bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *value) override;
        /**
         * @param value the IfcRelSchedulesCostItems datatype to visit
         */
        bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *value) override;
        /**
         * @param value the IfcRelSequence datatype to visit
         */
        bool visitIfcRelSequence(IfcRelSequence *value) override;
        /**
         * @param value the IfcRelServicesBuildings datatype to visit
         */
        bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *value) override;
        /**
         * @param value the IfcRelSpaceBoundary datatype to visit
         */
        bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *value) override;
        /**
         * @param value the IfcRelVoidsElement datatype to visit
         */
        bool visitIfcRelVoidsElement(IfcRelVoidsElement *value) override;
        /**
         * @param value the IfcRelationship datatype to visit
         */
        bool visitIfcRelationship(IfcRelationship *value) override;
        /**
         * @param value the IfcRelaxation datatype to visit
         */
        bool visitIfcRelaxation(IfcRelaxation *value) override;
        /**
         * @param value the IfcRepresentation datatype to visit
         */
        bool visitIfcRepresentation(IfcRepresentation *value) override;
        /**
         * @param value the IfcRepresentationContext datatype to visit
         */
        bool visitIfcRepresentationContext(IfcRepresentationContext *value) override;
        /**
         * @param value the IfcRepresentationItem datatype to visit
         */
        bool visitIfcRepresentationItem(IfcRepresentationItem *value) override;
        /**
         * @param value the IfcRepresentationMap datatype to visit
         */
        bool visitIfcRepresentationMap(IfcRepresentationMap *value) override;
        /**
         * @param value the IfcResource datatype to visit
         */
        bool visitIfcResource(IfcResource *value) override;
        /**
         * @param value the IfcRevolvedAreaSolid datatype to visit
         */
        bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *value) override;
        /**
         * @param value the IfcRibPlateProfileProperties datatype to visit
         */
        bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *value) override;
        /**
         * @param value the IfcRightCircularCone datatype to visit
         */
        bool visitIfcRightCircularCone(IfcRightCircularCone *value) override;
        /**
         * @param value the IfcRightCircularCylinder datatype to visit
         */
        bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *value) override;
        /**
         * @param value the IfcRoof datatype to visit
         */
        bool visitIfcRoof(IfcRoof *value) override;
        /**
         * @param value the IfcRoot datatype to visit
         */
        bool visitIfcRoot(IfcRoot *value) override;
        /**
         * @param value the IfcRoundedEdgeFeature datatype to visit
         */
        bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *value) override;
        /**
         * @param value the IfcRoundedRectangleProfileDef datatype to visit
         */
        bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *value) override;
        /**
         * @param value the IfcSIUnit datatype to visit
         */
        bool visitIfcSIUnit(IfcSIUnit *value) override;
        /**
         * @param value the IfcSanitaryTerminalType datatype to visit
         */
        bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *value) override;
        /**
         * @param value the IfcScheduleTimeControl datatype to visit
         */
        bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *value) override;
        /**
         * @param value the IfcSectionProperties datatype to visit
         */
        bool visitIfcSectionProperties(IfcSectionProperties *value) override;
        /**
         * @param value the IfcSectionReinforcementProperties datatype to visit
         */
        bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *value) override;
        /**
         * @param value the IfcSectionedSpine datatype to visit
         */
        bool visitIfcSectionedSpine(IfcSectionedSpine *value) override;
        /**
         * @param value the IfcSensorType datatype to visit
         */
        bool visitIfcSensorType(IfcSensorType *value) override;
        /**
         * @param value the IfcServiceLife datatype to visit
         */
        bool visitIfcServiceLife(IfcServiceLife *value) override;
        /**
         * @param value the IfcServiceLifeFactor datatype to visit
         */
        bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *value) override;
        /**
         * @param value the IfcShapeAspect datatype to visit
         */
        bool visitIfcShapeAspect(IfcShapeAspect *value) override;
        /**
         * @param value the IfcShapeModel datatype to visit
         */
        bool visitIfcShapeModel(IfcShapeModel *value) override;
        /**
         * @param value the IfcShapeRepresentation datatype to visit
         */
        bool visitIfcShapeRepresentation(IfcShapeRepresentation *value) override;
        /**
         * @param value the IfcShellBasedSurfaceModel datatype to visit
         */
        bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *value) override;
        /**
         * @param value the IfcSimpleProperty datatype to visit
         */
        bool visitIfcSimpleProperty(IfcSimpleProperty *value) override;
        /**
         * @param value the IfcSite datatype to visit
         */
        bool visitIfcSite(IfcSite *value) override;
        /**
         * @param value the IfcSlab datatype to visit
         */
        bool visitIfcSlab(IfcSlab *value) override;
        /**
         * @param value the IfcSlabType datatype to visit
         */
        bool visitIfcSlabType(IfcSlabType *value) override;
        /**
         * @param value the IfcSlippageConnectionCondition datatype to visit
         */
        bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *value) override;
        /**
         * @param value the IfcSolidModel datatype to visit
         */
        bool visitIfcSolidModel(IfcSolidModel *value) override;
        /**
         * @param value the IfcSoundProperties datatype to visit
         */
        bool visitIfcSoundProperties(IfcSoundProperties *value) override;
        /**
         * @param value the IfcSoundValue datatype to visit
         */
        bool visitIfcSoundValue(IfcSoundValue *value) override;
        /**
         * @param value the IfcSpace datatype to visit
         */
        bool visitIfcSpace(IfcSpace *value) override;
        /**
         * @param value the IfcSpaceHeaterType datatype to visit
         */
        bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *value) override;
        /**
         * @param value the IfcSpaceProgram datatype to visit
         */
        bool visitIfcSpaceProgram(IfcSpaceProgram *value) override;
        /**
         * @param value the IfcSpaceThermalLoadProperties datatype to visit
         */
        bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *value) override;
        /**
         * @param value the IfcSpaceType datatype to visit
         */
        bool visitIfcSpaceType(IfcSpaceType *value) override;
        /**
         * @param value the IfcSpatialStructureElement datatype to visit
         */
        bool visitIfcSpatialStructureElement(IfcSpatialStructureElement *value) override;
        /**
         * @param value the IfcSpatialStructureElementType datatype to visit
         */
        bool visitIfcSpatialStructureElementType(IfcSpatialStructureElementType *value) override;
        /**
         * @param value the IfcSphere datatype to visit
         */
        bool visitIfcSphere(IfcSphere *value) override;
        /**
         * @param value the IfcStackTerminalType datatype to visit
         */
        bool visitIfcStackTerminalType(IfcStackTerminalType *value) override;
        /**
         * @param value the IfcStair datatype to visit
         */
        bool visitIfcStair(IfcStair *value) override;
        /**
         * @param value the IfcStairFlight datatype to visit
         */
        bool visitIfcStairFlight(IfcStairFlight *value) override;
        /**
         * @param value the IfcStairFlightType datatype to visit
         */
        bool visitIfcStairFlightType(IfcStairFlightType *value) override;
        /**
         * @param value the IfcStructuralAction datatype to visit
         */
        bool visitIfcStructuralAction(IfcStructuralAction *value) override;
        /**
         * @param value the IfcStructuralActivity datatype to visit
         */
        bool visitIfcStructuralActivity(IfcStructuralActivity *value) override;
        /**
         * @param value the IfcStructuralAnalysisModel datatype to visit
         */
        bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *value) override;
        /**
         * @param value the IfcStructuralConnection datatype to visit
         */
        bool visitIfcStructuralConnection(IfcStructuralConnection *value) override;
        /**
         * @param value the IfcStructuralConnectionCondition datatype to visit
         */
        bool visitIfcStructuralConnectionCondition(IfcStructuralConnectionCondition *value) override;
        /**
         * @param value the IfcStructuralCurveConnection datatype to visit
         */
        bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *value) override;
        /**
         * @param value the IfcStructuralCurveMember datatype to visit
         */
        bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *value) override;
        /**
         * @param value the IfcStructuralCurveMemberVarying datatype to visit
         */
        bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *value) override;
        /**
         * @param value the IfcStructuralItem datatype to visit
         */
        bool visitIfcStructuralItem(IfcStructuralItem *value) override;
        /**
         * @param value the IfcStructuralLinearAction datatype to visit
         */
        bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *value) override;
        /**
         * @param value the IfcStructuralLinearActionVarying datatype to visit
         */
        bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *value) override;
        /**
         * @param value the IfcStructuralLoad datatype to visit
         */
        bool visitIfcStructuralLoad(IfcStructuralLoad *value) override;
        /**
         * @param value the IfcStructuralLoadGroup datatype to visit
         */
        bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *value) override;
        /**
         * @param value the IfcStructuralLoadLinearForce datatype to visit
         */
        bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *value) override;
        /**
         * @param value the IfcStructuralLoadPlanarForce datatype to visit
         */
        bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *value) override;
        /**
         * @param value the IfcStructuralLoadSingleDisplacement datatype to visit
         */
        bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *value) override;
        /**
         * @param value the IfcStructuralLoadSingleDisplacementDistortion datatype to visit
         */
        bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *value) override;
        /**
         * @param value the IfcStructuralLoadSingleForce datatype to visit
         */
        bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *value) override;
        /**
         * @param value the IfcStructuralLoadSingleForceWarping datatype to visit
         */
        bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *value) override;
        /**
         * @param value the IfcStructuralLoadStatic datatype to visit
         */
        bool visitIfcStructuralLoadStatic(IfcStructuralLoadStatic *value) override;
        /**
         * @param value the IfcStructuralLoadTemperature datatype to visit
         */
        bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *value) override;
        /**
         * @param value the IfcStructuralMember datatype to visit
         */
        bool visitIfcStructuralMember(IfcStructuralMember *value) override;
        /**
         * @param value the IfcStructuralPlanarAction datatype to visit
         */
        bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *value) override;
        /**
         * @param value the IfcStructuralPlanarActionVarying datatype to visit
         */
        bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *value) override;
        /**
         * @param value the IfcStructuralPointAction datatype to visit
         */
        bool visitIfcStructuralPointAction(IfcStructuralPointAction *value) override;
        /**
         * @param value the IfcStructuralPointConnection datatype to visit
         */
        bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *value) override;
        /**
         * @param value the IfcStructuralPointReaction datatype to visit
         */
        bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *value) override;
        /**
         * @param value the IfcStructuralProfileProperties datatype to visit
         */
        bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *value) override;
        /**
         * @param value the IfcStructuralReaction datatype to visit
         */
        bool visitIfcStructuralReaction(IfcStructuralReaction *value) override;
        /**
         * @param value the IfcStructuralResultGroup datatype to visit
         */
        bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *value) override;
        /**
         * @param value the IfcStructuralSteelProfileProperties datatype to visit
         */
        bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *value) override;
        /**
         * @param value the IfcStructuralSurfaceConnection datatype to visit
         */
        bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *value) override;
        /**
         * @param value the IfcStructuralSurfaceMember datatype to visit
         */
        bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *value) override;
        /**
         * @param value the IfcStructuralSurfaceMemberVarying datatype to visit
         */
        bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *value) override;
        /**
         * @param value the IfcStructuredDimensionCallout datatype to visit
         */
        bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *value) override;
        /**
         * @param value the IfcStyleModel datatype to visit
         */
        bool visitIfcStyleModel(IfcStyleModel *value) override;
        /**
         * @param value the IfcStyledItem datatype to visit
         */
        bool visitIfcStyledItem(IfcStyledItem *value) override;
        /**
         * @param value the IfcStyledRepresentation datatype to visit
         */
        bool visitIfcStyledRepresentation(IfcStyledRepresentation *value) override;
        /**
         * @param value the IfcSubContractResource datatype to visit
         */
        bool visitIfcSubContractResource(IfcSubContractResource *value) override;
        /**
         * @param value the IfcSubedge datatype to visit
         */
        bool visitIfcSubedge(IfcSubedge *value) override;
        /**
         * @param value the IfcSurface datatype to visit
         */
        bool visitIfcSurface(IfcSurface *value) override;
        /**
         * @param value the IfcSurfaceCurveSweptAreaSolid datatype to visit
         */
        bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *value) override;
        /**
         * @param value the IfcSurfaceOfLinearExtrusion datatype to visit
         */
        bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *value) override;
        /**
         * @param value the IfcSurfaceOfRevolution datatype to visit
         */
        bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *value) override;
        /**
         * @param value the IfcSurfaceStyle datatype to visit
         */
        bool visitIfcSurfaceStyle(IfcSurfaceStyle *value) override;
        /**
         * @param value the IfcSurfaceStyleLighting datatype to visit
         */
        bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value) override;
        /**
         * @param value the IfcSurfaceStyleRefraction datatype to visit
         */
        bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value) override;
        /**
         * @param value the IfcSurfaceStyleRendering datatype to visit
         */
        bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *value) override;
        /**
         * @param value the IfcSurfaceStyleShading datatype to visit
         */
        bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *value) override;
        /**
         * @param value the IfcSurfaceStyleWithTextures datatype to visit
         */
        bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value) override;
        /**
         * @param value the IfcSurfaceTexture datatype to visit
         */
        bool visitIfcSurfaceTexture(IfcSurfaceTexture *value) override;
        /**
         * @param value the IfcSweptAreaSolid datatype to visit
         */
        bool visitIfcSweptAreaSolid(IfcSweptAreaSolid *value) override;
        /**
         * @param value the IfcSweptDiskSolid datatype to visit
         */
        bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *value) override;
        /**
         * @param value the IfcSweptSurface datatype to visit
         */
        bool visitIfcSweptSurface(IfcSweptSurface *value) override;
        /**
         * @param value the IfcSwitchingDeviceType datatype to visit
         */
        bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *value) override;
        /**
         * @param value the IfcSymbolStyle datatype to visit
         */
        bool visitIfcSymbolStyle(IfcSymbolStyle *value) override;
        /**
         * @param value the IfcSystem datatype to visit
         */
        bool visitIfcSystem(IfcSystem *value) override;
        /**
         * @param value the IfcSystemFurnitureElementType datatype to visit
         */
        bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *value) override;
        /**
         * @param value the IfcTShapeProfileDef datatype to visit
         */
        bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *value) override;
        /**
         * @param value the IfcTable datatype to visit
         */
        bool visitIfcTable(IfcTable *value) override;
        /**
         * @param value the IfcTableRow datatype to visit
         */
        bool visitIfcTableRow(IfcTableRow *value) override;
        /**
         * @param value the IfcTankType datatype to visit
         */
        bool visitIfcTankType(IfcTankType *value) override;
        /**
         * @param value the IfcTask datatype to visit
         */
        bool visitIfcTask(IfcTask *value) override;
        /**
         * @param value the IfcTelecomAddress datatype to visit
         */
        bool visitIfcTelecomAddress(IfcTelecomAddress *value) override;
        /**
         * @param value the IfcTendon datatype to visit
         */
        bool visitIfcTendon(IfcTendon *value) override;
        /**
         * @param value the IfcTendonAnchor datatype to visit
         */
        bool visitIfcTendonAnchor(IfcTendonAnchor *value) override;
        /**
         * @param value the IfcTerminatorSymbol datatype to visit
         */
        bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *value) override;
        /**
         * @param value the IfcTextLiteral datatype to visit
         */
        bool visitIfcTextLiteral(IfcTextLiteral *value) override;
        /**
         * @param value the IfcTextLiteralWithExtent datatype to visit
         */
        bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *value) override;
        /**
         * @param value the IfcTextStyle datatype to visit
         */
        bool visitIfcTextStyle(IfcTextStyle *value) override;
        /**
         * @param value the IfcTextStyleFontModel datatype to visit
         */
        bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *value) override;
        /**
         * @param value the IfcTextStyleForDefinedFont datatype to visit
         */
        bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *value) override;
        /**
         * @param value the IfcTextStyleTextModel datatype to visit
         */
        bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *value) override;
        /**
         * @param value the IfcTextStyleWithBoxCharacteristics datatype to visit
         */
        bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value) override;
        /**
         * @param value the IfcTextureCoordinate datatype to visit
         */
        bool visitIfcTextureCoordinate(IfcTextureCoordinate *value) override;
        /**
         * @param value the IfcTextureCoordinateGenerator datatype to visit
         */
        bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *value) override;
        /**
         * @param value the IfcTextureMap datatype to visit
         */
        bool visitIfcTextureMap(IfcTextureMap *value) override;
        /**
         * @param value the IfcTextureVertex datatype to visit
         */
        bool visitIfcTextureVertex(IfcTextureVertex *value) override;
        /**
         * @param value the IfcThermalMaterialProperties datatype to visit
         */
        bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *value) override;
        /**
         * @param value the IfcTimeSeries datatype to visit
         */
        bool visitIfcTimeSeries(IfcTimeSeries *value) override;
        /**
         * @param value the IfcTimeSeriesReferenceRelationship datatype to visit
         */
        bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *value) override;
        /**
         * @param value the IfcTimeSeriesSchedule datatype to visit
         */
        bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *value) override;
        /**
         * @param value the IfcTimeSeriesValue datatype to visit
         */
        bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *value) override;
        /**
         * @param value the IfcTopologicalRepresentationItem datatype to visit
         */
        bool visitIfcTopologicalRepresentationItem(IfcTopologicalRepresentationItem *value) override;
        /**
         * @param value the IfcTopologyRepresentation datatype to visit
         */
        bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *value) override;
        /**
         * @param value the IfcTransformerType datatype to visit
         */
        bool visitIfcTransformerType(IfcTransformerType *value) override;
        /**
         * @param value the IfcTransportElement datatype to visit
         */
        bool visitIfcTransportElement(IfcTransportElement *value) override;
        /**
         * @param value the IfcTransportElementType datatype to visit
         */
        bool visitIfcTransportElementType(IfcTransportElementType *value) override;
        /**
         * @param value the IfcTrapeziumProfileDef datatype to visit
         */
        bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *value) override;
        /**
         * @param value the IfcTrimmedCurve datatype to visit
         */
        bool visitIfcTrimmedCurve(IfcTrimmedCurve *value) override;
        /**
         * @param value the IfcTubeBundleType datatype to visit
         */
        bool visitIfcTubeBundleType(IfcTubeBundleType *value) override;
        /**
         * @param value the IfcTwoDirectionRepeatFactor datatype to visit
         */
        bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *value) override;
        /**
         * @param value the IfcTypeObject datatype to visit
         */
        bool visitIfcTypeObject(IfcTypeObject *value) override;
        /**
         * @param value the IfcTypeProduct datatype to visit
         */
        bool visitIfcTypeProduct(IfcTypeProduct *value) override;
        /**
         * @param value the IfcUShapeProfileDef datatype to visit
         */
        bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *value) override;
        /**
         * @param value the IfcUnitAssignment datatype to visit
         */
        bool visitIfcUnitAssignment(IfcUnitAssignment *value) override;
        /**
         * @param value the IfcUnitaryEquipmentType datatype to visit
         */
        bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *value) override;
        /**
         * @param value the IfcValveType datatype to visit
         */
        bool visitIfcValveType(IfcValveType *value) override;
        /**
         * @param value the IfcVector datatype to visit
         */
        bool visitIfcVector(IfcVector *value) override;
        /**
         * @param value the IfcVertex datatype to visit
         */
        bool visitIfcVertex(IfcVertex *value) override;
        /**
         * @param value the IfcVertexBasedTextureMap datatype to visit
         */
        bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *value) override;
        /**
         * @param value the IfcVertexLoop datatype to visit
         */
        bool visitIfcVertexLoop(IfcVertexLoop *value) override;
        /**
         * @param value the IfcVertexPoint datatype to visit
         */
        bool visitIfcVertexPoint(IfcVertexPoint *value) override;
        /**
         * @param value the IfcVibrationIsolatorType datatype to visit
         */
        bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *value) override;
        /**
         * @param value the IfcVirtualElement datatype to visit
         */
        bool visitIfcVirtualElement(IfcVirtualElement *value) override;
        /**
         * @param value the IfcVirtualGridIntersection datatype to visit
         */
        bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *value) override;
        /**
         * @param value the IfcWall datatype to visit
         */
        bool visitIfcWall(IfcWall *value) override;
        /**
         * @param value the IfcWallStandardCase datatype to visit
         */
        bool visitIfcWallStandardCase(IfcWallStandardCase *value) override;
        /**
         * @param value the IfcWallType datatype to visit
         */
        bool visitIfcWallType(IfcWallType *value) override;
        /**
         * @param value the IfcWasteTerminalType datatype to visit
         */
        bool visitIfcWasteTerminalType(IfcWasteTerminalType *value) override;
        /**
         * @param value the IfcWaterProperties datatype to visit
         */
        bool visitIfcWaterProperties(IfcWaterProperties *value) override;
        /**
         * @param value the IfcWindow datatype to visit
         */
        bool visitIfcWindow(IfcWindow *value) override;
        /**
         * @param value the IfcWindowLiningProperties datatype to visit
         */
        bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *value) override;
        /**
         * @param value the IfcWindowPanelProperties datatype to visit
         */
        bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *value) override;
        /**
         * @param value the IfcWindowStyle datatype to visit
         */
        bool visitIfcWindowStyle(IfcWindowStyle *value) override;
        /**
         * @param value the IfcWorkControl datatype to visit
         */
        bool visitIfcWorkControl(IfcWorkControl *value) override;
        /**
         * @param value the IfcWorkPlan datatype to visit
         */
        bool visitIfcWorkPlan(IfcWorkPlan *value) override;
        /**
         * @param value the IfcWorkSchedule datatype to visit
         */
        bool visitIfcWorkSchedule(IfcWorkSchedule *value) override;
        /**
         * @param value the IfcZShapeProfileDef datatype to visit
         */
        bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *value) override;
        /**
         * @param value the IfcZone datatype to visit
         */
        bool visitIfcZone(IfcZone *value) override;

    };

}

#endif // IFC2X3_FALSEVISITOR_H
