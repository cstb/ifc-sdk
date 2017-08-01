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

#ifndef IFC2X3_COPYOP_H
#define IFC2X3_COPYOP_H
#include <map>
#include <ifc2x3/Export.h>

#include <ifc2x3/FalseVisitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class ExpressDataSet;
    class Ifc2DCompositeCurve;
    class IfcActionRequest;
    class IfcActor;
    class IfcActorRole;
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
    class IfcBeam;
    class IfcBeamType;
    class IfcBezierCurve;
    class IfcBlobTexture;
    class IfcBlock;
    class IfcBoilerType;
    class IfcBooleanClippingResult;
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
    class IfcChillerType;
    class IfcCircle;
    class IfcCircleHollowProfileDef;
    class IfcCircleProfileDef;
    class IfcClassification;
    class IfcClassificationItem;
    class IfcClassificationItemRelationship;
    class IfcClassificationNotation;
    class IfcClassificationNotationFacet;
    class IfcClassificationReference;
    class IfcClosedShell;
    class IfcCoilType;
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
    class IfcCsgSolid;
    class IfcCurrencyRelationship;
    class IfcCurtainWall;
    class IfcCurtainWallType;
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
    class IfcDistributionElement;
    class IfcDistributionElementType;
    class IfcDistributionFlowElement;
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
    class IfcFillAreaStyleTileSymbolWithStyle;
    class IfcFillAreaStyleTiles;
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
    class IfcShellBasedSurfaceModel;
    class IfcSite;
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
    class IfcSphere;
    class IfcStackTerminalType;
    class IfcStair;
    class IfcStairFlight;
    class IfcStairFlightType;
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
    class IfcSurfaceStyle;
    class IfcSurfaceStyleLighting;
    class IfcSurfaceStyleRefraction;
    class IfcSurfaceStyleRendering;
    class IfcSurfaceStyleShading;
    class IfcSurfaceStyleWithTextures;
    class IfcSweptDiskSolid;
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
    class IfcWorkPlan;
    class IfcWorkSchedule;
    class IfcZShapeProfileDef;
    class IfcZone;

    /**
     * The pure virtual base Copy operator class.
     * 
     */
    class IFC2X3_EXPORT CopyOp : public Step::BaseCopyOp, public FalseVisitor {
    public:
        /**
         */
        CopyOp();
        ~CopyOp() override;
        /**
         * Operator called by entities in their copy methods.
         * 
         * @param obj
         */
        Step::BaseObject *operator()(const Step::BaseObject *obj) const;
        /**
         * @param obj
         */
        bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcActionRequest(IfcActionRequest *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcActor(IfcActor *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcActorRole(IfcActorRole *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcActuatorType(IfcActuatorType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAirTerminalType(IfcAirTerminalType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAlarmType(IfcAlarmType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAngularDimension(IfcAngularDimension *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAnnotation(IfcAnnotation *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSurface(IfcAnnotationSurface *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcApplication(IfcApplication *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcApproval(IfcApproval *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcApprovalRelationship(IfcApprovalRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAsset(IfcAsset *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAxis1Placement(IfcAxis1Placement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBeam(IfcBeam *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBeamType(IfcBeamType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBezierCurve(IfcBezierCurve *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBlobTexture(IfcBlobTexture *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBlock(IfcBlock *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBoilerType(IfcBoilerType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBooleanResult(IfcBooleanResult *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBoundedSurface(IfcBoundedSurface *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBoundingBox(IfcBoundingBox *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBuilding(IfcBuilding *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementPart(IfcBuildingElementPart *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcBuildingStorey(IfcBuildingStorey *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCableSegmentType(IfcCableSegmentType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCalendarDate(IfcCalendarDate *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCartesianPoint(IfcCartesianPoint *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcChillerType(IfcChillerType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCircle(IfcCircle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCircleProfileDef(IfcCircleProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcClassification(IfcClassification *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcClassificationItem(IfcClassificationItem *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcClassificationNotation(IfcClassificationNotation *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcClassificationReference(IfcClassificationReference *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcClosedShell(IfcClosedShell *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCoilType(IfcCoilType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcColourRgb(IfcColourRgb *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcColumn(IfcColumn *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcColumnType(IfcColumnType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcComplexProperty(IfcComplexProperty *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCompositeCurve(IfcCompositeCurve *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCompressorType(IfcCompressorType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCondenserType(IfcCondenserType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCondition(IfcCondition *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConditionCriterion(IfcConditionCriterion *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConstraintRelationship(IfcConstraintRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConstructionProductResource(IfcConstructionProductResource *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcContextDependentUnit(IfcContextDependentUnit *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcControllerType(IfcControllerType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCooledBeamType(IfcCooledBeamType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCoolingTowerType(IfcCoolingTowerType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCostItem(IfcCostItem *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCostSchedule(IfcCostSchedule *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCostValue(IfcCostValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCovering(IfcCovering *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCoveringType(IfcCoveringType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCrewResource(IfcCrewResource *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCsgSolid(IfcCsgSolid *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCurtainWall(IfcCurtainWall *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCurtainWallType(IfcCurtainWallType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCurveStyle(IfcCurveStyle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFont(IfcCurveStyleFont *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDamperType(IfcDamperType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDateAndTime(IfcDateAndTime *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDefinedSymbol(IfcDefinedSymbol *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDerivedUnit(IfcDerivedUnit *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDiameterDimension(IfcDiameterDimension *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurve(IfcDimensionCurve *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDimensionPair(IfcDimensionPair *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDimensionalExponents(IfcDimensionalExponents *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDirection(IfcDirection *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDistributionControlElement(IfcDistributionControlElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDistributionElement(IfcDistributionElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDistributionElementType(IfcDistributionElementType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDistributionPort(IfcDistributionPort *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDocumentInformation(IfcDocumentInformation *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDocumentReference(IfcDocumentReference *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDoor(IfcDoor *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDoorStyle(IfcDoorStyle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDraughtingCallout(IfcDraughtingCallout *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDuctFittingType(IfcDuctFittingType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDuctSegmentType(IfcDuctSegmentType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcDuctSilencerType(IfcDuctSilencerType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEdge(IfcEdge *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEdgeCurve(IfcEdgeCurve *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEdgeLoop(IfcEdgeLoop *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElectricApplianceType(IfcElectricApplianceType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElectricHeaterType(IfcElectricHeaterType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElectricMotorType(IfcElectricMotorType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElectricalCircuit(IfcElectricalCircuit *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElectricalElement(IfcElectricalElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElementAssembly(IfcElementAssembly *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcElementQuantity(IfcElementQuantity *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEllipse(IfcEllipse *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEnergyProperties(IfcEnergyProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEquipmentElement(IfcEquipmentElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEquipmentStandard(IfcEquipmentStandard *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcEvaporatorType(IfcEvaporatorType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFace(IfcFace *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFaceBound(IfcFaceBound *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFaceOuterBound(IfcFaceOuterBound *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFaceSurface(IfcFaceSurface *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFacetedBrep(IfcFacetedBrep *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFanType(IfcFanType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFastener(IfcFastener *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFastenerType(IfcFastenerType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyle(IfcFillAreaStyle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFilterType(IfcFilterType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFlowController(IfcFlowController *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFlowFitting(IfcFlowFitting *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFlowMeterType(IfcFlowMeterType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFlowSegment(IfcFlowSegment *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFlowTerminal(IfcFlowTerminal *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFooting(IfcFooting *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFuelProperties(IfcFuelProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFurnishingElement(IfcFurnishingElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFurnishingElementType(IfcFurnishingElementType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFurnitureStandard(IfcFurnitureStandard *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcFurnitureType(IfcFurnitureType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcGasTerminalType(IfcGasTerminalType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcGeometricSet(IfcGeometricSet *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcGrid(IfcGrid *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcGridAxis(IfcGridAxis *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcGridPlacement(IfcGridPlacement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcGroup(IfcGroup *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcHeatExchangerType(IfcHeatExchangerType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcHumidifierType(IfcHumidifierType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcImageTexture(IfcImageTexture *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcInventory(IfcInventory *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcJunctionBoxType(IfcJunctionBoxType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLaborResource(IfcLaborResource *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLampType(IfcLampType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLibraryInformation(IfcLibraryInformation *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLibraryReference(IfcLibraryReference *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLightDistributionData(IfcLightDistributionData *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLightFixtureType(IfcLightFixtureType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLightSourcePositional(IfcLightSourcePositional *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLightSourceSpot(IfcLightSourceSpot *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLine(IfcLine *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLinearDimension(IfcLinearDimension *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLocalPlacement(IfcLocalPlacement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLocalTime(IfcLocalTime *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcLoop(IfcLoop *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMappedItem(IfcMappedItem *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMaterial(IfcMaterial *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayer(IfcMaterialLayer *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMaterialList(IfcMaterialList *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMechanicalFastener(IfcMechanicalFastener *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMember(IfcMember *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMemberType(IfcMemberType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMetric(IfcMetric *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMonetaryUnit(IfcMonetaryUnit *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMotorConnectionType(IfcMotorConnectionType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcMove(IfcMove *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcObjective(IfcObjective *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOccupant(IfcOccupant *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOpenShell(IfcOpenShell *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOpeningElement(IfcOpeningElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOrderAction(IfcOrderAction *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOrganization(IfcOrganization *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOrientedEdge(IfcOrientedEdge *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOutletType(IfcOutletType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcOwnerHistory(IfcOwnerHistory *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPath(IfcPath *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPerformanceHistory(IfcPerformanceHistory *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPermit(IfcPermit *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPerson(IfcPerson *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPile(IfcPile *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPipeFittingType(IfcPipeFittingType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPipeSegmentType(IfcPipeSegmentType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPixelTexture(IfcPixelTexture *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPlanarBox(IfcPlanarBox *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPlanarExtent(IfcPlanarExtent *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPlane(IfcPlane *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPlate(IfcPlate *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPlateType(IfcPlateType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPointOnCurve(IfcPointOnCurve *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPointOnSurface(IfcPointOnSurface *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPolyLoop(IfcPolyLoop *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPolyline(IfcPolyline *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPostalAddress(IfcPostalAddress *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcProcedure(IfcProcedure *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcProductRepresentation(IfcProductRepresentation *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcProject(IfcProject *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcProjectOrder(IfcProjectOrder *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcProjectionCurve(IfcProjectionCurve *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcProjectionElement(IfcProjectionElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPropertyListValue(IfcPropertyListValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPropertySet(IfcPropertySet *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPropertySingleValue(IfcPropertySingleValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPropertyTableValue(IfcPropertyTableValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcProxy(IfcProxy *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcPumpType(IfcPumpType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcQuantityArea(IfcQuantityArea *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcQuantityCount(IfcQuantityCount *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcQuantityLength(IfcQuantityLength *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcQuantityTime(IfcQuantityTime *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcQuantityVolume(IfcQuantityVolume *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcQuantityWeight(IfcQuantityWeight *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRadiusDimension(IfcRadiusDimension *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRailing(IfcRailing *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRailingType(IfcRailingType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRamp(IfcRamp *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRampFlight(IfcRampFlight *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRampFlightType(IfcRampFlightType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRectangularPyramid(IfcRectangularPyramid *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcReinforcingBar(IfcReinforcingBar *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcReinforcingMesh(IfcReinforcingMesh *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAggregates(IfcRelAggregates *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssociates(IfcRelAssociates *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsElements(IfcRelConnectsElements *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelDefinesByType(IfcRelDefinesByType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelFillsElement(IfcRelFillsElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelNests(IfcRelNests *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelProjectsElement(IfcRelProjectsElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelSequence(IfcRelSequence *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelVoidsElement(IfcRelVoidsElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRelaxation(IfcRelaxation *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRepresentation(IfcRepresentation *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRepresentationContext(IfcRepresentationContext *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRepresentationMap(IfcRepresentationMap *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRightCircularCone(IfcRightCircularCone *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRoof(IfcRoof *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSIUnit(IfcSIUnit *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSectionProperties(IfcSectionProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSectionedSpine(IfcSectionedSpine *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSensorType(IfcSensorType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcServiceLife(IfcServiceLife *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcShapeAspect(IfcShapeAspect *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcShapeRepresentation(IfcShapeRepresentation *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSite(IfcSite *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSlab(IfcSlab *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSlabType(IfcSlabType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSoundProperties(IfcSoundProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSoundValue(IfcSoundValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSpace(IfcSpace *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSpaceProgram(IfcSpaceProgram *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSpaceType(IfcSpaceType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSphere(IfcSphere *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStackTerminalType(IfcStackTerminalType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStair(IfcStair *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStairFlight(IfcStairFlight *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStairFlightType(IfcStairFlightType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointAction(IfcStructuralPointAction *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStyledItem(IfcStyledItem *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcStyledRepresentation(IfcStyledRepresentation *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSubContractResource(IfcSubContractResource *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSubedge(IfcSubedge *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyle(IfcSurfaceStyle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSymbolStyle(IfcSymbolStyle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSystem(IfcSystem *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTable(IfcTable *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTableRow(IfcTableRow *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTankType(IfcTankType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTask(IfcTask *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTelecomAddress(IfcTelecomAddress *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTendon(IfcTendon *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTendonAnchor(IfcTendonAnchor *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTextLiteral(IfcTextLiteral *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTextStyle(IfcTextStyle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTextureMap(IfcTextureMap *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTextureVertex(IfcTextureVertex *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTransformerType(IfcTransformerType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTransportElement(IfcTransportElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTransportElementType(IfcTransportElementType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTrimmedCurve(IfcTrimmedCurve *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTubeBundleType(IfcTubeBundleType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTypeObject(IfcTypeObject *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcTypeProduct(IfcTypeProduct *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcUnitAssignment(IfcUnitAssignment *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcValveType(IfcValveType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcVector(IfcVector *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcVertex(IfcVertex *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcVertexLoop(IfcVertexLoop *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcVertexPoint(IfcVertexPoint *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcVirtualElement(IfcVirtualElement *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcWall(IfcWall *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcWallStandardCase(IfcWallStandardCase *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcWallType(IfcWallType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcWasteTerminalType(IfcWasteTerminalType *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcWaterProperties(IfcWaterProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcWindow(IfcWindow *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcWindowStyle(IfcWindowStyle *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcWorkPlan(IfcWorkPlan *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcWorkSchedule(IfcWorkSchedule *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *obj) override = 0;
        /**
         * @param obj
         */
        bool visitIfcZone(IfcZone *obj) override = 0;
        friend class ExpressDataSet;

        /**
         * @param original
         */
        virtual Step::BaseObject *find(const Step::BaseObject *original) const;
        
    protected:
        /**
         * The reference to the base object to return.
         * 
         */
        Step::RefPtr< Step::BaseObject > _bo;
        /**
         * @param original
         * @param clone
         */
        virtual void associate(const Step::BaseObject *original, Step::BaseObject *clone) const;

        /**
         * Returns 0.
         * 
         */
        virtual ExpressDataSet *getExpressDataSet() const;

    };

    /**
     * The deep copy clones recursively the entities and its attributes.
     * 
     * The clone can be used independently of the original object. In other words, a deep copy contains copies not only of instance variables but, also, of any objects pointed to by reference variables.
     * Here is an example of code performing a deep copy of the Nrf_network_model:
     * @code
     * tas_arm::ExpressDataSet dataset;
     * //Creation of an entity disc and a point p1
     * Step::RefPtr<tas_arm::Mgm_disc> theDisc = dataset.createMgm_disc();
     * Step::RefPtr<tas_arm::Mgm_3d_cartesian_point> p1 = dataset.pointLiteral("p1", 0., 0., 0.);
     * theDisc->setp1(p1);
     * //Deep copy of the Mgm_disc
     * Step::RefPtr<tas_arm::Mgm_disc> clone_deep_obj = dataset.cloneMgm_disc(*theDisc.get(),tas_arm::DeepCopyOp());
     * 
     * @endcode
     * The output is :
     * @code
     *  ...
     *  #1=MGM_DISC($,#2,$,$,$,$,$,$);
     *  #2=MGM_3D_CARTESIAN_POINT('p1',0.0,0.0,0.0,$);
     *  #3=MGM_DISC($,#4,$,$,$,$,$,$);
     *  #4=MGM_3D_CARTESIAN_POINT('p1',0.0,0.0,0.0,$);
     *  ...
     * @endcode
     * The entities #3 and #4 where added with the deep copy. #3's second attribute was also duplicated.
     * 
     */
    class IFC2X3_EXPORT DeepCopyOp : public CopyOp {
    public:
        /**
         */
        DeepCopyOp();
        ~DeepCopyOp() override;
        /**
         * @param obj
         */
        bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActionRequest(IfcActionRequest *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActor(IfcActor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActorRole(IfcActorRole *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActuatorType(IfcActuatorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAirTerminalType(IfcAirTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAlarmType(IfcAlarmType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAngularDimension(IfcAngularDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotation(IfcAnnotation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSurface(IfcAnnotationSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApplication(IfcApplication *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApproval(IfcApproval *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApprovalRelationship(IfcApprovalRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAsset(IfcAsset *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAxis1Placement(IfcAxis1Placement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBeam(IfcBeam *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBeamType(IfcBeamType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBezierCurve(IfcBezierCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBlobTexture(IfcBlobTexture *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBlock(IfcBlock *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoilerType(IfcBoilerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBooleanResult(IfcBooleanResult *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundedSurface(IfcBoundedSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundingBox(IfcBoundingBox *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuilding(IfcBuilding *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementPart(IfcBuildingElementPart *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingStorey(IfcBuildingStorey *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCableSegmentType(IfcCableSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCalendarDate(IfcCalendarDate *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianPoint(IfcCartesianPoint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *obj) override;
        /**
         * @param obj
         */
        bool visitIfcChillerType(IfcChillerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCircle(IfcCircle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCircleProfileDef(IfcCircleProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassification(IfcClassification *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationItem(IfcClassificationItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationNotation(IfcClassificationNotation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationReference(IfcClassificationReference *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClosedShell(IfcClosedShell *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoilType(IfcCoilType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcColourRgb(IfcColourRgb *obj) override;
        /**
         * @param obj
         */
        bool visitIfcColumn(IfcColumn *obj) override;
        /**
         * @param obj
         */
        bool visitIfcColumnType(IfcColumnType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcComplexProperty(IfcComplexProperty *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompositeCurve(IfcCompositeCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompressorType(IfcCompressorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCondenserType(IfcCondenserType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCondition(IfcCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConditionCriterion(IfcConditionCriterion *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstraintRelationship(IfcConstraintRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstructionProductResource(IfcConstructionProductResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcContextDependentUnit(IfcContextDependentUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcControllerType(IfcControllerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCooledBeamType(IfcCooledBeamType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoolingTowerType(IfcCoolingTowerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCostItem(IfcCostItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCostSchedule(IfcCostSchedule *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCostValue(IfcCostValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCovering(IfcCovering *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoveringType(IfcCoveringType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCrewResource(IfcCrewResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCsgSolid(IfcCsgSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurtainWall(IfcCurtainWall *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurtainWallType(IfcCurtainWallType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyle(IfcCurveStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFont(IfcCurveStyleFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDamperType(IfcDamperType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDateAndTime(IfcDateAndTime *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDefinedSymbol(IfcDefinedSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDerivedUnit(IfcDerivedUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDiameterDimension(IfcDiameterDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurve(IfcDimensionCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionPair(IfcDimensionPair *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionalExponents(IfcDimensionalExponents *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDirection(IfcDirection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionControlElement(IfcDistributionControlElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionElement(IfcDistributionElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionElementType(IfcDistributionElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionPort(IfcDistributionPort *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentInformation(IfcDocumentInformation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentReference(IfcDocumentReference *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoor(IfcDoor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoorStyle(IfcDoorStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingCallout(IfcDraughtingCallout *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDuctFittingType(IfcDuctFittingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDuctSegmentType(IfcDuctSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDuctSilencerType(IfcDuctSilencerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEdge(IfcEdge *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEdgeCurve(IfcEdgeCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEdgeLoop(IfcEdgeLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricApplianceType(IfcElectricApplianceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricHeaterType(IfcElectricHeaterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricMotorType(IfcElectricMotorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricalCircuit(IfcElectricalCircuit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricalElement(IfcElectricalElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElementAssembly(IfcElementAssembly *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElementQuantity(IfcElementQuantity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEllipse(IfcEllipse *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEnergyProperties(IfcEnergyProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEquipmentElement(IfcEquipmentElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEquipmentStandard(IfcEquipmentStandard *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEvaporatorType(IfcEvaporatorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFace(IfcFace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceBound(IfcFaceBound *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceOuterBound(IfcFaceOuterBound *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceSurface(IfcFaceSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFacetedBrep(IfcFacetedBrep *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFanType(IfcFanType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFastener(IfcFastener *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFastenerType(IfcFastenerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyle(IfcFillAreaStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFilterType(IfcFilterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowController(IfcFlowController *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowFitting(IfcFlowFitting *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowMeterType(IfcFlowMeterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowSegment(IfcFlowSegment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowTerminal(IfcFlowTerminal *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFooting(IfcFooting *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFuelProperties(IfcFuelProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnishingElement(IfcFurnishingElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnishingElementType(IfcFurnishingElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnitureStandard(IfcFurnitureStandard *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnitureType(IfcFurnitureType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGasTerminalType(IfcGasTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricSet(IfcGeometricSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGrid(IfcGrid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGridAxis(IfcGridAxis *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGridPlacement(IfcGridPlacement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGroup(IfcGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHeatExchangerType(IfcHeatExchangerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHumidifierType(IfcHumidifierType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcImageTexture(IfcImageTexture *obj) override;
        /**
         * @param obj
         */
        bool visitIfcInventory(IfcInventory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *obj) override;
        /**
         * @param obj
         */
        bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcJunctionBoxType(IfcJunctionBoxType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLaborResource(IfcLaborResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLampType(IfcLampType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLibraryInformation(IfcLibraryInformation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLibraryReference(IfcLibraryReference *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightDistributionData(IfcLightDistributionData *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightFixtureType(IfcLightFixtureType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourcePositional(IfcLightSourcePositional *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceSpot(IfcLightSourceSpot *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLine(IfcLine *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLinearDimension(IfcLinearDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLocalPlacement(IfcLocalPlacement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLocalTime(IfcLocalTime *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLoop(IfcLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMappedItem(IfcMappedItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterial(IfcMaterial *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayer(IfcMaterialLayer *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialList(IfcMaterialList *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalFastener(IfcMechanicalFastener *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMember(IfcMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMemberType(IfcMemberType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMetric(IfcMetric *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMonetaryUnit(IfcMonetaryUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMotorConnectionType(IfcMotorConnectionType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMove(IfcMove *obj) override;
        /**
         * @param obj
         */
        bool visitIfcObjective(IfcObjective *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOccupant(IfcOccupant *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOpenShell(IfcOpenShell *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOpeningElement(IfcOpeningElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrderAction(IfcOrderAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrganization(IfcOrganization *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrientedEdge(IfcOrientedEdge *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOutletType(IfcOutletType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOwnerHistory(IfcOwnerHistory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPath(IfcPath *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPerformanceHistory(IfcPerformanceHistory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPermit(IfcPermit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPerson(IfcPerson *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPile(IfcPile *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPipeFittingType(IfcPipeFittingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPipeSegmentType(IfcPipeSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPixelTexture(IfcPixelTexture *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlanarBox(IfcPlanarBox *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlanarExtent(IfcPlanarExtent *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlane(IfcPlane *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlate(IfcPlate *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlateType(IfcPlateType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPointOnCurve(IfcPointOnCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPointOnSurface(IfcPointOnSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPolyLoop(IfcPolyLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPolyline(IfcPolyline *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPostalAddress(IfcPostalAddress *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProcedure(IfcProcedure *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProductRepresentation(IfcProductRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProject(IfcProject *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectOrder(IfcProjectOrder *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectionCurve(IfcProjectionCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectionElement(IfcProjectionElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyListValue(IfcPropertyListValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertySet(IfcPropertySet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertySingleValue(IfcPropertySingleValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyTableValue(IfcPropertyTableValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProxy(IfcProxy *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPumpType(IfcPumpType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityArea(IfcQuantityArea *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityCount(IfcQuantityCount *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityLength(IfcQuantityLength *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityTime(IfcQuantityTime *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityVolume(IfcQuantityVolume *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityWeight(IfcQuantityWeight *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRadiusDimension(IfcRadiusDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRailing(IfcRailing *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRailingType(IfcRailingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRamp(IfcRamp *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRampFlight(IfcRampFlight *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRampFlightType(IfcRampFlightType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangularPyramid(IfcRectangularPyramid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcingBar(IfcReinforcingBar *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcingMesh(IfcReinforcingMesh *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAggregates(IfcRelAggregates *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociates(IfcRelAssociates *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsElements(IfcRelConnectsElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelDefinesByType(IfcRelDefinesByType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelFillsElement(IfcRelFillsElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelNests(IfcRelNests *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelProjectsElement(IfcRelProjectsElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelSequence(IfcRelSequence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelVoidsElement(IfcRelVoidsElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelaxation(IfcRelaxation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRepresentation(IfcRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRepresentationContext(IfcRepresentationContext *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRepresentationMap(IfcRepresentationMap *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRightCircularCone(IfcRightCircularCone *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRoof(IfcRoof *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSIUnit(IfcSIUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSectionProperties(IfcSectionProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSectionedSpine(IfcSectionedSpine *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSensorType(IfcSensorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcServiceLife(IfcServiceLife *obj) override;
        /**
         * @param obj
         */
        bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcShapeAspect(IfcShapeAspect *obj) override;
        /**
         * @param obj
         */
        bool visitIfcShapeRepresentation(IfcShapeRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSite(IfcSite *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSlab(IfcSlab *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSlabType(IfcSlabType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSoundProperties(IfcSoundProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSoundValue(IfcSoundValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpace(IfcSpace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceProgram(IfcSpaceProgram *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceType(IfcSpaceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSphere(IfcSphere *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStackTerminalType(IfcStackTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStair(IfcStair *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStairFlight(IfcStairFlight *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStairFlightType(IfcStairFlightType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointAction(IfcStructuralPointAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStyledItem(IfcStyledItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStyledRepresentation(IfcStyledRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSubContractResource(IfcSubContractResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSubedge(IfcSubedge *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyle(IfcSurfaceStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSymbolStyle(IfcSymbolStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSystem(IfcSystem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTable(IfcTable *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTableRow(IfcTableRow *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTankType(IfcTankType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTask(IfcTask *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTelecomAddress(IfcTelecomAddress *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTendon(IfcTendon *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTendonAnchor(IfcTendonAnchor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextLiteral(IfcTextLiteral *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyle(IfcTextStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextureMap(IfcTextureMap *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextureVertex(IfcTextureVertex *obj) override;
        /**
         * @param obj
         */
        bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTransformerType(IfcTransformerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTransportElement(IfcTransportElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTransportElementType(IfcTransportElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTrimmedCurve(IfcTrimmedCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTubeBundleType(IfcTubeBundleType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTypeObject(IfcTypeObject *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTypeProduct(IfcTypeProduct *obj) override;
        /**
         * @param obj
         */
        bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcUnitAssignment(IfcUnitAssignment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcValveType(IfcValveType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVector(IfcVector *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertex(IfcVertex *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertexLoop(IfcVertexLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertexPoint(IfcVertexPoint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVirtualElement(IfcVirtualElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWall(IfcWall *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWallStandardCase(IfcWallStandardCase *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWallType(IfcWallType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWasteTerminalType(IfcWasteTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWaterProperties(IfcWaterProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindow(IfcWindow *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindowStyle(IfcWindowStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWorkPlan(IfcWorkPlan *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWorkSchedule(IfcWorkSchedule *obj) override;
        /**
         * @param obj
         */
        bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcZone(IfcZone *obj) override;

        /**
         * @param original
         */
        Step::BaseObject *find(const Step::BaseObject *original) const override;
        
    protected:
        /**
         * Map storing Original to clones to break circle relationships loops.
         * 
         */
        mutable std::map<const Step::BaseObject*,Step::BaseObject*> _mapOriginalToClone;
        /**
         * @param original
         * @param clone
         */
        void associate(const Step::BaseObject *original, Step::BaseObject *clone) const override;


    };

    /**
     * The shallow copy clones only the top entity, keeping references to other entities attributes (not duplicating them).
     * 
     * The clone may be associated to data shared by both the original and the copy.
     * Example of usage :
     * @code
     * tas_arm::ExpressDataSet dataset;
     * //Creation of an entity disc and a point p1
     * Step::RefPtr<tas_arm::Mgm_disc> theDisc = dataset.createMgm_disc();
     * Step::RefPtr<tas_arm::Mgm_3d_cartesian_point> p1 = dataset.pointLiteral("p1", 0., 0., 0.);
     * theDisc->setp1(p1);
     * Step::RefPtr<tas_arm::Mgm_disc> clone_shallow_obj = dataset.cloneMgm_disc(*theDisc.get(),tas_arm::ShallowCopyOp());
     * @endcode
     * The output is :
     * @code
     *  ...
     *  #1=MGM_DISC($,#2,$,$,$,$,$,$);
     *  #2=MGM_3D_CARTESIAN_POINT('p1',0.0,0.0,0.0,$)
     *  #3=MGM_DISC($,#2,$,$,$,$,$,$);
     *  ...
     * @endcode
     * Tne entity #3 is the added element with the shallow copy. It's second atttribute is not duplicated.
     * 
     */
    class IFC2X3_EXPORT ShallowCopyOp : public CopyOp {
    public:
        /**
         */
        ShallowCopyOp();
        ~ShallowCopyOp() override;
        /**
         * @param obj
         */
        bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActionRequest(IfcActionRequest *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActor(IfcActor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActorRole(IfcActorRole *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActuatorType(IfcActuatorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAirTerminalType(IfcAirTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAlarmType(IfcAlarmType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAngularDimension(IfcAngularDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotation(IfcAnnotation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSurface(IfcAnnotationSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApplication(IfcApplication *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApproval(IfcApproval *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApprovalRelationship(IfcApprovalRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAsset(IfcAsset *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAxis1Placement(IfcAxis1Placement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBeam(IfcBeam *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBeamType(IfcBeamType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBezierCurve(IfcBezierCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBlobTexture(IfcBlobTexture *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBlock(IfcBlock *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoilerType(IfcBoilerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBooleanResult(IfcBooleanResult *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundedSurface(IfcBoundedSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundingBox(IfcBoundingBox *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuilding(IfcBuilding *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementPart(IfcBuildingElementPart *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingStorey(IfcBuildingStorey *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCableSegmentType(IfcCableSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCalendarDate(IfcCalendarDate *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianPoint(IfcCartesianPoint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *obj) override;
        /**
         * @param obj
         */
        bool visitIfcChillerType(IfcChillerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCircle(IfcCircle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCircleProfileDef(IfcCircleProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassification(IfcClassification *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationItem(IfcClassificationItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationNotation(IfcClassificationNotation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationReference(IfcClassificationReference *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClosedShell(IfcClosedShell *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoilType(IfcCoilType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcColourRgb(IfcColourRgb *obj) override;
        /**
         * @param obj
         */
        bool visitIfcColumn(IfcColumn *obj) override;
        /**
         * @param obj
         */
        bool visitIfcColumnType(IfcColumnType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcComplexProperty(IfcComplexProperty *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompositeCurve(IfcCompositeCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompressorType(IfcCompressorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCondenserType(IfcCondenserType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCondition(IfcCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConditionCriterion(IfcConditionCriterion *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstraintRelationship(IfcConstraintRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstructionProductResource(IfcConstructionProductResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcContextDependentUnit(IfcContextDependentUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcControllerType(IfcControllerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCooledBeamType(IfcCooledBeamType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoolingTowerType(IfcCoolingTowerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCostItem(IfcCostItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCostSchedule(IfcCostSchedule *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCostValue(IfcCostValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCovering(IfcCovering *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoveringType(IfcCoveringType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCrewResource(IfcCrewResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCsgSolid(IfcCsgSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurtainWall(IfcCurtainWall *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurtainWallType(IfcCurtainWallType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyle(IfcCurveStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFont(IfcCurveStyleFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDamperType(IfcDamperType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDateAndTime(IfcDateAndTime *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDefinedSymbol(IfcDefinedSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDerivedUnit(IfcDerivedUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDiameterDimension(IfcDiameterDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurve(IfcDimensionCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionPair(IfcDimensionPair *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionalExponents(IfcDimensionalExponents *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDirection(IfcDirection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionControlElement(IfcDistributionControlElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionElement(IfcDistributionElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionElementType(IfcDistributionElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionPort(IfcDistributionPort *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentInformation(IfcDocumentInformation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentReference(IfcDocumentReference *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoor(IfcDoor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoorStyle(IfcDoorStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingCallout(IfcDraughtingCallout *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDuctFittingType(IfcDuctFittingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDuctSegmentType(IfcDuctSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDuctSilencerType(IfcDuctSilencerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEdge(IfcEdge *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEdgeCurve(IfcEdgeCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEdgeLoop(IfcEdgeLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricApplianceType(IfcElectricApplianceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricHeaterType(IfcElectricHeaterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricMotorType(IfcElectricMotorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricalCircuit(IfcElectricalCircuit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricalElement(IfcElectricalElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElementAssembly(IfcElementAssembly *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElementQuantity(IfcElementQuantity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEllipse(IfcEllipse *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEnergyProperties(IfcEnergyProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEquipmentElement(IfcEquipmentElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEquipmentStandard(IfcEquipmentStandard *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEvaporatorType(IfcEvaporatorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFace(IfcFace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceBound(IfcFaceBound *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceOuterBound(IfcFaceOuterBound *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceSurface(IfcFaceSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFacetedBrep(IfcFacetedBrep *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFanType(IfcFanType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFastener(IfcFastener *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFastenerType(IfcFastenerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyle(IfcFillAreaStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFilterType(IfcFilterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowController(IfcFlowController *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowFitting(IfcFlowFitting *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowMeterType(IfcFlowMeterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowSegment(IfcFlowSegment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowTerminal(IfcFlowTerminal *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFooting(IfcFooting *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFuelProperties(IfcFuelProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnishingElement(IfcFurnishingElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnishingElementType(IfcFurnishingElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnitureStandard(IfcFurnitureStandard *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnitureType(IfcFurnitureType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGasTerminalType(IfcGasTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricSet(IfcGeometricSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGrid(IfcGrid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGridAxis(IfcGridAxis *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGridPlacement(IfcGridPlacement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGroup(IfcGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHeatExchangerType(IfcHeatExchangerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHumidifierType(IfcHumidifierType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcImageTexture(IfcImageTexture *obj) override;
        /**
         * @param obj
         */
        bool visitIfcInventory(IfcInventory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *obj) override;
        /**
         * @param obj
         */
        bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcJunctionBoxType(IfcJunctionBoxType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLaborResource(IfcLaborResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLampType(IfcLampType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLibraryInformation(IfcLibraryInformation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLibraryReference(IfcLibraryReference *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightDistributionData(IfcLightDistributionData *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightFixtureType(IfcLightFixtureType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourcePositional(IfcLightSourcePositional *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceSpot(IfcLightSourceSpot *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLine(IfcLine *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLinearDimension(IfcLinearDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLocalPlacement(IfcLocalPlacement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLocalTime(IfcLocalTime *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLoop(IfcLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMappedItem(IfcMappedItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterial(IfcMaterial *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayer(IfcMaterialLayer *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialList(IfcMaterialList *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalFastener(IfcMechanicalFastener *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMember(IfcMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMemberType(IfcMemberType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMetric(IfcMetric *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMonetaryUnit(IfcMonetaryUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMotorConnectionType(IfcMotorConnectionType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMove(IfcMove *obj) override;
        /**
         * @param obj
         */
        bool visitIfcObjective(IfcObjective *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOccupant(IfcOccupant *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOpenShell(IfcOpenShell *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOpeningElement(IfcOpeningElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrderAction(IfcOrderAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrganization(IfcOrganization *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrientedEdge(IfcOrientedEdge *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOutletType(IfcOutletType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOwnerHistory(IfcOwnerHistory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPath(IfcPath *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPerformanceHistory(IfcPerformanceHistory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPermit(IfcPermit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPerson(IfcPerson *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPile(IfcPile *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPipeFittingType(IfcPipeFittingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPipeSegmentType(IfcPipeSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPixelTexture(IfcPixelTexture *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlanarBox(IfcPlanarBox *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlanarExtent(IfcPlanarExtent *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlane(IfcPlane *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlate(IfcPlate *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlateType(IfcPlateType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPointOnCurve(IfcPointOnCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPointOnSurface(IfcPointOnSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPolyLoop(IfcPolyLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPolyline(IfcPolyline *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPostalAddress(IfcPostalAddress *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProcedure(IfcProcedure *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProductRepresentation(IfcProductRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProject(IfcProject *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectOrder(IfcProjectOrder *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectionCurve(IfcProjectionCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectionElement(IfcProjectionElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyListValue(IfcPropertyListValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertySet(IfcPropertySet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertySingleValue(IfcPropertySingleValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyTableValue(IfcPropertyTableValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProxy(IfcProxy *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPumpType(IfcPumpType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityArea(IfcQuantityArea *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityCount(IfcQuantityCount *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityLength(IfcQuantityLength *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityTime(IfcQuantityTime *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityVolume(IfcQuantityVolume *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityWeight(IfcQuantityWeight *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRadiusDimension(IfcRadiusDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRailing(IfcRailing *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRailingType(IfcRailingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRamp(IfcRamp *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRampFlight(IfcRampFlight *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRampFlightType(IfcRampFlightType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangularPyramid(IfcRectangularPyramid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcingBar(IfcReinforcingBar *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcingMesh(IfcReinforcingMesh *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAggregates(IfcRelAggregates *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociates(IfcRelAssociates *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsElements(IfcRelConnectsElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelDefinesByType(IfcRelDefinesByType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelFillsElement(IfcRelFillsElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelNests(IfcRelNests *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelProjectsElement(IfcRelProjectsElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelSequence(IfcRelSequence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelVoidsElement(IfcRelVoidsElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelaxation(IfcRelaxation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRepresentation(IfcRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRepresentationContext(IfcRepresentationContext *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRepresentationMap(IfcRepresentationMap *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRightCircularCone(IfcRightCircularCone *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRoof(IfcRoof *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSIUnit(IfcSIUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSectionProperties(IfcSectionProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSectionedSpine(IfcSectionedSpine *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSensorType(IfcSensorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcServiceLife(IfcServiceLife *obj) override;
        /**
         * @param obj
         */
        bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcShapeAspect(IfcShapeAspect *obj) override;
        /**
         * @param obj
         */
        bool visitIfcShapeRepresentation(IfcShapeRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSite(IfcSite *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSlab(IfcSlab *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSlabType(IfcSlabType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSoundProperties(IfcSoundProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSoundValue(IfcSoundValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpace(IfcSpace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceProgram(IfcSpaceProgram *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceType(IfcSpaceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSphere(IfcSphere *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStackTerminalType(IfcStackTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStair(IfcStair *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStairFlight(IfcStairFlight *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStairFlightType(IfcStairFlightType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointAction(IfcStructuralPointAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStyledItem(IfcStyledItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStyledRepresentation(IfcStyledRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSubContractResource(IfcSubContractResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSubedge(IfcSubedge *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyle(IfcSurfaceStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSymbolStyle(IfcSymbolStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSystem(IfcSystem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTable(IfcTable *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTableRow(IfcTableRow *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTankType(IfcTankType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTask(IfcTask *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTelecomAddress(IfcTelecomAddress *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTendon(IfcTendon *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTendonAnchor(IfcTendonAnchor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextLiteral(IfcTextLiteral *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyle(IfcTextStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextureMap(IfcTextureMap *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextureVertex(IfcTextureVertex *obj) override;
        /**
         * @param obj
         */
        bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTransformerType(IfcTransformerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTransportElement(IfcTransportElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTransportElementType(IfcTransportElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTrimmedCurve(IfcTrimmedCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTubeBundleType(IfcTubeBundleType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTypeObject(IfcTypeObject *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTypeProduct(IfcTypeProduct *obj) override;
        /**
         * @param obj
         */
        bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcUnitAssignment(IfcUnitAssignment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcValveType(IfcValveType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVector(IfcVector *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertex(IfcVertex *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertexLoop(IfcVertexLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertexPoint(IfcVertexPoint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVirtualElement(IfcVirtualElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWall(IfcWall *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWallStandardCase(IfcWallStandardCase *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWallType(IfcWallType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWasteTerminalType(IfcWasteTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWaterProperties(IfcWaterProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindow(IfcWindow *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindowStyle(IfcWindowStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWorkPlan(IfcWorkPlan *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWorkSchedule(IfcWorkSchedule *obj) override;
        /**
         * @param obj
         */
        bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcZone(IfcZone *obj) override;

    };

    /**
     * Returns the reparent to ExpressDataSet.
     * 
     * The clone can be used independently of the original object. In other words, a deep copy contains copies not only of instance variables but, also, of any objects pointed to by reference variables.
     * Here is an example of code performing a deep copy of the Nrf_network_model:
     * @code
     * tas_arm::ExpressDataSet dataset;
     * //Creation of an entity disc and a point p1
     * Step::RefPtr<tas_arm::Mgm_disc> theDisc = dataset.createMgm_disc();
     * Step::RefPtr<tas_arm::Mgm_3d_cartesian_point> p1 = dataset.pointLiteral("p1", 0., 0., 0.);
     * theDisc->setp1(p1);
     * tas_arm::ExpressDataSet copy_dataset;
     * Step::RefPtr< tas_arm::Mgm_disc > reparent_obj = dataset.cloneMgm_disc(*theDisc.get(),ReparentCopyOp(&copy_dataset));
     * @endcode
     * In this example, with the reparent copy the disc will be attached to the copy_dataset and not anymore to the entity dataset.
     * 
     */
    class IFC2X3_EXPORT ReparentCopyOp : public DeepCopyOp {
    public:
        /**
         * @param dataset
         */
        ReparentCopyOp(ExpressDataSet *dataset);
        ~ReparentCopyOp() override;
        /**
         * @param obj
         */
        bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActionRequest(IfcActionRequest *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActor(IfcActor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActorRole(IfcActorRole *obj) override;
        /**
         * @param obj
         */
        bool visitIfcActuatorType(IfcActuatorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAirTerminalType(IfcAirTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAlarmType(IfcAlarmType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAngularDimension(IfcAngularDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotation(IfcAnnotation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSurface(IfcAnnotationSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApplication(IfcApplication *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApproval(IfcApproval *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcApprovalRelationship(IfcApprovalRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAsset(IfcAsset *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAxis1Placement(IfcAxis1Placement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBeam(IfcBeam *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBeamType(IfcBeamType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBezierCurve(IfcBezierCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBlobTexture(IfcBlobTexture *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBlock(IfcBlock *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoilerType(IfcBoilerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBooleanResult(IfcBooleanResult *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundedSurface(IfcBoundedSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoundingBox(IfcBoundingBox *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuilding(IfcBuilding *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementPart(IfcBuildingElementPart *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcBuildingStorey(IfcBuildingStorey *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCableSegmentType(IfcCableSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCalendarDate(IfcCalendarDate *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianPoint(IfcCartesianPoint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *obj) override;
        /**
         * @param obj
         */
        bool visitIfcChillerType(IfcChillerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCircle(IfcCircle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCircleProfileDef(IfcCircleProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassification(IfcClassification *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationItem(IfcClassificationItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationNotation(IfcClassificationNotation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClassificationReference(IfcClassificationReference *obj) override;
        /**
         * @param obj
         */
        bool visitIfcClosedShell(IfcClosedShell *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoilType(IfcCoilType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcColourRgb(IfcColourRgb *obj) override;
        /**
         * @param obj
         */
        bool visitIfcColumn(IfcColumn *obj) override;
        /**
         * @param obj
         */
        bool visitIfcColumnType(IfcColumnType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcComplexProperty(IfcComplexProperty *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompositeCurve(IfcCompositeCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCompressorType(IfcCompressorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCondenserType(IfcCondenserType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCondition(IfcCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConditionCriterion(IfcConditionCriterion *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstraintRelationship(IfcConstraintRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConstructionProductResource(IfcConstructionProductResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcContextDependentUnit(IfcContextDependentUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcControllerType(IfcControllerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCooledBeamType(IfcCooledBeamType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoolingTowerType(IfcCoolingTowerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCostItem(IfcCostItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCostSchedule(IfcCostSchedule *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCostValue(IfcCostValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCovering(IfcCovering *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCoveringType(IfcCoveringType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCrewResource(IfcCrewResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCsgSolid(IfcCsgSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurtainWall(IfcCurtainWall *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurtainWallType(IfcCurtainWallType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyle(IfcCurveStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFont(IfcCurveStyleFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *obj) override;
        /**
         * @param obj
         */
        bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDamperType(IfcDamperType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDateAndTime(IfcDateAndTime *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDefinedSymbol(IfcDefinedSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDerivedUnit(IfcDerivedUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDiameterDimension(IfcDiameterDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurve(IfcDimensionCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionPair(IfcDimensionPair *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDimensionalExponents(IfcDimensionalExponents *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDirection(IfcDirection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionControlElement(IfcDistributionControlElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionElement(IfcDistributionElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionElementType(IfcDistributionElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDistributionPort(IfcDistributionPort *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentInformation(IfcDocumentInformation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDocumentReference(IfcDocumentReference *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoor(IfcDoor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDoorStyle(IfcDoorStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingCallout(IfcDraughtingCallout *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDuctFittingType(IfcDuctFittingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDuctSegmentType(IfcDuctSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcDuctSilencerType(IfcDuctSilencerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEdge(IfcEdge *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEdgeCurve(IfcEdgeCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEdgeLoop(IfcEdgeLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricApplianceType(IfcElectricApplianceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricHeaterType(IfcElectricHeaterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricMotorType(IfcElectricMotorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricalCircuit(IfcElectricalCircuit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElectricalElement(IfcElectricalElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElementAssembly(IfcElementAssembly *obj) override;
        /**
         * @param obj
         */
        bool visitIfcElementQuantity(IfcElementQuantity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEllipse(IfcEllipse *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEnergyProperties(IfcEnergyProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEquipmentElement(IfcEquipmentElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEquipmentStandard(IfcEquipmentStandard *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcEvaporatorType(IfcEvaporatorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFace(IfcFace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceBound(IfcFaceBound *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceOuterBound(IfcFaceOuterBound *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFaceSurface(IfcFaceSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFacetedBrep(IfcFacetedBrep *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFanType(IfcFanType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFastener(IfcFastener *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFastenerType(IfcFastenerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyle(IfcFillAreaStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFilterType(IfcFilterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowController(IfcFlowController *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowFitting(IfcFlowFitting *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowMeterType(IfcFlowMeterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowSegment(IfcFlowSegment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowTerminal(IfcFlowTerminal *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFooting(IfcFooting *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFuelProperties(IfcFuelProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnishingElement(IfcFurnishingElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnishingElementType(IfcFurnishingElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnitureStandard(IfcFurnitureStandard *obj) override;
        /**
         * @param obj
         */
        bool visitIfcFurnitureType(IfcFurnitureType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGasTerminalType(IfcGasTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGeometricSet(IfcGeometricSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGrid(IfcGrid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGridAxis(IfcGridAxis *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGridPlacement(IfcGridPlacement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcGroup(IfcGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHeatExchangerType(IfcHeatExchangerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHumidifierType(IfcHumidifierType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcImageTexture(IfcImageTexture *obj) override;
        /**
         * @param obj
         */
        bool visitIfcInventory(IfcInventory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *obj) override;
        /**
         * @param obj
         */
        bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcJunctionBoxType(IfcJunctionBoxType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLaborResource(IfcLaborResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLampType(IfcLampType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLibraryInformation(IfcLibraryInformation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLibraryReference(IfcLibraryReference *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightDistributionData(IfcLightDistributionData *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightFixtureType(IfcLightFixtureType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourcePositional(IfcLightSourcePositional *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLightSourceSpot(IfcLightSourceSpot *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLine(IfcLine *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLinearDimension(IfcLinearDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLocalPlacement(IfcLocalPlacement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLocalTime(IfcLocalTime *obj) override;
        /**
         * @param obj
         */
        bool visitIfcLoop(IfcLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMappedItem(IfcMappedItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterial(IfcMaterial *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayer(IfcMaterialLayer *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMaterialList(IfcMaterialList *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalFastener(IfcMechanicalFastener *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMember(IfcMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMemberType(IfcMemberType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMetric(IfcMetric *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMonetaryUnit(IfcMonetaryUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMotorConnectionType(IfcMotorConnectionType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcMove(IfcMove *obj) override;
        /**
         * @param obj
         */
        bool visitIfcObjective(IfcObjective *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOccupant(IfcOccupant *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOpenShell(IfcOpenShell *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOpeningElement(IfcOpeningElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrderAction(IfcOrderAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrganization(IfcOrganization *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOrientedEdge(IfcOrientedEdge *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOutletType(IfcOutletType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcOwnerHistory(IfcOwnerHistory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPath(IfcPath *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPerformanceHistory(IfcPerformanceHistory *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPermit(IfcPermit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPerson(IfcPerson *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPile(IfcPile *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPipeFittingType(IfcPipeFittingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPipeSegmentType(IfcPipeSegmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPixelTexture(IfcPixelTexture *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlanarBox(IfcPlanarBox *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlanarExtent(IfcPlanarExtent *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlane(IfcPlane *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlate(IfcPlate *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPlateType(IfcPlateType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPointOnCurve(IfcPointOnCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPointOnSurface(IfcPointOnSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPolyLoop(IfcPolyLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPolyline(IfcPolyline *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPostalAddress(IfcPostalAddress *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProcedure(IfcProcedure *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProductRepresentation(IfcProductRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProject(IfcProject *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectOrder(IfcProjectOrder *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectionCurve(IfcProjectionCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProjectionElement(IfcProjectionElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyListValue(IfcPropertyListValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertySet(IfcPropertySet *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertySingleValue(IfcPropertySingleValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPropertyTableValue(IfcPropertyTableValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcProxy(IfcProxy *obj) override;
        /**
         * @param obj
         */
        bool visitIfcPumpType(IfcPumpType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityArea(IfcQuantityArea *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityCount(IfcQuantityCount *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityLength(IfcQuantityLength *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityTime(IfcQuantityTime *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityVolume(IfcQuantityVolume *obj) override;
        /**
         * @param obj
         */
        bool visitIfcQuantityWeight(IfcQuantityWeight *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRadiusDimension(IfcRadiusDimension *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRailing(IfcRailing *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRailingType(IfcRailingType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRamp(IfcRamp *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRampFlight(IfcRampFlight *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRampFlightType(IfcRampFlightType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangularPyramid(IfcRectangularPyramid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcingBar(IfcReinforcingBar *obj) override;
        /**
         * @param obj
         */
        bool visitIfcReinforcingMesh(IfcReinforcingMesh *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAggregates(IfcRelAggregates *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociates(IfcRelAssociates *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsElements(IfcRelConnectsElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelDefinesByType(IfcRelDefinesByType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelFillsElement(IfcRelFillsElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelNests(IfcRelNests *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelProjectsElement(IfcRelProjectsElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelSequence(IfcRelSequence *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelVoidsElement(IfcRelVoidsElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRelaxation(IfcRelaxation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRepresentation(IfcRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRepresentationContext(IfcRepresentationContext *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRepresentationMap(IfcRepresentationMap *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRightCircularCone(IfcRightCircularCone *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRoof(IfcRoof *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *obj) override;
        /**
         * @param obj
         */
        bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSIUnit(IfcSIUnit *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSectionProperties(IfcSectionProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSectionedSpine(IfcSectionedSpine *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSensorType(IfcSensorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcServiceLife(IfcServiceLife *obj) override;
        /**
         * @param obj
         */
        bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcShapeAspect(IfcShapeAspect *obj) override;
        /**
         * @param obj
         */
        bool visitIfcShapeRepresentation(IfcShapeRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSite(IfcSite *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSlab(IfcSlab *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSlabType(IfcSlabType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSoundProperties(IfcSoundProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSoundValue(IfcSoundValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpace(IfcSpace *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceProgram(IfcSpaceProgram *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSpaceType(IfcSpaceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSphere(IfcSphere *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStackTerminalType(IfcStackTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStair(IfcStair *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStairFlight(IfcStairFlight *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStairFlightType(IfcStairFlightType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointAction(IfcStructuralPointAction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStyledItem(IfcStyledItem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcStyledRepresentation(IfcStyledRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSubContractResource(IfcSubContractResource *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSubedge(IfcSubedge *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyle(IfcSurfaceStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSymbolStyle(IfcSymbolStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSystem(IfcSystem *obj) override;
        /**
         * @param obj
         */
        bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTable(IfcTable *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTableRow(IfcTableRow *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTankType(IfcTankType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTask(IfcTask *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTelecomAddress(IfcTelecomAddress *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTendon(IfcTendon *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTendonAnchor(IfcTendonAnchor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextLiteral(IfcTextLiteral *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyle(IfcTextStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextureMap(IfcTextureMap *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTextureVertex(IfcTextureVertex *obj) override;
        /**
         * @param obj
         */
        bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTransformerType(IfcTransformerType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTransportElement(IfcTransportElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTransportElementType(IfcTransportElementType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTrimmedCurve(IfcTrimmedCurve *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTubeBundleType(IfcTubeBundleType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTypeObject(IfcTypeObject *obj) override;
        /**
         * @param obj
         */
        bool visitIfcTypeProduct(IfcTypeProduct *obj) override;
        /**
         * @param obj
         */
        bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcUnitAssignment(IfcUnitAssignment *obj) override;
        /**
         * @param obj
         */
        bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcValveType(IfcValveType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVector(IfcVector *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertex(IfcVertex *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertexLoop(IfcVertexLoop *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVertexPoint(IfcVertexPoint *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVirtualElement(IfcVirtualElement *obj) override;
        /**
         * @param obj
         */
        bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWall(IfcWall *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWallStandardCase(IfcWallStandardCase *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWallType(IfcWallType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWasteTerminalType(IfcWasteTerminalType *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWaterProperties(IfcWaterProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindow(IfcWindow *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWindowStyle(IfcWindowStyle *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWorkPlan(IfcWorkPlan *obj) override;
        /**
         * @param obj
         */
        bool visitIfcWorkSchedule(IfcWorkSchedule *obj) override;
        /**
         * @param obj
         */
        bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *obj) override;
        /**
         * @param obj
         */
        bool visitIfcZone(IfcZone *obj) override;

    protected:
        /**
         * A pointer to the ExpressDataSet to reparetn to.
         * 
         */
        ExpressDataSet *_dataset;
        /**
         */
        ExpressDataSet *getExpressDataSet() const override;

    };

}

#endif // IFC2X3_COPYOP_H
