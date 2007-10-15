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

#ifndef IFC2X3_COPYOP_H
#define IFC2X3_COPYOP_H
#include <map>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseCopyOp.h>
#include <Step/BaseObject.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class ExpressDataSet;
    class Ifc2DCompositeCurve;
    class IfcActionRequest;
    class IfcActor;
    class IfcActorRole;
    class IfcActuatorType;
    class IfcAddress;
    class IfcAirTerminalBoxType;
    class IfcAirTerminalType;
    class IfcAirToAirHeatRecoveryType;
    class IfcAlarmType;
    class IfcAlignmentElement;
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
    class IfcBridge;
    class IfcBridgeContactElement;
    class IfcBridgeElement;
    class IfcBridgePart;
    class IfcBridgePrismaticElement;
    class IfcBridgeSegment;
    class IfcBridgeSegmentPart;
    class IfcBridgeStructureElement;
    class IfcBuilding;
    class IfcBuildingElement;
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
    class IfcChillerType;
    class IfcCircle;
    class IfcCircleHollowProfileDef;
    class IfcCircleProfileDef;
    class IfcCivilElement;
    class IfcCivilElementPart;
    class IfcCivilSheath;
    class IfcCivilStructureElement;
    class IfcCivilVoid;
    class IfcClassification;
    class IfcClassificationItem;
    class IfcClassificationItemRelationship;
    class IfcClassificationNotation;
    class IfcClassificationNotationFacet;
    class IfcClassificationReference;
    class IfcClosedShell;
    class IfcClothoid;
    class IfcCoilType;
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
    class IfcCsgSolid;
    class IfcCurrencyRelationship;
    class IfcCurtainWall;
    class IfcCurtainWallType;
    class IfcCurve;
    class IfcCurveBoundedPlane;
    class IfcCurveStyle;
    class IfcCurveStyleFont;
    class IfcCurveStyleFontAndScaling;
    class IfcCurveStyleFontPattern;
    class IfcDamperType;
    class IfcDateAndTime;
    class IfcDefinedSymbol;
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
    class IfcDoor;
    class IfcDoorLiningProperties;
    class IfcDoorPanelProperties;
    class IfcDoorStyle;
    class IfcDraughtingCallout;
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
    class IfcElementPart;
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
    class IfcFillAreaStyleTileSymbolWithStyle;
    class IfcFillAreaStyleTiles;
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
    class IfcGrid;
    class IfcGridAxis;
    class IfcGridPlacement;
    class IfcGroup;
    class IfcHalfSpaceSolid;
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
    class IfcLibraryInformation;
    class IfcLibraryReference;
    class IfcLightDistributionData;
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
    class IfcMeasureWithUnit;
    class IfcMechanicalConcreteMaterialProperties;
    class IfcMechanicalFastener;
    class IfcMechanicalFastenerType;
    class IfcMechanicalMaterialProperties;
    class IfcMechanicalSteelMaterialProperties;
    class IfcMember;
    class IfcMemberType;
    class IfcMetric;
    class IfcMonetaryUnit;
    class IfcMotorConnectionType;
    class IfcMove;
    class IfcNamedUnit;
    class IfcObject;
    class IfcObjectDefinition;
    class IfcObjectPlacement;
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
    class IfcReferenceCurve;
    class IfcReferenceCurve3D;
    class IfcReferenceCurveAlignment2D;
    class IfcReferenceCurvePlacement;
    class IfcReferenceCurvePlacementSystem;
    class IfcReferenceElement;
    class IfcReferencePlacement;
    class IfcReferencedSectionedSpine;
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
    class IfcShellBasedSurfaceModel;
    class IfcSimpleProperty;
    class IfcSite;
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
    class IfcSphere;
    class IfcStackTerminalType;
    class IfcStair;
    class IfcStairFlight;
    class IfcStairFlightType;
    class IfcStructuralAction;
    class IfcStructuralActivity;
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
    class IfcSurfaceStyle;
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
    class IfcTextLiteral;
    class IfcTextLiteralWithExtent;
    class IfcTextStyle;
    class IfcTextStyleFontModel;
    class IfcTextStyleForDefinedFont;
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
    class IfcTubeBundleType;
    class IfcTwoDirectionRepeatFactor;
    class IfcTypeObject;
    class IfcTypeProduct;
    class IfcUShapeProfileDef;
    class IfcUnitAssignment;
    class IfcUnitaryEquipmentType;
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
     */
    class IFC2X3_DLL_DEF CopyOp : public Step::BaseCopyOp {
    public:
        /**
         */
        CopyOp();
        virtual ~CopyOp();
        /**
         * @param original
         * @param clone
         */
        virtual void associate(const Step::BaseObject *original, Step::BaseObject *clone) const;
        /**
         * @param original
         */
        virtual Step::BaseObject *find(const Step::BaseObject *original) const;
        /**
         */
        virtual ExpressDataSet *getExpressDataSet() const;
        /**
         * @param obj
         */
        virtual Ifc2DCompositeCurve *operator()(const Ifc2DCompositeCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcActionRequest *operator()(const IfcActionRequest *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcActor *operator()(const IfcActor *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcActorRole *operator()(const IfcActorRole *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcActuatorType *operator()(const IfcActuatorType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAddress *operator()(const IfcAddress *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAirTerminalBoxType *operator()(const IfcAirTerminalBoxType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAirTerminalType *operator()(const IfcAirTerminalType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAirToAirHeatRecoveryType *operator()(const IfcAirToAirHeatRecoveryType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAlarmType *operator()(const IfcAlarmType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAngularDimension *operator()(const IfcAngularDimension *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAnnotation *operator()(const IfcAnnotation *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAnnotationCurveOccurrence *operator()(const IfcAnnotationCurveOccurrence *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAnnotationFillArea *operator()(const IfcAnnotationFillArea *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAnnotationFillAreaOccurrence *operator()(const IfcAnnotationFillAreaOccurrence *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAnnotationOccurrence *operator()(const IfcAnnotationOccurrence *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAnnotationSurface *operator()(const IfcAnnotationSurface *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAnnotationSurfaceOccurrence *operator()(const IfcAnnotationSurfaceOccurrence *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAnnotationSymbolOccurrence *operator()(const IfcAnnotationSymbolOccurrence *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAnnotationTextOccurrence *operator()(const IfcAnnotationTextOccurrence *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcApplication *operator()(const IfcApplication *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAppliedValue *operator()(const IfcAppliedValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAppliedValueRelationship *operator()(const IfcAppliedValueRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcApproval *operator()(const IfcApproval *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcApprovalActorRelationship *operator()(const IfcApprovalActorRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcApprovalPropertyRelationship *operator()(const IfcApprovalPropertyRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcApprovalRelationship *operator()(const IfcApprovalRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcArbitraryClosedProfileDef *operator()(const IfcArbitraryClosedProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcArbitraryOpenProfileDef *operator()(const IfcArbitraryOpenProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcArbitraryProfileDefWithVoids *operator()(const IfcArbitraryProfileDefWithVoids *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAsset *operator()(const IfcAsset *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAsymmetricIShapeProfileDef *operator()(const IfcAsymmetricIShapeProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAxis1Placement *operator()(const IfcAxis1Placement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAxis2Placement2D *operator()(const IfcAxis2Placement2D *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAxis2Placement3D *operator()(const IfcAxis2Placement3D *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBSplineCurve *operator()(const IfcBSplineCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBeam *operator()(const IfcBeam *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBeamType *operator()(const IfcBeamType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBezierCurve *operator()(const IfcBezierCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBlobTexture *operator()(const IfcBlobTexture *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBlock *operator()(const IfcBlock *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBoilerType *operator()(const IfcBoilerType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBooleanClippingResult *operator()(const IfcBooleanClippingResult *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBooleanResult *operator()(const IfcBooleanResult *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBoundaryCondition *operator()(const IfcBoundaryCondition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBoundaryEdgeCondition *operator()(const IfcBoundaryEdgeCondition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBoundaryFaceCondition *operator()(const IfcBoundaryFaceCondition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBoundaryNodeCondition *operator()(const IfcBoundaryNodeCondition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBoundaryNodeConditionWarping *operator()(const IfcBoundaryNodeConditionWarping *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBoundedCurve *operator()(const IfcBoundedCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBoundedSurface *operator()(const IfcBoundedSurface *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBoundingBox *operator()(const IfcBoundingBox *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBoxedHalfSpace *operator()(const IfcBoxedHalfSpace *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBuilding *operator()(const IfcBuilding *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBuildingElement *operator()(const IfcBuildingElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBuildingElementPart *operator()(const IfcBuildingElementPart *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBuildingElementProxy *operator()(const IfcBuildingElementProxy *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBuildingElementProxyType *operator()(const IfcBuildingElementProxyType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBuildingElementType *operator()(const IfcBuildingElementType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBuildingStorey *operator()(const IfcBuildingStorey *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCShapeProfileDef *operator()(const IfcCShapeProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCableCarrierFittingType *operator()(const IfcCableCarrierFittingType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCableCarrierSegmentType *operator()(const IfcCableCarrierSegmentType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCableSegmentType *operator()(const IfcCableSegmentType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCalendarDate *operator()(const IfcCalendarDate *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCartesianPoint *operator()(const IfcCartesianPoint *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator *operator()(const IfcCartesianTransformationOperator *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator2D *operator()(const IfcCartesianTransformationOperator2D *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator2DnonUniform *operator()(const IfcCartesianTransformationOperator2DnonUniform *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator3D *operator()(const IfcCartesianTransformationOperator3D *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator3DnonUniform *operator()(const IfcCartesianTransformationOperator3DnonUniform *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCenterLineProfileDef *operator()(const IfcCenterLineProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcChamferEdgeFeature *operator()(const IfcChamferEdgeFeature *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcChillerType *operator()(const IfcChillerType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCircle *operator()(const IfcCircle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCircleHollowProfileDef *operator()(const IfcCircleHollowProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCircleProfileDef *operator()(const IfcCircleProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcClassification *operator()(const IfcClassification *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcClassificationItem *operator()(const IfcClassificationItem *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcClassificationItemRelationship *operator()(const IfcClassificationItemRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcClassificationNotation *operator()(const IfcClassificationNotation *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcClassificationNotationFacet *operator()(const IfcClassificationNotationFacet *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcClassificationReference *operator()(const IfcClassificationReference *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcClosedShell *operator()(const IfcClosedShell *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCoilType *operator()(const IfcCoilType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcColourRgb *operator()(const IfcColourRgb *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcColourSpecification *operator()(const IfcColourSpecification *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcColumn *operator()(const IfcColumn *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcColumnType *operator()(const IfcColumnType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcComplexProperty *operator()(const IfcComplexProperty *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCompositeCurve *operator()(const IfcCompositeCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCompositeCurveSegment *operator()(const IfcCompositeCurveSegment *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCompositeProfileDef *operator()(const IfcCompositeProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCompressorType *operator()(const IfcCompressorType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCondenserType *operator()(const IfcCondenserType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCondition *operator()(const IfcCondition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConditionCriterion *operator()(const IfcConditionCriterion *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConic *operator()(const IfcConic *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConnectedFaceSet *operator()(const IfcConnectedFaceSet *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConnectionCurveGeometry *operator()(const IfcConnectionCurveGeometry *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConnectionGeometry *operator()(const IfcConnectionGeometry *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConnectionPointEccentricity *operator()(const IfcConnectionPointEccentricity *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConnectionPointGeometry *operator()(const IfcConnectionPointGeometry *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConnectionPortGeometry *operator()(const IfcConnectionPortGeometry *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConnectionSurfaceGeometry *operator()(const IfcConnectionSurfaceGeometry *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConstraint *operator()(const IfcConstraint *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConstraintAggregationRelationship *operator()(const IfcConstraintAggregationRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConstraintClassificationRelationship *operator()(const IfcConstraintClassificationRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConstraintRelationship *operator()(const IfcConstraintRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConstructionEquipmentResource *operator()(const IfcConstructionEquipmentResource *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConstructionMaterialResource *operator()(const IfcConstructionMaterialResource *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConstructionProductResource *operator()(const IfcConstructionProductResource *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConstructionResource *operator()(const IfcConstructionResource *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcContextDependentUnit *operator()(const IfcContextDependentUnit *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcControl *operator()(const IfcControl *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcControllerType *operator()(const IfcControllerType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcConversionBasedUnit *operator()(const IfcConversionBasedUnit *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCooledBeamType *operator()(const IfcCooledBeamType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCoolingTowerType *operator()(const IfcCoolingTowerType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCoordinatedUniversalTimeOffset *operator()(const IfcCoordinatedUniversalTimeOffset *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCostItem *operator()(const IfcCostItem *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCostSchedule *operator()(const IfcCostSchedule *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCostValue *operator()(const IfcCostValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCovering *operator()(const IfcCovering *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCoveringType *operator()(const IfcCoveringType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCraneRailAShapeProfileDef *operator()(const IfcCraneRailAShapeProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCraneRailFShapeProfileDef *operator()(const IfcCraneRailFShapeProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCrewResource *operator()(const IfcCrewResource *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCsgPrimitive3D *operator()(const IfcCsgPrimitive3D *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCsgSolid *operator()(const IfcCsgSolid *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCurrencyRelationship *operator()(const IfcCurrencyRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCurtainWall *operator()(const IfcCurtainWall *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCurtainWallType *operator()(const IfcCurtainWallType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCurve *operator()(const IfcCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCurveBoundedPlane *operator()(const IfcCurveBoundedPlane *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCurveStyle *operator()(const IfcCurveStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFont *operator()(const IfcCurveStyleFont *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFontAndScaling *operator()(const IfcCurveStyleFontAndScaling *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFontPattern *operator()(const IfcCurveStyleFontPattern *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDamperType *operator()(const IfcDamperType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDateAndTime *operator()(const IfcDateAndTime *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDefinedSymbol *operator()(const IfcDefinedSymbol *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDerivedProfileDef *operator()(const IfcDerivedProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDerivedUnit *operator()(const IfcDerivedUnit *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDerivedUnitElement *operator()(const IfcDerivedUnitElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDiameterDimension *operator()(const IfcDiameterDimension *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDimensionCalloutRelationship *operator()(const IfcDimensionCalloutRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDimensionCurve *operator()(const IfcDimensionCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDimensionCurveDirectedCallout *operator()(const IfcDimensionCurveDirectedCallout *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDimensionCurveTerminator *operator()(const IfcDimensionCurveTerminator *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDimensionPair *operator()(const IfcDimensionPair *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDimensionalExponents *operator()(const IfcDimensionalExponents *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDirection *operator()(const IfcDirection *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDiscreteAccessory *operator()(const IfcDiscreteAccessory *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDiscreteAccessoryType *operator()(const IfcDiscreteAccessoryType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDistributionChamberElement *operator()(const IfcDistributionChamberElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDistributionChamberElementType *operator()(const IfcDistributionChamberElementType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDistributionControlElement *operator()(const IfcDistributionControlElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDistributionControlElementType *operator()(const IfcDistributionControlElementType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDistributionElement *operator()(const IfcDistributionElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDistributionElementType *operator()(const IfcDistributionElementType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDistributionFlowElement *operator()(const IfcDistributionFlowElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDistributionFlowElementType *operator()(const IfcDistributionFlowElementType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDistributionPort *operator()(const IfcDistributionPort *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDocumentElectronicFormat *operator()(const IfcDocumentElectronicFormat *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDocumentInformation *operator()(const IfcDocumentInformation *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDocumentInformationRelationship *operator()(const IfcDocumentInformationRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDocumentReference *operator()(const IfcDocumentReference *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDoor *operator()(const IfcDoor *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDoorLiningProperties *operator()(const IfcDoorLiningProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDoorPanelProperties *operator()(const IfcDoorPanelProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDoorStyle *operator()(const IfcDoorStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDraughtingCallout *operator()(const IfcDraughtingCallout *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDraughtingCalloutRelationship *operator()(const IfcDraughtingCalloutRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedColour *operator()(const IfcDraughtingPreDefinedColour *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedCurveFont *operator()(const IfcDraughtingPreDefinedCurveFont *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedTextFont *operator()(const IfcDraughtingPreDefinedTextFont *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDuctFittingType *operator()(const IfcDuctFittingType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDuctSegmentType *operator()(const IfcDuctSegmentType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcDuctSilencerType *operator()(const IfcDuctSilencerType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEdge *operator()(const IfcEdge *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEdgeCurve *operator()(const IfcEdgeCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEdgeFeature *operator()(const IfcEdgeFeature *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEdgeLoop *operator()(const IfcEdgeLoop *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElectricApplianceType *operator()(const IfcElectricApplianceType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElectricDistributionPoint *operator()(const IfcElectricDistributionPoint *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElectricFlowStorageDeviceType *operator()(const IfcElectricFlowStorageDeviceType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElectricGeneratorType *operator()(const IfcElectricGeneratorType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElectricHeaterType *operator()(const IfcElectricHeaterType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElectricMotorType *operator()(const IfcElectricMotorType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElectricTimeControlType *operator()(const IfcElectricTimeControlType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElectricalBaseProperties *operator()(const IfcElectricalBaseProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElectricalCircuit *operator()(const IfcElectricalCircuit *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElectricalElement *operator()(const IfcElectricalElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElement *operator()(const IfcElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElementAssembly *operator()(const IfcElementAssembly *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElementComponent *operator()(const IfcElementComponent *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElementComponentType *operator()(const IfcElementComponentType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElementQuantity *operator()(const IfcElementQuantity *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElementType *operator()(const IfcElementType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElementarySurface *operator()(const IfcElementarySurface *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEllipse *operator()(const IfcEllipse *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEllipseProfileDef *operator()(const IfcEllipseProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEnergyConversionDevice *operator()(const IfcEnergyConversionDevice *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEnergyConversionDeviceType *operator()(const IfcEnergyConversionDeviceType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEnergyProperties *operator()(const IfcEnergyProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEnvironmentalImpactValue *operator()(const IfcEnvironmentalImpactValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEquipmentElement *operator()(const IfcEquipmentElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEquipmentStandard *operator()(const IfcEquipmentStandard *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEvaporativeCoolerType *operator()(const IfcEvaporativeCoolerType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcEvaporatorType *operator()(const IfcEvaporatorType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcExtendedMaterialProperties *operator()(const IfcExtendedMaterialProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcExternalReference *operator()(const IfcExternalReference *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedHatchStyle *operator()(const IfcExternallyDefinedHatchStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedSurfaceStyle *operator()(const IfcExternallyDefinedSurfaceStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedSymbol *operator()(const IfcExternallyDefinedSymbol *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedTextFont *operator()(const IfcExternallyDefinedTextFont *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcExtrudedAreaSolid *operator()(const IfcExtrudedAreaSolid *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFace *operator()(const IfcFace *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFaceBasedSurfaceModel *operator()(const IfcFaceBasedSurfaceModel *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFaceBound *operator()(const IfcFaceBound *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFaceOuterBound *operator()(const IfcFaceOuterBound *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFaceSurface *operator()(const IfcFaceSurface *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFacetedBrep *operator()(const IfcFacetedBrep *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFacetedBrepWithVoids *operator()(const IfcFacetedBrepWithVoids *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFailureConnectionCondition *operator()(const IfcFailureConnectionCondition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFanType *operator()(const IfcFanType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFastener *operator()(const IfcFastener *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFastenerType *operator()(const IfcFastenerType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFeatureElement *operator()(const IfcFeatureElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFeatureElementAddition *operator()(const IfcFeatureElementAddition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFeatureElementSubtraction *operator()(const IfcFeatureElementSubtraction *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyle *operator()(const IfcFillAreaStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleHatching *operator()(const IfcFillAreaStyleHatching *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleTileSymbolWithStyle *operator()(const IfcFillAreaStyleTileSymbolWithStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleTiles *operator()(const IfcFillAreaStyleTiles *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFilterType *operator()(const IfcFilterType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFireSuppressionTerminalType *operator()(const IfcFireSuppressionTerminalType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowController *operator()(const IfcFlowController *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowControllerType *operator()(const IfcFlowControllerType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowFitting *operator()(const IfcFlowFitting *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowFittingType *operator()(const IfcFlowFittingType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowInstrumentType *operator()(const IfcFlowInstrumentType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowMeterType *operator()(const IfcFlowMeterType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowMovingDevice *operator()(const IfcFlowMovingDevice *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowMovingDeviceType *operator()(const IfcFlowMovingDeviceType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowSegment *operator()(const IfcFlowSegment *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowSegmentType *operator()(const IfcFlowSegmentType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowStorageDevice *operator()(const IfcFlowStorageDevice *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowStorageDeviceType *operator()(const IfcFlowStorageDeviceType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowTerminal *operator()(const IfcFlowTerminal *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowTerminalType *operator()(const IfcFlowTerminalType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowTreatmentDevice *operator()(const IfcFlowTreatmentDevice *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFlowTreatmentDeviceType *operator()(const IfcFlowTreatmentDeviceType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFluidFlowProperties *operator()(const IfcFluidFlowProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFooting *operator()(const IfcFooting *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFuelProperties *operator()(const IfcFuelProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFurnishingElement *operator()(const IfcFurnishingElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFurnishingElementType *operator()(const IfcFurnishingElementType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFurnitureStandard *operator()(const IfcFurnitureStandard *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcFurnitureType *operator()(const IfcFurnitureType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGasTerminalType *operator()(const IfcGasTerminalType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGeneralMaterialProperties *operator()(const IfcGeneralMaterialProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGeneralProfileProperties *operator()(const IfcGeneralProfileProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGeometricCurveSet *operator()(const IfcGeometricCurveSet *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationContext *operator()(const IfcGeometricRepresentationContext *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationItem *operator()(const IfcGeometricRepresentationItem *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationSubContext *operator()(const IfcGeometricRepresentationSubContext *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGeometricSet *operator()(const IfcGeometricSet *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGrid *operator()(const IfcGrid *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGridAxis *operator()(const IfcGridAxis *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGridPlacement *operator()(const IfcGridPlacement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcGroup *operator()(const IfcGroup *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcHalfSpaceSolid *operator()(const IfcHalfSpaceSolid *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcHeatExchangerType *operator()(const IfcHeatExchangerType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcHumidifierType *operator()(const IfcHumidifierType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcHygroscopicMaterialProperties *operator()(const IfcHygroscopicMaterialProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcIShapeProfileDef *operator()(const IfcIShapeProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcImageTexture *operator()(const IfcImageTexture *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcInventory *operator()(const IfcInventory *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcIrregularTimeSeries *operator()(const IfcIrregularTimeSeries *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcIrregularTimeSeriesValue *operator()(const IfcIrregularTimeSeriesValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcJunctionBoxType *operator()(const IfcJunctionBoxType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLShapeProfileDef *operator()(const IfcLShapeProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLaborResource *operator()(const IfcLaborResource *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLampType *operator()(const IfcLampType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLibraryInformation *operator()(const IfcLibraryInformation *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLibraryReference *operator()(const IfcLibraryReference *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLightDistributionData *operator()(const IfcLightDistributionData *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLightFixtureType *operator()(const IfcLightFixtureType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLightIntensityDistribution *operator()(const IfcLightIntensityDistribution *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLightSource *operator()(const IfcLightSource *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLightSourceAmbient *operator()(const IfcLightSourceAmbient *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLightSourceDirectional *operator()(const IfcLightSourceDirectional *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLightSourceGoniometric *operator()(const IfcLightSourceGoniometric *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLightSourcePositional *operator()(const IfcLightSourcePositional *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLightSourceSpot *operator()(const IfcLightSourceSpot *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLine *operator()(const IfcLine *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLinearDimension *operator()(const IfcLinearDimension *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLocalPlacement *operator()(const IfcLocalPlacement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLocalTime *operator()(const IfcLocalTime *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcLoop *operator()(const IfcLoop *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcManifoldSolidBrep *operator()(const IfcManifoldSolidBrep *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMappedItem *operator()(const IfcMappedItem *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMaterial *operator()(const IfcMaterial *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMaterialClassificationRelationship *operator()(const IfcMaterialClassificationRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMaterialDefinitionRepresentation *operator()(const IfcMaterialDefinitionRepresentation *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMaterialLayer *operator()(const IfcMaterialLayer *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMaterialLayerSet *operator()(const IfcMaterialLayerSet *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMaterialLayerSetUsage *operator()(const IfcMaterialLayerSetUsage *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMaterialList *operator()(const IfcMaterialList *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMaterialProperties *operator()(const IfcMaterialProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMeasureWithUnit *operator()(const IfcMeasureWithUnit *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMechanicalConcreteMaterialProperties *operator()(const IfcMechanicalConcreteMaterialProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMechanicalFastener *operator()(const IfcMechanicalFastener *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMechanicalFastenerType *operator()(const IfcMechanicalFastenerType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMechanicalMaterialProperties *operator()(const IfcMechanicalMaterialProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMechanicalSteelMaterialProperties *operator()(const IfcMechanicalSteelMaterialProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMember *operator()(const IfcMember *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMemberType *operator()(const IfcMemberType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMetric *operator()(const IfcMetric *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMonetaryUnit *operator()(const IfcMonetaryUnit *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMotorConnectionType *operator()(const IfcMotorConnectionType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcMove *operator()(const IfcMove *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcNamedUnit *operator()(const IfcNamedUnit *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcObject *operator()(const IfcObject *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcObjectDefinition *operator()(const IfcObjectDefinition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcObjectPlacement *operator()(const IfcObjectPlacement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcObjective *operator()(const IfcObjective *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOccupant *operator()(const IfcOccupant *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOffsetCurve2D *operator()(const IfcOffsetCurve2D *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOffsetCurve3D *operator()(const IfcOffsetCurve3D *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOneDirectionRepeatFactor *operator()(const IfcOneDirectionRepeatFactor *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOpenShell *operator()(const IfcOpenShell *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOpeningElement *operator()(const IfcOpeningElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOpticalMaterialProperties *operator()(const IfcOpticalMaterialProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOrderAction *operator()(const IfcOrderAction *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOrganization *operator()(const IfcOrganization *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOrganizationRelationship *operator()(const IfcOrganizationRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOrientedEdge *operator()(const IfcOrientedEdge *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOutletType *operator()(const IfcOutletType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcOwnerHistory *operator()(const IfcOwnerHistory *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcParameterizedProfileDef *operator()(const IfcParameterizedProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPath *operator()(const IfcPath *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPerformanceHistory *operator()(const IfcPerformanceHistory *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPermeableCoveringProperties *operator()(const IfcPermeableCoveringProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPermit *operator()(const IfcPermit *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPerson *operator()(const IfcPerson *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPersonAndOrganization *operator()(const IfcPersonAndOrganization *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPhysicalComplexQuantity *operator()(const IfcPhysicalComplexQuantity *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPhysicalQuantity *operator()(const IfcPhysicalQuantity *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPhysicalSimpleQuantity *operator()(const IfcPhysicalSimpleQuantity *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPile *operator()(const IfcPile *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPipeFittingType *operator()(const IfcPipeFittingType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPipeSegmentType *operator()(const IfcPipeSegmentType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPixelTexture *operator()(const IfcPixelTexture *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPlacement *operator()(const IfcPlacement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPlanarBox *operator()(const IfcPlanarBox *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPlanarExtent *operator()(const IfcPlanarExtent *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPlane *operator()(const IfcPlane *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPlate *operator()(const IfcPlate *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPlateType *operator()(const IfcPlateType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPoint *operator()(const IfcPoint *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPointOnCurve *operator()(const IfcPointOnCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPointOnSurface *operator()(const IfcPointOnSurface *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPolyLoop *operator()(const IfcPolyLoop *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPolygonalBoundedHalfSpace *operator()(const IfcPolygonalBoundedHalfSpace *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPolyline *operator()(const IfcPolyline *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPort *operator()(const IfcPort *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPostalAddress *operator()(const IfcPostalAddress *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPreDefinedColour *operator()(const IfcPreDefinedColour *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPreDefinedCurveFont *operator()(const IfcPreDefinedCurveFont *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPreDefinedDimensionSymbol *operator()(const IfcPreDefinedDimensionSymbol *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPreDefinedItem *operator()(const IfcPreDefinedItem *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPreDefinedPointMarkerSymbol *operator()(const IfcPreDefinedPointMarkerSymbol *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPreDefinedSymbol *operator()(const IfcPreDefinedSymbol *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPreDefinedTerminatorSymbol *operator()(const IfcPreDefinedTerminatorSymbol *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPreDefinedTextFont *operator()(const IfcPreDefinedTextFont *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPresentationLayerAssignment *operator()(const IfcPresentationLayerAssignment *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPresentationLayerWithStyle *operator()(const IfcPresentationLayerWithStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPresentationStyle *operator()(const IfcPresentationStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPresentationStyleAssignment *operator()(const IfcPresentationStyleAssignment *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProcedure *operator()(const IfcProcedure *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProcess *operator()(const IfcProcess *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProduct *operator()(const IfcProduct *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProductDefinitionShape *operator()(const IfcProductDefinitionShape *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProductRepresentation *operator()(const IfcProductRepresentation *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProductsOfCombustionProperties *operator()(const IfcProductsOfCombustionProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProfileDef *operator()(const IfcProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProfileProperties *operator()(const IfcProfileProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProject *operator()(const IfcProject *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProjectOrder *operator()(const IfcProjectOrder *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProjectOrderRecord *operator()(const IfcProjectOrderRecord *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProjectionCurve *operator()(const IfcProjectionCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProjectionElement *operator()(const IfcProjectionElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProperty *operator()(const IfcProperty *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertyBoundedValue *operator()(const IfcPropertyBoundedValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertyConstraintRelationship *operator()(const IfcPropertyConstraintRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertyDefinition *operator()(const IfcPropertyDefinition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertyDependencyRelationship *operator()(const IfcPropertyDependencyRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertyEnumeratedValue *operator()(const IfcPropertyEnumeratedValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertyEnumeration *operator()(const IfcPropertyEnumeration *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertyListValue *operator()(const IfcPropertyListValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertyReferenceValue *operator()(const IfcPropertyReferenceValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertySet *operator()(const IfcPropertySet *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertySetDefinition *operator()(const IfcPropertySetDefinition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertySingleValue *operator()(const IfcPropertySingleValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPropertyTableValue *operator()(const IfcPropertyTableValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProtectiveDeviceType *operator()(const IfcProtectiveDeviceType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcProxy *operator()(const IfcProxy *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcPumpType *operator()(const IfcPumpType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcQuantityArea *operator()(const IfcQuantityArea *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcQuantityCount *operator()(const IfcQuantityCount *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcQuantityLength *operator()(const IfcQuantityLength *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcQuantityTime *operator()(const IfcQuantityTime *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcQuantityVolume *operator()(const IfcQuantityVolume *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcQuantityWeight *operator()(const IfcQuantityWeight *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRadiusDimension *operator()(const IfcRadiusDimension *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRailing *operator()(const IfcRailing *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRailingType *operator()(const IfcRailingType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRamp *operator()(const IfcRamp *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRampFlight *operator()(const IfcRampFlight *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRampFlightType *operator()(const IfcRampFlightType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRationalBezierCurve *operator()(const IfcRationalBezierCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRectangleHollowProfileDef *operator()(const IfcRectangleHollowProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRectangleProfileDef *operator()(const IfcRectangleProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRectangularPyramid *operator()(const IfcRectangularPyramid *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRectangularTrimmedSurface *operator()(const IfcRectangularTrimmedSurface *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReferencesValueDocument *operator()(const IfcReferencesValueDocument *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRegularTimeSeries *operator()(const IfcRegularTimeSeries *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReinforcementBarProperties *operator()(const IfcReinforcementBarProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReinforcementDefinitionProperties *operator()(const IfcReinforcementDefinitionProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReinforcingBar *operator()(const IfcReinforcingBar *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReinforcingElement *operator()(const IfcReinforcingElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReinforcingMesh *operator()(const IfcReinforcingMesh *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAggregates *operator()(const IfcRelAggregates *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssigns *operator()(const IfcRelAssigns *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssignsTasks *operator()(const IfcRelAssignsTasks *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToActor *operator()(const IfcRelAssignsToActor *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToControl *operator()(const IfcRelAssignsToControl *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToGroup *operator()(const IfcRelAssignsToGroup *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProcess *operator()(const IfcRelAssignsToProcess *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProduct *operator()(const IfcRelAssignsToProduct *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProjectOrder *operator()(const IfcRelAssignsToProjectOrder *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToResource *operator()(const IfcRelAssignsToResource *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssociates *operator()(const IfcRelAssociates *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesAppliedValue *operator()(const IfcRelAssociatesAppliedValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesApproval *operator()(const IfcRelAssociatesApproval *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesClassification *operator()(const IfcRelAssociatesClassification *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesConstraint *operator()(const IfcRelAssociatesConstraint *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesDocument *operator()(const IfcRelAssociatesDocument *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesLibrary *operator()(const IfcRelAssociatesLibrary *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesMaterial *operator()(const IfcRelAssociatesMaterial *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesProfileProperties *operator()(const IfcRelAssociatesProfileProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelConnects *operator()(const IfcRelConnects *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelConnectsElements *operator()(const IfcRelConnectsElements *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPathElements *operator()(const IfcRelConnectsPathElements *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPortToElement *operator()(const IfcRelConnectsPortToElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPorts *operator()(const IfcRelConnectsPorts *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralActivity *operator()(const IfcRelConnectsStructuralActivity *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralElement *operator()(const IfcRelConnectsStructuralElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralMember *operator()(const IfcRelConnectsStructuralMember *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelConnectsWithEccentricity *operator()(const IfcRelConnectsWithEccentricity *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelConnectsWithRealizingElements *operator()(const IfcRelConnectsWithRealizingElements *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelContainedInSpatialStructure *operator()(const IfcRelContainedInSpatialStructure *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelCoversBldgElements *operator()(const IfcRelCoversBldgElements *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelCoversSpaces *operator()(const IfcRelCoversSpaces *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelDecomposes *operator()(const IfcRelDecomposes *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelDefines *operator()(const IfcRelDefines *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelDefinesByProperties *operator()(const IfcRelDefinesByProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelDefinesByType *operator()(const IfcRelDefinesByType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelFillsElement *operator()(const IfcRelFillsElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelFlowControlElements *operator()(const IfcRelFlowControlElements *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelInteractionRequirements *operator()(const IfcRelInteractionRequirements *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelNests *operator()(const IfcRelNests *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelOccupiesSpaces *operator()(const IfcRelOccupiesSpaces *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelOverridesProperties *operator()(const IfcRelOverridesProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelProjectsElement *operator()(const IfcRelProjectsElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelReferencedInSpatialStructure *operator()(const IfcRelReferencedInSpatialStructure *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelSchedulesCostItems *operator()(const IfcRelSchedulesCostItems *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelSequence *operator()(const IfcRelSequence *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelServicesBuildings *operator()(const IfcRelServicesBuildings *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelSpaceBoundary *operator()(const IfcRelSpaceBoundary *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelVoidsElement *operator()(const IfcRelVoidsElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelationship *operator()(const IfcRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRelaxation *operator()(const IfcRelaxation *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRepresentation *operator()(const IfcRepresentation *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRepresentationContext *operator()(const IfcRepresentationContext *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRepresentationItem *operator()(const IfcRepresentationItem *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRepresentationMap *operator()(const IfcRepresentationMap *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcResource *operator()(const IfcResource *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRevolvedAreaSolid *operator()(const IfcRevolvedAreaSolid *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRibPlateProfileProperties *operator()(const IfcRibPlateProfileProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRightCircularCone *operator()(const IfcRightCircularCone *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRightCircularCylinder *operator()(const IfcRightCircularCylinder *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRoof *operator()(const IfcRoof *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRoot *operator()(const IfcRoot *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRoundedEdgeFeature *operator()(const IfcRoundedEdgeFeature *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcRoundedRectangleProfileDef *operator()(const IfcRoundedRectangleProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSIUnit *operator()(const IfcSIUnit *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSanitaryTerminalType *operator()(const IfcSanitaryTerminalType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcScheduleTimeControl *operator()(const IfcScheduleTimeControl *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSectionProperties *operator()(const IfcSectionProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSectionReinforcementProperties *operator()(const IfcSectionReinforcementProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSectionedSpine *operator()(const IfcSectionedSpine *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSensorType *operator()(const IfcSensorType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcServiceLife *operator()(const IfcServiceLife *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcServiceLifeFactor *operator()(const IfcServiceLifeFactor *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcShapeAspect *operator()(const IfcShapeAspect *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcShapeModel *operator()(const IfcShapeModel *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcShapeRepresentation *operator()(const IfcShapeRepresentation *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcShellBasedSurfaceModel *operator()(const IfcShellBasedSurfaceModel *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSimpleProperty *operator()(const IfcSimpleProperty *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSite *operator()(const IfcSite *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSlab *operator()(const IfcSlab *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSlabType *operator()(const IfcSlabType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSlippageConnectionCondition *operator()(const IfcSlippageConnectionCondition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSolidModel *operator()(const IfcSolidModel *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSoundProperties *operator()(const IfcSoundProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSoundValue *operator()(const IfcSoundValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSpace *operator()(const IfcSpace *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSpaceHeaterType *operator()(const IfcSpaceHeaterType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSpaceProgram *operator()(const IfcSpaceProgram *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSpaceThermalLoadProperties *operator()(const IfcSpaceThermalLoadProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSpaceType *operator()(const IfcSpaceType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSpatialStructureElement *operator()(const IfcSpatialStructureElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSpatialStructureElementType *operator()(const IfcSpatialStructureElementType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSphere *operator()(const IfcSphere *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStackTerminalType *operator()(const IfcStackTerminalType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStair *operator()(const IfcStair *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStairFlight *operator()(const IfcStairFlight *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStairFlightType *operator()(const IfcStairFlightType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralAction *operator()(const IfcStructuralAction *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralActivity *operator()(const IfcStructuralActivity *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralAnalysisModel *operator()(const IfcStructuralAnalysisModel *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralConnection *operator()(const IfcStructuralConnection *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralConnectionCondition *operator()(const IfcStructuralConnectionCondition *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveConnection *operator()(const IfcStructuralCurveConnection *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveMember *operator()(const IfcStructuralCurveMember *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveMemberVarying *operator()(const IfcStructuralCurveMemberVarying *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralItem *operator()(const IfcStructuralItem *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLinearAction *operator()(const IfcStructuralLinearAction *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLinearActionVarying *operator()(const IfcStructuralLinearActionVarying *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLoad *operator()(const IfcStructuralLoad *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadGroup *operator()(const IfcStructuralLoadGroup *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadLinearForce *operator()(const IfcStructuralLoadLinearForce *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadPlanarForce *operator()(const IfcStructuralLoadPlanarForce *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleDisplacement *operator()(const IfcStructuralLoadSingleDisplacement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleDisplacementDistortion *operator()(const IfcStructuralLoadSingleDisplacementDistortion *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleForce *operator()(const IfcStructuralLoadSingleForce *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleForceWarping *operator()(const IfcStructuralLoadSingleForceWarping *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadStatic *operator()(const IfcStructuralLoadStatic *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadTemperature *operator()(const IfcStructuralLoadTemperature *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralMember *operator()(const IfcStructuralMember *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralPlanarAction *operator()(const IfcStructuralPlanarAction *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralPlanarActionVarying *operator()(const IfcStructuralPlanarActionVarying *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralPointAction *operator()(const IfcStructuralPointAction *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralPointConnection *operator()(const IfcStructuralPointConnection *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralPointReaction *operator()(const IfcStructuralPointReaction *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralProfileProperties *operator()(const IfcStructuralProfileProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralReaction *operator()(const IfcStructuralReaction *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralResultGroup *operator()(const IfcStructuralResultGroup *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralSteelProfileProperties *operator()(const IfcStructuralSteelProfileProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceConnection *operator()(const IfcStructuralSurfaceConnection *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceMember *operator()(const IfcStructuralSurfaceMember *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceMemberVarying *operator()(const IfcStructuralSurfaceMemberVarying *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStructuredDimensionCallout *operator()(const IfcStructuredDimensionCallout *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStyleModel *operator()(const IfcStyleModel *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStyledItem *operator()(const IfcStyledItem *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcStyledRepresentation *operator()(const IfcStyledRepresentation *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSubContractResource *operator()(const IfcSubContractResource *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSubedge *operator()(const IfcSubedge *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSurface *operator()(const IfcSurface *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSurfaceCurveSweptAreaSolid *operator()(const IfcSurfaceCurveSweptAreaSolid *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSurfaceOfLinearExtrusion *operator()(const IfcSurfaceOfLinearExtrusion *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSurfaceOfRevolution *operator()(const IfcSurfaceOfRevolution *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyle *operator()(const IfcSurfaceStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleLighting *operator()(const IfcSurfaceStyleLighting *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleRefraction *operator()(const IfcSurfaceStyleRefraction *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleRendering *operator()(const IfcSurfaceStyleRendering *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleShading *operator()(const IfcSurfaceStyleShading *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleWithTextures *operator()(const IfcSurfaceStyleWithTextures *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSurfaceTexture *operator()(const IfcSurfaceTexture *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSweptAreaSolid *operator()(const IfcSweptAreaSolid *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSweptDiskSolid *operator()(const IfcSweptDiskSolid *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSweptSurface *operator()(const IfcSweptSurface *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSwitchingDeviceType *operator()(const IfcSwitchingDeviceType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSymbolStyle *operator()(const IfcSymbolStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSystem *operator()(const IfcSystem *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcSystemFurnitureElementType *operator()(const IfcSystemFurnitureElementType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTShapeProfileDef *operator()(const IfcTShapeProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTable *operator()(const IfcTable *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTableRow *operator()(const IfcTableRow *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTankType *operator()(const IfcTankType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTask *operator()(const IfcTask *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTelecomAddress *operator()(const IfcTelecomAddress *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTendon *operator()(const IfcTendon *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTendonAnchor *operator()(const IfcTendonAnchor *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTerminatorSymbol *operator()(const IfcTerminatorSymbol *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTextLiteral *operator()(const IfcTextLiteral *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTextLiteralWithExtent *operator()(const IfcTextLiteralWithExtent *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTextStyle *operator()(const IfcTextStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTextStyleFontModel *operator()(const IfcTextStyleFontModel *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTextStyleForDefinedFont *operator()(const IfcTextStyleForDefinedFont *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTextStyleTextModel *operator()(const IfcTextStyleTextModel *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTextStyleWithBoxCharacteristics *operator()(const IfcTextStyleWithBoxCharacteristics *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTextureCoordinate *operator()(const IfcTextureCoordinate *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTextureCoordinateGenerator *operator()(const IfcTextureCoordinateGenerator *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTextureMap *operator()(const IfcTextureMap *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTextureVertex *operator()(const IfcTextureVertex *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcThermalMaterialProperties *operator()(const IfcThermalMaterialProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTimeSeries *operator()(const IfcTimeSeries *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesReferenceRelationship *operator()(const IfcTimeSeriesReferenceRelationship *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesSchedule *operator()(const IfcTimeSeriesSchedule *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesValue *operator()(const IfcTimeSeriesValue *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTopologicalRepresentationItem *operator()(const IfcTopologicalRepresentationItem *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTopologyRepresentation *operator()(const IfcTopologyRepresentation *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTransformerType *operator()(const IfcTransformerType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTransportElement *operator()(const IfcTransportElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTransportElementType *operator()(const IfcTransportElementType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTrapeziumProfileDef *operator()(const IfcTrapeziumProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTrimmedCurve *operator()(const IfcTrimmedCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTubeBundleType *operator()(const IfcTubeBundleType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTwoDirectionRepeatFactor *operator()(const IfcTwoDirectionRepeatFactor *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTypeObject *operator()(const IfcTypeObject *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcTypeProduct *operator()(const IfcTypeProduct *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcUShapeProfileDef *operator()(const IfcUShapeProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcUnitAssignment *operator()(const IfcUnitAssignment *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcUnitaryEquipmentType *operator()(const IfcUnitaryEquipmentType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcValveType *operator()(const IfcValveType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcVector *operator()(const IfcVector *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcVertex *operator()(const IfcVertex *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcVertexBasedTextureMap *operator()(const IfcVertexBasedTextureMap *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcVertexLoop *operator()(const IfcVertexLoop *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcVertexPoint *operator()(const IfcVertexPoint *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcVibrationIsolatorType *operator()(const IfcVibrationIsolatorType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcVirtualElement *operator()(const IfcVirtualElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcVirtualGridIntersection *operator()(const IfcVirtualGridIntersection *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWall *operator()(const IfcWall *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWallStandardCase *operator()(const IfcWallStandardCase *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWallType *operator()(const IfcWallType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWasteTerminalType *operator()(const IfcWasteTerminalType *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWaterProperties *operator()(const IfcWaterProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWindow *operator()(const IfcWindow *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWindowLiningProperties *operator()(const IfcWindowLiningProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWindowPanelProperties *operator()(const IfcWindowPanelProperties *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWindowStyle *operator()(const IfcWindowStyle *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWorkControl *operator()(const IfcWorkControl *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWorkPlan *operator()(const IfcWorkPlan *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcWorkSchedule *operator()(const IfcWorkSchedule *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcZShapeProfileDef *operator()(const IfcZShapeProfileDef *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcZone *operator()(const IfcZone *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCivilStructureElement *operator()(const IfcCivilStructureElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBridgeStructureElement *operator()(const IfcBridgeStructureElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBridge *operator()(const IfcBridge *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBridgePart *operator()(const IfcBridgePart *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCivilElement *operator()(const IfcCivilElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBridgeElement *operator()(const IfcBridgeElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBridgeSegment *operator()(const IfcBridgeSegment *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBridgeSegmentPart *operator()(const IfcBridgeSegmentPart *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBridgeContactElement *operator()(const IfcBridgeContactElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcBridgePrismaticElement *operator()(const IfcBridgePrismaticElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcAlignmentElement *operator()(const IfcAlignmentElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReferenceElement *operator()(const IfcReferenceElement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReferenceCurve *operator()(const IfcReferenceCurve *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReferenceCurve3D *operator()(const IfcReferenceCurve3D *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReferenceCurveAlignment2D *operator()(const IfcReferenceCurveAlignment2D *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReferencePlacement *operator()(const IfcReferencePlacement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReferenceCurvePlacement *operator()(const IfcReferenceCurvePlacement *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReferenceCurvePlacementSystem *operator()(const IfcReferenceCurvePlacementSystem *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcElementPart *operator()(const IfcElementPart *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCivilElementPart *operator()(const IfcCivilElementPart *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCivilSheath *operator()(const IfcCivilSheath *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcCivilVoid *operator()(const IfcCivilVoid *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcClothoid *operator()(const IfcClothoid *obj) const = 0;
        /**
         * @param obj
         */
        virtual IfcReferencedSectionedSpine *operator()(const IfcReferencedSectionedSpine *obj) const = 0;

    };

    class Ifc2DCompositeCurve;
    class IfcActionRequest;
    class IfcActor;
    class IfcActorRole;
    class IfcActuatorType;
    class IfcAddress;
    class IfcAirTerminalBoxType;
    class IfcAirTerminalType;
    class IfcAirToAirHeatRecoveryType;
    class IfcAlarmType;
    class IfcAlignmentElement;
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
    class IfcBridge;
    class IfcBridgeContactElement;
    class IfcBridgeElement;
    class IfcBridgePart;
    class IfcBridgePrismaticElement;
    class IfcBridgeSegment;
    class IfcBridgeSegmentPart;
    class IfcBridgeStructureElement;
    class IfcBuilding;
    class IfcBuildingElement;
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
    class IfcChillerType;
    class IfcCircle;
    class IfcCircleHollowProfileDef;
    class IfcCircleProfileDef;
    class IfcCivilElement;
    class IfcCivilElementPart;
    class IfcCivilSheath;
    class IfcCivilStructureElement;
    class IfcCivilVoid;
    class IfcClassification;
    class IfcClassificationItem;
    class IfcClassificationItemRelationship;
    class IfcClassificationNotation;
    class IfcClassificationNotationFacet;
    class IfcClassificationReference;
    class IfcClosedShell;
    class IfcClothoid;
    class IfcCoilType;
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
    class IfcCsgSolid;
    class IfcCurrencyRelationship;
    class IfcCurtainWall;
    class IfcCurtainWallType;
    class IfcCurve;
    class IfcCurveBoundedPlane;
    class IfcCurveStyle;
    class IfcCurveStyleFont;
    class IfcCurveStyleFontAndScaling;
    class IfcCurveStyleFontPattern;
    class IfcDamperType;
    class IfcDateAndTime;
    class IfcDefinedSymbol;
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
    class IfcDoor;
    class IfcDoorLiningProperties;
    class IfcDoorPanelProperties;
    class IfcDoorStyle;
    class IfcDraughtingCallout;
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
    class IfcElementPart;
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
    class IfcFillAreaStyleTileSymbolWithStyle;
    class IfcFillAreaStyleTiles;
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
    class IfcGrid;
    class IfcGridAxis;
    class IfcGridPlacement;
    class IfcGroup;
    class IfcHalfSpaceSolid;
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
    class IfcLibraryInformation;
    class IfcLibraryReference;
    class IfcLightDistributionData;
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
    class IfcMeasureWithUnit;
    class IfcMechanicalConcreteMaterialProperties;
    class IfcMechanicalFastener;
    class IfcMechanicalFastenerType;
    class IfcMechanicalMaterialProperties;
    class IfcMechanicalSteelMaterialProperties;
    class IfcMember;
    class IfcMemberType;
    class IfcMetric;
    class IfcMonetaryUnit;
    class IfcMotorConnectionType;
    class IfcMove;
    class IfcNamedUnit;
    class IfcObject;
    class IfcObjectDefinition;
    class IfcObjectPlacement;
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
    class IfcReferenceCurve;
    class IfcReferenceCurve3D;
    class IfcReferenceCurveAlignment2D;
    class IfcReferenceCurvePlacement;
    class IfcReferenceCurvePlacementSystem;
    class IfcReferenceElement;
    class IfcReferencePlacement;
    class IfcReferencedSectionedSpine;
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
    class IfcShellBasedSurfaceModel;
    class IfcSimpleProperty;
    class IfcSite;
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
    class IfcSphere;
    class IfcStackTerminalType;
    class IfcStair;
    class IfcStairFlight;
    class IfcStairFlightType;
    class IfcStructuralAction;
    class IfcStructuralActivity;
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
    class IfcSurfaceStyle;
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
    class IfcTextLiteral;
    class IfcTextLiteralWithExtent;
    class IfcTextStyle;
    class IfcTextStyleFontModel;
    class IfcTextStyleForDefinedFont;
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
    class IfcTubeBundleType;
    class IfcTwoDirectionRepeatFactor;
    class IfcTypeObject;
    class IfcTypeProduct;
    class IfcUShapeProfileDef;
    class IfcUnitAssignment;
    class IfcUnitaryEquipmentType;
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
     */
    class IFC2X3_DLL_DEF DeepCopyOp : public CopyOp {
    public:
        /**
         */
        DeepCopyOp();
        virtual ~DeepCopyOp();
        /**
         * @param original
         * @param clone
         */
        virtual void associate(const Step::BaseObject *original, Step::BaseObject *clone) const;
        /**
         * @param original
         */
        virtual Step::BaseObject *find(const Step::BaseObject *original) const;
        /**
         * @param obj
         */
        virtual Ifc2DCompositeCurve *operator()(const Ifc2DCompositeCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcActionRequest *operator()(const IfcActionRequest *obj) const;
        /**
         * @param obj
         */
        virtual IfcActor *operator()(const IfcActor *obj) const;
        /**
         * @param obj
         */
        virtual IfcActorRole *operator()(const IfcActorRole *obj) const;
        /**
         * @param obj
         */
        virtual IfcActuatorType *operator()(const IfcActuatorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAddress *operator()(const IfcAddress *obj) const;
        /**
         * @param obj
         */
        virtual IfcAirTerminalBoxType *operator()(const IfcAirTerminalBoxType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAirTerminalType *operator()(const IfcAirTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAirToAirHeatRecoveryType *operator()(const IfcAirToAirHeatRecoveryType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAlarmType *operator()(const IfcAlarmType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAngularDimension *operator()(const IfcAngularDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotation *operator()(const IfcAnnotation *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationCurveOccurrence *operator()(const IfcAnnotationCurveOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationFillArea *operator()(const IfcAnnotationFillArea *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationFillAreaOccurrence *operator()(const IfcAnnotationFillAreaOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationOccurrence *operator()(const IfcAnnotationOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationSurface *operator()(const IfcAnnotationSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationSurfaceOccurrence *operator()(const IfcAnnotationSurfaceOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationSymbolOccurrence *operator()(const IfcAnnotationSymbolOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationTextOccurrence *operator()(const IfcAnnotationTextOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcApplication *operator()(const IfcApplication *obj) const;
        /**
         * @param obj
         */
        virtual IfcAppliedValue *operator()(const IfcAppliedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcAppliedValueRelationship *operator()(const IfcAppliedValueRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcApproval *operator()(const IfcApproval *obj) const;
        /**
         * @param obj
         */
        virtual IfcApprovalActorRelationship *operator()(const IfcApprovalActorRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcApprovalPropertyRelationship *operator()(const IfcApprovalPropertyRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcApprovalRelationship *operator()(const IfcApprovalRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcArbitraryClosedProfileDef *operator()(const IfcArbitraryClosedProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcArbitraryOpenProfileDef *operator()(const IfcArbitraryOpenProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcArbitraryProfileDefWithVoids *operator()(const IfcArbitraryProfileDefWithVoids *obj) const;
        /**
         * @param obj
         */
        virtual IfcAsset *operator()(const IfcAsset *obj) const;
        /**
         * @param obj
         */
        virtual IfcAsymmetricIShapeProfileDef *operator()(const IfcAsymmetricIShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcAxis1Placement *operator()(const IfcAxis1Placement *obj) const;
        /**
         * @param obj
         */
        virtual IfcAxis2Placement2D *operator()(const IfcAxis2Placement2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcAxis2Placement3D *operator()(const IfcAxis2Placement3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcBSplineCurve *operator()(const IfcBSplineCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcBeam *operator()(const IfcBeam *obj) const;
        /**
         * @param obj
         */
        virtual IfcBeamType *operator()(const IfcBeamType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBezierCurve *operator()(const IfcBezierCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcBlobTexture *operator()(const IfcBlobTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcBlock *operator()(const IfcBlock *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoilerType *operator()(const IfcBoilerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBooleanClippingResult *operator()(const IfcBooleanClippingResult *obj) const;
        /**
         * @param obj
         */
        virtual IfcBooleanResult *operator()(const IfcBooleanResult *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryCondition *operator()(const IfcBoundaryCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryEdgeCondition *operator()(const IfcBoundaryEdgeCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryFaceCondition *operator()(const IfcBoundaryFaceCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryNodeCondition *operator()(const IfcBoundaryNodeCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryNodeConditionWarping *operator()(const IfcBoundaryNodeConditionWarping *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundedCurve *operator()(const IfcBoundedCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundedSurface *operator()(const IfcBoundedSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundingBox *operator()(const IfcBoundingBox *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoxedHalfSpace *operator()(const IfcBoxedHalfSpace *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuilding *operator()(const IfcBuilding *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElement *operator()(const IfcBuildingElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementPart *operator()(const IfcBuildingElementPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementProxy *operator()(const IfcBuildingElementProxy *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementProxyType *operator()(const IfcBuildingElementProxyType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementType *operator()(const IfcBuildingElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingStorey *operator()(const IfcBuildingStorey *obj) const;
        /**
         * @param obj
         */
        virtual IfcCShapeProfileDef *operator()(const IfcCShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCableCarrierFittingType *operator()(const IfcCableCarrierFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCableCarrierSegmentType *operator()(const IfcCableCarrierSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCableSegmentType *operator()(const IfcCableSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCalendarDate *operator()(const IfcCalendarDate *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianPoint *operator()(const IfcCartesianPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator *operator()(const IfcCartesianTransformationOperator *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator2D *operator()(const IfcCartesianTransformationOperator2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator2DnonUniform *operator()(const IfcCartesianTransformationOperator2DnonUniform *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator3D *operator()(const IfcCartesianTransformationOperator3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator3DnonUniform *operator()(const IfcCartesianTransformationOperator3DnonUniform *obj) const;
        /**
         * @param obj
         */
        virtual IfcCenterLineProfileDef *operator()(const IfcCenterLineProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcChamferEdgeFeature *operator()(const IfcChamferEdgeFeature *obj) const;
        /**
         * @param obj
         */
        virtual IfcChillerType *operator()(const IfcChillerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCircle *operator()(const IfcCircle *obj) const;
        /**
         * @param obj
         */
        virtual IfcCircleHollowProfileDef *operator()(const IfcCircleHollowProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCircleProfileDef *operator()(const IfcCircleProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassification *operator()(const IfcClassification *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationItem *operator()(const IfcClassificationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationItemRelationship *operator()(const IfcClassificationItemRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationNotation *operator()(const IfcClassificationNotation *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationNotationFacet *operator()(const IfcClassificationNotationFacet *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationReference *operator()(const IfcClassificationReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcClosedShell *operator()(const IfcClosedShell *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoilType *operator()(const IfcCoilType *obj) const;
        /**
         * @param obj
         */
        virtual IfcColourRgb *operator()(const IfcColourRgb *obj) const;
        /**
         * @param obj
         */
        virtual IfcColourSpecification *operator()(const IfcColourSpecification *obj) const;
        /**
         * @param obj
         */
        virtual IfcColumn *operator()(const IfcColumn *obj) const;
        /**
         * @param obj
         */
        virtual IfcColumnType *operator()(const IfcColumnType *obj) const;
        /**
         * @param obj
         */
        virtual IfcComplexProperty *operator()(const IfcComplexProperty *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompositeCurve *operator()(const IfcCompositeCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompositeCurveSegment *operator()(const IfcCompositeCurveSegment *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompositeProfileDef *operator()(const IfcCompositeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompressorType *operator()(const IfcCompressorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCondenserType *operator()(const IfcCondenserType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCondition *operator()(const IfcCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcConditionCriterion *operator()(const IfcConditionCriterion *obj) const;
        /**
         * @param obj
         */
        virtual IfcConic *operator()(const IfcConic *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectedFaceSet *operator()(const IfcConnectedFaceSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionCurveGeometry *operator()(const IfcConnectionCurveGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionGeometry *operator()(const IfcConnectionGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionPointEccentricity *operator()(const IfcConnectionPointEccentricity *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionPointGeometry *operator()(const IfcConnectionPointGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionPortGeometry *operator()(const IfcConnectionPortGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionSurfaceGeometry *operator()(const IfcConnectionSurfaceGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraint *operator()(const IfcConstraint *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraintAggregationRelationship *operator()(const IfcConstraintAggregationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraintClassificationRelationship *operator()(const IfcConstraintClassificationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraintRelationship *operator()(const IfcConstraintRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionEquipmentResource *operator()(const IfcConstructionEquipmentResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionMaterialResource *operator()(const IfcConstructionMaterialResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionProductResource *operator()(const IfcConstructionProductResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionResource *operator()(const IfcConstructionResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcContextDependentUnit *operator()(const IfcContextDependentUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcControl *operator()(const IfcControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcControllerType *operator()(const IfcControllerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcConversionBasedUnit *operator()(const IfcConversionBasedUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcCooledBeamType *operator()(const IfcCooledBeamType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoolingTowerType *operator()(const IfcCoolingTowerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoordinatedUniversalTimeOffset *operator()(const IfcCoordinatedUniversalTimeOffset *obj) const;
        /**
         * @param obj
         */
        virtual IfcCostItem *operator()(const IfcCostItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcCostSchedule *operator()(const IfcCostSchedule *obj) const;
        /**
         * @param obj
         */
        virtual IfcCostValue *operator()(const IfcCostValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcCovering *operator()(const IfcCovering *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoveringType *operator()(const IfcCoveringType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCraneRailAShapeProfileDef *operator()(const IfcCraneRailAShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCraneRailFShapeProfileDef *operator()(const IfcCraneRailFShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCrewResource *operator()(const IfcCrewResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcCsgPrimitive3D *operator()(const IfcCsgPrimitive3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcCsgSolid *operator()(const IfcCsgSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurrencyRelationship *operator()(const IfcCurrencyRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurtainWall *operator()(const IfcCurtainWall *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurtainWallType *operator()(const IfcCurtainWallType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurve *operator()(const IfcCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveBoundedPlane *operator()(const IfcCurveBoundedPlane *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyle *operator()(const IfcCurveStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFont *operator()(const IfcCurveStyleFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFontAndScaling *operator()(const IfcCurveStyleFontAndScaling *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFontPattern *operator()(const IfcCurveStyleFontPattern *obj) const;
        /**
         * @param obj
         */
        virtual IfcDamperType *operator()(const IfcDamperType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDateAndTime *operator()(const IfcDateAndTime *obj) const;
        /**
         * @param obj
         */
        virtual IfcDefinedSymbol *operator()(const IfcDefinedSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcDerivedProfileDef *operator()(const IfcDerivedProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcDerivedUnit *operator()(const IfcDerivedUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcDerivedUnitElement *operator()(const IfcDerivedUnitElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDiameterDimension *operator()(const IfcDiameterDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCalloutRelationship *operator()(const IfcDimensionCalloutRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCurve *operator()(const IfcDimensionCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCurveDirectedCallout *operator()(const IfcDimensionCurveDirectedCallout *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCurveTerminator *operator()(const IfcDimensionCurveTerminator *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionPair *operator()(const IfcDimensionPair *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionalExponents *operator()(const IfcDimensionalExponents *obj) const;
        /**
         * @param obj
         */
        virtual IfcDirection *operator()(const IfcDirection *obj) const;
        /**
         * @param obj
         */
        virtual IfcDiscreteAccessory *operator()(const IfcDiscreteAccessory *obj) const;
        /**
         * @param obj
         */
        virtual IfcDiscreteAccessoryType *operator()(const IfcDiscreteAccessoryType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionChamberElement *operator()(const IfcDistributionChamberElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionChamberElementType *operator()(const IfcDistributionChamberElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionControlElement *operator()(const IfcDistributionControlElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionControlElementType *operator()(const IfcDistributionControlElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionElement *operator()(const IfcDistributionElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionElementType *operator()(const IfcDistributionElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionFlowElement *operator()(const IfcDistributionFlowElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionFlowElementType *operator()(const IfcDistributionFlowElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionPort *operator()(const IfcDistributionPort *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentElectronicFormat *operator()(const IfcDocumentElectronicFormat *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentInformation *operator()(const IfcDocumentInformation *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentInformationRelationship *operator()(const IfcDocumentInformationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentReference *operator()(const IfcDocumentReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoor *operator()(const IfcDoor *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoorLiningProperties *operator()(const IfcDoorLiningProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoorPanelProperties *operator()(const IfcDoorPanelProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoorStyle *operator()(const IfcDoorStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingCallout *operator()(const IfcDraughtingCallout *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingCalloutRelationship *operator()(const IfcDraughtingCalloutRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedColour *operator()(const IfcDraughtingPreDefinedColour *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedCurveFont *operator()(const IfcDraughtingPreDefinedCurveFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedTextFont *operator()(const IfcDraughtingPreDefinedTextFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcDuctFittingType *operator()(const IfcDuctFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDuctSegmentType *operator()(const IfcDuctSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDuctSilencerType *operator()(const IfcDuctSilencerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdge *operator()(const IfcEdge *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdgeCurve *operator()(const IfcEdgeCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdgeFeature *operator()(const IfcEdgeFeature *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdgeLoop *operator()(const IfcEdgeLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricApplianceType *operator()(const IfcElectricApplianceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricDistributionPoint *operator()(const IfcElectricDistributionPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricFlowStorageDeviceType *operator()(const IfcElectricFlowStorageDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricGeneratorType *operator()(const IfcElectricGeneratorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricHeaterType *operator()(const IfcElectricHeaterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricMotorType *operator()(const IfcElectricMotorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricTimeControlType *operator()(const IfcElectricTimeControlType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricalBaseProperties *operator()(const IfcElectricalBaseProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricalCircuit *operator()(const IfcElectricalCircuit *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricalElement *operator()(const IfcElectricalElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcElement *operator()(const IfcElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementAssembly *operator()(const IfcElementAssembly *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementComponent *operator()(const IfcElementComponent *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementComponentType *operator()(const IfcElementComponentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementQuantity *operator()(const IfcElementQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementType *operator()(const IfcElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementarySurface *operator()(const IfcElementarySurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcEllipse *operator()(const IfcEllipse *obj) const;
        /**
         * @param obj
         */
        virtual IfcEllipseProfileDef *operator()(const IfcEllipseProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnergyConversionDevice *operator()(const IfcEnergyConversionDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnergyConversionDeviceType *operator()(const IfcEnergyConversionDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnergyProperties *operator()(const IfcEnergyProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnvironmentalImpactValue *operator()(const IfcEnvironmentalImpactValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcEquipmentElement *operator()(const IfcEquipmentElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcEquipmentStandard *operator()(const IfcEquipmentStandard *obj) const;
        /**
         * @param obj
         */
        virtual IfcEvaporativeCoolerType *operator()(const IfcEvaporativeCoolerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcEvaporatorType *operator()(const IfcEvaporatorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcExtendedMaterialProperties *operator()(const IfcExtendedMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternalReference *operator()(const IfcExternalReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedHatchStyle *operator()(const IfcExternallyDefinedHatchStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedSurfaceStyle *operator()(const IfcExternallyDefinedSurfaceStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedSymbol *operator()(const IfcExternallyDefinedSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedTextFont *operator()(const IfcExternallyDefinedTextFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcExtrudedAreaSolid *operator()(const IfcExtrudedAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcFace *operator()(const IfcFace *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceBasedSurfaceModel *operator()(const IfcFaceBasedSurfaceModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceBound *operator()(const IfcFaceBound *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceOuterBound *operator()(const IfcFaceOuterBound *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceSurface *operator()(const IfcFaceSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcFacetedBrep *operator()(const IfcFacetedBrep *obj) const;
        /**
         * @param obj
         */
        virtual IfcFacetedBrepWithVoids *operator()(const IfcFacetedBrepWithVoids *obj) const;
        /**
         * @param obj
         */
        virtual IfcFailureConnectionCondition *operator()(const IfcFailureConnectionCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcFanType *operator()(const IfcFanType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFastener *operator()(const IfcFastener *obj) const;
        /**
         * @param obj
         */
        virtual IfcFastenerType *operator()(const IfcFastenerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFeatureElement *operator()(const IfcFeatureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcFeatureElementAddition *operator()(const IfcFeatureElementAddition *obj) const;
        /**
         * @param obj
         */
        virtual IfcFeatureElementSubtraction *operator()(const IfcFeatureElementSubtraction *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyle *operator()(const IfcFillAreaStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleHatching *operator()(const IfcFillAreaStyleHatching *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleTileSymbolWithStyle *operator()(const IfcFillAreaStyleTileSymbolWithStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleTiles *operator()(const IfcFillAreaStyleTiles *obj) const;
        /**
         * @param obj
         */
        virtual IfcFilterType *operator()(const IfcFilterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFireSuppressionTerminalType *operator()(const IfcFireSuppressionTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowController *operator()(const IfcFlowController *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowControllerType *operator()(const IfcFlowControllerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowFitting *operator()(const IfcFlowFitting *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowFittingType *operator()(const IfcFlowFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowInstrumentType *operator()(const IfcFlowInstrumentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowMeterType *operator()(const IfcFlowMeterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowMovingDevice *operator()(const IfcFlowMovingDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowMovingDeviceType *operator()(const IfcFlowMovingDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowSegment *operator()(const IfcFlowSegment *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowSegmentType *operator()(const IfcFlowSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowStorageDevice *operator()(const IfcFlowStorageDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowStorageDeviceType *operator()(const IfcFlowStorageDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTerminal *operator()(const IfcFlowTerminal *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTerminalType *operator()(const IfcFlowTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTreatmentDevice *operator()(const IfcFlowTreatmentDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTreatmentDeviceType *operator()(const IfcFlowTreatmentDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFluidFlowProperties *operator()(const IfcFluidFlowProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcFooting *operator()(const IfcFooting *obj) const;
        /**
         * @param obj
         */
        virtual IfcFuelProperties *operator()(const IfcFuelProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnishingElement *operator()(const IfcFurnishingElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnishingElementType *operator()(const IfcFurnishingElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnitureStandard *operator()(const IfcFurnitureStandard *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnitureType *operator()(const IfcFurnitureType *obj) const;
        /**
         * @param obj
         */
        virtual IfcGasTerminalType *operator()(const IfcGasTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeneralMaterialProperties *operator()(const IfcGeneralMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeneralProfileProperties *operator()(const IfcGeneralProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricCurveSet *operator()(const IfcGeometricCurveSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationContext *operator()(const IfcGeometricRepresentationContext *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationItem *operator()(const IfcGeometricRepresentationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationSubContext *operator()(const IfcGeometricRepresentationSubContext *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricSet *operator()(const IfcGeometricSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcGrid *operator()(const IfcGrid *obj) const;
        /**
         * @param obj
         */
        virtual IfcGridAxis *operator()(const IfcGridAxis *obj) const;
        /**
         * @param obj
         */
        virtual IfcGridPlacement *operator()(const IfcGridPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcGroup *operator()(const IfcGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcHalfSpaceSolid *operator()(const IfcHalfSpaceSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcHeatExchangerType *operator()(const IfcHeatExchangerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcHumidifierType *operator()(const IfcHumidifierType *obj) const;
        /**
         * @param obj
         */
        virtual IfcHygroscopicMaterialProperties *operator()(const IfcHygroscopicMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcIShapeProfileDef *operator()(const IfcIShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcImageTexture *operator()(const IfcImageTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcInventory *operator()(const IfcInventory *obj) const;
        /**
         * @param obj
         */
        virtual IfcIrregularTimeSeries *operator()(const IfcIrregularTimeSeries *obj) const;
        /**
         * @param obj
         */
        virtual IfcIrregularTimeSeriesValue *operator()(const IfcIrregularTimeSeriesValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcJunctionBoxType *operator()(const IfcJunctionBoxType *obj) const;
        /**
         * @param obj
         */
        virtual IfcLShapeProfileDef *operator()(const IfcLShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcLaborResource *operator()(const IfcLaborResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcLampType *operator()(const IfcLampType *obj) const;
        /**
         * @param obj
         */
        virtual IfcLibraryInformation *operator()(const IfcLibraryInformation *obj) const;
        /**
         * @param obj
         */
        virtual IfcLibraryReference *operator()(const IfcLibraryReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightDistributionData *operator()(const IfcLightDistributionData *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightFixtureType *operator()(const IfcLightFixtureType *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightIntensityDistribution *operator()(const IfcLightIntensityDistribution *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSource *operator()(const IfcLightSource *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceAmbient *operator()(const IfcLightSourceAmbient *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceDirectional *operator()(const IfcLightSourceDirectional *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceGoniometric *operator()(const IfcLightSourceGoniometric *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourcePositional *operator()(const IfcLightSourcePositional *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceSpot *operator()(const IfcLightSourceSpot *obj) const;
        /**
         * @param obj
         */
        virtual IfcLine *operator()(const IfcLine *obj) const;
        /**
         * @param obj
         */
        virtual IfcLinearDimension *operator()(const IfcLinearDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcLocalPlacement *operator()(const IfcLocalPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcLocalTime *operator()(const IfcLocalTime *obj) const;
        /**
         * @param obj
         */
        virtual IfcLoop *operator()(const IfcLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcManifoldSolidBrep *operator()(const IfcManifoldSolidBrep *obj) const;
        /**
         * @param obj
         */
        virtual IfcMappedItem *operator()(const IfcMappedItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterial *operator()(const IfcMaterial *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialClassificationRelationship *operator()(const IfcMaterialClassificationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialDefinitionRepresentation *operator()(const IfcMaterialDefinitionRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialLayer *operator()(const IfcMaterialLayer *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialLayerSet *operator()(const IfcMaterialLayerSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialLayerSetUsage *operator()(const IfcMaterialLayerSetUsage *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialList *operator()(const IfcMaterialList *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialProperties *operator()(const IfcMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMeasureWithUnit *operator()(const IfcMeasureWithUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalConcreteMaterialProperties *operator()(const IfcMechanicalConcreteMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalFastener *operator()(const IfcMechanicalFastener *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalFastenerType *operator()(const IfcMechanicalFastenerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalMaterialProperties *operator()(const IfcMechanicalMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalSteelMaterialProperties *operator()(const IfcMechanicalSteelMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMember *operator()(const IfcMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcMemberType *operator()(const IfcMemberType *obj) const;
        /**
         * @param obj
         */
        virtual IfcMetric *operator()(const IfcMetric *obj) const;
        /**
         * @param obj
         */
        virtual IfcMonetaryUnit *operator()(const IfcMonetaryUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcMotorConnectionType *operator()(const IfcMotorConnectionType *obj) const;
        /**
         * @param obj
         */
        virtual IfcMove *operator()(const IfcMove *obj) const;
        /**
         * @param obj
         */
        virtual IfcNamedUnit *operator()(const IfcNamedUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcObject *operator()(const IfcObject *obj) const;
        /**
         * @param obj
         */
        virtual IfcObjectDefinition *operator()(const IfcObjectDefinition *obj) const;
        /**
         * @param obj
         */
        virtual IfcObjectPlacement *operator()(const IfcObjectPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcObjective *operator()(const IfcObjective *obj) const;
        /**
         * @param obj
         */
        virtual IfcOccupant *operator()(const IfcOccupant *obj) const;
        /**
         * @param obj
         */
        virtual IfcOffsetCurve2D *operator()(const IfcOffsetCurve2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcOffsetCurve3D *operator()(const IfcOffsetCurve3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcOneDirectionRepeatFactor *operator()(const IfcOneDirectionRepeatFactor *obj) const;
        /**
         * @param obj
         */
        virtual IfcOpenShell *operator()(const IfcOpenShell *obj) const;
        /**
         * @param obj
         */
        virtual IfcOpeningElement *operator()(const IfcOpeningElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcOpticalMaterialProperties *operator()(const IfcOpticalMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrderAction *operator()(const IfcOrderAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrganization *operator()(const IfcOrganization *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrganizationRelationship *operator()(const IfcOrganizationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrientedEdge *operator()(const IfcOrientedEdge *obj) const;
        /**
         * @param obj
         */
        virtual IfcOutletType *operator()(const IfcOutletType *obj) const;
        /**
         * @param obj
         */
        virtual IfcOwnerHistory *operator()(const IfcOwnerHistory *obj) const;
        /**
         * @param obj
         */
        virtual IfcParameterizedProfileDef *operator()(const IfcParameterizedProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcPath *operator()(const IfcPath *obj) const;
        /**
         * @param obj
         */
        virtual IfcPerformanceHistory *operator()(const IfcPerformanceHistory *obj) const;
        /**
         * @param obj
         */
        virtual IfcPermeableCoveringProperties *operator()(const IfcPermeableCoveringProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcPermit *operator()(const IfcPermit *obj) const;
        /**
         * @param obj
         */
        virtual IfcPerson *operator()(const IfcPerson *obj) const;
        /**
         * @param obj
         */
        virtual IfcPersonAndOrganization *operator()(const IfcPersonAndOrganization *obj) const;
        /**
         * @param obj
         */
        virtual IfcPhysicalComplexQuantity *operator()(const IfcPhysicalComplexQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcPhysicalQuantity *operator()(const IfcPhysicalQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcPhysicalSimpleQuantity *operator()(const IfcPhysicalSimpleQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcPile *operator()(const IfcPile *obj) const;
        /**
         * @param obj
         */
        virtual IfcPipeFittingType *operator()(const IfcPipeFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcPipeSegmentType *operator()(const IfcPipeSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcPixelTexture *operator()(const IfcPixelTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlacement *operator()(const IfcPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlanarBox *operator()(const IfcPlanarBox *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlanarExtent *operator()(const IfcPlanarExtent *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlane *operator()(const IfcPlane *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlate *operator()(const IfcPlate *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlateType *operator()(const IfcPlateType *obj) const;
        /**
         * @param obj
         */
        virtual IfcPoint *operator()(const IfcPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcPointOnCurve *operator()(const IfcPointOnCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcPointOnSurface *operator()(const IfcPointOnSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcPolyLoop *operator()(const IfcPolyLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcPolygonalBoundedHalfSpace *operator()(const IfcPolygonalBoundedHalfSpace *obj) const;
        /**
         * @param obj
         */
        virtual IfcPolyline *operator()(const IfcPolyline *obj) const;
        /**
         * @param obj
         */
        virtual IfcPort *operator()(const IfcPort *obj) const;
        /**
         * @param obj
         */
        virtual IfcPostalAddress *operator()(const IfcPostalAddress *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedColour *operator()(const IfcPreDefinedColour *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedCurveFont *operator()(const IfcPreDefinedCurveFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedDimensionSymbol *operator()(const IfcPreDefinedDimensionSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedItem *operator()(const IfcPreDefinedItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedPointMarkerSymbol *operator()(const IfcPreDefinedPointMarkerSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedSymbol *operator()(const IfcPreDefinedSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedTerminatorSymbol *operator()(const IfcPreDefinedTerminatorSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedTextFont *operator()(const IfcPreDefinedTextFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationLayerAssignment *operator()(const IfcPresentationLayerAssignment *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationLayerWithStyle *operator()(const IfcPresentationLayerWithStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationStyle *operator()(const IfcPresentationStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationStyleAssignment *operator()(const IfcPresentationStyleAssignment *obj) const;
        /**
         * @param obj
         */
        virtual IfcProcedure *operator()(const IfcProcedure *obj) const;
        /**
         * @param obj
         */
        virtual IfcProcess *operator()(const IfcProcess *obj) const;
        /**
         * @param obj
         */
        virtual IfcProduct *operator()(const IfcProduct *obj) const;
        /**
         * @param obj
         */
        virtual IfcProductDefinitionShape *operator()(const IfcProductDefinitionShape *obj) const;
        /**
         * @param obj
         */
        virtual IfcProductRepresentation *operator()(const IfcProductRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcProductsOfCombustionProperties *operator()(const IfcProductsOfCombustionProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcProfileDef *operator()(const IfcProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcProfileProperties *operator()(const IfcProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcProject *operator()(const IfcProject *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectOrder *operator()(const IfcProjectOrder *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectOrderRecord *operator()(const IfcProjectOrderRecord *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectionCurve *operator()(const IfcProjectionCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectionElement *operator()(const IfcProjectionElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcProperty *operator()(const IfcProperty *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyBoundedValue *operator()(const IfcPropertyBoundedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyConstraintRelationship *operator()(const IfcPropertyConstraintRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyDefinition *operator()(const IfcPropertyDefinition *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyDependencyRelationship *operator()(const IfcPropertyDependencyRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyEnumeratedValue *operator()(const IfcPropertyEnumeratedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyEnumeration *operator()(const IfcPropertyEnumeration *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyListValue *operator()(const IfcPropertyListValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyReferenceValue *operator()(const IfcPropertyReferenceValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertySet *operator()(const IfcPropertySet *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertySetDefinition *operator()(const IfcPropertySetDefinition *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertySingleValue *operator()(const IfcPropertySingleValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyTableValue *operator()(const IfcPropertyTableValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcProtectiveDeviceType *operator()(const IfcProtectiveDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcProxy *operator()(const IfcProxy *obj) const;
        /**
         * @param obj
         */
        virtual IfcPumpType *operator()(const IfcPumpType *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityArea *operator()(const IfcQuantityArea *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityCount *operator()(const IfcQuantityCount *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityLength *operator()(const IfcQuantityLength *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityTime *operator()(const IfcQuantityTime *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityVolume *operator()(const IfcQuantityVolume *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityWeight *operator()(const IfcQuantityWeight *obj) const;
        /**
         * @param obj
         */
        virtual IfcRadiusDimension *operator()(const IfcRadiusDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcRailing *operator()(const IfcRailing *obj) const;
        /**
         * @param obj
         */
        virtual IfcRailingType *operator()(const IfcRailingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcRamp *operator()(const IfcRamp *obj) const;
        /**
         * @param obj
         */
        virtual IfcRampFlight *operator()(const IfcRampFlight *obj) const;
        /**
         * @param obj
         */
        virtual IfcRampFlightType *operator()(const IfcRampFlightType *obj) const;
        /**
         * @param obj
         */
        virtual IfcRationalBezierCurve *operator()(const IfcRationalBezierCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangleHollowProfileDef *operator()(const IfcRectangleHollowProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangleProfileDef *operator()(const IfcRectangleProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangularPyramid *operator()(const IfcRectangularPyramid *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangularTrimmedSurface *operator()(const IfcRectangularTrimmedSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferencesValueDocument *operator()(const IfcReferencesValueDocument *obj) const;
        /**
         * @param obj
         */
        virtual IfcRegularTimeSeries *operator()(const IfcRegularTimeSeries *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcementBarProperties *operator()(const IfcReinforcementBarProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcementDefinitionProperties *operator()(const IfcReinforcementDefinitionProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcingBar *operator()(const IfcReinforcingBar *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcingElement *operator()(const IfcReinforcingElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcingMesh *operator()(const IfcReinforcingMesh *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAggregates *operator()(const IfcRelAggregates *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssigns *operator()(const IfcRelAssigns *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsTasks *operator()(const IfcRelAssignsTasks *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToActor *operator()(const IfcRelAssignsToActor *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToControl *operator()(const IfcRelAssignsToControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToGroup *operator()(const IfcRelAssignsToGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProcess *operator()(const IfcRelAssignsToProcess *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProduct *operator()(const IfcRelAssignsToProduct *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProjectOrder *operator()(const IfcRelAssignsToProjectOrder *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToResource *operator()(const IfcRelAssignsToResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociates *operator()(const IfcRelAssociates *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesAppliedValue *operator()(const IfcRelAssociatesAppliedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesApproval *operator()(const IfcRelAssociatesApproval *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesClassification *operator()(const IfcRelAssociatesClassification *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesConstraint *operator()(const IfcRelAssociatesConstraint *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesDocument *operator()(const IfcRelAssociatesDocument *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesLibrary *operator()(const IfcRelAssociatesLibrary *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesMaterial *operator()(const IfcRelAssociatesMaterial *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesProfileProperties *operator()(const IfcRelAssociatesProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnects *operator()(const IfcRelConnects *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsElements *operator()(const IfcRelConnectsElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPathElements *operator()(const IfcRelConnectsPathElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPortToElement *operator()(const IfcRelConnectsPortToElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPorts *operator()(const IfcRelConnectsPorts *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralActivity *operator()(const IfcRelConnectsStructuralActivity *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralElement *operator()(const IfcRelConnectsStructuralElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralMember *operator()(const IfcRelConnectsStructuralMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsWithEccentricity *operator()(const IfcRelConnectsWithEccentricity *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsWithRealizingElements *operator()(const IfcRelConnectsWithRealizingElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelContainedInSpatialStructure *operator()(const IfcRelContainedInSpatialStructure *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelCoversBldgElements *operator()(const IfcRelCoversBldgElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelCoversSpaces *operator()(const IfcRelCoversSpaces *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDecomposes *operator()(const IfcRelDecomposes *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDefines *operator()(const IfcRelDefines *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDefinesByProperties *operator()(const IfcRelDefinesByProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDefinesByType *operator()(const IfcRelDefinesByType *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelFillsElement *operator()(const IfcRelFillsElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelFlowControlElements *operator()(const IfcRelFlowControlElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelInteractionRequirements *operator()(const IfcRelInteractionRequirements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelNests *operator()(const IfcRelNests *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelOccupiesSpaces *operator()(const IfcRelOccupiesSpaces *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelOverridesProperties *operator()(const IfcRelOverridesProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelProjectsElement *operator()(const IfcRelProjectsElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelReferencedInSpatialStructure *operator()(const IfcRelReferencedInSpatialStructure *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelSchedulesCostItems *operator()(const IfcRelSchedulesCostItems *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelSequence *operator()(const IfcRelSequence *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelServicesBuildings *operator()(const IfcRelServicesBuildings *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelSpaceBoundary *operator()(const IfcRelSpaceBoundary *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelVoidsElement *operator()(const IfcRelVoidsElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelationship *operator()(const IfcRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelaxation *operator()(const IfcRelaxation *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentation *operator()(const IfcRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentationContext *operator()(const IfcRepresentationContext *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentationItem *operator()(const IfcRepresentationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentationMap *operator()(const IfcRepresentationMap *obj) const;
        /**
         * @param obj
         */
        virtual IfcResource *operator()(const IfcResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcRevolvedAreaSolid *operator()(const IfcRevolvedAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcRibPlateProfileProperties *operator()(const IfcRibPlateProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRightCircularCone *operator()(const IfcRightCircularCone *obj) const;
        /**
         * @param obj
         */
        virtual IfcRightCircularCylinder *operator()(const IfcRightCircularCylinder *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoof *operator()(const IfcRoof *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoot *operator()(const IfcRoot *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoundedEdgeFeature *operator()(const IfcRoundedEdgeFeature *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoundedRectangleProfileDef *operator()(const IfcRoundedRectangleProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcSIUnit *operator()(const IfcSIUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcSanitaryTerminalType *operator()(const IfcSanitaryTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcScheduleTimeControl *operator()(const IfcScheduleTimeControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcSectionProperties *operator()(const IfcSectionProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSectionReinforcementProperties *operator()(const IfcSectionReinforcementProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSectionedSpine *operator()(const IfcSectionedSpine *obj) const;
        /**
         * @param obj
         */
        virtual IfcSensorType *operator()(const IfcSensorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcServiceLife *operator()(const IfcServiceLife *obj) const;
        /**
         * @param obj
         */
        virtual IfcServiceLifeFactor *operator()(const IfcServiceLifeFactor *obj) const;
        /**
         * @param obj
         */
        virtual IfcShapeAspect *operator()(const IfcShapeAspect *obj) const;
        /**
         * @param obj
         */
        virtual IfcShapeModel *operator()(const IfcShapeModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcShapeRepresentation *operator()(const IfcShapeRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcShellBasedSurfaceModel *operator()(const IfcShellBasedSurfaceModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcSimpleProperty *operator()(const IfcSimpleProperty *obj) const;
        /**
         * @param obj
         */
        virtual IfcSite *operator()(const IfcSite *obj) const;
        /**
         * @param obj
         */
        virtual IfcSlab *operator()(const IfcSlab *obj) const;
        /**
         * @param obj
         */
        virtual IfcSlabType *operator()(const IfcSlabType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSlippageConnectionCondition *operator()(const IfcSlippageConnectionCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcSolidModel *operator()(const IfcSolidModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcSoundProperties *operator()(const IfcSoundProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSoundValue *operator()(const IfcSoundValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpace *operator()(const IfcSpace *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceHeaterType *operator()(const IfcSpaceHeaterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceProgram *operator()(const IfcSpaceProgram *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceThermalLoadProperties *operator()(const IfcSpaceThermalLoadProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceType *operator()(const IfcSpaceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpatialStructureElement *operator()(const IfcSpatialStructureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpatialStructureElementType *operator()(const IfcSpatialStructureElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSphere *operator()(const IfcSphere *obj) const;
        /**
         * @param obj
         */
        virtual IfcStackTerminalType *operator()(const IfcStackTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcStair *operator()(const IfcStair *obj) const;
        /**
         * @param obj
         */
        virtual IfcStairFlight *operator()(const IfcStairFlight *obj) const;
        /**
         * @param obj
         */
        virtual IfcStairFlightType *operator()(const IfcStairFlightType *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralAction *operator()(const IfcStructuralAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralActivity *operator()(const IfcStructuralActivity *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralAnalysisModel *operator()(const IfcStructuralAnalysisModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralConnection *operator()(const IfcStructuralConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralConnectionCondition *operator()(const IfcStructuralConnectionCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveConnection *operator()(const IfcStructuralCurveConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveMember *operator()(const IfcStructuralCurveMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveMemberVarying *operator()(const IfcStructuralCurveMemberVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralItem *operator()(const IfcStructuralItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLinearAction *operator()(const IfcStructuralLinearAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLinearActionVarying *operator()(const IfcStructuralLinearActionVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoad *operator()(const IfcStructuralLoad *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadGroup *operator()(const IfcStructuralLoadGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadLinearForce *operator()(const IfcStructuralLoadLinearForce *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadPlanarForce *operator()(const IfcStructuralLoadPlanarForce *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleDisplacement *operator()(const IfcStructuralLoadSingleDisplacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleDisplacementDistortion *operator()(const IfcStructuralLoadSingleDisplacementDistortion *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleForce *operator()(const IfcStructuralLoadSingleForce *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleForceWarping *operator()(const IfcStructuralLoadSingleForceWarping *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadStatic *operator()(const IfcStructuralLoadStatic *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadTemperature *operator()(const IfcStructuralLoadTemperature *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralMember *operator()(const IfcStructuralMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPlanarAction *operator()(const IfcStructuralPlanarAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPlanarActionVarying *operator()(const IfcStructuralPlanarActionVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPointAction *operator()(const IfcStructuralPointAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPointConnection *operator()(const IfcStructuralPointConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPointReaction *operator()(const IfcStructuralPointReaction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralProfileProperties *operator()(const IfcStructuralProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralReaction *operator()(const IfcStructuralReaction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralResultGroup *operator()(const IfcStructuralResultGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSteelProfileProperties *operator()(const IfcStructuralSteelProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceConnection *operator()(const IfcStructuralSurfaceConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceMember *operator()(const IfcStructuralSurfaceMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceMemberVarying *operator()(const IfcStructuralSurfaceMemberVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuredDimensionCallout *operator()(const IfcStructuredDimensionCallout *obj) const;
        /**
         * @param obj
         */
        virtual IfcStyleModel *operator()(const IfcStyleModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcStyledItem *operator()(const IfcStyledItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcStyledRepresentation *operator()(const IfcStyledRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcSubContractResource *operator()(const IfcSubContractResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcSubedge *operator()(const IfcSubedge *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurface *operator()(const IfcSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceCurveSweptAreaSolid *operator()(const IfcSurfaceCurveSweptAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceOfLinearExtrusion *operator()(const IfcSurfaceOfLinearExtrusion *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceOfRevolution *operator()(const IfcSurfaceOfRevolution *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyle *operator()(const IfcSurfaceStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleLighting *operator()(const IfcSurfaceStyleLighting *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleRefraction *operator()(const IfcSurfaceStyleRefraction *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleRendering *operator()(const IfcSurfaceStyleRendering *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleShading *operator()(const IfcSurfaceStyleShading *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleWithTextures *operator()(const IfcSurfaceStyleWithTextures *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceTexture *operator()(const IfcSurfaceTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcSweptAreaSolid *operator()(const IfcSweptAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcSweptDiskSolid *operator()(const IfcSweptDiskSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcSweptSurface *operator()(const IfcSweptSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcSwitchingDeviceType *operator()(const IfcSwitchingDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSymbolStyle *operator()(const IfcSymbolStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcSystem *operator()(const IfcSystem *obj) const;
        /**
         * @param obj
         */
        virtual IfcSystemFurnitureElementType *operator()(const IfcSystemFurnitureElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTShapeProfileDef *operator()(const IfcTShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcTable *operator()(const IfcTable *obj) const;
        /**
         * @param obj
         */
        virtual IfcTableRow *operator()(const IfcTableRow *obj) const;
        /**
         * @param obj
         */
        virtual IfcTankType *operator()(const IfcTankType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTask *operator()(const IfcTask *obj) const;
        /**
         * @param obj
         */
        virtual IfcTelecomAddress *operator()(const IfcTelecomAddress *obj) const;
        /**
         * @param obj
         */
        virtual IfcTendon *operator()(const IfcTendon *obj) const;
        /**
         * @param obj
         */
        virtual IfcTendonAnchor *operator()(const IfcTendonAnchor *obj) const;
        /**
         * @param obj
         */
        virtual IfcTerminatorSymbol *operator()(const IfcTerminatorSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextLiteral *operator()(const IfcTextLiteral *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextLiteralWithExtent *operator()(const IfcTextLiteralWithExtent *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyle *operator()(const IfcTextStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleFontModel *operator()(const IfcTextStyleFontModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleForDefinedFont *operator()(const IfcTextStyleForDefinedFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleTextModel *operator()(const IfcTextStyleTextModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleWithBoxCharacteristics *operator()(const IfcTextStyleWithBoxCharacteristics *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureCoordinate *operator()(const IfcTextureCoordinate *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureCoordinateGenerator *operator()(const IfcTextureCoordinateGenerator *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureMap *operator()(const IfcTextureMap *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureVertex *operator()(const IfcTextureVertex *obj) const;
        /**
         * @param obj
         */
        virtual IfcThermalMaterialProperties *operator()(const IfcThermalMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeries *operator()(const IfcTimeSeries *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesReferenceRelationship *operator()(const IfcTimeSeriesReferenceRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesSchedule *operator()(const IfcTimeSeriesSchedule *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesValue *operator()(const IfcTimeSeriesValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcTopologicalRepresentationItem *operator()(const IfcTopologicalRepresentationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcTopologyRepresentation *operator()(const IfcTopologyRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcTransformerType *operator()(const IfcTransformerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTransportElement *operator()(const IfcTransportElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcTransportElementType *operator()(const IfcTransportElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTrapeziumProfileDef *operator()(const IfcTrapeziumProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcTrimmedCurve *operator()(const IfcTrimmedCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcTubeBundleType *operator()(const IfcTubeBundleType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTwoDirectionRepeatFactor *operator()(const IfcTwoDirectionRepeatFactor *obj) const;
        /**
         * @param obj
         */
        virtual IfcTypeObject *operator()(const IfcTypeObject *obj) const;
        /**
         * @param obj
         */
        virtual IfcTypeProduct *operator()(const IfcTypeProduct *obj) const;
        /**
         * @param obj
         */
        virtual IfcUShapeProfileDef *operator()(const IfcUShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcUnitAssignment *operator()(const IfcUnitAssignment *obj) const;
        /**
         * @param obj
         */
        virtual IfcUnitaryEquipmentType *operator()(const IfcUnitaryEquipmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcValveType *operator()(const IfcValveType *obj) const;
        /**
         * @param obj
         */
        virtual IfcVector *operator()(const IfcVector *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertex *operator()(const IfcVertex *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertexBasedTextureMap *operator()(const IfcVertexBasedTextureMap *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertexLoop *operator()(const IfcVertexLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertexPoint *operator()(const IfcVertexPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcVibrationIsolatorType *operator()(const IfcVibrationIsolatorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcVirtualElement *operator()(const IfcVirtualElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcVirtualGridIntersection *operator()(const IfcVirtualGridIntersection *obj) const;
        /**
         * @param obj
         */
        virtual IfcWall *operator()(const IfcWall *obj) const;
        /**
         * @param obj
         */
        virtual IfcWallStandardCase *operator()(const IfcWallStandardCase *obj) const;
        /**
         * @param obj
         */
        virtual IfcWallType *operator()(const IfcWallType *obj) const;
        /**
         * @param obj
         */
        virtual IfcWasteTerminalType *operator()(const IfcWasteTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcWaterProperties *operator()(const IfcWaterProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindow *operator()(const IfcWindow *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindowLiningProperties *operator()(const IfcWindowLiningProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindowPanelProperties *operator()(const IfcWindowPanelProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindowStyle *operator()(const IfcWindowStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcWorkControl *operator()(const IfcWorkControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcWorkPlan *operator()(const IfcWorkPlan *obj) const;
        /**
         * @param obj
         */
        virtual IfcWorkSchedule *operator()(const IfcWorkSchedule *obj) const;
        /**
         * @param obj
         */
        virtual IfcZShapeProfileDef *operator()(const IfcZShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcZone *operator()(const IfcZone *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilStructureElement *operator()(const IfcCivilStructureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeStructureElement *operator()(const IfcBridgeStructureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridge *operator()(const IfcBridge *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgePart *operator()(const IfcBridgePart *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilElement *operator()(const IfcCivilElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeElement *operator()(const IfcBridgeElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeSegment *operator()(const IfcBridgeSegment *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeSegmentPart *operator()(const IfcBridgeSegmentPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeContactElement *operator()(const IfcBridgeContactElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgePrismaticElement *operator()(const IfcBridgePrismaticElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcAlignmentElement *operator()(const IfcAlignmentElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceElement *operator()(const IfcReferenceElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurve *operator()(const IfcReferenceCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurve3D *operator()(const IfcReferenceCurve3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurveAlignment2D *operator()(const IfcReferenceCurveAlignment2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferencePlacement *operator()(const IfcReferencePlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurvePlacement *operator()(const IfcReferenceCurvePlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurvePlacementSystem *operator()(const IfcReferenceCurvePlacementSystem *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementPart *operator()(const IfcElementPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilElementPart *operator()(const IfcCivilElementPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilSheath *operator()(const IfcCivilSheath *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilVoid *operator()(const IfcCivilVoid *obj) const;
        /**
         * @param obj
         */
        virtual IfcClothoid *operator()(const IfcClothoid *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferencedSectionedSpine *operator()(const IfcReferencedSectionedSpine *obj) const;

    protected:
        /**
         */
        mutable std::map<const Step::BaseObject*,Step::BaseObject*> _mapOriginalToClone;

    };

    class Ifc2DCompositeCurve;
    class IfcActionRequest;
    class IfcActor;
    class IfcActorRole;
    class IfcActuatorType;
    class IfcAddress;
    class IfcAirTerminalBoxType;
    class IfcAirTerminalType;
    class IfcAirToAirHeatRecoveryType;
    class IfcAlarmType;
    class IfcAlignmentElement;
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
    class IfcBridge;
    class IfcBridgeContactElement;
    class IfcBridgeElement;
    class IfcBridgePart;
    class IfcBridgePrismaticElement;
    class IfcBridgeSegment;
    class IfcBridgeSegmentPart;
    class IfcBridgeStructureElement;
    class IfcBuilding;
    class IfcBuildingElement;
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
    class IfcChillerType;
    class IfcCircle;
    class IfcCircleHollowProfileDef;
    class IfcCircleProfileDef;
    class IfcCivilElement;
    class IfcCivilElementPart;
    class IfcCivilSheath;
    class IfcCivilStructureElement;
    class IfcCivilVoid;
    class IfcClassification;
    class IfcClassificationItem;
    class IfcClassificationItemRelationship;
    class IfcClassificationNotation;
    class IfcClassificationNotationFacet;
    class IfcClassificationReference;
    class IfcClosedShell;
    class IfcClothoid;
    class IfcCoilType;
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
    class IfcCsgSolid;
    class IfcCurrencyRelationship;
    class IfcCurtainWall;
    class IfcCurtainWallType;
    class IfcCurve;
    class IfcCurveBoundedPlane;
    class IfcCurveStyle;
    class IfcCurveStyleFont;
    class IfcCurveStyleFontAndScaling;
    class IfcCurveStyleFontPattern;
    class IfcDamperType;
    class IfcDateAndTime;
    class IfcDefinedSymbol;
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
    class IfcDoor;
    class IfcDoorLiningProperties;
    class IfcDoorPanelProperties;
    class IfcDoorStyle;
    class IfcDraughtingCallout;
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
    class IfcElementPart;
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
    class IfcFillAreaStyleTileSymbolWithStyle;
    class IfcFillAreaStyleTiles;
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
    class IfcGrid;
    class IfcGridAxis;
    class IfcGridPlacement;
    class IfcGroup;
    class IfcHalfSpaceSolid;
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
    class IfcLibraryInformation;
    class IfcLibraryReference;
    class IfcLightDistributionData;
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
    class IfcMeasureWithUnit;
    class IfcMechanicalConcreteMaterialProperties;
    class IfcMechanicalFastener;
    class IfcMechanicalFastenerType;
    class IfcMechanicalMaterialProperties;
    class IfcMechanicalSteelMaterialProperties;
    class IfcMember;
    class IfcMemberType;
    class IfcMetric;
    class IfcMonetaryUnit;
    class IfcMotorConnectionType;
    class IfcMove;
    class IfcNamedUnit;
    class IfcObject;
    class IfcObjectDefinition;
    class IfcObjectPlacement;
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
    class IfcReferenceCurve;
    class IfcReferenceCurve3D;
    class IfcReferenceCurveAlignment2D;
    class IfcReferenceCurvePlacement;
    class IfcReferenceCurvePlacementSystem;
    class IfcReferenceElement;
    class IfcReferencePlacement;
    class IfcReferencedSectionedSpine;
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
    class IfcShellBasedSurfaceModel;
    class IfcSimpleProperty;
    class IfcSite;
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
    class IfcSphere;
    class IfcStackTerminalType;
    class IfcStair;
    class IfcStairFlight;
    class IfcStairFlightType;
    class IfcStructuralAction;
    class IfcStructuralActivity;
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
    class IfcSurfaceStyle;
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
    class IfcTextLiteral;
    class IfcTextLiteralWithExtent;
    class IfcTextStyle;
    class IfcTextStyleFontModel;
    class IfcTextStyleForDefinedFont;
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
    class IfcTubeBundleType;
    class IfcTwoDirectionRepeatFactor;
    class IfcTypeObject;
    class IfcTypeProduct;
    class IfcUShapeProfileDef;
    class IfcUnitAssignment;
    class IfcUnitaryEquipmentType;
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
     */
    class IFC2X3_DLL_DEF ShallowCopyOp : public CopyOp {
    public:
        /**
         */
        ShallowCopyOp();
        virtual ~ShallowCopyOp();
        /**
         * @param obj
         */
        virtual Ifc2DCompositeCurve *operator()(const Ifc2DCompositeCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcActionRequest *operator()(const IfcActionRequest *obj) const;
        /**
         * @param obj
         */
        virtual IfcActor *operator()(const IfcActor *obj) const;
        /**
         * @param obj
         */
        virtual IfcActorRole *operator()(const IfcActorRole *obj) const;
        /**
         * @param obj
         */
        virtual IfcActuatorType *operator()(const IfcActuatorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAddress *operator()(const IfcAddress *obj) const;
        /**
         * @param obj
         */
        virtual IfcAirTerminalBoxType *operator()(const IfcAirTerminalBoxType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAirTerminalType *operator()(const IfcAirTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAirToAirHeatRecoveryType *operator()(const IfcAirToAirHeatRecoveryType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAlarmType *operator()(const IfcAlarmType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAngularDimension *operator()(const IfcAngularDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotation *operator()(const IfcAnnotation *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationCurveOccurrence *operator()(const IfcAnnotationCurveOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationFillArea *operator()(const IfcAnnotationFillArea *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationFillAreaOccurrence *operator()(const IfcAnnotationFillAreaOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationOccurrence *operator()(const IfcAnnotationOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationSurface *operator()(const IfcAnnotationSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationSurfaceOccurrence *operator()(const IfcAnnotationSurfaceOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationSymbolOccurrence *operator()(const IfcAnnotationSymbolOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationTextOccurrence *operator()(const IfcAnnotationTextOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcApplication *operator()(const IfcApplication *obj) const;
        /**
         * @param obj
         */
        virtual IfcAppliedValue *operator()(const IfcAppliedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcAppliedValueRelationship *operator()(const IfcAppliedValueRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcApproval *operator()(const IfcApproval *obj) const;
        /**
         * @param obj
         */
        virtual IfcApprovalActorRelationship *operator()(const IfcApprovalActorRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcApprovalPropertyRelationship *operator()(const IfcApprovalPropertyRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcApprovalRelationship *operator()(const IfcApprovalRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcArbitraryClosedProfileDef *operator()(const IfcArbitraryClosedProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcArbitraryOpenProfileDef *operator()(const IfcArbitraryOpenProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcArbitraryProfileDefWithVoids *operator()(const IfcArbitraryProfileDefWithVoids *obj) const;
        /**
         * @param obj
         */
        virtual IfcAsset *operator()(const IfcAsset *obj) const;
        /**
         * @param obj
         */
        virtual IfcAsymmetricIShapeProfileDef *operator()(const IfcAsymmetricIShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcAxis1Placement *operator()(const IfcAxis1Placement *obj) const;
        /**
         * @param obj
         */
        virtual IfcAxis2Placement2D *operator()(const IfcAxis2Placement2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcAxis2Placement3D *operator()(const IfcAxis2Placement3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcBSplineCurve *operator()(const IfcBSplineCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcBeam *operator()(const IfcBeam *obj) const;
        /**
         * @param obj
         */
        virtual IfcBeamType *operator()(const IfcBeamType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBezierCurve *operator()(const IfcBezierCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcBlobTexture *operator()(const IfcBlobTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcBlock *operator()(const IfcBlock *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoilerType *operator()(const IfcBoilerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBooleanClippingResult *operator()(const IfcBooleanClippingResult *obj) const;
        /**
         * @param obj
         */
        virtual IfcBooleanResult *operator()(const IfcBooleanResult *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryCondition *operator()(const IfcBoundaryCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryEdgeCondition *operator()(const IfcBoundaryEdgeCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryFaceCondition *operator()(const IfcBoundaryFaceCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryNodeCondition *operator()(const IfcBoundaryNodeCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryNodeConditionWarping *operator()(const IfcBoundaryNodeConditionWarping *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundedCurve *operator()(const IfcBoundedCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundedSurface *operator()(const IfcBoundedSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundingBox *operator()(const IfcBoundingBox *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoxedHalfSpace *operator()(const IfcBoxedHalfSpace *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuilding *operator()(const IfcBuilding *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElement *operator()(const IfcBuildingElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementPart *operator()(const IfcBuildingElementPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementProxy *operator()(const IfcBuildingElementProxy *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementProxyType *operator()(const IfcBuildingElementProxyType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementType *operator()(const IfcBuildingElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingStorey *operator()(const IfcBuildingStorey *obj) const;
        /**
         * @param obj
         */
        virtual IfcCShapeProfileDef *operator()(const IfcCShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCableCarrierFittingType *operator()(const IfcCableCarrierFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCableCarrierSegmentType *operator()(const IfcCableCarrierSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCableSegmentType *operator()(const IfcCableSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCalendarDate *operator()(const IfcCalendarDate *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianPoint *operator()(const IfcCartesianPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator *operator()(const IfcCartesianTransformationOperator *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator2D *operator()(const IfcCartesianTransformationOperator2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator2DnonUniform *operator()(const IfcCartesianTransformationOperator2DnonUniform *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator3D *operator()(const IfcCartesianTransformationOperator3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator3DnonUniform *operator()(const IfcCartesianTransformationOperator3DnonUniform *obj) const;
        /**
         * @param obj
         */
        virtual IfcCenterLineProfileDef *operator()(const IfcCenterLineProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcChamferEdgeFeature *operator()(const IfcChamferEdgeFeature *obj) const;
        /**
         * @param obj
         */
        virtual IfcChillerType *operator()(const IfcChillerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCircle *operator()(const IfcCircle *obj) const;
        /**
         * @param obj
         */
        virtual IfcCircleHollowProfileDef *operator()(const IfcCircleHollowProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCircleProfileDef *operator()(const IfcCircleProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassification *operator()(const IfcClassification *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationItem *operator()(const IfcClassificationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationItemRelationship *operator()(const IfcClassificationItemRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationNotation *operator()(const IfcClassificationNotation *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationNotationFacet *operator()(const IfcClassificationNotationFacet *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationReference *operator()(const IfcClassificationReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcClosedShell *operator()(const IfcClosedShell *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoilType *operator()(const IfcCoilType *obj) const;
        /**
         * @param obj
         */
        virtual IfcColourRgb *operator()(const IfcColourRgb *obj) const;
        /**
         * @param obj
         */
        virtual IfcColourSpecification *operator()(const IfcColourSpecification *obj) const;
        /**
         * @param obj
         */
        virtual IfcColumn *operator()(const IfcColumn *obj) const;
        /**
         * @param obj
         */
        virtual IfcColumnType *operator()(const IfcColumnType *obj) const;
        /**
         * @param obj
         */
        virtual IfcComplexProperty *operator()(const IfcComplexProperty *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompositeCurve *operator()(const IfcCompositeCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompositeCurveSegment *operator()(const IfcCompositeCurveSegment *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompositeProfileDef *operator()(const IfcCompositeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompressorType *operator()(const IfcCompressorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCondenserType *operator()(const IfcCondenserType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCondition *operator()(const IfcCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcConditionCriterion *operator()(const IfcConditionCriterion *obj) const;
        /**
         * @param obj
         */
        virtual IfcConic *operator()(const IfcConic *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectedFaceSet *operator()(const IfcConnectedFaceSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionCurveGeometry *operator()(const IfcConnectionCurveGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionGeometry *operator()(const IfcConnectionGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionPointEccentricity *operator()(const IfcConnectionPointEccentricity *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionPointGeometry *operator()(const IfcConnectionPointGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionPortGeometry *operator()(const IfcConnectionPortGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionSurfaceGeometry *operator()(const IfcConnectionSurfaceGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraint *operator()(const IfcConstraint *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraintAggregationRelationship *operator()(const IfcConstraintAggregationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraintClassificationRelationship *operator()(const IfcConstraintClassificationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraintRelationship *operator()(const IfcConstraintRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionEquipmentResource *operator()(const IfcConstructionEquipmentResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionMaterialResource *operator()(const IfcConstructionMaterialResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionProductResource *operator()(const IfcConstructionProductResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionResource *operator()(const IfcConstructionResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcContextDependentUnit *operator()(const IfcContextDependentUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcControl *operator()(const IfcControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcControllerType *operator()(const IfcControllerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcConversionBasedUnit *operator()(const IfcConversionBasedUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcCooledBeamType *operator()(const IfcCooledBeamType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoolingTowerType *operator()(const IfcCoolingTowerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoordinatedUniversalTimeOffset *operator()(const IfcCoordinatedUniversalTimeOffset *obj) const;
        /**
         * @param obj
         */
        virtual IfcCostItem *operator()(const IfcCostItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcCostSchedule *operator()(const IfcCostSchedule *obj) const;
        /**
         * @param obj
         */
        virtual IfcCostValue *operator()(const IfcCostValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcCovering *operator()(const IfcCovering *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoveringType *operator()(const IfcCoveringType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCraneRailAShapeProfileDef *operator()(const IfcCraneRailAShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCraneRailFShapeProfileDef *operator()(const IfcCraneRailFShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCrewResource *operator()(const IfcCrewResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcCsgPrimitive3D *operator()(const IfcCsgPrimitive3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcCsgSolid *operator()(const IfcCsgSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurrencyRelationship *operator()(const IfcCurrencyRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurtainWall *operator()(const IfcCurtainWall *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurtainWallType *operator()(const IfcCurtainWallType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurve *operator()(const IfcCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveBoundedPlane *operator()(const IfcCurveBoundedPlane *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyle *operator()(const IfcCurveStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFont *operator()(const IfcCurveStyleFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFontAndScaling *operator()(const IfcCurveStyleFontAndScaling *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFontPattern *operator()(const IfcCurveStyleFontPattern *obj) const;
        /**
         * @param obj
         */
        virtual IfcDamperType *operator()(const IfcDamperType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDateAndTime *operator()(const IfcDateAndTime *obj) const;
        /**
         * @param obj
         */
        virtual IfcDefinedSymbol *operator()(const IfcDefinedSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcDerivedProfileDef *operator()(const IfcDerivedProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcDerivedUnit *operator()(const IfcDerivedUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcDerivedUnitElement *operator()(const IfcDerivedUnitElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDiameterDimension *operator()(const IfcDiameterDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCalloutRelationship *operator()(const IfcDimensionCalloutRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCurve *operator()(const IfcDimensionCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCurveDirectedCallout *operator()(const IfcDimensionCurveDirectedCallout *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCurveTerminator *operator()(const IfcDimensionCurveTerminator *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionPair *operator()(const IfcDimensionPair *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionalExponents *operator()(const IfcDimensionalExponents *obj) const;
        /**
         * @param obj
         */
        virtual IfcDirection *operator()(const IfcDirection *obj) const;
        /**
         * @param obj
         */
        virtual IfcDiscreteAccessory *operator()(const IfcDiscreteAccessory *obj) const;
        /**
         * @param obj
         */
        virtual IfcDiscreteAccessoryType *operator()(const IfcDiscreteAccessoryType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionChamberElement *operator()(const IfcDistributionChamberElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionChamberElementType *operator()(const IfcDistributionChamberElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionControlElement *operator()(const IfcDistributionControlElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionControlElementType *operator()(const IfcDistributionControlElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionElement *operator()(const IfcDistributionElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionElementType *operator()(const IfcDistributionElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionFlowElement *operator()(const IfcDistributionFlowElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionFlowElementType *operator()(const IfcDistributionFlowElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionPort *operator()(const IfcDistributionPort *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentElectronicFormat *operator()(const IfcDocumentElectronicFormat *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentInformation *operator()(const IfcDocumentInformation *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentInformationRelationship *operator()(const IfcDocumentInformationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentReference *operator()(const IfcDocumentReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoor *operator()(const IfcDoor *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoorLiningProperties *operator()(const IfcDoorLiningProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoorPanelProperties *operator()(const IfcDoorPanelProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoorStyle *operator()(const IfcDoorStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingCallout *operator()(const IfcDraughtingCallout *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingCalloutRelationship *operator()(const IfcDraughtingCalloutRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedColour *operator()(const IfcDraughtingPreDefinedColour *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedCurveFont *operator()(const IfcDraughtingPreDefinedCurveFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedTextFont *operator()(const IfcDraughtingPreDefinedTextFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcDuctFittingType *operator()(const IfcDuctFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDuctSegmentType *operator()(const IfcDuctSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDuctSilencerType *operator()(const IfcDuctSilencerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdge *operator()(const IfcEdge *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdgeCurve *operator()(const IfcEdgeCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdgeFeature *operator()(const IfcEdgeFeature *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdgeLoop *operator()(const IfcEdgeLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricApplianceType *operator()(const IfcElectricApplianceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricDistributionPoint *operator()(const IfcElectricDistributionPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricFlowStorageDeviceType *operator()(const IfcElectricFlowStorageDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricGeneratorType *operator()(const IfcElectricGeneratorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricHeaterType *operator()(const IfcElectricHeaterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricMotorType *operator()(const IfcElectricMotorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricTimeControlType *operator()(const IfcElectricTimeControlType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricalBaseProperties *operator()(const IfcElectricalBaseProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricalCircuit *operator()(const IfcElectricalCircuit *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricalElement *operator()(const IfcElectricalElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcElement *operator()(const IfcElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementAssembly *operator()(const IfcElementAssembly *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementComponent *operator()(const IfcElementComponent *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementComponentType *operator()(const IfcElementComponentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementQuantity *operator()(const IfcElementQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementType *operator()(const IfcElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementarySurface *operator()(const IfcElementarySurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcEllipse *operator()(const IfcEllipse *obj) const;
        /**
         * @param obj
         */
        virtual IfcEllipseProfileDef *operator()(const IfcEllipseProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnergyConversionDevice *operator()(const IfcEnergyConversionDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnergyConversionDeviceType *operator()(const IfcEnergyConversionDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnergyProperties *operator()(const IfcEnergyProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnvironmentalImpactValue *operator()(const IfcEnvironmentalImpactValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcEquipmentElement *operator()(const IfcEquipmentElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcEquipmentStandard *operator()(const IfcEquipmentStandard *obj) const;
        /**
         * @param obj
         */
        virtual IfcEvaporativeCoolerType *operator()(const IfcEvaporativeCoolerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcEvaporatorType *operator()(const IfcEvaporatorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcExtendedMaterialProperties *operator()(const IfcExtendedMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternalReference *operator()(const IfcExternalReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedHatchStyle *operator()(const IfcExternallyDefinedHatchStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedSurfaceStyle *operator()(const IfcExternallyDefinedSurfaceStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedSymbol *operator()(const IfcExternallyDefinedSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedTextFont *operator()(const IfcExternallyDefinedTextFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcExtrudedAreaSolid *operator()(const IfcExtrudedAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcFace *operator()(const IfcFace *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceBasedSurfaceModel *operator()(const IfcFaceBasedSurfaceModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceBound *operator()(const IfcFaceBound *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceOuterBound *operator()(const IfcFaceOuterBound *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceSurface *operator()(const IfcFaceSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcFacetedBrep *operator()(const IfcFacetedBrep *obj) const;
        /**
         * @param obj
         */
        virtual IfcFacetedBrepWithVoids *operator()(const IfcFacetedBrepWithVoids *obj) const;
        /**
         * @param obj
         */
        virtual IfcFailureConnectionCondition *operator()(const IfcFailureConnectionCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcFanType *operator()(const IfcFanType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFastener *operator()(const IfcFastener *obj) const;
        /**
         * @param obj
         */
        virtual IfcFastenerType *operator()(const IfcFastenerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFeatureElement *operator()(const IfcFeatureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcFeatureElementAddition *operator()(const IfcFeatureElementAddition *obj) const;
        /**
         * @param obj
         */
        virtual IfcFeatureElementSubtraction *operator()(const IfcFeatureElementSubtraction *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyle *operator()(const IfcFillAreaStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleHatching *operator()(const IfcFillAreaStyleHatching *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleTileSymbolWithStyle *operator()(const IfcFillAreaStyleTileSymbolWithStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleTiles *operator()(const IfcFillAreaStyleTiles *obj) const;
        /**
         * @param obj
         */
        virtual IfcFilterType *operator()(const IfcFilterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFireSuppressionTerminalType *operator()(const IfcFireSuppressionTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowController *operator()(const IfcFlowController *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowControllerType *operator()(const IfcFlowControllerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowFitting *operator()(const IfcFlowFitting *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowFittingType *operator()(const IfcFlowFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowInstrumentType *operator()(const IfcFlowInstrumentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowMeterType *operator()(const IfcFlowMeterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowMovingDevice *operator()(const IfcFlowMovingDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowMovingDeviceType *operator()(const IfcFlowMovingDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowSegment *operator()(const IfcFlowSegment *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowSegmentType *operator()(const IfcFlowSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowStorageDevice *operator()(const IfcFlowStorageDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowStorageDeviceType *operator()(const IfcFlowStorageDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTerminal *operator()(const IfcFlowTerminal *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTerminalType *operator()(const IfcFlowTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTreatmentDevice *operator()(const IfcFlowTreatmentDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTreatmentDeviceType *operator()(const IfcFlowTreatmentDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFluidFlowProperties *operator()(const IfcFluidFlowProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcFooting *operator()(const IfcFooting *obj) const;
        /**
         * @param obj
         */
        virtual IfcFuelProperties *operator()(const IfcFuelProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnishingElement *operator()(const IfcFurnishingElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnishingElementType *operator()(const IfcFurnishingElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnitureStandard *operator()(const IfcFurnitureStandard *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnitureType *operator()(const IfcFurnitureType *obj) const;
        /**
         * @param obj
         */
        virtual IfcGasTerminalType *operator()(const IfcGasTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeneralMaterialProperties *operator()(const IfcGeneralMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeneralProfileProperties *operator()(const IfcGeneralProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricCurveSet *operator()(const IfcGeometricCurveSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationContext *operator()(const IfcGeometricRepresentationContext *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationItem *operator()(const IfcGeometricRepresentationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationSubContext *operator()(const IfcGeometricRepresentationSubContext *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricSet *operator()(const IfcGeometricSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcGrid *operator()(const IfcGrid *obj) const;
        /**
         * @param obj
         */
        virtual IfcGridAxis *operator()(const IfcGridAxis *obj) const;
        /**
         * @param obj
         */
        virtual IfcGridPlacement *operator()(const IfcGridPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcGroup *operator()(const IfcGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcHalfSpaceSolid *operator()(const IfcHalfSpaceSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcHeatExchangerType *operator()(const IfcHeatExchangerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcHumidifierType *operator()(const IfcHumidifierType *obj) const;
        /**
         * @param obj
         */
        virtual IfcHygroscopicMaterialProperties *operator()(const IfcHygroscopicMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcIShapeProfileDef *operator()(const IfcIShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcImageTexture *operator()(const IfcImageTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcInventory *operator()(const IfcInventory *obj) const;
        /**
         * @param obj
         */
        virtual IfcIrregularTimeSeries *operator()(const IfcIrregularTimeSeries *obj) const;
        /**
         * @param obj
         */
        virtual IfcIrregularTimeSeriesValue *operator()(const IfcIrregularTimeSeriesValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcJunctionBoxType *operator()(const IfcJunctionBoxType *obj) const;
        /**
         * @param obj
         */
        virtual IfcLShapeProfileDef *operator()(const IfcLShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcLaborResource *operator()(const IfcLaborResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcLampType *operator()(const IfcLampType *obj) const;
        /**
         * @param obj
         */
        virtual IfcLibraryInformation *operator()(const IfcLibraryInformation *obj) const;
        /**
         * @param obj
         */
        virtual IfcLibraryReference *operator()(const IfcLibraryReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightDistributionData *operator()(const IfcLightDistributionData *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightFixtureType *operator()(const IfcLightFixtureType *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightIntensityDistribution *operator()(const IfcLightIntensityDistribution *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSource *operator()(const IfcLightSource *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceAmbient *operator()(const IfcLightSourceAmbient *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceDirectional *operator()(const IfcLightSourceDirectional *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceGoniometric *operator()(const IfcLightSourceGoniometric *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourcePositional *operator()(const IfcLightSourcePositional *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceSpot *operator()(const IfcLightSourceSpot *obj) const;
        /**
         * @param obj
         */
        virtual IfcLine *operator()(const IfcLine *obj) const;
        /**
         * @param obj
         */
        virtual IfcLinearDimension *operator()(const IfcLinearDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcLocalPlacement *operator()(const IfcLocalPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcLocalTime *operator()(const IfcLocalTime *obj) const;
        /**
         * @param obj
         */
        virtual IfcLoop *operator()(const IfcLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcManifoldSolidBrep *operator()(const IfcManifoldSolidBrep *obj) const;
        /**
         * @param obj
         */
        virtual IfcMappedItem *operator()(const IfcMappedItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterial *operator()(const IfcMaterial *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialClassificationRelationship *operator()(const IfcMaterialClassificationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialDefinitionRepresentation *operator()(const IfcMaterialDefinitionRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialLayer *operator()(const IfcMaterialLayer *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialLayerSet *operator()(const IfcMaterialLayerSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialLayerSetUsage *operator()(const IfcMaterialLayerSetUsage *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialList *operator()(const IfcMaterialList *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialProperties *operator()(const IfcMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMeasureWithUnit *operator()(const IfcMeasureWithUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalConcreteMaterialProperties *operator()(const IfcMechanicalConcreteMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalFastener *operator()(const IfcMechanicalFastener *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalFastenerType *operator()(const IfcMechanicalFastenerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalMaterialProperties *operator()(const IfcMechanicalMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalSteelMaterialProperties *operator()(const IfcMechanicalSteelMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMember *operator()(const IfcMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcMemberType *operator()(const IfcMemberType *obj) const;
        /**
         * @param obj
         */
        virtual IfcMetric *operator()(const IfcMetric *obj) const;
        /**
         * @param obj
         */
        virtual IfcMonetaryUnit *operator()(const IfcMonetaryUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcMotorConnectionType *operator()(const IfcMotorConnectionType *obj) const;
        /**
         * @param obj
         */
        virtual IfcMove *operator()(const IfcMove *obj) const;
        /**
         * @param obj
         */
        virtual IfcNamedUnit *operator()(const IfcNamedUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcObject *operator()(const IfcObject *obj) const;
        /**
         * @param obj
         */
        virtual IfcObjectDefinition *operator()(const IfcObjectDefinition *obj) const;
        /**
         * @param obj
         */
        virtual IfcObjectPlacement *operator()(const IfcObjectPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcObjective *operator()(const IfcObjective *obj) const;
        /**
         * @param obj
         */
        virtual IfcOccupant *operator()(const IfcOccupant *obj) const;
        /**
         * @param obj
         */
        virtual IfcOffsetCurve2D *operator()(const IfcOffsetCurve2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcOffsetCurve3D *operator()(const IfcOffsetCurve3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcOneDirectionRepeatFactor *operator()(const IfcOneDirectionRepeatFactor *obj) const;
        /**
         * @param obj
         */
        virtual IfcOpenShell *operator()(const IfcOpenShell *obj) const;
        /**
         * @param obj
         */
        virtual IfcOpeningElement *operator()(const IfcOpeningElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcOpticalMaterialProperties *operator()(const IfcOpticalMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrderAction *operator()(const IfcOrderAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrganization *operator()(const IfcOrganization *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrganizationRelationship *operator()(const IfcOrganizationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrientedEdge *operator()(const IfcOrientedEdge *obj) const;
        /**
         * @param obj
         */
        virtual IfcOutletType *operator()(const IfcOutletType *obj) const;
        /**
         * @param obj
         */
        virtual IfcOwnerHistory *operator()(const IfcOwnerHistory *obj) const;
        /**
         * @param obj
         */
        virtual IfcParameterizedProfileDef *operator()(const IfcParameterizedProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcPath *operator()(const IfcPath *obj) const;
        /**
         * @param obj
         */
        virtual IfcPerformanceHistory *operator()(const IfcPerformanceHistory *obj) const;
        /**
         * @param obj
         */
        virtual IfcPermeableCoveringProperties *operator()(const IfcPermeableCoveringProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcPermit *operator()(const IfcPermit *obj) const;
        /**
         * @param obj
         */
        virtual IfcPerson *operator()(const IfcPerson *obj) const;
        /**
         * @param obj
         */
        virtual IfcPersonAndOrganization *operator()(const IfcPersonAndOrganization *obj) const;
        /**
         * @param obj
         */
        virtual IfcPhysicalComplexQuantity *operator()(const IfcPhysicalComplexQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcPhysicalQuantity *operator()(const IfcPhysicalQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcPhysicalSimpleQuantity *operator()(const IfcPhysicalSimpleQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcPile *operator()(const IfcPile *obj) const;
        /**
         * @param obj
         */
        virtual IfcPipeFittingType *operator()(const IfcPipeFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcPipeSegmentType *operator()(const IfcPipeSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcPixelTexture *operator()(const IfcPixelTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlacement *operator()(const IfcPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlanarBox *operator()(const IfcPlanarBox *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlanarExtent *operator()(const IfcPlanarExtent *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlane *operator()(const IfcPlane *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlate *operator()(const IfcPlate *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlateType *operator()(const IfcPlateType *obj) const;
        /**
         * @param obj
         */
        virtual IfcPoint *operator()(const IfcPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcPointOnCurve *operator()(const IfcPointOnCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcPointOnSurface *operator()(const IfcPointOnSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcPolyLoop *operator()(const IfcPolyLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcPolygonalBoundedHalfSpace *operator()(const IfcPolygonalBoundedHalfSpace *obj) const;
        /**
         * @param obj
         */
        virtual IfcPolyline *operator()(const IfcPolyline *obj) const;
        /**
         * @param obj
         */
        virtual IfcPort *operator()(const IfcPort *obj) const;
        /**
         * @param obj
         */
        virtual IfcPostalAddress *operator()(const IfcPostalAddress *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedColour *operator()(const IfcPreDefinedColour *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedCurveFont *operator()(const IfcPreDefinedCurveFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedDimensionSymbol *operator()(const IfcPreDefinedDimensionSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedItem *operator()(const IfcPreDefinedItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedPointMarkerSymbol *operator()(const IfcPreDefinedPointMarkerSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedSymbol *operator()(const IfcPreDefinedSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedTerminatorSymbol *operator()(const IfcPreDefinedTerminatorSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedTextFont *operator()(const IfcPreDefinedTextFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationLayerAssignment *operator()(const IfcPresentationLayerAssignment *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationLayerWithStyle *operator()(const IfcPresentationLayerWithStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationStyle *operator()(const IfcPresentationStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationStyleAssignment *operator()(const IfcPresentationStyleAssignment *obj) const;
        /**
         * @param obj
         */
        virtual IfcProcedure *operator()(const IfcProcedure *obj) const;
        /**
         * @param obj
         */
        virtual IfcProcess *operator()(const IfcProcess *obj) const;
        /**
         * @param obj
         */
        virtual IfcProduct *operator()(const IfcProduct *obj) const;
        /**
         * @param obj
         */
        virtual IfcProductDefinitionShape *operator()(const IfcProductDefinitionShape *obj) const;
        /**
         * @param obj
         */
        virtual IfcProductRepresentation *operator()(const IfcProductRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcProductsOfCombustionProperties *operator()(const IfcProductsOfCombustionProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcProfileDef *operator()(const IfcProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcProfileProperties *operator()(const IfcProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcProject *operator()(const IfcProject *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectOrder *operator()(const IfcProjectOrder *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectOrderRecord *operator()(const IfcProjectOrderRecord *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectionCurve *operator()(const IfcProjectionCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectionElement *operator()(const IfcProjectionElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcProperty *operator()(const IfcProperty *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyBoundedValue *operator()(const IfcPropertyBoundedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyConstraintRelationship *operator()(const IfcPropertyConstraintRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyDefinition *operator()(const IfcPropertyDefinition *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyDependencyRelationship *operator()(const IfcPropertyDependencyRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyEnumeratedValue *operator()(const IfcPropertyEnumeratedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyEnumeration *operator()(const IfcPropertyEnumeration *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyListValue *operator()(const IfcPropertyListValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyReferenceValue *operator()(const IfcPropertyReferenceValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertySet *operator()(const IfcPropertySet *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertySetDefinition *operator()(const IfcPropertySetDefinition *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertySingleValue *operator()(const IfcPropertySingleValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyTableValue *operator()(const IfcPropertyTableValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcProtectiveDeviceType *operator()(const IfcProtectiveDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcProxy *operator()(const IfcProxy *obj) const;
        /**
         * @param obj
         */
        virtual IfcPumpType *operator()(const IfcPumpType *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityArea *operator()(const IfcQuantityArea *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityCount *operator()(const IfcQuantityCount *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityLength *operator()(const IfcQuantityLength *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityTime *operator()(const IfcQuantityTime *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityVolume *operator()(const IfcQuantityVolume *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityWeight *operator()(const IfcQuantityWeight *obj) const;
        /**
         * @param obj
         */
        virtual IfcRadiusDimension *operator()(const IfcRadiusDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcRailing *operator()(const IfcRailing *obj) const;
        /**
         * @param obj
         */
        virtual IfcRailingType *operator()(const IfcRailingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcRamp *operator()(const IfcRamp *obj) const;
        /**
         * @param obj
         */
        virtual IfcRampFlight *operator()(const IfcRampFlight *obj) const;
        /**
         * @param obj
         */
        virtual IfcRampFlightType *operator()(const IfcRampFlightType *obj) const;
        /**
         * @param obj
         */
        virtual IfcRationalBezierCurve *operator()(const IfcRationalBezierCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangleHollowProfileDef *operator()(const IfcRectangleHollowProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangleProfileDef *operator()(const IfcRectangleProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangularPyramid *operator()(const IfcRectangularPyramid *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangularTrimmedSurface *operator()(const IfcRectangularTrimmedSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferencesValueDocument *operator()(const IfcReferencesValueDocument *obj) const;
        /**
         * @param obj
         */
        virtual IfcRegularTimeSeries *operator()(const IfcRegularTimeSeries *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcementBarProperties *operator()(const IfcReinforcementBarProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcementDefinitionProperties *operator()(const IfcReinforcementDefinitionProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcingBar *operator()(const IfcReinforcingBar *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcingElement *operator()(const IfcReinforcingElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcingMesh *operator()(const IfcReinforcingMesh *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAggregates *operator()(const IfcRelAggregates *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssigns *operator()(const IfcRelAssigns *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsTasks *operator()(const IfcRelAssignsTasks *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToActor *operator()(const IfcRelAssignsToActor *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToControl *operator()(const IfcRelAssignsToControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToGroup *operator()(const IfcRelAssignsToGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProcess *operator()(const IfcRelAssignsToProcess *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProduct *operator()(const IfcRelAssignsToProduct *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProjectOrder *operator()(const IfcRelAssignsToProjectOrder *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToResource *operator()(const IfcRelAssignsToResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociates *operator()(const IfcRelAssociates *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesAppliedValue *operator()(const IfcRelAssociatesAppliedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesApproval *operator()(const IfcRelAssociatesApproval *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesClassification *operator()(const IfcRelAssociatesClassification *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesConstraint *operator()(const IfcRelAssociatesConstraint *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesDocument *operator()(const IfcRelAssociatesDocument *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesLibrary *operator()(const IfcRelAssociatesLibrary *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesMaterial *operator()(const IfcRelAssociatesMaterial *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesProfileProperties *operator()(const IfcRelAssociatesProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnects *operator()(const IfcRelConnects *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsElements *operator()(const IfcRelConnectsElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPathElements *operator()(const IfcRelConnectsPathElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPortToElement *operator()(const IfcRelConnectsPortToElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPorts *operator()(const IfcRelConnectsPorts *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralActivity *operator()(const IfcRelConnectsStructuralActivity *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralElement *operator()(const IfcRelConnectsStructuralElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralMember *operator()(const IfcRelConnectsStructuralMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsWithEccentricity *operator()(const IfcRelConnectsWithEccentricity *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsWithRealizingElements *operator()(const IfcRelConnectsWithRealizingElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelContainedInSpatialStructure *operator()(const IfcRelContainedInSpatialStructure *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelCoversBldgElements *operator()(const IfcRelCoversBldgElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelCoversSpaces *operator()(const IfcRelCoversSpaces *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDecomposes *operator()(const IfcRelDecomposes *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDefines *operator()(const IfcRelDefines *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDefinesByProperties *operator()(const IfcRelDefinesByProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDefinesByType *operator()(const IfcRelDefinesByType *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelFillsElement *operator()(const IfcRelFillsElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelFlowControlElements *operator()(const IfcRelFlowControlElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelInteractionRequirements *operator()(const IfcRelInteractionRequirements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelNests *operator()(const IfcRelNests *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelOccupiesSpaces *operator()(const IfcRelOccupiesSpaces *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelOverridesProperties *operator()(const IfcRelOverridesProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelProjectsElement *operator()(const IfcRelProjectsElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelReferencedInSpatialStructure *operator()(const IfcRelReferencedInSpatialStructure *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelSchedulesCostItems *operator()(const IfcRelSchedulesCostItems *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelSequence *operator()(const IfcRelSequence *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelServicesBuildings *operator()(const IfcRelServicesBuildings *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelSpaceBoundary *operator()(const IfcRelSpaceBoundary *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelVoidsElement *operator()(const IfcRelVoidsElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelationship *operator()(const IfcRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelaxation *operator()(const IfcRelaxation *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentation *operator()(const IfcRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentationContext *operator()(const IfcRepresentationContext *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentationItem *operator()(const IfcRepresentationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentationMap *operator()(const IfcRepresentationMap *obj) const;
        /**
         * @param obj
         */
        virtual IfcResource *operator()(const IfcResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcRevolvedAreaSolid *operator()(const IfcRevolvedAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcRibPlateProfileProperties *operator()(const IfcRibPlateProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRightCircularCone *operator()(const IfcRightCircularCone *obj) const;
        /**
         * @param obj
         */
        virtual IfcRightCircularCylinder *operator()(const IfcRightCircularCylinder *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoof *operator()(const IfcRoof *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoot *operator()(const IfcRoot *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoundedEdgeFeature *operator()(const IfcRoundedEdgeFeature *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoundedRectangleProfileDef *operator()(const IfcRoundedRectangleProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcSIUnit *operator()(const IfcSIUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcSanitaryTerminalType *operator()(const IfcSanitaryTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcScheduleTimeControl *operator()(const IfcScheduleTimeControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcSectionProperties *operator()(const IfcSectionProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSectionReinforcementProperties *operator()(const IfcSectionReinforcementProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSectionedSpine *operator()(const IfcSectionedSpine *obj) const;
        /**
         * @param obj
         */
        virtual IfcSensorType *operator()(const IfcSensorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcServiceLife *operator()(const IfcServiceLife *obj) const;
        /**
         * @param obj
         */
        virtual IfcServiceLifeFactor *operator()(const IfcServiceLifeFactor *obj) const;
        /**
         * @param obj
         */
        virtual IfcShapeAspect *operator()(const IfcShapeAspect *obj) const;
        /**
         * @param obj
         */
        virtual IfcShapeModel *operator()(const IfcShapeModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcShapeRepresentation *operator()(const IfcShapeRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcShellBasedSurfaceModel *operator()(const IfcShellBasedSurfaceModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcSimpleProperty *operator()(const IfcSimpleProperty *obj) const;
        /**
         * @param obj
         */
        virtual IfcSite *operator()(const IfcSite *obj) const;
        /**
         * @param obj
         */
        virtual IfcSlab *operator()(const IfcSlab *obj) const;
        /**
         * @param obj
         */
        virtual IfcSlabType *operator()(const IfcSlabType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSlippageConnectionCondition *operator()(const IfcSlippageConnectionCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcSolidModel *operator()(const IfcSolidModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcSoundProperties *operator()(const IfcSoundProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSoundValue *operator()(const IfcSoundValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpace *operator()(const IfcSpace *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceHeaterType *operator()(const IfcSpaceHeaterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceProgram *operator()(const IfcSpaceProgram *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceThermalLoadProperties *operator()(const IfcSpaceThermalLoadProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceType *operator()(const IfcSpaceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpatialStructureElement *operator()(const IfcSpatialStructureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpatialStructureElementType *operator()(const IfcSpatialStructureElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSphere *operator()(const IfcSphere *obj) const;
        /**
         * @param obj
         */
        virtual IfcStackTerminalType *operator()(const IfcStackTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcStair *operator()(const IfcStair *obj) const;
        /**
         * @param obj
         */
        virtual IfcStairFlight *operator()(const IfcStairFlight *obj) const;
        /**
         * @param obj
         */
        virtual IfcStairFlightType *operator()(const IfcStairFlightType *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralAction *operator()(const IfcStructuralAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralActivity *operator()(const IfcStructuralActivity *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralAnalysisModel *operator()(const IfcStructuralAnalysisModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralConnection *operator()(const IfcStructuralConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralConnectionCondition *operator()(const IfcStructuralConnectionCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveConnection *operator()(const IfcStructuralCurveConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveMember *operator()(const IfcStructuralCurveMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveMemberVarying *operator()(const IfcStructuralCurveMemberVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralItem *operator()(const IfcStructuralItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLinearAction *operator()(const IfcStructuralLinearAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLinearActionVarying *operator()(const IfcStructuralLinearActionVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoad *operator()(const IfcStructuralLoad *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadGroup *operator()(const IfcStructuralLoadGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadLinearForce *operator()(const IfcStructuralLoadLinearForce *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadPlanarForce *operator()(const IfcStructuralLoadPlanarForce *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleDisplacement *operator()(const IfcStructuralLoadSingleDisplacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleDisplacementDistortion *operator()(const IfcStructuralLoadSingleDisplacementDistortion *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleForce *operator()(const IfcStructuralLoadSingleForce *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleForceWarping *operator()(const IfcStructuralLoadSingleForceWarping *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadStatic *operator()(const IfcStructuralLoadStatic *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadTemperature *operator()(const IfcStructuralLoadTemperature *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralMember *operator()(const IfcStructuralMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPlanarAction *operator()(const IfcStructuralPlanarAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPlanarActionVarying *operator()(const IfcStructuralPlanarActionVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPointAction *operator()(const IfcStructuralPointAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPointConnection *operator()(const IfcStructuralPointConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPointReaction *operator()(const IfcStructuralPointReaction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralProfileProperties *operator()(const IfcStructuralProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralReaction *operator()(const IfcStructuralReaction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralResultGroup *operator()(const IfcStructuralResultGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSteelProfileProperties *operator()(const IfcStructuralSteelProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceConnection *operator()(const IfcStructuralSurfaceConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceMember *operator()(const IfcStructuralSurfaceMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceMemberVarying *operator()(const IfcStructuralSurfaceMemberVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuredDimensionCallout *operator()(const IfcStructuredDimensionCallout *obj) const;
        /**
         * @param obj
         */
        virtual IfcStyleModel *operator()(const IfcStyleModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcStyledItem *operator()(const IfcStyledItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcStyledRepresentation *operator()(const IfcStyledRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcSubContractResource *operator()(const IfcSubContractResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcSubedge *operator()(const IfcSubedge *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurface *operator()(const IfcSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceCurveSweptAreaSolid *operator()(const IfcSurfaceCurveSweptAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceOfLinearExtrusion *operator()(const IfcSurfaceOfLinearExtrusion *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceOfRevolution *operator()(const IfcSurfaceOfRevolution *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyle *operator()(const IfcSurfaceStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleLighting *operator()(const IfcSurfaceStyleLighting *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleRefraction *operator()(const IfcSurfaceStyleRefraction *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleRendering *operator()(const IfcSurfaceStyleRendering *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleShading *operator()(const IfcSurfaceStyleShading *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleWithTextures *operator()(const IfcSurfaceStyleWithTextures *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceTexture *operator()(const IfcSurfaceTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcSweptAreaSolid *operator()(const IfcSweptAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcSweptDiskSolid *operator()(const IfcSweptDiskSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcSweptSurface *operator()(const IfcSweptSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcSwitchingDeviceType *operator()(const IfcSwitchingDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSymbolStyle *operator()(const IfcSymbolStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcSystem *operator()(const IfcSystem *obj) const;
        /**
         * @param obj
         */
        virtual IfcSystemFurnitureElementType *operator()(const IfcSystemFurnitureElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTShapeProfileDef *operator()(const IfcTShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcTable *operator()(const IfcTable *obj) const;
        /**
         * @param obj
         */
        virtual IfcTableRow *operator()(const IfcTableRow *obj) const;
        /**
         * @param obj
         */
        virtual IfcTankType *operator()(const IfcTankType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTask *operator()(const IfcTask *obj) const;
        /**
         * @param obj
         */
        virtual IfcTelecomAddress *operator()(const IfcTelecomAddress *obj) const;
        /**
         * @param obj
         */
        virtual IfcTendon *operator()(const IfcTendon *obj) const;
        /**
         * @param obj
         */
        virtual IfcTendonAnchor *operator()(const IfcTendonAnchor *obj) const;
        /**
         * @param obj
         */
        virtual IfcTerminatorSymbol *operator()(const IfcTerminatorSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextLiteral *operator()(const IfcTextLiteral *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextLiteralWithExtent *operator()(const IfcTextLiteralWithExtent *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyle *operator()(const IfcTextStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleFontModel *operator()(const IfcTextStyleFontModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleForDefinedFont *operator()(const IfcTextStyleForDefinedFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleTextModel *operator()(const IfcTextStyleTextModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleWithBoxCharacteristics *operator()(const IfcTextStyleWithBoxCharacteristics *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureCoordinate *operator()(const IfcTextureCoordinate *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureCoordinateGenerator *operator()(const IfcTextureCoordinateGenerator *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureMap *operator()(const IfcTextureMap *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureVertex *operator()(const IfcTextureVertex *obj) const;
        /**
         * @param obj
         */
        virtual IfcThermalMaterialProperties *operator()(const IfcThermalMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeries *operator()(const IfcTimeSeries *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesReferenceRelationship *operator()(const IfcTimeSeriesReferenceRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesSchedule *operator()(const IfcTimeSeriesSchedule *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesValue *operator()(const IfcTimeSeriesValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcTopologicalRepresentationItem *operator()(const IfcTopologicalRepresentationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcTopologyRepresentation *operator()(const IfcTopologyRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcTransformerType *operator()(const IfcTransformerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTransportElement *operator()(const IfcTransportElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcTransportElementType *operator()(const IfcTransportElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTrapeziumProfileDef *operator()(const IfcTrapeziumProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcTrimmedCurve *operator()(const IfcTrimmedCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcTubeBundleType *operator()(const IfcTubeBundleType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTwoDirectionRepeatFactor *operator()(const IfcTwoDirectionRepeatFactor *obj) const;
        /**
         * @param obj
         */
        virtual IfcTypeObject *operator()(const IfcTypeObject *obj) const;
        /**
         * @param obj
         */
        virtual IfcTypeProduct *operator()(const IfcTypeProduct *obj) const;
        /**
         * @param obj
         */
        virtual IfcUShapeProfileDef *operator()(const IfcUShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcUnitAssignment *operator()(const IfcUnitAssignment *obj) const;
        /**
         * @param obj
         */
        virtual IfcUnitaryEquipmentType *operator()(const IfcUnitaryEquipmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcValveType *operator()(const IfcValveType *obj) const;
        /**
         * @param obj
         */
        virtual IfcVector *operator()(const IfcVector *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertex *operator()(const IfcVertex *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertexBasedTextureMap *operator()(const IfcVertexBasedTextureMap *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertexLoop *operator()(const IfcVertexLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertexPoint *operator()(const IfcVertexPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcVibrationIsolatorType *operator()(const IfcVibrationIsolatorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcVirtualElement *operator()(const IfcVirtualElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcVirtualGridIntersection *operator()(const IfcVirtualGridIntersection *obj) const;
        /**
         * @param obj
         */
        virtual IfcWall *operator()(const IfcWall *obj) const;
        /**
         * @param obj
         */
        virtual IfcWallStandardCase *operator()(const IfcWallStandardCase *obj) const;
        /**
         * @param obj
         */
        virtual IfcWallType *operator()(const IfcWallType *obj) const;
        /**
         * @param obj
         */
        virtual IfcWasteTerminalType *operator()(const IfcWasteTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcWaterProperties *operator()(const IfcWaterProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindow *operator()(const IfcWindow *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindowLiningProperties *operator()(const IfcWindowLiningProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindowPanelProperties *operator()(const IfcWindowPanelProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindowStyle *operator()(const IfcWindowStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcWorkControl *operator()(const IfcWorkControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcWorkPlan *operator()(const IfcWorkPlan *obj) const;
        /**
         * @param obj
         */
        virtual IfcWorkSchedule *operator()(const IfcWorkSchedule *obj) const;
        /**
         * @param obj
         */
        virtual IfcZShapeProfileDef *operator()(const IfcZShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcZone *operator()(const IfcZone *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilStructureElement *operator()(const IfcCivilStructureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeStructureElement *operator()(const IfcBridgeStructureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridge *operator()(const IfcBridge *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgePart *operator()(const IfcBridgePart *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilElement *operator()(const IfcCivilElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeElement *operator()(const IfcBridgeElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeSegment *operator()(const IfcBridgeSegment *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeSegmentPart *operator()(const IfcBridgeSegmentPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeContactElement *operator()(const IfcBridgeContactElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgePrismaticElement *operator()(const IfcBridgePrismaticElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcAlignmentElement *operator()(const IfcAlignmentElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceElement *operator()(const IfcReferenceElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurve *operator()(const IfcReferenceCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurve3D *operator()(const IfcReferenceCurve3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurveAlignment2D *operator()(const IfcReferenceCurveAlignment2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferencePlacement *operator()(const IfcReferencePlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurvePlacement *operator()(const IfcReferenceCurvePlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurvePlacementSystem *operator()(const IfcReferenceCurvePlacementSystem *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementPart *operator()(const IfcElementPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilElementPart *operator()(const IfcCivilElementPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilSheath *operator()(const IfcCivilSheath *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilVoid *operator()(const IfcCivilVoid *obj) const;
        /**
         * @param obj
         */
        virtual IfcClothoid *operator()(const IfcClothoid *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferencedSectionedSpine *operator()(const IfcReferencedSectionedSpine *obj) const;

    };

    class ExpressDataSet;
    class Ifc2DCompositeCurve;
    class IfcActionRequest;
    class IfcActor;
    class IfcActorRole;
    class IfcActuatorType;
    class IfcAddress;
    class IfcAirTerminalBoxType;
    class IfcAirTerminalType;
    class IfcAirToAirHeatRecoveryType;
    class IfcAlarmType;
    class IfcAlignmentElement;
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
    class IfcBridge;
    class IfcBridgeContactElement;
    class IfcBridgeElement;
    class IfcBridgePart;
    class IfcBridgePrismaticElement;
    class IfcBridgeSegment;
    class IfcBridgeSegmentPart;
    class IfcBridgeStructureElement;
    class IfcBuilding;
    class IfcBuildingElement;
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
    class IfcChillerType;
    class IfcCircle;
    class IfcCircleHollowProfileDef;
    class IfcCircleProfileDef;
    class IfcCivilElement;
    class IfcCivilElementPart;
    class IfcCivilSheath;
    class IfcCivilStructureElement;
    class IfcCivilVoid;
    class IfcClassification;
    class IfcClassificationItem;
    class IfcClassificationItemRelationship;
    class IfcClassificationNotation;
    class IfcClassificationNotationFacet;
    class IfcClassificationReference;
    class IfcClosedShell;
    class IfcClothoid;
    class IfcCoilType;
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
    class IfcCsgSolid;
    class IfcCurrencyRelationship;
    class IfcCurtainWall;
    class IfcCurtainWallType;
    class IfcCurve;
    class IfcCurveBoundedPlane;
    class IfcCurveStyle;
    class IfcCurveStyleFont;
    class IfcCurveStyleFontAndScaling;
    class IfcCurveStyleFontPattern;
    class IfcDamperType;
    class IfcDateAndTime;
    class IfcDefinedSymbol;
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
    class IfcDoor;
    class IfcDoorLiningProperties;
    class IfcDoorPanelProperties;
    class IfcDoorStyle;
    class IfcDraughtingCallout;
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
    class IfcElementPart;
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
    class IfcFillAreaStyleTileSymbolWithStyle;
    class IfcFillAreaStyleTiles;
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
    class IfcGrid;
    class IfcGridAxis;
    class IfcGridPlacement;
    class IfcGroup;
    class IfcHalfSpaceSolid;
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
    class IfcLibraryInformation;
    class IfcLibraryReference;
    class IfcLightDistributionData;
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
    class IfcMeasureWithUnit;
    class IfcMechanicalConcreteMaterialProperties;
    class IfcMechanicalFastener;
    class IfcMechanicalFastenerType;
    class IfcMechanicalMaterialProperties;
    class IfcMechanicalSteelMaterialProperties;
    class IfcMember;
    class IfcMemberType;
    class IfcMetric;
    class IfcMonetaryUnit;
    class IfcMotorConnectionType;
    class IfcMove;
    class IfcNamedUnit;
    class IfcObject;
    class IfcObjectDefinition;
    class IfcObjectPlacement;
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
    class IfcReferenceCurve;
    class IfcReferenceCurve3D;
    class IfcReferenceCurveAlignment2D;
    class IfcReferenceCurvePlacement;
    class IfcReferenceCurvePlacementSystem;
    class IfcReferenceElement;
    class IfcReferencePlacement;
    class IfcReferencedSectionedSpine;
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
    class IfcShellBasedSurfaceModel;
    class IfcSimpleProperty;
    class IfcSite;
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
    class IfcSphere;
    class IfcStackTerminalType;
    class IfcStair;
    class IfcStairFlight;
    class IfcStairFlightType;
    class IfcStructuralAction;
    class IfcStructuralActivity;
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
    class IfcSurfaceStyle;
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
    class IfcTextLiteral;
    class IfcTextLiteralWithExtent;
    class IfcTextStyle;
    class IfcTextStyleFontModel;
    class IfcTextStyleForDefinedFont;
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
    class IfcTubeBundleType;
    class IfcTwoDirectionRepeatFactor;
    class IfcTypeObject;
    class IfcTypeProduct;
    class IfcUShapeProfileDef;
    class IfcUnitAssignment;
    class IfcUnitaryEquipmentType;
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
     */
    class IFC2X3_DLL_DEF ReparentCopyOp : public DeepCopyOp {
    public:
        /**
         * @param dataset
         */
        ReparentCopyOp(ExpressDataSet *dataset);
        virtual ~ReparentCopyOp();
        /**
         */
        virtual ExpressDataSet *getExpressDataSet() const;
        /**
         * @param obj
         */
        virtual Ifc2DCompositeCurve *operator()(const Ifc2DCompositeCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcActionRequest *operator()(const IfcActionRequest *obj) const;
        /**
         * @param obj
         */
        virtual IfcActor *operator()(const IfcActor *obj) const;
        /**
         * @param obj
         */
        virtual IfcActorRole *operator()(const IfcActorRole *obj) const;
        /**
         * @param obj
         */
        virtual IfcActuatorType *operator()(const IfcActuatorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAddress *operator()(const IfcAddress *obj) const;
        /**
         * @param obj
         */
        virtual IfcAirTerminalBoxType *operator()(const IfcAirTerminalBoxType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAirTerminalType *operator()(const IfcAirTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAirToAirHeatRecoveryType *operator()(const IfcAirToAirHeatRecoveryType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAlarmType *operator()(const IfcAlarmType *obj) const;
        /**
         * @param obj
         */
        virtual IfcAngularDimension *operator()(const IfcAngularDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotation *operator()(const IfcAnnotation *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationCurveOccurrence *operator()(const IfcAnnotationCurveOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationFillArea *operator()(const IfcAnnotationFillArea *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationFillAreaOccurrence *operator()(const IfcAnnotationFillAreaOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationOccurrence *operator()(const IfcAnnotationOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationSurface *operator()(const IfcAnnotationSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationSurfaceOccurrence *operator()(const IfcAnnotationSurfaceOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationSymbolOccurrence *operator()(const IfcAnnotationSymbolOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcAnnotationTextOccurrence *operator()(const IfcAnnotationTextOccurrence *obj) const;
        /**
         * @param obj
         */
        virtual IfcApplication *operator()(const IfcApplication *obj) const;
        /**
         * @param obj
         */
        virtual IfcAppliedValue *operator()(const IfcAppliedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcAppliedValueRelationship *operator()(const IfcAppliedValueRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcApproval *operator()(const IfcApproval *obj) const;
        /**
         * @param obj
         */
        virtual IfcApprovalActorRelationship *operator()(const IfcApprovalActorRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcApprovalPropertyRelationship *operator()(const IfcApprovalPropertyRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcApprovalRelationship *operator()(const IfcApprovalRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcArbitraryClosedProfileDef *operator()(const IfcArbitraryClosedProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcArbitraryOpenProfileDef *operator()(const IfcArbitraryOpenProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcArbitraryProfileDefWithVoids *operator()(const IfcArbitraryProfileDefWithVoids *obj) const;
        /**
         * @param obj
         */
        virtual IfcAsset *operator()(const IfcAsset *obj) const;
        /**
         * @param obj
         */
        virtual IfcAsymmetricIShapeProfileDef *operator()(const IfcAsymmetricIShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcAxis1Placement *operator()(const IfcAxis1Placement *obj) const;
        /**
         * @param obj
         */
        virtual IfcAxis2Placement2D *operator()(const IfcAxis2Placement2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcAxis2Placement3D *operator()(const IfcAxis2Placement3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcBSplineCurve *operator()(const IfcBSplineCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcBeam *operator()(const IfcBeam *obj) const;
        /**
         * @param obj
         */
        virtual IfcBeamType *operator()(const IfcBeamType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBezierCurve *operator()(const IfcBezierCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcBlobTexture *operator()(const IfcBlobTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcBlock *operator()(const IfcBlock *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoilerType *operator()(const IfcBoilerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBooleanClippingResult *operator()(const IfcBooleanClippingResult *obj) const;
        /**
         * @param obj
         */
        virtual IfcBooleanResult *operator()(const IfcBooleanResult *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryCondition *operator()(const IfcBoundaryCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryEdgeCondition *operator()(const IfcBoundaryEdgeCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryFaceCondition *operator()(const IfcBoundaryFaceCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryNodeCondition *operator()(const IfcBoundaryNodeCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundaryNodeConditionWarping *operator()(const IfcBoundaryNodeConditionWarping *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundedCurve *operator()(const IfcBoundedCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundedSurface *operator()(const IfcBoundedSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoundingBox *operator()(const IfcBoundingBox *obj) const;
        /**
         * @param obj
         */
        virtual IfcBoxedHalfSpace *operator()(const IfcBoxedHalfSpace *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuilding *operator()(const IfcBuilding *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElement *operator()(const IfcBuildingElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementPart *operator()(const IfcBuildingElementPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementProxy *operator()(const IfcBuildingElementProxy *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementProxyType *operator()(const IfcBuildingElementProxyType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingElementType *operator()(const IfcBuildingElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcBuildingStorey *operator()(const IfcBuildingStorey *obj) const;
        /**
         * @param obj
         */
        virtual IfcCShapeProfileDef *operator()(const IfcCShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCableCarrierFittingType *operator()(const IfcCableCarrierFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCableCarrierSegmentType *operator()(const IfcCableCarrierSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCableSegmentType *operator()(const IfcCableSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCalendarDate *operator()(const IfcCalendarDate *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianPoint *operator()(const IfcCartesianPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator *operator()(const IfcCartesianTransformationOperator *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator2D *operator()(const IfcCartesianTransformationOperator2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator2DnonUniform *operator()(const IfcCartesianTransformationOperator2DnonUniform *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator3D *operator()(const IfcCartesianTransformationOperator3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcCartesianTransformationOperator3DnonUniform *operator()(const IfcCartesianTransformationOperator3DnonUniform *obj) const;
        /**
         * @param obj
         */
        virtual IfcCenterLineProfileDef *operator()(const IfcCenterLineProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcChamferEdgeFeature *operator()(const IfcChamferEdgeFeature *obj) const;
        /**
         * @param obj
         */
        virtual IfcChillerType *operator()(const IfcChillerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCircle *operator()(const IfcCircle *obj) const;
        /**
         * @param obj
         */
        virtual IfcCircleHollowProfileDef *operator()(const IfcCircleHollowProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCircleProfileDef *operator()(const IfcCircleProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassification *operator()(const IfcClassification *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationItem *operator()(const IfcClassificationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationItemRelationship *operator()(const IfcClassificationItemRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationNotation *operator()(const IfcClassificationNotation *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationNotationFacet *operator()(const IfcClassificationNotationFacet *obj) const;
        /**
         * @param obj
         */
        virtual IfcClassificationReference *operator()(const IfcClassificationReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcClosedShell *operator()(const IfcClosedShell *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoilType *operator()(const IfcCoilType *obj) const;
        /**
         * @param obj
         */
        virtual IfcColourRgb *operator()(const IfcColourRgb *obj) const;
        /**
         * @param obj
         */
        virtual IfcColourSpecification *operator()(const IfcColourSpecification *obj) const;
        /**
         * @param obj
         */
        virtual IfcColumn *operator()(const IfcColumn *obj) const;
        /**
         * @param obj
         */
        virtual IfcColumnType *operator()(const IfcColumnType *obj) const;
        /**
         * @param obj
         */
        virtual IfcComplexProperty *operator()(const IfcComplexProperty *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompositeCurve *operator()(const IfcCompositeCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompositeCurveSegment *operator()(const IfcCompositeCurveSegment *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompositeProfileDef *operator()(const IfcCompositeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCompressorType *operator()(const IfcCompressorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCondenserType *operator()(const IfcCondenserType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCondition *operator()(const IfcCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcConditionCriterion *operator()(const IfcConditionCriterion *obj) const;
        /**
         * @param obj
         */
        virtual IfcConic *operator()(const IfcConic *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectedFaceSet *operator()(const IfcConnectedFaceSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionCurveGeometry *operator()(const IfcConnectionCurveGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionGeometry *operator()(const IfcConnectionGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionPointEccentricity *operator()(const IfcConnectionPointEccentricity *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionPointGeometry *operator()(const IfcConnectionPointGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionPortGeometry *operator()(const IfcConnectionPortGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConnectionSurfaceGeometry *operator()(const IfcConnectionSurfaceGeometry *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraint *operator()(const IfcConstraint *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraintAggregationRelationship *operator()(const IfcConstraintAggregationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraintClassificationRelationship *operator()(const IfcConstraintClassificationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstraintRelationship *operator()(const IfcConstraintRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionEquipmentResource *operator()(const IfcConstructionEquipmentResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionMaterialResource *operator()(const IfcConstructionMaterialResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionProductResource *operator()(const IfcConstructionProductResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcConstructionResource *operator()(const IfcConstructionResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcContextDependentUnit *operator()(const IfcContextDependentUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcControl *operator()(const IfcControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcControllerType *operator()(const IfcControllerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcConversionBasedUnit *operator()(const IfcConversionBasedUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcCooledBeamType *operator()(const IfcCooledBeamType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoolingTowerType *operator()(const IfcCoolingTowerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoordinatedUniversalTimeOffset *operator()(const IfcCoordinatedUniversalTimeOffset *obj) const;
        /**
         * @param obj
         */
        virtual IfcCostItem *operator()(const IfcCostItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcCostSchedule *operator()(const IfcCostSchedule *obj) const;
        /**
         * @param obj
         */
        virtual IfcCostValue *operator()(const IfcCostValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcCovering *operator()(const IfcCovering *obj) const;
        /**
         * @param obj
         */
        virtual IfcCoveringType *operator()(const IfcCoveringType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCraneRailAShapeProfileDef *operator()(const IfcCraneRailAShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCraneRailFShapeProfileDef *operator()(const IfcCraneRailFShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcCrewResource *operator()(const IfcCrewResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcCsgPrimitive3D *operator()(const IfcCsgPrimitive3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcCsgSolid *operator()(const IfcCsgSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurrencyRelationship *operator()(const IfcCurrencyRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurtainWall *operator()(const IfcCurtainWall *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurtainWallType *operator()(const IfcCurtainWallType *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurve *operator()(const IfcCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveBoundedPlane *operator()(const IfcCurveBoundedPlane *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyle *operator()(const IfcCurveStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFont *operator()(const IfcCurveStyleFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFontAndScaling *operator()(const IfcCurveStyleFontAndScaling *obj) const;
        /**
         * @param obj
         */
        virtual IfcCurveStyleFontPattern *operator()(const IfcCurveStyleFontPattern *obj) const;
        /**
         * @param obj
         */
        virtual IfcDamperType *operator()(const IfcDamperType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDateAndTime *operator()(const IfcDateAndTime *obj) const;
        /**
         * @param obj
         */
        virtual IfcDefinedSymbol *operator()(const IfcDefinedSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcDerivedProfileDef *operator()(const IfcDerivedProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcDerivedUnit *operator()(const IfcDerivedUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcDerivedUnitElement *operator()(const IfcDerivedUnitElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDiameterDimension *operator()(const IfcDiameterDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCalloutRelationship *operator()(const IfcDimensionCalloutRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCurve *operator()(const IfcDimensionCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCurveDirectedCallout *operator()(const IfcDimensionCurveDirectedCallout *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionCurveTerminator *operator()(const IfcDimensionCurveTerminator *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionPair *operator()(const IfcDimensionPair *obj) const;
        /**
         * @param obj
         */
        virtual IfcDimensionalExponents *operator()(const IfcDimensionalExponents *obj) const;
        /**
         * @param obj
         */
        virtual IfcDirection *operator()(const IfcDirection *obj) const;
        /**
         * @param obj
         */
        virtual IfcDiscreteAccessory *operator()(const IfcDiscreteAccessory *obj) const;
        /**
         * @param obj
         */
        virtual IfcDiscreteAccessoryType *operator()(const IfcDiscreteAccessoryType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionChamberElement *operator()(const IfcDistributionChamberElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionChamberElementType *operator()(const IfcDistributionChamberElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionControlElement *operator()(const IfcDistributionControlElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionControlElementType *operator()(const IfcDistributionControlElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionElement *operator()(const IfcDistributionElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionElementType *operator()(const IfcDistributionElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionFlowElement *operator()(const IfcDistributionFlowElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionFlowElementType *operator()(const IfcDistributionFlowElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDistributionPort *operator()(const IfcDistributionPort *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentElectronicFormat *operator()(const IfcDocumentElectronicFormat *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentInformation *operator()(const IfcDocumentInformation *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentInformationRelationship *operator()(const IfcDocumentInformationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcDocumentReference *operator()(const IfcDocumentReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoor *operator()(const IfcDoor *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoorLiningProperties *operator()(const IfcDoorLiningProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoorPanelProperties *operator()(const IfcDoorPanelProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcDoorStyle *operator()(const IfcDoorStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingCallout *operator()(const IfcDraughtingCallout *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingCalloutRelationship *operator()(const IfcDraughtingCalloutRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedColour *operator()(const IfcDraughtingPreDefinedColour *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedCurveFont *operator()(const IfcDraughtingPreDefinedCurveFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcDraughtingPreDefinedTextFont *operator()(const IfcDraughtingPreDefinedTextFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcDuctFittingType *operator()(const IfcDuctFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDuctSegmentType *operator()(const IfcDuctSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcDuctSilencerType *operator()(const IfcDuctSilencerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdge *operator()(const IfcEdge *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdgeCurve *operator()(const IfcEdgeCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdgeFeature *operator()(const IfcEdgeFeature *obj) const;
        /**
         * @param obj
         */
        virtual IfcEdgeLoop *operator()(const IfcEdgeLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricApplianceType *operator()(const IfcElectricApplianceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricDistributionPoint *operator()(const IfcElectricDistributionPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricFlowStorageDeviceType *operator()(const IfcElectricFlowStorageDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricGeneratorType *operator()(const IfcElectricGeneratorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricHeaterType *operator()(const IfcElectricHeaterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricMotorType *operator()(const IfcElectricMotorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricTimeControlType *operator()(const IfcElectricTimeControlType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricalBaseProperties *operator()(const IfcElectricalBaseProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricalCircuit *operator()(const IfcElectricalCircuit *obj) const;
        /**
         * @param obj
         */
        virtual IfcElectricalElement *operator()(const IfcElectricalElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcElement *operator()(const IfcElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementAssembly *operator()(const IfcElementAssembly *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementComponent *operator()(const IfcElementComponent *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementComponentType *operator()(const IfcElementComponentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementQuantity *operator()(const IfcElementQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementType *operator()(const IfcElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementarySurface *operator()(const IfcElementarySurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcEllipse *operator()(const IfcEllipse *obj) const;
        /**
         * @param obj
         */
        virtual IfcEllipseProfileDef *operator()(const IfcEllipseProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnergyConversionDevice *operator()(const IfcEnergyConversionDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnergyConversionDeviceType *operator()(const IfcEnergyConversionDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnergyProperties *operator()(const IfcEnergyProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcEnvironmentalImpactValue *operator()(const IfcEnvironmentalImpactValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcEquipmentElement *operator()(const IfcEquipmentElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcEquipmentStandard *operator()(const IfcEquipmentStandard *obj) const;
        /**
         * @param obj
         */
        virtual IfcEvaporativeCoolerType *operator()(const IfcEvaporativeCoolerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcEvaporatorType *operator()(const IfcEvaporatorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcExtendedMaterialProperties *operator()(const IfcExtendedMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternalReference *operator()(const IfcExternalReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedHatchStyle *operator()(const IfcExternallyDefinedHatchStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedSurfaceStyle *operator()(const IfcExternallyDefinedSurfaceStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedSymbol *operator()(const IfcExternallyDefinedSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcExternallyDefinedTextFont *operator()(const IfcExternallyDefinedTextFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcExtrudedAreaSolid *operator()(const IfcExtrudedAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcFace *operator()(const IfcFace *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceBasedSurfaceModel *operator()(const IfcFaceBasedSurfaceModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceBound *operator()(const IfcFaceBound *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceOuterBound *operator()(const IfcFaceOuterBound *obj) const;
        /**
         * @param obj
         */
        virtual IfcFaceSurface *operator()(const IfcFaceSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcFacetedBrep *operator()(const IfcFacetedBrep *obj) const;
        /**
         * @param obj
         */
        virtual IfcFacetedBrepWithVoids *operator()(const IfcFacetedBrepWithVoids *obj) const;
        /**
         * @param obj
         */
        virtual IfcFailureConnectionCondition *operator()(const IfcFailureConnectionCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcFanType *operator()(const IfcFanType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFastener *operator()(const IfcFastener *obj) const;
        /**
         * @param obj
         */
        virtual IfcFastenerType *operator()(const IfcFastenerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFeatureElement *operator()(const IfcFeatureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcFeatureElementAddition *operator()(const IfcFeatureElementAddition *obj) const;
        /**
         * @param obj
         */
        virtual IfcFeatureElementSubtraction *operator()(const IfcFeatureElementSubtraction *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyle *operator()(const IfcFillAreaStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleHatching *operator()(const IfcFillAreaStyleHatching *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleTileSymbolWithStyle *operator()(const IfcFillAreaStyleTileSymbolWithStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcFillAreaStyleTiles *operator()(const IfcFillAreaStyleTiles *obj) const;
        /**
         * @param obj
         */
        virtual IfcFilterType *operator()(const IfcFilterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFireSuppressionTerminalType *operator()(const IfcFireSuppressionTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowController *operator()(const IfcFlowController *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowControllerType *operator()(const IfcFlowControllerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowFitting *operator()(const IfcFlowFitting *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowFittingType *operator()(const IfcFlowFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowInstrumentType *operator()(const IfcFlowInstrumentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowMeterType *operator()(const IfcFlowMeterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowMovingDevice *operator()(const IfcFlowMovingDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowMovingDeviceType *operator()(const IfcFlowMovingDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowSegment *operator()(const IfcFlowSegment *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowSegmentType *operator()(const IfcFlowSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowStorageDevice *operator()(const IfcFlowStorageDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowStorageDeviceType *operator()(const IfcFlowStorageDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTerminal *operator()(const IfcFlowTerminal *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTerminalType *operator()(const IfcFlowTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTreatmentDevice *operator()(const IfcFlowTreatmentDevice *obj) const;
        /**
         * @param obj
         */
        virtual IfcFlowTreatmentDeviceType *operator()(const IfcFlowTreatmentDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFluidFlowProperties *operator()(const IfcFluidFlowProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcFooting *operator()(const IfcFooting *obj) const;
        /**
         * @param obj
         */
        virtual IfcFuelProperties *operator()(const IfcFuelProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnishingElement *operator()(const IfcFurnishingElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnishingElementType *operator()(const IfcFurnishingElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnitureStandard *operator()(const IfcFurnitureStandard *obj) const;
        /**
         * @param obj
         */
        virtual IfcFurnitureType *operator()(const IfcFurnitureType *obj) const;
        /**
         * @param obj
         */
        virtual IfcGasTerminalType *operator()(const IfcGasTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeneralMaterialProperties *operator()(const IfcGeneralMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeneralProfileProperties *operator()(const IfcGeneralProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricCurveSet *operator()(const IfcGeometricCurveSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationContext *operator()(const IfcGeometricRepresentationContext *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationItem *operator()(const IfcGeometricRepresentationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricRepresentationSubContext *operator()(const IfcGeometricRepresentationSubContext *obj) const;
        /**
         * @param obj
         */
        virtual IfcGeometricSet *operator()(const IfcGeometricSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcGrid *operator()(const IfcGrid *obj) const;
        /**
         * @param obj
         */
        virtual IfcGridAxis *operator()(const IfcGridAxis *obj) const;
        /**
         * @param obj
         */
        virtual IfcGridPlacement *operator()(const IfcGridPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcGroup *operator()(const IfcGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcHalfSpaceSolid *operator()(const IfcHalfSpaceSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcHeatExchangerType *operator()(const IfcHeatExchangerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcHumidifierType *operator()(const IfcHumidifierType *obj) const;
        /**
         * @param obj
         */
        virtual IfcHygroscopicMaterialProperties *operator()(const IfcHygroscopicMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcIShapeProfileDef *operator()(const IfcIShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcImageTexture *operator()(const IfcImageTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcInventory *operator()(const IfcInventory *obj) const;
        /**
         * @param obj
         */
        virtual IfcIrregularTimeSeries *operator()(const IfcIrregularTimeSeries *obj) const;
        /**
         * @param obj
         */
        virtual IfcIrregularTimeSeriesValue *operator()(const IfcIrregularTimeSeriesValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcJunctionBoxType *operator()(const IfcJunctionBoxType *obj) const;
        /**
         * @param obj
         */
        virtual IfcLShapeProfileDef *operator()(const IfcLShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcLaborResource *operator()(const IfcLaborResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcLampType *operator()(const IfcLampType *obj) const;
        /**
         * @param obj
         */
        virtual IfcLibraryInformation *operator()(const IfcLibraryInformation *obj) const;
        /**
         * @param obj
         */
        virtual IfcLibraryReference *operator()(const IfcLibraryReference *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightDistributionData *operator()(const IfcLightDistributionData *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightFixtureType *operator()(const IfcLightFixtureType *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightIntensityDistribution *operator()(const IfcLightIntensityDistribution *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSource *operator()(const IfcLightSource *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceAmbient *operator()(const IfcLightSourceAmbient *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceDirectional *operator()(const IfcLightSourceDirectional *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceGoniometric *operator()(const IfcLightSourceGoniometric *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourcePositional *operator()(const IfcLightSourcePositional *obj) const;
        /**
         * @param obj
         */
        virtual IfcLightSourceSpot *operator()(const IfcLightSourceSpot *obj) const;
        /**
         * @param obj
         */
        virtual IfcLine *operator()(const IfcLine *obj) const;
        /**
         * @param obj
         */
        virtual IfcLinearDimension *operator()(const IfcLinearDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcLocalPlacement *operator()(const IfcLocalPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcLocalTime *operator()(const IfcLocalTime *obj) const;
        /**
         * @param obj
         */
        virtual IfcLoop *operator()(const IfcLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcManifoldSolidBrep *operator()(const IfcManifoldSolidBrep *obj) const;
        /**
         * @param obj
         */
        virtual IfcMappedItem *operator()(const IfcMappedItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterial *operator()(const IfcMaterial *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialClassificationRelationship *operator()(const IfcMaterialClassificationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialDefinitionRepresentation *operator()(const IfcMaterialDefinitionRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialLayer *operator()(const IfcMaterialLayer *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialLayerSet *operator()(const IfcMaterialLayerSet *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialLayerSetUsage *operator()(const IfcMaterialLayerSetUsage *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialList *operator()(const IfcMaterialList *obj) const;
        /**
         * @param obj
         */
        virtual IfcMaterialProperties *operator()(const IfcMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMeasureWithUnit *operator()(const IfcMeasureWithUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalConcreteMaterialProperties *operator()(const IfcMechanicalConcreteMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalFastener *operator()(const IfcMechanicalFastener *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalFastenerType *operator()(const IfcMechanicalFastenerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalMaterialProperties *operator()(const IfcMechanicalMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMechanicalSteelMaterialProperties *operator()(const IfcMechanicalSteelMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcMember *operator()(const IfcMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcMemberType *operator()(const IfcMemberType *obj) const;
        /**
         * @param obj
         */
        virtual IfcMetric *operator()(const IfcMetric *obj) const;
        /**
         * @param obj
         */
        virtual IfcMonetaryUnit *operator()(const IfcMonetaryUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcMotorConnectionType *operator()(const IfcMotorConnectionType *obj) const;
        /**
         * @param obj
         */
        virtual IfcMove *operator()(const IfcMove *obj) const;
        /**
         * @param obj
         */
        virtual IfcNamedUnit *operator()(const IfcNamedUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcObject *operator()(const IfcObject *obj) const;
        /**
         * @param obj
         */
        virtual IfcObjectDefinition *operator()(const IfcObjectDefinition *obj) const;
        /**
         * @param obj
         */
        virtual IfcObjectPlacement *operator()(const IfcObjectPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcObjective *operator()(const IfcObjective *obj) const;
        /**
         * @param obj
         */
        virtual IfcOccupant *operator()(const IfcOccupant *obj) const;
        /**
         * @param obj
         */
        virtual IfcOffsetCurve2D *operator()(const IfcOffsetCurve2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcOffsetCurve3D *operator()(const IfcOffsetCurve3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcOneDirectionRepeatFactor *operator()(const IfcOneDirectionRepeatFactor *obj) const;
        /**
         * @param obj
         */
        virtual IfcOpenShell *operator()(const IfcOpenShell *obj) const;
        /**
         * @param obj
         */
        virtual IfcOpeningElement *operator()(const IfcOpeningElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcOpticalMaterialProperties *operator()(const IfcOpticalMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrderAction *operator()(const IfcOrderAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrganization *operator()(const IfcOrganization *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrganizationRelationship *operator()(const IfcOrganizationRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcOrientedEdge *operator()(const IfcOrientedEdge *obj) const;
        /**
         * @param obj
         */
        virtual IfcOutletType *operator()(const IfcOutletType *obj) const;
        /**
         * @param obj
         */
        virtual IfcOwnerHistory *operator()(const IfcOwnerHistory *obj) const;
        /**
         * @param obj
         */
        virtual IfcParameterizedProfileDef *operator()(const IfcParameterizedProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcPath *operator()(const IfcPath *obj) const;
        /**
         * @param obj
         */
        virtual IfcPerformanceHistory *operator()(const IfcPerformanceHistory *obj) const;
        /**
         * @param obj
         */
        virtual IfcPermeableCoveringProperties *operator()(const IfcPermeableCoveringProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcPermit *operator()(const IfcPermit *obj) const;
        /**
         * @param obj
         */
        virtual IfcPerson *operator()(const IfcPerson *obj) const;
        /**
         * @param obj
         */
        virtual IfcPersonAndOrganization *operator()(const IfcPersonAndOrganization *obj) const;
        /**
         * @param obj
         */
        virtual IfcPhysicalComplexQuantity *operator()(const IfcPhysicalComplexQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcPhysicalQuantity *operator()(const IfcPhysicalQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcPhysicalSimpleQuantity *operator()(const IfcPhysicalSimpleQuantity *obj) const;
        /**
         * @param obj
         */
        virtual IfcPile *operator()(const IfcPile *obj) const;
        /**
         * @param obj
         */
        virtual IfcPipeFittingType *operator()(const IfcPipeFittingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcPipeSegmentType *operator()(const IfcPipeSegmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcPixelTexture *operator()(const IfcPixelTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlacement *operator()(const IfcPlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlanarBox *operator()(const IfcPlanarBox *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlanarExtent *operator()(const IfcPlanarExtent *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlane *operator()(const IfcPlane *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlate *operator()(const IfcPlate *obj) const;
        /**
         * @param obj
         */
        virtual IfcPlateType *operator()(const IfcPlateType *obj) const;
        /**
         * @param obj
         */
        virtual IfcPoint *operator()(const IfcPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcPointOnCurve *operator()(const IfcPointOnCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcPointOnSurface *operator()(const IfcPointOnSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcPolyLoop *operator()(const IfcPolyLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcPolygonalBoundedHalfSpace *operator()(const IfcPolygonalBoundedHalfSpace *obj) const;
        /**
         * @param obj
         */
        virtual IfcPolyline *operator()(const IfcPolyline *obj) const;
        /**
         * @param obj
         */
        virtual IfcPort *operator()(const IfcPort *obj) const;
        /**
         * @param obj
         */
        virtual IfcPostalAddress *operator()(const IfcPostalAddress *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedColour *operator()(const IfcPreDefinedColour *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedCurveFont *operator()(const IfcPreDefinedCurveFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedDimensionSymbol *operator()(const IfcPreDefinedDimensionSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedItem *operator()(const IfcPreDefinedItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedPointMarkerSymbol *operator()(const IfcPreDefinedPointMarkerSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedSymbol *operator()(const IfcPreDefinedSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedTerminatorSymbol *operator()(const IfcPreDefinedTerminatorSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcPreDefinedTextFont *operator()(const IfcPreDefinedTextFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationLayerAssignment *operator()(const IfcPresentationLayerAssignment *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationLayerWithStyle *operator()(const IfcPresentationLayerWithStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationStyle *operator()(const IfcPresentationStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcPresentationStyleAssignment *operator()(const IfcPresentationStyleAssignment *obj) const;
        /**
         * @param obj
         */
        virtual IfcProcedure *operator()(const IfcProcedure *obj) const;
        /**
         * @param obj
         */
        virtual IfcProcess *operator()(const IfcProcess *obj) const;
        /**
         * @param obj
         */
        virtual IfcProduct *operator()(const IfcProduct *obj) const;
        /**
         * @param obj
         */
        virtual IfcProductDefinitionShape *operator()(const IfcProductDefinitionShape *obj) const;
        /**
         * @param obj
         */
        virtual IfcProductRepresentation *operator()(const IfcProductRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcProductsOfCombustionProperties *operator()(const IfcProductsOfCombustionProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcProfileDef *operator()(const IfcProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcProfileProperties *operator()(const IfcProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcProject *operator()(const IfcProject *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectOrder *operator()(const IfcProjectOrder *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectOrderRecord *operator()(const IfcProjectOrderRecord *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectionCurve *operator()(const IfcProjectionCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcProjectionElement *operator()(const IfcProjectionElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcProperty *operator()(const IfcProperty *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyBoundedValue *operator()(const IfcPropertyBoundedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyConstraintRelationship *operator()(const IfcPropertyConstraintRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyDefinition *operator()(const IfcPropertyDefinition *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyDependencyRelationship *operator()(const IfcPropertyDependencyRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyEnumeratedValue *operator()(const IfcPropertyEnumeratedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyEnumeration *operator()(const IfcPropertyEnumeration *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyListValue *operator()(const IfcPropertyListValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyReferenceValue *operator()(const IfcPropertyReferenceValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertySet *operator()(const IfcPropertySet *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertySetDefinition *operator()(const IfcPropertySetDefinition *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertySingleValue *operator()(const IfcPropertySingleValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcPropertyTableValue *operator()(const IfcPropertyTableValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcProtectiveDeviceType *operator()(const IfcProtectiveDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcProxy *operator()(const IfcProxy *obj) const;
        /**
         * @param obj
         */
        virtual IfcPumpType *operator()(const IfcPumpType *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityArea *operator()(const IfcQuantityArea *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityCount *operator()(const IfcQuantityCount *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityLength *operator()(const IfcQuantityLength *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityTime *operator()(const IfcQuantityTime *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityVolume *operator()(const IfcQuantityVolume *obj) const;
        /**
         * @param obj
         */
        virtual IfcQuantityWeight *operator()(const IfcQuantityWeight *obj) const;
        /**
         * @param obj
         */
        virtual IfcRadiusDimension *operator()(const IfcRadiusDimension *obj) const;
        /**
         * @param obj
         */
        virtual IfcRailing *operator()(const IfcRailing *obj) const;
        /**
         * @param obj
         */
        virtual IfcRailingType *operator()(const IfcRailingType *obj) const;
        /**
         * @param obj
         */
        virtual IfcRamp *operator()(const IfcRamp *obj) const;
        /**
         * @param obj
         */
        virtual IfcRampFlight *operator()(const IfcRampFlight *obj) const;
        /**
         * @param obj
         */
        virtual IfcRampFlightType *operator()(const IfcRampFlightType *obj) const;
        /**
         * @param obj
         */
        virtual IfcRationalBezierCurve *operator()(const IfcRationalBezierCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangleHollowProfileDef *operator()(const IfcRectangleHollowProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangleProfileDef *operator()(const IfcRectangleProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangularPyramid *operator()(const IfcRectangularPyramid *obj) const;
        /**
         * @param obj
         */
        virtual IfcRectangularTrimmedSurface *operator()(const IfcRectangularTrimmedSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferencesValueDocument *operator()(const IfcReferencesValueDocument *obj) const;
        /**
         * @param obj
         */
        virtual IfcRegularTimeSeries *operator()(const IfcRegularTimeSeries *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcementBarProperties *operator()(const IfcReinforcementBarProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcementDefinitionProperties *operator()(const IfcReinforcementDefinitionProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcingBar *operator()(const IfcReinforcingBar *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcingElement *operator()(const IfcReinforcingElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReinforcingMesh *operator()(const IfcReinforcingMesh *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAggregates *operator()(const IfcRelAggregates *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssigns *operator()(const IfcRelAssigns *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsTasks *operator()(const IfcRelAssignsTasks *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToActor *operator()(const IfcRelAssignsToActor *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToControl *operator()(const IfcRelAssignsToControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToGroup *operator()(const IfcRelAssignsToGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProcess *operator()(const IfcRelAssignsToProcess *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProduct *operator()(const IfcRelAssignsToProduct *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToProjectOrder *operator()(const IfcRelAssignsToProjectOrder *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssignsToResource *operator()(const IfcRelAssignsToResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociates *operator()(const IfcRelAssociates *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesAppliedValue *operator()(const IfcRelAssociatesAppliedValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesApproval *operator()(const IfcRelAssociatesApproval *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesClassification *operator()(const IfcRelAssociatesClassification *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesConstraint *operator()(const IfcRelAssociatesConstraint *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesDocument *operator()(const IfcRelAssociatesDocument *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesLibrary *operator()(const IfcRelAssociatesLibrary *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesMaterial *operator()(const IfcRelAssociatesMaterial *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelAssociatesProfileProperties *operator()(const IfcRelAssociatesProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnects *operator()(const IfcRelConnects *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsElements *operator()(const IfcRelConnectsElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPathElements *operator()(const IfcRelConnectsPathElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPortToElement *operator()(const IfcRelConnectsPortToElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsPorts *operator()(const IfcRelConnectsPorts *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralActivity *operator()(const IfcRelConnectsStructuralActivity *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralElement *operator()(const IfcRelConnectsStructuralElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsStructuralMember *operator()(const IfcRelConnectsStructuralMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsWithEccentricity *operator()(const IfcRelConnectsWithEccentricity *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelConnectsWithRealizingElements *operator()(const IfcRelConnectsWithRealizingElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelContainedInSpatialStructure *operator()(const IfcRelContainedInSpatialStructure *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelCoversBldgElements *operator()(const IfcRelCoversBldgElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelCoversSpaces *operator()(const IfcRelCoversSpaces *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDecomposes *operator()(const IfcRelDecomposes *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDefines *operator()(const IfcRelDefines *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDefinesByProperties *operator()(const IfcRelDefinesByProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelDefinesByType *operator()(const IfcRelDefinesByType *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelFillsElement *operator()(const IfcRelFillsElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelFlowControlElements *operator()(const IfcRelFlowControlElements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelInteractionRequirements *operator()(const IfcRelInteractionRequirements *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelNests *operator()(const IfcRelNests *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelOccupiesSpaces *operator()(const IfcRelOccupiesSpaces *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelOverridesProperties *operator()(const IfcRelOverridesProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelProjectsElement *operator()(const IfcRelProjectsElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelReferencedInSpatialStructure *operator()(const IfcRelReferencedInSpatialStructure *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelSchedulesCostItems *operator()(const IfcRelSchedulesCostItems *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelSequence *operator()(const IfcRelSequence *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelServicesBuildings *operator()(const IfcRelServicesBuildings *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelSpaceBoundary *operator()(const IfcRelSpaceBoundary *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelVoidsElement *operator()(const IfcRelVoidsElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelationship *operator()(const IfcRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcRelaxation *operator()(const IfcRelaxation *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentation *operator()(const IfcRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentationContext *operator()(const IfcRepresentationContext *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentationItem *operator()(const IfcRepresentationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcRepresentationMap *operator()(const IfcRepresentationMap *obj) const;
        /**
         * @param obj
         */
        virtual IfcResource *operator()(const IfcResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcRevolvedAreaSolid *operator()(const IfcRevolvedAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcRibPlateProfileProperties *operator()(const IfcRibPlateProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcRightCircularCone *operator()(const IfcRightCircularCone *obj) const;
        /**
         * @param obj
         */
        virtual IfcRightCircularCylinder *operator()(const IfcRightCircularCylinder *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoof *operator()(const IfcRoof *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoot *operator()(const IfcRoot *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoundedEdgeFeature *operator()(const IfcRoundedEdgeFeature *obj) const;
        /**
         * @param obj
         */
        virtual IfcRoundedRectangleProfileDef *operator()(const IfcRoundedRectangleProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcSIUnit *operator()(const IfcSIUnit *obj) const;
        /**
         * @param obj
         */
        virtual IfcSanitaryTerminalType *operator()(const IfcSanitaryTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcScheduleTimeControl *operator()(const IfcScheduleTimeControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcSectionProperties *operator()(const IfcSectionProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSectionReinforcementProperties *operator()(const IfcSectionReinforcementProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSectionedSpine *operator()(const IfcSectionedSpine *obj) const;
        /**
         * @param obj
         */
        virtual IfcSensorType *operator()(const IfcSensorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcServiceLife *operator()(const IfcServiceLife *obj) const;
        /**
         * @param obj
         */
        virtual IfcServiceLifeFactor *operator()(const IfcServiceLifeFactor *obj) const;
        /**
         * @param obj
         */
        virtual IfcShapeAspect *operator()(const IfcShapeAspect *obj) const;
        /**
         * @param obj
         */
        virtual IfcShapeModel *operator()(const IfcShapeModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcShapeRepresentation *operator()(const IfcShapeRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcShellBasedSurfaceModel *operator()(const IfcShellBasedSurfaceModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcSimpleProperty *operator()(const IfcSimpleProperty *obj) const;
        /**
         * @param obj
         */
        virtual IfcSite *operator()(const IfcSite *obj) const;
        /**
         * @param obj
         */
        virtual IfcSlab *operator()(const IfcSlab *obj) const;
        /**
         * @param obj
         */
        virtual IfcSlabType *operator()(const IfcSlabType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSlippageConnectionCondition *operator()(const IfcSlippageConnectionCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcSolidModel *operator()(const IfcSolidModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcSoundProperties *operator()(const IfcSoundProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSoundValue *operator()(const IfcSoundValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpace *operator()(const IfcSpace *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceHeaterType *operator()(const IfcSpaceHeaterType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceProgram *operator()(const IfcSpaceProgram *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceThermalLoadProperties *operator()(const IfcSpaceThermalLoadProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpaceType *operator()(const IfcSpaceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpatialStructureElement *operator()(const IfcSpatialStructureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcSpatialStructureElementType *operator()(const IfcSpatialStructureElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSphere *operator()(const IfcSphere *obj) const;
        /**
         * @param obj
         */
        virtual IfcStackTerminalType *operator()(const IfcStackTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcStair *operator()(const IfcStair *obj) const;
        /**
         * @param obj
         */
        virtual IfcStairFlight *operator()(const IfcStairFlight *obj) const;
        /**
         * @param obj
         */
        virtual IfcStairFlightType *operator()(const IfcStairFlightType *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralAction *operator()(const IfcStructuralAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralActivity *operator()(const IfcStructuralActivity *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralAnalysisModel *operator()(const IfcStructuralAnalysisModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralConnection *operator()(const IfcStructuralConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralConnectionCondition *operator()(const IfcStructuralConnectionCondition *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveConnection *operator()(const IfcStructuralCurveConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveMember *operator()(const IfcStructuralCurveMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralCurveMemberVarying *operator()(const IfcStructuralCurveMemberVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralItem *operator()(const IfcStructuralItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLinearAction *operator()(const IfcStructuralLinearAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLinearActionVarying *operator()(const IfcStructuralLinearActionVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoad *operator()(const IfcStructuralLoad *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadGroup *operator()(const IfcStructuralLoadGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadLinearForce *operator()(const IfcStructuralLoadLinearForce *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadPlanarForce *operator()(const IfcStructuralLoadPlanarForce *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleDisplacement *operator()(const IfcStructuralLoadSingleDisplacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleDisplacementDistortion *operator()(const IfcStructuralLoadSingleDisplacementDistortion *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleForce *operator()(const IfcStructuralLoadSingleForce *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadSingleForceWarping *operator()(const IfcStructuralLoadSingleForceWarping *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadStatic *operator()(const IfcStructuralLoadStatic *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralLoadTemperature *operator()(const IfcStructuralLoadTemperature *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralMember *operator()(const IfcStructuralMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPlanarAction *operator()(const IfcStructuralPlanarAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPlanarActionVarying *operator()(const IfcStructuralPlanarActionVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPointAction *operator()(const IfcStructuralPointAction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPointConnection *operator()(const IfcStructuralPointConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralPointReaction *operator()(const IfcStructuralPointReaction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralProfileProperties *operator()(const IfcStructuralProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralReaction *operator()(const IfcStructuralReaction *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralResultGroup *operator()(const IfcStructuralResultGroup *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSteelProfileProperties *operator()(const IfcStructuralSteelProfileProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceConnection *operator()(const IfcStructuralSurfaceConnection *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceMember *operator()(const IfcStructuralSurfaceMember *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuralSurfaceMemberVarying *operator()(const IfcStructuralSurfaceMemberVarying *obj) const;
        /**
         * @param obj
         */
        virtual IfcStructuredDimensionCallout *operator()(const IfcStructuredDimensionCallout *obj) const;
        /**
         * @param obj
         */
        virtual IfcStyleModel *operator()(const IfcStyleModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcStyledItem *operator()(const IfcStyledItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcStyledRepresentation *operator()(const IfcStyledRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcSubContractResource *operator()(const IfcSubContractResource *obj) const;
        /**
         * @param obj
         */
        virtual IfcSubedge *operator()(const IfcSubedge *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurface *operator()(const IfcSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceCurveSweptAreaSolid *operator()(const IfcSurfaceCurveSweptAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceOfLinearExtrusion *operator()(const IfcSurfaceOfLinearExtrusion *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceOfRevolution *operator()(const IfcSurfaceOfRevolution *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyle *operator()(const IfcSurfaceStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleLighting *operator()(const IfcSurfaceStyleLighting *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleRefraction *operator()(const IfcSurfaceStyleRefraction *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleRendering *operator()(const IfcSurfaceStyleRendering *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleShading *operator()(const IfcSurfaceStyleShading *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceStyleWithTextures *operator()(const IfcSurfaceStyleWithTextures *obj) const;
        /**
         * @param obj
         */
        virtual IfcSurfaceTexture *operator()(const IfcSurfaceTexture *obj) const;
        /**
         * @param obj
         */
        virtual IfcSweptAreaSolid *operator()(const IfcSweptAreaSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcSweptDiskSolid *operator()(const IfcSweptDiskSolid *obj) const;
        /**
         * @param obj
         */
        virtual IfcSweptSurface *operator()(const IfcSweptSurface *obj) const;
        /**
         * @param obj
         */
        virtual IfcSwitchingDeviceType *operator()(const IfcSwitchingDeviceType *obj) const;
        /**
         * @param obj
         */
        virtual IfcSymbolStyle *operator()(const IfcSymbolStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcSystem *operator()(const IfcSystem *obj) const;
        /**
         * @param obj
         */
        virtual IfcSystemFurnitureElementType *operator()(const IfcSystemFurnitureElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTShapeProfileDef *operator()(const IfcTShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcTable *operator()(const IfcTable *obj) const;
        /**
         * @param obj
         */
        virtual IfcTableRow *operator()(const IfcTableRow *obj) const;
        /**
         * @param obj
         */
        virtual IfcTankType *operator()(const IfcTankType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTask *operator()(const IfcTask *obj) const;
        /**
         * @param obj
         */
        virtual IfcTelecomAddress *operator()(const IfcTelecomAddress *obj) const;
        /**
         * @param obj
         */
        virtual IfcTendon *operator()(const IfcTendon *obj) const;
        /**
         * @param obj
         */
        virtual IfcTendonAnchor *operator()(const IfcTendonAnchor *obj) const;
        /**
         * @param obj
         */
        virtual IfcTerminatorSymbol *operator()(const IfcTerminatorSymbol *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextLiteral *operator()(const IfcTextLiteral *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextLiteralWithExtent *operator()(const IfcTextLiteralWithExtent *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyle *operator()(const IfcTextStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleFontModel *operator()(const IfcTextStyleFontModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleForDefinedFont *operator()(const IfcTextStyleForDefinedFont *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleTextModel *operator()(const IfcTextStyleTextModel *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextStyleWithBoxCharacteristics *operator()(const IfcTextStyleWithBoxCharacteristics *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureCoordinate *operator()(const IfcTextureCoordinate *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureCoordinateGenerator *operator()(const IfcTextureCoordinateGenerator *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureMap *operator()(const IfcTextureMap *obj) const;
        /**
         * @param obj
         */
        virtual IfcTextureVertex *operator()(const IfcTextureVertex *obj) const;
        /**
         * @param obj
         */
        virtual IfcThermalMaterialProperties *operator()(const IfcThermalMaterialProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeries *operator()(const IfcTimeSeries *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesReferenceRelationship *operator()(const IfcTimeSeriesReferenceRelationship *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesSchedule *operator()(const IfcTimeSeriesSchedule *obj) const;
        /**
         * @param obj
         */
        virtual IfcTimeSeriesValue *operator()(const IfcTimeSeriesValue *obj) const;
        /**
         * @param obj
         */
        virtual IfcTopologicalRepresentationItem *operator()(const IfcTopologicalRepresentationItem *obj) const;
        /**
         * @param obj
         */
        virtual IfcTopologyRepresentation *operator()(const IfcTopologyRepresentation *obj) const;
        /**
         * @param obj
         */
        virtual IfcTransformerType *operator()(const IfcTransformerType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTransportElement *operator()(const IfcTransportElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcTransportElementType *operator()(const IfcTransportElementType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTrapeziumProfileDef *operator()(const IfcTrapeziumProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcTrimmedCurve *operator()(const IfcTrimmedCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcTubeBundleType *operator()(const IfcTubeBundleType *obj) const;
        /**
         * @param obj
         */
        virtual IfcTwoDirectionRepeatFactor *operator()(const IfcTwoDirectionRepeatFactor *obj) const;
        /**
         * @param obj
         */
        virtual IfcTypeObject *operator()(const IfcTypeObject *obj) const;
        /**
         * @param obj
         */
        virtual IfcTypeProduct *operator()(const IfcTypeProduct *obj) const;
        /**
         * @param obj
         */
        virtual IfcUShapeProfileDef *operator()(const IfcUShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcUnitAssignment *operator()(const IfcUnitAssignment *obj) const;
        /**
         * @param obj
         */
        virtual IfcUnitaryEquipmentType *operator()(const IfcUnitaryEquipmentType *obj) const;
        /**
         * @param obj
         */
        virtual IfcValveType *operator()(const IfcValveType *obj) const;
        /**
         * @param obj
         */
        virtual IfcVector *operator()(const IfcVector *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertex *operator()(const IfcVertex *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertexBasedTextureMap *operator()(const IfcVertexBasedTextureMap *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertexLoop *operator()(const IfcVertexLoop *obj) const;
        /**
         * @param obj
         */
        virtual IfcVertexPoint *operator()(const IfcVertexPoint *obj) const;
        /**
         * @param obj
         */
        virtual IfcVibrationIsolatorType *operator()(const IfcVibrationIsolatorType *obj) const;
        /**
         * @param obj
         */
        virtual IfcVirtualElement *operator()(const IfcVirtualElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcVirtualGridIntersection *operator()(const IfcVirtualGridIntersection *obj) const;
        /**
         * @param obj
         */
        virtual IfcWall *operator()(const IfcWall *obj) const;
        /**
         * @param obj
         */
        virtual IfcWallStandardCase *operator()(const IfcWallStandardCase *obj) const;
        /**
         * @param obj
         */
        virtual IfcWallType *operator()(const IfcWallType *obj) const;
        /**
         * @param obj
         */
        virtual IfcWasteTerminalType *operator()(const IfcWasteTerminalType *obj) const;
        /**
         * @param obj
         */
        virtual IfcWaterProperties *operator()(const IfcWaterProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindow *operator()(const IfcWindow *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindowLiningProperties *operator()(const IfcWindowLiningProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindowPanelProperties *operator()(const IfcWindowPanelProperties *obj) const;
        /**
         * @param obj
         */
        virtual IfcWindowStyle *operator()(const IfcWindowStyle *obj) const;
        /**
         * @param obj
         */
        virtual IfcWorkControl *operator()(const IfcWorkControl *obj) const;
        /**
         * @param obj
         */
        virtual IfcWorkPlan *operator()(const IfcWorkPlan *obj) const;
        /**
         * @param obj
         */
        virtual IfcWorkSchedule *operator()(const IfcWorkSchedule *obj) const;
        /**
         * @param obj
         */
        virtual IfcZShapeProfileDef *operator()(const IfcZShapeProfileDef *obj) const;
        /**
         * @param obj
         */
        virtual IfcZone *operator()(const IfcZone *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilStructureElement *operator()(const IfcCivilStructureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeStructureElement *operator()(const IfcBridgeStructureElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridge *operator()(const IfcBridge *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgePart *operator()(const IfcBridgePart *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilElement *operator()(const IfcCivilElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeElement *operator()(const IfcBridgeElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeSegment *operator()(const IfcBridgeSegment *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeSegmentPart *operator()(const IfcBridgeSegmentPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgeContactElement *operator()(const IfcBridgeContactElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcBridgePrismaticElement *operator()(const IfcBridgePrismaticElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcAlignmentElement *operator()(const IfcAlignmentElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceElement *operator()(const IfcReferenceElement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurve *operator()(const IfcReferenceCurve *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurve3D *operator()(const IfcReferenceCurve3D *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurveAlignment2D *operator()(const IfcReferenceCurveAlignment2D *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferencePlacement *operator()(const IfcReferencePlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurvePlacement *operator()(const IfcReferenceCurvePlacement *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferenceCurvePlacementSystem *operator()(const IfcReferenceCurvePlacementSystem *obj) const;
        /**
         * @param obj
         */
        virtual IfcElementPart *operator()(const IfcElementPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilElementPart *operator()(const IfcCivilElementPart *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilSheath *operator()(const IfcCivilSheath *obj) const;
        /**
         * @param obj
         */
        virtual IfcCivilVoid *operator()(const IfcCivilVoid *obj) const;
        /**
         * @param obj
         */
        virtual IfcClothoid *operator()(const IfcClothoid *obj) const;
        /**
         * @param obj
         */
        virtual IfcReferencedSectionedSpine *operator()(const IfcReferencedSectionedSpine *obj) const;

    protected:
        /**
         */
        ExpressDataSet *_dataset;

    };

}

#endif // IFC2X3_COPYOP_H
