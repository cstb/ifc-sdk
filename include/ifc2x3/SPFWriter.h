/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

#ifndef IFC2X3_SPFWRITER_H
#define IFC2X3_SPFWRITER_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <string>
#include <Step/BaseSPFWriter.h>

namespace ifc2x3 {

    class ExpressDataSet;
    class Ifc2DCompositeCurve;
    class IfcActionRequest;
    class IfcActor;
    class IfcActorRole;
    class IfcActorSelect;
    class IfcActuatorType;
    class IfcAirTerminalBoxType;
    class IfcAirTerminalType;
    class IfcAirToAirHeatRecoveryType;
    class IfcAlarmType;
    class IfcAngularDimension;
    class IfcAnnotation;
    class IfcAnnotationCurveOccurrence;
    class IfcAnnotationFillArea;
    class IfcAnnotationFillAreaOccurrence;
    class IfcAnnotationSurface;
    class IfcAnnotationSurfaceOccurrence;
    class IfcAnnotationSymbolOccurrence;
    class IfcAnnotationTextOccurrence;
    class IfcApplication;
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
    class IfcBeam;
    class IfcBeamType;
    class IfcBezierCurve;
    class IfcBlobTexture;
    class IfcBlock;
    class IfcBoilerType;
    class IfcBooleanClippingResult;
    class IfcBooleanOperand;
    class IfcBooleanResult;
    class IfcBoundaryEdgeCondition;
    class IfcBoundaryFaceCondition;
    class IfcBoundaryNodeCondition;
    class IfcBoundaryNodeConditionWarping;
    class IfcBoundedSurface;
    class IfcBoundingBox;
    class IfcBoxedHalfSpace;
    class IfcBuilding;
    class IfcBuildingElementPart;
    class IfcBuildingElementProxy;
    class IfcBuildingElementProxyType;
    class IfcBuildingStorey;
    class IfcCShapeProfileDef;
    class IfcCableCarrierFittingType;
    class IfcCableCarrierSegmentType;
    class IfcCableSegmentType;
    class IfcCalendarDate;
    class IfcCartesianPoint;
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
    class IfcConnectedFaceSet;
    class IfcConnectionCurveGeometry;
    class IfcConnectionPointEccentricity;
    class IfcConnectionPointGeometry;
    class IfcConnectionPortGeometry;
    class IfcConnectionSurfaceGeometry;
    class IfcConstraintAggregationRelationship;
    class IfcConstraintClassificationRelationship;
    class IfcConstraintRelationship;
    class IfcConstructionEquipmentResource;
    class IfcConstructionMaterialResource;
    class IfcConstructionProductResource;
    class IfcContextDependentUnit;
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
    class IfcCsgSelect;
    class IfcCsgSolid;
    class IfcCurrencyRelationship;
    class IfcCurtainWall;
    class IfcCurtainWallType;
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
    class IfcDistributionElement;
    class IfcDistributionElementType;
    class IfcDistributionFlowElement;
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
    class IfcElementAssembly;
    class IfcElementQuantity;
    class IfcEllipse;
    class IfcEllipseProfileDef;
    class IfcEnergyConversionDevice;
    class IfcEnergyProperties;
    class IfcEnvironmentalImpactValue;
    class IfcEquipmentElement;
    class IfcEquipmentStandard;
    class IfcEvaporativeCoolerType;
    class IfcEvaporatorType;
    class IfcExtendedMaterialProperties;
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
    class IfcFillAreaStyle;
    class IfcFillAreaStyleHatching;
    class IfcFillAreaStyleTileShapeSelect;
    class IfcFillAreaStyleTileSymbolWithStyle;
    class IfcFillAreaStyleTiles;
    class IfcFillStyleSelect;
    class IfcFilterType;
    class IfcFireSuppressionTerminalType;
    class IfcFlowController;
    class IfcFlowFitting;
    class IfcFlowInstrumentType;
    class IfcFlowMeterType;
    class IfcFlowMovingDevice;
    class IfcFlowSegment;
    class IfcFlowStorageDevice;
    class IfcFlowTerminal;
    class IfcFlowTreatmentDevice;
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
    class IfcMappedItem;
    class IfcMaterial;
    class IfcMaterialClassificationRelationship;
    class IfcMaterialDefinitionRepresentation;
    class IfcMaterialLayer;
    class IfcMaterialLayerSet;
    class IfcMaterialLayerSetUsage;
    class IfcMaterialList;
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
    class IfcPath;
    class IfcPerformanceHistory;
    class IfcPermeableCoveringProperties;
    class IfcPermit;
    class IfcPerson;
    class IfcPersonAndOrganization;
    class IfcPhysicalComplexQuantity;
    class IfcPile;
    class IfcPipeFittingType;
    class IfcPipeSegmentType;
    class IfcPixelTexture;
    class IfcPlanarBox;
    class IfcPlanarExtent;
    class IfcPlane;
    class IfcPlate;
    class IfcPlateType;
    class IfcPointOnCurve;
    class IfcPointOnSurface;
    class IfcPointOrVertexPoint;
    class IfcPolyLoop;
    class IfcPolygonalBoundedHalfSpace;
    class IfcPolyline;
    class IfcPostalAddress;
    class IfcPreDefinedDimensionSymbol;
    class IfcPreDefinedPointMarkerSymbol;
    class IfcPreDefinedTerminatorSymbol;
    class IfcPresentationLayerAssignment;
    class IfcPresentationLayerWithStyle;
    class IfcPresentationStyleAssignment;
    class IfcPresentationStyleSelect;
    class IfcProcedure;
    class IfcProductDefinitionShape;
    class IfcProductRepresentation;
    class IfcProductsOfCombustionProperties;
    class IfcProject;
    class IfcProjectOrder;
    class IfcProjectOrderRecord;
    class IfcProjectionCurve;
    class IfcProjectionElement;
    class IfcPropertyBoundedValue;
    class IfcPropertyConstraintRelationship;
    class IfcPropertyDependencyRelationship;
    class IfcPropertyEnumeratedValue;
    class IfcPropertyEnumeration;
    class IfcPropertyListValue;
    class IfcPropertyReferenceValue;
    class IfcPropertySet;
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
    class IfcReinforcingMesh;
    class IfcRelAggregates;
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
    class IfcRelaxation;
    class IfcRepresentation;
    class IfcRepresentationContext;
    class IfcRepresentationMap;
    class IfcRevolvedAreaSolid;
    class IfcRibPlateProfileProperties;
    class IfcRightCircularCone;
    class IfcRightCircularCylinder;
    class IfcRoof;
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
    class IfcShapeRepresentation;
    class IfcShell;
    class IfcShellBasedSurfaceModel;
    class IfcSimpleValue;
    class IfcSite;
    class IfcSizeSelect;
    class IfcSlab;
    class IfcSlabType;
    class IfcSlippageConnectionCondition;
    class IfcSoundProperties;
    class IfcSoundValue;
    class IfcSpace;
    class IfcSpaceHeaterType;
    class IfcSpaceProgram;
    class IfcSpaceThermalLoadProperties;
    class IfcSpaceType;
    class IfcSpecularHighlightSelect;
    class IfcSphere;
    class IfcStackTerminalType;
    class IfcStair;
    class IfcStairFlight;
    class IfcStairFlightType;
    class IfcStructuralActivityAssignmentSelect;
    class IfcStructuralAnalysisModel;
    class IfcStructuralCurveConnection;
    class IfcStructuralCurveMember;
    class IfcStructuralCurveMemberVarying;
    class IfcStructuralLinearAction;
    class IfcStructuralLinearActionVarying;
    class IfcStructuralLoadGroup;
    class IfcStructuralLoadLinearForce;
    class IfcStructuralLoadPlanarForce;
    class IfcStructuralLoadSingleDisplacement;
    class IfcStructuralLoadSingleDisplacementDistortion;
    class IfcStructuralLoadSingleForce;
    class IfcStructuralLoadSingleForceWarping;
    class IfcStructuralLoadTemperature;
    class IfcStructuralPlanarAction;
    class IfcStructuralPlanarActionVarying;
    class IfcStructuralPointAction;
    class IfcStructuralPointConnection;
    class IfcStructuralPointReaction;
    class IfcStructuralProfileProperties;
    class IfcStructuralResultGroup;
    class IfcStructuralSteelProfileProperties;
    class IfcStructuralSurfaceConnection;
    class IfcStructuralSurfaceMember;
    class IfcStructuralSurfaceMemberVarying;
    class IfcStructuredDimensionCallout;
    class IfcStyledItem;
    class IfcStyledRepresentation;
    class IfcSubContractResource;
    class IfcSubedge;
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
    class IfcSweptDiskSolid;
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
    class IfcTextureCoordinateGenerator;
    class IfcTextureMap;
    class IfcTextureVertex;
    class IfcThermalMaterialProperties;
    class IfcTimeSeriesReferenceRelationship;
    class IfcTimeSeriesSchedule;
    class IfcTimeSeriesValue;
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
    class IfcWorkPlan;
    class IfcWorkSchedule;
    class IfcZShapeProfileDef;
    class IfcZone;

    /**
     */
    class IFC2X3_DLL_DEF SPFWriter : public Step::BaseSPFWriter {
    public:
        /**
         * @param expressDataSet
         */
        SPFWriter(ExpressDataSet *expressDataSet);
        virtual ~SPFWriter();
        /**
         * @param filepath
         */
        virtual bool writeSPF(const std::string &filepath);
        /**
         * @param ptr
         */
        void writeIfc2DCompositeCurve(Ifc2DCompositeCurve *ptr);
        /**
         * @param ptr
         */
        void writeIfcActionRequest(IfcActionRequest *ptr);
        /**
         * @param ptr
         */
        void writeIfcActor(IfcActor *ptr);
        /**
         * @param selectData
         */
        void writeIfcActorSelect(IfcActorSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcActorRole(IfcActorRole *ptr);
        /**
         * @param enumData
         */
        void writeIfcRoleEnum(IfcRoleEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcActuatorType(IfcActuatorType *ptr);
        /**
         * @param enumData
         */
        void writeIfcActuatorTypeEnum(IfcActuatorTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcAirTerminalBoxType(IfcAirTerminalBoxType *ptr);
        /**
         * @param enumData
         */
        void writeIfcAirTerminalBoxTypeEnum(IfcAirTerminalBoxTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcAirTerminalType(IfcAirTerminalType *ptr);
        /**
         * @param enumData
         */
        void writeIfcAirTerminalTypeEnum(IfcAirTerminalTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *ptr);
        /**
         * @param enumData
         */
        void writeIfcAirToAirHeatRecoveryTypeEnum(IfcAirToAirHeatRecoveryTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcAlarmType(IfcAlarmType *ptr);
        /**
         * @param enumData
         */
        void writeIfcAlarmTypeEnum(IfcAlarmTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcAngularDimension(IfcAngularDimension *ptr);
        /**
         * @param selectData
         */
        void writeIfcDraughtingCalloutElement(IfcDraughtingCalloutElement *selectData);
        /**
         * @param ptr
         */
        void writeIfcAnnotation(IfcAnnotation *ptr);
        /**
         * @param ptr
         */
        void writeIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *ptr);
        /**
         * @param ptr
         */
        void writeIfcAnnotationFillArea(IfcAnnotationFillArea *ptr);
        /**
         * @param ptr
         */
        void writeIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *ptr);
        /**
         * @param enumData
         */
        void writeIfcGlobalOrLocalEnum(IfcGlobalOrLocalEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcAnnotationSurface(IfcAnnotationSurface *ptr);
        /**
         * @param ptr
         */
        void writeIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *ptr);
        /**
         * @param ptr
         */
        void writeIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *ptr);
        /**
         * @param ptr
         */
        void writeIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *ptr);
        /**
         * @param ptr
         */
        void writeIfcApplication(IfcApplication *ptr);
        /**
         * @param ptr
         */
        void writeIfcAppliedValueRelationship(IfcAppliedValueRelationship *ptr);
        /**
         * @param enumData
         */
        void writeIfcArithmeticOperatorEnum(IfcArithmeticOperatorEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcApproval(IfcApproval *ptr);
        /**
         * @param selectData
         */
        void writeIfcDateTimeSelect(IfcDateTimeSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcApprovalActorRelationship(IfcApprovalActorRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcApprovalRelationship(IfcApprovalRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *ptr);
        /**
         * @param enumData
         */
        void writeIfcProfileTypeEnum(IfcProfileTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *ptr);
        /**
         * @param ptr
         */
        void writeIfcAsset(IfcAsset *ptr);
        /**
         * @param ptr
         */
        void writeIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcAxis1Placement(IfcAxis1Placement *ptr);
        /**
         * @param ptr
         */
        void writeIfcAxis2Placement2D(IfcAxis2Placement2D *ptr);
        /**
         * @param ptr
         */
        void writeIfcAxis2Placement3D(IfcAxis2Placement3D *ptr);
        /**
         * @param ptr
         */
        void writeIfcBeam(IfcBeam *ptr);
        /**
         * @param ptr
         */
        void writeIfcBeamType(IfcBeamType *ptr);
        /**
         * @param enumData
         */
        void writeIfcBeamTypeEnum(IfcBeamTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcBezierCurve(IfcBezierCurve *ptr);
        /**
         * @param enumData
         */
        void writeIfcBSplineCurveForm(IfcBSplineCurveForm enumData);
        /**
         * @param ptr
         */
        void writeIfcBlobTexture(IfcBlobTexture *ptr);
        /**
         * @param enumData
         */
        void writeIfcSurfaceTextureEnum(IfcSurfaceTextureEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcBlock(IfcBlock *ptr);
        /**
         * @param ptr
         */
        void writeIfcBoilerType(IfcBoilerType *ptr);
        /**
         * @param enumData
         */
        void writeIfcBoilerTypeEnum(IfcBoilerTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcBooleanClippingResult(IfcBooleanClippingResult *ptr);
        /**
         * @param enumData
         */
        void writeIfcBooleanOperator(IfcBooleanOperator enumData);
        /**
         * @param selectData
         */
        void writeIfcBooleanOperand(IfcBooleanOperand *selectData);
        /**
         * @param ptr
         */
        void writeIfcBooleanResult(IfcBooleanResult *ptr);
        /**
         * @param ptr
         */
        void writeIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *ptr);
        /**
         * @param ptr
         */
        void writeIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *ptr);
        /**
         * @param ptr
         */
        void writeIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *ptr);
        /**
         * @param ptr
         */
        void writeIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *ptr);
        /**
         * @param ptr
         */
        void writeIfcBoundedSurface(IfcBoundedSurface *ptr);
        /**
         * @param ptr
         */
        void writeIfcBoundingBox(IfcBoundingBox *ptr);
        /**
         * @param ptr
         */
        void writeIfcBoxedHalfSpace(IfcBoxedHalfSpace *ptr);
        /**
         * @param ptr
         */
        void writeIfcBuilding(IfcBuilding *ptr);
        /**
         * @param enumData
         */
        void writeIfcElementCompositionEnum(IfcElementCompositionEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcBuildingElementPart(IfcBuildingElementPart *ptr);
        /**
         * @param ptr
         */
        void writeIfcBuildingElementProxy(IfcBuildingElementProxy *ptr);
        /**
         * @param ptr
         */
        void writeIfcBuildingElementProxyType(IfcBuildingElementProxyType *ptr);
        /**
         * @param enumData
         */
        void writeIfcBuildingElementProxyTypeEnum(IfcBuildingElementProxyTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcBuildingStorey(IfcBuildingStorey *ptr);
        /**
         * @param ptr
         */
        void writeIfcCShapeProfileDef(IfcCShapeProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcCableCarrierFittingType(IfcCableCarrierFittingType *ptr);
        /**
         * @param enumData
         */
        void writeIfcCableCarrierFittingTypeEnum(IfcCableCarrierFittingTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *ptr);
        /**
         * @param enumData
         */
        void writeIfcCableCarrierSegmentTypeEnum(IfcCableCarrierSegmentTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcCableSegmentType(IfcCableSegmentType *ptr);
        /**
         * @param enumData
         */
        void writeIfcCableSegmentTypeEnum(IfcCableSegmentTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcCalendarDate(IfcCalendarDate *ptr);
        /**
         * @param ptr
         */
        void writeIfcCartesianPoint(IfcCartesianPoint *ptr);
        /**
         * @param ptr
         */
        void writeIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *ptr);
        /**
         * @param ptr
         */
        void writeIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *ptr);
        /**
         * @param ptr
         */
        void writeIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *ptr);
        /**
         * @param ptr
         */
        void writeIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *ptr);
        /**
         * @param ptr
         */
        void writeIfcCenterLineProfileDef(IfcCenterLineProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcChamferEdgeFeature(IfcChamferEdgeFeature *ptr);
        /**
         * @param ptr
         */
        void writeIfcChillerType(IfcChillerType *ptr);
        /**
         * @param enumData
         */
        void writeIfcChillerTypeEnum(IfcChillerTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcCircle(IfcCircle *ptr);
        /**
         * @param selectData
         */
        void writeIfcAxis2Placement(IfcAxis2Placement *selectData);
        /**
         * @param ptr
         */
        void writeIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcCircleProfileDef(IfcCircleProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcClassification(IfcClassification *ptr);
        /**
         * @param ptr
         */
        void writeIfcClassificationItem(IfcClassificationItem *ptr);
        /**
         * @param ptr
         */
        void writeIfcClassificationItemRelationship(IfcClassificationItemRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcClassificationNotation(IfcClassificationNotation *ptr);
        /**
         * @param ptr
         */
        void writeIfcClassificationNotationFacet(IfcClassificationNotationFacet *ptr);
        /**
         * @param ptr
         */
        void writeIfcClassificationReference(IfcClassificationReference *ptr);
        /**
         * @param ptr
         */
        void writeIfcClosedShell(IfcClosedShell *ptr);
        /**
         * @param ptr
         */
        void writeIfcCoilType(IfcCoilType *ptr);
        /**
         * @param enumData
         */
        void writeIfcCoilTypeEnum(IfcCoilTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcColourRgb(IfcColourRgb *ptr);
        /**
         * @param ptr
         */
        void writeIfcColumn(IfcColumn *ptr);
        /**
         * @param ptr
         */
        void writeIfcColumnType(IfcColumnType *ptr);
        /**
         * @param enumData
         */
        void writeIfcColumnTypeEnum(IfcColumnTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcComplexProperty(IfcComplexProperty *ptr);
        /**
         * @param ptr
         */
        void writeIfcCompositeCurve(IfcCompositeCurve *ptr);
        /**
         * @param ptr
         */
        void writeIfcCompositeCurveSegment(IfcCompositeCurveSegment *ptr);
        /**
         * @param enumData
         */
        void writeIfcTransitionCode(IfcTransitionCode enumData);
        /**
         * @param ptr
         */
        void writeIfcCompositeProfileDef(IfcCompositeProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcCompressorType(IfcCompressorType *ptr);
        /**
         * @param enumData
         */
        void writeIfcCompressorTypeEnum(IfcCompressorTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcCondenserType(IfcCondenserType *ptr);
        /**
         * @param enumData
         */
        void writeIfcCondenserTypeEnum(IfcCondenserTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcCondition(IfcCondition *ptr);
        /**
         * @param ptr
         */
        void writeIfcConditionCriterion(IfcConditionCriterion *ptr);
        /**
         * @param selectData
         */
        void writeIfcConditionCriterionSelect(IfcConditionCriterionSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcConnectedFaceSet(IfcConnectedFaceSet *ptr);
        /**
         * @param ptr
         */
        void writeIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *ptr);
        /**
         * @param selectData
         */
        void writeIfcCurveOrEdgeCurve(IfcCurveOrEdgeCurve *selectData);
        /**
         * @param ptr
         */
        void writeIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *ptr);
        /**
         * @param selectData
         */
        void writeIfcPointOrVertexPoint(IfcPointOrVertexPoint *selectData);
        /**
         * @param ptr
         */
        void writeIfcConnectionPointGeometry(IfcConnectionPointGeometry *ptr);
        /**
         * @param ptr
         */
        void writeIfcConnectionPortGeometry(IfcConnectionPortGeometry *ptr);
        /**
         * @param ptr
         */
        void writeIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *ptr);
        /**
         * @param selectData
         */
        void writeIfcSurfaceOrFaceSurface(IfcSurfaceOrFaceSurface *selectData);
        /**
         * @param ptr
         */
        void writeIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *ptr);
        /**
         * @param enumData
         */
        void writeIfcLogicalOperatorEnum(IfcLogicalOperatorEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *ptr);
        /**
         * @param selectData
         */
        void writeIfcClassificationNotationSelect(IfcClassificationNotationSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcConstraintRelationship(IfcConstraintRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *ptr);
        /**
         * @param enumData
         */
        void writeIfcResourceConsumptionEnum(IfcResourceConsumptionEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcConstructionMaterialResource(IfcConstructionMaterialResource *ptr);
        /**
         * @param ptr
         */
        void writeIfcConstructionProductResource(IfcConstructionProductResource *ptr);
        /**
         * @param ptr
         */
        void writeIfcContextDependentUnit(IfcContextDependentUnit *ptr);
        /**
         * @param enumData
         */
        void writeIfcUnitEnum(IfcUnitEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcControllerType(IfcControllerType *ptr);
        /**
         * @param enumData
         */
        void writeIfcControllerTypeEnum(IfcControllerTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcConversionBasedUnit(IfcConversionBasedUnit *ptr);
        /**
         * @param ptr
         */
        void writeIfcCooledBeamType(IfcCooledBeamType *ptr);
        /**
         * @param enumData
         */
        void writeIfcCooledBeamTypeEnum(IfcCooledBeamTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcCoolingTowerType(IfcCoolingTowerType *ptr);
        /**
         * @param enumData
         */
        void writeIfcCoolingTowerTypeEnum(IfcCoolingTowerTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *ptr);
        /**
         * @param enumData
         */
        void writeIfcAheadOrBehind(IfcAheadOrBehind enumData);
        /**
         * @param ptr
         */
        void writeIfcCostItem(IfcCostItem *ptr);
        /**
         * @param ptr
         */
        void writeIfcCostSchedule(IfcCostSchedule *ptr);
        /**
         * @param enumData
         */
        void writeIfcCostScheduleTypeEnum(IfcCostScheduleTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcCostValue(IfcCostValue *ptr);
        /**
         * @param selectData
         */
        void writeIfcAppliedValueSelect(IfcAppliedValueSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcCovering(IfcCovering *ptr);
        /**
         * @param enumData
         */
        void writeIfcCoveringTypeEnum(IfcCoveringTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcCoveringType(IfcCoveringType *ptr);
        /**
         * @param ptr
         */
        void writeIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcCrewResource(IfcCrewResource *ptr);
        /**
         * @param ptr
         */
        void writeIfcCsgSolid(IfcCsgSolid *ptr);
        /**
         * @param selectData
         */
        void writeIfcCsgSelect(IfcCsgSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcCurrencyRelationship(IfcCurrencyRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcCurtainWall(IfcCurtainWall *ptr);
        /**
         * @param ptr
         */
        void writeIfcCurtainWallType(IfcCurtainWallType *ptr);
        /**
         * @param enumData
         */
        void writeIfcCurtainWallTypeEnum(IfcCurtainWallTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcCurveBoundedPlane(IfcCurveBoundedPlane *ptr);
        /**
         * @param ptr
         */
        void writeIfcCurveStyle(IfcCurveStyle *ptr);
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
         * @param ptr
         */
        void writeIfcCurveStyleFont(IfcCurveStyleFont *ptr);
        /**
         * @param ptr
         */
        void writeIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *ptr);
        /**
         * @param selectData
         */
        void writeIfcCurveStyleFontSelect(IfcCurveStyleFontSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *ptr);
        /**
         * @param ptr
         */
        void writeIfcDamperType(IfcDamperType *ptr);
        /**
         * @param enumData
         */
        void writeIfcDamperTypeEnum(IfcDamperTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcDateAndTime(IfcDateAndTime *ptr);
        /**
         * @param ptr
         */
        void writeIfcDefinedSymbol(IfcDefinedSymbol *ptr);
        /**
         * @param selectData
         */
        void writeIfcDefinedSymbolSelect(IfcDefinedSymbolSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcDerivedProfileDef(IfcDerivedProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcDerivedUnit(IfcDerivedUnit *ptr);
        /**
         * @param enumData
         */
        void writeIfcDerivedUnitEnum(IfcDerivedUnitEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcDerivedUnitElement(IfcDerivedUnitElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcDiameterDimension(IfcDiameterDimension *ptr);
        /**
         * @param ptr
         */
        void writeIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcDimensionCurve(IfcDimensionCurve *ptr);
        /**
         * @param ptr
         */
        void writeIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *ptr);
        /**
         * @param ptr
         */
        void writeIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *ptr);
        /**
         * @param enumData
         */
        void writeIfcDimensionExtentUsage(IfcDimensionExtentUsage enumData);
        /**
         * @param ptr
         */
        void writeIfcDimensionPair(IfcDimensionPair *ptr);
        /**
         * @param ptr
         */
        void writeIfcDimensionalExponents(IfcDimensionalExponents *ptr);
        /**
         * @param ptr
         */
        void writeIfcDirection(IfcDirection *ptr);
        /**
         * @param ptr
         */
        void writeIfcDiscreteAccessory(IfcDiscreteAccessory *ptr);
        /**
         * @param ptr
         */
        void writeIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *ptr);
        /**
         * @param ptr
         */
        void writeIfcDistributionChamberElement(IfcDistributionChamberElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcDistributionChamberElementType(IfcDistributionChamberElementType *ptr);
        /**
         * @param enumData
         */
        void writeIfcDistributionChamberElementTypeEnum(IfcDistributionChamberElementTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcDistributionControlElement(IfcDistributionControlElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcDistributionElement(IfcDistributionElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcDistributionElementType(IfcDistributionElementType *ptr);
        /**
         * @param ptr
         */
        void writeIfcDistributionFlowElement(IfcDistributionFlowElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcDistributionPort(IfcDistributionPort *ptr);
        /**
         * @param enumData
         */
        void writeIfcFlowDirectionEnum(IfcFlowDirectionEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *ptr);
        /**
         * @param ptr
         */
        void writeIfcDocumentInformation(IfcDocumentInformation *ptr);
        /**
         * @param enumData
         */
        void writeIfcDocumentConfidentialityEnum(IfcDocumentConfidentialityEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDocumentStatusEnum(IfcDocumentStatusEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcDocumentReference(IfcDocumentReference *ptr);
        /**
         * @param ptr
         */
        void writeIfcDoor(IfcDoor *ptr);
        /**
         * @param ptr
         */
        void writeIfcDoorLiningProperties(IfcDoorLiningProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcDoorPanelProperties(IfcDoorPanelProperties *ptr);
        /**
         * @param enumData
         */
        void writeIfcDoorPanelOperationEnum(IfcDoorPanelOperationEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDoorPanelPositionEnum(IfcDoorPanelPositionEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcDoorStyle(IfcDoorStyle *ptr);
        /**
         * @param enumData
         */
        void writeIfcDoorStyleOperationEnum(IfcDoorStyleOperationEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDoorStyleConstructionEnum(IfcDoorStyleConstructionEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcDraughtingCallout(IfcDraughtingCallout *ptr);
        /**
         * @param ptr
         */
        void writeIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *ptr);
        /**
         * @param ptr
         */
        void writeIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *ptr);
        /**
         * @param ptr
         */
        void writeIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *ptr);
        /**
         * @param ptr
         */
        void writeIfcDuctFittingType(IfcDuctFittingType *ptr);
        /**
         * @param enumData
         */
        void writeIfcDuctFittingTypeEnum(IfcDuctFittingTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcDuctSegmentType(IfcDuctSegmentType *ptr);
        /**
         * @param enumData
         */
        void writeIfcDuctSegmentTypeEnum(IfcDuctSegmentTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcDuctSilencerType(IfcDuctSilencerType *ptr);
        /**
         * @param enumData
         */
        void writeIfcDuctSilencerTypeEnum(IfcDuctSilencerTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcEdge(IfcEdge *ptr);
        /**
         * @param ptr
         */
        void writeIfcEdgeCurve(IfcEdgeCurve *ptr);
        /**
         * @param ptr
         */
        void writeIfcEdgeLoop(IfcEdgeLoop *ptr);
        /**
         * @param ptr
         */
        void writeIfcElectricApplianceType(IfcElectricApplianceType *ptr);
        /**
         * @param enumData
         */
        void writeIfcElectricApplianceTypeEnum(IfcElectricApplianceTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcElectricDistributionPoint(IfcElectricDistributionPoint *ptr);
        /**
         * @param enumData
         */
        void writeIfcElectricDistributionPointFunctionEnum(IfcElectricDistributionPointFunctionEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *ptr);
        /**
         * @param enumData
         */
        void writeIfcElectricFlowStorageDeviceTypeEnum(IfcElectricFlowStorageDeviceTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcElectricGeneratorType(IfcElectricGeneratorType *ptr);
        /**
         * @param enumData
         */
        void writeIfcElectricGeneratorTypeEnum(IfcElectricGeneratorTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcElectricHeaterType(IfcElectricHeaterType *ptr);
        /**
         * @param enumData
         */
        void writeIfcElectricHeaterTypeEnum(IfcElectricHeaterTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcElectricMotorType(IfcElectricMotorType *ptr);
        /**
         * @param enumData
         */
        void writeIfcElectricMotorTypeEnum(IfcElectricMotorTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcElectricTimeControlType(IfcElectricTimeControlType *ptr);
        /**
         * @param enumData
         */
        void writeIfcElectricTimeControlTypeEnum(IfcElectricTimeControlTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcElectricalBaseProperties(IfcElectricalBaseProperties *ptr);
        /**
         * @param enumData
         */
        void writeIfcEnergySequenceEnum(IfcEnergySequenceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElectricCurrentEnum(IfcElectricCurrentEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcElectricalCircuit(IfcElectricalCircuit *ptr);
        /**
         * @param ptr
         */
        void writeIfcElectricalElement(IfcElectricalElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcElementAssembly(IfcElementAssembly *ptr);
        /**
         * @param enumData
         */
        void writeIfcAssemblyPlaceEnum(IfcAssemblyPlaceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElementAssemblyTypeEnum(IfcElementAssemblyTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcElementQuantity(IfcElementQuantity *ptr);
        /**
         * @param ptr
         */
        void writeIfcEllipse(IfcEllipse *ptr);
        /**
         * @param ptr
         */
        void writeIfcEllipseProfileDef(IfcEllipseProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcEnergyConversionDevice(IfcEnergyConversionDevice *ptr);
        /**
         * @param ptr
         */
        void writeIfcEnergyProperties(IfcEnergyProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *ptr);
        /**
         * @param enumData
         */
        void writeIfcEnvironmentalImpactCategoryEnum(IfcEnvironmentalImpactCategoryEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcEquipmentElement(IfcEquipmentElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcEquipmentStandard(IfcEquipmentStandard *ptr);
        /**
         * @param ptr
         */
        void writeIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *ptr);
        /**
         * @param enumData
         */
        void writeIfcEvaporativeCoolerTypeEnum(IfcEvaporativeCoolerTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcEvaporatorType(IfcEvaporatorType *ptr);
        /**
         * @param enumData
         */
        void writeIfcEvaporatorTypeEnum(IfcEvaporatorTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *ptr);
        /**
         * @param ptr
         */
        void writeIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *ptr);
        /**
         * @param ptr
         */
        void writeIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *ptr);
        /**
         * @param ptr
         */
        void writeIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *ptr);
        /**
         * @param ptr
         */
        void writeIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *ptr);
        /**
         * @param ptr
         */
        void writeIfcFace(IfcFace *ptr);
        /**
         * @param ptr
         */
        void writeIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *ptr);
        /**
         * @param ptr
         */
        void writeIfcFaceBound(IfcFaceBound *ptr);
        /**
         * @param ptr
         */
        void writeIfcFaceOuterBound(IfcFaceOuterBound *ptr);
        /**
         * @param ptr
         */
        void writeIfcFaceSurface(IfcFaceSurface *ptr);
        /**
         * @param ptr
         */
        void writeIfcFacetedBrep(IfcFacetedBrep *ptr);
        /**
         * @param ptr
         */
        void writeIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *ptr);
        /**
         * @param ptr
         */
        void writeIfcFailureConnectionCondition(IfcFailureConnectionCondition *ptr);
        /**
         * @param ptr
         */
        void writeIfcFanType(IfcFanType *ptr);
        /**
         * @param enumData
         */
        void writeIfcFanTypeEnum(IfcFanTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcFastener(IfcFastener *ptr);
        /**
         * @param ptr
         */
        void writeIfcFastenerType(IfcFastenerType *ptr);
        /**
         * @param ptr
         */
        void writeIfcFillAreaStyle(IfcFillAreaStyle *ptr);
        /**
         * @param selectData
         */
        void writeIfcFillStyleSelect(IfcFillStyleSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *ptr);
        /**
         * @param selectData
         */
        void writeIfcHatchLineDistanceSelect(IfcHatchLineDistanceSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *ptr);
        /**
         * @param ptr
         */
        void writeIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *ptr);
        /**
         * @param selectData
         */
        void writeIfcFillAreaStyleTileShapeSelect(IfcFillAreaStyleTileShapeSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcFilterType(IfcFilterType *ptr);
        /**
         * @param enumData
         */
        void writeIfcFilterTypeEnum(IfcFilterTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *ptr);
        /**
         * @param enumData
         */
        void writeIfcFireSuppressionTerminalTypeEnum(IfcFireSuppressionTerminalTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcFlowController(IfcFlowController *ptr);
        /**
         * @param ptr
         */
        void writeIfcFlowFitting(IfcFlowFitting *ptr);
        /**
         * @param ptr
         */
        void writeIfcFlowInstrumentType(IfcFlowInstrumentType *ptr);
        /**
         * @param enumData
         */
        void writeIfcFlowInstrumentTypeEnum(IfcFlowInstrumentTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcFlowMeterType(IfcFlowMeterType *ptr);
        /**
         * @param enumData
         */
        void writeIfcFlowMeterTypeEnum(IfcFlowMeterTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcFlowMovingDevice(IfcFlowMovingDevice *ptr);
        /**
         * @param ptr
         */
        void writeIfcFlowSegment(IfcFlowSegment *ptr);
        /**
         * @param ptr
         */
        void writeIfcFlowStorageDevice(IfcFlowStorageDevice *ptr);
        /**
         * @param ptr
         */
        void writeIfcFlowTerminal(IfcFlowTerminal *ptr);
        /**
         * @param ptr
         */
        void writeIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *ptr);
        /**
         * @param ptr
         */
        void writeIfcFluidFlowProperties(IfcFluidFlowProperties *ptr);
        /**
         * @param enumData
         */
        void writeIfcPropertySourceEnum(IfcPropertySourceEnum enumData);
        /**
         * @param selectData
         */
        void writeIfcDerivedMeasureValue(IfcDerivedMeasureValue *selectData);
        /**
         * @param ptr
         */
        void writeIfcFooting(IfcFooting *ptr);
        /**
         * @param enumData
         */
        void writeIfcFootingTypeEnum(IfcFootingTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcFuelProperties(IfcFuelProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcFurnishingElement(IfcFurnishingElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcFurnishingElementType(IfcFurnishingElementType *ptr);
        /**
         * @param ptr
         */
        void writeIfcFurnitureStandard(IfcFurnitureStandard *ptr);
        /**
         * @param ptr
         */
        void writeIfcFurnitureType(IfcFurnitureType *ptr);
        /**
         * @param ptr
         */
        void writeIfcGasTerminalType(IfcGasTerminalType *ptr);
        /**
         * @param enumData
         */
        void writeIfcGasTerminalTypeEnum(IfcGasTerminalTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcGeneralProfileProperties(IfcGeneralProfileProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcGeometricCurveSet(IfcGeometricCurveSet *ptr);
        /**
         * @param selectData
         */
        void writeIfcGeometricSetSelect(IfcGeometricSetSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *ptr);
        /**
         * @param ptr
         */
        void writeIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *ptr);
        /**
         * @param enumData
         */
        void writeIfcGeometricProjectionEnum(IfcGeometricProjectionEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcGeometricSet(IfcGeometricSet *ptr);
        /**
         * @param ptr
         */
        void writeIfcGrid(IfcGrid *ptr);
        /**
         * @param ptr
         */
        void writeIfcGridAxis(IfcGridAxis *ptr);
        /**
         * @param ptr
         */
        void writeIfcGridPlacement(IfcGridPlacement *ptr);
        /**
         * @param ptr
         */
        void writeIfcGroup(IfcGroup *ptr);
        /**
         * @param ptr
         */
        void writeIfcHalfSpaceSolid(IfcHalfSpaceSolid *ptr);
        /**
         * @param ptr
         */
        void writeIfcHeatExchangerType(IfcHeatExchangerType *ptr);
        /**
         * @param enumData
         */
        void writeIfcHeatExchangerTypeEnum(IfcHeatExchangerTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcHumidifierType(IfcHumidifierType *ptr);
        /**
         * @param enumData
         */
        void writeIfcHumidifierTypeEnum(IfcHumidifierTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcIShapeProfileDef(IfcIShapeProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcImageTexture(IfcImageTexture *ptr);
        /**
         * @param ptr
         */
        void writeIfcInventory(IfcInventory *ptr);
        /**
         * @param enumData
         */
        void writeIfcInventoryTypeEnum(IfcInventoryTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcIrregularTimeSeries(IfcIrregularTimeSeries *ptr);
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
         * @param ptr
         */
        void writeIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *ptr);
        /**
         * @param selectData
         */
        void writeIfcValue(IfcValue *selectData);
        /**
         * @param ptr
         */
        void writeIfcJunctionBoxType(IfcJunctionBoxType *ptr);
        /**
         * @param enumData
         */
        void writeIfcJunctionBoxTypeEnum(IfcJunctionBoxTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcLShapeProfileDef(IfcLShapeProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcLaborResource(IfcLaborResource *ptr);
        /**
         * @param ptr
         */
        void writeIfcLampType(IfcLampType *ptr);
        /**
         * @param enumData
         */
        void writeIfcLampTypeEnum(IfcLampTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcLibraryInformation(IfcLibraryInformation *ptr);
        /**
         * @param ptr
         */
        void writeIfcLibraryReference(IfcLibraryReference *ptr);
        /**
         * @param ptr
         */
        void writeIfcLightDistributionData(IfcLightDistributionData *ptr);
        /**
         * @param ptr
         */
        void writeIfcLightFixtureType(IfcLightFixtureType *ptr);
        /**
         * @param enumData
         */
        void writeIfcLightFixtureTypeEnum(IfcLightFixtureTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcLightIntensityDistribution(IfcLightIntensityDistribution *ptr);
        /**
         * @param enumData
         */
        void writeIfcLightDistributionCurveEnum(IfcLightDistributionCurveEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcLightSourceAmbient(IfcLightSourceAmbient *ptr);
        /**
         * @param ptr
         */
        void writeIfcLightSourceDirectional(IfcLightSourceDirectional *ptr);
        /**
         * @param ptr
         */
        void writeIfcLightSourceGoniometric(IfcLightSourceGoniometric *ptr);
        /**
         * @param enumData
         */
        void writeIfcLightEmissionSourceEnum(IfcLightEmissionSourceEnum enumData);
        /**
         * @param selectData
         */
        void writeIfcLightDistributionDataSourceSelect(IfcLightDistributionDataSourceSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcLightSourcePositional(IfcLightSourcePositional *ptr);
        /**
         * @param ptr
         */
        void writeIfcLightSourceSpot(IfcLightSourceSpot *ptr);
        /**
         * @param ptr
         */
        void writeIfcLine(IfcLine *ptr);
        /**
         * @param ptr
         */
        void writeIfcLinearDimension(IfcLinearDimension *ptr);
        /**
         * @param ptr
         */
        void writeIfcLocalPlacement(IfcLocalPlacement *ptr);
        /**
         * @param ptr
         */
        void writeIfcLocalTime(IfcLocalTime *ptr);
        /**
         * @param ptr
         */
        void writeIfcLoop(IfcLoop *ptr);
        /**
         * @param ptr
         */
        void writeIfcMappedItem(IfcMappedItem *ptr);
        /**
         * @param ptr
         */
        void writeIfcMaterial(IfcMaterial *ptr);
        /**
         * @param ptr
         */
        void writeIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *ptr);
        /**
         * @param ptr
         */
        void writeIfcMaterialLayer(IfcMaterialLayer *ptr);
        /**
         * @param ptr
         */
        void writeIfcMaterialLayerSet(IfcMaterialLayerSet *ptr);
        /**
         * @param ptr
         */
        void writeIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *ptr);
        /**
         * @param enumData
         */
        void writeIfcLayerSetDirectionEnum(IfcLayerSetDirectionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDirectionSenseEnum(IfcDirectionSenseEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcMaterialList(IfcMaterialList *ptr);
        /**
         * @param ptr
         */
        void writeIfcMeasureWithUnit(IfcMeasureWithUnit *ptr);
        /**
         * @param ptr
         */
        void writeIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcMechanicalFastener(IfcMechanicalFastener *ptr);
        /**
         * @param ptr
         */
        void writeIfcMechanicalFastenerType(IfcMechanicalFastenerType *ptr);
        /**
         * @param ptr
         */
        void writeIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcMember(IfcMember *ptr);
        /**
         * @param ptr
         */
        void writeIfcMemberType(IfcMemberType *ptr);
        /**
         * @param enumData
         */
        void writeIfcMemberTypeEnum(IfcMemberTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcMetric(IfcMetric *ptr);
        /**
         * @param enumData
         */
        void writeIfcConstraintEnum(IfcConstraintEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcBenchmarkEnum(IfcBenchmarkEnum enumData);
        /**
         * @param selectData
         */
        void writeIfcMetricValueSelect(IfcMetricValueSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcMonetaryUnit(IfcMonetaryUnit *ptr);
        /**
         * @param enumData
         */
        void writeIfcCurrencyEnum(IfcCurrencyEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcMotorConnectionType(IfcMotorConnectionType *ptr);
        /**
         * @param enumData
         */
        void writeIfcMotorConnectionTypeEnum(IfcMotorConnectionTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcMove(IfcMove *ptr);
        /**
         * @param ptr
         */
        void writeIfcObjective(IfcObjective *ptr);
        /**
         * @param enumData
         */
        void writeIfcObjectiveEnum(IfcObjectiveEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcOccupant(IfcOccupant *ptr);
        /**
         * @param enumData
         */
        void writeIfcOccupantTypeEnum(IfcOccupantTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcOffsetCurve2D(IfcOffsetCurve2D *ptr);
        /**
         * @param ptr
         */
        void writeIfcOffsetCurve3D(IfcOffsetCurve3D *ptr);
        /**
         * @param ptr
         */
        void writeIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *ptr);
        /**
         * @param ptr
         */
        void writeIfcOpenShell(IfcOpenShell *ptr);
        /**
         * @param ptr
         */
        void writeIfcOpeningElement(IfcOpeningElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcOrderAction(IfcOrderAction *ptr);
        /**
         * @param ptr
         */
        void writeIfcOrganization(IfcOrganization *ptr);
        /**
         * @param ptr
         */
        void writeIfcOrganizationRelationship(IfcOrganizationRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcOrientedEdge(IfcOrientedEdge *ptr);
        /**
         * @param ptr
         */
        void writeIfcOutletType(IfcOutletType *ptr);
        /**
         * @param enumData
         */
        void writeIfcOutletTypeEnum(IfcOutletTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcOwnerHistory(IfcOwnerHistory *ptr);
        /**
         * @param enumData
         */
        void writeIfcStateEnum(IfcStateEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcChangeActionEnum(IfcChangeActionEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcPath(IfcPath *ptr);
        /**
         * @param ptr
         */
        void writeIfcPerformanceHistory(IfcPerformanceHistory *ptr);
        /**
         * @param ptr
         */
        void writeIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *ptr);
        /**
         * @param enumData
         */
        void writeIfcPermeableCoveringOperationEnum(IfcPermeableCoveringOperationEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcWindowPanelPositionEnum(IfcWindowPanelPositionEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcPermit(IfcPermit *ptr);
        /**
         * @param ptr
         */
        void writeIfcPerson(IfcPerson *ptr);
        /**
         * @param ptr
         */
        void writeIfcPersonAndOrganization(IfcPersonAndOrganization *ptr);
        /**
         * @param ptr
         */
        void writeIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *ptr);
        /**
         * @param ptr
         */
        void writeIfcPile(IfcPile *ptr);
        /**
         * @param enumData
         */
        void writeIfcPileTypeEnum(IfcPileTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcPileConstructionEnum(IfcPileConstructionEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcPipeFittingType(IfcPipeFittingType *ptr);
        /**
         * @param enumData
         */
        void writeIfcPipeFittingTypeEnum(IfcPipeFittingTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcPipeSegmentType(IfcPipeSegmentType *ptr);
        /**
         * @param enumData
         */
        void writeIfcPipeSegmentTypeEnum(IfcPipeSegmentTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcPixelTexture(IfcPixelTexture *ptr);
        /**
         * @param ptr
         */
        void writeIfcPlanarBox(IfcPlanarBox *ptr);
        /**
         * @param ptr
         */
        void writeIfcPlanarExtent(IfcPlanarExtent *ptr);
        /**
         * @param ptr
         */
        void writeIfcPlane(IfcPlane *ptr);
        /**
         * @param ptr
         */
        void writeIfcPlate(IfcPlate *ptr);
        /**
         * @param ptr
         */
        void writeIfcPlateType(IfcPlateType *ptr);
        /**
         * @param enumData
         */
        void writeIfcPlateTypeEnum(IfcPlateTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcPointOnCurve(IfcPointOnCurve *ptr);
        /**
         * @param ptr
         */
        void writeIfcPointOnSurface(IfcPointOnSurface *ptr);
        /**
         * @param ptr
         */
        void writeIfcPolyLoop(IfcPolyLoop *ptr);
        /**
         * @param ptr
         */
        void writeIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *ptr);
        /**
         * @param ptr
         */
        void writeIfcPolyline(IfcPolyline *ptr);
        /**
         * @param ptr
         */
        void writeIfcPostalAddress(IfcPostalAddress *ptr);
        /**
         * @param enumData
         */
        void writeIfcAddressTypeEnum(IfcAddressTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *ptr);
        /**
         * @param ptr
         */
        void writeIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *ptr);
        /**
         * @param ptr
         */
        void writeIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *ptr);
        /**
         * @param ptr
         */
        void writeIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *ptr);
        /**
         * @param selectData
         */
        void writeIfcLayeredItem(IfcLayeredItem *selectData);
        /**
         * @param ptr
         */
        void writeIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *ptr);
        /**
         * @param selectData
         */
        void writeIfcPresentationStyleSelect(IfcPresentationStyleSelect *selectData);
        /**
         * @param enumData
         */
        void writeIfcNullStyle(IfcNullStyle enumData);
        /**
         * @param ptr
         */
        void writeIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *ptr);
        /**
         * @param ptr
         */
        void writeIfcProcedure(IfcProcedure *ptr);
        /**
         * @param enumData
         */
        void writeIfcProcedureTypeEnum(IfcProcedureTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcProductDefinitionShape(IfcProductDefinitionShape *ptr);
        /**
         * @param ptr
         */
        void writeIfcProductRepresentation(IfcProductRepresentation *ptr);
        /**
         * @param ptr
         */
        void writeIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcProject(IfcProject *ptr);
        /**
         * @param ptr
         */
        void writeIfcProjectOrder(IfcProjectOrder *ptr);
        /**
         * @param enumData
         */
        void writeIfcProjectOrderTypeEnum(IfcProjectOrderTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcProjectOrderRecord(IfcProjectOrderRecord *ptr);
        /**
         * @param enumData
         */
        void writeIfcProjectOrderRecordTypeEnum(IfcProjectOrderRecordTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcProjectionCurve(IfcProjectionCurve *ptr);
        /**
         * @param ptr
         */
        void writeIfcProjectionElement(IfcProjectionElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcPropertyBoundedValue(IfcPropertyBoundedValue *ptr);
        /**
         * @param ptr
         */
        void writeIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *ptr);
        /**
         * @param ptr
         */
        void writeIfcPropertyEnumeration(IfcPropertyEnumeration *ptr);
        /**
         * @param ptr
         */
        void writeIfcPropertyListValue(IfcPropertyListValue *ptr);
        /**
         * @param ptr
         */
        void writeIfcPropertyReferenceValue(IfcPropertyReferenceValue *ptr);
        /**
         * @param selectData
         */
        void writeIfcObjectReferenceSelect(IfcObjectReferenceSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcPropertySet(IfcPropertySet *ptr);
        /**
         * @param ptr
         */
        void writeIfcPropertySingleValue(IfcPropertySingleValue *ptr);
        /**
         * @param ptr
         */
        void writeIfcPropertyTableValue(IfcPropertyTableValue *ptr);
        /**
         * @param ptr
         */
        void writeIfcProtectiveDeviceType(IfcProtectiveDeviceType *ptr);
        /**
         * @param enumData
         */
        void writeIfcProtectiveDeviceTypeEnum(IfcProtectiveDeviceTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcProxy(IfcProxy *ptr);
        /**
         * @param enumData
         */
        void writeIfcObjectTypeEnum(IfcObjectTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcPumpType(IfcPumpType *ptr);
        /**
         * @param enumData
         */
        void writeIfcPumpTypeEnum(IfcPumpTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcQuantityArea(IfcQuantityArea *ptr);
        /**
         * @param ptr
         */
        void writeIfcQuantityCount(IfcQuantityCount *ptr);
        /**
         * @param ptr
         */
        void writeIfcQuantityLength(IfcQuantityLength *ptr);
        /**
         * @param ptr
         */
        void writeIfcQuantityTime(IfcQuantityTime *ptr);
        /**
         * @param ptr
         */
        void writeIfcQuantityVolume(IfcQuantityVolume *ptr);
        /**
         * @param ptr
         */
        void writeIfcQuantityWeight(IfcQuantityWeight *ptr);
        /**
         * @param ptr
         */
        void writeIfcRadiusDimension(IfcRadiusDimension *ptr);
        /**
         * @param ptr
         */
        void writeIfcRailing(IfcRailing *ptr);
        /**
         * @param enumData
         */
        void writeIfcRailingTypeEnum(IfcRailingTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcRailingType(IfcRailingType *ptr);
        /**
         * @param ptr
         */
        void writeIfcRamp(IfcRamp *ptr);
        /**
         * @param enumData
         */
        void writeIfcRampTypeEnum(IfcRampTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcRampFlight(IfcRampFlight *ptr);
        /**
         * @param ptr
         */
        void writeIfcRampFlightType(IfcRampFlightType *ptr);
        /**
         * @param enumData
         */
        void writeIfcRampFlightTypeEnum(IfcRampFlightTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcRationalBezierCurve(IfcRationalBezierCurve *ptr);
        /**
         * @param ptr
         */
        void writeIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcRectangleProfileDef(IfcRectangleProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcRectangularPyramid(IfcRectangularPyramid *ptr);
        /**
         * @param ptr
         */
        void writeIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *ptr);
        /**
         * @param ptr
         */
        void writeIfcReferencesValueDocument(IfcReferencesValueDocument *ptr);
        /**
         * @param selectData
         */
        void writeIfcDocumentSelect(IfcDocumentSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcRegularTimeSeries(IfcRegularTimeSeries *ptr);
        /**
         * @param ptr
         */
        void writeIfcReinforcementBarProperties(IfcReinforcementBarProperties *ptr);
        /**
         * @param enumData
         */
        void writeIfcReinforcingBarSurfaceEnum(IfcReinforcingBarSurfaceEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcReinforcingBar(IfcReinforcingBar *ptr);
        /**
         * @param enumData
         */
        void writeIfcReinforcingBarRoleEnum(IfcReinforcingBarRoleEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcReinforcingMesh(IfcReinforcingMesh *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAggregates(IfcRelAggregates *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssignsTasks(IfcRelAssignsTasks *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssignsToActor(IfcRelAssignsToActor *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssignsToControl(IfcRelAssignsToControl *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssignsToGroup(IfcRelAssignsToGroup *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssignsToProcess(IfcRelAssignsToProcess *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssignsToProduct(IfcRelAssignsToProduct *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssignsToResource(IfcRelAssignsToResource *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssociates(IfcRelAssociates *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssociatesApproval(IfcRelAssociatesApproval *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssociatesClassification(IfcRelAssociatesClassification *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssociatesDocument(IfcRelAssociatesDocument *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *ptr);
        /**
         * @param selectData
         */
        void writeIfcLibrarySelect(IfcLibrarySelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *ptr);
        /**
         * @param selectData
         */
        void writeIfcMaterialSelect(IfcMaterialSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *ptr);
        /**
         * @param selectData
         */
        void writeIfcOrientationSelect(IfcOrientationSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcRelConnectsElements(IfcRelConnectsElements *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelConnectsPathElements(IfcRelConnectsPathElements *ptr);
        /**
         * @param enumData
         */
        void writeIfcConnectionTypeEnum(IfcConnectionTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelConnectsPorts(IfcRelConnectsPorts *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *ptr);
        /**
         * @param selectData
         */
        void writeIfcStructuralActivityAssignmentSelect(IfcStructuralActivityAssignmentSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelCoversBldgElements(IfcRelCoversBldgElements *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelCoversSpaces(IfcRelCoversSpaces *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelDefinesByProperties(IfcRelDefinesByProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelDefinesByType(IfcRelDefinesByType *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelFillsElement(IfcRelFillsElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelFlowControlElements(IfcRelFlowControlElements *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelInteractionRequirements(IfcRelInteractionRequirements *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelNests(IfcRelNests *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelOverridesProperties(IfcRelOverridesProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelProjectsElement(IfcRelProjectsElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelSequence(IfcRelSequence *ptr);
        /**
         * @param enumData
         */
        void writeIfcSequenceEnum(IfcSequenceEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcRelServicesBuildings(IfcRelServicesBuildings *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelSpaceBoundary(IfcRelSpaceBoundary *ptr);
        /**
         * @param enumData
         */
        void writeIfcPhysicalOrVirtualEnum(IfcPhysicalOrVirtualEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcInternalOrExternalEnum(IfcInternalOrExternalEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcRelVoidsElement(IfcRelVoidsElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcRelaxation(IfcRelaxation *ptr);
        /**
         * @param ptr
         */
        void writeIfcRepresentation(IfcRepresentation *ptr);
        /**
         * @param ptr
         */
        void writeIfcRepresentationContext(IfcRepresentationContext *ptr);
        /**
         * @param ptr
         */
        void writeIfcRepresentationMap(IfcRepresentationMap *ptr);
        /**
         * @param ptr
         */
        void writeIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *ptr);
        /**
         * @param ptr
         */
        void writeIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *ptr);
        /**
         * @param enumData
         */
        void writeIfcRibPlateDirectionEnum(IfcRibPlateDirectionEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcRightCircularCone(IfcRightCircularCone *ptr);
        /**
         * @param ptr
         */
        void writeIfcRightCircularCylinder(IfcRightCircularCylinder *ptr);
        /**
         * @param ptr
         */
        void writeIfcRoof(IfcRoof *ptr);
        /**
         * @param enumData
         */
        void writeIfcRoofTypeEnum(IfcRoofTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *ptr);
        /**
         * @param ptr
         */
        void writeIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcSIUnit(IfcSIUnit *ptr);
        /**
         * @param enumData
         */
        void writeIfcSIPrefix(IfcSIPrefix enumData);
        /**
         * @param enumData
         */
        void writeIfcSIUnitName(IfcSIUnitName enumData);
        /**
         * @param ptr
         */
        void writeIfcSanitaryTerminalType(IfcSanitaryTerminalType *ptr);
        /**
         * @param enumData
         */
        void writeIfcSanitaryTerminalTypeEnum(IfcSanitaryTerminalTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcScheduleTimeControl(IfcScheduleTimeControl *ptr);
        /**
         * @param ptr
         */
        void writeIfcSectionProperties(IfcSectionProperties *ptr);
        /**
         * @param enumData
         */
        void writeIfcSectionTypeEnum(IfcSectionTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcSectionedSpine(IfcSectionedSpine *ptr);
        /**
         * @param ptr
         */
        void writeIfcSensorType(IfcSensorType *ptr);
        /**
         * @param enumData
         */
        void writeIfcSensorTypeEnum(IfcSensorTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcServiceLife(IfcServiceLife *ptr);
        /**
         * @param enumData
         */
        void writeIfcServiceLifeTypeEnum(IfcServiceLifeTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcServiceLifeFactor(IfcServiceLifeFactor *ptr);
        /**
         * @param enumData
         */
        void writeIfcServiceLifeFactorTypeEnum(IfcServiceLifeFactorTypeEnum enumData);
        /**
         * @param selectData
         */
        void writeIfcMeasureValue(IfcMeasureValue *selectData);
        /**
         * @param ptr
         */
        void writeIfcShapeAspect(IfcShapeAspect *ptr);
        /**
         * @param ptr
         */
        void writeIfcShapeRepresentation(IfcShapeRepresentation *ptr);
        /**
         * @param ptr
         */
        void writeIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *ptr);
        /**
         * @param selectData
         */
        void writeIfcShell(IfcShell *selectData);
        /**
         * @param ptr
         */
        void writeIfcSite(IfcSite *ptr);
        /**
         * @param ptr
         */
        void writeIfcSlab(IfcSlab *ptr);
        /**
         * @param enumData
         */
        void writeIfcSlabTypeEnum(IfcSlabTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcSlabType(IfcSlabType *ptr);
        /**
         * @param ptr
         */
        void writeIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *ptr);
        /**
         * @param ptr
         */
        void writeIfcSoundProperties(IfcSoundProperties *ptr);
        /**
         * @param enumData
         */
        void writeIfcSoundScaleEnum(IfcSoundScaleEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcSoundValue(IfcSoundValue *ptr);
        /**
         * @param ptr
         */
        void writeIfcSpace(IfcSpace *ptr);
        /**
         * @param ptr
         */
        void writeIfcSpaceHeaterType(IfcSpaceHeaterType *ptr);
        /**
         * @param enumData
         */
        void writeIfcSpaceHeaterTypeEnum(IfcSpaceHeaterTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcSpaceProgram(IfcSpaceProgram *ptr);
        /**
         * @param ptr
         */
        void writeIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *ptr);
        /**
         * @param enumData
         */
        void writeIfcThermalLoadSourceEnum(IfcThermalLoadSourceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcThermalLoadTypeEnum(IfcThermalLoadTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcSpaceType(IfcSpaceType *ptr);
        /**
         * @param enumData
         */
        void writeIfcSpaceTypeEnum(IfcSpaceTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcSphere(IfcSphere *ptr);
        /**
         * @param ptr
         */
        void writeIfcStackTerminalType(IfcStackTerminalType *ptr);
        /**
         * @param enumData
         */
        void writeIfcStackTerminalTypeEnum(IfcStackTerminalTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcStair(IfcStair *ptr);
        /**
         * @param enumData
         */
        void writeIfcStairTypeEnum(IfcStairTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcStairFlight(IfcStairFlight *ptr);
        /**
         * @param ptr
         */
        void writeIfcStairFlightType(IfcStairFlightType *ptr);
        /**
         * @param enumData
         */
        void writeIfcStairFlightTypeEnum(IfcStairFlightTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *ptr);
        /**
         * @param enumData
         */
        void writeIfcAnalysisModelTypeEnum(IfcAnalysisModelTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcStructuralCurveConnection(IfcStructuralCurveConnection *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralCurveMember(IfcStructuralCurveMember *ptr);
        /**
         * @param enumData
         */
        void writeIfcStructuralCurveTypeEnum(IfcStructuralCurveTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralLinearAction(IfcStructuralLinearAction *ptr);
        /**
         * @param enumData
         */
        void writeIfcProjectedOrTrueLengthEnum(IfcProjectedOrTrueLengthEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralLoadGroup(IfcStructuralLoadGroup *ptr);
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
         * @param ptr
         */
        void writeIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralPlanarAction(IfcStructuralPlanarAction *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralPointAction(IfcStructuralPointAction *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralPointConnection(IfcStructuralPointConnection *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralPointReaction(IfcStructuralPointReaction *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralProfileProperties(IfcStructuralProfileProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralResultGroup(IfcStructuralResultGroup *ptr);
        /**
         * @param enumData
         */
        void writeIfcAnalysisTheoryTypeEnum(IfcAnalysisTheoryTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *ptr);
        /**
         * @param enumData
         */
        void writeIfcStructuralSurfaceTypeEnum(IfcStructuralSurfaceTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *ptr);
        /**
         * @param ptr
         */
        void writeIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *ptr);
        /**
         * @param ptr
         */
        void writeIfcStyledItem(IfcStyledItem *ptr);
        /**
         * @param ptr
         */
        void writeIfcStyledRepresentation(IfcStyledRepresentation *ptr);
        /**
         * @param ptr
         */
        void writeIfcSubContractResource(IfcSubContractResource *ptr);
        /**
         * @param ptr
         */
        void writeIfcSubedge(IfcSubedge *ptr);
        /**
         * @param ptr
         */
        void writeIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *ptr);
        /**
         * @param ptr
         */
        void writeIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *ptr);
        /**
         * @param ptr
         */
        void writeIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *ptr);
        /**
         * @param ptr
         */
        void writeIfcSurfaceStyle(IfcSurfaceStyle *ptr);
        /**
         * @param enumData
         */
        void writeIfcSurfaceSide(IfcSurfaceSide enumData);
        /**
         * @param selectData
         */
        void writeIfcSurfaceStyleElementSelect(IfcSurfaceStyleElementSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *ptr);
        /**
         * @param ptr
         */
        void writeIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *ptr);
        /**
         * @param ptr
         */
        void writeIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *ptr);
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
         * @param ptr
         */
        void writeIfcSurfaceStyleShading(IfcSurfaceStyleShading *ptr);
        /**
         * @param ptr
         */
        void writeIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *ptr);
        /**
         * @param ptr
         */
        void writeIfcSweptDiskSolid(IfcSweptDiskSolid *ptr);
        /**
         * @param ptr
         */
        void writeIfcSwitchingDeviceType(IfcSwitchingDeviceType *ptr);
        /**
         * @param enumData
         */
        void writeIfcSwitchingDeviceTypeEnum(IfcSwitchingDeviceTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcSymbolStyle(IfcSymbolStyle *ptr);
        /**
         * @param selectData
         */
        void writeIfcSymbolStyleSelect(IfcSymbolStyleSelect *selectData);
        /**
         * @param ptr
         */
        void writeIfcSystem(IfcSystem *ptr);
        /**
         * @param ptr
         */
        void writeIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *ptr);
        /**
         * @param ptr
         */
        void writeIfcTShapeProfileDef(IfcTShapeProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcTable(IfcTable *ptr);
        /**
         * @param ptr
         */
        void writeIfcTableRow(IfcTableRow *ptr);
        /**
         * @param ptr
         */
        void writeIfcTankType(IfcTankType *ptr);
        /**
         * @param enumData
         */
        void writeIfcTankTypeEnum(IfcTankTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcTask(IfcTask *ptr);
        /**
         * @param ptr
         */
        void writeIfcTelecomAddress(IfcTelecomAddress *ptr);
        /**
         * @param ptr
         */
        void writeIfcTendon(IfcTendon *ptr);
        /**
         * @param enumData
         */
        void writeIfcTendonTypeEnum(IfcTendonTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcTendonAnchor(IfcTendonAnchor *ptr);
        /**
         * @param ptr
         */
        void writeIfcTerminatorSymbol(IfcTerminatorSymbol *ptr);
        /**
         * @param ptr
         */
        void writeIfcTextLiteral(IfcTextLiteral *ptr);
        /**
         * @param enumData
         */
        void writeIfcTextPath(IfcTextPath enumData);
        /**
         * @param ptr
         */
        void writeIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *ptr);
        /**
         * @param ptr
         */
        void writeIfcTextStyle(IfcTextStyle *ptr);
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
         * @param ptr
         */
        void writeIfcTextStyleFontModel(IfcTextStyleFontModel *ptr);
        /**
         * @param ptr
         */
        void writeIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *ptr);
        /**
         * @param ptr
         */
        void writeIfcTextStyleTextModel(IfcTextStyleTextModel *ptr);
        /**
         * @param ptr
         */
        void writeIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *ptr);
        /**
         * @param ptr
         */
        void writeIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *ptr);
        /**
         * @param selectData
         */
        void writeIfcSimpleValue(IfcSimpleValue *selectData);
        /**
         * @param ptr
         */
        void writeIfcTextureMap(IfcTextureMap *ptr);
        /**
         * @param ptr
         */
        void writeIfcTextureVertex(IfcTextureVertex *ptr);
        /**
         * @param ptr
         */
        void writeIfcThermalMaterialProperties(IfcThermalMaterialProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *ptr);
        /**
         * @param ptr
         */
        void writeIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *ptr);
        /**
         * @param enumData
         */
        void writeIfcTimeSeriesScheduleTypeEnum(IfcTimeSeriesScheduleTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcTimeSeriesValue(IfcTimeSeriesValue *ptr);
        /**
         * @param ptr
         */
        void writeIfcTopologyRepresentation(IfcTopologyRepresentation *ptr);
        /**
         * @param ptr
         */
        void writeIfcTransformerType(IfcTransformerType *ptr);
        /**
         * @param enumData
         */
        void writeIfcTransformerTypeEnum(IfcTransformerTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcTransportElement(IfcTransportElement *ptr);
        /**
         * @param enumData
         */
        void writeIfcTransportElementTypeEnum(IfcTransportElementTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcTransportElementType(IfcTransportElementType *ptr);
        /**
         * @param ptr
         */
        void writeIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcTrimmedCurve(IfcTrimmedCurve *ptr);
        /**
         * @param selectData
         */
        void writeIfcTrimmingSelect(IfcTrimmingSelect *selectData);
        /**
         * @param enumData
         */
        void writeIfcTrimmingPreference(IfcTrimmingPreference enumData);
        /**
         * @param ptr
         */
        void writeIfcTubeBundleType(IfcTubeBundleType *ptr);
        /**
         * @param enumData
         */
        void writeIfcTubeBundleTypeEnum(IfcTubeBundleTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *ptr);
        /**
         * @param ptr
         */
        void writeIfcTypeObject(IfcTypeObject *ptr);
        /**
         * @param ptr
         */
        void writeIfcTypeProduct(IfcTypeProduct *ptr);
        /**
         * @param ptr
         */
        void writeIfcUShapeProfileDef(IfcUShapeProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcUnitAssignment(IfcUnitAssignment *ptr);
        /**
         * @param ptr
         */
        void writeIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *ptr);
        /**
         * @param enumData
         */
        void writeIfcUnitaryEquipmentTypeEnum(IfcUnitaryEquipmentTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcValveType(IfcValveType *ptr);
        /**
         * @param enumData
         */
        void writeIfcValveTypeEnum(IfcValveTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcVector(IfcVector *ptr);
        /**
         * @param ptr
         */
        void writeIfcVertex(IfcVertex *ptr);
        /**
         * @param ptr
         */
        void writeIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *ptr);
        /**
         * @param ptr
         */
        void writeIfcVertexLoop(IfcVertexLoop *ptr);
        /**
         * @param ptr
         */
        void writeIfcVertexPoint(IfcVertexPoint *ptr);
        /**
         * @param ptr
         */
        void writeIfcVibrationIsolatorType(IfcVibrationIsolatorType *ptr);
        /**
         * @param enumData
         */
        void writeIfcVibrationIsolatorTypeEnum(IfcVibrationIsolatorTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcVirtualElement(IfcVirtualElement *ptr);
        /**
         * @param ptr
         */
        void writeIfcVirtualGridIntersection(IfcVirtualGridIntersection *ptr);
        /**
         * @param ptr
         */
        void writeIfcWall(IfcWall *ptr);
        /**
         * @param ptr
         */
        void writeIfcWallStandardCase(IfcWallStandardCase *ptr);
        /**
         * @param ptr
         */
        void writeIfcWallType(IfcWallType *ptr);
        /**
         * @param enumData
         */
        void writeIfcWallTypeEnum(IfcWallTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcWasteTerminalType(IfcWasteTerminalType *ptr);
        /**
         * @param enumData
         */
        void writeIfcWasteTerminalTypeEnum(IfcWasteTerminalTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcWaterProperties(IfcWaterProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcWindow(IfcWindow *ptr);
        /**
         * @param ptr
         */
        void writeIfcWindowLiningProperties(IfcWindowLiningProperties *ptr);
        /**
         * @param ptr
         */
        void writeIfcWindowPanelProperties(IfcWindowPanelProperties *ptr);
        /**
         * @param enumData
         */
        void writeIfcWindowPanelOperationEnum(IfcWindowPanelOperationEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcWindowStyle(IfcWindowStyle *ptr);
        /**
         * @param enumData
         */
        void writeIfcWindowStyleConstructionEnum(IfcWindowStyleConstructionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcWindowStyleOperationEnum(IfcWindowStyleOperationEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcWorkPlan(IfcWorkPlan *ptr);
        /**
         * @param enumData
         */
        void writeIfcWorkControlTypeEnum(IfcWorkControlTypeEnum enumData);
        /**
         * @param ptr
         */
        void writeIfcWorkSchedule(IfcWorkSchedule *ptr);
        /**
         * @param ptr
         */
        void writeIfcZShapeProfileDef(IfcZShapeProfileDef *ptr);
        /**
         * @param ptr
         */
        void writeIfcZone(IfcZone *ptr);

    };

}

#endif // IFC2X3_SPFWRITER_H
