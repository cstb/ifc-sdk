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

#ifndef IFC2X3_SPFWRITER_H
#define IFC2X3_SPFWRITER_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/InheritVisitor.h>
#include <Step/BaseSPFWriter.h>
#include <string>

namespace ifc2x3 {

    class ExpressDataSet;
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
     * This is the specific SPF writer for the generated schema.
     *
     * It is constructed with a specific ExpressDataSet instance.
     * It is used by calling the writeSPF method.
     *
     */
    class IFC2X3_EXPORT SPFWriter : public Step::BaseSPFWriter, public InheritVisitor {
    public:
        /**
         * Default Constructor, needs a valid ExpressDataSet.
         *
         * @param expressDataSet The instance content to be written
         */
        SPFWriter(ExpressDataSet *expressDataSet);
        ~SPFWriter() override;

        /**
         * Call this method to write the content of the ExpressDataSet instance to a stream.
         *
         * @param filestream Stream to write to.
         */
        bool write(std::ostream& filestream) override;

        /**
         * write the Ifc2DCompositeCurve datatype to m_out.
         *
         * @param value the Ifc2DCompositeCurve datatype to write
         */
        bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *value) override;
        /**
         * write the IfcActionRequest datatype to m_out.
         *
         * @param value the IfcActionRequest datatype to write
         */
        bool visitIfcActionRequest(IfcActionRequest *value) override;
        /**
         * @param selectData
         */
        void writeIfcActorSelect(IfcActorSelect *selectData);
        /**
         * write the IfcActor datatype to m_out.
         *
         * @param value the IfcActor datatype to write
         */
        bool visitIfcActor(IfcActor *value) override;
        /**
         * @param enumData
         */
        void writeIfcRoleEnum(IfcRoleEnum enumData);
        /**
         * write the IfcActorRole datatype to m_out.
         *
         * @param value the IfcActorRole datatype to write
         */
        bool visitIfcActorRole(IfcActorRole *value) override;
        /**
         * @param enumData
         */
        void writeIfcActuatorTypeEnum(IfcActuatorTypeEnum enumData);
        /**
         * write the IfcActuatorType datatype to m_out.
         *
         * @param value the IfcActuatorType datatype to write
         */
        bool visitIfcActuatorType(IfcActuatorType *value) override;
        /**
         * @param enumData
         */
        void writeIfcAddressTypeEnum(IfcAddressTypeEnum enumData);
        /**
         * write the IfcAddress datatype to m_out.
         *
         * @param value the IfcAddress datatype to write
         */
        bool visitIfcAddress(IfcAddress *value) override;
        /**
         * @param enumData
         */
        void writeIfcAirTerminalBoxTypeEnum(IfcAirTerminalBoxTypeEnum enumData);
        /**
         * write the IfcAirTerminalBoxType datatype to m_out.
         *
         * @param value the IfcAirTerminalBoxType datatype to write
         */
        bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *value) override;
        /**
         * @param enumData
         */
        void writeIfcAirTerminalTypeEnum(IfcAirTerminalTypeEnum enumData);
        /**
         * write the IfcAirTerminalType datatype to m_out.
         *
         * @param value the IfcAirTerminalType datatype to write
         */
        bool visitIfcAirTerminalType(IfcAirTerminalType *value) override;
        /**
         * @param enumData
         */
        void writeIfcAirToAirHeatRecoveryTypeEnum(IfcAirToAirHeatRecoveryTypeEnum enumData);
        /**
         * write the IfcAirToAirHeatRecoveryType datatype to m_out.
         *
         * @param value the IfcAirToAirHeatRecoveryType datatype to write
         */
        bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *value) override;
        /**
         * @param enumData
         */
        void writeIfcAlarmTypeEnum(IfcAlarmTypeEnum enumData);
        /**
         * write the IfcAlarmType datatype to m_out.
         *
         * @param value the IfcAlarmType datatype to write
         */
        bool visitIfcAlarmType(IfcAlarmType *value) override;
        /**
         * @param selectData
         */
        void writeIfcDraughtingCalloutElement(IfcDraughtingCalloutElement *selectData);
        /**
         * write the IfcAngularDimension datatype to m_out.
         *
         * @param value the IfcAngularDimension datatype to write
         */
        bool visitIfcAngularDimension(IfcAngularDimension *value) override;
        /**
         * write the IfcAnnotation datatype to m_out.
         *
         * @param value the IfcAnnotation datatype to write
         */
        bool visitIfcAnnotation(IfcAnnotation *value) override;
        /**
         * write the IfcAnnotationCurveOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationCurveOccurrence datatype to write
         */
        bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value) override;
        /**
         * write the IfcAnnotationFillArea datatype to m_out.
         *
         * @param value the IfcAnnotationFillArea datatype to write
         */
        bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *value) override;
        /**
         * @param enumData
         */
        void writeIfcGlobalOrLocalEnum(IfcGlobalOrLocalEnum enumData);
        /**
         * write the IfcAnnotationFillAreaOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationFillAreaOccurrence datatype to write
         */
        bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *value) override;
        /**
         * write the IfcAnnotationOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationOccurrence datatype to write
         */
        bool visitIfcAnnotationOccurrence(IfcAnnotationOccurrence *value) override;
        /**
         * write the IfcAnnotationSurface datatype to m_out.
         *
         * @param value the IfcAnnotationSurface datatype to write
         */
        bool visitIfcAnnotationSurface(IfcAnnotationSurface *value) override;
        /**
         * write the IfcAnnotationSurfaceOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationSurfaceOccurrence datatype to write
         */
        bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *value) override;
        /**
         * write the IfcAnnotationSymbolOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationSymbolOccurrence datatype to write
         */
        bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value) override;
        /**
         * write the IfcAnnotationTextOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationTextOccurrence datatype to write
         */
        bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value) override;
        /**
         * write the IfcApplication datatype to m_out.
         *
         * @param value the IfcApplication datatype to write
         */
        bool visitIfcApplication(IfcApplication *value) override;
        /**
         * @param selectData
         */
        void writeIfcAppliedValueSelect(IfcAppliedValueSelect *selectData);
        /**
         * @param selectData
         */
        void writeIfcDateTimeSelect(IfcDateTimeSelect *selectData);
        /**
         * write the IfcAppliedValue datatype to m_out.
         *
         * @param value the IfcAppliedValue datatype to write
         */
        bool visitIfcAppliedValue(IfcAppliedValue *value) override;
        /**
         * @param enumData
         */
        void writeIfcArithmeticOperatorEnum(IfcArithmeticOperatorEnum enumData);
        /**
         * write the IfcAppliedValueRelationship datatype to m_out.
         *
         * @param value the IfcAppliedValueRelationship datatype to write
         */
        bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *value) override;
        /**
         * write the IfcApproval datatype to m_out.
         *
         * @param value the IfcApproval datatype to write
         */
        bool visitIfcApproval(IfcApproval *value) override;
        /**
         * write the IfcApprovalActorRelationship datatype to m_out.
         *
         * @param value the IfcApprovalActorRelationship datatype to write
         */
        bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *value) override;
        /**
         * write the IfcApprovalPropertyRelationship datatype to m_out.
         *
         * @param value the IfcApprovalPropertyRelationship datatype to write
         */
        bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *value) override;
        /**
         * write the IfcApprovalRelationship datatype to m_out.
         *
         * @param value the IfcApprovalRelationship datatype to write
         */
        bool visitIfcApprovalRelationship(IfcApprovalRelationship *value) override;
        /**
         * @param enumData
         */
        void writeIfcProfileTypeEnum(IfcProfileTypeEnum enumData);
        /**
         * write the IfcArbitraryClosedProfileDef datatype to m_out.
         *
         * @param value the IfcArbitraryClosedProfileDef datatype to write
         */
        bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *value) override;
        /**
         * write the IfcArbitraryOpenProfileDef datatype to m_out.
         *
         * @param value the IfcArbitraryOpenProfileDef datatype to write
         */
        bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *value) override;
        /**
         * write the IfcArbitraryProfileDefWithVoids datatype to m_out.
         *
         * @param value the IfcArbitraryProfileDefWithVoids datatype to write
         */
        bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *value) override;
        /**
         * write the IfcAsset datatype to m_out.
         *
         * @param value the IfcAsset datatype to write
         */
        bool visitIfcAsset(IfcAsset *value) override;
        /**
         * write the IfcAsymmetricIShapeProfileDef datatype to m_out.
         *
         * @param value the IfcAsymmetricIShapeProfileDef datatype to write
         */
        bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *value) override;
        /**
         * write the IfcAxis1Placement datatype to m_out.
         *
         * @param value the IfcAxis1Placement datatype to write
         */
        bool visitIfcAxis1Placement(IfcAxis1Placement *value) override;
        /**
         * write the IfcAxis2Placement2D datatype to m_out.
         *
         * @param value the IfcAxis2Placement2D datatype to write
         */
        bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *value) override;
        /**
         * write the IfcAxis2Placement3D datatype to m_out.
         *
         * @param value the IfcAxis2Placement3D datatype to write
         */
        bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *value) override;
        /**
         * @param enumData
         */
        void writeIfcBSplineCurveForm(IfcBSplineCurveForm enumData);
        /**
         * write the IfcBSplineCurve datatype to m_out.
         *
         * @param value the IfcBSplineCurve datatype to write
         */
        bool visitIfcBSplineCurve(IfcBSplineCurve *value) override;
        /**
         * write the IfcBeam datatype to m_out.
         *
         * @param value the IfcBeam datatype to write
         */
        bool visitIfcBeam(IfcBeam *value) override;
        /**
         * @param enumData
         */
        void writeIfcBeamTypeEnum(IfcBeamTypeEnum enumData);
        /**
         * write the IfcBeamType datatype to m_out.
         *
         * @param value the IfcBeamType datatype to write
         */
        bool visitIfcBeamType(IfcBeamType *value) override;
        /**
         * write the IfcBezierCurve datatype to m_out.
         *
         * @param value the IfcBezierCurve datatype to write
         */
        bool visitIfcBezierCurve(IfcBezierCurve *value) override;
        /**
         * @param enumData
         */
        void writeIfcSurfaceTextureEnum(IfcSurfaceTextureEnum enumData);
        /**
         * write the IfcBlobTexture datatype to m_out.
         *
         * @param value the IfcBlobTexture datatype to write
         */
        bool visitIfcBlobTexture(IfcBlobTexture *value) override;
        /**
         * write the IfcBlock datatype to m_out.
         *
         * @param value the IfcBlock datatype to write
         */
        bool visitIfcBlock(IfcBlock *value) override;
        /**
         * @param enumData
         */
        void writeIfcBoilerTypeEnum(IfcBoilerTypeEnum enumData);
        /**
         * write the IfcBoilerType datatype to m_out.
         *
         * @param value the IfcBoilerType datatype to write
         */
        bool visitIfcBoilerType(IfcBoilerType *value) override;
        /**
         * @param enumData
         */
        void writeIfcBooleanOperator(IfcBooleanOperator enumData);
        /**
         * @param selectData
         */
        void writeIfcBooleanOperand(IfcBooleanOperand *selectData);
        /**
         * write the IfcBooleanClippingResult datatype to m_out.
         *
         * @param value the IfcBooleanClippingResult datatype to write
         */
        bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *value) override;
        /**
         * write the IfcBooleanResult datatype to m_out.
         *
         * @param value the IfcBooleanResult datatype to write
         */
        bool visitIfcBooleanResult(IfcBooleanResult *value) override;
        /**
         * write the IfcBoundaryCondition datatype to m_out.
         *
         * @param value the IfcBoundaryCondition datatype to write
         */
        bool visitIfcBoundaryCondition(IfcBoundaryCondition *value) override;
        /**
         * write the IfcBoundaryEdgeCondition datatype to m_out.
         *
         * @param value the IfcBoundaryEdgeCondition datatype to write
         */
        bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *value) override;
        /**
         * write the IfcBoundaryFaceCondition datatype to m_out.
         *
         * @param value the IfcBoundaryFaceCondition datatype to write
         */
        bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *value) override;
        /**
         * write the IfcBoundaryNodeCondition datatype to m_out.
         *
         * @param value the IfcBoundaryNodeCondition datatype to write
         */
        bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *value) override;
        /**
         * write the IfcBoundaryNodeConditionWarping datatype to m_out.
         *
         * @param value the IfcBoundaryNodeConditionWarping datatype to write
         */
        bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *value) override;
        /**
         * write the IfcBoundedCurve datatype to m_out.
         *
         * @param value the IfcBoundedCurve datatype to write
         */
        bool visitIfcBoundedCurve(IfcBoundedCurve *value) override;
        /**
         * write the IfcBoundedSurface datatype to m_out.
         *
         * @param value the IfcBoundedSurface datatype to write
         */
        bool visitIfcBoundedSurface(IfcBoundedSurface *value) override;
        /**
         * write the IfcBoundingBox datatype to m_out.
         *
         * @param value the IfcBoundingBox datatype to write
         */
        bool visitIfcBoundingBox(IfcBoundingBox *value) override;
        /**
         * write the IfcBoxedHalfSpace datatype to m_out.
         *
         * @param value the IfcBoxedHalfSpace datatype to write
         */
        bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *value) override;
        /**
         * @param enumData
         */
        void writeIfcElementCompositionEnum(IfcElementCompositionEnum enumData);
        /**
         * write the IfcBuilding datatype to m_out.
         *
         * @param value the IfcBuilding datatype to write
         */
        bool visitIfcBuilding(IfcBuilding *value) override;
        /**
         * write the IfcBuildingElement datatype to m_out.
         *
         * @param value the IfcBuildingElement datatype to write
         */
        bool visitIfcBuildingElement(IfcBuildingElement *value) override;
        /**
         * write the IfcBuildingElementComponent datatype to m_out.
         *
         * @param value the IfcBuildingElementComponent datatype to write
         */
        bool visitIfcBuildingElementComponent(IfcBuildingElementComponent *value) override;
        /**
         * write the IfcBuildingElementPart datatype to m_out.
         *
         * @param value the IfcBuildingElementPart datatype to write
         */
        bool visitIfcBuildingElementPart(IfcBuildingElementPart *value) override;
        /**
         * write the IfcBuildingElementProxy datatype to m_out.
         *
         * @param value the IfcBuildingElementProxy datatype to write
         */
        bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *value) override;
        /**
         * @param enumData
         */
        void writeIfcBuildingElementProxyTypeEnum(IfcBuildingElementProxyTypeEnum enumData);
        /**
         * write the IfcBuildingElementProxyType datatype to m_out.
         *
         * @param value the IfcBuildingElementProxyType datatype to write
         */
        bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *value) override;
        /**
         * write the IfcBuildingElementType datatype to m_out.
         *
         * @param value the IfcBuildingElementType datatype to write
         */
        bool visitIfcBuildingElementType(IfcBuildingElementType *value) override;
        /**
         * write the IfcBuildingStorey datatype to m_out.
         *
         * @param value the IfcBuildingStorey datatype to write
         */
        bool visitIfcBuildingStorey(IfcBuildingStorey *value) override;
        /**
         * write the IfcCShapeProfileDef datatype to m_out.
         *
         * @param value the IfcCShapeProfileDef datatype to write
         */
        bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *value) override;
        /**
         * @param enumData
         */
        void writeIfcCableCarrierFittingTypeEnum(IfcCableCarrierFittingTypeEnum enumData);
        /**
         * write the IfcCableCarrierFittingType datatype to m_out.
         *
         * @param value the IfcCableCarrierFittingType datatype to write
         */
        bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *value) override;
        /**
         * @param enumData
         */
        void writeIfcCableCarrierSegmentTypeEnum(IfcCableCarrierSegmentTypeEnum enumData);
        /**
         * write the IfcCableCarrierSegmentType datatype to m_out.
         *
         * @param value the IfcCableCarrierSegmentType datatype to write
         */
        bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *value) override;
        /**
         * @param enumData
         */
        void writeIfcCableSegmentTypeEnum(IfcCableSegmentTypeEnum enumData);
        /**
         * write the IfcCableSegmentType datatype to m_out.
         *
         * @param value the IfcCableSegmentType datatype to write
         */
        bool visitIfcCableSegmentType(IfcCableSegmentType *value) override;
        /**
         * write the IfcCalendarDate datatype to m_out.
         *
         * @param value the IfcCalendarDate datatype to write
         */
        bool visitIfcCalendarDate(IfcCalendarDate *value) override;
        /**
         * write the IfcCartesianPoint datatype to m_out.
         *
         * @param value the IfcCartesianPoint datatype to write
         */
        bool visitIfcCartesianPoint(IfcCartesianPoint *value) override;
        /**
         * write the IfcCartesianTransformationOperator datatype to m_out.
         *
         * @param value the IfcCartesianTransformationOperator datatype to write
         */
        bool visitIfcCartesianTransformationOperator(IfcCartesianTransformationOperator *value) override;
        /**
         * write the IfcCartesianTransformationOperator2D datatype to m_out.
         *
         * @param value the IfcCartesianTransformationOperator2D datatype to write
         */
        bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *value) override;
        /**
         * write the IfcCartesianTransformationOperator2DnonUniform datatype to m_out.
         *
         * @param value the IfcCartesianTransformationOperator2DnonUniform datatype to write
         */
        bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *value) override;
        /**
         * write the IfcCartesianTransformationOperator3D datatype to m_out.
         *
         * @param value the IfcCartesianTransformationOperator3D datatype to write
         */
        bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *value) override;
        /**
         * write the IfcCartesianTransformationOperator3DnonUniform datatype to m_out.
         *
         * @param value the IfcCartesianTransformationOperator3DnonUniform datatype to write
         */
        bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *value) override;
        /**
         * write the IfcCenterLineProfileDef datatype to m_out.
         *
         * @param value the IfcCenterLineProfileDef datatype to write
         */
        bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *value) override;
        /**
         * write the IfcChamferEdgeFeature datatype to m_out.
         *
         * @param value the IfcChamferEdgeFeature datatype to write
         */
        bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *value) override;
        /**
         * @param enumData
         */
        void writeIfcChillerTypeEnum(IfcChillerTypeEnum enumData);
        /**
         * write the IfcChillerType datatype to m_out.
         *
         * @param value the IfcChillerType datatype to write
         */
        bool visitIfcChillerType(IfcChillerType *value) override;
        /**
         * @param selectData
         */
        void writeIfcAxis2Placement(IfcAxis2Placement *selectData);
        /**
         * write the IfcCircle datatype to m_out.
         *
         * @param value the IfcCircle datatype to write
         */
        bool visitIfcCircle(IfcCircle *value) override;
        /**
         * write the IfcCircleHollowProfileDef datatype to m_out.
         *
         * @param value the IfcCircleHollowProfileDef datatype to write
         */
        bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *value) override;
        /**
         * write the IfcCircleProfileDef datatype to m_out.
         *
         * @param value the IfcCircleProfileDef datatype to write
         */
        bool visitIfcCircleProfileDef(IfcCircleProfileDef *value) override;
        /**
         * write the IfcClassification datatype to m_out.
         *
         * @param value the IfcClassification datatype to write
         */
        bool visitIfcClassification(IfcClassification *value) override;
        /**
         * write the IfcClassificationItem datatype to m_out.
         *
         * @param value the IfcClassificationItem datatype to write
         */
        bool visitIfcClassificationItem(IfcClassificationItem *value) override;
        /**
         * write the IfcClassificationItemRelationship datatype to m_out.
         *
         * @param value the IfcClassificationItemRelationship datatype to write
         */
        bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *value) override;
        /**
         * write the IfcClassificationNotation datatype to m_out.
         *
         * @param value the IfcClassificationNotation datatype to write
         */
        bool visitIfcClassificationNotation(IfcClassificationNotation *value) override;
        /**
         * write the IfcClassificationNotationFacet datatype to m_out.
         *
         * @param value the IfcClassificationNotationFacet datatype to write
         */
        bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *value) override;
        /**
         * write the IfcClassificationReference datatype to m_out.
         *
         * @param value the IfcClassificationReference datatype to write
         */
        bool visitIfcClassificationReference(IfcClassificationReference *value) override;
        /**
         * write the IfcClosedShell datatype to m_out.
         *
         * @param value the IfcClosedShell datatype to write
         */
        bool visitIfcClosedShell(IfcClosedShell *value) override;
        /**
         * @param enumData
         */
        void writeIfcCoilTypeEnum(IfcCoilTypeEnum enumData);
        /**
         * write the IfcCoilType datatype to m_out.
         *
         * @param value the IfcCoilType datatype to write
         */
        bool visitIfcCoilType(IfcCoilType *value) override;
        /**
         * write the IfcColourRgb datatype to m_out.
         *
         * @param value the IfcColourRgb datatype to write
         */
        bool visitIfcColourRgb(IfcColourRgb *value) override;
        /**
         * write the IfcColourSpecification datatype to m_out.
         *
         * @param value the IfcColourSpecification datatype to write
         */
        bool visitIfcColourSpecification(IfcColourSpecification *value) override;
        /**
         * write the IfcColumn datatype to m_out.
         *
         * @param value the IfcColumn datatype to write
         */
        bool visitIfcColumn(IfcColumn *value) override;
        /**
         * @param enumData
         */
        void writeIfcColumnTypeEnum(IfcColumnTypeEnum enumData);
        /**
         * write the IfcColumnType datatype to m_out.
         *
         * @param value the IfcColumnType datatype to write
         */
        bool visitIfcColumnType(IfcColumnType *value) override;
        /**
         * write the IfcComplexProperty datatype to m_out.
         *
         * @param value the IfcComplexProperty datatype to write
         */
        bool visitIfcComplexProperty(IfcComplexProperty *value) override;
        /**
         * write the IfcCompositeCurve datatype to m_out.
         *
         * @param value the IfcCompositeCurve datatype to write
         */
        bool visitIfcCompositeCurve(IfcCompositeCurve *value) override;
        /**
         * @param enumData
         */
        void writeIfcTransitionCode(IfcTransitionCode enumData);
        /**
         * write the IfcCompositeCurveSegment datatype to m_out.
         *
         * @param value the IfcCompositeCurveSegment datatype to write
         */
        bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *value) override;
        /**
         * write the IfcCompositeProfileDef datatype to m_out.
         *
         * @param value the IfcCompositeProfileDef datatype to write
         */
        bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *value) override;
        /**
         * @param enumData
         */
        void writeIfcCompressorTypeEnum(IfcCompressorTypeEnum enumData);
        /**
         * write the IfcCompressorType datatype to m_out.
         *
         * @param value the IfcCompressorType datatype to write
         */
        bool visitIfcCompressorType(IfcCompressorType *value) override;
        /**
         * @param enumData
         */
        void writeIfcCondenserTypeEnum(IfcCondenserTypeEnum enumData);
        /**
         * write the IfcCondenserType datatype to m_out.
         *
         * @param value the IfcCondenserType datatype to write
         */
        bool visitIfcCondenserType(IfcCondenserType *value) override;
        /**
         * write the IfcCondition datatype to m_out.
         *
         * @param value the IfcCondition datatype to write
         */
        bool visitIfcCondition(IfcCondition *value) override;
        /**
         * @param selectData
         */
        void writeIfcConditionCriterionSelect(IfcConditionCriterionSelect *selectData);
        /**
         * write the IfcConditionCriterion datatype to m_out.
         *
         * @param value the IfcConditionCriterion datatype to write
         */
        bool visitIfcConditionCriterion(IfcConditionCriterion *value) override;
        /**
         * write the IfcConic datatype to m_out.
         *
         * @param value the IfcConic datatype to write
         */
        bool visitIfcConic(IfcConic *value) override;
        /**
         * write the IfcConnectedFaceSet datatype to m_out.
         *
         * @param value the IfcConnectedFaceSet datatype to write
         */
        bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *value) override;
        /**
         * @param selectData
         */
        void writeIfcCurveOrEdgeCurve(IfcCurveOrEdgeCurve *selectData);
        /**
         * write the IfcConnectionCurveGeometry datatype to m_out.
         *
         * @param value the IfcConnectionCurveGeometry datatype to write
         */
        bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *value) override;
        /**
         * write the IfcConnectionGeometry datatype to m_out.
         *
         * @param value the IfcConnectionGeometry datatype to write
         */
        bool visitIfcConnectionGeometry(IfcConnectionGeometry *value) override;
        /**
         * @param selectData
         */
        void writeIfcPointOrVertexPoint(IfcPointOrVertexPoint *selectData);
        /**
         * write the IfcConnectionPointEccentricity datatype to m_out.
         *
         * @param value the IfcConnectionPointEccentricity datatype to write
         */
        bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *value) override;
        /**
         * write the IfcConnectionPointGeometry datatype to m_out.
         *
         * @param value the IfcConnectionPointGeometry datatype to write
         */
        bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *value) override;
        /**
         * write the IfcConnectionPortGeometry datatype to m_out.
         *
         * @param value the IfcConnectionPortGeometry datatype to write
         */
        bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *value) override;
        /**
         * @param selectData
         */
        void writeIfcSurfaceOrFaceSurface(IfcSurfaceOrFaceSurface *selectData);
        /**
         * write the IfcConnectionSurfaceGeometry datatype to m_out.
         *
         * @param value the IfcConnectionSurfaceGeometry datatype to write
         */
        bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *value) override;
        /**
         * @param enumData
         */
        void writeIfcConstraintEnum(IfcConstraintEnum enumData);
        /**
         * write the IfcConstraint datatype to m_out.
         *
         * @param value the IfcConstraint datatype to write
         */
        bool visitIfcConstraint(IfcConstraint *value) override;
        /**
         * @param enumData
         */
        void writeIfcLogicalOperatorEnum(IfcLogicalOperatorEnum enumData);
        /**
         * write the IfcConstraintAggregationRelationship datatype to m_out.
         *
         * @param value the IfcConstraintAggregationRelationship datatype to write
         */
        bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *value) override;
        /**
         * @param selectData
         */
        void writeIfcClassificationNotationSelect(IfcClassificationNotationSelect *selectData);
        /**
         * write the IfcConstraintClassificationRelationship datatype to m_out.
         *
         * @param value the IfcConstraintClassificationRelationship datatype to write
         */
        bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *value) override;
        /**
         * write the IfcConstraintRelationship datatype to m_out.
         *
         * @param value the IfcConstraintRelationship datatype to write
         */
        bool visitIfcConstraintRelationship(IfcConstraintRelationship *value) override;
        /**
         * @param enumData
         */
        void writeIfcResourceConsumptionEnum(IfcResourceConsumptionEnum enumData);
        /**
         * write the IfcConstructionEquipmentResource datatype to m_out.
         *
         * @param value the IfcConstructionEquipmentResource datatype to write
         */
        bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *value) override;
        /**
         * write the IfcConstructionMaterialResource datatype to m_out.
         *
         * @param value the IfcConstructionMaterialResource datatype to write
         */
        bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *value) override;
        /**
         * write the IfcConstructionProductResource datatype to m_out.
         *
         * @param value the IfcConstructionProductResource datatype to write
         */
        bool visitIfcConstructionProductResource(IfcConstructionProductResource *value) override;
        /**
         * write the IfcConstructionResource datatype to m_out.
         *
         * @param value the IfcConstructionResource datatype to write
         */
        bool visitIfcConstructionResource(IfcConstructionResource *value) override;
        /**
         * @param enumData
         */
        void writeIfcUnitEnum(IfcUnitEnum enumData);
        /**
         * write the IfcContextDependentUnit datatype to m_out.
         *
         * @param value the IfcContextDependentUnit datatype to write
         */
        bool visitIfcContextDependentUnit(IfcContextDependentUnit *value) override;
        /**
         * write the IfcControl datatype to m_out.
         *
         * @param value the IfcControl datatype to write
         */
        bool visitIfcControl(IfcControl *value) override;
        /**
         * @param enumData
         */
        void writeIfcControllerTypeEnum(IfcControllerTypeEnum enumData);
        /**
         * write the IfcControllerType datatype to m_out.
         *
         * @param value the IfcControllerType datatype to write
         */
        bool visitIfcControllerType(IfcControllerType *value) override;
        /**
         * write the IfcConversionBasedUnit datatype to m_out.
         *
         * @param value the IfcConversionBasedUnit datatype to write
         */
        bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *value) override;
        /**
         * @param enumData
         */
        void writeIfcCooledBeamTypeEnum(IfcCooledBeamTypeEnum enumData);
        /**
         * write the IfcCooledBeamType datatype to m_out.
         *
         * @param value the IfcCooledBeamType datatype to write
         */
        bool visitIfcCooledBeamType(IfcCooledBeamType *value) override;
        /**
         * @param enumData
         */
        void writeIfcCoolingTowerTypeEnum(IfcCoolingTowerTypeEnum enumData);
        /**
         * write the IfcCoolingTowerType datatype to m_out.
         *
         * @param value the IfcCoolingTowerType datatype to write
         */
        bool visitIfcCoolingTowerType(IfcCoolingTowerType *value) override;
        /**
         * @param enumData
         */
        void writeIfcAheadOrBehind(IfcAheadOrBehind enumData);
        /**
         * write the IfcCoordinatedUniversalTimeOffset datatype to m_out.
         *
         * @param value the IfcCoordinatedUniversalTimeOffset datatype to write
         */
        bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *value) override;
        /**
         * write the IfcCostItem datatype to m_out.
         *
         * @param value the IfcCostItem datatype to write
         */
        bool visitIfcCostItem(IfcCostItem *value) override;
        /**
         * @param enumData
         */
        void writeIfcCostScheduleTypeEnum(IfcCostScheduleTypeEnum enumData);
        /**
         * write the IfcCostSchedule datatype to m_out.
         *
         * @param value the IfcCostSchedule datatype to write
         */
        bool visitIfcCostSchedule(IfcCostSchedule *value) override;
        /**
         * write the IfcCostValue datatype to m_out.
         *
         * @param value the IfcCostValue datatype to write
         */
        bool visitIfcCostValue(IfcCostValue *value) override;
        /**
         * @param enumData
         */
        void writeIfcCoveringTypeEnum(IfcCoveringTypeEnum enumData);
        /**
         * write the IfcCovering datatype to m_out.
         *
         * @param value the IfcCovering datatype to write
         */
        bool visitIfcCovering(IfcCovering *value) override;
        /**
         * write the IfcCoveringType datatype to m_out.
         *
         * @param value the IfcCoveringType datatype to write
         */
        bool visitIfcCoveringType(IfcCoveringType *value) override;
        /**
         * write the IfcCraneRailAShapeProfileDef datatype to m_out.
         *
         * @param value the IfcCraneRailAShapeProfileDef datatype to write
         */
        bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *value) override;
        /**
         * write the IfcCraneRailFShapeProfileDef datatype to m_out.
         *
         * @param value the IfcCraneRailFShapeProfileDef datatype to write
         */
        bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *value) override;
        /**
         * write the IfcCrewResource datatype to m_out.
         *
         * @param value the IfcCrewResource datatype to write
         */
        bool visitIfcCrewResource(IfcCrewResource *value) override;
        /**
         * write the IfcCsgPrimitive3D datatype to m_out.
         *
         * @param value the IfcCsgPrimitive3D datatype to write
         */
        bool visitIfcCsgPrimitive3D(IfcCsgPrimitive3D *value) override;
        /**
         * @param selectData
         */
        void writeIfcCsgSelect(IfcCsgSelect *selectData);
        /**
         * write the IfcCsgSolid datatype to m_out.
         *
         * @param value the IfcCsgSolid datatype to write
         */
        bool visitIfcCsgSolid(IfcCsgSolid *value) override;
        /**
         * write the IfcCurrencyRelationship datatype to m_out.
         *
         * @param value the IfcCurrencyRelationship datatype to write
         */
        bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *value) override;
        /**
         * write the IfcCurtainWall datatype to m_out.
         *
         * @param value the IfcCurtainWall datatype to write
         */
        bool visitIfcCurtainWall(IfcCurtainWall *value) override;
        /**
         * @param enumData
         */
        void writeIfcCurtainWallTypeEnum(IfcCurtainWallTypeEnum enumData);
        /**
         * write the IfcCurtainWallType datatype to m_out.
         *
         * @param value the IfcCurtainWallType datatype to write
         */
        bool visitIfcCurtainWallType(IfcCurtainWallType *value) override;
        /**
         * write the IfcCurve datatype to m_out.
         *
         * @param value the IfcCurve datatype to write
         */
        bool visitIfcCurve(IfcCurve *value) override;
        /**
         * write the IfcCurveBoundedPlane datatype to m_out.
         *
         * @param value the IfcCurveBoundedPlane datatype to write
         */
        bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *value) override;
        /**
         * @param selectData
         */
        void writeIfcCurveFontOrScaledCurveFontSelect(IfcCurveFontOrScaledCurveFontSelect *selectData);
        /**
         * @param selectData
         */
        void writeIfcSizeSelect(IfcSizeSelect *selectData);
        /**
         * @param selectData
         */
        void writeIfcColour(IfcColour *selectData);
        /**
         * write the IfcCurveStyle datatype to m_out.
         *
         * @param value the IfcCurveStyle datatype to write
         */
        bool visitIfcCurveStyle(IfcCurveStyle *value) override;
        /**
         * write the IfcCurveStyleFont datatype to m_out.
         *
         * @param value the IfcCurveStyleFont datatype to write
         */
        bool visitIfcCurveStyleFont(IfcCurveStyleFont *value) override;
        /**
         * @param selectData
         */
        void writeIfcCurveStyleFontSelect(IfcCurveStyleFontSelect *selectData);
        /**
         * write the IfcCurveStyleFontAndScaling datatype to m_out.
         *
         * @param value the IfcCurveStyleFontAndScaling datatype to write
         */
        bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *value) override;
        /**
         * write the IfcCurveStyleFontPattern datatype to m_out.
         *
         * @param value the IfcCurveStyleFontPattern datatype to write
         */
        bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *value) override;
        /**
         * @param enumData
         */
        void writeIfcDamperTypeEnum(IfcDamperTypeEnum enumData);
        /**
         * write the IfcDamperType datatype to m_out.
         *
         * @param value the IfcDamperType datatype to write
         */
        bool visitIfcDamperType(IfcDamperType *value) override;
        /**
         * write the IfcDateAndTime datatype to m_out.
         *
         * @param value the IfcDateAndTime datatype to write
         */
        bool visitIfcDateAndTime(IfcDateAndTime *value) override;
        /**
         * @param selectData
         */
        void writeIfcDefinedSymbolSelect(IfcDefinedSymbolSelect *selectData);
        /**
         * write the IfcDefinedSymbol datatype to m_out.
         *
         * @param value the IfcDefinedSymbol datatype to write
         */
        bool visitIfcDefinedSymbol(IfcDefinedSymbol *value) override;
        /**
         * write the IfcDerivedProfileDef datatype to m_out.
         *
         * @param value the IfcDerivedProfileDef datatype to write
         */
        bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *value) override;
        /**
         * @param enumData
         */
        void writeIfcDerivedUnitEnum(IfcDerivedUnitEnum enumData);
        /**
         * write the IfcDerivedUnit datatype to m_out.
         *
         * @param value the IfcDerivedUnit datatype to write
         */
        bool visitIfcDerivedUnit(IfcDerivedUnit *value) override;
        /**
         * write the IfcDerivedUnitElement datatype to m_out.
         *
         * @param value the IfcDerivedUnitElement datatype to write
         */
        bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *value) override;
        /**
         * write the IfcDiameterDimension datatype to m_out.
         *
         * @param value the IfcDiameterDimension datatype to write
         */
        bool visitIfcDiameterDimension(IfcDiameterDimension *value) override;
        /**
         * write the IfcDimensionCalloutRelationship datatype to m_out.
         *
         * @param value the IfcDimensionCalloutRelationship datatype to write
         */
        bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *value) override;
        /**
         * write the IfcDimensionCurve datatype to m_out.
         *
         * @param value the IfcDimensionCurve datatype to write
         */
        bool visitIfcDimensionCurve(IfcDimensionCurve *value) override;
        /**
         * write the IfcDimensionCurveDirectedCallout datatype to m_out.
         *
         * @param value the IfcDimensionCurveDirectedCallout datatype to write
         */
        bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *value) override;
        /**
         * @param enumData
         */
        void writeIfcDimensionExtentUsage(IfcDimensionExtentUsage enumData);
        /**
         * write the IfcDimensionCurveTerminator datatype to m_out.
         *
         * @param value the IfcDimensionCurveTerminator datatype to write
         */
        bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *value) override;
        /**
         * write the IfcDimensionPair datatype to m_out.
         *
         * @param value the IfcDimensionPair datatype to write
         */
        bool visitIfcDimensionPair(IfcDimensionPair *value) override;
        /**
         * write the IfcDimensionalExponents datatype to m_out.
         *
         * @param value the IfcDimensionalExponents datatype to write
         */
        bool visitIfcDimensionalExponents(IfcDimensionalExponents *value) override;
        /**
         * write the IfcDirection datatype to m_out.
         *
         * @param value the IfcDirection datatype to write
         */
        bool visitIfcDirection(IfcDirection *value) override;
        /**
         * write the IfcDiscreteAccessory datatype to m_out.
         *
         * @param value the IfcDiscreteAccessory datatype to write
         */
        bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *value) override;
        /**
         * write the IfcDiscreteAccessoryType datatype to m_out.
         *
         * @param value the IfcDiscreteAccessoryType datatype to write
         */
        bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *value) override;
        /**
         * write the IfcDistributionChamberElement datatype to m_out.
         *
         * @param value the IfcDistributionChamberElement datatype to write
         */
        bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *value) override;
        /**
         * @param enumData
         */
        void writeIfcDistributionChamberElementTypeEnum(IfcDistributionChamberElementTypeEnum enumData);
        /**
         * write the IfcDistributionChamberElementType datatype to m_out.
         *
         * @param value the IfcDistributionChamberElementType datatype to write
         */
        bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *value) override;
        /**
         * write the IfcDistributionControlElement datatype to m_out.
         *
         * @param value the IfcDistributionControlElement datatype to write
         */
        bool visitIfcDistributionControlElement(IfcDistributionControlElement *value) override;
        /**
         * write the IfcDistributionControlElementType datatype to m_out.
         *
         * @param value the IfcDistributionControlElementType datatype to write
         */
        bool visitIfcDistributionControlElementType(IfcDistributionControlElementType *value) override;
        /**
         * write the IfcDistributionElement datatype to m_out.
         *
         * @param value the IfcDistributionElement datatype to write
         */
        bool visitIfcDistributionElement(IfcDistributionElement *value) override;
        /**
         * write the IfcDistributionElementType datatype to m_out.
         *
         * @param value the IfcDistributionElementType datatype to write
         */
        bool visitIfcDistributionElementType(IfcDistributionElementType *value) override;
        /**
         * write the IfcDistributionFlowElement datatype to m_out.
         *
         * @param value the IfcDistributionFlowElement datatype to write
         */
        bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *value) override;
        /**
         * write the IfcDistributionFlowElementType datatype to m_out.
         *
         * @param value the IfcDistributionFlowElementType datatype to write
         */
        bool visitIfcDistributionFlowElementType(IfcDistributionFlowElementType *value) override;
        /**
         * @param enumData
         */
        void writeIfcFlowDirectionEnum(IfcFlowDirectionEnum enumData);
        /**
         * write the IfcDistributionPort datatype to m_out.
         *
         * @param value the IfcDistributionPort datatype to write
         */
        bool visitIfcDistributionPort(IfcDistributionPort *value) override;
        /**
         * write the IfcDocumentElectronicFormat datatype to m_out.
         *
         * @param value the IfcDocumentElectronicFormat datatype to write
         */
        bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *value) override;
        /**
         * @param enumData
         */
        void writeIfcDocumentConfidentialityEnum(IfcDocumentConfidentialityEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDocumentStatusEnum(IfcDocumentStatusEnum enumData);
        /**
         * write the IfcDocumentInformation datatype to m_out.
         *
         * @param value the IfcDocumentInformation datatype to write
         */
        bool visitIfcDocumentInformation(IfcDocumentInformation *value) override;
        /**
         * write the IfcDocumentInformationRelationship datatype to m_out.
         *
         * @param value the IfcDocumentInformationRelationship datatype to write
         */
        bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *value) override;
        /**
         * write the IfcDocumentReference datatype to m_out.
         *
         * @param value the IfcDocumentReference datatype to write
         */
        bool visitIfcDocumentReference(IfcDocumentReference *value) override;
        /**
         * write the IfcDoor datatype to m_out.
         *
         * @param value the IfcDoor datatype to write
         */
        bool visitIfcDoor(IfcDoor *value) override;
        /**
         * write the IfcDoorLiningProperties datatype to m_out.
         *
         * @param value the IfcDoorLiningProperties datatype to write
         */
        bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *value) override;
        /**
         * @param enumData
         */
        void writeIfcDoorPanelOperationEnum(IfcDoorPanelOperationEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDoorPanelPositionEnum(IfcDoorPanelPositionEnum enumData);
        /**
         * write the IfcDoorPanelProperties datatype to m_out.
         *
         * @param value the IfcDoorPanelProperties datatype to write
         */
        bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *value) override;
        /**
         * @param enumData
         */
        void writeIfcDoorStyleOperationEnum(IfcDoorStyleOperationEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDoorStyleConstructionEnum(IfcDoorStyleConstructionEnum enumData);
        /**
         * write the IfcDoorStyle datatype to m_out.
         *
         * @param value the IfcDoorStyle datatype to write
         */
        bool visitIfcDoorStyle(IfcDoorStyle *value) override;
        /**
         * write the IfcDraughtingCallout datatype to m_out.
         *
         * @param value the IfcDraughtingCallout datatype to write
         */
        bool visitIfcDraughtingCallout(IfcDraughtingCallout *value) override;
        /**
         * write the IfcDraughtingCalloutRelationship datatype to m_out.
         *
         * @param value the IfcDraughtingCalloutRelationship datatype to write
         */
        bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *value) override;
        /**
         * write the IfcDraughtingPreDefinedColour datatype to m_out.
         *
         * @param value the IfcDraughtingPreDefinedColour datatype to write
         */
        bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *value) override;
        /**
         * write the IfcDraughtingPreDefinedCurveFont datatype to m_out.
         *
         * @param value the IfcDraughtingPreDefinedCurveFont datatype to write
         */
        bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *value) override;
        /**
         * write the IfcDraughtingPreDefinedTextFont datatype to m_out.
         *
         * @param value the IfcDraughtingPreDefinedTextFont datatype to write
         */
        bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *value) override;
        /**
         * @param enumData
         */
        void writeIfcDuctFittingTypeEnum(IfcDuctFittingTypeEnum enumData);
        /**
         * write the IfcDuctFittingType datatype to m_out.
         *
         * @param value the IfcDuctFittingType datatype to write
         */
        bool visitIfcDuctFittingType(IfcDuctFittingType *value) override;
        /**
         * @param enumData
         */
        void writeIfcDuctSegmentTypeEnum(IfcDuctSegmentTypeEnum enumData);
        /**
         * write the IfcDuctSegmentType datatype to m_out.
         *
         * @param value the IfcDuctSegmentType datatype to write
         */
        bool visitIfcDuctSegmentType(IfcDuctSegmentType *value) override;
        /**
         * @param enumData
         */
        void writeIfcDuctSilencerTypeEnum(IfcDuctSilencerTypeEnum enumData);
        /**
         * write the IfcDuctSilencerType datatype to m_out.
         *
         * @param value the IfcDuctSilencerType datatype to write
         */
        bool visitIfcDuctSilencerType(IfcDuctSilencerType *value) override;
        /**
         * write the IfcEdge datatype to m_out.
         *
         * @param value the IfcEdge datatype to write
         */
        bool visitIfcEdge(IfcEdge *value) override;
        /**
         * write the IfcEdgeCurve datatype to m_out.
         *
         * @param value the IfcEdgeCurve datatype to write
         */
        bool visitIfcEdgeCurve(IfcEdgeCurve *value) override;
        /**
         * write the IfcEdgeFeature datatype to m_out.
         *
         * @param value the IfcEdgeFeature datatype to write
         */
        bool visitIfcEdgeFeature(IfcEdgeFeature *value) override;
        /**
         * write the IfcEdgeLoop datatype to m_out.
         *
         * @param value the IfcEdgeLoop datatype to write
         */
        bool visitIfcEdgeLoop(IfcEdgeLoop *value) override;
        /**
         * @param enumData
         */
        void writeIfcElectricApplianceTypeEnum(IfcElectricApplianceTypeEnum enumData);
        /**
         * write the IfcElectricApplianceType datatype to m_out.
         *
         * @param value the IfcElectricApplianceType datatype to write
         */
        bool visitIfcElectricApplianceType(IfcElectricApplianceType *value) override;
        /**
         * @param enumData
         */
        void writeIfcElectricDistributionPointFunctionEnum(IfcElectricDistributionPointFunctionEnum enumData);
        /**
         * write the IfcElectricDistributionPoint datatype to m_out.
         *
         * @param value the IfcElectricDistributionPoint datatype to write
         */
        bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *value) override;
        /**
         * @param enumData
         */
        void writeIfcElectricFlowStorageDeviceTypeEnum(IfcElectricFlowStorageDeviceTypeEnum enumData);
        /**
         * write the IfcElectricFlowStorageDeviceType datatype to m_out.
         *
         * @param value the IfcElectricFlowStorageDeviceType datatype to write
         */
        bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *value) override;
        /**
         * @param enumData
         */
        void writeIfcElectricGeneratorTypeEnum(IfcElectricGeneratorTypeEnum enumData);
        /**
         * write the IfcElectricGeneratorType datatype to m_out.
         *
         * @param value the IfcElectricGeneratorType datatype to write
         */
        bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *value) override;
        /**
         * @param enumData
         */
        void writeIfcElectricHeaterTypeEnum(IfcElectricHeaterTypeEnum enumData);
        /**
         * write the IfcElectricHeaterType datatype to m_out.
         *
         * @param value the IfcElectricHeaterType datatype to write
         */
        bool visitIfcElectricHeaterType(IfcElectricHeaterType *value) override;
        /**
         * @param enumData
         */
        void writeIfcElectricMotorTypeEnum(IfcElectricMotorTypeEnum enumData);
        /**
         * write the IfcElectricMotorType datatype to m_out.
         *
         * @param value the IfcElectricMotorType datatype to write
         */
        bool visitIfcElectricMotorType(IfcElectricMotorType *value) override;
        /**
         * @param enumData
         */
        void writeIfcElectricTimeControlTypeEnum(IfcElectricTimeControlTypeEnum enumData);
        /**
         * write the IfcElectricTimeControlType datatype to m_out.
         *
         * @param value the IfcElectricTimeControlType datatype to write
         */
        bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *value) override;
        /**
         * @param enumData
         */
        void writeIfcEnergySequenceEnum(IfcEnergySequenceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElectricCurrentEnum(IfcElectricCurrentEnum enumData);
        /**
         * write the IfcElectricalBaseProperties datatype to m_out.
         *
         * @param value the IfcElectricalBaseProperties datatype to write
         */
        bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *value) override;
        /**
         * write the IfcElectricalCircuit datatype to m_out.
         *
         * @param value the IfcElectricalCircuit datatype to write
         */
        bool visitIfcElectricalCircuit(IfcElectricalCircuit *value) override;
        /**
         * write the IfcElectricalElement datatype to m_out.
         *
         * @param value the IfcElectricalElement datatype to write
         */
        bool visitIfcElectricalElement(IfcElectricalElement *value) override;
        /**
         * write the IfcElement datatype to m_out.
         *
         * @param value the IfcElement datatype to write
         */
        bool visitIfcElement(IfcElement *value) override;
        /**
         * @param enumData
         */
        void writeIfcAssemblyPlaceEnum(IfcAssemblyPlaceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElementAssemblyTypeEnum(IfcElementAssemblyTypeEnum enumData);
        /**
         * write the IfcElementAssembly datatype to m_out.
         *
         * @param value the IfcElementAssembly datatype to write
         */
        bool visitIfcElementAssembly(IfcElementAssembly *value) override;
        /**
         * write the IfcElementComponent datatype to m_out.
         *
         * @param value the IfcElementComponent datatype to write
         */
        bool visitIfcElementComponent(IfcElementComponent *value) override;
        /**
         * write the IfcElementComponentType datatype to m_out.
         *
         * @param value the IfcElementComponentType datatype to write
         */
        bool visitIfcElementComponentType(IfcElementComponentType *value) override;
        /**
         * write the IfcElementQuantity datatype to m_out.
         *
         * @param value the IfcElementQuantity datatype to write
         */
        bool visitIfcElementQuantity(IfcElementQuantity *value) override;
        /**
         * write the IfcElementType datatype to m_out.
         *
         * @param value the IfcElementType datatype to write
         */
        bool visitIfcElementType(IfcElementType *value) override;
        /**
         * write the IfcElementarySurface datatype to m_out.
         *
         * @param value the IfcElementarySurface datatype to write
         */
        bool visitIfcElementarySurface(IfcElementarySurface *value) override;
        /**
         * write the IfcEllipse datatype to m_out.
         *
         * @param value the IfcEllipse datatype to write
         */
        bool visitIfcEllipse(IfcEllipse *value) override;
        /**
         * write the IfcEllipseProfileDef datatype to m_out.
         *
         * @param value the IfcEllipseProfileDef datatype to write
         */
        bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *value) override;
        /**
         * write the IfcEnergyConversionDevice datatype to m_out.
         *
         * @param value the IfcEnergyConversionDevice datatype to write
         */
        bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *value) override;
        /**
         * write the IfcEnergyConversionDeviceType datatype to m_out.
         *
         * @param value the IfcEnergyConversionDeviceType datatype to write
         */
        bool visitIfcEnergyConversionDeviceType(IfcEnergyConversionDeviceType *value) override;
        /**
         * write the IfcEnergyProperties datatype to m_out.
         *
         * @param value the IfcEnergyProperties datatype to write
         */
        bool visitIfcEnergyProperties(IfcEnergyProperties *value) override;
        /**
         * @param enumData
         */
        void writeIfcEnvironmentalImpactCategoryEnum(IfcEnvironmentalImpactCategoryEnum enumData);
        /**
         * write the IfcEnvironmentalImpactValue datatype to m_out.
         *
         * @param value the IfcEnvironmentalImpactValue datatype to write
         */
        bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *value) override;
        /**
         * write the IfcEquipmentElement datatype to m_out.
         *
         * @param value the IfcEquipmentElement datatype to write
         */
        bool visitIfcEquipmentElement(IfcEquipmentElement *value) override;
        /**
         * write the IfcEquipmentStandard datatype to m_out.
         *
         * @param value the IfcEquipmentStandard datatype to write
         */
        bool visitIfcEquipmentStandard(IfcEquipmentStandard *value) override;
        /**
         * @param enumData
         */
        void writeIfcEvaporativeCoolerTypeEnum(IfcEvaporativeCoolerTypeEnum enumData);
        /**
         * write the IfcEvaporativeCoolerType datatype to m_out.
         *
         * @param value the IfcEvaporativeCoolerType datatype to write
         */
        bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *value) override;
        /**
         * @param enumData
         */
        void writeIfcEvaporatorTypeEnum(IfcEvaporatorTypeEnum enumData);
        /**
         * write the IfcEvaporatorType datatype to m_out.
         *
         * @param value the IfcEvaporatorType datatype to write
         */
        bool visitIfcEvaporatorType(IfcEvaporatorType *value) override;
        /**
         * write the IfcExtendedMaterialProperties datatype to m_out.
         *
         * @param value the IfcExtendedMaterialProperties datatype to write
         */
        bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *value) override;
        /**
         * write the IfcExternalReference datatype to m_out.
         *
         * @param value the IfcExternalReference datatype to write
         */
        bool visitIfcExternalReference(IfcExternalReference *value) override;
        /**
         * write the IfcExternallyDefinedHatchStyle datatype to m_out.
         *
         * @param value the IfcExternallyDefinedHatchStyle datatype to write
         */
        bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *value) override;
        /**
         * write the IfcExternallyDefinedSurfaceStyle datatype to m_out.
         *
         * @param value the IfcExternallyDefinedSurfaceStyle datatype to write
         */
        bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value) override;
        /**
         * write the IfcExternallyDefinedSymbol datatype to m_out.
         *
         * @param value the IfcExternallyDefinedSymbol datatype to write
         */
        bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value) override;
        /**
         * write the IfcExternallyDefinedTextFont datatype to m_out.
         *
         * @param value the IfcExternallyDefinedTextFont datatype to write
         */
        bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value) override;
        /**
         * write the IfcExtrudedAreaSolid datatype to m_out.
         *
         * @param value the IfcExtrudedAreaSolid datatype to write
         */
        bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *value) override;
        /**
         * write the IfcFace datatype to m_out.
         *
         * @param value the IfcFace datatype to write
         */
        bool visitIfcFace(IfcFace *value) override;
        /**
         * write the IfcFaceBasedSurfaceModel datatype to m_out.
         *
         * @param value the IfcFaceBasedSurfaceModel datatype to write
         */
        bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value) override;
        /**
         * write the IfcFaceBound datatype to m_out.
         *
         * @param value the IfcFaceBound datatype to write
         */
        bool visitIfcFaceBound(IfcFaceBound *value) override;
        /**
         * write the IfcFaceOuterBound datatype to m_out.
         *
         * @param value the IfcFaceOuterBound datatype to write
         */
        bool visitIfcFaceOuterBound(IfcFaceOuterBound *value) override;
        /**
         * write the IfcFaceSurface datatype to m_out.
         *
         * @param value the IfcFaceSurface datatype to write
         */
        bool visitIfcFaceSurface(IfcFaceSurface *value) override;
        /**
         * write the IfcFacetedBrep datatype to m_out.
         *
         * @param value the IfcFacetedBrep datatype to write
         */
        bool visitIfcFacetedBrep(IfcFacetedBrep *value) override;
        /**
         * write the IfcFacetedBrepWithVoids datatype to m_out.
         *
         * @param value the IfcFacetedBrepWithVoids datatype to write
         */
        bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *value) override;
        /**
         * write the IfcFailureConnectionCondition datatype to m_out.
         *
         * @param value the IfcFailureConnectionCondition datatype to write
         */
        bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *value) override;
        /**
         * @param enumData
         */
        void writeIfcFanTypeEnum(IfcFanTypeEnum enumData);
        /**
         * write the IfcFanType datatype to m_out.
         *
         * @param value the IfcFanType datatype to write
         */
        bool visitIfcFanType(IfcFanType *value) override;
        /**
         * write the IfcFastener datatype to m_out.
         *
         * @param value the IfcFastener datatype to write
         */
        bool visitIfcFastener(IfcFastener *value) override;
        /**
         * write the IfcFastenerType datatype to m_out.
         *
         * @param value the IfcFastenerType datatype to write
         */
        bool visitIfcFastenerType(IfcFastenerType *value) override;
        /**
         * write the IfcFeatureElement datatype to m_out.
         *
         * @param value the IfcFeatureElement datatype to write
         */
        bool visitIfcFeatureElement(IfcFeatureElement *value) override;
        /**
         * write the IfcFeatureElementAddition datatype to m_out.
         *
         * @param value the IfcFeatureElementAddition datatype to write
         */
        bool visitIfcFeatureElementAddition(IfcFeatureElementAddition *value) override;
        /**
         * write the IfcFeatureElementSubtraction datatype to m_out.
         *
         * @param value the IfcFeatureElementSubtraction datatype to write
         */
        bool visitIfcFeatureElementSubtraction(IfcFeatureElementSubtraction *value) override;
        /**
         * @param selectData
         */
        void writeIfcFillStyleSelect(IfcFillStyleSelect *selectData);
        /**
         * write the IfcFillAreaStyle datatype to m_out.
         *
         * @param value the IfcFillAreaStyle datatype to write
         */
        bool visitIfcFillAreaStyle(IfcFillAreaStyle *value) override;
        /**
         * @param selectData
         */
        void writeIfcHatchLineDistanceSelect(IfcHatchLineDistanceSelect *selectData);
        /**
         * write the IfcFillAreaStyleHatching datatype to m_out.
         *
         * @param value the IfcFillAreaStyleHatching datatype to write
         */
        bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value) override;
        /**
         * write the IfcFillAreaStyleTileSymbolWithStyle datatype to m_out.
         *
         * @param value the IfcFillAreaStyleTileSymbolWithStyle datatype to write
         */
        bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value) override;
        /**
         * @param selectData
         */
        void writeIfcFillAreaStyleTileShapeSelect(IfcFillAreaStyleTileShapeSelect *selectData);
        /**
         * write the IfcFillAreaStyleTiles datatype to m_out.
         *
         * @param value the IfcFillAreaStyleTiles datatype to write
         */
        bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value) override;
        /**
         * @param enumData
         */
        void writeIfcFilterTypeEnum(IfcFilterTypeEnum enumData);
        /**
         * write the IfcFilterType datatype to m_out.
         *
         * @param value the IfcFilterType datatype to write
         */
        bool visitIfcFilterType(IfcFilterType *value) override;
        /**
         * @param enumData
         */
        void writeIfcFireSuppressionTerminalTypeEnum(IfcFireSuppressionTerminalTypeEnum enumData);
        /**
         * write the IfcFireSuppressionTerminalType datatype to m_out.
         *
         * @param value the IfcFireSuppressionTerminalType datatype to write
         */
        bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *value) override;
        /**
         * write the IfcFlowController datatype to m_out.
         *
         * @param value the IfcFlowController datatype to write
         */
        bool visitIfcFlowController(IfcFlowController *value) override;
        /**
         * write the IfcFlowControllerType datatype to m_out.
         *
         * @param value the IfcFlowControllerType datatype to write
         */
        bool visitIfcFlowControllerType(IfcFlowControllerType *value) override;
        /**
         * write the IfcFlowFitting datatype to m_out.
         *
         * @param value the IfcFlowFitting datatype to write
         */
        bool visitIfcFlowFitting(IfcFlowFitting *value) override;
        /**
         * write the IfcFlowFittingType datatype to m_out.
         *
         * @param value the IfcFlowFittingType datatype to write
         */
        bool visitIfcFlowFittingType(IfcFlowFittingType *value) override;
        /**
         * @param enumData
         */
        void writeIfcFlowInstrumentTypeEnum(IfcFlowInstrumentTypeEnum enumData);
        /**
         * write the IfcFlowInstrumentType datatype to m_out.
         *
         * @param value the IfcFlowInstrumentType datatype to write
         */
        bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *value) override;
        /**
         * @param enumData
         */
        void writeIfcFlowMeterTypeEnum(IfcFlowMeterTypeEnum enumData);
        /**
         * write the IfcFlowMeterType datatype to m_out.
         *
         * @param value the IfcFlowMeterType datatype to write
         */
        bool visitIfcFlowMeterType(IfcFlowMeterType *value) override;
        /**
         * write the IfcFlowMovingDevice datatype to m_out.
         *
         * @param value the IfcFlowMovingDevice datatype to write
         */
        bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *value) override;
        /**
         * write the IfcFlowMovingDeviceType datatype to m_out.
         *
         * @param value the IfcFlowMovingDeviceType datatype to write
         */
        bool visitIfcFlowMovingDeviceType(IfcFlowMovingDeviceType *value) override;
        /**
         * write the IfcFlowSegment datatype to m_out.
         *
         * @param value the IfcFlowSegment datatype to write
         */
        bool visitIfcFlowSegment(IfcFlowSegment *value) override;
        /**
         * write the IfcFlowSegmentType datatype to m_out.
         *
         * @param value the IfcFlowSegmentType datatype to write
         */
        bool visitIfcFlowSegmentType(IfcFlowSegmentType *value) override;
        /**
         * write the IfcFlowStorageDevice datatype to m_out.
         *
         * @param value the IfcFlowStorageDevice datatype to write
         */
        bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *value) override;
        /**
         * write the IfcFlowStorageDeviceType datatype to m_out.
         *
         * @param value the IfcFlowStorageDeviceType datatype to write
         */
        bool visitIfcFlowStorageDeviceType(IfcFlowStorageDeviceType *value) override;
        /**
         * write the IfcFlowTerminal datatype to m_out.
         *
         * @param value the IfcFlowTerminal datatype to write
         */
        bool visitIfcFlowTerminal(IfcFlowTerminal *value) override;
        /**
         * write the IfcFlowTerminalType datatype to m_out.
         *
         * @param value the IfcFlowTerminalType datatype to write
         */
        bool visitIfcFlowTerminalType(IfcFlowTerminalType *value) override;
        /**
         * write the IfcFlowTreatmentDevice datatype to m_out.
         *
         * @param value the IfcFlowTreatmentDevice datatype to write
         */
        bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *value) override;
        /**
         * write the IfcFlowTreatmentDeviceType datatype to m_out.
         *
         * @param value the IfcFlowTreatmentDeviceType datatype to write
         */
        bool visitIfcFlowTreatmentDeviceType(IfcFlowTreatmentDeviceType *value) override;
        /**
         * @param enumData
         */
        void writeIfcPropertySourceEnum(IfcPropertySourceEnum enumData);
        /**
         * @param selectData
         */
        void writeIfcDerivedMeasureValue(IfcDerivedMeasureValue *selectData);
        /**
         * write the IfcFluidFlowProperties datatype to m_out.
         *
         * @param value the IfcFluidFlowProperties datatype to write
         */
        bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *value) override;
        /**
         * @param enumData
         */
        void writeIfcFootingTypeEnum(IfcFootingTypeEnum enumData);
        /**
         * write the IfcFooting datatype to m_out.
         *
         * @param value the IfcFooting datatype to write
         */
        bool visitIfcFooting(IfcFooting *value) override;
        /**
         * write the IfcFuelProperties datatype to m_out.
         *
         * @param value the IfcFuelProperties datatype to write
         */
        bool visitIfcFuelProperties(IfcFuelProperties *value) override;
        /**
         * write the IfcFurnishingElement datatype to m_out.
         *
         * @param value the IfcFurnishingElement datatype to write
         */
        bool visitIfcFurnishingElement(IfcFurnishingElement *value) override;
        /**
         * write the IfcFurnishingElementType datatype to m_out.
         *
         * @param value the IfcFurnishingElementType datatype to write
         */
        bool visitIfcFurnishingElementType(IfcFurnishingElementType *value) override;
        /**
         * write the IfcFurnitureStandard datatype to m_out.
         *
         * @param value the IfcFurnitureStandard datatype to write
         */
        bool visitIfcFurnitureStandard(IfcFurnitureStandard *value) override;
        /**
         * write the IfcFurnitureType datatype to m_out.
         *
         * @param value the IfcFurnitureType datatype to write
         */
        bool visitIfcFurnitureType(IfcFurnitureType *value) override;
        /**
         * @param enumData
         */
        void writeIfcGasTerminalTypeEnum(IfcGasTerminalTypeEnum enumData);
        /**
         * write the IfcGasTerminalType datatype to m_out.
         *
         * @param value the IfcGasTerminalType datatype to write
         */
        bool visitIfcGasTerminalType(IfcGasTerminalType *value) override;
        /**
         * write the IfcGeneralMaterialProperties datatype to m_out.
         *
         * @param value the IfcGeneralMaterialProperties datatype to write
         */
        bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *value) override;
        /**
         * write the IfcGeneralProfileProperties datatype to m_out.
         *
         * @param value the IfcGeneralProfileProperties datatype to write
         */
        bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *value) override;
        /**
         * @param selectData
         */
        void writeIfcGeometricSetSelect(IfcGeometricSetSelect *selectData);
        /**
         * write the IfcGeometricCurveSet datatype to m_out.
         *
         * @param value the IfcGeometricCurveSet datatype to write
         */
        bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *value) override;
        /**
         * write the IfcGeometricRepresentationContext datatype to m_out.
         *
         * @param value the IfcGeometricRepresentationContext datatype to write
         */
        bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *value) override;
        /**
         * write the IfcGeometricRepresentationItem datatype to m_out.
         *
         * @param value the IfcGeometricRepresentationItem datatype to write
         */
        bool visitIfcGeometricRepresentationItem(IfcGeometricRepresentationItem *value) override;
        /**
         * @param enumData
         */
        void writeIfcGeometricProjectionEnum(IfcGeometricProjectionEnum enumData);
        /**
         * write the IfcGeometricRepresentationSubContext datatype to m_out.
         *
         * @param value the IfcGeometricRepresentationSubContext datatype to write
         */
        bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *value) override;
        /**
         * write the IfcGeometricSet datatype to m_out.
         *
         * @param value the IfcGeometricSet datatype to write
         */
        bool visitIfcGeometricSet(IfcGeometricSet *value) override;
        /**
         * write the IfcGrid datatype to m_out.
         *
         * @param value the IfcGrid datatype to write
         */
        bool visitIfcGrid(IfcGrid *value) override;
        /**
         * write the IfcGridAxis datatype to m_out.
         *
         * @param value the IfcGridAxis datatype to write
         */
        bool visitIfcGridAxis(IfcGridAxis *value) override;
        /**
         * write the IfcGridPlacement datatype to m_out.
         *
         * @param value the IfcGridPlacement datatype to write
         */
        bool visitIfcGridPlacement(IfcGridPlacement *value) override;
        /**
         * write the IfcGroup datatype to m_out.
         *
         * @param value the IfcGroup datatype to write
         */
        bool visitIfcGroup(IfcGroup *value) override;
        /**
         * write the IfcHalfSpaceSolid datatype to m_out.
         *
         * @param value the IfcHalfSpaceSolid datatype to write
         */
        bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *value) override;
        /**
         * @param enumData
         */
        void writeIfcHeatExchangerTypeEnum(IfcHeatExchangerTypeEnum enumData);
        /**
         * write the IfcHeatExchangerType datatype to m_out.
         *
         * @param value the IfcHeatExchangerType datatype to write
         */
        bool visitIfcHeatExchangerType(IfcHeatExchangerType *value) override;
        /**
         * @param enumData
         */
        void writeIfcHumidifierTypeEnum(IfcHumidifierTypeEnum enumData);
        /**
         * write the IfcHumidifierType datatype to m_out.
         *
         * @param value the IfcHumidifierType datatype to write
         */
        bool visitIfcHumidifierType(IfcHumidifierType *value) override;
        /**
         * write the IfcHygroscopicMaterialProperties datatype to m_out.
         *
         * @param value the IfcHygroscopicMaterialProperties datatype to write
         */
        bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *value) override;
        /**
         * write the IfcIShapeProfileDef datatype to m_out.
         *
         * @param value the IfcIShapeProfileDef datatype to write
         */
        bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *value) override;
        /**
         * write the IfcImageTexture datatype to m_out.
         *
         * @param value the IfcImageTexture datatype to write
         */
        bool visitIfcImageTexture(IfcImageTexture *value) override;
        /**
         * @param enumData
         */
        void writeIfcInventoryTypeEnum(IfcInventoryTypeEnum enumData);
        /**
         * write the IfcInventory datatype to m_out.
         *
         * @param value the IfcInventory datatype to write
         */
        bool visitIfcInventory(IfcInventory *value) override;
        /**
         * @param enumData
         */
        void writeIfcTimeSeriesDataTypeEnum(IfcTimeSeriesDataTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDataOriginEnum(IfcDataOriginEnum enumData);
        /**
         * @param selectData
         */
        void writeIfcUnit(IfcUnit *selectData);
        /**
         * write the IfcIrregularTimeSeries datatype to m_out.
         *
         * @param value the IfcIrregularTimeSeries datatype to write
         */
        bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *value) override;
        /**
         * @param selectData
         */
        void writeIfcValue(IfcValue *selectData);
        /**
         * write the IfcIrregularTimeSeriesValue datatype to m_out.
         *
         * @param value the IfcIrregularTimeSeriesValue datatype to write
         */
        bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *value) override;
        /**
         * @param enumData
         */
        void writeIfcJunctionBoxTypeEnum(IfcJunctionBoxTypeEnum enumData);
        /**
         * write the IfcJunctionBoxType datatype to m_out.
         *
         * @param value the IfcJunctionBoxType datatype to write
         */
        bool visitIfcJunctionBoxType(IfcJunctionBoxType *value) override;
        /**
         * write the IfcLShapeProfileDef datatype to m_out.
         *
         * @param value the IfcLShapeProfileDef datatype to write
         */
        bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *value) override;
        /**
         * write the IfcLaborResource datatype to m_out.
         *
         * @param value the IfcLaborResource datatype to write
         */
        bool visitIfcLaborResource(IfcLaborResource *value) override;
        /**
         * @param enumData
         */
        void writeIfcLampTypeEnum(IfcLampTypeEnum enumData);
        /**
         * write the IfcLampType datatype to m_out.
         *
         * @param value the IfcLampType datatype to write
         */
        bool visitIfcLampType(IfcLampType *value) override;
        /**
         * write the IfcLibraryInformation datatype to m_out.
         *
         * @param value the IfcLibraryInformation datatype to write
         */
        bool visitIfcLibraryInformation(IfcLibraryInformation *value) override;
        /**
         * write the IfcLibraryReference datatype to m_out.
         *
         * @param value the IfcLibraryReference datatype to write
         */
        bool visitIfcLibraryReference(IfcLibraryReference *value) override;
        /**
         * write the IfcLightDistributionData datatype to m_out.
         *
         * @param value the IfcLightDistributionData datatype to write
         */
        bool visitIfcLightDistributionData(IfcLightDistributionData *value) override;
        /**
         * @param enumData
         */
        void writeIfcLightFixtureTypeEnum(IfcLightFixtureTypeEnum enumData);
        /**
         * write the IfcLightFixtureType datatype to m_out.
         *
         * @param value the IfcLightFixtureType datatype to write
         */
        bool visitIfcLightFixtureType(IfcLightFixtureType *value) override;
        /**
         * @param enumData
         */
        void writeIfcLightDistributionCurveEnum(IfcLightDistributionCurveEnum enumData);
        /**
         * write the IfcLightIntensityDistribution datatype to m_out.
         *
         * @param value the IfcLightIntensityDistribution datatype to write
         */
        bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *value) override;
        /**
         * write the IfcLightSource datatype to m_out.
         *
         * @param value the IfcLightSource datatype to write
         */
        bool visitIfcLightSource(IfcLightSource *value) override;
        /**
         * write the IfcLightSourceAmbient datatype to m_out.
         *
         * @param value the IfcLightSourceAmbient datatype to write
         */
        bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *value) override;
        /**
         * write the IfcLightSourceDirectional datatype to m_out.
         *
         * @param value the IfcLightSourceDirectional datatype to write
         */
        bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *value) override;
        /**
         * @param enumData
         */
        void writeIfcLightEmissionSourceEnum(IfcLightEmissionSourceEnum enumData);
        /**
         * @param selectData
         */
        void writeIfcLightDistributionDataSourceSelect(IfcLightDistributionDataSourceSelect *selectData);
        /**
         * write the IfcLightSourceGoniometric datatype to m_out.
         *
         * @param value the IfcLightSourceGoniometric datatype to write
         */
        bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *value) override;
        /**
         * write the IfcLightSourcePositional datatype to m_out.
         *
         * @param value the IfcLightSourcePositional datatype to write
         */
        bool visitIfcLightSourcePositional(IfcLightSourcePositional *value) override;
        /**
         * write the IfcLightSourceSpot datatype to m_out.
         *
         * @param value the IfcLightSourceSpot datatype to write
         */
        bool visitIfcLightSourceSpot(IfcLightSourceSpot *value) override;
        /**
         * write the IfcLine datatype to m_out.
         *
         * @param value the IfcLine datatype to write
         */
        bool visitIfcLine(IfcLine *value) override;
        /**
         * write the IfcLinearDimension datatype to m_out.
         *
         * @param value the IfcLinearDimension datatype to write
         */
        bool visitIfcLinearDimension(IfcLinearDimension *value) override;
        /**
         * write the IfcLocalPlacement datatype to m_out.
         *
         * @param value the IfcLocalPlacement datatype to write
         */
        bool visitIfcLocalPlacement(IfcLocalPlacement *value) override;
        /**
         * write the IfcLocalTime datatype to m_out.
         *
         * @param value the IfcLocalTime datatype to write
         */
        bool visitIfcLocalTime(IfcLocalTime *value) override;
        /**
         * write the IfcLoop datatype to m_out.
         *
         * @param value the IfcLoop datatype to write
         */
        bool visitIfcLoop(IfcLoop *value) override;
        /**
         * write the IfcManifoldSolidBrep datatype to m_out.
         *
         * @param value the IfcManifoldSolidBrep datatype to write
         */
        bool visitIfcManifoldSolidBrep(IfcManifoldSolidBrep *value) override;
        /**
         * write the IfcMappedItem datatype to m_out.
         *
         * @param value the IfcMappedItem datatype to write
         */
        bool visitIfcMappedItem(IfcMappedItem *value) override;
        /**
         * write the IfcMaterial datatype to m_out.
         *
         * @param value the IfcMaterial datatype to write
         */
        bool visitIfcMaterial(IfcMaterial *value) override;
        /**
         * write the IfcMaterialClassificationRelationship datatype to m_out.
         *
         * @param value the IfcMaterialClassificationRelationship datatype to write
         */
        bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *value) override;
        /**
         * write the IfcMaterialDefinitionRepresentation datatype to m_out.
         *
         * @param value the IfcMaterialDefinitionRepresentation datatype to write
         */
        bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *value) override;
        /**
         * write the IfcMaterialLayer datatype to m_out.
         *
         * @param value the IfcMaterialLayer datatype to write
         */
        bool visitIfcMaterialLayer(IfcMaterialLayer *value) override;
        /**
         * write the IfcMaterialLayerSet datatype to m_out.
         *
         * @param value the IfcMaterialLayerSet datatype to write
         */
        bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *value) override;
        /**
         * @param enumData
         */
        void writeIfcLayerSetDirectionEnum(IfcLayerSetDirectionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDirectionSenseEnum(IfcDirectionSenseEnum enumData);
        /**
         * write the IfcMaterialLayerSetUsage datatype to m_out.
         *
         * @param value the IfcMaterialLayerSetUsage datatype to write
         */
        bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value) override;
        /**
         * write the IfcMaterialList datatype to m_out.
         *
         * @param value the IfcMaterialList datatype to write
         */
        bool visitIfcMaterialList(IfcMaterialList *value) override;
        /**
         * write the IfcMaterialProperties datatype to m_out.
         *
         * @param value the IfcMaterialProperties datatype to write
         */
        bool visitIfcMaterialProperties(IfcMaterialProperties *value) override;
        /**
         * write the IfcMeasureWithUnit datatype to m_out.
         *
         * @param value the IfcMeasureWithUnit datatype to write
         */
        bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *value) override;
        /**
         * write the IfcMechanicalConcreteMaterialProperties datatype to m_out.
         *
         * @param value the IfcMechanicalConcreteMaterialProperties datatype to write
         */
        bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *value) override;
        /**
         * write the IfcMechanicalFastener datatype to m_out.
         *
         * @param value the IfcMechanicalFastener datatype to write
         */
        bool visitIfcMechanicalFastener(IfcMechanicalFastener *value) override;
        /**
         * write the IfcMechanicalFastenerType datatype to m_out.
         *
         * @param value the IfcMechanicalFastenerType datatype to write
         */
        bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *value) override;
        /**
         * write the IfcMechanicalMaterialProperties datatype to m_out.
         *
         * @param value the IfcMechanicalMaterialProperties datatype to write
         */
        bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *value) override;
        /**
         * write the IfcMechanicalSteelMaterialProperties datatype to m_out.
         *
         * @param value the IfcMechanicalSteelMaterialProperties datatype to write
         */
        bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *value) override;
        /**
         * write the IfcMember datatype to m_out.
         *
         * @param value the IfcMember datatype to write
         */
        bool visitIfcMember(IfcMember *value) override;
        /**
         * @param enumData
         */
        void writeIfcMemberTypeEnum(IfcMemberTypeEnum enumData);
        /**
         * write the IfcMemberType datatype to m_out.
         *
         * @param value the IfcMemberType datatype to write
         */
        bool visitIfcMemberType(IfcMemberType *value) override;
        /**
         * @param enumData
         */
        void writeIfcBenchmarkEnum(IfcBenchmarkEnum enumData);
        /**
         * @param selectData
         */
        void writeIfcMetricValueSelect(IfcMetricValueSelect *selectData);
        /**
         * write the IfcMetric datatype to m_out.
         *
         * @param value the IfcMetric datatype to write
         */
        bool visitIfcMetric(IfcMetric *value) override;
        /**
         * @param enumData
         */
        void writeIfcCurrencyEnum(IfcCurrencyEnum enumData);
        /**
         * write the IfcMonetaryUnit datatype to m_out.
         *
         * @param value the IfcMonetaryUnit datatype to write
         */
        bool visitIfcMonetaryUnit(IfcMonetaryUnit *value) override;
        /**
         * @param enumData
         */
        void writeIfcMotorConnectionTypeEnum(IfcMotorConnectionTypeEnum enumData);
        /**
         * write the IfcMotorConnectionType datatype to m_out.
         *
         * @param value the IfcMotorConnectionType datatype to write
         */
        bool visitIfcMotorConnectionType(IfcMotorConnectionType *value) override;
        /**
         * write the IfcMove datatype to m_out.
         *
         * @param value the IfcMove datatype to write
         */
        bool visitIfcMove(IfcMove *value) override;
        /**
         * write the IfcNamedUnit datatype to m_out.
         *
         * @param value the IfcNamedUnit datatype to write
         */
        bool visitIfcNamedUnit(IfcNamedUnit *value) override;
        /**
         * write the IfcObject datatype to m_out.
         *
         * @param value the IfcObject datatype to write
         */
        bool visitIfcObject(IfcObject *value) override;
        /**
         * write the IfcObjectDefinition datatype to m_out.
         *
         * @param value the IfcObjectDefinition datatype to write
         */
        bool visitIfcObjectDefinition(IfcObjectDefinition *value) override;
        /**
         * write the IfcObjectPlacement datatype to m_out.
         *
         * @param value the IfcObjectPlacement datatype to write
         */
        bool visitIfcObjectPlacement(IfcObjectPlacement *value) override;
        /**
         * @param enumData
         */
        void writeIfcObjectiveEnum(IfcObjectiveEnum enumData);
        /**
         * write the IfcObjective datatype to m_out.
         *
         * @param value the IfcObjective datatype to write
         */
        bool visitIfcObjective(IfcObjective *value) override;
        /**
         * @param enumData
         */
        void writeIfcOccupantTypeEnum(IfcOccupantTypeEnum enumData);
        /**
         * write the IfcOccupant datatype to m_out.
         *
         * @param value the IfcOccupant datatype to write
         */
        bool visitIfcOccupant(IfcOccupant *value) override;
        /**
         * write the IfcOffsetCurve2D datatype to m_out.
         *
         * @param value the IfcOffsetCurve2D datatype to write
         */
        bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *value) override;
        /**
         * write the IfcOffsetCurve3D datatype to m_out.
         *
         * @param value the IfcOffsetCurve3D datatype to write
         */
        bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *value) override;
        /**
         * write the IfcOneDirectionRepeatFactor datatype to m_out.
         *
         * @param value the IfcOneDirectionRepeatFactor datatype to write
         */
        bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value) override;
        /**
         * write the IfcOpenShell datatype to m_out.
         *
         * @param value the IfcOpenShell datatype to write
         */
        bool visitIfcOpenShell(IfcOpenShell *value) override;
        /**
         * write the IfcOpeningElement datatype to m_out.
         *
         * @param value the IfcOpeningElement datatype to write
         */
        bool visitIfcOpeningElement(IfcOpeningElement *value) override;
        /**
         * write the IfcOpticalMaterialProperties datatype to m_out.
         *
         * @param value the IfcOpticalMaterialProperties datatype to write
         */
        bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *value) override;
        /**
         * write the IfcOrderAction datatype to m_out.
         *
         * @param value the IfcOrderAction datatype to write
         */
        bool visitIfcOrderAction(IfcOrderAction *value) override;
        /**
         * write the IfcOrganization datatype to m_out.
         *
         * @param value the IfcOrganization datatype to write
         */
        bool visitIfcOrganization(IfcOrganization *value) override;
        /**
         * write the IfcOrganizationRelationship datatype to m_out.
         *
         * @param value the IfcOrganizationRelationship datatype to write
         */
        bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *value) override;
        /**
         * write the IfcOrientedEdge datatype to m_out.
         *
         * @param value the IfcOrientedEdge datatype to write
         */
        bool visitIfcOrientedEdge(IfcOrientedEdge *value) override;
        /**
         * @param enumData
         */
        void writeIfcOutletTypeEnum(IfcOutletTypeEnum enumData);
        /**
         * write the IfcOutletType datatype to m_out.
         *
         * @param value the IfcOutletType datatype to write
         */
        bool visitIfcOutletType(IfcOutletType *value) override;
        /**
         * @param enumData
         */
        void writeIfcStateEnum(IfcStateEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcChangeActionEnum(IfcChangeActionEnum enumData);
        /**
         * write the IfcOwnerHistory datatype to m_out.
         *
         * @param value the IfcOwnerHistory datatype to write
         */
        bool visitIfcOwnerHistory(IfcOwnerHistory *value) override;
        /**
         * write the IfcParameterizedProfileDef datatype to m_out.
         *
         * @param value the IfcParameterizedProfileDef datatype to write
         */
        bool visitIfcParameterizedProfileDef(IfcParameterizedProfileDef *value) override;
        /**
         * write the IfcPath datatype to m_out.
         *
         * @param value the IfcPath datatype to write
         */
        bool visitIfcPath(IfcPath *value) override;
        /**
         * write the IfcPerformanceHistory datatype to m_out.
         *
         * @param value the IfcPerformanceHistory datatype to write
         */
        bool visitIfcPerformanceHistory(IfcPerformanceHistory *value) override;
        /**
         * @param enumData
         */
        void writeIfcPermeableCoveringOperationEnum(IfcPermeableCoveringOperationEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcWindowPanelPositionEnum(IfcWindowPanelPositionEnum enumData);
        /**
         * write the IfcPermeableCoveringProperties datatype to m_out.
         *
         * @param value the IfcPermeableCoveringProperties datatype to write
         */
        bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *value) override;
        /**
         * write the IfcPermit datatype to m_out.
         *
         * @param value the IfcPermit datatype to write
         */
        bool visitIfcPermit(IfcPermit *value) override;
        /**
         * write the IfcPerson datatype to m_out.
         *
         * @param value the IfcPerson datatype to write
         */
        bool visitIfcPerson(IfcPerson *value) override;
        /**
         * write the IfcPersonAndOrganization datatype to m_out.
         *
         * @param value the IfcPersonAndOrganization datatype to write
         */
        bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *value) override;
        /**
         * write the IfcPhysicalComplexQuantity datatype to m_out.
         *
         * @param value the IfcPhysicalComplexQuantity datatype to write
         */
        bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *value) override;
        /**
         * write the IfcPhysicalQuantity datatype to m_out.
         *
         * @param value the IfcPhysicalQuantity datatype to write
         */
        bool visitIfcPhysicalQuantity(IfcPhysicalQuantity *value) override;
        /**
         * write the IfcPhysicalSimpleQuantity datatype to m_out.
         *
         * @param value the IfcPhysicalSimpleQuantity datatype to write
         */
        bool visitIfcPhysicalSimpleQuantity(IfcPhysicalSimpleQuantity *value) override;
        /**
         * @param enumData
         */
        void writeIfcPileTypeEnum(IfcPileTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcPileConstructionEnum(IfcPileConstructionEnum enumData);
        /**
         * write the IfcPile datatype to m_out.
         *
         * @param value the IfcPile datatype to write
         */
        bool visitIfcPile(IfcPile *value) override;
        /**
         * @param enumData
         */
        void writeIfcPipeFittingTypeEnum(IfcPipeFittingTypeEnum enumData);
        /**
         * write the IfcPipeFittingType datatype to m_out.
         *
         * @param value the IfcPipeFittingType datatype to write
         */
        bool visitIfcPipeFittingType(IfcPipeFittingType *value) override;
        /**
         * @param enumData
         */
        void writeIfcPipeSegmentTypeEnum(IfcPipeSegmentTypeEnum enumData);
        /**
         * write the IfcPipeSegmentType datatype to m_out.
         *
         * @param value the IfcPipeSegmentType datatype to write
         */
        bool visitIfcPipeSegmentType(IfcPipeSegmentType *value) override;
        /**
         * write the IfcPixelTexture datatype to m_out.
         *
         * @param value the IfcPixelTexture datatype to write
         */
        bool visitIfcPixelTexture(IfcPixelTexture *value) override;
        /**
         * write the IfcPlacement datatype to m_out.
         *
         * @param value the IfcPlacement datatype to write
         */
        bool visitIfcPlacement(IfcPlacement *value) override;
        /**
         * write the IfcPlanarBox datatype to m_out.
         *
         * @param value the IfcPlanarBox datatype to write
         */
        bool visitIfcPlanarBox(IfcPlanarBox *value) override;
        /**
         * write the IfcPlanarExtent datatype to m_out.
         *
         * @param value the IfcPlanarExtent datatype to write
         */
        bool visitIfcPlanarExtent(IfcPlanarExtent *value) override;
        /**
         * write the IfcPlane datatype to m_out.
         *
         * @param value the IfcPlane datatype to write
         */
        bool visitIfcPlane(IfcPlane *value) override;
        /**
         * write the IfcPlate datatype to m_out.
         *
         * @param value the IfcPlate datatype to write
         */
        bool visitIfcPlate(IfcPlate *value) override;
        /**
         * @param enumData
         */
        void writeIfcPlateTypeEnum(IfcPlateTypeEnum enumData);
        /**
         * write the IfcPlateType datatype to m_out.
         *
         * @param value the IfcPlateType datatype to write
         */
        bool visitIfcPlateType(IfcPlateType *value) override;
        /**
         * write the IfcPoint datatype to m_out.
         *
         * @param value the IfcPoint datatype to write
         */
        bool visitIfcPoint(IfcPoint *value) override;
        /**
         * write the IfcPointOnCurve datatype to m_out.
         *
         * @param value the IfcPointOnCurve datatype to write
         */
        bool visitIfcPointOnCurve(IfcPointOnCurve *value) override;
        /**
         * write the IfcPointOnSurface datatype to m_out.
         *
         * @param value the IfcPointOnSurface datatype to write
         */
        bool visitIfcPointOnSurface(IfcPointOnSurface *value) override;
        /**
         * write the IfcPolyLoop datatype to m_out.
         *
         * @param value the IfcPolyLoop datatype to write
         */
        bool visitIfcPolyLoop(IfcPolyLoop *value) override;
        /**
         * write the IfcPolygonalBoundedHalfSpace datatype to m_out.
         *
         * @param value the IfcPolygonalBoundedHalfSpace datatype to write
         */
        bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *value) override;
        /**
         * write the IfcPolyline datatype to m_out.
         *
         * @param value the IfcPolyline datatype to write
         */
        bool visitIfcPolyline(IfcPolyline *value) override;
        /**
         * write the IfcPort datatype to m_out.
         *
         * @param value the IfcPort datatype to write
         */
        bool visitIfcPort(IfcPort *value) override;
        /**
         * write the IfcPostalAddress datatype to m_out.
         *
         * @param value the IfcPostalAddress datatype to write
         */
        bool visitIfcPostalAddress(IfcPostalAddress *value) override;
        /**
         * write the IfcPreDefinedColour datatype to m_out.
         *
         * @param value the IfcPreDefinedColour datatype to write
         */
        bool visitIfcPreDefinedColour(IfcPreDefinedColour *value) override;
        /**
         * write the IfcPreDefinedCurveFont datatype to m_out.
         *
         * @param value the IfcPreDefinedCurveFont datatype to write
         */
        bool visitIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value) override;
        /**
         * write the IfcPreDefinedDimensionSymbol datatype to m_out.
         *
         * @param value the IfcPreDefinedDimensionSymbol datatype to write
         */
        bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *value) override;
        /**
         * write the IfcPreDefinedItem datatype to m_out.
         *
         * @param value the IfcPreDefinedItem datatype to write
         */
        bool visitIfcPreDefinedItem(IfcPreDefinedItem *value) override;
        /**
         * write the IfcPreDefinedPointMarkerSymbol datatype to m_out.
         *
         * @param value the IfcPreDefinedPointMarkerSymbol datatype to write
         */
        bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *value) override;
        /**
         * write the IfcPreDefinedSymbol datatype to m_out.
         *
         * @param value the IfcPreDefinedSymbol datatype to write
         */
        bool visitIfcPreDefinedSymbol(IfcPreDefinedSymbol *value) override;
        /**
         * write the IfcPreDefinedTerminatorSymbol datatype to m_out.
         *
         * @param value the IfcPreDefinedTerminatorSymbol datatype to write
         */
        bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *value) override;
        /**
         * write the IfcPreDefinedTextFont datatype to m_out.
         *
         * @param value the IfcPreDefinedTextFont datatype to write
         */
        bool visitIfcPreDefinedTextFont(IfcPreDefinedTextFont *value) override;
        /**
         * @param selectData
         */
        void writeIfcLayeredItem(IfcLayeredItem *selectData);
        /**
         * write the IfcPresentationLayerAssignment datatype to m_out.
         *
         * @param value the IfcPresentationLayerAssignment datatype to write
         */
        bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *value) override;
        /**
         * @param selectData
         */
        void writeIfcPresentationStyleSelect(IfcPresentationStyleSelect *selectData);
        /**
         * @param enumData
         */
        void writeIfcNullStyle(IfcNullStyle enumData);
        /**
         * write the IfcPresentationLayerWithStyle datatype to m_out.
         *
         * @param value the IfcPresentationLayerWithStyle datatype to write
         */
        bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *value) override;
        /**
         * write the IfcPresentationStyle datatype to m_out.
         *
         * @param value the IfcPresentationStyle datatype to write
         */
        bool visitIfcPresentationStyle(IfcPresentationStyle *value) override;
        /**
         * write the IfcPresentationStyleAssignment datatype to m_out.
         *
         * @param value the IfcPresentationStyleAssignment datatype to write
         */
        bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *value) override;
        /**
         * @param enumData
         */
        void writeIfcProcedureTypeEnum(IfcProcedureTypeEnum enumData);
        /**
         * write the IfcProcedure datatype to m_out.
         *
         * @param value the IfcProcedure datatype to write
         */
        bool visitIfcProcedure(IfcProcedure *value) override;
        /**
         * write the IfcProcess datatype to m_out.
         *
         * @param value the IfcProcess datatype to write
         */
        bool visitIfcProcess(IfcProcess *value) override;
        /**
         * write the IfcProduct datatype to m_out.
         *
         * @param value the IfcProduct datatype to write
         */
        bool visitIfcProduct(IfcProduct *value) override;
        /**
         * write the IfcProductDefinitionShape datatype to m_out.
         *
         * @param value the IfcProductDefinitionShape datatype to write
         */
        bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *value) override;
        /**
         * write the IfcProductRepresentation datatype to m_out.
         *
         * @param value the IfcProductRepresentation datatype to write
         */
        bool visitIfcProductRepresentation(IfcProductRepresentation *value) override;
        /**
         * write the IfcProductsOfCombustionProperties datatype to m_out.
         *
         * @param value the IfcProductsOfCombustionProperties datatype to write
         */
        bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *value) override;
        /**
         * write the IfcProfileDef datatype to m_out.
         *
         * @param value the IfcProfileDef datatype to write
         */
        bool visitIfcProfileDef(IfcProfileDef *value) override;
        /**
         * write the IfcProfileProperties datatype to m_out.
         *
         * @param value the IfcProfileProperties datatype to write
         */
        bool visitIfcProfileProperties(IfcProfileProperties *value) override;
        /**
         * write the IfcProject datatype to m_out.
         *
         * @param value the IfcProject datatype to write
         */
        bool visitIfcProject(IfcProject *value) override;
        /**
         * @param enumData
         */
        void writeIfcProjectOrderTypeEnum(IfcProjectOrderTypeEnum enumData);
        /**
         * write the IfcProjectOrder datatype to m_out.
         *
         * @param value the IfcProjectOrder datatype to write
         */
        bool visitIfcProjectOrder(IfcProjectOrder *value) override;
        /**
         * @param enumData
         */
        void writeIfcProjectOrderRecordTypeEnum(IfcProjectOrderRecordTypeEnum enumData);
        /**
         * write the IfcProjectOrderRecord datatype to m_out.
         *
         * @param value the IfcProjectOrderRecord datatype to write
         */
        bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *value) override;
        /**
         * write the IfcProjectionCurve datatype to m_out.
         *
         * @param value the IfcProjectionCurve datatype to write
         */
        bool visitIfcProjectionCurve(IfcProjectionCurve *value) override;
        /**
         * write the IfcProjectionElement datatype to m_out.
         *
         * @param value the IfcProjectionElement datatype to write
         */
        bool visitIfcProjectionElement(IfcProjectionElement *value) override;
        /**
         * write the IfcProperty datatype to m_out.
         *
         * @param value the IfcProperty datatype to write
         */
        bool visitIfcProperty(IfcProperty *value) override;
        /**
         * write the IfcPropertyBoundedValue datatype to m_out.
         *
         * @param value the IfcPropertyBoundedValue datatype to write
         */
        bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *value) override;
        /**
         * write the IfcPropertyConstraintRelationship datatype to m_out.
         *
         * @param value the IfcPropertyConstraintRelationship datatype to write
         */
        bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *value) override;
        /**
         * write the IfcPropertyDefinition datatype to m_out.
         *
         * @param value the IfcPropertyDefinition datatype to write
         */
        bool visitIfcPropertyDefinition(IfcPropertyDefinition *value) override;
        /**
         * write the IfcPropertyDependencyRelationship datatype to m_out.
         *
         * @param value the IfcPropertyDependencyRelationship datatype to write
         */
        bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *value) override;
        /**
         * write the IfcPropertyEnumeratedValue datatype to m_out.
         *
         * @param value the IfcPropertyEnumeratedValue datatype to write
         */
        bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *value) override;
        /**
         * write the IfcPropertyEnumeration datatype to m_out.
         *
         * @param value the IfcPropertyEnumeration datatype to write
         */
        bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *value) override;
        /**
         * write the IfcPropertyListValue datatype to m_out.
         *
         * @param value the IfcPropertyListValue datatype to write
         */
        bool visitIfcPropertyListValue(IfcPropertyListValue *value) override;
        /**
         * @param selectData
         */
        void writeIfcObjectReferenceSelect(IfcObjectReferenceSelect *selectData);
        /**
         * write the IfcPropertyReferenceValue datatype to m_out.
         *
         * @param value the IfcPropertyReferenceValue datatype to write
         */
        bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *value) override;
        /**
         * write the IfcPropertySet datatype to m_out.
         *
         * @param value the IfcPropertySet datatype to write
         */
        bool visitIfcPropertySet(IfcPropertySet *value) override;
        /**
         * write the IfcPropertySetDefinition datatype to m_out.
         *
         * @param value the IfcPropertySetDefinition datatype to write
         */
        bool visitIfcPropertySetDefinition(IfcPropertySetDefinition *value) override;
        /**
         * write the IfcPropertySingleValue datatype to m_out.
         *
         * @param value the IfcPropertySingleValue datatype to write
         */
        bool visitIfcPropertySingleValue(IfcPropertySingleValue *value) override;
        /**
         * write the IfcPropertyTableValue datatype to m_out.
         *
         * @param value the IfcPropertyTableValue datatype to write
         */
        bool visitIfcPropertyTableValue(IfcPropertyTableValue *value) override;
        /**
         * @param enumData
         */
        void writeIfcProtectiveDeviceTypeEnum(IfcProtectiveDeviceTypeEnum enumData);
        /**
         * write the IfcProtectiveDeviceType datatype to m_out.
         *
         * @param value the IfcProtectiveDeviceType datatype to write
         */
        bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *value) override;
        /**
         * @param enumData
         */
        void writeIfcObjectTypeEnum(IfcObjectTypeEnum enumData);
        /**
         * write the IfcProxy datatype to m_out.
         *
         * @param value the IfcProxy datatype to write
         */
        bool visitIfcProxy(IfcProxy *value) override;
        /**
         * @param enumData
         */
        void writeIfcPumpTypeEnum(IfcPumpTypeEnum enumData);
        /**
         * write the IfcPumpType datatype to m_out.
         *
         * @param value the IfcPumpType datatype to write
         */
        bool visitIfcPumpType(IfcPumpType *value) override;
        /**
         * write the IfcQuantityArea datatype to m_out.
         *
         * @param value the IfcQuantityArea datatype to write
         */
        bool visitIfcQuantityArea(IfcQuantityArea *value) override;
        /**
         * write the IfcQuantityCount datatype to m_out.
         *
         * @param value the IfcQuantityCount datatype to write
         */
        bool visitIfcQuantityCount(IfcQuantityCount *value) override;
        /**
         * write the IfcQuantityLength datatype to m_out.
         *
         * @param value the IfcQuantityLength datatype to write
         */
        bool visitIfcQuantityLength(IfcQuantityLength *value) override;
        /**
         * write the IfcQuantityTime datatype to m_out.
         *
         * @param value the IfcQuantityTime datatype to write
         */
        bool visitIfcQuantityTime(IfcQuantityTime *value) override;
        /**
         * write the IfcQuantityVolume datatype to m_out.
         *
         * @param value the IfcQuantityVolume datatype to write
         */
        bool visitIfcQuantityVolume(IfcQuantityVolume *value) override;
        /**
         * write the IfcQuantityWeight datatype to m_out.
         *
         * @param value the IfcQuantityWeight datatype to write
         */
        bool visitIfcQuantityWeight(IfcQuantityWeight *value) override;
        /**
         * write the IfcRadiusDimension datatype to m_out.
         *
         * @param value the IfcRadiusDimension datatype to write
         */
        bool visitIfcRadiusDimension(IfcRadiusDimension *value) override;
        /**
         * @param enumData
         */
        void writeIfcRailingTypeEnum(IfcRailingTypeEnum enumData);
        /**
         * write the IfcRailing datatype to m_out.
         *
         * @param value the IfcRailing datatype to write
         */
        bool visitIfcRailing(IfcRailing *value) override;
        /**
         * write the IfcRailingType datatype to m_out.
         *
         * @param value the IfcRailingType datatype to write
         */
        bool visitIfcRailingType(IfcRailingType *value) override;
        /**
         * @param enumData
         */
        void writeIfcRampTypeEnum(IfcRampTypeEnum enumData);
        /**
         * write the IfcRamp datatype to m_out.
         *
         * @param value the IfcRamp datatype to write
         */
        bool visitIfcRamp(IfcRamp *value) override;
        /**
         * write the IfcRampFlight datatype to m_out.
         *
         * @param value the IfcRampFlight datatype to write
         */
        bool visitIfcRampFlight(IfcRampFlight *value) override;
        /**
         * @param enumData
         */
        void writeIfcRampFlightTypeEnum(IfcRampFlightTypeEnum enumData);
        /**
         * write the IfcRampFlightType datatype to m_out.
         *
         * @param value the IfcRampFlightType datatype to write
         */
        bool visitIfcRampFlightType(IfcRampFlightType *value) override;
        /**
         * write the IfcRationalBezierCurve datatype to m_out.
         *
         * @param value the IfcRationalBezierCurve datatype to write
         */
        bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *value) override;
        /**
         * write the IfcRectangleHollowProfileDef datatype to m_out.
         *
         * @param value the IfcRectangleHollowProfileDef datatype to write
         */
        bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *value) override;
        /**
         * write the IfcRectangleProfileDef datatype to m_out.
         *
         * @param value the IfcRectangleProfileDef datatype to write
         */
        bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *value) override;
        /**
         * write the IfcRectangularPyramid datatype to m_out.
         *
         * @param value the IfcRectangularPyramid datatype to write
         */
        bool visitIfcRectangularPyramid(IfcRectangularPyramid *value) override;
        /**
         * write the IfcRectangularTrimmedSurface datatype to m_out.
         *
         * @param value the IfcRectangularTrimmedSurface datatype to write
         */
        bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *value) override;
        /**
         * @param selectData
         */
        void writeIfcDocumentSelect(IfcDocumentSelect *selectData);
        /**
         * write the IfcReferencesValueDocument datatype to m_out.
         *
         * @param value the IfcReferencesValueDocument datatype to write
         */
        bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *value) override;
        /**
         * write the IfcRegularTimeSeries datatype to m_out.
         *
         * @param value the IfcRegularTimeSeries datatype to write
         */
        bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *value) override;
        /**
         * @param enumData
         */
        void writeIfcReinforcingBarSurfaceEnum(IfcReinforcingBarSurfaceEnum enumData);
        /**
         * write the IfcReinforcementBarProperties datatype to m_out.
         *
         * @param value the IfcReinforcementBarProperties datatype to write
         */
        bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *value) override;
        /**
         * write the IfcReinforcementDefinitionProperties datatype to m_out.
         *
         * @param value the IfcReinforcementDefinitionProperties datatype to write
         */
        bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *value) override;
        /**
         * @param enumData
         */
        void writeIfcReinforcingBarRoleEnum(IfcReinforcingBarRoleEnum enumData);
        /**
         * write the IfcReinforcingBar datatype to m_out.
         *
         * @param value the IfcReinforcingBar datatype to write
         */
        bool visitIfcReinforcingBar(IfcReinforcingBar *value) override;
        /**
         * write the IfcReinforcingElement datatype to m_out.
         *
         * @param value the IfcReinforcingElement datatype to write
         */
        bool visitIfcReinforcingElement(IfcReinforcingElement *value) override;
        /**
         * write the IfcReinforcingMesh datatype to m_out.
         *
         * @param value the IfcReinforcingMesh datatype to write
         */
        bool visitIfcReinforcingMesh(IfcReinforcingMesh *value) override;
        /**
         * write the IfcRelAggregates datatype to m_out.
         *
         * @param value the IfcRelAggregates datatype to write
         */
        bool visitIfcRelAggregates(IfcRelAggregates *value) override;
        /**
         * write the IfcRelAssigns datatype to m_out.
         *
         * @param value the IfcRelAssigns datatype to write
         */
        bool visitIfcRelAssigns(IfcRelAssigns *value) override;
        /**
         * write the IfcRelAssignsTasks datatype to m_out.
         *
         * @param value the IfcRelAssignsTasks datatype to write
         */
        bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *value) override;
        /**
         * write the IfcRelAssignsToActor datatype to m_out.
         *
         * @param value the IfcRelAssignsToActor datatype to write
         */
        bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *value) override;
        /**
         * write the IfcRelAssignsToControl datatype to m_out.
         *
         * @param value the IfcRelAssignsToControl datatype to write
         */
        bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *value) override;
        /**
         * write the IfcRelAssignsToGroup datatype to m_out.
         *
         * @param value the IfcRelAssignsToGroup datatype to write
         */
        bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *value) override;
        /**
         * write the IfcRelAssignsToProcess datatype to m_out.
         *
         * @param value the IfcRelAssignsToProcess datatype to write
         */
        bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *value) override;
        /**
         * write the IfcRelAssignsToProduct datatype to m_out.
         *
         * @param value the IfcRelAssignsToProduct datatype to write
         */
        bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *value) override;
        /**
         * write the IfcRelAssignsToProjectOrder datatype to m_out.
         *
         * @param value the IfcRelAssignsToProjectOrder datatype to write
         */
        bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *value) override;
        /**
         * write the IfcRelAssignsToResource datatype to m_out.
         *
         * @param value the IfcRelAssignsToResource datatype to write
         */
        bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *value) override;
        /**
         * write the IfcRelAssociates datatype to m_out.
         *
         * @param value the IfcRelAssociates datatype to write
         */
        bool visitIfcRelAssociates(IfcRelAssociates *value) override;
        /**
         * write the IfcRelAssociatesAppliedValue datatype to m_out.
         *
         * @param value the IfcRelAssociatesAppliedValue datatype to write
         */
        bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *value) override;
        /**
         * write the IfcRelAssociatesApproval datatype to m_out.
         *
         * @param value the IfcRelAssociatesApproval datatype to write
         */
        bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *value) override;
        /**
         * write the IfcRelAssociatesClassification datatype to m_out.
         *
         * @param value the IfcRelAssociatesClassification datatype to write
         */
        bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *value) override;
        /**
         * write the IfcRelAssociatesConstraint datatype to m_out.
         *
         * @param value the IfcRelAssociatesConstraint datatype to write
         */
        bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *value) override;
        /**
         * write the IfcRelAssociatesDocument datatype to m_out.
         *
         * @param value the IfcRelAssociatesDocument datatype to write
         */
        bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *value) override;
        /**
         * @param selectData
         */
        void writeIfcLibrarySelect(IfcLibrarySelect *selectData);
        /**
         * write the IfcRelAssociatesLibrary datatype to m_out.
         *
         * @param value the IfcRelAssociatesLibrary datatype to write
         */
        bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *value) override;
        /**
         * @param selectData
         */
        void writeIfcMaterialSelect(IfcMaterialSelect *selectData);
        /**
         * write the IfcRelAssociatesMaterial datatype to m_out.
         *
         * @param value the IfcRelAssociatesMaterial datatype to write
         */
        bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *value) override;
        /**
         * @param selectData
         */
        void writeIfcOrientationSelect(IfcOrientationSelect *selectData);
        /**
         * write the IfcRelAssociatesProfileProperties datatype to m_out.
         *
         * @param value the IfcRelAssociatesProfileProperties datatype to write
         */
        bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *value) override;
        /**
         * write the IfcRelConnects datatype to m_out.
         *
         * @param value the IfcRelConnects datatype to write
         */
        bool visitIfcRelConnects(IfcRelConnects *value) override;
        /**
         * write the IfcRelConnectsElements datatype to m_out.
         *
         * @param value the IfcRelConnectsElements datatype to write
         */
        bool visitIfcRelConnectsElements(IfcRelConnectsElements *value) override;
        /**
         * @param enumData
         */
        void writeIfcConnectionTypeEnum(IfcConnectionTypeEnum enumData);
        /**
         * write the IfcRelConnectsPathElements datatype to m_out.
         *
         * @param value the IfcRelConnectsPathElements datatype to write
         */
        bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *value) override;
        /**
         * write the IfcRelConnectsPortToElement datatype to m_out.
         *
         * @param value the IfcRelConnectsPortToElement datatype to write
         */
        bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *value) override;
        /**
         * write the IfcRelConnectsPorts datatype to m_out.
         *
         * @param value the IfcRelConnectsPorts datatype to write
         */
        bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *value) override;
        /**
         * @param selectData
         */
        void writeIfcStructuralActivityAssignmentSelect(IfcStructuralActivityAssignmentSelect *selectData);
        /**
         * write the IfcRelConnectsStructuralActivity datatype to m_out.
         *
         * @param value the IfcRelConnectsStructuralActivity datatype to write
         */
        bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *value) override;
        /**
         * write the IfcRelConnectsStructuralElement datatype to m_out.
         *
         * @param value the IfcRelConnectsStructuralElement datatype to write
         */
        bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *value) override;
        /**
         * write the IfcRelConnectsStructuralMember datatype to m_out.
         *
         * @param value the IfcRelConnectsStructuralMember datatype to write
         */
        bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *value) override;
        /**
         * write the IfcRelConnectsWithEccentricity datatype to m_out.
         *
         * @param value the IfcRelConnectsWithEccentricity datatype to write
         */
        bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *value) override;
        /**
         * write the IfcRelConnectsWithRealizingElements datatype to m_out.
         *
         * @param value the IfcRelConnectsWithRealizingElements datatype to write
         */
        bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *value) override;
        /**
         * write the IfcRelContainedInSpatialStructure datatype to m_out.
         *
         * @param value the IfcRelContainedInSpatialStructure datatype to write
         */
        bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *value) override;
        /**
         * write the IfcRelCoversBldgElements datatype to m_out.
         *
         * @param value the IfcRelCoversBldgElements datatype to write
         */
        bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *value) override;
        /**
         * write the IfcRelCoversSpaces datatype to m_out.
         *
         * @param value the IfcRelCoversSpaces datatype to write
         */
        bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *value) override;
        /**
         * write the IfcRelDecomposes datatype to m_out.
         *
         * @param value the IfcRelDecomposes datatype to write
         */
        bool visitIfcRelDecomposes(IfcRelDecomposes *value) override;
        /**
         * write the IfcRelDefines datatype to m_out.
         *
         * @param value the IfcRelDefines datatype to write
         */
        bool visitIfcRelDefines(IfcRelDefines *value) override;
        /**
         * write the IfcRelDefinesByProperties datatype to m_out.
         *
         * @param value the IfcRelDefinesByProperties datatype to write
         */
        bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *value) override;
        /**
         * write the IfcRelDefinesByType datatype to m_out.
         *
         * @param value the IfcRelDefinesByType datatype to write
         */
        bool visitIfcRelDefinesByType(IfcRelDefinesByType *value) override;
        /**
         * write the IfcRelFillsElement datatype to m_out.
         *
         * @param value the IfcRelFillsElement datatype to write
         */
        bool visitIfcRelFillsElement(IfcRelFillsElement *value) override;
        /**
         * write the IfcRelFlowControlElements datatype to m_out.
         *
         * @param value the IfcRelFlowControlElements datatype to write
         */
        bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *value) override;
        /**
         * write the IfcRelInteractionRequirements datatype to m_out.
         *
         * @param value the IfcRelInteractionRequirements datatype to write
         */
        bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *value) override;
        /**
         * write the IfcRelNests datatype to m_out.
         *
         * @param value the IfcRelNests datatype to write
         */
        bool visitIfcRelNests(IfcRelNests *value) override;
        /**
         * write the IfcRelOccupiesSpaces datatype to m_out.
         *
         * @param value the IfcRelOccupiesSpaces datatype to write
         */
        bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *value) override;
        /**
         * write the IfcRelOverridesProperties datatype to m_out.
         *
         * @param value the IfcRelOverridesProperties datatype to write
         */
        bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *value) override;
        /**
         * write the IfcRelProjectsElement datatype to m_out.
         *
         * @param value the IfcRelProjectsElement datatype to write
         */
        bool visitIfcRelProjectsElement(IfcRelProjectsElement *value) override;
        /**
         * write the IfcRelReferencedInSpatialStructure datatype to m_out.
         *
         * @param value the IfcRelReferencedInSpatialStructure datatype to write
         */
        bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *value) override;
        /**
         * write the IfcRelSchedulesCostItems datatype to m_out.
         *
         * @param value the IfcRelSchedulesCostItems datatype to write
         */
        bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *value) override;
        /**
         * @param enumData
         */
        void writeIfcSequenceEnum(IfcSequenceEnum enumData);
        /**
         * write the IfcRelSequence datatype to m_out.
         *
         * @param value the IfcRelSequence datatype to write
         */
        bool visitIfcRelSequence(IfcRelSequence *value) override;
        /**
         * write the IfcRelServicesBuildings datatype to m_out.
         *
         * @param value the IfcRelServicesBuildings datatype to write
         */
        bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *value) override;
        /**
         * @param enumData
         */
        void writeIfcPhysicalOrVirtualEnum(IfcPhysicalOrVirtualEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcInternalOrExternalEnum(IfcInternalOrExternalEnum enumData);
        /**
         * write the IfcRelSpaceBoundary datatype to m_out.
         *
         * @param value the IfcRelSpaceBoundary datatype to write
         */
        bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *value) override;
        /**
         * write the IfcRelVoidsElement datatype to m_out.
         *
         * @param value the IfcRelVoidsElement datatype to write
         */
        bool visitIfcRelVoidsElement(IfcRelVoidsElement *value) override;
        /**
         * write the IfcRelationship datatype to m_out.
         *
         * @param value the IfcRelationship datatype to write
         */
        bool visitIfcRelationship(IfcRelationship *value) override;
        /**
         * write the IfcRelaxation datatype to m_out.
         *
         * @param value the IfcRelaxation datatype to write
         */
        bool visitIfcRelaxation(IfcRelaxation *value) override;
        /**
         * write the IfcRepresentation datatype to m_out.
         *
         * @param value the IfcRepresentation datatype to write
         */
        bool visitIfcRepresentation(IfcRepresentation *value) override;
        /**
         * write the IfcRepresentationContext datatype to m_out.
         *
         * @param value the IfcRepresentationContext datatype to write
         */
        bool visitIfcRepresentationContext(IfcRepresentationContext *value) override;
        /**
         * write the IfcRepresentationItem datatype to m_out.
         *
         * @param value the IfcRepresentationItem datatype to write
         */
        bool visitIfcRepresentationItem(IfcRepresentationItem *value) override;
        /**
         * write the IfcRepresentationMap datatype to m_out.
         *
         * @param value the IfcRepresentationMap datatype to write
         */
        bool visitIfcRepresentationMap(IfcRepresentationMap *value) override;
        /**
         * write the IfcResource datatype to m_out.
         *
         * @param value the IfcResource datatype to write
         */
        bool visitIfcResource(IfcResource *value) override;
        /**
         * write the IfcRevolvedAreaSolid datatype to m_out.
         *
         * @param value the IfcRevolvedAreaSolid datatype to write
         */
        bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *value) override;
        /**
         * @param enumData
         */
        void writeIfcRibPlateDirectionEnum(IfcRibPlateDirectionEnum enumData);
        /**
         * write the IfcRibPlateProfileProperties datatype to m_out.
         *
         * @param value the IfcRibPlateProfileProperties datatype to write
         */
        bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *value) override;
        /**
         * write the IfcRightCircularCone datatype to m_out.
         *
         * @param value the IfcRightCircularCone datatype to write
         */
        bool visitIfcRightCircularCone(IfcRightCircularCone *value) override;
        /**
         * write the IfcRightCircularCylinder datatype to m_out.
         *
         * @param value the IfcRightCircularCylinder datatype to write
         */
        bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *value) override;
        /**
         * @param enumData
         */
        void writeIfcRoofTypeEnum(IfcRoofTypeEnum enumData);
        /**
         * write the IfcRoof datatype to m_out.
         *
         * @param value the IfcRoof datatype to write
         */
        bool visitIfcRoof(IfcRoof *value) override;
        /**
         * write the IfcRoot datatype to m_out.
         *
         * @param value the IfcRoot datatype to write
         */
        bool visitIfcRoot(IfcRoot *value) override;
        /**
         * write the IfcRoundedEdgeFeature datatype to m_out.
         *
         * @param value the IfcRoundedEdgeFeature datatype to write
         */
        bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *value) override;
        /**
         * write the IfcRoundedRectangleProfileDef datatype to m_out.
         *
         * @param value the IfcRoundedRectangleProfileDef datatype to write
         */
        bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *value) override;
        /**
         * @param enumData
         */
        void writeIfcSIPrefix(IfcSIPrefix enumData);
        /**
         * @param enumData
         */
        void writeIfcSIUnitName(IfcSIUnitName enumData);
        /**
         * write the IfcSIUnit datatype to m_out.
         *
         * @param value the IfcSIUnit datatype to write
         */
        bool visitIfcSIUnit(IfcSIUnit *value) override;
        /**
         * @param enumData
         */
        void writeIfcSanitaryTerminalTypeEnum(IfcSanitaryTerminalTypeEnum enumData);
        /**
         * write the IfcSanitaryTerminalType datatype to m_out.
         *
         * @param value the IfcSanitaryTerminalType datatype to write
         */
        bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *value) override;
        /**
         * write the IfcScheduleTimeControl datatype to m_out.
         *
         * @param value the IfcScheduleTimeControl datatype to write
         */
        bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *value) override;
        /**
         * @param enumData
         */
        void writeIfcSectionTypeEnum(IfcSectionTypeEnum enumData);
        /**
         * write the IfcSectionProperties datatype to m_out.
         *
         * @param value the IfcSectionProperties datatype to write
         */
        bool visitIfcSectionProperties(IfcSectionProperties *value) override;
        /**
         * write the IfcSectionReinforcementProperties datatype to m_out.
         *
         * @param value the IfcSectionReinforcementProperties datatype to write
         */
        bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *value) override;
        /**
         * write the IfcSectionedSpine datatype to m_out.
         *
         * @param value the IfcSectionedSpine datatype to write
         */
        bool visitIfcSectionedSpine(IfcSectionedSpine *value) override;
        /**
         * @param enumData
         */
        void writeIfcSensorTypeEnum(IfcSensorTypeEnum enumData);
        /**
         * write the IfcSensorType datatype to m_out.
         *
         * @param value the IfcSensorType datatype to write
         */
        bool visitIfcSensorType(IfcSensorType *value) override;
        /**
         * @param enumData
         */
        void writeIfcServiceLifeTypeEnum(IfcServiceLifeTypeEnum enumData);
        /**
         * write the IfcServiceLife datatype to m_out.
         *
         * @param value the IfcServiceLife datatype to write
         */
        bool visitIfcServiceLife(IfcServiceLife *value) override;
        /**
         * @param enumData
         */
        void writeIfcServiceLifeFactorTypeEnum(IfcServiceLifeFactorTypeEnum enumData);
        /**
         * @param selectData
         */
        void writeIfcMeasureValue(IfcMeasureValue *selectData);
        /**
         * write the IfcServiceLifeFactor datatype to m_out.
         *
         * @param value the IfcServiceLifeFactor datatype to write
         */
        bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *value) override;
        /**
         * write the IfcShapeAspect datatype to m_out.
         *
         * @param value the IfcShapeAspect datatype to write
         */
        bool visitIfcShapeAspect(IfcShapeAspect *value) override;
        /**
         * write the IfcShapeModel datatype to m_out.
         *
         * @param value the IfcShapeModel datatype to write
         */
        bool visitIfcShapeModel(IfcShapeModel *value) override;
        /**
         * write the IfcShapeRepresentation datatype to m_out.
         *
         * @param value the IfcShapeRepresentation datatype to write
         */
        bool visitIfcShapeRepresentation(IfcShapeRepresentation *value) override;
        /**
         * @param selectData
         */
        void writeIfcShell(IfcShell *selectData);
        /**
         * write the IfcShellBasedSurfaceModel datatype to m_out.
         *
         * @param value the IfcShellBasedSurfaceModel datatype to write
         */
        bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *value) override;
        /**
         * write the IfcSimpleProperty datatype to m_out.
         *
         * @param value the IfcSimpleProperty datatype to write
         */
        bool visitIfcSimpleProperty(IfcSimpleProperty *value) override;
        /**
         * write the IfcSite datatype to m_out.
         *
         * @param value the IfcSite datatype to write
         */
        bool visitIfcSite(IfcSite *value) override;
        /**
         * @param enumData
         */
        void writeIfcSlabTypeEnum(IfcSlabTypeEnum enumData);
        /**
         * write the IfcSlab datatype to m_out.
         *
         * @param value the IfcSlab datatype to write
         */
        bool visitIfcSlab(IfcSlab *value) override;
        /**
         * write the IfcSlabType datatype to m_out.
         *
         * @param value the IfcSlabType datatype to write
         */
        bool visitIfcSlabType(IfcSlabType *value) override;
        /**
         * write the IfcSlippageConnectionCondition datatype to m_out.
         *
         * @param value the IfcSlippageConnectionCondition datatype to write
         */
        bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *value) override;
        /**
         * write the IfcSolidModel datatype to m_out.
         *
         * @param value the IfcSolidModel datatype to write
         */
        bool visitIfcSolidModel(IfcSolidModel *value) override;
        /**
         * @param enumData
         */
        void writeIfcSoundScaleEnum(IfcSoundScaleEnum enumData);
        /**
         * write the IfcSoundProperties datatype to m_out.
         *
         * @param value the IfcSoundProperties datatype to write
         */
        bool visitIfcSoundProperties(IfcSoundProperties *value) override;
        /**
         * write the IfcSoundValue datatype to m_out.
         *
         * @param value the IfcSoundValue datatype to write
         */
        bool visitIfcSoundValue(IfcSoundValue *value) override;
        /**
         * write the IfcSpace datatype to m_out.
         *
         * @param value the IfcSpace datatype to write
         */
        bool visitIfcSpace(IfcSpace *value) override;
        /**
         * @param enumData
         */
        void writeIfcSpaceHeaterTypeEnum(IfcSpaceHeaterTypeEnum enumData);
        /**
         * write the IfcSpaceHeaterType datatype to m_out.
         *
         * @param value the IfcSpaceHeaterType datatype to write
         */
        bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *value) override;
        /**
         * write the IfcSpaceProgram datatype to m_out.
         *
         * @param value the IfcSpaceProgram datatype to write
         */
        bool visitIfcSpaceProgram(IfcSpaceProgram *value) override;
        /**
         * @param enumData
         */
        void writeIfcThermalLoadSourceEnum(IfcThermalLoadSourceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcThermalLoadTypeEnum(IfcThermalLoadTypeEnum enumData);
        /**
         * write the IfcSpaceThermalLoadProperties datatype to m_out.
         *
         * @param value the IfcSpaceThermalLoadProperties datatype to write
         */
        bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *value) override;
        /**
         * @param enumData
         */
        void writeIfcSpaceTypeEnum(IfcSpaceTypeEnum enumData);
        /**
         * write the IfcSpaceType datatype to m_out.
         *
         * @param value the IfcSpaceType datatype to write
         */
        bool visitIfcSpaceType(IfcSpaceType *value) override;
        /**
         * write the IfcSpatialStructureElement datatype to m_out.
         *
         * @param value the IfcSpatialStructureElement datatype to write
         */
        bool visitIfcSpatialStructureElement(IfcSpatialStructureElement *value) override;
        /**
         * write the IfcSpatialStructureElementType datatype to m_out.
         *
         * @param value the IfcSpatialStructureElementType datatype to write
         */
        bool visitIfcSpatialStructureElementType(IfcSpatialStructureElementType *value) override;
        /**
         * write the IfcSphere datatype to m_out.
         *
         * @param value the IfcSphere datatype to write
         */
        bool visitIfcSphere(IfcSphere *value) override;
        /**
         * @param enumData
         */
        void writeIfcStackTerminalTypeEnum(IfcStackTerminalTypeEnum enumData);
        /**
         * write the IfcStackTerminalType datatype to m_out.
         *
         * @param value the IfcStackTerminalType datatype to write
         */
        bool visitIfcStackTerminalType(IfcStackTerminalType *value) override;
        /**
         * @param enumData
         */
        void writeIfcStairTypeEnum(IfcStairTypeEnum enumData);
        /**
         * write the IfcStair datatype to m_out.
         *
         * @param value the IfcStair datatype to write
         */
        bool visitIfcStair(IfcStair *value) override;
        /**
         * write the IfcStairFlight datatype to m_out.
         *
         * @param value the IfcStairFlight datatype to write
         */
        bool visitIfcStairFlight(IfcStairFlight *value) override;
        /**
         * @param enumData
         */
        void writeIfcStairFlightTypeEnum(IfcStairFlightTypeEnum enumData);
        /**
         * write the IfcStairFlightType datatype to m_out.
         *
         * @param value the IfcStairFlightType datatype to write
         */
        bool visitIfcStairFlightType(IfcStairFlightType *value) override;
        /**
         * write the IfcStructuralAction datatype to m_out.
         *
         * @param value the IfcStructuralAction datatype to write
         */
        bool visitIfcStructuralAction(IfcStructuralAction *value) override;
        /**
         * write the IfcStructuralActivity datatype to m_out.
         *
         * @param value the IfcStructuralActivity datatype to write
         */
        bool visitIfcStructuralActivity(IfcStructuralActivity *value) override;
        /**
         * @param enumData
         */
        void writeIfcAnalysisModelTypeEnum(IfcAnalysisModelTypeEnum enumData);
        /**
         * write the IfcStructuralAnalysisModel datatype to m_out.
         *
         * @param value the IfcStructuralAnalysisModel datatype to write
         */
        bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *value) override;
        /**
         * write the IfcStructuralConnection datatype to m_out.
         *
         * @param value the IfcStructuralConnection datatype to write
         */
        bool visitIfcStructuralConnection(IfcStructuralConnection *value) override;
        /**
         * write the IfcStructuralConnectionCondition datatype to m_out.
         *
         * @param value the IfcStructuralConnectionCondition datatype to write
         */
        bool visitIfcStructuralConnectionCondition(IfcStructuralConnectionCondition *value) override;
        /**
         * write the IfcStructuralCurveConnection datatype to m_out.
         *
         * @param value the IfcStructuralCurveConnection datatype to write
         */
        bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *value) override;
        /**
         * @param enumData
         */
        void writeIfcStructuralCurveTypeEnum(IfcStructuralCurveTypeEnum enumData);
        /**
         * write the IfcStructuralCurveMember datatype to m_out.
         *
         * @param value the IfcStructuralCurveMember datatype to write
         */
        bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *value) override;
        /**
         * write the IfcStructuralCurveMemberVarying datatype to m_out.
         *
         * @param value the IfcStructuralCurveMemberVarying datatype to write
         */
        bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *value) override;
        /**
         * write the IfcStructuralItem datatype to m_out.
         *
         * @param value the IfcStructuralItem datatype to write
         */
        bool visitIfcStructuralItem(IfcStructuralItem *value) override;
        /**
         * @param enumData
         */
        void writeIfcProjectedOrTrueLengthEnum(IfcProjectedOrTrueLengthEnum enumData);
        /**
         * write the IfcStructuralLinearAction datatype to m_out.
         *
         * @param value the IfcStructuralLinearAction datatype to write
         */
        bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *value) override;
        /**
         * write the IfcStructuralLinearActionVarying datatype to m_out.
         *
         * @param value the IfcStructuralLinearActionVarying datatype to write
         */
        bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *value) override;
        /**
         * write the IfcStructuralLoad datatype to m_out.
         *
         * @param value the IfcStructuralLoad datatype to write
         */
        bool visitIfcStructuralLoad(IfcStructuralLoad *value) override;
        /**
         * @param enumData
         */
        void writeIfcLoadGroupTypeEnum(IfcLoadGroupTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcActionTypeEnum(IfcActionTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcActionSourceTypeEnum(IfcActionSourceTypeEnum enumData);
        /**
         * write the IfcStructuralLoadGroup datatype to m_out.
         *
         * @param value the IfcStructuralLoadGroup datatype to write
         */
        bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *value) override;
        /**
         * write the IfcStructuralLoadLinearForce datatype to m_out.
         *
         * @param value the IfcStructuralLoadLinearForce datatype to write
         */
        bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *value) override;
        /**
         * write the IfcStructuralLoadPlanarForce datatype to m_out.
         *
         * @param value the IfcStructuralLoadPlanarForce datatype to write
         */
        bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *value) override;
        /**
         * write the IfcStructuralLoadSingleDisplacement datatype to m_out.
         *
         * @param value the IfcStructuralLoadSingleDisplacement datatype to write
         */
        bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *value) override;
        /**
         * write the IfcStructuralLoadSingleDisplacementDistortion datatype to m_out.
         *
         * @param value the IfcStructuralLoadSingleDisplacementDistortion datatype to write
         */
        bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *value) override;
        /**
         * write the IfcStructuralLoadSingleForce datatype to m_out.
         *
         * @param value the IfcStructuralLoadSingleForce datatype to write
         */
        bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *value) override;
        /**
         * write the IfcStructuralLoadSingleForceWarping datatype to m_out.
         *
         * @param value the IfcStructuralLoadSingleForceWarping datatype to write
         */
        bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *value) override;
        /**
         * write the IfcStructuralLoadStatic datatype to m_out.
         *
         * @param value the IfcStructuralLoadStatic datatype to write
         */
        bool visitIfcStructuralLoadStatic(IfcStructuralLoadStatic *value) override;
        /**
         * write the IfcStructuralLoadTemperature datatype to m_out.
         *
         * @param value the IfcStructuralLoadTemperature datatype to write
         */
        bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *value) override;
        /**
         * write the IfcStructuralMember datatype to m_out.
         *
         * @param value the IfcStructuralMember datatype to write
         */
        bool visitIfcStructuralMember(IfcStructuralMember *value) override;
        /**
         * write the IfcStructuralPlanarAction datatype to m_out.
         *
         * @param value the IfcStructuralPlanarAction datatype to write
         */
        bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *value) override;
        /**
         * write the IfcStructuralPlanarActionVarying datatype to m_out.
         *
         * @param value the IfcStructuralPlanarActionVarying datatype to write
         */
        bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *value) override;
        /**
         * write the IfcStructuralPointAction datatype to m_out.
         *
         * @param value the IfcStructuralPointAction datatype to write
         */
        bool visitIfcStructuralPointAction(IfcStructuralPointAction *value) override;
        /**
         * write the IfcStructuralPointConnection datatype to m_out.
         *
         * @param value the IfcStructuralPointConnection datatype to write
         */
        bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *value) override;
        /**
         * write the IfcStructuralPointReaction datatype to m_out.
         *
         * @param value the IfcStructuralPointReaction datatype to write
         */
        bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *value) override;
        /**
         * write the IfcStructuralProfileProperties datatype to m_out.
         *
         * @param value the IfcStructuralProfileProperties datatype to write
         */
        bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *value) override;
        /**
         * write the IfcStructuralReaction datatype to m_out.
         *
         * @param value the IfcStructuralReaction datatype to write
         */
        bool visitIfcStructuralReaction(IfcStructuralReaction *value) override;
        /**
         * @param enumData
         */
        void writeIfcAnalysisTheoryTypeEnum(IfcAnalysisTheoryTypeEnum enumData);
        /**
         * write the IfcStructuralResultGroup datatype to m_out.
         *
         * @param value the IfcStructuralResultGroup datatype to write
         */
        bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *value) override;
        /**
         * write the IfcStructuralSteelProfileProperties datatype to m_out.
         *
         * @param value the IfcStructuralSteelProfileProperties datatype to write
         */
        bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *value) override;
        /**
         * write the IfcStructuralSurfaceConnection datatype to m_out.
         *
         * @param value the IfcStructuralSurfaceConnection datatype to write
         */
        bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *value) override;
        /**
         * @param enumData
         */
        void writeIfcStructuralSurfaceTypeEnum(IfcStructuralSurfaceTypeEnum enumData);
        /**
         * write the IfcStructuralSurfaceMember datatype to m_out.
         *
         * @param value the IfcStructuralSurfaceMember datatype to write
         */
        bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *value) override;
        /**
         * write the IfcStructuralSurfaceMemberVarying datatype to m_out.
         *
         * @param value the IfcStructuralSurfaceMemberVarying datatype to write
         */
        bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *value) override;
        /**
         * write the IfcStructuredDimensionCallout datatype to m_out.
         *
         * @param value the IfcStructuredDimensionCallout datatype to write
         */
        bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *value) override;
        /**
         * write the IfcStyleModel datatype to m_out.
         *
         * @param value the IfcStyleModel datatype to write
         */
        bool visitIfcStyleModel(IfcStyleModel *value) override;
        /**
         * write the IfcStyledItem datatype to m_out.
         *
         * @param value the IfcStyledItem datatype to write
         */
        bool visitIfcStyledItem(IfcStyledItem *value) override;
        /**
         * write the IfcStyledRepresentation datatype to m_out.
         *
         * @param value the IfcStyledRepresentation datatype to write
         */
        bool visitIfcStyledRepresentation(IfcStyledRepresentation *value) override;
        /**
         * write the IfcSubContractResource datatype to m_out.
         *
         * @param value the IfcSubContractResource datatype to write
         */
        bool visitIfcSubContractResource(IfcSubContractResource *value) override;
        /**
         * write the IfcSubedge datatype to m_out.
         *
         * @param value the IfcSubedge datatype to write
         */
        bool visitIfcSubedge(IfcSubedge *value) override;
        /**
         * write the IfcSurface datatype to m_out.
         *
         * @param value the IfcSurface datatype to write
         */
        bool visitIfcSurface(IfcSurface *value) override;
        /**
         * write the IfcSurfaceCurveSweptAreaSolid datatype to m_out.
         *
         * @param value the IfcSurfaceCurveSweptAreaSolid datatype to write
         */
        bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *value) override;
        /**
         * write the IfcSurfaceOfLinearExtrusion datatype to m_out.
         *
         * @param value the IfcSurfaceOfLinearExtrusion datatype to write
         */
        bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *value) override;
        /**
         * write the IfcSurfaceOfRevolution datatype to m_out.
         *
         * @param value the IfcSurfaceOfRevolution datatype to write
         */
        bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *value) override;
        /**
         * @param enumData
         */
        void writeIfcSurfaceSide(IfcSurfaceSide enumData);
        /**
         * @param selectData
         */
        void writeIfcSurfaceStyleElementSelect(IfcSurfaceStyleElementSelect *selectData);
        /**
         * write the IfcSurfaceStyle datatype to m_out.
         *
         * @param value the IfcSurfaceStyle datatype to write
         */
        bool visitIfcSurfaceStyle(IfcSurfaceStyle *value) override;
        /**
         * write the IfcSurfaceStyleLighting datatype to m_out.
         *
         * @param value the IfcSurfaceStyleLighting datatype to write
         */
        bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value) override;
        /**
         * write the IfcSurfaceStyleRefraction datatype to m_out.
         *
         * @param value the IfcSurfaceStyleRefraction datatype to write
         */
        bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value) override;
        /**
         * @param selectData
         */
        void writeIfcColourOrFactor(IfcColourOrFactor *selectData);
        /**
         * @param selectData
         */
        void writeIfcSpecularHighlightSelect(IfcSpecularHighlightSelect *selectData);
        /**
         * @param enumData
         */
        void writeIfcReflectanceMethodEnum(IfcReflectanceMethodEnum enumData);
        /**
         * write the IfcSurfaceStyleRendering datatype to m_out.
         *
         * @param value the IfcSurfaceStyleRendering datatype to write
         */
        bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *value) override;
        /**
         * write the IfcSurfaceStyleShading datatype to m_out.
         *
         * @param value the IfcSurfaceStyleShading datatype to write
         */
        bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *value) override;
        /**
         * write the IfcSurfaceStyleWithTextures datatype to m_out.
         *
         * @param value the IfcSurfaceStyleWithTextures datatype to write
         */
        bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value) override;
        /**
         * write the IfcSurfaceTexture datatype to m_out.
         *
         * @param value the IfcSurfaceTexture datatype to write
         */
        bool visitIfcSurfaceTexture(IfcSurfaceTexture *value) override;
        /**
         * write the IfcSweptAreaSolid datatype to m_out.
         *
         * @param value the IfcSweptAreaSolid datatype to write
         */
        bool visitIfcSweptAreaSolid(IfcSweptAreaSolid *value) override;
        /**
         * write the IfcSweptDiskSolid datatype to m_out.
         *
         * @param value the IfcSweptDiskSolid datatype to write
         */
        bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *value) override;
        /**
         * write the IfcSweptSurface datatype to m_out.
         *
         * @param value the IfcSweptSurface datatype to write
         */
        bool visitIfcSweptSurface(IfcSweptSurface *value) override;
        /**
         * @param enumData
         */
        void writeIfcSwitchingDeviceTypeEnum(IfcSwitchingDeviceTypeEnum enumData);
        /**
         * write the IfcSwitchingDeviceType datatype to m_out.
         *
         * @param value the IfcSwitchingDeviceType datatype to write
         */
        bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *value) override;
        /**
         * @param selectData
         */
        void writeIfcSymbolStyleSelect(IfcSymbolStyleSelect *selectData);
        /**
         * write the IfcSymbolStyle datatype to m_out.
         *
         * @param value the IfcSymbolStyle datatype to write
         */
        bool visitIfcSymbolStyle(IfcSymbolStyle *value) override;
        /**
         * write the IfcSystem datatype to m_out.
         *
         * @param value the IfcSystem datatype to write
         */
        bool visitIfcSystem(IfcSystem *value) override;
        /**
         * write the IfcSystemFurnitureElementType datatype to m_out.
         *
         * @param value the IfcSystemFurnitureElementType datatype to write
         */
        bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *value) override;
        /**
         * write the IfcTShapeProfileDef datatype to m_out.
         *
         * @param value the IfcTShapeProfileDef datatype to write
         */
        bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *value) override;
        /**
         * write the IfcTable datatype to m_out.
         *
         * @param value the IfcTable datatype to write
         */
        bool visitIfcTable(IfcTable *value) override;
        /**
         * write the IfcTableRow datatype to m_out.
         *
         * @param value the IfcTableRow datatype to write
         */
        bool visitIfcTableRow(IfcTableRow *value) override;
        /**
         * @param enumData
         */
        void writeIfcTankTypeEnum(IfcTankTypeEnum enumData);
        /**
         * write the IfcTankType datatype to m_out.
         *
         * @param value the IfcTankType datatype to write
         */
        bool visitIfcTankType(IfcTankType *value) override;
        /**
         * write the IfcTask datatype to m_out.
         *
         * @param value the IfcTask datatype to write
         */
        bool visitIfcTask(IfcTask *value) override;
        /**
         * write the IfcTelecomAddress datatype to m_out.
         *
         * @param value the IfcTelecomAddress datatype to write
         */
        bool visitIfcTelecomAddress(IfcTelecomAddress *value) override;
        /**
         * @param enumData
         */
        void writeIfcTendonTypeEnum(IfcTendonTypeEnum enumData);
        /**
         * write the IfcTendon datatype to m_out.
         *
         * @param value the IfcTendon datatype to write
         */
        bool visitIfcTendon(IfcTendon *value) override;
        /**
         * write the IfcTendonAnchor datatype to m_out.
         *
         * @param value the IfcTendonAnchor datatype to write
         */
        bool visitIfcTendonAnchor(IfcTendonAnchor *value) override;
        /**
         * write the IfcTerminatorSymbol datatype to m_out.
         *
         * @param value the IfcTerminatorSymbol datatype to write
         */
        bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *value) override;
        /**
         * @param enumData
         */
        void writeIfcTextPath(IfcTextPath enumData);
        /**
         * write the IfcTextLiteral datatype to m_out.
         *
         * @param value the IfcTextLiteral datatype to write
         */
        bool visitIfcTextLiteral(IfcTextLiteral *value) override;
        /**
         * write the IfcTextLiteralWithExtent datatype to m_out.
         *
         * @param value the IfcTextLiteralWithExtent datatype to write
         */
        bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *value) override;
        /**
         * @param selectData
         */
        void writeIfcCharacterStyleSelect(IfcCharacterStyleSelect *selectData);
        /**
         * @param selectData
         */
        void writeIfcTextStyleSelect(IfcTextStyleSelect *selectData);
        /**
         * @param selectData
         */
        void writeIfcTextFontSelect(IfcTextFontSelect *selectData);
        /**
         * write the IfcTextStyle datatype to m_out.
         *
         * @param value the IfcTextStyle datatype to write
         */
        bool visitIfcTextStyle(IfcTextStyle *value) override;
        /**
         * write the IfcTextStyleFontModel datatype to m_out.
         *
         * @param value the IfcTextStyleFontModel datatype to write
         */
        bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *value) override;
        /**
         * write the IfcTextStyleForDefinedFont datatype to m_out.
         *
         * @param value the IfcTextStyleForDefinedFont datatype to write
         */
        bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *value) override;
        /**
         * write the IfcTextStyleTextModel datatype to m_out.
         *
         * @param value the IfcTextStyleTextModel datatype to write
         */
        bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *value) override;
        /**
         * write the IfcTextStyleWithBoxCharacteristics datatype to m_out.
         *
         * @param value the IfcTextStyleWithBoxCharacteristics datatype to write
         */
        bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value) override;
        /**
         * write the IfcTextureCoordinate datatype to m_out.
         *
         * @param value the IfcTextureCoordinate datatype to write
         */
        bool visitIfcTextureCoordinate(IfcTextureCoordinate *value) override;
        /**
         * @param selectData
         */
        void writeIfcSimpleValue(IfcSimpleValue *selectData);
        /**
         * write the IfcTextureCoordinateGenerator datatype to m_out.
         *
         * @param value the IfcTextureCoordinateGenerator datatype to write
         */
        bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *value) override;
        /**
         * write the IfcTextureMap datatype to m_out.
         *
         * @param value the IfcTextureMap datatype to write
         */
        bool visitIfcTextureMap(IfcTextureMap *value) override;
        /**
         * write the IfcTextureVertex datatype to m_out.
         *
         * @param value the IfcTextureVertex datatype to write
         */
        bool visitIfcTextureVertex(IfcTextureVertex *value) override;
        /**
         * write the IfcThermalMaterialProperties datatype to m_out.
         *
         * @param value the IfcThermalMaterialProperties datatype to write
         */
        bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *value) override;
        /**
         * write the IfcTimeSeries datatype to m_out.
         *
         * @param value the IfcTimeSeries datatype to write
         */
        bool visitIfcTimeSeries(IfcTimeSeries *value) override;
        /**
         * write the IfcTimeSeriesReferenceRelationship datatype to m_out.
         *
         * @param value the IfcTimeSeriesReferenceRelationship datatype to write
         */
        bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *value) override;
        /**
         * @param enumData
         */
        void writeIfcTimeSeriesScheduleTypeEnum(IfcTimeSeriesScheduleTypeEnum enumData);
        /**
         * write the IfcTimeSeriesSchedule datatype to m_out.
         *
         * @param value the IfcTimeSeriesSchedule datatype to write
         */
        bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *value) override;
        /**
         * write the IfcTimeSeriesValue datatype to m_out.
         *
         * @param value the IfcTimeSeriesValue datatype to write
         */
        bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *value) override;
        /**
         * write the IfcTopologicalRepresentationItem datatype to m_out.
         *
         * @param value the IfcTopologicalRepresentationItem datatype to write
         */
        bool visitIfcTopologicalRepresentationItem(IfcTopologicalRepresentationItem *value) override;
        /**
         * write the IfcTopologyRepresentation datatype to m_out.
         *
         * @param value the IfcTopologyRepresentation datatype to write
         */
        bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *value) override;
        /**
         * @param enumData
         */
        void writeIfcTransformerTypeEnum(IfcTransformerTypeEnum enumData);
        /**
         * write the IfcTransformerType datatype to m_out.
         *
         * @param value the IfcTransformerType datatype to write
         */
        bool visitIfcTransformerType(IfcTransformerType *value) override;
        /**
         * @param enumData
         */
        void writeIfcTransportElementTypeEnum(IfcTransportElementTypeEnum enumData);
        /**
         * write the IfcTransportElement datatype to m_out.
         *
         * @param value the IfcTransportElement datatype to write
         */
        bool visitIfcTransportElement(IfcTransportElement *value) override;
        /**
         * write the IfcTransportElementType datatype to m_out.
         *
         * @param value the IfcTransportElementType datatype to write
         */
        bool visitIfcTransportElementType(IfcTransportElementType *value) override;
        /**
         * write the IfcTrapeziumProfileDef datatype to m_out.
         *
         * @param value the IfcTrapeziumProfileDef datatype to write
         */
        bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *value) override;
        /**
         * @param selectData
         */
        void writeIfcTrimmingSelect(IfcTrimmingSelect *selectData);
        /**
         * @param enumData
         */
        void writeIfcTrimmingPreference(IfcTrimmingPreference enumData);
        /**
         * write the IfcTrimmedCurve datatype to m_out.
         *
         * @param value the IfcTrimmedCurve datatype to write
         */
        bool visitIfcTrimmedCurve(IfcTrimmedCurve *value) override;
        /**
         * @param enumData
         */
        void writeIfcTubeBundleTypeEnum(IfcTubeBundleTypeEnum enumData);
        /**
         * write the IfcTubeBundleType datatype to m_out.
         *
         * @param value the IfcTubeBundleType datatype to write
         */
        bool visitIfcTubeBundleType(IfcTubeBundleType *value) override;
        /**
         * write the IfcTwoDirectionRepeatFactor datatype to m_out.
         *
         * @param value the IfcTwoDirectionRepeatFactor datatype to write
         */
        bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *value) override;
        /**
         * write the IfcTypeObject datatype to m_out.
         *
         * @param value the IfcTypeObject datatype to write
         */
        bool visitIfcTypeObject(IfcTypeObject *value) override;
        /**
         * write the IfcTypeProduct datatype to m_out.
         *
         * @param value the IfcTypeProduct datatype to write
         */
        bool visitIfcTypeProduct(IfcTypeProduct *value) override;
        /**
         * write the IfcUShapeProfileDef datatype to m_out.
         *
         * @param value the IfcUShapeProfileDef datatype to write
         */
        bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *value) override;
        /**
         * write the IfcUnitAssignment datatype to m_out.
         *
         * @param value the IfcUnitAssignment datatype to write
         */
        bool visitIfcUnitAssignment(IfcUnitAssignment *value) override;
        /**
         * @param enumData
         */
        void writeIfcUnitaryEquipmentTypeEnum(IfcUnitaryEquipmentTypeEnum enumData);
        /**
         * write the IfcUnitaryEquipmentType datatype to m_out.
         *
         * @param value the IfcUnitaryEquipmentType datatype to write
         */
        bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *value) override;
        /**
         * @param enumData
         */
        void writeIfcValveTypeEnum(IfcValveTypeEnum enumData);
        /**
         * write the IfcValveType datatype to m_out.
         *
         * @param value the IfcValveType datatype to write
         */
        bool visitIfcValveType(IfcValveType *value) override;
        /**
         * write the IfcVector datatype to m_out.
         *
         * @param value the IfcVector datatype to write
         */
        bool visitIfcVector(IfcVector *value) override;
        /**
         * write the IfcVertex datatype to m_out.
         *
         * @param value the IfcVertex datatype to write
         */
        bool visitIfcVertex(IfcVertex *value) override;
        /**
         * write the IfcVertexBasedTextureMap datatype to m_out.
         *
         * @param value the IfcVertexBasedTextureMap datatype to write
         */
        bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *value) override;
        /**
         * write the IfcVertexLoop datatype to m_out.
         *
         * @param value the IfcVertexLoop datatype to write
         */
        bool visitIfcVertexLoop(IfcVertexLoop *value) override;
        /**
         * write the IfcVertexPoint datatype to m_out.
         *
         * @param value the IfcVertexPoint datatype to write
         */
        bool visitIfcVertexPoint(IfcVertexPoint *value) override;
        /**
         * @param enumData
         */
        void writeIfcVibrationIsolatorTypeEnum(IfcVibrationIsolatorTypeEnum enumData);
        /**
         * write the IfcVibrationIsolatorType datatype to m_out.
         *
         * @param value the IfcVibrationIsolatorType datatype to write
         */
        bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *value) override;
        /**
         * write the IfcVirtualElement datatype to m_out.
         *
         * @param value the IfcVirtualElement datatype to write
         */
        bool visitIfcVirtualElement(IfcVirtualElement *value) override;
        /**
         * write the IfcVirtualGridIntersection datatype to m_out.
         *
         * @param value the IfcVirtualGridIntersection datatype to write
         */
        bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *value) override;
        /**
         * write the IfcWall datatype to m_out.
         *
         * @param value the IfcWall datatype to write
         */
        bool visitIfcWall(IfcWall *value) override;
        /**
         * write the IfcWallStandardCase datatype to m_out.
         *
         * @param value the IfcWallStandardCase datatype to write
         */
        bool visitIfcWallStandardCase(IfcWallStandardCase *value) override;
        /**
         * @param enumData
         */
        void writeIfcWallTypeEnum(IfcWallTypeEnum enumData);
        /**
         * write the IfcWallType datatype to m_out.
         *
         * @param value the IfcWallType datatype to write
         */
        bool visitIfcWallType(IfcWallType *value) override;
        /**
         * @param enumData
         */
        void writeIfcWasteTerminalTypeEnum(IfcWasteTerminalTypeEnum enumData);
        /**
         * write the IfcWasteTerminalType datatype to m_out.
         *
         * @param value the IfcWasteTerminalType datatype to write
         */
        bool visitIfcWasteTerminalType(IfcWasteTerminalType *value) override;
        /**
         * write the IfcWaterProperties datatype to m_out.
         *
         * @param value the IfcWaterProperties datatype to write
         */
        bool visitIfcWaterProperties(IfcWaterProperties *value) override;
        /**
         * write the IfcWindow datatype to m_out.
         *
         * @param value the IfcWindow datatype to write
         */
        bool visitIfcWindow(IfcWindow *value) override;
        /**
         * write the IfcWindowLiningProperties datatype to m_out.
         *
         * @param value the IfcWindowLiningProperties datatype to write
         */
        bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *value) override;
        /**
         * @param enumData
         */
        void writeIfcWindowPanelOperationEnum(IfcWindowPanelOperationEnum enumData);
        /**
         * write the IfcWindowPanelProperties datatype to m_out.
         *
         * @param value the IfcWindowPanelProperties datatype to write
         */
        bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *value) override;
        /**
         * @param enumData
         */
        void writeIfcWindowStyleConstructionEnum(IfcWindowStyleConstructionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcWindowStyleOperationEnum(IfcWindowStyleOperationEnum enumData);
        /**
         * write the IfcWindowStyle datatype to m_out.
         *
         * @param value the IfcWindowStyle datatype to write
         */
        bool visitIfcWindowStyle(IfcWindowStyle *value) override;
        /**
         * @param enumData
         */
        void writeIfcWorkControlTypeEnum(IfcWorkControlTypeEnum enumData);
        /**
         * write the IfcWorkControl datatype to m_out.
         *
         * @param value the IfcWorkControl datatype to write
         */
        bool visitIfcWorkControl(IfcWorkControl *value) override;
        /**
         * write the IfcWorkPlan datatype to m_out.
         *
         * @param value the IfcWorkPlan datatype to write
         */
        bool visitIfcWorkPlan(IfcWorkPlan *value) override;
        /**
         * write the IfcWorkSchedule datatype to m_out.
         *
         * @param value the IfcWorkSchedule datatype to write
         */
        bool visitIfcWorkSchedule(IfcWorkSchedule *value) override;
        /**
         * write the IfcZShapeProfileDef datatype to m_out.
         *
         * @param value the IfcZShapeProfileDef datatype to write
         */
        bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *value) override;
        /**
         * write the IfcZone datatype to m_out.
         *
         * @param value the IfcZone datatype to write
         */
        bool visitIfcZone(IfcZone *value) override;

    };

}

#endif // IFC2X3_SPFWRITER_H
