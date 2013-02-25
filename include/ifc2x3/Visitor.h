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

#ifndef IFC2X3_VISITOR_H
#define IFC2X3_VISITOR_H

#include <ifc2x3/Export.h>

#include <Step/BaseVisitor.h>

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
     * Base Visitor (pure virtual) fot this generated schema.
     * 
     */
    class IFC2X3_EXPORT Visitor : public Step::BaseVisitor {
    public:
        /**
         */
        Visitor();
        virtual ~Visitor();
        /**
         * Visits the IfcActorSelect datatype.
         * 
         * @param value the IfcActorSelect datatype to visit
         */
        virtual bool visitIfcActorSelect(IfcActorSelect *value) = 0;
        /**
         * Visits the IfcAppliedValueSelect datatype.
         * 
         * @param value the IfcAppliedValueSelect datatype to visit
         */
        virtual bool visitIfcAppliedValueSelect(IfcAppliedValueSelect *value) = 0;
        /**
         * Visits the IfcAxis2Placement datatype.
         * 
         * @param value the IfcAxis2Placement datatype to visit
         */
        virtual bool visitIfcAxis2Placement(IfcAxis2Placement *value) = 0;
        /**
         * Visits the IfcBooleanOperand datatype.
         * 
         * @param value the IfcBooleanOperand datatype to visit
         */
        virtual bool visitIfcBooleanOperand(IfcBooleanOperand *value) = 0;
        /**
         * Visits the IfcCharacterStyleSelect datatype.
         * 
         * @param value the IfcCharacterStyleSelect datatype to visit
         */
        virtual bool visitIfcCharacterStyleSelect(IfcCharacterStyleSelect *value) = 0;
        /**
         * Visits the IfcClassificationNotationSelect datatype.
         * 
         * @param value the IfcClassificationNotationSelect datatype to visit
         */
        virtual bool visitIfcClassificationNotationSelect(IfcClassificationNotationSelect *value) = 0;
        /**
         * Visits the IfcColour datatype.
         * 
         * @param value the IfcColour datatype to visit
         */
        virtual bool visitIfcColour(IfcColour *value) = 0;
        /**
         * Visits the IfcColourOrFactor datatype.
         * 
         * @param value the IfcColourOrFactor datatype to visit
         */
        virtual bool visitIfcColourOrFactor(IfcColourOrFactor *value) = 0;
        /**
         * Visits the IfcConditionCriterionSelect datatype.
         * 
         * @param value the IfcConditionCriterionSelect datatype to visit
         */
        virtual bool visitIfcConditionCriterionSelect(IfcConditionCriterionSelect *value) = 0;
        /**
         * Visits the IfcCsgSelect datatype.
         * 
         * @param value the IfcCsgSelect datatype to visit
         */
        virtual bool visitIfcCsgSelect(IfcCsgSelect *value) = 0;
        /**
         * Visits the IfcCurveFontOrScaledCurveFontSelect datatype.
         * 
         * @param value the IfcCurveFontOrScaledCurveFontSelect datatype to visit
         */
        virtual bool visitIfcCurveFontOrScaledCurveFontSelect(IfcCurveFontOrScaledCurveFontSelect *value) = 0;
        /**
         * Visits the IfcCurveOrEdgeCurve datatype.
         * 
         * @param value the IfcCurveOrEdgeCurve datatype to visit
         */
        virtual bool visitIfcCurveOrEdgeCurve(IfcCurveOrEdgeCurve *value) = 0;
        /**
         * Visits the IfcCurveStyleFontSelect datatype.
         * 
         * @param value the IfcCurveStyleFontSelect datatype to visit
         */
        virtual bool visitIfcCurveStyleFontSelect(IfcCurveStyleFontSelect *value) = 0;
        /**
         * Visits the IfcDateTimeSelect datatype.
         * 
         * @param value the IfcDateTimeSelect datatype to visit
         */
        virtual bool visitIfcDateTimeSelect(IfcDateTimeSelect *value) = 0;
        /**
         * Visits the IfcDefinedSymbolSelect datatype.
         * 
         * @param value the IfcDefinedSymbolSelect datatype to visit
         */
        virtual bool visitIfcDefinedSymbolSelect(IfcDefinedSymbolSelect *value) = 0;
        /**
         * Visits the IfcDerivedMeasureValue datatype.
         * 
         * @param value the IfcDerivedMeasureValue datatype to visit
         */
        virtual bool visitIfcDerivedMeasureValue(IfcDerivedMeasureValue *value) = 0;
        /**
         * Visits the IfcDocumentSelect datatype.
         * 
         * @param value the IfcDocumentSelect datatype to visit
         */
        virtual bool visitIfcDocumentSelect(IfcDocumentSelect *value) = 0;
        /**
         * Visits the IfcDraughtingCalloutElement datatype.
         * 
         * @param value the IfcDraughtingCalloutElement datatype to visit
         */
        virtual bool visitIfcDraughtingCalloutElement(IfcDraughtingCalloutElement *value) = 0;
        /**
         * Visits the IfcFillAreaStyleTileShapeSelect datatype.
         * 
         * @param value the IfcFillAreaStyleTileShapeSelect datatype to visit
         */
        virtual bool visitIfcFillAreaStyleTileShapeSelect(IfcFillAreaStyleTileShapeSelect *value) = 0;
        /**
         * Visits the IfcFillStyleSelect datatype.
         * 
         * @param value the IfcFillStyleSelect datatype to visit
         */
        virtual bool visitIfcFillStyleSelect(IfcFillStyleSelect *value) = 0;
        /**
         * Visits the IfcGeometricSetSelect datatype.
         * 
         * @param value the IfcGeometricSetSelect datatype to visit
         */
        virtual bool visitIfcGeometricSetSelect(IfcGeometricSetSelect *value) = 0;
        /**
         * Visits the IfcHatchLineDistanceSelect datatype.
         * 
         * @param value the IfcHatchLineDistanceSelect datatype to visit
         */
        virtual bool visitIfcHatchLineDistanceSelect(IfcHatchLineDistanceSelect *value) = 0;
        /**
         * Visits the IfcLayeredItem datatype.
         * 
         * @param value the IfcLayeredItem datatype to visit
         */
        virtual bool visitIfcLayeredItem(IfcLayeredItem *value) = 0;
        /**
         * Visits the IfcLibrarySelect datatype.
         * 
         * @param value the IfcLibrarySelect datatype to visit
         */
        virtual bool visitIfcLibrarySelect(IfcLibrarySelect *value) = 0;
        /**
         * Visits the IfcLightDistributionDataSourceSelect datatype.
         * 
         * @param value the IfcLightDistributionDataSourceSelect datatype to visit
         */
        virtual bool visitIfcLightDistributionDataSourceSelect(IfcLightDistributionDataSourceSelect *value) = 0;
        /**
         * Visits the IfcMaterialSelect datatype.
         * 
         * @param value the IfcMaterialSelect datatype to visit
         */
        virtual bool visitIfcMaterialSelect(IfcMaterialSelect *value) = 0;
        /**
         * Visits the IfcMeasureValue datatype.
         * 
         * @param value the IfcMeasureValue datatype to visit
         */
        virtual bool visitIfcMeasureValue(IfcMeasureValue *value) = 0;
        /**
         * Visits the IfcMetricValueSelect datatype.
         * 
         * @param value the IfcMetricValueSelect datatype to visit
         */
        virtual bool visitIfcMetricValueSelect(IfcMetricValueSelect *value) = 0;
        /**
         * Visits the IfcObjectReferenceSelect datatype.
         * 
         * @param value the IfcObjectReferenceSelect datatype to visit
         */
        virtual bool visitIfcObjectReferenceSelect(IfcObjectReferenceSelect *value) = 0;
        /**
         * Visits the IfcOrientationSelect datatype.
         * 
         * @param value the IfcOrientationSelect datatype to visit
         */
        virtual bool visitIfcOrientationSelect(IfcOrientationSelect *value) = 0;
        /**
         * Visits the IfcPointOrVertexPoint datatype.
         * 
         * @param value the IfcPointOrVertexPoint datatype to visit
         */
        virtual bool visitIfcPointOrVertexPoint(IfcPointOrVertexPoint *value) = 0;
        /**
         * Visits the IfcPresentationStyleSelect datatype.
         * 
         * @param value the IfcPresentationStyleSelect datatype to visit
         */
        virtual bool visitIfcPresentationStyleSelect(IfcPresentationStyleSelect *value) = 0;
        /**
         * Visits the IfcShell datatype.
         * 
         * @param value the IfcShell datatype to visit
         */
        virtual bool visitIfcShell(IfcShell *value) = 0;
        /**
         * Visits the IfcSimpleValue datatype.
         * 
         * @param value the IfcSimpleValue datatype to visit
         */
        virtual bool visitIfcSimpleValue(IfcSimpleValue *value) = 0;
        /**
         * Visits the IfcSizeSelect datatype.
         * 
         * @param value the IfcSizeSelect datatype to visit
         */
        virtual bool visitIfcSizeSelect(IfcSizeSelect *value) = 0;
        /**
         * Visits the IfcSpecularHighlightSelect datatype.
         * 
         * @param value the IfcSpecularHighlightSelect datatype to visit
         */
        virtual bool visitIfcSpecularHighlightSelect(IfcSpecularHighlightSelect *value) = 0;
        /**
         * Visits the IfcStructuralActivityAssignmentSelect datatype.
         * 
         * @param value the IfcStructuralActivityAssignmentSelect datatype to visit
         */
        virtual bool visitIfcStructuralActivityAssignmentSelect(IfcStructuralActivityAssignmentSelect *value) = 0;
        /**
         * Visits the IfcSurfaceOrFaceSurface datatype.
         * 
         * @param value the IfcSurfaceOrFaceSurface datatype to visit
         */
        virtual bool visitIfcSurfaceOrFaceSurface(IfcSurfaceOrFaceSurface *value) = 0;
        /**
         * Visits the IfcSurfaceStyleElementSelect datatype.
         * 
         * @param value the IfcSurfaceStyleElementSelect datatype to visit
         */
        virtual bool visitIfcSurfaceStyleElementSelect(IfcSurfaceStyleElementSelect *value) = 0;
        /**
         * Visits the IfcSymbolStyleSelect datatype.
         * 
         * @param value the IfcSymbolStyleSelect datatype to visit
         */
        virtual bool visitIfcSymbolStyleSelect(IfcSymbolStyleSelect *value) = 0;
        /**
         * Visits the IfcTextFontSelect datatype.
         * 
         * @param value the IfcTextFontSelect datatype to visit
         */
        virtual bool visitIfcTextFontSelect(IfcTextFontSelect *value) = 0;
        /**
         * Visits the IfcTextStyleSelect datatype.
         * 
         * @param value the IfcTextStyleSelect datatype to visit
         */
        virtual bool visitIfcTextStyleSelect(IfcTextStyleSelect *value) = 0;
        /**
         * Visits the IfcTrimmingSelect datatype.
         * 
         * @param value the IfcTrimmingSelect datatype to visit
         */
        virtual bool visitIfcTrimmingSelect(IfcTrimmingSelect *value) = 0;
        /**
         * Visits the IfcUnit datatype.
         * 
         * @param value the IfcUnit datatype to visit
         */
        virtual bool visitIfcUnit(IfcUnit *value) = 0;
        /**
         * Visits the IfcValue datatype.
         * 
         * @param value the IfcValue datatype to visit
         */
        virtual bool visitIfcValue(IfcValue *value) = 0;
        /**
         * Visits the IfcVectorOrDirection datatype.
         * 
         * @param value the IfcVectorOrDirection datatype to visit
         */
        virtual bool visitIfcVectorOrDirection(IfcVectorOrDirection *value) = 0;
        /**
         * Visits the Ifc2DCompositeCurve datatype.
         * 
         * @param value the Ifc2DCompositeCurve datatype to visit
         */
        virtual bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *value) = 0;
        /**
         * Visits the IfcActionRequest datatype.
         * 
         * @param value the IfcActionRequest datatype to visit
         */
        virtual bool visitIfcActionRequest(IfcActionRequest *value) = 0;
        /**
         * Visits the IfcActor datatype.
         * 
         * @param value the IfcActor datatype to visit
         */
        virtual bool visitIfcActor(IfcActor *value) = 0;
        /**
         * Visits the IfcActorRole datatype.
         * 
         * @param value the IfcActorRole datatype to visit
         */
        virtual bool visitIfcActorRole(IfcActorRole *value) = 0;
        /**
         * Visits the IfcActuatorType datatype.
         * 
         * @param value the IfcActuatorType datatype to visit
         */
        virtual bool visitIfcActuatorType(IfcActuatorType *value) = 0;
        /**
         * Visits the IfcAddress datatype.
         * 
         * @param value the IfcAddress datatype to visit
         */
        virtual bool visitIfcAddress(IfcAddress *value) = 0;
        /**
         * Visits the IfcAirTerminalBoxType datatype.
         * 
         * @param value the IfcAirTerminalBoxType datatype to visit
         */
        virtual bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *value) = 0;
        /**
         * Visits the IfcAirTerminalType datatype.
         * 
         * @param value the IfcAirTerminalType datatype to visit
         */
        virtual bool visitIfcAirTerminalType(IfcAirTerminalType *value) = 0;
        /**
         * Visits the IfcAirToAirHeatRecoveryType datatype.
         * 
         * @param value the IfcAirToAirHeatRecoveryType datatype to visit
         */
        virtual bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *value) = 0;
        /**
         * Visits the IfcAlarmType datatype.
         * 
         * @param value the IfcAlarmType datatype to visit
         */
        virtual bool visitIfcAlarmType(IfcAlarmType *value) = 0;
        /**
         * Visits the IfcAngularDimension datatype.
         * 
         * @param value the IfcAngularDimension datatype to visit
         */
        virtual bool visitIfcAngularDimension(IfcAngularDimension *value) = 0;
        /**
         * Visits the IfcAnnotation datatype.
         * 
         * @param value the IfcAnnotation datatype to visit
         */
        virtual bool visitIfcAnnotation(IfcAnnotation *value) = 0;
        /**
         * Visits the IfcAnnotationCurveOccurrence datatype.
         * 
         * @param value the IfcAnnotationCurveOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value) = 0;
        /**
         * Visits the IfcAnnotationFillArea datatype.
         * 
         * @param value the IfcAnnotationFillArea datatype to visit
         */
        virtual bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *value) = 0;
        /**
         * Visits the IfcAnnotationFillAreaOccurrence datatype.
         * 
         * @param value the IfcAnnotationFillAreaOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *value) = 0;
        /**
         * Visits the IfcAnnotationOccurrence datatype.
         * 
         * @param value the IfcAnnotationOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationOccurrence(IfcAnnotationOccurrence *value) = 0;
        /**
         * Visits the IfcAnnotationSurface datatype.
         * 
         * @param value the IfcAnnotationSurface datatype to visit
         */
        virtual bool visitIfcAnnotationSurface(IfcAnnotationSurface *value) = 0;
        /**
         * Visits the IfcAnnotationSurfaceOccurrence datatype.
         * 
         * @param value the IfcAnnotationSurfaceOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *value) = 0;
        /**
         * Visits the IfcAnnotationSymbolOccurrence datatype.
         * 
         * @param value the IfcAnnotationSymbolOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value) = 0;
        /**
         * Visits the IfcAnnotationTextOccurrence datatype.
         * 
         * @param value the IfcAnnotationTextOccurrence datatype to visit
         */
        virtual bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value) = 0;
        /**
         * Visits the IfcApplication datatype.
         * 
         * @param value the IfcApplication datatype to visit
         */
        virtual bool visitIfcApplication(IfcApplication *value) = 0;
        /**
         * Visits the IfcAppliedValue datatype.
         * 
         * @param value the IfcAppliedValue datatype to visit
         */
        virtual bool visitIfcAppliedValue(IfcAppliedValue *value) = 0;
        /**
         * Visits the IfcAppliedValueRelationship datatype.
         * 
         * @param value the IfcAppliedValueRelationship datatype to visit
         */
        virtual bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *value) = 0;
        /**
         * Visits the IfcApproval datatype.
         * 
         * @param value the IfcApproval datatype to visit
         */
        virtual bool visitIfcApproval(IfcApproval *value) = 0;
        /**
         * Visits the IfcApprovalActorRelationship datatype.
         * 
         * @param value the IfcApprovalActorRelationship datatype to visit
         */
        virtual bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *value) = 0;
        /**
         * Visits the IfcApprovalPropertyRelationship datatype.
         * 
         * @param value the IfcApprovalPropertyRelationship datatype to visit
         */
        virtual bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *value) = 0;
        /**
         * Visits the IfcApprovalRelationship datatype.
         * 
         * @param value the IfcApprovalRelationship datatype to visit
         */
        virtual bool visitIfcApprovalRelationship(IfcApprovalRelationship *value) = 0;
        /**
         * Visits the IfcArbitraryClosedProfileDef datatype.
         * 
         * @param value the IfcArbitraryClosedProfileDef datatype to visit
         */
        virtual bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *value) = 0;
        /**
         * Visits the IfcArbitraryOpenProfileDef datatype.
         * 
         * @param value the IfcArbitraryOpenProfileDef datatype to visit
         */
        virtual bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *value) = 0;
        /**
         * Visits the IfcArbitraryProfileDefWithVoids datatype.
         * 
         * @param value the IfcArbitraryProfileDefWithVoids datatype to visit
         */
        virtual bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *value) = 0;
        /**
         * Visits the IfcAsset datatype.
         * 
         * @param value the IfcAsset datatype to visit
         */
        virtual bool visitIfcAsset(IfcAsset *value) = 0;
        /**
         * Visits the IfcAsymmetricIShapeProfileDef datatype.
         * 
         * @param value the IfcAsymmetricIShapeProfileDef datatype to visit
         */
        virtual bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *value) = 0;
        /**
         * Visits the IfcAxis1Placement datatype.
         * 
         * @param value the IfcAxis1Placement datatype to visit
         */
        virtual bool visitIfcAxis1Placement(IfcAxis1Placement *value) = 0;
        /**
         * Visits the IfcAxis2Placement2D datatype.
         * 
         * @param value the IfcAxis2Placement2D datatype to visit
         */
        virtual bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *value) = 0;
        /**
         * Visits the IfcAxis2Placement3D datatype.
         * 
         * @param value the IfcAxis2Placement3D datatype to visit
         */
        virtual bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *value) = 0;
        /**
         * Visits the IfcBSplineCurve datatype.
         * 
         * @param value the IfcBSplineCurve datatype to visit
         */
        virtual bool visitIfcBSplineCurve(IfcBSplineCurve *value) = 0;
        /**
         * Visits the IfcBeam datatype.
         * 
         * @param value the IfcBeam datatype to visit
         */
        virtual bool visitIfcBeam(IfcBeam *value) = 0;
        /**
         * Visits the IfcBeamType datatype.
         * 
         * @param value the IfcBeamType datatype to visit
         */
        virtual bool visitIfcBeamType(IfcBeamType *value) = 0;
        /**
         * Visits the IfcBezierCurve datatype.
         * 
         * @param value the IfcBezierCurve datatype to visit
         */
        virtual bool visitIfcBezierCurve(IfcBezierCurve *value) = 0;
        /**
         * Visits the IfcBlobTexture datatype.
         * 
         * @param value the IfcBlobTexture datatype to visit
         */
        virtual bool visitIfcBlobTexture(IfcBlobTexture *value) = 0;
        /**
         * Visits the IfcBlock datatype.
         * 
         * @param value the IfcBlock datatype to visit
         */
        virtual bool visitIfcBlock(IfcBlock *value) = 0;
        /**
         * Visits the IfcBoilerType datatype.
         * 
         * @param value the IfcBoilerType datatype to visit
         */
        virtual bool visitIfcBoilerType(IfcBoilerType *value) = 0;
        /**
         * Visits the IfcBooleanClippingResult datatype.
         * 
         * @param value the IfcBooleanClippingResult datatype to visit
         */
        virtual bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *value) = 0;
        /**
         * Visits the IfcBooleanResult datatype.
         * 
         * @param value the IfcBooleanResult datatype to visit
         */
        virtual bool visitIfcBooleanResult(IfcBooleanResult *value) = 0;
        /**
         * Visits the IfcBoundaryCondition datatype.
         * 
         * @param value the IfcBoundaryCondition datatype to visit
         */
        virtual bool visitIfcBoundaryCondition(IfcBoundaryCondition *value) = 0;
        /**
         * Visits the IfcBoundaryEdgeCondition datatype.
         * 
         * @param value the IfcBoundaryEdgeCondition datatype to visit
         */
        virtual bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *value) = 0;
        /**
         * Visits the IfcBoundaryFaceCondition datatype.
         * 
         * @param value the IfcBoundaryFaceCondition datatype to visit
         */
        virtual bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *value) = 0;
        /**
         * Visits the IfcBoundaryNodeCondition datatype.
         * 
         * @param value the IfcBoundaryNodeCondition datatype to visit
         */
        virtual bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *value) = 0;
        /**
         * Visits the IfcBoundaryNodeConditionWarping datatype.
         * 
         * @param value the IfcBoundaryNodeConditionWarping datatype to visit
         */
        virtual bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *value) = 0;
        /**
         * Visits the IfcBoundedCurve datatype.
         * 
         * @param value the IfcBoundedCurve datatype to visit
         */
        virtual bool visitIfcBoundedCurve(IfcBoundedCurve *value) = 0;
        /**
         * Visits the IfcBoundedSurface datatype.
         * 
         * @param value the IfcBoundedSurface datatype to visit
         */
        virtual bool visitIfcBoundedSurface(IfcBoundedSurface *value) = 0;
        /**
         * Visits the IfcBoundingBox datatype.
         * 
         * @param value the IfcBoundingBox datatype to visit
         */
        virtual bool visitIfcBoundingBox(IfcBoundingBox *value) = 0;
        /**
         * Visits the IfcBoxedHalfSpace datatype.
         * 
         * @param value the IfcBoxedHalfSpace datatype to visit
         */
        virtual bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *value) = 0;
        /**
         * Visits the IfcBuilding datatype.
         * 
         * @param value the IfcBuilding datatype to visit
         */
        virtual bool visitIfcBuilding(IfcBuilding *value) = 0;
        /**
         * Visits the IfcBuildingElement datatype.
         * 
         * @param value the IfcBuildingElement datatype to visit
         */
        virtual bool visitIfcBuildingElement(IfcBuildingElement *value) = 0;
        /**
         * Visits the IfcBuildingElementComponent datatype.
         * 
         * @param value the IfcBuildingElementComponent datatype to visit
         */
        virtual bool visitIfcBuildingElementComponent(IfcBuildingElementComponent *value) = 0;
        /**
         * Visits the IfcBuildingElementPart datatype.
         * 
         * @param value the IfcBuildingElementPart datatype to visit
         */
        virtual bool visitIfcBuildingElementPart(IfcBuildingElementPart *value) = 0;
        /**
         * Visits the IfcBuildingElementProxy datatype.
         * 
         * @param value the IfcBuildingElementProxy datatype to visit
         */
        virtual bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *value) = 0;
        /**
         * Visits the IfcBuildingElementProxyType datatype.
         * 
         * @param value the IfcBuildingElementProxyType datatype to visit
         */
        virtual bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *value) = 0;
        /**
         * Visits the IfcBuildingElementType datatype.
         * 
         * @param value the IfcBuildingElementType datatype to visit
         */
        virtual bool visitIfcBuildingElementType(IfcBuildingElementType *value) = 0;
        /**
         * Visits the IfcBuildingStorey datatype.
         * 
         * @param value the IfcBuildingStorey datatype to visit
         */
        virtual bool visitIfcBuildingStorey(IfcBuildingStorey *value) = 0;
        /**
         * Visits the IfcCShapeProfileDef datatype.
         * 
         * @param value the IfcCShapeProfileDef datatype to visit
         */
        virtual bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *value) = 0;
        /**
         * Visits the IfcCableCarrierFittingType datatype.
         * 
         * @param value the IfcCableCarrierFittingType datatype to visit
         */
        virtual bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *value) = 0;
        /**
         * Visits the IfcCableCarrierSegmentType datatype.
         * 
         * @param value the IfcCableCarrierSegmentType datatype to visit
         */
        virtual bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *value) = 0;
        /**
         * Visits the IfcCableSegmentType datatype.
         * 
         * @param value the IfcCableSegmentType datatype to visit
         */
        virtual bool visitIfcCableSegmentType(IfcCableSegmentType *value) = 0;
        /**
         * Visits the IfcCalendarDate datatype.
         * 
         * @param value the IfcCalendarDate datatype to visit
         */
        virtual bool visitIfcCalendarDate(IfcCalendarDate *value) = 0;
        /**
         * Visits the IfcCartesianPoint datatype.
         * 
         * @param value the IfcCartesianPoint datatype to visit
         */
        virtual bool visitIfcCartesianPoint(IfcCartesianPoint *value) = 0;
        /**
         * Visits the IfcCartesianTransformationOperator datatype.
         * 
         * @param value the IfcCartesianTransformationOperator datatype to visit
         */
        virtual bool visitIfcCartesianTransformationOperator(IfcCartesianTransformationOperator *value) = 0;
        /**
         * Visits the IfcCartesianTransformationOperator2D datatype.
         * 
         * @param value the IfcCartesianTransformationOperator2D datatype to visit
         */
        virtual bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *value) = 0;
        /**
         * Visits the IfcCartesianTransformationOperator2DnonUniform datatype.
         * 
         * @param value the IfcCartesianTransformationOperator2DnonUniform datatype to visit
         */
        virtual bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *value) = 0;
        /**
         * Visits the IfcCartesianTransformationOperator3D datatype.
         * 
         * @param value the IfcCartesianTransformationOperator3D datatype to visit
         */
        virtual bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *value) = 0;
        /**
         * Visits the IfcCartesianTransformationOperator3DnonUniform datatype.
         * 
         * @param value the IfcCartesianTransformationOperator3DnonUniform datatype to visit
         */
        virtual bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *value) = 0;
        /**
         * Visits the IfcCenterLineProfileDef datatype.
         * 
         * @param value the IfcCenterLineProfileDef datatype to visit
         */
        virtual bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *value) = 0;
        /**
         * Visits the IfcChamferEdgeFeature datatype.
         * 
         * @param value the IfcChamferEdgeFeature datatype to visit
         */
        virtual bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *value) = 0;
        /**
         * Visits the IfcChillerType datatype.
         * 
         * @param value the IfcChillerType datatype to visit
         */
        virtual bool visitIfcChillerType(IfcChillerType *value) = 0;
        /**
         * Visits the IfcCircle datatype.
         * 
         * @param value the IfcCircle datatype to visit
         */
        virtual bool visitIfcCircle(IfcCircle *value) = 0;
        /**
         * Visits the IfcCircleHollowProfileDef datatype.
         * 
         * @param value the IfcCircleHollowProfileDef datatype to visit
         */
        virtual bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *value) = 0;
        /**
         * Visits the IfcCircleProfileDef datatype.
         * 
         * @param value the IfcCircleProfileDef datatype to visit
         */
        virtual bool visitIfcCircleProfileDef(IfcCircleProfileDef *value) = 0;
        /**
         * Visits the IfcClassification datatype.
         * 
         * @param value the IfcClassification datatype to visit
         */
        virtual bool visitIfcClassification(IfcClassification *value) = 0;
        /**
         * Visits the IfcClassificationItem datatype.
         * 
         * @param value the IfcClassificationItem datatype to visit
         */
        virtual bool visitIfcClassificationItem(IfcClassificationItem *value) = 0;
        /**
         * Visits the IfcClassificationItemRelationship datatype.
         * 
         * @param value the IfcClassificationItemRelationship datatype to visit
         */
        virtual bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *value) = 0;
        /**
         * Visits the IfcClassificationNotation datatype.
         * 
         * @param value the IfcClassificationNotation datatype to visit
         */
        virtual bool visitIfcClassificationNotation(IfcClassificationNotation *value) = 0;
        /**
         * Visits the IfcClassificationNotationFacet datatype.
         * 
         * @param value the IfcClassificationNotationFacet datatype to visit
         */
        virtual bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *value) = 0;
        /**
         * Visits the IfcClassificationReference datatype.
         * 
         * @param value the IfcClassificationReference datatype to visit
         */
        virtual bool visitIfcClassificationReference(IfcClassificationReference *value) = 0;
        /**
         * Visits the IfcClosedShell datatype.
         * 
         * @param value the IfcClosedShell datatype to visit
         */
        virtual bool visitIfcClosedShell(IfcClosedShell *value) = 0;
        /**
         * Visits the IfcCoilType datatype.
         * 
         * @param value the IfcCoilType datatype to visit
         */
        virtual bool visitIfcCoilType(IfcCoilType *value) = 0;
        /**
         * Visits the IfcColourRgb datatype.
         * 
         * @param value the IfcColourRgb datatype to visit
         */
        virtual bool visitIfcColourRgb(IfcColourRgb *value) = 0;
        /**
         * Visits the IfcColourSpecification datatype.
         * 
         * @param value the IfcColourSpecification datatype to visit
         */
        virtual bool visitIfcColourSpecification(IfcColourSpecification *value) = 0;
        /**
         * Visits the IfcColumn datatype.
         * 
         * @param value the IfcColumn datatype to visit
         */
        virtual bool visitIfcColumn(IfcColumn *value) = 0;
        /**
         * Visits the IfcColumnType datatype.
         * 
         * @param value the IfcColumnType datatype to visit
         */
        virtual bool visitIfcColumnType(IfcColumnType *value) = 0;
        /**
         * Visits the IfcComplexProperty datatype.
         * 
         * @param value the IfcComplexProperty datatype to visit
         */
        virtual bool visitIfcComplexProperty(IfcComplexProperty *value) = 0;
        /**
         * Visits the IfcCompositeCurve datatype.
         * 
         * @param value the IfcCompositeCurve datatype to visit
         */
        virtual bool visitIfcCompositeCurve(IfcCompositeCurve *value) = 0;
        /**
         * Visits the IfcCompositeCurveSegment datatype.
         * 
         * @param value the IfcCompositeCurveSegment datatype to visit
         */
        virtual bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *value) = 0;
        /**
         * Visits the IfcCompositeProfileDef datatype.
         * 
         * @param value the IfcCompositeProfileDef datatype to visit
         */
        virtual bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *value) = 0;
        /**
         * Visits the IfcCompressorType datatype.
         * 
         * @param value the IfcCompressorType datatype to visit
         */
        virtual bool visitIfcCompressorType(IfcCompressorType *value) = 0;
        /**
         * Visits the IfcCondenserType datatype.
         * 
         * @param value the IfcCondenserType datatype to visit
         */
        virtual bool visitIfcCondenserType(IfcCondenserType *value) = 0;
        /**
         * Visits the IfcCondition datatype.
         * 
         * @param value the IfcCondition datatype to visit
         */
        virtual bool visitIfcCondition(IfcCondition *value) = 0;
        /**
         * Visits the IfcConditionCriterion datatype.
         * 
         * @param value the IfcConditionCriterion datatype to visit
         */
        virtual bool visitIfcConditionCriterion(IfcConditionCriterion *value) = 0;
        /**
         * Visits the IfcConic datatype.
         * 
         * @param value the IfcConic datatype to visit
         */
        virtual bool visitIfcConic(IfcConic *value) = 0;
        /**
         * Visits the IfcConnectedFaceSet datatype.
         * 
         * @param value the IfcConnectedFaceSet datatype to visit
         */
        virtual bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *value) = 0;
        /**
         * Visits the IfcConnectionCurveGeometry datatype.
         * 
         * @param value the IfcConnectionCurveGeometry datatype to visit
         */
        virtual bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *value) = 0;
        /**
         * Visits the IfcConnectionGeometry datatype.
         * 
         * @param value the IfcConnectionGeometry datatype to visit
         */
        virtual bool visitIfcConnectionGeometry(IfcConnectionGeometry *value) = 0;
        /**
         * Visits the IfcConnectionPointEccentricity datatype.
         * 
         * @param value the IfcConnectionPointEccentricity datatype to visit
         */
        virtual bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *value) = 0;
        /**
         * Visits the IfcConnectionPointGeometry datatype.
         * 
         * @param value the IfcConnectionPointGeometry datatype to visit
         */
        virtual bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *value) = 0;
        /**
         * Visits the IfcConnectionPortGeometry datatype.
         * 
         * @param value the IfcConnectionPortGeometry datatype to visit
         */
        virtual bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *value) = 0;
        /**
         * Visits the IfcConnectionSurfaceGeometry datatype.
         * 
         * @param value the IfcConnectionSurfaceGeometry datatype to visit
         */
        virtual bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *value) = 0;
        /**
         * Visits the IfcConstraint datatype.
         * 
         * @param value the IfcConstraint datatype to visit
         */
        virtual bool visitIfcConstraint(IfcConstraint *value) = 0;
        /**
         * Visits the IfcConstraintAggregationRelationship datatype.
         * 
         * @param value the IfcConstraintAggregationRelationship datatype to visit
         */
        virtual bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *value) = 0;
        /**
         * Visits the IfcConstraintClassificationRelationship datatype.
         * 
         * @param value the IfcConstraintClassificationRelationship datatype to visit
         */
        virtual bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *value) = 0;
        /**
         * Visits the IfcConstraintRelationship datatype.
         * 
         * @param value the IfcConstraintRelationship datatype to visit
         */
        virtual bool visitIfcConstraintRelationship(IfcConstraintRelationship *value) = 0;
        /**
         * Visits the IfcConstructionEquipmentResource datatype.
         * 
         * @param value the IfcConstructionEquipmentResource datatype to visit
         */
        virtual bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *value) = 0;
        /**
         * Visits the IfcConstructionMaterialResource datatype.
         * 
         * @param value the IfcConstructionMaterialResource datatype to visit
         */
        virtual bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *value) = 0;
        /**
         * Visits the IfcConstructionProductResource datatype.
         * 
         * @param value the IfcConstructionProductResource datatype to visit
         */
        virtual bool visitIfcConstructionProductResource(IfcConstructionProductResource *value) = 0;
        /**
         * Visits the IfcConstructionResource datatype.
         * 
         * @param value the IfcConstructionResource datatype to visit
         */
        virtual bool visitIfcConstructionResource(IfcConstructionResource *value) = 0;
        /**
         * Visits the IfcContextDependentUnit datatype.
         * 
         * @param value the IfcContextDependentUnit datatype to visit
         */
        virtual bool visitIfcContextDependentUnit(IfcContextDependentUnit *value) = 0;
        /**
         * Visits the IfcControl datatype.
         * 
         * @param value the IfcControl datatype to visit
         */
        virtual bool visitIfcControl(IfcControl *value) = 0;
        /**
         * Visits the IfcControllerType datatype.
         * 
         * @param value the IfcControllerType datatype to visit
         */
        virtual bool visitIfcControllerType(IfcControllerType *value) = 0;
        /**
         * Visits the IfcConversionBasedUnit datatype.
         * 
         * @param value the IfcConversionBasedUnit datatype to visit
         */
        virtual bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *value) = 0;
        /**
         * Visits the IfcCooledBeamType datatype.
         * 
         * @param value the IfcCooledBeamType datatype to visit
         */
        virtual bool visitIfcCooledBeamType(IfcCooledBeamType *value) = 0;
        /**
         * Visits the IfcCoolingTowerType datatype.
         * 
         * @param value the IfcCoolingTowerType datatype to visit
         */
        virtual bool visitIfcCoolingTowerType(IfcCoolingTowerType *value) = 0;
        /**
         * Visits the IfcCoordinatedUniversalTimeOffset datatype.
         * 
         * @param value the IfcCoordinatedUniversalTimeOffset datatype to visit
         */
        virtual bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *value) = 0;
        /**
         * Visits the IfcCostItem datatype.
         * 
         * @param value the IfcCostItem datatype to visit
         */
        virtual bool visitIfcCostItem(IfcCostItem *value) = 0;
        /**
         * Visits the IfcCostSchedule datatype.
         * 
         * @param value the IfcCostSchedule datatype to visit
         */
        virtual bool visitIfcCostSchedule(IfcCostSchedule *value) = 0;
        /**
         * Visits the IfcCostValue datatype.
         * 
         * @param value the IfcCostValue datatype to visit
         */
        virtual bool visitIfcCostValue(IfcCostValue *value) = 0;
        /**
         * Visits the IfcCovering datatype.
         * 
         * @param value the IfcCovering datatype to visit
         */
        virtual bool visitIfcCovering(IfcCovering *value) = 0;
        /**
         * Visits the IfcCoveringType datatype.
         * 
         * @param value the IfcCoveringType datatype to visit
         */
        virtual bool visitIfcCoveringType(IfcCoveringType *value) = 0;
        /**
         * Visits the IfcCraneRailAShapeProfileDef datatype.
         * 
         * @param value the IfcCraneRailAShapeProfileDef datatype to visit
         */
        virtual bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *value) = 0;
        /**
         * Visits the IfcCraneRailFShapeProfileDef datatype.
         * 
         * @param value the IfcCraneRailFShapeProfileDef datatype to visit
         */
        virtual bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *value) = 0;
        /**
         * Visits the IfcCrewResource datatype.
         * 
         * @param value the IfcCrewResource datatype to visit
         */
        virtual bool visitIfcCrewResource(IfcCrewResource *value) = 0;
        /**
         * Visits the IfcCsgPrimitive3D datatype.
         * 
         * @param value the IfcCsgPrimitive3D datatype to visit
         */
        virtual bool visitIfcCsgPrimitive3D(IfcCsgPrimitive3D *value) = 0;
        /**
         * Visits the IfcCsgSolid datatype.
         * 
         * @param value the IfcCsgSolid datatype to visit
         */
        virtual bool visitIfcCsgSolid(IfcCsgSolid *value) = 0;
        /**
         * Visits the IfcCurrencyRelationship datatype.
         * 
         * @param value the IfcCurrencyRelationship datatype to visit
         */
        virtual bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *value) = 0;
        /**
         * Visits the IfcCurtainWall datatype.
         * 
         * @param value the IfcCurtainWall datatype to visit
         */
        virtual bool visitIfcCurtainWall(IfcCurtainWall *value) = 0;
        /**
         * Visits the IfcCurtainWallType datatype.
         * 
         * @param value the IfcCurtainWallType datatype to visit
         */
        virtual bool visitIfcCurtainWallType(IfcCurtainWallType *value) = 0;
        /**
         * Visits the IfcCurve datatype.
         * 
         * @param value the IfcCurve datatype to visit
         */
        virtual bool visitIfcCurve(IfcCurve *value) = 0;
        /**
         * Visits the IfcCurveBoundedPlane datatype.
         * 
         * @param value the IfcCurveBoundedPlane datatype to visit
         */
        virtual bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *value) = 0;
        /**
         * Visits the IfcCurveStyle datatype.
         * 
         * @param value the IfcCurveStyle datatype to visit
         */
        virtual bool visitIfcCurveStyle(IfcCurveStyle *value) = 0;
        /**
         * Visits the IfcCurveStyleFont datatype.
         * 
         * @param value the IfcCurveStyleFont datatype to visit
         */
        virtual bool visitIfcCurveStyleFont(IfcCurveStyleFont *value) = 0;
        /**
         * Visits the IfcCurveStyleFontAndScaling datatype.
         * 
         * @param value the IfcCurveStyleFontAndScaling datatype to visit
         */
        virtual bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *value) = 0;
        /**
         * Visits the IfcCurveStyleFontPattern datatype.
         * 
         * @param value the IfcCurveStyleFontPattern datatype to visit
         */
        virtual bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *value) = 0;
        /**
         * Visits the IfcDamperType datatype.
         * 
         * @param value the IfcDamperType datatype to visit
         */
        virtual bool visitIfcDamperType(IfcDamperType *value) = 0;
        /**
         * Visits the IfcDateAndTime datatype.
         * 
         * @param value the IfcDateAndTime datatype to visit
         */
        virtual bool visitIfcDateAndTime(IfcDateAndTime *value) = 0;
        /**
         * Visits the IfcDefinedSymbol datatype.
         * 
         * @param value the IfcDefinedSymbol datatype to visit
         */
        virtual bool visitIfcDefinedSymbol(IfcDefinedSymbol *value) = 0;
        /**
         * Visits the IfcDerivedProfileDef datatype.
         * 
         * @param value the IfcDerivedProfileDef datatype to visit
         */
        virtual bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *value) = 0;
        /**
         * Visits the IfcDerivedUnit datatype.
         * 
         * @param value the IfcDerivedUnit datatype to visit
         */
        virtual bool visitIfcDerivedUnit(IfcDerivedUnit *value) = 0;
        /**
         * Visits the IfcDerivedUnitElement datatype.
         * 
         * @param value the IfcDerivedUnitElement datatype to visit
         */
        virtual bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *value) = 0;
        /**
         * Visits the IfcDiameterDimension datatype.
         * 
         * @param value the IfcDiameterDimension datatype to visit
         */
        virtual bool visitIfcDiameterDimension(IfcDiameterDimension *value) = 0;
        /**
         * Visits the IfcDimensionCalloutRelationship datatype.
         * 
         * @param value the IfcDimensionCalloutRelationship datatype to visit
         */
        virtual bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *value) = 0;
        /**
         * Visits the IfcDimensionCurve datatype.
         * 
         * @param value the IfcDimensionCurve datatype to visit
         */
        virtual bool visitIfcDimensionCurve(IfcDimensionCurve *value) = 0;
        /**
         * Visits the IfcDimensionCurveDirectedCallout datatype.
         * 
         * @param value the IfcDimensionCurveDirectedCallout datatype to visit
         */
        virtual bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *value) = 0;
        /**
         * Visits the IfcDimensionCurveTerminator datatype.
         * 
         * @param value the IfcDimensionCurveTerminator datatype to visit
         */
        virtual bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *value) = 0;
        /**
         * Visits the IfcDimensionPair datatype.
         * 
         * @param value the IfcDimensionPair datatype to visit
         */
        virtual bool visitIfcDimensionPair(IfcDimensionPair *value) = 0;
        /**
         * Visits the IfcDimensionalExponents datatype.
         * 
         * @param value the IfcDimensionalExponents datatype to visit
         */
        virtual bool visitIfcDimensionalExponents(IfcDimensionalExponents *value) = 0;
        /**
         * Visits the IfcDirection datatype.
         * 
         * @param value the IfcDirection datatype to visit
         */
        virtual bool visitIfcDirection(IfcDirection *value) = 0;
        /**
         * Visits the IfcDiscreteAccessory datatype.
         * 
         * @param value the IfcDiscreteAccessory datatype to visit
         */
        virtual bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *value) = 0;
        /**
         * Visits the IfcDiscreteAccessoryType datatype.
         * 
         * @param value the IfcDiscreteAccessoryType datatype to visit
         */
        virtual bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *value) = 0;
        /**
         * Visits the IfcDistributionChamberElement datatype.
         * 
         * @param value the IfcDistributionChamberElement datatype to visit
         */
        virtual bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *value) = 0;
        /**
         * Visits the IfcDistributionChamberElementType datatype.
         * 
         * @param value the IfcDistributionChamberElementType datatype to visit
         */
        virtual bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *value) = 0;
        /**
         * Visits the IfcDistributionControlElement datatype.
         * 
         * @param value the IfcDistributionControlElement datatype to visit
         */
        virtual bool visitIfcDistributionControlElement(IfcDistributionControlElement *value) = 0;
        /**
         * Visits the IfcDistributionControlElementType datatype.
         * 
         * @param value the IfcDistributionControlElementType datatype to visit
         */
        virtual bool visitIfcDistributionControlElementType(IfcDistributionControlElementType *value) = 0;
        /**
         * Visits the IfcDistributionElement datatype.
         * 
         * @param value the IfcDistributionElement datatype to visit
         */
        virtual bool visitIfcDistributionElement(IfcDistributionElement *value) = 0;
        /**
         * Visits the IfcDistributionElementType datatype.
         * 
         * @param value the IfcDistributionElementType datatype to visit
         */
        virtual bool visitIfcDistributionElementType(IfcDistributionElementType *value) = 0;
        /**
         * Visits the IfcDistributionFlowElement datatype.
         * 
         * @param value the IfcDistributionFlowElement datatype to visit
         */
        virtual bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *value) = 0;
        /**
         * Visits the IfcDistributionFlowElementType datatype.
         * 
         * @param value the IfcDistributionFlowElementType datatype to visit
         */
        virtual bool visitIfcDistributionFlowElementType(IfcDistributionFlowElementType *value) = 0;
        /**
         * Visits the IfcDistributionPort datatype.
         * 
         * @param value the IfcDistributionPort datatype to visit
         */
        virtual bool visitIfcDistributionPort(IfcDistributionPort *value) = 0;
        /**
         * Visits the IfcDocumentElectronicFormat datatype.
         * 
         * @param value the IfcDocumentElectronicFormat datatype to visit
         */
        virtual bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *value) = 0;
        /**
         * Visits the IfcDocumentInformation datatype.
         * 
         * @param value the IfcDocumentInformation datatype to visit
         */
        virtual bool visitIfcDocumentInformation(IfcDocumentInformation *value) = 0;
        /**
         * Visits the IfcDocumentInformationRelationship datatype.
         * 
         * @param value the IfcDocumentInformationRelationship datatype to visit
         */
        virtual bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *value) = 0;
        /**
         * Visits the IfcDocumentReference datatype.
         * 
         * @param value the IfcDocumentReference datatype to visit
         */
        virtual bool visitIfcDocumentReference(IfcDocumentReference *value) = 0;
        /**
         * Visits the IfcDoor datatype.
         * 
         * @param value the IfcDoor datatype to visit
         */
        virtual bool visitIfcDoor(IfcDoor *value) = 0;
        /**
         * Visits the IfcDoorLiningProperties datatype.
         * 
         * @param value the IfcDoorLiningProperties datatype to visit
         */
        virtual bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *value) = 0;
        /**
         * Visits the IfcDoorPanelProperties datatype.
         * 
         * @param value the IfcDoorPanelProperties datatype to visit
         */
        virtual bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *value) = 0;
        /**
         * Visits the IfcDoorStyle datatype.
         * 
         * @param value the IfcDoorStyle datatype to visit
         */
        virtual bool visitIfcDoorStyle(IfcDoorStyle *value) = 0;
        /**
         * Visits the IfcDraughtingCallout datatype.
         * 
         * @param value the IfcDraughtingCallout datatype to visit
         */
        virtual bool visitIfcDraughtingCallout(IfcDraughtingCallout *value) = 0;
        /**
         * Visits the IfcDraughtingCalloutRelationship datatype.
         * 
         * @param value the IfcDraughtingCalloutRelationship datatype to visit
         */
        virtual bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *value) = 0;
        /**
         * Visits the IfcDraughtingPreDefinedColour datatype.
         * 
         * @param value the IfcDraughtingPreDefinedColour datatype to visit
         */
        virtual bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *value) = 0;
        /**
         * Visits the IfcDraughtingPreDefinedCurveFont datatype.
         * 
         * @param value the IfcDraughtingPreDefinedCurveFont datatype to visit
         */
        virtual bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *value) = 0;
        /**
         * Visits the IfcDraughtingPreDefinedTextFont datatype.
         * 
         * @param value the IfcDraughtingPreDefinedTextFont datatype to visit
         */
        virtual bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *value) = 0;
        /**
         * Visits the IfcDuctFittingType datatype.
         * 
         * @param value the IfcDuctFittingType datatype to visit
         */
        virtual bool visitIfcDuctFittingType(IfcDuctFittingType *value) = 0;
        /**
         * Visits the IfcDuctSegmentType datatype.
         * 
         * @param value the IfcDuctSegmentType datatype to visit
         */
        virtual bool visitIfcDuctSegmentType(IfcDuctSegmentType *value) = 0;
        /**
         * Visits the IfcDuctSilencerType datatype.
         * 
         * @param value the IfcDuctSilencerType datatype to visit
         */
        virtual bool visitIfcDuctSilencerType(IfcDuctSilencerType *value) = 0;
        /**
         * Visits the IfcEdge datatype.
         * 
         * @param value the IfcEdge datatype to visit
         */
        virtual bool visitIfcEdge(IfcEdge *value) = 0;
        /**
         * Visits the IfcEdgeCurve datatype.
         * 
         * @param value the IfcEdgeCurve datatype to visit
         */
        virtual bool visitIfcEdgeCurve(IfcEdgeCurve *value) = 0;
        /**
         * Visits the IfcEdgeFeature datatype.
         * 
         * @param value the IfcEdgeFeature datatype to visit
         */
        virtual bool visitIfcEdgeFeature(IfcEdgeFeature *value) = 0;
        /**
         * Visits the IfcEdgeLoop datatype.
         * 
         * @param value the IfcEdgeLoop datatype to visit
         */
        virtual bool visitIfcEdgeLoop(IfcEdgeLoop *value) = 0;
        /**
         * Visits the IfcElectricApplianceType datatype.
         * 
         * @param value the IfcElectricApplianceType datatype to visit
         */
        virtual bool visitIfcElectricApplianceType(IfcElectricApplianceType *value) = 0;
        /**
         * Visits the IfcElectricDistributionPoint datatype.
         * 
         * @param value the IfcElectricDistributionPoint datatype to visit
         */
        virtual bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *value) = 0;
        /**
         * Visits the IfcElectricFlowStorageDeviceType datatype.
         * 
         * @param value the IfcElectricFlowStorageDeviceType datatype to visit
         */
        virtual bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *value) = 0;
        /**
         * Visits the IfcElectricGeneratorType datatype.
         * 
         * @param value the IfcElectricGeneratorType datatype to visit
         */
        virtual bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *value) = 0;
        /**
         * Visits the IfcElectricHeaterType datatype.
         * 
         * @param value the IfcElectricHeaterType datatype to visit
         */
        virtual bool visitIfcElectricHeaterType(IfcElectricHeaterType *value) = 0;
        /**
         * Visits the IfcElectricMotorType datatype.
         * 
         * @param value the IfcElectricMotorType datatype to visit
         */
        virtual bool visitIfcElectricMotorType(IfcElectricMotorType *value) = 0;
        /**
         * Visits the IfcElectricTimeControlType datatype.
         * 
         * @param value the IfcElectricTimeControlType datatype to visit
         */
        virtual bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *value) = 0;
        /**
         * Visits the IfcElectricalBaseProperties datatype.
         * 
         * @param value the IfcElectricalBaseProperties datatype to visit
         */
        virtual bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *value) = 0;
        /**
         * Visits the IfcElectricalCircuit datatype.
         * 
         * @param value the IfcElectricalCircuit datatype to visit
         */
        virtual bool visitIfcElectricalCircuit(IfcElectricalCircuit *value) = 0;
        /**
         * Visits the IfcElectricalElement datatype.
         * 
         * @param value the IfcElectricalElement datatype to visit
         */
        virtual bool visitIfcElectricalElement(IfcElectricalElement *value) = 0;
        /**
         * Visits the IfcElement datatype.
         * 
         * @param value the IfcElement datatype to visit
         */
        virtual bool visitIfcElement(IfcElement *value) = 0;
        /**
         * Visits the IfcElementAssembly datatype.
         * 
         * @param value the IfcElementAssembly datatype to visit
         */
        virtual bool visitIfcElementAssembly(IfcElementAssembly *value) = 0;
        /**
         * Visits the IfcElementComponent datatype.
         * 
         * @param value the IfcElementComponent datatype to visit
         */
        virtual bool visitIfcElementComponent(IfcElementComponent *value) = 0;
        /**
         * Visits the IfcElementComponentType datatype.
         * 
         * @param value the IfcElementComponentType datatype to visit
         */
        virtual bool visitIfcElementComponentType(IfcElementComponentType *value) = 0;
        /**
         * Visits the IfcElementQuantity datatype.
         * 
         * @param value the IfcElementQuantity datatype to visit
         */
        virtual bool visitIfcElementQuantity(IfcElementQuantity *value) = 0;
        /**
         * Visits the IfcElementType datatype.
         * 
         * @param value the IfcElementType datatype to visit
         */
        virtual bool visitIfcElementType(IfcElementType *value) = 0;
        /**
         * Visits the IfcElementarySurface datatype.
         * 
         * @param value the IfcElementarySurface datatype to visit
         */
        virtual bool visitIfcElementarySurface(IfcElementarySurface *value) = 0;
        /**
         * Visits the IfcEllipse datatype.
         * 
         * @param value the IfcEllipse datatype to visit
         */
        virtual bool visitIfcEllipse(IfcEllipse *value) = 0;
        /**
         * Visits the IfcEllipseProfileDef datatype.
         * 
         * @param value the IfcEllipseProfileDef datatype to visit
         */
        virtual bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *value) = 0;
        /**
         * Visits the IfcEnergyConversionDevice datatype.
         * 
         * @param value the IfcEnergyConversionDevice datatype to visit
         */
        virtual bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *value) = 0;
        /**
         * Visits the IfcEnergyConversionDeviceType datatype.
         * 
         * @param value the IfcEnergyConversionDeviceType datatype to visit
         */
        virtual bool visitIfcEnergyConversionDeviceType(IfcEnergyConversionDeviceType *value) = 0;
        /**
         * Visits the IfcEnergyProperties datatype.
         * 
         * @param value the IfcEnergyProperties datatype to visit
         */
        virtual bool visitIfcEnergyProperties(IfcEnergyProperties *value) = 0;
        /**
         * Visits the IfcEnvironmentalImpactValue datatype.
         * 
         * @param value the IfcEnvironmentalImpactValue datatype to visit
         */
        virtual bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *value) = 0;
        /**
         * Visits the IfcEquipmentElement datatype.
         * 
         * @param value the IfcEquipmentElement datatype to visit
         */
        virtual bool visitIfcEquipmentElement(IfcEquipmentElement *value) = 0;
        /**
         * Visits the IfcEquipmentStandard datatype.
         * 
         * @param value the IfcEquipmentStandard datatype to visit
         */
        virtual bool visitIfcEquipmentStandard(IfcEquipmentStandard *value) = 0;
        /**
         * Visits the IfcEvaporativeCoolerType datatype.
         * 
         * @param value the IfcEvaporativeCoolerType datatype to visit
         */
        virtual bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *value) = 0;
        /**
         * Visits the IfcEvaporatorType datatype.
         * 
         * @param value the IfcEvaporatorType datatype to visit
         */
        virtual bool visitIfcEvaporatorType(IfcEvaporatorType *value) = 0;
        /**
         * Visits the IfcExtendedMaterialProperties datatype.
         * 
         * @param value the IfcExtendedMaterialProperties datatype to visit
         */
        virtual bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *value) = 0;
        /**
         * Visits the IfcExternalReference datatype.
         * 
         * @param value the IfcExternalReference datatype to visit
         */
        virtual bool visitIfcExternalReference(IfcExternalReference *value) = 0;
        /**
         * Visits the IfcExternallyDefinedHatchStyle datatype.
         * 
         * @param value the IfcExternallyDefinedHatchStyle datatype to visit
         */
        virtual bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *value) = 0;
        /**
         * Visits the IfcExternallyDefinedSurfaceStyle datatype.
         * 
         * @param value the IfcExternallyDefinedSurfaceStyle datatype to visit
         */
        virtual bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value) = 0;
        /**
         * Visits the IfcExternallyDefinedSymbol datatype.
         * 
         * @param value the IfcExternallyDefinedSymbol datatype to visit
         */
        virtual bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value) = 0;
        /**
         * Visits the IfcExternallyDefinedTextFont datatype.
         * 
         * @param value the IfcExternallyDefinedTextFont datatype to visit
         */
        virtual bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value) = 0;
        /**
         * Visits the IfcExtrudedAreaSolid datatype.
         * 
         * @param value the IfcExtrudedAreaSolid datatype to visit
         */
        virtual bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *value) = 0;
        /**
         * Visits the IfcFace datatype.
         * 
         * @param value the IfcFace datatype to visit
         */
        virtual bool visitIfcFace(IfcFace *value) = 0;
        /**
         * Visits the IfcFaceBasedSurfaceModel datatype.
         * 
         * @param value the IfcFaceBasedSurfaceModel datatype to visit
         */
        virtual bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value) = 0;
        /**
         * Visits the IfcFaceBound datatype.
         * 
         * @param value the IfcFaceBound datatype to visit
         */
        virtual bool visitIfcFaceBound(IfcFaceBound *value) = 0;
        /**
         * Visits the IfcFaceOuterBound datatype.
         * 
         * @param value the IfcFaceOuterBound datatype to visit
         */
        virtual bool visitIfcFaceOuterBound(IfcFaceOuterBound *value) = 0;
        /**
         * Visits the IfcFaceSurface datatype.
         * 
         * @param value the IfcFaceSurface datatype to visit
         */
        virtual bool visitIfcFaceSurface(IfcFaceSurface *value) = 0;
        /**
         * Visits the IfcFacetedBrep datatype.
         * 
         * @param value the IfcFacetedBrep datatype to visit
         */
        virtual bool visitIfcFacetedBrep(IfcFacetedBrep *value) = 0;
        /**
         * Visits the IfcFacetedBrepWithVoids datatype.
         * 
         * @param value the IfcFacetedBrepWithVoids datatype to visit
         */
        virtual bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *value) = 0;
        /**
         * Visits the IfcFailureConnectionCondition datatype.
         * 
         * @param value the IfcFailureConnectionCondition datatype to visit
         */
        virtual bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *value) = 0;
        /**
         * Visits the IfcFanType datatype.
         * 
         * @param value the IfcFanType datatype to visit
         */
        virtual bool visitIfcFanType(IfcFanType *value) = 0;
        /**
         * Visits the IfcFastener datatype.
         * 
         * @param value the IfcFastener datatype to visit
         */
        virtual bool visitIfcFastener(IfcFastener *value) = 0;
        /**
         * Visits the IfcFastenerType datatype.
         * 
         * @param value the IfcFastenerType datatype to visit
         */
        virtual bool visitIfcFastenerType(IfcFastenerType *value) = 0;
        /**
         * Visits the IfcFeatureElement datatype.
         * 
         * @param value the IfcFeatureElement datatype to visit
         */
        virtual bool visitIfcFeatureElement(IfcFeatureElement *value) = 0;
        /**
         * Visits the IfcFeatureElementAddition datatype.
         * 
         * @param value the IfcFeatureElementAddition datatype to visit
         */
        virtual bool visitIfcFeatureElementAddition(IfcFeatureElementAddition *value) = 0;
        /**
         * Visits the IfcFeatureElementSubtraction datatype.
         * 
         * @param value the IfcFeatureElementSubtraction datatype to visit
         */
        virtual bool visitIfcFeatureElementSubtraction(IfcFeatureElementSubtraction *value) = 0;
        /**
         * Visits the IfcFillAreaStyle datatype.
         * 
         * @param value the IfcFillAreaStyle datatype to visit
         */
        virtual bool visitIfcFillAreaStyle(IfcFillAreaStyle *value) = 0;
        /**
         * Visits the IfcFillAreaStyleHatching datatype.
         * 
         * @param value the IfcFillAreaStyleHatching datatype to visit
         */
        virtual bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value) = 0;
        /**
         * Visits the IfcFillAreaStyleTileSymbolWithStyle datatype.
         * 
         * @param value the IfcFillAreaStyleTileSymbolWithStyle datatype to visit
         */
        virtual bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value) = 0;
        /**
         * Visits the IfcFillAreaStyleTiles datatype.
         * 
         * @param value the IfcFillAreaStyleTiles datatype to visit
         */
        virtual bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value) = 0;
        /**
         * Visits the IfcFilterType datatype.
         * 
         * @param value the IfcFilterType datatype to visit
         */
        virtual bool visitIfcFilterType(IfcFilterType *value) = 0;
        /**
         * Visits the IfcFireSuppressionTerminalType datatype.
         * 
         * @param value the IfcFireSuppressionTerminalType datatype to visit
         */
        virtual bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *value) = 0;
        /**
         * Visits the IfcFlowController datatype.
         * 
         * @param value the IfcFlowController datatype to visit
         */
        virtual bool visitIfcFlowController(IfcFlowController *value) = 0;
        /**
         * Visits the IfcFlowControllerType datatype.
         * 
         * @param value the IfcFlowControllerType datatype to visit
         */
        virtual bool visitIfcFlowControllerType(IfcFlowControllerType *value) = 0;
        /**
         * Visits the IfcFlowFitting datatype.
         * 
         * @param value the IfcFlowFitting datatype to visit
         */
        virtual bool visitIfcFlowFitting(IfcFlowFitting *value) = 0;
        /**
         * Visits the IfcFlowFittingType datatype.
         * 
         * @param value the IfcFlowFittingType datatype to visit
         */
        virtual bool visitIfcFlowFittingType(IfcFlowFittingType *value) = 0;
        /**
         * Visits the IfcFlowInstrumentType datatype.
         * 
         * @param value the IfcFlowInstrumentType datatype to visit
         */
        virtual bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *value) = 0;
        /**
         * Visits the IfcFlowMeterType datatype.
         * 
         * @param value the IfcFlowMeterType datatype to visit
         */
        virtual bool visitIfcFlowMeterType(IfcFlowMeterType *value) = 0;
        /**
         * Visits the IfcFlowMovingDevice datatype.
         * 
         * @param value the IfcFlowMovingDevice datatype to visit
         */
        virtual bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *value) = 0;
        /**
         * Visits the IfcFlowMovingDeviceType datatype.
         * 
         * @param value the IfcFlowMovingDeviceType datatype to visit
         */
        virtual bool visitIfcFlowMovingDeviceType(IfcFlowMovingDeviceType *value) = 0;
        /**
         * Visits the IfcFlowSegment datatype.
         * 
         * @param value the IfcFlowSegment datatype to visit
         */
        virtual bool visitIfcFlowSegment(IfcFlowSegment *value) = 0;
        /**
         * Visits the IfcFlowSegmentType datatype.
         * 
         * @param value the IfcFlowSegmentType datatype to visit
         */
        virtual bool visitIfcFlowSegmentType(IfcFlowSegmentType *value) = 0;
        /**
         * Visits the IfcFlowStorageDevice datatype.
         * 
         * @param value the IfcFlowStorageDevice datatype to visit
         */
        virtual bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *value) = 0;
        /**
         * Visits the IfcFlowStorageDeviceType datatype.
         * 
         * @param value the IfcFlowStorageDeviceType datatype to visit
         */
        virtual bool visitIfcFlowStorageDeviceType(IfcFlowStorageDeviceType *value) = 0;
        /**
         * Visits the IfcFlowTerminal datatype.
         * 
         * @param value the IfcFlowTerminal datatype to visit
         */
        virtual bool visitIfcFlowTerminal(IfcFlowTerminal *value) = 0;
        /**
         * Visits the IfcFlowTerminalType datatype.
         * 
         * @param value the IfcFlowTerminalType datatype to visit
         */
        virtual bool visitIfcFlowTerminalType(IfcFlowTerminalType *value) = 0;
        /**
         * Visits the IfcFlowTreatmentDevice datatype.
         * 
         * @param value the IfcFlowTreatmentDevice datatype to visit
         */
        virtual bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *value) = 0;
        /**
         * Visits the IfcFlowTreatmentDeviceType datatype.
         * 
         * @param value the IfcFlowTreatmentDeviceType datatype to visit
         */
        virtual bool visitIfcFlowTreatmentDeviceType(IfcFlowTreatmentDeviceType *value) = 0;
        /**
         * Visits the IfcFluidFlowProperties datatype.
         * 
         * @param value the IfcFluidFlowProperties datatype to visit
         */
        virtual bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *value) = 0;
        /**
         * Visits the IfcFooting datatype.
         * 
         * @param value the IfcFooting datatype to visit
         */
        virtual bool visitIfcFooting(IfcFooting *value) = 0;
        /**
         * Visits the IfcFuelProperties datatype.
         * 
         * @param value the IfcFuelProperties datatype to visit
         */
        virtual bool visitIfcFuelProperties(IfcFuelProperties *value) = 0;
        /**
         * Visits the IfcFurnishingElement datatype.
         * 
         * @param value the IfcFurnishingElement datatype to visit
         */
        virtual bool visitIfcFurnishingElement(IfcFurnishingElement *value) = 0;
        /**
         * Visits the IfcFurnishingElementType datatype.
         * 
         * @param value the IfcFurnishingElementType datatype to visit
         */
        virtual bool visitIfcFurnishingElementType(IfcFurnishingElementType *value) = 0;
        /**
         * Visits the IfcFurnitureStandard datatype.
         * 
         * @param value the IfcFurnitureStandard datatype to visit
         */
        virtual bool visitIfcFurnitureStandard(IfcFurnitureStandard *value) = 0;
        /**
         * Visits the IfcFurnitureType datatype.
         * 
         * @param value the IfcFurnitureType datatype to visit
         */
        virtual bool visitIfcFurnitureType(IfcFurnitureType *value) = 0;
        /**
         * Visits the IfcGasTerminalType datatype.
         * 
         * @param value the IfcGasTerminalType datatype to visit
         */
        virtual bool visitIfcGasTerminalType(IfcGasTerminalType *value) = 0;
        /**
         * Visits the IfcGeneralMaterialProperties datatype.
         * 
         * @param value the IfcGeneralMaterialProperties datatype to visit
         */
        virtual bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *value) = 0;
        /**
         * Visits the IfcGeneralProfileProperties datatype.
         * 
         * @param value the IfcGeneralProfileProperties datatype to visit
         */
        virtual bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *value) = 0;
        /**
         * Visits the IfcGeometricCurveSet datatype.
         * 
         * @param value the IfcGeometricCurveSet datatype to visit
         */
        virtual bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *value) = 0;
        /**
         * Visits the IfcGeometricRepresentationContext datatype.
         * 
         * @param value the IfcGeometricRepresentationContext datatype to visit
         */
        virtual bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *value) = 0;
        /**
         * Visits the IfcGeometricRepresentationItem datatype.
         * 
         * @param value the IfcGeometricRepresentationItem datatype to visit
         */
        virtual bool visitIfcGeometricRepresentationItem(IfcGeometricRepresentationItem *value) = 0;
        /**
         * Visits the IfcGeometricRepresentationSubContext datatype.
         * 
         * @param value the IfcGeometricRepresentationSubContext datatype to visit
         */
        virtual bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *value) = 0;
        /**
         * Visits the IfcGeometricSet datatype.
         * 
         * @param value the IfcGeometricSet datatype to visit
         */
        virtual bool visitIfcGeometricSet(IfcGeometricSet *value) = 0;
        /**
         * Visits the IfcGrid datatype.
         * 
         * @param value the IfcGrid datatype to visit
         */
        virtual bool visitIfcGrid(IfcGrid *value) = 0;
        /**
         * Visits the IfcGridAxis datatype.
         * 
         * @param value the IfcGridAxis datatype to visit
         */
        virtual bool visitIfcGridAxis(IfcGridAxis *value) = 0;
        /**
         * Visits the IfcGridPlacement datatype.
         * 
         * @param value the IfcGridPlacement datatype to visit
         */
        virtual bool visitIfcGridPlacement(IfcGridPlacement *value) = 0;
        /**
         * Visits the IfcGroup datatype.
         * 
         * @param value the IfcGroup datatype to visit
         */
        virtual bool visitIfcGroup(IfcGroup *value) = 0;
        /**
         * Visits the IfcHalfSpaceSolid datatype.
         * 
         * @param value the IfcHalfSpaceSolid datatype to visit
         */
        virtual bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *value) = 0;
        /**
         * Visits the IfcHeatExchangerType datatype.
         * 
         * @param value the IfcHeatExchangerType datatype to visit
         */
        virtual bool visitIfcHeatExchangerType(IfcHeatExchangerType *value) = 0;
        /**
         * Visits the IfcHumidifierType datatype.
         * 
         * @param value the IfcHumidifierType datatype to visit
         */
        virtual bool visitIfcHumidifierType(IfcHumidifierType *value) = 0;
        /**
         * Visits the IfcHygroscopicMaterialProperties datatype.
         * 
         * @param value the IfcHygroscopicMaterialProperties datatype to visit
         */
        virtual bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *value) = 0;
        /**
         * Visits the IfcIShapeProfileDef datatype.
         * 
         * @param value the IfcIShapeProfileDef datatype to visit
         */
        virtual bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *value) = 0;
        /**
         * Visits the IfcImageTexture datatype.
         * 
         * @param value the IfcImageTexture datatype to visit
         */
        virtual bool visitIfcImageTexture(IfcImageTexture *value) = 0;
        /**
         * Visits the IfcInventory datatype.
         * 
         * @param value the IfcInventory datatype to visit
         */
        virtual bool visitIfcInventory(IfcInventory *value) = 0;
        /**
         * Visits the IfcIrregularTimeSeries datatype.
         * 
         * @param value the IfcIrregularTimeSeries datatype to visit
         */
        virtual bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *value) = 0;
        /**
         * Visits the IfcIrregularTimeSeriesValue datatype.
         * 
         * @param value the IfcIrregularTimeSeriesValue datatype to visit
         */
        virtual bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *value) = 0;
        /**
         * Visits the IfcJunctionBoxType datatype.
         * 
         * @param value the IfcJunctionBoxType datatype to visit
         */
        virtual bool visitIfcJunctionBoxType(IfcJunctionBoxType *value) = 0;
        /**
         * Visits the IfcLShapeProfileDef datatype.
         * 
         * @param value the IfcLShapeProfileDef datatype to visit
         */
        virtual bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *value) = 0;
        /**
         * Visits the IfcLaborResource datatype.
         * 
         * @param value the IfcLaborResource datatype to visit
         */
        virtual bool visitIfcLaborResource(IfcLaborResource *value) = 0;
        /**
         * Visits the IfcLampType datatype.
         * 
         * @param value the IfcLampType datatype to visit
         */
        virtual bool visitIfcLampType(IfcLampType *value) = 0;
        /**
         * Visits the IfcLibraryInformation datatype.
         * 
         * @param value the IfcLibraryInformation datatype to visit
         */
        virtual bool visitIfcLibraryInformation(IfcLibraryInformation *value) = 0;
        /**
         * Visits the IfcLibraryReference datatype.
         * 
         * @param value the IfcLibraryReference datatype to visit
         */
        virtual bool visitIfcLibraryReference(IfcLibraryReference *value) = 0;
        /**
         * Visits the IfcLightDistributionData datatype.
         * 
         * @param value the IfcLightDistributionData datatype to visit
         */
        virtual bool visitIfcLightDistributionData(IfcLightDistributionData *value) = 0;
        /**
         * Visits the IfcLightFixtureType datatype.
         * 
         * @param value the IfcLightFixtureType datatype to visit
         */
        virtual bool visitIfcLightFixtureType(IfcLightFixtureType *value) = 0;
        /**
         * Visits the IfcLightIntensityDistribution datatype.
         * 
         * @param value the IfcLightIntensityDistribution datatype to visit
         */
        virtual bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *value) = 0;
        /**
         * Visits the IfcLightSource datatype.
         * 
         * @param value the IfcLightSource datatype to visit
         */
        virtual bool visitIfcLightSource(IfcLightSource *value) = 0;
        /**
         * Visits the IfcLightSourceAmbient datatype.
         * 
         * @param value the IfcLightSourceAmbient datatype to visit
         */
        virtual bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *value) = 0;
        /**
         * Visits the IfcLightSourceDirectional datatype.
         * 
         * @param value the IfcLightSourceDirectional datatype to visit
         */
        virtual bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *value) = 0;
        /**
         * Visits the IfcLightSourceGoniometric datatype.
         * 
         * @param value the IfcLightSourceGoniometric datatype to visit
         */
        virtual bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *value) = 0;
        /**
         * Visits the IfcLightSourcePositional datatype.
         * 
         * @param value the IfcLightSourcePositional datatype to visit
         */
        virtual bool visitIfcLightSourcePositional(IfcLightSourcePositional *value) = 0;
        /**
         * Visits the IfcLightSourceSpot datatype.
         * 
         * @param value the IfcLightSourceSpot datatype to visit
         */
        virtual bool visitIfcLightSourceSpot(IfcLightSourceSpot *value) = 0;
        /**
         * Visits the IfcLine datatype.
         * 
         * @param value the IfcLine datatype to visit
         */
        virtual bool visitIfcLine(IfcLine *value) = 0;
        /**
         * Visits the IfcLinearDimension datatype.
         * 
         * @param value the IfcLinearDimension datatype to visit
         */
        virtual bool visitIfcLinearDimension(IfcLinearDimension *value) = 0;
        /**
         * Visits the IfcLocalPlacement datatype.
         * 
         * @param value the IfcLocalPlacement datatype to visit
         */
        virtual bool visitIfcLocalPlacement(IfcLocalPlacement *value) = 0;
        /**
         * Visits the IfcLocalTime datatype.
         * 
         * @param value the IfcLocalTime datatype to visit
         */
        virtual bool visitIfcLocalTime(IfcLocalTime *value) = 0;
        /**
         * Visits the IfcLoop datatype.
         * 
         * @param value the IfcLoop datatype to visit
         */
        virtual bool visitIfcLoop(IfcLoop *value) = 0;
        /**
         * Visits the IfcManifoldSolidBrep datatype.
         * 
         * @param value the IfcManifoldSolidBrep datatype to visit
         */
        virtual bool visitIfcManifoldSolidBrep(IfcManifoldSolidBrep *value) = 0;
        /**
         * Visits the IfcMappedItem datatype.
         * 
         * @param value the IfcMappedItem datatype to visit
         */
        virtual bool visitIfcMappedItem(IfcMappedItem *value) = 0;
        /**
         * Visits the IfcMaterial datatype.
         * 
         * @param value the IfcMaterial datatype to visit
         */
        virtual bool visitIfcMaterial(IfcMaterial *value) = 0;
        /**
         * Visits the IfcMaterialClassificationRelationship datatype.
         * 
         * @param value the IfcMaterialClassificationRelationship datatype to visit
         */
        virtual bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *value) = 0;
        /**
         * Visits the IfcMaterialDefinitionRepresentation datatype.
         * 
         * @param value the IfcMaterialDefinitionRepresentation datatype to visit
         */
        virtual bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *value) = 0;
        /**
         * Visits the IfcMaterialLayer datatype.
         * 
         * @param value the IfcMaterialLayer datatype to visit
         */
        virtual bool visitIfcMaterialLayer(IfcMaterialLayer *value) = 0;
        /**
         * Visits the IfcMaterialLayerSet datatype.
         * 
         * @param value the IfcMaterialLayerSet datatype to visit
         */
        virtual bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *value) = 0;
        /**
         * Visits the IfcMaterialLayerSetUsage datatype.
         * 
         * @param value the IfcMaterialLayerSetUsage datatype to visit
         */
        virtual bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value) = 0;
        /**
         * Visits the IfcMaterialList datatype.
         * 
         * @param value the IfcMaterialList datatype to visit
         */
        virtual bool visitIfcMaterialList(IfcMaterialList *value) = 0;
        /**
         * Visits the IfcMaterialProperties datatype.
         * 
         * @param value the IfcMaterialProperties datatype to visit
         */
        virtual bool visitIfcMaterialProperties(IfcMaterialProperties *value) = 0;
        /**
         * Visits the IfcMeasureWithUnit datatype.
         * 
         * @param value the IfcMeasureWithUnit datatype to visit
         */
        virtual bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *value) = 0;
        /**
         * Visits the IfcMechanicalConcreteMaterialProperties datatype.
         * 
         * @param value the IfcMechanicalConcreteMaterialProperties datatype to visit
         */
        virtual bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *value) = 0;
        /**
         * Visits the IfcMechanicalFastener datatype.
         * 
         * @param value the IfcMechanicalFastener datatype to visit
         */
        virtual bool visitIfcMechanicalFastener(IfcMechanicalFastener *value) = 0;
        /**
         * Visits the IfcMechanicalFastenerType datatype.
         * 
         * @param value the IfcMechanicalFastenerType datatype to visit
         */
        virtual bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *value) = 0;
        /**
         * Visits the IfcMechanicalMaterialProperties datatype.
         * 
         * @param value the IfcMechanicalMaterialProperties datatype to visit
         */
        virtual bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *value) = 0;
        /**
         * Visits the IfcMechanicalSteelMaterialProperties datatype.
         * 
         * @param value the IfcMechanicalSteelMaterialProperties datatype to visit
         */
        virtual bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *value) = 0;
        /**
         * Visits the IfcMember datatype.
         * 
         * @param value the IfcMember datatype to visit
         */
        virtual bool visitIfcMember(IfcMember *value) = 0;
        /**
         * Visits the IfcMemberType datatype.
         * 
         * @param value the IfcMemberType datatype to visit
         */
        virtual bool visitIfcMemberType(IfcMemberType *value) = 0;
        /**
         * Visits the IfcMetric datatype.
         * 
         * @param value the IfcMetric datatype to visit
         */
        virtual bool visitIfcMetric(IfcMetric *value) = 0;
        /**
         * Visits the IfcMonetaryUnit datatype.
         * 
         * @param value the IfcMonetaryUnit datatype to visit
         */
        virtual bool visitIfcMonetaryUnit(IfcMonetaryUnit *value) = 0;
        /**
         * Visits the IfcMotorConnectionType datatype.
         * 
         * @param value the IfcMotorConnectionType datatype to visit
         */
        virtual bool visitIfcMotorConnectionType(IfcMotorConnectionType *value) = 0;
        /**
         * Visits the IfcMove datatype.
         * 
         * @param value the IfcMove datatype to visit
         */
        virtual bool visitIfcMove(IfcMove *value) = 0;
        /**
         * Visits the IfcNamedUnit datatype.
         * 
         * @param value the IfcNamedUnit datatype to visit
         */
        virtual bool visitIfcNamedUnit(IfcNamedUnit *value) = 0;
        /**
         * Visits the IfcObject datatype.
         * 
         * @param value the IfcObject datatype to visit
         */
        virtual bool visitIfcObject(IfcObject *value) = 0;
        /**
         * Visits the IfcObjectDefinition datatype.
         * 
         * @param value the IfcObjectDefinition datatype to visit
         */
        virtual bool visitIfcObjectDefinition(IfcObjectDefinition *value) = 0;
        /**
         * Visits the IfcObjectPlacement datatype.
         * 
         * @param value the IfcObjectPlacement datatype to visit
         */
        virtual bool visitIfcObjectPlacement(IfcObjectPlacement *value) = 0;
        /**
         * Visits the IfcObjective datatype.
         * 
         * @param value the IfcObjective datatype to visit
         */
        virtual bool visitIfcObjective(IfcObjective *value) = 0;
        /**
         * Visits the IfcOccupant datatype.
         * 
         * @param value the IfcOccupant datatype to visit
         */
        virtual bool visitIfcOccupant(IfcOccupant *value) = 0;
        /**
         * Visits the IfcOffsetCurve2D datatype.
         * 
         * @param value the IfcOffsetCurve2D datatype to visit
         */
        virtual bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *value) = 0;
        /**
         * Visits the IfcOffsetCurve3D datatype.
         * 
         * @param value the IfcOffsetCurve3D datatype to visit
         */
        virtual bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *value) = 0;
        /**
         * Visits the IfcOneDirectionRepeatFactor datatype.
         * 
         * @param value the IfcOneDirectionRepeatFactor datatype to visit
         */
        virtual bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value) = 0;
        /**
         * Visits the IfcOpenShell datatype.
         * 
         * @param value the IfcOpenShell datatype to visit
         */
        virtual bool visitIfcOpenShell(IfcOpenShell *value) = 0;
        /**
         * Visits the IfcOpeningElement datatype.
         * 
         * @param value the IfcOpeningElement datatype to visit
         */
        virtual bool visitIfcOpeningElement(IfcOpeningElement *value) = 0;
        /**
         * Visits the IfcOpticalMaterialProperties datatype.
         * 
         * @param value the IfcOpticalMaterialProperties datatype to visit
         */
        virtual bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *value) = 0;
        /**
         * Visits the IfcOrderAction datatype.
         * 
         * @param value the IfcOrderAction datatype to visit
         */
        virtual bool visitIfcOrderAction(IfcOrderAction *value) = 0;
        /**
         * Visits the IfcOrganization datatype.
         * 
         * @param value the IfcOrganization datatype to visit
         */
        virtual bool visitIfcOrganization(IfcOrganization *value) = 0;
        /**
         * Visits the IfcOrganizationRelationship datatype.
         * 
         * @param value the IfcOrganizationRelationship datatype to visit
         */
        virtual bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *value) = 0;
        /**
         * Visits the IfcOrientedEdge datatype.
         * 
         * @param value the IfcOrientedEdge datatype to visit
         */
        virtual bool visitIfcOrientedEdge(IfcOrientedEdge *value) = 0;
        /**
         * Visits the IfcOutletType datatype.
         * 
         * @param value the IfcOutletType datatype to visit
         */
        virtual bool visitIfcOutletType(IfcOutletType *value) = 0;
        /**
         * Visits the IfcOwnerHistory datatype.
         * 
         * @param value the IfcOwnerHistory datatype to visit
         */
        virtual bool visitIfcOwnerHistory(IfcOwnerHistory *value) = 0;
        /**
         * Visits the IfcParameterizedProfileDef datatype.
         * 
         * @param value the IfcParameterizedProfileDef datatype to visit
         */
        virtual bool visitIfcParameterizedProfileDef(IfcParameterizedProfileDef *value) = 0;
        /**
         * Visits the IfcPath datatype.
         * 
         * @param value the IfcPath datatype to visit
         */
        virtual bool visitIfcPath(IfcPath *value) = 0;
        /**
         * Visits the IfcPerformanceHistory datatype.
         * 
         * @param value the IfcPerformanceHistory datatype to visit
         */
        virtual bool visitIfcPerformanceHistory(IfcPerformanceHistory *value) = 0;
        /**
         * Visits the IfcPermeableCoveringProperties datatype.
         * 
         * @param value the IfcPermeableCoveringProperties datatype to visit
         */
        virtual bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *value) = 0;
        /**
         * Visits the IfcPermit datatype.
         * 
         * @param value the IfcPermit datatype to visit
         */
        virtual bool visitIfcPermit(IfcPermit *value) = 0;
        /**
         * Visits the IfcPerson datatype.
         * 
         * @param value the IfcPerson datatype to visit
         */
        virtual bool visitIfcPerson(IfcPerson *value) = 0;
        /**
         * Visits the IfcPersonAndOrganization datatype.
         * 
         * @param value the IfcPersonAndOrganization datatype to visit
         */
        virtual bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *value) = 0;
        /**
         * Visits the IfcPhysicalComplexQuantity datatype.
         * 
         * @param value the IfcPhysicalComplexQuantity datatype to visit
         */
        virtual bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *value) = 0;
        /**
         * Visits the IfcPhysicalQuantity datatype.
         * 
         * @param value the IfcPhysicalQuantity datatype to visit
         */
        virtual bool visitIfcPhysicalQuantity(IfcPhysicalQuantity *value) = 0;
        /**
         * Visits the IfcPhysicalSimpleQuantity datatype.
         * 
         * @param value the IfcPhysicalSimpleQuantity datatype to visit
         */
        virtual bool visitIfcPhysicalSimpleQuantity(IfcPhysicalSimpleQuantity *value) = 0;
        /**
         * Visits the IfcPile datatype.
         * 
         * @param value the IfcPile datatype to visit
         */
        virtual bool visitIfcPile(IfcPile *value) = 0;
        /**
         * Visits the IfcPipeFittingType datatype.
         * 
         * @param value the IfcPipeFittingType datatype to visit
         */
        virtual bool visitIfcPipeFittingType(IfcPipeFittingType *value) = 0;
        /**
         * Visits the IfcPipeSegmentType datatype.
         * 
         * @param value the IfcPipeSegmentType datatype to visit
         */
        virtual bool visitIfcPipeSegmentType(IfcPipeSegmentType *value) = 0;
        /**
         * Visits the IfcPixelTexture datatype.
         * 
         * @param value the IfcPixelTexture datatype to visit
         */
        virtual bool visitIfcPixelTexture(IfcPixelTexture *value) = 0;
        /**
         * Visits the IfcPlacement datatype.
         * 
         * @param value the IfcPlacement datatype to visit
         */
        virtual bool visitIfcPlacement(IfcPlacement *value) = 0;
        /**
         * Visits the IfcPlanarBox datatype.
         * 
         * @param value the IfcPlanarBox datatype to visit
         */
        virtual bool visitIfcPlanarBox(IfcPlanarBox *value) = 0;
        /**
         * Visits the IfcPlanarExtent datatype.
         * 
         * @param value the IfcPlanarExtent datatype to visit
         */
        virtual bool visitIfcPlanarExtent(IfcPlanarExtent *value) = 0;
        /**
         * Visits the IfcPlane datatype.
         * 
         * @param value the IfcPlane datatype to visit
         */
        virtual bool visitIfcPlane(IfcPlane *value) = 0;
        /**
         * Visits the IfcPlate datatype.
         * 
         * @param value the IfcPlate datatype to visit
         */
        virtual bool visitIfcPlate(IfcPlate *value) = 0;
        /**
         * Visits the IfcPlateType datatype.
         * 
         * @param value the IfcPlateType datatype to visit
         */
        virtual bool visitIfcPlateType(IfcPlateType *value) = 0;
        /**
         * Visits the IfcPoint datatype.
         * 
         * @param value the IfcPoint datatype to visit
         */
        virtual bool visitIfcPoint(IfcPoint *value) = 0;
        /**
         * Visits the IfcPointOnCurve datatype.
         * 
         * @param value the IfcPointOnCurve datatype to visit
         */
        virtual bool visitIfcPointOnCurve(IfcPointOnCurve *value) = 0;
        /**
         * Visits the IfcPointOnSurface datatype.
         * 
         * @param value the IfcPointOnSurface datatype to visit
         */
        virtual bool visitIfcPointOnSurface(IfcPointOnSurface *value) = 0;
        /**
         * Visits the IfcPolyLoop datatype.
         * 
         * @param value the IfcPolyLoop datatype to visit
         */
        virtual bool visitIfcPolyLoop(IfcPolyLoop *value) = 0;
        /**
         * Visits the IfcPolygonalBoundedHalfSpace datatype.
         * 
         * @param value the IfcPolygonalBoundedHalfSpace datatype to visit
         */
        virtual bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *value) = 0;
        /**
         * Visits the IfcPolyline datatype.
         * 
         * @param value the IfcPolyline datatype to visit
         */
        virtual bool visitIfcPolyline(IfcPolyline *value) = 0;
        /**
         * Visits the IfcPort datatype.
         * 
         * @param value the IfcPort datatype to visit
         */
        virtual bool visitIfcPort(IfcPort *value) = 0;
        /**
         * Visits the IfcPostalAddress datatype.
         * 
         * @param value the IfcPostalAddress datatype to visit
         */
        virtual bool visitIfcPostalAddress(IfcPostalAddress *value) = 0;
        /**
         * Visits the IfcPreDefinedColour datatype.
         * 
         * @param value the IfcPreDefinedColour datatype to visit
         */
        virtual bool visitIfcPreDefinedColour(IfcPreDefinedColour *value) = 0;
        /**
         * Visits the IfcPreDefinedCurveFont datatype.
         * 
         * @param value the IfcPreDefinedCurveFont datatype to visit
         */
        virtual bool visitIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value) = 0;
        /**
         * Visits the IfcPreDefinedDimensionSymbol datatype.
         * 
         * @param value the IfcPreDefinedDimensionSymbol datatype to visit
         */
        virtual bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *value) = 0;
        /**
         * Visits the IfcPreDefinedItem datatype.
         * 
         * @param value the IfcPreDefinedItem datatype to visit
         */
        virtual bool visitIfcPreDefinedItem(IfcPreDefinedItem *value) = 0;
        /**
         * Visits the IfcPreDefinedPointMarkerSymbol datatype.
         * 
         * @param value the IfcPreDefinedPointMarkerSymbol datatype to visit
         */
        virtual bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *value) = 0;
        /**
         * Visits the IfcPreDefinedSymbol datatype.
         * 
         * @param value the IfcPreDefinedSymbol datatype to visit
         */
        virtual bool visitIfcPreDefinedSymbol(IfcPreDefinedSymbol *value) = 0;
        /**
         * Visits the IfcPreDefinedTerminatorSymbol datatype.
         * 
         * @param value the IfcPreDefinedTerminatorSymbol datatype to visit
         */
        virtual bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *value) = 0;
        /**
         * Visits the IfcPreDefinedTextFont datatype.
         * 
         * @param value the IfcPreDefinedTextFont datatype to visit
         */
        virtual bool visitIfcPreDefinedTextFont(IfcPreDefinedTextFont *value) = 0;
        /**
         * Visits the IfcPresentationLayerAssignment datatype.
         * 
         * @param value the IfcPresentationLayerAssignment datatype to visit
         */
        virtual bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *value) = 0;
        /**
         * Visits the IfcPresentationLayerWithStyle datatype.
         * 
         * @param value the IfcPresentationLayerWithStyle datatype to visit
         */
        virtual bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *value) = 0;
        /**
         * Visits the IfcPresentationStyle datatype.
         * 
         * @param value the IfcPresentationStyle datatype to visit
         */
        virtual bool visitIfcPresentationStyle(IfcPresentationStyle *value) = 0;
        /**
         * Visits the IfcPresentationStyleAssignment datatype.
         * 
         * @param value the IfcPresentationStyleAssignment datatype to visit
         */
        virtual bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *value) = 0;
        /**
         * Visits the IfcProcedure datatype.
         * 
         * @param value the IfcProcedure datatype to visit
         */
        virtual bool visitIfcProcedure(IfcProcedure *value) = 0;
        /**
         * Visits the IfcProcess datatype.
         * 
         * @param value the IfcProcess datatype to visit
         */
        virtual bool visitIfcProcess(IfcProcess *value) = 0;
        /**
         * Visits the IfcProduct datatype.
         * 
         * @param value the IfcProduct datatype to visit
         */
        virtual bool visitIfcProduct(IfcProduct *value) = 0;
        /**
         * Visits the IfcProductDefinitionShape datatype.
         * 
         * @param value the IfcProductDefinitionShape datatype to visit
         */
        virtual bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *value) = 0;
        /**
         * Visits the IfcProductRepresentation datatype.
         * 
         * @param value the IfcProductRepresentation datatype to visit
         */
        virtual bool visitIfcProductRepresentation(IfcProductRepresentation *value) = 0;
        /**
         * Visits the IfcProductsOfCombustionProperties datatype.
         * 
         * @param value the IfcProductsOfCombustionProperties datatype to visit
         */
        virtual bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *value) = 0;
        /**
         * Visits the IfcProfileDef datatype.
         * 
         * @param value the IfcProfileDef datatype to visit
         */
        virtual bool visitIfcProfileDef(IfcProfileDef *value) = 0;
        /**
         * Visits the IfcProfileProperties datatype.
         * 
         * @param value the IfcProfileProperties datatype to visit
         */
        virtual bool visitIfcProfileProperties(IfcProfileProperties *value) = 0;
        /**
         * Visits the IfcProject datatype.
         * 
         * @param value the IfcProject datatype to visit
         */
        virtual bool visitIfcProject(IfcProject *value) = 0;
        /**
         * Visits the IfcProjectOrder datatype.
         * 
         * @param value the IfcProjectOrder datatype to visit
         */
        virtual bool visitIfcProjectOrder(IfcProjectOrder *value) = 0;
        /**
         * Visits the IfcProjectOrderRecord datatype.
         * 
         * @param value the IfcProjectOrderRecord datatype to visit
         */
        virtual bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *value) = 0;
        /**
         * Visits the IfcProjectionCurve datatype.
         * 
         * @param value the IfcProjectionCurve datatype to visit
         */
        virtual bool visitIfcProjectionCurve(IfcProjectionCurve *value) = 0;
        /**
         * Visits the IfcProjectionElement datatype.
         * 
         * @param value the IfcProjectionElement datatype to visit
         */
        virtual bool visitIfcProjectionElement(IfcProjectionElement *value) = 0;
        /**
         * Visits the IfcProperty datatype.
         * 
         * @param value the IfcProperty datatype to visit
         */
        virtual bool visitIfcProperty(IfcProperty *value) = 0;
        /**
         * Visits the IfcPropertyBoundedValue datatype.
         * 
         * @param value the IfcPropertyBoundedValue datatype to visit
         */
        virtual bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *value) = 0;
        /**
         * Visits the IfcPropertyConstraintRelationship datatype.
         * 
         * @param value the IfcPropertyConstraintRelationship datatype to visit
         */
        virtual bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *value) = 0;
        /**
         * Visits the IfcPropertyDefinition datatype.
         * 
         * @param value the IfcPropertyDefinition datatype to visit
         */
        virtual bool visitIfcPropertyDefinition(IfcPropertyDefinition *value) = 0;
        /**
         * Visits the IfcPropertyDependencyRelationship datatype.
         * 
         * @param value the IfcPropertyDependencyRelationship datatype to visit
         */
        virtual bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *value) = 0;
        /**
         * Visits the IfcPropertyEnumeratedValue datatype.
         * 
         * @param value the IfcPropertyEnumeratedValue datatype to visit
         */
        virtual bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *value) = 0;
        /**
         * Visits the IfcPropertyEnumeration datatype.
         * 
         * @param value the IfcPropertyEnumeration datatype to visit
         */
        virtual bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *value) = 0;
        /**
         * Visits the IfcPropertyListValue datatype.
         * 
         * @param value the IfcPropertyListValue datatype to visit
         */
        virtual bool visitIfcPropertyListValue(IfcPropertyListValue *value) = 0;
        /**
         * Visits the IfcPropertyReferenceValue datatype.
         * 
         * @param value the IfcPropertyReferenceValue datatype to visit
         */
        virtual bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *value) = 0;
        /**
         * Visits the IfcPropertySet datatype.
         * 
         * @param value the IfcPropertySet datatype to visit
         */
        virtual bool visitIfcPropertySet(IfcPropertySet *value) = 0;
        /**
         * Visits the IfcPropertySetDefinition datatype.
         * 
         * @param value the IfcPropertySetDefinition datatype to visit
         */
        virtual bool visitIfcPropertySetDefinition(IfcPropertySetDefinition *value) = 0;
        /**
         * Visits the IfcPropertySingleValue datatype.
         * 
         * @param value the IfcPropertySingleValue datatype to visit
         */
        virtual bool visitIfcPropertySingleValue(IfcPropertySingleValue *value) = 0;
        /**
         * Visits the IfcPropertyTableValue datatype.
         * 
         * @param value the IfcPropertyTableValue datatype to visit
         */
        virtual bool visitIfcPropertyTableValue(IfcPropertyTableValue *value) = 0;
        /**
         * Visits the IfcProtectiveDeviceType datatype.
         * 
         * @param value the IfcProtectiveDeviceType datatype to visit
         */
        virtual bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *value) = 0;
        /**
         * Visits the IfcProxy datatype.
         * 
         * @param value the IfcProxy datatype to visit
         */
        virtual bool visitIfcProxy(IfcProxy *value) = 0;
        /**
         * Visits the IfcPumpType datatype.
         * 
         * @param value the IfcPumpType datatype to visit
         */
        virtual bool visitIfcPumpType(IfcPumpType *value) = 0;
        /**
         * Visits the IfcQuantityArea datatype.
         * 
         * @param value the IfcQuantityArea datatype to visit
         */
        virtual bool visitIfcQuantityArea(IfcQuantityArea *value) = 0;
        /**
         * Visits the IfcQuantityCount datatype.
         * 
         * @param value the IfcQuantityCount datatype to visit
         */
        virtual bool visitIfcQuantityCount(IfcQuantityCount *value) = 0;
        /**
         * Visits the IfcQuantityLength datatype.
         * 
         * @param value the IfcQuantityLength datatype to visit
         */
        virtual bool visitIfcQuantityLength(IfcQuantityLength *value) = 0;
        /**
         * Visits the IfcQuantityTime datatype.
         * 
         * @param value the IfcQuantityTime datatype to visit
         */
        virtual bool visitIfcQuantityTime(IfcQuantityTime *value) = 0;
        /**
         * Visits the IfcQuantityVolume datatype.
         * 
         * @param value the IfcQuantityVolume datatype to visit
         */
        virtual bool visitIfcQuantityVolume(IfcQuantityVolume *value) = 0;
        /**
         * Visits the IfcQuantityWeight datatype.
         * 
         * @param value the IfcQuantityWeight datatype to visit
         */
        virtual bool visitIfcQuantityWeight(IfcQuantityWeight *value) = 0;
        /**
         * Visits the IfcRadiusDimension datatype.
         * 
         * @param value the IfcRadiusDimension datatype to visit
         */
        virtual bool visitIfcRadiusDimension(IfcRadiusDimension *value) = 0;
        /**
         * Visits the IfcRailing datatype.
         * 
         * @param value the IfcRailing datatype to visit
         */
        virtual bool visitIfcRailing(IfcRailing *value) = 0;
        /**
         * Visits the IfcRailingType datatype.
         * 
         * @param value the IfcRailingType datatype to visit
         */
        virtual bool visitIfcRailingType(IfcRailingType *value) = 0;
        /**
         * Visits the IfcRamp datatype.
         * 
         * @param value the IfcRamp datatype to visit
         */
        virtual bool visitIfcRamp(IfcRamp *value) = 0;
        /**
         * Visits the IfcRampFlight datatype.
         * 
         * @param value the IfcRampFlight datatype to visit
         */
        virtual bool visitIfcRampFlight(IfcRampFlight *value) = 0;
        /**
         * Visits the IfcRampFlightType datatype.
         * 
         * @param value the IfcRampFlightType datatype to visit
         */
        virtual bool visitIfcRampFlightType(IfcRampFlightType *value) = 0;
        /**
         * Visits the IfcRationalBezierCurve datatype.
         * 
         * @param value the IfcRationalBezierCurve datatype to visit
         */
        virtual bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *value) = 0;
        /**
         * Visits the IfcRectangleHollowProfileDef datatype.
         * 
         * @param value the IfcRectangleHollowProfileDef datatype to visit
         */
        virtual bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *value) = 0;
        /**
         * Visits the IfcRectangleProfileDef datatype.
         * 
         * @param value the IfcRectangleProfileDef datatype to visit
         */
        virtual bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *value) = 0;
        /**
         * Visits the IfcRectangularPyramid datatype.
         * 
         * @param value the IfcRectangularPyramid datatype to visit
         */
        virtual bool visitIfcRectangularPyramid(IfcRectangularPyramid *value) = 0;
        /**
         * Visits the IfcRectangularTrimmedSurface datatype.
         * 
         * @param value the IfcRectangularTrimmedSurface datatype to visit
         */
        virtual bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *value) = 0;
        /**
         * Visits the IfcReferencesValueDocument datatype.
         * 
         * @param value the IfcReferencesValueDocument datatype to visit
         */
        virtual bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *value) = 0;
        /**
         * Visits the IfcRegularTimeSeries datatype.
         * 
         * @param value the IfcRegularTimeSeries datatype to visit
         */
        virtual bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *value) = 0;
        /**
         * Visits the IfcReinforcementBarProperties datatype.
         * 
         * @param value the IfcReinforcementBarProperties datatype to visit
         */
        virtual bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *value) = 0;
        /**
         * Visits the IfcReinforcementDefinitionProperties datatype.
         * 
         * @param value the IfcReinforcementDefinitionProperties datatype to visit
         */
        virtual bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *value) = 0;
        /**
         * Visits the IfcReinforcingBar datatype.
         * 
         * @param value the IfcReinforcingBar datatype to visit
         */
        virtual bool visitIfcReinforcingBar(IfcReinforcingBar *value) = 0;
        /**
         * Visits the IfcReinforcingElement datatype.
         * 
         * @param value the IfcReinforcingElement datatype to visit
         */
        virtual bool visitIfcReinforcingElement(IfcReinforcingElement *value) = 0;
        /**
         * Visits the IfcReinforcingMesh datatype.
         * 
         * @param value the IfcReinforcingMesh datatype to visit
         */
        virtual bool visitIfcReinforcingMesh(IfcReinforcingMesh *value) = 0;
        /**
         * Visits the IfcRelAggregates datatype.
         * 
         * @param value the IfcRelAggregates datatype to visit
         */
        virtual bool visitIfcRelAggregates(IfcRelAggregates *value) = 0;
        /**
         * Visits the IfcRelAssigns datatype.
         * 
         * @param value the IfcRelAssigns datatype to visit
         */
        virtual bool visitIfcRelAssigns(IfcRelAssigns *value) = 0;
        /**
         * Visits the IfcRelAssignsTasks datatype.
         * 
         * @param value the IfcRelAssignsTasks datatype to visit
         */
        virtual bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *value) = 0;
        /**
         * Visits the IfcRelAssignsToActor datatype.
         * 
         * @param value the IfcRelAssignsToActor datatype to visit
         */
        virtual bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *value) = 0;
        /**
         * Visits the IfcRelAssignsToControl datatype.
         * 
         * @param value the IfcRelAssignsToControl datatype to visit
         */
        virtual bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *value) = 0;
        /**
         * Visits the IfcRelAssignsToGroup datatype.
         * 
         * @param value the IfcRelAssignsToGroup datatype to visit
         */
        virtual bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *value) = 0;
        /**
         * Visits the IfcRelAssignsToProcess datatype.
         * 
         * @param value the IfcRelAssignsToProcess datatype to visit
         */
        virtual bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *value) = 0;
        /**
         * Visits the IfcRelAssignsToProduct datatype.
         * 
         * @param value the IfcRelAssignsToProduct datatype to visit
         */
        virtual bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *value) = 0;
        /**
         * Visits the IfcRelAssignsToProjectOrder datatype.
         * 
         * @param value the IfcRelAssignsToProjectOrder datatype to visit
         */
        virtual bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *value) = 0;
        /**
         * Visits the IfcRelAssignsToResource datatype.
         * 
         * @param value the IfcRelAssignsToResource datatype to visit
         */
        virtual bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *value) = 0;
        /**
         * Visits the IfcRelAssociates datatype.
         * 
         * @param value the IfcRelAssociates datatype to visit
         */
        virtual bool visitIfcRelAssociates(IfcRelAssociates *value) = 0;
        /**
         * Visits the IfcRelAssociatesAppliedValue datatype.
         * 
         * @param value the IfcRelAssociatesAppliedValue datatype to visit
         */
        virtual bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *value) = 0;
        /**
         * Visits the IfcRelAssociatesApproval datatype.
         * 
         * @param value the IfcRelAssociatesApproval datatype to visit
         */
        virtual bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *value) = 0;
        /**
         * Visits the IfcRelAssociatesClassification datatype.
         * 
         * @param value the IfcRelAssociatesClassification datatype to visit
         */
        virtual bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *value) = 0;
        /**
         * Visits the IfcRelAssociatesConstraint datatype.
         * 
         * @param value the IfcRelAssociatesConstraint datatype to visit
         */
        virtual bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *value) = 0;
        /**
         * Visits the IfcRelAssociatesDocument datatype.
         * 
         * @param value the IfcRelAssociatesDocument datatype to visit
         */
        virtual bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *value) = 0;
        /**
         * Visits the IfcRelAssociatesLibrary datatype.
         * 
         * @param value the IfcRelAssociatesLibrary datatype to visit
         */
        virtual bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *value) = 0;
        /**
         * Visits the IfcRelAssociatesMaterial datatype.
         * 
         * @param value the IfcRelAssociatesMaterial datatype to visit
         */
        virtual bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *value) = 0;
        /**
         * Visits the IfcRelAssociatesProfileProperties datatype.
         * 
         * @param value the IfcRelAssociatesProfileProperties datatype to visit
         */
        virtual bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *value) = 0;
        /**
         * Visits the IfcRelConnects datatype.
         * 
         * @param value the IfcRelConnects datatype to visit
         */
        virtual bool visitIfcRelConnects(IfcRelConnects *value) = 0;
        /**
         * Visits the IfcRelConnectsElements datatype.
         * 
         * @param value the IfcRelConnectsElements datatype to visit
         */
        virtual bool visitIfcRelConnectsElements(IfcRelConnectsElements *value) = 0;
        /**
         * Visits the IfcRelConnectsPathElements datatype.
         * 
         * @param value the IfcRelConnectsPathElements datatype to visit
         */
        virtual bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *value) = 0;
        /**
         * Visits the IfcRelConnectsPortToElement datatype.
         * 
         * @param value the IfcRelConnectsPortToElement datatype to visit
         */
        virtual bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *value) = 0;
        /**
         * Visits the IfcRelConnectsPorts datatype.
         * 
         * @param value the IfcRelConnectsPorts datatype to visit
         */
        virtual bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *value) = 0;
        /**
         * Visits the IfcRelConnectsStructuralActivity datatype.
         * 
         * @param value the IfcRelConnectsStructuralActivity datatype to visit
         */
        virtual bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *value) = 0;
        /**
         * Visits the IfcRelConnectsStructuralElement datatype.
         * 
         * @param value the IfcRelConnectsStructuralElement datatype to visit
         */
        virtual bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *value) = 0;
        /**
         * Visits the IfcRelConnectsStructuralMember datatype.
         * 
         * @param value the IfcRelConnectsStructuralMember datatype to visit
         */
        virtual bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *value) = 0;
        /**
         * Visits the IfcRelConnectsWithEccentricity datatype.
         * 
         * @param value the IfcRelConnectsWithEccentricity datatype to visit
         */
        virtual bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *value) = 0;
        /**
         * Visits the IfcRelConnectsWithRealizingElements datatype.
         * 
         * @param value the IfcRelConnectsWithRealizingElements datatype to visit
         */
        virtual bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *value) = 0;
        /**
         * Visits the IfcRelContainedInSpatialStructure datatype.
         * 
         * @param value the IfcRelContainedInSpatialStructure datatype to visit
         */
        virtual bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *value) = 0;
        /**
         * Visits the IfcRelCoversBldgElements datatype.
         * 
         * @param value the IfcRelCoversBldgElements datatype to visit
         */
        virtual bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *value) = 0;
        /**
         * Visits the IfcRelCoversSpaces datatype.
         * 
         * @param value the IfcRelCoversSpaces datatype to visit
         */
        virtual bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *value) = 0;
        /**
         * Visits the IfcRelDecomposes datatype.
         * 
         * @param value the IfcRelDecomposes datatype to visit
         */
        virtual bool visitIfcRelDecomposes(IfcRelDecomposes *value) = 0;
        /**
         * Visits the IfcRelDefines datatype.
         * 
         * @param value the IfcRelDefines datatype to visit
         */
        virtual bool visitIfcRelDefines(IfcRelDefines *value) = 0;
        /**
         * Visits the IfcRelDefinesByProperties datatype.
         * 
         * @param value the IfcRelDefinesByProperties datatype to visit
         */
        virtual bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *value) = 0;
        /**
         * Visits the IfcRelDefinesByType datatype.
         * 
         * @param value the IfcRelDefinesByType datatype to visit
         */
        virtual bool visitIfcRelDefinesByType(IfcRelDefinesByType *value) = 0;
        /**
         * Visits the IfcRelFillsElement datatype.
         * 
         * @param value the IfcRelFillsElement datatype to visit
         */
        virtual bool visitIfcRelFillsElement(IfcRelFillsElement *value) = 0;
        /**
         * Visits the IfcRelFlowControlElements datatype.
         * 
         * @param value the IfcRelFlowControlElements datatype to visit
         */
        virtual bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *value) = 0;
        /**
         * Visits the IfcRelInteractionRequirements datatype.
         * 
         * @param value the IfcRelInteractionRequirements datatype to visit
         */
        virtual bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *value) = 0;
        /**
         * Visits the IfcRelNests datatype.
         * 
         * @param value the IfcRelNests datatype to visit
         */
        virtual bool visitIfcRelNests(IfcRelNests *value) = 0;
        /**
         * Visits the IfcRelOccupiesSpaces datatype.
         * 
         * @param value the IfcRelOccupiesSpaces datatype to visit
         */
        virtual bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *value) = 0;
        /**
         * Visits the IfcRelOverridesProperties datatype.
         * 
         * @param value the IfcRelOverridesProperties datatype to visit
         */
        virtual bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *value) = 0;
        /**
         * Visits the IfcRelProjectsElement datatype.
         * 
         * @param value the IfcRelProjectsElement datatype to visit
         */
        virtual bool visitIfcRelProjectsElement(IfcRelProjectsElement *value) = 0;
        /**
         * Visits the IfcRelReferencedInSpatialStructure datatype.
         * 
         * @param value the IfcRelReferencedInSpatialStructure datatype to visit
         */
        virtual bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *value) = 0;
        /**
         * Visits the IfcRelSchedulesCostItems datatype.
         * 
         * @param value the IfcRelSchedulesCostItems datatype to visit
         */
        virtual bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *value) = 0;
        /**
         * Visits the IfcRelSequence datatype.
         * 
         * @param value the IfcRelSequence datatype to visit
         */
        virtual bool visitIfcRelSequence(IfcRelSequence *value) = 0;
        /**
         * Visits the IfcRelServicesBuildings datatype.
         * 
         * @param value the IfcRelServicesBuildings datatype to visit
         */
        virtual bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *value) = 0;
        /**
         * Visits the IfcRelSpaceBoundary datatype.
         * 
         * @param value the IfcRelSpaceBoundary datatype to visit
         */
        virtual bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *value) = 0;
        /**
         * Visits the IfcRelVoidsElement datatype.
         * 
         * @param value the IfcRelVoidsElement datatype to visit
         */
        virtual bool visitIfcRelVoidsElement(IfcRelVoidsElement *value) = 0;
        /**
         * Visits the IfcRelationship datatype.
         * 
         * @param value the IfcRelationship datatype to visit
         */
        virtual bool visitIfcRelationship(IfcRelationship *value) = 0;
        /**
         * Visits the IfcRelaxation datatype.
         * 
         * @param value the IfcRelaxation datatype to visit
         */
        virtual bool visitIfcRelaxation(IfcRelaxation *value) = 0;
        /**
         * Visits the IfcRepresentation datatype.
         * 
         * @param value the IfcRepresentation datatype to visit
         */
        virtual bool visitIfcRepresentation(IfcRepresentation *value) = 0;
        /**
         * Visits the IfcRepresentationContext datatype.
         * 
         * @param value the IfcRepresentationContext datatype to visit
         */
        virtual bool visitIfcRepresentationContext(IfcRepresentationContext *value) = 0;
        /**
         * Visits the IfcRepresentationItem datatype.
         * 
         * @param value the IfcRepresentationItem datatype to visit
         */
        virtual bool visitIfcRepresentationItem(IfcRepresentationItem *value) = 0;
        /**
         * Visits the IfcRepresentationMap datatype.
         * 
         * @param value the IfcRepresentationMap datatype to visit
         */
        virtual bool visitIfcRepresentationMap(IfcRepresentationMap *value) = 0;
        /**
         * Visits the IfcResource datatype.
         * 
         * @param value the IfcResource datatype to visit
         */
        virtual bool visitIfcResource(IfcResource *value) = 0;
        /**
         * Visits the IfcRevolvedAreaSolid datatype.
         * 
         * @param value the IfcRevolvedAreaSolid datatype to visit
         */
        virtual bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *value) = 0;
        /**
         * Visits the IfcRibPlateProfileProperties datatype.
         * 
         * @param value the IfcRibPlateProfileProperties datatype to visit
         */
        virtual bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *value) = 0;
        /**
         * Visits the IfcRightCircularCone datatype.
         * 
         * @param value the IfcRightCircularCone datatype to visit
         */
        virtual bool visitIfcRightCircularCone(IfcRightCircularCone *value) = 0;
        /**
         * Visits the IfcRightCircularCylinder datatype.
         * 
         * @param value the IfcRightCircularCylinder datatype to visit
         */
        virtual bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *value) = 0;
        /**
         * Visits the IfcRoof datatype.
         * 
         * @param value the IfcRoof datatype to visit
         */
        virtual bool visitIfcRoof(IfcRoof *value) = 0;
        /**
         * Visits the IfcRoot datatype.
         * 
         * @param value the IfcRoot datatype to visit
         */
        virtual bool visitIfcRoot(IfcRoot *value) = 0;
        /**
         * Visits the IfcRoundedEdgeFeature datatype.
         * 
         * @param value the IfcRoundedEdgeFeature datatype to visit
         */
        virtual bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *value) = 0;
        /**
         * Visits the IfcRoundedRectangleProfileDef datatype.
         * 
         * @param value the IfcRoundedRectangleProfileDef datatype to visit
         */
        virtual bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *value) = 0;
        /**
         * Visits the IfcSIUnit datatype.
         * 
         * @param value the IfcSIUnit datatype to visit
         */
        virtual bool visitIfcSIUnit(IfcSIUnit *value) = 0;
        /**
         * Visits the IfcSanitaryTerminalType datatype.
         * 
         * @param value the IfcSanitaryTerminalType datatype to visit
         */
        virtual bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *value) = 0;
        /**
         * Visits the IfcScheduleTimeControl datatype.
         * 
         * @param value the IfcScheduleTimeControl datatype to visit
         */
        virtual bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *value) = 0;
        /**
         * Visits the IfcSectionProperties datatype.
         * 
         * @param value the IfcSectionProperties datatype to visit
         */
        virtual bool visitIfcSectionProperties(IfcSectionProperties *value) = 0;
        /**
         * Visits the IfcSectionReinforcementProperties datatype.
         * 
         * @param value the IfcSectionReinforcementProperties datatype to visit
         */
        virtual bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *value) = 0;
        /**
         * Visits the IfcSectionedSpine datatype.
         * 
         * @param value the IfcSectionedSpine datatype to visit
         */
        virtual bool visitIfcSectionedSpine(IfcSectionedSpine *value) = 0;
        /**
         * Visits the IfcSensorType datatype.
         * 
         * @param value the IfcSensorType datatype to visit
         */
        virtual bool visitIfcSensorType(IfcSensorType *value) = 0;
        /**
         * Visits the IfcServiceLife datatype.
         * 
         * @param value the IfcServiceLife datatype to visit
         */
        virtual bool visitIfcServiceLife(IfcServiceLife *value) = 0;
        /**
         * Visits the IfcServiceLifeFactor datatype.
         * 
         * @param value the IfcServiceLifeFactor datatype to visit
         */
        virtual bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *value) = 0;
        /**
         * Visits the IfcShapeAspect datatype.
         * 
         * @param value the IfcShapeAspect datatype to visit
         */
        virtual bool visitIfcShapeAspect(IfcShapeAspect *value) = 0;
        /**
         * Visits the IfcShapeModel datatype.
         * 
         * @param value the IfcShapeModel datatype to visit
         */
        virtual bool visitIfcShapeModel(IfcShapeModel *value) = 0;
        /**
         * Visits the IfcShapeRepresentation datatype.
         * 
         * @param value the IfcShapeRepresentation datatype to visit
         */
        virtual bool visitIfcShapeRepresentation(IfcShapeRepresentation *value) = 0;
        /**
         * Visits the IfcShellBasedSurfaceModel datatype.
         * 
         * @param value the IfcShellBasedSurfaceModel datatype to visit
         */
        virtual bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *value) = 0;
        /**
         * Visits the IfcSimpleProperty datatype.
         * 
         * @param value the IfcSimpleProperty datatype to visit
         */
        virtual bool visitIfcSimpleProperty(IfcSimpleProperty *value) = 0;
        /**
         * Visits the IfcSite datatype.
         * 
         * @param value the IfcSite datatype to visit
         */
        virtual bool visitIfcSite(IfcSite *value) = 0;
        /**
         * Visits the IfcSlab datatype.
         * 
         * @param value the IfcSlab datatype to visit
         */
        virtual bool visitIfcSlab(IfcSlab *value) = 0;
        /**
         * Visits the IfcSlabType datatype.
         * 
         * @param value the IfcSlabType datatype to visit
         */
        virtual bool visitIfcSlabType(IfcSlabType *value) = 0;
        /**
         * Visits the IfcSlippageConnectionCondition datatype.
         * 
         * @param value the IfcSlippageConnectionCondition datatype to visit
         */
        virtual bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *value) = 0;
        /**
         * Visits the IfcSolidModel datatype.
         * 
         * @param value the IfcSolidModel datatype to visit
         */
        virtual bool visitIfcSolidModel(IfcSolidModel *value) = 0;
        /**
         * Visits the IfcSoundProperties datatype.
         * 
         * @param value the IfcSoundProperties datatype to visit
         */
        virtual bool visitIfcSoundProperties(IfcSoundProperties *value) = 0;
        /**
         * Visits the IfcSoundValue datatype.
         * 
         * @param value the IfcSoundValue datatype to visit
         */
        virtual bool visitIfcSoundValue(IfcSoundValue *value) = 0;
        /**
         * Visits the IfcSpace datatype.
         * 
         * @param value the IfcSpace datatype to visit
         */
        virtual bool visitIfcSpace(IfcSpace *value) = 0;
        /**
         * Visits the IfcSpaceHeaterType datatype.
         * 
         * @param value the IfcSpaceHeaterType datatype to visit
         */
        virtual bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *value) = 0;
        /**
         * Visits the IfcSpaceProgram datatype.
         * 
         * @param value the IfcSpaceProgram datatype to visit
         */
        virtual bool visitIfcSpaceProgram(IfcSpaceProgram *value) = 0;
        /**
         * Visits the IfcSpaceThermalLoadProperties datatype.
         * 
         * @param value the IfcSpaceThermalLoadProperties datatype to visit
         */
        virtual bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *value) = 0;
        /**
         * Visits the IfcSpaceType datatype.
         * 
         * @param value the IfcSpaceType datatype to visit
         */
        virtual bool visitIfcSpaceType(IfcSpaceType *value) = 0;
        /**
         * Visits the IfcSpatialStructureElement datatype.
         * 
         * @param value the IfcSpatialStructureElement datatype to visit
         */
        virtual bool visitIfcSpatialStructureElement(IfcSpatialStructureElement *value) = 0;
        /**
         * Visits the IfcSpatialStructureElementType datatype.
         * 
         * @param value the IfcSpatialStructureElementType datatype to visit
         */
        virtual bool visitIfcSpatialStructureElementType(IfcSpatialStructureElementType *value) = 0;
        /**
         * Visits the IfcSphere datatype.
         * 
         * @param value the IfcSphere datatype to visit
         */
        virtual bool visitIfcSphere(IfcSphere *value) = 0;
        /**
         * Visits the IfcStackTerminalType datatype.
         * 
         * @param value the IfcStackTerminalType datatype to visit
         */
        virtual bool visitIfcStackTerminalType(IfcStackTerminalType *value) = 0;
        /**
         * Visits the IfcStair datatype.
         * 
         * @param value the IfcStair datatype to visit
         */
        virtual bool visitIfcStair(IfcStair *value) = 0;
        /**
         * Visits the IfcStairFlight datatype.
         * 
         * @param value the IfcStairFlight datatype to visit
         */
        virtual bool visitIfcStairFlight(IfcStairFlight *value) = 0;
        /**
         * Visits the IfcStairFlightType datatype.
         * 
         * @param value the IfcStairFlightType datatype to visit
         */
        virtual bool visitIfcStairFlightType(IfcStairFlightType *value) = 0;
        /**
         * Visits the IfcStructuralAction datatype.
         * 
         * @param value the IfcStructuralAction datatype to visit
         */
        virtual bool visitIfcStructuralAction(IfcStructuralAction *value) = 0;
        /**
         * Visits the IfcStructuralActivity datatype.
         * 
         * @param value the IfcStructuralActivity datatype to visit
         */
        virtual bool visitIfcStructuralActivity(IfcStructuralActivity *value) = 0;
        /**
         * Visits the IfcStructuralAnalysisModel datatype.
         * 
         * @param value the IfcStructuralAnalysisModel datatype to visit
         */
        virtual bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *value) = 0;
        /**
         * Visits the IfcStructuralConnection datatype.
         * 
         * @param value the IfcStructuralConnection datatype to visit
         */
        virtual bool visitIfcStructuralConnection(IfcStructuralConnection *value) = 0;
        /**
         * Visits the IfcStructuralConnectionCondition datatype.
         * 
         * @param value the IfcStructuralConnectionCondition datatype to visit
         */
        virtual bool visitIfcStructuralConnectionCondition(IfcStructuralConnectionCondition *value) = 0;
        /**
         * Visits the IfcStructuralCurveConnection datatype.
         * 
         * @param value the IfcStructuralCurveConnection datatype to visit
         */
        virtual bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *value) = 0;
        /**
         * Visits the IfcStructuralCurveMember datatype.
         * 
         * @param value the IfcStructuralCurveMember datatype to visit
         */
        virtual bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *value) = 0;
        /**
         * Visits the IfcStructuralCurveMemberVarying datatype.
         * 
         * @param value the IfcStructuralCurveMemberVarying datatype to visit
         */
        virtual bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *value) = 0;
        /**
         * Visits the IfcStructuralItem datatype.
         * 
         * @param value the IfcStructuralItem datatype to visit
         */
        virtual bool visitIfcStructuralItem(IfcStructuralItem *value) = 0;
        /**
         * Visits the IfcStructuralLinearAction datatype.
         * 
         * @param value the IfcStructuralLinearAction datatype to visit
         */
        virtual bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *value) = 0;
        /**
         * Visits the IfcStructuralLinearActionVarying datatype.
         * 
         * @param value the IfcStructuralLinearActionVarying datatype to visit
         */
        virtual bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *value) = 0;
        /**
         * Visits the IfcStructuralLoad datatype.
         * 
         * @param value the IfcStructuralLoad datatype to visit
         */
        virtual bool visitIfcStructuralLoad(IfcStructuralLoad *value) = 0;
        /**
         * Visits the IfcStructuralLoadGroup datatype.
         * 
         * @param value the IfcStructuralLoadGroup datatype to visit
         */
        virtual bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *value) = 0;
        /**
         * Visits the IfcStructuralLoadLinearForce datatype.
         * 
         * @param value the IfcStructuralLoadLinearForce datatype to visit
         */
        virtual bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *value) = 0;
        /**
         * Visits the IfcStructuralLoadPlanarForce datatype.
         * 
         * @param value the IfcStructuralLoadPlanarForce datatype to visit
         */
        virtual bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *value) = 0;
        /**
         * Visits the IfcStructuralLoadSingleDisplacement datatype.
         * 
         * @param value the IfcStructuralLoadSingleDisplacement datatype to visit
         */
        virtual bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *value) = 0;
        /**
         * Visits the IfcStructuralLoadSingleDisplacementDistortion datatype.
         * 
         * @param value the IfcStructuralLoadSingleDisplacementDistortion datatype to visit
         */
        virtual bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *value) = 0;
        /**
         * Visits the IfcStructuralLoadSingleForce datatype.
         * 
         * @param value the IfcStructuralLoadSingleForce datatype to visit
         */
        virtual bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *value) = 0;
        /**
         * Visits the IfcStructuralLoadSingleForceWarping datatype.
         * 
         * @param value the IfcStructuralLoadSingleForceWarping datatype to visit
         */
        virtual bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *value) = 0;
        /**
         * Visits the IfcStructuralLoadStatic datatype.
         * 
         * @param value the IfcStructuralLoadStatic datatype to visit
         */
        virtual bool visitIfcStructuralLoadStatic(IfcStructuralLoadStatic *value) = 0;
        /**
         * Visits the IfcStructuralLoadTemperature datatype.
         * 
         * @param value the IfcStructuralLoadTemperature datatype to visit
         */
        virtual bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *value) = 0;
        /**
         * Visits the IfcStructuralMember datatype.
         * 
         * @param value the IfcStructuralMember datatype to visit
         */
        virtual bool visitIfcStructuralMember(IfcStructuralMember *value) = 0;
        /**
         * Visits the IfcStructuralPlanarAction datatype.
         * 
         * @param value the IfcStructuralPlanarAction datatype to visit
         */
        virtual bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *value) = 0;
        /**
         * Visits the IfcStructuralPlanarActionVarying datatype.
         * 
         * @param value the IfcStructuralPlanarActionVarying datatype to visit
         */
        virtual bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *value) = 0;
        /**
         * Visits the IfcStructuralPointAction datatype.
         * 
         * @param value the IfcStructuralPointAction datatype to visit
         */
        virtual bool visitIfcStructuralPointAction(IfcStructuralPointAction *value) = 0;
        /**
         * Visits the IfcStructuralPointConnection datatype.
         * 
         * @param value the IfcStructuralPointConnection datatype to visit
         */
        virtual bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *value) = 0;
        /**
         * Visits the IfcStructuralPointReaction datatype.
         * 
         * @param value the IfcStructuralPointReaction datatype to visit
         */
        virtual bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *value) = 0;
        /**
         * Visits the IfcStructuralProfileProperties datatype.
         * 
         * @param value the IfcStructuralProfileProperties datatype to visit
         */
        virtual bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *value) = 0;
        /**
         * Visits the IfcStructuralReaction datatype.
         * 
         * @param value the IfcStructuralReaction datatype to visit
         */
        virtual bool visitIfcStructuralReaction(IfcStructuralReaction *value) = 0;
        /**
         * Visits the IfcStructuralResultGroup datatype.
         * 
         * @param value the IfcStructuralResultGroup datatype to visit
         */
        virtual bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *value) = 0;
        /**
         * Visits the IfcStructuralSteelProfileProperties datatype.
         * 
         * @param value the IfcStructuralSteelProfileProperties datatype to visit
         */
        virtual bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *value) = 0;
        /**
         * Visits the IfcStructuralSurfaceConnection datatype.
         * 
         * @param value the IfcStructuralSurfaceConnection datatype to visit
         */
        virtual bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *value) = 0;
        /**
         * Visits the IfcStructuralSurfaceMember datatype.
         * 
         * @param value the IfcStructuralSurfaceMember datatype to visit
         */
        virtual bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *value) = 0;
        /**
         * Visits the IfcStructuralSurfaceMemberVarying datatype.
         * 
         * @param value the IfcStructuralSurfaceMemberVarying datatype to visit
         */
        virtual bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *value) = 0;
        /**
         * Visits the IfcStructuredDimensionCallout datatype.
         * 
         * @param value the IfcStructuredDimensionCallout datatype to visit
         */
        virtual bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *value) = 0;
        /**
         * Visits the IfcStyleModel datatype.
         * 
         * @param value the IfcStyleModel datatype to visit
         */
        virtual bool visitIfcStyleModel(IfcStyleModel *value) = 0;
        /**
         * Visits the IfcStyledItem datatype.
         * 
         * @param value the IfcStyledItem datatype to visit
         */
        virtual bool visitIfcStyledItem(IfcStyledItem *value) = 0;
        /**
         * Visits the IfcStyledRepresentation datatype.
         * 
         * @param value the IfcStyledRepresentation datatype to visit
         */
        virtual bool visitIfcStyledRepresentation(IfcStyledRepresentation *value) = 0;
        /**
         * Visits the IfcSubContractResource datatype.
         * 
         * @param value the IfcSubContractResource datatype to visit
         */
        virtual bool visitIfcSubContractResource(IfcSubContractResource *value) = 0;
        /**
         * Visits the IfcSubedge datatype.
         * 
         * @param value the IfcSubedge datatype to visit
         */
        virtual bool visitIfcSubedge(IfcSubedge *value) = 0;
        /**
         * Visits the IfcSurface datatype.
         * 
         * @param value the IfcSurface datatype to visit
         */
        virtual bool visitIfcSurface(IfcSurface *value) = 0;
        /**
         * Visits the IfcSurfaceCurveSweptAreaSolid datatype.
         * 
         * @param value the IfcSurfaceCurveSweptAreaSolid datatype to visit
         */
        virtual bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *value) = 0;
        /**
         * Visits the IfcSurfaceOfLinearExtrusion datatype.
         * 
         * @param value the IfcSurfaceOfLinearExtrusion datatype to visit
         */
        virtual bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *value) = 0;
        /**
         * Visits the IfcSurfaceOfRevolution datatype.
         * 
         * @param value the IfcSurfaceOfRevolution datatype to visit
         */
        virtual bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *value) = 0;
        /**
         * Visits the IfcSurfaceStyle datatype.
         * 
         * @param value the IfcSurfaceStyle datatype to visit
         */
        virtual bool visitIfcSurfaceStyle(IfcSurfaceStyle *value) = 0;
        /**
         * Visits the IfcSurfaceStyleLighting datatype.
         * 
         * @param value the IfcSurfaceStyleLighting datatype to visit
         */
        virtual bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value) = 0;
        /**
         * Visits the IfcSurfaceStyleRefraction datatype.
         * 
         * @param value the IfcSurfaceStyleRefraction datatype to visit
         */
        virtual bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value) = 0;
        /**
         * Visits the IfcSurfaceStyleRendering datatype.
         * 
         * @param value the IfcSurfaceStyleRendering datatype to visit
         */
        virtual bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *value) = 0;
        /**
         * Visits the IfcSurfaceStyleShading datatype.
         * 
         * @param value the IfcSurfaceStyleShading datatype to visit
         */
        virtual bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *value) = 0;
        /**
         * Visits the IfcSurfaceStyleWithTextures datatype.
         * 
         * @param value the IfcSurfaceStyleWithTextures datatype to visit
         */
        virtual bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value) = 0;
        /**
         * Visits the IfcSurfaceTexture datatype.
         * 
         * @param value the IfcSurfaceTexture datatype to visit
         */
        virtual bool visitIfcSurfaceTexture(IfcSurfaceTexture *value) = 0;
        /**
         * Visits the IfcSweptAreaSolid datatype.
         * 
         * @param value the IfcSweptAreaSolid datatype to visit
         */
        virtual bool visitIfcSweptAreaSolid(IfcSweptAreaSolid *value) = 0;
        /**
         * Visits the IfcSweptDiskSolid datatype.
         * 
         * @param value the IfcSweptDiskSolid datatype to visit
         */
        virtual bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *value) = 0;
        /**
         * Visits the IfcSweptSurface datatype.
         * 
         * @param value the IfcSweptSurface datatype to visit
         */
        virtual bool visitIfcSweptSurface(IfcSweptSurface *value) = 0;
        /**
         * Visits the IfcSwitchingDeviceType datatype.
         * 
         * @param value the IfcSwitchingDeviceType datatype to visit
         */
        virtual bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *value) = 0;
        /**
         * Visits the IfcSymbolStyle datatype.
         * 
         * @param value the IfcSymbolStyle datatype to visit
         */
        virtual bool visitIfcSymbolStyle(IfcSymbolStyle *value) = 0;
        /**
         * Visits the IfcSystem datatype.
         * 
         * @param value the IfcSystem datatype to visit
         */
        virtual bool visitIfcSystem(IfcSystem *value) = 0;
        /**
         * Visits the IfcSystemFurnitureElementType datatype.
         * 
         * @param value the IfcSystemFurnitureElementType datatype to visit
         */
        virtual bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *value) = 0;
        /**
         * Visits the IfcTShapeProfileDef datatype.
         * 
         * @param value the IfcTShapeProfileDef datatype to visit
         */
        virtual bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *value) = 0;
        /**
         * Visits the IfcTable datatype.
         * 
         * @param value the IfcTable datatype to visit
         */
        virtual bool visitIfcTable(IfcTable *value) = 0;
        /**
         * Visits the IfcTableRow datatype.
         * 
         * @param value the IfcTableRow datatype to visit
         */
        virtual bool visitIfcTableRow(IfcTableRow *value) = 0;
        /**
         * Visits the IfcTankType datatype.
         * 
         * @param value the IfcTankType datatype to visit
         */
        virtual bool visitIfcTankType(IfcTankType *value) = 0;
        /**
         * Visits the IfcTask datatype.
         * 
         * @param value the IfcTask datatype to visit
         */
        virtual bool visitIfcTask(IfcTask *value) = 0;
        /**
         * Visits the IfcTelecomAddress datatype.
         * 
         * @param value the IfcTelecomAddress datatype to visit
         */
        virtual bool visitIfcTelecomAddress(IfcTelecomAddress *value) = 0;
        /**
         * Visits the IfcTendon datatype.
         * 
         * @param value the IfcTendon datatype to visit
         */
        virtual bool visitIfcTendon(IfcTendon *value) = 0;
        /**
         * Visits the IfcTendonAnchor datatype.
         * 
         * @param value the IfcTendonAnchor datatype to visit
         */
        virtual bool visitIfcTendonAnchor(IfcTendonAnchor *value) = 0;
        /**
         * Visits the IfcTerminatorSymbol datatype.
         * 
         * @param value the IfcTerminatorSymbol datatype to visit
         */
        virtual bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *value) = 0;
        /**
         * Visits the IfcTextLiteral datatype.
         * 
         * @param value the IfcTextLiteral datatype to visit
         */
        virtual bool visitIfcTextLiteral(IfcTextLiteral *value) = 0;
        /**
         * Visits the IfcTextLiteralWithExtent datatype.
         * 
         * @param value the IfcTextLiteralWithExtent datatype to visit
         */
        virtual bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *value) = 0;
        /**
         * Visits the IfcTextStyle datatype.
         * 
         * @param value the IfcTextStyle datatype to visit
         */
        virtual bool visitIfcTextStyle(IfcTextStyle *value) = 0;
        /**
         * Visits the IfcTextStyleFontModel datatype.
         * 
         * @param value the IfcTextStyleFontModel datatype to visit
         */
        virtual bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *value) = 0;
        /**
         * Visits the IfcTextStyleForDefinedFont datatype.
         * 
         * @param value the IfcTextStyleForDefinedFont datatype to visit
         */
        virtual bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *value) = 0;
        /**
         * Visits the IfcTextStyleTextModel datatype.
         * 
         * @param value the IfcTextStyleTextModel datatype to visit
         */
        virtual bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *value) = 0;
        /**
         * Visits the IfcTextStyleWithBoxCharacteristics datatype.
         * 
         * @param value the IfcTextStyleWithBoxCharacteristics datatype to visit
         */
        virtual bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value) = 0;
        /**
         * Visits the IfcTextureCoordinate datatype.
         * 
         * @param value the IfcTextureCoordinate datatype to visit
         */
        virtual bool visitIfcTextureCoordinate(IfcTextureCoordinate *value) = 0;
        /**
         * Visits the IfcTextureCoordinateGenerator datatype.
         * 
         * @param value the IfcTextureCoordinateGenerator datatype to visit
         */
        virtual bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *value) = 0;
        /**
         * Visits the IfcTextureMap datatype.
         * 
         * @param value the IfcTextureMap datatype to visit
         */
        virtual bool visitIfcTextureMap(IfcTextureMap *value) = 0;
        /**
         * Visits the IfcTextureVertex datatype.
         * 
         * @param value the IfcTextureVertex datatype to visit
         */
        virtual bool visitIfcTextureVertex(IfcTextureVertex *value) = 0;
        /**
         * Visits the IfcThermalMaterialProperties datatype.
         * 
         * @param value the IfcThermalMaterialProperties datatype to visit
         */
        virtual bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *value) = 0;
        /**
         * Visits the IfcTimeSeries datatype.
         * 
         * @param value the IfcTimeSeries datatype to visit
         */
        virtual bool visitIfcTimeSeries(IfcTimeSeries *value) = 0;
        /**
         * Visits the IfcTimeSeriesReferenceRelationship datatype.
         * 
         * @param value the IfcTimeSeriesReferenceRelationship datatype to visit
         */
        virtual bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *value) = 0;
        /**
         * Visits the IfcTimeSeriesSchedule datatype.
         * 
         * @param value the IfcTimeSeriesSchedule datatype to visit
         */
        virtual bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *value) = 0;
        /**
         * Visits the IfcTimeSeriesValue datatype.
         * 
         * @param value the IfcTimeSeriesValue datatype to visit
         */
        virtual bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *value) = 0;
        /**
         * Visits the IfcTopologicalRepresentationItem datatype.
         * 
         * @param value the IfcTopologicalRepresentationItem datatype to visit
         */
        virtual bool visitIfcTopologicalRepresentationItem(IfcTopologicalRepresentationItem *value) = 0;
        /**
         * Visits the IfcTopologyRepresentation datatype.
         * 
         * @param value the IfcTopologyRepresentation datatype to visit
         */
        virtual bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *value) = 0;
        /**
         * Visits the IfcTransformerType datatype.
         * 
         * @param value the IfcTransformerType datatype to visit
         */
        virtual bool visitIfcTransformerType(IfcTransformerType *value) = 0;
        /**
         * Visits the IfcTransportElement datatype.
         * 
         * @param value the IfcTransportElement datatype to visit
         */
        virtual bool visitIfcTransportElement(IfcTransportElement *value) = 0;
        /**
         * Visits the IfcTransportElementType datatype.
         * 
         * @param value the IfcTransportElementType datatype to visit
         */
        virtual bool visitIfcTransportElementType(IfcTransportElementType *value) = 0;
        /**
         * Visits the IfcTrapeziumProfileDef datatype.
         * 
         * @param value the IfcTrapeziumProfileDef datatype to visit
         */
        virtual bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *value) = 0;
        /**
         * Visits the IfcTrimmedCurve datatype.
         * 
         * @param value the IfcTrimmedCurve datatype to visit
         */
        virtual bool visitIfcTrimmedCurve(IfcTrimmedCurve *value) = 0;
        /**
         * Visits the IfcTubeBundleType datatype.
         * 
         * @param value the IfcTubeBundleType datatype to visit
         */
        virtual bool visitIfcTubeBundleType(IfcTubeBundleType *value) = 0;
        /**
         * Visits the IfcTwoDirectionRepeatFactor datatype.
         * 
         * @param value the IfcTwoDirectionRepeatFactor datatype to visit
         */
        virtual bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *value) = 0;
        /**
         * Visits the IfcTypeObject datatype.
         * 
         * @param value the IfcTypeObject datatype to visit
         */
        virtual bool visitIfcTypeObject(IfcTypeObject *value) = 0;
        /**
         * Visits the IfcTypeProduct datatype.
         * 
         * @param value the IfcTypeProduct datatype to visit
         */
        virtual bool visitIfcTypeProduct(IfcTypeProduct *value) = 0;
        /**
         * Visits the IfcUShapeProfileDef datatype.
         * 
         * @param value the IfcUShapeProfileDef datatype to visit
         */
        virtual bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *value) = 0;
        /**
         * Visits the IfcUnitAssignment datatype.
         * 
         * @param value the IfcUnitAssignment datatype to visit
         */
        virtual bool visitIfcUnitAssignment(IfcUnitAssignment *value) = 0;
        /**
         * Visits the IfcUnitaryEquipmentType datatype.
         * 
         * @param value the IfcUnitaryEquipmentType datatype to visit
         */
        virtual bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *value) = 0;
        /**
         * Visits the IfcValveType datatype.
         * 
         * @param value the IfcValveType datatype to visit
         */
        virtual bool visitIfcValveType(IfcValveType *value) = 0;
        /**
         * Visits the IfcVector datatype.
         * 
         * @param value the IfcVector datatype to visit
         */
        virtual bool visitIfcVector(IfcVector *value) = 0;
        /**
         * Visits the IfcVertex datatype.
         * 
         * @param value the IfcVertex datatype to visit
         */
        virtual bool visitIfcVertex(IfcVertex *value) = 0;
        /**
         * Visits the IfcVertexBasedTextureMap datatype.
         * 
         * @param value the IfcVertexBasedTextureMap datatype to visit
         */
        virtual bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *value) = 0;
        /**
         * Visits the IfcVertexLoop datatype.
         * 
         * @param value the IfcVertexLoop datatype to visit
         */
        virtual bool visitIfcVertexLoop(IfcVertexLoop *value) = 0;
        /**
         * Visits the IfcVertexPoint datatype.
         * 
         * @param value the IfcVertexPoint datatype to visit
         */
        virtual bool visitIfcVertexPoint(IfcVertexPoint *value) = 0;
        /**
         * Visits the IfcVibrationIsolatorType datatype.
         * 
         * @param value the IfcVibrationIsolatorType datatype to visit
         */
        virtual bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *value) = 0;
        /**
         * Visits the IfcVirtualElement datatype.
         * 
         * @param value the IfcVirtualElement datatype to visit
         */
        virtual bool visitIfcVirtualElement(IfcVirtualElement *value) = 0;
        /**
         * Visits the IfcVirtualGridIntersection datatype.
         * 
         * @param value the IfcVirtualGridIntersection datatype to visit
         */
        virtual bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *value) = 0;
        /**
         * Visits the IfcWall datatype.
         * 
         * @param value the IfcWall datatype to visit
         */
        virtual bool visitIfcWall(IfcWall *value) = 0;
        /**
         * Visits the IfcWallStandardCase datatype.
         * 
         * @param value the IfcWallStandardCase datatype to visit
         */
        virtual bool visitIfcWallStandardCase(IfcWallStandardCase *value) = 0;
        /**
         * Visits the IfcWallType datatype.
         * 
         * @param value the IfcWallType datatype to visit
         */
        virtual bool visitIfcWallType(IfcWallType *value) = 0;
        /**
         * Visits the IfcWasteTerminalType datatype.
         * 
         * @param value the IfcWasteTerminalType datatype to visit
         */
        virtual bool visitIfcWasteTerminalType(IfcWasteTerminalType *value) = 0;
        /**
         * Visits the IfcWaterProperties datatype.
         * 
         * @param value the IfcWaterProperties datatype to visit
         */
        virtual bool visitIfcWaterProperties(IfcWaterProperties *value) = 0;
        /**
         * Visits the IfcWindow datatype.
         * 
         * @param value the IfcWindow datatype to visit
         */
        virtual bool visitIfcWindow(IfcWindow *value) = 0;
        /**
         * Visits the IfcWindowLiningProperties datatype.
         * 
         * @param value the IfcWindowLiningProperties datatype to visit
         */
        virtual bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *value) = 0;
        /**
         * Visits the IfcWindowPanelProperties datatype.
         * 
         * @param value the IfcWindowPanelProperties datatype to visit
         */
        virtual bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *value) = 0;
        /**
         * Visits the IfcWindowStyle datatype.
         * 
         * @param value the IfcWindowStyle datatype to visit
         */
        virtual bool visitIfcWindowStyle(IfcWindowStyle *value) = 0;
        /**
         * Visits the IfcWorkControl datatype.
         * 
         * @param value the IfcWorkControl datatype to visit
         */
        virtual bool visitIfcWorkControl(IfcWorkControl *value) = 0;
        /**
         * Visits the IfcWorkPlan datatype.
         * 
         * @param value the IfcWorkPlan datatype to visit
         */
        virtual bool visitIfcWorkPlan(IfcWorkPlan *value) = 0;
        /**
         * Visits the IfcWorkSchedule datatype.
         * 
         * @param value the IfcWorkSchedule datatype to visit
         */
        virtual bool visitIfcWorkSchedule(IfcWorkSchedule *value) = 0;
        /**
         * Visits the IfcZShapeProfileDef datatype.
         * 
         * @param value the IfcZShapeProfileDef datatype to visit
         */
        virtual bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *value) = 0;
        /**
         * Visits the IfcZone datatype.
         * 
         * @param value the IfcZone datatype to visit
         */
        virtual bool visitIfcZone(IfcZone *value) = 0;

    };

}

#endif // IFC2X3_VISITOR_H
